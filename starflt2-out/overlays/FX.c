// ====== OVERLAY 'FX' ======
// store offset = 0xf060
// overlay size   = 0x0500

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WF076  codep:0x7394 parp:0xf076 size:0x0006 C-string:'WF076'
//           WF07E  codep:0x224c parp:0xf07e size:0x000c C-string:'WF07E'
//           WF08C  codep:0x1d29 parp:0xf08c size:0x0002 C-string:'WF08C'
//           WF090  codep:0x224c parp:0xf090 size:0x000a C-string:'WF090'
//          N>STAT  codep:0x4b3b parp:0xf0a5 size:0x0014 C-string:'N_gt_STAT'
//           WF0BB  codep:0x224c parp:0xf0bb size:0x0008 C-string:'WF0BB'
//           WF0C5  codep:0x224c parp:0xf0c5 size:0x0012 C-string:'WF0C5'
//           WF0D9  codep:0x224c parp:0xf0d9 size:0x0008 C-string:'WF0D9'
//           WF0E3  codep:0x224c parp:0xf0e3 size:0x0010 C-string:'WF0E3'
//           WF0F5  codep:0x224c parp:0xf0f5 size:0x0010 C-string:'WF0F5'
//           WF107  codep:0x224c parp:0xf107 size:0x0034 C-string:'WF107'
//           WF13D  codep:0x224c parp:0xf13d size:0x0010 C-string:'WF13D'
//           WF14F  codep:0x224c parp:0xf14f size:0x0012 C-string:'WF14F'
//           WF163  codep:0x224c parp:0xf163 size:0x000c C-string:'WF163'
//           WF171  codep:0x224c parp:0xf171 size:0x000d C-string:'WF171'
//           WF180  codep:0x224c parp:0xf180 size:0x000a C-string:'WF180'
//           WF18C  codep:0x224c parp:0xf18c size:0x000f C-string:'WF18C'
//          #>.COL  codep:0x4b3b parp:0xf1a6 size:0x0014 C-string:'_n__gt__dot_COL'
//           WF1BC  codep:0x224c parp:0xf1bc size:0x0030 C-string:'WF1BC'
//           WF1EE  codep:0x224c parp:0xf1ee size:0x001a C-string:'WF1EE'
//           WF20A  codep:0x224c parp:0xf20a size:0x0026 C-string:'WF20A'
//           PSYCH  codep:0x224c parp:0xf23a size:0x004e C-string:'PSYCH'
//           WF28A  codep:0x224c parp:0xf28a size:0x0014 C-string:'WF28A'
//           WF2A0  codep:0x224c parp:0xf2a0 size:0x0012 C-string:'WF2A0'
//           WF2B4  codep:0x7394 parp:0xf2b4 size:0x0006 C-string:'WF2B4'
//           WF2BC  codep:0x7394 parp:0xf2bc size:0x0006 C-string:'WF2BC'
//           WF2C4  codep:0x224c parp:0xf2c4 size:0x0012 C-string:'WF2C4'
//           WF2D8  codep:0x224c parp:0xf2d8 size:0x000c C-string:'WF2D8'
//           WF2E6  codep:0x224c parp:0xf2e6 size:0x000a C-string:'WF2E6'
//           WF2F2  codep:0x224c parp:0xf2f2 size:0x000a C-string:'WF2F2'
//           WF2FE  codep:0x224c parp:0xf2fe size:0x000a C-string:'WF2FE'
//           WF30A  codep:0x224c parp:0xf30a size:0x000a C-string:'WF30A'
//           WF316  codep:0x224c parp:0xf316 size:0x000a C-string:'WF316'
//           WF322  codep:0x224c parp:0xf322 size:0x0006 C-string:'WF322'
//           WF32A  codep:0x224c parp:0xf32a size:0x008c C-string:'WF32A'
//           WF3B8  codep:0x224c parp:0xf3b8 size:0x0014 C-string:'WF3B8'
//           WF3CE  codep:0x224c parp:0xf3ce size:0x000e C-string:'WF3CE'
//           WF3DE  codep:0x224c parp:0xf3de size:0x00ac C-string:'WF3DE'
//           WF48C  codep:0x224c parp:0xf48c size:0x0030 C-string:'WF48C'
//           WF4BE  codep:0x224c parp:0xf4be size:0x002c C-string:'WF4BE'
//           WF4EC  codep:0x224c parp:0xf4ec size:0x004e C-string:'WF4EC'
//           .TMAP  codep:0x224c parp:0xf544 size:0x0000 C-string:'DrawTMAP'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_A_dash_POSTU; // A-POSTU
extern const unsigned short int pp__n_IN; // #IN
extern const unsigned short int pp_VIN; // VIN
extern const unsigned short int pp_VOUT; // VOUT
extern const unsigned short int pp_OIN; // OIN
extern const unsigned short int pp_OOUT; // OOUT
extern const unsigned short int pp_IsOPEN; // ?OPEN
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_PATIENC; // PATIENC
extern const unsigned short int pp_TMAP; // TMAP
extern const unsigned short int pp__ro_AORIGI; // (AORIGI
extern const unsigned short int pp_LSCAN; // LSCAN
extern const unsigned short int pp__ro_TRADER; // (TRADER
extern Color BLACK; // BLACK
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
void D_st_(); // D<
void _dash_TRAILING(); // -TRAILING
void NOP(); // NOP
void _2OVER(); // 2OVER
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void ON_2(); // ON_2
void _099(); // 099
void GetRECORD(); // @RECORD
void GetINST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void ICLOSE(); // ICLOSE
void Get_gt_C_plus_S(); // @>C+S
void _1PIX(); // 1PIX
void _2PIX(); // 2PIX
void StoreCOLOR(); // !COLOR
void LLINE(); // LLINE
void SETCLIP(); // SETCLIP
void DCLIPSE(); // DCLIPSE
void POS_dot_(); // POS.
void POLY_dash_WI(); // POLY-WI
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _dash_XTRAIL(); // -XTRAIL
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void SWAP(); // SWAP
void _dash_(); // -
void _4_star_(); // 4*
void _gt_(); // >
void _st_(); // <
void _0_gt_(); // 0>
void CLIPPER(); // CLIPPER
void WLD_gt_SCR(); // WLD>SCR


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WF08C = 0xf08c; // WF08C size: 2
// {0x3a, 0x20}




// 0xf072: db 0x50 0x00 'P '

// ================================================
// 0xf074: WORD 'WF076' codep=0x7394 parp=0xf076
// ================================================
LoadDataType WF076 = {TRADERSIDX, 0x2a, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xf07c: WORD 'WF07E' codep=0x224c parp=0xf07e
// ================================================

void WF07E() // WF07E
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WF076); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf08a: WORD 'WF08C' codep=0x1d29 parp=0xf08c
// ================================================
// 0xf08c: db 0x3a 0x20 ': '

// ================================================
// 0xf08e: WORD 'WF090' codep=0x224c parp=0xf090 params=0 returns=1
// ================================================

void WF090() // WF090
{
  Push(Read16(pp_CONTEXT_3)==6?1:0); // CONTEXT_3 @ 6 =
}


// ================================================
// 0xf09a: WORD 'N>STAT' codep=0x4b3b parp=0xf0a5
// ================================================

void N_gt_STAT() // N>STAT
{
  switch(Pop()) // N>STAT
  {
  case 4:
    Push(2);
    break;
  case 8:
    Push(3);
    break;
  case 16:
    Push(4);
    break;
  case 1:
    Push(4);
    break;
  default:
    Push(1);
    break;

  }
}

// ================================================
// 0xf0b9: WORD 'WF0BB' codep=0x224c parp=0xf0bb
// ================================================

void WF0BB() // WF0BB
{
  Push(Read16(pp_A_dash_POSTU)&0xFF); // A-POSTU C@
  N_gt_STAT(); // N>STAT case
}


// ================================================
// 0xf0c3: WORD 'WF0C5' codep=0x224c parp=0xf0c5
// ================================================

void WF0C5() // WF0C5
{
  Push(Read16(pp_PATIENC)); // PATIENC @
  Push(4);
  _gt_(); // >
  WF07E(); // WF07E
  Push(4);
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf0d7: WORD 'WF0D9' codep=0x224c parp=0xf0d9
// ================================================

void WF0D9() // WF0D9
{
  WF07E(); // WF07E
  Push(7);
  _gt_(); // >
}


// ================================================
// 0xf0e1: WORD 'WF0E3' codep=0x224c parp=0xf0e3
// ================================================

void WF0E3() // WF0E3
{
  Push(Read16(pp_PATIENC)); // PATIENC @
  Push(2);
  _gt_(); // >
  WF0D9(); // WF0D9
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf0f3: WORD 'WF0F5' codep=0x224c parp=0xf0f5
// ================================================

void WF0F5() // WF0F5
{
  Push(Read16(pp_PATIENC)); // PATIENC @
  Push(3);
  _st_(); // <
  WF0D9(); // WF0D9
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf105: WORD 'WF107' codep=0x224c parp=0xf107
// ================================================

void WF107() // WF107
{
  WF0C5(); // WF0C5
  if (Pop() != 0)
  {
    Push(1);
    return;
  }
  WF0E3(); // WF0E3
  if (Pop() != 0)
  {
    Push(2);
    return;
  }
  WF0D9(); // WF0D9
  if (Pop() != 0)
  {
    Push(4);
    return;
  }
  WF0F5(); // WF0F5
  if (Pop() != 0)
  {
    Push(3);
    return;
  }
  Push(0);
}


// ================================================
// 0xf13b: WORD 'WF13D' codep=0x224c parp=0xf13d
// ================================================

void WF13D() // WF13D
{
  WF090(); // WF090
  if (Pop() != 0)
  {
    WF107(); // WF107
    return;
  }
  WF0BB(); // WF0BB
}


// ================================================
// 0xf14d: WORD 'WF14F' codep=0x224c parp=0xf14f params=0 returns=0
// ================================================

void WF14F() // WF14F
{
  PRINT("GLOWING", 7); // (.")
  Push(4);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf161: WORD 'WF163' codep=0x224c parp=0xf163 params=0 returns=0
// ================================================

void WF163() // WF163
{
  WF14F(); // WF14F
  PRINT("GREEN", 5); // (.")
}


// ================================================
// 0xf16f: WORD 'WF171' codep=0x224c parp=0xf171 params=0 returns=0
// ================================================

void WF171() // WF171
{
  WF14F(); // WF14F
  PRINT("YELLOW", 6); // (.")
}


// ================================================
// 0xf17e: WORD 'WF180' codep=0x224c parp=0xf180 params=0 returns=0
// ================================================

void WF180() // WF180
{
  WF14F(); // WF14F
  PRINT("RED", 3); // (.")
}


// ================================================
// 0xf18a: WORD 'WF18C' codep=0x224c parp=0xf18c params=0 returns=0
// ================================================

void WF18C() // WF18C
{
  PRINT("BRIGHT RED", 10); // (.")
}


// ================================================
// 0xf19b: WORD '#>.COL' codep=0x4b3b parp=0xf1a6
// ================================================

void _n__gt__dot_COL() // #>.COL
{
  switch(Pop()) // #>.COL
  {
  case 1:
    WF163(); // WF163
    break;
  case 2:
    WF171(); // WF171
    break;
  case 3:
    WF180(); // WF180
    break;
  case 4:
    WF18C(); // WF18C
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf1ba: WORD 'WF1BC' codep=0x224c parp=0xf1bc params=2 returns=3
// ================================================

void WF1BC() // WF1BC
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  Push(0x00c8);
  _st_(); // <
  SWAP(); // SWAP
  Push(0xffd8);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  a = Pop(); // >R
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  Push(0x00c8);
  _st_(); // <
  SWAP(); // SWAP
  Push(0xffd8);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Pop() & a); //  R> AND
}


// ================================================
// 0xf1ec: WORD 'WF1EE' codep=0x224c parp=0xf1ee params=0 returns=1
// ================================================

void WF1EE() // WF1EE
{
  Push(0x000e);
  WF090(); // WF090
  if (Pop() != 0)
  {
    Push(0xb78d); // 'TV?ART'
  } else
  {
    Push(0xb76b); // 'OV?ART'
  }
  MODULE(); // MODULE
}


// ================================================
// 0xf208: WORD 'WF20A' codep=0x224c parp=0xf20a params=1 returns=1
// ================================================

void WF20A() // WF20A
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  Push(0x0013);
  _eq_SPECIE(); // =SPECIE
  Push(!Pop()); //  NOT
  Push(0x0018);
  _eq_SPECIE(); // =SPECIE
  Push(!Pop()); //  NOT
  Push(0x0016);
  _eq_SPECIE(); // =SPECIE
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf230: WORD 'PSYCH' codep=0x224c parp=0xf23a params=1 returns=0
// ================================================
// entry

void PSYCH() // PSYCH
{
  WF1EE(); // WF1EE
  WF20A(); // WF20A
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    WF13D(); // WF13D
    Push(!(Pop()==Read16(pp_WF08C)?1:0)); //  WF08C @ = NOT
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      GetColor(WHITE);
      StoreCOLOR(); // !COLOR
      WF13D(); // WF13D
      Push(Read16(regsp)); // DUP
      Push(pp_WF08C); // WF08C
      Store_2(); // !_2
      SET_STR_AS_PARAM("THE PSYCHIC PROBE IS ");
      DrawTTY(); // .TTY
      _n__gt__dot_COL(); // #>.COL case
      PRINT(".", 1); // (.")
    }
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf288: WORD 'WF28A' codep=0x224c parp=0xf28a
// ================================================

void WF28A() // WF28A
{
  Push(0x00c7);
  Push(0x009f);
  Push(0x0021);
  Push(0x0014);
  SETCLIP(); // SETCLIP
}


// ================================================
// 0xf29e: WORD 'WF2A0' codep=0x224c parp=0xf2a0
// ================================================
// orphan

void WF2A0() // WF2A0
{
  Push(0x0013);
  Push(0);
  Push(0);
  Push(0x009f);
  GetColor(BLACK);
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xf2b2: WORD 'WF2B4' codep=0x7394 parp=0xf2b4
// ================================================
// orphan
LoadDataType WF2B4 = {TRADERSIDX, 0x21, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xf2ba: WORD 'WF2BC' codep=0x7394 parp=0xf2bc
// ================================================
// orphan
LoadDataType WF2BC = {PLANETIDX, 0x16, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf2c2: WORD 'WF2C4' codep=0x224c parp=0xf2c4 params=0 returns=1
// ================================================

void WF2C4() // WF2C4
{
  GetINST_dash_S(); // @INST-S
  Push(Pop() - 0x002e); //  0x002e -
  Push(0x0028);
  SWAP(); // SWAP
  GetRECORD(); // @RECORD
}


// ================================================
// 0xf2d6: WORD 'WF2D8' codep=0x224c parp=0xf2d8 params=0 returns=1
// ================================================

void WF2D8() // WF2D8
{
  WF2C4(); // WF2C4
  Push(Read16(Pop() + 0x0012)&0xFF); //  0x0012 + C@
}


// ================================================
// 0xf2e4: WORD 'WF2E6' codep=0x224c parp=0xf2e6 params=0 returns=1
// ================================================

void WF2E6() // WF2E6
{
  WF2C4(); // WF2C4
  Push(Pop() + 0x0014); //  0x0014 +
}


// ================================================
// 0xf2f0: WORD 'WF2F2' codep=0x224c parp=0xf2f2 params=0 returns=1
// ================================================

void WF2F2() // WF2F2
{
  WF2C4(); // WF2C4
  Push(Pop() + 0x0044); //  0x0044 +
}


// ================================================
// 0xf2fc: WORD 'WF2FE' codep=0x224c parp=0xf2fe params=0 returns=1
// ================================================

void WF2FE() // WF2FE
{
  WF2C4(); // WF2C4
  Push(Pop() + 0x0050); //  0x0050 +
}


// ================================================
// 0xf308: WORD 'WF30A' codep=0x224c parp=0xf30a params=0 returns=1
// ================================================

void WF30A() // WF30A
{
  WF2C4(); // WF2C4
  Push(Pop() + 0x0068); //  0x0068 +
}


// ================================================
// 0xf314: WORD 'WF316' codep=0x224c parp=0xf316 params=0 returns=1
// ================================================

void WF316() // WF316
{
  WF2C4(); // WF2C4
  Push(Pop() + 0x006e); //  0x006e +
}


// ================================================
// 0xf320: WORD 'WF322' codep=0x224c parp=0xf322 params=1 returns=1
// ================================================

void WF322() // WF322
{
  Push(Pop() + pp_LSCAN); //  LSCAN +
}


// ================================================
// 0xf328: WORD 'WF32A' codep=0x224c parp=0xf32a
// ================================================

void WF32A() // WF32A
{
  unsigned short int a;
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_st_(); // D<
  if (Pop() != 0)
  {
    _2SWAP(); // 2SWAP
  }
  Push(0);
  WF322(); // WF322
  Store_2(); // !_2
  Push(2);
  WF322(); // WF322
  Store_2(); // !_2
  Push(4);
  WF322(); // WF322
  Store_2(); // !_2
  Push(6);
  WF322(); // WF322
  Store_2(); // !_2
  Push(2);
  Push(pp__n_IN); // #IN
  Store_2(); // !_2
  Push(0);
  WF322(); // WF322
  Push(pp_VIN); // VIN
  Store_2(); // !_2
  Push(0x0014);
  WF322(); // WF322
  Push(pp_VOUT); // VOUT
  Store_2(); // !_2
  Push(0x0028);
  WF322(); // WF322
  Push(pp_OIN); // OIN
  Store_2(); // !_2
  Push(0x003c);
  WF322(); // WF322
  Push(pp_OOUT); // OOUT
  Store_2(); // !_2
  Push(pp_IsOPEN); // ?OPEN
  ON_2(); // ON_2
  CLIPPER(); // CLIPPER
  Push(Read16(pp__n_IN)); // #IN @
  Push(pp_IsOPEN); // ?OPEN
  _099(); // 099
  if (Pop() != 0)
  {
    Push(Read16(pp_VIN)); // VIN @
    a = Pop(); // >R
    Push(Read16(a + 2)); // I 2+ @
    Push(Read16(a)); // I @
    Push(Read16(a + 6)); // I 6 + @
    Push(Read16(a + 4)); // R> 4 + @
    Push(1);
    return;
  }
  Push(0);
}


// ================================================
// 0xf3b6: WORD 'WF3B8' codep=0x224c parp=0xf3b8
// ================================================

void WF3B8() // WF3B8
{
  WLD_gt_SCR(); // WLD>SCR
  _2SWAP(); // 2SWAP
  WLD_gt_SCR(); // WLD>SCR
  _1PIX(); // 1PIX
  WF32A(); // WF32A
  if (Pop() != 0)
  {
    LLINE(); // LLINE
  }
  _2PIX(); // 2PIX
}


// ================================================
// 0xf3cc: WORD 'WF3CE' codep=0x224c parp=0xf3ce params=1 returns=2
// ================================================

void WF3CE() // WF3CE
{
  Push(0x0015);
  SWAP(); // SWAP
  GetRECORD(); // @RECORD
  Push(0x0010);
}


// ================================================
// 0xf3dc: WORD 'WF3DE' codep=0x224c parp=0xf3de
// ================================================

void WF3DE() // WF3DE
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(Read16(regsp)); // DUP
  Push(1);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Pop() - 1); //  1-
    Push(8);
  } else
  {
    Push(0);
  }
  Push(Pop() * Pop()); // *
  WF2E6(); // WF2E6
  Push(Pop() + Pop()); // +
  Push(a); // I
  _0_gt_(); // 0>
  if (Pop() != 0)
  {
    Push(Pop() + 4); //  4 +
  }
  _2_at_(); // 2@
  SWAP(); // SWAP
  WLD_gt_SCR(); // WLD>SCR
  Push(a); // I
  _4_star_(); // 4*
  WF2FE(); // WF2FE
  Push(Pop() + Pop()); // +
  Push(Read16(Pop() + 2)); //  2+ @
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(a); // I
  _4_star_(); // 4*
  WF2FE(); // WF2FE
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); //  @
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  WF1BC(); // WF1BC
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    POS_dot_(); // POS.
    Push(a * 2); // I 2*
    WF2F2(); // WF2F2
    Push(Pop() + Pop()); // +
    Push(2);
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(a); // I
    WF30A(); // WF30A
    Push(Pop() + Pop()); // +
    Push(Read16(Pop())&0xFF); //  C@
    WF3CE(); // WF3CE
    _dash_TRAILING(); // -TRAILING
    _2OVER(); // 2OVER
    Push(Pop() - 6); //  6 -
    POS_dot_(); // POS.
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(Read16(a)); // R@
    WF316(); // WF316
    Push(Pop() + Pop()); // +
    Push(Read16(Pop())&0xFF); //  C@
    Push(0x001c);
    SWAP(); // SWAP
    GetRECORD(); // @RECORD
    Push(0x0018);
    Push(0x002e);
    _dash_XTRAIL(); // -XTRAIL
    _2SWAP(); // 2SWAP
    Push(Pop() - 0x000c); //  0x000c -
    POS_dot_(); // POS.
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf48a: WORD 'WF48C' codep=0x224c parp=0xf48c
// ================================================

void WF48C() // WF48C
{
  unsigned short int a, b;
  a = Pop(); // >R
  b = Pop(); // >R
  GetCRS(); // @CRS
  Push(Read16(pp_YBLT) + 1); // YBLT @ 1+
  Push(Read16(regsp)); // DUP
  Push(Pop() - 6); //  6 -
  Push(Read16(pp_XBLT) - 2); // XBLT @ 2 -
  SWAP(); // SWAP
  OVER(); // OVER
  Push((Pop() + b * 4) + 2); //  R> 4 * + 2+
  Push(a); // R>
  POLY_dash_WI(); // POLY-WI
  StoreCRS(); // !CRS
}


// ================================================
// 0xf4bc: WORD 'WF4BE' codep=0x224c parp=0xf4be
// ================================================

void WF4BE() // WF4BE
{
  WF2C4(); // WF2C4
  Push(0x0012);
  _dash_TRAILING(); // -TRAILING
  Push(Read16(regsp)); // DUP
  Push((Pop() >> 1) * 4); //  2/ 4 *
  Push(0x005c);
  SWAP(); // SWAP
  _dash_(); // -
  Push(0x00c4);
  POS_dot_(); // POS.
  Push(Read16(regsp)); // DUP
  GetColor(BLACK);
  WF48C(); // WF48C
  GetColor(YELLOW);
  StoreCOLOR(); // !COLOR
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf4ea: WORD 'WF4EC' codep=0x224c parp=0xf4ec
// ================================================

void WF4EC() // WF4EC
{
  unsigned short int i, imax;
  WF28A(); // WF28A
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WF2D8(); // WF2D8
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    WF2E6(); // WF2E6
    Push(Pop() + i * 8); //  I 8 * +
    _2_at_(); // 2@
    SWAP(); // SWAP
    WF2E6(); // WF2E6
    Push((Pop() + i * 8) + 4); //  I 8 * + 4 +
    _2_at_(); // 2@
    SWAP(); // SWAP
    WF3B8(); // WF3B8
    Push(i + 1); // I 1+
    WF3DE(); // WF3DE
    Push(i); // I
    Push(Read16(regsp)); // DUP
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      WF3DE(); // WF3DE
    } else
    {
      Pop(); // DROP
    }
    i++;
  } while(i<imax); // (LOOP)

  DCLIPSE(); // DCLIPSE
}


// ================================================
// 0xf53a: WORD '.TMAP' codep=0x224c parp=0xf544
// ================================================
// entry

void DrawTMAP() // .TMAP
{
  Push(pp_TMAP); // TMAP
  Get_gt_C_plus_S(); // @>C+S
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WF4EC(); // WF4EC
  WF4BE(); // WF4BE
  ICLOSE(); // ICLOSE
}

// 0xf558: db 0x46 0x58 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x00 'FX-VOC__ '

