#ifndef CPU_H
#define CPU_H

extern unsigned char mem[0x10000];

unsigned char Read8(unsigned short ofs);
unsigned short Read16(unsigned short ofs);
void Write16(unsigned short ofs, unsigned short x);
void Write8(unsigned short ofs, unsigned char x);

void Push(unsigned short x);
unsigned short Pop();

#endif
