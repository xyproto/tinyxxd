This pull request notifies that there have been changes to `src/xxd/xxd.c` in the source repository.

- [patch 9.1.1616: xxd: possible buffer overflow with bitwise output

Problem:  xxd: possible buffer overflow with bitwise output
          (after v9.1.1459, Xudong Cao)
Solution: Update LLEN_NO_COLOR macro definition for the max line output
          (using bitwise output -b)

fixes: #17944
closes: #17947

Signed-off-by: Christian Brabandt <cb@256bit.org>](https://github.com/vim/vim/commit/eeef7c77436a78cd27047b0f5fa6925d56de3cb0) - Sat, 09 Aug 2025 22:06:51 UTC
