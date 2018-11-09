#ifndef POSTFIX2INFIX
#define POSTFIX2INFIX

#include"dictionary.h"


void Postfix2Infix(unsigned short addr, WORD *e, WORD *efunc, int ovidx, FILE *fp, int nspc);

void Postfix2InfixReset(FILE *fp, int nspc);

// Helper used also in other context. Not specific to Postfix2Infix
char* GetVariableName(WORD *efunc, int varidx);

// for switch case
void GetMacro(unsigned short addr, WORD *e, WORD *efunc, char *ret, int currentovidx);

#endif
