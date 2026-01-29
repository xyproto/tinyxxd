use std::env;
use std::fs::{File, OpenOptions};
use std::io::{self, BufReader, BufWriter, Read, Seek, SeekFrom, Write};
use std::process::exit;

const COLS: usize = 256;
const LLENP1: usize = 39 + 2 + 13 * COLS + (COLS - 1) + 2 + 12 * COLS + 2;
const INPUT_BUFFER_SIZE: usize = 4096;
const VERSION: &str = "tinyxxd 1.3.8";

#[derive(Clone, Copy, PartialEq)]
enum ColorDigit {
    Red = b'1' as isize,
    Green = b'2' as isize,
    Yellow = b'3' as isize,
    Blue = b'4' as isize,
    White = b'7' as isize,
}

#[derive(Clone, Copy, PartialEq)]
enum HexType {
    Normal,
    Bits,
    CInclude,
    LittleEndian,
    PostScript,
    BitsAndCInclude,
}

struct Xxd {
    input: Box<dyn Read>,
    output: Box<dyn Write>,
    program_name: String,
    decimal_format_string: &'static str,
    hex_digits: &'static [u8; 16],
    varname: Option<String>,
    input_filename: Option<String>,
    seekoff: i64,
    displayoff: u64,
    length: i64,
    cols: usize,
    octspergrp: i32,
    autoskip: bool,
    colsgiven: bool,
    revert: bool,
    color: bool,
    ascii: bool,
    capitalize: bool,
    uppercase_hex: bool,
    negseek: bool,
    relative_seek: bool,
    input_buffer: [u8; INPUT_BUFFER_SIZE],
    input_buffer_pos: usize,
    input_buffer_len: usize,
}

const ETOA64: [u8; 192] = [
    0o040, 0o240, 0o241, 0o242, 0o243, 0o244, 0o245, 0o246,
    0o247, 0o250, 0o325, 0o056, 0o074, 0o050, 0o053, 0o174,
    0o046, 0o251, 0o252, 0o253, 0o254, 0o255, 0o256, 0o257,
    0o260, 0o261, 0o041, 0o044, 0o052, 0o051, 0o073, 0o176,
    0o055, 0o057, 0o262, 0o263, 0o264, 0o265, 0o266, 0o267,
    0o270, 0o271, 0o313, 0o054, 0o045, 0o137, 0o076, 0o077,
    0o272, 0o273, 0o274, 0o275, 0o276, 0o277, 0o300, 0o301,
    0o302, 0o140, 0o072, 0o043, 0o100, 0o047, 0o075, 0o042,
    0o303, 0o141, 0o142, 0o143, 0o144, 0o145, 0o146, 0o147,
    0o150, 0o151, 0o304, 0o305, 0o306, 0o307, 0o310, 0o311,
    0o312, 0o152, 0o153, 0o154, 0o155, 0o156, 0o157, 0o160,
    0o161, 0o162, 0o136, 0o314, 0o315, 0o316, 0o317, 0o320,
    0o321, 0o345, 0o163, 0o164, 0o165, 0o166, 0o167, 0o170,
    0o171, 0o172, 0o322, 0o323, 0o324, 0o133, 0o326, 0o327,
    0o330, 0o331, 0o332, 0o333, 0o334, 0o335, 0o336, 0o337,
    0o340, 0o341, 0o342, 0o343, 0o344, 0o135, 0o346, 0o347,
    0o173, 0o101, 0o102, 0o103, 0o104, 0o105, 0o106, 0o107,
    0o110, 0o111, 0o350, 0o351, 0o352, 0o353, 0o354, 0o355,
    0o175, 0o112, 0o113, 0o114, 0o115, 0o116, 0o117, 0o120,
    0o121, 0o122, 0o356, 0o357, 0o360, 0o361, 0o362, 0o363,
    0o134, 0o237, 0o123, 0o124, 0o125, 0o126, 0o127, 0o130,
    0o131, 0o132, 0o364, 0o365, 0o366, 0o367, 0o370, 0o371,
    0o060, 0o061, 0o062, 0o063, 0o064, 0o065, 0o066, 0o067,
    0o070, 0o071, 0o372, 0o373, 0o374, 0o375, 0o376, 0o377,
];

const HEX_LOWER: [u8; 16] = *b"0123456789abcdef";
const HEX_UPPER: [u8; 16] = *b"0123456789ABCDEF";

fn parse_hex_digit(c: u8) -> i32 {
    match c {
        b'0'..=b'9' => (c - b'0') as i32,
        b'a'..=b'f' => (c - b'a' + 10) as i32,
        b'A'..=b'F' => (c - b'A' + 10) as i32,
        _ => -1,
    }
}

fn parse_binary_digit(c: u8) -> i32 {
    if c == b'0' || c == b'1' {
        (c - b'0') as i32
    } else {
        -1
    }
}

fn exit_with_usage(program_name: &str) -> ! {
    eprintln!(
        "Usage:\n       {} [options] [infile [outfile]]\n    or\n       {} -r [-s [-]offset] [-c cols] [-ps] [infile [outfile]]\nOptions:\n    -a          toggle autoskip: A single '*' replaces nul-lines. Default off.\n    -b          binary digit dump (incompatible with -ps). Default hex.\n    -C          capitalize variable names in C include file style (-i).\n    -c cols     format <cols> octets per line. Default 16 (-i: 12, -ps: 30).\n    -E          show characters in EBCDIC. Default ASCII.\n    -e          little-endian dump (incompatible with -ps,-i,-r).\n    -g bytes    number of octets per group in normal output. Default 2 (-e: 4).\n    -h          print this summary.\n    -i          output in C include file style.\n    -l len      stop after <len> octets.\n    -n name     set the variable name used in C include output (-i).\n    -o off      add <off> to the displayed file position.\n    -ps         output in postscript plain hexdump style.\n    -r          reverse operation: convert (or patch) hexdump into binary.\n    -r -s off   revert with <off> added to file positions found in hexdump.\n    -d          show offset in decimal instead of hex.\n    -s [+][-]seek  start at <seek> bytes abs. (or +: rel.) infile offset.\n    -u          use upper case hex letters.\n    -R when     colorize the output; <when> can be 'always', 'auto' or 'never'. Default: 'auto'.\n    -v          show version: \"{}\".",
        program_name, program_name, VERSION
    );
    exit(1);
}

fn exit_with_error(exit_code: i32, message: Option<&str>, program_name: &str) -> ! {
    if let Some(msg) = message {
        eprintln!("{}: {}", program_name, msg);
    } else {
        eprintln!("{}: I/O error", program_name);
    }
    exit(exit_code);
}

fn exit_with_col_error(program_name: &str) -> ! {
    eprintln!("{}: invalid number of columns (max. {}).", program_name, COLS);
    exit(1);
}

impl Xxd {
    fn getc(&mut self) -> Option<u8> {
        if self.input_buffer_pos >= self.input_buffer_len {
            match self.input.read(&mut self.input_buffer) {
                Ok(0) => return None,
                Ok(n) => {
                    self.input_buffer_len = n;
                    self.input_buffer_pos = 0;
                }
                Err(_) => {
                    exit_with_error(2, None, &self.program_name);
                }
            }
        }
        let ch = self.input_buffer[self.input_buffer_pos];
        self.input_buffer_pos += 1;
        Some(ch)
    }

    fn putc(&mut self, ch: u8) {
        if self.output.write_all(&[ch]).is_err() {
            exit_with_error(3, None, &self.program_name);
        }
    }

    fn puts(&mut self, s: &[u8]) {
        if self.output.write_all(s).is_err() {
            exit_with_error(3, None, &self.program_name);
        }
    }

    fn flush(&mut self) {
        if self.output.flush().is_err() {
            exit_with_error(3, None, &self.program_name);
        }
    }
}

fn skip_to_eol(xxd: &mut Xxd) -> u8 {
    loop {
        match xxd.getc() {
            Some(b'\n') | None => return b'\n',
            Some(_) => continue,
        }
    }
}

fn ebcdic_char_color(e: u8) -> ColorDigit {
    if (e >= 75 && e <= 80) || (e >= 90 && e <= 97) || (e >= 107 && e <= 111)
        || (e >= 121 && e <= 127) || (e >= 129 && e <= 137) || (e >= 145 && e <= 154)
        || (e >= 162 && e <= 169) || (e >= 192 && e <= 201) || (e >= 208 && e <= 217)
        || (e >= 226 && e <= 233) || (e >= 240 && e <= 249) || e == 64 || e == 173
        || e == 189 || e == 224
    {
        return ColorDigit::Green;
    }
    match e {
        5 | 13 | 37 => ColorDigit::Yellow,
        0 => ColorDigit::White,
        255 => ColorDigit::Blue,
        _ => ColorDigit::Red,
    }
}

fn ascii_char_color(e: u8) -> ColorDigit {
    if e >= b' ' && e < 127 {
        return ColorDigit::Green;
    }
    match e {
        b'\n' | b'\t' | b'\r' => ColorDigit::Yellow,
        0 => ColorDigit::White,
        255 => ColorDigit::Blue,
        _ => ColorDigit::Red,
    }
}

fn set_color(buffer: &mut [u8], c: &mut usize, color_digit: ColorDigit) {
    buffer[*c] = b'\x1b';
    *c += 1;
    buffer[*c] = b'[';
    *c += 1;
    buffer[*c] = b'1';
    *c += 1;
    buffer[*c] = b';';
    *c += 1;
    buffer[*c] = b'3';
    *c += 1;
    buffer[*c] = color_digit as u8;
    *c += 1;
    buffer[*c] = b'm';
    *c += 1;
}

fn clear_color(buffer: &mut [u8], c: &mut usize) {
    buffer[*c] = b'\x1b';
    *c += 1;
    buffer[*c] = b'[';
    *c += 1;
    buffer[*c] = b'0';
    *c += 1;
    buffer[*c] = b'm';
    *c += 1;
}

struct ZeroLineState {
    zero_seen: i32,
}

impl ZeroLineState {
    fn new() -> Self {
        ZeroLineState { zero_seen: 0 }
    }

    fn print_or_suppress(&mut self, buffer: &[u8], z: &mut [u8], nz: i32, xxd: &mut Xxd) {
        if nz != 0 {
            if nz < 0 {
                self.zero_seen -= 1;
            }
            if self.zero_seen == 2 {
                let len = z.iter().position(|&c| c == 0).unwrap_or(z.len());
                xxd.puts(&z[..len]);
            } else if self.zero_seen > 2 {
                xxd.putc(b'*');
                xxd.putc(b'\n');
            }
            if nz >= 0 || self.zero_seen > 0 {
                let len = buffer.iter().position(|&c| c == 0).unwrap_or(buffer.len());
                xxd.puts(&buffer[..len]);
            }
            self.zero_seen = 0;
        } else {
            self.zero_seen += 1;
            if self.zero_seen == 1 {
                let len = buffer.iter().position(|&c| c == 0).unwrap_or(buffer.len());
                xxd.puts(&buffer[..len]);
            } else if self.zero_seen == 2 {
                let len = buffer.iter().position(|&c| c == 0).unwrap_or(buffer.len());
                z[..len].copy_from_slice(&buffer[..len]);
                z[len] = 0;
            }
        }
    }
}

fn decode_hex_stream_postscript(base_off: i64, xxd: &mut Xxd) -> i32 {
    let mut ignore = true;
    let mut n1: i32 = -1;
    let mut n2: i32 = 0;
    let mut n3: i32;
    let mut have_off: u64 = 0;
    let mut want_off: u64 = 0;

    xxd.input_buffer_pos = 0;
    xxd.input_buffer_len = 0;

    while let Some(c) = xxd.getc() {
        if c == b' ' || c == b'\n' || c == b'\t' || c == b'\r' {
            continue;
        }
        let tmp = parse_hex_digit(c);
        if tmp == -1 && ignore {
            continue;
        }
        n3 = n2;
        n2 = n1;
        n1 = tmp;

        let target_offset = (base_off as u64).wrapping_add(want_off);
        if target_offset != have_off {
            xxd.flush();
            while have_off < target_offset {
                xxd.putc(0);
                have_off += 1;
            }
        }

        if n2 >= 0 && n1 >= 0 {
            xxd.putc(((n2 << 4) | n1) as u8);
            have_off += 1;
            want_off += 1;
            n1 = -1;
        } else if n1 < 0 && n2 < 0 && n3 < 0 {
            skip_to_eol(xxd);
        }
        ignore = c == b'\n';
    }
    xxd.flush();
    0
}

fn decode_hex_stream_normal(cols: usize, base_off: i64, xxd: &mut Xxd) -> i32 {
    let mut ignore = true;
    let mut n1: i32 = -1;
    let mut n2: i32 = 0;
    let mut n3: i32;
    let mut p = cols as i32;
    let mut have_off: u64 = 0;
    let mut want_off: u64 = 0;

    xxd.input_buffer_pos = 0;
    xxd.input_buffer_len = 0;

    while let Some(mut c) = xxd.getc() {
        if c == b'\r' {
            break;
        }
        let tmp = parse_hex_digit(c);
        if tmp == -1 && ignore {
            continue;
        }
        n3 = n2;
        n2 = n1;
        n1 = tmp;

        if p >= cols as i32 {
            if n1 < 0 {
                p = 0;
            } else {
                want_off = (want_off << 4) | (n1 as u64);
            }
            ignore = false;
            continue;
        }

        if n2 >= 0 && n1 >= 0 {
            let target_offset = (base_off as u64).wrapping_add(want_off);
            if target_offset != have_off {
                xxd.flush();
                if target_offset < have_off {
                    exit_with_error(5, Some("Sorry, cannot seek backwards."), &xxd.program_name);
                }
                while have_off < target_offset {
                    xxd.putc(0);
                    have_off += 1;
                }
            }
            xxd.putc(((n2 << 4) | n1) as u8);
            have_off += 1;
            want_off += 1;
            n1 = -1;
            p += 1;
            if p >= cols as i32 {
                c = skip_to_eol(xxd);
            }
        } else if n1 < 0 && n2 < 0 && n3 < 0 {
            c = skip_to_eol(xxd);
        }

        if c != b'\n' {
            ignore = false;
        } else {
            ignore = true;
            want_off = 0;
            p = cols as i32;
        }
    }
    xxd.flush();
    0
}

fn decode_hex_stream_bits(cols: usize, xxd: &mut Xxd) -> i32 {
    let mut ignore = true;
    let mut bit_buffer = 0;
    let mut bit_count = 0;
    let mut p = cols as i32;
    let mut want_off: i64 = 0;

    xxd.input_buffer_pos = 0;
    xxd.input_buffer_len = 0;

    while let Some(c) = xxd.getc() {
        if c == b'\r' {
            break;
        }
        let n1 = parse_hex_digit(c);
        if n1 == -1 && ignore {
            continue;
        }
        let bit = parse_binary_digit(c);
        if bit != -1 {
            bit_buffer = (bit_buffer << 1) | bit;
            bit_count += 1;
        }
        ignore = false;

        if p >= cols as i32 {
            if n1 < 0 {
                p = 0;
                bit_count = 0;
            } else {
                want_off = (want_off << 4) | (n1 as i64);
            }
            continue;
        }

        if c == b'\n' {
            want_off = 0;
        }

        if bit_count == 8 {
            xxd.putc(bit_buffer as u8);
            want_off += 1;
            bit_buffer = 0;
            bit_count = 0;
            p += 1;
            if p >= cols as i32 {
                skip_to_eol(xxd);
            }
        }
    }
    xxd.flush();
    0
}

fn hex_postscript(xxd: &mut Xxd) -> i32 {
    if xxd.colsgiven && (xxd.cols as i32) < 0 {
        exit_with_col_error(&xxd.program_name);
    }
    if xxd.revert {
        let off = if xxd.negseek { -xxd.seekoff } else { xxd.seekoff };
        return decode_hex_stream_postscript(off, xxd);
    }

    let mut n: i64 = 0;
    let mut p = xxd.cols as i32;

    while let Some(e) = xxd.getc() {
        if xxd.length >= 0 && n >= xxd.length {
            break;
        }
        xxd.putc(xxd.hex_digits[((e >> 4) & 0xf) as usize]);
        xxd.putc(xxd.hex_digits[(e & 0xf) as usize]);
        n += 1;
        if xxd.cols > 0 {
            p -= 1;
            if p == 0 {
                xxd.putc(b'\n');
                p = xxd.cols as i32;
            }
        }
    }
    if xxd.cols == 0 || p < xxd.cols as i32 {
        xxd.putc(b'\n');
    }
    0
}

fn hex_cinclude(xxd: &mut Xxd) -> i32 {
    let mut p: i64 = 0;
    if xxd.revert {
        exit_with_error(-1, Some("Sorry, cannot revert this type of hexdump"), &xxd.program_name);
    }

    let varname = xxd.varname.clone().or_else(|| xxd.input_filename.clone());

    if let Some(ref name) = varname {
        let prefix = if name.chars().next().map(|c| c.is_ascii_digit()).unwrap_or(false) {
            "__"
        } else {
            ""
        };
        xxd.puts(format!("unsigned char {}", prefix).as_bytes());
        for c in name.chars() {
            let out_char = if xxd.capitalize {
                if c.is_alphanumeric() { c.to_ascii_uppercase() } else { '_' }
            } else {
                if c.is_alphanumeric() { c } else { '_' }
            };
            xxd.putc(out_char as u8);
        }
        xxd.puts(b"[] = {\n");
    }

    let hex_format_upper = xxd.uppercase_hex;

    while let Some(e) = xxd.getc() {
        if xxd.length >= 0 && p >= xxd.length {
            break;
        }
        let prefix = if (p as usize % xxd.cols) != 0 {
            ", "
        } else if p == 0 {
            "  "
        } else {
            ",\n  "
        };
        xxd.puts(prefix.as_bytes());
        if hex_format_upper {
            xxd.puts(format!("0X{:02X}", e).as_bytes());
        } else {
            xxd.puts(format!("0x{:02x}", e).as_bytes());
        }
        p += 1;
    }
    if p > 0 {
        xxd.putc(b'\n');
    }
    if let Some(ref name) = varname {
        xxd.puts(b"};\n");
        let prefix = if name.chars().next().map(|c| c.is_ascii_digit()).unwrap_or(false) {
            "__"
        } else {
            ""
        };
        xxd.puts(format!("unsigned int {}", prefix).as_bytes());
        for c in name.chars() {
            let out_char = if xxd.capitalize {
                if c.is_alphanumeric() { c.to_ascii_uppercase() } else { '_' }
            } else {
                if c.is_alphanumeric() { c } else { '_' }
            };
            xxd.putc(out_char as u8);
        }
        let len_suffix = if xxd.capitalize { "LEN" } else { "len" };
        xxd.puts(format!("_{} = {};\n", len_suffix, p).as_bytes());
    }
    0
}

fn hex_cinclude_bits(xxd: &mut Xxd) -> i32 {
    let mut p: i64 = 0;
    if xxd.revert {
        exit_with_error(-1, Some("Sorry, cannot revert this type of hexdump"), &xxd.program_name);
    }

    let varname = xxd.varname.clone().or_else(|| xxd.input_filename.clone());

    if let Some(ref name) = varname {
        let prefix = if name.chars().next().map(|c| c.is_ascii_digit()).unwrap_or(false) {
            "__"
        } else {
            ""
        };
        xxd.puts(format!("unsigned char {}", prefix).as_bytes());
        for c in name.chars() {
            let out_char = if xxd.capitalize {
                if c.is_alphanumeric() { c.to_ascii_uppercase() } else { '_' }
            } else {
                if c.is_alphanumeric() { c } else { '_' }
            };
            xxd.putc(out_char as u8);
        }
        xxd.puts(b"[] = {\n");
    }

    while let Some(e) = xxd.getc() {
        if xxd.length >= 0 && p >= xxd.length {
            break;
        }
        if p == 0 {
            xxd.puts(b"  ");
        } else if (p as usize % xxd.cols) == 0 {
            xxd.puts(b",\n  ");
        } else {
            xxd.puts(b", ");
        }
        xxd.puts(b"0b");
        for bit in (0..8).rev() {
            xxd.putc(((e >> bit) & 1) + b'0');
        }
        p += 1;
    }
    if p > 0 {
        xxd.putc(b'\n');
    }
    if let Some(ref name) = varname {
        xxd.puts(b"};\n");
        let prefix = if name.chars().next().map(|c| c.is_ascii_digit()).unwrap_or(false) {
            "__"
        } else {
            ""
        };
        xxd.puts(format!("unsigned int {}", prefix).as_bytes());
        for c in name.chars() {
            let out_char = if xxd.capitalize {
                if c.is_alphanumeric() { c.to_ascii_uppercase() } else { '_' }
            } else {
                if c.is_alphanumeric() { c } else { '_' }
            };
            xxd.putc(out_char as u8);
        }
        let len_suffix = if xxd.capitalize { "LEN" } else { "len" };
        xxd.puts(format!("_{} = {};\n", len_suffix, p).as_bytes());
    }
    0
}

fn hex_bits(xxd: &mut Xxd) -> i32 {
    let mut buffer = [0u8; LLENP1];
    let mut z = [0u8; LLENP1];
    let mut zero_state = ZeroLineState::new();
    let decimal = xxd.decimal_format_string == "%08ld:";

    if xxd.colsgiven && xxd.cols != 0 && (xxd.cols < 1 || xxd.cols > COLS) {
        exit_with_col_error(&xxd.program_name);
    }
    if xxd.revert {
        return decode_hex_stream_bits(xxd.cols, xxd);
    }

    let mut octspergrp = xxd.octspergrp;
    if octspergrp < 0 {
        octspergrp = 1;
    } else if octspergrp < 1 || octspergrp > xxd.cols as i32 {
        octspergrp = xxd.cols as i32;
    }

    let grplen = 8 * octspergrp + 1;
    let mut n: i64 = 0;
    let mut nonzero = 0;
    let mut p = 0;
    let mut max_idx = 0;
    let mut addrlen = 9;

    while let Some(e) = xxd.getc() {
        if xxd.length >= 0 && n >= xxd.length {
            break;
        }

        if p == 0 {
            let addr = (n as u64).wrapping_add(xxd.seekoff as u64).wrapping_add(xxd.displayoff);
            let addr_str = format_address(addr, decimal);
            addrlen = addr_str.len();
            buffer[..addrlen].copy_from_slice(addr_str.as_bytes());
            for i in addrlen..LLENP1 {
                buffer[i] = b' ';
            }
            max_idx = addrlen;
        } else {
            let addr = ((n - p as i64) as u64).wrapping_add(xxd.seekoff as u64).wrapping_add(xxd.displayoff);
            let addr_str = format_address(addr, decimal);
            addrlen = addr_str.len();
            max_idx = addrlen;
        }

        let mut c = addrlen + 1 + (grplen as usize * p) / octspergrp as usize;
        for i in (0..8).rev() {
            buffer[c] = ((e >> i) & 1) + b'0';
            c += 1;
        }
        if c > max_idx {
            max_idx = c;
        }

        if xxd.color {
            c = (grplen as usize * xxd.cols - 1) / octspergrp as usize + addrlen + 3 + p * 12;
            nonzero += if e != 0 { 1 } else { 0 };
            let color = if xxd.ascii { ascii_char_color(e) } else { ebcdic_char_color(e) };
            set_color(&mut buffer, &mut c, color);
            let display_e = if !xxd.ascii {
                if e < 64 { b'.' } else { ETOA64[(e - 64) as usize] }
            } else {
                e
            };
            buffer[c] = if display_e < b' ' || display_e >= 127 { b'.' } else { display_e };
            c += 1;
            clear_color(&mut buffer, &mut c);
            if c > max_idx {
                max_idx = c;
            }
        } else {
            c = (grplen as usize * xxd.cols - 1) / octspergrp as usize;
            nonzero += if e != 0 { 1 } else { 0 };
            let display_e = if !xxd.ascii {
                if e < 64 { b'.' } else { ETOA64[(e - 64) as usize] }
            } else {
                e
            };
            c += addrlen + 3 + p;
            buffer[c] = if display_e < b' ' || display_e >= 127 { b'.' } else { display_e };
            c += 1;
            if c > max_idx {
                max_idx = c;
            }
        }

        n += 1;
        p += 1;
        if p == xxd.cols {
            buffer[max_idx] = b'\n';
            buffer[max_idx + 1] = 0;
            let nz = if xxd.autoskip { nonzero } else { 1 };
            zero_state.print_or_suppress(&buffer, &mut z, nz, xxd);
            nonzero = 0;
            p = 0;
            max_idx = 0;
        }
    }

    if p > 0 {
        let mut c = max_idx;
        buffer[c] = b'\n';
        c += 1;
        buffer[c] = 0;
        zero_state.print_or_suppress(&buffer, &mut z, 1, xxd);
    } else if xxd.autoskip {
        zero_state.print_or_suppress(&buffer, &mut z, -1, xxd);
    }

    0
}

fn format_address(addr: u64, decimal: bool) -> String {
    if decimal {
        format!("{:08}:", addr as i64)
    } else {
        format!("{:08x}:", addr)
    }
}

fn hex_normal(xxd: &mut Xxd) -> i32 {
    let mut buffer = [0u8; LLENP1];
    let mut z = [0u8; LLENP1];
    let mut zero_state = ZeroLineState::new();
    let mut line_data = [0u8; COLS];
    let decimal = xxd.decimal_format_string == "%08ld:";

    if xxd.colsgiven && xxd.cols != 0 && (xxd.cols < 1 || xxd.cols > COLS) {
        exit_with_col_error(&xxd.program_name);
    }
    if xxd.revert {
        let off = if xxd.negseek { -xxd.seekoff } else { xxd.seekoff };
        return decode_hex_stream_normal(xxd.cols, off, xxd);
    }

    let mut octspergrp = xxd.octspergrp;
    if octspergrp < 0 {
        octspergrp = 2;
    } else if octspergrp < 1 || octspergrp > xxd.cols as i32 {
        octspergrp = xxd.cols as i32;
    }

    let mut n: i64 = 0;
    let mut nonzero = 0;
    let mut p = 0;
    let mut current_color: u8 = 0;

    while let Some(e) = xxd.getc() {
        if xxd.length >= 0 && n >= xxd.length {
            break;
        }

        line_data[p] = e;
        if e != 0 {
            nonzero += 1;
        }
        n += 1;
        p += 1;

        if p == xxd.cols {
            let addr = ((n - p as i64) as u64).wrapping_add(xxd.seekoff as u64).wrapping_add(xxd.displayoff);
            let addr_str = format_address(addr, decimal);
            let mut buf_idx = addr_str.len();
            buffer[..buf_idx].copy_from_slice(addr_str.as_bytes());
            while buf_idx < 9 {
                buffer[buf_idx] = b' ';
                buf_idx += 1;
            }
            buffer[buf_idx] = b' ';
            buf_idx += 1;

            for i in 0..p {
                if i > 0 && (i % octspergrp as usize) == 0 {
                    if current_color != 0 {
                        clear_color(&mut buffer, &mut buf_idx);
                        current_color = 0;
                    }
                    buffer[buf_idx] = b' ';
                    buf_idx += 1;
                }
                let val = line_data[i];
                let mut new_color: u8 = 0;
                if xxd.color {
                    new_color = if xxd.ascii {
                        ascii_char_color(val) as u8
                    } else {
                        ebcdic_char_color(val) as u8
                    };
                }
                if new_color != current_color {
                    if current_color != 0 {
                        clear_color(&mut buffer, &mut buf_idx);
                    }
                    if new_color != 0 {
                        set_color(&mut buffer, &mut buf_idx, unsafe { std::mem::transmute(new_color) });
                    }
                    current_color = new_color;
                }
                buffer[buf_idx] = xxd.hex_digits[((val >> 4) & 0xf) as usize];
                buf_idx += 1;
                buffer[buf_idx] = xxd.hex_digits[(val & 0xf) as usize];
                buf_idx += 1;
            }
            if current_color != 0 {
                clear_color(&mut buffer, &mut buf_idx);
                current_color = 0;
            }
            buffer[buf_idx] = b' ';
            buf_idx += 1;
            buffer[buf_idx] = b' ';
            buf_idx += 1;

            for i in 0..p {
                let val = line_data[i];
                let pval = if !xxd.ascii {
                    if val < 64 { b'.' } else { ETOA64[(val - 64) as usize] }
                } else {
                    val
                };
                let mut new_color: u8 = 0;
                if xxd.color && xxd.ascii {
                    new_color = ascii_char_color(val) as u8;
                }
                if new_color != current_color {
                    if current_color != 0 {
                        clear_color(&mut buffer, &mut buf_idx);
                    }
                    if new_color != 0 {
                        set_color(&mut buffer, &mut buf_idx, unsafe { std::mem::transmute(new_color) });
                    }
                    current_color = new_color;
                }
                buffer[buf_idx] = if pval < b' ' || pval >= 127 { b'.' } else { pval };
                buf_idx += 1;
            }
            if current_color != 0 {
                clear_color(&mut buffer, &mut buf_idx);
                current_color = 0;
            }
            buffer[buf_idx] = b'\n';
            buf_idx += 1;
            buffer[buf_idx] = 0;

            let nz = if xxd.autoskip { nonzero } else { 1 };
            zero_state.print_or_suppress(&buffer, &mut z, nz, xxd);
            p = 0;
            nonzero = 0;
        }
    }

    if p > 0 {
        let addr = ((n - p as i64) as u64).wrapping_add(xxd.seekoff as u64).wrapping_add(xxd.displayoff);
        let addr_str = format_address(addr, decimal);
        let mut buf_idx = addr_str.len();
        buffer[..buf_idx].copy_from_slice(addr_str.as_bytes());
        while buf_idx < 9 {
            buffer[buf_idx] = b' ';
            buf_idx += 1;
        }
        buffer[buf_idx] = b' ';
        buf_idx += 1;

        for i in 0..p {
            if i > 0 && (i % octspergrp as usize) == 0 {
                if current_color != 0 {
                    clear_color(&mut buffer, &mut buf_idx);
                    current_color = 0;
                }
                buffer[buf_idx] = b' ';
                buf_idx += 1;
            }
            let val = line_data[i];
            let mut new_color: u8 = 0;
            if xxd.color {
                new_color = if xxd.ascii {
                    ascii_char_color(val) as u8
                } else {
                    ebcdic_char_color(val) as u8
                };
            }
            if new_color != current_color {
                if current_color != 0 {
                    clear_color(&mut buffer, &mut buf_idx);
                }
                if new_color != 0 {
                    set_color(&mut buffer, &mut buf_idx, unsafe { std::mem::transmute(new_color) });
                }
                current_color = new_color;
            }
            buffer[buf_idx] = xxd.hex_digits[((val >> 4) & 0xf) as usize];
            buf_idx += 1;
            buffer[buf_idx] = xxd.hex_digits[(val & 0xf) as usize];
            buf_idx += 1;
        }
        if current_color != 0 {
            clear_color(&mut buffer, &mut buf_idx);
            current_color = 0;
        }

        let hex_pad_count = xxd.cols - p;
        let hex_pad_seps = hex_pad_count / octspergrp as usize;
        for _ in 0..(hex_pad_count + hex_pad_seps + 1) {
            buffer[buf_idx] = b' ';
            buf_idx += 1;
        }

        if xxd.color {
            if ColorDigit::Red as u8 != current_color {
                if current_color != 0 {
                    clear_color(&mut buffer, &mut buf_idx);
                }
                set_color(&mut buffer, &mut buf_idx, ColorDigit::Red);
                current_color = ColorDigit::Red as u8;
            }
            for _ in 0..hex_pad_count {
                buffer[buf_idx] = b' ';
                buf_idx += 1;
            }
            if current_color != 0 {
                clear_color(&mut buffer, &mut buf_idx);
                current_color = 0;
            }
        } else {
            for _ in 0..hex_pad_count {
                buffer[buf_idx] = b' ';
                buf_idx += 1;
            }
        }

        buffer[buf_idx] = b' ';
        buf_idx += 1;

        for i in 0..p {
            let val = line_data[i];
            let pval = if !xxd.ascii {
                if val < 64 { b'.' } else { ETOA64[(val - 64) as usize] }
            } else {
                val
            };
            let mut new_color: u8 = 0;
            if xxd.color && xxd.ascii {
                new_color = ascii_char_color(val) as u8;
            }
            if new_color != current_color {
                if current_color != 0 {
                    clear_color(&mut buffer, &mut buf_idx);
                }
                if new_color != 0 {
                    set_color(&mut buffer, &mut buf_idx, unsafe { std::mem::transmute(new_color) });
                }
                current_color = new_color;
            }
            buffer[buf_idx] = if pval < b' ' || pval >= 127 { b'.' } else { pval };
            buf_idx += 1;
        }
        if current_color != 0 {
            clear_color(&mut buffer, &mut buf_idx);
        }
        buffer[buf_idx] = b'\n';
        buf_idx += 1;
        buffer[buf_idx] = 0;
        zero_state.print_or_suppress(&buffer, &mut z, 1, xxd);
    } else if xxd.autoskip {
        zero_state.print_or_suppress(&buffer, &mut z, -1, xxd);
    }

    0
}

fn hex_littleendian(xxd: &mut Xxd) -> i32 {
    let mut buffer = [0u8; LLENP1];
    let mut z = [0u8; LLENP1];
    let mut zero_state = ZeroLineState::new();
    let decimal = xxd.decimal_format_string == "%08ld:";

    if xxd.colsgiven && xxd.cols != 0 && (xxd.cols < 1 || xxd.cols > COLS) {
        exit_with_col_error(&xxd.program_name);
    }
    if xxd.revert {
        exit_with_error(-1, Some("Sorry, cannot revert this type of hexdump"), &xxd.program_name);
    }

    let mut octspergrp = xxd.octspergrp;
    if octspergrp < 0 {
        octspergrp = 4;
    } else if octspergrp < 1 || octspergrp > xxd.cols as i32 {
        octspergrp = xxd.cols as i32;
    } else if (octspergrp & (octspergrp - 1)) != 0 {
        exit_with_error(1, Some("number of octets per group must be a power of 2 with -e."), &xxd.program_name);
    }

    let grplen = octspergrp + octspergrp + 1 + if xxd.color { 11 * octspergrp } else { 0 };
    let mut n: i64 = 0;
    let mut nonzero = 0;
    let mut p = 0;
    let mut max_idx = 0;
    let mut addrlen = 9;

    while let Some(e) = xxd.getc() {
        if xxd.length >= 0 && n >= xxd.length {
            break;
        }

        if p == 0 {
            let addr = (n as u64).wrapping_add(xxd.seekoff as u64).wrapping_add(xxd.displayoff);
            let addr_str = format_address(addr, decimal);
            addrlen = addr_str.len();
            buffer[..addrlen].copy_from_slice(addr_str.as_bytes());
            for i in addrlen..LLENP1 {
                buffer[i] = b' ';
            }
            max_idx = addrlen;
        } else {
            let addr = ((n - p as i64) as u64).wrapping_add(xxd.seekoff as u64).wrapping_add(xxd.displayoff);
            let addr_str = format_address(addr, decimal);
            addrlen = addr_str.len();
            max_idx = addrlen;
        }

        let x = p ^ (octspergrp as usize - 1);
        let mut c = addrlen + 1 + (grplen as usize * x) / octspergrp as usize;

        if xxd.color {
            let color = if xxd.ascii { ascii_char_color(e) } else { ebcdic_char_color(e) };
            set_color(&mut buffer, &mut c, color);
            buffer[c] = xxd.hex_digits[((e >> 4) & 0xf) as usize];
            c += 1;
            buffer[c] = xxd.hex_digits[(e & 0xf) as usize];
            c += 1;
            clear_color(&mut buffer, &mut c);
            if c > max_idx {
                max_idx = c;
            }

            c = addrlen + 3 + (grplen as usize * xxd.cols - 1) / octspergrp as usize + p * 12 + 1;
            nonzero += if e != 0 { 1 } else { 0 };
            let color = if xxd.ascii { ascii_char_color(e) } else { ebcdic_char_color(e) };
            set_color(&mut buffer, &mut c, color);
            let display_e = if !xxd.ascii {
                if e < 64 { b'.' } else { ETOA64[(e - 64) as usize] }
            } else {
                e
            };
            buffer[c] = if display_e < b' ' || display_e >= 127 { b'.' } else { display_e };
            c += 1;
            clear_color(&mut buffer, &mut c);
            if c > max_idx {
                max_idx = c;
            }
        } else {
            buffer[c] = xxd.hex_digits[((e >> 4) & 0xf) as usize];
            c += 1;
            buffer[c] = xxd.hex_digits[(e & 0xf) as usize];
            if c + 1 > max_idx {
                max_idx = c + 1;
            }

            c = grplen as usize * ((xxd.cols + octspergrp as usize - 1) / octspergrp as usize);
            nonzero += if e != 0 { 1 } else { 0 };
            let display_e = if !xxd.ascii {
                if e < 64 { b'.' } else { ETOA64[(e - 64) as usize] }
            } else {
                e
            };
            c += addrlen + 2 + p;
            buffer[c] = if display_e < b' ' || display_e >= 127 { b'.' } else { display_e };
            c += 1;
            if c > max_idx {
                max_idx = c;
            }
        }

        n += 1;
        p += 1;
        if p == xxd.cols {
            buffer[max_idx] = b'\n';
            buffer[max_idx + 1] = 0;
            let nz = if xxd.autoskip { nonzero } else { 1 };
            zero_state.print_or_suppress(&buffer, &mut z, nz, xxd);
            nonzero = 0;
            p = 0;
            max_idx = 0;
        }
    }

    if p > 0 {
        let mut c = max_idx;
        if xxd.color {
            let x = p;
            let fill = if (p % octspergrp as usize) == 0 { 0 } else { octspergrp as usize - (p % octspergrp as usize) };
            c = addrlen + 1 + (grplen as usize * (x - (octspergrp as usize - fill))) / octspergrp as usize;
            for _ in 0..fill {
                set_color(&mut buffer, &mut c, ColorDigit::Red);
                buffer[c] = b' ';
                c += 1;
                clear_color(&mut buffer, &mut c);
            }
            let new_x = x + fill;
            let new_p = p + fill;
            c = addrlen + 1 + (grplen as usize * new_x) / octspergrp as usize + (xxd.cols - new_p) + (xxd.cols - new_p) / octspergrp as usize;
            for _ in 0..(xxd.cols - new_p) {
                set_color(&mut buffer, &mut c, ColorDigit::Red);
                buffer[c] = b' ';
                c += 1;
                clear_color(&mut buffer, &mut c);
            }
        }
        buffer[c] = b'\n';
        c += 1;
        buffer[c] = 0;
        zero_state.print_or_suppress(&buffer, &mut z, 1, xxd);
    } else if xxd.autoskip {
        zero_state.print_or_suppress(&buffer, &mut z, -1, xxd);
    }

    0
}

fn base_name(path: &str) -> &str {
    path.rsplit('/').next().unwrap_or(path)
}

fn is_stdout_tty() -> bool {
    unsafe { libc::isatty(libc::STDOUT_FILENO) != 0 }
}

fn main() {
    let args: Vec<String> = env::args().collect();
    let program_name = base_name(&args[0]).to_string();

    let no_color = env::var("NO_COLOR").ok();
    let color_default = no_color.map(|v| v.is_empty()).unwrap_or(true) && is_stdout_tty();

    let mut xxd = Xxd {
        input: Box::new(io::stdin()),
        output: Box::new(BufWriter::new(io::stdout())),
        program_name: program_name.clone(),
        decimal_format_string: "%08lx:",
        hex_digits: &HEX_LOWER,
        varname: None,
        input_filename: None,
        seekoff: 0,
        displayoff: 0,
        length: -1,
        cols: 0,
        octspergrp: -1,
        autoskip: false,
        colsgiven: false,
        revert: false,
        color: color_default,
        ascii: true,
        capitalize: false,
        uppercase_hex: false,
        negseek: false,
        relative_seek: false,
        input_buffer: [0; INPUT_BUFFER_SIZE],
        input_buffer_pos: 0,
        input_buffer_len: 0,
    };

    let mut hextype = HexType::Normal;
    let mut i = 1;
    let mut positional_args: Vec<String> = Vec::new();

    while i < args.len() {
        let arg = &args[i];
        let pp = if arg.starts_with("--") && arg.len() > 2 {
            &arg[1..]
        } else {
            arg.as_str()
        };

        if pp.starts_with("-a") {
            xxd.autoskip = !xxd.autoskip;
        } else if pp.starts_with("-b") {
            if hextype == HexType::CInclude {
                hextype = HexType::BitsAndCInclude;
            } else {
                hextype = HexType::Bits;
            }
        } else if pp.starts_with("-e") {
            hextype = HexType::LittleEndian;
        } else if pp.starts_with("-u") {
            xxd.uppercase_hex = true;
        } else if pp.starts_with("-p") {
            hextype = HexType::PostScript;
        } else if pp.starts_with("-i") {
            if hextype == HexType::Bits {
                hextype = HexType::BitsAndCInclude;
            } else {
                hextype = HexType::CInclude;
            }
        } else if pp.starts_with("-C") {
            xxd.capitalize = true;
        } else if pp.starts_with("-d") {
            xxd.decimal_format_string = "%08ld:";
        } else if pp.starts_with("-r") {
            xxd.revert = true;
        } else if pp.starts_with("-E") {
            xxd.ascii = false;
        } else if pp.starts_with("-v") {
            eprintln!("{}", VERSION);
            exit(0);
        } else if pp.starts_with("-c") {
            if pp.len() > 2 && pp[2..].starts_with("apitalize") {
                xxd.capitalize = true;
            } else if pp.len() > 2 && !pp[2..].starts_with("ols") {
                xxd.colsgiven = true;
                xxd.cols = parse_number(&pp[2..]) as usize;
            } else {
                i += 1;
                if i >= args.len() {
                    exit_with_usage(&program_name);
                }
                xxd.colsgiven = true;
                xxd.cols = parse_number(&args[i]) as usize;
            }
        } else if pp.starts_with("-g") {
            if pp.len() > 2 && !pp[2..].starts_with("roup") {
                xxd.octspergrp = parse_number(&pp[2..]) as i32;
            } else {
                i += 1;
                if i >= args.len() {
                    exit_with_usage(&program_name);
                }
                xxd.octspergrp = parse_number(&args[i]) as i32;
            }
        } else if pp.starts_with("-o") {
            if pp.len() > 2 && !pp[2..].starts_with("ffset") {
                xxd.displayoff = parse_unsigned(&pp[2..]);
            } else {
                i += 1;
                if i >= args.len() {
                    exit_with_usage(&program_name);
                }
                let arg = &args[i];
                let (rel, neg, val) = parse_offset(arg);
                if neg {
                    xxd.displayoff = u64::MAX - val + 1;
                } else {
                    xxd.displayoff = val;
                }
                let _ = rel; // unused for -o
            }
        } else if pp.starts_with("-s") {
            let seek_arg = if pp.len() > 2 {
                &pp[2..]
            } else {
                i += 1;
                if i >= args.len() {
                    exit_with_usage(&program_name);
                }
                &args[i]
            };
            let (rel, neg, val) = parse_offset(seek_arg);
            xxd.relative_seek = rel;
            xxd.negseek = neg;
            xxd.seekoff = val as i64;
        } else if pp.starts_with("-l") {
            if pp.len() > 2 && !pp[2..].starts_with("en") {
                xxd.length = parse_number(&pp[2..]) as i64;
            } else {
                i += 1;
                if i >= args.len() {
                    exit_with_usage(&program_name);
                }
                xxd.length = parse_number(&args[i]) as i64;
            }
        } else if pp.starts_with("-n") {
            if pp.len() > 2 && !pp[2..].starts_with("ame") {
                xxd.varname = Some(pp[2..].to_string());
            } else {
                i += 1;
                if i >= args.len() {
                    exit_with_usage(&program_name);
                }
                xxd.varname = Some(args[i].clone());
            }
        } else if pp.starts_with("-R") {
            let pw = if pp.len() > 2 {
                &pp[2..]
            } else {
                i += 1;
                if i >= args.len() {
                    exit_with_usage(&program_name);
                }
                &args[i]
            };
            if pw.starts_with("always") {
                xxd.color = true;
            } else if pw.starts_with("never") {
                xxd.color = false;
            } else if pw.starts_with("auto") {
                xxd.color = is_stdout_tty();
            } else {
                exit_with_usage(&program_name);
            }
        } else if pp == "-h" || pp == "--help" {
            exit_with_usage(&program_name);
        } else if pp == "--" {
            i += 1;
            while i < args.len() {
                positional_args.push(args[i].clone());
                i += 1;
            }
            break;
        } else if pp.starts_with('-') && pp.len() > 1 {
            exit_with_usage(&program_name);
        } else {
            positional_args.push(arg.clone());
        }
        i += 1;
    }

    if xxd.uppercase_hex {
        xxd.hex_digits = &HEX_UPPER;
    }

    // Default cols logic
    if !xxd.colsgiven || xxd.cols == 0 {
        xxd.cols = match hextype {
            HexType::PostScript => 30,
            HexType::CInclude => 12,
            HexType::Bits | HexType::BitsAndCInclude => 6,
            _ => 16,
        };
    } else if hextype != HexType::PostScript && xxd.cols < 1 {
        exit_with_col_error(&program_name);
    }

    // Default octspergrp logic
    if xxd.octspergrp < 0 {
        xxd.octspergrp = match hextype {
            HexType::Bits => 1,
            HexType::Normal => 2,
            HexType::LittleEndian => 4,
            _ => 0,
        };
    }
    if xxd.octspergrp < 1 {
        xxd.octspergrp = xxd.cols as i32;
    }

    if positional_args.len() > 2 {
        exit_with_usage(&program_name);
    }

    // Handle input file
    if positional_args.is_empty() || (positional_args[0] == "-") {
        xxd.input = Box::new(BufReader::new(io::stdin()));
        xxd.input_filename = Some("stdin".to_string());
    } else {
        match File::open(&positional_args[0]) {
            Ok(f) => {
                xxd.input = Box::new(BufReader::new(f));
                xxd.input_filename = Some(positional_args[0].clone());
            }
            Err(e) => {
                eprintln!("{}: {}: {}", program_name, positional_args[0], e);
                exit(2);
            }
        }
    }

    // Handle output file
    if positional_args.len() < 2 || positional_args[1] == "-" {
        xxd.output = Box::new(BufWriter::new(io::stdout()));
    } else {
        let open_result = if xxd.revert {
            OpenOptions::new().write(true).create(true).open(&positional_args[1])
        } else {
            OpenOptions::new().write(true).create(true).truncate(true).open(&positional_args[1])
        };
        match open_result {
            Ok(f) => {
                xxd.output = Box::new(BufWriter::new(f));
            }
            Err(e) => {
                eprintln!("{}: {}: {}", program_name, positional_args[1], e);
                exit(3);
            }
        }
    }

    // Handle seek
    if xxd.seekoff != 0 || xxd.negseek {
        // Try to seek on input if it's a file
        let seek_result = if let Some(ref filename) = xxd.input_filename {
            if filename != "stdin" {
                // Reopen as seekable
                if let Ok(mut f) = File::open(filename) {
                    let seek_pos = if xxd.negseek {
                        f.seek(SeekFrom::End(-xxd.seekoff))
                    } else if xxd.relative_seek {
                        f.seek(SeekFrom::Current(xxd.seekoff))
                    } else {
                        f.seek(SeekFrom::Start(xxd.seekoff as u64))
                    };
                    match seek_pos {
                        Ok(pos) => {
                            xxd.seekoff = pos as i64;
                            xxd.input = Box::new(BufReader::new(f));
                            xxd.input_buffer_pos = 0;
                            xxd.input_buffer_len = 0;
                            Ok(())
                        }
                        Err(_) => Err(()),
                    }
                } else {
                    Err(())
                }
            } else {
                Err(())
            }
        } else {
            Err(())
        };

        if seek_result.is_err() && !xxd.negseek {
            // Manual skip by reading
            for _ in 0..xxd.seekoff {
                if xxd.getc().is_none() {
                    exit_with_error(4, Some("Sorry, cannot seek."), &program_name);
                }
            }
        } else if seek_result.is_err() && xxd.negseek {
            exit_with_error(4, Some("Sorry, cannot seek."), &program_name);
        }
    }

    let status = match hextype {
        HexType::Normal => hex_normal(&mut xxd),
        HexType::Bits => hex_bits(&mut xxd),
        HexType::CInclude => hex_cinclude(&mut xxd),
        HexType::LittleEndian => hex_littleendian(&mut xxd),
        HexType::PostScript => hex_postscript(&mut xxd),
        HexType::BitsAndCInclude => hex_cinclude_bits(&mut xxd),
    };

    xxd.flush();
    exit(status);
}

fn parse_number(s: &str) -> i64 {
    let s = s.trim();
    if s.starts_with("0x") || s.starts_with("0X") {
        i64::from_str_radix(&s[2..], 16).unwrap_or(0)
    } else if s.starts_with("0") && s.len() > 1 && !s.contains(|c: char| c == '8' || c == '9') {
        i64::from_str_radix(&s[1..], 8).unwrap_or(0)
    } else {
        s.parse().unwrap_or(0)
    }
}

fn parse_unsigned(s: &str) -> u64 {
    let s = s.trim();
    if s.starts_with("0x") || s.starts_with("0X") {
        u64::from_str_radix(&s[2..], 16).unwrap_or(0)
    } else if s.starts_with("0") && s.len() > 1 && !s.contains(|c: char| c == '8' || c == '9') {
        u64::from_str_radix(&s[1..], 8).unwrap_or(0)
    } else {
        s.parse().unwrap_or(0)
    }
}

fn parse_offset(s: &str) -> (bool, bool, u64) {
    let mut s = s;
    let mut rel = false;
    let mut neg = false;

    if s.starts_with('+') {
        rel = true;
        s = &s[1..];
    }
    if s.starts_with('-') {
        neg = true;
        s = &s[1..];
    }

    let val = parse_unsigned(s);
    (rel, neg, val)
}
