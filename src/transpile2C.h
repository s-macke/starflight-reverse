#ifndef TRANSPILE2C_H
#define TRANSPILE2C_H

#include<stdio.h>
#include"extract.h"
#include"dictionary.h"

#define WRITE_DICT 1
#define WRITE_HEADER 2
#define WRITE_EXTERN 4
#define WRITE_VARIABLES 8

void Transpile(const char *filename, OVLHeader *head, int ovidx, int minaddr, int maxaddr, int outputflag);
void GetMacro(unsigned short addr, DICTENTRY *e, DICTENTRY *efunc, char *ret, int currentovidx);

#endif
