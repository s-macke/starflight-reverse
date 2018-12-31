#ifndef DICTIONARY_H
#define DICTIONARY_H

#include<stdio.h>

typedef struct WORD
{
    int addr;   // address of word in code
    int codep;  // code pointer
    int linkp;  // link pointer
    int wordp;  // word content pointer
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
    int isorphan; // word seems not to be used
    int nconnections; // used for statistics to count the number of connections to this word

    // stack information of this word. For word '+' stackin=2 and stackout=1
    int stackin, stackout;

    // variables for functions
    int nvars;
    char vars[20][5];
} WORD;

extern int nwords;
extern struct WORD dictionary[10000];

void SortDictionary();
void ParseVocabulary(unsigned char *mem, int linkp, int decrypt, int ovidx);
WORD* GetWordByAddr(unsigned short addr, int ovidx);
char* GetWordNameByAddr(unsigned short addr, int ovidx);
char* GetWordName(WORD *dict);
void WriteDictionary(unsigned char *mem, FILE *fp, int ovidx);
void WriteAllDictionary(char* filename);
void DictionaryConsistencyCheck();

#endif
