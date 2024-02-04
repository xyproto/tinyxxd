.PHONY: clean fmt install profile test uninstall

CFLAGS ?= -std=c11 -O2 -pipe -fPIC -fno-plt -fstack-protector-strong -D_GNU_SOURCE -z norelro -Wall -Wextra -Wpedantic -Wfatal-errors
UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Darwin)
	CFLAGS := -std=c11 -O2 -pipe -fPIC -fstack-protector-strong -Wall -Wextra -Wpedantic -Wfatal-errors
endif

PREFIX ?= /usr
BINDIR ?= $(PREFIX)/bin
DESTDIR ?=

tinyxxd: main.c
	$(CC) $(CFLAGS) -o $@ $<

tinyxxd_debug: main.c
	$(CC) $(CFLAGS) -g -o $@ $<

profile: tinyxxd_debug
	dd if=/dev/random of=sample.bin bs=1M count=1
	valgrind --dump-instr=yes --collect-jumps=yes --tool=callgrind ./tinyxxd_debug sample.bin
	@rm -f sample.bin
	@kcachegrind || echo 'Profile generated. Use kcachegrind or a similar tool to view the callgrind output.'

fmt: main.c
	clang-format -style=WebKit -i main.c

test: tinyxxd
	@echo 'Running tests...'
	@echo -n 'This is a test file' > sample.bin
	@$(MAKE) run_test CMD='-c 8 sample.bin' DESC='Hex dump with 8 columns'
	@$(MAKE) run_test CMD='-p sample.bin' DESC='Plain hex dump (PostScript style)'
	@$(MAKE) run_test CMD='-i sample.bin' DESC='C include file style'
	@$(MAKE) run_test CMD='-e sample.bin' DESC='Little-endian hex dump'
	@$(MAKE) run_test CMD='-b sample.bin' DESC='Binary digit dump'
	@$(MAKE) run_test CMD='-u sample.bin' DESC='Capitalized hex output'
	@$(MAKE) run_test CMD='-E sample.bin' DESC='Show EBCDIC'
	@$(MAKE) verify_conversion_test
	@rm -f *.hex sample.bin tinyxxd_output.txt xxd_output.txt
	@echo 'All tests complete.'

run_test:
	@echo "Running test: $(DESC)"
	@./tinyxxd $(CMD) > tinyxxd_output.txt
	@xxd $(CMD) > xxd_output.txt
	@if diff -q tinyxxd_output.txt xxd_output.txt > /dev/null; then \
		echo 'Test passed'; \
	else \
		echo 'Test failed'; \
		diff tinyxxd_output.txt xxd_output.txt; \
	fi

verify_conversion_test:
	@echo "Running conversion and verification test..."
	@./tinyxxd sample.bin > sample_tinyxxd.bin
	@./tinyxxd -r sample_tinyxxd.bin > sample_restored.bin
	@if diff -q sample.bin sample_restored.bin > /dev/null; then \
		echo -e "\033[0;32mConversion and verification test passed\033[0m"; \
	else \
		echo -e "\033[0;31mConversion and verification test failed\033[0m"; \
		exit 1; \
	fi
	@rm -f sample_tinyxxd.bin sample_restored.bin

install: tinyxxd
	install -D -m 755 tinyxxd "$(DESTDIR)$(BINDIR)/tinyxxd"

uninstall:
	rm -f "$(DESTDIR)$(BINDIR)/tinyxxd"

clean:
	rm -f *.bin *.hex *.o callgrind.out.* tinyxxd tinyxxd_debug output_* xxd_* tinyxxd_*
