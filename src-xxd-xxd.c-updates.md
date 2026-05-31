This pull request notifies that there have been changes to `src/xxd/xxd.c` in the source repository.

- [patch 9.2.0580: xxd: binary output is not colored with -R

Problem:  With xxd the -R option colors the hex output but leaves the
          binary output produced by -b uncolored (Boris Verkhovskiy)
Solution: Color the binary (bits) output per byte with the same colors as
          the hex output, update the documentation and add a test
          (Hirohito Higashi).

fixes:  #20385
closes: #20401

Signed-off-by: Hirohito Higashi <h.east.727@gmail.com>
Signed-off-by: Christian Brabandt <cb@256bit.org>](https://github.com/vim/vim/commit/f0cae9d5abba1ad97f8c78c8d3cbb0d1c46d5aff) - Sun, 31 May 2026 21:11:55 UTC
