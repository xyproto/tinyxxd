#!/bin/bash

# Test 19 from https://github.com/vim/vim/blob/master/src/testdir/test_xxd.vim

# Path to the xxd binary in the current directory
#XXD_CMD="/usr/bin/xxd"
XXD_CMD="$PWD/xxd"
#XXD_CMD="$PWD/tinyxxd"

# Create the file XXDfile with the content 'TESTabcd09' and a newline
echo "TESTabcd09" > XXDfile

# Run xxd to convert the file to a C include in binary format
$XXD_CMD -i -b XXDfile > output.txt

# Expected output
expected_output=$(cat <<EOF
unsigned char XXDfile[] = {
  0b01010100, 0b01000101, 0b01010011, 0b01010100, 0b01100001, 0b01100010,
  0b01100011, 0b01100100, 0b00110000, 0b00111001, 0b00001010
};
unsigned int XXDfile_len = 11;
EOF
)

# Get the actual output from the file
actual_output=$(cat output.txt)

# Compare the actual output to the expected output
if [[ "$actual_output" == "$expected_output" ]]; then
    echo "Test passed"
    rm -f XXDfile output.txt
    exit 0
else
    echo "Test failed"
    echo "Expected:"
    echo "$expected_output"
    echo "Got:"
    echo "$actual_output"
    rm -f XXDfile output.txt
    exit 1
fi
