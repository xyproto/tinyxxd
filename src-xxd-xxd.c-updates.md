This pull request notifies that there have been changes to `src/xxd/xxd.c` in the source repository.

- [patch 9.2.0394: xxd: offsets greater than LONG_MAX print as negative

Problem:  xxd: offsets greater than LONG_MAX print as negative
Solution: Use "%lu" to print unsigned long value
          (Yasuhiro Matsumoto)

closes: #20055

Signed-off-by: Yasuhiro Matsumoto <mattn.jp@gmail.com>
Signed-off-by: Christian Brabandt <cb@256bit.org>](https://github.com/vim/vim/commit/8f9cde4592f1067c0104e1255314880d40441aa2) - Sun, 26 Apr 2026 08:22:23 UTC
