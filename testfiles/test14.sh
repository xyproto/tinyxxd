#!/bin/bash

# Test if tinyxxd passes the Test_xxd_little_endian_with_cols() test

#XXD="./xxd"
XXD=./tinyxxd

if [ ! -x "$XXD" ]; then
    echo "Error: tinyxxd binary not found or not executable at $XXD"
    exit 1
fi

# Test 1: Input "ABCDEF" with -e -c6
echo "Running Test 1..."

# Create input file with content "ABCDEF" without a trailing newline
echo -n "ABCDEF" > Xxdin

# Run tinyxxd with little-endian option and 6 columns
$XXD -e -c6 Xxdin > tinyxxd_output1.txt

# Expected output for Test 1
expected_output1='00000000: 44434241     4645  ABCDEF'

# Extract the relevant line (first line) from tinyxxd output
output_line1=$(sed -n '1p' tinyxxd_output1.txt)

# Compare the output
if [ "$output_line1" = "$expected_output1" ]; then
    echo "Test 1 passed."
else
    echo "Test 1 failed."
    echo "Expected output:"
    echo "$expected_output1"
    echo "Actual output:"
    echo "$output_line1"
    # Clean up
    rm -f Xxdin tinyxxd_output1.txt
    exit 1
fi

# Test 2: Input "ABCDEFGHI" with -e -c9
echo "Running Test 2..."

# Create input file with content "ABCDEFGHI" without a trailing newline
echo -n "ABCDEFGHI" > Xxdin

# Run tinyxxd with little-endian option and 9 columns
$XXD -e -c9 Xxdin > tinyxxd_output2.txt

# Expected output for Test 2
expected_output2='00000000: 44434241 48474645       49  ABCDEFGHI'

# Extract the relevant line (first line) from tinyxxd output
output_line2=$(sed -n '1p' tinyxxd_output2.txt)

# Compare the output
if [ "$output_line2" = "$expected_output2" ]; then
    echo "Test 2 passed."
else
    echo "Test 2 failed."
    echo "Expected output:"
    echo "$expected_output2"
    echo "Actual output:"
    echo "$output_line2"
    # Clean up
    rm -f Xxdin tinyxxd_output1.txt tinyxxd_output2.txt
    exit 1
fi

# Clean up temporary files
rm -f Xxdin tinyxxd_output1.txt tinyxxd_output2.txt

echo "All tests passed successfully."
exit 0
