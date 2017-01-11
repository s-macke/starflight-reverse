#ifndef PARSER_H
#define PARSER_H

#include"dictionary.h"

typedef struct
{
    char *str;
    char *initvarstr;
    int labelid; // != 0 is a label for a goto
    int gotoid; // != 0 is a goto to a label. can be conditional or unconditional
    int done; // this line has been processed
    int isasm;
    int istrivialword;
    int iswordheader;
    int isword;
    int ovidx;
    int isfuncend;
} LineDesc;

extern LineDesc pline[0x10000];

typedef struct
{
    char name[20][10];
    int nvars;
} Variables;

Variables GetEmptyVariables();

void InitParser();
void ParsePartFunction(int ofs, int minaddr, int maxaddr, DICTENTRY *d, int currentovidx, Variables vars);
void ParseForthFunctions(int ovidx, int minaddr, int maxaddr);
void ParseAsmFunctions(int ovidx, int minaddr, int maxaddr);

#endif
