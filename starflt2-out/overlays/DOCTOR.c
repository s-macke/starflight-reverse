// ====== OVERLAY 'DOCTOR' ======
// store offset = 0xf060
// overlay size   = 0x0500

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF076  codep:0x7394 wordp:0xf076 size:0x0006 C-string:'WF076'
//           WF07E  codep:0x7420 wordp:0xf07e size:0x0003 C-string:'WF07E'
//           WF083  codep:0x7420 wordp:0xf083 size:0x0003 C-string:'WF083'
//           WF088  codep:0x7420 wordp:0xf088 size:0x0003 C-string:'WF088'
//           WF08D  codep:0x7420 wordp:0xf08d size:0x0003 C-string:'WF08D'
//           WF092  codep:0x224c wordp:0xf092 size:0x0012 C-string:'WF092'
//           WF0A6  codep:0x224c wordp:0xf0a6 size:0x003e C-string:'WF0A6'
//           WF0E6  codep:0x224c wordp:0xf0e6 size:0x00c8 C-string:'WF0E6'
//           WF1B0  codep:0x224c wordp:0xf1b0 size:0x001c C-string:'WF1B0'
//           WF1CE  codep:0x224c wordp:0xf1ce size:0x0049 C-string:'WF1CE'
//           WF219  codep:0x224c wordp:0xf219 size:0x002d C-string:'WF219'
//           WF248  codep:0x224c wordp:0xf248 size:0x0019 C-string:'WF248'
//           WF263  codep:0x224c wordp:0xf263 size:0x0029 C-string:'WF263'
//           WF28E  codep:0x224c wordp:0xf28e size:0x003e C-string:'WF28E'
//           WF2CE  codep:0x224c wordp:0xf2ce size:0x0028 C-string:'WF2CE'
//           WF2F8  codep:0x224c wordp:0xf2f8 size:0x0016 C-string:'WF2F8'
//           WF310  codep:0x224c wordp:0xf310 size:0x002b C-string:'WF310'
//           WF33D  codep:0x224c wordp:0xf33d size:0x0014 C-string:'WF33D'
//           WF353  codep:0x224c wordp:0xf353 size:0x0012 C-string:'WF353'
//           WF367  codep:0x224c wordp:0xf367 size:0x0012 C-string:'WF367'
//          NPCREW  codep:0x4b3b wordp:0xf384 size:0x000c C-string:'NPCREW'
//           WF392  codep:0x224c wordp:0xf392 size:0x00ac C-string:'WF392'
//           WF440  codep:0x224c wordp:0xf440 size:0x00a5 C-string:'WF440'
//      (/EXAMINE)  codep:0x224c wordp:0xf4f4 size:0x000c C-string:'_ro__slash_EXAMINE_rc_'
//        (/TREAT)  codep:0x224c wordp:0xf50d size:0x0000 C-string:'_ro__slash_TREAT_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_XBLT; // XBLT
extern Color BLACK; // BLACK
void DrawR(); // .R
void MS(); // MS
void WITHIN(); // WITHIN
void Store_2(); // !_2
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
void POLY_dash_ER(); // POLY-ER
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



// 0xf072: db 0x4f 0x00 'O '

// ================================================
// 0xf074: WORD 'WF076' codep=0x7394 wordp=0xf076
// ================================================
LoadDataType WF076 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xf07c: WORD 'WF07E' codep=0x7420 wordp=0xf07e
// ================================================
IFieldType WF07E = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xf081: WORD 'WF083' codep=0x7420 wordp=0xf083
// ================================================
IFieldType WF083 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xf086: WORD 'WF088' codep=0x7420 wordp=0xf088
// ================================================
IFieldType WF088 = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xf08b: WORD 'WF08D' codep=0x7420 wordp=0xf08d
// ================================================
IFieldType WF08D = {ASSIGN_CREWIDX, 0x11, 0x03};

// ================================================
// 0xf090: WORD 'WF092' codep=0x224c wordp=0xf092 params=0 returns=0
// ================================================

void WF092() // WF092
{
  Push(0x0040);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("[N Y]", 5); // (.")
}


// ================================================
// 0xf0a4: WORD 'WF0A6' codep=0x224c wordp=0xf0a6 params=1 returns=1
// ================================================

void WF0A6() // WF0A6
{
  unsigned short int a, i, imax, b;
  a = Pop(); // >R
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0);
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push((0x65e1+WF08D.offset) + i * 3); // WF08D<IFIELD> I 3 * +
    Get_gt_C_plus_S(); // @>C+S
    Push(Read16(0x65e1+WF088.offset) & a); // WF088<IFIELD> @ J AND
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
  Push(Read16(0x65e1+WF088.offset) & 0x0010); // WF088<IFIELD> @ 0x0010 AND
  if (Pop() != 0)
  {
    PRINT("COMATOSE", 8); // (.")
    Pop(); // DROP
    return;
  }
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
// 0xf1ae: WORD 'WF1B0' codep=0x224c wordp=0xf1b0 params=1 returns=0
// ================================================

void WF1B0() // WF1B0
{
  if (Pop() != 0)
  {
    PRINT("TREAT", 5); // (.")
    return;
  }
  PRINT("EXAMINE", 7); // (.")
}


// ================================================
// 0xf1cc: WORD 'WF1CE' codep=0x224c wordp=0xf1ce
// ================================================

void WF1CE() // WF1CE
{
  _gt_C_plus_S(); // >C+S
  CTINIT(); // CTINIT
  PRINT("SHOULD I STOP TREATING ", 23); // (.")
  Push(0x65e1+WF07E.offset); // WF07E<IFIELD>
  _do__dot_(); // $.
  ICLOSE(); // ICLOSE
  CTCR(); // CTCR
  PRINT("TO ", 3); // (.")
  WF1B0(); // WF1B0
  PRINT(" SOMEONE ELSE\?", 14); // (.")
  CTCR(); // CTCR
  WF092(); // WF092
  Y_slash_N(); // Y/N
  CTERASE(); // CTERASE
}


// ================================================
// 0xf217: WORD 'WF219' codep=0x224c wordp=0xf219 params=0 returns=0
// ================================================

void WF219() // WF219
{
  Push(0x65e1+WF07E.offset); // WF07E<IFIELD>
  _do__dot_(); // $.
  PRINT(" DOESN'T NEED MEDICAL", 21); // (.")
  CTCR(); // CTCR
  PRINT("TREATMENT.", 10); // (.")
}


// ================================================
// 0xf246: WORD 'WF248' codep=0x224c wordp=0xf248 params=0 returns=0
// ================================================

void WF248() // WF248
{
  Push(0x65e1+WF07E.offset); // WF07E<IFIELD>
  _do__dot_(); // $.
  PRINT(" IS BEYOND HELP.", 16); // (.")
}


// ================================================
// 0xf261: WORD 'WF263' codep=0x224c wordp=0xf263 params=0 returns=0
// ================================================

void WF263() // WF263
{
  PRINT("I AM STARTING TREATMENT ON", 26); // (.")
  CTCR(); // CTCR
  Push(0x65e1+WF07E.offset); // WF07E<IFIELD>
  _do__dot_(); // $.
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf28c: WORD 'WF28E' codep=0x224c wordp=0xf28e params=2 returns=0
// ================================================

void WF28E() // WF28E
{
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+WF083.offset)&0xFF); // WF083<IFIELD> C@
  Push(1);
  Push(0x0064);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    WF263(); // WF263
    Push(Read16(0x65e1+WF088.offset) | 4); // WF088<IFIELD> @ 4 OR
    Push(0x65e1+WF088.offset); // WF088<IFIELD>
    Store_2(); // !_2
  } else
  {
    Push((Read16(0x65e1+WF083.offset)&0xFF)==0x0064?1:0); // WF083<IFIELD> C@ 0x0064 =
    if (Pop() != 0)
    {
      WF219(); // WF219
    } else
    {
      WF248(); // WF248
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2cc: WORD 'WF2CE' codep=0x224c wordp=0xf2ce params=0 returns=0
// ================================================

void WF2CE() // WF2CE
{
  PRINT("I AM CEASING TREATMENT ON", 25); // (.")
  CTCR(); // CTCR
  Push(0x65e1+WF07E.offset); // WF07E<IFIELD>
  _do__dot_(); // $.
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf2f6: WORD 'WF2F8' codep=0x224c wordp=0xf2f8 params=2 returns=0
// ================================================

void WF2F8() // WF2F8
{
  _gt_C_plus_S(); // >C+S
  WF2CE(); // WF2CE
  Push(Read16(0x65e1+WF088.offset) & 0xfffb); // WF088<IFIELD> @ 0xfffb AND
  Push(0x65e1+WF088.offset); // WF088<IFIELD>
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf30e: WORD 'WF310' codep=0x224c wordp=0xf310 params=0 returns=0
// ================================================

void WF310() // WF310
{
  PRINT("I AM CONTINUING TREATMENT ON", 28); // (.")
  CTCR(); // CTCR
  Push(0x65e1+WF07E.offset); // WF07E<IFIELD>
  _do__dot_(); // $.
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf33b: WORD 'WF33D' codep=0x224c wordp=0xf33d params=2 returns=0
// ================================================

void WF33D() // WF33D
{
  _gt_C_plus_S(); // >C+S
  WF310(); // WF310
  Push(Read16(0x65e1+WF088.offset) | 4); // WF088<IFIELD> @ 4 OR
  Push(0x65e1+WF088.offset); // WF088<IFIELD>
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf351: WORD 'WF353' codep=0x224c wordp=0xf353 params=0 returns=1
// ================================================

void WF353() // WF353
{
  do
  {
    INEXT(); // INEXT
    Push((Read16(0x65e1+WF088.offset)&0xFF) & 8); // WF088<IFIELD> C@ 8 AND
  } while(Pop() == 0);
  Push(1);
}


// ================================================
// 0xf365: WORD 'WF367' codep=0x224c wordp=0xf367 params=0 returns=1
// ================================================

void WF367() // WF367
{
  do
  {
    IPREV(); // IPREV
    Push((Read16(0x65e1+WF088.offset)&0xFF) & 8); // WF088<IFIELD> C@ 8 AND
  } while(Pop() == 0);
  Push(1);
}


// ================================================
// 0xf379: WORD 'NPCREW' codep=0x4b3b wordp=0xf384
// ================================================

void NPCREW() // NPCREW
{
  switch(Pop()) // NPCREW
  {
  case 1:
    WF353(); // WF353
    break;
  case 65535:
    WF367(); // WF367
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xf390: WORD 'WF392' codep=0x224c wordp=0xf392
// ================================================

void WF392() // WF392
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("WHO SHOULD I ", 13); // (.")
  WF1B0(); // WF1B0
  PRINT("\?", 1); // (.")
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  while(1)
  {
    Push(!((Read16(0x65e1+WF088.offset)&0xFF) & 8)); // WF088<IFIELD> C@ 8 AND NOT
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
  Push(0x65e1+WF07E.offset); // WF07E<IFIELD>
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
      POLY_dash_ER(); // POLY-ER
      Push(0x65e1+WF07E.offset); // WF07E<IFIELD>
      _do__dot_(); // $.
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  CI(); // CI
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf43e: WORD 'WF440' codep=0x224c wordp=0xf440
// ================================================

void WF440() // WF440
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WF07E.offset); // WF07E<IFIELD>
  _do__dot_(); // $.
  PRINT(" IS ", 4); // (.")
  Push(Read16(0x65e1+WF083.offset)&0xFF); // WF083<IFIELD> C@
  Push(Read16(regsp)); // DUP
  WF0E6(); // WF0E6
  if (Pop() != 0)
  {
    PRINT(",", 1); // (.")
    CTCR(); // CTCR
    PRINT("AND HAS A VITALITY OF ", 22); // (.")
    Push(Read16(0x65e1+WF083.offset)&0xFF); // WF083<IFIELD> C@
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
  Push(Read16(0x65e1+WF088.offset) & 4); // WF088<IFIELD> @ 4 AND
  if (Pop() != 0)
  {
    Push(0x65e1+WF07E.offset); // WF07E<IFIELD>
    _do__dot_(); // $.
    PRINT(" IS CURRENTLY BEING", 19); // (.")
    CTCR(); // CTCR
    PRINT("TREATED.", 8); // (.")
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4e5: WORD '(/EXAMINE)' codep=0x224c wordp=0xf4f4
// ================================================
// entry

void _ro__slash_EXAMINE_rc_() // (/EXAMINE)
{
  CTERASE(); // CTERASE
  _gt_1FONT(); // >1FONT
  Push(0);
  WF392(); // WF392
  WF440(); // WF440
}


// ================================================
// 0xf500: WORD '(/TREAT)' codep=0x224c wordp=0xf50d
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
    WF1CE(); // WF1CE
    if (Pop() != 0)
    {
      WF2F8(); // WF2F8
      Push(0x09c4);
      MS(); // MS
      Push(1);
      WF392(); // WF392
      CTERASE(); // CTERASE
      WF28E(); // WF28E
    } else
    {
      WF33D(); // WF33D
    }
    return;
  }
  Push(1);
  WF392(); // WF392
  CTERASE(); // CTERASE
  WF28E(); // WF28E
}

// 0xf549: db 0x44 0x4f 0x43 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'DOC-VOC________________ '

