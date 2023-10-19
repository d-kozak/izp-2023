CFLAGS = -std=c99 -Wall -Wextra -Werror -lm
SRCS = $(wildcard *.c)
TARGETS =  $(filter-out ,$(patsubst %.c,%,$(SRCS)))

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	-rm $(TARGETS)
