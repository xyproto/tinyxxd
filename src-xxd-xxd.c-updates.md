This pull request notifies that there have been changes to `src/xxd/xxd.c` in the source repository.

- [patch 9.1.0912: xxd: integer overflow with sparse files and -autoskip

Problem:  xxd: integer overflow with sparse files and -autoskip
Solution: reset zero_seen when at the limit, change the type to char
          (sendittothenewts)

When encountering INT_MAX lines of zeros in the input, xxd overflows an
`int` counter, resulting in undefined behaviour.  Usually, this results
in a spurious line of zeros being output every 2**32 lines, while the
"*" line is lost, as is the final line of zeros that delineate the file
size if at end of file.

Since xxd doesn't need to know exactly how many lines are being skipped
when it's > 3, the exact value of the line counter `zero_seen` doesn't
matter and it can simply be reduced in value before the overflow occurs.

Changing the type of `zero_seen` to `signed char` is not important, and
done only to make the bug triggerable with more modest file sizes, and
therefore more convenient to test the fix.

fixes: #16170
closes: #16175

Signed-off-by: sendittothenewts <ross.axe@gmail.com>
Signed-off-by: Christian Brabandt <cb@256bit.org>](https://github.com/vim/vim/commit/6e6aff0f7ad2a2c9033724738e66dfdbb9e4c2ec) - Sat, 07 Dec 2024 15:27:22 UTC
