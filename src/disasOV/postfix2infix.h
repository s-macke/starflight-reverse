#ifndef POSTFIX2INFIX
#define POSTFIX2INFIX

#include"dictionary.h"
#include"parser.h"


void Postfix2Infix(unsigned short addr, WORD *e, WORD *efunc, int ovidx, FILE *fp, int nspc);

void Postfix2InfixReset(FILE *fp, int nspc, controlflowenum flow, char* flowstr1, char* flowstr2);

// Helper used also in other context. Not specific to Postfix2Infix
char* GetVariableName(WORD *efunc, int varidx);

// for switch case
void GetMacro(unsigned short addr, WORD *e, WORD *efunc, char *ret, int currentovidx);

#endif
