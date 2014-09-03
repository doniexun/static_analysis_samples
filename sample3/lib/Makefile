CC=gcc
CFLAGS+=-I.
CFLAGS+= -fPIC -g #-pedantic -Wall -Wextra -ggdb3
LDFLAGS=-shared


APPS=libmylib.a

SRCS=mylib.c
OBJS=$(SRCS:.c=.o)


all: $(APPS) 

libmylib.so: $(OBJS)
	$(CC) $(LDFLAGS) $(CFLAGS) $^ -o $@.so

libmylib.a: $(OBJS)
	ar rcs $@ $^

clean:
	@rm -f $(APPS) $(OBJS) *.so