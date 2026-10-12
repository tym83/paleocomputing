CC ?= cc
CFLAGS ?= -std=c11 -O2 -Wall -Wextra -Wno-unused-parameter
x8emu: main.c x8.c charon.c x8.h charon.h
	$(CC) $(CFLAGS) -o $@ main.c x8.c charon.c
clean:
	rm -f x8emu
