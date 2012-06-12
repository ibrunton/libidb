# libidb makefile
# 2012-06-11 13:01
# by Ian D Brunton <iandbrunton at gmail dot com>

APPNAME=libidb.so
HEADER=idb.h
VERSION=0.1a
DESTDIR=
PREFIX=/usr
CC=gcc
CFLAGS=-c -Wall -Werror -fPIC
#-DVERSION=\"$(VERSION)\" -DAPPNAME=\"$(APPNAME)\"
LDFLAGS=-shared
SRC=main.c
OBJ=$(SRC:.c=.o)

all: $(APPNAME)

$(APPNAME): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $@

.c.o:
	$(CC) $(CFLAGS)  $< -o $@

install: all
	install -D -m 755 $(APPNAME) $(DESTDIR)$(PREFIX)/lib/$(APPNAME)
	install -D -m 644 $(HEADER) $(DESTDIR)$(PREFIX)/include/$(HEADER)
clean:
	rm -rf *.o $(APPNAME)
