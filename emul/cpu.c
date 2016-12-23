#include"cpu.h"

unsigned char mem[0x10000];
unsigned short regsp;

unsigned char Read8(unsigned short ofs)
{
    return mem[ofs];
}

unsigned short Read16(unsigned short ofs)
{
    return mem[ofs+0] | (mem[ofs+1]<<8);
}

void Write16(unsigned short ofs, unsigned short x)
{
    mem[ofs+0] = (x>>0)&0xFF;
    mem[ofs+1] = (x>>8)&0xFF;
}

void Write8(unsigned short ofs, unsigned char x)
{
    mem[ofs] = x;
}

void Push(unsigned short x)
{
    regsp -= 2;
    Write16(regsp, x);
}

unsigned short Pop()
{
    unsigned short x = Read16(regsp);
    regsp += 2;
    return x;
}



