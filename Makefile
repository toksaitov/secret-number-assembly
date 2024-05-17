CC=gcc
CFLAGS=-g -O0 -fno-pie
LDFLAGS=-no-pie
LDLIBS=-lm

secret: secret.o assembly.o

secret.o: secret.c

assembly.o: assembly.x86-64.s assembly.h
	${CC} ${CFLAGS} -c -o $@ $<

.PHONY: clean
clean:
	rm -rf secret.o assembly.o secret
