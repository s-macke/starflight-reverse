#ifndef HUFMAN_H
#define HUFMAN_H

char HuffmanDecodeChar(unsigned char *buf, int *byteoffset, int *bits);
void HuffmanDecode(FILE* fp, char* buf, int n);
char* HuffmanDecodeToString(char* buf, int n);

#endif
