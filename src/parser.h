#ifndef PARSER_H
#define PARSER_H
#include<stdbool.h>

#include"vocabulary.h"

typedef enum {  NONE=0, DO=1, LOOP=2, GOTO=3, IFGOTO=4, IFEXIT=5, EXIT=6, FUNCEND=7,
                IFNOT=8, IFELSE=9,
                CLOSE=10, // if or loop
                IFBREAK=11, // break loop
                DOSIMPLE=14, LOOPTEST=15, DOENDLESS=16
             } controlflowenum;

typedef struct
{
    controlflowenum flow; // controlflowenum list
    int nclosing;
} Flow;

typedef struct
{
    char *str;

    // control flow
    int labelid; // != 0 is a label for a goto
    int gotoaddr; // != 0 is a goto to a label. can be conditional or unconditional
    int loopaddr; // for flow = DO it contains the address of the coressponding loop
    Flow flow;

    int done; // this line has been processed
    int isasm;
    int asmaccessesword; // the asm instruction accesses a word
    int istrivialword;
    int iswordheader;
    int word;
    int ovidx;

    int variableidx;
} LineDesc;

extern LineDesc pline[0x10000];

typedef struct
{
    int stack[20]; // variable currently on (call/variable) stack
    int nstack;
} Variables;

Variables GetEmptyVariables();

void InitParser();
void ParsePartFunction(int ofs, int minaddr, int maxaddr, WORD *d, int currentovidx, Variables vars);
void ParseForthFunctions(int ovidx, int minaddr, int maxaddr);
void ParseAsmFunctions(int ovidx, int minaddr, int maxaddr);
int DisasmRange(int offset, int size, int ovidx, int minaddr, int maxaddr);

// -----------------------------------------

inline void AddFlow(LineDesc* pline, controlflowenum newflow)
{
  if (newflow == CLOSE)
  {
    pline->flow.nclosing++;
  }
  /*
    if (pline->flow.nflow > 7)
    {
        fprintf(stderr, "Error: Flow too large while adding flow %i\n", newflow);
        return;
    }
    */
    pline->flow.flow = newflow;
}

inline _Bool ContainsFlow(LineDesc* pline, controlflowenum flow)
{
  return pline->flow.flow == flow;
  /*
    for(int i=0; i<pline->flow.nflow; i++)
        if (pline->flow.flow[i] == flow) return true;
    return false;
    */
}

// -----------------------------------------


#endif
