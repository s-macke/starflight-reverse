#ifndef DICTIONARY_H
#define DICTIONARY_H

typedef struct DICTENTRY
{
    int addr; // address of word in code
    int codep; // code pointer
    int linkp; // link pointer
    int parp; // parameter pointer
    int bits; // bitfield
    char r[64]; // short name
    int size; // probable size of the word
    int ovidx; // overlay index

// Helper for parsing
    int nlabel; // current label identifier
    int nloop; // current loop identifier
    int isentry;
} DICTENTRY;

extern int ndict;
extern struct DICTENTRY dict[10000];

#define STRINGLEN 300

typedef struct
{
    char *str;
    int labelid; // != 0 is a label for a goto
    int loopid; // != 0 is a label for a loop
    int done; // this line has been processed
} LineDesc;

extern LineDesc pline[0x10000];

void SortDictionary();
void ParseDict(unsigned char *mem, int linkp, int decrypt, int ovidx);
char* GetDictWord(unsigned short addr, int ovidx);
char* GetWordName(DICTENTRY *dict);
void WriteDict(unsigned char *mem, FILE *fp, int ovidx);
void WriteVariables(FILE *fp, int ovidx);

void InitOutput();
void WriteParsedFunctions(int minaddr, int maxaddr, FILE *fp);
void ParsePartFunction(int ofs, LineDesc *l, int minaddr, int maxaddr, DICTENTRY *d, int currentovidx);
void ParseForthFunctions(int ovidx, int minaddr, int maxaddr);

#endif
