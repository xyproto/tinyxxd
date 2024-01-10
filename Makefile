CFLAGS ?= -std=c18 -O2 -pipe -fPIC -fno-plt -fstack-protector-strong -D_GNU_SOURCE -Wall -Wextra -Wpedantic

tinyxxd: main.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $<

clean:
	rm -f tinyxxd
