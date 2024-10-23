#include <stdio.h>
#include <time.h>

// Initialize the lookup table outside of any function
static const signed char lookup_table[256] = {
    // Initialize all elements to -1
    [0 ... 255] = -1,
    // Numeric digits
    ['0'] = 0,  ['1'] = 1,  ['2'] = 2,  ['3'] = 3,  ['4'] = 4,
    ['5'] = 5,  ['6'] = 6,  ['7'] = 7,  ['8'] = 8,  ['9'] = 9,
    // Uppercase letters
    ['A'] = 10, ['B'] = 11, ['C'] = 12, ['D'] = 13, ['E'] = 14, ['F'] = 15,
    // Lowercase letters
    ['a'] = 10, ['b'] = 11, ['c'] = 12, ['d'] = 13, ['e'] = 14, ['f'] = 15,
};

// Initialize the lookup table outside of any function
static const int lookup_table_int[256] = {
    // Initialize all elements to -1
    [0 ... 255] = -1,
    // Numeric digits
    ['0'] = 0,  ['1'] = 1,  ['2'] = 2,  ['3'] = 3,  ['4'] = 4,
    ['5'] = 5,  ['6'] = 6,  ['7'] = 7,  ['8'] = 8,  ['9'] = 9,
    // Uppercase letters
    ['A'] = 10, ['B'] = 11, ['C'] = 12, ['D'] = 13, ['E'] = 14, ['F'] = 15,
    // Lowercase letters
    ['a'] = 10, ['b'] = 11, ['c'] = 12, ['d'] = 13, ['e'] = 14, ['f'] = 15,
};

static const int lookup_table_add_one_int[256] = {
    // Numeric digits '0' to '9' mapped to 1 to 10
    ['0'] = 1,  ['1'] = 2,  ['2'] = 3,  ['3'] = 4,  ['4'] = 5,
    ['5'] = 6,  ['6'] = 7,  ['7'] = 8,  ['8'] = 9,  ['9'] = 10,
    // Uppercase letters 'A' to 'F' mapped to 11 to 16
    ['A'] = 11, ['B'] = 12, ['C'] = 13, ['D'] = 14, ['E'] = 15, ['F'] = 16,
    // Lowercase letters 'a' to 'f' mapped to 11 to 16
    ['a'] = 11, ['b'] = 12, ['c'] = 13, ['d'] = 14, ['e'] = 15, ['f'] = 16,
};


static const unsigned char lookup_table_add_one_byte[256] = {
    // Numeric digits '0' to '9' mapped to 1 to 10
    ['0'] = 1,  ['1'] = 2,  ['2'] = 3,  ['3'] = 4,  ['4'] = 5,
    ['5'] = 6,  ['6'] = 7,  ['7'] = 8,  ['8'] = 9,  ['9'] = 10,
    // Uppercase letters 'A' to 'F' mapped to 11 to 16
    ['A'] = 11, ['B'] = 12, ['C'] = 13, ['D'] = 14, ['E'] = 15, ['F'] = 16,
    // Lowercase letters 'a' to 'f' mapped to 11 to 16
    ['a'] = 11, ['b'] = 12, ['c'] = 13, ['d'] = 14, ['e'] = 15, ['f'] = 16,
};

inline int parse_hex_digit(const int ch)
{
    return (ch >= '0' && ch <= '9') ? ch - '0'
         : (ch >= 'a' && ch <= 'f') ? ch - 'a' + 10
         : (ch >= 'A' && ch <= 'F') ? ch - 'A' + 10
                                    : -1;

}

int parse_hex_digit_table(const int ch)
{
    unsigned char idx = (unsigned char)ch;
    return lookup_table[idx];
}

int parse_hex_digit_table2(const int ch)
{
    return lookup_table_int[ch];
}

int parse_hex_digit3(const int ch)
{
    return (ch >= '0' && ch <= '9') ? ch - '0'
         : (ch >= 'a' && ch <= 'f') ? ch - ('a' - 10)
         : (ch >= 'A' && ch <= 'F') ? ch - ('A' - 10)
                                    : -1;
}

int parse_hex_digit_table4(const int ch)
{
    return lookup_table_add_one_int[ch] - 1;
}

int parse_hex_digit_table5(const int ch)
{
    return lookup_table_add_one_byte[ch] - 1;
}

int parse_hex_digit_table6(const unsigned char ch)
{
    return lookup_table_add_one_byte[ch] - 1;
}

int main()
{
    const int N = 100000000; // Number of iterations
    int sum = 0;
    clock_t start, end;
    double cpu_time_used;

    // Prepare test data (mix of valid and invalid hex digits)
    char test_data[] = {'0', '9', 'A', 'F', 'a', 'f', 'G', 'z', '1', 'b', 'C', 'd'};
    int data_size = sizeof(test_data)/sizeof(test_data[0]);

    // Benchmark parse_hex_digit
    sum = 0;
    start = clock();
    for (int i = 0; i < N; i++) {
        sum += parse_hex_digit(test_data[i % data_size]);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("parse_hex_digit time: %f seconds, sum=%d\n", cpu_time_used, sum);

    // Benchmark parse_hex_digit_table
    sum = 0;
    start = clock();
    for (int i = 0; i < N; i++) {
        sum += parse_hex_digit_table(test_data[i % data_size]);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("parse_hex_digit_table time: %f seconds, sum=%d\n", cpu_time_used, sum);

    // Benchmark parse_hex_digit_table2
    sum = 0;
    start = clock();
    for (int i = 0; i < N; i++) {
        sum += parse_hex_digit_table2(test_data[i % data_size]);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("parse_hex_digit_table2 time: %f seconds, sum=%d\n", cpu_time_used, sum);

    // Benchmark parse_hex_digit3
    sum = 0;
    start = clock();
    for (int i = 0; i < N; i++) {
        sum += parse_hex_digit3(test_data[i % data_size]);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("parse_hex_digit3 time: %f seconds, sum=%d\n", cpu_time_used, sum);

    // Benchmark parse_hex_digit_table4
    sum = 0;
    start = clock();
    for (int i = 0; i < N; i++) {
        sum += parse_hex_digit_table4(test_data[i % data_size]);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("parse_hex_digit_table4 time: %f seconds, sum=%d\n", cpu_time_used, sum);

    // Benchmark parse_hex_digit_table5
    sum = 0;
    start = clock();
    for (int i = 0; i < N; i++) {
        sum += parse_hex_digit_table5(test_data[i % data_size]);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("parse_hex_digit_table5 time: %f seconds, sum=%d\n", cpu_time_used, sum);

    // Benchmark parse_hex_digit_table6
    sum = 0;
    start = clock();
    for (int i = 0; i < N; i++) {
        sum += parse_hex_digit_table6(test_data[i % data_size]);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("parse_hex_digit_table6 time: %f seconds, sum=%d\n", cpu_time_used, sum);

    // Benchmark lookup_table_int
    sum = 0;
    start = clock();
    for (int i = 0; i < N; i++) {
        sum += lookup_table_int[test_data[i % data_size]];
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("lookup_table_int time: %f seconds, sum=%d\n", cpu_time_used, sum);

    return 0;
}
