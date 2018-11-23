#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"global.h"
#include"extract.h"

#include"instance.h"


#ifdef STARFLT1
    unsigned char huffmantable[100] =
    {
        0x9c, 0x81, 0x96, 0x81, 0x81, 0x20, 0x83, 0x81,
        0x81, 0x48, 0x59, 0x43, 0x82, 0x81, 0x4d, 0x57,
        0x81, 0x2e, 0x81, 0x42, 0x84, 0x81, 0x31, 0x81,
        0x5a, 0x81, 0x34, 0x33, 0x86, 0x81, 0x51, 0x81,
        0x81, 0x32, 0x81, 0x25, 0x2b, 0x81, 0x23, 0x28,
        0x81, 0x3f, 0x39, 0x81, 0x37, 0x2a, 0x84, 0x81,
        0x54, 0x81, 0x81, 0x4c, 0x50, 0x46, 0x53, 0x4f,
        0x8d, 0x81, 0x82, 0x81, 0x4e, 0x41, 0x49, 0x81,
        0x81, 0x55, 0x81, 0x47, 0x2c, 0x81, 0x81, 0x58,
        0x27, 0x81, 0x81, 0x21, 0x35, 0x81, 0x26, 0x81,
        0x29, 0x2f, 0x81, 0x45, 0x81, 0x52, 0x81, 0x44,
        0x81, 0x56, 0x4b, 0x81, 0x81, 0x30, 0x81, 0x2d,
        0x81, 0x4a, 0x36, 0x38
    };
#else
    unsigned char huffmantable[102] =
    {
        0xa1, 0x81, 0x8b, 0x81, 0x5e, 0x81, 0x81, 0x45,
        0x81, 0x52, 0x81, 0x44, 0x81, 0x56, 0x4b, 0x81,
        0x81, 0x30, 0x81, 0x2d, 0x81, 0x4a, 0x36, 0x38,
        0x81, 0x20, 0x83, 0x81, 0x81, 0x48, 0x59, 0x43,
        0x82, 0x81, 0x4d, 0x57, 0x81, 0x2e, 0x81, 0x42,
        0x84, 0x81, 0x31, 0x81, 0x5a, 0x81, 0x34, 0x33,
        0x86, 0x81, 0x51, 0x81, 0x81, 0x32, 0x81, 0x25,
        0x2b, 0x81, 0x23, 0x28, 0x81, 0x3f, 0x39, 0x81,
        0x37, 0x2a, 0x86, 0x81, 0x84, 0x81, 0x54, 0x81,
        0x81, 0x4c, 0x50, 0x46, 0x53, 0x4f, 0x82, 0x81,
        0x4e, 0x41, 0x49, 0x81, 0x81, 0x55, 0x81, 0x47,
        0x2c, 0x81, 0x81, 0x58, 0x27, 0x81, 0x81, 0x21,
        0x35, 0x81, 0x26, 0x81, 0x29, 0x2f
    };

#endif

char HuffmanDecodeChar(unsigned char *buf, int *byteoffset, int *bits)
{
    int huffoffset = 0;
    while(1)
    {
        int bit = ((buf[*byteoffset] & (*bits))!=0)?1:0;
        if ((*bits) == 0x80)
        {
            (*byteoffset)++;
        }
        (*bits) >>= 1;
        if (*bits == 0)
        {
            *bits = 0x80;
        }
        //printf("%i\n", *bits);
        if ((huffmantable[huffoffset+bit]&0x80) == 0)
            return huffmantable[huffoffset+bit];
        huffoffset += (huffmantable[huffoffset+bit] & 0x7F) * 2;
    }
}

void HuffmanDecode(FILE* fp, char* buf, int n)
{
    int bits = 0x80;
    int byteoffset = 0;
    for(int i=0; i<n; i++)
    {
        char c = HuffmanDecodeChar((unsigned char*)buf, &byteoffset, &bits);
        fprintf(fp, "%c", c);
    }
}

/*
standard instands fields:
IFieldType INST_dash_SIB     = {DIRECTORYIDX, 0x00, 0x03};
IFieldType INST_dash_PREV    = {DIRECTORYIDX, 0x03, 0x03};
IFieldType INST_dash_OFF     = {DIRECTORYIDX, 0x06, 0x03};
IFieldType INST_dash_CLASS   = {DIRECTORYIDX, 0x09, 0x01};
IFieldType INST_dash_SPECIES = {DIRECTORYIDX, 0x0a, 0x01};
IFieldType INST_dash_QTY     = {DIRECTORYIDX, 0x0b, 0x02};
IFieldType INST_dash_X       = {DIRECTORYIDX, 0x0d, 0x02};
IFieldType INST_dash_Y       = {DIRECTORYIDX, 0x0f, 0x02};
IBFR
LENINST
IHEADLEN
QTYINST
IADDR
@INST-CLASS
@INST-SPECIES
*/

//char instancedone[1024*1024];

void IterSibling(FILE *fp, unsigned char *buf, int iter, int first)
{
    int addr = first;
    unsigned int next, previous, children;
    int i;
    do
    {
        int a = addr - 0x1000;
        next = ((buf[a+0])<<0) | ((buf[a+1])<<8) | ((buf[a+2])<<16);
        previous = ((buf[a+3])<<0) | ((buf[a+4])<<8) | ((buf[a+5])<<16);
        children = ((buf[a+6])<<0) | ((buf[a+7])<<8) | ((buf[a+8])<<16);
        unsigned int class = buf[a+9];
        unsigned int species = buf[a+10];
        DIRENTRY *de = GetDirByIdx(class);
        char dummy[256];
        sprintf(dummy, "%02x %02x %02x ", class, species, buf[a+11]);
        /*
        for(int i=0; i<=10; i++)
            instancedone[a+i] = 1;
        for(int i=11; i<de->lsize+11; i++)
            instancedone[a+i] = 2;
        instancedone[a+0] = 3;
        instancedone[a+1] = dummy[0];
        instancedone[a+2] = dummy[1];
        instancedone[a+4] = dummy[3];
        instancedone[a+5] = dummy[4];
        instancedone[a+7] = dummy[6];
        instancedone[a+8] = dummy[7];
    */
        for(i=0; i<iter; i++) fprintf(fp, "  ");
        //fprintf(fp, "0x%06x: 0x%06x 0x%06x 0x%06x 0x%02x 0x%02x %s\n", addr, next, previous, children, class, species, GetDirByIdx(class));
        fprintf(fp, "%s species:%i size:%i   ", de->name, species, de->lsize);
        if (class == 0x17) // starsystem lsize=8 for starflt1, lsize=9 for starflt2
        {
            fprintf(fp, "%i %i %i %i %i %i %i", buf[a+11], buf[a+12], buf[a+13], buf[a+14], buf[a+15], buf[a+16], buf[a+17]);
        }
        if (class == 0x0d) // bank lsize=9
        {
            fprintf(fp, "%i %i balance:%i %i %i", buf[a+11], buf[a+12], buf[a+13]|(buf[a+14]<<8), buf[a+15], buf[a+16]);
        }
        if (class == 0x0e) // bank-trans lsize=6
        {
            fprintf(fp, "%i %i amount:%i %i %i", buf[a+11], buf[a+12], buf[a+13]|(buf[a+14]<<8), buf[a+15], buf[a+16]);
        }
        if (class == 0x35) // message
        {
            HuffmanDecode(fp, (char*)&buf[a+26], buf[a+25]);
        }
        if (class == 0x1b) // message
        {
            HuffmanDecode(fp, (char*)&buf[a+41], buf[a+40]);
        }
#ifdef STARFLT1
        if (class == 0x30) // string
        {
            HuffmanDecode(fp, (char*)&buf[a+13], buf[a+12]);
        }
#endif

        fprintf(fp, "\n");

        if (children != 0) IterSibling(fp, buf, iter+1, children);
        addr = next;
        if (next == 0) return;

    } while(next != first);
}

void ExtractInstance(const char* filename)
{
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        fprintf(stderr, "Error: Cannot write file %s\n", filename);
        exit(1);
    }

    int size;
    unsigned char* buf = Extract(0x1, &size);
    IterSibling(fp, buf, 0, 0x1006);
    fclose(fp);
    /*
    for(int i=0; i<size; i++)
    {
        if (instancedone[i] == 0)
            printf("-");
        if (instancedone[i] == 3)
            printf("\nX");
        if (instancedone[i] == 1)
            printf("X");
        if (instancedone[i] == 2)
            printf("D");
        if (instancedone[i] >= 0x20)
            printf("%c", instancedone[i]);
    }
    printf("\n");
    */
}
