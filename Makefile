CC = gcc
CFLAGS = -O2

all: disasOV1 disasOV2 emulate emulatesdl extractplanets1 extractplanetsdata1 extractdata1 extractinstance1 extractinstance2

disasmX86.o: src/disasmX86/debugger.c
	$(CC) $(CFLAGS) -c src/disasmX86/debugger.c -o disasmX86.o

utils.o: src/disasOV/utils.c src/disasOV/utils.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/disasOV/utils.c -o utils.o

cpu.o: src/emul/cpu.c
	$(CC) $(CFLAGS) -c src/emul/cpu.c -o cpu.o

transpile2C1.o: src/disasOV/transpile2C.c src/disasOV/transpile2C.h
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/disasOV/transpile2C.c -o transpile2C1.o

transpile2C2.o: src/disasOV/transpile2C.c src/disasOV/transpile2C.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/disasOV/transpile2C.c -o transpile2C2.o

dictionary1.o: src/disasOV/dictionary.c src/disasOV/global.h
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/disasOV/dictionary.c -o dictionary1.o

dictionary2.o: src/disasOV/dictionary.c src/disasOV/global.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/disasOV/dictionary.c -o dictionary2.o

parser1.o: src/disasOV/parser.c src/disasOV/global.h
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/disasOV/parser.c -o parser1.o

parser2.o: src/disasOV/parser.c src/disasOV/global.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/disasOV/parser.c -o parser2.o

extract1.o: src/disasOV/extract.c src/disasOV/global.h
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/disasOV/extract.c -o extract1.o

extract2.o: src/disasOV/extract.c src/disasOV/global.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/disasOV/extract.c -o extract2.o

global1.o: src/disasOV/global.c src/disasOV/global.h
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/disasOV/global.c -o global1.o

global2.o: src/disasOV/global.c src/disasOV/global.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/disasOV/global.c -o global2.o

stack1.o: src/disasOV/stack.c src/disasOV/stack.h
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/disasOV/stack.c -o stack1.o

stack2.o: src/disasOV/stack.c src/disasOV/stack.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/disasOV/stack.c -o stack2.o

postfix2infix1.o: src/disasOV/postfix2infix.c src/disasOV/postfix2infix.h
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/disasOV/postfix2infix.c -o postfix2infix1.o

postfix2infix2.o: src/disasOV/postfix2infix.c src/disasOV/postfix2infix.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/disasOV/postfix2infix.c -o postfix2infix2.o

graph1.o: src/disasOV/graph.c src/disasOV/graph.h
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/disasOV/graph.c -o graph1.o

graph2.o: src/disasOV/graph.c src/disasOV/graph.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/disasOV/graph.c -o graph2.o

extractdata1: src/extract/extractdata.c
		$(CC) $(CFLAGS) -DSTARFLT1 src/extract/extractdata.c -o extractdata1

disasOV1: src/disasOV/disasOV.c disasmX86.o global1.o dictionary1.o extract1.o parser1.o cpu.o utils.o stack1.o postfix2infix1.o transpile2C1.o graph1.o
	$(CC) $(CFLAGS) -DSTARFLT1 src/disasOV/disasOV.c -o disasOV1 disasmX86.o global1.o dictionary1.o extract1.o parser1.o cpu.o utils.o stack1.o postfix2infix1.o transpile2C1.o graph1.o

disasOV2: src/disasOV/disasOV.c disasmX86.o global2.o dictionary2.o extract2.o parser2.o cpu.o utils.o stack2.o postfix2infix2.o transpile2C2.o graph2.o
	$(CC) $(CFLAGS) -DSTARFLT2 src/disasOV/disasOV.c -o disasOV2 disasmX86.o global2.o dictionary2.o extract2.o parser2.o cpu.o utils.o stack2.o postfix2infix2.o transpile2C2.o graph2.o

emulate: src/emul/emul.c src/emul/call.c src/emul/findword.c src/emul/callstack.c src/emul/cpu.c src/disasOV/global.c src/emul/graphics.c src/emul/fract.c
	$(CC) $(CFLAGS) -DSTARFLT1 src/emul/emul.c src/emul/call.c src/emul/findword.c src/emul/callstack.c src/emul/cpu.c src/disasOV/global.c src/emul/graphics.c src/emul/fract.c -o emulate

emulatesdl: src/emul/emul.c src/emul/call.c src/emul/cpu.c src/emul/findword.c src/emul/callstack.c src/disasOV/global.c src/emul/graphics.c src/emul/fract.c
	$(CC) $(CFLAGS) -DSTARFLT1 -DSDL src/emul/emul.c src/emul/call.c src/emul/findword.c src/emul/callstack.c src/emul/cpu.c src/disasOV/global.c src/emul/graphics.c src/emul/fract.c -o emulatesdl -lSDL2

extractplanets1: src/extract/extractplanets.c src/emul/call.c src/emul/findword.c src/emul/callstack.c src/emul/cpu.c src/disasOV/global.c src/emul/graphics.c src/emul/fract.c
	$(CC) $(CFLAGS) -DSTARFLT1 src/extract/extractplanets.c src/emul/call.c src/emul/findword.c src/emul/callstack.c src/emul/cpu.c src/disasOV/global.c src/emul/graphics.c src/emul/fract.c -o extractplanets1

extractplanetsdata1: src/extract/extractplanetsdata.c src/emul/call.c src/emul/findword.c src/emul/callstack.c src/emul/cpu.c src/disasOV/global.c src/emul/graphics.c src/emul/fract.c
	$(CC) $(CFLAGS) -DSTARFLT1 src/extract/extractplanetsdata.c src/emul/call.c src/emul/findword.c src/emul/callstack.c src/emul/cpu.c src/disasOV/global.c src/emul/graphics.c src/emul/fract.c -o extractplanetsdata1

extractinstance1: src/extract/instance.c extract1.o
	$(CC) $(CFLAGS) -DSTARFLT1 src/extract/instance.c -o extractinstance1 extract1.o global1.o

extractinstance2: src/extract/instance.c extract2.o
	$(CC) $(CFLAGS) -DSTARFLT2 src/extract/instance.c -o extractinstance2 extract2.o global1.o


.PHONY: clean all

clean:
	rm -f *.o
	rm -f disasOV1
	rm -f disasOV2
	rm -f extractinstance1
	rm -f extractinstance2
	rm -f emulate
	rm -f emulatesdl
	rm -f extractplanets1
