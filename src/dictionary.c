#include"global.h"

typedef struct DICTENTRY
{
    int ofs; // offset of directory entry
    int codep; // code pointer
    int linkp; // link pointer
    int parp; // parameter pointer
    int bits; // bitfield
//    int t; // type x86=1;
    char r[64]; // name
    int size;
} DICTENTRY;

struct DICTENTRY dict[10000];
int ndict = 0;

unsigned char Read8(unsigned short ofs);
unsigned short Read16(unsigned short ofs);

char* FindDictPar(unsigned short addr)
{
    int i = 0;
    for(i=0; i<ndict; i++)
    {
        if (dict[i].parp == addr) return dict[i].r;
    }

    sprintf(dict[ndict].r, "UNK_0x%04x", addr);
    dict[ndict].codep = Read16(addr-2);
    dict[ndict].parp = addr;
    dict[ndict].ofs = addr-2;
    ndict++;
    return dict[ndict-1].r;
}

int FindDictStart(int addr)
{
    int i = 0;
    for(i=0; i<ndict; i++)
    {
        if (dict[i].ofs == addr) return i;
    }
    return -1;
}

int FindDictEntry(const char *s)
{
    int i;
    for(i=0; i<ndict; i++)
    {
        if (strcmp(dict[i].r, s) == 0) return i;
    }
    return -1;
}

char* Forth2CString(char *in)
{
    static char out[512];
    memset(out, 0, 512);
    int n = strlen(in);
    int j = 0;
    int i = 0;

    if (in[0] >= '0')
    if (in[0] <= '9')
    {
        out[j++] = '_';
    }

    for(; i<n; i++)
    {
        if ((in[i] >= 'a') && (in[i] <= 'z'))
        {
            out[j++] = in[i];
            continue;
        }
        if ((in[i] >= 'A') && (in[i] <= 'Z'))
        {
            out[j++] = in[i];
            continue;
        }
        if ((in[i] >= '0') && (in[i] <= '9'))
        {
            out[j++] = in[i];
            continue;
        }
        switch(in[i])
        {
            case '_':
                out[j++] = '_';
                break;

            case '(':
                out[j++] = '_';
                out[j++] = 'r';
                out[j++] = 'o';
                out[j++] = '_';
                break;

            case '.':
                out[j++] = '_';
                out[j++] = 'd';
                out[j++] = '_';
                break;

            case '$':
                out[j++] = '_';
                out[j++] = 'd';
                out[j++] = 'o';
                out[j++] = '_';
                break;

            case ')':
                out[j++] = '_';
                out[j++] = 'r';
                out[j++] = 'c';
                out[j++] = '_';
                break;

            case '/':
                out[j++] = '_';
                out[j++] = 's';
                out[j++] = 'l';
                out[j++] = '_';
                break;

            case '!':
                out[j++] = '_';
                out[j++] = 'e';
                out[j++] = 'x';
                out[j++] = '_';
                break;

            case '-':
                out[j++] = '_';
                out[j++] = 'm';
                out[j++] = '_';
                break;

            case '>':
                out[j++] = '_';
                out[j++] = 'g';
                out[j++] = 't';
                out[j++] = '_';
                break;

            case '<':
                out[j++] = '_';
                out[j++] = 's';
                out[j++] = 't';
                out[j++] = '_';
                break;

            case '=':
                out[j++] = '_';
                out[j++] = 'e';
                out[j++] = 'q';
                out[j++] = '_';
                break;

            case '#':
                out[j++] = '_';
                out[j++] = 'n';
                out[j++] = '_';
                break;

            case '?':
                out[j++] = '_';
                out[j++] = 'q';
                out[j++] = '_';
                break;

            case '\'':
                out[j++] = '_';
                out[j++] = 'i';
                out[j++] = '_';
                break;

            case '+':
                out[j++] = '_';
                out[j++] = 'p';
                out[j++] = '_';
                break;

            case '%':
                out[j++] = '_';
                out[j++] = 'p';
                out[j++] = 'e';
                out[j++] = '_';
                break;

            case '@':
                out[j++] = '_';
                out[j++] = 'a';
                out[j++] = 'd';
                out[j++] = '_';
                break;

            case '&':
                out[j++] = '_';
                out[j++] = 'a';
                out[j++] = '_';
                break;

            case '*':
                out[j++] = '_';
                out[j++] = 's';
                out[j++] = '_';
                break;

            case ';':
                out[j++] = '_';
                out[j++] = 's';
                out[j++] = 'c';
                out[j++] = '_';
                break;

            case '[':
                out[j++] = '_';
                out[j++] = 'b';
                out[j++] = 'o';
                out[j++] = '_';
                break;

            case ']':
                out[j++] = '_';
                out[j++] = 'b';
                out[j++] = 'c';
                out[j++] = '_';
                break;

            case '{':
                out[j++] = '_';
                out[j++] = 'c';
                out[j++] = 'o';
                out[j++] = '_';
                break;

            case '}':
                out[j++] = '_';
                out[j++] = 'c';
                out[j++] = 'c';
                out[j++] = '_';
                break;

                case '"':
                out[j++] = '_';
                out[j++] = 'q';
                out[j++] = 'm';
                out[j++] = '_';
                break;

            case ',':
                out[j++] = '_';
                out[j++] = 'c';
                out[j++] = 'o';
                out[j++] = '_';
                break;

            case ':':
                out[j++] = '_';
                out[j++] = 'c';
                out[j++] = '_';
                break;

            case '^':
                out[j++] = '_';
                out[j++] = 'h';
                out[j++] = '_';
                break;

            case '|':
                out[j++] = '_';
                out[j++] = 'v';
                out[j++] = '_';
                break;

            case '~':
                out[j++] = '_';
                out[j++] = 't';
                out[j++] = '_';
                break;

            case '\\':
                out[j++] = '_';
                out[j++] = 'b';
                out[j++] = 's';
                out[j++] = '_';
                break;

            case 0x7F:
                break;

            default:
                printf("sign '%c' (0x%02x) not found\n", in[i], in[i]);
                exit(1);
                break;
        }
    }
    return out;
}

// --------------------------------------------

int AddDirectory(int ofs, unsigned char *mem, int decrypt)
{
    unsigned short linkp = mem[ofs] | (mem[ofs+1] << 8);
    unsigned char bitfield = mem[ofs+2];
    //unsigned short codep = mem[ofs+3] | (mem[ofs+4] << 8);
    unsigned int length = bitfield & 0x3F;
    int i = 0;
    memset(&dict[ndict], 0, sizeof(DICTENTRY));
    dict[ndict].ofs = ofs;
    dict[ndict].linkp = linkp;
    dict[ndict].bits = bitfield;
    dict[ndict].size = -1;

    int n = 0;
    do
    {
        i++;
        if (decrypt)
        {
            if (length == 1)
            {
                dict[ndict].r[n] = mem[ofs+2+i] & 0x7F;
            } else
            {
                dict[ndict].r[n] = (mem[ofs+2+i] ^ 0x7F) & 0x7F;
                mem[ofs+2+i] = ((mem[ofs+2+i]^0x7F)&0x7F) | (mem[ofs+2+i]&0x80); // restore upper bit
            }
        } else
        {
            dict[ndict].r[n] = (mem[ofs+2+i]) & 0x7F;
            mem[ofs+2+i] = ((mem[ofs+2+i])&0x7F) | (mem[ofs+2+i]&0x80); // restore upper bit
        }

        n++;
    } while ((mem[ofs+2+i]&128) == 0);
    int varp = ofs + i + 3;
    dict[ndict].codep = (mem[varp+1]<<8) | mem[varp+0];
    dict[ndict].parp = ofs+5+n;
    ndict++;
    return linkp - 2;
}

void ParseDict(unsigned char *mem, int linkp, int decrypt)
{
    int i = 0;
    int j = 0;

    for(i=0; i<30000; i++)
    {
        for(j=0; j<ndict; j++)
        {
            if (dict[j].ofs == linkp)
            {
                fprintf(stderr, "duplicate\n");
                //exit(1);
                return;
            }
        }
        linkp = AddDirectory(linkp, mem, decrypt);
        if (linkp <= 0) return;
    }
}

void WriteDict(unsigned char *mem, FILE *fp, int startidx, int endidx)
{
    int i;
    unsigned int bitfield = 0;
    fprintf(fp, "\n// =================================\n");
    fprintf(fp, "// =========== DICTIONARY ==========\n");
    fprintf(fp, "// =================================\n");

    for(i=startidx; i<endidx; i++)
    {
        fprintf(fp, "// %4i: %15s", i, dict[i].r);
        fprintf(fp, "  codep:0x%04x parp:0x%04x size:0x%04x C-string:'%s'",
        dict[i].codep, dict[i].parp, dict[i].size, Forth2CString(dict[i].r));
/*
        fprintf(fp, " bitfield: %i %i %i  codep:0x%04x parp:0x%04x size:0x%04x",
        (bitfield>>7)&1, (bitfield>>6)&1, (bitfield>>5)&1,
        dict[i].codep, dict[i].parp, dict[i].size);
*/
        fprintf(fp, "\n");
    }
}

void SortDictionary()
{
    struct DICTENTRY temp;
    int i = 0;
    int j = 0;
    for(i=0; i<ndict; i++)
    for(j=0; j<ndict-1; j++)
    {
        if (dict[j].ofs > dict[j+1].ofs)
        {
            memcpy((void*)&temp,      (void*)&dict[j], sizeof(DICTENTRY));
            memcpy((void*)&dict[j],   (void*)&dict[j+1], sizeof(DICTENTRY));
            memcpy((void*)&dict[j+1], (void*)&temp, sizeof(DICTENTRY));
        }
    }
    for(i=0; i<ndict-1; i++)
    {
        dict[i].size = dict[i+1].ofs - dict[i].parp;
    }
}

// --------------------------------------------

typedef struct
{
    char str0[200];
    char str[200];
    char strword[200];
    int label;
    int done;

} LineDesc;

static LineDesc pline[0x10000];

int PutEasyMacro(int ofs, char *s)
{
    if (strcmp(s, "0") == 0)
    {
        sprintf(pline[ofs].str, "Push(0); ", s);
        return 1;
    }
    if (strcmp(s, "1") == 0)
    {
        sprintf(pline[ofs].str, "Push(1); ", s);
        return 1;
    }
    if (strcmp(s, "2") == 0)
    {
        sprintf(pline[ofs].str, "Push(2); ", s);
        return 1;
    }
    return 0;
}

void ParsePartFunction(int ofs, LineDesc *l, int minaddr, int maxaddr)
{
    static int nlabel = 1;

    while(1)
    {
        if (ofs < minaddr) return;
        if (ofs > maxaddr) return;
        if (pline[ofs].done) return;

        int par = Read16(ofs);
        int codep = Read16(par);
        pline[ofs+0].done = 1;
        pline[ofs+1].done = 1;

        char *s = FindDictPar(par+2);


        if (strcmp(s, "(;CODE)") == 0) // maybe inlined code
        {
            sprintf(pline[ofs].str, "\n  %s();\n// inlined assembler code\n", s);
            ofs += 2;
            return;
        } else
        if (strcmp(s, "(ABORT\")") == 0)
        {
            int ofstemp = ofs;
            int length = Read8(ofs+2);
            char str[0x100];
            memset(str, 0, 0x100);
            int ll = 0;

            if (length >= 128)
            {
                ofs += 2;
                sprintf(pline[ofstemp].str, "\n  (ABORT\") // string %i\n  ", length);
            } else
            {
                pline[ofs+2].done = 1;
                ofs += 3;
                for(ll=0; ll<length; ll++)
                {
                    str[ll] = Read8(ofs);
                    pline[ofs].done = 1;
                    ofs++;
                }
                sprintf(pline[ofstemp].str, "\n  (ABORT\") // string %i \"%s\"\n  ", length, str);
            }
        } else
        if (strcmp(s, "(.\")") == 0) // print string
        {
            int ofstemp = ofs;
            int length = Read8(ofs+2);

            char str[0x100];
            memset(str, 0, 0x100);
            int ll = 0;
/*
            if ((length == 253) || (length == 141))
            {
                ofs += 2;
                sprintf(pline[ofstemp].str, "\n  (.\\\") string %i\n  ", length);
            } else
*/

            if (length >= 128)
            {
                ofs += 2;
                sprintf(pline[ofstemp].str, "\n  (.\") // string %i\n  ", length);
            } else
            {
                pline[ofs+2].done = 1;
                ofs += 3;
                for(ll=0; ll<length; ll++)
                {
                    str[ll] = Read8(ofs);
                    pline[ofs].done = 1;
                    ofs++;
                }
                sprintf(pline[ofstemp].str, "\n  (.\") string %i \"%s\"\n  ", length, str);
            }

        } else
#ifdef STARFLT1
          if (par == 0x3f39) // a call, but gets a string as input? , TODO for STARFLIGHT2?
        {
            int ofstemp = ofs;
            pline[ofs+2].done = 1;
            int length = Read8(ofs+2);

            char str[0x200];
            memset(str, 0, 0x200);
            int ll = 0;

            ofs += 3;
            for(ll=0; ll<length; ll++)
            {
                str[ll] = Read8(ofs);
                pline[ofs].done = 1;
                ofs++;
            }
            sprintf(pline[ofstemp].str, "\n  UNK_0x3f39(\"%s\");\n  ", str);
            /*
            sprintf(pline[ofs].str, "\n  dw3f39() string %i\n  ", length);
            ofs += length;
            */
        } else
#endif
        if (codep == CODECALL) // call
        {
            if ((par+2 >= minaddr) && (par+2 <= maxaddr))
            {
                sprintf(pline[par+2].str0, "\nvoid %s()\n{\n  ", s);
                ParsePartFunction(par+2, l, minaddr, maxaddr);
            }
            sprintf(pline[ofs].str, "%s();\n  ", s);
            ofs += 2;
        } else
        if (codep == CODEPOINTER) // pointer to variable or table
        {
            sprintf(pline[ofs].str, "pp_%s ", s);
            ofs += 2;
        } else
        if (codep == CODECONSTANT)
        {
            sprintf(pline[ofs].str, "Push(cc_%s); ", s);
            ofs += 2;
        } else
        if (codep == CODEDI) // load from fixed table?
        {
            sprintf(pline[ofs].str, "tt_%s ", s);
            ofs += 2;
        } else
        if (codep == CODELIT) // constant number
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            sprintf(pline[ofs].str, "Push(0x%04x); ", par);
            ofs += 4;
        } else
        if (codep == CODE2LIT) // constant number
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            pline[ofs+4].done = 1;
            pline[ofs+5].done = 1;
            sprintf(pline[ofs].str, "Push(0x%04x); Pust(0x%04x); ", Read16(ofs + 2), Read16(ofs + 4));
            ofs += 6;
        } else
        if (strcmp(s, "EXIT") == 0)
        {
            sprintf(pline[ofs].str, "\n}\n\n", par);
            ofs += 2;
            return;
        } else
        if (strcmp(s, "BRANCH") == 0)
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            int addr = (ofs + 2 + par)&0xFFFF;
            if (pline[addr].label == 0)
            {
                pline[addr].label = nlabel++;
            }
            sprintf(pline[ofs].str, "\n  goto label%i;\n  ", pline[addr].label);
            ParsePartFunction(addr, l, minaddr, maxaddr);
            ofs += 4;
        } else
        if (strcmp(s, "0BRANCH") == 0)
        {
            par = Read16(ofs+2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            int addr = (ofs + 2 + par)&0xFFFF;
            if (pline[addr].label == 0)
            {
                pline[addr].label = nlabel++;
            }
            sprintf(pline[ofs].str, "\n  if (Pop() == 0) goto label%i;\n  ", pline[addr].label);
            ParsePartFunction(addr, l, minaddr, maxaddr);
            ofs += 4;
        } else
        if (strcmp(s, "(DO)") == 0)
        {
            sprintf(pline[ofs].str, "\n  do // (DO)\n  {\n  ", par);
            ofs += 2;
        } else
        if (strcmp(s, "(/LOOP)") == 0)
        {
            par = Read16(ofs+2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            sprintf(pline[ofs].str, "\n  } while(...); // (/LOOP) 0x%04x\n  ", par);
            ofs += 4;
        } else
        if (strcmp(s, "(LOOP)") == 0)
        {
            par = Read16(ofs+2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            sprintf(pline[ofs].str, "\n  } while(...); // (LOOP) 0x%04x\n  ", par);
            ofs += 4;
        } else
        if (strcmp(s, "(+LOOP)") == 0)
        {
            par = Read16(ofs+2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            sprintf(pline[ofs].str, "\n  } while(...); // (+LOOP) 0x%04x\n  ", par);
            ofs += 4;
        } else
        {
            if (!PutEasyMacro(ofs, s))
            {
                sprintf(pline[ofs].str, "%s ", s);
            }
            ofs += 2;
        }
    }
}

void InitParseFunction2()
{
    memset(pline, 0, 0x10000*sizeof(LineDesc));
}

void ParseFunction2(unsigned short parp, int minaddr, int maxaddr)
{
    char *s = FindDictPar(parp);

    sprintf(pline[parp].str0, "\nvoid %s()\n{\n  ", s);
    ParsePartFunction(parp, pline, minaddr, maxaddr);

}

void WriteVariables(int minaddr, int maxaddr, FILE *fp, int startidx, int endidx)
{
    int i = 0;
    int j = 0;

    fprintf(fp, "\n// =================================\n");
    fprintf(fp, "// =========== VARIABLES ===========\n");
    fprintf(fp, "// =================================\n");

    for(i=startidx; i<endidx; i++)
    {
        if (dict[i].codep != CODEPOINTER) continue;
        fprintf(fp, "unsigned char %s[%i] = {", dict[i].r, dict[i].size);
        for(j=0; j<dict[i].size-1 ; j++) fprintf(fp, "0x%02x, ", Read8(dict[i].parp+j));
        fprintf(fp, "0x%02x", Read8(dict[i].parp+j));
        fprintf(fp, "};\n");
    }
    fprintf(fp, "\n");
    for(i=startidx; i<endidx; i++)
    {
        if (dict[i].codep != CODECONSTANT) continue;
        fprintf(fp, "const unsigned short int cc_%s = 0x%04x;\n", dict[i].r, Read16(dict[i].parp));
    }
    fprintf(fp, "\n");
    for(i=startidx; i<endidx; i++)
    {
        if (dict[i].codep != CODEDI) continue;
        fprintf(fp, "const unsigned short int %s = 0x%04x; // accessed via di (in WORD OPERATOR)\n", dict[i].r, Read16(Read16(dict[i].parp)+REGDI));
    }
    fprintf(fp, "\n");
    /*
    for(i=startidx; i<endidx; i++)
    {
        if (dict[i].codep != CODELOADDATA) continue;
        fprintf(fp, "const unsigned short int %s = { 0x%04x, 0x%04x, addr: 0x%04x } // struct to load data from directory\n",
            dict[i].r,
            Read16(dict[i].parp+0),
            Read16(dict[i].parp+2),
            Read16(dict[i].parp+4));
    }
    fprintf(fp, "\n");
*/
}

void WriteParsedFunctions(int minaddr, int maxaddr, FILE *fp)
{
    int i = 0;

    int dbmode = 0; // bool
    char str[0x10000];
    int nstr = 0;
    for(i=minaddr; i<=maxaddr; i++)
    {
        if (pline[i].label)
        {
            if (dbmode) {fprintf(fp, "'%s'\n  ", str); nstr = 0;}
            fprintf(fp, "\n  label%i:\n  ", pline[i].label);
            dbmode = 0;
        }
        if (pline[i].strword[0] != 0)
        {
            if (dbmode) {fprintf(fp, "'%s'\n  ", str); nstr = 0;}
            fprintf(fp, "%s", pline[i].strword);
            dbmode = 0;
        }
        if (pline[i].str0[0] != 0)
        {
            if (dbmode) {fprintf(fp, "'%s'\n  ", str); nstr = 0;}
            fprintf(fp, "%s", pline[i].str0);
            dbmode = 0;
        }
        if (pline[i].str[0] != 0)
        {
            if (dbmode) {fprintf(fp, "'%s'\n  ", str); nstr = 0;}
            fprintf(fp, "%s", pline[i].str);
            dbmode = 0;
        }
        if (!pline[i].done)
        {
            //fprintf(fp, "// 0x%04x: db 0x%02x\n", i, Read8(i));
            if (!dbmode) fprintf(fp, "// 0x%04x: db ", i);
            dbmode = 1;
            fprintf(fp, "0x%02x ", Read8(i));
            str[nstr+0] = 0x20;
            str[nstr+1] = 0x0;
            nstr++;
            if ((Read8(i) >= 0x20) && (Read8(i) < 128))
            {
                str[nstr-1] = Read8(i);
                //fprintf(fp, "'%c' ", Read8(i));
            }
        }
    }
    if (dbmode) fprintf(fp, "'%s'\n  ", str);
}