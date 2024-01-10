CFLAGS ?= -std=c18 -O2 -pipe -fPIC -fno-plt -fstack-protector-strong -D_GNU_SOURCE
#CFLAGS += -D_XOPEN_SOURCE 700

xxd: main.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o xxd main.c

clean:
	rm -f xxd xxd.o
