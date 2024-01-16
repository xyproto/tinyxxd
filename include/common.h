#ifndef COMMON_H
#define COMMON_H

#include <ctype.h>
#include <fcntl.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Constants
#define COLS 256
#define LLEN ((2 * (int)sizeof(unsigned long)) + 4 + (9 * COLS - 1) + COLS + 2)

extern const char COLOR_RED, COLOR_GREEN, COLOR_YELLOW, COLOR_BLUE, COLOR_WHITE;
extern const char* version;
extern const char hexxa[];
extern const unsigned char etoa64[];

// HexType enum
enum HexType {
    HEX_NORMAL,
    HEX_POSTSCRIPT,
    HEX_CINCLUDE,
    HEX_BITS,
    HEX_LITTLEENDIAN
};

// Function declarations
void colorPrologue(char* l, int* c);
void colorEpilogue(char* l, int* c);
void exit_with_usage(const char* pname);
void error_exit(const char* pname, int ret, const char* msg);
void perror_exit(const char* pname, int ret);
void getc_or_die(FILE* fpi, int* c, const char* pname);
void putc_or_die(int c, FILE* fpo, const char* pname);
void fputs_or_die(const char* s, FILE* fpo, const char* pname);
void fclose_or_die(FILE* fpi, FILE* fpo, const char* pname);
int skip_to_eol(FILE* fpi, int c, const char* pname);
int huntype(FILE* fpi, FILE* fpo, int cols, enum HexType hextype, long base_off, const char* pname);
void xxdline(FILE* fp, char* l, int nz, const char* pname);
char get_ebcdic_char(const int e);
char get_ascii_char(const int e);

// Inline function definitions
inline char conditionalCapitalize(int c, bool capitalize)
{
    return capitalize ? toupper((unsigned char)(c)) : (c);
}

inline int parse_hex_digit(int c)
{
    return (c >= '0' && c <= '9') ? c - '0'
        : (c >= 'a' && c <= 'f')  ? c - 'a' + 10
        : (c >= 'A' && c <= 'F')  ? c - 'A' + 10
                                  : -1;
}

inline int parse_bin_digit(int c)
{
    return (c >= '0' && c <= '1') ? c - '0' : -1;
}

#endif // COMMON_H
