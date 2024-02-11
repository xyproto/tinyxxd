.PHONY: clean fmt install profile test uninstall

CC ?= gcc
CFLAGS ?= -std=c11 -O2 -pipe -fPIC -Wall -Wextra -Wpedantic -Wfatal-errors
UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Darwin)
	CFLAGS += -fstack-protector-strong -D_GNU_SOURCE -fno-plt
else ifeq ($(OS),Windows_NT)
	CFLAGS += -D_WIN32
else
	CFLAGS += -fstack-protector-strong -D_GNU_SOURCE -fno-plt -Wl,-z,now
endif

PREFIX ?= /usr
BINDIR ?= $(PREFIX)/bin
DESTDIR ?=

VERSION ?= 1.3.0
RELEASE_DIR := tinyxxd-$(VERSION)
RELEASE_TARBALL := $(RELEASE_DIR).tar.gz
RELEASE_FILES := main.c Makefile COPYING README.md

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

update-version:
	@echo "Updating version in main.c to $(VERSION)"
	@sed -i 's/const char\* version = "tinyxxd [0-9]*\.[0-9]*\.[0-9]*"/const char* version = "tinyxxd $(VERSION)"/' main.c

release: fmt test update-version
	@echo "Creating release version $(VERSION)"
	$(foreach file,$(RELEASE_FILES),$(if $(wildcard $(file)),,$(error Missing file $(file))))
	mkdir -p "$(RELEASE_DIR)"
	cp -v $(RELEASE_FILES) "$(RELEASE_DIR)/"
	tar zcvf $(RELEASE_TARBALL) "$(RELEASE_DIR)/"
	rm -rf "$(RELEASE_DIR)/"
	@echo "Release package created: $(RELEASE_TARBALL)"

tinyxxd_fuzz: main.c
	afl-gcc $(CFLAGS) -o $@ $<

fuzz: tinyxxd_fuzz
	export AFL_PATH=$(which afl-fuzz)
	export AFL_SKIP_CPUFREQ=1
	@mkdir -p input_dir
	@dd if=/dev/urandom of=input_dir/sample.bin count=1 bs=128
	afl-fuzz -i input_dir -o fuzz_output -- ./tinyxxd_fuzz @@

install: tinyxxd
	install -D -m 755 tinyxxd "$(DESTDIR)$(BINDIR)/tinyxxd"

uninstall:
	rm -f "$(DESTDIR)$(BINDIR)/tinyxxd"

clean:
	rm -f *.bin *.dat *.hex *.o *.pkl *.tar.gz callgrind.out.* og_xxd* output_* tinyxxd tinyxxd_* tinyxxd_debug xxd_*
