#ifndef TRANSPILE2C_H
#define TRANSPILE2C_H

#include<stdio.h>
#include"extract.h"
#include"dictionary.h"

void Transpile(OVLHeader *head, int ovidx, int minaddr, int maxaddr);
void GetMacro(unsigned short addr, DICTENTRY *e, char *ret, int currentovidx);

#endif
