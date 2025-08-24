This pull request notifies that there have been changes to `src/xxd/xxd.c` in the source repository.

- [patch 9.1.1683: xxd: Avoid null dereference in autoskip colorless

Problem:  xxd: Avoid null dereference in autoskip colorless
Solution: Verify that colors is not null (Joakim Nohlgård)

Fixes bug introduced in 6897f18ee6e5bb78b32c97616e484030fd514750
(v9.1.1459) which does a memcpy from NULL when color=never and the
autoskip option is used.

Before:

dd if=/dev/zero bs=100 count=1 status=none | xxd -a -R never
00000000: 0000 0000 0000 0000 0000 0000 0000 0000  ................
Segmentation fault (core dumped)

After:

dd if=/dev/zero bs=100 count=1 status=none | ./xxd/xxd -a -R never
00000000: 0000 0000 0000 0000 0000 0000 0000 0000  ................
*
00000060: 0000 0000                                ....

closes: #18008

Signed-off-by: Joakim Nohlgård <joakim@nohlgard.se>
Signed-off-by: Christian Brabandt <cb@256bit.org>](https://github.com/vim/vim/commit/b922b30cfe4c044c83bac3cc908084ed20a83598) - Sun, 24 Aug 2025 10:36:44 UTC
