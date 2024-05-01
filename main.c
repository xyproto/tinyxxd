#include <ctype.h>
#include <fcntl.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// For static declarations of buffers
enum { COLS = 256 };
enum { LLENP1 = ((2 * (int)sizeof(unsigned long)) + 4 + (9 * COLS - 1) + COLS + 2) + 1 };

static FILE* input_file;
static FILE* output_file;

// ColorDigit is the second digit for a terminal color code that starts with '3'
enum ColorDigit {
    COLOR_RED = '1',
    COLOR_GREEN = '2',
    COLOR_YELLOW = '3',
    COLOR_BLUE = '4',
    COLOR_WHITE = '7'
};

// This is an EBCDIC to ASCII conversion table from a proposed BTL standard, 16th of April 1979
const unsigned char etoa64[] = {
    0040, 0240, 0241, 0242, 0243, 0244, 0245, 0246, 0247, 0250, 0325, 0056, 0074, 0050, 0053, 0174,
    0046, 0251, 0252, 0253, 0254, 0255, 0256, 0257, 0260, 0261, 0041, 0044, 0052, 0051, 0073, 0176,
    0055, 0057, 0262, 0263, 0264, 0265, 0266, 0267, 0270, 0271, 0313, 0054, 0045, 0137, 0076, 0077,
    0272, 0273, 0274, 0275, 0276, 0277, 0300, 0301, 0302, 0140, 0072, 0043, 0100, 0047, 0075, 0042,
    0303, 0141, 0142, 0143, 0144, 0145, 0146, 0147, 0150, 0151, 0304, 0305, 0306, 0307, 0310, 0311,
    0312, 0152, 0153, 0154, 0155, 0156, 0157, 0160, 0161, 0162, 0136, 0314, 0315, 0316, 0317, 0320,
    0321, 0345, 0163, 0164, 0165, 0166, 0167, 0170, 0171, 0172, 0322, 0323, 0324, 0133, 0326, 0327,
    0330, 0331, 0332, 0333, 0334, 0335, 0336, 0337, 0340, 0341, 0342, 0343, 0344, 0135, 0346, 0347,
    0173, 0101, 0102, 0103, 0104, 0105, 0106, 0107, 0110, 0111, 0350, 0351, 0352, 0353, 0354, 0355,
    0175, 0112, 0113, 0114, 0115, 0116, 0117, 0120, 0121, 0122, 0356, 0357, 0360, 0361, 0362, 0363,
    0134, 0237, 0123, 0124, 0125, 0126, 0127, 0130, 0131, 0132, 0364, 0365, 0366, 0367, 0370, 0371,
    0060, 0061, 0062, 0063, 0064, 0065, 0066, 0067, 0070, 0071, 0372, 0373, 0374, 0375, 0376, 0377
};

void exit_with_usage(const char* program_name, const char* version)
{
    fprintf(stderr,
        "Usage:\n"
        "       %s [options] [infile [outfile]]\n"
        "    or\n"
        "       %s -r [-s [-]offset] [-c cols] [-ps] [infile [outfile]]\n"
        "Options:\n"
        "    -a          toggle autoskip: A single '*' replaces nul-lines. Default off.\n"
        "    -b          binary digit dump (incompatible with -ps,-i). Default hex.\n"
        "    -C          capitalize variable names in C include file style (-i).\n"
        "    -c cols     format <cols> octets per line. Default 16 (-i: 12, -ps: 30).\n"
        "    -E          show characters in EBCDIC. Default ASCII.\n"
        "    -e          little-endian dump (incompatible with -ps,-i,-r).\n"
        "    -g bytes    number of octets per group in normal output. Default 2 (-e: 4).\n"
        "    -h          print this summary.\n"
        "    -i          output in C include file style.\n"
        "    -l len      stop after <len> octets.\n"
        "    -n name     set the variable name used in C include output (-i).\n"
        "    -o off      add <off> to the displayed file position.\n"
        "    -ps         output in postscript plain hexdump style.\n"
        "    -r          reverse operation: convert (or patch) hexdump into binary.\n"
        "    -r -s off   revert with <off> added to file positions found in hexdump.\n"
        "    -d          show offset in decimal instead of hex.\n"
        "    -s [+][-]seek  start at <seek> bytes abs. (or +: rel.) infile offset.\n"
        "    -u          use upper case hex letters.\n"
        "    -R when     colorize the output; <when> can be 'always', 'auto' or 'never'. Default: 'auto'.\n"
        "    -v          show version: \"%s\".\n",
        program_name, program_name, version);
    exit(1);
}

/* exit_with_error will print the message and exit if the message is not NULL.
 * Otherwise, it will print the perror and exit.
 */
void exit_with_error(const int exit_code, const char* message, const char* program_name)
{
    if (message) {
        fprintf(stderr, "%s: %s\n", program_name, message);
        exit(exit_code);
    }
    fprintf(stderr, "%s: ", program_name);
    perror(NULL);
    exit(exit_code);
}

void exit_with_col_error(const char* program_name)
{
    fprintf(stderr, "%s: invalid number of columns (max. %d).\n", program_name, COLS);
    exit(1);
}

static inline void getc_or_die(int* ch, const char* program_name)
{
    if ((*ch = getc(input_file)) == EOF && ferror(input_file)) {
        exit_with_error(2, NULL, program_name);
    }
}

static inline void putc_or_die(int ch, const char* program_name)
{
    if (putc(ch, output_file) == EOF) {
        exit_with_error(3, NULL, program_name);
    }
}

static inline void fputs_or_die(const char* s, const char* program_name)
{
    if (fputs(s, output_file) == EOF) {
        exit_with_error(3, NULL, program_name);
    }
}

static inline void fflush_or_die(const char* program_name)
{
    if (fflush(output_file)) {
        exit_with_error(3, NULL, program_name);
    }
}

void fclose_or_die(const char* program_name)
{
    if (fclose(output_file)) {
        exit_with_error(3, NULL, program_name);
    } else if (fclose(input_file)) {
        exit_with_error(2, NULL, program_name);
    }
}

// parse_hex_digits returns the decimal value if c is a hex digit, or otherwise -1.
inline int parse_hex_digit(const int ch)
{
    return (ch >= '0' && ch <= '9') ? ch - '0'
        : (ch >= 'a' && ch <= 'f')  ? ch - 'a' + 10
        : (ch >= 'A' && ch <= 'F')  ? ch - 'A' + 10
                                    : -1;
}

// parse_bin_digit returns the decimal value if c is a binary digit, or otherwise -1.
inline int parse_bin_digit(const int ch)
{
    return (ch < '0' || ch > '1') ? -1 : ch - '0';
}

// skip_to_eol_or_die will ignore text from the input file, until EOL or EOF
static inline void skip_to_eol_or_die(int* ch, const char* program_name)
{
    while (*ch != '\n' && *ch != EOF) {
        getc_or_die(ch, program_name);
    }
}

static inline void fflush_fseek_and_putc(const long* base_off, const long* want_off, long* have_off, const char* program_name)
{
    const long target_offset = *base_off + *want_off;
    if (target_offset == *have_off) {
        return;
    }
    fflush_or_die(program_name);
    if (fseek(output_file, target_offset - *have_off, SEEK_CUR) >= 0) {
        *have_off = target_offset;
    } else if (target_offset < *have_off) {
        exit_with_error(5, "Sorry, cannot seek backwards.", program_name);
    }
    while (*have_off < target_offset) {
        putc_or_die(0, program_name);
        (*have_off)++;
    }
}

/* decode_hex_stream_postscript decodes hex data from an input stream within 'cols' characters per line.
 * It aligns data in the output stream, filling with zeroes as needed to maintain the base offset.
 */
int decode_hex_stream_postscript(const long base_off, const char* program_name)
{
    bool ignore = true;
    int c = 0, n1 = -1, n2 = 0, n3 = 0, tmp = -1;
    long have_off = 0, want_off = 0;
    rewind(input_file);
    while (((c = getc(input_file)) != EOF) && c != ' ' && c != '\n' && c != '\t' && c != '\r') {
        if ((tmp = parse_hex_digit(c)) == -1 && ignore) {
            continue;
        }
        n3 = n2;
        n2 = n1;
        n1 = tmp;
        fflush_fseek_and_putc(&base_off, &want_off, &have_off, program_name);
        if (n2 >= 0 && n1 >= 0) {
            putc_or_die((n2 << 4) | n1, program_name);
            have_off++;
            want_off++;
            n1 = -1;
        } else if (n1 < 0 && n2 < 0 && n3 < 0) {
            skip_to_eol_or_die(&c, program_name);
        }
        ignore = (c == '\n');
    }
    fflush_or_die(program_name);
    fseek(output_file, 0L, SEEK_END);
    fclose_or_die(program_name);
    return 0;
}

/* decode_hex_stream_normal decodes hex data from an input stream within 'cols' characters per line.
 * It aligns data in the output stream, filling with zeroes as needed to maintain the base offset.
 */
int decode_hex_stream_normal(const int cols, const long base_off, const char* program_name)
{
    bool ignore = true;
    int c = 0, n1 = -1, n2 = 0, n3 = 0, p = cols, tmp = -1;
    long have_off = 0, want_off = 0;
    rewind(input_file);
    while (((c = getc(input_file)) != EOF) && c != '\r') {
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
                want_off = (want_off << 4) | n1;
            }
            ignore = false;
            continue;
        }
        fflush_fseek_and_putc(&base_off, &want_off, &have_off, program_name);
        if (n2 >= 0 && n1 >= 0) {
            putc_or_die((n2 << 4) | n1, program_name);
            have_off++;
            want_off++;
            n1 = -1;
            if (++p >= cols) {
                skip_to_eol_or_die(&c, program_name);
            }
        } else if (n1 < 0 && n2 < 0 && n3 < 0) {
            skip_to_eol_or_die(&c, program_name);
        }
        if (c != '\n') {
            ignore = false;
        } else {
            ignore = true;
            want_off = 0;
            p = cols;
        }
    }
    fflush_or_die(program_name);
    fseek(output_file, 0L, SEEK_END);
    fclose_or_die(program_name);
    return 0;
}

/* decode_hex_stream_bits decodes binary data from an input stream within 'cols' characters per line.
 * It aligns data in the output stream, filling with zeroes as needed to maintain the base offset.
 */
int decode_hex_stream_bits(const int cols, const char* program_name)
{
    bool ignore = true;
    int bit = 0, bit_buffer = 0, bit_count = 0, c = 0, n1 = -1, p = cols;
    long want_off = 0;
    rewind(input_file);
    while (((c = getc(input_file)) != EOF) && c != '\r') {
        if ((n1 = parse_hex_digit(c)) == -1 && ignore) {
            continue;
        }
        bit = parse_bin_digit(c);
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
            putc_or_die(bit_buffer, program_name);
            want_off++;
            bit_buffer = 0;
            bit_count = 0;
            if (++p >= cols) {
                skip_to_eol_or_die(&c, program_name);
            }
        }
    }
    fflush_or_die(program_name);
    fseek(output_file, 0L, SEEK_END);
    fclose_or_die(program_name);
    return 0;
}

/* print_or_suppress_zero_line prints line l.
 * If nz is false, it regards the line as a line of zeroes.
 * Replace three or more consecutive lines of zeros with a single '*' character.
 * If the output ends with more than two lines of zeroes,
 * you should call print_or_suppress_zero_line again with l being the last line and nz
 * negative. This ensures that the last line is shown even when it is all zeroes.
 * If nz is always positive, lines are never suppressed.
 */
static inline void print_or_suppress_zero_line(const char* buffer, char* z, const int nz, const char* program_name)
{
    static int zero_seen = 0;
    if (nz > 0) {
        if (zero_seen < 2) {
            fputs_or_die(buffer, program_name);
        } else if (zero_seen > 2) {
            putc_or_die('*', program_name);
            putc_or_die('\n', program_name);
            fputs_or_die(buffer, program_name);
        } else if (zero_seen == 2) {
            fputs_or_die(z, program_name);
            fputs_or_die(buffer, program_name);
        }
    } else if (nz < 0) {
        zero_seen--;
        if (zero_seen > 2) {
            putc_or_die('*', program_name);
            putc_or_die('\n', program_name);
            fputs_or_die(buffer, program_name);
        } else if (zero_seen < 2) {
            zero_seen = 0;
        } else if (zero_seen == 2) {
            fputs_or_die(z, program_name);
            fputs_or_die(buffer, program_name);
        }
    } else if (!nz) {
        if (!zero_seen) {
            zero_seen++; // zero_seen == 1
            fputs_or_die(buffer, program_name);
        } else if (zero_seen == 1) {
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
    buffer[(*c)++] = color_digit;
    buffer[(*c)++] = 'm';
}

static inline void clear_color(char* buffer, int* c)
{
    buffer[(*c)++] = '\033';
    buffer[(*c)++] = '[';
    buffer[(*c)++] = '0';
    buffer[(*c)++] = 'm';
}

static inline enum ColorDigit ebcdic_char_color(const unsigned char e)
{
    if ((e >= 75 && e <= 80) || (e >= 90 && e <= 97) || (e >= 107 && e <= 111) || (e >= 121 && e <= 127) || (e >= 129 && e <= 137) || (e >= 145 && e <= 154) || (e >= 162 && e <= 169) || (e >= 192 && e <= 201) || (e >= 208 && e <= 217) || (e >= 226 && e <= 233) || (e >= 240 && e <= 249) || (e == 64) || (e == 173) || (e == 189) || (e == 224)) {
        return COLOR_GREEN;
    }
    switch (e) {
    case 5:
    case 13:
    case 37:
        return COLOR_YELLOW;
    case 0:
        return COLOR_WHITE;
    case 255:
        return COLOR_BLUE;
    }
    return COLOR_RED;
}

inline enum ColorDigit ascii_char_color(const unsigned char e)
{
    if (e >= ' ' && e < 127) {
        return COLOR_GREEN;
    }
    switch (e) {
    case '\n':
    case '\t':
    case '\r':
        return COLOR_YELLOW;
    case '\0':
        return COLOR_WHITE;
    case 255:
        return COLOR_BLUE;
    }
    return COLOR_RED;
}

int hex_postscript(const bool colsgiven, int cols, int octspergrp, const bool revert, int e, const long length, const int negseek, const long seekoff, const char* hex_digits, const char* program_name)
{
    if (!colsgiven) {
        cols = 30;
    } else if (cols < 0) {
        exit_with_col_error(program_name);
    }
    if (revert) {
        return decode_hex_stream_postscript(negseek ? -seekoff : seekoff, program_name);
    }
    if (octspergrp < 1 || octspergrp > cols) {
        octspergrp = cols;
    }
    int n = 0, p = cols;
    getc_or_die(&e, program_name);
    while ((length < 0 || n < length) && e != EOF) {
        putc_or_die(hex_digits[(e >> 4) & 0xf], program_name);
        putc_or_die(hex_digits[e & 0xf], program_name);
        n++;
        if (cols > 0 && !--p) {
            putc_or_die('\n', program_name);
            p = cols;
        }
        getc_or_die(&e, program_name);
    }
    if (!cols || p < cols) {
        putc_or_die('\n', program_name);
    }
    return 0;
}

int hex_cinclude(const bool colsgiven, int cols, int octspergrp, const bool revert, int e, int c, const bool capitalize, const char* varname, const char* argv1, const bool uppercase_hex, const long length, const char* program_name)
{
    int p = 0;
    if (!colsgiven || !cols) {
        cols = 12;
    } else if (cols < 1) {
        exit_with_col_error(program_name);
    }
    if (revert) {
        exit_with_error(-1, "Sorry, cannot revert this type of hexdump", program_name);
    }
    if (octspergrp < 1 || octspergrp > cols) {
        octspergrp = cols;
    }
    if (!varname && input_file != stdin) {
        varname = argv1; // argv[1]
    }
    if (varname) {
        if (fprintf(output_file, "unsigned char %s", isdigit((unsigned char)varname[0]) ? "__" : "") < 0) {
            exit_with_error(3, NULL, program_name);
        }
        for (e = 0; (c = varname[e]); e++) {
            if (!capitalize) {
                putc_or_die(isalnum((unsigned char)c) ? c : '_', program_name);
            } else {
                putc_or_die(isalnum((unsigned char)c) ? toupper((unsigned char)(c)) : '_', program_name);
            }
        }
        fputs_or_die("[] = {\n", program_name);
    }
    getc_or_die(&c, program_name);
    const char* hex_format_string = uppercase_hex ? "%s0X%02X" : "%s0x%02x";
    while ((length < 0 || p < length) && c != EOF) {
        if (fprintf(output_file, hex_format_string, (p % cols) ? ", " : (!p ? "  " : ",\n  "), c) < 0) {
            exit_with_error(3, NULL, program_name);
        }
        p++;
        getc_or_die(&c, program_name);
    }
    if (p) {
        putc_or_die('\n', program_name);
    }
    if (varname) {
        fputs_or_die("};\n", program_name);
        if (fprintf(output_file, "unsigned int %s", isdigit((unsigned char)varname[0]) ? "__" : "") < 0) {
            exit_with_error(3, NULL, program_name);
        }
        for (e = 0; (c = varname[e]); e++) {
            if (!capitalize) {
                putc_or_die(isalnum((unsigned char)c) ? c : '_', program_name);
            } else {
                putc_or_die(isalnum((unsigned char)c) ? toupper((unsigned char)(c)) : '_', program_name);
            }
        }
        if (fprintf(output_file, "_%s = %d;\n", capitalize ? "LEN" : "len", p) < 0) {
            exit_with_error(3, NULL, program_name);
        }
    }
    return 0;
}

int hex_bits(char* buffer, char* z, const bool colsgiven, int cols, int octspergrp, const bool revert, int c, int e, const long length, const char* decimal_format_string, const long seekoff, const unsigned long displayoff, const bool color, const bool ascii, const bool autoskip, const char* program_name)
{
    int grplen = 0, n = 0, nonzero = 0, p = 0, addrlen = 9;
    if (!colsgiven || !cols) {
        cols = 6;
    } else if (cols < 1 || cols > COLS) {
        exit_with_col_error(program_name);
    }
    if (revert) {
        return decode_hex_stream_bits(cols, program_name);
    }
    if (octspergrp < 0) {
        octspergrp = 1;
    } else if (octspergrp < 1 || octspergrp > cols) {
        octspergrp = cols;
    }
    grplen = 8 * octspergrp + 1;
    getc_or_die(&e, program_name);
    while ((length < 0 || n < length) && e != EOF) {
        if (!p) {
            addrlen = snprintf(buffer, LLENP1, decimal_format_string, ((unsigned long)(n + seekoff + displayoff)));
            for (c = addrlen; c <= LLENP1; buffer[c++] = ' ')
                ;
        }
        c = addrlen + 1 + (grplen * p) / octspergrp;
        for (int i = 7; i >= 0; i--) {
            buffer[c++] = (e & (1 << i)) ? '1' : '0';
        }
        if (color) {
            c = (grplen * cols - 1) / octspergrp + addrlen + 3 + p * 12;
            nonzero += e ? 1 : 0;
            set_color(buffer, &c, ascii ? ascii_char_color(e) : ebcdic_char_color(e));
            if (!ascii) { // EBCDIC
                e = (e < 64) ? '.' : etoa64[e - 64];
            }
            buffer[c++] = (e < ' ' || e >= 127) ? '.' : e;
            clear_color(buffer, &c);
        } else {
            c = (grplen * cols - 1) / octspergrp;
            nonzero += e ? 1 : 0;
            if (!ascii) { // EBCDIC
                e = (e < 64) ? '.' : etoa64[e - 64];
            }
            c += addrlen + 3 + p;
            buffer[c++] = (e < ' ' || e >= 127) ? '.' : e;
        }
        n++;
        if (++p == cols) {
            buffer[c++] = '\n';
            buffer[c] = '\0';
            print_or_suppress_zero_line(buffer, z, autoskip ? nonzero : 1, program_name);
            nonzero = 0;
            p = 0;
        }
        getc_or_die(&e, program_name);
    }
    if (p) {
        buffer[c++] = '\n';
        buffer[c] = '\0';
        c += color ? 1 : 0;
        print_or_suppress_zero_line(buffer, z, 1, program_name);
    } else if (autoskip) {
        print_or_suppress_zero_line(buffer, z, -1, program_name); // last chance to flush out suppressed lines
    }
    return 0;
}

int hex_normal(char* buffer, char* z, const bool colsgiven, int cols, int octspergrp, const bool revert, const int negseek, const long seekoff, int e, const bool color, const bool ascii, const long length, const char* decimal_format_string, const unsigned long displayoff, int c, const char* hex_digits, const bool autoskip, const char* program_name)
{
    char color_digit = 0;
    int grplen = 0, n = 0, nonzero = 0, p = 0, addrlen = 9;
    if (!cols || !colsgiven) {
        cols = 16;
    } else if (cols < 1 || cols > COLS) {
        exit_with_col_error(program_name);
    }
    if (revert) {
        return decode_hex_stream_normal(cols, negseek ? -seekoff : seekoff, program_name);
    }
    if (octspergrp < 0) {
        octspergrp = 2;
    } else if (octspergrp < 1 || octspergrp > cols) {
        octspergrp = cols;
    }
    getc_or_die(&e, program_name);
    grplen = octspergrp + octspergrp + 1 + (color ? 11 * octspergrp : 0); // chars per octet group
    if (color) {
        while ((length < 0 || n < length) && e != EOF) {
            if (!p) {
                addrlen = snprintf(buffer, LLENP1, decimal_format_string, ((unsigned long)(n + seekoff + displayoff)));
                for (c = addrlen; c <= LLENP1; buffer[c++] = ' ')
                    ;
            }
            c = addrlen + 1 + (p * grplen) / octspergrp;
            if (ascii) { // ASCII
                color_digit = ascii_char_color(e);
                set_color(buffer, &c, color_digit);
                buffer[c++] = hex_digits[(e >> 4) & 0xf];
                buffer[c++] = hex_digits[e & 0xf];
                if (e) {
                    nonzero++;
                }
            } else { // EBCDIC
                color_digit = ebcdic_char_color(e);
                set_color(buffer, &c, color_digit);
                buffer[c++] = hex_digits[(e >> 4) & 0xf];
                buffer[c++] = hex_digits[e & 0xf];
                if (e == 0) {
                    nonzero++;
                    e = '.';
                } else if (e < 64) {
                    e = '.';
                } else {
                    e = etoa64[e - 64];
                }
            }
            clear_color(buffer, &c);
            c = addrlen + 3 + (grplen * cols - 1) / octspergrp + p * 12;
            set_color(buffer, &c, color_digit);
            buffer[c++] = (e < ' ' || e >= 127) ? '.' : e;
            clear_color(buffer, &c);
            n++;
            if (++p == cols) {
                buffer[c++] = '\n';
                buffer[c] = '\0';
                print_or_suppress_zero_line(buffer, z, autoskip ? nonzero : 1, program_name);
                nonzero = 0;
                p = 0;
            }
            getc_or_die(&e, program_name);
        }
    } else if (!color) { // no color
        while ((length < 0 || n < length) && e != EOF) {
            if (!p) {
                addrlen = snprintf(buffer, LLENP1, decimal_format_string, ((unsigned long)(n + seekoff + displayoff)));
                for (c = addrlen; c <= LLENP1; buffer[c++] = ' ')
                    ;
            }
            c = addrlen + 1 + (grplen * p) / octspergrp;
            buffer[c] = hex_digits[(e >> 4) & 0xf];
            buffer[++c] = hex_digits[e & 0xf];
            c = (grplen * cols - 1) / octspergrp;
            if (ascii) { // ASCII
                if (e) {
                    nonzero++;
                }
            } else { // EBCDIC
                if (e == 0) {
                    e = '.';
                } else if (e < 64) {
                    e = '.';
                    nonzero++;
                } else {
                    e = etoa64[e - 64];
                    nonzero++;
                }
            }
            c += addrlen + 3 + p;
            buffer[c++] = (e < ' ' || e >= 127) ? '.' : e;
            n++;
            if (++p == cols) {
                buffer[c++] = '\n';
                buffer[c] = '\0';
                print_or_suppress_zero_line(buffer, z, autoskip ? nonzero : 1, program_name);
                nonzero = 0;
                p = 0;
            }
            getc_or_die(&e, program_name);
        }
    }
    if (p) {
        buffer[c++] = '\n';
        buffer[c] = '\0';
        if (color) {
            c = addrlen + 1 + (grplen * p) / octspergrp + (cols - p) + (cols - p) / octspergrp;
            for (int i = cols - p; i > 0; i--) {
                set_color(buffer, &c, COLOR_RED);
                buffer[c++] = ' ';
                clear_color(buffer, &c);
            }
        }
        print_or_suppress_zero_line(buffer, z, 1, program_name);
    } else if (autoskip) {
        print_or_suppress_zero_line(buffer, z, -1, program_name); // last chance to flush out suppressed lines
    }
    return 0;
}

int hex_littleendian(char* buffer, char* z, const bool colsgiven, int cols, int octspergrp, const bool revert, const long seekoff, const bool color, int e, const long length, const char* decimal_format_string, const unsigned long displayoff, int c, const bool ascii, const char* hex_digits, const bool autoskip, const char* program_name)
{
    int grplen = 0, nonzero = 0, addrlen = 9;
    if (!colsgiven || !cols) {
        cols = 16;
    } else if (cols < 1 || cols > COLS) {
        exit_with_col_error(program_name);
    }
    if (revert) {
        exit_with_error(-1, "Sorry, cannot revert this type of hexdump", program_name);
    }
    if (octspergrp < 0) {
        octspergrp = 4;
    } else if (octspergrp < 1 || octspergrp > cols) {
        octspergrp = cols;
    } else if (octspergrp & (octspergrp - 1)) {
        exit_with_error(1, "number of octets per group must be a power of 2 with -e.", program_name);
    }
    grplen = octspergrp + octspergrp + 1 + (color ? 11 * octspergrp : 0); // chars per octet group
    getc_or_die(&e, program_name);
    int n = 0, p = 0, x = 0;
    while ((length < 0 || n < length) && e != EOF) {
        if (!p) {
            addrlen = snprintf(buffer, LLENP1, decimal_format_string, ((unsigned long)(n + seekoff + displayoff)));
            for (c = addrlen; c <= LLENP1; buffer[c++] = ' ')
                ;
        }
        x = p ^ (octspergrp - 1);
        c = addrlen + 1 + (grplen * x) / octspergrp;
        if (color) {
            set_color(buffer, &c, ascii ? ascii_char_color(e) : ebcdic_char_color(e));
            buffer[c++] = hex_digits[(e >> 4) & 0xf];
            buffer[c++] = hex_digits[e & 0xf];
            clear_color(buffer, &c);
            c = addrlen + 3 + (grplen * cols - 1) / octspergrp + p * 12 + 1;
            nonzero += e ? 1 : 0;
            set_color(buffer, &c, ascii ? ascii_char_color(e) : ebcdic_char_color(e));
            if (!ascii) { // EBCDIC
                e = (e < 64) ? '.' : etoa64[e - 64];
            }
            buffer[c++] = (e < ' ' || e >= 127) ? '.' : e;
            clear_color(buffer, &c);
        } else { // no color
            buffer[c] = hex_digits[(e >> 4) & 0xf];
            buffer[++c] = hex_digits[e & 0xf];
            c = grplen * ((cols + octspergrp - 1) / octspergrp);
            nonzero += e ? 1 : 0;
            if (!ascii) { // EBCDIC
                e = (e < 64) ? '.' : etoa64[e - 64];
            }
            c += addrlen + 3 + p;
            buffer[c++] = (e < ' ' || e >= 127) ? '.' : e;
        }
        n++;
        if (++p == cols) {
            buffer[c++] = '\n';
            buffer[c] = '\0';
            print_or_suppress_zero_line(buffer, z, autoskip ? nonzero : 1, program_name);
            nonzero = 0;
            p = 0;
        }
        getc_or_die(&e, program_name);
    }
    if (p) {
        buffer[c++] = '\n';
        buffer[c] = '\0';
        if (color) {
            x = p;
            const int fill = (p % octspergrp) == 0 ? 0 : octspergrp - (p % octspergrp);
            c = addrlen + 1 + (grplen * (x - (octspergrp - fill))) / octspergrp;
            for (int i = 0; i < fill; i++) {
                set_color(buffer, &c, COLOR_RED);
                buffer[c++] = ' ';
                clear_color(buffer, &c);
                x++;
                p++;
            }
            c = addrlen + 1 + (grplen * x) / octspergrp + (cols - p) + (cols - p) / octspergrp;
            for (int i = cols - p; i > 0; i--) {
                set_color(buffer, &c, COLOR_RED);
                buffer[c++] = ' ';
                clear_color(buffer, &c);
            }
        }
        print_or_suppress_zero_line(buffer, z, 1, program_name);
    } else if (autoskip) {
        print_or_suppress_zero_line(buffer, z, -1, program_name); // last chance to flush out suppressed lines
    }
    return 0;
}

const char* base_name(const char* path)
{
    const char* lastSlash = strrchr(path, '/');
    if (lastSlash == NULL) {
        return path;
    }
    return lastSlash + 1;
}

int main(int argc, char* argv[])
{
    const char* version = "tinyxxd 1.3.1";
    enum HexType {
        HEX_NORMAL,
        HEX_BITS,
        HEX_CINCLUDE,
        HEX_LITTLEENDIAN,
        HEX_POSTSCRIPT
    };
    enum HexType hextype = HEX_NORMAL;
    const char* no_color = getenv("NO_COLOR"); // Respect the NO_COLOR environment variable
    bool color = (no_color == NULL || no_color[0] == '\0') && isatty(STDOUT_FILENO);
    char* pp = NULL;
    char* varname = NULL;
    bool autoskip = false, capitalize = false, colsgiven = false, decimal_offset = false;
    bool ascii = true, revert = false, uppercase_hex = false;
    int cols = 0, relseek = 0, negseek = 0, octspergrp = -1;
    unsigned long displayoff = 0;
    long seekoff = 0, length = -1;

    const char* program_name = base_name(argv[0]);

    while (argc >= 2) {
        pp = argv[1] + (!strncmp(argv[1], "--", 2) && argv[1][2]);
        if (!strncmp(pp, "-a", 2)) {
            autoskip = !autoskip;
        } else if (!strncmp(pp, "-b", 2)) {
            hextype = HEX_BITS;
        } else if (!strncmp(pp, "-e", 2)) {
            hextype = HEX_LITTLEENDIAN;
        } else if (!strncmp(pp, "-u", 2)) {
            uppercase_hex = true;
        } else if (!strncmp(pp, "-p", 2)) {
            hextype = HEX_POSTSCRIPT;
        } else if (!strncmp(pp, "-i", 2)) {
            hextype = HEX_CINCLUDE;
        } else if (!strncmp(pp, "-C", 2)) {
            capitalize = true;
        } else if (!strncmp(pp, "-d", 2)) {
            decimal_offset = true;
        } else if (!strncmp(pp, "-r", 2)) {
            revert = true;
        } else if (!strncmp(pp, "-E", 2)) {
            ascii = false;
        } else if (!strncmp(pp, "-v", 2)) {
            fprintf(stderr, "%s\n", version);
            exit(0);
        } else if (!strncmp(pp, "-c", 2)) {
            if (pp[2] && !strncmp("apitalize", pp + 2, 9)) {
                capitalize = true;
            } else if (pp[2] && strncmp("ols", pp + 2, 3)) {
                colsgiven = true;
                cols = (int)strtol(pp + 2, NULL, 0);
            } else {
                if (!argv[2]) {
                    exit_with_usage(program_name, version);
                }
                colsgiven = true;
                cols = (int)strtol(argv[2], NULL, 0);
                argv++;
                argc--;
            }
        } else if (!strncmp(pp, "-g", 2)) {
            if (pp[2] && strncmp("roup", pp + 2, 4)) {
                octspergrp = (int)strtol(pp + 2, NULL, 0);
            } else {
                if (!argv[2]) {
                    exit_with_usage(program_name, version);
                }
                octspergrp = (int)strtol(argv[2], NULL, 0);
                argv++;
                argc--;
            }
        } else if (!strncmp(pp, "-o", 2)) {
            int reloffset = 0, negoffset = 0;
            if (pp[2] && strncmp("ffset", pp + 2, 5)) {
                displayoff = strtoul(pp + 2, NULL, 0);
            } else {
                if (!argv[2]) {
                    exit_with_usage(program_name, version);
                }
                if (argv[2][0] == '+') {
                    reloffset++;
                }
                if (argv[2][reloffset] == '-') {
                    negoffset++;
                }
                if (negoffset) {
                    displayoff = ULONG_MAX - strtoul(argv[2] + reloffset + negoffset, NULL, 0) + 1;
                } else {
                    displayoff = strtoul(argv[2] + reloffset + negoffset, NULL, 0);
                }
                argv++;
                argc--;
            }
        } else if (!strncmp(pp, "-s", 2)) {
            relseek = 0;
            negseek = 0;
            if (pp[2] && strncmp("kip", pp + 2, 3) && strncmp("eek", pp + 2, 3)) {
                if (pp[2] == '+') {
                    relseek++;
                }
                if (pp[2 + relseek] == '-') {
                    negseek++;
                }
                seekoff = strtol(pp + 2 + relseek + negseek, (char**)NULL, 0);
            } else {
                if (!argv[2]) {
                    exit_with_usage(program_name, version);
                }
                if (argv[2][0] == '+') {
                    relseek++;
                }
                if (argv[2][relseek] == '-') {
                    negseek++;
                }
                seekoff = strtol(argv[2] + relseek + negseek, (char**)NULL, 0);
                argv++;
                argc--;
            }
        } else if (!strncmp(pp, "-l", 2)) {
            if (pp[2] && strncmp("en", pp + 2, 2)) {
                length = strtol(pp + 2, (char**)NULL, 0);
            } else {
                if (!argv[2]) {
                    exit_with_usage(program_name, version);
                }
                length = strtol(argv[2], (char**)NULL, 0);
                argv++;
                argc--;
            }
        } else if (!strncmp(pp, "-n", 2)) {
            if (pp[2] && strncmp("ame", pp + 2, 3)) {
                varname = pp + 2;
            } else {
                if (!argv[2]) {
                    exit_with_usage(program_name, version);
                }
                varname = argv[2];
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
                exit_with_usage(program_name, version);
            }
            if (!strncmp(pw, "always", 6)) {
                color = true;
            } else if (!strncmp(pw, "never", 5)) {
                color = false;
            } else if (!strncmp(pw, "auto", 4)) {
                color = isatty(STDOUT_FILENO);
            } else {
                exit_with_usage(program_name, version);
            }
        } else if (!strcmp(pp, "--")) { // end of options
            argv++;
            argc--;
            break;
        } else if (pp[0] == '-' && pp[1]) { // unknown option
            exit_with_usage(program_name, version);
        } else {
            break; // not an option
        }
        argv++; // advance to next argument
        argc--;
    }
    if (argc > 3) {
        exit_with_usage(program_name, version);
    } else if (argc == 1 || (argv[1][0] == '-' && !argv[1][1])) {
        input_file = stdin;
    } else if (!(input_file = fopen(argv[1], "r"))) { // for reading
        fprintf(stderr, "%s: ", program_name);
        perror(argv[1]);
        return 2;
    }
    if (argc < 3 || (argv[2][0] == '-' && !argv[2][1])) {
        output_file = stdout;
    } else {
        const int mode = revert ? O_WRONLY : (O_TRUNC | O_WRONLY);
        const int file_descriptor = open(argv[2], mode | O_CREAT, 0666);
        if ((file_descriptor < 0) || !(output_file = fdopen(file_descriptor, "w"))) {
            fprintf(stderr, "%s: ", program_name);
            perror(argv[2]);
            return 3;
        }
        rewind(output_file);
    }
    int ch = 0, e = 0;
    if (seekoff || negseek || !relseek) {
        if (negseek) {
            if ((e = fseek(input_file, -seekoff, relseek ? SEEK_CUR : SEEK_END)) < 0) {
                exit_with_error(4, "Sorry, cannot seek.", program_name);
            }
        } else {
            e = fseek(input_file, seekoff, relseek ? SEEK_CUR : SEEK_SET);
        }
        if (e >= 0) {
            seekoff = ftell(input_file);
        } else {
            for (long s = seekoff; s > 0; s--) {
                getc_or_die(&ch, program_name);
                if (ch == EOF) {
                    exit_with_error(4, "Sorry, cannot seek.", program_name);
                }
            }
        }
    }
    const char* decimal_format_string = decimal_offset ? "%08ld:" : "%08lx:";
    const char* hex_digits = uppercase_hex ? "0123456789ABCDEF" : "0123456789abcdef";
    static char buffer[LLENP1]; // static because it may be too big for stack
    static char z[LLENP1]; // static because it may be too big for stack
    switch (hextype) {
    case HEX_NORMAL:
        return hex_normal(buffer, z, colsgiven, cols, octspergrp, revert, negseek, seekoff, e, color, ascii, length, decimal_format_string, displayoff, ch, hex_digits, autoskip, program_name);
    case HEX_BITS:
        return hex_bits(buffer, z, colsgiven, cols, octspergrp, revert, ch, e, length, decimal_format_string, seekoff, displayoff, color, ascii, autoskip, program_name);
    case HEX_CINCLUDE:
        return hex_cinclude(colsgiven, cols, octspergrp, revert, e, ch, capitalize, varname, argv[1], uppercase_hex, length, program_name);
    case HEX_LITTLEENDIAN:
        return hex_littleendian(buffer, z, colsgiven, cols, octspergrp, revert, seekoff, color, e, length, decimal_format_string, displayoff, ch, ascii, hex_digits, autoskip, program_name);
    case HEX_POSTSCRIPT:
        return hex_postscript(colsgiven, cols, octspergrp, revert, e, length, negseek, seekoff, hex_digits, program_name);
    }
}
