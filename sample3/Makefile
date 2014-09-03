CC=gcc
CFLAGS+=-I./lib -L./lib -lmylib
CFLAGS+= -fPIC -g #-pedantic -Wall -Wextra -ggdb3


APPS=sample3

SRCS=main.c
OBJS=$(SRCS:.c=.o)

all: $(APPS)

sample3: $(OBJS)
	$(CC)  $< $(CFLAGS) -o $@

clean:
	@rm -f $(APPS) $(OBJS)