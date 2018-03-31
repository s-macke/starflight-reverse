// ====== OVERLAY 'DOCTOR' ======
// store offset = 0xf060
// overlay size   = 0x0500

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//      UNK_0xf076  codep:0x7394 parp:0xf076 size:0x0006 C-string:'UNK_0xf076'
//      UNK_0xf07e  codep:0x7420 parp:0xf07e size:0x0003 C-string:'UNK_0xf07e'
//      UNK_0xf083  codep:0x7420 parp:0xf083 size:0x0003 C-string:'UNK_0xf083'
//      UNK_0xf088  codep:0x7420 parp:0xf088 size:0x0003 C-string:'UNK_0xf088'
//      UNK_0xf08d  codep:0x7420 parp:0xf08d size:0x0003 C-string:'UNK_0xf08d'
//      UNK_0xf092  codep:0x224c parp:0xf092 size:0x0012 C-string:'UNK_0xf092'
//      UNK_0xf0a6  codep:0x224c parp:0xf0a6 size:0x003e C-string:'UNK_0xf0a6'
//      UNK_0xf0e6  codep:0x224c parp:0xf0e6 size:0x00c8 C-string:'UNK_0xf0e6'
//      UNK_0xf1b0  codep:0x224c parp:0xf1b0 size:0x001c C-string:'UNK_0xf1b0'
//      UNK_0xf1ce  codep:0x224c parp:0xf1ce size:0x0049 C-string:'UNK_0xf1ce'
//      UNK_0xf219  codep:0x224c parp:0xf219 size:0x002d C-string:'UNK_0xf219'
//      UNK_0xf248  codep:0x224c parp:0xf248 size:0x0019 C-string:'UNK_0xf248'
//      UNK_0xf263  codep:0x224c parp:0xf263 size:0x0029 C-string:'UNK_0xf263'
//      UNK_0xf28e  codep:0x224c parp:0xf28e size:0x003e C-string:'UNK_0xf28e'
//      UNK_0xf2ce  codep:0x224c parp:0xf2ce size:0x0028 C-string:'UNK_0xf2ce'
//      UNK_0xf2f8  codep:0x224c parp:0xf2f8 size:0x0016 C-string:'UNK_0xf2f8'
//      UNK_0xf310  codep:0x224c parp:0xf310 size:0x002b C-string:'UNK_0xf310'
//      UNK_0xf33d  codep:0x224c parp:0xf33d size:0x0014 C-string:'UNK_0xf33d'
//      UNK_0xf353  codep:0x224c parp:0xf353 size:0x0012 C-string:'UNK_0xf353'
//      UNK_0xf367  codep:0x224c parp:0xf367 size:0x0012 C-string:'UNK_0xf367'
//          NPCREW  codep:0x4b3b parp:0xf384 size:0x000c C-string:'NPCREW'
//      UNK_0xf392  codep:0x224c parp:0xf392 size:0x00ac C-string:'UNK_0xf392'
//      UNK_0xf440  codep:0x224c parp:0xf440 size:0x00a5 C-string:'UNK_0xf440'
//      (/EXAMINE)  codep:0x224c parp:0xf4f4 size:0x000c C-string:'_ro__slash_EXAMINE_rc_'
//        (/TREAT)  codep:0x224c parp:0xf50d size:0x0000 C-string:'_ro__slash_TREAT_rc_'

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
// 0xf074: WORD 'UNK_0xf076' codep=0x7394 parp=0xf076
// ================================================
LoadDataType UNK_0xf076 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xf07c: WORD 'UNK_0xf07e' codep=0x7420 parp=0xf07e
// ================================================
IFieldType UNK_0xf07e = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xf081: WORD 'UNK_0xf083' codep=0x7420 parp=0xf083
// ================================================
IFieldType UNK_0xf083 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xf086: WORD 'UNK_0xf088' codep=0x7420 parp=0xf088
// ================================================
IFieldType UNK_0xf088 = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xf08b: WORD 'UNK_0xf08d' codep=0x7420 parp=0xf08d
// ================================================
IFieldType UNK_0xf08d = {ASSIGN_CREWIDX, 0x11, 0x03};

// ================================================
// 0xf090: WORD 'UNK_0xf092' codep=0x224c parp=0xf092 params=0 returns=0
// ================================================

void UNK_0xf092() // UNK_0xf092
{
  Push(0x0040);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("[N Y]", 5); // (.")
}


// ================================================
// 0xf0a4: WORD 'UNK_0xf0a6' codep=0x224c parp=0xf0a6 params=1 returns=1
// ================================================

void UNK_0xf0a6() // UNK_0xf0a6
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
    Push((0x65e1+UNK_0xf08d.offset) + i * 3); // UNK_0xf08d<IFIELD> I 3 * +
    Get_gt_C_plus_S(); // @>C+S
    Push(Read16(0x65e1+UNK_0xf088.offset) & a); // UNK_0xf088<IFIELD> @ J AND
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
// 0xf0e4: WORD 'UNK_0xf0e6' codep=0x224c parp=0xf0e6 params=1 returns=0
// ================================================

void UNK_0xf0e6() // UNK_0xf0e6
{
  unsigned short int a;
  Push(Read16(0x65e1+UNK_0xf088.offset) & 0x0010); // UNK_0xf088<IFIELD> @ 0x0010 AND
  if (Pop() != 0)
  {
    PRINT("COMATOSE", 8); // (.")
    Pop(); // DROP
    return;
  }
  a = Pop(); // >R
  Push(a==0?1:0); // I 0=
  if (Pop() == 0) goto label2;
  PRINT("DEAD", 4); // (.")
  goto label3;

  label2:
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

  label3:
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf1ae: WORD 'UNK_0xf1b0' codep=0x224c parp=0xf1b0 params=1 returns=0
// ================================================

void UNK_0xf1b0() // UNK_0xf1b0
{
  if (Pop() != 0)
  {
    PRINT("TREAT", 5); // (.")
    return;
  }
  PRINT("EXAMINE", 7); // (.")
}


// ================================================
// 0xf1cc: WORD 'UNK_0xf1ce' codep=0x224c parp=0xf1ce
// ================================================

void UNK_0xf1ce() // UNK_0xf1ce
{
  _gt_C_plus_S(); // >C+S
  CTINIT(); // CTINIT
  PRINT("SHOULD I STOP TREATING ", 23); // (.")
  Push(0x65e1+UNK_0xf07e.offset); // UNK_0xf07e<IFIELD>
  _do__dot_(); // $.
  ICLOSE(); // ICLOSE
  CTCR(); // CTCR
  PRINT("TO ", 3); // (.")
  UNK_0xf1b0(); // UNK_0xf1b0
  PRINT(" SOMEONE ELSE\?", 14); // (.")
  CTCR(); // CTCR
  UNK_0xf092(); // UNK_0xf092
  Y_slash_N(); // Y/N
  CTERASE(); // CTERASE
}


// ================================================
// 0xf217: WORD 'UNK_0xf219' codep=0x224c parp=0xf219 params=0 returns=0
// ================================================

void UNK_0xf219() // UNK_0xf219
{
  Push(0x65e1+UNK_0xf07e.offset); // UNK_0xf07e<IFIELD>
  _do__dot_(); // $.
  PRINT(" DOESN'T NEED MEDICAL", 21); // (.")
  CTCR(); // CTCR
  PRINT("TREATMENT.", 10); // (.")
}


// ================================================
// 0xf246: WORD 'UNK_0xf248' codep=0x224c parp=0xf248 params=0 returns=0
// ================================================

void UNK_0xf248() // UNK_0xf248
{
  Push(0x65e1+UNK_0xf07e.offset); // UNK_0xf07e<IFIELD>
  _do__dot_(); // $.
  PRINT(" IS BEYOND HELP.", 16); // (.")
}


// ================================================
// 0xf261: WORD 'UNK_0xf263' codep=0x224c parp=0xf263 params=0 returns=0
// ================================================

void UNK_0xf263() // UNK_0xf263
{
  PRINT("I AM STARTING TREATMENT ON", 26); // (.")
  CTCR(); // CTCR
  Push(0x65e1+UNK_0xf07e.offset); // UNK_0xf07e<IFIELD>
  _do__dot_(); // $.
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf28c: WORD 'UNK_0xf28e' codep=0x224c parp=0xf28e params=2 returns=0
// ================================================

void UNK_0xf28e() // UNK_0xf28e
{
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+UNK_0xf083.offset)&0xFF); // UNK_0xf083<IFIELD> C@
  Push(1);
  Push(0x0064);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    UNK_0xf263(); // UNK_0xf263
    Push(Read16(0x65e1+UNK_0xf088.offset) | 4); // UNK_0xf088<IFIELD> @ 4 OR
    Push(0x65e1+UNK_0xf088.offset); // UNK_0xf088<IFIELD>
    Store_2(); // !_2
  } else
  {
    Push((Read16(0x65e1+UNK_0xf083.offset)&0xFF)==0x0064?1:0); // UNK_0xf083<IFIELD> C@ 0x0064 =
    if (Pop() != 0)
    {
      UNK_0xf219(); // UNK_0xf219
    } else
    {
      UNK_0xf248(); // UNK_0xf248
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2cc: WORD 'UNK_0xf2ce' codep=0x224c parp=0xf2ce params=0 returns=0
// ================================================

void UNK_0xf2ce() // UNK_0xf2ce
{
  PRINT("I AM CEASING TREATMENT ON", 25); // (.")
  CTCR(); // CTCR
  Push(0x65e1+UNK_0xf07e.offset); // UNK_0xf07e<IFIELD>
  _do__dot_(); // $.
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf2f6: WORD 'UNK_0xf2f8' codep=0x224c parp=0xf2f8 params=2 returns=0
// ================================================

void UNK_0xf2f8() // UNK_0xf2f8
{
  _gt_C_plus_S(); // >C+S
  UNK_0xf2ce(); // UNK_0xf2ce
  Push(Read16(0x65e1+UNK_0xf088.offset) & 0xfffb); // UNK_0xf088<IFIELD> @ 0xfffb AND
  Push(0x65e1+UNK_0xf088.offset); // UNK_0xf088<IFIELD>
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf30e: WORD 'UNK_0xf310' codep=0x224c parp=0xf310 params=0 returns=0
// ================================================

void UNK_0xf310() // UNK_0xf310
{
  PRINT("I AM CONTINUING TREATMENT ON", 28); // (.")
  CTCR(); // CTCR
  Push(0x65e1+UNK_0xf07e.offset); // UNK_0xf07e<IFIELD>
  _do__dot_(); // $.
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf33b: WORD 'UNK_0xf33d' codep=0x224c parp=0xf33d params=2 returns=0
// ================================================

void UNK_0xf33d() // UNK_0xf33d
{
  _gt_C_plus_S(); // >C+S
  UNK_0xf310(); // UNK_0xf310
  Push(Read16(0x65e1+UNK_0xf088.offset) | 4); // UNK_0xf088<IFIELD> @ 4 OR
  Push(0x65e1+UNK_0xf088.offset); // UNK_0xf088<IFIELD>
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf351: WORD 'UNK_0xf353' codep=0x224c parp=0xf353 params=0 returns=1
// ================================================

void UNK_0xf353() // UNK_0xf353
{
  do
  {
    INEXT(); // INEXT
    Push((Read16(0x65e1+UNK_0xf088.offset)&0xFF) & 8); // UNK_0xf088<IFIELD> C@ 8 AND
  } while(Pop() == 0);
  Push(1);
}


// ================================================
// 0xf365: WORD 'UNK_0xf367' codep=0x224c parp=0xf367 params=0 returns=1
// ================================================

void UNK_0xf367() // UNK_0xf367
{
  do
  {
    IPREV(); // IPREV
    Push((Read16(0x65e1+UNK_0xf088.offset)&0xFF) & 8); // UNK_0xf088<IFIELD> C@ 8 AND
  } while(Pop() == 0);
  Push(1);
}


// ================================================
// 0xf379: WORD 'NPCREW' codep=0x4b3b parp=0xf384
// ================================================

void NPCREW() // NPCREW
{
  switch(Pop()) // NPCREW
  {
  case 1:
    UNK_0xf353(); // UNK_0xf353
    break;
  case 65535:
    UNK_0xf367(); // UNK_0xf367
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xf390: WORD 'UNK_0xf392' codep=0x224c parp=0xf392
// ================================================

void UNK_0xf392() // UNK_0xf392
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("WHO SHOULD I ", 13); // (.")
  UNK_0xf1b0(); // UNK_0xf1b0
  PRINT("\?", 1); // (.")
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN

  label2:
  Push(!((Read16(0x65e1+UNK_0xf088.offset)&0xFF) & 8)); // UNK_0xf088<IFIELD> C@ 8 AND NOT
  if (Pop() == 0) goto label1;
  INEXT(); // INEXT
  goto label2;

  label1:
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
  Push(0x65e1+UNK_0xf07e.offset); // UNK_0xf07e<IFIELD>
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
      Push(0x65e1+UNK_0xf07e.offset); // UNK_0xf07e<IFIELD>
      _do__dot_(); // $.
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  CI(); // CI
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf43e: WORD 'UNK_0xf440' codep=0x224c parp=0xf440
// ================================================

void UNK_0xf440() // UNK_0xf440
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xf07e.offset); // UNK_0xf07e<IFIELD>
  _do__dot_(); // $.
  PRINT(" IS ", 4); // (.")
  Push(Read16(0x65e1+UNK_0xf083.offset)&0xFF); // UNK_0xf083<IFIELD> C@
  Push(Read16(regsp)); // DUP
  UNK_0xf0e6(); // UNK_0xf0e6
  if (Pop() != 0)
  {
    PRINT(",", 1); // (.")
    CTCR(); // CTCR
    PRINT("AND HAS A VITALITY OF ", 22); // (.")
    Push(Read16(0x65e1+UNK_0xf083.offset)&0xFF); // UNK_0xf083<IFIELD> C@
    Push(0);
    DrawR(); // .R
    PRINT(" AND A", 6); // (.")
    CTCR(); // CTCR
    PRINT("DURABILITY OF ", 14); // (.")
    LoadData(UNK_0xf076); // from 'CREWMEMBER'
    Push(Read16(Pop())&0xFF); //  C@
    Push(0);
    DrawR(); // .R
  }
  PRINT(".", 1); // (.")
  CTCR(); // CTCR
  Push(Read16(0x65e1+UNK_0xf088.offset) & 4); // UNK_0xf088<IFIELD> @ 4 AND
  if (Pop() != 0)
  {
    Push(0x65e1+UNK_0xf07e.offset); // UNK_0xf07e<IFIELD>
    _do__dot_(); // $.
    PRINT(" IS CURRENTLY BEING", 19); // (.")
    CTCR(); // CTCR
    PRINT("TREATED.", 8); // (.")
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4e5: WORD '(/EXAMINE)' codep=0x224c parp=0xf4f4
// ================================================
// entry

void _ro__slash_EXAMINE_rc_() // (/EXAMINE)
{
  CTERASE(); // CTERASE
  _gt_1FONT(); // >1FONT
  Push(0);
  UNK_0xf392(); // UNK_0xf392
  UNK_0xf440(); // UNK_0xf440
}


// ================================================
// 0xf500: WORD '(/TREAT)' codep=0x224c parp=0xf50d
// ================================================
// entry

void _ro__slash_TREAT_rc_() // (/TREAT)
{
  CTERASE(); // CTERASE
  Push(4);
  UNK_0xf0a6(); // UNK_0xf0a6
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    Push(1);
    ROT(); // ROT
    ROT(); // ROT
    UNK_0xf1ce(); // UNK_0xf1ce
    if (Pop() != 0)
    {
      UNK_0xf2f8(); // UNK_0xf2f8
      Push(0x09c4);
      MS(); // MS
      Push(1);
      UNK_0xf392(); // UNK_0xf392
      CTERASE(); // CTERASE
      UNK_0xf28e(); // UNK_0xf28e
    } else
    {
      UNK_0xf33d(); // UNK_0xf33d
    }
    return;
  }
  Push(1);
  UNK_0xf392(); // UNK_0xf392
  CTERASE(); // CTERASE
  UNK_0xf28e(); // UNK_0xf28e
}

// 0xf549: db 0x44 0x4f 0x43 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'DOC-VOC________________ '

