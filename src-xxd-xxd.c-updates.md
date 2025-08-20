This pull request notifies that there have been changes to `src/xxd/xxd.c` in the source repository.

- [patch 9.1.1663: xxd: 9.1.0023 introduced additional dependency

Problem:  xxd: 9.1.0023 introduced additional dependency
Solution: remove non-native z/OS library call (David Seal)

Commit 48a75f3dfb906a2d333a7b1c3545e2eb359596db (Patch 9.1.0023)
introduces a call to __disableautocvt() which can only be found in a
non-native z/OS library.  This requires installing the external zoslib
library in order to work, which is not present on all z/OS systems

So remove the call to __disableautocvt() and rely on library routines
that are available to all z/OS users

See https://ibmruntimes.github.io/zoslib/zos-io_8cc.html for more
details

closes: #18059

Signed-off-by: David Seal <dseal@rocketsoftware.com>
Signed-off-by: Christian Brabandt <cb@256bit.org>](https://github.com/vim/vim/commit/836ed5271edc5d5657255662acea01dc2d9939c2) - Wed, 20 Aug 2025 20:24:56 UTC
