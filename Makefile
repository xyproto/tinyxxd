.PHONY: clean install uninstall

CFLAGS ?= -std=c18 -O2 -pipe -fPIC -fno-plt -fstack-protector-strong -D_GNU_SOURCE -s -z norelro -Wall -Wextra -Wpedantic
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
