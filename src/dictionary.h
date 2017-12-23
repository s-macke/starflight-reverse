#ifndef DICTIONARY_H
#define DICTIONARY_H

typedef struct DICTENTRY
{
    int addr;   // address of word in code
    int codep;  // code pointer
    int linkp;  // link pointer
    int parp;   // parameter pointer
    int bits;   // bitfield
    char r[64]; // short name
    int size;   // probable size of the word
    int ovidx;  // overlay index

    // Helper for the parser and the transpiler
    int nlabel; // current label identifier
    int isentry;
    int nloopvars;
    int nstackvariables;
    int isextern;

    // stack information of this word. For word '+' stackin=2 and stackout=1
    int stackin, stackout;

    // variables for functions
    int nvars;
    char vars[20][5];
} DICTENTRY;

extern int ndict;
extern struct DICTENTRY dict[10000];

void SortDictionary();
void ParseDict(unsigned char *mem, int linkp, int decrypt, int ovidx);
DICTENTRY* GetDictEntry(unsigned short addr, int ovidx);
char* GetDictWord(unsigned short addr, int ovidx);
char* GetWordName(DICTENTRY *dict);
void WriteDict(unsigned char *mem, FILE *fp, int ovidx);

#endif
