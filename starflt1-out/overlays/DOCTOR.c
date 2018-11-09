// ====== OVERLAY 'DOCTOR' ======
// store offset = 0xf060
// overlay size   = 0x0500

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF076  codep:0x73ea wordp:0xf076 size:0x0006 C-string:'WF076'
//           WF07E  codep:0x744d wordp:0xf07e size:0x0003 C-string:'WF07E'
//           WF083  codep:0x744d wordp:0xf083 size:0x0003 C-string:'WF083'
//           WF088  codep:0x744d wordp:0xf088 size:0x0003 C-string:'WF088'
//           WF08D  codep:0x744d wordp:0xf08d size:0x0003 C-string:'WF08D'
//           WF092  codep:0x224c wordp:0xf092 size:0x0012 C-string:'WF092'
//           WF0A6  codep:0x224c wordp:0xf0a6 size:0x003e C-string:'WF0A6'
//           WF0E6  codep:0x224c wordp:0xf0e6 size:0x00a9 C-string:'WF0E6'
//           WF191  codep:0x224c wordp:0xf191 size:0x001c C-string:'WF191'
//           WF1AF  codep:0x224c wordp:0xf1af size:0x0049 C-string:'WF1AF'
//           WF1FA  codep:0x224c wordp:0xf1fa size:0x002d C-string:'WF1FA'
//           WF229  codep:0x224c wordp:0xf229 size:0x0019 C-string:'WF229'
//           WF244  codep:0x224c wordp:0xf244 size:0x0029 C-string:'WF244'
//           WF26F  codep:0x224c wordp:0xf26f size:0x003e C-string:'WF26F'
//           WF2AF  codep:0x224c wordp:0xf2af size:0x0028 C-string:'WF2AF'
//           WF2D9  codep:0x224c wordp:0xf2d9 size:0x0016 C-string:'WF2D9'
//           WF2F1  codep:0x224c wordp:0xf2f1 size:0x002b C-string:'WF2F1'
//           WF31E  codep:0x224c wordp:0xf31e size:0x0014 C-string:'WF31E'
//           WF334  codep:0x224c wordp:0xf334 size:0x0012 C-string:'WF334'
//           WF348  codep:0x224c wordp:0xf348 size:0x0012 C-string:'WF348'
//          NPCREW  codep:0x4a4f wordp:0xf365 size:0x000c C-string:'NPCREW'
//           WF373  codep:0x224c wordp:0xf373 size:0x00ac C-string:'WF373'
//           WF421  codep:0x224c wordp:0xf421 size:0x00a5 C-string:'WF421'
//      (/EXAMINE)  codep:0x224c wordp:0xf4d5 size:0x000c C-string:'_ro__slash_EXAMINE_rc_'
//        (/TREAT)  codep:0x224c wordp:0xf4ee size:0x0000 C-string:'_ro__slash_TREAT_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_XBLT; // XBLT
extern Color BLACK; // BLACK
void DrawR(); // .R
void MS(); // MS
void WITHIN(); // WITHIN
void Store_3(); // !_3
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void INEXT(); // INEXT
void IPREV(); // IPREV
void _gt_1FONT(); // >1FONT
void CTPOS_dot_(); // CTPOS.
void CTERASE(); // CTERASE
void StoreCRS(); // !CRS
void _do__dot_(); // $.
void POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
void CTCR(); // CTCR
void CTINIT(); // CTINIT
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void Y_slash_N(); // Y/N
void CMESS(); // CMESS
void _2DUP(); // 2DUP
void ROT(); // ROT
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================



// 0xf072: db 0x4d 0x00 'M '

// ================================================
// 0xf074: WORD 'WF076' codep=0x73ea wordp=0xf076
// ================================================
LoadDataType WF076 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6489};

// ================================================
// 0xf07c: WORD 'WF07E' codep=0x744d wordp=0xf07e
// ================================================
IFieldType WF07E = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xf081: WORD 'WF083' codep=0x744d wordp=0xf083
// ================================================
IFieldType WF083 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xf086: WORD 'WF088' codep=0x744d wordp=0xf088
// ================================================
IFieldType WF088 = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xf08b: WORD 'WF08D' codep=0x744d wordp=0xf08d
// ================================================
IFieldType WF08D = {ASSIGN_CREWIDX, 0x11, 0x03};

// ================================================
// 0xf090: WORD 'WF092' codep=0x224c wordp=0xf092 params=0 returns=0
// ================================================

void WF092() // WF092
{
  Push(0x0040);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("[N Y]", 5); // (.")
}


// ================================================
// 0xf0a4: WORD 'WF0A6' codep=0x224c wordp=0xf0a6 params=1 returns=1
// ================================================

void WF0A6() // WF0A6
{
  unsigned short int a, i, imax, b;
  a = Pop(); // >R
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0);
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push((0x63ef+WF08D.offset) + i * 3); // WF08D<IFIELD> I 3 * +
    Get_gt_C_plus_S(); // @>C+S
    Push(Read16(0x63ef+WF088.offset) & a); // WF088<IFIELD> @ J AND
    if (Pop() != 0)
    {
      Push(Pop() + 1); //  1+
      b = Pop(); // >R
      CI(); // CI
      Push(b); // R>
      imax = i; // LEAVE
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

  ICLOSE(); // ICLOSE
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf0e4: WORD 'WF0E6' codep=0x224c wordp=0xf0e6 params=1 returns=0
// ================================================

void WF0E6() // WF0E6
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a==0?1:0); // I 0=
  if (Pop() != 0)
  {
    PRINT("DEAD", 4); // (.")
  } else
  {
    Push(a); // I
    Push(1);
    Push(0x0015);
    WITHIN(); // WITHIN
    if (Pop() != 0)
    {
      PRINT("CRITICALLY", 10); // (.")
    } else
    {
      Push(a); // I
      Push(0x0015);
      Push(0x0033);
      WITHIN(); // WITHIN
      if (Pop() != 0)
      {
        PRINT("HEAVILY", 7); // (.")
      } else
      {
        Push(a); // I
        Push(0x0033);
        Push(0x0051);
        WITHIN(); // WITHIN
        if (Pop() != 0)
        {
          PRINT("MODERATELY", 10); // (.")
        } else
        {
          Push(a); // I
          Push(0x0051);
          Push(0x0064);
          WITHIN(); // WITHIN
          if (Pop() != 0)
          {
            PRINT("SLIGHTLY", 8); // (.")
          } else
          {
            PRINT("NOT", 3); // (.")
          }
        }
      }
    }
    PRINT(" WOUNDED", 8); // (.")
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf18f: WORD 'WF191' codep=0x224c wordp=0xf191 params=1 returns=0
// ================================================

void WF191() // WF191
{
  if (Pop() != 0)
  {
    PRINT("TREAT", 5); // (.")
    return;
  }
  PRINT("EXAMINE", 7); // (.")
}


// ================================================
// 0xf1ad: WORD 'WF1AF' codep=0x224c wordp=0xf1af
// ================================================

void WF1AF() // WF1AF
{
  _gt_C_plus_S(); // >C+S
  CTINIT(); // CTINIT
  PRINT("SHOULD I STOP TREATING ", 23); // (.")
  Push(0x63ef+WF07E.offset); // WF07E<IFIELD>
  _do__dot_(); // $.
  ICLOSE(); // ICLOSE
  CTCR(); // CTCR
  PRINT("TO ", 3); // (.")
  WF191(); // WF191
  PRINT(" SOMEONE ELSE\?", 14); // (.")
  CTCR(); // CTCR
  WF092(); // WF092
  Y_slash_N(); // Y/N
  CTERASE(); // CTERASE
}


// ================================================
// 0xf1f8: WORD 'WF1FA' codep=0x224c wordp=0xf1fa params=0 returns=0
// ================================================

void WF1FA() // WF1FA
{
  Push(0x63ef+WF07E.offset); // WF07E<IFIELD>
  _do__dot_(); // $.
  PRINT(" DOESN'T NEED MEDICAL", 21); // (.")
  CTCR(); // CTCR
  PRINT("TREATMENT.", 10); // (.")
}


// ================================================
// 0xf227: WORD 'WF229' codep=0x224c wordp=0xf229 params=0 returns=0
// ================================================

void WF229() // WF229
{
  Push(0x63ef+WF07E.offset); // WF07E<IFIELD>
  _do__dot_(); // $.
  PRINT(" IS BEYOND HELP.", 16); // (.")
}


// ================================================
// 0xf242: WORD 'WF244' codep=0x224c wordp=0xf244 params=0 returns=0
// ================================================

void WF244() // WF244
{
  PRINT("I AM STARTING TREATMENT ON", 26); // (.")
  CTCR(); // CTCR
  Push(0x63ef+WF07E.offset); // WF07E<IFIELD>
  _do__dot_(); // $.
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf26d: WORD 'WF26F' codep=0x224c wordp=0xf26f params=2 returns=0
// ================================================

void WF26F() // WF26F
{
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+WF083.offset)&0xFF); // WF083<IFIELD> C@
  Push(1);
  Push(0x0064);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    WF244(); // WF244
    Push(Read16(0x63ef+WF088.offset) | 4); // WF088<IFIELD> @ 4 OR
    Push(0x63ef+WF088.offset); // WF088<IFIELD>
    Store_3(); // !_3
  } else
  {
    Push((Read16(0x63ef+WF083.offset)&0xFF)==0x0064?1:0); // WF083<IFIELD> C@ 0x0064 =
    if (Pop() != 0)
    {
      WF1FA(); // WF1FA
    } else
    {
      WF229(); // WF229
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2ad: WORD 'WF2AF' codep=0x224c wordp=0xf2af params=0 returns=0
// ================================================

void WF2AF() // WF2AF
{
  PRINT("I AM CEASING TREATMENT ON", 25); // (.")
  CTCR(); // CTCR
  Push(0x63ef+WF07E.offset); // WF07E<IFIELD>
  _do__dot_(); // $.
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf2d7: WORD 'WF2D9' codep=0x224c wordp=0xf2d9 params=2 returns=0
// ================================================

void WF2D9() // WF2D9
{
  _gt_C_plus_S(); // >C+S
  WF2AF(); // WF2AF
  Push(Read16(0x63ef+WF088.offset) & 0xfffb); // WF088<IFIELD> @ 0xfffb AND
  Push(0x63ef+WF088.offset); // WF088<IFIELD>
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2ef: WORD 'WF2F1' codep=0x224c wordp=0xf2f1 params=0 returns=0
// ================================================

void WF2F1() // WF2F1
{
  PRINT("I AM CONTINUING TREATMENT ON", 28); // (.")
  CTCR(); // CTCR
  Push(0x63ef+WF07E.offset); // WF07E<IFIELD>
  _do__dot_(); // $.
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf31c: WORD 'WF31E' codep=0x224c wordp=0xf31e params=2 returns=0
// ================================================

void WF31E() // WF31E
{
  _gt_C_plus_S(); // >C+S
  WF2F1(); // WF2F1
  Push(Read16(0x63ef+WF088.offset) | 4); // WF088<IFIELD> @ 4 OR
  Push(0x63ef+WF088.offset); // WF088<IFIELD>
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf332: WORD 'WF334' codep=0x224c wordp=0xf334 params=0 returns=1
// ================================================

void WF334() // WF334
{
  do
  {
    INEXT(); // INEXT
    Push((Read16(0x63ef+WF088.offset)&0xFF) & 8); // WF088<IFIELD> C@ 8 AND
  } while(Pop() == 0);
  Push(1);
}


// ================================================
// 0xf346: WORD 'WF348' codep=0x224c wordp=0xf348 params=0 returns=1
// ================================================

void WF348() // WF348
{
  do
  {
    IPREV(); // IPREV
    Push((Read16(0x63ef+WF088.offset)&0xFF) & 8); // WF088<IFIELD> C@ 8 AND
  } while(Pop() == 0);
  Push(1);
}


// ================================================
// 0xf35a: WORD 'NPCREW' codep=0x4a4f wordp=0xf365
// ================================================

void NPCREW() // NPCREW
{
  switch(Pop()) // NPCREW
  {
  case 1:
    WF334(); // WF334
    break;
  case 65535:
    WF348(); // WF348
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xf371: WORD 'WF373' codep=0x224c wordp=0xf373
// ================================================

void WF373() // WF373
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("WHO SHOULD I ", 13); // (.")
  WF191(); // WF191
  PRINT("\?", 1); // (.")
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  while(1)
  {
    Push(!((Read16(0x63ef+WF088.offset)&0xFF) & 8)); // WF088<IFIELD> C@ 8 AND NOT
    if (Pop() == 0) break;

    INEXT(); // INEXT
  }
  Push(1);
  Push(0x0015);
  CMESS(); // CMESS
  PRINT("CHOOSE CREWMEMBER ^\\", 20); // (.")
  StoreCRS(); // !CRS
  Push(2);
  Push(0x0012);
  CMESS(); // CMESS
  PRINT("AND PRESS SPACEBAR", 18); // (.")
  StoreCRS(); // !CRS
  Push(0x000b);
  Push(2);
  CTPOS_dot_(); // CTPOS.
  Push(0x63ef+WF07E.offset); // WF07E<IFIELD>
  _do__dot_(); // $.
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); // DROP
    NPCREW(); // NPCREW case
    if (Pop() != 0)
    {
      Push(0x000b);
      Push(2);
      CTPOS_dot_(); // CTPOS.
      Push(0x000f);
      GetColor(BLACK);
      POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
      Push(0x63ef+WF07E.offset); // WF07E<IFIELD>
      _do__dot_(); // $.
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  CI(); // CI
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf41f: WORD 'WF421' codep=0x224c wordp=0xf421 params=2 returns=0
// ================================================

void WF421() // WF421
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WF07E.offset); // WF07E<IFIELD>
  _do__dot_(); // $.
  PRINT(" IS ", 4); // (.")
  Push(Read16(0x63ef+WF083.offset)&0xFF); // WF083<IFIELD> C@
  Push(Read16(regsp)); // DUP
  WF0E6(); // WF0E6
  if (Pop() != 0)
  {
    PRINT(",", 1); // (.")
    CTCR(); // CTCR
    PRINT("AND HAS A VITALITY OF ", 22); // (.")
    Push(Read16(0x63ef+WF083.offset)&0xFF); // WF083<IFIELD> C@
    Push(0);
    DrawR(); // .R
    PRINT(" AND A", 6); // (.")
    CTCR(); // CTCR
    PRINT("DURABILITY OF ", 14); // (.")
    LoadData(WF076); // from 'CREWMEMBER'
    Push(Read16(Pop())&0xFF); //  C@
    Push(0);
    DrawR(); // .R
  }
  PRINT(".", 1); // (.")
  CTCR(); // CTCR
  Push(Read16(0x63ef+WF088.offset) & 4); // WF088<IFIELD> @ 4 AND
  if (Pop() != 0)
  {
    Push(0x63ef+WF07E.offset); // WF07E<IFIELD>
    _do__dot_(); // $.
    PRINT(" IS CURRENTLY BEING", 19); // (.")
    CTCR(); // CTCR
    PRINT("TREATED.", 8); // (.")
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4c6: WORD '(/EXAMINE)' codep=0x224c wordp=0xf4d5
// ================================================
// entry

void _ro__slash_EXAMINE_rc_() // (/EXAMINE)
{
  CTERASE(); // CTERASE
  _gt_1FONT(); // >1FONT
  Push(0);
  WF373(); // WF373
  WF421(); // WF421
}


// ================================================
// 0xf4e1: WORD '(/TREAT)' codep=0x224c wordp=0xf4ee
// ================================================
// entry

void _ro__slash_TREAT_rc_() // (/TREAT)
{
  CTERASE(); // CTERASE
  Push(4);
  WF0A6(); // WF0A6
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    Push(1);
    ROT(); // ROT
    ROT(); // ROT
    WF1AF(); // WF1AF
    if (Pop() != 0)
    {
      WF2D9(); // WF2D9
      Push(0x09c4);
      MS(); // MS
      Push(1);
      WF373(); // WF373
      CTERASE(); // CTERASE
      WF26F(); // WF26F
    } else
    {
      WF31E(); // WF31E
    }
    return;
  }
  Push(1);
  WF373(); // WF373
  CTERASE(); // CTERASE
  WF26F(); // WF26F
}

// 0xf52a: db 0x44 0x4f 0x43 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x44 0x4f 0x43 0x54 0x4f 0x52 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'DOC-VOC_________________________ for DOCTOR----------- '

