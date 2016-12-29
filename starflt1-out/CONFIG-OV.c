// ====== OVERLAY 'CONFIG-OV' ======
// store offset = 0xe960
// overlay size   = 0x0c00

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe976  codep:0x224c parp:0xe976 size:0x0008 C-string:'UNK_0xe976'
//      UNK_0xe980  codep:0x224c parp:0xe980 size:0x0012 C-string:'UNK_0xe980'
//      UNK_0xe994  codep:0x224c parp:0xe994 size:0x0008 C-string:'UNK_0xe994'
//      UNK_0xe99e  codep:0x224c parp:0xe99e size:0x0008 C-string:'UNK_0xe99e'
//      UNK_0xe9a8  codep:0x224c parp:0xe9a8 size:0x0008 C-string:'UNK_0xe9a8'
//      UNK_0xe9b2  codep:0x224c parp:0xe9b2 size:0x0008 C-string:'UNK_0xe9b2'
//      UNK_0xe9bc  codep:0x224c parp:0xe9bc size:0x0008 C-string:'UNK_0xe9bc'
//      UNK_0xe9c6  codep:0x224c parp:0xe9c6 size:0x0008 C-string:'UNK_0xe9c6'
//      UNK_0xe9d0  codep:0x224c parp:0xe9d0 size:0x0008 C-string:'UNK_0xe9d0'
//      UNK_0xe9da  codep:0x744d parp:0xe9da size:0x0003 C-string:'UNK_0xe9da'
//      UNK_0xe9df  codep:0x744d parp:0xe9df size:0x0003 C-string:'UNK_0xe9df'
//      UNK_0xe9e4  codep:0x744d parp:0xe9e4 size:0x0003 C-string:'UNK_0xe9e4'
//      UNK_0xe9e9  codep:0x744d parp:0xe9e9 size:0x0003 C-string:'UNK_0xe9e9'
//      UNK_0xe9ee  codep:0x744d parp:0xe9ee size:0x0003 C-string:'UNK_0xe9ee'
//      UNK_0xe9f3  codep:0x744d parp:0xe9f3 size:0x0003 C-string:'UNK_0xe9f3'
//      UNK_0xe9f8  codep:0x744d parp:0xe9f8 size:0x0003 C-string:'UNK_0xe9f8'
//      UNK_0xe9fd  codep:0x744d parp:0xe9fd size:0x0003 C-string:'UNK_0xe9fd'
//      UNK_0xea02  codep:0x744d parp:0xea02 size:0x0003 C-string:'UNK_0xea02'
//      UNK_0xea07  codep:0x744d parp:0xea07 size:0x0003 C-string:'UNK_0xea07'
//      UNK_0xea0c  codep:0x744d parp:0xea0c size:0x0003 C-string:'UNK_0xea0c'
//      UNK_0xea11  codep:0x744d parp:0xea11 size:0x0008 C-string:'UNK_0xea11'
//      UNK_0xea1b  codep:0x224c parp:0xea1b size:0x000a C-string:'UNK_0xea1b'
//      UNK_0xea27  codep:0x224c parp:0xea27 size:0x000a C-string:'UNK_0xea27'
//      UNK_0xea33  codep:0x1d29 parp:0xea33 size:0x0015 C-string:'UNK_0xea33'
//      UNK_0xea4a  codep:0x1d29 parp:0xea4a size:0x0019 C-string:'UNK_0xea4a'
//      UNK_0xea65  codep:0x224c parp:0xea65 size:0x0042 C-string:'UNK_0xea65'
//      UNK_0xeaa9  codep:0x224c parp:0xeaa9 size:0x0032 C-string:'UNK_0xeaa9'
//      UNK_0xeadd  codep:0x224c parp:0xeadd size:0x003c C-string:'UNK_0xeadd'
//      UNK_0xeb1b  codep:0x224c parp:0xeb1b size:0x003e C-string:'UNK_0xeb1b'
//      UNK_0xeb5b  codep:0x224c parp:0xeb5b size:0x0020 C-string:'UNK_0xeb5b'
//      UNK_0xeb7d  codep:0x1d29 parp:0xeb7d size:0x0002 C-string:'UNK_0xeb7d'
//      UNK_0xeb81  codep:0x1d29 parp:0xeb81 size:0x0032 C-string:'UNK_0xeb81'
//      UNK_0xebb5  codep:0x224c parp:0xebb5 size:0x0032 C-string:'UNK_0xebb5'
//      UNK_0xebe9  codep:0x224c parp:0xebe9 size:0x006a C-string:'UNK_0xebe9'
//      (PARTADDR)  codep:0x4a4f parp:0xec62 size:0x0014 C-string:'_ro_PARTADDR_rc_'
//      UNK_0xec78  codep:0x224c parp:0xec78 size:0x0006 C-string:'UNK_0xec78'
//           (PTS)  codep:0x4a4f parp:0xec88 size:0x000c C-string:'_ro_PTS_rc_'
//      UNK_0xec96  codep:0x224c parp:0xec96 size:0x0012 C-string:'UNK_0xec96'
//      UNK_0xecaa  codep:0x1d29 parp:0xecaa size:0x0004 C-string:'UNK_0xecaa'
//      UNK_0xecb0  codep:0x224c parp:0xecb0 size:0x006e C-string:'UNK_0xecb0'
//      UNK_0xed20  codep:0x224c parp:0xed20 size:0x0048 C-string:'UNK_0xed20'
//      UNK_0xed6a  codep:0x224c parp:0xed6a size:0x00a8 C-string:'UNK_0xed6a'
//      UNK_0xee14  codep:0x224c parp:0xee14 size:0x000a C-string:'UNK_0xee14'
//      UNK_0xee20  codep:0x224c parp:0xee20 size:0x0130 C-string:'UNK_0xee20'
//      UNK_0xef52  codep:0x224c parp:0xef52 size:0x0078 C-string:'UNK_0xef52'
//      UNK_0xefcc  codep:0x224c parp:0xefcc size:0x0073 C-string:'UNK_0xefcc'
//      UNK_0xf041  codep:0x224c parp:0xf041 size:0x0097 C-string:'UNK_0xf041'
//      UNK_0xf0da  codep:0x224c parp:0xf0da size:0x006c C-string:'UNK_0xf0da'
//      UNK_0xf148  codep:0x1d29 parp:0xf148 size:0x0002 C-string:'UNK_0xf148'
//      UNK_0xf14c  codep:0x224c parp:0xf14c size:0x0088 C-string:'UNK_0xf14c'
//      UNK_0xf1d6  codep:0x224c parp:0xf1d6 size:0x004e C-string:'UNK_0xf1d6'
//      UNK_0xf226  codep:0x224c parp:0xf226 size:0x0060 C-string:'UNK_0xf226'
//      UNK_0xf288  codep:0x224c parp:0xf288 size:0x003b C-string:'UNK_0xf288'
//      UNK_0xf2c5  codep:0x224c parp:0xf2c5 size:0x0033 C-string:'UNK_0xf2c5'
//      UNK_0xf2fa  codep:0x224c parp:0xf2fa size:0x004a C-string:'UNK_0xf2fa'
//      UNK_0xf346  codep:0x224c parp:0xf346 size:0x0070 C-string:'UNK_0xf346'
//      UNK_0xf3b8  codep:0x224c parp:0xf3b8 size:0x001d C-string:'UNK_0xf3b8'
//      UNK_0xf3d7  codep:0x224c parp:0xf3d7 size:0x0024 C-string:'UNK_0xf3d7'
//      UNK_0xf3fd  codep:0x224c parp:0xf3fd size:0x006e C-string:'UNK_0xf3fd'
//      UNK_0xf46d  codep:0x224c parp:0xf46d size:0x0008 C-string:'UNK_0xf46d'
//      UNK_0xf477  codep:0x224c parp:0xf477 size:0x0008 C-string:'UNK_0xf477'
// CONFIG-FUNCTION  codep:0x4a4f parp:0xf493 size:0x0018 C-string:'CONFIG_dash_FUNCTION'
//      (U-CONFIG)  codep:0x224c parp:0xf4ba size:0x0000 C-string:'_ro_U_dash_CONFIG_rc_'

// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xea33 = 0xea33; // UNK_0xea33 size: 21
// {0x04, 0x0a, 0x02, 0x09, 0x13, 0x0a, 0x16, 0x09, 0x25, 0x0a, 0x3c, 0x09, 0x27, 0x0a, 0x64, 0x09, 0x1b, 0x0a, 0x80, 0x09, 0x1e}

const unsigned short int pp_UNK_0xea4a = 0xea4a; // UNK_0xea4a size: 25
// {0x05, 0xb0, 0x06, 0x09, 0x29, 0xa1, 0x06, 0x09, 0x1d, 0x97, 0x06, 0x09, 0x25, 0x8d, 0x06, 0x09, 0x15, 0x83, 0x06, 0x09, 0x41, 0x79, 0x06, 0x09, 0x31}

const unsigned short int pp_UNK_0xeb7d = 0xeb7d; // UNK_0xeb7d size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xeb81 = 0xeb81; // UNK_0xeb81 size: 50
// {0xe8, 0x03, 0x90, 0x01, 0xc8, 0x00, 0x50, 0x00, 0x0a, 0x00, 0xe2, 0x04, 0xbc, 0x02, 0x40, 0x01, 0x78, 0x00, 0x28, 0x00, 0xfa, 0x00, 0x7d, 0x00, 0x3e, 0x00, 0x1f, 0x00, 0x0f, 0x00, 0xd0, 0x07, 0xb0, 0x04, 0x58, 0x02, 0x18, 0x01, 0x78, 0x00, 0xdc, 0x05, 0x84, 0x03, 0x1c, 0x02, 0xc8, 0x00, 0x50, 0x00}

const unsigned short int pp_UNK_0xecaa = 0xecaa; // UNK_0xecaa size: 4
// {0x56, 0x3a, 0x20, 0x70}

const unsigned short int pp_UNK_0xf148 = 0xf148; // UNK_0xf148 size: 2
// {0x3a, 0x20}




// 0xe972: db 0xbc 0x00 '  '

// ================================================
// 0xe974: WORD 'UNK_0xe976' codep=0x224c parp=0xe976
// ================================================

void UNK_0xe976() // UNK_0xe976
{
  Push(0xc52d);
  MODULE(); // MODULE
}


// ================================================
// 0xe97e: WORD 'UNK_0xe980' codep=0x224c parp=0xe980
// ================================================

void UNK_0xe980() // UNK_0xe980
{
  Push(0xc542);
  MODULE(); // MODULE
}

// 0xe988: db 0x4c 0x22 0x5d 0x17 0x58 0xc5 0xce 0x84 0x90 0x16 'L"] X     '

// ================================================
// 0xe992: WORD 'UNK_0xe994' codep=0x224c parp=0xe994
// ================================================

void UNK_0xe994() // UNK_0xe994
{
  Push(0xc583);
  MODULE(); // MODULE
}


// ================================================
// 0xe99c: WORD 'UNK_0xe99e' codep=0x224c parp=0xe99e
// ================================================

void UNK_0xe99e() // UNK_0xe99e
{
  Push(0xc5ca);
  MODULE(); // MODULE
}


// ================================================
// 0xe9a6: WORD 'UNK_0xe9a8' codep=0x224c parp=0xe9a8
// ================================================

void UNK_0xe9a8() // UNK_0xe9a8
{
  Push(0xbd5b);
  MODULE(); // MODULE
}


// ================================================
// 0xe9b0: WORD 'UNK_0xe9b2' codep=0x224c parp=0xe9b2
// ================================================

void UNK_0xe9b2() // UNK_0xe9b2
{
  Push(0xbd70);
  MODULE(); // MODULE
}


// ================================================
// 0xe9ba: WORD 'UNK_0xe9bc' codep=0x224c parp=0xe9bc
// ================================================

void UNK_0xe9bc() // UNK_0xe9bc
{
  Push(0xbd82);
  MODULE(); // MODULE
}


// ================================================
// 0xe9c4: WORD 'UNK_0xe9c6' codep=0x224c parp=0xe9c6
// ================================================

void UNK_0xe9c6() // UNK_0xe9c6
{
  Push(0xbd97);
  MODULE(); // MODULE
}


// ================================================
// 0xe9ce: WORD 'UNK_0xe9d0' codep=0x224c parp=0xe9d0
// ================================================

void UNK_0xe9d0() // UNK_0xe9d0
{
  Push(0xc6e4);
  MODULE(); // MODULE
}


// ================================================
// 0xe9d8: WORD 'UNK_0xe9da' codep=0x744d parp=0xe9da
// ================================================
// 0xe9da: db 0x14 0x11 0x02 '   '

// ================================================
// 0xe9dd: WORD 'UNK_0xe9df' codep=0x744d parp=0xe9df
// ================================================
// 0xe9df: db 0x14 0x13 0x02 '   '

// ================================================
// 0xe9e2: WORD 'UNK_0xe9e4' codep=0x744d parp=0xe9e4
// ================================================
// 0xe9e4: db 0x14 0x15 0x02 '   '

// ================================================
// 0xe9e7: WORD 'UNK_0xe9e9' codep=0x744d parp=0xe9e9
// ================================================
// 0xe9e9: db 0x14 0x17 0x02 '   '

// ================================================
// 0xe9ec: WORD 'UNK_0xe9ee' codep=0x744d parp=0xe9ee
// ================================================
// 0xe9ee: db 0x14 0x19 0x02 '   '

// ================================================
// 0xe9f1: WORD 'UNK_0xe9f3' codep=0x744d parp=0xe9f3
// ================================================
// 0xe9f3: db 0x14 0x1b 0x02 '   '

// ================================================
// 0xe9f6: WORD 'UNK_0xe9f8' codep=0x744d parp=0xe9f8
// ================================================
// 0xe9f8: db 0x14 0x1d 0x02 '   '

// ================================================
// 0xe9fb: WORD 'UNK_0xe9fd' codep=0x744d parp=0xe9fd
// ================================================
// 0xe9fd: db 0x14 0x1f 0x02 '   '

// ================================================
// 0xea00: WORD 'UNK_0xea02' codep=0x744d parp=0xea02
// ================================================
// 0xea02: db 0x14 0x29 0x07 ' ) '

// ================================================
// 0xea05: WORD 'UNK_0xea07' codep=0x744d parp=0xea07
// ================================================
// 0xea07: db 0x14 0x30 0x02 ' 0 '

// ================================================
// 0xea0a: WORD 'UNK_0xea0c' codep=0x744d parp=0xea0c
// ================================================
// 0xea0c: db 0x14 0x32 0x02 ' 2 '

// ================================================
// 0xea0f: WORD 'UNK_0xea11' codep=0x744d parp=0xea11
// ================================================
// 0xea11: db 0x14 0x43 0x02 0x4d 0x74 0x14 0x45 0x04 ' C Mt E '

// ================================================
// 0xea19: WORD 'UNK_0xea1b' codep=0x224c parp=0xea1b
// ================================================

void UNK_0xea1b() // UNK_0xea1b
{
  Push(Read8(Pop())&0xFF); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xea25: WORD 'UNK_0xea27' codep=0x224c parp=0xea27
// ================================================

void UNK_0xea27() // UNK_0xea27
{
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xea31: WORD 'UNK_0xea33' codep=0x1d29 parp=0xea33
// ================================================
// 0xea33: db 0x04 0x0a 0x02 0x09 0x13 0x0a 0x16 0x09 0x25 0x0a 0x3c 0x09 0x27 0x0a 0x64 0x09 0x1b 0x0a 0x80 0x09 0x1e '        % < ' d      '

// ================================================
// 0xea48: WORD 'UNK_0xea4a' codep=0x1d29 parp=0xea4a
// ================================================
// 0xea4a: db 0x05 0xb0 0x06 0x09 0x29 0xa1 0x06 0x09 0x1d 0x97 0x06 0x09 0x25 0x8d 0x06 0x09 0x15 0x83 0x06 0x09 0x41 0x79 0x06 0x09 0x31 '    )       %       Ay  1'

// ================================================
// 0xea63: WORD 'UNK_0xea65' codep=0x224c parp=0xea65
// ================================================

void UNK_0xea65() // UNK_0xea65
{
  Push(cc__7); // 7
  SetColor("BLACK");
  ROT(); // ROT
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x0077);
  Push(Pop() + Pop()); // +
  Push(0x007d);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  PRINT("CLASS ", 6); // (.")
  _dot_(); // .
  return;

  label1:
  PRINT("NONE", 4); // (.")
}


// ================================================
// 0xeaa7: WORD 'UNK_0xeaa9' codep=0x224c parp=0xeaa9
// ================================================

void UNK_0xeaa9() // UNK_0xeaa9
{
  _at_CRS(); // @CRS
  Push(2); // 2
  SetColor("BLACK");
  Push(0x00ae);
  Push(0x0085);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  Push(0x640e); // IFIELD(UNK_0xe9fd)
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  Push(2); // 2
  _dot_R(); // .R
  _ex_CRS(); // !CRS
  Push(0xc697);
  MODULE(); // MODULE
  Push(0xc6a8);
  MODULE(); // MODULE
}


// ================================================
// 0xeadb: WORD 'UNK_0xeadd' codep=0x224c parp=0xeadd
// ================================================

void UNK_0xeadd() // UNK_0xeadd
{
  _at_CRS(); // @CRS
  CTINIT(); // CTINIT
  Push(0x6402); // IFIELD(UNK_0xe9df)
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__4); // 4
  UNK_0xea65(); // UNK_0xea65
  Push(0x6408); // IFIELD(UNK_0xe9ee)
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  UNK_0xea65(); // UNK_0xea65
  Push(0x6400); // IFIELD(UNK_0xe9da)
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  UNK_0xea65(); // UNK_0xea65
  Push(0x640a); // IFIELD(UNK_0xe9f3)
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  UNK_0xea65(); // UNK_0xea65
  Push(0x640c); // IFIELD(UNK_0xe9f8)
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(0); // 0
  UNK_0xea65(); // UNK_0xea65
  UNK_0xeaa9(); // UNK_0xeaa9
  _ex_CRS(); // !CRS
}


// ================================================
// 0xeb19: WORD 'UNK_0xeb1b' codep=0x224c parp=0xeb1b
// ================================================

void UNK_0xeb1b() // UNK_0xeb1b
{
  _ex_COLOR(); // !COLOR
  Push(2); // 2
  Push(0x00b5);
  Push(0x004f);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(2); // 2
  Push(0x001b);
  Push(0x004f);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(2); // 2
  Push(0x00b5);
  Push(2); // 2
  Push(0x001b);
  LLINE(); // LLINE
  Push(0x004f);
  Push(0x00b5);
  OVER(); // OVER
  Push(0x001b);
  LLINE(); // LLINE
}


// ================================================
// 0xeb59: WORD 'UNK_0xeb5b' codep=0x224c parp=0xeb5b
// ================================================

void UNK_0xeb5b() // UNK_0xeb5b
{
  TIME(); // TIME
  _2_at_(); // 2@

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_dash_(); // D-
  Push(0x09c4); Push(0x0000);
  D_gt_(); // D>
  Exec(?TERMINAL); // call of word 0x25bc '(?TERMINAL)'
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xeb7b: WORD 'UNK_0xeb7d' codep=0x1d29 parp=0xeb7d
// ================================================
// 0xeb7d: db 0x3a 0x20 ': '

// ================================================
// 0xeb7f: WORD 'UNK_0xeb81' codep=0x1d29 parp=0xeb81
// ================================================
// 0xeb81: db 0xe8 0x03 0x90 0x01 0xc8 0x00 0x50 0x00 0x0a 0x00 0xe2 0x04 0xbc 0x02 0x40 0x01 0x78 0x00 0x28 0x00 0xfa 0x00 0x7d 0x00 0x3e 0x00 0x1f 0x00 0x0f 0x00 0xd0 0x07 0xb0 0x04 0x58 0x02 0x18 0x01 0x78 0x00 0xdc 0x05 0x84 0x03 0x1c 0x02 0xc8 0x00 0x50 0x00 '      P       @ x (   } >         X   x         P '

// ================================================
// 0xebb3: WORD 'UNK_0xebb5' codep=0x224c parp=0xebb5
// ================================================

void UNK_0xebb5() // UNK_0xebb5
{
  Push(cc__5); // 5
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__6); // 6
  Push(0); // 0
  Push(0x0036);
  Push(i); // I
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x0036);
  POS_dot_PXT(); // POS.PXT
  i++;
  } while(i<imax); // (LOOP) 0xffe6

  Push(cc__4); // 4
  SetColor("BLACK");
  Push(0x00ae);
  Push(0x0037);
  POS_dot_PXT(); // POS.PXT
}


// ================================================
// 0xebe7: WORD 'UNK_0xebe9' codep=0x224c parp=0xebe9
// ================================================

void UNK_0xebe9() // UNK_0xebe9
{
  _gt_R(); // >R
  _at_CRS(); // @CRS
  R_gt_(); // R>
  CTINIT(); // CTINIT
  UNK_0xebb5(); // UNK_0xebb5
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(0x003b);
  Push(0x00ae);
  POS_dot_(); // POS.
  Push(0x01f4);
  _dot_(); // .
  goto label2;

  label1:
  Push(Pop()-1); // 1-
  Push(cc__5); // 5
  Push(Pop() * Pop()); // *
  Push(cc__5); // 5
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x0037);
  Push(i); // I
  Push(cc__5); // 5
  MOD(); // MOD
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x0036);
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
  Push(pp_UNK_0xeb81); // UNK_0xeb81 size: 0
  Push(i); // I
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0x0064);
  M_star_(); // M*
  Push(cc__6); // 6
  D_dot_R(); // D.R
  i++;
  } while(i<imax); // (LOOP) 0xffd2


  label2:
  _ex_CRS(); // !CRS
}


// ================================================
// 0xec53: WORD '(PARTADDR)' codep=0x4a4f parp=0xec62
// ================================================

void _ro_PARTADDR_rc_() // (PARTADDR)
{
  switch(Pop()) // (PARTADDR)
  {
  case 1:
    UNK_0xe9df(); // UNK_0xe9df
    break;
  case 2:
    UNK_0xe9ee(); // UNK_0xe9ee
    break;
  case 3:
    UNK_0xe9da(); // UNK_0xe9da
    break;
  case 4:
    UNK_0xe9f3(); // UNK_0xe9f3
    break;
  default:
    UNK_0xe9f8(); // UNK_0xe9f8
    break;

  }
}

// ================================================
// 0xec76: WORD 'UNK_0xec78' codep=0x224c parp=0xec78
// ================================================

void UNK_0xec78() // UNK_0xec78
{
  Push(Read16(regsp)); // DUP
  _ro_PARTADDR_rc_(); // (PARTADDR) case
}


// ================================================
// 0xec7e: WORD '(PTS)' codep=0x4a4f parp=0xec88
// ================================================

void _ro_PTS_rc_() // (PTS)
{
  switch(Pop()) // (PTS)
  {
  case 2:
    UNK_0xea07(); // UNK_0xea07
    break;
  case 3:
    UNK_0xea0c(); // UNK_0xea0c
    break;
  default:
    Push(0); // 0
    break;

  }
}

// ================================================
// 0xec94: WORD 'UNK_0xec96' codep=0x224c parp=0xec96
// ================================================

void UNK_0xec96() // UNK_0xec96
{
  _ro_PTS_rc_(); // (PTS) case
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  _ex__3(); // !_3
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xeca8: WORD 'UNK_0xecaa' codep=0x1d29 parp=0xecaa
// ================================================
// 0xecaa: db 0x56 0x3a 0x20 0x70 'V: p'

// ================================================
// 0xecae: WORD 'UNK_0xecb0' codep=0x224c parp=0xecb0
// ================================================

void UNK_0xecb0() // UNK_0xecb0
{
  Push(Read16(regsp)); // DUP
  UNK_0xea27(); // UNK_0xea27
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(cc__5); // 5
  SWAP(); // SWAP
  _dash_(); // -
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x0036);
  Push(Pop() + Pop()); // +
  Push(pp_YBLT); // YBLT size: 2
  _ex__3(); // !_3
  SWAP(); // SWAP
  Push(Pop()-1); // 1-
  Push(0x000a);
  Push(Pop() * Pop()); // *
  OVER(); // OVER
  UNK_0xea27(); // UNK_0xea27
  Push(cc__5); // 5
  SWAP(); // SWAP
  _dash_(); // -
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xeb81); // UNK_0xeb81 size: 0
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  UNK_0xea1b(); // UNK_0xea1b
  Push(0x0069);
  _star__slash_(); // */
  Push(0x0064);
  U_star_(); // U*
  Push(0x0005); Push(0x0000);
  DMAX(); // DMAX
  _2DUP(); // 2DUP
  Push(pp_UNK_0xecaa); // UNK_0xecaa size: 0
  D_ex_(); // D!
  Push(cc__6); // 6
  D_dot_R(); // D.R
  return;

  label1:
  Pop(); Pop();// 2DROP
  Push2Words("NULL");
  Push(pp_UNK_0xecaa); // UNK_0xecaa size: 0
  D_ex_(); // D!
}


// ================================================
// 0xed1e: WORD 'UNK_0xed20' codep=0x224c parp=0xed20
// ================================================

void UNK_0xed20() // UNK_0xed20
{
  _gt_R(); // >R
  _at_CRS(); // @CRS
  R_gt_(); // R>
  _gt_1FONT(); // >1FONT
  Push(pp_XORMODE); // XORMODE size: 2
  OFF(); // OFF
  UNK_0xebb5(); // UNK_0xebb5
  Push(0x0037);
  Push(pp_XBLT); // XBLT size: 2
  _ex__3(); // !_3
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(0x00ae);
  Push(pp_YBLT); // YBLT size: 2
  _ex__3(); // !_3
  Push(0x640e); // IFIELD(UNK_0xe9fd)
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label2;
  _plus_BIT(); // +BIT
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  Push(cc__4); // 4
  _dot_R(); // .R

  label2:
  goto label3;

  label1:
  UNK_0xec78(); // UNK_0xec78
  UNK_0xecb0(); // UNK_0xecb0

  label3:
  _ex_CRS(); // !CRS
}


// ================================================
// 0xed68: WORD 'UNK_0xed6a' codep=0x224c parp=0xed6a
// ================================================

void UNK_0xed6a() // UNK_0xed6a
{
  Push(0x640e); // IFIELD(UNK_0xe9fd)
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  Push(0x0010);
  _st_(); // <
  Push(0x01f4); Push(0x0000);
  UNK_0xe994(); // UNK_0xe994
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(0xfe0c); Push(0xffff);
  UNK_0xe99e(); // UNK_0xe99e
  UNK_0xe9d0(); // UNK_0xe9d0
  Push(1); // 1
  Push(0x0010);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(regsp)); // DUP
  Push(0x640e); // IFIELD(UNK_0xe9fd)
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  Push(0x640e); // IFIELD(UNK_0xe9fd)
  _plus__ex_(); // +!
  Push(0x01f4);
  Push(0x6432); // IFIELD(UNK_0xea11)
  _plus__ex_(); // +!
  LEAVE(); // LEAVE
  goto label3;

  label2:
  Push(Pop()*2); // 2*

  label3:
  i++;
  } while(i<imax); // (LOOP) 0xffdc

  Push(0xc6ba);
  MODULE(); // MODULE
  UNK_0xeaa9(); // UNK_0xeaa9
  return;

  label1:
  Push(1); // 1
  _0MESS(); // 0MESS
  Push(0x640e); // IFIELD(UNK_0xe9fd)
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  Push(0x0010);
  _eq_(); // =
  if (Pop() == 0) goto label4;
  Push(1); // 1
  Push(0x001b);
  CMESS(); // CMESS
  PRINT("NO CARGO POD BAYS AVAILABLE", 27); // (.")
  _ex_CRS(); // !CRS
  goto label5;

  label4:
  UNK_0xe9c6(); // UNK_0xe9c6

  label5:
  UNK_0xeb5b(); // UNK_0xeb5b
  UNK_0xe9b2(); // UNK_0xe9b2
}


// ================================================
// 0xee12: WORD 'UNK_0xee14' codep=0x224c parp=0xee14
// ================================================

void UNK_0xee14() // UNK_0xee14
{
  UNK_0xec78(); // UNK_0xec78
  UNK_0xea27(); // UNK_0xea27
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xee1e: WORD 'UNK_0xee20' codep=0x224c parp=0xee20
// ================================================

void UNK_0xee20() // UNK_0xee20
{
  Push(pp_UNK_0xeb81); // UNK_0xeb81 size: 0
  Push(pp_UNK_0xeb7d); // UNK_0xeb7d size: 0
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(cc__4); // 4
  Push(pp_OCRS); // OCRS size: 2
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x0064);
  U_star_(); // U*
  UNK_0xe994(); // UNK_0xe994
  if (Pop() == 0) goto label1;
  Push(0x0064);
  U_star_(); // U*
  DNEGATE(); // DNEGATE
  UNK_0xe99e(); // UNK_0xe99e
  Push(pp_OCRS); // OCRS size: 2
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_UNK_0xeb7d); // UNK_0xeb7d size: 0
  Push(Read16(Pop())); // @
  UNK_0xec78(); // UNK_0xec78
  SWAP(); // SWAP
  Pop(); // DROP
  Push(0x0064);
  OVER(); // OVER
  C_ex_(); // C!
  Push(Pop()+1); // 1+
  C_ex_(); // C!
  Push(pp_OCRS); // OCRS size: 2
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xeb7d); // UNK_0xeb7d size: 0
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(h); // I
  Push(cc__3); // 3
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(0x6421); // IFIELD(UNK_0xea0c)
  Push(Read16(Pop())); // @
  Push(0x00fa);
  _st_(); // <
  if (Pop() == 0) goto label3;
  Push(0); // 0
  _0MESS(); // 0MESS
  Push(1); // 1
  _0MESS(); // 0MESS
  Push(0); // 0
  Push(0x0025);
  CMESS(); // CMESS
  PRINT("WARNING: ARMOR CLASS EQUIVALENCY WILL", 37); // (.")
  _ex_CRS(); // !CRS
  Push(1); // 1
  Push(0x0021);
  CMESS(); // CMESS
  PRINT("BE LOWER DUE TO UNREPAIRED DAMAGE", 33); // (.")
  _ex_CRS(); // !CRS
  UNK_0xeb5b(); // UNK_0xeb5b
  UNK_0xeb5b(); // UNK_0xeb5b
  Push(0); // 0
  _0MESS(); // 0MESS
  Push(1); // 1
  _0MESS(); // 0MESS

  label3:
  Push(Pop()>>1); // 2/
  Push(0x6421); // IFIELD(UNK_0xea0c)
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  Push(0x6400); // IFIELD(UNK_0xe9da)
  UNK_0xea27(); // UNK_0xea27
  Push(Read16(regsp)); // DUP
  Push(Pop()+1); // 1+
  Push(0x00fa);
  Push(Pop() * Pop()); // *
  _star__slash_(); // */
  Push(0x6400); // IFIELD(UNK_0xe9da)
  Push(Pop()+1); // 1+
  C_ex_(); // C!

  label2:
  R_gt_(); // R>
  UNK_0xec96(); // UNK_0xec96
  Push(0xc6cc);
  MODULE(); // MODULE
  UNK_0xeadd(); // UNK_0xeadd
  UNK_0xe9d0(); // UNK_0xe9d0
  Push(1); // 1
  return;

  label1:
  Pop(); // DROP
  UNK_0xe9c6(); // UNK_0xe9c6
  Push(pp_XORMODE); // XORMODE size: 2
  ON_3(); // ON_3
  Push(0); // 0
}


// ================================================
// 0xef50: WORD 'UNK_0xef52' codep=0x224c parp=0xef52
// ================================================

void UNK_0xef52() // UNK_0xef52
{

  label6:
  XYSCAN(); // XYSCAN
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(cc__dash_1); // -1
  Push(Pop() * Pop()); // *
  Push(pp_NCRS); // NCRS size: 2
  _plus__ex_(); // +!
  Push(pp_NCRS); // NCRS size: 2
  Push(Read16(Pop())); // @
  Push(pp_OCRS); // OCRS size: 2
  Push(Read16(Pop())); // @
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_NCRS); // NCRS size: 2
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(cc__5); // 5
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  BLT(); // BLT
  Push(0x0060);
  Push(pp_NCRS); // NCRS size: 2
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(pp_OCRS); // OCRS size: 2
  _ex__3(); // !_3
  Push(0x000a);
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(pp_YBLT); // YBLT size: 2
  _ex__3(); // !_3
  BLT(); // BLT
  goto label3;

  label2:
  Push(pp_OCRS); // OCRS size: 2
  Push(Read16(Pop())); // @
  Push(pp_NCRS); // NCRS size: 2
  _ex__3(); // !_3

  label3:
  Push(0); // 0
  goto label4;

  label1:
  Pop(); // DROP
  Push(1); // 1

  label4:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label5;
  Pop(); // DROP
  UNK_0xee20(); // UNK_0xee20

  label5:
  if (Pop() == 0) goto label6;
  Push(pp_XORMODE); // XORMODE size: 2
  ON_3(); // ON_3
  Push(pp_FQUIT); // FQUIT size: 2
  OFF(); // OFF
}


// ================================================
// 0xefca: WORD 'UNK_0xefcc' codep=0x224c parp=0xefcc
// ================================================

void UNK_0xefcc() // UNK_0xefcc
{
  Push(pp_OCRS); // OCRS size: 2
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xeb7d); // UNK_0xeb7d size: 0
  _ex__3(); // !_3
  UNK_0xee14(); // UNK_0xee14
  if (Pop() == 0) goto label2;
  Push(1); // 1
  _0MESS(); // 0MESS
  Push(1); // 1
  Push(0x000e);
  CMESS(); // CMESS
  PRINT("DE-EQUIP FIRST", 14); // (.")
  _ex_CRS(); // !CRS
  UNK_0xeb5b(); // UNK_0xeb5b
  UNK_0xe9b2(); // UNK_0xe9b2
  goto label3;

  label2:
  _at_CRS(); // @CRS
  Push(0x000e);
  Push(0x0060);
  POS_dot_(); // POS.
  Push(0x001d);
  Push(pp_WBLT); // WBLT size: 2
  _ex__3(); // !_3
  Push(pp_NCRS); // NCRS size: 2
  OFF(); // OFF
  Push(pp_OCRS); // OCRS size: 2
  OFF(); // OFF
  Push(pp_XORMODE); // XORMODE size: 2
  ON_3(); // ON_3
  Push(pp_CRSCOLO); // CRSCOLO size: 2
  Push(Read16(Pop())); // @
  _ex_COLOR(); // !COLOR
  BLT(); // BLT
  UNK_0xef52(); // UNK_0xef52
  BLT(); // BLT
  _ex_CRS(); // !CRS

  label3:
  return;

  label1:
  UNK_0xed6a(); // UNK_0xed6a
}


// ================================================
// 0xf03f: WORD 'UNK_0xf041' codep=0x224c parp=0xf041
// ================================================

void UNK_0xf041() // UNK_0xf041
{
  Push(0x6432); // IFIELD(UNK_0xea11)
  Push(Read16(Pop())); // @
  Push(0x01f3);
  _gt_(); // >
  Push(0x640e); // IFIELD(UNK_0xe9fd)
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(1); // 1
  Push(0x0010);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  BIT(); // BIT
  Push(0x640e); // IFIELD(UNK_0xe9fd)
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  Push(0x6432); // IFIELD(UNK_0xea11)
  Push(Read16(Pop())); // @
  Push(0x01f3);
  _gt_(); // >
  Push(Pop() * Pop()); // *
  if (Pop() == 0) goto label2;
  Push(i); // I
  BIT(); // BIT
  Push(cc__dash_1); // -1
  Push(Pop() * Pop()); // *
  Push(0x640e); // IFIELD(UNK_0xe9fd)
  _plus__ex_(); // +!
  Push(0x01f4); Push(0x0000);
  UNK_0xe99e(); // UNK_0xe99e
  Push(0xc6ba);
  MODULE(); // MODULE
  UNK_0xeaa9(); // UNK_0xeaa9
  UNK_0xe9d0(); // UNK_0xe9d0
  LEAVE(); // LEAVE
  Push(0xfe0c);
  Push(0x6432); // IFIELD(UNK_0xea11)
  _plus__ex_(); // +!

  label2:
  Push(cc__dash_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffba

  return;

  label1:
  Push(0x640e); // IFIELD(UNK_0xe9fd)
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(1); // 1
  _0MESS(); // 0MESS
  Push(1); // 1
  Push(0x0010);
  CMESS(); // CMESS
  PRINT("POD IS NOT EMPTY", 16); // (.")
  _ex_CRS(); // !CRS
  UNK_0xeb5b(); // UNK_0xeb5b
  UNK_0xe9b2(); // UNK_0xe9b2
}


// ================================================
// 0xf0d8: WORD 'UNK_0xf0da' codep=0x224c parp=0xf0da
// ================================================

void UNK_0xf0da() // UNK_0xf0da
{
  Push(pp_OCRS); // OCRS size: 2
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(pp_UNK_0xecaa); // UNK_0xecaa size: 0
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  UNK_0xec78(); // UNK_0xec78
  Push(Read16(regsp)); // DUP
  Push(0x6400); // IFIELD(UNK_0xe9da)
  _eq_(); // =
  OVER(); // OVER
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  _ex__3(); // !_3
  Pop(); // DROP
  Push(pp_OCRS); // OCRS size: 2
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _eq_(); // =
  Push(0x00fa);
  Push(Pop() * Pop()); // *
  Push(0x6421); // IFIELD(UNK_0xea0c)
  Push(Read16(Pop())); // @
  MIN(); // MIN
  Push(pp_OCRS); // OCRS size: 2
  Push(Read16(Pop())); // @
  UNK_0xec96(); // UNK_0xec96
  Push(pp_UNK_0xecaa); // UNK_0xecaa size: 0
  _2_at_(); // 2@
  UNK_0xe99e(); // UNK_0xe99e
  Push(0xc6cc);
  MODULE(); // MODULE
  UNK_0xeadd(); // UNK_0xeadd
  UNK_0xe9d0(); // UNK_0xe9d0
  Push(pp_OCRS); // OCRS size: 2
  Push(Read16(Pop())); // @
  UNK_0xed20(); // UNK_0xed20
  goto label3;

  label2:
  Pop(); // DROP

  label3:
  return;

  label1:
  UNK_0xf041(); // UNK_0xf041
  Push(pp_OCRS); // OCRS size: 2
  Push(Read16(Pop())); // @
  UNK_0xed20(); // UNK_0xed20
}


// ================================================
// 0xf146: WORD 'UNK_0xf148' codep=0x1d29 parp=0xf148
// ================================================
// 0xf148: db 0x3a 0x20 ': '

// ================================================
// 0xf14a: WORD 'UNK_0xf14c' codep=0x224c parp=0xf14c
// ================================================

void UNK_0xf14c() // UNK_0xf14c
{
  UNK_0xe9b2(); // UNK_0xe9b2
  SetColor("BLUE");
  UNK_0xeb1b(); // UNK_0xeb1b
  _at_CRS(); // @CRS
  Push(pp_NCRS); // NCRS size: 2
  OFF(); // OFF
  Push(pp_OCRS); // OCRS size: 2
  OFF(); // OFF
  Push(pp_UNK_0xea4a); // UNK_0xea4a size: 0
  BLD_dash_CRS(); // BLD-CRS
  Push(0); // 0
  Push(pp_UNK_0xf148); // UNK_0xf148 size: 0
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xebe9(); // UNK_0xebe9
  goto label2;

  label1:
  UNK_0xed20(); // UNK_0xed20

  label2:
  XYSCAN(); // XYSCAN
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label3;
  Push(cc__dash_1); // -1
  Push(Pop() * Pop()); // *
  Push(pp_NCRS); // NCRS size: 2
  _plus__ex_(); // +!
  Push(pp_UNK_0xea4a); // UNK_0xea4a size: 0
  SET_dash_CRS(); // SET-CRS
  if (Pop() == 0) goto label4;
  Push(pp_OCRS); // OCRS size: 2
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf148); // UNK_0xf148 size: 0
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label5;
  UNK_0xebe9(); // UNK_0xebe9
  goto label4;

  label5:
  UNK_0xed20(); // UNK_0xed20

  label4:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label6;
  Push(pp_UNK_0xf148); // UNK_0xf148 size: 0
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label7;
  UNK_0xefcc(); // UNK_0xefcc
  goto label6;

  label7:
  UNK_0xf0da(); // UNK_0xf0da

  label6:
  goto label8;

  label3:
  Pop(); // DROP

  label8:
  _ask_QUIT(); // ?QUIT
  if (Pop() == 0) goto label2;
  _gt_1FONT(); // >1FONT
  UNK_0xebb5(); // UNK_0xebb5
  SetColor("BLACK");
  UNK_0xeb1b(); // UNK_0xeb1b
  Push(pp_UNK_0xea4a); // UNK_0xea4a size: 0
  BLD_dash_CRS(); // BLD-CRS
  _ex_CRS(); // !CRS
  Push(1); // 1
  _0MESS(); // 0MESS
}


// ================================================
// 0xf1d4: WORD 'UNK_0xf1d6' codep=0x224c parp=0xf1d6
// ================================================

void UNK_0xf1d6() // UNK_0xf1d6
{
  _gt_R(); // >R
  Push(h); // I
  _ro_PARTADDR_rc_(); // (PARTADDR) case
  UNK_0xea27(); // UNK_0xea27
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0x000a);
  SWAP(); // SWAP
  Push(Pop()*2); // 2*
  _dash_(); // -
  Push(pp_UNK_0xeb81); // UNK_0xeb81 size: 0
  Push(Pop() + Pop()); // +
  Push(h); // I
  Push(Pop()-1); // 1-
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0x0064);
  Push(h); // I
  _ro_PARTADDR_rc_(); // (PARTADDR) case
  UNK_0xea1b(); // UNK_0xea1b
  _dash_(); // -
  Push(0x0069);
  Push(0x0064);
  _star__slash_(); // */
  U_star_(); // U*
  goto label2;

  label1:
  Push2Words("NULL");

  label2:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xf224: WORD 'UNK_0xf226' codep=0x224c parp=0xf226
// ================================================

void UNK_0xf226() // UNK_0xf226
{
  Push2Words("NULL");
  Push(cc__6); // 6
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xf1d6(); // UNK_0xf1d6
  D_plus_(); // D+
  i++;
  } while(i<imax); // (LOOP) 0xfff8

  Push(cc__3); // 3
  UNK_0xf1d6(); // UNK_0xf1d6
  D_dash_(); // D-
  Push(0x0064);
  Push(0x6400); // IFIELD(UNK_0xe9da)
  UNK_0xea1b(); // UNK_0xea1b
  _dash_(); // -
  Push(0x00fa);
  U_star_(); // U*
  D_plus_(); // D+
  Push(0x00c8);
  Push(0x6404); // IFIELD(UNK_0xe9e4)
  UNK_0xea1b(); // UNK_0xea1b
  Push(0x6406); // IFIELD(UNK_0xe9e9)
  UNK_0xea1b(); // UNK_0xea1b
  Push(Pop() + Pop()); // +
  _dash_(); // -
  Push(0x0064);
  U_star_(); // U*
  D_plus_(); // D+
  Push(0x6400); // IFIELD(UNK_0xe9da)
  UNK_0xea27(); // UNK_0xea27
  Push(Pop()+1); // 1+
  Push(0x00fa);
  Push(Pop() * Pop()); // *
  Push(0x6421); // IFIELD(UNK_0xea0c)
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(cc__4); // 4
  U_star_(); // U*
  D_plus_(); // D+
}


// ================================================
// 0xf286: WORD 'UNK_0xf288' codep=0x224c parp=0xf288
// ================================================

void UNK_0xf288() // UNK_0xf288
{
  _gt_R(); // >R
  _gt_R(); // >R
  Push(0); // 0
  Push(0x0026);
  CMESS(); // CMESS
  PRINT("COST TO REPAIR ENTIRE SHIP: ", 28); // (.")
  R_gt_(); // R>
  R_gt_(); // R>
  D_dot_(); // D.
  PRINT(" MU", 3); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf2c3: WORD 'UNK_0xf2c5' codep=0x224c parp=0xf2c5
// ================================================

void UNK_0xf2c5() // UNK_0xf2c5
{
  UNK_0xf288(); // UNK_0xf288
  Push(1); // 1
  Push(0x0021);
  CMESS(); // CMESS
  PRINT("SHALL WE REPAIR THE SHIP?  [N Y]", 32); // (.")
  _ex_CRS(); // !CRS
  Y_slash_N(); // Y/N
}


// ================================================
// 0xf2f8: WORD 'UNK_0xf2fa' codep=0x224c parp=0xf2fa
// ================================================

void UNK_0xf2fa() // UNK_0xf2fa
{
  DNEGATE(); // DNEGATE
  UNK_0xe99e(); // UNK_0xe99e
  Push(0x6418); // IFIELD(UNK_0xea02)
  Push(cc__7); // 7
  Push(0); // 0
  FILL_1(); // FILL_1
  Push(pp__ask_REPAIR); // ?REPAIR size: 2
  OFF(); // OFF
  Push(0x000e);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x6400); // IFIELD(UNK_0xe9da)
  Push(i); // I
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(i); // I
  UNK_0xea27(); // UNK_0xea27
  Push(i); // I
  Push(Pop()+1); // 1+
  C_ex_(); // C!
  Push(0x0064);
  R_gt_(); // R>
  C_ex_(); // C!
  Push(2); // 2
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffe2

  Push(0x6400); // IFIELD(UNK_0xe9da)
  UNK_0xea27(); // UNK_0xea27
  Push(Pop()+1); // 1+
  Push(0x00fa);
  Push(Pop() * Pop()); // *
  Push(0x6421); // IFIELD(UNK_0xea0c)
  _ex__3(); // !_3
}


// ================================================
// 0xf344: WORD 'UNK_0xf346' codep=0x224c parp=0xf346
// ================================================

void UNK_0xf346() // UNK_0xf346
{
  Push(0); // 0
  _0MESS(); // 0MESS
  Push(1); // 1
  _0MESS(); // 0MESS
  UNK_0xf226(); // UNK_0xf226
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  _2DUP(); // 2DUP
  UNK_0xe994(); // UNK_0xe994
  if (Pop() == 0) goto label2;
  _2DUP(); // 2DUP
  UNK_0xf2c5(); // UNK_0xf2c5
  if (Pop() == 0) goto label3;
  UNK_0xf2fa(); // UNK_0xf2fa
  goto label4;

  label3:
  Pop(); Pop();// 2DROP

  label4:
  goto label5;

  label2:
  UNK_0xf288(); // UNK_0xf288
  Push(1); // 1
  Push(0x0012);
  CMESS(); // CMESS
  UNK_0xe9bc(); // UNK_0xe9bc
  _ex_CRS(); // !CRS
  UNK_0xeb5b(); // UNK_0xeb5b

  label5:
  goto label6;

  label1:
  Pop(); Pop();// 2DROP
  Push(0); // 0
  Push(0x0015);
  CMESS(); // CMESS
  PRINT("NO REPAIRS ARE NEEDED", 21); // (.")
  _ex_CRS(); // !CRS
  UNK_0xeb5b(); // UNK_0xeb5b

  label6:
  Push(1); // 1
  _0MESS(); // 0MESS
  UNK_0xe9d0(); // UNK_0xe9d0
}


// ================================================
// 0xf3b6: WORD 'UNK_0xf3b8' codep=0x224c parp=0xf3b8
// ================================================

void UNK_0xf3b8() // UNK_0xf3b8
{
  PRINT("TYPE", 4); // (.")
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT("SHIP NAME: ISS ", 15); // (.")
}


// ================================================
// 0xf3d5: WORD 'UNK_0xf3d7' codep=0x224c parp=0xf3d7
// ================================================

void UNK_0xf3d7() // UNK_0xf3d7
{
  Push(0); // 0
  SWAP(); // SWAP
  CMESS(); // CMESS
  PRINT("SHIP IS NAMED: ISS ", 19); // (.")
  Push(0x6423); // IFIELD(%NAME)
  _do__dot_(); // $.
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf3fb: WORD 'UNK_0xf3fd' codep=0x224c parp=0xf3fd
// ================================================

void UNK_0xf3fd() // UNK_0xf3fd
{
  Push(pp__dash_AIN); // -AIN size: 2
  OFF(); // OFF
  Push(0); // 0
  _0MESS(); // 0MESS
  Push(1); // 1
  _0MESS(); // 0MESS
  Push(0x6423); // IFIELD(%NAME)
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0x0013);
  Push(Pop() + Pop()); // +
  UNK_0xf3d7(); // UNK_0xf3d7
  Push(1); // 1
  Push(0x0026);
  CMESS(); // CMESS

  UNK_0x3f3b(" NEW ");
  goto label2;

  label1:
  Push(0); // 0
  Push(0x0022);
  CMESS(); // CMESS

  UNK_0x3f3b(" ");

  label2:
  UNK_0xf3b8(); // UNK_0xf3b8
  Push(pp_XORMODE); // XORMODE size: 2
  ON_3(); // ON_3
  Push(pp__dash_AIN); // -AIN size: 2
  OFF(); // OFF
  Push(0x000e);
  UNK_0xe9a8(); // UNK_0xe9a8
  Push(0x6423); // IFIELD(%NAME)
  _do__ex_(); // $!
  _ex_CRS(); // !CRS
  Push(0); // 0
  _0MESS(); // 0MESS
  Push(1); // 1
  _0MESS(); // 0MESS
  Push(0x6423); // IFIELD(%NAME)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0013);
  Push(Pop() + Pop()); // +
  UNK_0xf3d7(); // UNK_0xf3d7
  UNK_0xeb5b(); // UNK_0xeb5b
  UNK_0xe9d0(); // UNK_0xe9d0
}


// ================================================
// 0xf46b: WORD 'UNK_0xf46d' codep=0x224c parp=0xf46d
// ================================================

void UNK_0xf46d() // UNK_0xf46d
{
  Push(pp_UNK_0xf148); // UNK_0xf148 size: 0
  ON_3(); // ON_3
  UNK_0xf14c(); // UNK_0xf14c
}


// ================================================
// 0xf475: WORD 'UNK_0xf477' codep=0x224c parp=0xf477
// ================================================

void UNK_0xf477() // UNK_0xf477
{
  Push(pp_UNK_0xf148); // UNK_0xf148 size: 0
  OFF(); // OFF
  UNK_0xf14c(); // UNK_0xf14c
}


// ================================================
// 0xf47f: WORD 'CONFIG-FUNCTION' codep=0x4a4f parp=0xf493
// ================================================

void CONFIG_dash_FUNCTION() // CONFIG-FUNCTION
{
  switch(Pop()) // CONFIG-FUNCTION
  {
  case 0:
    UNK_0xf46d(); // UNK_0xf46d
    break;
  case 1:
    UNK_0xf477(); // UNK_0xf477
    break;
  case 2:
    UNK_0xf346(); // UNK_0xf346
    break;
  case 3:
    UNK_0xf3fd(); // UNK_0xf3fd
    break;
  case 4:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf4ab: WORD '(U-CONFIG)' codep=0x224c parp=0xf4ba
// ================================================
// entry

void _ro_U_dash_CONFIG_rc_() // (U-CONFIG)
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xe976(); // UNK_0xe976
  SetColor("WHITE");
  SetColor("GREY1");
  SetColor("DK-GREEN");
  _ask_MRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO size: 2
  _ex__3(); // !_3
  Push(pp_OCRS); // OCRS size: 2
  OFF(); // OFF
  Push(pp_NCRS); // NCRS size: 2
  OFF(); // OFF
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  Push(0xc6f8);
  MODULE(); // MODULE
  UNK_0xeadd(); // UNK_0xeadd
  Push(pp_UNK_0xea33); // UNK_0xea33 size: 0
  BLD_dash_CRS(); // BLD-CRS
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES

  label3:
  XYSCAN(); // XYSCAN
  Push(pp_NCRS); // NCRS size: 2
  _plus__ex_(); // +!
  Pop(); // DROP
  Push(pp_UNK_0xea33); // UNK_0xea33 size: 0
  SET_dash_CRS(); // SET-CRS
  Pop(); // DROP
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label1;
  Push(0); // 0
  Push(pp_OCRS); // OCRS size: 2
  Push(Read16(Pop())); // @
  CONFIG_dash_FUNCTION(); // CONFIG-FUNCTION case
  goto label2;

  label1:
  Push(0); // 0

  label2:
  if (Pop() == 0) goto label3;
  Push(1); // 1
  UNK_0xe980(); // UNK_0xe980
  ICLOSE(); // ICLOSE
}

// 0xf516: db 0x43 0x4f 0x4e 0x46 0x49 0x47 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x53 0x48 0x49 0x50 0x2d 0x43 0x4f 0x4e 0x46 0x49 0x47 0x55 0x52 0x41 0x54 0x49 0x4f 0x4e 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x29 0x5f 0x5f 0x31 0x38 0x38 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'CONFIG-VOC______________________for SHIP-CONFIGURATION------- )__188______ '
  