#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"global.h"
#include"dictionary.h"
#include"extract.h"
#include"cpu.h"


struct DICTENTRY dict[5000];
int ndict = 0;

char* GetWordName(DICTENTRY *dict)
{
	int i;
	for(i = 0; renamewords[i].newword != NULL; i++)
	{
		if ((dict->ovidx == (signed char)renamewords[i].ovidx) && (dict->parp == renamewords[i].parp))
			return renamewords[i].newword;
	}

	return dict->r;
}

char* FindDictPar(unsigned short addr, int ovidx)
{
    int i = 0;
    for(i=0; i<ndict; i++)
    {
        if ((dict[i].ovidx != ovidx) && (dict[i].ovidx != -1)) continue;
        if (dict[i].parp == addr) return GetWordName(&dict[i]);
    }

    snprintf(dict[ndict].r, STRINGLEN, "UNK_0x%04x", addr);
    dict[ndict].codep = Read16(addr-2);
    dict[ndict].parp = addr;
    dict[ndict].ofs = addr-2;
    dict[ndict].ovidx = ovidx;
    ndict++;
    return GetWordName(&dict[ndict-1]);
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
/*
int FindDictEntry(const char *s)
{
    int i;
    for(i=0; i<ndict; i++)
    {
        if (strcmp(dict[i].r, s) == 0) return i;
    }
    return -1;
}
*/

char* Forth2CString(char *in)
{
    static char out[1024];
    memset(out, 0, 1024);
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
                out[j++] = 'o';
                out[j++] = 't';
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
                out[j++] = 'a';
                out[j++] = 's';
                out[j++] = 'h';
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
                out[j++] = 'd';
                out[j++] = 'a';
                out[j++] = 's';
                out[j++] = 'h';
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
                out[j++] = 'a';
                out[j++] = 's';
                out[j++] = 'k';
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
                out[j++] = 'l';
                out[j++] = 'u';
                out[j++] = 's';
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
                out[j++] = 't';
                out[j++] = '_';
                break;

            case '&':
                out[j++] = '_';
                out[j++] = 'a';
                out[j++] = 'n';
                out[j++] = 'd';
                out[j++] = '_';
                break;

            case '*':
                out[j++] = '_';
                out[j++] = 's';
                out[j++] = 't';
                out[j++] = 'a';
                out[j++] = 'r';
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
                fprintf(stderr, "sign '%c' (0x%02x) not found\n", in[i], in[i]);
                exit(1);
                break;
        }
    }
    return out;
}

// --------------------------------------------

int AddDirectory(int ofs, unsigned char *mem, int decrypt, int ovidx)
{
    unsigned short linkp = Read16(ofs);
    unsigned char bitfield = Read8(ofs+2);
    //unsigned short codep = Read16(ofs+3);
    unsigned int length = bitfield & 0x3F;
    int i = 0;
    memset(&dict[ndict], 0, sizeof(DICTENTRY));
    dict[ndict].ofs = ofs;
    dict[ndict].linkp = linkp;
    dict[ndict].bits = bitfield;
    dict[ndict].ovidx = ovidx;
    dict[ndict].size = -1;

    int n = 0;
    do
    {
        i++;
        if (decrypt)
        {
            if (length == 1)
            {
                dict[ndict].r[n] = Read8(ofs+2+i) & 0x7F;
            } else
            {
                dict[ndict].r[n] = (Read8(ofs+2+i) ^ 0x7F) & 0x7F;
                mem[ofs+2+i] = ((Read8(ofs+2+i)^0x7F)&0x7F) | (Read8(ofs+2+i)&0x80); // restore upper bit
            }
        } else
        {
            dict[ndict].r[n] = (Read8(ofs+2+i)) & 0x7F;
            mem[ofs+2+i] = ((Read8(ofs+2+i))&0x7F) | (Read8(ofs+2+i)&0x80); // restore upper bit
        }

        n++;
    } while ((Read8(ofs+2+i)&128) == 0);
    int varp = ofs + i + 3;
    dict[ndict].codep = (mem[varp+1]<<8) | mem[varp+0];
    dict[ndict].parp = ofs+5+n;
    ndict++;
    return linkp - 2;
}

void ParseDict(unsigned char *mem, int linkp, int decrypt, int ovidx)
{
    int i = 0;
    int j = 0;

    for(i=0; i<5000; i++)
    {
        for(j=0; j<ndict; j++)
        {
            if (dict[j].ofs == linkp)
            if (dict[j].ovidx == ovidx)
            {
                fprintf(stderr, "duplicate\n");
                exit(1);
                return;
            }
        }
        linkp = AddDirectory(linkp, mem, decrypt, ovidx);
        if (linkp <= 0) return;
    }
}

void WriteDict(unsigned char *mem, FILE *fp, int ovidx)
{
    int i;
    unsigned int bitfield = 0;
    fprintf(fp, "\n// =================================\n");
    fprintf(fp, "// =========== DICTIONARY ==========\n");
    fprintf(fp, "// =================================\n");

    for(i=0; i<ndict; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
        fprintf(fp, "// %4i: %15s", i, GetWordName(&dict[i]));
        fprintf(fp, "  codep:0x%04x parp:0x%04x size:0x%04x C-string:'%s'",
        dict[i].codep, dict[i].parp, dict[i].size, Forth2CString(GetWordName(&dict[i])));
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
        if (dict[j].ovidx > dict[j+1].ovidx)
        {
            memcpy((void*)&temp,      (void*)&dict[j], sizeof(DICTENTRY));
            memcpy((void*)&dict[j],   (void*)&dict[j+1], sizeof(DICTENTRY));
            memcpy((void*)&dict[j+1], (void*)&temp, sizeof(DICTENTRY));
            continue;
        }

        if (dict[j].ovidx == dict[j+1].ovidx)
        if (dict[j].ofs > dict[j+1].ofs)
        {
            memcpy((void*)&temp,      (void*)&dict[j], sizeof(DICTENTRY));
            memcpy((void*)&dict[j],   (void*)&dict[j+1], sizeof(DICTENTRY));
            memcpy((void*)&dict[j+1], (void*)&temp, sizeof(DICTENTRY));
        }
    }

    for(i=0; i<ndict-1; i++)
    {
        if (dict[i].ovidx == dict[i+1].ovidx)
        {
            dict[i].size = dict[i+1].ofs - dict[i].parp;
        } else
        {
            dict[i].size = 0;
        }
    }
    dict[ndict-1].size = 0;
}

// --------------------------------------------

LineDesc pline[0x10000];

char* PutEasyMacro(char *s)
{
	static char ret[STRINGLEN];
	ret[0] = 0;

    if (strcmp(s, "0") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(0); // 0\n");
        return ret;
    }
    if (strcmp(s, "1") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(1); // 1\n");
        return ret;
    }
    if (strcmp(s, "2") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(2); // 2\n");
        return ret;
    }
    if (strcmp(s, "0=") == 0)
    {
        snprintf(ret, STRINGLEN, "  if (Pop() == 0) Push(1); else Push(0); // 0=\n");
        return ret;
    }
    if (strcmp(s, "OR") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop() | Pop()); // OR\n");
        return ret;
    }
    if (strcmp(s, "AND") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop() & Pop()); // AND\n");
        return ret;
    }
    if (strcmp(s, "XOR") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop() ^ Pop()); // XOR\n");
        return ret;
    }
    if (strcmp(s, "+") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop() + Pop()); // +\n");
        return ret;
    }
    if (strcmp(s, "*") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop() * Pop()); // *\n");
        return ret;
    }
    if (strcmp(s, "NEGATE") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(-Pop()); // NEGATE\n");
        return ret;
    }
    if (strcmp(s, "NOT") == 0)
    {
        snprintf(ret, STRINGLEN, "  if (Pop() == 0) Push(1); else Push(0); // NOT\n");
        return ret;
    }
    if (strcmp(s, "DROP") == 0)
    {
        snprintf(ret, STRINGLEN, "  Pop(); // DROP\n");
        return ret;
    }
    if (strcmp(s, "2DROP") == 0)
    {
        snprintf(ret, STRINGLEN, "  Pop(); Pop();// 2DROP\n");
        return ret;
    }
    if (strcmp(s, "2*") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()*2); // 2*\n");
        return ret;
    }
    if (strcmp(s, "3+") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()+3); // 3+\n");
        return ret;
    }
    if (strcmp(s, "1+") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()+1); // 1+\n");
        return ret;
    }
    if (strcmp(s, "2+") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()+2); // 2+\n");
        return ret;
    }
    if (strcmp(s, "1-") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()-1); // 1-\n");
        return ret;
    }
    if (strcmp(s, "2-") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()-2); // 2-\n");
        return ret;
    }
    if (strcmp(s, "16/") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()>>4); // 16/\n");
        return ret;
    }
    if (strcmp(s, "2/") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()>>1); // 2/\n");
        return ret;
    }
    if (strcmp(s, "16*") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()<<4); // 16*\n");
        return ret;
    }
    if (strcmp(s, "@") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Read16(Pop())); // @\n");
        return ret;
    }
    if (strcmp(s, "C@") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Read8(Pop())&0xFF); // C@\n");
        return ret;
    }
    if (strcmp(s, "DUP") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Read16(sp)); // DUP\n");
        return ret;
    }
    if (strcmp(s, "?DUP") == 0)
    {
        snprintf(ret, STRINGLEN, "  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP\n");
        return ret;
    }

    snprintf(ret, STRINGLEN, "  %s(); // %s\n", Forth2CString(s), s);
    return ret;
}

unsigned short int FindFunctionAddress(unsigned short int addr)
{
    int i;
    if (addr == 0x1eb3) return 0; // something strange in CAPTAIN.c in the function >DESCEND
    for(i=addr; i >= 0; i--)
    {
        if (pline[i].isfunction) return i;
    }
    fprintf(stderr, "Error: Cannot find function header at offset 0x%04x\n", addr);
    exit(1);
    return 0;
}

unsigned short int FindLoopID(unsigned short int addr)
{
    int i;
    for(i=addr; i >= 0; i--)
    {
        if (pline[i].isfunction) return pline[i].nloop;
        if (pline[i].loopid != 0) return pline[i].loopid;
    }
    fprintf(stderr, "Error: Cannot find loop header at offset 0x%04x\n", addr);
    exit(1);
    return 0;
}


void ParsePartFunction(int ofs, LineDesc *l, int minaddr, int maxaddr, int currentovidx)
{
    // for starflt1
    /*
    if (ofs == 0x84fa) // MSET-CO
    {
        currentovidx = 42; // GAME-OV
    }
    */

    while(1)
    {
        if (ofs < minaddr) return;
        if (ofs > maxaddr) return;
        if (pline[ofs].done) return;

        int par = Read16(ofs);
        int codep = Read16(par);
        par += 2;
        pline[ofs+0].done = 1;
        pline[ofs+1].done = 1;

        char *s = FindDictPar(par, currentovidx);

        if (ofs < 0x100+FILESTAR0SIZE)
        if (currentovidx != -1)
        if (par >= maxaddr)
        {
            overlays[currentovidx].entrypoints[overlays[currentovidx].nentrypoints] = par-2;
            overlays[currentovidx].nentrypoints++;

            snprintf(pline[ofs].str, STRINGLEN, "  %s(); // Overlay %s\n", s, overlays[currentovidx].name);
            ofs += 2;
            continue;
        }

        //char *s = FindDictPar(par, currentovidx);

        if (strcmp(s, "(;CODE)") == 0) // maybe inlined code
        {
            snprintf(pline[ofs].str, STRINGLEN, "  %s();\n// inlined assembler code\n", s);
            ofs += 2;
            return;
        } else
        if (strcmp(s, "COMPILE") == 0) // maybe inlined code
        {
            snprintf(pline[ofs].str, STRINGLEN, "  %s(0x%04x); // compile?\n", s, Read16(ofs+2));
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            ofs += 4;
            //return;
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
                snprintf(pline[ofstemp].str, STRINGLEN, "\n  (ABORT\") // string %i\n", length);
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
                snprintf(pline[ofstemp].str, STRINGLEN, "  ABORT(\"%s\", %i);// (ABORT\")\n", str, length);
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
                snprintf(pline[ofstemp].str, STRINGLEN, "\n  (.\\\") string %i\n", length);
            } else
*/
            if (length >= 128)
            {
                ofs += 2;
                snprintf(pline[ofstemp].str, STRINGLEN, "  (.\") // string %i\n", length);
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
                snprintf(pline[ofstemp].str, STRINGLEN, "  PRINT(\"%s\", %i); // (.\")\n", str, length);
            }

        } else
        if (par == PARPRINT) // a call, but gets a string as input? , TODO for STARFLIGHT2?
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
            snprintf(pline[ofstemp].str, STRINGLEN, "\n  UNK_0x%04x(\"%s\");\n", par, str);
            /*
            snprintf(pline[ofs].str, STRINGLEN, "\n  dw3f39() string %i\n", length);
            ofs += length;
            */
        } else
        if (codep == CODECALL) // call
        {
            if ((par >= minaddr) && (par <= maxaddr))
            {
                pline[par].isfunction = 1;
                snprintf(pline[par].strfunc, STRINGLEN, "\nvoid %s() // %s\n{\n", Forth2CString(s), s);
                ParsePartFunction(ofs+2, l, minaddr, maxaddr, currentovidx);
                ParsePartFunction(par, l, minaddr, maxaddr, currentovidx);
            }
            snprintf(pline[ofs].str, STRINGLEN, "  %s(); // %s\n", Forth2CString(s), s);
            ofs += 2;
        } else
        if (codep == CODEPOINTER) // pointer to variable or table
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Push(pp_%s); // %s\n", Forth2CString(s), s); // TODO: check
            ofs += 2;
        } else
        if (codep == CODECONSTANT)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Push(cc_%s); // %s\n", Forth2CString(s), s); // TODO: check
            ofs += 2;
        } else
        if (codep == CODEDI) // load from fixed table?
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Push(tt_%s); // %s\n", Forth2CString(s), s); // TODO: check
            ofs += 2;
        } else
        if (codep == CODELIT) // constant number
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            snprintf(pline[ofs].str, STRINGLEN, "  Push(0x%04x);\n", par);
            ofs += 4;
        } else
        if (codep == CODE2LIT) // constant number
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            pline[ofs+4].done = 1;
            pline[ofs+5].done = 1;
            snprintf(pline[ofs].str, STRINGLEN, "  Push(0x%04x); Pust(0x%04x);\n", Read16(ofs + 2), Read16(ofs + 4));
            ofs += 6;
        } else
        if (codep == CODELOADOVERLAY) // This code loads the overlay
        {
            //int codep = Read16(par-2);
            unsigned short startaddress = Read16(par);
            int i=0;
            //fprintf(stderr, "LoadOverlay(\"%s\");\n", s);
            for(i=0; overlays[i].name != NULL; i++)
            {
                if (overlays[i].startaddress != startaddress) continue;
                //fprintf(stderr, "0x%04x\n", i);
                currentovidx = i;
            }
            if (currentovidx == -1)
            {
                fprintf(stderr, "Error: Cannot find overlay\n");
                exit(1);
            }
            snprintf(pline[ofs].str, STRINGLEN, "  LoadOverlay(\"%s\");\n", s);
            ofs += 2;
        } else
        if (codep == CODELOADDATA)
        {
            int addr = Read16(par+4);
            snprintf(pline[ofs].str, STRINGLEN, "  LoadData(\"%s\"); // from '%s'\n", s, FindDirEntry(addr));
            ofs += 2;
        } else
        if (codep == CODEFUNC1)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Func1(\"%s\");\n", s);
            ofs += 2;
        } else
        if (codep == CODESETCOLOR)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  SetColor(\"%s\");\n", s);
            ofs += 2;
        } else
        if (codep == CODEFUNC3)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Func3(\"%s\");\n", s);
            ofs += 2;
        } else
        if (codep == CODEPUSH2WORDS)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Push2Words(\"%s\");\n", s);
            ofs += 2;
        } else
        if (codep == CODEFUNC5)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Func5(\"%s\");\n", s);
            ofs += 2;
        } else
        if (codep == CODEFUNC6)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Func6(\"%s\");\n", s);
            ofs += 2;
        } else
        if (codep == CODESETVOCABULARY)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  SetVocabulary(\"%s\");\n", s);
            ofs += 2;
        } else
        if (codep == CODEFUNC8)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Func8(\"%s\");\n", s);
            ofs += 2;
        } else
        if (codep == CODEFUNC9)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Func9(\"%s\");\n", s);
            ofs += 2;
        } else
        if (codep == CODECASE)
        {
            //snprintf(pline[ofs].str, STRINGLEN, "  Case(%s);\n", s);
			pline[ofs].str = (char*)malloc(4096);
			pline[ofs].str[0] = 0;
			int n = Read16(par);
			int i;
			sprintf(pline[ofs].str, "  switch(Pop()) // %s\n  {\n", s);
			for(i=0; i<n; i++) {
				char temp[256];
				char *s = FindDictPar(Read16(par + i*4 + 2), currentovidx);
				sprintf(temp, "  case %i:\n  %s    break;\n",
				Read16(par + i*4 + 4), PutEasyMacro(s));
				strcat(pline[ofs].str, temp);
			}
			strcat(pline[ofs].str, "  }\n");
            ofs += 2;
        } else
        if (codep == CODEFUNC11)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Func11(\"%s\");\n", s);
            ofs += 2;
        } else
        if (codep == CODEFUNC12)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Func12(\"%s\");\n", s);
            ofs += 2;
        } else
        if (codep == CODEFUNC13)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Func13(\"%s\");\n", s);
            ofs += 2;
        } else
        if (codep == CODEFUNC14)
        {
            par = Read16(Read16(par)+REGDI);
            //fprintf(stderr, "0x%04x\n", par);
            snprintf(pline[ofs].str, STRINGLEN, "  Func14(\"%s\"); // call of word 0x%04x\n", s, par);
            ofs += 2;
        } else
        if (strcmp(s, "EXIT") == 0)
        {
            if (pline[ofs+2].labelid)
            {
                snprintf(pline[ofs].str, STRINGLEN, "  return;\n\n");
            } else
            {
                snprintf(pline[ofs].str, STRINGLEN, "}\n\n");
            }
            ofs += 2;

            return;
        } else
        if (strcmp(s, "BRANCH") == 0)
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            int addr = (ofs + 2 + par)&0xFFFF;
            if (Read16(Read16(addr)) == CODEEXIT)
            {
                snprintf(pline[ofs].str, STRINGLEN, "  return;\n");
            } else
            {
                if (pline[addr].labelid == 0)
                {
                    //fprintf(stderr, "jump at 0x%04x to 0x%04x\n", ofs, addr);
                    int funcaddr = FindFunctionAddress(ofs);
                    pline[addr].labelid = ++pline[funcaddr].nlabel;
                }

                snprintf(pline[ofs].str, STRINGLEN, "  goto label%i;\n", pline[addr].labelid);
            }
            ParsePartFunction(ofs+4, l, minaddr, maxaddr, currentovidx);
            ParsePartFunction(addr, l, minaddr, maxaddr, currentovidx);
            ofs += 4;
        } else
        if (strcmp(s, "0BRANCH") == 0)
        {
            par = Read16(ofs+2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            int addr = (ofs + 2 + par)&0xFFFF;
            if (Read16(Read16(addr)) == CODEEXIT)
            {
                snprintf(pline[ofs].str, STRINGLEN, "  if (Pop() == 0) return;\n");
            } else
            {
                if (pline[addr].labelid == 0)
                {
                    int funcaddr = FindFunctionAddress(ofs);
                    pline[addr].labelid = ++pline[funcaddr].nlabel;
                }
                snprintf(pline[ofs].str, STRINGLEN, "  if (Pop() == 0) goto label%i;\n", pline[addr].labelid);
            }
            ParsePartFunction(ofs+4, l, minaddr, maxaddr, currentovidx);
            ParsePartFunction(addr, l, minaddr, maxaddr, currentovidx);
            ofs += 4;
        } else
        if (strcmp(s, "(DO)") == 0)
        {
            int funcaddr = FindFunctionAddress(ofs);
            pline[funcaddr].nloop++;
            pline[ofs].loopid = pline[funcaddr].nloop;
            snprintf(pline[ofs].str, STRINGLEN, "\n  signed short int %c = Pop();\n  signed short int %cmax = Pop();\n  do // (DO)\n  {\n",
                'h'+pline[funcaddr].nloop,
                'h'+pline[funcaddr].nloop);
            ofs += 2;
        } else
        if (strcmp(s, "(/LOOP)") == 0)
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            int addr = (ofs + par)&0xFFFF;
            int loopid = pline[addr].loopid;
            if (loopid == 0)
            {
                fprintf(stderr, "no do found from 0x%04x to 0x%04x\n", ofs, addr);
            }
            snprintf(pline[ofs].str, STRINGLEN,
                "  %c += Pop();\n"
                "  } while(%c<%cmax); // (/LOOP) 0x%04x\n\n",
                'h' + loopid,
                'h' + loopid,
                'h' + loopid,
                par);
            ofs += 4;
        } else
        if (strcmp(s, "(LOOP)") == 0)
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            int addr = (ofs + par)&0xFFFF;
            int loopid = pline[addr].loopid;
            if (loopid == 0)
            {
                fprintf(stderr, "no do found from 0x%04x to 0x%04x\n", ofs, addr);
            }

            snprintf(pline[ofs].str, STRINGLEN, "  %c++;\n  } while(%c<%cmax); // (LOOP) 0x%04x\n\n",
                'h' + loopid,
                'h' + loopid,
                'h' + loopid,
                par);
            ofs += 4;
        } else
        if (strcmp(s, "(+LOOP)") == 0)
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            int addr = (ofs + par)&0xFFFF;
            int loopid = pline[addr].loopid;
            if (loopid == 0)
            {
                fprintf(stderr, "no do found from 0x%04x to 0x%04x\n", ofs, addr);
            }
            snprintf(pline[ofs].str, STRINGLEN,
                "  int step = Pop();\n  %c += step;\n"
                "  } while(((step>=0) && (%c<%cmax)) || ((step<0) && (%c>%cmax))); // (+LOOP) 0x%04x\n\n",
                'h' + loopid,
                'h' + loopid,
                'h' + loopid,
                'h' + loopid,
                'h' + loopid,
                par);
            ofs += 4;
        } else
        if (strcmp(s, "I") == 0)
        {
            int id = FindLoopID(ofs);
            snprintf(pline[ofs].str, STRINGLEN, "  Push(%c); // I\n", 'h'+id);
            ofs += 2;
        } else
        if (strcmp(s, "I'") == 0)
        {
            int id = FindLoopID(ofs);
            snprintf(pline[ofs].str, STRINGLEN, "  Push(%c); // I'\n", 'h'+id);
            ofs += 2;
        } else
        if (strcmp(s, "J") == 0)
        {
            int id = FindLoopID(ofs);
            snprintf(pline[ofs].str, STRINGLEN, "  Push(%c); // J\n", 'h'+id-1);
            ofs += 2;
        } else
        {
            snprintf(pline[ofs].str, STRINGLEN, "%s", PutEasyMacro(s));
            ofs += 2;
        }
    }
}

void InitParseFunction2()
{
	int i;
    memset(pline, 0, 0x10000*sizeof(LineDesc));
	for(i=0; i<0x10000; i++)
	{
		pline[i].str = malloc(STRINGLEN);
		pline[i].str[0] = 0;
	}
}

void ParseFunction2(unsigned short parp, int minaddr, int maxaddr, int ovidx)
{
    char *s = FindDictPar(parp, ovidx);
    pline[parp].isfunction = 1;
    snprintf(pline[parp].strfunc, STRINGLEN, "\nvoid %s() // %s\n{\n", Forth2CString(s), s);
    ParsePartFunction(parp, pline, minaddr, maxaddr, ovidx);
}

void WriteVariables(int minaddr, int maxaddr, FILE *fp, int ovidx)
{
    int i = 0;
    int j = 0;

    fprintf(fp, "\n// =================================\n");
    fprintf(fp, "// =========== VARIABLES ===========\n");
    fprintf(fp, "// =================================\n");

    for(i=0; i<ndict; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
        if (dict[i].codep != CODEPOINTER) continue;
        fprintf(fp, "unsigned char %s[%i] = {", Forth2CString(GetWordName(&dict[i])), dict[i].size);
        for(j=0; j<dict[i].size-1 ; j++) fprintf(fp, "0x%02x, ", Read8(dict[i].parp+j));
        fprintf(fp, "0x%02x", Read8(dict[i].parp+j));
        fprintf(fp, "}; // %s\n", GetWordName(&dict[i]));
    }
    fprintf(fp, "\n");
    for(i=0; i<ndict; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
        if (dict[i].codep != CODECONSTANT) continue;
        fprintf(fp, "const unsigned short int cc_%s = 0x%04x; // %s\n", Forth2CString(GetWordName(&dict[i])), Read16(dict[i].parp), GetWordName(&dict[i]));
    }
    fprintf(fp, "\n");
    for(i=0; i<ndict; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
        if (dict[i].codep != CODEDI) continue;
        fprintf(fp, "const unsigned short int %s = 0x%04x; // %s // accessed via di (in WORD OPERATOR)\n", Forth2CString(GetWordName(&dict[i])), Read16(Read16(dict[i].parp)+REGDI), GetWordName(&dict[i]));
    }
    fprintf(fp, "\n");
    /*
    for(i=startidx; i<endidx; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
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
        if (pline[i].isentry)
        {
            fprintf(fp, "// entry\n");
        }

        if (pline[i].strword[0] != 0)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            fprintf(fp, "%s", pline[i].strword);
            dbmode = 0;
        }
        if (pline[i].strfunc[0] != 0)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            fprintf(fp, "%s", pline[i].strfunc);
            dbmode = 0;
        }
        if (pline[i].labelid)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            fprintf(fp, "\n  label%i:\n", pline[i].labelid);
            dbmode = 0;
        }
        if (pline[i].strasm[0] != 0)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            fprintf(fp, "%s", pline[i].strasm);
            dbmode = 0;
        }
        if (pline[i].str[0] != 0)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            fprintf(fp, "%s", pline[i].str);
            dbmode = 0;
        }
        if (!pline[i].done)
        {
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

