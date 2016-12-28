// ====== OVERLAY 'JUMP' ======
// store offset = 0xed30
// overlay size   = 0x0830

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xed46  codep:0x1d29 parp:0xed46 size:0x0002 C-string:'UNK_0xed46'
//      UNK_0xed4a  codep:0x224c parp:0xed4a size:0x0008 C-string:'UNK_0xed4a'
//      UNK_0xed54  codep:0x224c parp:0xed54 size:0x0008 C-string:'UNK_0xed54'
//      UNK_0xed5e  codep:0x224c parp:0xed5e size:0x005c C-string:'UNK_0xed5e'
//      UNK_0xedbc  codep:0x7420 parp:0xedbc size:0x0003 C-string:'UNK_0xedbc'
//      UNK_0xedc1  codep:0x7420 parp:0xedc1 size:0x0003 C-string:'UNK_0xedc1'
//      UNK_0xedc6  codep:0x7420 parp:0xedc6 size:0x0003 C-string:'UNK_0xedc6'
//      UNK_0xedcb  codep:0x7420 parp:0xedcb size:0x0003 C-string:'UNK_0xedcb'
//      UNK_0xedd0  codep:0x7420 parp:0xedd0 size:0x0003 C-string:'UNK_0xedd0'
//      UNK_0xedd5  codep:0x1d29 parp:0xedd5 size:0x0002 C-string:'UNK_0xedd5'
//      UNK_0xedd9  codep:0x1d29 parp:0xedd9 size:0x0002 C-string:'UNK_0xedd9'
//      UNK_0xeddd  codep:0x224c parp:0xeddd size:0x0018 C-string:'UNK_0xeddd'
//      UNK_0xedf7  codep:0x224c parp:0xedf7 size:0x0008 C-string:'UNK_0xedf7'
//      UNK_0xee01  codep:0x224c parp:0xee01 size:0x0008 C-string:'UNK_0xee01'
//      UNK_0xee0b  codep:0x224c parp:0xee0b size:0x0008 C-string:'UNK_0xee0b'
//      UNK_0xee15  codep:0x224c parp:0xee15 size:0x0008 C-string:'UNK_0xee15'
//      UNK_0xee1f  codep:0x224c parp:0xee1f size:0x0010 C-string:'UNK_0xee1f'
//      UNK_0xee31  codep:0x224c parp:0xee31 size:0x0010 C-string:'UNK_0xee31'
//      UNK_0xee43  codep:0x224c parp:0xee43 size:0x0028 C-string:'UNK_0xee43'
//      UNK_0xee6d  codep:0x224c parp:0xee6d size:0x004c C-string:'UNK_0xee6d'
//      UNK_0xeebb  codep:0x224c parp:0xeebb size:0x0026 C-string:'UNK_0xeebb'
//      UNK_0xeee3  codep:0x224c parp:0xeee3 size:0x0022 C-string:'UNK_0xeee3'
//      UNK_0xef07  codep:0x224c parp:0xef07 size:0x0028 C-string:'UNK_0xef07'
//      UNK_0xef31  codep:0x224c parp:0xef31 size:0x0006 C-string:'UNK_0xef31'
//         (GET-AU  codep:0x4b3b parp:0xef43 size:0x0020 C-string:'_ro_GET_dash_AU'
//      UNK_0xef65  codep:0x224c parp:0xef65 size:0x001a C-string:'UNK_0xef65'
//      UNK_0xef81  codep:0x224c parp:0xef81 size:0x002f C-string:'UNK_0xef81'
//      UNK_0xefb2  codep:0x224c parp:0xefb2 size:0x0028 C-string:'UNK_0xefb2'
//      UNK_0xefdc  codep:0x1d29 parp:0xefdc size:0x0002 C-string:'UNK_0xefdc'
//      UNK_0xefe0  codep:0x224c parp:0xefe0 size:0x0008 C-string:'UNK_0xefe0'
//      UNK_0xefea  codep:0x224c parp:0xefea size:0x0024 C-string:'UNK_0xefea'
//      UNK_0xf010  codep:0x224c parp:0xf010 size:0x0006 C-string:'UNK_0xf010'
//      UNK_0xf018  codep:0x224c parp:0xf018 size:0x002e C-string:'UNK_0xf018'
//      UNK_0xf048  codep:0x224c parp:0xf048 size:0x0014 C-string:'UNK_0xf048'
//      UNK_0xf05e  codep:0x224c parp:0xf05e size:0x000c C-string:'UNK_0xf05e'
//      UNK_0xf06c  codep:0x1d29 parp:0xf06c size:0x0002 C-string:'UNK_0xf06c'
//      UNK_0xf070  codep:0x224c parp:0xf070 size:0x0022 C-string:'UNK_0xf070'
//      UNK_0xf094  codep:0x224c parp:0xf094 size:0x001a C-string:'UNK_0xf094'
//      UNK_0xf0b0  codep:0x224c parp:0xf0b0 size:0x000e C-string:'UNK_0xf0b0'
//      UNK_0xf0c0  codep:0x224c parp:0xf0c0 size:0x0006 C-string:'UNK_0xf0c0'
//      UNK_0xf0c8  codep:0x224c parp:0xf0c8 size:0x000a C-string:'UNK_0xf0c8'
//      UNK_0xf0d4  codep:0x224c parp:0xf0d4 size:0x0054 C-string:'UNK_0xf0d4'
//      UNK_0xf12a  codep:0x1d29 parp:0xf12a size:0x0002 C-string:'UNK_0xf12a'
//      UNK_0xf12e  codep:0x224c parp:0xf12e size:0x002c C-string:'UNK_0xf12e'
//      UNK_0xf15c  codep:0x224c parp:0xf15c size:0x0008 C-string:'UNK_0xf15c'
//      UNK_0xf166  codep:0x224c parp:0xf166 size:0x0024 C-string:'UNK_0xf166'
//      UNK_0xf18c  codep:0x224c parp:0xf18c size:0x003a C-string:'UNK_0xf18c'
//      UNK_0xf1c8  codep:0x224c parp:0xf1c8 size:0x001a C-string:'UNK_0xf1c8'
//      UNK_0xf1e4  codep:0x224c parp:0xf1e4 size:0x0018 C-string:'UNK_0xf1e4'
//      UNK_0xf1fe  codep:0x224c parp:0xf1fe size:0x0022 C-string:'UNK_0xf1fe'
//      UNK_0xf222  codep:0x224c parp:0xf222 size:0x002c C-string:'UNK_0xf222'
//      UNK_0xf250  codep:0x224c parp:0xf250 size:0x0018 C-string:'UNK_0xf250'
//      UNK_0xf26a  codep:0x224c parp:0xf26a size:0x00a8 C-string:'UNK_0xf26a'
//      UNK_0xf314  codep:0x224c parp:0xf314 size:0x006a C-string:'UNK_0xf314'
//      UNK_0xf380  codep:0x224c parp:0xf380 size:0x0016 C-string:'UNK_0xf380'
//      UNK_0xf398  codep:0x224c parp:0xf398 size:0x0024 C-string:'UNK_0xf398'
//      UNK_0xf3be  codep:0x224c parp:0xf3be size:0x0014 C-string:'UNK_0xf3be'
//      UNK_0xf3d4  codep:0x224c parp:0xf3d4 size:0x0020 C-string:'UNK_0xf3d4'
//      UNK_0xf3f6  codep:0x224c parp:0xf3f6 size:0x0012 C-string:'UNK_0xf3f6'
//      UNK_0xf40a  codep:0x224c parp:0xf40a size:0x0034 C-string:'UNK_0xf40a'
//      UNK_0xf440  codep:0x224c parp:0xf440 size:0x0022 C-string:'UNK_0xf440'
//      UNK_0xf464  codep:0x224c parp:0xf464 size:0x001c C-string:'UNK_0xf464'
//      UNK_0xf482  codep:0x224c parp:0xf482 size:0x0046 C-string:'UNK_0xf482'
//            JUMP  codep:0x224c parp:0xf4d1 size:0x0000 C-string:'JUMP'

// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xed46 = 0xed46; // UNK_0xed46 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xedd5 = 0xedd5; // UNK_0xedd5 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xedd9 = 0xedd9; // UNK_0xedd9 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xefdc = 0xefdc; // UNK_0xefdc size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf06c = 0xf06c; // UNK_0xf06c size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf12a = 0xf12a; // UNK_0xf12a size: 2
// {0x3a, 0x20}




// 0xed42: db 0x82 0x00 '  '

// ================================================
// 0xed44: WORD 'UNK_0xed46' codep=0x1d29 parp=0xed46
// ================================================
// 0xed46: db 0x3a 0x20 ': '

// ================================================
// 0xed48: WORD 'UNK_0xed4a' codep=0x224c parp=0xed4a
// ================================================

void UNK_0xed4a() // UNK_0xed4a
{
  Push(pp_UNK_0xed46); // UNK_0xed46 size: 0
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xed52: WORD 'UNK_0xed54' codep=0x224c parp=0xed54
// ================================================

void UNK_0xed54() // UNK_0xed54
{
  Push(pp_UNK_0xed46); // UNK_0xed46 size: 0
  Push(Read16(Pop())); // @
  _dash_(); // -
}


// ================================================
// 0xed5c: WORD 'UNK_0xed5e' codep=0x224c parp=0xed5e
// ================================================

void UNK_0xed5e() // UNK_0xed5e
{
  _gt_R(); // >R
  _gt_R(); // >R
  _gt_R(); // >R
  Push(Read16(regsp)); // DUP
  Push(h); // I
  UNK_0xed54(); // UNK_0xed54
  SWAP(); // SWAP
  UNK_0xed4a(); // UNK_0xed4a
  Push(g); // J
  UNK_0xed4a(); // UNK_0xed4a
  OVER(); // OVER
  LLINE(); // LLINE
  Push(h); // I
  UNK_0xed54(); // UNK_0xed54
  OVER(); // OVER
  UNK_0xed4a(); // UNK_0xed4a
  Push(h); // I
  UNK_0xed4a(); // UNK_0xed4a
  Push(h); // I'
  UNK_0xed54(); // UNK_0xed54
  LLINE(); // LLINE
  Push(h); // I
  UNK_0xed4a(); // UNK_0xed4a
  Push(h); // I'
  UNK_0xed54(); // UNK_0xed54
  Push(g); // J
  UNK_0xed54(); // UNK_0xed54
  Push(h); // I'
  UNK_0xed54(); // UNK_0xed54
  LLINE(); // LLINE
  Push(g); // J
  UNK_0xed54(); // UNK_0xed54
  Push(h); // I'
  UNK_0xed54(); // UNK_0xed54
  ROT(); // ROT
  Push(g); // J
  UNK_0xed4a(); // UNK_0xed4a
  SWAP(); // SWAP
  UNK_0xed4a(); // UNK_0xed4a
  LLINE(); // LLINE
  R_gt_(); // R>
  Pop(); // DROP
  R_gt_(); // R>
  R_gt_(); // R>
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xedba: WORD 'UNK_0xedbc' codep=0x7420 parp=0xedbc
// ================================================
// 0xedbc: db 0x10 0x0b 0x0f '   '

// ================================================
// 0xedbf: WORD 'UNK_0xedc1' codep=0x7420 parp=0xedc1
// ================================================
// 0xedc1: db 0x11 0x11 0x12 '   '

// ================================================
// 0xedc4: WORD 'UNK_0xedc6' codep=0x7420 parp=0xedc6
// ================================================
// 0xedc6: db 0x14 0x34 0x0f ' 4 '

// ================================================
// 0xedc9: WORD 'UNK_0xedcb' codep=0x7420 parp=0xedcb
// ================================================
// 0xedcb: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xedce: WORD 'UNK_0xedd0' codep=0x7420 parp=0xedd0
// ================================================
// 0xedd0: db 0x14 0x56 0x01 ' V '

// ================================================
// 0xedd3: WORD 'UNK_0xedd5' codep=0x1d29 parp=0xedd5
// ================================================
// 0xedd5: db 0x3a 0x20 ': '

// ================================================
// 0xedd7: WORD 'UNK_0xedd9' codep=0x1d29 parp=0xedd9
// ================================================
// 0xedd9: db 0x3a 0x20 ': '

// ================================================
// 0xeddb: WORD 'UNK_0xeddd' codep=0x224c parp=0xeddd
// ================================================

void UNK_0xeddd() // UNK_0xeddd
{
  POS_dot_(); // POS.
  Push(0x000d);
  SetColor("GREY1");
  POLY_dash_ER(); // POLY-ER
  _gt_1FONT(); // >1FONT
  SetColor("BLACK");
  SetColor("GREY2");
  SetColor("DK-BLUE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xedf5: WORD 'UNK_0xedf7' codep=0x224c parp=0xedf7
// ================================================

void UNK_0xedf7() // UNK_0xedf7
{
  Push(0xc090);
  MODULE(); // MODULE
}


// ================================================
// 0xedff: WORD 'UNK_0xee01' codep=0x224c parp=0xee01
// ================================================

void UNK_0xee01() // UNK_0xee01
{
  Push(0xbc98);
  MODULE(); // MODULE
}


// ================================================
// 0xee09: WORD 'UNK_0xee0b' codep=0x224c parp=0xee0b
// ================================================

void UNK_0xee0b() // UNK_0xee0b
{
  Push(0xc4ef);
  MODULE(); // MODULE
}


// ================================================
// 0xee13: WORD 'UNK_0xee15' codep=0x224c parp=0xee15
// ================================================

void UNK_0xee15() // UNK_0xee15
{
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
}


// ================================================
// 0xee1d: WORD 'UNK_0xee1f' codep=0x224c parp=0xee1f
// ================================================

void UNK_0xee1f() // UNK_0xee1f
{
  UNK_0xee15(); // UNK_0xee15
  if (Pop() == 0) goto label1;
  Push(Pop() + Pop()); // +
  return;

  label1:
  _dash_(); // -
}


// ================================================
// 0xee2f: WORD 'UNK_0xee31' codep=0x224c parp=0xee31
// ================================================

void UNK_0xee31() // UNK_0xee31
{
  _gt_C_plus_S(); // >C+S
  Push(0x65ec); // IFIELD(PHRASE$)
  Push(pp_LSCAN); // LSCAN size: 400
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN size: 400
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee41: WORD 'UNK_0xee43' codep=0x224c parp=0xee43
// ================================================

void UNK_0xee43() // UNK_0xee43
{
  Push(pp_EYEXY); // EYEXY size: 4
  _2_at_(); // 2@
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  ROT(); // ROT
  _dash_(); // -
  ABS(); // ABS
  _gt_R(); // >R
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  R_gt_(); // R>
  MAX(); // MAX
  ICLOSE(); // ICLOSE
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
}


// ================================================
// 0xee6b: WORD 'UNK_0xee6d' codep=0x224c parp=0xee6d
// ================================================

void UNK_0xee6d() // UNK_0xee6d
{
  Push(0x0010);
  Push(0x0041);
  UNK_0xeddd(); // UNK_0xeddd
  Push(0x003a);
  Push(pp_FILE_n_); // FILE# size: 2
  _ex__2(); // !_2
  Push(pp_RECORD_n_); // RECORD# size: 2
  _099(); // 099
  Push(Pop()-1); // 1-
  Push(Read16(regsp)); // DUP
  Push(0x000c);
  Push(Pop() * Pop()); // *
  LoadData("1BTN"); // from 'ANALYZE-TEXT'
  Push(Pop() + Pop()); // +
  Push(0x000c);
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  Push(0x0010);
  Push(0x003b);
  UNK_0xeddd(); // UNK_0xeddd
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(0x65f2); // IFIELD(UNK_0xedc1)
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65ec); // IFIELD(UNK_0xedbc)
  _do__dot_(); // $.
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeeb9: WORD 'UNK_0xeebb' codep=0x224c parp=0xeebb
// ================================================

void UNK_0xeebb() // UNK_0xeebb
{
  Push(0x0010);
  Push(0x0041);
  UNK_0xeddd(); // UNK_0xeddd
  PRINT("ISS", 3); // (.")
  Push(0x0010);
  Push(0x003b);
  UNK_0xeddd(); // UNK_0xeddd
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6615); // IFIELD(UNK_0xedc6)
  _do__dot_(); // $.
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeee1: WORD 'UNK_0xeee3' codep=0x224c parp=0xeee3
// ================================================

void UNK_0xeee3() // UNK_0xeee3
{
  Push(Read16(regsp)); // DUP
  Push(0); // 0
  Push(cc__7); // 7
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  UNK_0xeebb(); // UNK_0xeebb
  goto label1;

  label2:
  Push(Read16(regsp)); // DUP
  UNK_0xee6d(); // UNK_0xee6d

  label1:
  _dot_BTN_dash_TE(); // .BTN-TE
}


// ================================================
// 0xef05: WORD 'UNK_0xef07' codep=0x224c parp=0xef07
// ================================================

void UNK_0xef07() // UNK_0xef07
{
  _gt_R(); // >R
  Push(0x003b);
  R_at_(); // R@
  _dash_(); // -
  Push(0x0023);
  R_at_(); // R@
  _dash_(); // -
  Push(0x003c);
  R_at_(); // R@
  Push(Pop() + Pop()); // +
  Push(0x0024);
  R_gt_(); // R>
  Push(Pop() + Pop()); // +
  DISPLAY(); // DISPLAY
  UNK_0xed5e(); // UNK_0xed5e
}


// ================================================
// 0xef2f: WORD 'UNK_0xef31' codep=0x224c parp=0xef31
// ================================================

void UNK_0xef31() // UNK_0xef31
{
  SetColor("BLACK");
  ERASE_dash_A(); // ERASE-A
}


// ================================================
// 0xef37: WORD '(GET-AU' codep=0x4b3b parp=0xef43
// ================================================
// 0xef43: db 0x07 0x00 0x31 0xef 0x01 0x00 0xf7 0xed 0x02 0x00 0xf7 0xed 0x03 0x00 0x01 0xee 0x04 0x00 0x0b 0xee 0x05 0x00 0x1d 0xcb 0x06 0x00 0x1d 0xcb 0x08 0x00 0x0b 0xee '  1                             '

// ================================================
// 0xef63: WORD 'UNK_0xef65' codep=0x224c parp=0xef65
// ================================================

void UNK_0xef65() // UNK_0xef65
{
  SetColor("BLACK");
  _ro_SHIP_dash_C(); // (SHIP-C
  Push(pp__n_AUX); // #AUX size: 2
  Push(Read16(Pop())); // @
  Pop();
  switch(Pop()) // (GET-AU
  {
  case 1:
    UNK_0xedf7(); // UNK_0xedf7
    break;
  case 2:
    UNK_0xedf7(); // UNK_0xedf7
    break;
  case 3:
    UNK_0xee01(); // UNK_0xee01
    break;
  case 4:
    UNK_0xee0b(); // UNK_0xee0b
    break;
  case 5:
    GET_dash_HA(); // GET-HA
    break;
  case 6:
    GET_dash_HA(); // GET-HA
    break;
  case 8:
    UNK_0xee0b(); // UNK_0xee0b
    break;
  default:
    UNK_0xef31(); // UNK_0xef31
    break;

  }
  Push(pp_BTN_dash_REC); // BTN-REC size: 2
  Push(Read16(Pop())); // @
  UNK_0xeee3(); // UNK_0xeee3
  SetColor("BLUE");
  Push(pp_THIS_dash_BU); // THIS-BU size: 2
  Push(Read16(Pop())); // @
  _dot_HIGHLI(); // .HIGHLI
}


// ================================================
// 0xef7f: WORD 'UNK_0xef81' codep=0x224c parp=0xef81
// ================================================

void UNK_0xef81() // UNK_0xef81
{
  _gt_DISPLA(); // >DISPLA
  CTINIT(); // CTINIT

  UNK_0x3f09("JUMP POD ENGAGED");
  _dot_TTY(); // .TTY
  Push(0x6b12); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY
  Push(0x6b3c); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY
}


// ================================================
// 0xefb0: WORD 'UNK_0xefb2' codep=0x224c parp=0xefb2
// ================================================

void UNK_0xefb2() // UNK_0xefb2
{
  _gt_DISPLA(); // >DISPLA
  Push(pp_XORMODE); // XORMODE size: 2
  _099(); // 099
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0x0025);
  Push(0x0085);
  POS_dot_(); // POS.
  Push(2); // 2
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  Push(0x0063);
  MIN(); // MIN
  Push(2); // 2
  _dot_R(); // .R
  _gt_MAINVI(); // >MAINVI
}


// ================================================
// 0xefda: WORD 'UNK_0xefdc' codep=0x1d29 parp=0xefdc
// ================================================
// 0xefdc: db 0x3a 0x20 ': '

// ================================================
// 0xefde: WORD 'UNK_0xefe0' codep=0x224c parp=0xefe0
// ================================================

void UNK_0xefe0() // UNK_0xefe0
{
  Push(pp_UNK_0xefdc); // UNK_0xefdc size: 0
  Push(Read16(Pop())); // @
  UNK_0xefb2(); // UNK_0xefb2
}


// ================================================
// 0xefe8: WORD 'UNK_0xefea' codep=0x224c parp=0xefea
// ================================================

void UNK_0xefea() // UNK_0xefea
{
  Push(Read16(regsp)); // DUP
  Push(0x0064);
  Push(pp_UNK_0xefdc); // UNK_0xefdc size: 0
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(0); // 0
  SWAP(); // SWAP
  RRND(); // RRND
  Push(0x0028);
  ROT(); // ROT
  _dash_(); // -
  _slash_(); // /
  Push(pp_UNK_0xed46); // UNK_0xed46 size: 0
  _ex__2(); // !_2
  UNK_0xef07(); // UNK_0xef07
}


// ================================================
// 0xf00e: WORD 'UNK_0xf010' codep=0x224c parp=0xf010
// ================================================

void UNK_0xf010() // UNK_0xf010
{
  _ex_COLOR(); // !COLOR
  UNK_0xefea(); // UNK_0xefea
}


// ================================================
// 0xf016: WORD 'UNK_0xf018' codep=0x224c parp=0xf018
// ================================================

void UNK_0xf018() // UNK_0xf018
{
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  Push(cc__6); // 6
  SetColor("DK-BLUE");
  UNK_0xf010(); // UNK_0xf010
  Push(0x000b);
  SetColor("GREEN");
  UNK_0xf010(); // UNK_0xf010
  Push(0x0010);
  SetColor("YELLOW");
  UNK_0xf010(); // UNK_0xf010
  Push(0x0015);
  SetColor("ORANGE");
  UNK_0xf010(); // UNK_0xf010
  Push(0x001a);
  SetColor("RED");
  UNK_0xf010(); // UNK_0xf010
  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xf046: WORD 'UNK_0xf048' codep=0x224c parp=0xf048
// ================================================

void UNK_0xf048() // UNK_0xf048
{
  Push(Read16(regsp)); // DUP
  Push(0x0017);
  _eq_(); // =
  SWAP(); // SWAP
  Push(0x003c);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf05c: WORD 'UNK_0xf05e' codep=0x224c parp=0xf05e
// ================================================

void UNK_0xf05e() // UNK_0xf05e
{
  POINT_gt_I(); // POINT>I
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_C(); // @INST-C
}


// ================================================
// 0xf06a: WORD 'UNK_0xf06c' codep=0x1d29 parp=0xf06c
// ================================================
// 0xf06c: db 0x3a 0x20 ': '

// ================================================
// 0xf06e: WORD 'UNK_0xf070' codep=0x224c parp=0xf070
// ================================================

void UNK_0xf070() // UNK_0xf070
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xf05e(); // UNK_0xf05e
  UNK_0xf048(); // UNK_0xf048
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(cc__dash_1); // -1
  Push(pp_UNK_0xf06c); // UNK_0xf06c size: 0
  _plus__ex__2(); // +!_2

  label1:
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xffec

}


// ================================================
// 0xf092: WORD 'UNK_0xf094' codep=0x224c parp=0xf094
// ================================================

void UNK_0xf094() // UNK_0xf094
{
  Push(pp_EYEXY); // EYEXY size: 4
  _2_at_(); // 2@
  ROT(); // ROT
  Push(pp__star_GLOBAL); // *GLOBAL size: 2
  Push(Read16(Pop())); // @
  _ask_ICONS_dash__1(); // ?ICONS-_1
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xf06c); // UNK_0xf06c size: 0
  _ex__2(); // !_2
  UNK_0xf070(); // UNK_0xf070
  Push(pp_UNK_0xf06c); // UNK_0xf06c size: 0
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf0ae: WORD 'UNK_0xf0b0' codep=0x224c parp=0xf0b0
// ================================================

void UNK_0xf0b0() // UNK_0xf0b0
{
  _gt_R(); // >R
  _dash_(); // -
  R_gt_(); // R>
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xedd9); // UNK_0xedd9 size: 0
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf0be: WORD 'UNK_0xf0c0' codep=0x224c parp=0xf0c0
// ================================================

void UNK_0xf0c0() // UNK_0xf0c0
{
  SWAP(); // SWAP
  OVER(); // OVER
}


// ================================================
// 0xf0c6: WORD 'UNK_0xf0c8' codep=0x224c parp=0xf0c8
// ================================================

void UNK_0xf0c8() // UNK_0xf0c8
{
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(Pop() * Pop()); // *
  Push(Pop()-1); // 1-
  UNK_0xf094(); // UNK_0xf094
}


// ================================================
// 0xf0d2: WORD 'UNK_0xf0d4' codep=0x224c parp=0xf0d4
// ================================================

void UNK_0xf0d4() // UNK_0xf0d4
{
  Push(cc__8); // 8
  UNK_0xf0c8(); // UNK_0xf0c8
  Push(cc__7); // 7
  UNK_0xf0c8(); // UNK_0xf0c8
  UNK_0xf0c0(); // UNK_0xf0c0
  Push(1); // 1
  UNK_0xf0b0(); // UNK_0xf0b0
  Push(cc__6); // 6
  UNK_0xf0c8(); // UNK_0xf0c8
  UNK_0xf0c0(); // UNK_0xf0c0
  Push(1); // 1
  UNK_0xf0b0(); // UNK_0xf0b0
  Push(cc__5); // 5
  UNK_0xf0c8(); // UNK_0xf0c8
  UNK_0xf0c0(); // UNK_0xf0c0
  Push(2); // 2
  UNK_0xf0b0(); // UNK_0xf0b0
  Push(cc__4); // 4
  UNK_0xf0c8(); // UNK_0xf0c8
  UNK_0xf0c0(); // UNK_0xf0c0
  Push(cc__5); // 5
  UNK_0xf0b0(); // UNK_0xf0b0
  Push(cc__3); // 3
  UNK_0xf0c8(); // UNK_0xf0c8
  UNK_0xf0c0(); // UNK_0xf0c0
  Push(0x000a);
  UNK_0xf0b0(); // UNK_0xf0b0
  Push(2); // 2
  UNK_0xf0c8(); // UNK_0xf0c8
  UNK_0xf0c0(); // UNK_0xf0c0
  Push(0x000f);
  UNK_0xf0b0(); // UNK_0xf0b0
  Push(1); // 1
  UNK_0xf0c8(); // UNK_0xf0c8
  UNK_0xf0c0(); // UNK_0xf0c0
  Push(0x0014);
  UNK_0xf0b0(); // UNK_0xf0b0
  Pop(); // DROP
}


// ================================================
// 0xf128: WORD 'UNK_0xf12a' codep=0x1d29 parp=0xf12a
// ================================================
// 0xf12a: db 0x3a 0x20 ': '

// ================================================
// 0xf12c: WORD 'UNK_0xf12e' codep=0x224c parp=0xf12e
// ================================================

void UNK_0xf12e() // UNK_0xf12e
{
  Push(pp_UNK_0xf12a); // UNK_0xf12a size: 0
  _099(); // 099
  Push(pp__star_GLOBAL); // *GLOBAL size: 2
  Push(Read16(Pop())); // @
  _ask_ICONS_dash__2(); // ?ICONS-_2
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xf05e(); // UNK_0xf05e
  UNK_0xf048(); // UNK_0xf048
  if (Pop() == 0) goto label2;
  Push(pp_UNK_0xf12a); // UNK_0xf12a size: 0
  ON_2(); // ON_2

  label2:
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xfff0


  label1:
  Push(pp_UNK_0xf12a); // UNK_0xf12a size: 0
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf15a: WORD 'UNK_0xf15c' codep=0x224c parp=0xf15c
// ================================================

void UNK_0xf15c() // UNK_0xf15c
{
  Push(pp_EYEXY); // EYEXY size: 4
  _2_at_(); // 2@
  UNK_0xf12e(); // UNK_0xf12e
}


// ================================================
// 0xf164: WORD 'UNK_0xf166' codep=0x224c parp=0xf166
// ================================================

void UNK_0xf166() // UNK_0xf166
{
  Push(pp_UNK_0xedd9); // UNK_0xedd9 size: 0
  _099(); // 099
  UNK_0xf15c(); // UNK_0xf15c
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xf0d4(); // UNK_0xf0d4
  Push(pp_UNK_0xedd9); // UNK_0xedd9 size: 0
  Push(Read16(Pop())); // @
  Push(0x005f);
  MIN(); // MIN
  Push(0x000a);
  MAX(); // MAX
  Push(pp_UNK_0xedd9); // UNK_0xedd9 size: 0
  _ex__2(); // !_2
}


// ================================================
// 0xf18a: WORD 'UNK_0xf18c' codep=0x224c parp=0xf18c
// ================================================

void UNK_0xf18c() // UNK_0xf18c
{
  UNK_0xef81(); // UNK_0xef81
  BEEPON_2(); // BEEPON_2
  UNK_0xf166(); // UNK_0xf166
  Push(pp_UNK_0xedd9); // UNK_0xedd9 size: 0
  Push(Read16(Pop())); // @
  Push(0x0064);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(pp_UNK_0xefdc); // UNK_0xefdc size: 0
  _ex__2(); // !_2
  UNK_0xf018(); // UNK_0xf018
  UNK_0xefe0(); // UNK_0xefe0
  Push(0x03e8);
  Push(i); // I
  Push(0x000a);
  Push(Pop() * Pop()); // *
  _dash_(); // -
  TONE(); // TONE
  Push(0x0028);
  MS(); // MS
  Push(cc__dash_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffdc

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf1c6: WORD 'UNK_0xf1c8' codep=0x224c parp=0xf1c8
// ================================================

void UNK_0xf1c8() // UNK_0xf1c8
{
  Push(0); // 0
  Push(0x0064);
  Push(pp_UNK_0xedd9); // UNK_0xedd9 size: 0
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Pop()*2); // 2*
  RRND(); // RRND
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xedd5); // UNK_0xedd5 size: 0
  _ex__2(); // !_2
}


// ================================================
// 0xf1e2: WORD 'UNK_0xf1e4' codep=0x224c parp=0xf1e4
// ================================================

void UNK_0xf1e4() // UNK_0xf1e4
{
  OVER(); // OVER
  Push(0); // 0
  Push(0x07d0);
  WITHIN(); // WITHIN
  OVER(); // OVER
  Push(0); // 0
  Push(0x06e0);
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf1fc: WORD 'UNK_0xf1fe' codep=0x224c parp=0xf1fe
// ================================================

void UNK_0xf1fe() // UNK_0xf1fe
{
  SWAP(); // SWAP
  Push(pp_UNK_0xedd5); // UNK_0xedd5 size: 0
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(Pop()>>1); // 2/
  SWAP(); // SWAP
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  _gt_R(); // >R
  UNK_0xee1f(); // UNK_0xee1f
  SWAP(); // SWAP
  Push(0x00b4);
  R_gt_(); // R>
  _dash_(); // -
  UNK_0xee1f(); // UNK_0xee1f
}


// ================================================
// 0xf220: WORD 'UNK_0xf222' codep=0x224c parp=0xf222
// ================================================

void UNK_0xf222() // UNK_0xf222
{
  UNK_0xf1c8(); // UNK_0xf1c8
  Push(pp_UNK_0xedd5); // UNK_0xedd5 size: 0
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;

  label2:
  _2DUP(); // 2DUP
  UNK_0xf1fe(); // UNK_0xf1fe
  _2DUP(); // 2DUP
  UNK_0xf12e(); // UNK_0xf12e
  _gt_R(); // >R
  UNK_0xf1e4(); // UNK_0xf1e4
  if (Pop() == 0) Push(1); else Push(0); // NOT
  R_gt_(); // R>
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  goto label2;

  label1:
  _2SWAP(); // 2SWAP
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf24e: WORD 'UNK_0xf250' codep=0x224c parp=0xf250
// ================================================

void UNK_0xf250() // UNK_0xf250
{
  Push(cc__6); // 6
  PICK(); // PICK
  Push(cc__6); // 6
  PICK(); // PICK
  _2SWAP(); // 2SWAP
  D_st_(); // D<
  _gt_R(); // >R
  D_st_(); // D<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  R_gt_(); // R>
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf268: WORD 'UNK_0xf26a' codep=0x224c parp=0xf26a
// ================================================

void UNK_0xf26a() // UNK_0xf26a
{
  Push(pp__10_star_CARG); // 10*CARG size: 4
  _2_at_(); // 2@
  Push(pp__dash_END); // -END size: 2
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(pp__10_star_END); // 10*END size: 4
  _2_at_(); // 2@
  DMIN(); // DMIN
  D_plus_(); // D+
  Push(pp__10_star_CARG); // 10*CARG size: 4
  D_ex_(); // D!
  Push(pp__10_star_END); // 10*END size: 4
  _2_at_(); // 2@
  Push(pp__dash_END); // -END size: 2
  Push(Read16(Pop())); // @
  Push(0); // 0
  D_dash_(); // D-
  Push2Words("NULL");
  DMAX(); // DMAX
  Push(pp__10_star_END); // 10*END size: 4
  D_ex_(); // D!
  Push(pp__10_star_END); // 10*END size: 4
  _2_at_(); // 2@
  Push(pp__dash_END); // -END size: 2
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x01f4);
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(cc__5); // 5
  ROLL(); // ROLL
  Push(0); // 0
  D_plus_(); // D+
  UNK_0xf250(); // UNK_0xf250
  if (Pop() == 0) goto label1;
  Push(cc__3); // 3
  Push(0xc976);
  MODULE(); // MODULE
  return;

  label1:
  Push(pp__10_star_END); // 10*END size: 4
  _2_at_(); // 2@
  Push(pp__dash_END); // -END size: 2
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x0096);
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(cc__5); // 5
  ROLL(); // ROLL
  Push(0); // 0
  D_plus_(); // D+
  UNK_0xf250(); // UNK_0xf250
  if (Pop() == 0) goto label2;
  Push(2); // 2
  Push(0xc976);
  MODULE(); // MODULE
  return;

  label2:
  Push(pp__10_star_END); // 10*END size: 4
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) return;
  Push(pp__ask_AUTO); // ?AUTO size: 2
  ON_2(); // ON_2
  Push(1); // 1
  Push(0xc976);
  MODULE(); // MODULE
  Push(pp__ask_SUP); // ?SUP size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0xc636);
  MODULE(); // MODULE
}


// ================================================
// 0xf312: WORD 'UNK_0xf314' codep=0x224c parp=0xf314
// ================================================

void UNK_0xf314() // UNK_0xf314
{
  Push(pp__dash_END); // -END size: 2
  Push(Read16(Pop())); // @
  Push(0x05dc);
  Push(pp__dash_END); // -END size: 2
  _ex__2(); // !_2
  UNK_0xf26a(); // UNK_0xf26a
  Push(pp__dash_END); // -END size: 2
  _ex__2(); // !_2
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x0096);
  Push(0x6624); // IFIELD(UNK_0xedcb)
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(cc__6); // 6
  IFIND(); // IFIND
  if (Pop() == 0) goto label2;
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(0x0096);
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(0x65ec); // IFIELD(INST-QT)
  _ex__2(); // !_2

  label2:
  CDROP(); // CDROP

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(pp__n_AUX); // #AUX size: 2
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _st_(); // <
  if (Pop() == 0) return;
  UNK_0xedf7(); // UNK_0xedf7
}


// ================================================
// 0xf37e: WORD 'UNK_0xf380' codep=0x224c parp=0xf380
// ================================================

void UNK_0xf380() // UNK_0xf380
{
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
  Push(pp_UNK_0xedd9); // UNK_0xedd9 size: 0
  Push(Read16(Pop())); // @
  _gt_(); // >
  if (Pop() == 0) return;
  UNK_0xf222(); // UNK_0xf222
}


// ================================================
// 0xf396: WORD 'UNK_0xf398' codep=0x224c parp=0xf398
// ================================================

void UNK_0xf398() // UNK_0xf398
{
  Push(pp__10_star_END); // 10*END size: 4
  _2_at_(); // 2@
  Push(0x05db); Push(0x0000);
  D_gt_(); // D>
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  CTINIT(); // CTINIT
  Push(0x6b65); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY

  label1:
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf3bc: WORD 'UNK_0xf3be' codep=0x224c parp=0xf3be
// ================================================

void UNK_0xf3be() // UNK_0xf3be
{
  Push(pp_UNK_0xedd5); // UNK_0xedd5 size: 0
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NAV_dash_TIM); // NAV-TIM size: 10
  D_ex_(); // D!
}


// ================================================
// 0xf3d2: WORD 'UNK_0xf3d4' codep=0x224c parp=0xf3d4
// ================================================

void UNK_0xf3d4() // UNK_0xf3d4
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6637); // IFIELD(UNK_0xedd0)
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
  _gt_FLAG(); // >FLAG
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(0x6b83); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf3f4: WORD 'UNK_0xf3f6' codep=0x224c parp=0xf3f6
// ================================================

void UNK_0xf3f6() // UNK_0xf3f6
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6637); // IFIELD(UNK_0xedd0)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()-1); // 1-
  Push(0x6637); // IFIELD(UNK_0xedd0)
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf408: WORD 'UNK_0xf40a' codep=0x224c parp=0xf40a
// ================================================

void UNK_0xf40a() // UNK_0xf40a
{
  _gt_DISPLA(); // >DISPLA
  CTINIT(); // CTINIT
  _gt_SSCT(); // >SSCT
  Push(pp_UNK_0xedd5); // UNK_0xedd5 size: 0
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(0x6ba6); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY
  return;

  label1:
  Push(0x6bc4); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY
  Push(0x6c00); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf43e: WORD 'UNK_0xf440' codep=0x224c parp=0xf440
// ================================================

void UNK_0xf440() // UNK_0xf440
{
  Push(0x6c2b); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY
  Push(0x03e8);
  MS(); // MS
  Push(0x6c4a); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xf462: WORD 'UNK_0xf464' codep=0x224c parp=0xf464
// ================================================

void UNK_0xf464() // UNK_0xf464
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0x6c69); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY
  Push(0x6c99); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY
  Y_slash_N(); // Y/N
}


// ================================================
// 0xf480: WORD 'UNK_0xf482' codep=0x224c parp=0xf482
// ================================================

void UNK_0xf482() // UNK_0xf482
{
  Push(pp_XORMODE); // XORMODE size: 2
  _099(); // 099
  Push(pp_BEEPTONE); // BEEPTONE size: 2
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(0x01f4);
  Push(pp_BEEPTONE); // BEEPTONE size: 2
  _ex__2(); // !_2
  Push(cc__3); // 3
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x0025);
  Push(0x0085);
  POS_dot_(); // POS.
  _gt_DISPLA(); // >DISPLA
  Push(2); // 2
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  Push(0x0064);
  MS(); // MS
  UNK_0xefe0(); // UNK_0xefe0
  BEEP(); // BEEP
  Push(0x01f4);
  MS(); // MS
  i++;
  } while(i<imax); // (LOOP) 0xffdc

  R_gt_(); // R>
  Push(pp_BEEPTONE); // BEEPTONE size: 2
  _ex__2(); // !_2
}


// ================================================
// 0xf4c8: WORD 'JUMP' codep=0x224c parp=0xf4d1
// ================================================
// entry

void JUMP() // JUMP
{
  CTINIT(); // CTINIT
  UNK_0xf3d4(); // UNK_0xf3d4
  UNK_0xf398(); // UNK_0xf398
  if (Pop() == 0) return;
  UNK_0xf440(); // UNK_0xf440
  Push(0xd3c5);
  MODULE(); // MODULE
  if (Pop() == 0) return;
  UNK_0xef65(); // UNK_0xef65
  UNK_0xf464(); // UNK_0xf464
  if (Pop() == 0) goto label1;
  Push(pp_UNK_0xedd5); // UNK_0xedd5 size: 0
  _099(); // 099
  UNK_0xf18c(); // UNK_0xf18c
  UNK_0xf166(); // UNK_0xf166
  Push(pp_UNK_0xedd9); // UNK_0xedd9 size: 0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xefdc); // UNK_0xefdc size: 0
  _ex__2(); // !_2
  UNK_0xf018(); // UNK_0xf018
  UNK_0xf482(); // UNK_0xf482
  Push(pp_HEADING); // HEADING size: 2
  Push(Read16(Pop())); // @
  Push(pp_EYEXY); // EYEXY size: 4
  _2_at_(); // 2@
  UNK_0xf380(); // UNK_0xf380
  UNK_0xee43(); // UNK_0xee43
  Push(0xc558);
  MODULE(); // MODULE
  Push(0xcaeb);
  MODULE(); // MODULE
  UNK_0xf3be(); // UNK_0xf3be
  Push(0xcb2e);
  MODULE(); // MODULE
  UNK_0xf40a(); // UNK_0xf40a
  UNK_0xf3f6(); // UNK_0xf3f6
  UNK_0xf314(); // UNK_0xf314
  return;

  label1:

  UNK_0x3f09("CANCELLED");
  _dot_TTY(); // .TTY
  Push(0xcb2e);
  MODULE(); // MODULE
}

// 0xf543: db 0x4a 0x55 0x4d 0x50 0x2d 0x56 0x4f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'JUMP-VO______________________ '
  