#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

enum { COLS = 256 };
enum { LLENP1 = 39 // addr: ⌈log10(ULONG_MAX)⌉ if "-d" flag given. We assume ULONG_MAX = 2**128
        + 2 // ": "
        + 13 * COLS // hex dump with colors
        + (COLS - 1) // whitespace between groups if "-g1" option given and "-c" maxed out
        + 2 // whitespace
        + 12 * COLS // ASCII dump with colors
        + 2 // "\n\0"
};

#define INPUT_BUFFER_SIZE 4096

typedef struct {
    FILE* input;
    FILE* output;
    const char* program_name;
    const char* decimal_format_string;
    const char* hex_digits;
    const char* varname;
    const char* input_filename;
    long seekoff;
    uint64_t displayoff;
    long length;
    int cols;
    int octspergrp;
    bool autoskip;
    bool colsgiven;
    bool revert;
    bool color;
    bool ascii;
    bool capitalize;
    bool uppercase_hex;
    bool negseek;
    bool relative_seek;
    uint8_t input_buffer[INPUT_BUFFER_SIZE];
    size_t input_buffer_pos;
    size_t input_buffer_len;
} Xxd;

// ColorDigit is the second digit for a terminal color code that starts with '3'
enum ColorDigit {
    COLOR_RED = '1',
    COLOR_GREEN = '2',
    COLOR_YELLOW = '3',
    COLOR_BLUE = '4',
    COLOR_WHITE = '7'
};

// This is an EBCDIC to ASCII conversion table from a proposed BTL standard, 16th of April 1979
const uint8_t etoa64[] = {
    0040, 0240, 0241, 0242, 0243, 0244, 0245, 0246,
    0247, 0250, 0325, 0056, 0074, 0050, 0053, 0174,
    0046, 0251, 0252, 0253, 0254, 0255, 0256, 0257,
    0260, 0261, 0041, 0044, 0052, 0051, 0073, 0176,
    0055, 0057, 0262, 0263, 0264, 0265, 0266, 0267,
    0270, 0271, 0313, 0054, 0045, 0137, 0076, 0077,
    0272, 0273, 0274, 0275, 0276, 0277, 0300, 0301,
    0302, 0140, 0072, 0043, 0100, 0047, 0075, 0042,
    0303, 0141, 0142, 0143, 0144, 0145, 0146, 0147,
    0150, 0151, 0304, 0305, 0306, 0307, 0310, 0311,
    0312, 0152, 0153, 0154, 0155, 0156, 0157, 0160,
    0161, 0162, 0136, 0314, 0315, 0316, 0317, 0320,
    0321, 0345, 0163, 0164, 0165, 0166, 0167, 0170,
    0171, 0172, 0322, 0323, 0324, 0133, 0326, 0327,
    0330, 0331, 0332, 0333, 0334, 0335, 0336, 0337,
    0340, 0341, 0342, 0343, 0344, 0135, 0346, 0347,
    0173, 0101, 0102, 0103, 0104, 0105, 0106, 0107,
    0110, 0111, 0350, 0351, 0352, 0353, 0354, 0355,
    0175, 0112, 0113, 0114, 0115, 0116, 0117, 0120,
    0121, 0122, 0356, 0357, 0360, 0361, 0362, 0363,
    0134, 0237, 0123, 0124, 0125, 0126, 0127, 0130,
    0131, 0132, 0364, 0365, 0366, 0367, 0370, 0371,
    0060, 0061, 0062, 0063, 0064, 0065, 0066, 0067,
    0070, 0071, 0372, 0373, 0374, 0375, 0376, 0377
};

// Lookup table for hex digit parsing: -1 = invalid, 0-15 = valid hex value
static const int8_t hex_digit_table[256] = {
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, // 0x00-0x0F
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, // 0x10-0x1F
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, // 0x20-0x2F
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1, -1, -1, -1, -1, -1, // 0x30-0x3F ('0'-'9')
    -1, 10, 11, 12, 13, 14, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1, // 0x40-0x4F ('A'-'F')
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, // 0x50-0x5F
    -1, 10, 11, 12, 13, 14, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1, // 0x60-0x6F ('a'-'f')
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, // 0x70-0x7F
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, // 0x80-0x8F
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, // 0x90-0x9F
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, // 0xA0-0xAF
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, // 0xB0-0xBF
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, // 0xC0-0xCF
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, // 0xD0-0xDF
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, // 0xE0-0xEF
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 // 0xF0-0xFF
};

static inline int parse_hex_digit(int c)
{
    return hex_digit_table[(uint8_t)c];
}

static inline int parse_binary_digit(int c)
{
    return (c == '0' || c == '1') ? c - '0' : -1;
}

static void exit_with_usage(const char* program_name, const char* version)
{
    fprintf(stderr, "Usage:\n       %s [options] [infile [outfile]]\n    or\n       %s -r [-s [-]offset] [-c cols] [-ps] [infile [outfile]]\nOptions:\n    -a          toggle autoskip: A single '*' replaces nul-lines. Default off.\n    -b          binary digit dump (incompatible with -ps). Default hex.\n    -C          capitalize variable names in C include file style (-i).\n    -c cols     format <cols> octets per line. Default 16 (-i: 12, -ps: 30).\n    -E          show characters in EBCDIC. Default ASCII.\n    -e          little-endian dump (incompatible with -ps,-i,-r).\n    -g bytes    number of octets per group in normal output. Default 2 (-e: 4).\n    -h          print this summary.\n    -i          output in C include file style.\n    -l len      stop after <len> octets.\n    -n name     set the variable name used in C include output (-i).\n    -o off      add <off> to the displayed file position.\n    -ps         output in postscript plain hexdump style.\n    -r          reverse operation: convert (or patch) hexdump into binary.\n    -r -s off   revert with <off> added to file positions found in hexdump.\n    -d          show offset in decimal instead of hex.\n    -s [+][-]seek  start at <seek> bytes abs. (or +: rel.) infile offset.\n    -u          use upper case hex letters.\n    -R when     colorize the output; <when> can be 'always', 'auto' or 'never'. Default: 'auto'.\n    -v          show version: \"%s\".\n", program_name, program_name, version);
    exit(EXIT_FAILURE);
}

static void exit_with_error(const int exit_code, const char* message, const char* program_name)
{
    if (message) {
        fprintf(stderr, "%s: %s\n", program_name, message);
        exit(exit_code);
    }
    fprintf(stderr, "%s: ", program_name);
    perror(NULL);
    exit(exit_code);
}

static void exit_with_col_error(const char* program_name)
{
    fprintf(stderr, "%s: invalid number of columns (max. %d).\n", program_name, COLS);
    exit(EXIT_FAILURE);
}

static inline int getc_or_die(int* ch, const Xxd* xxd_config)
{
    Xxd* xxd = (Xxd*)xxd_config;
    if (xxd->input_buffer_pos >= xxd->input_buffer_len) {
        xxd->input_buffer_len = fread(xxd->input_buffer, 1, INPUT_BUFFER_SIZE, xxd->input);
        xxd->input_buffer_pos = 0;
        if (xxd->input_buffer_len == 0) { // EOF or error
            *ch = EOF;
            if (ferror(xxd->input)) {
                exit_with_error(2, NULL, xxd->program_name);
            }
            return EOF;
        }
    }
    *ch = xxd->input_buffer[xxd->input_buffer_pos++];
    return *ch;
}

static inline void putc_or_die(int ch, const Xxd* xxd)
{
    if (putc(ch, xxd->output) == EOF) {
        exit_with_error(3, NULL, xxd->program_name);
    }
}

static inline void fputs_or_die(const char* s, const Xxd* xxd)
{
    if (fputs(s, xxd->output) == EOF) {
        exit_with_error(3, NULL, xxd->program_name);
    }
}

static inline void fflush_or_die(const Xxd* xxd)
{
    if (fflush(xxd->output)) {
        exit_with_error(3, NULL, xxd->program_name);
    }
}

static void fclose_or_die(const Xxd* xxd)
{
    if (fclose(xxd->output)) {
        exit_with_error(3, NULL, xxd->program_name);
    } else if (fclose(xxd->input)) {
        exit_with_error(2, NULL, xxd->program_name);
    }
}

static inline void skip_to_eol_or_die(int* ch, const Xxd* xxd)
{
    while (*ch != '\n' && *ch != EOF) {
        getc_or_die(ch, xxd);
    }
}

static inline void fflush_fseek_and_putc(const long* base_off, const uint64_t* want_off, uint64_t* have_off, const Xxd* xxd)
{
    const uint64_t target_offset = (uint64_t)*base_off + *want_off;
    if (target_offset == *have_off) {
        return;
    }
    fflush_or_die(xxd);
    if (fseek(xxd->output, (long)(target_offset - *have_off), SEEK_CUR) >= 0) {
        *have_off = target_offset;
    } else if (target_offset < *have_off) {
        exit_with_error(5, "Sorry, cannot seek backwards.", xxd->program_name);
    }
    while (*have_off < target_offset) {
        putc_or_die(0, xxd);
        (*have_off)++;
    }
}

static int decode_hex_stream_postscript(const long base_off, const Xxd* xxd)
{
    bool ignore = true;
    int c = 0, n1 = -1, n2 = 0, n3 = 0, tmp = -1;
    uint64_t have_off = 0, want_off = 0;
    rewind(xxd->input);
    ((Xxd*)xxd)->input_buffer_pos = 0;
    ((Xxd*)xxd)->input_buffer_len = 0;
    while (((c = getc_or_die(&c, xxd)) != EOF)) {
        if (c == ' ' || c == '\n' || c == '\t' || c == '\r') {
            continue;
        }
        if ((tmp = parse_hex_digit(c)) == -1 && ignore) {
            continue;
        }
        n3 = n2;
        n2 = n1;
        n1 = tmp;
        fflush_fseek_and_putc(&base_off, &want_off, &have_off, xxd);
        if (n2 >= 0 && n1 >= 0) {
            putc_or_die((n2 << 4) | n1, xxd);
            have_off++;
            want_off++;
            n1 = -1;
        } else if (n1 < 0 && n2 < 0 && n3 < 0) {
            skip_to_eol_or_die(&c, xxd);
        }
        ignore = (c == '\n');
    }
    fflush_or_die(xxd);
    fseek(xxd->output, 0L, SEEK_END);
    fclose_or_die(xxd);
    return 0;
}

static int decode_hex_stream_normal(const int cols, const long base_off, const Xxd* xxd)
{
    bool ignore = true;
    int c = 0, n1 = -1, n2 = 0, n3 = 0, p = cols, tmp = -1;
    uint64_t have_off = 0, want_off = 0;
    rewind(xxd->input);
    ((Xxd*)xxd)->input_buffer_pos = 0;
    ((Xxd*)xxd)->input_buffer_len = 0;
    while (((c = getc_or_die(&c, xxd)) != EOF) && c != '\r') {
        if ((tmp = parse_hex_digit(c)) == -1 && ignore) {
            continue;
        }
        n3 = n2;
        n2 = n1;
        n1 = tmp;
        if (p >= cols) {
            if (n1 < 0) {
                p = 0;
            } else {
                want_off = (want_off << 4) | (uint64_t)n1;
            }
            ignore = false;
            continue;
        }
        if (n2 >= 0 && n1 >= 0) {
            fflush_fseek_and_putc(&base_off, &want_off, &have_off, xxd);
            putc_or_die((n2 << 4) | n1, xxd);
            have_off++;
            want_off++;
            n1 = -1;
            if (++p >= cols) {
                skip_to_eol_or_die(&c, xxd);
            }
        } else if (n1 < 0 && n2 < 0 && n3 < 0) {
            skip_to_eol_or_die(&c, xxd);
        }
        if (c != '\n') {
            ignore = false;
        } else {
            ignore = true;
            want_off = 0;
            p = cols;
        }
    }
    fflush_or_die(xxd);
    fseek(xxd->output, 0L, SEEK_END);
    fclose_or_die(xxd);
    return 0;
}

static int decode_hex_stream_bits(const int cols, const Xxd* xxd)
{
    bool ignore = true;
    int bit = 0, bit_buffer = 0, bit_count = 0, c = 0, n1 = -1, p = cols;
    long want_off = 0;
    rewind(xxd->input);
    ((Xxd*)xxd)->input_buffer_pos = 0;
    ((Xxd*)xxd)->input_buffer_len = 0;
    while (((c = getc_or_die(&c, xxd)) != EOF) && c != '\r') {
        if ((n1 = parse_hex_digit(c)) == -1 && ignore) {
            continue;
        }
        bit = parse_binary_digit(c);
        if (bit != -1) {
            bit_buffer = ((bit_buffer << 1) | bit);
            bit_count++;
        }
        ignore = false;
        if (p >= cols) {
            if (n1 < 0) {
                p = 0;
                bit_count = 0;
            } else {
                want_off = (want_off << 4) | n1;
            }
            continue;
        }
        if (c == '\n') {
            want_off = 0;
        }
        if (bit_count == 8) {
            putc_or_die(bit_buffer, xxd);
            want_off++;
            bit_buffer = 0;
            bit_count = 0;
            if (++p >= cols) {
                skip_to_eol_or_die(&c, xxd);
            }
        }
    }
    fflush_or_die(xxd);
    fseek(xxd->output, 0L, SEEK_END);
    fclose_or_die(xxd);
    return 0;
}

static inline void print_or_suppress_zero_line(const char* buffer, char* z, const int nz, const Xxd* xxd)
{
    static int zero_seen = 0;
    if (nz) {
        if (nz < 0) {
            zero_seen--;
        }
        if (zero_seen == 2) {
            fputs_or_die(z, xxd);
        } else if (zero_seen > 2) {
            putc_or_die('*', xxd);
            putc_or_die('\n', xxd);
        }
        if (nz >= 0 || zero_seen > 0) {
            fputs_or_die(buffer, xxd);
        }
        zero_seen = 0;
    } else {
        zero_seen++;
        if (zero_seen == 1) {
            fputs_or_die(buffer, xxd);
        } else if (zero_seen == 2) {
            strcpy(z, buffer);
        }
    }
}

static inline void set_color(char* buffer, int* c, const enum ColorDigit color_digit)
{
    buffer[(*c)++] = '\033';
    buffer[(*c)++] = '[';
    buffer[(*c)++] = '1';
    buffer[(*c)++] = ';';
    buffer[(*c)++] = '3';
    buffer[(*c)++] = (char)color_digit;
    buffer[(*c)++] = 'm';
}

static inline void clear_color(char* buffer, int* c)
{
    buffer[(*c)++] = '\033';
    buffer[(*c)++] = '[';
    buffer[(*c)++] = '0';
    buffer[(*c)++] = 'm';
}

// Lookup tables for character colorization: '1'=RED, '2'=GREEN, '3'=YELLOW, '4'=BLUE, '7'=WHITE
static const uint8_t ebcdic_color_table[256] = {
    '7', '1', '1', '1', '1', '3', '1', '1', '1', '1', '1', '1', '1', '3', '1', '1', // 0x00-0x0F: 0=WHITE, 5,13=YELLOW
    '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', // 0x10-0x1F
    '1', '1', '1', '1', '1', '3', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', // 0x20-0x2F: 37=YELLOW
    '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', // 0x30-0x3F
    '2', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '2', '2', '2', '2', '2', // 0x40-0x4F: 64,75-80=GREEN
    '2', '1', '1', '1', '1', '1', '1', '1', '1', '1', '2', '2', '2', '2', '2', '2', // 0x50-0x5F: 80,90-97=GREEN
    '2', '2', '1', '1', '1', '1', '1', '1', '1', '1', '1', '2', '2', '2', '2', '2', // 0x60-0x6F: 97,107-111=GREEN
    '1', '1', '1', '1', '1', '1', '1', '1', '1', '2', '2', '2', '2', '2', '2', '2', // 0x70-0x7F: 121-127=GREEN
    '1', '2', '2', '2', '2', '2', '2', '2', '2', '2', '1', '1', '1', '1', '1', '1', // 0x80-0x8F: 129-137=GREEN
    '1', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '1', '1', '1', '1', '1', // 0x90-0x9F: 145-154=GREEN
    '1', '1', '2', '2', '2', '2', '2', '2', '2', '2', '1', '1', '1', '2', '1', '1', // 0xA0-0xAF: 162-169,173=GREEN
    '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '2', '1', '1', // 0xB0-0xBF: 189=GREEN
    '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '1', '1', '1', '1', '1', '1', // 0xC0-0xCF: 192-201=GREEN
    '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '1', '1', '1', '1', '1', '1', // 0xD0-0xDF: 208-217=GREEN
    '2', '1', '2', '2', '2', '2', '2', '2', '2', '2', '1', '1', '1', '1', '1', '1', // 0xE0-0xEF: 224,226-233=GREEN
    '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '1', '1', '1', '1', '1', '4' // 0xF0-0xFF: 240-249=GREEN, 255=BLUE
};

static const uint8_t ascii_color_table[256] = {
    '7', '1', '1', '1', '1', '1', '1', '1', '1', '3', '3', '1', '1', '3', '1', '1', // 0x00-0x0F: 0=WHITE, 9,10,13=YELLOW
    '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', // 0x10-0x1F
    '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', // 0x20-0x2F: printable
    '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', // 0x30-0x3F: printable
    '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', // 0x40-0x4F: printable
    '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', // 0x50-0x5F: printable
    '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', // 0x60-0x6F: printable
    '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '1', // 0x70-0x7F: printable except 127
    '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', // 0x80-0x8F
    '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', // 0x90-0x9F
    '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', // 0xA0-0xAF
    '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', // 0xB0-0xBF
    '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', // 0xC0-0xCF
    '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', // 0xD0-0xDF
    '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', // 0xE0-0xEF
    '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '4' // 0xF0-0xFF: 255=BLUE
};

static inline enum ColorDigit ebcdic_char_color(const uint8_t e)
{
    return (enum ColorDigit)ebcdic_color_table[e];
}

static inline enum ColorDigit ascii_char_color(const uint8_t e)
{
    return (enum ColorDigit)ascii_color_table[e];
}

static inline void update_color_state(char* buffer, int* buf_idx, char* current_color, uint8_t byte_val, const Xxd* xxd)
{
    if (!xxd->color) {
        return;
    }
    char new_color = (char)(xxd->ascii ? ascii_char_color(byte_val) : ebcdic_char_color(byte_val));
    if (new_color != *current_color) {
        if (*current_color != 0) {
            clear_color(buffer, buf_idx);
        }
        if (new_color != 0) {
            set_color(buffer, buf_idx, (enum ColorDigit)new_color);
        }
        *current_color = new_color;
    }
}

static int hex_postscript(const Xxd* xxd, int e)
{
    if (xxd->colsgiven && xxd->cols < 0) {
        exit_with_col_error(xxd->program_name);
    }
    if (xxd->revert) {
        return decode_hex_stream_postscript(xxd->negseek ? -xxd->seekoff : xxd->seekoff, xxd);
    }
    long n = 0;
    int p = xxd->cols;
    getc_or_die(&e, xxd);
    while ((xxd->length < 0 || n < xxd->length) && e != EOF) {
        putc_or_die(xxd->hex_digits[(e >> 4) & 0xf], xxd);
        putc_or_die(xxd->hex_digits[e & 0xf], xxd);
        n++;
        if (xxd->cols > 0 && !--p) {
            putc_or_die('\n', xxd);
            p = xxd->cols;
        }
        getc_or_die(&e, xxd);
    }
    if (!xxd->cols || p < xxd->cols) {
        putc_or_die('\n', xxd);
    }
    return 0;
}

static inline void print_varname(const char* varname, const Xxd* xxd)
{
    for (int i = 0, c; (c = varname[i]); i++) {
        if (!xxd->capitalize) {
            putc_or_die(isalnum((uint8_t)c) ? c : '_', xxd);
        } else {
            putc_or_die(isalnum((uint8_t)c) ? toupper((uint8_t)c) : '_', xxd);
        }
    }
}

static int hex_cinclude(const Xxd* xxd, int e)
{
    long p = 0;
    if (xxd->revert) {
        exit_with_error(-1, "Sorry, cannot revert this type of hexdump", xxd->program_name);
    }
    const char* varname = xxd->varname ? xxd->varname : xxd->input_filename;
    if (varname) {
        if (fprintf(xxd->output, "unsigned char %s", isdigit((uint8_t)varname[0]) ? "__" : "") < 0) {
            exit_with_error(3, NULL, xxd->program_name);
        }
        print_varname(varname, xxd);
        fputs_or_die("[] = {\n", xxd);
    }
    getc_or_die(&e, xxd);
    const char* hex_format_string = xxd->uppercase_hex ? "%s0X%02X" : "%s0x%02x";
    while ((xxd->length < 0 || p < xxd->length) && e != EOF) {
        if (fprintf(xxd->output, hex_format_string, (p % xxd->cols) ? ", " : (!p ? "  " : ",\n  "), e) < 0) {
            exit_with_error(3, NULL, xxd->program_name);
        }
        p++;
        getc_or_die(&e, xxd);
    }
    if (p) {
        putc_or_die('\n', xxd);
    }
    if (varname) {
        fputs_or_die("};\n", xxd);
        if (fprintf(xxd->output, "unsigned int %s", isdigit((uint8_t)varname[0]) ? "__" : "") < 0) {
            exit_with_error(3, NULL, xxd->program_name);
        }
        print_varname(varname, xxd);
        if (fprintf(xxd->output, "_%s = %ld;\n", xxd->capitalize ? "LEN" : "len", p) < 0) {
            exit_with_error(3, NULL, xxd->program_name);
        }
    }
    return 0;
}

static int hex_cinclude_bits(const Xxd* xxd, int e)
{
    long p = 0;
    if (xxd->revert) {
        exit_with_error(-1, "Sorry, cannot revert this type of hexdump", xxd->program_name);
    }
    const char* varname = xxd->varname ? xxd->varname : xxd->input_filename;
    if (varname) {
        if (fprintf(xxd->output, "unsigned char %s", isdigit((uint8_t)varname[0]) ? "__" : "") < 0) {
            exit_with_error(3, NULL, xxd->program_name);
        }
        print_varname(varname, xxd);
        fputs_or_die("[] = {\n", xxd);
    }
    getc_or_die(&e, xxd);
    while ((xxd->length < 0 || p < xxd->length) && e != EOF) {
        if (p == 0) {
            fputs_or_die("  ", xxd);
        } else if (p % xxd->cols == 0) {
            fputs_or_die(",\n  ", xxd);
        } else {
            fputs_or_die(", ", xxd);
        }
        fputs_or_die("0b", xxd);
        for (int bit = 7; bit >= 0; bit--) {
            putc_or_die(((e >> bit) & 1) + '0', xxd);
        }
        p++;
        getc_or_die(&e, xxd);
    }
    if (p) {
        putc_or_die('\n', xxd);
    }
    if (varname) {
        fputs_or_die("};\n", xxd);
        if (fprintf(xxd->output, "unsigned int %s", isdigit((uint8_t)varname[0]) ? "__" : "") < 0) {
            exit_with_error(3, NULL, xxd->program_name);
        }
        print_varname(varname, xxd);
        if (fprintf(xxd->output, "_%s = %ld;\n", xxd->capitalize ? "LEN" : "len", p) < 0) {
            exit_with_error(3, NULL, xxd->program_name);
        }
    }
    return 0;
}

static int hex_bits(char* buffer, char* z, const Xxd* xxd, int e)
{
    long n = 0;
    int nonzero = 0, p = 0, addrlen = 9;
    int max_idx = 0;
    if (!xxd->colsgiven || !xxd->cols) {
        // cols = 6;
    } else if (xxd->cols < 1 || xxd->cols > COLS) {
        exit_with_col_error(xxd->program_name);
    }
    if (xxd->revert) {
        return decode_hex_stream_bits(xxd->cols, xxd);
    }
    int octspergrp = xxd->octspergrp;
    if (octspergrp < 0) {
        octspergrp = 1;
    } else if (octspergrp < 1 || octspergrp > xxd->cols) {
        octspergrp = xxd->cols;
    }
    getc_or_die(&e, xxd);
    const int grplen = 8 * octspergrp + 1;
    while ((xxd->length < 0 || n < xxd->length) && e != EOF) {
        if (!p) {
            addrlen = snprintf(buffer, LLENP1, xxd->decimal_format_string, ((uint64_t)n + (uint64_t)xxd->seekoff + xxd->displayoff));
            for (int c = addrlen; c < LLENP1; buffer[c++] = ' ')
                ;
            max_idx = addrlen;
        }
        int c = addrlen + 1 + (grplen * p) / octspergrp;
        for (int i = 7; i >= 0; i--) {
            buffer[c++] = ((e >> i) & 1) + '0';
        }
        if (c > max_idx)
            max_idx = c;

        // Binary mode (-b) does not colorize output, matching xxd behavior
        c = (grplen * xxd->cols - 1) / octspergrp;
        nonzero += e ? 1 : 0;
        if (!xxd->ascii) {
            e = (e < 64) ? '.' : etoa64[e - 64];
        }
        c += addrlen + 3 + p;
        buffer[c++] = (e < ' ' || e >= 127) ? '.' : (char)e;
        if (c > max_idx)
            max_idx = c;
        n++;
        if (++p == xxd->cols) {
            buffer[max_idx] = '\n';
            buffer[max_idx + 1] = '\0';
            print_or_suppress_zero_line(buffer, z, xxd->autoskip ? nonzero : 1, xxd);
            nonzero = 0;
            p = 0;
            max_idx = 0;
        }
        getc_or_die(&e, xxd);
    }
    if (p) {
        int c = max_idx;
        buffer[c++] = '\n';
        buffer[c] = '\0';
        print_or_suppress_zero_line(buffer, z, 1, xxd);
    } else if (xxd->autoskip) {
        print_or_suppress_zero_line(buffer, z, -1, xxd);
    }
    return 0;
}

static int hex_normal(char* buffer, char* z, const Xxd* xxd, int e)
{
    char current_color = 0;
    long n = 0;
    int nonzero = 0, p = 0;
    uint8_t line_data[COLS];
    if (xxd->colsgiven && xxd->cols && (xxd->cols < 1 || xxd->cols > COLS)) {
        exit_with_col_error(xxd->program_name);
    }
    if (xxd->revert) {
        return decode_hex_stream_normal(xxd->cols, xxd->negseek ? -xxd->seekoff : xxd->seekoff, xxd);
    }
    int octspergrp = xxd->octspergrp;
    if (octspergrp < 0) {
        octspergrp = 2;
    } else if (octspergrp < 1 || octspergrp > xxd->cols) {
        octspergrp = xxd->cols;
    }
    getc_or_die(&e, xxd);
    while ((xxd->length < 0 || n < xxd->length) && e != EOF) {
        line_data[p] = (uint8_t)e;
        if (e) {
            nonzero++;
        }
        n++;
        p++;
        if (p == xxd->cols) {
            int buf_idx = snprintf(buffer, LLENP1, xxd->decimal_format_string, ((uint64_t)(n - p) + (uint64_t)xxd->seekoff + xxd->displayoff));
            while (buf_idx < 9) {
                buffer[buf_idx++] = ' ';
            }
            buffer[buf_idx++] = ' ';
            for (int i = 0; i < p; i++) {
                if (i > 0 && (i % octspergrp) == 0) {
                    if (current_color != 0) {
                        clear_color(buffer, &buf_idx);
                        current_color = 0;
                    }
                    buffer[buf_idx++] = ' ';
                }
                int val = line_data[i];
                update_color_state(buffer, &buf_idx, &current_color, (uint8_t)val, xxd);
                buffer[buf_idx++] = xxd->hex_digits[(val >> 4) & 0xf];
                buffer[buf_idx++] = xxd->hex_digits[val & 0xf];
            }
            if (current_color != 0) {
                clear_color(buffer, &buf_idx);
                current_color = 0;
            }
            buffer[buf_idx++] = ' ';
            buffer[buf_idx++] = ' ';
            for (int i = 0; i < p; i++) {
                int val = line_data[i];
                int pval = val;
                if (!xxd->ascii) { // If EBCDIC mode
                    pval = (val < 64) ? '.' : etoa64[val - 64];
                }
                update_color_state(buffer, &buf_idx, &current_color, (uint8_t)val, xxd);
                buffer[buf_idx++] = ((unsigned char)pval < ' ' || (unsigned char)pval >= 127) ? '.' : (char)pval;
            }
            if (current_color != 0) {
                clear_color(buffer, &buf_idx);
                current_color = 0;
            }
            buffer[buf_idx++] = '\n';
            buffer[buf_idx] = '\0';
            print_or_suppress_zero_line(buffer, z, xxd->autoskip ? nonzero : 1, xxd);
            p = 0;
            nonzero = 0;
        }
        getc_or_die(&e, xxd);
    }
    if (p) {
        int buf_idx = snprintf(buffer, LLENP1, xxd->decimal_format_string, ((uint64_t)(n - p) + (uint64_t)xxd->seekoff + xxd->displayoff));
        while (buf_idx < 9) {
            buffer[buf_idx++] = ' ';
        }
        buffer[buf_idx++] = ' ';
        for (int i = 0; i < p; i++) {
            if (i > 0 && (i % octspergrp) == 0) {
                if (current_color != 0) {
                    clear_color(buffer, &buf_idx);
                    current_color = 0;
                }
                buffer[buf_idx++] = ' ';
            }
            int val = line_data[i];
            update_color_state(buffer, &buf_idx, &current_color, (uint8_t)val, xxd);
            buffer[buf_idx++] = xxd->hex_digits[(val >> 4) & 0xf];
            buffer[buf_idx++] = xxd->hex_digits[val & 0xf];
        }
        if (current_color != 0) {
            clear_color(buffer, &buf_idx);
            current_color = 0;
        }
        int hex_pad_count = (xxd->cols - p);
        int hex_pad_seps = hex_pad_count / octspergrp;
        for (int i = 0; i < hex_pad_count + hex_pad_seps + 1; i++) {
            buffer[buf_idx++] = ' ';
        }
        if (xxd->color) {
            if (COLOR_RED != current_color) {
                if (current_color != 0) {
                    clear_color(buffer, &buf_idx);
                }
                set_color(buffer, &buf_idx, COLOR_RED);
                current_color = COLOR_RED;
            }
            for (int i = 0; i < hex_pad_count; i++) {
                buffer[buf_idx++] = ' ';
            }
            if (current_color != 0) {
                clear_color(buffer, &buf_idx);
                current_color = 0;
            }
        } else {
            for (int i = 0; i < hex_pad_count; i++) {
                buffer[buf_idx++] = ' ';
            }
        }
        buffer[buf_idx++] = ' ';
        for (int i = 0; i < p; i++) {
            int val = line_data[i];
            int pval = val;
            if (!xxd->ascii) {
                pval = (val < 64) ? '.' : etoa64[val - 64];
            }
            update_color_state(buffer, &buf_idx, &current_color, (uint8_t)val, xxd);
            buffer[buf_idx++] = ((unsigned char)pval < ' ' || (unsigned char)pval >= 127) ? '.' : (char)pval;
        }
        if (current_color != 0) {
            clear_color(buffer, &buf_idx);
            current_color = 0;
        }
        buffer[buf_idx++] = '\n';
        buffer[buf_idx] = '\0';
        print_or_suppress_zero_line(buffer, z, 1, xxd);
    } else if (xxd->autoskip) {
        print_or_suppress_zero_line(buffer, z, -1, xxd);
    }
    return 0;
}

static int hex_littleendian(char* buffer, char* z, const Xxd* xxd, int e)
{
    int nonzero = 0, addrlen = 9, p = 0, x = 0;
    int max_idx = 0;
    long n = 0;
    if (xxd->colsgiven && xxd->cols && (xxd->cols < 1 || xxd->cols > COLS)) {
        exit_with_col_error(xxd->program_name);
    }
    if (xxd->revert) {
        exit_with_error(-1, "Sorry, cannot revert this type of hexdump", xxd->program_name);
    }
    int octspergrp = xxd->octspergrp;
    if (octspergrp < 0) {
        octspergrp = 4;
    } else if (octspergrp < 1 || octspergrp > xxd->cols) {
        octspergrp = xxd->cols;
    } else if (octspergrp & (octspergrp - 1)) {
        exit_with_error(1, "number of octets per group must be a power of 2 with -e.", xxd->program_name);
    }
    getc_or_die(&e, xxd);
    // grplen includes color overhead when colors are enabled
    const int grplen = octspergrp + octspergrp + 1 + (xxd->color ? 11 * octspergrp : 0);
    while ((xxd->length < 0 || n < xxd->length) && e != EOF) {
        if (!p) {
            addrlen = snprintf(buffer, LLENP1, xxd->decimal_format_string, ((uint64_t)n + (uint64_t)xxd->seekoff + xxd->displayoff));
            for (int c = addrlen; c < LLENP1; buffer[c++] = ' ')
                ;
            max_idx = addrlen;
        }
        x = p ^ (octspergrp - 1);
        int c = addrlen + 1 + (grplen * x) / octspergrp;
        if (xxd->color) {
            set_color(buffer, &c, xxd->ascii ? ascii_char_color((uint8_t)e) : ebcdic_char_color((uint8_t)e));
            buffer[c++] = xxd->hex_digits[(e >> 4) & 0xf];
            buffer[c++] = xxd->hex_digits[e & 0xf];
            clear_color(buffer, &c);
            if (c > max_idx) {
                max_idx = c;
            }
            // ASCII column position: same logic as non-color path but with color overhead
            // Non-color ASCII position = grplen_nocolor * num_groups + addrlen + 2 + p
            // With color, hex area is grplen * num_groups, and each prior ASCII char adds 12 chars
            const int num_groups = (xxd->cols + octspergrp - 1) / octspergrp;
            c = grplen * num_groups + addrlen + 2 + p * 12;
            nonzero += e ? 1 : 0;
            set_color(buffer, &c, xxd->ascii ? ascii_char_color((uint8_t)e) : ebcdic_char_color((uint8_t)e));
            if (!xxd->ascii) {
                e = (e < 64) ? '.' : etoa64[e - 64];
            }
            buffer[c++] = (e < ' ' || e >= 127) ? '.' : (char)e;
            clear_color(buffer, &c);
            if (c > max_idx) {
                max_idx = c;
            }
        } else {
            buffer[c] = xxd->hex_digits[(e >> 4) & 0xf];
            buffer[++c] = xxd->hex_digits[e & 0xf];
            if (c + 1 > max_idx) {
                max_idx = c + 1;
            }
            c = grplen * ((xxd->cols + octspergrp - 1) / octspergrp);
            nonzero += e ? 1 : 0;
            if (!xxd->ascii) {
                e = (e < 64) ? '.' : etoa64[e - 64];
            }
            c += addrlen + 2 + p;
            buffer[c++] = (e < ' ' || e >= 127) ? '.' : (char)e;
            if (c > max_idx) {
                max_idx = c;
            }
        }
        n++;
        if (++p == xxd->cols) {
            buffer[max_idx] = '\n';
            buffer[max_idx + 1] = '\0';
            print_or_suppress_zero_line(buffer, z, xxd->autoskip ? nonzero : 1, xxd);
            nonzero = 0;
            p = 0;
            max_idx = 0;
        }
        getc_or_die(&e, xxd);
    }
    if (p) {
        int c = max_idx;
        if (xxd->color) {
            x = p;
            const int fill = (p % octspergrp) == 0 ? 0 : octspergrp - (p % octspergrp);
            c = addrlen + 1 + (grplen * (x - (octspergrp - fill))) / octspergrp;
            for (int i = 0; i < fill; i++) {
                set_color(buffer, &c, COLOR_RED);
                buffer[c++] = ' ';
                buffer[c++] = ' ';
                clear_color(buffer, &c);
                x++;
                p++;
            }
            c = addrlen + 1 + (grplen * x) / octspergrp + (xxd->cols - p) * 2 + (xxd->cols - p) / octspergrp;
            for (int i = xxd->cols - p; i > 0; i--) {
                set_color(buffer, &c, COLOR_RED);
                buffer[c++] = ' ';
                buffer[c++] = ' ';
                clear_color(buffer, &c);
            }
            if (c > max_idx) {
                max_idx = c;
            }
        }
        buffer[max_idx] = '\n';
        buffer[max_idx + 1] = '\0';
        print_or_suppress_zero_line(buffer, z, 1, xxd);
    } else if (xxd->autoskip) {
        print_or_suppress_zero_line(buffer, z, -1, xxd);
    }
    return 0;
}

static const char* base_name(const char* path)
{
    const char* lastSlash = strrchr(path, '/');
    return (lastSlash == NULL) ? path : lastSlash + 1;
}

int main(int argc, char* argv[])
{
    const char* version = "tinyxxd 1.3.9";
    Xxd xxd = {
        .input = stdin,
        .output = stdout,
        .program_name = base_name(argv[0]),
        .decimal_format_string = "%08lx:",
        .hex_digits = "0123456789abcdef",
        .varname = NULL,
        .input_filename = NULL,
        .seekoff = 0,
        .displayoff = 0,
        .length = -1,
        .cols = 0,
        .octspergrp = -1,
        .autoskip = false,
        .colsgiven = false,
        .revert = false,
        .color = false,
        .ascii = true,
        .capitalize = false,
        .uppercase_hex = false,
        .negseek = 0,
        .input_buffer_pos = 0,
        .input_buffer_len = 0
    };
    enum HexType {
        HEX_NORMAL,
        HEX_BITS,
        HEX_CINCLUDE,
        HEX_LITTLEENDIAN,
        HEX_POSTSCRIPT,
        HEX_BITS_AND_CINCLUDE
    };
    enum HexType hextype = HEX_NORMAL;
    const char* no_color = getenv("NO_COLOR");
    xxd.color = (no_color == NULL || no_color[0] == '\0') && isatty(STDOUT_FILENO);
    errno = 0;
    char* pp = NULL;
    while (argc >= 2) {
        pp = argv[1] + (!strncmp(argv[1], "--", 2) && argv[1][2]);
        if (!strncmp(pp, "-a", 2)) {
            xxd.autoskip = !xxd.autoskip;
        } else if (!strncmp(pp, "-b", 2)) {
            if (hextype == HEX_CINCLUDE) {
                hextype = HEX_BITS_AND_CINCLUDE;
            } else {
                hextype = HEX_BITS;
            }
        } else if (!strncmp(pp, "-e", 2)) {
            hextype = HEX_LITTLEENDIAN;
        } else if (!strncmp(pp, "-u", 2)) {
            xxd.uppercase_hex = true;
        } else if (!strncmp(pp, "-p", 2)) {
            hextype = HEX_POSTSCRIPT;
        } else if (!strncmp(pp, "-i", 2)) {
            if (hextype == HEX_BITS) {
                hextype = HEX_BITS_AND_CINCLUDE;
            } else {
                hextype = HEX_CINCLUDE;
            }
        } else if (!strncmp(pp, "-C", 2)) {
            xxd.capitalize = true;
        } else if (!strncmp(pp, "-d", 2)) {
            xxd.decimal_format_string = "%08ld:";
        } else if (!strncmp(pp, "-r", 2)) {
            xxd.revert = true;
        } else if (!strncmp(pp, "-E", 2)) {
            xxd.ascii = false;
        } else if (!strncmp(pp, "-v", 2)) {
            fprintf(stderr, "%s\n", version);
            exit(0);
        } else if (!strncmp(pp, "-c", 2)) {
            if (pp[2] && !strncmp("apitalize", pp + 2, 9)) {
                xxd.capitalize = true;
            } else if (pp[2] && strncmp("ols", pp + 2, 3)) {
                xxd.colsgiven = true;
                xxd.cols = (int)strtol(pp + 2, NULL, 0);
            } else {
                if (!argv[2]) {
                    exit_with_usage(xxd.program_name, version);
                }
                xxd.colsgiven = true;
                xxd.cols = (int)strtol(argv[2], NULL, 0);
                argv++;
                argc--;
            }
        } else if (!strncmp(pp, "-g", 2)) {
            if (pp[2] && strncmp("roup", pp + 2, 4)) {
                xxd.octspergrp = (int)strtol(pp + 2, NULL, 0);
            } else {
                if (!argv[2]) {
                    exit_with_usage(xxd.program_name, version);
                }
                xxd.octspergrp = (int)strtol(argv[2], NULL, 0);
                argv++;
                argc--;
            }
        } else if (!strncmp(pp, "-o", 2)) {
            int reloffset = 0, negoffset = 0;
            if (pp[2] && strncmp("ffset", pp + 2, 5)) {
                xxd.displayoff = strtoul(pp + 2, NULL, 0);
            } else {
                if (!argv[2]) {
                    exit_with_usage(xxd.program_name, version);
                }
                if (argv[2][0] == '+') {
                    reloffset++;
                }
                if (argv[2][reloffset] == '-') {
                    negoffset++;
                }
                if (negoffset) {
                    xxd.displayoff = ULONG_MAX - strtoul(argv[2] + reloffset + negoffset, NULL, 0) + 1;
                } else {
                    xxd.displayoff = strtoul(argv[2] + reloffset + negoffset, NULL, 0);
                }
                argv++;
                argc--;
            }
        } else if (!strncmp(pp, "-s", 2)) {
            char* seek_arg_ptr = pp + 2;
            xxd.negseek = false;
            xxd.relative_seek = false;
            if (*seek_arg_ptr == '+') {
                xxd.relative_seek = true;
                seek_arg_ptr++;
            }
            if (*seek_arg_ptr == '-') {
                xxd.negseek = true;
                seek_arg_ptr++;
            }
            xxd.seekoff = strtol(seek_arg_ptr, (char**)NULL, 0);
            if (!pp[2]) { // This means -s was given without an argument following immediately
                // Handle case where argument is in argv[2]
                if (!argv[2]) {
                    exit_with_usage(xxd.program_name, version);
                }
                seek_arg_ptr = argv[2];
                if (*seek_arg_ptr == '+') {
                    xxd.relative_seek = true;
                    seek_arg_ptr++;
                }
                if (*seek_arg_ptr == '-') {
                    xxd.negseek = true;
                    seek_arg_ptr++;
                }
                xxd.seekoff = strtol(seek_arg_ptr, (char**)NULL, 0);
                argv++;
                argc--;
            }
        } else if (!strncmp(pp, "-l", 2)) {
            if (pp[2] && strncmp("en", pp + 2, 2)) {
                xxd.length = strtol(pp + 2, (char**)NULL, 0);
            } else {
                if (!argv[2]) {
                    exit_with_usage(xxd.program_name, version);
                }
                xxd.length = strtol(argv[2], (char**)NULL, 0);
                argv++;
                argc--;
            }
        } else if (!strncmp(pp, "-n", 2)) {
            if (pp[2] && strncmp("ame", pp + 2, 3)) {
                xxd.varname = pp + 2;
            } else {
                if (!argv[2]) {
                    exit_with_usage(xxd.program_name, version);
                }
                xxd.varname = argv[2];
                argv++;
                argc--;
            }
        } else if (!strncmp(pp, "-R", 2)) {
            char* pw = pp + 2;
            if (!pw[0]) {
                pw = argv[2];
                argv++;
                argc--;
            }
            if (!pw) {
                exit_with_usage(xxd.program_name, version);
            }
            if (!strncmp(pw, "always", 6)) {
                xxd.color = true;
            } else if (!strncmp(pw, "never", 5)) {
                xxd.color = false;
            } else if (!strncmp(pw, "auto", 4)) {
                xxd.color = isatty(STDOUT_FILENO);
                errno = 0;
            } else {
                exit_with_usage(xxd.program_name, version);
            }
        } else if (!strcmp(pp, "--")) { // end of options
            argv++;
            argc--;
            break;
        } else if (pp[0] == '-' && pp[1]) { // unknown option
            exit_with_usage(xxd.program_name, version);
        } else {
            break; // not an option
        }
        argv++; // advance to next argument
        argc--;
    }
    if (xxd.uppercase_hex) {
        xxd.hex_digits = "0123456789ABCDEF";
    }
    // Default cols logic
    if (!xxd.colsgiven || !xxd.cols) {
        switch (hextype) {
        case HEX_POSTSCRIPT:
            xxd.cols = 30;
            break;
        case HEX_CINCLUDE:
            xxd.cols = 12;
            break;
        case HEX_BITS:
            xxd.cols = 6;
            break;
        case HEX_BITS_AND_CINCLUDE:
            xxd.cols = 6;
            break;
        case HEX_NORMAL:
        case HEX_LITTLEENDIAN:
        default:
            xxd.cols = 16;
            break;
        }
    } else if (hextype != HEX_POSTSCRIPT && xxd.cols < 1) {
        exit_with_col_error(xxd.program_name);
    }
    // Default octspergrp logic
    if (xxd.octspergrp < 0) {
        switch (hextype) {
        case HEX_BITS:
            xxd.octspergrp = 1;
            break;
        case HEX_NORMAL:
            xxd.octspergrp = 2;
            break;
        case HEX_LITTLEENDIAN:
            xxd.octspergrp = 4;
            break;
        default:
            xxd.octspergrp = 0;
            break;
        }
    }
    if (xxd.octspergrp < 1) {
        xxd.octspergrp = xxd.cols; // fallback if 0
    }
    if (argc > 3) {
        exit_with_usage(xxd.program_name, version);
    } else if (argc == 1 || (argv[1][0] == '-' && !argv[1][1])) {
        xxd.input = stdin;
        xxd.input_filename = "stdin";
    } else if (!(xxd.input = fopen(argv[1], "r"))) {
        fprintf(stderr, "%s: ", xxd.program_name);
        perror(argv[1]);
        return 2;
    } else {
        xxd.input_filename = argv[1];
    }
    if (argc < 3 || (argv[2][0] == '-' && !argv[2][1])) {
        xxd.output = stdout;
    } else {
        const int mode = xxd.revert ? O_WRONLY : (O_TRUNC | O_WRONLY);
        const int file_descriptor = open(argv[2], mode | O_CREAT, 0666);
        if ((file_descriptor < 0) || !(xxd.output = fdopen(file_descriptor, "w"))) {
            fprintf(stderr, "%s: ", xxd.program_name);
            perror(argv[2]);
            return 3;
        }
        rewind(xxd.output);
    }
    int e = 0;
    if (xxd.seekoff || xxd.negseek || !xxd.relative_seek) {
        if (xxd.negseek) {
            if ((e = fseek(xxd.input, -xxd.seekoff, xxd.relative_seek ? SEEK_CUR : SEEK_END)) < 0) {
                exit_with_error(4, "Sorry, cannot seek.", xxd.program_name);
            }
        } else {
            e = fseek(xxd.input, xxd.seekoff, xxd.relative_seek ? SEEK_CUR : SEEK_SET);
        }
        if (e >= 0) {
            xxd.seekoff = ftell(xxd.input);
        } else {
            int ch;
            for (long s = xxd.seekoff; s > 0; s--) {
                getc_or_die(&ch, &xxd);
                if (ch == EOF) {
                    exit_with_error(4, "Sorry, cannot seek.", xxd.program_name);
                }
            }
        }
    }
    static char buffer[LLENP1];
    static char z[LLENP1];
    int status = 0;
    switch (hextype) {
    case HEX_NORMAL:
        status = hex_normal(buffer, z, &xxd, e);
        break;
    case HEX_BITS:
        status = hex_bits(buffer, z, &xxd, e);
        break;
    case HEX_CINCLUDE:
        status = hex_cinclude(&xxd, e);
        break;
    case HEX_LITTLEENDIAN:
        status = hex_littleendian(buffer, z, &xxd, e);
        break;
    case HEX_POSTSCRIPT:
        status = hex_postscript(&xxd, e);
        break;
    case HEX_BITS_AND_CINCLUDE:
        status = hex_cinclude_bits(&xxd, e);
        break;
    }
    if (!xxd.revert) {
        fclose_or_die(&xxd);
    }
    return status;
}
