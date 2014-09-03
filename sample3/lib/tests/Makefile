CC=gcc
CFLAGS+=-I../ -L../ -lmylib
CFLAGS+= -fPIC -g #-pedantic -Wall -Wextra -ggdb3


APPS=ut

SRCS=test_mylib.c
OBJS=$(SRCS:.c=.o)

all: $(APPS)

ut: $(OBJS)
	$(CC)  $< $(CFLAGS) -o $@

clean:
	@rm -f $(APPS) $(OBJS)