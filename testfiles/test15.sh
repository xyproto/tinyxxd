#!/bin/bash

# Test 15: C include mode on stdin without -n only emits initializer list.

XXD_CMD=./tinyxxd

# Run tinyxxd with -i on stdin and capture output
echo foo | $XXD_CMD -i > output.txt

expected_output=$(cat <<EOF
  0x66, 0x6f, 0x6f, 0x0a
EOF
)

actual_output=$(cat output.txt)

if [[ "$actual_output" == "$expected_output" ]]; then
    echo "Test passed"
    rm -f output.txt
    exit 0
else
    echo "Test failed"
    echo "Expected:"
    echo "$expected_output"
    echo "Got:"
    echo "$actual_output"
    rm -f output.txt
    exit 1
fi