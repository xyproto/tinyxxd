#include <stdio.h>
#include <time.h>

inline int parse_bin_digit(const int ch)
{
    switch (ch) {
    case '0':
        return 0;
    case '1':
        return 1;
    default:
        return -1;
    }
}

inline int parse_bin_digit2(const int ch)
{
    return (ch < '0' || ch > '1') ? -1 : ch - '0';
}

inline int parse_bin_digit3(const int ch)
{
    if (ch == '0') {
        return 0;
    }
    if (ch == '1') {
        return 1;
    }
    return -1;
}

inline int parse_bin_digit4(const int ch)
{
    if (ch == '0') {
        return 0;
    }
    return (ch == '1' ? 1 : -1);
}

static const int lookup_table_int[256] = {
    // Initialize all elements to -1
    [0 ... 255] = -1,
    // Numeric digits
    ['0'] = 0,
    ['1'] = 1,
};

int main()
{
    const int N = 100000000; // Number of iterations
    int sum = 0;
    clock_t start, end;
    double cpu_time_used;

    // Prepare test data
    char test_data[] = { '0', '1', '2', 'a', '0', '1', '1', '0' };
    int data_size = sizeof(test_data) / sizeof(test_data[0]);

    // Benchmark parse_bin_digit
    sum = 0;
    start = clock();
    for (int i = 0; i < N; i++) {
        sum += parse_bin_digit(test_data[i % data_size]);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("parse_bin_digit time: %f seconds, sum=%d\n", cpu_time_used, sum);

    // Benchmark parse_bin_digit2
    sum = 0;
    start = clock();
    for (int i = 0; i < N; i++) {
        sum += parse_bin_digit2(test_data[i % data_size]);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("parse_bin_digit2 time: %f seconds, sum=%d\n", cpu_time_used, sum);

    // Benchmark parse_bin_digit3
    sum = 0;
    start = clock();
    for (int i = 0; i < N; i++) {
        sum += parse_bin_digit3(test_data[i % data_size]);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("parse_bin_digit3 time: %f seconds, sum=%d\n", cpu_time_used, sum);

    // Benchmark parse_bin_digit4
    sum = 0;
    start = clock();
    for (int i = 0; i < N; i++) {
        sum += parse_bin_digit4(test_data[i % data_size]);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("parse_bin_digit4 time: %f seconds, sum=%d\n", cpu_time_used, sum);

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
