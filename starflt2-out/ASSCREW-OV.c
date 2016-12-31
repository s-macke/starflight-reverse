// ====== OVERLAY 'ASSCREW-OV' ======
// store offset = 0xeab0
// overlay size   = 0x0ab0

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xeac6  codep:0x224c parp:0xeac6 size:0x0008 C-string:'UNK_0xeac6'
//      UNK_0xead0  codep:0x2214 parp:0xead0 size:0x0002 C-string:'UNK_0xead0'
//      UNK_0xead4  codep:0x2214 parp:0xead4 size:0x0002 C-string:'UNK_0xead4'
//      UNK_0xead8  codep:0x1d29 parp:0xead8 size:0x0002 C-string:'UNK_0xead8'
//      UNK_0xeadc  codep:0x224c parp:0xeadc size:0x0042 C-string:'UNK_0xeadc'
//      UNK_0xeb20  codep:0x224c parp:0xeb20 size:0x0027 C-string:'UNK_0xeb20'
//      UNK_0xeb49  codep:0x224c parp:0xeb49 size:0x0018 C-string:'UNK_0xeb49'
//      UNK_0xeb63  codep:0x7394 parp:0xeb63 size:0x0006 C-string:'UNK_0xeb63'
//      UNK_0xeb6b  codep:0x7394 parp:0xeb6b size:0x0006 C-string:'UNK_0xeb6b'
//      UNK_0xeb73  codep:0x7394 parp:0xeb73 size:0x0006 C-string:'UNK_0xeb73'
//      UNK_0xeb7b  codep:0x7420 parp:0xeb7b size:0x0003 C-string:'UNK_0xeb7b'
//      UNK_0xeb80  codep:0x7420 parp:0xeb80 size:0x0003 C-string:'UNK_0xeb80'
//      UNK_0xeb85  codep:0x7420 parp:0xeb85 size:0x0003 C-string:'UNK_0xeb85'
//      UNK_0xeb8a  codep:0x7420 parp:0xeb8a size:0x0003 C-string:'UNK_0xeb8a'
//      UNK_0xeb8f  codep:0x7420 parp:0xeb8f size:0x0003 C-string:'UNK_0xeb8f'
//      UNK_0xeb94  codep:0x7420 parp:0xeb94 size:0x0003 C-string:'UNK_0xeb94'
//      UNK_0xeb99  codep:0x7420 parp:0xeb99 size:0x0003 C-string:'UNK_0xeb99'
//      UNK_0xeb9e  codep:0x7420 parp:0xeb9e size:0x0003 C-string:'UNK_0xeb9e'
//      UNK_0xeba3  codep:0x7420 parp:0xeba3 size:0x0003 C-string:'UNK_0xeba3'
//      UNK_0xeba8  codep:0x7420 parp:0xeba8 size:0x0003 C-string:'UNK_0xeba8'
//      UNK_0xebad  codep:0x224c parp:0xebad size:0x0012 C-string:'UNK_0xebad'
//      UNK_0xebc1  codep:0x224c parp:0xebc1 size:0x00f0 C-string:'UNK_0xebc1'
//      UNK_0xecb3  codep:0x1d29 parp:0xecb3 size:0x0002 C-string:'UNK_0xecb3'
//      UNK_0xecb7  codep:0x224c parp:0xecb7 size:0x0006 C-string:'UNK_0xecb7'
//      UNK_0xecbf  codep:0x224c parp:0xecbf size:0x0112 C-string:'UNK_0xecbf'
//      UNK_0xedd3  codep:0x224c parp:0xedd3 size:0x0028 C-string:'UNK_0xedd3'
//      UNK_0xedfd  codep:0x224c parp:0xedfd size:0x0032 C-string:'UNK_0xedfd'
//      UNK_0xee31  codep:0x224c parp:0xee31 size:0x014d C-string:'UNK_0xee31'
//      UNK_0xef80  codep:0x224c parp:0xef80 size:0x00d0 C-string:'UNK_0xef80'
//      UNK_0xf052  codep:0x224c parp:0xf052 size:0x010d C-string:'UNK_0xf052'
//      UNK_0xf161  codep:0x224c parp:0xf161 size:0x0068 C-string:'UNK_0xf161'
//      UNK_0xf1cb  codep:0x224c parp:0xf1cb size:0x003a C-string:'UNK_0xf1cb'
//      UNK_0xf207  codep:0x224c parp:0xf207 size:0x001c C-string:'UNK_0xf207'
//      UNK_0xf225  codep:0x224c parp:0xf225 size:0x004a C-string:'UNK_0xf225'
//      UNK_0xf271  codep:0x224c parp:0xf271 size:0x0069 C-string:'UNK_0xf271'
//      UNK_0xf2dc  codep:0x224c parp:0xf2dc size:0x000c C-string:'UNK_0xf2dc'
//      UNK_0xf2ea  codep:0x224c parp:0xf2ea size:0x007b C-string:'UNK_0xf2ea'
//      UNK_0xf367  codep:0x224c parp:0xf367 size:0x0065 C-string:'UNK_0xf367'
//      UNK_0xf3ce  codep:0x224c parp:0xf3ce size:0x0040 C-string:'UNK_0xf3ce'
//      UNK_0xf410  codep:0x224c parp:0xf410 size:0x0030 C-string:'UNK_0xf410'
//      UNK_0xf442  codep:0x224c parp:0xf442 size:0x0046 C-string:'UNK_0xf442'
//     (U-ASSCREW)  codep:0x224c parp:0xf498 size:0x0000 C-string:'_ro_U_dash_ASSCREW_rc_'

// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xead8 = 0xead8; // UNK_0xead8 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xecb3 = 0xecb3; // UNK_0xecb3 size: 2
// {0x3a, 0x20}


const unsigned short int cc_UNK_0xead0 = 0x0003; // UNK_0xead0
const unsigned short int cc_UNK_0xead4 = 0x0004; // UNK_0xead4


// 0xeac2: db 0xab 0x00 '  '

// ================================================
// 0xeac4: WORD 'UNK_0xeac6' codep=0x224c parp=0xeac6
// ================================================

void UNK_0xeac6() // UNK_0xeac6
{
  Push(0xb752); // probable 'OVTRIM_1'
  MODULE(); // MODULE
}


// ================================================
// 0xeace: WORD 'UNK_0xead0' codep=0x2214 parp=0xead0
// ================================================
// 0xead0: db 0x03 0x00 '  '

// ================================================
// 0xead2: WORD 'UNK_0xead4' codep=0x2214 parp=0xead4
// ================================================
// 0xead4: db 0x04 0x00 '  '

// ================================================
// 0xead6: WORD 'UNK_0xead8' codep=0x1d29 parp=0xead8
// ================================================
// 0xead8: db 0x3a 0x20 ': '

// ================================================
// 0xeada: WORD 'UNK_0xeadc' codep=0x224c parp=0xeadc
// ================================================

void UNK_0xeadc() // UNK_0xeadc
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

// 0xeafc: db 0x29 0x1d 0xd5 0x57 0x00 0xf5 0x4c 0x22 0x88 0x9d 0x8f 0x3b 0x6a 0x5a 0x16 0x6d 0xfc 0xea 0x75 0x5a 0x16 0x6d 0xbd 0x8b 0x97 0x3b 0x46 0x5a 0x23 0x6d 0xbd 0x9d 0x90 0x16 ')  W  L"   ;jZ m  uZ m   ;FZ#m    '

// ================================================
// 0xeb1e: WORD 'UNK_0xeb20' codep=0x224c parp=0xeb20
// ================================================

void UNK_0xeb20() // UNK_0xeb20
{
  Push(pp_UNK_0xead8); // UNK_0xead8
  Push(Read16(Pop())); // @
  Push(1); // 1
  _gt_(); // >
  if (Pop() == 0) return;
  PRINT("PAGE THROUGH FILES: ^\", 22); // (.")
}


// ================================================
// 0xeb47: WORD 'UNK_0xeb49' codep=0x224c parp=0xeb49
// ================================================

void UNK_0xeb49() // UNK_0xeb49
{
  PRINT("A DEAD CREWMEMBER", 17); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xeb61: WORD 'UNK_0xeb63' codep=0x7394 parp=0xeb63
// ================================================
// 0xeb63: db 0x10 0x00 0x08 0x14 0xc8 0x6a '     j'

// ================================================
// 0xeb69: WORD 'UNK_0xeb6b' codep=0x7394 parp=0xeb6b
// ================================================
// 0xeb6b: db 0x10 0x12 0x01 0x14 0xc8 0x6a '     j'

// ================================================
// 0xeb71: WORD 'UNK_0xeb73' codep=0x7394 parp=0xeb73
// ================================================
// 0xeb73: db 0x10 0x13 0x01 0x14 0xc8 0x6a '     j'

// ================================================
// 0xeb79: WORD 'UNK_0xeb7b' codep=0x7420 parp=0xeb7b
// ================================================
// 0xeb7b: db 0x10 0x0b 0x0f '   '

// ================================================
// 0xeb7e: WORD 'UNK_0xeb80' codep=0x7420 parp=0xeb80
// ================================================
// 0xeb80: db 0x10 0x1a 0x01 '   '

// ================================================
// 0xeb83: WORD 'UNK_0xeb85' codep=0x7420 parp=0xeb85
// ================================================
// 0xeb85: db 0x10 0x1b 0x01 '   '

// ================================================
// 0xeb88: WORD 'UNK_0xeb8a' codep=0x7420 parp=0xeb8a
// ================================================
// 0xeb8a: db 0x10 0x1c 0x01 '   '

// ================================================
// 0xeb8d: WORD 'UNK_0xeb8f' codep=0x7420 parp=0xeb8f
// ================================================
// 0xeb8f: db 0x10 0x1d 0x01 '   '

// ================================================
// 0xeb92: WORD 'UNK_0xeb94' codep=0x7420 parp=0xeb94
// ================================================
// 0xeb94: db 0x10 0x1e 0x01 '   '

// ================================================
// 0xeb97: WORD 'UNK_0xeb99' codep=0x7420 parp=0xeb99
// ================================================
// 0xeb99: db 0x10 0x1f 0x01 '   '

// ================================================
// 0xeb9c: WORD 'UNK_0xeb9e' codep=0x7420 parp=0xeb9e
// ================================================
// 0xeb9e: db 0x10 0x20 0x02 '   '

// ================================================
// 0xeba1: WORD 'UNK_0xeba3' codep=0x7420 parp=0xeba3
// ================================================
// 0xeba3: db 0x10 0x22 0x01 ' " '

// ================================================
// 0xeba6: WORD 'UNK_0xeba8' codep=0x7420 parp=0xeba8
// ================================================
// 0xeba8: db 0x11 0x11 0x12 '   '

// ================================================
// 0xebab: WORD 'UNK_0xebad' codep=0x224c parp=0xebad
// ================================================

void UNK_0xebad() // UNK_0xebad
{
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  SetColor("BLUE");
  return;

  label1:
  SetColor("DK-BLUE");
}


// ================================================
// 0xebbf: WORD 'UNK_0xebc1' codep=0x224c parp=0xebc1
// ================================================

void UNK_0xebc1() // UNK_0xebc1
{
  Push(0x0049);
  Push(1); // 1
  Push(cc__8); // 8
  Push(0x0043);
  SetColor("GREY2");
  POLY_dash_WI(); // POLY-WI
  Push(0x003c);
  Push(0x0044);
  Push(cc__8); // 8
  Push(0x009d);
  SetColor("GREY2");
  POLY_dash_WI(); // POLY-WI
  SetColor("WHITE");
  SetColor("WHITE");
  UNK_0xebad(); // UNK_0xebad
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
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
  PRINT("FILE#", 5); // (.")
  Push(1); // 1
  Push(cc__8); // 8
  Push(cc_UNK_0xead0); // UNK_0xead0
  Push(1); // 1
  Push(0x004a);
  Push(cc_UNK_0xead4); // UNK_0xead4
  Push(0x0041);
  Push(0x004a);
  Push(cc_UNK_0xead0); // UNK_0xead0
  Push(0x009c);
  Push(cc__8); // 8
  Push(cc_UNK_0xead4); // UNK_0xead4
  Push(0x009c);
  Push(0x003d);
  Push(cc_UNK_0xead0); // UNK_0xead0
  Push(0x0043);
  Push(0x003f);
  Push(cc_UNK_0xead0); // UNK_0xead0
  Push(cc__6); // 6
  UNK_0xeac6(); // UNK_0xeac6
}


// ================================================
// 0xecb1: WORD 'UNK_0xecb3' codep=0x1d29 parp=0xecb3
// ================================================
// 0xecb3: db 0x3a 0x20 ': '

// ================================================
// 0xecb5: WORD 'UNK_0xecb7' codep=0x224c parp=0xecb7
// ================================================

void UNK_0xecb7() // UNK_0xecb7
{
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
}


// ================================================
// 0xecbd: WORD 'UNK_0xecbf' codep=0x224c parp=0xecbf
// ================================================

void UNK_0xecbf() // UNK_0xecbf
{
  unsigned short int a = Pop(); // >R
  Push(a); // I
  Push(pp_UNK_0xecb3); // UNK_0xecb3
  _ex__2(); // !_2
  _gt_1FONT(); // >1FONT
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x000a);
  Push(0x0029);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  PRINT("SKILLS:", 7); // (.")
  Push(0x000f);
  Push(0x0022);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  PRINT("SCIENCE       :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  PRINT("RACE:", 5); // (.")
  Push(0x000f);
  Push(0x001b);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  PRINT("NAVIGATION    :", 15); // (.")
  Push(0x000f);
  Push(0x0014);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  PRINT("ENGINEERING   :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  PRINT("DURABILITY:", 11); // (.")
  Push(0x000f);
  Push(0x000d);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  PRINT("COMMUNICATIONS:", 15); // (.")
  Push(0x000f);
  Push(cc__6); // 6
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  PRINT("MEDICINE      :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  PRINT("LRN RATE  :", 11); // (.")
  Push(0x0057);
  Push(0x0030);
  Push(a); // R>
  UNK_0xecb7(); // UNK_0xecb7
  PRINT("VITALITY:   %", 13); // (.")
}


// ================================================
// 0xedd1: WORD 'UNK_0xedd3' codep=0x224c parp=0xedd3
// ================================================

void UNK_0xedd3() // UNK_0xedd3
{
  CI(); // CI
  _gt_C_plus_S(); // >C+S
  Push(0); // 0

  label2:
  Push(0x6603); // IFIELD(UNK_0xeba3)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0018);
  _st_(); // <
  if (Pop() == 0) goto label1;
  INEXT(); // INEXT
  Push(0x6601); // IFIELD(UNK_0xeb9e)
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
}


// ================================================
// 0xedfb: WORD 'UNK_0xedfd' codep=0x224c parp=0xedfd
// ================================================

void UNK_0xedfd() // UNK_0xedfd
{
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  Push(0x6603); // IFIELD(UNK_0xeba3)
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  IPREV(); // IPREV
  return;

  label1:
  _0_gt_(); // 0>
  UNK_0xedd3(); // UNK_0xedd3
  Push(0x6603); // IFIELD(UNK_0xeba3)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0018);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  INEXT(); // INEXT
}


// ================================================
// 0xee2f: WORD 'UNK_0xee31' codep=0x224c parp=0xee31
// ================================================

void UNK_0xee31() // UNK_0xee31
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
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
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
  Push(cc_UNK_0xead4); // UNK_0xead4
  Push(0x009c);
  Push(0x00c6);
  Push(cc_UNK_0xead0); // UNK_0xead0
  Push(2); // 2
  Push(0x00b8);
  Push(cc_UNK_0xead0); // UNK_0xead0
  Push(0x009c);
  Push(0x00b8);
  Push(cc_UNK_0xead4); // UNK_0xead4
  Push(cc__4); // 4
  UNK_0xeac6(); // UNK_0xeac6
  UNK_0xebc1(); // UNK_0xebc1
  Push(cc__9); // 9
  UNK_0xecbf(); // UNK_0xecbf
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xef7e: WORD 'UNK_0xef80' codep=0x224c parp=0xef80
// ================================================

void UNK_0xef80() // UNK_0xef80
{
  Push(pp_UNK_0xecb3); // UNK_0xecb3
  Push(Read16(Pop())); // @
  unsigned short int a = Pop(); // >R
  Push(0x000a);
  Push(0x0030);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  CTINIT(); // CTINIT
  SetColor("BLACK");
  SetColor("WHITE");
  SetColor("WHITE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(0x65ec); // IFIELD(UNK_0xeb7b)
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  _do__dot_(); // $.
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  Push(0x007a);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  Push(0x6600); // IFIELD(UNK_0xeb99)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x004a);
  Push(0x0022);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  Push(0x65fb); // IFIELD(UNK_0xeb80)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x0077);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  LoadData("UNK_0xeb63"); // from 'CREWMEMBER  '
  _do__dot_(); // $.
  Push(0x004a);
  Push(0x001b);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  Push(0x65fc); // IFIELD(UNK_0xeb85)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x004a);
  Push(0x0014);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  Push(0x65fd); // IFIELD(UNK_0xeb8a)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  LoadData("UNK_0xeb73"); // from 'CREWMEMBER  '
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  _dot_R(); // .R
  Push(0x004a);
  Push(0x000d);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  Push(0x65fe); // IFIELD(UNK_0xeb8f)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x004a);
  Push(cc__6); // 6
  Push(a); // R>
  UNK_0xecb7(); // UNK_0xecb7
  Push(0x65ff); // IFIELD(UNK_0xeb94)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  LoadData("UNK_0xeb6b"); // from 'CREWMEMBER  '
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  _dot_R(); // .R
}


// ================================================
// 0xf050: WORD 'UNK_0xf052' codep=0x224c parp=0xf052
// ================================================

void UNK_0xf052() // UNK_0xf052
{
  SAVE_dash_SC(); // SAVE-SC
  _gt_HIDDEN(); // >HIDDEN
  _at_CRS(); // @CRS
  _gt_1FONT(); // >1FONT
  Push(pp_UNK_0xecb3); // UNK_0xecb3
  Push(Read16(Pop())); // @
  unsigned short int a = Pop(); // >R
  Push(0x000e);
  SetColor("GREY2");
  Push(0x0030);
  Push(a); // I
  Push(Pop() + Pop()); // +
  Push(0x000a);
  POS_dot_PXT(); // POS.PXT
  Push(cc__3); // 3
  SetColor("GREY2");
  Push(0x0030);
  Push(a); // I
  Push(Pop() + Pop()); // +
  Push(0x007a);
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  SetColor("BLACK");
  SetColor("WHITE");
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
  Push(a); // J
  Push(Pop() + Pop()); // +
  Push(0x004a);
  POS_dot_PXT(); // POS.PXT
  Push(2); // 2
  Push(i); // I
  Push(cc__4); // 4
  Push((Pop()==Pop())?1:0); // =
  Push(cc__5); // 5
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  SetColor("GREY2");
  Push(i); // I
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(a); // J
  Push(Pop() + Pop()); // +
  Push(0x008d);
  Push(i); // I
  Push(cc__4); // 4
  Push((Pop()==Pop())?1:0); // =
  Push(0xffea);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  POS_dot_PXT(); // POS.PXT
  i++;
  } while(i<imax); // (LOOP) 0xffb4

  Push(2); // 2
  SetColor("GREY2");
  Push(0x003d);
  Push(a); // I
  Push(Pop() + Pop()); // +
  Push(0x0028);
  POS_dot_PXT(); // POS.PXT
  Push(0x0028);
  Push(0x003d);
  Push(a); // R>
  UNK_0xecb7(); // UNK_0xecb7
  Push(0x6603); // IFIELD(UNK_0xeba3)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  Push(2); // 2
  _dot_R(); // .R
  Push(0x6601); // IFIELD(UNK_0xeb9e)
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xef80(); // UNK_0xef80

  label1:
  Push(0x6601); // IFIELD(UNK_0xeb9e)
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  Push(Pop() & Pop()); // AND
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  if (Pop() == 0) goto label2;
  SetColor("RED");
  goto label3;

  label2:
  SetColor("GREY2");

  label3:
  _ex_COLOR(); // !COLOR
  Push(pp_UNK_0xecb3); // UNK_0xecb3
  Push(Read16(Pop())); // @
  Push(0x0033);
  Push(Pop() + Pop()); // +
  Push(pp_YBLT); // YBLT
  _ex__2(); // !_2
  Push(0x0041);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  _gt_3FONT(); // >3FONT
  PRINT("DEAD", 4); // (.")
  _ex_CRS(); // !CRS
  _gt_1FONT(); // >1FONT
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xf15f: WORD 'UNK_0xf161' codep=0x224c parp=0xf161
// ================================================

void UNK_0xf161() // UNK_0xf161
{
  unsigned short int a = Pop(); // >R
  _at_CRS(); // @CRS
  Push(a); // R>
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
  Push(0x65ec); // IFIELD(UNK_0xeb7b)
  _do__dot_(); // $.
  _ex_CRS(); // !CRS
}

// 0xf195: db 0x4c 0x22 0xa6 0xeb 0x5d 0x17 0x12 0x00 0x7f 0x0e 0x72 0x0f 0xf2 0x0e 0xb8 0x15 0x50 0x0e 0x1f 0x7a 0x8b 0x75 0x3e 0x13 0xfa 0x15 0x10 0x00 0x9c 0xeb 0x92 0x0c 0x5d 0x17 0xf7 0x00 0xf5 0x12 0x9c 0xeb 0x0a 0x6d 0xdf 0x79 0x7f 0x3b 0x91 0x15 0xe0 0xff 0x90 0x16 'L"  ]    r     P  z u>         ]        m y;      '

// ================================================
// 0xf1c9: WORD 'UNK_0xf1cb' codep=0x224c parp=0xf1cb
// ================================================

void UNK_0xf1cb() // UNK_0xf1cb
{
  CTINIT(); // CTINIT
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x65f2); // IFIELD(UNK_0xeba8)
  Push(i); // I
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  CI(); // CI
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(0x6601); // IFIELD(UNK_0xeb9e)
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(i); // I
  UNK_0xf161(); // UNK_0xf161

  label1:
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xffd8

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf205: WORD 'UNK_0xf207' codep=0x224c parp=0xf207
// ================================================

void UNK_0xf207() // UNK_0xf207
{
  unsigned short int a = Pop(); // >R
  CI(); // CI
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65f2); // IFIELD(UNK_0xeba8)
  Push(a); // I
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
  Push(a); // R>
  UNK_0xf161(); // UNK_0xf161
}


// ================================================
// 0xf223: WORD 'UNK_0xf225' codep=0x224c parp=0xf225
// ================================================

void UNK_0xf225() // UNK_0xf225
{
  unsigned short int a = Pop(); // >R
  _at_CRS(); // @CRS
  CTINIT(); // CTINIT
  Push(a); // R>
  _ex_COLOR(); // !COLOR
  Push(0x0022);
  Push(0x005b);
  POS_dot_(); // POS.
  UNK_0xeb20(); // UNK_0xeb20
  Push(0x000a);
  Push(0x0055);
  POS_dot_(); // POS.
  PRINT("PRESS SPACEBAR TO ASSIGN CREWMEMBER", 35); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf26f: WORD 'UNK_0xf271' codep=0x224c parp=0xf271
// ================================================

void UNK_0xf271() // UNK_0xf271
{
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  _ex__2(); // !_2
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  BLT(); // BLT
  Push(Read16(regsp)); // DUP
  Push(cc__5); // 5
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+
  Push(0x0012);
  Push(pp_WBLT); // WBLT
  _ex__2(); // !_2
  SetColor("BLACK");
  UNK_0xf225(); // UNK_0xf225
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
  Push(pp_YBLT); // YBLT
  _ex__2(); // !_2
  BLT(); // BLT
}


// ================================================
// 0xf2da: WORD 'UNK_0xf2dc' codep=0x224c parp=0xf2dc
// ================================================

void UNK_0xf2dc() // UNK_0xf2dc
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  UNK_0xedfd(); // UNK_0xedfd
  UNK_0xf052(); // UNK_0xf052
}


// ================================================
// 0xf2e8: WORD 'UNK_0xf2ea' codep=0x224c parp=0xf2ea
// ================================================

void UNK_0xf2ea() // UNK_0xf2ea
{
  Push(0); // 0
  UNK_0xf225(); // UNK_0xf225
  _at_CRS(); // @CRS
  CTINIT(); // CTINIT
  Push(0x6601); // IFIELD(UNK_0xeb9e)
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
  UNK_0xeb49(); // UNK_0xeb49
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
  UNK_0xeadc(); // UNK_0xeadc
  SetColor("BLACK");
  _2SWAP(); // 2SWAP
  POS_dot_PXT(); // POS.PXT
  _ex_CRS(); // !CRS
  SetColor("WHITE");
  UNK_0xf225(); // UNK_0xf225
  Push(0); // 0
}


// ================================================
// 0xf365: WORD 'UNK_0xf367' codep=0x224c parp=0xf367
// ================================================

void UNK_0xf367() // UNK_0xf367
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
// 0xf3cc: WORD 'UNK_0xf3ce' codep=0x224c parp=0xf3ce
// ================================================

void UNK_0xf3ce() // UNK_0xf3ce
{
  unsigned short int a = Pop(); // >R

  label5:
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  UNK_0xf2dc(); // UNK_0xf2dc
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label1;
  Push(0x6601); // IFIELD(UNK_0xeb9e)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  Push(Pop() & Pop()); // AND
  Push(1); // 1
  Push(Pop() ^ Pop()); // XOR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  Push(a); // I
  UNK_0xf271(); // UNK_0xf271
  Push(a); // I
  UNK_0xf207(); // UNK_0xf207
  Push(1); // 1
  goto label3;

  label2:
  UNK_0xf2ea(); // UNK_0xf2ea

  label3:
  goto label4;

  label1:
  Push(0); // 0

  label4:
  if (Pop() == 0) goto label5;
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf40e: WORD 'UNK_0xf410' codep=0x224c parp=0xf410
// ================================================

void UNK_0xf410() // UNK_0xf410
{
  Push(pp_UNK_0xead8); // UNK_0xead8
  _099(); // 099
  IFIRST(); // IFIRST
  Push(0); // 0
  Push(0x0019);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x6601); // IFIELD(UNK_0xeb9e)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  Push(Pop() & Pop()); // AND
  Push(cc__3); // 3
  Push(Pop() ^ Pop()); // XOR
  Push(2); // 2
  Push((Pop()==Pop())?1:0); // =
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xead8); // UNK_0xead8
  _plus__ex__2(); // +!_2
  Push(Pop() | Pop()); // OR
  INEXT(); // INEXT
  i++;
  } while(i<imax); // (LOOP) 0xffe4

}


// ================================================
// 0xf440: WORD 'UNK_0xf442' codep=0x224c parp=0xf442
// ================================================

void UNK_0xf442() // UNK_0xf442
{
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN

  label1:
  Push(0x6601); // IFIELD(UNK_0xeb9e)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x00f7);
  Push(Pop() & Pop()); // AND
  Push(0x6601); // IFIELD(UNK_0xeb9e)
  C_ex__2(); // C!_2
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
  Push(0x65f2); // IFIELD(UNK_0xeba8)
  Push(i); // I
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  Push(0x6601); // IFIELD(UNK_0xeb9e)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__8); // 8
  Push(Pop() | Pop()); // OR
  Push(0x6601); // IFIELD(UNK_0xeb9e)
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
  Push(cc__3); // 3
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffe6

}


// ================================================
// 0xf488: WORD '(U-ASSCREW)' codep=0x224c parp=0xf498
// ================================================
// entry

void _ro_U_dash_ASSCREW_rc_() // (U-ASSCREW)
{
  UNK_0xee31(); // UNK_0xee31
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xf410(); // UNK_0xf410
  if (Pop() == 0) goto label1;
  UNK_0xf1cb(); // UNK_0xf1cb
  Push(pp_NCRS); // NCRS
  _099(); // 099
  Push(pp_OCRS); // OCRS
  _099(); // 099
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  _ex__2(); // !_2
  Push(cc__9); // 9
  Push(pp_LBLT); // LBLT
  _ex__2(); // !_2
  Push(0x0090);
  Push(pp_WBLT); // WBLT
  _ex__2(); // !_2
  Push(cc__8); // 8
  Push(0x00a9);
  POS_dot_(); // POS.
  SetColor("WHITE");
  SetColor("RED");
  SetColor("DK-GREE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  BLT(); // BLT
  SetColor("WHITE");
  UNK_0xf225(); // UNK_0xf225
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x65f2); // IFIELD(UNK_0xeba8)
  Push(i); // I
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  Push(0x6601); // IFIELD(UNK_0xeb9e)
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
  Push(0x65f2); // IFIELD(UNK_0xeba8)
  Push(i); // I
  Push(Pop()-1); // 1-
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S

  label2:
  UNK_0xf052(); // UNK_0xf052
  Push(i); // I
  UNK_0xf3ce(); // UNK_0xf3ce
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xffb2

  UNK_0xf442(); // UNK_0xf442
  ICLOSE(); // ICLOSE
  KEY_2(); // KEY_2
  Pop(); // DROP
  goto label4;

  label1:
  UNK_0xf367(); // UNK_0xf367
  UNK_0xeadc(); // UNK_0xeadc

  label4:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}

// 0xf550: db 0x41 0x43 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'ACR_____________ '
  