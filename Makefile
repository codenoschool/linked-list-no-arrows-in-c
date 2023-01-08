SHELL = /bin/sh

CC = /usr/bin/cc

ll-noarrows: main.c
	$(CC) -o $@ $<

all: ll-noarrows

clean:
	rm -v ll-noarrows

remake: clean ll-noarrows

.PHONY = ll-noarrows all clean remake
