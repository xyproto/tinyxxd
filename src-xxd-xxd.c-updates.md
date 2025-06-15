This pull request notifies that there have been changes to `src/xxd/xxd.c` in the source repository.

- [patch 9.1.1459: xxd: coloring output is inefficient

Problem:  xxd prints color escape sequences for every octet
          even if the color doesn't change
Solution: use separate arrays for colors and text and only
          print escape sequences when the color changes
          (Emanuel Krollmann)

fixes: #15122
closes: #17535

Signed-off-by: Emanuel Krollmann <E.Krollmann@protonmail.com>
Signed-off-by: Christian Brabandt <cb@256bit.org>](https://github.com/vim/vim/commit/6897f18ee6e5bb78b32c97616e484030fd514750) - Sun, 15 Jun 2025 14:24:09 UTC
