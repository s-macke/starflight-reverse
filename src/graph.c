#include"global.h"
#include"vocabulary.h"
#include"parser.h"
#include"utils.h"
#include"extract.h"
#include"graph.h"

// Graphviz callgraph
void WriteCallGraph()
{
  FILE *fp = fopen("callgraph.gv", "w");
  fprintf(fp, "digraph G {\n");
  //fprintf(fp, "  nodesep=0.7\n");

      for(int i=0; i<nwords; i++)
      {
          if (vocabulary[i].ovidx != -1) continue;
          if (vocabulary[i].codep != CODECALL) continue;
          if (vocabulary[i].parp == 0x84fa) continue; // MSET-CO
          if (vocabulary[i].parp == 0x253e) continue; // []

          int j = vocabulary[i].parp;
          while(!pline[j].iswordheader && j<(FILESTAR0SIZE+0x100))
          {
            //if (pline[j].word) printf("%s\n", GetWordNameByAddr(pline[j].word, -1));
            if (pline[j].word)
            {
              //printf("  0x%04x 0x%04x\n", j, pline[j].word);
              WORD *e = GetWordByAddr(pline[j].word, pline[j].ovidx);
              if (e != NULL)
              if (e->codep != CODEEXIT)
              if (e->codep != CODEPOINTER)
              if (e->codep != CODECONSTANT)
              if (e->codep != CODELIT)
              if (e->codep != CODE2LIT)
              if (e->codep == CODECALL)
              {
                printf("  %s\n", Forth2CString(GetWordName(e)));
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
