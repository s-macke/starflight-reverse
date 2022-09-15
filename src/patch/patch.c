#include <stdlib.h>
#include <stdio.h>

#include "../cpu/cpu.h"
#include "../disasOV/global.h"

#ifdef STARFLT1

void DecryptDictionary(int linkp) {
    if (linkp == 0) return;

    for(int i=0; i<5000; i++) {
        //printf("ßx%04x\n", linkp);
        unsigned char bitfield = Read8(linkp);
        int length = (bitfield & 0x1F);
        printf("0x%04x %2i '", linkp, length);
        if (length == 0) { // very strange
        } else
            if (length == 1) {
                printf("%c", Read8(linkp+1)&0x7F);
            } else
            {
                int j;
                for(j=1; j<=length; j++) {
                    unsigned char c = Read8(linkp+j);
                    unsigned char x = (c ^ 0x7F) & 0x7F;
                    printf("%c", x);
                    Write8(linkp+j, x);
                    if (j == length+1) exit(1);
                    if ((c & 0x80) != 0) {
                        Write8(linkp+j, x | 0x80);
                        break;
                    }
                }
                //if (j != length) printf(" <-- wrong");
            }
            //else {
            //}
            printf("'\n");

            linkp = Read16(linkp-2);
            if (linkp == 0) return;
    }
}
void EnableInterpreter()
{
    // Patch to start Forth interpreter
    Write16(0x0a53, 0x0000); // BOOT-HOOK

    //Write16(0x2420, 0x0F22-2); // "0"

    Write16(0x2420, 0x3a48-2); // "NOP"
    Write16(0x2422, 0x3a48-2); // "NOP"
    Write16(0x2424, 0x3a48-2); // "NOP"
    DecryptDictionary(DICTLIST1);
    DecryptDictionary(DICTLIST2);
    DecryptDictionary(DICTLIST3);
    DecryptDictionary(DICTLIST4);
    DecryptDictionary(DICTLIST5);
}

void DisableInterpreterOutput()
{
    Write16(0x2420+34, 0x3a46); // CR in QUIT word
    Write16(0x03c3, 0x1692-2); // print "ok"
    Write16(0x1d3e + 114, 0xe32); // Drop EMIT in (EXPECT)
}

#elif STARFLT2
#error Not supported
#endif