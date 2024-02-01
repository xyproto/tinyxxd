.PHONY: clean fmt install test uninstall

CFLAGS ?= -std=c11 -O2 -pipe -fPIC -flto -fno-plt -finline-functions -fstack-protector-strong -funroll-loops -D_GNU_SOURCE -z norelro -Wall -Wextra -Wpedantic -Wfatal-errors
UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Darwin)
	CFLAGS := -std=c11 -O2 -pipe -flto -fPIC -finline-functions -fstack-protector-strong -funroll-loops -Wall -Wextra -Wpedantic -Wfatal-errors
endif

PREFIX ?= /usr
BINDIR ?= $(PREFIX)/bin
DESTDIR ?=

tinyxxd: main.c
	$(CC) $(CFLAGS) -o $@ $<

install: tinyxxd
	install -D -m 755 tinyxxd "$(DESTDIR)$(BINDIR)/tinyxxd"

uninstall:
	rm -f "$(DESTDIR)$(BINDIR)/tinyxxd"

clean:
	rm -f tinyxxd

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
	@rm -f tinyxxd_output.txt xxd_output.txt sample.bin
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
