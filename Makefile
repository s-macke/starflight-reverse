CC = gcc
CFLAGS = -O2

all: disasOV1 disasOV2

disasm.o: src/disasm/debugger.c
	$(CC) $(CFLAGS) -c src/disasm/debugger.c -o disasm.o

cpu.o: src/cpu.c
	$(CC) $(CFLAGS) -c src/cpu.c -o cpu.o

dictionary1.o: src/dictionary.c
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/dictionary.c -o dictionary1.o

dictionary2.o: src/dictionary.c
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/dictionary.c -o dictionary2.o

extract1.o: src/extract.c
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/extract.c -o extract1.o

extract2.o: src/extract.c
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/extract.c -o extract2.o

global1.o: src/global.c src/global.h
	$(CC) $(CFLAGS) -DSTARFLT1 -c src/global.c -o global1.o

global2.o: src/global.c src/global.h
	$(CC) $(CFLAGS) -DSTARFLT2 -c src/global.c -o global2.o

disasOV1: src/disasOV.c src/dictionary.c src/extract.c disasm.o global1.o dictionary1.o extract1.o cpu.o
	$(CC) $(CFLAGS) -DSTARFLT1 src/disasOV.c -o disasOV1 disasm.o global1.o dictionary1.o extract1.o cpu.o

disasOV2: src/disasOV.c src/dictionary.c src/extract.c disasm.o global2.o dictionary2.o extract2.o cpu.o
	$(CC) $(CFLAGS) -DSTARFLT2 src/disasOV.c -o disasOV2 disasm.o global2.o dictionary2.o extract2.o cpu.o
    
.PHONY: clean

clean: 
	rm -f *.o
	rm -f disasOV1
	rm -f disasOV2
