#ifndef POSTFIX2INFIX
#define POSTFIX2INFIX

#include"dictionary.h"


void Postfix2Infix(unsigned short addr, DICTENTRY *e, DICTENTRY *efunc, int ovidx, FILE *fp, int nspc);

void Postfix2InfixReset(FILE *fp, int nspc);

// Helper used also in other context. Not specific to Postfix2Infix
char* GetVariableName(DICTENTRY *efunc, int varidx);

#endif