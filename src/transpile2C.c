#include<stdlib.h>
#include<string.h>
#include"transpile2C.h"
#include"global.h"
#include"utils.h"
#include"parser.h"
#include"postfix2infix.h"
#include"../emul/cpu.h"
#include"disasm/debugger.h"

void SetExtern(int ovidx, int minaddr, int maxaddr);
void WriteExtern(FILE *fp, int ovidx);
void WriteVariables(FILE *fp, int ovidx, int minaddr, int maxaddr);
void WriteParsedFile(FILE *fp, int ovidx, int minaddr, int maxaddr);
void WriteHeaderFile(FILE *fph, int ovidx);

void Transpile(const char *_filename, OVLHeader *head, int ovidx, int minaddr, int maxaddr, int outputflag)
{
    int i;
    char filename[512];
    FILE *fpc = NULL;
    FILE *fph = NULL;

    if (outputflag & WRITE_HEADER)
    {
        sprintf(filename, "%s.h", _filename);
        fph = fopen(filename, "w");
        if (fph == NULL)
        {
            fprintf(stderr, "Error: Cannot create file '%s'\n", filename);
            exit(1);
        }
        WriteHeaderFile(fph, ovidx);
        fclose(fph);
    }

    sprintf(filename, "%s.c", _filename);
    fpc = fopen(filename, "w");
    if (fpc == NULL)
    {
        fprintf(stderr, "Error: Cannot create file '%s'\n", filename);
        exit(1);
    }

    if ((ovidx != -1) && (head != NULL))
    {
        fprintf(fpc, "// ====== OVERLAY '%s' ======\n", overlays[ovidx].name);
        fprintf(fpc, "// store offset = 0x%04x\n", head->storeofs);
        fprintf(fpc, "// overlay size   = 0x%04x\n", head->ovlsize);
    }
    fprintf(fpc, "\n#include\"../../emul/cpu.h\"\n");
    fprintf(fpc, "\n#include\"../data.h\"\n");
    fprintf(fpc, "#include\"../../emul/starflt1.h\"\n\n");
    if (ovidx == -1)
    {
        i=0;
        while(overlays[i].name != NULL)
        {
            fprintf(fpc, "#include\"../overlays/%s.h\"\n", overlays[i].name);
            i++;
        }
    }
    if (outputflag & WRITE_DICT) WriteVocabulary(mem, fpc, ovidx);
    if (outputflag & WRITE_EXTERN)
    {
        SetExtern(ovidx, minaddr, maxaddr);
        WriteExtern(fpc, ovidx);
    }
    if (outputflag & WRITE_VARIABLES) WriteVariables(fpc, ovidx, minaddr, maxaddr);
    WriteParsedFile(fpc, ovidx, minaddr, maxaddr);

    if (fpc != NULL) fclose(fpc);
}

void WriteHeaderFile(FILE *fph, int ovidx)
{
    int i = 0;
    fprintf(fph, "// ====== OVERLAY '%s' ======\n\n", overlays[ovidx].name);
    fprintf(fph, "#ifndef %s_H\n", Forth2CString(overlays[ovidx].name));
    fprintf(fph, "#define %s_H\n\n", Forth2CString(overlays[ovidx].name));

    // write header file
    for(i=0; i<nwords; i++)
    {
        if (vocabulary[i].ovidx != ovidx) continue;
        if (!vocabulary[i].isentry) continue;
        char *s = GetWordName(&vocabulary[i]);
        fprintf(fph, "void %s(); // %s\n", Forth2CString(s), s);
    }

    fprintf(fph, "\n#endif\n");
}

const char* ignorewordlist[] =
{
    "0","1","2","3","4","5","6","7","8","9",
    "-1","-2","0=","OR","AND","XOR",
    "=","+","*","NEGATE","NOT","DROP",
    "2DROP","2*","3+","1+","2+","1-",
    "2-","16/","2/","16*","@","C@","DUP",
    "?DUP","(;CODE)",">R","R>","R@","I","I'",
    "J","MODULE","(.\")","(ABORT\")","LEAVE",
    "DOTASKS","(DO)", "(LOOP)","0BRANCH",
    "BRANCH","EXIT","(+LOOP)","(/LOOP)",
    NULL
};

int IgnoreWord(char *s)
{
    int j = 0;
    while(ignorewordlist[j] != NULL)
    {
        if (strcmp(ignorewordlist[j], s) == 0) return TRUE;
        j++;
    }
    return FALSE;
}

void SetExtern(int ovidx, int minaddr, int maxaddr)
{
    int addr;
    int i;
    WORD *efunc = NULL;
    for(i=0; i<nwords; i++) vocabulary[i].isextern = FALSE;

    for(addr=minaddr; addr<=maxaddr; addr++)
    {
        if (!pline[addr].word) continue;
        efunc = GetWordByAddr(pline[addr].word, ovidx);
        if (efunc == NULL) continue;
        if (efunc->codep == CODELIT) continue;
        if (efunc->codep == CODE2LIT) continue;
        if (efunc->parp == PARPRINT) continue;
        if ((efunc->codep >= minaddr) && (efunc->codep <= maxaddr)) efunc->isextern = TRUE;
        if ((efunc->parp >= minaddr) && (efunc->parp <= maxaddr)) continue;
        efunc->isextern = TRUE;
    }
}

void WriteExtern(FILE *fp, int ovidx)
{
    int i = 0;
    int j = 0;

    fprintf(fp, "\n// =================================\n");
    fprintf(fp, "// ============= EXTERN ============\n");
    fprintf(fp, "// =================================\n");

    for(i=0; i<nwords; i++)
    {
        if (!vocabulary[i].isextern) continue;
        if
        (
        (vocabulary[i].codep == CODETABLE) ||
        (vocabulary[i].codep == CODESIGFLD) ||
        (vocabulary[i].codep == CODEPUSH2WORDS) ||
        (vocabulary[i].codep == CODEFUNC5) ||
        (vocabulary[i].codep == CODEFUNC6) ||
        (vocabulary[i].codep == CODESETVOCABULARY) ||
        (vocabulary[i].codep == IFIELDOFFSET) ||
        (vocabulary[i].codep == CODEFUNC9) ||
        (vocabulary[i].codep == CODEFUNC12) ||
        (vocabulary[i].codep == CODEEXEC)
        ) vocabulary[i].isextern = FALSE;
    }

    for(i=0; i<nwords; i++)
    {
        if (vocabulary[i].codep != CODECONSTANT) continue;
        if (!vocabulary[i].isextern) continue;
        if (!IgnoreWord(vocabulary[i].r)) fprintf(fp, "extern const unsigned short int cc_%s; // %s\n", Forth2CString(GetWordName(&vocabulary[i])), GetWordName(&vocabulary[i]));
        vocabulary[i].isextern = FALSE;
    }
    for(i=0; i<nwords; i++)
    {
        if (vocabulary[i].codep != CODEPOINTER) continue;
        if (!vocabulary[i].isextern) continue;
        fprintf(fp, "extern const unsigned short int pp_%s; // %s\n", Forth2CString(GetWordName(&vocabulary[i])), GetWordName(&vocabulary[i]));
        vocabulary[i].isextern = FALSE;
    }
    for(i=0; i<nwords; i++)
    {
        if (vocabulary[i].codep != CODEDI) continue;
        if (!vocabulary[i].isextern) continue;
        fprintf(fp, "extern const unsigned short int user_%s; // %s\n", Forth2CString(GetWordName(&vocabulary[i])), GetWordName(&vocabulary[i]));
        vocabulary[i].isextern = FALSE;
    }
    for(i=0; i<nwords; i++)
    {
        if (vocabulary[i].codep != CODELOADDATA) continue;
        if (!vocabulary[i].isextern) continue;
        fprintf(fp, "extern LoadDataType %s; // %s\n", Forth2CString(GetWordName(&vocabulary[i])), GetWordName(&vocabulary[i]));
        vocabulary[i].isextern = FALSE;
    }
    for(i=0; i<nwords; i++)
    {
        if (vocabulary[i].codep != CODEGETCOLOR) continue;
        if (!vocabulary[i].isextern) continue;
        fprintf(fp, "extern Color %s; // %s\n", Forth2CString(GetWordName(&vocabulary[i])), GetWordName(&vocabulary[i]));
        vocabulary[i].isextern = FALSE;
    }
    for(i=0; i<nwords; i++)
    {
        if (vocabulary[i].codep != CODEIFIELD) continue;
        if (!vocabulary[i].isextern) continue;
        fprintf(fp, "extern IFieldType %s; // %s\n", Forth2CString(GetWordName(&vocabulary[i])), GetWordName(&vocabulary[i]));
        vocabulary[i].isextern = FALSE;
    }
    for(i=0; i<nwords; i++)
    {
        if (vocabulary[i].codep != CODE2DARRAY) continue;
        if (!vocabulary[i].isextern) continue;
        fprintf(fp, "extern ArrayType %s; // %s\n", Forth2CString(GetWordName(&vocabulary[i])), GetWordName(&vocabulary[i]));
        vocabulary[i].isextern = FALSE;
    }
    for(i=0; i<nwords; i++)
    {
        if (vocabulary[i].codep != CODECALL) continue;
        if (!vocabulary[i].isextern) continue;
        char *s = GetWordName(&vocabulary[i]);
        if (!IgnoreWord(s)) fprintf(fp, "void %s(); // %s\n", Forth2CString(s), s);
        vocabulary[i].isextern = FALSE;
    }
    for(i=0; i<nwords; i++)
    {
        if (!vocabulary[i].isextern) continue;
        char *s = GetWordName(&vocabulary[i]);
        if (!IgnoreWord(s)) fprintf(fp, "void %s(); // %s\n", Forth2CString(s), s);
        vocabulary[i].isextern = FALSE;
    }
    fprintf(fp, "\n");
}

void WriteVariables(FILE *fp, int ovidx, int minaddr, int maxaddr)
{
    int i = 0;
    int j = 0;

    fprintf(fp, "\n// =================================\n");
    fprintf(fp, "// =========== VARIABLES ===========\n");
    fprintf(fp, "// =================================\n");

    for(i=0; i<nwords; i++)
    {
        if (vocabulary[i].ovidx != ovidx) continue;
        if ((vocabulary[i].parp < minaddr) || (vocabulary[i].parp > maxaddr)) continue;
        if (vocabulary[i].codep != CODEPOINTER) continue;
        fprintf(fp, "const unsigned short int pp_%s = 0x%04x; // %s size: %i\n// {",
            Forth2CString(GetWordName(&vocabulary[i])),
            vocabulary[i].parp,
            GetWordName(&vocabulary[i]),
            vocabulary[i].size
        );
        for(j=0; j<vocabulary[i].size-1 ; j++) fprintf(fp, "0x%02x, ", Read8(vocabulary[i].parp+j));
        fprintf(fp, "0x%02x}\n\n", Read8(vocabulary[i].parp+j));
    }
    fprintf(fp, "\n");
    for(i=0; i<nwords; i++)
    {
        if (vocabulary[i].ovidx != ovidx) continue;
        if ((vocabulary[i].parp < minaddr) || (vocabulary[i].parp > maxaddr)) continue;
        if (vocabulary[i].codep != CODECONSTANT) continue;
        fprintf(fp, "const unsigned short int cc_%s = 0x%04x; // %s\n", Forth2CString(GetWordName(&vocabulary[i])), vocabulary[i].parp, GetWordName(&vocabulary[i]));
    }
    fprintf(fp, "\n");
    for(i=0; i<nwords; i++)
    {
        if (vocabulary[i].ovidx != ovidx) continue;
        if ((vocabulary[i].parp < minaddr) || (vocabulary[i].parp > maxaddr)) continue;
        if (vocabulary[i].codep != CODEDI) continue;
        fprintf(fp, "const unsigned short int user_%s = 0x%04x; // %s\n", Forth2CString(GetWordName(&vocabulary[i])), Read16(vocabulary[i].parp)+REGDI, GetWordName(&vocabulary[i]));
    }
    fprintf(fp, "\n");
}



// ----------------------------------------------------

int IsLabelStillInUse(WORD *e, int labeladdr)
{
    int addr = e->parp;
    while(pline[addr].flow != FUNCEND)
    {
        if ((pline[addr].flow == IFGOTO) || (pline[addr].flow == GOTO))
        {
            if (pline[addr].gotoaddr == labeladdr) return TRUE;
        }
        addr++;
    }
    return FALSE;
}

void AddFlow(controlflowenum *oldflow, controlflowenum newflow)
{
    if ((*oldflow == IFCLOSE) && (newflow == IFCLOSE))
    {
        *oldflow = IFCLOSE2;
        return;
    }
    if ((*oldflow == IFCLOSE2) && (newflow == IFCLOSE))
    {
        *oldflow = IFCLOSE3;
        return;
    }
    if ((*oldflow == IFCLOSE3) && (newflow == IFCLOSE))
    {
        *oldflow = IFCLOSE4;
        return;
    }
    if ((*oldflow == IFCLOSE4) && (newflow == IFCLOSE))
    {
        fprintf(stderr, "Error: Too much closing brackets");
        exit(1);
    }
    if ((*oldflow == DOSIMPLE) && (newflow == DOSIMPLE))
    {
        fprintf(stderr, "Error: flow already full");
        exit(1);
    }
    *oldflow = newflow;
}

int ContainsFlow(int startaddr, int endaddr)
{
    int addr;
    for(addr = startaddr; addr < endaddr; addr++)
    {
        controlflowenum flow = pline[addr].flow;
        if (flow == DO) addr = pline[addr].loopaddr;
        if ((flow == LOOP) || (flow == GOTO) || (flow == IFGOTO) || (pline[addr].labelid > 0)) return TRUE;
    }
    return FALSE;
}

void TreatIfGoto(WORD *e, int ifgotoaddr)
{
    int labeladdr = pline[ifgotoaddr].gotoaddr;
    if (labeladdr < ifgotoaddr) return;
    if (ContainsFlow(ifgotoaddr+1, labeladdr)) return;

    AddFlow(&pline[ifgotoaddr].flow, IFNOT);
    AddFlow(&pline[labeladdr-1].flow, IFCLOSE);
    if (!IsLabelStillInUse(e, labeladdr)) pline[labeladdr].labelid = 0;
}

void TreatLoop(WORD *e, int ifgotoaddr)
{
    int labeladdr = pline[ifgotoaddr].gotoaddr;
    if (labeladdr > ifgotoaddr) return;
    if (pline[labeladdr].flow != NONE) return;
    if (ContainsFlow(labeladdr+1, ifgotoaddr)) return;

    AddFlow(&pline[labeladdr].flow, DOSIMPLE);
    AddFlow(&pline[ifgotoaddr].flow, LOOPTEST);
    if (!IsLabelStillInUse(e, labeladdr)) pline[labeladdr].labelid = 0;
}

void TreatEndlessLoop(WORD *e, int gotoaddr)
{
    int labeladdr = pline[gotoaddr].gotoaddr;
    if (labeladdr > gotoaddr) return;
    if (pline[labeladdr].flow != NONE) return;
    if (ContainsFlow(labeladdr+1, gotoaddr)) return;

    AddFlow(&pline[labeladdr].flow, DOSIMPLE);
    AddFlow(&pline[gotoaddr].flow, LOOPENDLESS);
    if (!IsLabelStillInUse(e, labeladdr)) pline[labeladdr].labelid = 0;
}


void TreatIfElseGoto(WORD *e, int ifgotoaddr)
{
    int labeladdr = pline[ifgotoaddr].gotoaddr;

    if (labeladdr < ifgotoaddr) return;
    int elsegotoaddr = labeladdr-4;
    if (pline[elsegotoaddr].flow != GOTO) return;
    if (ContainsFlow(ifgotoaddr+1, elsegotoaddr)) return;
    int elselabeladdr = pline[elsegotoaddr].gotoaddr;
    if (elselabeladdr == labeladdr) return;
    if (elselabeladdr < elsegotoaddr) return;
    if (pline[labeladdr].flow != NONE) return;
    if (ContainsFlow(labeladdr+1, elselabeladdr)) return;

    AddFlow(&pline[ifgotoaddr].flow, IFNOT);
    AddFlow(&pline[elsegotoaddr].flow, IFELSE);
    AddFlow(&pline[elselabeladdr-1].flow, IFCLOSE);
    if (!IsLabelStillInUse(e, elselabeladdr)) pline[elselabeladdr].labelid = 0;
    if (IsLabelStillInUse(e, labeladdr))
    {
        fprintf(stderr, "Error: label still in use\n");
        exit(1);
    }
    pline[labeladdr].labelid = 0;
}

void RemoveGotos(WORD *e)
{
    int addr = e->parp;
    while(pline[addr].flow != FUNCEND)
    {
        if (pline[addr].flow == IFGOTO)
        {
            TreatIfGoto(e, addr);
            TreatIfElseGoto(e, addr);
            TreatLoop(e, addr);
        }
        if (pline[addr].flow == GOTO)
        {
            TreatEndlessLoop(e, addr);
        }
        addr++;
    }
}

// ----------------------------------------------------

void WriteWordHeader(FILE *fp, WORD *e)
{
    int i = 0;
    if (e == NULL)
    {
        fprintf(stderr, "Error: No WORD found");
        exit(1);
    }
    char *s = GetWordName(e);
    fprintf(fp, "\n// ================================================\n");
    fprintf(fp, "// 0x%04x: WORD '%s' codep=0x%04x parp=0x%04x", e->addr, s, e->codep, e->parp);
    if (e->stackin != 0xFFFF && (e->codep == CODECALL || pline[e->parp].isasm) )
    {
         fprintf(fp, " params=%i returns=%i", e->stackin, e->stackout);
    }
    fprintf(fp, "\n// ================================================\n");
    if (e->isorphan) fprintf(fp, "// orphan\n");
    if (e->isentry)  fprintf(fp, "// entry\n");
}

int WriteParsedFunction(FILE *fp, WORD *efunc, int ovidx)
{
    int j;
    int addr = efunc->parp;
    char *s = GetWordName(efunc);
    fprintf(fp, "\nvoid %s() // %s\n{\n", Forth2CString(s), s);
    RemoveGotos(efunc);
    RemoveGotos(efunc);
    RemoveGotos(efunc);
    RemoveGotos(efunc);
    //RemoveGotos(e);
    if (efunc->nvars > 0)
    {
        fprintf(fp, "  unsigned short int ");
        for(j=0; j<efunc->nvars-1; j++)
        {
            fprintf(fp, "%s, ", efunc->vars[j]);
        }
        fprintf(fp, "%s;\n", efunc->vars[efunc->nvars-1]);
    }

    Postfix2InfixReset(fp, 0); // this should not print anything

    int nspc = 1;
    while(1)
    {
        if (pline[addr].done == FALSE)
        {
            Postfix2InfixReset(fp, nspc);
            fprintf(fp, "// db 0x%02x\n", Read8(addr));
        }
        if (pline[addr].iswordheader)
        {
            Postfix2InfixReset(fp, nspc);
            fprintf(fp, "}\n\n");
            return addr;
        }

        if (pline[addr].labelid)
        {
            Postfix2InfixReset(fp, nspc);
            fprintf(fp, "\n");
            Spc(fp, nspc);
            fprintf(fp, "label%i:\n", pline[addr].labelid);
        }

        switch(pline[addr].flow)
        {
            case DO:
                Postfix2InfixReset(fp, nspc);
                fprintf(fp, "\n");
                Spc(fp, nspc);
                fprintf(fp, "%s = Pop();\n", GetVariableName(efunc, pline[addr].variableidx+0));
                Spc(fp, nspc);
                fprintf(fp, "%s = Pop();\n", GetVariableName(efunc, pline[addr].variableidx+1));
                Spc(fp, nspc);
                fprintf(fp, "do // (DO)\n");
                Spc(fp, nspc);
                fprintf(fp, "{\n");
                nspc++;
                break;

            case DOSIMPLE:
                Postfix2InfixReset(fp, nspc);
                Spc(fp, nspc);
                fprintf(fp, "do\n");
                Spc(fp, nspc);
                fprintf(fp, "{\n");
                nspc++;
                break;

            case LOOPTEST:
                Postfix2InfixReset(fp, nspc);
                nspc--;
                Spc(fp, nspc);
                fprintf(fp, "} while(Pop() == 0);\n");
                break;

            case LOOPENDLESS:
                Postfix2InfixReset(fp, nspc);
                nspc--;
                Spc(fp, nspc);
                fprintf(fp, "} while(1);\n");
                break;

            case LOOP:
            {
                Postfix2InfixReset(fp, nspc);
                WORD *e = GetWordByAddr(Read16(addr)+2, pline[addr].ovidx);
                if (strcmp(e->r, "(/LOOP)") == 0)
                {
                    Spc(fp, nspc);
                    fprintf(fp,"%s += Pop();\n", GetVariableName(efunc, pline[addr].variableidx+0));
                    nspc--;
                    Spc(fp, nspc);
                    fprintf(fp, "} while(%s<%s); // (/LOOP)\n\n",
                    GetVariableName(efunc, pline[addr].variableidx+0),
                    GetVariableName(efunc, pline[addr].variableidx+1));
                } else
                if (strcmp(e->r, "(LOOP)") == 0)
                {
                    Spc(fp, nspc);
                    fprintf(fp, "%s++;\n", GetVariableName(efunc, pline[addr].variableidx+0));
                    nspc--;
                    Spc(fp, nspc);
                    fprintf(fp, "} while(%s<%s); // (LOOP)\n\n",
                    GetVariableName(efunc, pline[addr].variableidx+0),
                    GetVariableName(efunc, pline[addr].variableidx+1));
                } else
                if (strcmp(e->r, "(+LOOP)") == 0)
                {
                    Spc(fp, nspc);
                    fprintf(fp, "int step = Pop();\n");
                    Spc(fp, nspc);
                    fprintf(fp, "%s += step;\n", GetVariableName(efunc, pline[addr].variableidx+0));
                    Spc(fp, nspc);
                    fprintf(fp, "if (((step>=0) && (%s>=%s)) || ((step<0) && (%s<=%s))) break;\n",
                    GetVariableName(efunc, pline[addr].variableidx+0),
                    GetVariableName(efunc, pline[addr].variableidx+1),
                    GetVariableName(efunc, pline[addr].variableidx+0),
                    GetVariableName(efunc, pline[addr].variableidx+1));
                    nspc--;
                    Spc(fp, nspc);
                    fprintf(fp, "} while(1); // (+LOOP)\n\n");
                } else
                {
                    fprintf(stderr, "Error: Unknown loop\n");
                    exit(1);
                }
                break;
            }
            case IFGOTO:
                Postfix2InfixReset(fp, nspc);
                Spc(fp, nspc);
                fprintf(fp, "if (Pop() == 0) goto label%i;\n", pline[pline[addr].gotoaddr].labelid);
                break;

            case IFEXIT:
                Postfix2InfixReset(fp, nspc);
                Spc(fp, nspc);
                fprintf(fp, "if (Pop() == 0) return;\n");
                break;

            case GOTO:
                Postfix2InfixReset(fp, nspc);
                Spc(fp, nspc);
                fprintf(fp, "goto label%i;\n", pline[pline[addr].gotoaddr].labelid);
                break;

            case FUNCEND:
                Postfix2InfixReset(fp, nspc);
                fprintf(fp, "}\n\n");
                return addr;
                break;

            case EXIT:
                Postfix2InfixReset(fp, nspc);
                Spc(fp, nspc);
                fprintf(fp, "return;\n");
                break;

            case IFNOT:
                Postfix2InfixReset(fp, nspc);
                Spc(fp, nspc);
                fprintf(fp, "if (Pop() != 0)\n");
                Spc(fp, nspc);
                fprintf(fp, "{\n");
                nspc++;
                break;

            case IFELSE:
                Postfix2InfixReset(fp, nspc);
                nspc--;
                Spc(fp, nspc);
                fprintf(fp, "} else\n");
                Spc(fp, nspc);
                fprintf(fp, "{\n");
                nspc++;
                break;

            case IFCLOSE:
                Postfix2InfixReset(fp, nspc);
                nspc--;
                Spc(fp, nspc);
                fprintf(fp, "}\n");
                break;

            case IFCLOSE2:
                Postfix2InfixReset(fp, nspc);
                for(j=0; j<2; j++)
                {
                    nspc--;
                    Spc(fp, nspc);
                    fprintf(fp, "}\n");
                }
                break;

            case IFCLOSE3:
                Postfix2InfixReset(fp, nspc);
                for(j=0; j<3; j++)
                {
                    nspc--;
                    Spc(fp, nspc);
                    fprintf(fp, "}\n");
                }
                break;

            case IFCLOSE4:
                Postfix2InfixReset(fp, nspc);
                for(j=0; j<4; j++)
                {
                    nspc--;
                    Spc(fp, nspc);
                    fprintf(fp, "}\n");
                }
                break;
        }

        if (pline[addr].istrivialword)
        {
            WORD *e = GetWordByAddr(Read16(addr)+2, pline[addr].ovidx);
            Postfix2Infix(addr, e, efunc, pline[addr].ovidx, fp, nspc);
        }
        if ((pline[addr].str != NULL) && (pline[addr].str[0] != 0))
        {
            Postfix2InfixReset(fp, nspc);
            Spc(fp, nspc);
            fprintf(fp, "%s", pline[addr].str);
        }
        if (pline[addr].isasm)
        {
            Postfix2InfixReset(fp, nspc);
            char buffer[0x80];
            disasm(0x0, (unsigned)addr, mem, buffer);
            fprintf(fp, "// 0x%04x: %s\n", addr, buffer);
            if (Read8(addr) == 0xc3) // ret
            {
                fprintf(fp, "\n");
            }
        }
        addr++;
    }

    return addr;
}

void WriteParsedFile(FILE *fp, int ovidx, int minaddr, int maxaddr)
{
    int addr = 0;
    int j = 0;
    char str[0x10000];
    WORD *efunc = NULL;

    for(addr=minaddr; addr<=maxaddr; addr++)
    {
        if (pline[addr].iswordheader)
        {
            efunc = GetWordByAddr(addr+2, ovidx);
            WriteWordHeader(fp, efunc);
            char *s = GetWordName(efunc);
            if (efunc->codep == CODECALL)
            {
                addr = WriteParsedFunction(fp, efunc, ovidx)-1;
                continue;
            }

            switch(efunc->codep)
            {
                case CODELOADDATA:
                    fprintf(fp, "LoadDataType %s = {%sIDX, 0x%02x, 0x%02x, 0x%02x, 0x%04x};\n",
                    Forth2CString(s),
                    GetDirNameByIdx(Read8(efunc->parp+0)),
                    Read8(efunc->parp+1),
                    Read8(efunc->parp+2),
                    Read8(efunc->parp+3),
                    Read16(efunc->parp+4));

                    addr = efunc->parp+6-1;
                    continue;

                case CODEIFIELD:
                    fprintf(fp, "IFieldType %s = {%sIDX, 0x%02x, 0x%02x};\n",
                    Forth2CString(s),
                    GetDirNameByIdx(Read8(efunc->parp+0)),
                    Read8(efunc->parp+1),
                    Read8(efunc->parp+2));

                    addr = efunc->parp+3-1;
                    continue;

                case CODEEXEC:
                case CODECONSTANT:
                    fprintf(fp, "// 0x%04x: dw 0x%04x\n", efunc->parp, Read16(efunc->parp+0));
                    addr = efunc->parp+2-1;
                    continue;

                case CODELOADOVERLAY:
                    fprintf(fp, "// Overlay %s = 0x%04x\n", Forth2CString(s), Read16(efunc->parp+0));
                    addr = efunc->parp+2-1;
                    continue;

                case CODEGETCOLOR:
                    fprintf(fp, "Color %s = 0x%02x\n", Forth2CString(s), Read8(efunc->parp+0));
                    addr = efunc->parp+1-1;
                    continue;

                case CODEPUSH2WORDS:
                    fprintf(fp, "// 0x%04x: dw 0x%04x 0x%04x\n", efunc->parp, Read16(efunc->parp+0), Read16(efunc->parp+2));
                    addr = efunc->parp+4-1;
                    continue;

                case CODE2DARRAY:
                    fprintf(fp, "ArrayType %s = {0x%04x, 0x%04x, 0x%04x, 0x%04x};\n",
                    Forth2CString(s),
                    Read16(efunc->parp+0),
                    Read16(efunc->parp+2),
                    Read16(efunc->parp+4),
                    Read16(efunc->parp+6));
                    addr = efunc->parp+8-1;
                    continue;
          }
        }
        if (pline[addr].isasm)
        {
            char buffer[0x80];
            disasm(0x0, (unsigned)addr, mem, buffer);
            if (pline[addr].asmaccessesword != 0)
            {
                fprintf(fp, "// 0x%04x: %s // %s\n", addr, buffer, GetWordNameByAddr(pline[addr].asmaccessesword, ovidx));
            } else
            {
                fprintf(fp, "// 0x%04x: %s\n", addr, buffer);
            }
            if (Read8(addr) == 0xc3) // ret
            {
                fprintf(fp, "\n");
            }
        }
        if ((pline[addr].str != NULL) && (pline[addr].str[0] != 0))
        {
            fprintf(fp, "%s", pline[addr].str);
        }
        if (!pline[addr].done)
        {
            int nstr = 0;
            fprintf(fp, "// 0x%04x: db ", addr);
            while((!pline[addr].done) && (addr <= maxaddr))
            {
                fprintf(fp, "0x%02x ", Read8(addr));

                str[nstr+0] = 0x20;
                str[nstr+1] = 0x0;
                nstr++;
                if ((Read8(addr) >= 0x20) && (Read8(addr) < 128))
                {
                    str[nstr-1] = Read8(addr);
                }
                addr++;
            }
            fprintf(fp, "'%s'\n", str);
            addr--;
        }
    }
    fprintf(fp, "\n");
}
