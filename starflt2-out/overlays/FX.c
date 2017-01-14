// ====== OVERLAY 'FX' ======
// store offset = 0xf060
// overlay size   = 0x0500

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xf076  codep:0x7394 parp:0xf076 size:0x0006 C-string:'UNK_0xf076'
//      UNK_0xf07e  codep:0x224c parp:0xf07e size:0x000c C-string:'UNK_0xf07e'
//      UNK_0xf08c  codep:0x1d29 parp:0xf08c size:0x0002 C-string:'UNK_0xf08c'
//      UNK_0xf090  codep:0x224c parp:0xf090 size:0x000a C-string:'UNK_0xf090'
//          N>STAT  codep:0x4b3b parp:0xf0a5 size:0x0014 C-string:'N_gt_STAT'
//      UNK_0xf0bb  codep:0x224c parp:0xf0bb size:0x0008 C-string:'UNK_0xf0bb'
//      UNK_0xf0c5  codep:0x224c parp:0xf0c5 size:0x0012 C-string:'UNK_0xf0c5'
//      UNK_0xf0d9  codep:0x224c parp:0xf0d9 size:0x0008 C-string:'UNK_0xf0d9'
//      UNK_0xf0e3  codep:0x224c parp:0xf0e3 size:0x0010 C-string:'UNK_0xf0e3'
//      UNK_0xf0f5  codep:0x224c parp:0xf0f5 size:0x0010 C-string:'UNK_0xf0f5'
//      UNK_0xf107  codep:0x224c parp:0xf107 size:0x0034 C-string:'UNK_0xf107'
//      UNK_0xf13d  codep:0x224c parp:0xf13d size:0x0010 C-string:'UNK_0xf13d'
//      UNK_0xf14f  codep:0x224c parp:0xf14f size:0x0012 C-string:'UNK_0xf14f'
//      UNK_0xf163  codep:0x224c parp:0xf163 size:0x000c C-string:'UNK_0xf163'
//      UNK_0xf171  codep:0x224c parp:0xf171 size:0x000d C-string:'UNK_0xf171'
//      UNK_0xf180  codep:0x224c parp:0xf180 size:0x000a C-string:'UNK_0xf180'
//      UNK_0xf18c  codep:0x224c parp:0xf18c size:0x000f C-string:'UNK_0xf18c'
//          #>.COL  codep:0x4b3b parp:0xf1a6 size:0x0014 C-string:'_n__gt__dot_COL'
//      UNK_0xf1bc  codep:0x224c parp:0xf1bc size:0x0030 C-string:'UNK_0xf1bc'
//      UNK_0xf1ee  codep:0x224c parp:0xf1ee size:0x001a C-string:'UNK_0xf1ee'
//      UNK_0xf20a  codep:0x224c parp:0xf20a size:0x0026 C-string:'UNK_0xf20a'
//           PSYCH  codep:0x224c parp:0xf23a size:0x004e C-string:'PSYCH'
//      UNK_0xf28a  codep:0x224c parp:0xf28a size:0x0038 C-string:'UNK_0xf28a'
//      UNK_0xf2c4  codep:0x224c parp:0xf2c4 size:0x0012 C-string:'UNK_0xf2c4'
//      UNK_0xf2d8  codep:0x224c parp:0xf2d8 size:0x000c C-string:'UNK_0xf2d8'
//      UNK_0xf2e6  codep:0x224c parp:0xf2e6 size:0x000a C-string:'UNK_0xf2e6'
//      UNK_0xf2f2  codep:0x224c parp:0xf2f2 size:0x000a C-string:'UNK_0xf2f2'
//      UNK_0xf2fe  codep:0x224c parp:0xf2fe size:0x000a C-string:'UNK_0xf2fe'
//      UNK_0xf30a  codep:0x224c parp:0xf30a size:0x000a C-string:'UNK_0xf30a'
//      UNK_0xf316  codep:0x224c parp:0xf316 size:0x000a C-string:'UNK_0xf316'
//      UNK_0xf322  codep:0x224c parp:0xf322 size:0x0006 C-string:'UNK_0xf322'
//      UNK_0xf32a  codep:0x224c parp:0xf32a size:0x008c C-string:'UNK_0xf32a'
//      UNK_0xf3b8  codep:0x224c parp:0xf3b8 size:0x0014 C-string:'UNK_0xf3b8'
//      UNK_0xf3ce  codep:0x224c parp:0xf3ce size:0x000e C-string:'UNK_0xf3ce'
//      UNK_0xf3de  codep:0x224c parp:0xf3de size:0x00ac C-string:'UNK_0xf3de'
//      UNK_0xf48c  codep:0x224c parp:0xf48c size:0x0030 C-string:'UNK_0xf48c'
//      UNK_0xf4be  codep:0x224c parp:0xf4be size:0x002c C-string:'UNK_0xf4be'
//      UNK_0xf4ec  codep:0x224c parp:0xf4ec size:0x004e C-string:'UNK_0xf4ec'
//           .TMAP  codep:0x224c parp:0xf544 size:0x0000 C-string:'_dot_TMAP'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_A_dash_POSTU; // A-POSTU
extern const unsigned short int pp__n_IN; // #IN
extern const unsigned short int pp_VIN; // VIN
extern const unsigned short int pp_VOUT; // VOUT
extern const unsigned short int pp_OIN; // OIN
extern const unsigned short int pp_OOUT; // OOUT
extern const unsigned short int pp__ask_OPEN; // ?OPEN
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_PATIENC; // PATIENC
extern const unsigned short int pp_TMAP; // TMAP
extern const unsigned short int pp__ro_AORIGI; // (AORIGI
extern const unsigned short int pp_LSCAN; // LSCAN
extern const unsigned short int pp__ro_TRADER; // (TRADER
void D_st_(); // D<
void _dash_TRAILING(); // -TRAILING
void NOP(); // NOP
void _2OVER(); // 2OVER
void _ex__2(); // !_2
void _plus__ex__2(); // +!_2
void ON_2(); // ON_2
void _099(); // 099
void _at_RECORD(); // @RECORD
void _at_INST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void ICLOSE(); // ICLOSE
void _at__gt_C_plus_S(); // @>C+S
void _1PIX(); // 1PIX
void _2PIX(); // 2PIX
void _ex_COLOR(); // !COLOR
void LLINE(); // LLINE
void SETCLIP(); // SETCLIP
void DCLIPSE(); // DCLIPSE
void POS_dot_(); // POS.
void POLY_dash_WI(); // POLY-WI
void _at_CRS(); // @CRS
void _ex_CRS(); // !CRS
void CTINIT(); // CTINIT
void _dot_TTY(); // .TTY
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
const unsigned short int pp_UNK_0xf08c = 0xf08c; // UNK_0xf08c size: 2
// {0x3a, 0x20}




// 0xf072: db 0x50 0x00 'P '

// ================================================
// 0xf074: WORD 'UNK_0xf076' codep=0x7394 parp=0xf076
// ================================================
// 0xf076: db 0x15 0x2a 0x01 0x32 0xd1 0x6a ' * 2 j'

// ================================================
// 0xf07c: WORD 'UNK_0xf07e' codep=0x224c parp=0xf07e
// ================================================

void UNK_0xf07e() // UNK_0xf07e
{
  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
  LoadData("UNK_0xf076"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf08a: WORD 'UNK_0xf08c' codep=0x1d29 parp=0xf08c
// ================================================
// 0xf08c: db 0x3a 0x20 ': '

// ================================================
// 0xf08e: WORD 'UNK_0xf090' codep=0x224c parp=0xf090
// ================================================

void UNK_0xf090() // UNK_0xf090
{
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  Push(6);
  Push((Pop()==Pop())?1:0); // =
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
// 0xf0b9: WORD 'UNK_0xf0bb' codep=0x224c parp=0xf0bb
// ================================================

void UNK_0xf0bb() // UNK_0xf0bb
{
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read8(Pop())&0xFF); // C@
  N_gt_STAT(); // N>STAT case
}


// ================================================
// 0xf0c3: WORD 'UNK_0xf0c5' codep=0x224c parp=0xf0c5
// ================================================

void UNK_0xf0c5() // UNK_0xf0c5
{
  Push(pp_PATIENC); // PATIENC
  Push(Read16(Pop())); // @
  Push(4);
  _gt_(); // >
  UNK_0xf07e(); // UNK_0xf07e
  Push(4);
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf0d7: WORD 'UNK_0xf0d9' codep=0x224c parp=0xf0d9
// ================================================

void UNK_0xf0d9() // UNK_0xf0d9
{
  UNK_0xf07e(); // UNK_0xf07e
  Push(7);
  _gt_(); // >
}


// ================================================
// 0xf0e1: WORD 'UNK_0xf0e3' codep=0x224c parp=0xf0e3
// ================================================

void UNK_0xf0e3() // UNK_0xf0e3
{
  Push(pp_PATIENC); // PATIENC
  Push(Read16(Pop())); // @
  Push(2);
  _gt_(); // >
  UNK_0xf0d9(); // UNK_0xf0d9
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf0f3: WORD 'UNK_0xf0f5' codep=0x224c parp=0xf0f5
// ================================================

void UNK_0xf0f5() // UNK_0xf0f5
{
  Push(pp_PATIENC); // PATIENC
  Push(Read16(Pop())); // @
  Push(3);
  _st_(); // <
  UNK_0xf0d9(); // UNK_0xf0d9
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf105: WORD 'UNK_0xf107' codep=0x224c parp=0xf107
// ================================================

void UNK_0xf107() // UNK_0xf107
{
  UNK_0xf0c5(); // UNK_0xf0c5
  if (Pop() != 0)
  {
    Push(1);
    return;
  }
  UNK_0xf0e3(); // UNK_0xf0e3
  if (Pop() != 0)
  {
    Push(2);
    return;
  }
  UNK_0xf0d9(); // UNK_0xf0d9
  if (Pop() != 0)
  {
    Push(4);
    return;
  }
  UNK_0xf0f5(); // UNK_0xf0f5
  if (Pop() != 0)
  {
    Push(3);
    return;
  }
  Push(0);
}


// ================================================
// 0xf13b: WORD 'UNK_0xf13d' codep=0x224c parp=0xf13d
// ================================================

void UNK_0xf13d() // UNK_0xf13d
{
  UNK_0xf090(); // UNK_0xf090
  if (Pop() != 0)
  {
    UNK_0xf107(); // UNK_0xf107
    return;
  }
  UNK_0xf0bb(); // UNK_0xf0bb
}


// ================================================
// 0xf14d: WORD 'UNK_0xf14f' codep=0x224c parp=0xf14f
// ================================================

void UNK_0xf14f() // UNK_0xf14f
{
  PRINT("GLOWING", 7); // (.")
  Push(4);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf161: WORD 'UNK_0xf163' codep=0x224c parp=0xf163
// ================================================

void UNK_0xf163() // UNK_0xf163
{
  UNK_0xf14f(); // UNK_0xf14f
  PRINT("GREEN", 5); // (.")
}


// ================================================
// 0xf16f: WORD 'UNK_0xf171' codep=0x224c parp=0xf171
// ================================================

void UNK_0xf171() // UNK_0xf171
{
  UNK_0xf14f(); // UNK_0xf14f
  PRINT("YELLOW", 6); // (.")
}


// ================================================
// 0xf17e: WORD 'UNK_0xf180' codep=0x224c parp=0xf180
// ================================================

void UNK_0xf180() // UNK_0xf180
{
  UNK_0xf14f(); // UNK_0xf14f
  PRINT("RED", 3); // (.")
}


// ================================================
// 0xf18a: WORD 'UNK_0xf18c' codep=0x224c parp=0xf18c
// ================================================

void UNK_0xf18c() // UNK_0xf18c
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
    UNK_0xf163(); // UNK_0xf163
    break;
  case 2:
    UNK_0xf171(); // UNK_0xf171
    break;
  case 3:
    UNK_0xf180(); // UNK_0xf180
    break;
  case 4:
    UNK_0xf18c(); // UNK_0xf18c
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf1ba: WORD 'UNK_0xf1bc' codep=0x224c parp=0xf1bc
// ================================================

void UNK_0xf1bc() // UNK_0xf1bc
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
  Push(a); // R>
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf1ec: WORD 'UNK_0xf1ee' codep=0x224c parp=0xf1ee
// ================================================

void UNK_0xf1ee() // UNK_0xf1ee
{
  Push(0x000e);
  UNK_0xf090(); // UNK_0xf090
  if (Pop() != 0)
  {
    Push(0xb78d); // probable 'TV?ART'
  } else
  {
    Push(0xb76b); // probable 'OV?ART'
  }
  MODULE(); // MODULE
}


// ================================================
// 0xf208: WORD 'UNK_0xf20a' codep=0x224c parp=0xf20a
// ================================================

void UNK_0xf20a() // UNK_0xf20a
{
  Push(pp__ro_AORIGI); // (AORIGI
  _at__gt_C_plus_S(); // @>C+S
  Push(0x0013);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(0x0018);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(0x0016);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf230: WORD 'PSYCH' codep=0x224c parp=0xf23a
// ================================================
// entry

void PSYCH() // PSYCH
{
  UNK_0xf1ee(); // UNK_0xf1ee
  UNK_0xf20a(); // UNK_0xf20a
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    UNK_0xf13d(); // UNK_0xf13d
    Push(pp_UNK_0xf08c); // UNK_0xf08c
    Push(Read16(Pop())); // @
    Push((Pop()==Pop())?1:0); // =
    if (Pop() == 0) Push(1); else Push(0); // NOT
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      SetColor("WHITE");
      _ex_COLOR(); // !COLOR
      UNK_0xf13d(); // UNK_0xf13d
      Push(Read16(regsp)); // DUP
      Push(pp_UNK_0xf08c); // UNK_0xf08c
      _ex__2(); // !_2
      UNK_0x3f09("THE PSYCHIC PROBE IS ");
      _dot_TTY(); // .TTY
      _n__gt__dot_COL(); // #>.COL case
      PRINT(".", 1); // (.")
    }
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf288: WORD 'UNK_0xf28a' codep=0x224c parp=0xf28a
// ================================================

void UNK_0xf28a() // UNK_0xf28a
{
  Push(0x00c7);
  Push(0x009f);
  Push(0x0021);
  Push(0x0014);
  SETCLIP(); // SETCLIP
}

// 0xf29e: db 0x4c 0x22 0x5d 0x17 0x13 0x00 0x20 0x0f 0x20 0x0f 0x5d 0x17 0x9f 0x00 0xa7 0x4f 0x93 0x9b 0x90 0x16 0x94 0x73 0x15 0x21 0x01 0x32 0xd1 0x6a 0x94 0x73 0x20 0x16 0x01 0x17 0x49 0x6c 'L"]       ]    O     s ! 2 j s    Il'

// ================================================
// 0xf2c2: WORD 'UNK_0xf2c4' codep=0x224c parp=0xf2c4
// ================================================

void UNK_0xf2c4() // UNK_0xf2c4
{
  _at_INST_dash_S(); // @INST-S
  Push(0x002e);
  _dash_(); // -
  Push(0x0028);
  SWAP(); // SWAP
  _at_RECORD(); // @RECORD
}


// ================================================
// 0xf2d6: WORD 'UNK_0xf2d8' codep=0x224c parp=0xf2d8
// ================================================

void UNK_0xf2d8() // UNK_0xf2d8
{
  UNK_0xf2c4(); // UNK_0xf2c4
  Push(0x0012);
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
}


// ================================================
// 0xf2e4: WORD 'UNK_0xf2e6' codep=0x224c parp=0xf2e6
// ================================================

void UNK_0xf2e6() // UNK_0xf2e6
{
  UNK_0xf2c4(); // UNK_0xf2c4
  Push(0x0014);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf2f0: WORD 'UNK_0xf2f2' codep=0x224c parp=0xf2f2
// ================================================

void UNK_0xf2f2() // UNK_0xf2f2
{
  UNK_0xf2c4(); // UNK_0xf2c4
  Push(0x0044);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf2fc: WORD 'UNK_0xf2fe' codep=0x224c parp=0xf2fe
// ================================================

void UNK_0xf2fe() // UNK_0xf2fe
{
  UNK_0xf2c4(); // UNK_0xf2c4
  Push(0x0050);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf308: WORD 'UNK_0xf30a' codep=0x224c parp=0xf30a
// ================================================

void UNK_0xf30a() // UNK_0xf30a
{
  UNK_0xf2c4(); // UNK_0xf2c4
  Push(0x0068);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf314: WORD 'UNK_0xf316' codep=0x224c parp=0xf316
// ================================================

void UNK_0xf316() // UNK_0xf316
{
  UNK_0xf2c4(); // UNK_0xf2c4
  Push(0x006e);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf320: WORD 'UNK_0xf322' codep=0x224c parp=0xf322
// ================================================

void UNK_0xf322() // UNK_0xf322
{
  Push(pp_LSCAN); // LSCAN
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf328: WORD 'UNK_0xf32a' codep=0x224c parp=0xf32a
// ================================================

void UNK_0xf32a() // UNK_0xf32a
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
  UNK_0xf322(); // UNK_0xf322
  _ex__2(); // !_2
  Push(2);
  UNK_0xf322(); // UNK_0xf322
  _ex__2(); // !_2
  Push(4);
  UNK_0xf322(); // UNK_0xf322
  _ex__2(); // !_2
  Push(6);
  UNK_0xf322(); // UNK_0xf322
  _ex__2(); // !_2
  Push(2);
  Push(pp__n_IN); // #IN
  _ex__2(); // !_2
  Push(0);
  UNK_0xf322(); // UNK_0xf322
  Push(pp_VIN); // VIN
  _ex__2(); // !_2
  Push(0x0014);
  UNK_0xf322(); // UNK_0xf322
  Push(pp_VOUT); // VOUT
  _ex__2(); // !_2
  Push(0x0028);
  UNK_0xf322(); // UNK_0xf322
  Push(pp_OIN); // OIN
  _ex__2(); // !_2
  Push(0x003c);
  UNK_0xf322(); // UNK_0xf322
  Push(pp_OOUT); // OOUT
  _ex__2(); // !_2
  Push(pp__ask_OPEN); // ?OPEN
  ON_2(); // ON_2
  CLIPPER(); // CLIPPER
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(pp__ask_OPEN); // ?OPEN
  _099(); // 099
  if (Pop() != 0)
  {
    Push(pp_VIN); // VIN
    Push(Read16(Pop())); // @
    a = Pop(); // >R
    Push(a); // I
    Push(Pop()+2); // 2+
    Push(Read16(Pop())); // @
    Push(a); // I
    Push(Read16(Pop())); // @
    Push(a); // I
    Push(6);
    Push(Pop() + Pop()); // +
    Push(Read16(Pop())); // @
    Push(a); // R>
    Push(4);
    Push(Pop() + Pop()); // +
    Push(Read16(Pop())); // @
    Push(1);
    return;
  }
  Push(0);
}


// ================================================
// 0xf3b6: WORD 'UNK_0xf3b8' codep=0x224c parp=0xf3b8
// ================================================

void UNK_0xf3b8() // UNK_0xf3b8
{
  WLD_gt_SCR(); // WLD>SCR
  _2SWAP(); // 2SWAP
  WLD_gt_SCR(); // WLD>SCR
  _1PIX(); // 1PIX
  UNK_0xf32a(); // UNK_0xf32a
  if (Pop() != 0)
  {
    LLINE(); // LLINE
  }
  _2PIX(); // 2PIX
}


// ================================================
// 0xf3cc: WORD 'UNK_0xf3ce' codep=0x224c parp=0xf3ce
// ================================================

void UNK_0xf3ce() // UNK_0xf3ce
{
  Push(0x0015);
  SWAP(); // SWAP
  _at_RECORD(); // @RECORD
  Push(0x0010);
}


// ================================================
// 0xf3dc: WORD 'UNK_0xf3de' codep=0x224c parp=0xf3de
// ================================================

void UNK_0xf3de() // UNK_0xf3de
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(Read16(regsp)); // DUP
  Push(1);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Pop()-1); // 1-
    Push(8);
  } else
  {
    Push(0);
  }
  Push(Pop() * Pop()); // *
  UNK_0xf2e6(); // UNK_0xf2e6
  Push(Pop() + Pop()); // +
  Push(a); // I
  _0_gt_(); // 0>
  if (Pop() != 0)
  {
    Push(4);
    Push(Pop() + Pop()); // +
  }
  _2_at_(); // 2@
  SWAP(); // SWAP
  WLD_gt_SCR(); // WLD>SCR
  Push(a); // I
  _4_star_(); // 4*
  UNK_0xf2fe(); // UNK_0xf2fe
  Push(Pop() + Pop()); // +
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(a); // I
  _4_star_(); // 4*
  UNK_0xf2fe(); // UNK_0xf2fe
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  UNK_0xf1bc(); // UNK_0xf1bc
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    POS_dot_(); // POS.
    Push(a); // I
    Push(Pop()*2); // 2*
    UNK_0xf2f2(); // UNK_0xf2f2
    Push(Pop() + Pop()); // +
    Push(2);
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(a); // I
    UNK_0xf30a(); // UNK_0xf30a
    Push(Pop() + Pop()); // +
    Push(Read8(Pop())&0xFF); // C@
    UNK_0xf3ce(); // UNK_0xf3ce
    _dash_TRAILING(); // -TRAILING
    _2OVER(); // 2OVER
    Push(6);
    _dash_(); // -
    POS_dot_(); // POS.
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(Read16(a)); // R@
    UNK_0xf316(); // UNK_0xf316
    Push(Pop() + Pop()); // +
    Push(Read8(Pop())&0xFF); // C@
    Push(0x001c);
    SWAP(); // SWAP
    _at_RECORD(); // @RECORD
    Push(0x0018);
    Push(0x002e);
    _dash_XTRAIL(); // -XTRAIL
    _2SWAP(); // 2SWAP
    Push(0x000c);
    _dash_(); // -
    POS_dot_(); // POS.
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  } else
  {
    Pop(); Pop();// 2DROP
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf48a: WORD 'UNK_0xf48c' codep=0x224c parp=0xf48c
// ================================================

void UNK_0xf48c() // UNK_0xf48c
{
  unsigned short int a, b;
  a = Pop(); // >R
  b = Pop(); // >R
  _at_CRS(); // @CRS
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(Read16(regsp)); // DUP
  Push(6);
  _dash_(); // -
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(2);
  _dash_(); // -
  SWAP(); // SWAP
  OVER(); // OVER
  Push(b); // R>
  Push(4);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(Pop()+2); // 2+
  Push(a); // R>
  POLY_dash_WI(); // POLY-WI
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf4bc: WORD 'UNK_0xf4be' codep=0x224c parp=0xf4be
// ================================================

void UNK_0xf4be() // UNK_0xf4be
{
  UNK_0xf2c4(); // UNK_0xf2c4
  Push(0x0012);
  _dash_TRAILING(); // -TRAILING
  Push(Read16(regsp)); // DUP
  Push(Pop()>>1); // 2/
  Push(4);
  Push(Pop() * Pop()); // *
  Push(0x005c);
  SWAP(); // SWAP
  _dash_(); // -
  Push(0x00c4);
  POS_dot_(); // POS.
  Push(Read16(regsp)); // DUP
  SetColor("BLACK");
  UNK_0xf48c(); // UNK_0xf48c
  SetColor("YELLOW");
  _ex_COLOR(); // !COLOR
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf4ea: WORD 'UNK_0xf4ec' codep=0x224c parp=0xf4ec
// ================================================

void UNK_0xf4ec() // UNK_0xf4ec
{
  unsigned short int i, imax;
  UNK_0xf28a(); // UNK_0xf28a
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xf2d8(); // UNK_0xf2d8
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    UNK_0xf2e6(); // UNK_0xf2e6
    Push(i); // I
    Push(8);
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    _2_at_(); // 2@
    SWAP(); // SWAP
    UNK_0xf2e6(); // UNK_0xf2e6
    Push(i); // I
    Push(8);
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    Push(4);
    Push(Pop() + Pop()); // +
    _2_at_(); // 2@
    SWAP(); // SWAP
    UNK_0xf3b8(); // UNK_0xf3b8
    Push(i); // I
    Push(Pop()+1); // 1+
    UNK_0xf3de(); // UNK_0xf3de
    Push(i); // I
    Push(Read16(regsp)); // DUP
    if (Pop() == 0) Push(1); else Push(0); // 0=
    if (Pop() != 0)
    {
      UNK_0xf3de(); // UNK_0xf3de
    } else
    {
      Pop(); // DROP
    }
  i++;
  } while(i<imax); // (LOOP) 0xffc4

  DCLIPSE(); // DCLIPSE
}


// ================================================
// 0xf53a: WORD '.TMAP' codep=0x224c parp=0xf544
// ================================================
// entry

void _dot_TMAP() // .TMAP
{
  Push(pp_TMAP); // TMAP
  _at__gt_C_plus_S(); // @>C+S
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xf4ec(); // UNK_0xf4ec
  UNK_0xf4be(); // UNK_0xf4be
  ICLOSE(); // ICLOSE
}

// 0xf558: db 0x46 0x58 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x00 'FX-VOC__ '
  