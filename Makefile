xxd: main.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o xxd main.c

clean:
	rm -f xxd xxd.o
