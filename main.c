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

char* hexx = (char*)hexxa;

int main(int argc, char* argv[])
{
    FILE *fp, *fpo;
    bool revert = false, colsgiven = false, autoskip = false, color = false;
    bool capitalize = false, decimal_offset = false, ebcdic = false;
    enum HexType hextype = HEX_NORMAL;
    int negseek = 0, relseek = 0, c = 0, p = 0, i = 0, x = 0, e = 0, cols = 0, nonzero = 0, addrlen = 9;
    int octspergrp = -1; // number of octets grouped in output
    int grplen = 0; // total chars per octet group
    long length = -1, n = 0, seekoff = 0;
    unsigned long displayoff = 0;
    char *varname = NULL, *pp = NULL;
    static char __attribute__((aligned(16))) l[LLEN + 1]; // static because it may be too big for stack

    // Respect the NO_COLOR environment variable
    char* no_color = getenv("NO_COLOR");
    if (no_color == NULL || no_color[0] == '\0') {
        color = isatty(STDOUT_FILENO);
    }

    // The program name
    char* pname = argv[0];
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
                    exit_with_usage(pname);
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
                    exit_with_usage(pname);
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
                    exit_with_usage(pname);
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
                    exit_with_usage(pname);
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
                    exit_with_usage(pname);
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
                    exit_with_usage(pname);
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
                exit_with_usage(pname);
            }
            if (!strncmp(pw, "always", 6)) {
                color = true;
            } else if (!strncmp(pw, "never", 5)) {
                color = false;
            } else if (!strncmp(pw, "auto", 4)) {
                color = isatty(STDOUT_FILENO) != 0;
            } else {
                exit_with_usage(pname);
            }
        } else if (!strcmp(pp, "--")) { // end of options
            argv++;
            argc--;
            break;
        } else if (pp[0] == '-' && pp[1]) { // unknown option
            exit_with_usage(pname);
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
        error_exit(pname, 1, "number of octets per group must be a power of 2 with -e."
        );
    }
    if (argc > 3) {
        exit_with_usage(pname);
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
        int mode = revert ? O_WRONLY : (O_TRUNC | O_WRONLY), fd;
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
            return huntype(fp, fpo, cols, hextype, negseek ? -seekoff : seekoff, pname);
            break;
        default:
            error_exit(pname, -1, "Sorry, cannot revert this type of hexdump");
        }
    }
    if (seekoff || negseek || !relseek) {
        if (relseek) {
            e = fseek(fp, negseek ? -seekoff : seekoff, SEEK_CUR);
        } else {
            e = fseek(fp, negseek ? -seekoff : seekoff, negseek ? SEEK_END : SEEK_SET);
        }
        if (e < 0 && negseek) {
            error_exit(pname, 4, "Sorry, cannot seek.");
        }
        if (e >= 0) {
            seekoff = ftell(fp);
        } else {
            long s = seekoff;
            while (s--) {
                getc_or_die(fp, &c, pname);
                if (c == EOF) {
                    error_exit(pname, 4, "Sorry, cannot seek.");
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
                perror_exit(pname, 3);
            }
            for (e = 0; (c = varname[e]) != 0; e++) {
                putc_or_die(isalnum((unsigned char)c) ? conditionalCapitalize(c, capitalize) : '_', fpo, pname);
            }
            fputs_or_die("[] = {\n", fpo, pname);
        }
        p = 0;
        getc_or_die(fp, &c, pname);
        while ((length < 0 || p < length) && c != EOF) {
            if (fprintf(fpo, (hexx == hexxa) ? "%s0x%02x" : "%s0X%02X", (p % cols) ? ", " : (!p ? "  " : ",\n  "), c) < 0) {
                perror_exit(pname, 3);
            }
            p++;
            getc_or_die(fp, &c, pname);
        }
        if (p) {
            fputs_or_die("\n", fpo, pname);
        }
        if (varname != NULL) {
            fputs_or_die("};\n", fpo, pname);
            if (fprintf(fpo, "unsigned int %s", isdigit((unsigned char)varname[0]) ? "__" : "") < 0) {
                perror_exit(pname, 3);
            }
            for (e = 0; (c = varname[e]) != 0; e++) {
                putc_or_die(isalnum((unsigned char)c) ? conditionalCapitalize(c, capitalize) : '_', fpo, pname);
            }
            if (fprintf(fpo, "_%s = %d;\n", capitalize ? "LEN" : "len", p) < 0) {
                perror_exit(pname, 3);
            }
        }
        fclose_or_die(fp, fpo, pname);
        return 0;
    }
    if (hextype == HEX_POSTSCRIPT) {
        p = cols;
        getc_or_die(fp, &e, pname);
        while ((length < 0 || n < length) && e != EOF) {
            putc_or_die(hexx[(e >> 4) & 0xf], fpo, pname);
            putc_or_die(hexx[e & 0xf], fpo, pname);
            n++;
            if (cols > 0 && !--p) {
                putc_or_die('\n', fpo, pname);
                p = cols;
            }
            getc_or_die(fp, &e, pname);
        }
        if (cols == 0 || p < cols) {
            putc_or_die('\n', fpo, pname);
        }
        fclose_or_die(fp, fpo, pname);
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
    getc_or_die(fp, &e, pname);
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
                xxdline(fpo, l, autoskip ? nonzero : 1, pname);
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
                xxdline(fpo, l, autoskip ? nonzero : 1, pname);
                nonzero = 0;
                p = 0;
            }
        }
        getc_or_die(fp, &e, pname);
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
        xxdline(fpo, l, 1, pname);
    } else if (autoskip) {
        xxdline(fpo, l, -1, pname); // last chance to flush out suppressed lines
    }
    fclose_or_die(fp, fpo, pname);
    return 0;
}
