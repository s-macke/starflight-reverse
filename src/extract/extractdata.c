#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"data.h"
#include"../disasOV/global.h"
#include"../../starflt1-out/data/instance.h"

char* GetInstanceEntry(int offset)
{
  static char buf[512];
  FILE *file = fopen(FILESTARB, "rb");
  if (file == NULL)
  {
    fprintf(stderr, "Error: Cannot open file\n");
    exit(1);
  }
  fseek(file, offset, SEEK_SET);
  int ret = fread(buf, 512, 1, file);
  fclose(file);
  return buf;
}

int GetInstanceIdx(int offset)
{
  int i=0;
  do
  {
    if (instance[i].instanceoffset == offset) return i;
  } while(instance[++i].instanceoffset != -1);
  fprintf(stderr, "Cannot find instance idx from offset 0x%06x\n", offset);
  exit(1);
  return 0;
}

int countSetBits(int n) {
    return !n ? 0 : 1 + countSetBits(n & (n-1));
}

void ExtractStarsystems(FILE *fp)
{
  int i = 0;

  fprintf(fp, "typedef struct { int instanceoffset, x, y, species, nplanets, orbitmask, loggedmask, flaredate; } STARSYSTEMENTRY;\n");
  fprintf(fp, "\nSTARSYSTEMENTRY starsystem[]=\n{\n");

  do
  {
    if (instance[i].class != 0x17) continue;

    unsigned char *buf = GetInstanceEntry(instance[i].instanceoffset);
    int species = buf[0xa];
    int flaredate = ((signed char)buf[0xb] + ((signed char)buf[0xc]<<8));
    int x = (buf[0xd] | (buf[0xe]<<8))>>3;
    int y = (buf[0xf] | (buf[0x10]<<8))>>3;
    int orbitmask = buf[0x11];
    int loggedmask = buf[0x12];
    int nplanets = countSetBits(orbitmask);
    fprintf(fp, "  { .instanceoffset=0x%04x, .species=%2i, .x=%3i, .y=%3i, .nplanets=%1i, .orbitmask=0x%02x, .loggedmask=0x%02x, .flaredate=%i },\n",
      instance[i].instanceoffset, species, x, y, nplanets, orbitmask, loggedmask, flaredate
    );

  } while(instance[++i].instanceoffset != -1);

  fprintf(fp, "  { .instanceoffset=0x%04x, .species=%2i, .x=%3i, .y=%3i, .nplanets=%1i, .orbitmask=0x%02x, .loggedmask=0x%02x, .flaredate=%i }\n",
    0, -1, 0, 0, 0, 0, 0, 0);
  fprintf(fp, "};\n\n");
}

void ExtractPlanets(FILE *fp)
{
  int i = 0;

  fprintf(fp, "typedef struct { int instanceoffset, starsystemoffset, x, y, orbit, species, seed; } PLANETENTRY;\n");
  fprintf(fp, "\nPLANETENTRY planets[]=\n{\n");

  do
  {
    if (instance[i].class != 0x17) continue;

    unsigned char *buf = GetInstanceEntry(instance[i].instanceoffset);
    int species = buf[0xa];
    int flaredate = ((signed char)buf[0xb] + ((signed char)buf[0xc]<<8));
    int x = (buf[0xd] | (buf[0xe]<<8))>>3;
    int y = (buf[0xf] | (buf[0x10]<<8))>>3;
    int orbitmask = buf[0x11];
    int nplanets = countSetBits(orbitmask);
    if (nplanets == 0) continue;
    int nextidx = GetInstanceIdx(instance[i].off);
    int orbit = 0;
    for(int j=0; j<nplanets; j++)
    {
        while(1)
        {
          if ((orbitmask&1) == 0)
          {
            orbitmask >>= 1;
            orbit++;
          } else break;
        }
        orbitmask >>= 1;
        orbit++;

        int planetidx = nextidx;
        if (instance[planetidx].class == 0x0b) // BOX
        {
          planetidx = GetInstanceIdx(instance[nextidx].off);
          if (instance[planetidx].class == 0x18) // STAR
          {
            nextidx = GetInstanceIdx(instance[nextidx].sib);
            planetidx = GetInstanceIdx(instance[nextidx].off);
          }
        }
        if (instance[planetidx].class != 0x20)
        {
          fprintf(stderr, "Error: unusual data found in starsystem %i\n", i);
          exit(1);
        }
        unsigned char *buf = GetInstanceEntry(instance[planetidx].instanceoffset);
        int species = buf[0xa];
        int seed = instance[planetidx].instanceoffset;
        if (species >= 18) seed=planettypes[species].tseed;

        fprintf(fp, "  { .instanceoffset=0x%04x, .starsystemoffset=0x%04x, .species=%2i, .x=%3i, .y=%3i, .orbit=%1i, .seed=0x%04x},\n",
          instance[planetidx].instanceoffset,
          instance[i].instanceoffset,
          species,
          x,
          y,
          orbit,
          seed);

        nextidx = GetInstanceIdx(instance[nextidx].sib);
    }
  } while(instance[++i].instanceoffset != -1);
  fprintf(fp, "  { .instanceoffset=0x%04x, .starsystemoffset=0x%04x, .species=%2i, .x=%3i, .y=%3i, .orbit=%1i, .seed=0x%04x }\n",
    0, 0, -1, 0, 0, 0, 0);

  fprintf(fp, "};\n\n");
}

int main()
{
  const char* filename = OUTDIR"/data/starsystem.h";

  printf("write file %s\n", filename);
  FILE *fp = fopen(filename, "w");
  if (fp == NULL)
  {
      fprintf(stderr, "Error: Cannot write file %s\n", filename);
      exit(1);
  }
  fprintf(fp, "#ifndef STARSYSTEM_H\n");
  fprintf(fp, "#define STARSYSTEM_H\n\n");

  ExtractStarsystems(fp);
  ExtractPlanets(fp);

  fprintf(fp, "#endif\n");

  fclose(fp);

  return 0;
}
