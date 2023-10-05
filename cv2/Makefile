CFLAGS = -std=c99 -Wall -Wextra -Werror
LMATH = -lm
SRCS = $(wildcard *.c)
LM_TARGETS = quadratic
TARGETS =  $(filter-out $(LM_TARGETS),$(patsubst %.c,%,$(SRCS)))

all: $(LM_TARGETS) $(TARGETS)

$(LM_TARGETS): $(LM_TARGETS).c
	$(CC) $(CFLAGS) $< -o $@ $(LMATH)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	-rm $(TARGETS) $(LM_TARGETS)
