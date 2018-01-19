#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"cpu.h"
#include"../starflt1-out/data/dict.h"
#include"../src/global.h"

const unsigned short cs = 0x192;
const unsigned short ds = 0x192;

unsigned short int regdi = REGDI; // points to word "OPERATOR"
unsigned short int bp = 0xd4a7 + 0x100 + 0x80; // call stack
unsigned short int si = 0x129; // current dictonary address (the forth pc pointer)
unsigned short int cx = 0x0;
unsigned short int dx = 0x0;

void LoadSTARFLT()
{
    memset(mem, 0, 0x10000);
    FILE *fp = fopen(FILESTAR0, "rb");
    if (fp == NULL)
    {
        fprintf(stderr, "Error: Cannot find file %s\n", FILESTAR0);
        exit(1);
    }
    fread(&mem[0x100], FILESTAR0SIZE, 1, fp);
    fclose(fp);
}

char* FindWord(int word)
{
    int i = 0;
    do
    {
        if (word == dict[i].word) return dict[i].name;
    } while(dict[++i].name != NULL);
    if (word == 0x0) return "";
    fprintf(stderr, "Error: Cannot find word 0x%04x\n", word);
    exit(1);
    return NULL;
}

int FindWordByName(char* s, int n)
{
    if (n == 0) return 0;

    char temp[256];
    for(int i=0; i<n; i++)
        temp[i] = s[i];
    temp[n] = 0;

    int i = 0;
    do
    {
        if (strcmp(dict[i].name, temp) == 0) return dict[i].word;
    } while(dict[++i].name != NULL);
    //fprintf(stderr, "Error: Cannot find string %s\n", s);
    return 0;
}

// ------------------------------------------------
// Functions to print the call stack properly
// ------------------------------------------------

unsigned short int bpbase = 0;

void SetBPBase(int bp)
{
    const unsigned short int bpbase1 = 0xd4a7 + 0x100 + 0x80; // early call stack base
    const unsigned short int bpbase2 = 0xd4a7 + 0x100 + 0x80+8615; // late call stack base

    bpbase = bpbase1;
    if (bp > bpbase)
    {
        bpbase = bpbase2;
    }
}


int iscall[20000];

void DefineCallStack(int bp, int value)
{
    SetBPBase(bp);
    //printf("%i\n", bpbase-bp);
    if (bpbase-bp > 0) iscall[(bpbase-bp)>>1] = value;
}

int FindClosestWord(int si)
{
    int dist = 0x10000;
    int i = 0;
    int word = -1;
    do
    {
        int d = si - dict[i].word;
        if (d < 0) continue;
        if (d < dist)
        {
            dist = d;
            word = dict[i].word;
        }
    } while(dict[i++].name != NULL);
    return word;
}

void PrintCalltrace(int bx)
{
    SetBPBase(bp);
    printf("Callstack\n");
    printf("  0x%04x: %s\n", si, FindWord(bx+2));

    int word = FindClosestWord(si);
    printf("  0x%04x: %s\n", word, FindWord(word));
    for(int i=bp; i<bpbase; i += 2)
    {
        if (iscall[(bpbase-i)>>1])
        {
            int word = FindClosestWord(Read16(i));
            printf("  0x%04x: %s\n", word, FindWord(word));
        }
    }
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
        fread(&m[(disktransferaddress_segment<<4)+disktransferaddress_offset], size, 1, fp);
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
        //exit(1);
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
    //printf("Parametercall addr=%04x, si=%04x bx=%04x content=0x%04x\n", addr, si, bx+2, Read16(bx+2));

    bp -= 2;
    Write16(bp, si);
    DefineCallStack(bp, 1);

    // next address after the call contains forth code, so change pointer
    Push(addr+3);
    si = Pop();

    bx += 2; // push address of variable in the overlays
    Push(bx);
}


void LXCHG(unsigned short es, unsigned short bx) //  "{LXCHG}"
{
    Push(cx);
    cx = Read16Long(es, bx);
    unsigned short ax;
    XCHG(&bx, &ax);
    unsigned short temp = Read16Long(es,bx);
    XCHG(&cx, &temp);
    Write16Long(es, bx, temp);
    XCHG(&bx, &ax);
    Write16Long(es, bx, cx);
    cx = Pop();
}

void Find() // "(FIND)"
{
    //Find word in dictionary
    unsigned short bx = Pop(); // first entry in dictionary
    unsigned short cx = Pop(); // length and string of entry
    int n = Read8(cx);
/*
    printf("Find: '");
    for(int i=0; i<n; i++)
        printf("%c", Read8(cx+1+i));
    printf("'\n");
*/

// ------------------------------
// Implementation on our own dict
// ------------------------------

    if (n == 0)
    {
        Push(0x253e);
        Push(0xC0);
        Push(1);
        return;
    }
    int word = FindWordByName(&mem[cx+1], n);
    //printf("Found 0x%04x\n", word);
    if (word == 0x0)
    {
        Push(0);
        return;
    } else
    {
        Push(word);
        Push(0x80 + n); // bitfield. bit 7 is always 1, bit 6 the IMMEDIATE flag, bit 5 is the SMUDGE flag, bits 0-4 store the word length.
        Push(1);
        return;
    }

// ----------------------

    Push(si);
    Push(regdi);
    unsigned char al, ah;
    unsigned char dl, dh;
    dl = 0x3F;
    dh = 0x7F;
    printf("first dictionary entry address=%x\n  word to search at address=%x\n", bx, cx);

    while(1)
    {
        //printf("0x%04x\n",bx);
        if (bx == 0) // word is not found, return 0
        {
            printf("  word not found\n");
            //x1859:
            regdi = Pop();
            si = Pop();
            Push(0);
            return;
        }

        // x182A:
        si = cx;
        regdi = bx;
        al = Read8(si);  // get number of letters of word to search
        si++;
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
            al = Read8(si);
            si++;
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
        si = Pop();
        ax += 3;
        Push(ax);
        dl = Read8(bx);
        dh = ah;
        Push(dl);
        Push(1);
        printf("  word found at bx=0x%04x ax=0x%04x dl=0x%04x\n", bx, ax, (dh<<8)|dl);
        return;
    }
}

void Call(unsigned short addr, unsigned short bx)
{
    unsigned short i;
    unsigned short ax;

    // bx contains pointer to WORD
    if ((regsp < FILESTAR0SIZE+0x100) || (regsp > 0xF6F4))
    {
        fprintf(stderr, "Error: stack point in invalid area\n");
        exit(1);
    }
    switch(addr)
    {
// -----------------------------------

        case 0x224c: // call
            bx += 2;
            bp -= 2;
            Write16(bp, si);
            si = bx;
            DefineCallStack(bp, 1);
        break;

        case 0x1692: // "EXIT"
            si = Read16(bp);
            bp += 2;
        break;

        // - call stack operations mainly for loops -

        case 0x0E52: Push(Read16(bp+0)); break; // "I"
        case 0x0E62: Push(Read16(bp+2)); break; // "I'"
        case 0x0E70: Push(Read16(bp+4)); break; // "J"

        // ---- call stack operations ---

        case 0x0EA4: Push(Read16(bp+0)); break; // "R@"
        case 0x0E92: // "R>" pop variables from the callstack
            ax = Read16(bp);
            bp += 2;
            Push(ax);
        break;

        case 0xDB6: // ">R" push variables on the callstack
            bx = Pop();
            bp -= 2;
            Write16(bp, bx);
            DefineCallStack(bp, 0);
        break;

        // ------------------------------

        case 0x3A39: // "@EXECUTE"
            bx = Pop();
            bx = Read16(bx)-2;
            ax = Read16(bx);
            //printf("jump to %x\n", ax);
            Call(ax, bx);
        break;

        case 0x1675: // "CFAEXEC"
            bx = Pop();
            ax = Read16(bx);
            //printf("jump to %x\n", addr);
            Call(ax, bx);
            break;

        case 0x1684: // "EXECUTE"
            bx = Pop()-2;
            ax = Read16(bx);
            //printf("execute %s\n", FindWord(bx+2));
            Call(ax, bx);
        break;

        case 0x17B7: // Exec function pointers "CREATE" "TYPE", "CALL", "ABORT" "PAGE", ...
            //printf("%04x\n", bx);
            //exit(1);
            bx += 2;  // points to data in word
            bx = Read16(bx);
            bx = Read16(bx+regdi);
            bx -= 2;
            ax = Read16(bx);
            char *s = FindWord(bx+2);
            //printf("Execute %s\n", s);
            if (strcmp(s, "(TYPE)") == 0)
            {
                int n = Read16(regsp);
                int offset = Read16(regsp+2);
                for(int i=0; i<n; i++)
                    printf("%c", Read8(offset+i));
            }
            if (strcmp(s, "(CR)") == 0)
            {
                printf("\n");
            }
            if (strcmp(s, "(POSITION)") == 0)
            {
                //printf("%i, %i\n", Read16(regsp), Read16(regsp+2));
            }
            if (strcmp(s, "(EMIT)") == 0) // print one char
            {
                //printf("print char %i\n", Read16(regsp));
            }
            if (strcmp(s, "(WORD)") == 0) // scans input stream for char and copies
            {
                //unsigned short offset = Read16(REGDI+0x12);
                //PrintCalltrace(bx);
                //printf("%i offset %i\n", Read16(regsp), offset);
                //exit(1);
            }

            Call(ax, bx);
        break;

        case 0x21C9: // TODO for forth interpreter, is incomplete
            // Check for stack size and jump to error handling
            //printf("Info: %i 0x%x\n", Read16(0x0A0B), Read16(regdi+4));
            ax = Read16(0x0A0B); // #SPACE (256)
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
            break;

        case 0x16a3: // "GO"
            bx = Pop();
            printf("jump to %x. Either stop (0x0) or restart (0x100)\n", bx);
            exit(0);
        break;

        case 0x174C: Write16(bp+2, Read16(bp)); break; // "(LEAVE)"
        case 0x0EC8: bp = Read16(regdi+2); break; // RP!

        case 0x83f8: // all overlays
            printf("Load overlay %s\n", FindWord(bx+2));
            ParameterCall(bx, 0x83f8);
            break;
        case 0x5275: ParameterCall(bx, 0x5275); break; // "OVT" "IARRAYS"
        case 0x4ef5: ParameterCall(bx, 0x4ef5); break; // "BLACK DK-BLUE DL-GREE GREEN RED VIOLET BROWN ... WHITE"
        case 0x6ec1: ParameterCall(bx, 0x6ec1); break; // ":TIMEST :SIGNAT :CKSUM :SAVE :VERSIO"
        case 0x3b68: ParameterCall(bx, 0x3b68); break; // "(2C:) NULL 0. VANEWSP IROOT .... *EOL"
        case 0x4a96: ParameterCall(bx, 0x4a96); break; // "CCASE"
        case 0x7227:
            //PrintCalltrace(bx);
            printf("Receive %s from STAR*.COM Dictionary for index 0x%x\n", FindWord(bx+2), Read16(regsp));
            // "FILE-NA FILE-TY FILE-ST FILE-EN FILE-#R FILE-RL FILE-SL"
            ParameterCall(bx, 0x7227);
        break;
        //case 0x1AB5: ParameterCall(bx, 0x1AB5); break; // "FORTH MUSIC IT-VOC MISC-"
        case 0x744d: ParameterCall(bx, 0x744d); break; // "INST-SI" "INST-PR" "%NAME" "PHR-CNT" "TEXT-CO" "PHRASE$" ...

        // -----------------------------------

        case 0x8A2D: // some screen coordinates
            ax = Pop() >> 1;
            cx = Pop();
            bx = 0xc7; // = 199
            bx -= cx;
            if (bx & 1)
            {
                ax += 0x2000;
                bx &= 0xFFFE; // remove lower bit
            }
            int temp = bx;
            bx = ax;
            ax = temp;
            cx = 0x28; // = 40
            ax *= cx;
            bx += ax;
            ax = bx;
            Push(ax);
        break;

        case 0x25D7: // "KEY" read keyboard endless loop, executed by "0x17B7"
            {
                // 1. either low byte ascii, high byte 0
                // 2. or low byte scancode, high byte 1
                char c;
                c = getchar();
                //printf("key %i\n", c);
                if (c == 0xa) c = 0xd;
                Push(c);
                /*
                static int keyboardn = 0;
                if (keyboardn == 0) Push(0x35); // 5
                if (keyboardn == 1) Push(0x0d); // enter
                keyboardn++;
                exit(1);
                */
            }
        break;

        case 0x25bc: // "(?TERMINAL)" keyboard check buffer
            Push(0);
        break;

        case 0x1508:  // "S->D"
            bx = regsp;
            ax = Read16(bx);
            if (ax&0x8000) Push(0xFFFF); else Push(0x0);
        break;

        case 0x1D29: Push(bx+2); break; // ???  // get pointer to variable or table

        case 0x2214: Push(Read16(bx+2)); break; // get constant

        case 0x175F: // read constant "LIT"
        {
            ax = Read16(si);
            si+=2;
            Push(ax);
        }
        break;

        case 0x1618: // read constant "2LIT"
            ax = Read16(si);
            si += 2;
            Push(ax);
            ax = Read16(si);
            si += 2;
            Push(ax);
        break;

        case 0xC3A: // 2@ write
            bx = Pop();
            Push(Read16(bx+2));
            Push(Read16(bx));
            //printf("read address %x:%x\n", Read16(bx+2), Read16(bx));
        break;

        case 0xC24: // read
            bx = Pop();
            ax = Pop();
            cx = Pop();
            Write16(bx, ax);
            Write16(bx+2, cx);
        break;

        case 0x30a8: // "ADVANCE"
            //printf("Advance\n");
            ax = Pop();
            if (ax != 0)
            {
                bx = ax - 2;
                unsigned short es = Read16(0x2C04);
                LXCHG(es, bx);
                es = Read16(0x2C9D);
                LXCHG(es, bx);
            }
        break;

        case 0x4DA4: // "!OFFSET"
        {
            //printf("!OFFSET}n");
            bx = Pop();
            int tempsi = Read16(bx);
            int tempcx = Read16(bx+2);
            int tempbp = Read16(bx+4);
            int es = Read16(bx+6);
            int tempdi = (cx<<1)+tempbp;
            for(;cx>0; cx--)
            {
                ax = si*cx;
                Write16Long(es, tempdi, ax);
                tempdi-=2;
            }
            ax = 0;
            Write16Long(es, tempdi, ax);
            tempdi-=2;
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
            bx = Pop();
            ax = Pop();
            cx = Pop();
            Write16Long(0, bx*4+0, ax);
            Write16Long(0, bx*4+2, cx);
        break;


        case 0x14BD: // "DIGIT"
            // TODO: handle base if decimal or hex
            dx = Pop(); // base
            ax = (Pop()&0xFF);

            if ((ax < '0') || (ax > '9'))
            {
                Push(0);
                break;
            }
            Push(ax-0x30);
            Push(1);

            //printf("Digit base=%i ascii=%i\n", dx, ax);
        break;

        case 0x22AB: // Enclose

            // TODO: check
            ax = Pop()&0xFF;
            bx = Pop();
            //printf("search at ax:0x%x bx:0x%x\n", ax, bx);
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

        case 0x1AC0: // check for name !!!
            bx = Pop();
            ax = Read8(bx);
            bx++;
            ax += Read8(bx);
            ax &= 6;
            ax += 6;
            Push(ax);
            break;

        case 0x143A: // ">UPPERCASE"
            cx = Pop();
            bx = Pop();
            dx = 0x617A;
            //printf("Uppercase %i at 0x%04x\n", cx, bx);
            for(i=0; i<cx; i++)
            {
                ax = Read8(bx);
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
        ax = Read16(regdi + 0x1C) & 0xFF;
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
            ax = Pop()&0xFF;
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
            ax = Pop();
            ax = (ax & 0xFF) | (0x6 << 8);
            dx = mem[regdi + 0x1e]<<8;
            dx |= mem[regdi + 0x1f];
            bx = Read16(0x20);
            cx = 0;
            // int 10h
            break;

        case 0x11ED: // "U/MOD"
        {
            bx = Pop();
            dx = Pop();
            ax = Pop();
            unsigned int nom = ax | (dx<<16);
            Push(nom % bx);
            Push(nom / bx);
        }
        break;

        case 0xF4E: // "/"
            bx = Pop();
            ax = Pop();
            Push((signed short int)ax/(signed short int)bx);
        break;

        case 0x1261: // "-"
            ax = Pop();
            dx = Pop();
            if (ax == dx) Push(1); else Push(0);
        break;

        case 0x127a: // "0<"
            ax = Pop();
            Push((ax&0x8000)?1:0);
        break;

        case 0x71DD: // "UNK_0x71dd" gets the idx from the dictionary in STARX.com
            //WriteCallGraph();
            //exit(1);
            ax = Pop();
            //printf("read idx 0x%x  from STARA.COM or STARB.COM FILE\n", ax);
            if (ax >= 0x90)
            {
                bx = Read16(0x535e)+3;
                ax -= 0x90;
            } else
            if (ax >= 0x60)
            {
                bx = Read16(0x535e)+2;
                ax -= 0x60;
            } else
            if (ax >= 0x30)
            {
                bx = Read16(0x535e)+1;
                ax -= 0x30;
            } else
            {
                bx = Read16(0x535e);
            }
            //0x72313:
            ax *= 0x15;
            Push(ax);
            Push(bx);
            break;

        case 0x3672:
            ax = Pop();
            ax += Read16(0x2c79);
            Push(ax);
            break;

        case 0x3048: // "(BUFFER)"
        {
            cx = Pop();
            //dx = /*es*/0x1FE;
            bx = 0;
            ax = 0;
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
                // search in string for occurence of sign
                // return 1 or 0;
                ax = Pop();
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
            break;

            case 0x367F: // ???
                dx = Pop();
                Push(regdi);
                Push(si);
                Push(bp);
                cx = Read16(0x2B3A); // #FILES
                regdi = 0x2D74;
                bx = 0;
                //0x368C:
                for(;cx!=0; cx--)
                {
                    bp = (cx-1)<<1;
                    si = 0x2D74 + bp;
                    ax = dx;
                    ax = ax - Read16(si);
                    if (ax&0x8000) continue;
                    si = 0x2D4C + bp;
                    if (ax >= Read16(si)) continue;
                    bx++;
                    break;
                }

                //x36AA:
                bp >>= 1;
                cx = bp;
                bp = Pop();
                si = Pop();
                regdi = Pop();
                Push(ax);
                Push(cx);
                Push(bx);
                break;

        case 0x36BB: // ???
            cx = mem[Pop() + 0x2D23];
            if (cx == 0) cx = Read16(0x2C15);
            cx--;
            Push(cx);
            break;

        case 0x75d7: // "CDEPTH"
            ax = ((0x6398 - Read16(0x54B0))&0xFF)/3;
            Push(ax);
        break;

// ---------------------------------------------

        case 0x1248: // "<"
            ax = Pop();
            dx = Pop();
            //printf("input %x %x\n", ax, dx);
            if ((signed short)dx < (signed short)ax) Push(1); else Push(0);
        break;

        case 0x122F: // ">"
            ax = Pop();
            dx = Pop();
            if ((signed short)dx > (signed short)ax) Push(1); else Push(0);
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
            ax = Pop();
            dx = Pop();
            if (dx < ax) Push(1); else Push(0);
        break;

        case 0x1FA:
        /*Push(0x20F);Push(0x7246);Push(0x1FE);Push(0x1CF);Pop();Pop();Pop();Pop(); */
        break; // overwrite interrupt 0 to and div 0?


        case 0x6D12: // "?UPDATE"  used in CMOVE() function, when something is copied and the overlay is merged. Upates Word "#RECORD"
            // TODO!!!
            //fprintf(stderr, "?UPDATE incomplete?");
            //exit(1);
            // cx = 0xb429 long jump in XKEYINT
            // cx = 0x5eed [KEYINT]
            // cx = 0x613c UNK_0x613c
            cx = Pop();
            //printf("unknown 0x%x\n", cx);
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
            static int ntime = 0;
            //printf("%i\n", ntime);
            if (ntime == 0)
            {
            Write16(0x188, 0x1);
            Write16(0x18A, 0x19B1);
            Write16(0x193, 0x0);
            } else
            if (ntime < 241)    {
                Write16(0x18A, 0x19B3);
            } else
                Write16(0x18A, 0x19B4);

            ntime++;
        }
            Push(0x188);
        break;


// ---------------------------------------------
// sound stuff

        case 0x2653:  // "BEEPOFF"
        break;

// ---------------------------------------------
// graphic card stuff

        case 0x8E4F:  // something with EGA
        Pop();
        Pop();
        Pop();
        Pop();
        break;

        case 0x9367: // "PLOT"
            //Write16(0x5663, Pop()); // safe return address for call
            dx = Pop();
            ax = Pop();
            dx <<= 1;
            dx += Read16(0x563A);
            Push(dx);
            Push(ax);
            ax = (ax&3)<<1;
            bx = 0x92CF + ax;
            dx = Read16(bx);
            ax = Pop()>>2;
            bx = Pop();
            ax += Read16(bx);
            bx = ax;
            cx = Read16(0x5648);
            unsigned short es = cx;
            ax = dx;
            //XCHG(&ax, &dx);
            //dx = 0x3CE;

            //bx = Pop(); // es = Pop();

            //Push(Read16(0x5663));
        break;

        case 0x6C86: // "C>EGA"
            dx = Pop() & 0xF;
            Push(si);
            ax = 0;
            Push(0x0);
            cx = 0x10;
            // decrementing lodsb
            si = 0x4FCA;
            for(;cx>0; cx--)
            {
                ax = Read8(si)&0xF;
                si--;
                if (ax == dx)
                {
                    ax = Pop();
                    ax = cx;
                    Push(ax);
                    cx = 1;
                }
            }
            ax = Pop();
            si = 0x4FCD;
            si = si + ax - 1;
            ax = Read8(si);
            si = Pop();
            Push(ax);
        break;


        case 0x8F8B: // "BFILL"
            // a lot with the display
        break;


        case 0x8D09: // "DISPLAY"
            // a lot with the display
        break;

        case 0x8D8B: // do something???
            //set screen, display image???
        break;


        case 0x8DF0: // set graphics card (depends on variable 0x584A)
        {
            // call 0x8CC0 something  with printer
        }
        break;

        case 0x2767: // "POSITION"
        {
            // set cursor position
            ax = Pop();
            bx = Pop();
            Write8(regdi+0x1B, ax&0xFF);
            Write8(regdi+0x1A, bx&0xFF);
            // int10h
            //printf("position %i %i di=0x%04x\n", ax, bx, di);
        }
        break;

        case 0x7AE7: // ">V"
            bx = Read16(0x54B4);
            Write16(bx, Pop());
            Write16(0x54B4, Read16(0x54B4)-2);
        break;

        case 0x29FC: // "V!"
        {
            // Graphics card output. Prints chars on screen
            cx = ds;
            int seg = Read16(regdi + 0x18); // screen segment
            //ds = ax;
            bx = Pop(); // offset
            ax = Pop(); // color and char
            Write16Long(seg, bx, ax);
            //ds = cx;
            //printf("Draw 0x%04x 0x%04x at segment: 0x%04x\n", bx, ax, Read16(di + 0x18));
        }
        break;

        case 0x27F8: // Color text video memory // "">VMOVE""
        {
            unsigned short int es = Read16(regdi+0x18);
            ax = Read16(regdi+0x20);
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
            for(i=0; i<cx; i++)
            {
                ax = (ax & 0xFF00) | (Read8(tempsi)&0xFF);
                Write16Long(es, tempdi, ax);
                tempsi++;
                tempdi+=2;
            }
        }
        break;

        // 3 byte variables handling

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

        case 0x7425:
            bx = Pop();
            ax = Read8(bx+1) + 0x63ef;
            Push(ax);
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
            //printf("copy from %x:%x to %x:%x  %i bytes\n", tempds, tempsi, tempes, tempdi, tempcx);
            for(i=0; i<tempcx; i++)
                Write8Long(tempes, tempdi+i, Read8Long(tempds, tempsi+i));
        }
        break;

        case 0x0D9C: //"ADDR>SEG"
            ax = (Pop()>>4) + cs; // ds = cs
            Push(ax);
        break;
// --------------------------

        case 0x15BA: // "(DO)"
        {
            dx = Pop();
            ax = Pop();
            int temp = regsp;
            regsp = bp;
            Push(ax);
            Push(dx);
            bp = regsp;
            regsp = temp;
            DefineCallStack(bp, 0);
            DefineCallStack(bp+2, 0);
        }
        break;

        case 0x1593: // "(/LOOP)"
            ax = Pop() + Read16(bp);

            if ((signed short int)ax >= (signed short int)Read16(bp+2))
            {
                // exit loop
                bp += 4;
                si += 2;
            } else
            {
                Write16(bp, ax);
                si += Read16(si);
            }

        break;

        case 0x155E: // "(+LOOP)"
        {
            bx = Pop();  // stepsize
            ax = Read16(bp) + bx;
            //printf("stepsize %i, comparison index: %x dest: %x \n", (short)bx, Read16(bp), Read16(bp+2));
            if (bx&0x8000) // if stepsize is negative
            {
                //0x1577:
                if ((signed short)ax >= (signed short)Read16(bp+2))
                {
                    //0x156D:
                    Write16(bp, ax);
                    si += Read16(si);
                } else
                {
                    //0x157C: loop finished
                    // exit loop
                    bp += 4;
                    si += 2;
                }

            } else
            {
                //0x1568:
                if ((signed short)ax >= (signed short)Read16(bp+2))
                {
                    //0x157C:
                    // exit loop
                    bp += 4; // loop finished
                    si += 2;
                } else
                {
                    //0x156D:
                    Write16(bp, ax);
                    si += Read16(si);
                }
            }
        }
        break;

        case 0x15D2: // "(LOOP)"
        {
            ax = Read16(bp)+1; // index
            bx = Read16(bp+2);
            if ((signed short int)ax >= (signed short int)bx)
            {
                // exit loop
                bp += 4;
                si += 2;
            } else
            {
                Write16(bp, ax);
                si += Read16(si);
            }
        }
        break;

// ------------------------------------

        case 0x1067: // "D+"
        {
            ax = Pop();
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

        case 0x6f49: // "VA>BLK"
        {
            ax = Pop();
            dx = Pop();
            bx = 0;
            cx = 0xA;
            long long x = (((long long)ax) << 32) | ((long long)dx << 16);
            //printf("%x %x 0x%llx %i\n", (int)ax, (int)dx, x, sizeof(x));
            x = x >> 0xA;
            Push((x&0xFFFF) >> 6);
            Push((x>>16)&0xFFFF);
            break;
        }

        case 0x10B9: // "DNEGATE"
        {
            ax = 0;
            cx = Pop();
            dx = Pop();
            //printf("neg: 0x%x 0x%x\n", cx, dx);
            int x = (cx << 16) | dx;
            x = -x;
            Push(x&0xFFFF);
            Push(x >> 16);
            break;
        }

        case 0x495E: // "D16*"
        {
            ax = Pop();
            dx = Pop();
            unsigned int x = (ax << 16) | dx;
            x = x << 4;
            Push(x&0xFFFF);
            Push((x>>16)&0xFFFF);
            break;
        }

        case 0x11D8: // "U*"
        {
            ax = Pop();
            bx = Pop();
            unsigned int x = (unsigned int)ax * (unsigned int)bx;
            Push(x&0xFFFF);
            Push((x>>16)&0xFFFF);
            break;
        }

        case 0x1818: Find(); break; // "(FIND)"

        case 0x1662: si += Read16(si); break; // BRANCH
        case 0x15FC: if (Pop() == 0) si += Read16(si); else si+=2; break; // 0BRANCH

        case 0x0F22: Push(0x0); break; // 0
        case 0x0F30: Push(0x1); break; // 1
        case 0x0F3F: Push(0x2); break; // 2
        case 0x1340: Push(Pop() | Pop()); break; // OR
        case 0x12F7: Push(Pop() & Pop()); break; // AND
        case 0x1366: Push(Pop() ^ Pop()); break; // XOR
        case 0x0F74: Push(Pop() + Pop()); break; // "+"
        case 0x0F94: // "-"
            bx = Pop();
            ax = Pop();
            Push(ax - bx);
        break;
        case 0x0FB5: Push(Pop() * Pop()); break; // *
        case 0x11C8: Push(-Pop()); break; // NEGATE
        case 0x1309: if (Pop() == 0) Push(1); else Push(0); break;// "NOT"
        case 0x128B: if (Pop() == 0) Push(1); else Push(0); break; // "0="
        case 0x1007: ax = Pop(); Push(ax+ax); break; // 2*
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
            ax = Pop();
            Write16Long(ds, bx, ax);
            //printf("Write16 to 0x%04x:0x%04x = %x\n", ds, bx, ax);
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
            ax = Pop();
            Write8Long(ds, bx, ax&0xFF);
            //printf("Write8 to 0x%x:0x%x = %x\n", ds, bx, ax);
        }
        break;
        case 0x2eCD: // "LC@"
        {
            bx = Pop();
            int ds = Pop();
            ax = Read8Long(ds, bx);
            Push(ax);
        }
        break;
        case 0x0F85:  // "+!"
            bx = Pop();
            ax = Pop();
            Write16(bx, Read16(bx) + ax);
        break;

        // ------ stack operations ------
        case 0x0E34: regsp += 2; break; // "DROP"
        case 0x0DE0: regsp += 4; break; // "2DROP"
        case 0x0E81: Push(Read16(regsp+2)); break; // "OVER"
        case 0x0E43: Push(Read16(regsp)); break; // "DUP"
        case 0x0DF2: bx = regsp; Push(Read16(bx+2)); Push(Read16(bx)); break; // "2DUP"
        case 0x0DCA: if (Read16(regsp) != 0) Push(Read16(regsp)); break; //"?DUP"
        case 0x0EF4: // "SWAP"
            dx = Pop();
            ax = Pop();
            Push(dx);
            Push(ax);
        break;
        case 0x0E08: // "2SWAP"
            ax = Pop();
            bx = Pop();
            cx = Pop();
            dx = Pop();
            Push(bx);
            Push(ax);
            Push(dx);
            Push(cx);
        break;
        case 0x0EB5: // "ROT"
            dx = Pop();
            bx = Pop();
            ax = Pop();
            Push(bx);
            Push(dx);
            Push(ax);
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
        case 0x0D7C: Push((Pop()-cs)<<4); break; // SEG>ADDR

        default:
            printf("unknown opcode 0x%04x at si = %x\n", addr, si);
            exit(1);
        break;
    }
}

void Step()
{
    int i;

    unsigned short ax = Read16(si); // si is the forth program counter
    si += 2;
    unsigned short bx = ax;
    unsigned short execaddr = Read16(bx);
#ifdef DEBUG
    printf("pc=0x%04x si=0x%04x word=0x%04x sp=0x%04x", execaddr, si-2, bx+2, regsp);
    printf(" %s\n", FindWord(bx+2));
#endif
    Call(execaddr, bx);
}

int main()
{
    printf("Try the following commands:\n");
    printf("'2 3 + .'\n");
    printf("'STARTER'\n");
    printf("'mountb bank-ov d@balance d.'\n");

    InitCPU();
    regsp = 0xd4a7 + 0x100;  // initial parameter stack

    LoadSTARFLT();

    // Patch to start Forth interpreter
    Write16(0x0a53, 0x0000); // BOOT-HOOK
    Write16(0x2420, 0x0F22-2); // "0"

    // interrupt vector
    Write16Long(0, 0x1C*4+2, 0xF000);
    Write16Long(0, 0x1C*4+0, 0x1280);

    while(1)
    {
        Step();
    }
    return 0;
}
