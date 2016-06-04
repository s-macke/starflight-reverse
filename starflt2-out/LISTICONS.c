// ====== OVERLAY 'LISTICONS' ======

#include"interface.h"

// store offset = 0xf2b0
// overlay size   = 0x02b0

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xf2c6  codep:0x224c parp:0xf2c6 size:0x00a7 C-string:'UNK_0xf2c6'
// 1870:      UNK_0xf36f  codep:0x224c parp:0xf36f size:0x0075 C-string:'UNK_0xf36f'
// 1871:      UNK_0xf3e6  codep:0x224c parp:0xf3e6 size:0x0030 C-string:'UNK_0xf3e6'
// 1872:      UNK_0xf418  codep:0x224c parp:0xf418 size:0x0038 C-string:'UNK_0xf418'
// 1873:      UNK_0xf452  codep:0x224c parp:0xf452 size:0x000a C-string:'UNK_0xf452'
// 1874:      UNK_0xf45e  codep:0x224c parp:0xf45e size:0x007e C-string:'UNK_0xf45e'
// 1875:           ICONS  codep:0x224c parp:0xf4e6 size:0x007a C-string:'ICONS'

// =================================
// =========== VARIABLES ===========
// =================================



// 0xf2c2: db 0x2b 0x00 '+ '

// ================================================
// 0xf2c4: WORD 'UNK_0xf2c6' codep=0x224c parp=0xf2c6
// ================================================

void UNK_0xf2c6() // UNK_0xf2c6
{
  Push(cc__8); // 8
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_CMAP); // CMAP
  Push(i); // I
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(pp_TILE_minus_PT); // TILE-PT
  _ex_(); // !
  Push(0x0020);
  Push(i); // I
  Push(0x000c);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x002d);
  Push(0x000f);
  Push(0x000c);
  TILEFIL(); // TILEFIL
  i++;
  } while(i<imax); // (LOOP) 0xffd4

  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  Push(0x001f);
  Push(0x002e);
  Push(0x0080);
  Push(0x002e);
  LLINE(); // LLINE
  Push(0x0080);
  Push(0x002e);
  Push(0x0080);
  Push(0x001d);
  LLINE(); // LLINE
  Push(0x0080);
  Push(0x001d);
  Push(0x001f);
  Push(0x001d);
  LLINE(); // LLINE
  Push(0x001f);
  Push(0x001d);
  Push(0x001f);
  Push(0x002e);
  LLINE(); // LLINE
  Push(0x0023);
  Push(0x0019);
  POS_dot_(); // POS.
  PRINT("LO.....ELEVATION.....HI ", 24); // (.")
}


// ================================================
// 0xf36d: WORD 'UNK_0xf36f' codep=0x224c parp=0xf36f
// ================================================

void UNK_0xf36f() // UNK_0xf36f
{
  Push(0x00be);
  Push(pp_YBLT); // YBLT
  _st__ex__gt_(); // <!>
  Push(0x0037);
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  _gt_3FONT(); // >3FONT
  PRINT("ICON", 4); // (.")
  Push(0x000a);
  Push(pp_XBLT); // XBLT
  _st__plus__ex__gt_(); // <+!>
  PRINT("KEY", 3); // (.")
  Push(0x000a);
  Push(0x000f);
  Push(0x0096);
  Push(0x000f);
  LLINE(); // LLINE
  Push(0x000a);
  Push(0x00b2);
  Push(0x0096);
  Push(0x00b2);
  LLINE(); // LLINE
  Push(0x000a);
  Push(0x000f);
  Push(0x000a);
  Push(0x00b2);
  LLINE(); // LLINE
  Push(0x0096);
  Push(0x000f);
  Push(0x0096);
  Push(0x00b2);
  LLINE(); // LLINE
}


// ================================================
// 0xf3e4: WORD 'UNK_0xf3e6' codep=0x224c parp=0xf3e6
// ================================================

void UNK_0xf3e6() // UNK_0xf3e6
{
  Push(2); // 2
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  DUP(); // DUP
  Push(i); // I
  Push(cc__9); // 9
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  DUP(); // DUP
  C_at_(); // C@
  I_gt_C(); // I>C
  _ask_CGA(); // ?CGA
  if (Pop() == 0) goto label1;
  _gt_FLAG(); // >FLAG

  label1:
  _ex_COLOR(); // !COLOR
  Push(Pop()+1); // 1+
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  BLT(); // BLT
  i++;
  } while(i<imax); // (LOOP) 0xffdc

  Pop(); // DROP
}


// ================================================
// 0xf416: WORD 'UNK_0xf418' codep=0x224c parp=0xf418
// ================================================

void UNK_0xf418() // UNK_0xf418
{
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _st__ex__gt_(); // <!>
  Push(0x001b);
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  PRINT("(PRESS ANY KEY TO CONTINUE)", 27); // (.")
  KEY(); // KEY
  Pop(); // DROP
}


// ================================================
// 0xf450: WORD 'UNK_0xf452' codep=0x224c parp=0xf452
// ================================================

void UNK_0xf452() // UNK_0xf452
{
  GREY1(); // GREY1
  _ex_COLOR(); // !COLOR
  SFILL(); // SFILL
  UNK_0xf36f(); // UNK_0xf36f
}


// ================================================
// 0xf45c: WORD 'UNK_0xf45e' codep=0x224c parp=0xf45e
// ================================================

void UNK_0xf45e() // UNK_0xf45e
{
  _gt_1FONT(); // >1FONT

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x000a);
  _minus_(); // -
  DUP(); // DUP
  Push(pp_YBLT); // YBLT
  _st__ex__gt_(); // <!>
  Push(0x0014);
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
  Push(cc__8); // 8
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(cc__8); // 8
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  Push(pp_ICON_h_); // ICON^
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(0x0012);
  Push(Pop() * Pop()); // *
  _at_DS(); // @DS
  PAD_v_16(); // PAD|16
  Push(0x0012);
  LCMOVE(); // LCMOVE
  PAD_v_16(); // PAD|16
  UNK_0xf3e6(); // UNK_0xf3e6
  Push(0x000c);
  Push(pp_XBLT); // XBLT
  _st__plus__ex__gt_(); // <+!>
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  Push(cc__minus_2); // -2
  Push(pp_YBLT); // YBLT
  _st__plus__ex__gt_(); // <+!>
  Push(0x0041);
  Push(i); // I
  DUP(); // DUP
  Push(0x002b);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x0011);
  _minus_(); // -

  label1:
  _at_RECORD(); // @RECORD
  Push(0x001b);
  TYPE(); // TYPE
  Push(2); // 2
  Push(pp_YBLT); // YBLT
  _st__plus__ex__gt_(); // <+!>
  i++;
  } while(i<imax); // (LOOP) 0xff8c

  Pop(); // DROP
}


// ================================================
// 0xf4dc: WORD 'ICONS' codep=0x224c parp=0xf4e6
// ================================================

void ICONS() // ICONS
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(pp_ESC_minus_EN); // ESC-EN
  _099(); // 099
  Push(pp_NOF); // NOF
  ON(); // ON
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex_(); // !
  UNK_0xf452(); // UNK_0xf452
  Push(0x00b4);
  Push(0x000f);
  Push(0); // 0
  UNK_0xf45e(); // UNK_0xf45e
  UNK_0xf418(); // UNK_0xf418
  UNK_0xf452(); // UNK_0xf452
  Push(0x00b4);
  Push(0x001b);
  Push(0x000f);
  UNK_0xf45e(); // UNK_0xf45e
  Push(0x003c);
  Push(0x002e);
  Push(0x002d);
  UNK_0xf45e(); // UNK_0xf45e
  UNK_0xf418(); // UNK_0xf418
  UNK_0xf452(); // UNK_0xf452
  Push(0x00b4);
  Push(0x0031);
  Push(0x002e);
  UNK_0xf45e(); // UNK_0xf45e
  Push(0x0097);
  Push(0x0038);
  Push(0x0033);
  UNK_0xf45e(); // UNK_0xf45e
  UNK_0xf2c6(); // UNK_0xf2c6
  UNK_0xf418(); // UNK_0xf418
  Push(pp_ESC_minus_EN); // ESC-EN
  ON(); // ON
  Push(pp_NOF); // NOF
  _099(); // 099
}

// 0xf554: db 0x49 0x43 0x4f 0x4e 0x2d 0x56 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'ICON-V______ '
  