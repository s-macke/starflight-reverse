CC = gcc
CFLAGS = -O2

all: disasOV1 disasOV2

disasm.o: src/disasm/debugger.c
	$(CC) $(CFLAGS) -c src/disasm/debugger.c -o disasm.o

global1.o: src/global.c src/global.h
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/global.c -o global1.o

global2.o: src/global.c src/global.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/global.c -o global2.o

disasOV1: src/disasOV.c src/dictionary.c src/extract.c disasm.o global1.o
	$(CC) $(CFLAGS) -DSTARFLT1 src/disasOV.c -o disasOV1 disasm.o global1.o

disasOV2: src/disasOV.c src/dictionary.c src/extract.c disasm.o global2.o
	$(CC) $(CFLAGS) -DSTARFLT2 src/disasOV.c -o disasOV2 disasm.o global2.o
    
.PHONY: clean

clean: 
	rm -f *.o
	rm -f disasOV1
	rm -f disasOV2
