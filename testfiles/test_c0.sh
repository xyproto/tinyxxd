#!/bin/bash

# Test -c 0 flag behavior
# -c 0 for non-postscript modes should use the default column count
# -c 0 -ps should output all bytes on a single line (no line wrapping)

XXD_CMD=${XXD_CMD:-./tinyxxd}
PASSED=0
FAILED=0

# Create test files
echo -n "hello world" > /tmp/test_c0.bin
dd if=/dev/zero bs=1 count=100 2>/dev/null > /tmp/test_c0_large.bin

echo "Testing -c 0 flag behavior..."

# Test 1: -c 0 in normal mode should use default 16 columns (not error)
echo -n "Test 1: -c 0 in normal mode uses default columns... "
output=$($XXD_CMD -c 0 /tmp/test_c0.bin 2>&1)
exit_code=$?
# Should succeed and output should contain hex dump with default columns
if [ $exit_code -eq 0 ] && echo "$output" | grep -q "6865 6c6c"; then
    echo "PASSED"
    ((PASSED++))
else
    echo "FAILED (expected success with hex output)"
    echo "  Exit code: $exit_code"
    echo "  Output: $output"
    ((FAILED++))
fi

# Test 2: -c 0 -ps should output all on one line without wrapping
echo -n "Test 2: -c 0 -ps should output single line... "
output=$($XXD_CMD -c 0 -ps /tmp/test_c0.bin 2>&1)
expected="68656c6c6f20776f726c64"
if [ "$output" = "$expected" ]; then
    echo "PASSED"
    ((PASSED++))
else
    echo "FAILED"
    echo "  Expected: $expected"
    echo "  Got:      $output"
    ((FAILED++))
fi

# Test 3: -c 0 with -b (bits) should use default 6 columns
echo -n "Test 3: -c 0 -b uses default 6 columns... "
output=$($XXD_CMD -c 0 -b /tmp/test_c0.bin 2>&1)
exit_code=$?
if [ $exit_code -eq 0 ] && echo "$output" | grep -q "01101000"; then
    echo "PASSED"
    ((PASSED++))
else
    echo "FAILED"
    echo "  Exit code: $exit_code"
    echo "  Output: $output"
    ((FAILED++))
fi

# Test 4: -c 0 with -i (include) should use default 12 columns
echo -n "Test 4: -c 0 -i uses default 12 columns... "
output=$($XXD_CMD -c 0 -i /tmp/test_c0.bin 2>&1)
exit_code=$?
if [ $exit_code -eq 0 ] && echo "$output" | grep -q "0x68"; then
    echo "PASSED"
    ((PASSED++))
else
    echo "FAILED"
    echo "  Exit code: $exit_code"
    echo "  Output: $output"
    ((FAILED++))
fi

# Test 5: -c 0 with -e (little-endian) should use default 16 columns
echo -n "Test 5: -c 0 -e uses default 16 columns... "
output=$($XXD_CMD -c 0 -e /tmp/test_c0.bin 2>&1)
exit_code=$?
if [ $exit_code -eq 0 ] && echo "$output" | grep -q "6c6c6568"; then
    echo "PASSED"
    ((PASSED++))
else
    echo "FAILED"
    echo "  Exit code: $exit_code"
    echo "  Output: $output"
    ((FAILED++))
fi

# Test 6: -c 0 -ps with larger file - verify single line (no line breaks)
echo -n "Test 6: -c 0 -ps with larger file (no line breaks)... "
output=$($XXD_CMD -c 0 -ps /tmp/test_c0_large.bin 2>&1)
newline_count=$(echo "$output" | wc -l)
# Should be exactly 1 line (the output itself)
if [ "$newline_count" -eq 1 ]; then
    echo "PASSED"
    ((PASSED++))
else
    echo "FAILED (expected 1 line, got $newline_count)"
    ((FAILED++))
fi

# Test 7: Compare -c 0 -ps output length (100 bytes = 200 hex chars)
echo -n "Test 7: -c 0 -ps output length correct (200 hex chars)... "
output=$($XXD_CMD -c 0 -ps /tmp/test_c0_large.bin 2>&1)
# Remove trailing newline and count chars
char_count=${#output}
if [ "$char_count" -eq 200 ]; then
    echo "PASSED"
    ((PASSED++))
else
    echo "FAILED (expected 200 chars, got $char_count)"
    ((FAILED++))
fi

# Clean up
rm -f /tmp/test_c0.bin /tmp/test_c0_large.bin

# Summary
echo ""
echo "Results: $PASSED passed, $FAILED failed"

if [ $FAILED -gt 0 ]; then
    exit 1
fi
exit 0
