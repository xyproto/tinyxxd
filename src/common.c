#include <ctype.h>
#include <fcntl.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "common.h"

const char COLOR_RED = '1', COLOR_GREEN = '2', COLOR_YELLOW = '3', COLOR_BLUE = '4', COLOR_WHITE = '7';
const char* version = "tinyxxd 1.1.0";
const char hexxa[] = "0123456789abcdef0123456789ABCDEF";

// This is an EBCDIC to ASCII conversion table
// from a proposed BTL standard April 16, 1979
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

void exit_with_usage(const char* pname)
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

void error_exit(const char* pname, int ret, const char* msg) {
    fprintf(stderr, "%s: %s\n", pname, msg);
    exit(ret);
}

void perror_exit(const char* pname, int ret) {
    fprintf(stderr, "%s: ", pname);
    perror(NULL);
    exit(ret);
}

void getc_or_die(FILE* fpi, int* c, const char* pname) {
    *c = getc(fpi);
    if (*c == EOF && ferror(fpi)) {
        perror_exit(pname, 2);
    }
}

void putc_or_die(int c, FILE* fpo, const char* pname) {
    if (putc(c, fpo) == EOF) {
        perror_exit(pname, 3);
    }
}

void fputs_or_die(const char* s, FILE* fpo, const char* pname) {
    if (fputs(s, fpo) == EOF) {
        perror_exit(pname, 3);
    }
}

void fclose_or_die(FILE* fpi, FILE* fpo, const char* pname) {
    if (fclose(fpo) != 0) {
        perror_exit(pname, 3);
    }
    if (fclose(fpi) != 0) {
        perror_exit(pname, 2);
    }
}

/*
 * Ignore text on "fpi" until end-of-line or end-of-file.
 * Return the '\n' or EOF character.
 * When an error is encountered exit with an error message.
 */
int skip_to_eol(FILE* fpi, int c, const char* pname)
{
    while (c != '\n' && c != EOF) {
        getc_or_die(fpi, &c, pname);
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
int huntype(FILE* fpi, FILE* fpo, int cols, enum HexType hextype, long base_off, const char* pname)
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
                perror_exit(pname, 3);
            }
            if (fseek(fpo, base_off + want_off - have_off, SEEK_CUR) >= 0) {
                have_off = base_off + want_off;
            }
            if (base_off + want_off < have_off) {
                error_exit(pname, 5, "Sorry, cannot seek backwards.");
            }
            for (; have_off < base_off + want_off; have_off++) {
                putc_or_die(0, fpo, pname);
            }
        }
        if (hextype == HEX_NORMAL || hextype == HEX_POSTSCRIPT) {
            if (n2 >= 0 && n1 >= 0) {
                putc_or_die((n2 << 4) | n1, fpo, pname);
                have_off++;
                want_off++;
                n1 = -1;
                if (!hextype && (++p >= cols)) {
                    // skip the rest of the line as garbage
                    c = skip_to_eol(fpi, c, pname);
                }
            } else if (n1 < 0 && n2 < 0 && n3 < 0) {
                // already stumbled into garbage, skip line, wait and see
                c = skip_to_eol(fpi, c, pname);
            }
        } else { // HEX_BITS
            if (bcnt == 8) {
                putc_or_die(b, fpo, pname);
                have_off++;
                want_off++;
                b = 0;
                bcnt = 0;
                if (++p >= cols) {
                    // skip the rest of the line as garbage
                    c = skip_to_eol(fpi, c, pname);
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
        perror_exit(pname, 3);
    }
    fseek(fpo, 0L, SEEK_END);
    fclose_or_die(fpi, fpo, pname);
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
void xxdline(FILE* fp, char* l, int nz, const char* pname)
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
                fputs_or_die(z, fp, pname);
            } else if (zero_seen > 2) {
                fputs_or_die("*\n", fp, pname);
            }
        }
        if (nz >= 0 || zero_seen > 0) {
            fputs_or_die(l, fp, pname);
        } else if (nz) {
            zero_seen = 0;
        }
    }
}

char get_ebcdic_char(const int e)
{
    switch (e) {
    case 0:
        return COLOR_WHITE;
    case 37:
    case 13:
    case 5:
        return COLOR_YELLOW;
    case 255:
        return COLOR_BLUE;
    case 189:
    case 64:
    case 173:
    case 224:
        return COLOR_GREEN;
    }
    if ((e >= 75 && e <= 80) || (e >= 90 && e <= 97) || (e >= 107 && e <= 111) || (e >= 121 && e <= 127) || (e >= 129 && e <= 137) || (e >= 145 && e <= 154) || (e >= 162 && e <= 169) || (e >= 192 && e <= 201) || (e >= 208 && e <= 217) || (e >= 226 && e <= 233) || (e >= 240 && e <= 249)) {
        return COLOR_GREEN;
    }
    return COLOR_RED;
}

char get_ascii_char(const int e)
{
    if (e > 31 && e < 127) {
        return COLOR_GREEN;
    }
    switch (e) {
    case 0:
        return COLOR_WHITE;
    case 9:
    case 10:
    case 13:
        return COLOR_YELLOW;
    case 255:
        return COLOR_BLUE;
    }
    return COLOR_RED;
}
