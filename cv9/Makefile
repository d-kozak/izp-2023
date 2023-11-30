CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -pedantic -g
SRCS = $(wildcard *.c)
TARGETS = $(patsubst %.c,%,$(SRCS))

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	-rm $(TARGETS)


