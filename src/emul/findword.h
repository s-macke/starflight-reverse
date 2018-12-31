#ifndef FINDWORD_H
#define FINDWORD_H

int GetOverlayIndex(int address);
int FindClosestWord(int si, int ovidx);
char* GetOverlayName(int word, int ovidx);
char* FindWord(int word, int ovidx);
int FindWordByName(char* s, int n);
char *FindDirectoryName(int idx);

#endif