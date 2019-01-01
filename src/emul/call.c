#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<time.h>
#include<sys/time.h>

#include"call.h"
#include"cpu.h"
#include"fract.h"
#include"graphics.h"
#include"callstack.h"
#include"findword.h"
#include"../disasOV/global.h"

const unsigned short cs = 0x192;
const unsigned short ds = 0x192;

unsigned short int regdi = REGDI; // points to word "OPERATOR"
unsigned short int cx = 0x0;
unsigned short int dx = 0x0;

// ------------------------------------------------

unsigned short int inputbuffer[256];

void FillKeyboardBufferString(char *str)
{
    int n = strlen(str);
    memset(inputbuffer, 0, sizeof(inputbuffer));
    for(int i=0; i<n; i++)
    {
        int c = str[i];
        if (c == 0xa) c = 0xd;
        inputbuffer[i] = c;
    }
    inputbuffer[n] = 0;
}

void FillKeyboardBufferKey(unsigned short c)
{
    memset(inputbuffer, 0, sizeof(inputbuffer));
    if (c == 0xa) c = 0xd;
    inputbuffer[0] = c;
    inputbuffer[1] = 0;
}

// ------------------------------------------------

void HandleInterrupt()
{
    static int disktransferaddress_segment = -1;
    static int disktransferaddress_offset = -1;

    int i = 0;
    int interrupt = Pop();
    mem[0x16C9] = interrupt;
    int flags = Read16(0x16b4);
    int ax = Read16(0x16b6);
    int bx = Read16(0x16b8);
    cx = Read16(0x16ba);
    dx = Read16(0x16bc);
    int ds = Read16(0x16c4);
    int es = Read16(0x16c6);
    int tempdi = Read16(0x16c0);
    int tempsi = Read16(0x16c2);

    //printf("interrupt 0x%x with ax=0x%04x bx=0x%04x flags=%x es=0x%04x\n", interrupt, ax, bx, flags, es);

    if ((interrupt == 0x10) && ((ax>>8) == 0xF))
    {
        // get current video mode
        ax = 0x3;
    } else
    if (interrupt == 0x11)
    {
        // return equipment list ???
        ax = 0xd426;
    } else
    if ((interrupt == 0x21) && ((ax>>8) == 0x0D))
    {
        // drive reset
    } else
    if ((interrupt == 0x21) && ((ax>>8) == 0x0F))
    {
        // open file
        ax = 0x0;
        Write8(tempdi, 0x3); // drive number
    } else
    if ((interrupt == 0x21) && ((ax>>8) == 0x10))
    {
        // close file
        ax = 0x0;
    } else
    if ((interrupt == 0x21) && ((ax>>8) == 0x1a))
    {
        // set disk transfer address
        //printf("  set disk transfer to 0x%04x:0x%04x\n", ds, dx);
        disktransferaddress_segment = ds;
        disktransferaddress_offset = dx;
        // set to 0x117B:0x0008
    } else
    if ((interrupt == 0x21) && ((ax>>8) == 0x19)) // get default drive
    {
        ax = 0x2;
    } else
    if ((interrupt == 0x21) && ((ax>>8) == 0x22))
    {
        // random write
        int size = Read16(dx+0x0E);
        int block = Read16(dx+0x21) + (mem[dx+0x23]<<16);
        //printf("  size %i block %i write to 0x%x\n", size, block, disktransferaddress);
        //char filename[] = "STARA.COM";
        //filename[4] = Read8(dx+5);
        //printf("  Write %s", filename);
        ax = 0x0;
    } else
    if ((interrupt == 0x21) && ((ax>>8) == 0x21))
    {
        // random read
        //record size
        int size = Read16(dx+0x0E);
        int block = Read16(dx+0x21) + (mem[dx+0x23]<<16);

        char filename[] = "starflt1-in/STARA.COM";
        filename[16] = Read8(dx+5);
        //printf(" random read of file %s: size %i block %i (offset=0x%06x) write to 0x%04x:0x%04x\n", filename, size, block, block*size, disktransferaddress_segment, disktransferaddress_offset);

        //printf("  Read %s", filename);
        /*
        for(i=0; i<11; i++) printf("%c", mem[dx+1+i]);
        printf("\n");*/
        FILE *fp = fopen(filename, "rb");
        if (fp == NULL)
        {
            fprintf(stderr, "Cannot open file\n");
            exit(1);
        }
        fseek (fp, block*size, SEEK_SET);
        int ret = fread(&m[(disktransferaddress_segment<<4)+disktransferaddress_offset], size, 1, fp);
        fclose(fp);
        ax = 0x0;
    } else
    if ((interrupt == 0x21) && ((ax>>8) == 0x11)) // find first file
    {
        // Search for first entry using FCB
        //printf("  Load ");
        //for(i=0; i<11; i++) printf("%c", mem[dx+1+i]);
        //printf("\n");

        // file found
        ax = 0x0;
    } else
    if ((interrupt == 0x21) && ((ax>>8) == 0x4A))
    {
        // modify allocated memory block
        //printf("modify allocated memory block: segment=0x%04x new size=0x%04x\n", es, bx);
        ax = 0x1FE;
        bx = bx;
        //for(i=0xFFD0; i<0x10000; i++) mem[i] = 0x0;
    } else
    if ((interrupt == 0x21) && ((ax>>8) == 0x29))
    {
        // Parse a Filename for FCB
        //printf("  ds:si 0x%x:0x%x\n", ds, tempsi);
        //printf("  es:di 0x%x:0x%x\n", es, tempdi);
        //printf("  Load ");
        //for(i=0; i<11; i++) printf("%c", mem[tempsi+i]);
        //printf("\n");
        for(i=0; i<5; i++) mem[tempdi+i+1] = mem[tempsi+i]; // STARA or STARB
        mem[tempdi+0x0] = 0x0; // drive number
        // filesize
        if (mem[tempsi+4] == 'B')
        {
            // 354 kB
            mem[tempdi+0x10] = 0x00;
            mem[tempdi+0x11] = 0x88;
            mem[tempdi+0x12] = 0x05;
            mem[tempdi+0x13] = 0x00;

        } else
        {
            // 256 kB
            mem[tempdi+0x10] = 0x00;
            mem[tempdi+0x11] = 0xE8;
            mem[tempdi+0x12] = 0x03;
            mem[tempdi+0x13] = 0x00;
        }

        ax = 0;
        bx = 0;
    } else
    {
        fprintf(stderr, "unknown interrupt request\n");
        exit(1);
    }
    Write16(0x16b4, flags); //flags
    Write16(0x16b6, ax);
    Write16(0x16b8, bx);
    Write16(0x16ba, cx);
    Write16(0x16bc, dx);
    Write16(0x16c0, tempdi);
    Write16(0x16c4, ds);
    Write16(0x16c6, es);
}

void XCHG(unsigned short *a, unsigned short *b)
{
    short temp = *a;
    *a = *b;
    *b = temp;
}

void ParameterCall(unsigned short bx, unsigned short addr)
{
    // call word 0x1649;
    //printf("Parametercall addr=%04x, si=%04x bx=%04x content=0x%04x\n", addr, regsi, bx+2, Read16(bx+2));

    regbp -= 2;
    Write16(regbp, regsi);
    DefineCallStack(regbp, 1);

    // next address after the call contains forth code, so change pointer
    Push(addr+3);
    regsi = Pop();

    bx += 2; // push address of variable in the overlays
    Push(bx);
}


void LXCHG16(unsigned short es, unsigned short bx, unsigned short ax) //  "{LXCHG}"
{
    cx = Read16Long(es, bx);
    XCHG(&bx, &ax);
    unsigned short temp = Read16Long(es, bx);
    XCHG(&cx, &temp);
    Write16Long(es, bx, temp);
    XCHG(&bx, &ax);
    Write16Long(es, bx, cx);
// 0x2f36: push   cx
// 0x2f38: mov    cx,es:[bx]
// 0x2f3a: xchg   ax,bx
// 0x2f3d: xchg   es:[bx],cx
// 0x2f3f: xchg   ax,bx
// 0x2f42: mov    es:[bx],cx
// 0x2f44: pop    cx
// 0x2f45: ret
}

void LXCHG8(unsigned short es, unsigned short bx, unsigned short ax)
{
    unsigned short cx = Read8Long(es, bx);
    XCHG(&bx, &ax);
    unsigned short temp = Read8Long(es, bx);
    XCHG(&cx, &temp);
    Write8Long(es, bx, temp&0xFF);
    XCHG(&bx, &ax);
    Write8Long(es, bx, cx&0xFF);
// 0x49cc: mov    cl,es:[bx]
// 0x49ce: xchg   ax,bx
// 0x49d1: xchg   es:[bx],cl
// 0x49d3: xchg   ax,bx
// 0x49d6: mov    es:[bx],cl
}


void Find() // "(FIND)"
{
    //Find word in the vocabulary
    unsigned short bx = Pop(); // first entry in vocabulary
    unsigned short cx = Pop(); // length and string of entry
    int n = Read8(cx);
/*
    printf("Find: '");
    for(int i=0; i<n; i++)
        printf("%c", Read8(cx+1+i));
    printf("'\n");
*/

// ------------------------------------
// Implementation on our own vocabulary
// ------------------------------------

    if (n == 0)
    {
        Push(0x253e);
        Push(0xC0);
        Push(1);
        return;
    }
    int word = FindWordByName((char*)&mem[cx+1], n);
    //printf("Found 0x%04x\n", word);
    if (word == 0x0)
    {
        //Push(0);
        //return;
    } else
    {
        Push(word);
        Push(0x80 + n); // bitfield. bit 7 is always 1, bit 6 the IMMEDIATE flag, bit 5 is the SMUDGE flag, bits 0-4 store the word length.
        Push(1);
        return;
    }

// ----------------------

    Push(regsi);
    Push(regdi);
    unsigned char al, ah;
    unsigned char dl, dh;
    dl = 0x3F;
    dh = 0x7F;
    //printf("first vocabulary entry address=%x\n  word to search at address=%x\n", bx, cx);

    while(1)
    {
        //printf("0x%04x\n",bx);
        if (bx == 0) // word is not found, return 0
        {
            //printf("  word not found\n");
            //x1859:
            regdi = Pop();
            regsi = Pop();
            Push(0);
            return;
        }

        // x182A:
        regsi = cx;
        regdi = bx;
        al = Read8(regsi);  // get number of letters of word to search
        regsi++;
        ah = Read8(regdi) & dl; // get number of letters in word

        if (ah != al) // length don't match, go to next word entry
        {
            //1822:
            bx -= 2;
            bx = Read16(bx);
            continue;
        }
        x1837:
        do
        {
            regdi++;
            al = Read8(regsi);
            regsi++;
            ah = Read8(regdi);
            //printf("find %c at 0x%04x\n", (ah)&0x7F, di);
            ah = ah ^ al;

        } while(ah == 0);

        ah = ah & dh;
        if (ah != 0) // doesn't match, go to next word entry
        {
            bx -= 2;
            bx = Read16(bx);
            continue;
        }
        //0x1843:
        unsigned short ax = regdi;
        regdi = Pop();
        regsi = Pop();
        ax += 3;
        Push(ax);
        dl = Read8(bx);
        dh = ah;
        Push(dl);
        Push(1);
        //printf("  word found at bx=0x%04x ax=0x%04x dl=0x%04x\n", bx, ax, (dh<<8)|dl);
        return;
    }
}


enum RETURNCODE Call(unsigned short addr, unsigned short bx)
{
    unsigned short i;
    enum RETURNCODE ret;

    // bx contains pointer to WORD
    if ((regsp < FILESTAR0SIZE+0x100) || (regsp > (0xF6F4)))
    {
        fprintf(stderr, "Error: stack pointer in invalid area: sp=0x%04x\n", regsp);
        PrintCallstacktrace(bx);
        return ERROR;
    }
    switch(addr)
    {
        // --- call functions ---

        case 0x224c: // call
            bx += 2;
            regbp -= 2;
            Write16(regbp, regsi);
            regsi = bx;
            DefineCallStack(regbp, 1);
        break;

        case 0x1692: // "EXIT"
            regsi = Read16(regbp);
            regbp += 2;
        break;

        // --- branching ---
        case 0x1662: regsi += Read16(regsi); break; // BRANCH
        case 0x15FC: if (Pop() == 0) regsi += Read16(regsi); else regsi+=2; break; // 0BRANCH


        // --- callstack operations mainly for loops ---

        case 0x0E52: Push(Read16(regbp+0)); break; // "I"
        case 0x0E62: Push(Read16(regbp+2)); break; // "I'"
        case 0x0E70: Push(Read16(regbp+4)); break; // "J"

        // ---- call stack operations ---

        case 0x0EA4: Push(Read16(regbp+0)); break; // "R@"
        case 0x0E92: // "R>" pop variables from the callstack
            Push(Read16(regbp));
            regbp += 2;
        break;

        case 0xDB6: // ">R" push variables on the callstack
            bx = Pop();
            regbp -= 2;
            Write16(regbp, bx);
            DefineCallStack(regbp, 0);
        break;

        // ------------------------------

        case 0x3A39: // "@EXECUTE"
            bx = Read16(Pop()) - 2;
            //printf("jump to %x\n", bx);
            ret = Call(Read16(bx), bx);
            if (ret != OK) return ret;
        break;

        case 0x1675: // "CFAEXEC"
            bx = Pop();
            //printf("jump to %x\n", bx);
            ret = Call(Read16(bx), bx);
            if (ret != OK) return ret;
            break;

        case 0x1684: // "EXECUTE"
            bx = Pop() - 2;
            //printf("execute %s\n", FindWord(bx+2, -1));
            ret = Call(Read16(bx), bx);
            if (ret != OK) return ret;
        break;

        case 0x17B7: // Exec function pointers "CREATE" "TYPE", "CALL", "ABORT" "PAGE", ...
            //printf("%04x\n", bx);
            //exit(1);
            bx += 2;  // points to data in word
            bx = Read16(bx);
            bx = Read16(bx+regdi);
            bx -= 2;
            char *s = FindWord(bx+2, -1);
            //printf("Execute %s\n", s);
            if (strcmp(s, "(TYPE)") == 0)
            {
                int n = Read16(regsp);
                int offset = Read16(regsp+2);
                for(int i=0; i<n; i++)
                    printf("%c", Read8(offset+i));
                GraphicsText((char*)&mem[offset], n);
            }
            if (strcmp(s, "(CR)") == 0)
            {
                printf("\n");
                GraphicsCarriageReturn();
            }
            if (strcmp(s, "(POSITION)") == 0)
            {
                //printf("%i, %i\n", Read16(regsp), Read16(regsp+2));
                GraphicsSetCursor(Read16(regsp), Read16(regsp+2));
            }
            if (strcmp(s, "(EMIT)") == 0) // print one char
            {
                GraphicsChar(Read16(regsp));
                GraphicsUpdate();
                //printf("print char %i\n", Read16(regsp));
            }
            if (strcmp(s, "(WORD)") == 0) // scans input stream for char and copies
            {
                //unsigned short offset = Read16(REGDI+0x12);
                //PrintCallstacktrace(bx);
                //printf("%i offset %i\n", Read16(regsp), offset);
                //exit(1);
            }
            if (strcmp(s, "(KEY)") == 0)
            {
                if (inputbuffer[0] == 0)
                {
                    regsi -= 2;
                    return INPUT;
                }
            }

            ret = Call(Read16(bx), bx);
            if (ret != OK) return ret;
        break;

        case 0x21C9: // TODO for forth interpreter, is incomplete
        {
            // Check for stack size and jump to error handling
            //printf("Info: %i 0x%x\n", Read16(0x0A0B), Read16(regdi+4));
            unsigned short ax = Read16(0x0A0B); // #SPACE (256)
            ax += Read16(regdi+4);
            if ((Read16(0x0A0B) + Read16(regdi+4)) > 0xFFFF)
            {
                fprintf(stderr, "TODO: Error handling part 1. Empty or full stack\n");
                exit(1);
            }
            // if error:
            /*
            bx = 0xB10;
            bx = Read16(bx);
            printf("Jump to %x\n", bx);
            exit(1);
            */
// 0x21c9: mov    ax,[0A0B] // #SPACE
// 0x21cc: add    ax,[di+04]
// 0x21cf: jo     21E0
// 0x21d1: cmp    ax,sp
// 0x21d3: ja     21E0
// 0x21d5: mov    ax,[di]
// 0x21d7: cmp    ax,sp
// 0x21d9: jb     21E0
// 0x21db: lodsw
// 0x21dc: mov    bx,ax
// 0x21de: jmp    word ptr [bx]
// 0x21e0: mov    bx,0B10
// 0x21e3: jmp    word ptr [bx]

        }
        break;

        case 0x16a3: // "GO"
            bx = Pop();
            printf("jump to %x. Either stop (0x0) or restart (0x100)\n", bx);
            return EXIT;
        break;

        case 0x174C: Write16(regbp+2, Read16(regbp)); break; // "(LEAVE)"
        case 0x0EC8: regbp = Read16(regdi+2); break; // RP!

        case 0x83f8: // all overlays
            printf("Load overlay '%s'\n", FindWord(bx+2, -1));
            ParameterCall(bx, 0x83f8);
            break;
        case 0x5275: ParameterCall(bx, 0x5275); break; // "OVT" "IARRAYS"
        case 0x4ef5: ParameterCall(bx, 0x4ef5); break; // "BLACK DK-BLUE DL-GREE GREEN RED VIOLET BROWN ... WHITE"
        case 0x6ec1: ParameterCall(bx, 0x6ec1); break; // ":TIMEST :SIGNAT :CKSUM :SAVE :VERSIO"
        case 0x3b68: ParameterCall(bx, 0x3b68); break; // "(2C:) NULL 0. VANEWSP IROOT .... *EOL"
        case 0x4a96: ParameterCall(bx, 0x4a96); break; // "CASE:"
        case 0x4a4f: ParameterCall(bx, 0x4a4f); break; // "CASE"
        case 0x73ea: ParameterCall(bx, 0x73ea); break; // "TRANSTEXT" ....
        case 0x7227:
            //printf("Receive %s from STAR*.COM dictionary for index 0x%x: '%s'\n", FindWord(bx+2, -1), Read16(regsp), FindDirectoryName(Read16(regsp)));
            printf("Load data    '%s'\n", FindDirectoryName(Read16(regsp)));
            //PrintCallstacktrace(bx);
            // "FILE-NA FILE-TY FILE-ST FILE-EN FILE-#R FILE-RL FILE-SL"
            ParameterCall(bx, 0x7227);
        break;
        //case 0x1AB5: ParameterCall(bx, 0x1AB5); break; // "FORTH MUSIC IT-VOC MISC-"
        case 0x744d: ParameterCall(bx, 0x744d); break; // "INST-SI" "INST-PR" "%NAME" "PHR-CNT" "TEXT-CO" "PHRASE$" ...

        // -----------------------------------

        case 0x8A2D: // calculate memory offset for given coordinates. Interleaved. Maybe CGA?
        {
            unsigned short ax = Pop() >> 1;
            bx = 199 - Pop();
            if (bx & 1)
            {
                ax += 0x2000;
                bx &= 0x00FE; // remove lower bit
            }
            Push(bx * 40 + ax);
        }
        break;

        case 0x25D7: // "KEY" read keyboard endless loop, executed by "0x17B7"
        {
            //printf("key %i\n", inputbuffer[0]);
            // 1. either low byte ascii, high byte 0
            // 2. or low byte scancode, high byte 1
            if (inputbuffer[0] == 0)
            {
                //regsi -= 2;
                Push(0);
                return INPUT;
            }
            Push(inputbuffer[0]);
            for(int i = 0; i < 256-1; i++)
                inputbuffer[i] = inputbuffer[i+1];
            /*
            // 1. either low byte ascii, high byte 0
            // 2. or low byte scancode, high byte 1
            unsigned short c;
            c = GraphicsGetChar();
            //printf("key %i\n", c);
            if (c == 0xa) c = 0xd;
            Push(c);
            */
        }
        break;

        case 0x25bc: // "(?TERMINAL)" keyboard check buffer
            if (inputbuffer[0] != 0)
            {
                Push(1);
            } else
            {
                Push(GraphicsCharsInBuffer());
            }
        break;

        case 0x1508:  // "S->D"
            if (Read16(regsp)&0x8000) Push(0xFFFF); else Push(0x0);
        break;

        case 0x1D29: Push(bx+2); break; // ???  // get pointer to variable or table

        case 0x2214: Push(Read16(bx+2)); break; // get constant

        case 0x175F: // read constant "LIT"
        {
            Push(Read16(regsi));
            regsi += 2;
        }
        break;

        case 0x1618: // read constant "2LIT"
            Push(Read16(regsi));
            regsi += 2;
            Push(Read16(regsi));
            regsi += 2;
        break;

        case 0xC3A: // 2@ write
            bx = Pop();
            Push(Read16(bx+2));
            Push(Read16(bx));
            //printf("read address %x:%x\n", Read16(bx+2), Read16(bx));
        break;

        case 0xC24: // read
        {
            bx = Pop();
            unsigned short ax = Pop();
            cx = Pop();
            Write16(bx, ax);
            Write16(bx+2, cx);
        }
        break;

        case 0x30a8: // "ADVANCE>DEF"
        {
            //printf("Advance>def %i\n", Read16(regsp));
            unsigned short ax = Pop();
            if (ax != 0)
            {
                bx = ax - 2;
                LXCHG16(Read16(0x2C04), bx, ax); // BLKCACHE
                LXCHG16(Read16(0x2C9D), bx, ax); // SEGCACHE
            }
        }
        break;

        case 0x4DA4: // "!OFFSET" sets 2D array pointers for faster access, like in C
        {
            unsigned short ax;
            bx = Pop();
            int tempsi = Read16(bx);
            int tempcx = Read16(bx+2);
            int tempbp = Read16(bx+4);
            unsigned short es = Read16(bx+6);
            int tempdi = (tempcx<<1)+tempbp;
            do
            {
                ax = tempsi*tempcx;
                Write16Long(es, tempdi, ax);
                tempdi-=2;
                tempcx--;
            } while(tempcx != 0);
            ax = 0;
            Write16Long(es, tempdi, ax);
        }
        break;


        case 0x160:  // "(!OLD)" read interrupt vector table
            bx = Pop();
            //printf("read interrupt %x\n", bx);
            if (bx == 0x9)
            {
                Push(0xf000);
                Push(0xe987);
            } else
            if (bx == 0x0)
            {
                Push(0xf000);
                Push(0x1060);
            } else
            if (bx == 0x1b)
            {
                Push(0xf000);
                Push(0x1060);
            } else
            if (bx == 0x1c)
            {
                Push(Read16Long(0, bx*4+2));
                Push(Read16Long(0, bx*4+0));
            } else
            if (bx == 0x24)
            {
                Push(0x118);
                Push(0x110);
            } else
            {
                Push(0);
                Push(0);
            }
        break;

        case 0x138: // "(!SET)" // write interrupt vector table
        {
            bx = Pop();
            unsigned short ax = Pop();
            cx = Pop();
            Write16Long(0, bx*4+0, ax);
            Write16Long(0, bx*4+2, cx);
        }
        break;


        case 0x14BD: // "DIGIT"
        {
            // TODO: handle base if decimal or hex
            dx = Pop(); // base
            unsigned short ax = (Pop()&0xFF);

            if ((ax < '0') || (ax > '9'))
            {
                Push(0);
                break;
            }
            Push(ax-0x30);
            Push(1);
        }
            //printf("Digit base=%i ascii=%i\n", dx, ax);
        break;

        case 0x22AB: // ENCLOSE  TODO: check
        {
            unsigned short ax = Pop() & 0xFF;
            bx = Pop();
            //printf("enclose at ax:0x%04x bx:0x%04x\n", ax, bx);
            //printf("%c%c%c%c%c\n", mem[bx+0], mem[bx+1], mem[bx+2], mem[bx+3], mem[bx+4], mem[bx+5]);
            Push(bx);
            dx = 0xFFFF;
            bx--;

            // check for spaces
            x22b4:
                bx++;
                dx++;
                if ((ax&0xFF) == mem[bx]) goto x22b4;
            Push(dx);

            if ((ax>>8) == mem[bx])
            {
                ax = dx;
                dx++;
                Push(dx);
                Push(ax);
                break;
            }

            x22C9:
            bx++;
            dx++;
            if ((ax&0xFF) == mem[bx]) goto x22DC;
            if (((ax>>8)&0xFF) != mem[bx]) goto x22C9;
            ax = dx;
            Push(dx);
            Push(ax);
            break;

            x22DC:
                ax = dx;
                ax++;
                Push(dx);
                Push(ax);
            break;
        }

        case 0x1AC0: // ???
        {
            bx = Pop();
            unsigned short ax = Read8(bx);
            bx++;
            ax = ((ax + Read8(bx)) & 6) + 6;
            Push(ax);
        }
        break;

        case 0x718d: // "RECADD"
        {
            // transforms the result of "BVSA>OFFBLK" to position on disk in chunks of 1024 dependend on the record alignment
            int sp0 = Pop();
            int sp2 = Pop();
            int recordsize = Pop();
            int recordidx = Pop();

            //printf("RECADD 0x%04x 0x%04x recordsize=%i recordidx=%i\n", sp0, sp2, recordsize, recordidx);

            unsigned short ax = 1024 - sp2;
            ax = ax / recordsize;
            if (ax > recordidx)
            {
                sp2 += recordidx * recordsize;
            } else
            {
                recordidx -= ax;
                sp0++;
                sp2 = 0;
                ax = 1024 / recordsize;
                cx = ax;
                ax = recordidx / cx;
                sp0 += ax;
                sp2 = (recordidx%cx) * recordsize;
            }
            Push(sp2);
            Push(sp0);
        }
            break;

        case 0x7295: // "BVSA>OFFBLK". Input: offset in file divided by 16, Prepare for "RECADD"
        {
            //printf("BVSA>OFFBLK 0x%04x 0x%04x 0x%04x\n", Read16(regsp), ((Read16(regsp)-0x3e80)& 0x3F)<<4, (Read16(regsp)-0x3e80)>>6);
            unsigned short ax = Pop() - 0x3e80; // BLOVSA
            Push((ax & 0x3F) << 4);
            Push(ax >> 6);
        }
            break;

        case 0x7684: // "PRIORITIZE"
            {
                unsigned short ax = Pop();
                printf("PRIORITIZE %i\n", ax);
                if (ax == 0)
                {
                    Push(ax);
                } else
                {
                    bx = ax - 2;
                    LXCHG16(Read16(0x54EA), bx, ax); //  LOISEG
                    LXCHG16(Read16(0x54F2), bx, ax); //  LOCSEC
                    bx >>= 1;
                    ax >>= 1;
                    LXCHG8(Read16(0x54EE), bx, ax); // HIISEG
                    Push(bx << 1);
                }
            }
            break;
// 0x7684: pop    ax
// 0x7685: or     ax,ax
// 0x7687: jz     76B0

// 0x7689: mov    bx,ax
// 0x768b: sub    bx,02
// 0x768e: push   es
// 0x768f: push   word ptr [54EA] // LOISEG
// 0x7693: pop    es
// 0x7694: call   2F36  LXCHG
// 0x7697: push   word ptr [54F2] // LOCSEC
// 0x769b: pop    es
// 0x769c: call   2F36 LXCHG
// 0x769f: shr    bx,1
// 0x76a1: shr    ax,1
// 0x76a3: push   word ptr [54EE] // HIISEG
// 0x76a7: pop    es
// 0x76a8: call   49CA
// 0x76ab: pop    es
// 0x76ac: shl    bx,1
// 0x76ae: mov    ax,bx

// 0x76b0: push   ax
// 0x76b1: lodsw
// 0x76b2: mov    bx,ax
// 0x76b4: jmp    word ptr [bx]


        case 0x143A: // ">UPPERCASE"
            cx = Pop();
            bx = Pop();
            dx = 0x617A;
            //printf("Uppercase %i at 0x%04x\n", cx, bx);
            for(i=0; i<cx; i++)
            {
                unsigned short ax = Read8(bx);
                if ((ax >= 0x61) && (ax <= 0x7A)) ax &= 0xDF;
                Write8(bx, ax);
                bx++;
            }
            //printf("\n");
            break;

        case 0x2852: // "CUR>ADDR"
        {
            bx = Read16(regdi + 0x1A);
            unsigned char bh = (bx >> 8);
            unsigned char bl = (bx & 0xFF);
            unsigned short ax = Read16(regdi + 0x1C) & 0xFF;
            ax = (ax + bl) & 0xFF;
            bl = 0x50;
            ax *= bl;
            bl = bh;
            bh = Read16(regdi + 0x1D) & 0xFF;
            bl += bh;
            bh = 0;
            ax += (bh << 8) | bl;
            Push(ax << 1);
        }
        break;

        case 0x2836: // ?POSITION
            Push(Read8(regdi + 0x1a));
            Push(Read8(regdi + 0x1b));
        break;

        case 0x0D35: // "FILL"
        {
            unsigned short ax = Pop()&0xFF;
            cx = Pop();
            int tempdi = Pop();
            for(i=0; i<cx; i++)
                Write8(tempdi + i, ax);
        }
        break;

        case 0x16D9: // INTERRUPT
            HandleInterrupt();
            break;

        case 0x2973: // SCROLLUP
        {
            unsigned short ax = Pop();
            ax = (ax & 0xFF) | (0x6 << 8);
            dx = mem[regdi + 0x1e]<<8;
            dx |= mem[regdi + 0x1f];
            bx = Read16(0x20);
            cx = 0;
            // int 10h
        }
        break;

        case 0x11ED: // "U/MOD"
        {
            bx = Pop();
            dx = Pop();
            unsigned short ax = Pop();
            unsigned int nom = ax | (dx<<16);
            Push(nom % bx);
            Push(nom / bx);
        }
        break;

        case 0xF4E: // "/"
        {
            bx = Pop();
            unsigned short ax = Pop();
            Push((signed short int)ax/(signed short int)bx);
        }
        break;

        case 0xF62: // "/MOD"
        {
            bx = Pop();
            unsigned short ax = Pop();
            Push((signed short int)ax%(signed short int)bx);
            Push((signed short int)ax/(signed short int)bx);
        }
        break;

        case 0x1261: // "-"
        {
            unsigned short ax = Pop();
            dx = Pop();
            if (ax == dx) Push(1); else Push(0);
        }
        break;

        case 0x127a: // "0<"
            Push((Pop()&0x8000)?1:0);
        break;

        case 0x71DD: // "W71DD" gets the idx from the dictionary in STARX.com
        {
            //WriteCallGraph();
            //exit(1);
            unsigned short ax = Pop();
            //printf("read idx 0x%x  from STARA.COM or STARB.COM FILE\n", ax);
            if (ax >= 0x90)
            {
                bx = Read16(0x535e) + 3;
                ax -= 0x90;
            } else
            if (ax >= 0x60)
            {
                bx = Read16(0x535e) + 2;
                ax -= 0x60;
            } else
            if (ax >= 0x30)
            {
                bx = Read16(0x535e) + 1;
                ax -= 0x30;
            } else
            {
                bx = Read16(0x535e) + 0;
            }
            //0x72313:
            ax *= 0x15;
            Push(ax);
            Push(bx);
        }
        break;

        case 0x3672:
            Push(Pop() + Read16(0x2c79)); // OFFSET
            break;

        case 0x4a15: // Helper for "CASE"
        {
            bx = Pop(); // pointer to case struct
            unsigned short ax = Pop(); // switch(ax)....
            //printf("case at 0x%04x: %i\n", bx, ax);
            cx = Read16(bx); // number of case entries
            bx += 2;
            dx = Read16(bx); // default word
            bx += 2;
            for(int i=0; i<cx; i++)
            {
                if (Read16(bx) == ax)
                {
                    dx = Read16(bx+2);
                    break;
                }
                bx += 4;
            }
            Push(dx);
        }
        break;

        case 0x3048: // "(BUFFER)"
        {
            cx = Pop();
            //dx = /*es*/0x1FE;
            bx = 0;
            unsigned short ax = 0;
            int es = Read16(0x2c84); // "PREV"
            //printf("es : 0x%04x check with 0x%04x\n", es, cx);
            if (Read16Long(es, bx+6) == cx)
            {
                if (Read8Long(es, bx+3) == 0) ax++;
                //goto x3084;
            } else
            {
                // 0x3064:
                es = Read16(0x2cbe); // "USE"
                //printf("es : 0x%04x check with 0x%04x\n", es, cx);
                if (Read16Long(es, bx+6) == cx)
                if (Read8Long(es, bx+3) == 0)
                {
                    ax++;
                    Write16(0x2CBE, Read16(0x2c84));
                    Write16(0x2C84, es);
                    //printf("change 2cbe to %x\n", Read16(0x2c84));
                }
            }
            //x3084:
            if (ax == 0)
            {
                Push(cx);
            } else
            {
                Push(es);
                Write16(0x2c6c, Read16(0x2c84)); // "LPREV" = "PREV"
            }
            Push(ax);
        }
        break;

            case 0x2F51: // "LWSCAN"
            {
                // search in string for occurence of sign
                // return 1 or 0;
                unsigned short ax = Pop();
                cx = Pop();
                //printf("search for 0x%x (%i words)\n", ax, cx);
                if (cx == 0)
                {
                    regsp += 4;
                    Push(0);
                } else
                {
                    int tempdi = Pop();
                    int es = Pop();
                    //printf("es:di 0x%x:0x%x\n", es, tempdi);
                    // repne scasw
                    do {
                        unsigned short x = Read16Long(es, tempdi);
                        tempdi += 2;
                        cx--;
                        if (x == ax) break;
                    } while(cx != 0);
                    tempdi-=2;
                    if (ax == Read16Long(es, tempdi))
                    {
                        Push(tempdi);
                        Push(1);
                    } else
                    {
                        Push(0);
                    }
                }
            }
            break;

            case 0x367F: // ???
            {
                unsigned short ax;
                dx = Pop();
                Push(regdi);
                Push(regsi);
                Push(regbp);
                cx = Read16(0x2B3A); // #FILES
                regdi = 0x2D74;
                bx = 0;
                //0x368C:
                for(;cx!=0; cx--)
                {
                    regbp = (cx-1)<<1;
                    regsi = 0x2D74 + regbp;
                    ax = dx;
                    ax = ax - Read16(regsi);
                    if (ax&0x8000) continue;
                    regsi = 0x2D4C + regbp;
                    if (ax >= Read16(regsi)) continue;
                    bx++;
                    break;
                }

                //x36AA:
                regbp >>= 1;
                cx = regbp;
                regbp = Pop();
                regsi = Pop();
                regdi = Pop();
                Push(ax);
                Push(cx);
                Push(bx);
            }
            break;

        case 0x36BB: // ???
            cx = mem[Pop() + 0x2D23];
            if (cx == 0) cx = Read16(0x2C15);
            cx--;
            Push(cx);
            break;

// ---------------------------------------------

        case 0x1248: // "<"
        {
            unsigned short ax = Pop();
            dx = Pop();
            //printf("input %x %x\n", ax, dx);
            if ((signed short)dx < (signed short)ax) Push(1); else Push(0);
        }
        break;

        case 0x122F: // ">"
        {
            unsigned short ax = Pop();
            dx = Pop();
            if ((signed short)dx > (signed short)ax) Push(1); else Push(0);
        }
        break;

        case 0x12a1: // "0>"
            if (((signed short int)Pop()) > 0) Push(1); else Push(0);
        break;
// 0x12a1: pop    ax
// 0x12a2: neg    ax
// 0x12a4: cwd
// 0x12a5: neg    dx
// 0x12a7: push   dx
// 0x12a8: lodsw
// 0x12a9: mov    bx,ax
// 0x12ab: jmp    word ptr [bx]


        case 0x12E1: // "U<"
        {
            unsigned short ax = Pop();
            dx = Pop();
            if (dx < ax) Push(1); else Push(0);
        }
        break;

        case 0x1FA:
        /*Push(0x20F);Push(0x7246);Push(0x1FE);Push(0x1CF);Pop();Pop();Pop();Pop(); */
        break; // overwrite interrupt 0 to and div 0?

        case 0x6D12: // "?UPDATE" converts addr to addr
            // if addr is in a block buffer or instance buffer set the update flag
            // used in CMOVE() function, when something is copied and the overlay is merged.
            //fprintf(stderr, "?UPDATE incomplete?");
            //exit(1);
            // cx = 0xb429 long jump in XKEYINT
            // cx = 0x5eed [KEYINT]
            // cx = 0x613c W613C
            cx = Pop();
            //printf("?Update of 0x%x\n", cx);
            if (cx&0x8000)
            {
            }
            x6d4d:

            /*
            cmp cx,0x63ef
            js 0x6d5f
            cmp cx,0x64fd
            jns 0x6d5f
            mov bx,0x63ee
            mov byte [bx],0xff
            */
            x6D5F:
            Push(cx);
            //Push(0x5eed);
        break;

/*
00006D12  pop cx
00006D13  or cx,cx
00006D15  jns 0x6d4d

00006D17  mov bx,[0x54a1]
00006D1B  mov dx,bx
00006D1D  add dx,byte +0x7
00006D20  cmp cx,dx
00006D22  jng 0x6d4b

00006D24  add dx,0x401
00006D28  cmp dx,cx
00006D2A  jng 0x6d32
00006D2C  mov byte [bx+0x2],0xff
00006D30  jmp short 0x6d4b

00006D32  mov bx,[0x54a5]
00006D36  mov dx,bx
00006D38  add dx,byte +0x7
00006D3B  cmp cx,dx
00006D3D  jng 0x6d4b
00006D3F  add dx,0x401
00006D43  cmp dx,cx
00006D45  jng 0x6d4b
00006D47  mov byte [bx+0x2],0xff

00006D4B  jmp short 0x6d5f

00006D4D  cmp cx,0x63ef
00006D51  js 0x6d5f
00006D53  cmp cx,0x64fd
00006D57  jns 0x6d5f
00006D59  mov bx,0x63ee
00006D5C  mov byte [bx],0xff

00006D5F  push cx
00006D60  lodsw
00006D61  mov bx,ax
00006D63  jmp word [bx]
*/

// ---------------------------------------------
// timer stuff

        case 0x2a9a:  // "TIME"
        {
            struct timeval tv;
            gettimeofday(&tv, NULL);
            int time_in_mill = ((tv.tv_sec) * 1000 + (tv.tv_usec) / 1000 )*10;
            Write16(0x18A, time_in_mill); // TIME low
            Write16(0x188, (time_in_mill >> 16));   // TIME high
            /*
            static int ntime = 0;
            Write16(0x18A, ntime); // TIME low
            Write16(0x188, (ntime >> 16));   // TIME high
            ntime++;
            */
            Write16(0x193, 0x0);
            Push(0x188);
        }
        break;
// ---------------------------------------------
        // --- sound stuff ---

        case 0x2638: break; // BEEPON_2
        case 0x2653: break; // "BEEPOFF"
        case 0x2618: Pop(); break; // "TONE"

        // --- graphics ---
        case 0x97cc: // COLORMAP. Determine color from given value. For example from landscape height
        {
            bx = Pop();
            if (bx&0x8000) // is negative
            {
                bx = 0;
            } else
            {
                bx = (bx >> 1) & 0x38;
            }
            bx += 0x6a3f; // CMAP
            Write16(0x58cd, bx);
            unsigned short ax = Read8(bx);
            Write16(0x55f2, ax); // COLOR
            bx += 2;
            ax = Read8(bx);
            Write16(0x55ff, ax); // DCOLOR
        }
        break;
// 0x97cc: pop    bx
// 0x97cd: or     bx,bx
// 0x97cf: jns    97D6
// 0x97d1: mov    bx,0000
// 0x97d4: jmp    97DB

// 0x97d6: shr    bx,1
// 0x97d8: and    bx,38

// 0x97db: add    bx,6A3F // CMAP
// 0x97df: mov    [58CD],bx // TILE-PTR
// 0x97e3: xor    ax,ax
// 0x97e5: mov    al,[bx]
// 0x97e7: mov    [55F2],ax // COLOR
// 0x97eb: add    bx,02
// 0x97ee: mov    al,[bx]
// 0x97f0: mov    [55FF],ax // DCOLOR

        case 0x8E4F:  // Move entire display to/from seg
            //printf("move display from 0x%04x:0x%04x to 0x%04x:0x%04x\n",
            //    Read16(regsp+2), Read16(regsp+0), Read16(regsp+6), Read16(regsp+4));
            Pop();
            Pop();
            Pop();
            Pop();
        break;

        case 0x9367: // "PLOT" TODO
            // ignore return address from call
            {
            //printf("(plot) %i %i seg=0x%04x color=%i\n",
            //    Read16(regsp+2), Read16(regsp+0), Read16(0x5648), Read16(0x55F2));
            int color = Read16(0x55F2);
            GraphicsPixel(Read16(regsp+2), Read16(regsp+0), color);
            dx = Pop();
            unsigned short ax = Pop();
            /*
            dx <<= 1;
            dx += Read16(0x563A); // YTABL
            Push(dx);
            Push(ax);
            ax = (ax&3)<<1;
            bx = 0x92CF + ax;
            dx = Read16(bx);
            ax = Pop()>>2;
            bx = Pop();
            ax += Read16(bx);
            bx = ax;
            cx = Read16(0x5648); // BUF-SEG
            unsigned short es = cx;
            ax = dx;
            */
            }
        break;

        case 0x9002: // "LPLOT" TODO
            printf("LPLOT %i %i\n", Pop(), Pop());
            //exit(1);
        break;

        case 0x93B1: // "BEXTENT" Part of Bit Block Image Transfer (BLT)
            //printf("blt xblt=%i yblt=%i lblt=%i wblt=%i\n", Read16(0x586E), Read16(0x5863), Read16(0x5887), Read16(0x5892));
            Push(Read16(0x586E)); // xblt
            Push(Read16(0x5863) - Read16(0x5887) + 1); // yblt - lblt + 1
            Push(Read16(0x586E) + Read16(0x5892) - 1); // xblt + wblt - 1
            Push(Read16(0x5863)); // yblt
        break;

        case 0x9390: // "?EXTENTX"
           // text loc. of extent rel. to clipping window - result is in trjct & taccpt
           // IMPORTANT: USES VIN & OIN AS TEMP SPACE
           {
            int y2 = Pop();
            int x2 = Pop();
            int y1 = Pop();
            int x1 = Pop();
            //printf("BLT %i %i %i %i\n", x1, y1, x2, y2);
            //exit(1);
           }
        break;
// ================================================
// 0x938e: WORD '?EXTENTX' codep=0x9390 parp=0x9390 params=4 returns=0
// ================================================
// 0x9390: mov    bx,[569B] // VIN
// 0x9394: mov    cx,0004
// 0x9397: pop    word ptr [bx]
// 0x9399: add    bx,02
// 0x939c: loop   9397
// 0x939e: mov    bx,0002
// 0x93a1: mov    [5686],bx // #IN
// 0x93a5: push   di
// 0x93a6: call   8538
// 0x93a9: pop    di
// 0x93aa: lodsw
// 0x93ab: mov    bx,ax
// 0x93ad: jmp    word ptr [bx]

        case 0x902b: // "{BLT}" plot a bit pattern given parameters
            //PrintCallstacktrace(bx);
            {
            int color = Read16(0x55F2); // COLOR
            int bltseg = Read16(0x58aa); // BLTSEG
            int bltoffs = Read16(0x589d);  // ABLT
            int x0 = Read16(0x586E);
            int y0 = Read16(0x5863);
            int w = Read16(0x5887);
            int h = Read16(0x5892);
            //printf("blt xblt=%i yblt=%i lblt=%i wblt=%i color=%i 0x%04x:0x%04x\n", x0, y0, w, h, color, bltseg, bltoffs);
            GraphicsBLT(x0, y0, w, h, (char*)&m[(bltseg<<4) + bltoffs], color);
            }
            //exit(1);
        break;

        case 0x8891: // SCANPOLY TODO
            fprintf(stderr, "SCANPOLY\n");
            {
                int VIN = Read16(0x569B);
                int nIN = Read16(0x5686);
                printf("scanpoly 0x%04x %i\n", VIN, nIN);
                for(int i=0; i<nIN; i++)
                {
                    printf("%i %i\n", Read16(VIN + i*4 + 0), Read16(VIN + i*4 + 2));
                }
                /*
                for(int i=44; i<114; i++)
                for(int j=192; j<199; j++)
                {
                    GraphicsPixel(i, j, 0xF);
                }
                */
            }
            GraphicsUpdate();
            //exit(1);
        break;

        case 0x9055: // LFILLPOLY TODO
        {
            printf("LFILLPOLY\n");
            int color = Read16(0x55F2); // COLOR
        }
        break;

        case 0x906b: // 'LCOPYBLK' TODO
            printf("LCOPYBLK %i %i %i %i %i %i\n", Pop(), Pop(), Pop(), Pop(), Pop(), Pop());
            //exit(1);
        break;

        case 0x6C86: // "C>EGA" // TODO???
        {
            //printf("c>ega\n");
            dx = Pop() & 0xF;
            Push(regsi);
            unsigned short ax = 0;
            Push(0x0);
            cx = 0x10;
            // decrementing lodsb
            regsi = 0x4FCA;
            for(;cx>0; cx--)
            {
                ax = Read8(regsi) & 0xF;
                regsi--;
                if (ax == dx)
                {
                    ax = Pop();
                    ax = cx;
                    Push(ax);
                    cx = 1;
                }
            }
            ax = Pop();
            regsi = 0x4FCD;
            regsi = regsi + ax - 1;
            ax = Read8(regsi);
            regsi = Pop();
            Push(ax);
        }
// 0x6c86: pop    dx
// 0x6c87: and    dx,0F
// 0x6c8a: push   si
// 0x6c8b: xor    ax,ax

// 0x6c8d: push   ax
// 0x6c8e: mov    cx,0010
// 0x6c91: std
// 0x6c92: mov    si,4FCA

// 0x6c95: lodsb
// 0x6c96: and    ax,000F
// 0x6c99: cmp    ax,dx
// 0x6c9b: jnz    6CA4
// 0x6c9d: pop    ax
// 0x6c9e: mov    ax,cx
// 0x6ca0: push   ax
// 0x6ca1: mov    cx,0001
// 0x6ca4: loop   6C95

// 0x6ca6: pop    ax
// 0x6ca7: mov    si,4FCD
// 0x6caa: add    si,ax
// 0x6cac: dec    si
// 0x6cad: lodsb
// 0x6cae: pop    si
// 0x6caf: cld
// 0x6cb0: push   ax
        break;

        case 0x8F8B: // "BFILL" TODO
        {
            int color = Read16(0x55F2); // COLOR
            //printf("bfill color=%i ega=%i segment=0x%04x count=0x%04x\n", Read16(0x55F2), Read16(0x5DA3), Read16(0x5648), Read16(0x5656));
            GraphicsClear(color);
        }
        break;

        case 0x903f: // "LLINE"
        {
            /*
            for(int i=0x9002; i<0x9126; i++)
            {
                if (Read8(i) == 0x9a)
                {
                    int seg = Read16(i+3);
                    int ofs = Read16(i+1);
                printf("%20s 0x%02x, 0x%04x, 0x%04x, 0x%02x : 0x%02x 0x%02x\n", FindWord(i, -1), Read8(i), seg, ofs, Read8(i+5), Read8Long(seg, ofs), Read8Long(seg, ofs+1));
                }
            }
            exit(1);
            */
            int y2 = Pop();
            int x2 = Pop();
            int y1 = Pop();
            int x1 = Pop();
            //printf("lline %i %i %i %i\n", x1, y1, x2, y2);
            GraphicsLine(x1, y1, x2, y2, Read16(0x55F2), Read16(0x587C));
        }
        break;

        case 0x8D09: // "DISPLAY" wait for vertical retrace
            //printf("wait for vertical retrace\n");
            GraphicsUpdate();
        break;

        case 0x8D8B:
            printf("set video mode monitor=%i ?ega=%i\n", Read16(0x584A), Read16(0x5DA3));
            // out 3ce,0x0F01 write to all four planes at once?
            GraphicsMode(1);
        break;

        case 0x8DF0: // set text mode
        {
            printf("set text mode\n");
            GraphicsMode(0);
        }
        break;

        case 0x2767: // "POSITION"
        {
            // set cursor position
            unsigned short ax = Pop();
            bx = Pop();
            Write8(regdi+0x1B, ax&0xFF);
            Write8(regdi+0x1A, bx&0xFF);
            // int10h
            //printf("position %i %i di=0x%04x\n", ax, bx, di);
        }
        break;

        // move u from parm stack to the vector stack. Used as the Overlay call stack
        case 0x7AE7: // ">V"
            //printf("Push 0x%04x\n", Read16(regsp));
            bx = Read16(0x54B4); // VSP
            Write16(bx, Pop());
            Write16(0x54B4, Read16(0x54B4)-2);
        break;

        // move u from vector stack to parm stack
        case 0x7AFE: // "V>"
            //printf("Pop\n");
            Write16(0x54B4, Read16(0x54B4)+2);
            bx = Read16(0x54B4);
            Push(Read16(bx));
        break;

        // move u from vector stack to parm stack
        case 0x7B15: // "VI"
            Push(Read16(Read16(0x54B4)+2));
        break;

        case 0x29FC: // "V!"
        {
            // Graphics card output. Prints chars on screen
            cx = ds;
            int seg = Read16(regdi + 0x18); // screen segment
            //ds = ax;
            bx = Pop(); // offset
            unsigned short ax = Pop(); // color and char
            Write16Long(seg, bx, ax);
            //ds = cx;
            //printf("PutChar 0x%04x 0x%04x at segment: 0x%04x\n", bx, ax, seg);
        }
        break;

        case 0x27F8: // Color text video memory // "">VMOVE""
        {
            unsigned short int es = Read16(regdi+0x18);
            unsigned short ax = Read16(regdi+0x20);
            cx = Pop();
            int tempdi = Pop();
            int tempsi = Pop();
            int i=0;
            //printf("Write %i bytes/words to 0x%x:0x%x\n", cx, es, tempdi);
            //0x2809
            if (es == 0xb800)
            {
                /*
                for(i=0; i<cx; i++)
                    printf("%c", Read8(tempsi+i));
                printf("\n");
                */
            }
            for(i=2; i<cx; i++)
            {
                ax = (ax & 0xFF00) | (Read8(tempsi)&0xFF);
                Write16Long(es, tempdi, ax);
                tempsi++;
                tempdi+=2;
            }
        }
        break;

        case 0xf379: // ".EGARUNBIT" from BLT-OV\n
        {
            int color = Read16(0x55F2);
            int XBLT = Read16(0x586E);
            int YBLT = Read16(0x5863);
            int WBLT = Read16(0x5892);
            int offset = Pop();
            int segment = Pop();
            int temp2 = Read16Long(segment, offset); // size of this color segment - 6

            //printf("color=%i xblt=%i yblt=%i wblt=%i 0x%04x:0x%04x 0x%04x temp2=%i\n", color, XBLT, YBLT, WBLT, segment, offset, regsp, temp2);
            int xofs = 0;
            int yofs = 0;
            for(int i=0; i<temp2; i++)
            {
                int al = Read8Long(segment, offset + 2 + i);
                if (al == 0) continue;
                for(int j=0; j<al; j++)
                {
                    if ((i&1) == 0) GraphicsPixel(XBLT+xofs, YBLT-yofs, color);
                    if ((++xofs) >= WBLT)
                    {
                        xofs = 0;
                        yofs++;
                    }
                }
            }
            GraphicsUpdate();
        }
        break;

        case 0xec7d: // "|EGA" in PORTMENU-OV
        {
            cx = Pop();
            //printf("|EGA %i\n", cx);
            //exit(1);
        }
        break;

        // ---- 3 byte stack ---
        case 0x753F: // ">C"
            bx = Read16(0x54b0); // CXSP
            Write16(bx+2, Pop()&0xFF);
            Write16(bx, Pop());
            Write16(0x54b0, bx-3);
        break;

        case 0x755A: // "C>"
            bx = Read16(0x54b0); // CXSP
            Write16(0x54b0, bx+3);
            Push(Read16(bx));
            Push(Read8(bx+2));
        break;

        case 0x7577: // "CI"
            bx = Read16(0x54b0); // CXSP
            Push(Read16(bx+3));
            Push(Read8(bx+5));
        break;

        case 0x75d7: // "CDEPTH"
            Push(((0x6398 - Read16(0x54B0))&0xFF)/3);
        break;

// -------------------------------

        case 0x4997: // "1.5@"
            bx = Pop();
            Push(Read16(bx));
            Push(Read8(bx+2));
        break;

        case 0x49ae: // "1.5!_2"
            bx = Pop();
            Write8(bx+2, Pop()&0xFF);
            Write16(bx+0, Pop());
        break;

        case 0x763a: // "@[IOFF]"
            Push(Read16(0x558C)); // [IOFF]
        break;

        case 0x7425: // "IFLDADR"
            Push(Read8(Pop()+1) + 0x63ef);
        break;

// ---------------------------------------------

        case 0x0D10: // "CMOVE"
        {
            cx = Pop();
            int dst = Pop();
            int src = Pop();
            //printf("cmove: copy 0x%04x to 0x%04x size=%i\n", src, dst, cx);
            for(i=0; i<cx; i++)
            {
                mem[dst+i] = mem[src+i];
            }
        }
        break;

        case 0x2EFE: // "LCMOVE"
        {
            int tempcx = Pop();
            int tempdi = Pop();
            int tempes = Pop();
            int tempsi = Pop();
            int tempds = Pop();
            //printf("LCMOVE from 0x%04x:0x%04x to 0x%04x:0x%04x  %i bytes\n", tempds, tempsi, tempes, tempdi, tempcx);
            //PrintCallstacktrace(bx);
            for(i=0; i<tempcx; i++)
                Write8Long(tempes, tempdi+i, Read8Long(tempds, tempsi+i));
        }
        break;

        case 0x0D9C: //"ADDR>SEG"
            Push((Pop()>>4) + cs); // ds = cs
        break;
// --------------------------

        case 0x15BA: // "(DO)"
        {
            dx = Pop();
            unsigned short ax = Pop();
            int temp = regsp;
            regsp = regbp;
            Push(ax);
            Push(dx);
            regbp = regsp;
            regsp = temp;
            DefineCallStack(regbp, 0);
            DefineCallStack(regbp+2, 0);
        }
        break;

        case 0x1593: // "(/LOOP)"
        {
            unsigned short ax = Pop() + Read16(regbp);

            if ((signed short int)ax >= (signed short int)Read16(regbp+2))
            {
                // exit loop
                regbp += 4;
                regsi += 2;
            } else
            {
                Write16(regbp, ax);
                regsi += Read16(regsi);
            }
        }
        break;

        case 0x155E: // "(+LOOP)"
        {
            bx = Pop();  // stepsize
            unsigned short ax = Read16(regbp) + bx;
            //printf("stepsize %i, comparison index: %x dest: %x \n", (short)bx, Read16(regbp), Read16(regbp+2));
            if (bx&0x8000) // if stepsize is negative
            {
                //0x1577:
                if ((signed short)ax >= (signed short)Read16(regbp+2))
                {
                    //0x156D:
                    Write16(regbp, ax);
                    regsi += Read16(regsi);
                } else
                {
                    //0x157C: loop finished
                    // exit loop
                    regbp += 4;
                    regsi += 2;
                }

            } else
            {
                //0x1568:
                if ((signed short)ax >= (signed short)Read16(regbp+2))
                {
                    //0x157C:
                    // exit loop
                    regbp += 4; // loop finished
                    regsi += 2;
                } else
                {
                    //0x156D:
                    Write16(regbp, ax);
                    regsi += Read16(regsi);
                }
            }
        }
        break;

        case 0x15D2: // "(LOOP)"
        {
            unsigned short ax = Read16(regbp)+1; // index
            bx = Read16(regbp+2);
            if ((signed short int)ax >= (signed short int)bx)
            {
                // exit loop
                regbp += 4;
                regsi += 2;
            } else
            {
                Write16(regbp, ax);
                regsi += Read16(regsi);
            }
        }
        break;

// ------------------------------------

        case 0x1067: // "D+"
        {
            unsigned short ax = Pop();
            dx = Pop();
            bx = Pop();
            cx = Pop();
            unsigned int l = (ax << 16) | dx;
            unsigned int r = (bx << 16) | cx;
            l += r;
            Push(l&0xFFFF);
            Push((l>>16)&0xFFFF);
            break;
        }

        case 0x10B9: // "DNEGATE"
        {
            unsigned short ax = 0;
            cx = Pop();
            dx = Pop();
            //printf("neg: 0x%x 0x%x\n", cx, dx);
            int x = (cx << 16) | dx;
            x = -x;
            Push(x&0xFFFF);
            Push((x >> 16) & 0xFFFF);
            break;
        }

        case 0x495E: // "D16*"
        {
            unsigned short ax = Pop();
            dx = Pop();
            unsigned int x = (ax << 16) | dx;
            x = x << 4;
            Push(x&0xFFFF);
            Push((x>>16)&0xFFFF);
            break;
        }

        case 0x6f49: // "VA>BLK"
        {
            unsigned short ax = Pop();
            dx = Pop();
            bx = 0;
            long long x = (((long long)ax) << 32) | ((long long)dx << 16);
            //printf("%x %x 0x%llx %i\n", (int)ax, (int)dx, x, sizeof(x));
            x = x >> 0xA;
            Push((x&0xFFFF) >> 6);
            Push((x>>16)&0xFFFF);
            break;
        }
// 0x6f49: pop    ax
// 0x6f4a: pop    dx
// 0x6f4b: mov    cx,000A
// 0x6f4e: shr    ax,1
// 0x6f50: rcr    dx,1
// 0x6f52: rcr    bx,1
// 0x6f54: loop   6F4E
// 0x6f56: mov    cx,0006
// 0x6f59: shr    bx,cl
// 0x6f5b: push   bx
// 0x6f5c: push   dx

        case 0x11D8: // "U*"
        {
            unsigned short ax = Pop();
            bx = Pop();
            unsigned int x = (unsigned int)ax * (unsigned int)bx;
            Push(x&0xFFFF);
            Push((x>>16)&0xFFFF);
            break;
        }
        // ---- Special Forth interpreter functions ---

        case 0x1818: Find(); break; // "(FIND)" finds a word in the vocabulary

        // -----------------------------------
        case 0x0F22: Push(0x0); break; // 0
        case 0x0F30: Push(0x1); break; // 1
        case 0x0F3F: Push(0x2); break; // 2
        case 0x1340: Push(Pop() | Pop()); break; // OR
        case 0x12F7: Push(Pop() & Pop()); break; // AND
        case 0x1366: Push(Pop() ^ Pop()); break; // XOR
        case 0x0F74: Push(Pop() + Pop()); break; // "+"
        case 0x4bc5: Push((signed short)((char)Read8(Pop()))); break; // "+-@" sign extend
        case 0x1355:  // "TOGGLE"
        {
            unsigned short ax = Pop();
            bx = Pop();
            Write8(bx, Read8(bx)^(ax&0xFF));
        }
        break;

        case 0x0F94: // "-"
            bx = Pop();
            Push(Pop() - bx);
        break;
        case 0x0FB5: Push(Pop() * Pop()); break; // *
        case 0x11C8: Push(-Pop()); break; // NEGATE
        case 0x1309: if (Pop() == 0) Push(1); else Push(0); break;// "NOT"
        case 0x128B: if (Pop() == 0) Push(1); else Push(0); break; // "0="
        case 0x1007: Push(Pop()*2); break; // 2*
        case 0x4984: Push(Pop()+3); break; // "3+"
        case 0x0FE9: Push(Pop()+1); break; // "1+"
        case 0x0FF8: Push(Pop()-1); break; // "1-"
        case 0x1017: Push(Pop()+2); break; // "2+"
        case 0x1027: Push(Pop()-2); break; // "2-"
        case 0x4935: Push(Pop()>>4); break; // 16/
        case 0x1037: Push(Pop()>>1); break; // "2/"
        case 0x4949: Push(Pop() << 4); break; // "16*"

        // ----- memory operations -----

        case 0x0BB0: Push(Read16(Pop())); break; // "@"
        case 0x0C94: bx = Pop(); Push(Read8(bx)&0xFF); break; // "C@"
        case 0x0BE1: bx = Pop(); Write16(bx, Pop()); break; // "!", "<!>"
        case 0x0C60: bx = Pop(); Write8(bx,Pop()&0xFF); break; // "C!"

        case 0x2EB8: // "L!"
        {
            bx = Pop();
            int ds = Pop();
            unsigned short ax = Pop();
            Write16Long(ds, bx, ax);
            //printf("Write16Long to 0x%04x:0x%04x = %x\n", ds, bx, ax);
        }
        break;
        case 0x2EA4: // "L@"
        {
            bx = Pop();
            int ds = Pop();
            //printf("Read16 to 0x%x:0x%x\n", ds, bx);
            //unsigned short int x = m[(ds<<4)+bx] | (m[(ds<<4)+bx+1]<<8);
            unsigned short int x = Read16Long(ds, bx);
            Push(x);
        }
        break;
        case 0x2EE5: // "LC!"
        {
            bx = Pop();
            int ds = Pop();
            unsigned short ax = Pop();
            Write8Long(ds, bx, ax&0xFF);
            //printf("Write8Long to 0x%x:0x%x = %x\n", ds, bx, ax);
        }
        break;
        case 0x2eCD: // "LC@"
        {
            bx = Pop();
            int ds = Pop();
            unsigned short ax = Read8Long(ds, bx);
            Push(ax);
        }
        break;
        case 0x0F85:  // "+!"
        {
            bx = Pop();
            unsigned short ax = Pop();
            Write16(bx, Read16(bx) + ax);
        }
        break;

        // ------ standard stack operations ------
        case 0x0E34: regsp += 2; break; // "DROP"
        case 0x0DE0: regsp += 4; break; // "2DROP"
        case 0x0E81: Push(Read16(regsp+2)); break; // "OVER"
        case 0x0E43: Push(Read16(regsp)); break; // "DUP"
        case 0x0DF2: bx = regsp; Push(Read16(bx+2)); Push(Read16(bx)); break; // "2DUP"
        case 0x0DCA: if (Read16(regsp) != 0) Push(Read16(regsp)); break; //"?DUP"
        case 0x0EF4: // "SWAP"
        {
            dx = Pop();
            unsigned short ax = Pop();
            Push(dx);
            Push(ax);
        }
        break;
        case 0x0E08: // "2SWAP"
        {
            unsigned short ax = Pop();
            bx = Pop();
            cx = Pop();
            dx = Pop();
            Push(bx);
            Push(ax);
            Push(dx);
            Push(cx);
        }
        break;
        case 0x0EB5: // "ROT"
        {
            dx = Pop();
            bx = Pop();
            unsigned short ax = Pop();
            Push(bx);
            Push(dx);
            Push(ax);
        }
        break;

        // ------------------------------

        case 0x1792: Push(Read16(bx+2) + regdi); /*printf("Read 0x%04x\n", Read16(bx+2)); */break; // di is always the same value. Points to WORD "OPERATOR"
        case 0x0c17: Push(cs); break; // "(CS?)"
        case 0x0F14: Push(regsp); break; // "SP@"
        case 0x49c2: Push(ds); break; // "@DS"
        case 0x0ad1: Push(regdi); break; // "ME"
        case 0x0f05: regsp = Read16(regdi);break; // "SP!"
        case 0x4873: Write16(Pop(), 1); break; // ON
        case 0x4886: Write16(Pop(), 0); break; // "OFF"
        case 0x0D7C: Push((Pop()-cs)<<4); break; // "SEG>ADDR"
        case 0x4abb: // FRND
        {
            unsigned short ax, cx;
            ax = Read16(0x4ab0); // SEED
            cx = 0x7abd;
            ax = ((signed short)cx) * ((signed short)ax);
            ax += 0x1b0f;
            Write16(0x4ab0, ax); // SEED
            Push(ax);

            //Push(rand()); break; // "FRND"
            // 0x4abb: mov    ax,[4AB0] // SEED
            // 0x4abf: mov    cx,7ABD
            // 0x4ac2: imul   cx
            // 0x4ac4: add    ax,1B0F
            // 0x4ac7: mov    [4AB0],ax // SEED
            // 0x4acb: push   ax
        }
        break;
        case 0x4892: break; // "CAPSON" Turn on caps

        // ------- fract-ov operations -------
        case 0xe770: FRACT_FILLARRAY(); break;
        case 0xe537: FRACT_StoreHeight(); break;
        case 0xe75e: FRACT_FRACTALIZE(); break;

        default:
            printf("unknown opcode 0x%04x at si = 0x%04x\n", addr, regsi);
            PrintCallstacktrace(bx);
            fflush(stdout);
            GraphicsGetChar();
            return EXIT;
        break;
    }
    return OK;
}


void LoadSTARFLT()
{
    memset(mem, 0, 0x10000);
    FILE *fp = fopen(FILESTAR0, "rb");
    if (fp == NULL)
    {
        fprintf(stderr, "Error: Cannot find file %s\n", FILESTAR0);
        exit(1);
    }
    int ret = fread(&mem[0x100], FILESTAR0SIZE, 1, fp);
    fclose(fp);
}

enum RETURNCODE Step()
{
    unsigned short ax = Read16(regsi); // si is the forth program counter
    regsi += 2;
    unsigned short bx = ax;
    unsigned short execaddr = Read16(bx);
#ifdef DEBUG
    printf("pc=0x%04x si=0x%04x word=0x%04x sp=0x%04x", execaddr, regsi-2, bx+2, regsp);
    printf(" %s\n", FindWord(bx+2, -1));
#endif
    return Call(execaddr, bx);
}

void InitEmulator()
{
    regbp = 0xd4a7 + 0x100 + 0x80; // call stack
    regsp = 0xd4a7 + 0x100;  // initial parameter stack
    LoadSTARFLT();
    memset(inputbuffer, 0, sizeof(inputbuffer));
}

void EnableInterpreter()
{
    // Patch to start Forth interpreter
    Write16(0x0a53, 0x0000); // BOOT-HOOK
    Write16(0x2420, 0x0F22-2); // "0"
}
