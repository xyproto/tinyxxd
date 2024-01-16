.PHONY: clean install test uninstall run_test

CC ?= gcc
CFLAGS ?= -std=c11 -O2 -pipe -fPIC -fno-plt -fstack-protector-strong -D_GNU_SOURCE -z norelro -Wall -Wextra -Wpedantic -Wfatal-errors -I./include
LDFLAGS ?=
UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Darwin)
	CFLAGS := -std=c11 -O2 -pipe -fPIC -fstack-protector-strong -Wall -Wextra -Wpedantic -Wfatal-errors -I./include
endif

PREFIX ?= /usr
BINDIR ?= $(PREFIX)/bin
DESTDIR ?=

SRC := $(wildcard src/*.c)
OBJ := $(SRC:.c=.o)
MAIN_OBJ := main.o

all: tinyxxd

tinyxxd: $(OBJ) $(MAIN_OBJ)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

main.o: main.c
	$(CC) $(CFLAGS) -c -o $@ $<

install: tinyxxd
	install -D -m 755 tinyxxd "$(DESTDIR)$(BINDIR)/tinyxxd"

uninstall:
	rm -f "$(DESTDIR)$(BINDIR)/tinyxxd"

clean:
	rm -f tinyxxd *.o

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
