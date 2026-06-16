This pull request notifies that there have been changes to `src/xxd/xxd.c` in the source repository.

- [patch 9.2.0658: xxd: signed integer overflow in huntype()

Problem:  malformed revert input with an overlong address column causes
          signed integer overflow (UB) in huntype().
Solution: perform the offset/bit shifts through unsigned types

related: neovim/neovim#40246

Supported by AI

Co-Authored-by: Justin M. Keyes <justinkz@gmail.com>
Signed-off-by: Christian Brabandt <cb@256bit.org>](https://github.com/vim/vim/commit/24bf0b60e901b11a37d877cd5947849c18e1a602) - Tue, 16 Jun 2026 19:26:00 UTC
