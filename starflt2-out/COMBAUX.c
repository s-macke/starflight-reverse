// ====== OVERLAY 'COMBAUX' ======

#include"cpu.h"

// store offset = 0xf2b0
// overlay size   = 0x02b0

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xf2c6  codep:0x224c parp:0xf2c6 size:0x0010 C-string:'UNK_0xf2c6'
// 1870:      UNK_0xf2d8  codep:0x224c parp:0xf2d8 size:0x002e C-string:'UNK_0xf2d8'
// 1871:      UNK_0xf308  codep:0x224c parp:0xf308 size:0x002c C-string:'UNK_0xf308'
// 1872:      UNK_0xf336  codep:0x224c parp:0xf336 size:0x0056 C-string:'UNK_0xf336'
// 1873:      UNK_0xf38e  codep:0x224c parp:0xf38e size:0x004a C-string:'UNK_0xf38e'
// 1874:      UNK_0xf3da  codep:0x224c parp:0xf3da size:0x0054 C-string:'UNK_0xf3da'
// 1875:      UNK_0xf430  codep:0x1d29 parp:0xf430 size:0x0002 C-string:'UNK_0xf430'
// 1876:      UNK_0xf434  codep:0x1d29 parp:0xf434 size:0x0002 C-string:'UNK_0xf434'
// 1877:      UNK_0xf438  codep:0x224c parp:0xf438 size:0x0022 C-string:'UNK_0xf438'
// 1878:      UNK_0xf45c  codep:0x224c parp:0xf45c size:0x0022 C-string:'UNK_0xf45c'
// 1879:      UNK_0xf480  codep:0x224c parp:0xf480 size:0x0044 C-string:'UNK_0xf480'
// 1880:      UNK_0xf4c6  codep:0x224c parp:0xf4c6 size:0x001c C-string:'UNK_0xf4c6'
// 1881:      UNK_0xf4e4  codep:0x224c parp:0xf4e4 size:0x0008 C-string:'UNK_0xf4e4'
// 1882:          SET-SC  codep:0x224c parp:0xf4f7 size:0x003c C-string:'SET_dash_SC'
// 1883:             @NF  codep:0x224c parp:0xf53b size:0x0025 C-string:'_at_NF'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf430[2] = {0x3a, 0x20}; // UNK_0xf430
unsigned char UNK_0xf434[2] = {0x3a, 0x20}; // UNK_0xf434



// 0xf2c2: db 0x2a 0x00 '* '

// ================================================
// 0xf2c4: WORD 'UNK_0xf2c6' codep=0x224c parp=0xf2c6
// ================================================

void UNK_0xf2c6() // UNK_0xf2c6
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  INST_dash_X(); // INST-X
  Push(Read16(Pop())); // @
  INST_dash_Y(); // INST-Y
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2d6: WORD 'UNK_0xf2d8' codep=0x224c parp=0xf2d8
// ================================================

void UNK_0xf2d8() // UNK_0xf2d8
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x0019);
  Push(0x001d);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  INST_dash_X(); // INST-X
  Push(Read16(Pop())); // @
  INST_dash_Y(); // INST-Y
  Push(Read16(Pop())); // @
  goto label2;

  label1:
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @

  label2:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf306: WORD 'UNK_0xf308' codep=0x224c parp=0xf308
// ================================================

void UNK_0xf308() // UNK_0xf308
{
  Push(pp__ask_UF); // ?UF
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xf2d8(); // UNK_0xf2d8
  goto label2;

  label1:
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @

  label2:
  Push(0x001e);
  _dash_(); // -
  Push(pp_YVIS); // YVIS
  _st__ex__gt_(); // <!>
  Push(0x0012);
  _dash_(); // -
  Push(pp_XVIS); // XVIS
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf334: WORD 'UNK_0xf336' codep=0x224c parp=0xf336
// ================================================

void UNK_0xf336() // UNK_0xf336
{
  _gt_2ICONF(); // >2ICONF
  Push(2); // 2
  DUP(); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  Push(cc__4); // 4
  DUP(); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  _st__ex__gt_(); // <!>
  Push(1); // 1
  DUP(); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x000a);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x000f);
  Push(Pop() + Pop()); // +
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x001a);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x002b);
  Push(Pop() + Pop()); // +
  _ex_VISWIN(); // !VISWIN
}


// ================================================
// 0xf38c: WORD 'UNK_0xf38e' codep=0x224c parp=0xf38e
// ================================================

void UNK_0xf38e() // UNK_0xf38e
{
  _gt_3ICONF(); // >3ICONF
  Push(1); // 1
  DUP(); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  Push(2); // 2
  DUP(); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  _st__ex__gt_(); // <!>
  Push(1); // 1
  DUP(); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x0022);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x003a);
  Push(Pop() + Pop()); // +
  _ex_VISWIN(); // !VISWIN
}


// ================================================
// 0xf3d8: WORD 'UNK_0xf3da' codep=0x224c parp=0xf3da
// ================================================

void UNK_0xf3da() // UNK_0xf3da
{
  _gt_1ICONF(); // >1ICONF
  _0_dot_(); // 0.
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  Push(cc__8); // 8
  DUP(); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  _st__ex__gt_(); // <!>
  Push(1); // 1
  DUP(); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x000e);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x0017);
  Push(Pop() + Pop()); // +
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x0016);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x002a);
  Push(Pop() + Pop()); // +
  _ex_VISWIN(); // !VISWIN
}


// ================================================
// 0xf42e: WORD 'UNK_0xf430' codep=0x1d29 parp=0xf430
// ================================================
// 0xf430: db 0x3a 0x20 ': '

// ================================================
// 0xf432: WORD 'UNK_0xf434' codep=0x1d29 parp=0xf434
// ================================================
// 0xf434: db 0x3a 0x20 ': '

// ================================================
// 0xf436: WORD 'UNK_0xf438' codep=0x224c parp=0xf438
// ================================================

void UNK_0xf438() // UNK_0xf438
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  _at_IX(); // @IX
  _dash_(); // -
  ABS(); // ABS
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  _at_IY(); // @IY
  _dash_(); // -
  ABS(); // ABS
  MAX(); // MAX
  Push(pp_UNK_0xf434); // UNK_0xf434
  Push(Read16(Pop())); // @
  MIN(); // MIN
  Push(pp_UNK_0xf434); // UNK_0xf434
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf45a: WORD 'UNK_0xf45c' codep=0x224c parp=0xf45c
// ================================================

void UNK_0xf45c() // UNK_0xf45c
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  _at_IX(); // @IX
  _dash_(); // -
  ABS(); // ABS
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  _at_IY(); // @IY
  _dash_(); // -
  ABS(); // ABS
  MAX(); // MAX
  Push(pp_UNK_0xf430); // UNK_0xf430
  Push(Read16(Pop())); // @
  MAX(); // MAX
  Push(pp_UNK_0xf430); // UNK_0xf430
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf47e: WORD 'UNK_0xf480' codep=0x224c parp=0xf480
// ================================================

void UNK_0xf480() // UNK_0xf480
{
  Push(pp_UNK_0xf430); // UNK_0xf430
  _099(); // 099
  Push(0x03e8);
  Push(pp_UNK_0xf434); // UNK_0xf434
  _st__ex__gt_(); // <!>
  Push(pp_IGLOBAL); // IGLOBAL
  Push(Read16(Pop())); // @
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  POINT_gt_I(); // POINT>I
  _at_ID(); // @ID
  Push(0x0023);
  Push(0x002c);
  WITHIN(); // WITHIN
  _at_ID(); // @ID
  Push(cc_INVIS_dash_I); // INVIS-I
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  _at_ID(); // @ID
  Push(0x0060);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNK_0xf438(); // UNK_0xf438
  UNK_0xf45c(); // UNK_0xf45c

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffd4

}


// ================================================
// 0xf4c4: WORD 'UNK_0xf4c6' codep=0x224c parp=0xf4c6
// ================================================

void UNK_0xf4c6() // UNK_0xf4c6
{
  ROT(); // ROT
  _dash_(); // -
  DUP(); // DUP
  Push(Pop() * Pop()); // *
  _gt_R(); // >R
  _dash_(); // -
  DUP(); // DUP
  Push(Pop() * Pop()); // *
  Push(0); // 0
  R_gt_(); // R>
  Push(0); // 0
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xf4e2: WORD 'UNK_0xf4e4' codep=0x224c parp=0xf4e4
// ================================================

void UNK_0xf4e4() // UNK_0xf4e4
{
  UNK_0xf2d8(); // UNK_0xf2d8
  UNK_0xf2c6(); // UNK_0xf2c6
  UNK_0xf4c6(); // UNK_0xf4c6
}


// ================================================
// 0xf4ec: WORD 'SET-SC' codep=0x224c parp=0xf4f7
// ================================================

void SET_dash_SC() // SET-SC
{
  UNK_0xf308(); // UNK_0xf308
  Push(pp__ask_UF); // ?UF
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xf4e4(); // UNK_0xf4e4
  goto label4;

  label1:
  UNK_0xf480(); // UNK_0xf480
  Push(pp_UNK_0xf430); // UNK_0xf430
  Push(Read16(Pop())); // @

  label4:
  DUP(); // DUP
  Push(cc__5); // 5
  _st_(); // <
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  UNK_0xf3da(); // UNK_0xf3da
  return;

  label2:
  Push(cc__5); // 5
  Push(cc__8); // 8
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;
  UNK_0xf336(); // UNK_0xf336
  return;

  label3:
  UNK_0xf38e(); // UNK_0xf38e
}


// ================================================
// 0xf533: WORD '@NF' codep=0x224c parp=0xf53b
// ================================================

void _at_NF() // @NF
{
  UNK_0xf480(); // UNK_0xf480
  Push(pp_UNK_0xf434); // UNK_0xf434
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf430); // UNK_0xf430
  Push(Read16(Pop())); // @
}

// 0xf547: db 0x43 0x4f 0x4d 0x42 0x41 0x55 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'COMBAU___________________ '
  