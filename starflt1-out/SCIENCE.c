// ====== OVERLAY 'SCIENCE' ======
// store offset = 0xe5f0
// overlay size   = 0x0f70

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe606  codep:0x1d29 parp:0xe606 size:0x0002 C-string:'UNK_0xe606'
//      UNK_0xe60a  codep:0x744d parp:0xe60a size:0x0003 C-string:'UNK_0xe60a'
//      UNK_0xe60f  codep:0x744d parp:0xe60f size:0x0003 C-string:'UNK_0xe60f'
//      UNK_0xe614  codep:0x744d parp:0xe614 size:0x0003 C-string:'UNK_0xe614'
//      UNK_0xe619  codep:0x744d parp:0xe619 size:0x0003 C-string:'UNK_0xe619'
//      UNK_0xe61e  codep:0x744d parp:0xe61e size:0x0003 C-string:'UNK_0xe61e'
//      UNK_0xe623  codep:0x744d parp:0xe623 size:0x0003 C-string:'UNK_0xe623'
//      UNK_0xe628  codep:0x744d parp:0xe628 size:0x0012 C-string:'UNK_0xe628'
//      UNK_0xe63c  codep:0x73ea parp:0xe63c size:0x0006 C-string:'UNK_0xe63c'
//      UNK_0xe644  codep:0x73ea parp:0xe644 size:0x0006 C-string:'UNK_0xe644'
//      UNK_0xe64c  codep:0x73ea parp:0xe64c size:0x0006 C-string:'UNK_0xe64c'
//      UNK_0xe654  codep:0x73ea parp:0xe654 size:0x0006 C-string:'UNK_0xe654'
//      UNK_0xe65c  codep:0x744d parp:0xe65c size:0x0003 C-string:'UNK_0xe65c'
//      UNK_0xe661  codep:0x73ea parp:0xe661 size:0x0013 C-string:'UNK_0xe661'
//      UNK_0xe676  codep:0x73ea parp:0xe676 size:0x0006 C-string:'UNK_0xe676'
//      UNK_0xe67e  codep:0x73ea parp:0xe67e size:0x0006 C-string:'UNK_0xe67e'
//      UNK_0xe686  codep:0x73ea parp:0xe686 size:0x0006 C-string:'UNK_0xe686'
//      UNK_0xe68e  codep:0x73ea parp:0xe68e size:0x0006 C-string:'UNK_0xe68e'
//      UNK_0xe696  codep:0x73ea parp:0xe696 size:0x0006 C-string:'UNK_0xe696'
//      UNK_0xe69e  codep:0x224c parp:0xe69e size:0x00a2 C-string:'UNK_0xe69e'
//      UNK_0xe742  codep:0x224c parp:0xe742 size:0x0010 C-string:'UNK_0xe742'
//      UNK_0xe754  codep:0x224c parp:0xe754 size:0x000a C-string:'UNK_0xe754'
//      UNK_0xe760  codep:0x224c parp:0xe760 size:0x0052 C-string:'UNK_0xe760'
//          ?HEAVY  codep:0x224c parp:0xe7bd size:0x0010 C-string:'_ask_HEAVY'
//      UNK_0xe7cf  codep:0x224c parp:0xe7cf size:0x000e C-string:'UNK_0xe7cf'
//       .STARDATE  codep:0x224c parp:0xe7eb size:0x007e C-string:'_dot_STARDATE'
//      UNK_0xe86b  codep:0x224c parp:0xe86b size:0x0021 C-string:'UNK_0xe86b'
//      UNK_0xe88e  codep:0x224c parp:0xe88e size:0x0024 C-string:'UNK_0xe88e'
//      UNK_0xe8b4  codep:0x224c parp:0xe8b4 size:0x0018 C-string:'UNK_0xe8b4'
//      UNK_0xe8ce  codep:0x224c parp:0xe8ce size:0x003e C-string:'UNK_0xe8ce'
//      UNK_0xe90e  codep:0x224c parp:0xe90e size:0x0040 C-string:'UNK_0xe90e'
//      UNK_0xe950  codep:0x224c parp:0xe950 size:0x0022 C-string:'UNK_0xe950'
//      UNK_0xe974  codep:0x224c parp:0xe974 size:0x002a C-string:'UNK_0xe974'
//      UNK_0xe9a0  codep:0x224c parp:0xe9a0 size:0x0038 C-string:'UNK_0xe9a0'
//      UNK_0xe9da  codep:0x224c parp:0xe9da size:0x004a C-string:'UNK_0xe9da'
//      UNK_0xea26  codep:0x224c parp:0xea26 size:0x0006 C-string:'UNK_0xea26'
//      UNK_0xea2e  codep:0x1d29 parp:0xea2e size:0x0010 C-string:'UNK_0xea2e'
//      UNK_0xea40  codep:0x224c parp:0xea40 size:0x0010 C-string:'UNK_0xea40'
//      UNK_0xea52  codep:0x224c parp:0xea52 size:0x00a6 C-string:'UNK_0xea52'
//      .STAT-TEXT  codep:0x224c parp:0xeb07 size:0x00f7 C-string:'_dot_STAT_dash_TEXT'
//      UNK_0xec00  codep:0x224c parp:0xec00 size:0x000a C-string:'UNK_0xec00'
//       (/STATUS)  codep:0x224c parp:0xec18 size:0x000a C-string:'_ro__slash_STATUS_rc_'
//      UNK_0xec24  codep:0x1d29 parp:0xec24 size:0x0002 C-string:'UNK_0xec24'
//      UNK_0xec28  codep:0x1d29 parp:0xec28 size:0x0002 C-string:'UNK_0xec28'
//      UNK_0xec2c  codep:0x1d29 parp:0xec2c size:0x0008 C-string:'UNK_0xec2c'
//      UNK_0xec36  codep:0x224c parp:0xec36 size:0x0038 C-string:'UNK_0xec36'
//      UNK_0xec70  codep:0x224c parp:0xec70 size:0x0042 C-string:'UNK_0xec70'
//      UNK_0xecb4  codep:0x224c parp:0xecb4 size:0x007a C-string:'UNK_0xecb4'
//      UNK_0xed30  codep:0x224c parp:0xed30 size:0x009e C-string:'UNK_0xed30'
//      UNK_0xedd0  codep:0x224c parp:0xedd0 size:0x00b4 C-string:'UNK_0xedd0'
//      UNK_0xee86  codep:0x224c parp:0xee86 size:0x0030 C-string:'UNK_0xee86'
//      UNK_0xeeb8  codep:0x224c parp:0xeeb8 size:0x0026 C-string:'UNK_0xeeb8'
//      UNK_0xeee0  codep:0x224c parp:0xeee0 size:0x001c C-string:'UNK_0xeee0'
//      UNK_0xeefe  codep:0x224c parp:0xeefe size:0x000c C-string:'UNK_0xeefe'
//      UNK_0xef0c  codep:0x1d29 parp:0xef0c size:0x0009 C-string:'UNK_0xef0c'
//      UNK_0xef17  codep:0x224c parp:0xef17 size:0x0018 C-string:'UNK_0xef17'
//      UNK_0xef31  codep:0x224c parp:0xef31 size:0x00a0 C-string:'UNK_0xef31'
//      UNK_0xefd3  codep:0x1d29 parp:0xefd3 size:0x0005 C-string:'UNK_0xefd3'
//      UNK_0xefda  codep:0x1d29 parp:0xefda size:0x0005 C-string:'UNK_0xefda'
//      UNK_0xefe1  codep:0x1d29 parp:0xefe1 size:0x0002 C-string:'UNK_0xefe1'
//      UNK_0xefe5  codep:0x1d29 parp:0xefe5 size:0x0002 C-string:'UNK_0xefe5'
//      UNK_0xefe9  codep:0x224c parp:0xefe9 size:0x0058 C-string:'UNK_0xefe9'
//      UNK_0xf043  codep:0x224c parp:0xf043 size:0x0058 C-string:'UNK_0xf043'
//      UNK_0xf09d  codep:0x224c parp:0xf09d size:0x001e C-string:'UNK_0xf09d'
//      UNK_0xf0bd  codep:0x224c parp:0xf0bd size:0x000f C-string:'UNK_0xf0bd'
//      UNK_0xf0ce  codep:0x224c parp:0xf0ce size:0x000e C-string:'UNK_0xf0ce'
//      UNK_0xf0de  codep:0x224c parp:0xf0de size:0x008b C-string:'UNK_0xf0de'
//      UNK_0xf16b  codep:0x224c parp:0xf16b size:0x0066 C-string:'UNK_0xf16b'
//      UNK_0xf1d3  codep:0x224c parp:0xf1d3 size:0x0064 C-string:'UNK_0xf1d3'
//      UNK_0xf239  codep:0x224c parp:0xf239 size:0x008f C-string:'UNK_0xf239'
//      UNK_0xf2ca  codep:0x224c parp:0xf2ca size:0x0010 C-string:'UNK_0xf2ca'
//      UNK_0xf2dc  codep:0x224c parp:0xf2dc size:0x00b2 C-string:'UNK_0xf2dc'
//      UNK_0xf390  codep:0x224c parp:0xf390 size:0x000a C-string:'UNK_0xf390'
//      UNK_0xf39c  codep:0x224c parp:0xf39c size:0x0064 C-string:'UNK_0xf39c'
//      UNK_0xf402  codep:0x224c parp:0xf402 size:0x0008 C-string:'UNK_0xf402'
//       .READINGS  codep:0x4a4f parp:0xf418 size:0x000c C-string:'_dot_READINGS'
//      (/SENSORS)  codep:0x224c parp:0xf433 size:0x0000 C-string:'_ro__slash_SENSORS_rc_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xe606[2] = {0x3a, 0x20}; // UNK_0xe606
unsigned char UNK_0xea2e[16] = {0xe7, 0x31, 0x30, 0x9e, 0x0c, 0xc3, 0xc3, 0x30, 0xff, 0x1e, 0xf3, 0xff, 0x3c, 0xcf, 0x00, 0xc0}; // UNK_0xea2e
unsigned char UNK_0xec24[2] = {0x3a, 0x20}; // UNK_0xec24
unsigned char UNK_0xec28[2] = {0x3a, 0x20}; // UNK_0xec28
unsigned char UNK_0xec2c[8] = {0x81, 0xc3, 0x81, 0x81, 0x81, 0x81, 0xc3, 0x81}; // UNK_0xec2c
unsigned char UNK_0xef0c[9] = {0x44, 0xcc, 0xdd, 0x33, 0x77, 0x99, 0x88, 0xaa, 0x55}; // UNK_0xef0c
unsigned char UNK_0xefd3[5] = {0x01, 0x01, 0x16, 0x1b, 0x00}; // UNK_0xefd3
unsigned char UNK_0xefda[5] = {0x02, 0x01, 0x16, 0x1b, 0x00}; // UNK_0xefda
unsigned char UNK_0xefe1[2] = {0x3a, 0x20}; // UNK_0xefe1
unsigned char UNK_0xefe5[2] = {0x3a, 0x20}; // UNK_0xefe5



// 0xe602: db 0xf0 0x00 '  '

// ================================================
// 0xe604: WORD 'UNK_0xe606' codep=0x1d29 parp=0xe606
// ================================================
// 0xe606: db 0x3a 0x20 ': '

// ================================================
// 0xe608: WORD 'UNK_0xe60a' codep=0x744d parp=0xe60a
// ================================================
// 0xe60a: db 0x14 0x11 0x02 '   '

// ================================================
// 0xe60d: WORD 'UNK_0xe60f' codep=0x744d parp=0xe60f
// ================================================
// 0xe60f: db 0x14 0x19 0x02 '   '

// ================================================
// 0xe612: WORD 'UNK_0xe614' codep=0x744d parp=0xe614
// ================================================
// 0xe614: db 0x14 0x30 0x02 ' 0 '

// ================================================
// 0xe617: WORD 'UNK_0xe619' codep=0x744d parp=0xe619
// ================================================
// 0xe619: db 0x14 0x1f 0x02 '   '

// ================================================
// 0xe61c: WORD 'UNK_0xe61e' codep=0x744d parp=0xe61e
// ================================================
// 0xe61e: db 0x14 0x32 0x02 ' 2 '

// ================================================
// 0xe621: WORD 'UNK_0xe623' codep=0x744d parp=0xe623
// ================================================
// 0xe623: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xe626: WORD 'UNK_0xe628' codep=0x744d parp=0xe628
// ================================================
// 0xe628: db 0x14 0x45 0x04 0x4d 0x74 0x14 0x15 0x02 0x4d 0x74 0x10 0x1a 0x01 0x4d 0x74 0x11 0x14 0x03 ' E Mt   Mt   Mt   '

// ================================================
// 0xe63a: WORD 'UNK_0xe63c' codep=0x73ea parp=0xe63c
// ================================================
// 0xe63c: db 0x19 0x1d 0x2a 0x49 0x91 0x64 '  *I d'

// ================================================
// 0xe642: WORD 'UNK_0xe644' codep=0x73ea parp=0xe644
// ================================================
// 0xe644: db 0x19 0x07 0x02 0x49 0x91 0x64 '   I d'

// ================================================
// 0xe64a: WORD 'UNK_0xe64c' codep=0x73ea parp=0xe64c
// ================================================
// 0xe64c: db 0x19 0x18 0x01 0x49 0x91 0x64 '   I d'

// ================================================
// 0xe652: WORD 'UNK_0xe654' codep=0x73ea parp=0xe654
// ================================================
// 0xe654: db 0x19 0x15 0x01 0x49 0x91 0x64 '   I d'

// ================================================
// 0xe65a: WORD 'UNK_0xe65c' codep=0x744d parp=0xe65c
// ================================================
// 0xe65c: db 0x19 0x12 0x02 '   '

// ================================================
// 0xe65f: WORD 'UNK_0xe661' codep=0x73ea parp=0xe661
// ================================================
// 0xe661: db 0x19 0x0c 0x02 0x49 0x91 0x64 0x4d 0x74 0x19 0x14 0x02 0xea 0x73 0x19 0x0e 0x02 0x49 0x91 0x64 '   I dMt    s   I d'

// ================================================
// 0xe674: WORD 'UNK_0xe676' codep=0x73ea parp=0xe676
// ================================================
// 0xe676: db 0x20 0x02 0x02 0x16 0x8f 0x65 '     e'

// ================================================
// 0xe67c: WORD 'UNK_0xe67e' codep=0x73ea parp=0xe67e
// ================================================
// 0xe67e: db 0x20 0x04 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xe684: WORD 'UNK_0xe686' codep=0x73ea parp=0xe686
// ================================================
// 0xe686: db 0x20 0x09 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xe68c: WORD 'UNK_0xe68e' codep=0x73ea parp=0xe68e
// ================================================
// 0xe68e: db 0x20 0x0c 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xe694: WORD 'UNK_0xe696' codep=0x73ea parp=0xe696
// ================================================
// 0xe696: db 0x82 0x00 0x03 0x07 0xa8 0x93 '      '

// ================================================
// 0xe69c: WORD 'UNK_0xe69e' codep=0x224c parp=0xe69e
// ================================================

void UNK_0xe69e() // UNK_0xe69e
{
  _gt_R(); // >R
  Push(h); // I
  Push(0); // 0
  Push(0x0014);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  PRINT("CRITICAL", 8); // (.")
  goto label2;

  label1:
  Push(h); // I
  Push(0x0014);
  Push(0x0032);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;
  PRINT("HEAVY", 5); // (.")
  goto label2;

  label3:
  Push(h); // I
  Push(0x0032);
  Push(0x0050);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label4;
  PRINT("MODERATE", 8); // (.")
  goto label2;

  label4:
  Push(h); // I
  Push(0x0050);
  Push(0x005f);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label5;
  PRINT("SLIGHT", 6); // (.")
  goto label2;

  label5:
  Push(h); // I
  Push(0x005f);
  Push(0x0064);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label6;
  PRINT("MINIMAL", 7); // (.")
  goto label2;

  label6:
  PRINT("NONE", 4); // (.")

  label2:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xe740: WORD 'UNK_0xe742' codep=0x224c parp=0xe742
// ================================================

void UNK_0xe742() // UNK_0xe742
{
  Push(0x0028);
  _st_(); // <
  if (Pop() == 0) return;
  SetColor("PINK");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe752: WORD 'UNK_0xe754' codep=0x224c parp=0xe754
// ================================================

void UNK_0xe754() // UNK_0xe754
{
  SetColor("BLACK");
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe75e: WORD 'UNK_0xe760' codep=0x224c parp=0xe760
// ================================================

void UNK_0xe760() // UNK_0xe760
{
  Push2Words("NULL");
  Push(0x000e);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x6400); // IFIELD(UNK_0xe60a)
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(i); // I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  MAX(); // MAX
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x6400); // IFIELD(UNK_0xe60a)
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(2); // 2
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffd4

  Push(1); // 1
  MAX(); // MAX
  _slash_(); // /
  Push(0x6400); // IFIELD(UNK_0xe60a)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  Push(0x0013);
  _gt_(); // >
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xe7b2: WORD '?HEAVY' codep=0x224c parp=0xe7bd
// ================================================
// entry

void _ask_HEAVY() // ?HEAVY
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xe760(); // UNK_0xe760
  Push(0x0032);
  _st_(); // <
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe7cd: WORD 'UNK_0xe7cf' codep=0x224c parp=0xe7cf
// ================================================

void UNK_0xe7cf() // UNK_0xe7cf
{
  Push(cc__8); // 8
  UNK_0xe754(); // UNK_0xe754
  UNK_0xe760(); // UNK_0xe760
  Push(Read16(regsp)); // DUP
  UNK_0xe742(); // UNK_0xe742
  UNK_0xe69e(); // UNK_0xe69e
}


// ================================================
// 0xe7dd: WORD '.STARDATE' codep=0x224c parp=0xe7eb
// ================================================
// entry

void _dot_STARDATE() // .STARDATE
{
  Push(0x5d81); // pointer to #AUX
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(0x0068);
  Push(0x00b7);
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
  Push(0x000d);
  UNK_0xe754(); // UNK_0xe754
  Push(1); // 1
  Push(0x586e); // pointer to XBLT
  _plus__ex_(); // +!
  Push(0x5e74); // pointer to STARDATE
  Push(Read16(Pop())); // @
  Push(0x012c);
  _slash_MOD(); // /MOD
  Push(0x120c);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x001e);
  _slash_MOD(); // /MOD
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  Push(0); // 0
  _st__n_(); // <#
  _n_(); // #
  _n_(); // #
  _n__gt_(); // #>
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT(".", 1); // (.")
  Push(0x5e66); // pointer to STAR-HR
  Push(Read16(Pop())); // @
  Push(0); // 0
  _st__n_(); // <#
  _n_(); // #
  _n_(); // #
  _n__gt_(); // #>
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT("-", 1); // (.")
  Push(0); // 0
  _st__n_(); // <#
  _n_(); // #
  _n_(); // #
  _n__gt_(); // #>
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT("-", 1); // (.")
  Push(0); // 0
  _dot_R(); // .R
}


// ================================================
// 0xe869: WORD 'UNK_0xe86b' codep=0x224c parp=0xe86b
// ================================================

void UNK_0xe86b() // UNK_0xe86b
{
  Push(cc__7); // 7
  UNK_0xe754(); // UNK_0xe754
  Push(0x6434); // IFIELD(UNK_0xe628)
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  PRINT("UN", 2); // (.")

  label1:
  PRINT("ARMED", 5); // (.")
}


// ================================================
// 0xe88c: WORD 'UNK_0xe88e' codep=0x224c parp=0xe88e
// ================================================

void UNK_0xe88e() // UNK_0xe88e
{
  Push(cc__4); // 4
  UNK_0xe754(); // UNK_0xe754
  Push(0x6434); // IFIELD(UNK_0xe628)
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;

  UNK_0x3f3b("UP");
  goto label2;

  label1:

  UNK_0x3f3b("DOWN");

  label2:
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe8b2: WORD 'UNK_0xe8b4' codep=0x224c parp=0xe8b4
// ================================================

void UNK_0xe8b4() // UNK_0xe8b4
{
  Push(0x559b); // pointer to -END
  Push(Read16(Pop())); // @
  Push(0x004b);
  M_star_(); // M*
  D_gt_(); // D>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  SetColor("PINK");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe8cc: WORD 'UNK_0xe8ce' codep=0x224c parp=0xe8ce
// ================================================

void UNK_0xe8ce() // UNK_0xe8ce
{
  Push(cc__5); // 5
  UNK_0xe754(); // UNK_0xe754
  Push(0x6106); // pointer to 10*END
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  UNK_0xe8b4(); // UNK_0xe8b4
  Push(0x0064);
  U_slash_MOD(); // U/MOD
  Push(0); // 0
  _dot_R(); // .R
  PRINT(".", 1); // (.")
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0); // 0
  _dot_R(); // .R
  Push(0x6106); // pointer to 10*END
  _2_at_(); // 2@
  Push(0x2710); Push(0x0000);
  D_st_(); // D<
  if (Pop() == 0) goto label1;
  _dot_(); // .
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xe90c: WORD 'UNK_0xe90e' codep=0x224c parp=0xe90e
// ================================================

void UNK_0xe90e() // UNK_0xe90e
{
  Push(cc__6); // 6
  UNK_0xe754(); // UNK_0xe754
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x640e); // IFIELD(UNK_0xe619)
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  Push(Pop()+1); // 1+
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  Push(Read16(regsp)); // DUP
  Push(0x6432); // IFIELD(UNK_0xe623)
  Push(Read16(Pop())); // @
  Push(0x60ca); // pointer to 10*CARGO
  _2_at_(); // 2@
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  MAX(); // MAX
  _dash_(); // -
  Push(0x0064);
  ROT(); // ROT
  _star__slash_(); // */
  _dot_(); // .
  PRINT("%", 1); // (.")
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe94e: WORD 'UNK_0xe950' codep=0x224c parp=0xe950
// ================================================

void UNK_0xe950() // UNK_0xe950
{
  SWAP(); // SWAP
  Push(0x0088);
  Push(Pop() + Pop()); // +
  Push(0x0088);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(regsp)); // DUP
  Push(i); // I
  OVER(); // OVER
  Push(Pop()+2); // 2+
  Push(i); // I
  LLINE(); // LLINE
  i++;
  } while(i<imax); // (LOOP) 0xfff2

  Pop(); // DROP
}


// ================================================
// 0xe972: WORD 'UNK_0xe974' codep=0x224c parp=0xe974
// ================================================

void UNK_0xe974() // UNK_0xe974
{
  SWAP(); // SWAP
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  Push(0x00a4);
  SWAP(); // SWAP
  _dash_(); // -
  Push(0x00a3);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(regsp)); // DUP
  Push(i); // I
  OVER(); // OVER
  Push(Pop()+2); // 2+
  Push(i); // I
  LLINE(); // LLINE
  Push(cc__dash_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff0

  Pop(); // DROP
}


// ================================================
// 0xe99e: WORD 'UNK_0xe9a0' codep=0x224c parp=0xe9a0
// ================================================

void UNK_0xe9a0() // UNK_0xe9a0
{
  SetColor("YELLOW");
  _ex_COLOR(); // !COLOR
  Push(0x6421); // IFIELD(UNK_0xe61e)
  Push(Read16(Pop())); // @
  Push(0x0035);
  _slash_(); // /
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0x0065);
  UNK_0xe950(); // UNK_0xe950

  label1:
  Push(0x001c);
  Push(0x6421); // IFIELD(UNK_0xe61e)
  Push(Read16(Pop())); // @
  Push(0x0035);
  _slash_(); // /
  _dash_(); // -
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0x0065);
  UNK_0xe974(); // UNK_0xe974
}


// ================================================
// 0xe9d8: WORD 'UNK_0xe9da' codep=0x224c parp=0xe9da
// ================================================

void UNK_0xe9da() // UNK_0xe9da
{
  Push(0x6408); // IFIELD(UNK_0xe60f)
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  Push(0x0065);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  Push(0x641f); // IFIELD(UNK_0xe614)
  Push(Read16(Pop())); // @
  Push(0x0059);
  _slash_(); // /
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0x0056);
  UNK_0xe950(); // UNK_0xe950

  label1:
  Push(0x001c);
  Push(0x641f); // IFIELD(UNK_0xe614)
  Push(Read16(Pop())); // @
  Push(0x0059);
  _slash_(); // /
  _dash_(); // -
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0x0056);
  UNK_0xe974(); // UNK_0xe974
}


// ================================================
// 0xea24: WORD 'UNK_0xea26' codep=0x224c parp=0xea26
// ================================================

void UNK_0xea26() // UNK_0xea26
{
  UNK_0xe9a0(); // UNK_0xe9a0
  UNK_0xe9da(); // UNK_0xe9da
}


// ================================================
// 0xea2c: WORD 'UNK_0xea2e' codep=0x1d29 parp=0xea2e
// ================================================
// 0xea2e: db 0xe7 0x31 0x30 0x9e 0x0c 0xc3 0xc3 0x30 0xff 0x1e 0xf3 0xff 0x3c 0xcf 0x00 0xc0 ' 10    0    <   '

// ================================================
// 0xea3e: WORD 'UNK_0xea40' codep=0x224c parp=0xea40
// ================================================

void UNK_0xea40() // UNK_0xea40
{
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  _2OVER(); // 2OVER
  LLINE(); // LLINE
  i++;
  } while(i<imax); // (LOOP) 0xfffa

  Pop(); Pop();// 2DROP
}


// ================================================
// 0xea50: WORD 'UNK_0xea52' codep=0x224c parp=0xea52
// ================================================

void UNK_0xea52() // UNK_0xea52
{
  SetColor("GREY1");
  _ex_COLOR(); // !COLOR
  Push(0x0055);
  Push(0x0087);
  Push(0x0055);
  Push(0x00a4);
  Push(0x0059);
  Push(0x00a4);
  Push(0x0059);
  Push(0x0087);
  Push(0x0055);
  Push(0x0087);
  Push(cc__4); // 4
  UNK_0xea40(); // UNK_0xea40
  Push(0x0064);
  Push(0x0087);
  Push(0x0064);
  Push(0x00a4);
  Push(0x0068);
  Push(0x00a4);
  Push(0x0068);
  Push(0x0087);
  Push(0x0064);
  Push(0x0087);
  Push(cc__4); // 4
  UNK_0xea40(); // UNK_0xea40
  _gt_1FONT(); // >1FONT
  Push(0x0056);
  Push(0x0085);
  POS_dot_(); // POS.
  PRINT("S", 1); // (.")
  Push(0x0065);
  Push(0x0085);
  POS_dot_(); // POS.
  PRINT("A", 1); // (.")
  SetColor("BLUE");
  _ex_COLOR(); // !COLOR
  Push(0xea2e); // pointer to UNK_0xea2e
  Push(0x589d); // pointer to ABLT
  _ex__3(); // !_3
  Push(cc__6); // 6
  Push(0x5892); // pointer to WBLT
  _ex__3(); // !_3
  Push(0x0014);
  Push(0x5887); // pointer to LBLT
  _ex__3(); // !_3
  _at_DS(); // @DS
  Push(0x58aa); // pointer to BLTSEG
  _ex__3(); // !_3
  Push(0x005c);
  Push(0x009c);
  POS_dot_(); // POS.
  BLT(); // BLT
}


// ================================================
// 0xeaf8: WORD '.STAT-TEXT' codep=0x224c parp=0xeb07
// ================================================
// entry

void _dot_STAT_dash_TEXT() // .STAT-TEXT
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  CTINIT(); // CTINIT
  _gt_2FONT(); // >2FONT
  Push(0x0069);
  Push(0x00c2);
  POS_dot_(); // POS.
  PRINT("STATUS", 6); // (.")
  _gt_1FONT(); // >1FONT
  SetColor("WHITE");
  SetColor("WHITE");
  SetColor("LT-GREEN");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(0x0055);
  Push(0x00b7);
  POS_dot_(); // POS.
  PRINT("DATE:", 5); // (.")
  _at_CRS(); // @CRS
  Push(1); // 1
  _dot_STARDATE(); // .STARDATE
  _ex_CRS(); // !CRS
  Push(0x0055);
  Push(0x00ad);
  POS_dot_(); // POS.
  PRINT("DAMAGE:", 7); // (.")
  _at_CRS(); // @CRS
  UNK_0xe7cf(); // UNK_0xe7cf
  _ex_CRS(); // !CRS
  Push(0x006b);
  Push(0x00a3);
  POS_dot_(); // POS.
  PRINT("CARGO:", 6); // (.")
  _at_CRS(); // @CRS
  UNK_0xe90e(); // UNK_0xe90e
  _ex_CRS(); // !CRS
  Push(0x006b);
  Push(0x0099);
  POS_dot_(); // POS.
  PRINT("ENERGY:", 7); // (.")
  _at_CRS(); // @CRS
  UNK_0xe8ce(); // UNK_0xe8ce
  _ex_CRS(); // !CRS
  Push(0x006b);
  Push(0x008f);
  POS_dot_(); // POS.
  PRINT("SHIELDS:", 8); // (.")
  _at_CRS(); // @CRS
  UNK_0xe88e(); // UNK_0xe88e
  _ex_CRS(); // !CRS
  Push(0x006b);
  Push(0x0085);
  POS_dot_(); // POS.
  PRINT("WEAP:", 5); // (.")
  _at_CRS(); // @CRS
  UNK_0xe86b(); // UNK_0xe86b
  _ex_CRS(); // !CRS
  _at_CRS(); // @CRS
  UNK_0xea26(); // UNK_0xea26
  _ex_CRS(); // !CRS
  ICLOSE(); // ICLOSE
  Push(0x6106); // pointer to 10*END
  _2_at_(); // 2@
  Push(0x559b); // pointer to -END
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  M_star_(); // M*
  D_st_(); // D<
  if (Pop() == 0) goto label1;
  Push(0x0dac); Push(0x0000);
  goto label2;

  label1:
  Push(0x1d4c); Push(0x0000);

  label2:
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(0x60ba); // pointer to VSTIME
  D_ex_(); // D!
}


// ================================================
// 0xebfe: WORD 'UNK_0xec00' codep=0x224c parp=0xec00
// ================================================

void UNK_0xec00() // UNK_0xec00
{
  SetColor("BLACK");
  ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
  UNK_0xea52(); // UNK_0xea52
  _dot_STAT_dash_TEXT(); // .STAT-TEXT
}


// ================================================
// 0xec0a: WORD '(/STATUS)' codep=0x224c parp=0xec18
// ================================================
// entry

void _ro__slash_STATUS_rc_() // (/STATUS)
{
  UNK_0xec00(); // UNK_0xec00
  Push(1); // 1
  Push(0x5d81); // pointer to #AUX
  _ex__3(); // !_3
}


// ================================================
// 0xec22: WORD 'UNK_0xec24' codep=0x1d29 parp=0xec24
// ================================================
// 0xec24: db 0x3a 0x20 ': '

// ================================================
// 0xec26: WORD 'UNK_0xec28' codep=0x1d29 parp=0xec28
// ================================================
// 0xec28: db 0x3a 0x20 ': '

// ================================================
// 0xec2a: WORD 'UNK_0xec2c' codep=0x1d29 parp=0xec2c
// ================================================
// 0xec2c: db 0x81 0xc3 0x81 0x81 0x81 0x81 0xc3 0x81 '        '

// ================================================
// 0xec34: WORD 'UNK_0xec36' codep=0x224c parp=0xec36
// ================================================

void UNK_0xec36() // UNK_0xec36
{
  _ex_COLOR(); // !COLOR
  Push(Read16(regsp)); // DUP
  Push(0xec24); // pointer to UNK_0xec24
  _ex__3(); // !_3
  Push(0x004c);
  Push(Pop() + Pop()); // +
  Push(0x5863); // pointer to YBLT
  _ex__3(); // !_3
  Push(Read16(regsp)); // DUP
  Push(0xec28); // pointer to UNK_0xec28
  _ex__3(); // !_3
  Push(Pop()+1); // 1+
  Push(0x586e); // pointer to XBLT
  _ex__3(); // !_3
  Push(0x587c); // pointer to XORMODE
  ON_3(); // ON_3
  Push(cc__8); // 8
  Push(Read16(regsp)); // DUP
  Push(0x5887); // pointer to LBLT
  _ex__3(); // !_3
  Push(0x5892); // pointer to WBLT
  _ex__3(); // !_3
  Push(0xec2c); // pointer to UNK_0xec2c
  Push(0x589d); // pointer to ABLT
  _ex__3(); // !_3
  BLT(); // BLT
}


// ================================================
// 0xec6e: WORD 'UNK_0xec70' codep=0x224c parp=0xec70
// ================================================

void UNK_0xec70() // UNK_0xec70
{
  Push(0xec28); // pointer to UNK_0xec28
  Push(Read16(Pop())); // @
  Push(0xec24); // pointer to UNK_0xec24
  Push(Read16(Pop())); // @
  SetColor("RED");
  UNK_0xec36(); // UNK_0xec36
  Push(0xec28); // pointer to UNK_0xec28
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(cc__3); // 3
  MAX(); // MAX
  Push(0x0043);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(0xec28); // pointer to UNK_0xec28
  _ex__3(); // !_3
  SWAP(); // SWAP
  Push(0xec24); // pointer to UNK_0xec24
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(cc__3); // 3
  MAX(); // MAX
  Push(0x0072);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(0xec24); // pointer to UNK_0xec24
  _ex__3(); // !_3
  SetColor("RED");
  UNK_0xec36(); // UNK_0xec36
  CLICK(); // CLICK
}


// ================================================
// 0xecb2: WORD 'UNK_0xecb4' codep=0x224c parp=0xecb4
// ================================================

void UNK_0xecb4() // UNK_0xecb4
{
  XYSCAN(); // XYSCAN
  Push(0x6172); // pointer to KEYTIME
  _2_at_(); // 2@
  Push(0x6182); // pointer to LKEYTIM
  _2_at_(); // 2@
  D_dash_(); // D-
  Push(0x00c8); Push(0x0000);
  D_st_(); // D<
  _gt_R(); // >R
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(cc__4); // 4
  Push(h); // I
  Push(Pop() * Pop()); // *
  Push(1); // 1
  MAX(); // MAX
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(cc__4); // 4
  Push(h); // I
  Push(Pop() * Pop()); // *
  Push(1); // 1
  MAX(); // MAX
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  OVER(); // OVER
  Push(0xec24); // pointer to UNK_0xec24
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(cc__3); // 3
  Push(0x0073);
  WITHIN(); // WITHIN
  OVER(); // OVER
  Push(0xec28); // pointer to UNK_0xec28
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(cc__3); // 3
  Push(0x0044);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  UNK_0xec70(); // UNK_0xec70
  Push(0x0032);
  MS(); // MS
  goto label3;

  label2:
  Pop(); Pop();// 2DROP

  label3:
  goto label4;

  label1:
  Pop(); Pop();// 2DROP

  label4:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xed2e: WORD 'UNK_0xed30' codep=0x224c parp=0xed30
// ================================================

void UNK_0xed30() // UNK_0xed30
{
  SetColor("DK-GREEN");
  _ex_COLOR(); // !COLOR
  Push(0x0054);
  Push(0x00b4);
  POS_dot_(); // POS.
  PRINT("MASS", 4); // (.")
  Push(0x0054);
  Push(0x00a5);
  POS_dot_(); // POS.
  PRINT("TONS", 4); // (.")
  _gt_R(); // >R
  Push(0); // 0
  _2DUP(); // 2DUP
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  Push(0); // 0
  CTINIT(); // CTINIT
  Push(0x0055);
  Push(0x00ac);
  POS_dot_(); // POS.

  label2:
  _2DUP(); // 2DUP
  Push2Words("NULL");
  D_gt_(); // D>
  if (Pop() == 0) goto label1;
  R_gt_(); // R>
  Push(Pop()+1); // 1+
  _gt_R(); // >R
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  Push(0); // 0
  _2SWAP(); // 2SWAP
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  Push(0); // 0
  _2SWAP(); // 2SWAP
  goto label2;

  label1:
  Pop(); Pop();// 2DROP
  R_gt_(); // R>
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label3;
  ROT(); // ROT
  ROT(); // ROT
  Push(0); // 0
  D_dot_R(); // D.R
  PRINT("*", 1); // (.")
  Push(0x000a);
  Push(0); // 0
  _dot_R(); // .R
  Push(cc__3); // 3
  Push(0x5863); // pointer to YBLT
  _plus__ex_(); // +!
  Push(0); // 0

  label3:
  D_dot_(); // D.
}


// ================================================
// 0xedce: WORD 'UNK_0xedd0' codep=0x224c parp=0xedd0
// ================================================

void UNK_0xedd0() // UNK_0xedd0
{
  Push2Words("NULL");
  Push(0x60da); // pointer to SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
  Push(0xec28); // pointer to UNK_0xec28
  Push(Read16(Pop())); // @
  Push(0xec24); // pointer to UNK_0xec24
  Push(Read16(Pop())); // @
  Push(0); // 0
  TONE(); // TONE
  BEEPON(); // BEEPON
  Push(0x0032);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0xfffb);
  Push(0x0019);
  RRND(); // RRND
  TONE(); // TONE
  _2DUP(); // 2DUP
  SetColor("GREEN");
  UNK_0xec36(); // UNK_0xec36
  Push(cc__5); // 5
  MS(); // MS
  _2DUP(); // 2DUP
  SetColor("RED");
  UNK_0xec36(); // UNK_0xec36
  Push(cc__5); // 5
  MS(); // MS
  i++;
  } while(i<imax); // (LOOP) 0xffde

  BEEPOFF(); // BEEPOFF
  Pop(); Pop();// 2DROP
  Push(0x5dae); // pointer to XABS
  Push(Read16(Pop())); // @
  Push(0xec28); // pointer to UNK_0xec28
  Push(Read16(Pop())); // @
  Push(0x001f);
  _dash_(); // -
  Push(0x6211); // pointer to XWLD:XPIX
  _2_at_(); // 2@
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
  Push(0x5db9); // pointer to YABS
  Push(Read16(Pop())); // @
  Push(0xec24); // pointer to UNK_0xec24
  Push(Read16(Pop())); // @
  Push(0x003f);
  _dash_(); // -
  Push(0x6221); // pointer to YWLD:YPIX
  _2_at_(); // 2@
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
  Push(cc__4); // 4
  Push(0x6211); // pointer to XWLD:XPIX
  _2_at_(); // 2@
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop()+1); // 1+
  Push(0); // 0
  SQRT(); // SQRT
  _dash_(); // -
  Push(0x59f5); // pointer to ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_LOCUS(); // ?ICONS-LOCUS
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  POINT_gt_ICON(); // POINT>ICON
  _at_IL(); // @IL
  _at_IH(); // @IH
  Push2Words("*SHIP");
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  _at_IL(); // @IL
  _at_IH(); // @IH
  Push(0x60da); // pointer to SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!

  label2:
  j++;
  } while(j<jmax); // (LOOP) 0xffe6


  label1:
  Push(0x60da); // pointer to SENSE-ADDR
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xee84: WORD 'UNK_0xee86' codep=0x224c parp=0xee86
// ================================================

void UNK_0xee86() // UNK_0xee86
{
  Push(0x00b6);
  Push(0x006f);
  Push(0x007e);
  Push(0x009b);
  SetColor("GREY1");
  SetColor("GREY1");
  SetColor("VIOLET");
  _ask_MRC(); // ?MRC
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0x00b4);
  Push(0x0071);
  Push(0x0080);
  Push(0x0099);
  SetColor("BLACK");
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
}


// ================================================
// 0xeeb6: WORD 'UNK_0xeeb8' codep=0x224c parp=0xeeb8
// ================================================

void UNK_0xeeb8() // UNK_0xeeb8
{
  SetColor("DK-BLUE");
  _ex_COLOR(); // !COLOR
  Push(0x009c);
  Push(0x00b7);
  Push(0x0053);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x006e);
  Push(0x007e);
  OVER(); // OVER
  Push(0x00b6);
  LLINE(); // LLINE
}


// ================================================
// 0xeede: WORD 'UNK_0xeee0' codep=0x224c parp=0xeee0
// ================================================

void UNK_0xeee0() // UNK_0xeee0
{
  CTINIT(); // CTINIT
  _gt_2FONT(); // >2FONT
  Push(0x0067);
  Push(0x00c2);
  POS_dot_(); // POS.
  PRINT("SENSORS", 7); // (.")
  _gt_1FONT(); // >1FONT
}


// ================================================
// 0xeefc: WORD 'UNK_0xeefe' codep=0x224c parp=0xeefe
// ================================================

void UNK_0xeefe() // UNK_0xeefe
{
  SetColor("BLACK");
  ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
  UNK_0xeeb8(); // UNK_0xeeb8
  UNK_0xee86(); // UNK_0xee86
  UNK_0xeee0(); // UNK_0xeee0
}


// ================================================
// 0xef0a: WORD 'UNK_0xef0c' codep=0x1d29 parp=0xef0c
// ================================================
// 0xef0c: db 0x44 0xcc 0xdd 0x33 0x77 0x99 0x88 0xaa 0x55 'D  3w   U'

// ================================================
// 0xef15: WORD 'UNK_0xef17' codep=0x224c parp=0xef17
// ================================================

void UNK_0xef17() // UNK_0xef17
{
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(0xef0c); // pointer to UNK_0xef0c
  Push(Pop() + Pop()); // +
  Push(0); // 0
  Push(cc__3); // 3
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xef2f: WORD 'UNK_0xef31' codep=0x224c parp=0xef31
// ================================================

void UNK_0xef31() // UNK_0xef31
{
  _gt_R(); // >R
  Push(h); // I
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  Push(0); // 0
  Push(h); // I
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  RRND(); // RRND
  Push(h); // I
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(0); // 0
  SQRT(); // SQRT
  Push(Pop()+1); // 1+
  Push(0); // 0
  SWAP(); // SWAP
  RRND(); // RRND
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) goto label2;
  Push(-Pop()); // NEGATE

  label2:
  _gt_R(); // >R
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) goto label3;
  Push(-Pop()); // NEGATE

  label3:
  Push(cc__9); // 9
  Push(0x000f);
  _star__slash_(); // */
  Push(h); // I'
  Push(Pop()+2); // 2+
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
  Push(h); // I
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  goto label4;

  label1:
  Push(h); // I
  Push(Pop()+2); // 2+
  Push(Read8(Pop())&0xFF); // C@
  Push(h); // I
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  RRND(); // RRND
  Push(h); // I
  Push(cc__5); // 5
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(h); // I
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  RRND(); // RRND

  label4:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xefd1: WORD 'UNK_0xefd3' codep=0x1d29 parp=0xefd3
// ================================================
// 0xefd3: db 0x01 0x01 0x16 0x1b 0x00 '     '

// ================================================
// 0xefd8: WORD 'UNK_0xefda' codep=0x1d29 parp=0xefda
// ================================================
// 0xefda: db 0x02 0x01 0x16 0x1b 0x00 '     '

// ================================================
// 0xefdf: WORD 'UNK_0xefe1' codep=0x1d29 parp=0xefe1
// ================================================
// 0xefe1: db 0x3a 0x20 ': '

// ================================================
// 0xefe3: WORD 'UNK_0xefe5' codep=0x1d29 parp=0xefe5
// ================================================
// 0xefe5: db 0x3a 0x20 ': '

// ================================================
// 0xefe7: WORD 'UNK_0xefe9' codep=0x224c parp=0xefe9
// ================================================

void UNK_0xefe9() // UNK_0xefe9
{
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  Push(0x00ff);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(0xefe1); // pointer to UNK_0xefe1
  ON_3(); // ON_3
  goto label3;

  label2:
  Push(0xefe5); // pointer to UNK_0xefe5
  ON_3(); // ON_3

  label3:
  Push(Read16(regsp)); // DUP
  UNK_0xef17(); // UNK_0xef17
  UNK_0xef31(); // UNK_0xef31
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label4;
  _gt_R(); // >R
  Push(0x0071);
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
  Push(0x007f);
  Push(Pop() + Pop()); // +
  BEEPON(); // BEEPON
  LPLOT(); // LPLOT
  BEEPOFF(); // BEEPOFF
  goto label5;

  label4:
  Pop(); Pop();// 2DROP

  label5:
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf041: WORD 'UNK_0xf043' codep=0x224c parp=0xf043
// ================================================

void UNK_0xf043() // UNK_0xf043
{
  Push(0x0071);
  Push(0x00b5);
  POS_dot_(); // POS.
  Push(0x0037);
  Push(0x5887); // pointer to LBLT
  _ex__3(); // !_3
  Push(0x0029);
  Push(0x5892); // pointer to WBLT
  _ex__3(); // !_3
  SetColor("GREY1");
  SetColor("GREY1");
  SetColor("VIOLET");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(0x0019);
  SWAP(); // SWAP
  _at_RECORD(); // @RECORD
  Push(Pop()+1); // 1+
  _1_dot_5_at_(); // 1.5@
  VA_gt_BUF(); // VA>BUF
  PAD(); // PAD
  OVER(); // OVER
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  CMOVE(); // CMOVE
  _at_DS(); // @DS
  PAD(); // PAD
  Push(0x5da3); // pointer to ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(0xbeb2);
  goto label2;

  label1:
  Push(0xbe8a);

  label2:
  MODULE(); // MODULE
}


// ================================================
// 0xf09b: WORD 'UNK_0xf09d' codep=0x224c parp=0xf09d
// ================================================

void UNK_0xf09d() // UNK_0xf09d
{
  Push(0x549d); // pointer to RECORD#
  _ex__3(); // !_3
  Push(0x001a);
  Push(0x548f); // pointer to FILE#
  _ex__3(); // !_3
  LoadData("ELEM-NAME"); // from 'ELEMENT     '
  Push(0x0010);
  Push(0x002e);
  _dash_XTRAILING(); // -XTRAILING
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xf0bb: WORD 'UNK_0xf0bd' codep=0x224c parp=0xf0bd
// ================================================

void UNK_0xf0bd() // UNK_0xf0bd
{
  SetColor("BLUE");
  _ex_COLOR(); // !COLOR
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT(": ", 2); // (.")
  CTINIT(); // CTINIT
}


// ================================================
// 0xf0cc: WORD 'UNK_0xf0ce' codep=0x224c parp=0xf0ce
// ================================================

void UNK_0xf0ce() // UNK_0xf0ce
{
  UNK_0xf09d(); // UNK_0xf09d
  CTCR(); // CTCR
  Push(0x000d);
  SPACES(); // SPACES
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xf0dc: WORD 'UNK_0xf0de' codep=0x224c parp=0xf0de
// ================================================

void UNK_0xf0de() // UNK_0xf0de
{
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT

  UNK_0x3f3b("ATMOSPHERE");
  UNK_0xf0bd(); // UNK_0xf0bd
  Push(0x542d); // pointer to ATMO
  Push(Read16(Pop())); // @
  Push(0x549d); // pointer to RECORD#
  _ex__3(); // !_3
  Push(0x0082);
  Push(0x548f); // pointer to FILE#
  _ex__3(); // !_3
  LoadData("UNK_0xe696"); // from 'COMPOUNDS   '
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63fa); // IFIELD(PHRASE$)
  COUNT(); // COUNT
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR
  ICLOSE(); // ICLOSE

  UNK_0x3f3b("HYDROSPHERE");
  UNK_0xf0bd(); // UNK_0xf0bd
  Push(0x5422); // pointer to HYDRO
  Push(Read16(Pop())); // @
  Push(0x549d); // pointer to RECORD#
  _ex__3(); // !_3
  Push(0x0082);
  Push(0x548f); // pointer to FILE#
  _ex__3(); // !_3
  LoadData("UNK_0xe696"); // from 'COMPOUNDS   '
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63fa); // IFIELD(PHRASE$)
  COUNT(); // COUNT
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR
  ICLOSE(); // ICLOSE
  Push(0x62bf); // pointer to (PLANET
  _at__gt_C_plus_S(); // @>C+S

  UNK_0x3f3b("LITHOSPHERE");
  UNK_0xf0bd(); // UNK_0xf0bd
  Push(cc__3); // 3
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  LoadData("UNK_0xe68e"); // from 'PLANET      '
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xf0ce(); // UNK_0xf0ce
  i++;
  } while(i<imax); // (LOOP) 0xfff4

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf169: WORD 'UNK_0xf16b' codep=0x224c parp=0xf16b
// ================================================

void UNK_0xf16b() // UNK_0xf16b
{
  SetColor("GREY1");
  SetColor("GREY1");
  SetColor("DK-GREEN");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(0x0054);
  Push(0x009a);
  POS_dot_(); // POS.
  PRINT("BIO", 3); // (.")
  Push(0x0054);
  Push(0x008c);
  POS_dot_(); // POS.
  PRINT("MIN", 3); // (.")
  CTINIT(); // CTINIT
  Push(0x0055);
  Push(0x0093);
  POS_dot_(); // POS.
  LoadData("UNK_0xe67e"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0064);
  Push(0x00ff);
  _star__slash_(); // */
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x0055);
  Push(0x0085);
  POS_dot_(); // POS.
  LoadData("UNK_0xe686"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0064);
  Push(0x00ff);
  _star__slash_(); // */
  Push(cc__3); // 3
  _dot_R(); // .R
}


// ================================================
// 0xf1d1: WORD 'UNK_0xf1d3' codep=0x224c parp=0xf1d3
// ================================================

void UNK_0xf1d3() // UNK_0xf1d3
{
  LoadData("UNK_0xe64c"); // from 'VESSEL      '
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE

  UNK_0x3f3b("OBJECT CONSTITUENTS");
  UNK_0xf0bd(); // UNK_0xf0bd
  LoadData("UNK_0xe64c"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  CTCR(); // CTCR
  Push(cc__6); // 6
  UNK_0xf09d(); // UNK_0xf09d

  label1:
  Push(cc__3); // 3
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  LoadData("UNK_0xe654"); // from 'VESSEL      '
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label2;
  CTCR(); // CTCR
  UNK_0xf09d(); // UNK_0xf09d

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffec

  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x0fa0); Push(0x0000);
  D_plus_(); // D+
  Push(0x6240); // pointer to OK-TALK
  D_ex_(); // D!
}


// ================================================
// 0xf237: WORD 'UNK_0xf239' codep=0x224c parp=0xf239
// ================================================

void UNK_0xf239() // UNK_0xf239
{
  SetColor("DK-GREEN");
  _ex_COLOR(); // !COLOR
  Push(0x0054);
  Push(0x009a);
  POS_dot_(); // POS.
  PRINT("BIO", 3); // (.")
  Push(0x0054);
  Push(0x008c);
  POS_dot_(); // POS.
  PRINT("ENERGY", 6); // (.")
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(0x0018);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0xe606); // pointer to UNK_0xe606
  OFF(); // OFF

  label1:
  CTINIT(); // CTINIT
  Push(0x0055);
  Push(0x0093);
  POS_dot_(); // POS.
  Push(0xe606); // pointer to UNK_0xe606
  Push(Read16(Pop())); // @
  Push(0xefe1); // pointer to UNK_0xefe1
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x0055);
  Push(0x0085);
  POS_dot_(); // POS.
  Push(0xe606); // pointer to UNK_0xe606
  Push(Read16(Pop())); // @
  Push(0xefe5); // pointer to UNK_0xefe5
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  Push(0xefe1); // pointer to UNK_0xefe1
  Push(Read16(Pop())); // @
  Push(0xe606); // pointer to UNK_0xe606
  Push(Read16(Pop())); // @
  Push(0x0064);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(0x004b);
  Push(0x0056);
  RRND(); // RRND
  Push(0x0064);
  _star__slash_(); // */

  label2:
  Push(cc__3); // 3
  _dot_R(); // .R
}


// ================================================
// 0xf2c8: WORD 'UNK_0xf2ca' codep=0x224c parp=0xf2ca
// ================================================

void UNK_0xf2ca() // UNK_0xf2ca
{
  LoadData("UNK_0xe676"); // from 'PLANET      '
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  Push(Pop() * Pop()); // *
  Push(0x0013);
  UNK_0xed30(); // UNK_0xed30
}


// ================================================
// 0xf2da: WORD 'UNK_0xf2dc' codep=0x224c parp=0xf2dc
// ================================================

void UNK_0xf2dc() // UNK_0xf2dc
{
  Push(0x00b6);
  Push(0x006f);
  Push(0x007e);
  Push(0x009c);
  SetColor("GREY1");
  SetColor("GREY1");
  SetColor("VIOLET");
  _ask_MRC(); // ?MRC
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  Push(0x0087);
  Push(0x009a);
  LoadData("UNK_0xe676"); // from 'PLANET      '
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_(); // /
  Push(0x0019);
  MIN(); // MIN
  Push(cc__4); // 4
  MAX(); // MAX
  _gt_R(); // >R
  Push(h); // I
  FILLCIRC(); // FILLCIRC
  R_gt_(); // R>
  Push(Read16(regsp)); // DUP
  Push(0xefd3); // pointer to UNK_0xefd3
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  Push(0xefda); // pointer to UNK_0xefda
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  LoadData("UNK_0xe67e"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  if (Pop() == 0) goto label1;
  Push(1); // 1
  goto label2;

  label1:
  Push(0x00ff);

  label2:
  Push(0xefd3); // pointer to UNK_0xefd3
  C_ex_(); // C!
  LoadData("UNK_0xe686"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  if (Pop() == 0) goto label3;
  Push(2); // 2
  goto label4;

  label3:
  Push(0x00ff);

  label4:
  Push(0xefda); // pointer to UNK_0xefda
  C_ex_(); // C!
  MAX(); // MAX
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label5;
  Push(0x0096);
  MAX(); // MAX
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0xefd3); // pointer to UNK_0xefd3
  UNK_0xefe9(); // UNK_0xefe9
  Push(0xefda); // pointer to UNK_0xefda
  UNK_0xefe9(); // UNK_0xefe9
  i++;
  } while(i<imax); // (LOOP) 0xfff6


  label5:
  UNK_0xf2ca(); // UNK_0xf2ca
  UNK_0xf16b(); // UNK_0xf16b
  UNK_0xf0de(); // UNK_0xf0de
}


// ================================================
// 0xf38e: WORD 'UNK_0xf390' codep=0x224c parp=0xf390
// ================================================

void UNK_0xf390() // UNK_0xf390
{
  LoadData("UNK_0xe644"); // from 'VESSEL      '
  Push(Read16(Pop())); // @
  Push(0); // 0
  UNK_0xed30(); // UNK_0xed30
}


// ================================================
// 0xf39a: WORD 'UNK_0xf39c' codep=0x224c parp=0xf39c
// ================================================

void UNK_0xf39c() // UNK_0xf39c
{
  Push(0xefe1); // pointer to UNK_0xefe1
  OFF(); // OFF
  Push(0xefe5); // pointer to UNK_0xefe5
  OFF(); // OFF
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  UNK_0xf043(); // UNK_0xf043
  Push(0x6401); // IFIELD(UNK_0xe65c)
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(0x0064);
  LoadData("UNK_0xe661"); // from 'VESSEL      '
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  Push(1); // 1
  MAX(); // MAX
  _star__slash_(); // */
  Push(0x0064);
  MIN(); // MIN
  Push(0xe606); // pointer to UNK_0xe606
  _ex__3(); // !_3
  Push(0x0096);
  Push(0xe606); // pointer to UNK_0xe606
  Push(Read16(Pop())); // @
  Push(0x0064);
  _star__slash_(); // */
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  LoadData("UNK_0xe63c"); // from 'VESSEL      '
  Push(0x002a);
  Push(Pop() + Pop()); // +
  LoadData("UNK_0xe63c"); // from 'VESSEL      '

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  UNK_0xefe9(); // UNK_0xefe9
  Push(cc__6); // 6
  j += Pop();
  } while(j<jmax); // (/LOOP) 0xfff8

  i++;
  } while(i<imax); // (LOOP) 0xffe8

  UNK_0xf390(); // UNK_0xf390
  UNK_0xf239(); // UNK_0xf239
  UNK_0xf1d3(); // UNK_0xf1d3
}


// ================================================
// 0xf400: WORD 'UNK_0xf402' codep=0x224c parp=0xf402
// ================================================

void UNK_0xf402() // UNK_0xf402
{
  Push2Words("NULL");
  Push(0x60da); // pointer to SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xf40a: WORD '.READINGS' codep=0x4a4f parp=0xf418
// ================================================
// 0xf418: db 0x02 0x00 0x02 0xf4 0x19 0x00 0x9c 0xf3 0x20 0x00 0xdc 0xf2 '            '

// ================================================
// 0xf424: WORD '(/SENSORS)' codep=0x224c parp=0xf433
// ================================================
// entry

void _ro__slash_SENSORS_rc_() // (/SENSORS)
{
  Push(1); // 1
  Push(0xbdef);
  MODULE(); // MODULE
  Push(0x59e8); // pointer to IGLOBAL
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(0x5a5c); // pointer to CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
  Push(0x5b1e); // pointer to ?PORT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(2); // 2
  Push(0x5d81); // pointer to #AUX
  _ex__3(); // !_3
  UNK_0xeefe(); // UNK_0xeefe
  Push(0x5a5c); // pointer to CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(0x62bf); // pointer to (PLANET
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(0x60da); // pointer to SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
  goto label2;

  label1:
  Push(0x0023);
  Push(0x003b);
  SetColor("RED");
  UNK_0xec36(); // UNK_0xec36

  label3:
  UNK_0xecb4(); // UNK_0xecb4
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label3;
  UNK_0xedd0(); // UNK_0xedd0
  Push(0xec28); // pointer to UNK_0xec28
  Push(Read16(Pop())); // @
  Push(0xec24); // pointer to UNK_0xec24
  Push(Read16(Pop())); // @
  SetColor("RED");
  UNK_0xec36(); // UNK_0xec36

  label2:
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label4;
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_CLASS(); // @INST-CLASS
  Pop();
  switch(Pop()) // .READINGS
  {
  case 25:
    UNK_0xf39c(); // UNK_0xf39c
    break;
  case 32:
    UNK_0xf2dc(); // UNK_0xf2dc
    break;
  default:
    UNK_0xf402(); // UNK_0xf402
    break;

  }
  ICLOSE(); // ICLOSE
  goto label5;

  label4:
  Pop(); Pop();// 2DROP

  label5:
  Push(0x60da); // pointer to SENSE-ADDR
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("THERE'S NOTHING THERE.", 22); // (.")
  Push(0x0001); Push(0x0000);
  Push(0x60da); // pointer to SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
}

// 0xf4e6: db 0x53 0x43 0x49 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x43 0x49 0x45 0x4e 0x43 0x45 0x20 0x4f 0x46 0x46 0x49 0x43 0x45 0x52 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x16 0x31 0x32 0x34 0x30 0x45 0x54 0x55 0xd0 0x4c 0x22 0xe5 0x8e 0x7f 0x8d 0x20 0x8e 0xbf 0x8f 0x20 0x0f 0x5d 0x17 0xc7 0x00 0x2b 0xa0 0x0b 0x35 0xfa 0x6f 0x1d 0x70 0x90 0x16 0x42 0x4c 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'SCI-VOC_________________________CIENCE OFFICER----------------) 1240ETU L"         ]   +  5 o p  BLT-VOC_________________ '
  