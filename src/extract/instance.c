#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"../disasOV/global.h"
#include"../disasOV/extract.h"
#include"huffman.h"


/*
standard instance fields:
IFieldType INST_dash_SIB     = {DIRECTORYIDX, 0x00, 0x03};
IFieldType INST_dash_PREV    = {DIRECTORYIDX, 0x03, 0x03};
IFieldType INST_dash_OFF     = {DIRECTORYIDX, 0x06, 0x03};
IFieldType INST_dash_CLASS   = {DIRECTORYIDX, 0x09, 0x01};
IFieldType INST_dash_SPECIES = {DIRECTORYIDX, 0x0a, 0x01};
IFieldType INST_dash_QTY     = {DIRECTORYIDX, 0x0b, 0x02};  <- lsize starts from here
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

unsigned char starb[362496];

void IHeader(int a, unsigned int *next, unsigned int *previous, unsigned int *children, unsigned int *class, unsigned int *species, DIRENTRY **de)
{
  *next = ((starb[a+0])<<0) | ((starb[a+1])<<8) | ((starb[a+2])<<16);
  *previous = ((starb[a+3])<<0) | ((starb[a+4])<<8) | ((starb[a+5])<<16);
  *children = ((starb[a+6])<<0) | ((starb[a+7])<<8) | ((starb[a+8])<<16);
  *class = starb[a+0x9];
  *species = starb[a+0xa];
  *de = GetDirByIdx(*class);
}

void IterSibling(FILE *fp, FILE *fph, int iter, int first)
{
    int addr = first;

    unsigned int next, previous, children, class, species;
    DIRENTRY *de;

    int i;
    do
    {
        unsigned int a = addr;
        IHeader(a, &next, &previous, &children, &class, &species, &de);

        fprintf(fph, "  { .instanceoffset=0x%06x, .sib=0x%06x, .prev=0x%06x, .off=0x%06x, .class=0x%02x, .species=0x%02x }, // ",
          addr, next, previous, children, class, species);
          for(int i=0; i<strlen(de->name); i++)
              if (de->name[i] != ' ') fprintf(fph, "%c", de->name[i]);
        fprintf(fph, "\n");

        /*
        char dummy[256];
        sprintf(dummy, "%02x %02x %02x ", class, species, starb[a+11]);
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
        int indent=0;
        for(i=0; i<iter; i++) fprintf(fp, "  ");
        //fprintf(fp, "0x%06x: 0x%06x 0x%06x 0x%06x 0x%02x 0x%02x %s\n", addr, next, previous, children, class, species, GetDirByIdx(class));
        for(int i=0; i<strlen(de->name); i++)
            if (de->name[i] != ' ') fprintf(fp, "%c", de->name[i]);
        if (class == 0x0d) // bank lsize=9
        {
            fprintf(fp, "    %i %i balance:%i %i %i", starb[a+11], starb[a+12], starb[a+13]|(starb[a+14]<<8), starb[a+15], starb[a+16]);
        }
        if (class == 0x0e) // bank-trans lsize=6
        {
            fprintf(fp, "    %i %i amount:%i %i %i", starb[a+11], starb[a+12], starb[a+13]|(starb[a+14]<<8), starb[a+15], starb[a+16]);
        }
        if (class == 0x35) // message
        {
            fprintf(fp, "    '");
            HuffmanDecode(fp, (char*)&starb[a+26], starb[a+25]);
            fprintf(fp, "'");
        }
        if (class == 0x1b) // message
        {
            fprintf(fp, "    '");
            HuffmanDecode(fp, (char*)&starb[a+41], starb[a+40]);
            fprintf(fp, "'");
        }
        if (class == 0x20) // planet lsize=0
        {
            fprintf(fp, "    species=0x%02x seed=0x%04x", starb[a+0xa], addr);
        }
#ifdef STARFLT1
        if (class == 0x30) // string
        {
          //if (species == 32)
              fprintf(fp, "    '");
              HuffmanDecode(fp, (char*)&starb[a+13], starb[a+12]);
              fprintf(fp, "'");
              /*
          else
          {
            fprintf(fp, " ");
            for(int i=0; i<starb[a+11]; i++)
            {
              fprintf(fp, "%c", starb[a+12+i]);
            }
          }
          */
        }

        if (class == 0x17) // starsystem lsize=8 for starflt1, lsize=9 for starflt2
        {
            fprintf(fp, "    species=%2i flaredate=%4i x=%4i y=%4i orbitmask=0x%02x loggedmask=%i",
                starb[a+0xa],
                ((signed char)starb[a+0xb] + ((signed char)starb[a+0xc]<<8)),
                starb[a+0xd] + (starb[a+0xe]<<8),
                starb[a+0xf] + (starb[a+0x10]<<8),
                starb[a+0x11],
                starb[a+0x12]);
        }
/*
        if (class == 0x44) // creatures lsize=17 for starflt1
        {
            fprintf(fp, "    species=%2i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i",
              (int)starb[a+0xa], (int)starb[a+11], (int)starb[a+12], (int)starb[a+13], starb[a+14], starb[a+15], starb[a+16], starb[a+17],
              starb[a+18], starb[a+19], starb[a+20], starb[a+21], starb[a+22], starb[a+23], starb[a+24],
              starb[a+25], starb[a+26], starb[a+27]
            );
        }
        */
#else
        if (class == 0x17) // starsystem lsize=9 for starflt2
        {
            fprintf(fp, "    %i %i %i %i %i %i %i", starb[a+11], starb[a+12], starb[a+13], starb[a+14], starb[a+15], starb[a+16], starb[a+17]);
        }
#endif

        fprintf(fp, "\n");

        if (children != 0) IterSibling(fp, fph, iter+1, children);
        addr = next;
        if (next == 0) return;

    } while(next != first);
}

void ExtractInstance(const char* filenametxt, const char* filenameh)
{
    FILE *fptxt = fopen(filenametxt, "w");
    if (fptxt == NULL)
    {
        fprintf(stderr, "Error: Cannot write file %s\n", filenametxt);
        exit(1);
    }

    FILE *fph = fopen(filenameh, "w");
    if (fph == NULL)
    {
        fprintf(stderr, "Error: Cannot write file %s\n", filenameh);
        exit(1);
    }

    fprintf(fph, "// =====================================\n");
    fprintf(fph, "// =========== Instance Tree ===========\n");
    fprintf(fph, "// =====================================\n\n");

    fprintf(fph, "typedef struct { int instanceoffset, sib, prev, off, class, species; } INSTANCEENTRY;\n\n");

    fprintf(fph, "INSTANCEENTRY instance[]=\n{\n");
/*
    IFieldType INST_dash_SIB = {DIRECTORYIDX, 0x00, 0x03};
    IFieldType INST_dash_PREV = {DIRECTORYIDX, 0x03, 0x03};
    IFieldType INST_dash_OFF = {DIRECTORYIDX, 0x06, 0x03};
    IFieldType INST_dash_CLASS = {DIRECTORYIDX, 0x09, 0x01};
    IFieldType INST_dash_SPECIES = {DIRECTORYIDX, 0x0a, 0x01};
*/
    int size;
    IterSibling(fptxt, fph, 0, 0x1006);

    fprintf(fph, "  { .instanceoffset=-1, .sib=-1, .prev=-1, .off=-1, .class=-1, .species=-1 }\n");
    fprintf(fph, "};\n");

    fclose(fptxt);
    fclose(fph);
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

void ExtractStrings(const char* filenameh)
{
  unsigned int next, previous, children, class, species;
  DIRENTRY *de;

  FILE *fp = fopen(filenameh, "w");
  if (fp == NULL)
  {
      fprintf(stderr, "Error: Cannot write file %s\n", filenameh);
      exit(1);
  }

  #ifdef STARFLT1
  unsigned int initaddress = 0x01c29b;
  unsigned int limitaddress = 0x01e624; // addres at which there is no longer a huffman encoding
  #else
  unsigned int initaddress = 0x02468e;
  unsigned int limitaddress = 0x024a04;
  #endif

  unsigned int a = initaddress;

  fprintf(fp, "typedef struct { int offset; char* string } STRINGENTRY;\n\n");
  fprintf(fp, "STRINGENTRY strings[]=\n{\n");

  do
  {
    IHeader(a, &next, &previous, &children, &class, &species, &de);
    fprintf(fp, "  { .offset=0x%06x, .string=\"", a);
    if (species == 32 && a < limitaddress)
    {
          HuffmanDecode(fp, (char*)&starb[a+13], starb[a+12]);
    }
    else
    {
      for(int i=0; i<starb[a+11]; i++)
      {
        fprintf(fp, "%c", starb[a+12+i]);
      }
    }
    fprintf(fp, "\"}\n");

    a = next;
  } while (a != initaddress);

  fprintf(fp, "  { .offset=-1, .string=NULL}\n");
  fprintf(fp, "};\n");

}

void LoadSTARB()
{
  FILE *fp = fopen(FILESTARB, "rb");
  if (fp == NULL)
  {
    fprintf(stderr, "Error: Cannot open file %s\n", FILESTARB);
    exit(1);
  }
  int ret = fread(starb, 362496, 1, fp);
  fclose(fp);
}

int main()
{
  InitExtract();
  printf("Load STARB\n");
  LoadSTARB();
  printf("Load Directory\n");
  LoadDir(NULL);
  printf("Store instance into '%s' and '%s'\n", OUTDIR"/data/instance.txt", OUTDIR"/data/instance.h");
  ExtractInstance(OUTDIR"/data/instance.txt", OUTDIR"/data/instance.h");
  printf("Store further strings into '%s'\n", OUTDIR"/data/strings.h");
  ExtractStrings(OUTDIR"/data/strings.h");
  return 0;
}
