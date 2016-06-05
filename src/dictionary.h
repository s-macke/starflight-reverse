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
} DICTENTRY;

extern int ndict;
extern struct DICTENTRY dict[10000];

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

    int isfunction;
    int nlabel;
    int nloop;
} LineDesc;

extern LineDesc pline[0x10000];

void SortDictionary();
void ParseDict(unsigned char *mem, int linkp, int decrypt);
void InitParseFunction2();
void ParseFunction2(unsigned short parp, int minaddr, int maxaddr);
void WriteDict(unsigned char *mem, FILE *fp, int startidx, int endidx);
void WriteVariables(int minaddr, int maxaddr, FILE *fp, int startidx, int endidx);
void WriteParsedFunctions(int minaddr, int maxaddr, FILE *fp);


#endif
