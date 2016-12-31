#ifndef PARSER_H
#define PARSER_H

#include"dictionary.h"

typedef struct
{
    char *str;
    char initvarstr[STRINGLEN*2];
    int labelid; // != 0 is a label for a goto
    int done; // this line has been processed
} LineDesc;

extern LineDesc pline[0x10000];


typedef struct
{
    char name[20][10];
    int nvars;
} Variables;

Variables GetEmptyVariables();

void InitParser();
void WriteParsedFunctions(int minaddr, int maxaddr, FILE *fp);
void ParsePartFunction(int ofs, int minaddr, int maxaddr, DICTENTRY *d, int currentovidx, Variables vars);
void ParseForthFunctions(int ovidx, int minaddr, int maxaddr);
void WriteVariables(FILE *fp, int ovidx);
void WriteExtern(FILE *fp, int ovidx);

#endif
