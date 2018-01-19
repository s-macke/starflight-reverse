CC = gcc
CFLAGS = -O2

all: disasOV1 disasOV2 emulate

disasm.o: src/disasm/debugger.c
	$(CC) $(CFLAGS) -c src/disasm/debugger.c -o disasm.o

utils.o: src/utils.c src/utils.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/utils.c -o utils.o

cpu.o: emul/cpu.c
	$(CC) $(CFLAGS) -c emul/cpu.c -o cpu.o

transpile2C1.o: src/transpile2C.c src/transpile2C.h
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/transpile2C.c -o transpile2C1.o

transpile2C2.o: src/transpile2C.c src/transpile2C.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/transpile2C.c -o transpile2C2.o

dictionary1.o: src/dictionary.c src/global.h
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/dictionary.c -o dictionary1.o

dictionary2.o: src/dictionary.c src/global.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/dictionary.c -o dictionary2.o

parser1.o: src/parser.c src/global.h
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/parser.c -o parser1.o

parser2.o: src/parser.c src/global.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/parser.c -o parser2.o

extract1.o: src/extract.c src/global.h
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/extract.c -o extract1.o

extract2.o: src/extract.c src/global.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/extract.c -o extract2.o

global1.o: src/global.c src/global.h
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/global.c -o global1.o

global2.o: src/global.c src/global.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/global.c -o global2.o

stack1.o: src/stack.c src/stack.h
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/stack.c -o stack1.o

stack2.o: src/stack.c src/stack.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/stack.c -o stack2.o

postfix2infix1.o: src/postfix2infix.c src/postfix2infix.h
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/postfix2infix.c -o postfix2infix1.o

postfix2infix2.o: src/postfix2infix.c src/postfix2infix.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/postfix2infix.c -o postfix2infix2.o

disasOV1: src/disasOV.c src/dictionary.c src/extract.c disasm.o global1.o dictionary1.o extract1.o parser1.o cpu.o utils.o stack1.o postfix2infix1.o transpile2C1.o
	$(CC) $(CFLAGS) -DSTARFLT1 src/disasOV.c -o disasOV1 disasm.o global1.o dictionary1.o extract1.o parser1.o cpu.o utils.o stack1.o postfix2infix1.o transpile2C1.o

disasOV2: src/disasOV.c src/dictionary.c src/extract.c disasm.o global2.o dictionary2.o extract2.o parser2.o cpu.o utils.o stack2.o postfix2infix2.o transpile2C2.o
	$(CC) $(CFLAGS) -DSTARFLT2 src/disasOV.c -o disasOV2 disasm.o global2.o dictionary2.o extract2.o parser2.o cpu.o utils.o stack2.o postfix2infix2.o transpile2C2.o

emulate: emul/emul.c emul/cpu.c
	$(CC) $(CFLAGS) -DSTARFLT1 emul/emul.c emul/cpu.c -o emulate

.PHONY: clean

clean: 
	rm -f *.o
	rm -f disasOV1
	rm -f disasOV2
	rm -f emulate
