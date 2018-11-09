#include"global.h"
#include"vocabulary.h"
#include"parser.h"
#include"utils.h"
#include"extract.h"
#include"graph.h"

// unflatten callgraph.gv
// dot -Tpdf callgraph.gv > callgraph.pdf
// fdp callgraph.gv -Tpdf > callgraph.pdf
// sfdp callgraph.gv -Tpdf > callgraph.pdf

void CalcConnections()
{
  for(int i=0; i<nwords; i++)
  {
    if (vocabulary[i].ovidx != -1) continue; // starflight.com file
    if (vocabulary[i].codep != CODECALL) continue;
    if (vocabulary[i].parp == 0x84fa) continue; // MSET-CO
    if (vocabulary[i].parp == 0x253e) continue; // []

    int j = vocabulary[i].parp;
    while(!pline[j].iswordheader && j<(FILESTAR0SIZE+0x100))
    {
      if (pline[j].word)
      {
        WORD *e = GetWordByAddr(pline[j].word, pline[j].ovidx);
        if (e != NULL) e->nconnections++;
      }
      j++;
    }
  }
}

extern void LoadSTARFLT();
extern void DisasStarflt();

// Graphviz callgraph
void WriteCallGraph()
{
  LoadSTARFLT();
  DisasStarflt();
  CalcConnections();

  FILE *fp = fopen("callgraph.gv", "w");
  fprintf(fp, "digraph G {\n");
  fprintf(fp, "splines=true;\n");
  //fprintf(fp, "overlap=scale;\n");
  fprintf(fp, "overlap=false;\n");

  //fprintf(fp, "overlap=scalexy;\n");
  //fprintf(fp, "overlap=prism;\n");
  //fprintf(fp, "overlap_scaling=0.01;\n");
  //fprintf(fp, "ratio=0.7;\n");

  //fprintf(fp, "ratio=fill;\n");
  //fprintf(fp, "rankdir=LR;\n");
  //fprintf(fp, "splines=true;\n");
  //fprintf(fp, "overlap=scale;\n");
  //fprintf(fp, "node [\n");
  //fprintf(fp, "    shape=circle,\n");
  //fprintf(fp, "    fixedsize=true,\n");
  //fprintf(fp, "    width=0.3,\n");
  //fprintf(fp, "    color="black",\n");
  //fprintf(fp, "    fillcolor="#eeeeee",\n");
  //fprintf(fp, "    style="filled,solid",\n");
  //fprintf(fp, "    fontsize=20\n");
  //fprintf(fp, "]\n");

  //fprintf(fp, "  ratio=1\n");
  //fprintf(fp, "  nodesep=0.7\n");

      for(int i=0; i<nwords; i++)
      {
          if (vocabulary[i].ovidx != -1) continue;
          if (vocabulary[i].codep != CODECALL) continue;
          if (vocabulary[i].parp == 0x84fa) continue; // MSET-CO
          if (vocabulary[i].parp == 0x253e) continue; // []
          if (vocabulary[i].nconnections > 5) continue;

          int j = vocabulary[i].parp;
          while(!pline[j].iswordheader && j<(FILESTAR0SIZE+0x100))
          {
            //if (pline[j].word) printf("%s\n", GetWordNameByAddr(pline[j].word, -1));
            if (pline[j].word)
            {
              //printf("  0x%04x 0x%04x\n", j, pline[j].word);
              WORD *e = GetWordByAddr(pline[j].word, pline[j].ovidx);
              if (e != NULL)
              if (e->nconnections < 5)
              if (e->codep != CODEEXIT)
              if (e->codep != CODEPOINTER)
              if (e->codep != CODECONSTANT)
              if (e->codep != CODELIT)
              if (e->codep != CODE2LIT)
              if (e->codep == CODECALL)
              {
                //printf("  %s\n", Forth2CString(GetWordName(e)));
                fprintf(fp, "  %s -> ", Forth2CString(GetWordName(&vocabulary[i])));
                fprintf(fp, "%s;\n", Forth2CString(GetWordName(e)));
                //fprintf(fp, "%s -- %s;\n", GetWordName(&vocabulary[i]), GetWordName(e));
              }
            }
            j++;
          }
          printf("0x%04x %s %i\n", vocabulary[i].parp, GetWordName(&vocabulary[i]), j-vocabulary[i].parp);
      }

  fprintf(fp, "}\n");
  fclose(fp);

}
