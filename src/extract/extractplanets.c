#include<stdio.h>
#include<string.h>

#include"../cpu/cpu.h"
#include"../emul/call.h"
#include"../emul/graphics.h"
#include"../disasOV/global.h"
#include"../patch/patch.h"
#include"data.h"

void Continue()
{
    while(1)
    {
       if (Step() != OK) return;
    }
}

char* GetColorMap(int idx)
{

  int clrmap = 0;
  switch(planettypes[planetseeds[idx].species].surftype)
  {
      case 4: clrmap = 4; break;
      case 1: clrmap = 5; break;
      case 3: clrmap = 3; break;
      default:
        if ((planettypes[planetseeds[idx].species].lseed&0xFF) != 0)
          clrmap = 1;
        else
          clrmap = 2;
      break;
  }
  //char* palette = &cmap[planettypes[planetseeds[idx].species].surftype+9][0];
  return &cmap[clrmap + 9][0];
  //char* palette = &cmap[10][0];
}

void StoreImage(int idx, int seg)
{
    char filename[128];
    sprintf(filename, OUTDIR"/maps/planet_%i_%i_%i.ppm",
        planetseeds[idx].x/8,
        planetseeds[idx].y/8,
        planetseeds[idx].orbit);

    char* palette = GetColorMap(idx);

    FILE *fp = fopen(filename, "wb");
    fprintf(fp, "P3\n48 48\n255\n");
    for(int j=23; j>=0; j--)
    for(int i=0; i<48; i++)
    {
        int c = ((int)((signed char)Read8Long(seg, j*48+i)))+128;
        fprintf(fp, "%i %i %i ", c, c, c);
    }
    //for(int i=48*24-1; i>=0; i--)
    for(int j=23; j>=0; j--)
    for(int i=0; i<48; i++)
    {
        int c = ((int)((signed char)Read8Long(seg, j*48+i)));
        c = c<0?0:((c >> 1) & 0x38);
        c = palette[c] & 0xF;
        fprintf(fp, "%i %i %i ", (colortable[c]>>16)&0xFF, (colortable[c]>>8)&0xFF, (colortable[c]>>0)&0xFF);
    }
    fprintf(fp, "\n");
    fclose(fp);
}

void StoreImage2(int idx, char *data, int w, int h)
{
    char filename[128];
    sprintf(filename, OUTDIR"/maps/surface_%i_%i_%i.ppm",
        planetseeds[idx].x/8,
        planetseeds[idx].y/8,
        planetseeds[idx].orbit);

    char* palette = GetColorMap(idx);

    FILE *fp = fopen(filename, "wb");
    fprintf(fp, "P3\n%i %i\n255\n", w, h*2);
    for(int j=h-1; j>=0; j--)
    for(int i=0; i<w; i++)
    {
        int c = ((int)((signed char)data[j*w+i]))+128;
        fprintf(fp, "%i %i %i ", c, c, c);
    }

    for(int j=h-1; j>=0; j--)
    for(int i=0; i<w; i++)
    {
        int c = ((int)((signed char)data[j*w+i]));
        c = c<0?0:((c >> 1) & 0x38);
        c = palette[c] & 0xF;
        fprintf(fp, "%i %i %i ", (colortable[c]>>16)&0xFF, (colortable[c]>>8)&0xFF, (colortable[c]>>0)&0xFF);
    }

    fprintf(fp, "\n");
    fclose(fp);
}

#define NN 48 // x-size of small map
#define MM 24 // y-size of small map
#define NNN 48 // calculated pixels per tile on the small map
#define MMM 40
void DrawContour(int idx)
{
    char map[(NNN*NN) * (MMM*MM)];

    printf("Draw Contour\n");

    for(int j=0; j<MM; j++)
    for(int i=0; i<NN; i++)
    {
        char cmd[256];
        sprintf(cmd, "%i XCON ! %i YCON ! NEWCONTOUR\n", i*NNN, j*MMM);
        FillKeyboardBufferString(cmd);
        Continue();
        for(int jj=0; jj<MMM; jj++)
        for(int ii=0; ii<NNN; ii++)
        {
          int x = i*NNN + ii;
          int y = j*MMM + jj;
          map[y*(NNN*NN)+x] = Read8Long(0x7cbe, jj*61+ii);
        }
    }
    StoreImage2(idx, map, NNN*NN, MMM*MM);
}

int main()
{
    InitCPU();
    InitEmulator();
    GraphicsInit();
    EnableInterpreter();
    FillKeyboardBufferString("?EGA ON STARTER\nMOUNTB\n");
    Continue();

    int idx = 0;
    for(;;)
    {
        if (planetseeds[idx].species == -1) return 0;

        printf("=== Generate planet x=%3i y=%3i orbit=%i ===\n",
                    planetseeds[idx].x/8,
                    planetseeds[idx].y/8,
                    planetseeds[idx].orbit);

        char dummy[128];
        sprintf(dummy, "mountb\n%i\nmercator-gen\n", planetseeds[idx].seed);

        FillKeyboardBufferString(dummy);
        Continue();

        if (planetseeds[idx].species == 18)
        {
            memcpy(&m[0x7e51<<4], earthmap, 24*48);
        }
        /*
        if (planetseeds[idx].x == 125*8)
        if (planetseeds[idx].y == 100*8)
        if (planetseeds[idx].orbit == 1)
        {
          DrawContour(idx);
        }
        */
        StoreImage(idx, 0x7e51);
        idx++;
    }
    return 0;
}
