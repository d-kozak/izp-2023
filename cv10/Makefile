CC=gcc
CFLAGS=-std=c11 -Wall -Wextra -g

all: sll_main

sll_main: sll.o sll_main.c
	$(CC) $(CFLAGS) sll_main.c sll.o -o sll_main

sll.o: sll.c
	$(CC) $(CFLAGS) -c sll.c

clean:
	rm *.o sll_main

dep:
	$(CC) -MM *.c