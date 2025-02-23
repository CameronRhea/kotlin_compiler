CC = gcc
CFLAGS = -Wall -g
LDFLAGS = -lfl

OUTFILE = k0
SRCS = lex.yy.c main.c k0gram.tab.c 
HEADERS = funcs.h k0gram.tab.h tree.h
OBJECTS = lex.yy.o main.o k0gram.tab.o


all: $(OUTFILE)
$(OUTFILE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $@ $^ $(LDFLAGS)

lex.yy.c: kotlex.l
	flex kotlex.l

k0gram.tab.c: k0gram.y
	bison k0gram.y

k0gram.tab.h: k0gram.y
	bison -d k0gram.y

lex.yy.o : lex.yy.c tree.h
	$(CC) $(CFLAGS) -c lex.yy.c

k0gram.tab.o : k0gram.tab.c tree.h
	$(CC) $(CFLAGS) -c k0gram.tab.c

clean:
	rm -f $(TARGET) $(OBJECTS) lex.yy.c k0gram.tab.c