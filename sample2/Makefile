CC=gcc
CFLAGS=-I.

APPNAME=sample2

SRCS=main.c
OBJS=$(SRCS:.c=.o)

all: $(OBJS)
	$(CC) -o $(APPNAME) $^ $(CFLAGS)


clean:
	@rm -f $(APPNAME) $(OBJS)