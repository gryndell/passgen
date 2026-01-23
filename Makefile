CC=clang
CFLAGS=-Wall -g

all:	passgen

passgen: passgen.c
	$(CC) $(CFLAGS) passgen.c -o passgen

install: passgen
	mv passgen $(HOME)/bin/

clean:
	$(RM) *.o passgen
