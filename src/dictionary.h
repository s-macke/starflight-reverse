#ifndef DICTIONARY_H
#define DICTIONARY_H

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
    int ovidx;
} DICTENTRY;

extern int ndict;
extern struct DICTENTRY dict[5000];

#define STRINGLEN 300

typedef struct
{
    char strasm[STRINGLEN];
    char strfunc[STRINGLEN];
    char str[STRINGLEN];
    char strword[STRINGLEN];
    int labelid; // != 0 is a label for a goto
    int loopid; // != 0 is a label for a loop
    int done; // this line has been processed

    int isentry;
    int isfunction;
    int nlabel;
    int nloop;
} LineDesc;

extern LineDesc pline[0x10000];

void SortDictionary();
void ParseDict(unsigned char *mem, int linkp, int decrypt, int ovidx);
void InitParseFunction2();
void ParseFunction2(unsigned short parp, int minaddr, int maxaddr, int ovidx);
void WriteDict(unsigned char *mem, FILE *fp, int ovidx);
void WriteVariables(int minaddr, int maxaddr, FILE *fp, int ovidx);
void WriteParsedFunctions(int minaddr, int maxaddr, FILE *fp);
void ParsePartFunction(int ofs, LineDesc *l, int minaddr, int maxaddr, int currentovidx);

char* FindDictPar(unsigned short addr, int ovidx);
char* Forth2CString(char *in);
char* GetWordName(DICTENTRY *dict);

#endif
