#include <ctype.h>
#include <fcntl.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Change this value if more columns should ever be needed
#define COLS 256

// For static declarations of buffers
#define LLEN ((2 * (int)sizeof(unsigned long)) + 4 + (9 * COLS - 1) + COLS + 2)

// HexType is the different hextypes known by this program
enum HexType {
    HEX_NORMAL,
    HEX_POSTSCRIPT,
    HEX_CINCLUDE,
    HEX_BITS, // not hex a dump, but bits, like: 01111001
    HEX_LITTLEENDIAN
};

const char COLOR_RED = '1';
const char COLOR_GREEN = '2';
const char COLOR_YELLOW = '3';
const char COLOR_BLUE = '4';
const char COLOR_WHITE = '7';

const char* version = "tinyxxd 1.0.0";
static char* pname;

const char hexxa[] = "0123456789abcdef0123456789ABCDEF";
char* hexx = (char*)hexxa;

// This is an EBCDIC to ASCII conversion table
// from a proposed BTL standard April 16, 1979
const unsigned char etoa64[] = {
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

inline char conditionalCapitalize(int c, bool capitalize)
{
    return capitalize ? toupper((unsigned char)(c)) : (c);
}

void colorPrologue(char* l, int* c)
{
    l[(*c)++] = '\033';
    l[(*c)++] = '[';
    l[(*c)++] = '1';
    l[(*c)++] = ';';
    l[(*c)++] = '3';
}

void colorEpilogue(char* l, int* c)
{
    l[(*c)++] = '\033';
    l[(*c)++] = '[';
    l[(*c)++] = '0';
    l[(*c)++] = 'm';
}

void exit_with_usage(void)
{
    fprintf(stderr, "Usage:\n       %s [options] [infile [outfile]]\n", pname);
    fprintf(stderr, "    or\n       %s -r [-s [-]offset] [-c cols] [-ps] [infile [outfile]]\n", pname);
    fprintf(stderr, "Options:\n");
    fprintf(stderr, "    -a          toggle autoskip: A single '*' replaces nul-lines. Default off.\n");
    fprintf(stderr, "    -b          binary digit dump (incompatible with -ps,-i). Default hex.\n");
    fprintf(stderr, "    -C          capitalize variable names in C include file style (-i).\n");
    fprintf(stderr, "    -c cols     format <cols> octets per line. Default 16 (-i: 12, -ps: 30).\n");
    fprintf(stderr, "    -E          show characters in EBCDIC. Default ASCII.\n");
    fprintf(stderr, "    -e          little-endian dump (incompatible with -ps,-i,-r).\n");
    fprintf(stderr, "    -g bytes    number of octets per group in normal output. Default 2 (-e: 4).\n");
    fprintf(stderr, "    -h          print this summary.\n");
    fprintf(stderr, "    -i          output in C include file style.\n");
    fprintf(stderr, "    -l len      stop after <len> octets.\n");
    fprintf(stderr, "    -n name     set the variable name used in C include output (-i).\n");
    fprintf(stderr, "    -o off      add <off> to the displayed file position.\n");
    fprintf(stderr, "    -ps         output in postscript plain hexdump style.\n");
    fprintf(stderr, "    -r          reverse operation: convert (or patch) hexdump into binary.\n");
    fprintf(stderr, "    -r -s off   revert with <off> added to file positions found in hexdump.\n");
    fprintf(stderr, "    -d          show offset in decimal instead of hex.\n");
    fprintf(stderr, "    -s %sseek  start at <seek> bytes abs. %sinfile offset.\n", "[+][-]", "(or +: rel.) ");
    fprintf(stderr, "    -u          use upper case hex letters.\n");
    fprintf(stderr, "    -R when     colorize the output; <when> can be 'always', 'auto' or 'never'. Default: 'auto'.\n");
    fprintf(stderr, "    -v          show version: \"%s\".\n", version);
    exit(1);
}

void error_exit(int ret, const char* msg)
{
    fprintf(stderr, "%s: %s\n", pname, msg);
    exit(ret);
}

void perror_exit(int ret)
{
    fprintf(stderr, "%s: ", pname);
    perror(NULL);
    exit(ret);
}

void getc_or_die(FILE* fpi, int* c)
{
    *c = getc(fpi);
    if (*c == EOF && ferror(fpi)) {
        perror_exit(2);
    }
}

void putc_or_die(int c, FILE* fpo)
{
    if (putc(c, fpo) == EOF) {
        perror_exit(3);
    }
}

void fputs_or_die(const char* s, FILE* fpo)
{
    if (fputs(s, fpo) == EOF) {
        perror_exit(3);
    }
}

void fclose_or_die(FILE* fpi, FILE* fpo)
{
    if (fclose(fpo) != 0) {
        perror_exit(3);
    }
    if (fclose(fpi) != 0) {
        perror_exit(2);
    }
}

// parse_hex_digits returns the decimal value if c is a hex digit, or otherwise -1
inline int parse_hex_digit(int c)
{
    return (c >= '0' && c <= '9') ? c - '0'
        : (c >= 'a' && c <= 'f')  ? c - 'a' + 10
        : (c >= 'A' && c <= 'F')  ? c - 'A' + 10
                                  : -1;
}

// parse_bin_digit returns the decimal value if c is a binary digit, or otherwise -1
inline int parse_bin_digit(int c)
{
    return (c >= '0' && c <= '1') ? c - '0' : -1;
}

/*
 * Ignore text on "fpi" until end-of-line or end-of-file.
 * Return the '\n' or EOF character.
 * When an error is encountered exit with an error message.
 */
int skip_to_eol(FILE* fpi, int c)
{
    while (c != '\n' && c != EOF) {
        getc_or_die(fpi, &c);
    }
    return c;
}

/*
 * Max. cols binary characters are decoded from the input stream per line.
 * Two adjacent garbage characters after evaluated data delimit valid data.
 * Everything up to the next newline is discarded.
 *
 * The name is historic and came from 'undo type opt h'.
 */
int huntype(FILE* fpi, FILE* fpo, int cols, enum HexType hextype, long base_off)
{
    int c, ign_garb = 1, n1 = -1, n2 = 0, n3 = 0, p = cols, bt = 0, b = 0, bcnt = 0;
    long have_off = 0, want_off = 0;

    rewind(fpi);

    while ((c = getc(fpi)) != EOF) {
        if (c == '\r') { // Doze style input file?
            continue;
        }

        /* Allow multiple spaces.  This doesn't work when there is normal text
         * after the hex codes in the last line that looks like hex, thus only
         * use it for PostScript format. */
        if (hextype == HEX_POSTSCRIPT && (c == ' ' || c == '\n' || c == '\t')) {
            continue;
        }

        if (hextype == HEX_NORMAL || hextype == HEX_POSTSCRIPT) {
            n3 = n2;
            n2 = n1;

            n1 = parse_hex_digit(c);
            if (n1 == -1 && ign_garb) {
                continue;
            }
        } else { // HEX_BITS
            n1 = parse_hex_digit(c);
            if (n1 == -1 && ign_garb) {
                continue;
            }
            bt = parse_bin_digit(c);
            if (bt != -1) {
                b = ((b << 1) | bt);
                ++bcnt;
            }
        }

        ign_garb = 0;

        if ((hextype != HEX_POSTSCRIPT) && (p >= cols)) {
            if (hextype == HEX_NORMAL) {
                if (n1 < 0) {
                    p = 0;
                    continue;
                }
                want_off = (want_off << 4) | n1;
            } else { // HEX_BITS
                if (n1 < 0) {
                    p = 0;
                    bcnt = 0;
                    continue;
                }
                want_off = (want_off << 4) | n1;
            }
            continue;
        }

        if (base_off + want_off != have_off) {
            if (fflush(fpo) != 0) {
                perror_exit(3);
            }
            if (fseek(fpo, base_off + want_off - have_off, SEEK_CUR) >= 0) {
                have_off = base_off + want_off;
            }
            if (base_off + want_off < have_off) {
                error_exit(5, "Sorry, cannot seek backwards.");
            }
            for (; have_off < base_off + want_off; have_off++) {
                putc_or_die(0, fpo);
            }
        }

        if (hextype == HEX_NORMAL || hextype == HEX_POSTSCRIPT) {
            if (n2 >= 0 && n1 >= 0) {
                putc_or_die((n2 << 4) | n1, fpo);
                have_off++;
                want_off++;
                n1 = -1;
                if (!hextype && (++p >= cols)) {
                    // skip the rest of the line as garbage
                    c = skip_to_eol(fpi, c);
                }
            } else if (n1 < 0 && n2 < 0 && n3 < 0) {
                // already stumbled into garbage, skip line, wait and see
                c = skip_to_eol(fpi, c);
            }
        } else { // HEX_BITS
            if (bcnt == 8) {
                putc_or_die(b, fpo);
                have_off++;
                want_off++;
                b = 0;
                bcnt = 0;
                if (++p >= cols) {
                    // skip the rest of the line as garbage
                    c = skip_to_eol(fpi, c);
                }
            }
        }

        if (c == '\n') {
            if (hextype == HEX_NORMAL || hextype == HEX_BITS) {
                want_off = 0;
            }
            p = cols;
            ign_garb = 1;
        }
    }
    if (fflush(fpo) != 0) {
        perror_exit(3);
    }
    fseek(fpo, 0L, SEEK_END);
    fclose_or_die(fpi, fpo);
    return 0;
}

/*
 * Print line l. If nz is false, xxdline regards the line a line of
 * zeroes. If there are three or more consecutive lines of zeroes,
 * they are replaced by a single '*' character.
 *
 * If the output ends with more than two lines of zeroes, you
 * should call xxdline again with l being the last line and nz
 * negative. This ensures that the last line is shown even when
 * it is all zeroes.
 *
 * If nz is always positive, lines are never suppressed.
 */
void xxdline(FILE* fp, char* l, int nz)
{
    static char __attribute__((aligned(16))) z[LLEN + 1];
    static int zero_seen = 0;

    if (!nz && zero_seen == 1) {
        strcpy(z, l);
    }

    if (nz || !zero_seen++) {
        if (nz) {
            if (nz < 0) {
                zero_seen--;
            }
            if (zero_seen == 2) {
                fputs_or_die(z, fp);
            } else if (zero_seen > 2) {
                fputs_or_die("*\n", fp);
            }
        }
        if (nz >= 0 || zero_seen > 0) {
            fputs_or_die(l, fp);
        } else if (nz) {
            zero_seen = 0;
        }
    }
}

char get_ebcdic_char(const int e)
{
    if ((e >= 75 && e <= 80) || (e >= 90 && e <= 97) || (e >= 107 && e <= 111) || (e >= 121 && e <= 127) || (e >= 129 && e <= 137) || (e >= 145 && e <= 154) || (e >= 162 && e <= 169) || (e >= 192 && e <= 201) || (e >= 208 && e <= 217) || (e >= 226 && e <= 233) || (e >= 240 && e <= 249) || (e == 189) || (e == 64) || (e == 173) || (e == 224)) {
        return COLOR_GREEN;
    } else if (e == 37 || e == 13 || e == 5) {
        return COLOR_YELLOW;
    } else if (e == 0) {
        return COLOR_WHITE;
    } else if (e == 255) {
        return COLOR_BLUE;
    }
    return COLOR_RED;
}

char get_ascii_char(const int e)
{
    if (e > 31 && e < 127) {
        return COLOR_GREEN;
    } else if (e == 9 || e == 10 || e == 13) {
        return COLOR_YELLOW;
    } else if (e == 0) {
        return COLOR_WHITE;
    } else if (e == 255) {
        return COLOR_BLUE;
    }
    return COLOR_RED;
}

int main(int argc, char* argv[])
{
    FILE *fp, *fpo;
    bool revert = false, colsgiven = false, autoskip = false, color = false;
    bool capitalize = false, decimal_offset = false, ebcdic = false;
    int negseek = 0, relseek = 0;
    int c = 0, p = 0, i = 0, x = 0;
    int e = 0;
    int cols = 0, nonzero = 0;
    enum HexType hextype = HEX_NORMAL;
    int octspergrp = -1; // number of octets grouped in output
    int grplen = 0; // total chars per octet group
    long length = -1, n = 0, seekoff = 0;
    unsigned long displayoff = 0;
    static char __attribute__((aligned(16))) l[LLEN + 1]; // static because it may be too big for stack
    char* varname = NULL;
    int addrlen = 9;
    char* pp;

    // Respect the NO_COLOR environment variable
    char* no_color = getenv("NO_COLOR");
    if (no_color == NULL || no_color[0] == '\0') {
        color = isatty(STDOUT_FILENO);
    }

    pname = argv[0];
    for (pp = pname; *pp;) {
        if (*pp++ == '/') { // path separator
            pname = pp;
        }
    }

    while (argc >= 2) {
        pp = argv[1] + (!strncmp(argv[1], "--", 2) && argv[1][2]);
        if (!strncmp(pp, "-a", 2)) {
            autoskip = !autoskip;
        } else if (!strncmp(pp, "-b", 2)) {
            hextype = HEX_BITS;
        } else if (!strncmp(pp, "-e", 2)) {
            hextype = HEX_LITTLEENDIAN;
        } else if (!strncmp(pp, "-u", 2)) {
            hexx = (char*)hexxa + 16;
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
            ebcdic = true;
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
                    exit_with_usage();
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
                    exit_with_usage();
                }
                octspergrp = (int)strtol(argv[2], NULL, 0);
                argv++;
                argc--;
            }
        } else if (!strncmp(pp, "-o", 2)) {
            int reloffset = 0;
            int negoffset = 0;
            if (pp[2] && strncmp("ffset", pp + 2, 5)) {
                displayoff = strtoul(pp + 2, NULL, 0);
            } else {
                if (!argv[2]) {
                    exit_with_usage();
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
                    exit_with_usage();
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
                    exit_with_usage();
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
                    exit_with_usage();
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
                exit_with_usage();
            }
            if (!strncmp(pw, "always", 6)) {
                isatty(STDOUT_FILENO);
                color = 1;
            } else if (!strncmp(pw, "never", 5)) {
                color = 0;
            } else if (!strncmp(pw, "auto", 4)) {
                color = isatty(STDOUT_FILENO);
            } else {
                exit_with_usage();
            }
        } else if (!strcmp(pp, "--")) { // end of options
            argv++;
            argc--;
            break;
        } else if (pp[0] == '-' && pp[1]) { // unknown option
            exit_with_usage();
        } else {
            break; // not an option
        }

        argv++; // advance to next argument
        argc--;
    }

    if (!colsgiven || (!cols && hextype != HEX_POSTSCRIPT)) {
        switch (hextype) {
        case HEX_POSTSCRIPT:
            cols = 30;
            break;
        case HEX_CINCLUDE:
            cols = 12;
            break;
        case HEX_BITS:
            cols = 6;
            break;
        case HEX_NORMAL:
        case HEX_LITTLEENDIAN:
        default:
            cols = 16;
            break;
        }
    }

    if (octspergrp < 0) {
        switch (hextype) {
        case HEX_BITS:
            octspergrp = 1;
            break;
        case HEX_NORMAL:
            octspergrp = 2;
            break;
        case HEX_LITTLEENDIAN:
            octspergrp = 4;
            break;
        case HEX_POSTSCRIPT:
        case HEX_CINCLUDE:
        default:
            octspergrp = 0;
            break;
        }
    }

    if ((hextype == HEX_POSTSCRIPT && cols < 0) || (hextype != HEX_POSTSCRIPT && cols < 1) || ((hextype == HEX_NORMAL || hextype == HEX_BITS || hextype == HEX_LITTLEENDIAN) && (cols > COLS))) {
        fprintf(stderr, "%s: invalid number of columns (max. %d).\n", pname, COLS);
        exit(1);
    }

    if (octspergrp < 1 || octspergrp > cols) {
        octspergrp = cols;
    } else if (hextype == HEX_LITTLEENDIAN && (octspergrp & (octspergrp - 1))) {
        error_exit(1, "number of octets per group must be a power of 2 with -e.");
    }

    if (argc > 3) {
        exit_with_usage();
    }

    if (argc == 1 || (argv[1][0] == '-' && !argv[1][1])) {
        fp = stdin;
    } else {
        if ((fp = fopen(argv[1], "r")) == NULL) { // for reading
            fprintf(stderr, "%s: ", pname);
            perror(argv[1]);
            return 2;
        }
    }

    if (argc < 3 || (argv[2][0] == '-' && !argv[2][1])) {
        fpo = stdout;
    } else {
        int fd;
        int mode = revert ? O_WRONLY : (O_TRUNC | O_WRONLY);

        if (((fd = open(argv[2], mode | O_CREAT, 0666)) < 0) || (fpo = fdopen(fd, "w")) == NULL) {
            fprintf(stderr, "%s: ", pname);
            perror(argv[2]);
            return 3;
        }
        rewind(fpo);
    }

    if (revert) {
        switch (hextype) {
        case HEX_NORMAL:
        case HEX_POSTSCRIPT:
        case HEX_BITS:
            return huntype(fp, fpo, cols, hextype, negseek ? -seekoff : seekoff);
            break;
        default:
            error_exit(-1, "Sorry, cannot revert this type of hexdump");
        }
    }

    if (seekoff || negseek || !relseek) {
        if (relseek) {
            e = fseek(fp, negseek ? -seekoff : seekoff, SEEK_CUR);
        } else {
            e = fseek(fp, negseek ? -seekoff : seekoff, negseek ? SEEK_END : SEEK_SET);
        }
        if (e < 0 && negseek) {
            error_exit(4, "Sorry, cannot seek.");
        }
        if (e >= 0) {
            seekoff = ftell(fp);
        } else {
            long s = seekoff;
            while (s--) {
                getc_or_die(fp, &c);
                if (c == EOF) {
                    error_exit(4, "Sorry, cannot seek.");
                }
            }
        }
    }

    if (hextype == HEX_CINCLUDE) {
        // A user-set variable name overrides fp == stdin
        if (varname == NULL && fp != stdin) {
            varname = argv[1];
        }

        if (varname != NULL) {
            if (fprintf(fpo, "unsigned char %s", isdigit((unsigned char)varname[0]) ? "__" : "") < 0) {
                perror_exit(3);
            }
            for (e = 0; (c = varname[e]) != 0; e++) {
                putc_or_die(isalnum((unsigned char)c) ? conditionalCapitalize(c, capitalize) : '_', fpo);
            }
            fputs_or_die("[] = {\n", fpo);
        }

        p = 0;
        getc_or_die(fp, &c);
        while ((length < 0 || p < length) && c != EOF) {
            if (fprintf(fpo, (hexx == hexxa) ? "%s0x%02x" : "%s0X%02X", (p % cols) ? ", " : (!p ? "  " : ",\n  "), c) < 0) {
                perror_exit(3);
            }
            p++;
            getc_or_die(fp, &c);
        }

        if (p) {
            fputs_or_die("\n", fpo);
        }

        if (varname != NULL) {
            fputs_or_die("};\n", fpo);
            if (fprintf(fpo, "unsigned int %s", isdigit((unsigned char)varname[0]) ? "__" : "") < 0) {
                perror_exit(3);
            }
            for (e = 0; (c = varname[e]) != 0; e++) {
                putc_or_die(isalnum((unsigned char)c) ? conditionalCapitalize(c, capitalize) : '_', fpo);
            }
            if (fprintf(fpo, "_%s = %d;\n", capitalize ? "LEN" : "len", p) < 0) {
                perror_exit(3);
            }
        }

        fclose_or_die(fp, fpo);
        return 0;
    }

    if (hextype == HEX_POSTSCRIPT) {
        p = cols;
        getc_or_die(fp, &e);
        while ((length < 0 || n < length) && e != EOF) {
            putc_or_die(hexx[(e >> 4) & 0xf], fpo);
            putc_or_die(hexx[e & 0xf], fpo);
            n++;
            if (cols > 0 && !--p) {
                putc_or_die('\n', fpo);
                p = cols;
            }
            getc_or_die(fp, &e);
        }
        if (cols == 0 || p < cols) {
            putc_or_die('\n', fpo);
        }
        fclose_or_die(fp, fpo);
        return 0;
    }

    if (hextype != HEX_BITS) { // HEX_NORMAL, HEX_BITS or HEX_LITTLEENDIAN
        grplen = octspergrp + octspergrp + 1; // chars per octet group
        if (color) {
            grplen += 11 * octspergrp; // color-code needs 11 extra characters
        }
    } else { // hextype == HEX_BITS
        grplen = 8 * octspergrp + 1;
    }

    getc_or_die(fp, &e);
    while ((length < 0 || n < length) && e != EOF) {
        if (p == 0) {
            addrlen = snprintf(l, sizeof(l), decimal_offset ? "%08ld:" : "%08lx:",
                ((unsigned long)(n + seekoff + displayoff)));

            for (c = addrlen; c < LLEN; l[c++] = ' ')
                ;
        }

        x = hextype == HEX_LITTLEENDIAN ? p ^ (octspergrp - 1) : p;
        c = addrlen + 1 + (grplen * x) / octspergrp;
        if (hextype == HEX_NORMAL || hextype == HEX_LITTLEENDIAN) {
            if (color) {
                colorPrologue(l, &c);
                if (ebcdic) {
                    l[c++] = get_ebcdic_char(e);
                    l[c++] = 'm';
                } else {
                    l[c++] = get_ascii_char(e);
                    l[c++] = 'm';
                }
                l[c++] = hexx[(e >> 4) & 0xf];
                l[c++] = hexx[e & 0xf];
                colorEpilogue(l, &c);
            } else { // no color
                l[c] = hexx[(e >> 4) & 0xf];
                l[++c] = hexx[e & 0xf];
            }
        } else { // hextype == HEX_BITS
            for (i = 7; i >= 0; i--) {
                l[c++] = (e & (1 << i)) ? '1' : '0';
            }
        }

        if (e) {
            nonzero++;
        }
        // When changing this update definition of LLEN above
        if (hextype == HEX_LITTLEENDIAN) {
            // last group will be fully used, round up
            c = grplen * ((cols + octspergrp - 1) / octspergrp);
        } else {
            c = (grplen * cols - 1) / octspergrp;
        }

        if (color) {
            if (hextype == HEX_BITS) {
                c += addrlen + 3 + p * 12;
            } else {
                c = addrlen + 3 + (grplen * cols - 1) / octspergrp + p * 12;
            }
            if (hextype == HEX_LITTLEENDIAN) {
                c += 1;
            }

            colorPrologue(l, &c);
            if (ebcdic) {
                l[c++] = get_ebcdic_char(e);
                l[c++] = 'm';
                e = (e < 64) ? '.' : etoa64[e - 64];
            } else {
                l[c++] = get_ascii_char(e);
                l[c++] = 'm';
            }
            l[c++] = (e > 31 && e < 127) ? e : '.';
            colorEpilogue(l, &c);
            n++;
            if (++p == cols) {
                l[c++] = '\n';
                l[c++] = '\0';
                xxdline(fpo, l, autoskip ? nonzero : 1);
                nonzero = 0;
                p = 0;
            }
        } else { // no color
            if (ebcdic) {
                e = (e < 64) ? '.' : etoa64[e - 64];
            }
            c += addrlen + 3 + p;
            l[c++] = (e > 31 && e < 127) ? e : '.';
            n++;
            if (++p == cols) {
                l[c++] = '\n';
                l[c] = '\0';
                xxdline(fpo, l, autoskip ? nonzero : 1);
                nonzero = 0;
                p = 0;
            }
        }
        getc_or_die(fp, &e);
    }
    if (p) {
        l[c++] = '\n';
        l[c] = '\0';
        if (color) {
            c++;

            x = p;
            if (hextype == HEX_LITTLEENDIAN) {
                int fill = octspergrp - (p % octspergrp);
                if (fill == octspergrp) {
                    fill = 0;
                }

                c = addrlen + 1 + (grplen * (x - (octspergrp - fill))) / octspergrp;

                for (i = 0; i < fill; i++) {
                    colorPrologue(l, &c);
                    l[c++] = COLOR_RED;
                    l[c++] = 'm';
                    l[c++] = ' ';
                    colorEpilogue(l, &c);
                    x++;
                    p++;
                }
            }

            if (hextype != HEX_BITS) {
                c = addrlen + 1 + (grplen * x) / octspergrp;
                c += cols - p;
                c += (cols - p) / octspergrp;

                for (i = cols - p; i > 0; i--) {
                    colorPrologue(l, &c);
                    l[c++] = COLOR_RED;
                    l[c++] = 'm';
                    l[c++] = ' ';
                    colorEpilogue(l, &c);
                }
            }
        }
        xxdline(fpo, l, 1);
    } else if (autoskip) {
        xxdline(fpo, l, -1); // last chance to flush out suppressed lines
    }

    fclose_or_die(fp, fpo);
    return 0;
}
