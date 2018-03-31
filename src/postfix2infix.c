#include<string.h>
#include"postfix2infix.h"
#include"global.h"
#include"utils.h"
#include"extract.h"
#include"../emul/cpu.h"
#include"parser.h"

#define STACKSTRINGLEN 512

// precedence
#define PVARNUMBERFUNC 1
#define PNEGATE 2
#define PNOT 2
#define PMULDIV 3
#define PADDSUB 4
#define PBITSHIFT 5
#define PEQUAL 7
#define PAND 8
#define PXOR 9
#define POR 10
#define PTERNARYCONDITIONAL 13

// -------------------------------------------
typedef struct
{
    char expr[STACKSTRINGLEN]; // subexpression string
    int precedence;
    char forth[STACKSTRINGLEN];
    int isnumber;
} Intermediate;

static Intermediate stack[50];
static int stackoffset = 0;

void StackPop(int n)
{
    for(int i=stackoffset+n; i<stackoffset; i++)
    {
        memcpy(&stack[i], &stack[i+1], sizeof(Intermediate));
    }
    stackoffset--;
}

// -------------------------------------------

typedef struct
{
    char *word;
    char *text;
} BasicWords;

BasicWords basicwords[] =
{
    {"OR",     "Push(Pop() | Pop())"},
    {"AND",    "Push(Pop() & Pop())"},
    {"XOR",    "Push(Pop() ^ Pop())"},
    {"+",      "Push(Pop() + Pop())"},
    {"*",      "Push(Pop() * Pop())"},
    {"NEGATE", "Push(-Pop())"},
    {"2*",     "Push(Pop()*2)"},
    {"1+",     "Push(Pop()+1)"},
    {"2+",     "Push(Pop()+2)"},
    {"3+",     "Push(Pop()+3)"},
    {"1-",     "Push(Pop()-1)"},
    {"2-",     "Push(Pop()-2)"},
    {"16/",    "Push(Pop()>>4)"}, // TODO check for signed and unsigned
    {"2/",     "Push(Pop()>>1)"},
    {"16*",    "Push(Pop()<<4)"},
    {"@",      "Push(Read16(Pop()))"},
    {"C@",     "Push(Read8(Pop())&0xFF)"},
    {"DROP",   "Pop()"},
    {"2DROP",  "Pop(); Pop()"},
    {"DUP",    "Push(Read16(regsp))"},
    {NULL, NULL}
};

char* GetVariableName(WORD *efunc, int varidx)
{
    static char *def = "h";
    static char *default1 = "unknown";
    static char *default2 = "callp1";
    static char *default3 = "callp0";
    if (varidx >= 0) return &efunc->vars[varidx][0];

    if (varidx == -1) return default1;
    if (varidx == -2) return default2;
    if (varidx == -3) return default3;
}


unsigned int IsPushNumber(int addr, WORD *e)
{
    if (e->codep == CODELIT) return Read16(addr + 2);
    if (e->codep == CODECONSTANT)
    {
        if (strcmp(e->r, "3") == 0) return 3;
        if (strcmp(e->r, "4") == 0) return 4;
        if (strcmp(e->r, "5") == 0) return 5;
        if (strcmp(e->r, "6") == 0) return 6;
        if (strcmp(e->r, "7") == 0) return 7;
        if (strcmp(e->r, "8") == 0) return 8;
        if (strcmp(e->r, "9") == 0) return 9;
        if (strcmp(e->r, "-1") == 0) return -1;
        if (strcmp(e->r, "-2") == 0) return -2;
    }

    if (strcmp(e->r, "0") == 0) return 0;
    if (strcmp(e->r, "1") == 0) return 1;
    if (strcmp(e->r, "2") == 0) return 2;
    return 0x10000; // Invalid
}



void GetMacro(unsigned short addr, WORD *e, WORD *efunc, char *ret, int currentovidx)
{
    int i=0;
    ret[0] = 0;
    char *s = GetWordName(e);

    int value = IsPushNumber(addr, e); // check if this is just a push of a number
    if (value != 0x10000)
    {
        char numberstring[16];
        if (value < 10) sprintf(numberstring, "%i", value);
        else if (value > 0xfffc) sprintf(numberstring, "%i", (short signed int)value);
        else sprintf(numberstring, "0x%04x", value);

        int i = 0;
        for(i=0; i<nwords; i++)
        {
            if ((vocabulary[i].ovidx == -1) || (vocabulary[i].ovidx == currentovidx))
            if (vocabulary[i].parp == value)
            {
                snprintf(ret, STRINGLEN, "Push(%s); // probable '%s'\n", numberstring, GetWordName(&vocabulary[i]));
                break;
            }
        }
        if (ret[0] == 0)
        {
            snprintf(ret, STRINGLEN, "Push(%s);\n", numberstring);
        }
        return;
    }

    BasicWords *word = &basicwords[0];
    while(word->word != NULL)
    {
        if (strcmp(s, word->word) == 0)
        {
            snprintf(ret, STRINGLEN, "%s; // %s\n", word->text, word->word);
            return;
        }
        word++;
    }
    
    if (e->codep == CODE2LIT) // constant number
    {
        snprintf(ret, STRINGLEN, "Push(0x%04x); Push(0x%04x);\n", Read16(addr + 2), Read16(addr + 4));
        return;
    }
    if (e->codep == CODEPOINTER) // pointer to variable or table
    {
        snprintf(ret, STRINGLEN, "Push(pp_%s); // %s\n", Forth2CString(s), s);
        return;
    }
    if (e->codep == CODECONSTANT)
    {
        snprintf(ret, STRINGLEN, "Push(Read16(cc_%s)); // %s\n", Forth2CString(s), s);
        return;
    }
    if (e->codep == CODEDI) // User data
    {
        snprintf(ret, STRINGLEN, "Push(user_%s); // %s\n", Forth2CString(s), s);
        return;
    }
    if (e->codep == CODELOADDATA)
    {
        int idx = Read8(e->parp);
        snprintf(ret, STRINGLEN, "LoadData(%s); // from '%s'\n", Forth2CString(s), GetDirNameByIdx(idx));
        return;
    }
    if (e->codep == CODETABLE)
    {
        snprintf(ret, STRINGLEN, "GetTableEntry(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODEGETCOLOR)
    {
        snprintf(ret, STRINGLEN, "GetColor(%s);\n", Forth2CString(s));
        return;
    }
    if (e->codep == CODESIGFLD)
    {
        snprintf(ret, STRINGLEN, "SIGFLD(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODEPUSH2WORDS)
    {
        snprintf(ret, STRINGLEN, "Push2Words(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODEFUNC5)
    {
        snprintf(ret, STRINGLEN, "Func5(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODEFUNC6)
    {
        snprintf(ret, STRINGLEN, "Func6(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODESETVOCABULARY)
    {
        snprintf(ret, STRINGLEN, "SetVocabulary(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODEIFIELD)
    {
        snprintf(ret, STRINGLEN, "Push(0x%04x+%s.offset); // IFIELD\n", IFIELDOFFSET, Forth2CString(s));
        return;
    }
    if (e->codep == CODEFUNC9)
    {
        snprintf(ret, STRINGLEN, "Func9(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODECASE)
    {
        snprintf(ret, STRINGLEN, "%s(); // %s case\n", Forth2CString(s), s);
        return;
    }
    if (e->codep == CODE2DARRAY)
    {/*
        unsigned short ds = Read16(par + 6);
        unsigned short bx = Read16(par + 4);
        unsigned short bx = bx + (Pop()<<1);
        unsigned short cx = Read16(ds, bx) + Pop();
        Push(ds);
        Push(dx);
        */
        //snprintf(ret, STRINGLEN, "ReadArray(Read16(0x%04x + 6), 0x%04x); // %s\n", e->parp, Read16(e->parp + 4), s);
        snprintf(ret, STRINGLEN, "ReadArray(%s); // %s\n", Forth2CString(s), s);
        return;
    }
    if (e->codep == CODEFUNC12)
    {
        snprintf(ret, STRINGLEN, "Func12(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODERULE)
    {
        snprintf(ret, STRINGLEN, "%s(); // %s rule\n", Forth2CString(s), s);
        return;
    }
    if (e->codep == CODEEXEC)
    {
        int par = Read16(Read16(e->parp)+REGDI);
        snprintf(ret, STRINGLEN, "Exec(\"%s\"); // call of word 0x%04x '%s'\n",
            Forth2CString(s), par, GetWordNameByAddr(par, currentovidx));
        return;
    }
    if (strcmp(s, ">R") == 0)
    {
        snprintf(ret, STRINGLEN, "%s = Pop(); // >R\n", GetVariableName(efunc, pline[addr].variableidx));
        return;
    }
    if (strcmp(s, "R>") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(%s); // R>\n", GetVariableName(efunc, pline[addr].variableidx));
        return;
    }
    if (strcmp(s, "R@") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Read16(%s)); // R@\n", GetVariableName(efunc, pline[addr].variableidx));
        return;
    }
    if (strcmp(s, "LEAVE") == 0) // TODO: Check if assignment is vice versa
    {
        snprintf(ret, STRINGLEN, "%s = %s; // LEAVE\n",
        GetVariableName(efunc, pline[addr].variableidx+1),
        GetVariableName(efunc, pline[addr].variableidx+0));
        return;
    }
    if (strcmp(s, "I") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(%s); // I\n", GetVariableName(efunc, pline[addr].variableidx));
        return;
    }
    if (strcmp(s, "I'") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(%s); // I'\n", GetVariableName(efunc, pline[addr].variableidx));
        return;
    }
    if (strcmp(s, "J") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(%s); // J\n", GetVariableName(efunc, pline[addr].variableidx));
        return;
    }
    if (strcmp(s, "0=") == 0)
    {
        snprintf(ret, STRINGLEN, "if (Pop() == 0) Push(1); else Push(0); // 0=\n");
        return ;
    }
    if (strcmp(s, "=") == 0)
    {
        snprintf(ret, STRINGLEN, "Push((Pop()==Pop())?1:0); // =\n");
        return;
    }
    if (strcmp(s, "NOT") == 0)
    {
        snprintf(ret, STRINGLEN, "if (Pop() == 0) Push(1); else Push(0); // NOT\n");
        return;
    }
    if (strcmp(s, "?DUP") == 0)
    {
        snprintf(ret, STRINGLEN, "if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP\n");
        return;
    }
    if (strcmp(s, "EXIT") == 0)
    {
        snprintf(ret, STRINGLEN, "return; // EXIT\n");
        return;
    }
    if (strcmp(s, "(ABORT\")") == 0)
    {
        int length = Read8(addr+2);
        char str[0x100];
        memset(str, 0, 0x100);
        int ll = 0;
        for(ll=0; ll<length; ll++)
        {
            str[ll] = Read8(addr+3+ll);
        }
        snprintf(ret, STRINGLEN, "ABORT(\"%s\", %i);// (ABORT\")\n", Escape(str), length);
        return;
    }
    if (strcmp(s, "(.\")") == 0)
    {
        int length = Read8(addr+2);
        char str[0x100];
        memset(str, 0, 0x100);
        int ll = 0;
        for(ll=0; ll<length; ll++)
        {
            str[ll] = Read8(addr+3+ll);
        }
        snprintf(ret, STRINGLEN, "PRINT(\"%s\", %i); // (.\")\n", Escape(str), length);
        return;
    }
    if (e->parp == PARPRINT)
    {
        int length = Read8(addr+2);
        char str[0x100];
        memset(str, 0, 0x100);
        int ll = 0;
        for(ll=0; ll<length; ll++)
        {
            str[ll] = Read8(addr+3+ll);
        }
        snprintf(ret, STRINGLEN, "%s(\"%s\");\n", Forth2CString(s), Escape(str));
        return;
    }

    snprintf(ret, STRINGLEN, "%s(); // %s\n", Forth2CString(s), s);
    return;
}

// -------------------------------------------

void Postfix2Infix(unsigned short addr, WORD *e, WORD *efunc, int currentovidx, FILE *fp, int nspc)
{
    char *s = GetWordName(e);

    int value = IsPushNumber(addr, e);
    if (value != 0x10000)
    {
        char numberstring[16];
        if (value < 10) sprintf(numberstring, "%i", value);
        else if (value > 0xfffc) sprintf(numberstring, "%i", (short signed int)value);
        else sprintf(numberstring, "0x%04x", value);

        int i = 0;
        for(i=0; i<nwords; i++)
        {
            if ((vocabulary[i].ovidx == -1) || (vocabulary[i].ovidx == currentovidx))
            if (vocabulary[i].parp == value)
            {
                Postfix2InfixReset(fp, nspc);
                Spc(fp, nspc);
                fprintf(fp, "Push(%s); // probable '%s'\n", numberstring, GetWordName(&vocabulary[i]));
                return;
            }
        }

        snprintf(stack[stackoffset].forth, STACKSTRINGLEN, "%s", numberstring);
        snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "%s", numberstring);
        stack[stackoffset].precedence = PVARNUMBERFUNC;
        stack[stackoffset].isnumber = 1;
        stackoffset++;
        return;
    }
    if (e->codep == CODEPOINTER) // pointer to variable or table
    {
        snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "pp_%s", Forth2CString(s), s);
        snprintf(stack[stackoffset].forth, STACKSTRINGLEN, "%s", s);
        stack[stackoffset].precedence = PVARNUMBERFUNC;
        stack[stackoffset].isnumber = 0;
        stackoffset++;
        return;
    }
    if (e->codep == CODECONSTANT)
    {
        snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "Read16(cc_%s)", Forth2CString(s));
        snprintf(stack[stackoffset].forth, STACKSTRINGLEN, "%s", s);
        stack[stackoffset].precedence = PVARNUMBERFUNC;
        stack[stackoffset].isnumber = 0;
        stackoffset++;
        return;
    }
    if (e->codep == CODEDI) // User data
    {
        snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "user_%s", Forth2CString(s));
        snprintf(stack[stackoffset].forth, STACKSTRINGLEN, "%s", s);
        stack[stackoffset].precedence = PVARNUMBERFUNC;
        stack[stackoffset].isnumber = 0;
        stackoffset++;
        return;
    }
    if (e->codep == CODEIFIELD)
    {
        snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "0x%04x+%s.offset", IFIELDOFFSET, Forth2CString(s));
        snprintf(stack[stackoffset].forth, STACKSTRINGLEN, "%s<IFIELD>", s);
        stack[stackoffset].precedence = PADDSUB;
        stack[stackoffset].isnumber = 0;
        stackoffset++;
        return;
    }
    if (strcmp(s, "R>") == 0)
    {
        snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "%s", GetVariableName(efunc, pline[addr].variableidx));
        snprintf(stack[stackoffset].forth, STACKSTRINGLEN, "%s", s);
        stack[stackoffset].precedence = PVARNUMBERFUNC;
        stack[stackoffset].isnumber = 0;
        stackoffset++;
        return;
    }
    if ((strcmp(s, "I") == 0) || (strcmp(s, "J") == 0) || (strcmp(s, "I'")) == 0)
	{
        snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "%s", GetVariableName(efunc, pline[addr].variableidx));
        snprintf(stack[stackoffset].forth, STACKSTRINGLEN, "%s", s);
        stack[stackoffset].precedence = PVARNUMBERFUNC;
        stack[stackoffset].isnumber = 0;
        stackoffset++;
		return;
	}



    // 2 operand logic
    if ((stackoffset >= 2) &&
            (
            (strcmp(s, "+") == 0) ||
            (strcmp(s, "-") == 0) ||
            (strcmp(s, "OR") == 0) ||
            (strcmp(s, "AND") == 0) ||
            (strcmp(s, "XOR") == 0) ||
            (strcmp(s, "*") == 0)
            )
        )
    {
        char op;
        int precedence;
        if (strcmp(s, "+") == 0) { op = '+'; precedence = PADDSUB; };
        if (strcmp(s, "-") == 0) { op = '-'; precedence = PADDSUB; };
        if (strcmp(s, "OR") == 0) { op = '|'; precedence = POR; };
        if (strcmp(s, "AND") == 0) { op = '&'; precedence = PAND; };
        if (strcmp(s, "*") == 0) { op = '*'; precedence = PMULDIV; };

        if (stack[stackoffset-2].precedence >= precedence)
        {
            snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "(%s) %c", stack[stackoffset-2].expr, op);
        } else
        {
            snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "%s %c", stack[stackoffset-2].expr, op);
        }

        if (stack[stackoffset-1].precedence >= precedence)
        {
            snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "%s (%s)", stack[stackoffset].expr, stack[stackoffset-1].expr);
        } else
        {
            snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "%s %s", stack[stackoffset].expr, stack[stackoffset-1].expr);
        }
        snprintf(stack[stackoffset].forth, STACKSTRINGLEN, "%s %s %s", stack[stackoffset-2].forth, stack[stackoffset-1].forth, s);
        stack[stackoffset].precedence = precedence;
        stack[stackoffset].isnumber = 0;
        stackoffset++;
        StackPop(-2);
        StackPop(-2);
        return;
    }

    // 1 operand logic
    if ((stackoffset >= 1) &&
            (
            (strcmp(s, "2*") == 0) ||
            (strcmp(s, "1+") == 0) ||
            (strcmp(s, "2+") == 0) ||
            (strcmp(s, "3+") == 0) ||
            (strcmp(s, "1-") == 0) ||
            (strcmp(s, "2-") == 0) ||
            (strcmp(s, "16/") == 0) ||
            (strcmp(s, "2/") == 0) ||
            (strcmp(s, "16*") == 0)
            )
        )
    {
        char op[6];
        int precedence;
        if (strcmp(s, "2*") == 0) { sprintf(op, "* 2"); precedence = PMULDIV; };
        if (strcmp(s, "1+") == 0) { sprintf(op, "+ 1"); precedence = PADDSUB; };
        if (strcmp(s, "2+") == 0) { sprintf(op, "+ 2"); precedence = PADDSUB; };
        if (strcmp(s, "3+") == 0) { sprintf(op, "+ 3"); precedence = PADDSUB; };
        if (strcmp(s, "1-") == 0) { sprintf(op, "- 1"); precedence = PADDSUB; };
        if (strcmp(s, "2-") == 0) { sprintf(op, "- 2"); precedence = PADDSUB; };
        if (strcmp(s, "16/") == 0) { sprintf(op, ">> 4"); precedence = PBITSHIFT; }; // TODO check for signed and unsigned
        if (strcmp(s, "2/") == 0) { sprintf(op, ">> 1"); precedence = PBITSHIFT; };
        if (strcmp(s, "16*") == 0) { sprintf(op, ">> 4"); precedence = PBITSHIFT; };

        if (stack[stackoffset-1].precedence >= precedence)
        {
            snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "(%s) %s", stack[stackoffset-1].expr, op);
        } else
        {
            snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "%s %s", stack[stackoffset-1].expr, op);
        }
        snprintf(stack[stackoffset].forth, STACKSTRINGLEN, "%s %s", stack[stackoffset-1].forth, s);

        stack[stackoffset].precedence = precedence;
        stack[stackoffset].isnumber = 0;
        stackoffset++;
        StackPop(-2);
        return;
    }

    // negate
    if ((stackoffset >= 1) && (strcmp(s, "NEGATE") == 0))
    {
        snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "-%s", stack[stackoffset-1].expr);
        snprintf(stack[stackoffset].forth, STACKSTRINGLEN, "%s %s", stack[stackoffset-1].forth, s);
        stack[stackoffset].precedence = PNEGATE;
        stack[stackoffset].isnumber = 0;
        stackoffset++;
        StackPop(-2);
        return;
    }

    if ((stackoffset >= 1) && (strcmp(s, "@") == 0))
    {
        snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "Read16(%s)", stack[stackoffset-1].expr);
        snprintf(stack[stackoffset].forth, STACKSTRINGLEN, "%s %s", stack[stackoffset-1].forth, s);
        stack[stackoffset].precedence = PVARNUMBERFUNC;
        stack[stackoffset].isnumber = 0;
        stackoffset++;
        StackPop(-2);
        return;
    }

    if ((stackoffset >= 1) && (strcmp(s, "C@") == 0))
    {
        snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "Read16(%s)&0xFF", stack[stackoffset-1].expr);
        snprintf(stack[stackoffset].forth, STACKSTRINGLEN, "%s %s", stack[stackoffset-1].forth, s);
        stack[stackoffset].precedence = PAND;
        stack[stackoffset].isnumber = 0;
        stackoffset++;
        StackPop(-2);
        return;
    }

    if ((stackoffset >= 2) && (strcmp(s, "=") == 0))
    {
        if (stack[stackoffset-2].precedence >= PEQUAL)
        {
            snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "(%s)", stack[stackoffset-2].expr);
        } else
        {
            snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "%s", stack[stackoffset-2].expr, stack[stackoffset-1].expr);
        }
        if (stack[stackoffset-1].precedence >= PEQUAL)
        {
            snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "%s==(%s)?1:0", stack[stackoffset].expr, stack[stackoffset-1].expr);
        } else
        {
            snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "%s==%s?1:0", stack[stackoffset].expr, stack[stackoffset-1].expr);
        }

        snprintf(stack[stackoffset].forth, STACKSTRINGLEN, "%s %s %s", stack[stackoffset-2].forth, stack[stackoffset-1].forth, s);
        stack[stackoffset].precedence = PTERNARYCONDITIONAL;
        stack[stackoffset].isnumber = 0;
        stackoffset++;
        StackPop(-2);
        StackPop(-2);
        return;
    }

    // TODO: work with !. What do do with "= NOT"?
    if ((stackoffset >= 1) && (strcmp(s, "0=") == 0))
    {
        if (stack[stackoffset-1].precedence >= PEQUAL)
        {
            snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "(%s)==0?1:0", stack[stackoffset-1].expr);
        } else
        {
            snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "%s==0?1:0", stack[stackoffset-1].expr);
        }
        snprintf(stack[stackoffset].forth, STACKSTRINGLEN, "%s %s", stack[stackoffset-1].forth, s);
        stack[stackoffset].precedence = PTERNARYCONDITIONAL;
        stack[stackoffset].isnumber = 0;
        stackoffset++;
        StackPop(-2);
        return;
    }
    if ((stackoffset >= 1) && (strcmp(s, "NOT") == 0))
    {
        if (stack[stackoffset-1].precedence >= PNOT)
        {
            snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "!(%s)", stack[stackoffset-1].expr);
        } else
        {
            snprintf(stack[stackoffset].expr, STACKSTRINGLEN, "!%s", stack[stackoffset-1].expr);
        }
        snprintf(stack[stackoffset].forth, STACKSTRINGLEN, "%s %s", stack[stackoffset-1].forth, s);
        stack[stackoffset].precedence = PNOT;
        stack[stackoffset].isnumber = 0;
        stackoffset++;
        StackPop(-2);
        return;
    }

    /* disabled, because it doesn't change much
    if ((stackoffset >= 1) && (strcmp(s, "DROP") == 0))
    {
        if (strstr(stack[stackoffset-1].expr, "Pop()") == NULL)
        {
            stackoffset--;
            return;
        }
    }
    */
    // TODO OVER MAX, !, SWAP, DUP +@, ...

    Postfix2InfixReset(fp, nspc);

    char func[STRINGLEN*2];
    GetMacro(addr, e, efunc, func, pline[addr].ovidx);
    Spc(fp, nspc);
    fprintf(fp, "%s", func);
}

void Postfix2InfixReset(FILE *fp, int nspc)
{
    for(int i=0; i<stackoffset; i++)
    {
        if (strcmp(stack[i].expr, "Pop()") == 0) continue; // This is a simple Push(Pop()); and can be ignored
        Spc(fp, nspc);
        fprintf(fp, "Push(%s);", stack[i].expr);
        if (stack[i].forth[0] != 0 && !stack[i].isnumber) fprintf(fp, " // %s", stack[i].forth);
        fprintf(fp, "\n");
    }

    // default is one Pop() on the stack. Be careful here. Not every operation is possible here
    sprintf(stack[0].expr, "Pop()");
    sprintf(stack[0].forth, "");
    stack[0].precedence = PVARNUMBERFUNC;
    stack[0].isnumber = 0;
    stackoffset = 1;
}


