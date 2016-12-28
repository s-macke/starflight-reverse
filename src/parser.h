#ifndef PARSER_H
#define PARSER_H

#include"dictionary.h"

typedef struct
{
    char *str;
    int labelid; // != 0 is a label for a goto
    int loopid; // != 0 is a label for a loop
    int done; // this line has been processed
} LineDesc;

extern LineDesc pline[0x10000];


void InitOutput();
void WriteParsedFunctions(int minaddr, int maxaddr, FILE *fp);
void ParsePartFunction(int ofs, LineDesc *l, int minaddr, int maxaddr, DICTENTRY *d, int currentovidx);
void ParseForthFunctions(int ovidx, int minaddr, int maxaddr);

#endif
