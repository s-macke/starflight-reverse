// ====== OVERLAY 'ASSCREW-OV' ======
// store offset = 0xea70
// overlay size   = 0x0af0

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xea86  codep:0x224c parp:0xea86 size:0x0008 C-string:'UNK_0xea86'
//      UNK_0xea90  codep:0x2214 parp:0xea90 size:0x0002 C-string:'UNK_0xea90'
//      UNK_0xea94  codep:0x2214 parp:0xea94 size:0x0002 C-string:'UNK_0xea94'
//      UNK_0xea98  codep:0x1d29 parp:0xea98 size:0x0002 C-string:'UNK_0xea98'
//      UNK_0xea9c  codep:0x224c parp:0xea9c size:0x0020 C-string:'UNK_0xea9c'
//      UNK_0xeabe  codep:0x1d29 parp:0xeabe size:0x0004 C-string:'UNK_0xeabe'
//      UNK_0xeac4  codep:0x224c parp:0xeac4 size:0x001a C-string:'UNK_0xeac4'
//      UNK_0xeae0  codep:0x224c parp:0xeae0 size:0x0027 C-string:'UNK_0xeae0'
//      UNK_0xeb09  codep:0x224c parp:0xeb09 size:0x0018 C-string:'UNK_0xeb09'
//      UNK_0xeb23  codep:0x73ea parp:0xeb23 size:0x0006 C-string:'UNK_0xeb23'
//      UNK_0xeb2b  codep:0x73ea parp:0xeb2b size:0x0006 C-string:'UNK_0xeb2b'
//      UNK_0xeb33  codep:0x73ea parp:0xeb33 size:0x0006 C-string:'UNK_0xeb33'
//      UNK_0xeb3b  codep:0x744d parp:0xeb3b size:0x0003 C-string:'UNK_0xeb3b'
//      UNK_0xeb40  codep:0x744d parp:0xeb40 size:0x0003 C-string:'UNK_0xeb40'
//      UNK_0xeb45  codep:0x744d parp:0xeb45 size:0x0003 C-string:'UNK_0xeb45'
//      UNK_0xeb4a  codep:0x744d parp:0xeb4a size:0x0003 C-string:'UNK_0xeb4a'
//      UNK_0xeb4f  codep:0x744d parp:0xeb4f size:0x0003 C-string:'UNK_0xeb4f'
//      UNK_0xeb54  codep:0x744d parp:0xeb54 size:0x0003 C-string:'UNK_0xeb54'
//      UNK_0xeb59  codep:0x744d parp:0xeb59 size:0x0003 C-string:'UNK_0xeb59'
//      UNK_0xeb5e  codep:0x744d parp:0xeb5e size:0x0003 C-string:'UNK_0xeb5e'
//      UNK_0xeb63  codep:0x744d parp:0xeb63 size:0x0003 C-string:'UNK_0xeb63'
//      UNK_0xeb68  codep:0x744d parp:0xeb68 size:0x0003 C-string:'UNK_0xeb68'
//      UNK_0xeb6d  codep:0x224c parp:0xeb6d size:0x0012 C-string:'UNK_0xeb6d'
//      UNK_0xeb81  codep:0x224c parp:0xeb81 size:0x00f7 C-string:'UNK_0xeb81'
//      UNK_0xec7a  codep:0x1d29 parp:0xec7a size:0x0002 C-string:'UNK_0xec7a'
//      UNK_0xec7e  codep:0x224c parp:0xec7e size:0x0006 C-string:'UNK_0xec7e'
//      UNK_0xec86  codep:0x224c parp:0xec86 size:0x0112 C-string:'UNK_0xec86'
//      UNK_0xed9a  codep:0x224c parp:0xed9a size:0x0028 C-string:'UNK_0xed9a'
//      UNK_0xedc4  codep:0x224c parp:0xedc4 size:0x0032 C-string:'UNK_0xedc4'
//      UNK_0xedf8  codep:0x224c parp:0xedf8 size:0x014d C-string:'UNK_0xedf8'
//      UNK_0xef47  codep:0x224c parp:0xef47 size:0x00d0 C-string:'UNK_0xef47'
//      UNK_0xf019  codep:0x224c parp:0xf019 size:0x010d C-string:'UNK_0xf019'
//      UNK_0xf128  codep:0x224c parp:0xf128 size:0x0068 C-string:'UNK_0xf128'
//      UNK_0xf192  codep:0x224c parp:0xf192 size:0x003a C-string:'UNK_0xf192'
//      UNK_0xf1ce  codep:0x224c parp:0xf1ce size:0x001c C-string:'UNK_0xf1ce'
//      UNK_0xf1ec  codep:0x224c parp:0xf1ec size:0x004a C-string:'UNK_0xf1ec'
//      UNK_0xf238  codep:0x224c parp:0xf238 size:0x0069 C-string:'UNK_0xf238'
//      UNK_0xf2a3  codep:0x224c parp:0xf2a3 size:0x000c C-string:'UNK_0xf2a3'
//      UNK_0xf2b1  codep:0x224c parp:0xf2b1 size:0x007b C-string:'UNK_0xf2b1'
//      UNK_0xf32e  codep:0x224c parp:0xf32e size:0x0065 C-string:'UNK_0xf32e'
//      UNK_0xf395  codep:0x224c parp:0xf395 size:0x0040 C-string:'UNK_0xf395'
//      UNK_0xf3d7  codep:0x224c parp:0xf3d7 size:0x0030 C-string:'UNK_0xf3d7'
//      UNK_0xf409  codep:0x224c parp:0xf409 size:0x0046 C-string:'UNK_0xf409'
//     (U-ASSCREW)  codep:0x224c parp:0xf45f size:0x0000 C-string:'_ro_U_dash_ASSCREW_rc_'

// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xea98 = 0xea98; // UNK_0xea98 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xeabe = 0xeabe; // UNK_0xeabe size: 4
// {0xd5, 0x57, 0x00, 0xf5}

const unsigned short int pp_UNK_0xec7a = 0xec7a; // UNK_0xec7a size: 2
// {0x3a, 0x20}


const unsigned short int cc_UNK_0xea90 = 0x0003; // UNK_0xea90
const unsigned short int cc_UNK_0xea94 = 0x0004; // UNK_0xea94


// 0xea82: db 0xab 0x00 '  '

// ================================================
// 0xea84: WORD 'UNK_0xea86' codep=0x224c parp=0xea86
// ================================================

void UNK_0xea86() // UNK_0xea86
{
  Push(0xbdba);
  MODULE(); // MODULE
}


// ================================================
// 0xea8e: WORD 'UNK_0xea90' codep=0x2214 parp=0xea90
// ================================================
// 0xea90: db 0x03 0x00 '  '

// ================================================
// 0xea92: WORD 'UNK_0xea94' codep=0x2214 parp=0xea94
// ================================================
// 0xea94: db 0x04 0x00 '  '

// ================================================
// 0xea96: WORD 'UNK_0xea98' codep=0x1d29 parp=0xea98
// ================================================
// 0xea98: db 0x3a 0x20 ': '

// ================================================
// 0xea9a: WORD 'UNK_0xea9c' codep=0x224c parp=0xea9c
// ================================================

void UNK_0xea9c() // UNK_0xea9c
{
  Push(0x1194); Push(0x0000);
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_gt_(); // D>
  _i_KEY(); // 'KEY
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xeabc: WORD 'UNK_0xeabe' codep=0x1d29 parp=0xeabe
// ================================================
// 0xeabe: db 0xd5 0x57 0x00 0xf5 ' W  '

// ================================================
// 0xeac2: WORD 'UNK_0xeac4' codep=0x224c parp=0xeac4
// ================================================

void UNK_0xeac4() // UNK_0xeac4
{
  _at_CRS(); // @CRS
  Push(cc__5); // 5
  Push(pp_WBLT); // WBLT size: 2
  _ex__3(); // !_3
  Push(pp_UNK_0xeabe); // UNK_0xeabe size: 0
  Push(pp_ABLT); // ABLT size: 2
  _ex__3(); // !_3
  BLT(); // BLT
  Push(cc__6); // 6
  Push(pp_XBLT); // XBLT size: 2
  _plus__ex_(); // +!
  _ex_CRS(); // !CRS
}


// ================================================
// 0xeade: WORD 'UNK_0xeae0' codep=0x224c parp=0xeae0
// ================================================

void UNK_0xeae0() // UNK_0xeae0
{
  Push(pp_UNK_0xea98); // UNK_0xea98 size: 0
  Push(Read16(Pop())); // @
  Push(1); // 1
  _gt_(); // >
  if (Pop() == 0) return;
  PRINT("PAGE THROUGH FILES: ^\", 22); // (.")
}


// ================================================
// 0xeb07: WORD 'UNK_0xeb09' codep=0x224c parp=0xeb09
// ================================================

void UNK_0xeb09() // UNK_0xeb09
{
  PRINT("A DEAD CREWMEMBER", 17); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xeb21: WORD 'UNK_0xeb23' codep=0x73ea parp=0xeb23
// ================================================
// 0xeb23: db 0x10 0x00 0x08 0x14 0x89 0x64 '     d'

// ================================================
// 0xeb29: WORD 'UNK_0xeb2b' codep=0x73ea parp=0xeb2b
// ================================================
// 0xeb2b: db 0x10 0x12 0x01 0x14 0x89 0x64 '     d'

// ================================================
// 0xeb31: WORD 'UNK_0xeb33' codep=0x73ea parp=0xeb33
// ================================================
// 0xeb33: db 0x10 0x13 0x01 0x14 0x89 0x64 '     d'

// ================================================
// 0xeb39: WORD 'UNK_0xeb3b' codep=0x744d parp=0xeb3b
// ================================================
// 0xeb3b: db 0x10 0x0b 0x0f '   '

// ================================================
// 0xeb3e: WORD 'UNK_0xeb40' codep=0x744d parp=0xeb40
// ================================================
// 0xeb40: db 0x10 0x1a 0x01 '   '

// ================================================
// 0xeb43: WORD 'UNK_0xeb45' codep=0x744d parp=0xeb45
// ================================================
// 0xeb45: db 0x10 0x1b 0x01 '   '

// ================================================
// 0xeb48: WORD 'UNK_0xeb4a' codep=0x744d parp=0xeb4a
// ================================================
// 0xeb4a: db 0x10 0x1c 0x01 '   '

// ================================================
// 0xeb4d: WORD 'UNK_0xeb4f' codep=0x744d parp=0xeb4f
// ================================================
// 0xeb4f: db 0x10 0x1d 0x01 '   '

// ================================================
// 0xeb52: WORD 'UNK_0xeb54' codep=0x744d parp=0xeb54
// ================================================
// 0xeb54: db 0x10 0x1e 0x01 '   '

// ================================================
// 0xeb57: WORD 'UNK_0xeb59' codep=0x744d parp=0xeb59
// ================================================
// 0xeb59: db 0x10 0x1f 0x01 '   '

// ================================================
// 0xeb5c: WORD 'UNK_0xeb5e' codep=0x744d parp=0xeb5e
// ================================================
// 0xeb5e: db 0x10 0x20 0x02 '   '

// ================================================
// 0xeb61: WORD 'UNK_0xeb63' codep=0x744d parp=0xeb63
// ================================================
// 0xeb63: db 0x10 0x22 0x01 ' " '

// ================================================
// 0xeb66: WORD 'UNK_0xeb68' codep=0x744d parp=0xeb68
// ================================================
// 0xeb68: db 0x11 0x11 0x12 '   '

// ================================================
// 0xeb6b: WORD 'UNK_0xeb6d' codep=0x224c parp=0xeb6d
// ================================================

void UNK_0xeb6d() // UNK_0xeb6d
{
  Push(pp__ask_EGA); // ?EGA size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  SetColor("BLUE");
  return;

  label1:
  SetColor("DK-BLUE");
}


// ================================================
// 0xeb7f: WORD 'UNK_0xeb81' codep=0x224c parp=0xeb81
// ================================================

void UNK_0xeb81() // UNK_0xeb81
{
  Push(0x0049);
  Push(1); // 1
  Push(cc__8); // 8
  Push(0x0043);
  SetColor("GREY2");
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0x003c);
  Push(0x0044);
  Push(cc__8); // 8
  Push(0x009d);
  SetColor("GREY2");
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  SetColor("WHITE");
  SetColor("WHITE");
  UNK_0xeb6d(); // UNK_0xeb6d
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE size: 2
  OFF(); // OFF
  Push(2); // 2
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(cc__8); // 8
  OVER(); // OVER
  Push(0x0049);
  LLINE(); // LLINE
  Push(0x009d);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(cc__8); // 8
  OVER(); // OVER
  Push(0x003c);
  LLINE(); // LLINE
  Push(2); // 2
  Push(cc__6); // 6
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x009c);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x0044);
  Push(0x003d);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x009c);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(2); // 2
  Push(0x004a);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x0041);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x0042);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x003f);
  OVER(); // OVER
  Push(0x0049);
  LLINE(); // LLINE
  i++;
  } while(i<imax); // (LOOP) 0xff96

  _gt_1FONT(); // >1FONT
  Push(0x000a);
  Push(0x0047);
  POS_dot_(); // POS.
  PRINT("FILE", 4); // (.")
  Push(2); // 2
  Push(pp_XBLT); // XBLT size: 2
  _plus__ex_(); // +!
  UNK_0xeac4(); // UNK_0xeac4
  Push(1); // 1
  Push(cc__8); // 8
  Push(cc_UNK_0xea90); // UNK_0xea90
  Push(1); // 1
  Push(0x004a);
  Push(cc_UNK_0xea94); // UNK_0xea94
  Push(0x0041);
  Push(0x004a);
  Push(cc_UNK_0xea90); // UNK_0xea90
  Push(0x009c);
  Push(cc__8); // 8
  Push(cc_UNK_0xea94); // UNK_0xea94
  Push(0x009c);
  Push(0x003d);
  Push(cc_UNK_0xea90); // UNK_0xea90
  Push(0x0043);
  Push(0x003f);
  Push(cc_UNK_0xea90); // UNK_0xea90
  Push(cc__6); // 6
  UNK_0xea86(); // UNK_0xea86
}


// ================================================
// 0xec78: WORD 'UNK_0xec7a' codep=0x1d29 parp=0xec7a
// ================================================
// 0xec7a: db 0x3a 0x20 ': '

// ================================================
// 0xec7c: WORD 'UNK_0xec7e' codep=0x224c parp=0xec7e
// ================================================

void UNK_0xec7e() // UNK_0xec7e
{
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
}


// ================================================
// 0xec84: WORD 'UNK_0xec86' codep=0x224c parp=0xec86
// ================================================

void UNK_0xec86() // UNK_0xec86
{
  _gt_R(); // >R
  Push(h); // I
  Push(pp_UNK_0xec7a); // UNK_0xec7a size: 0
  _ex__3(); // !_3
  _gt_1FONT(); // >1FONT
  Push(pp_XORMODE); // XORMODE size: 2
  OFF(); // OFF
  Push(0x000a);
  Push(0x0029);
  Push(h); // I
  UNK_0xec7e(); // UNK_0xec7e
  PRINT("SKILLS:", 7); // (.")
  Push(0x000f);
  Push(0x0022);
  Push(h); // I
  UNK_0xec7e(); // UNK_0xec7e
  PRINT("SCIENCE       :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT size: 2
  _ex__3(); // !_3
  PRINT("RACE:", 5); // (.")
  Push(0x000f);
  Push(0x001b);
  Push(h); // I
  UNK_0xec7e(); // UNK_0xec7e
  PRINT("NAVIGATION    :", 15); // (.")
  Push(0x000f);
  Push(0x0014);
  Push(h); // I
  UNK_0xec7e(); // UNK_0xec7e
  PRINT("ENGINEERING   :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT size: 2
  _ex__3(); // !_3
  PRINT("DURABILITY:", 11); // (.")
  Push(0x000f);
  Push(0x000d);
  Push(h); // I
  UNK_0xec7e(); // UNK_0xec7e
  PRINT("COMMUNICATIONS:", 15); // (.")
  Push(0x000f);
  Push(cc__6); // 6
  Push(h); // I
  UNK_0xec7e(); // UNK_0xec7e
  PRINT("MEDICINE      :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT size: 2
  _ex__3(); // !_3
  PRINT("LRN RATE  :", 11); // (.")
  Push(0x0057);
  Push(0x0030);
  R_gt_(); // R>
  UNK_0xec7e(); // UNK_0xec7e
  PRINT("VITALITY:   %", 13); // (.")
}


// ================================================
// 0xed98: WORD 'UNK_0xed9a' codep=0x224c parp=0xed9a
// ================================================

void UNK_0xed9a() // UNK_0xed9a
{
  CI(); // CI
  _gt_C_plus_S(); // >C+S
  Push(0); // 0

  label2:
  Push(0x6411); // IFIELD(UNK_0xeb63)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0018);
  _st_(); // <
  if (Pop() == 0) goto label1;
  INEXT(); // INEXT
  Push(0x640f); // IFIELD(UNK_0xeb5e)
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
}


// ================================================
// 0xedc2: WORD 'UNK_0xedc4' codep=0x224c parp=0xedc4
// ================================================

void UNK_0xedc4() // UNK_0xedc4
{
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  Push(0x6411); // IFIELD(UNK_0xeb63)
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  IPREV(); // IPREV
  return;

  label1:
  _0_gt_(); // 0>
  UNK_0xed9a(); // UNK_0xed9a
  Push(0x6411); // IFIELD(UNK_0xeb63)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0018);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  INEXT(); // INEXT
}


// ================================================
// 0xedf6: WORD 'UNK_0xedf8' codep=0x224c parp=0xedf8
// ================================================

void UNK_0xedf8() // UNK_0xedf8
{
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  Push(0x001c);
  Push(0x00c3);
  SetColor("BLUE");
  _dot_1LOGO(); // .1LOGO
  CTINIT(); // CTINIT
  Push(0x000a);
  Push(0x00a7);
  POS_dot_(); // POS.
  PRINT("CAPTAIN", 7); // (.")
  Push(0x000a);
  Push(0x0093);
  POS_dot_(); // POS.
  PRINT("NAVIGATOR", 9); // (.")
  Push(0x000a);
  Push(0x009d);
  POS_dot_(); // POS.
  PRINT("SCIENCE OFFICER", 15); // (.")
  Push(0x000a);
  Push(0x0089);
  POS_dot_(); // POS.
  PRINT("ENGINEER", 8); // (.")
  Push(0x000a);
  Push(0x007f);
  POS_dot_(); // POS.
  PRINT("COMMUNICATIONS", 14); // (.")
  Push(0x000a);
  Push(0x0075);
  POS_dot_(); // POS.
  PRINT("DOCTOR", 6); // (.")
  SetColor("BLUE");
  _ex_COLOR(); // !COLOR
  _gt_3FONT(); // >3FONT
  Push(0x0030);
  Push(0x00c2);
  POS_dot_(); // POS.
  PRINT("CREW", 4); // (.")
  Push(0x000a);
  Push(pp_XBLT); // XBLT size: 2
  _plus__ex_(); // +!
  PRINT("ASSIGNMENT", 10); // (.")
  Push(2); // 2
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x009c);
  Push(0x00c6);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(cc__3); // 3
  OVER(); // OVER
  LLINE(); // LLINE
  Push(i); // I
  Push(Pop()+1); // 1+
  Push(0x00b8);
  OVER(); // OVER
  Push(0x00c5);
  LLINE(); // LLINE
  Push(0x009d);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x00b8);
  OVER(); // OVER
  Push(0x00c5);
  LLINE(); // LLINE
  Push(0x009c);
  Push(0x00b6);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(cc__3); // 3
  OVER(); // OVER
  LLINE(); // LLINE
  i++;
  } while(i<imax); // (LOOP) 0xffb6

  Push(2); // 2
  Push(0x00c6);
  Push(cc_UNK_0xea94); // UNK_0xea94
  Push(0x009c);
  Push(0x00c6);
  Push(cc_UNK_0xea90); // UNK_0xea90
  Push(2); // 2
  Push(0x00b8);
  Push(cc_UNK_0xea90); // UNK_0xea90
  Push(0x009c);
  Push(0x00b8);
  Push(cc_UNK_0xea94); // UNK_0xea94
  Push(cc__4); // 4
  UNK_0xea86(); // UNK_0xea86
  UNK_0xeb81(); // UNK_0xeb81
  Push(cc__9); // 9
  UNK_0xec86(); // UNK_0xec86
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xef45: WORD 'UNK_0xef47' codep=0x224c parp=0xef47
// ================================================

void UNK_0xef47() // UNK_0xef47
{
  Push(pp_UNK_0xec7a); // UNK_0xec7a size: 0
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(0x000a);
  Push(0x0030);
  Push(h); // I
  UNK_0xec7e(); // UNK_0xec7e
  CTINIT(); // CTINIT
  SetColor("BLACK");
  SetColor("BLACK");
  SetColor("WHITE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(0x63fa); // IFIELD(UNK_0xeb3b)
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  _do__dot_(); // $.
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  Push(0x007a);
  Push(pp_XBLT); // XBLT size: 2
  _ex__3(); // !_3
  Push(0x640e); // IFIELD(UNK_0xeb59)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x004a);
  Push(0x0022);
  Push(h); // I
  UNK_0xec7e(); // UNK_0xec7e
  Push(0x6409); // IFIELD(UNK_0xeb40)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x0077);
  Push(pp_XBLT); // XBLT size: 2
  _ex__3(); // !_3
  LoadData("UNK_0xeb23"); // from 'CREWMEMBER  '
  _do__dot_(); // $.
  Push(0x004a);
  Push(0x001b);
  Push(h); // I
  UNK_0xec7e(); // UNK_0xec7e
  Push(0x640a); // IFIELD(UNK_0xeb45)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x004a);
  Push(0x0014);
  Push(h); // I
  UNK_0xec7e(); // UNK_0xec7e
  Push(0x640b); // IFIELD(UNK_0xeb4a)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT size: 2
  _ex__3(); // !_3
  LoadData("UNK_0xeb33"); // from 'CREWMEMBER  '
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  _dot_R(); // .R
  Push(0x004a);
  Push(0x000d);
  Push(h); // I
  UNK_0xec7e(); // UNK_0xec7e
  Push(0x640c); // IFIELD(UNK_0xeb4f)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x004a);
  Push(cc__6); // 6
  R_gt_(); // R>
  UNK_0xec7e(); // UNK_0xec7e
  Push(0x640d); // IFIELD(UNK_0xeb54)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT size: 2
  _ex__3(); // !_3
  LoadData("UNK_0xeb2b"); // from 'CREWMEMBER  '
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  _dot_R(); // .R
}


// ================================================
// 0xf017: WORD 'UNK_0xf019' codep=0x224c parp=0xf019
// ================================================

void UNK_0xf019() // UNK_0xf019
{
  SAVE_dash_SCR(); // SAVE-SCR
  _gt_HIDDEN(); // >HIDDEN
  _at_CRS(); // @CRS
  _gt_1FONT(); // >1FONT
  Push(pp_UNK_0xec7a); // UNK_0xec7a size: 0
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(0x000e);
  SetColor("GREY2");
  Push(0x0030);
  Push(h); // I
  Push(Pop() + Pop()); // +
  Push(0x000a);
  POS_dot_PXT(); // POS.PXT
  Push(cc__3); // 3
  SetColor("GREY2");
  Push(0x0030);
  Push(h); // I
  Push(Pop() + Pop()); // +
  Push(0x007a);
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  SetColor("BLACK");
  SetColor("BLACK");
  SetColor("WHITE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(cc__5); // 5
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__3); // 3
  SetColor("GREY2");
  Push(i); // I
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(h); // J
  Push(Pop() + Pop()); // +
  Push(0x004a);
  POS_dot_PXT(); // POS.PXT
  Push(2); // 2
  Push(i); // I
  Push(cc__4); // 4
  _eq_(); // =
  Push(cc__5); // 5
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  SetColor("GREY2");
  Push(i); // I
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(h); // J
  Push(Pop() + Pop()); // +
  Push(0x008d);
  Push(i); // I
  Push(cc__4); // 4
  _eq_(); // =
  Push(0xffea);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  POS_dot_PXT(); // POS.PXT
  i++;
  } while(i<imax); // (LOOP) 0xffb4

  Push(2); // 2
  SetColor("GREY2");
  Push(0x003d);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x0028);
  POS_dot_PXT(); // POS.PXT
  Push(0x0028);
  Push(0x003d);
  R_gt_(); // R>
  UNK_0xec7e(); // UNK_0xec7e
  Push(0x6411); // IFIELD(UNK_0xeb63)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  Push(2); // 2
  _dot_R(); // .R
  Push(0x640f); // IFIELD(UNK_0xeb5e)
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xef47(); // UNK_0xef47

  label1:
  Push(0x640f); // IFIELD(UNK_0xeb5e)
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  Push(Pop() & Pop()); // AND
  Push(pp_XORMODE); // XORMODE size: 2
  OFF(); // OFF
  if (Pop() == 0) goto label2;
  SetColor("RED");
  goto label3;

  label2:
  SetColor("GREY2");

  label3:
  _ex_COLOR(); // !COLOR
  Push(pp_UNK_0xec7a); // UNK_0xec7a size: 0
  Push(Read16(Pop())); // @
  Push(0x0033);
  Push(Pop() + Pop()); // +
  Push(pp_YBLT); // YBLT size: 2
  _ex__3(); // !_3
  Push(0x0041);
  Push(pp_XBLT); // XBLT size: 2
  _ex__3(); // !_3
  _gt_3FONT(); // >3FONT
  PRINT("DEAD", 4); // (.")
  _ex_CRS(); // !CRS
  _gt_1FONT(); // >1FONT
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xf126: WORD 'UNK_0xf128' codep=0x224c parp=0xf128
// ================================================

void UNK_0xf128() // UNK_0xf128
{
  _gt_R(); // >R
  _at_CRS(); // @CRS
  R_gt_(); // R>
  Push(0x00a7);
  SWAP(); // SWAP
  Push(0x000a);
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(0x005f);
  _2DUP(); // 2DUP
  Push(0x000e);
  Push(0); // 0
  _2SWAP(); // 2SWAP
  POS_dot_PXT(); // POS.PXT
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  SWAP(); // SWAP
  POS_dot_(); // POS.
  Push(0x63fa); // IFIELD(UNK_0xeb3b)
  _do__dot_(); // $.
  _ex_CRS(); // !CRS
}

// 0xf15c: db 0x4c 0x22 0x66 0xeb 0x5d 0x17 0x12 0x00 0x7f 0x0e 0x72 0x0f 0xf2 0x0e 0xb8 0x15 0x50 0x0e 0xf2 0x79 0x75 0x75 0x3e 0x13 0xfa 0x15 0x10 0x00 0x5c 0xeb 0x92 0x0c 0x5d 0x17 0xf7 0x00 0xf5 0x12 0x5c 0xeb 0x6a 0x6d 0xc9 0x79 0x73 0x3b 0x91 0x15 0xe0 0xff 0x90 0x16 'L"f ]    r     P  yuu>     \   ]     \ jm ys;      '

// ================================================
// 0xf190: WORD 'UNK_0xf192' codep=0x224c parp=0xf192
// ================================================

void UNK_0xf192() // UNK_0xf192
{
  CTINIT(); // CTINIT
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x6400); // IFIELD(UNK_0xeb68)
  Push(i); // I
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  CI(); // CI
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(0x640f); // IFIELD(UNK_0xeb5e)
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(i); // I
  UNK_0xf128(); // UNK_0xf128

  label1:
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xffd8

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1cc: WORD 'UNK_0xf1ce' codep=0x224c parp=0xf1ce
// ================================================

void UNK_0xf1ce() // UNK_0xf1ce
{
  _gt_R(); // >R
  CI(); // CI
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x6400); // IFIELD(UNK_0xeb68)
  Push(h); // I
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
  R_gt_(); // R>
  UNK_0xf128(); // UNK_0xf128
}


// ================================================
// 0xf1ea: WORD 'UNK_0xf1ec' codep=0x224c parp=0xf1ec
// ================================================

void UNK_0xf1ec() // UNK_0xf1ec
{
  _gt_R(); // >R
  _at_CRS(); // @CRS
  CTINIT(); // CTINIT
  R_gt_(); // R>
  _ex_COLOR(); // !COLOR
  Push(0x0022);
  Push(0x005b);
  POS_dot_(); // POS.
  UNK_0xeae0(); // UNK_0xeae0
  Push(0x000a);
  Push(0x0055);
  POS_dot_(); // POS.
  PRINT("PRESS SPACEBAR TO ASSIGN CREWMEMBER", 35); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf236: WORD 'UNK_0xf238' codep=0x224c parp=0xf238
// ================================================

void UNK_0xf238() // UNK_0xf238
{
  CURSORSPACE(); // CURSORSPACE
  Push(pp_ABLT); // ABLT size: 2
  _ex__3(); // !_3
  Push(pp_XORMODE); // XORMODE size: 2
  ON_3(); // ON_3
  BLT(); // BLT
  Push(Read16(regsp)); // DUP
  Push(cc__5); // 5
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+
  Push(0x0012);
  Push(pp_WBLT); // WBLT size: 2
  _ex__3(); // !_3
  SetColor("BLACK");
  UNK_0xf1ec(); // UNK_0xf1ec
  _at_CRS(); // @CRS
  Push(0x0025);
  Push(0x0055);
  POS_dot_(); // POS.
  CTINIT(); // CTINIT
  PRINT("PRESS SPACEBAR TO EXIT", 22); // (.")
  _ex_CRS(); // !CRS
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR

  label1:
  Push(Pop()+1); // 1+
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x00a9);
  SWAP(); // SWAP
  _dash_(); // -
  Push(pp_YBLT); // YBLT size: 2
  _ex__3(); // !_3
  BLT(); // BLT
}


// ================================================
// 0xf2a1: WORD 'UNK_0xf2a3' codep=0x224c parp=0xf2a3
// ================================================

void UNK_0xf2a3() // UNK_0xf2a3
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  UNK_0xedc4(); // UNK_0xedc4
  UNK_0xf019(); // UNK_0xf019
}


// ================================================
// 0xf2af: WORD 'UNK_0xf2b1' codep=0x224c parp=0xf2b1
// ================================================

void UNK_0xf2b1() // UNK_0xf2b1
{
  Push(0); // 0
  UNK_0xf1ec(); // UNK_0xf1ec
  _at_CRS(); // @CRS
  CTINIT(); // CTINIT
  Push(0x640f); // IFIELD(UNK_0xeb5e)
  Push(Read16(Pop())); // @
  Push(2); // 2
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(0x005b);
  Push(0x000a);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  PRINT("YOU CAN'T ASSIGN ", 17); // (.")
  _at_CRS(); // @CRS
  UNK_0xeb09(); // UNK_0xeb09
  Push(0x0022);
  goto label2;

  label1:
  Push(0x005b);
  Push(0x002c);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  PRINT("THIS FILE IS EMPTY", 18); // (.")
  Push(0x0012);

  label2:
  UNK_0xea9c(); // UNK_0xea9c
  SetColor("BLACK");
  _2SWAP(); // 2SWAP
  POS_dot_PXT(); // POS.PXT
  _ex_CRS(); // !CRS
  SetColor("WHITE");
  UNK_0xf1ec(); // UNK_0xf1ec
  Push(0); // 0
}


// ================================================
// 0xf32c: WORD 'UNK_0xf32e' codep=0x224c parp=0xf32e
// ================================================

void UNK_0xf32e() // UNK_0xf32e
{
  CTINIT(); // CTINIT
  Push(0x0029);
  Push(0x006e);
  POS_dot_(); // POS.
  PRINT("REPORT TO PERSONNEL:", 20); // (.")
  Push(0x002a);
  Push(0x0064);
  POS_dot_(); // POS.
  PRINT("THERE ARE NO LIVING", 19); // (.")
  Push(0x002a);
  Push(0x005a);
  POS_dot_(); // POS.
  PRINT("CREWMEMBERS ON FILE", 19); // (.")
}


// ================================================
// 0xf393: WORD 'UNK_0xf395' codep=0x224c parp=0xf395
// ================================================

void UNK_0xf395() // UNK_0xf395
{
  _gt_R(); // >R

  label5:
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  UNK_0xf2a3(); // UNK_0xf2a3
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label1;
  Push(0x640f); // IFIELD(UNK_0xeb5e)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  Push(Pop() & Pop()); // AND
  Push(1); // 1
  Push(Pop() ^ Pop()); // XOR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  Push(h); // I
  UNK_0xf238(); // UNK_0xf238
  Push(h); // I
  UNK_0xf1ce(); // UNK_0xf1ce
  Push(1); // 1
  goto label3;

  label2:
  UNK_0xf2b1(); // UNK_0xf2b1

  label3:
  goto label4;

  label1:
  Push(0); // 0

  label4:
  if (Pop() == 0) goto label5;
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xf3d5: WORD 'UNK_0xf3d7' codep=0x224c parp=0xf3d7
// ================================================

void UNK_0xf3d7() // UNK_0xf3d7
{
  Push(pp_UNK_0xea98); // UNK_0xea98 size: 0
  OFF(); // OFF
  IFIRST(); // IFIRST
  Push(0); // 0
  Push(0x0019);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x640f); // IFIELD(UNK_0xeb5e)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  Push(Pop() & Pop()); // AND
  Push(cc__3); // 3
  Push(Pop() ^ Pop()); // XOR
  Push(2); // 2
  _eq_(); // =
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xea98); // UNK_0xea98 size: 0
  _plus__ex_(); // +!
  Push(Pop() | Pop()); // OR
  INEXT(); // INEXT
  i++;
  } while(i<imax); // (LOOP) 0xffe4

}


// ================================================
// 0xf407: WORD 'UNK_0xf409' codep=0x224c parp=0xf409
// ================================================

void UNK_0xf409() // UNK_0xf409
{
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN

  label1:
  Push(0x640f); // IFIELD(UNK_0xeb5e)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x00f7);
  Push(Pop() & Pop()); // AND
  Push(0x640f); // IFIELD(UNK_0xeb5e)
  C_ex_(); // C!
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label1;
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0x0012);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x6400); // IFIELD(UNK_0xeb68)
  Push(i); // I
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  Push(0x640f); // IFIELD(UNK_0xeb5e)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__8); // 8
  Push(Pop() | Pop()); // OR
  Push(0x640f); // IFIELD(UNK_0xeb5e)
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  Push(cc__3); // 3
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffe6

}


// ================================================
// 0xf44f: WORD '(U-ASSCREW)' codep=0x224c parp=0xf45f
// ================================================
// entry

void _ro_U_dash_ASSCREW_rc_() // (U-ASSCREW)
{
  UNK_0xedf8(); // UNK_0xedf8
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xf3d7(); // UNK_0xf3d7
  if (Pop() == 0) goto label1;
  UNK_0xf192(); // UNK_0xf192
  Push(pp_NCRS); // NCRS size: 2
  OFF(); // OFF
  Push(pp_OCRS); // OCRS size: 2
  OFF(); // OFF
  CURSORSPACE(); // CURSORSPACE
  Push(pp_ABLT); // ABLT size: 2
  _ex__3(); // !_3
  Push(cc__9); // 9
  Push(pp_LBLT); // LBLT size: 2
  _ex__3(); // !_3
  Push(0x0090);
  Push(pp_WBLT); // WBLT size: 2
  _ex__3(); // !_3
  Push(cc__8); // 8
  Push(0x00a9);
  POS_dot_(); // POS.
  SetColor("WHITE");
  SetColor("GREY2");
  SetColor("DK-GREEN");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE size: 2
  ON_3(); // ON_3
  BLT(); // BLT
  SetColor("WHITE");
  UNK_0xf1ec(); // UNK_0xf1ec
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x6400); // IFIELD(UNK_0xeb68)
  Push(i); // I
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  Push(0x640f); // IFIELD(UNK_0xeb5e)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  ICLOSE(); // ICLOSE
  Push(i); // I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label3;
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  CI(); // CI
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
  goto label2;

  label3:
  Push(0x6400); // IFIELD(UNK_0xeb68)
  Push(i); // I
  Push(Pop()-1); // 1-
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S

  label2:
  UNK_0xf019(); // UNK_0xf019
  Push(i); // I
  UNK_0xf395(); // UNK_0xf395
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xffb2

  UNK_0xf409(); // UNK_0xf409
  ICLOSE(); // ICLOSE
  KEY_2(); // KEY_2
  Pop(); // DROP
  goto label4;

  label1:
  UNK_0xf32e(); // UNK_0xf32e
  UNK_0xea9c(); // UNK_0xea9c

  label4:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}

// 0xf517: db 0x41 0x43 0x52 0x45 0x57 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x41 0x53 0x53 0x49 0x47 0x4e 0x2d 0x43 0x52 0x45 0x57 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x29 0x2d 0x2d 0x31 0x37 0x31 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'ACREW-VOC_______________________for ASSIGN-CREW-------------- )--171----- '
  