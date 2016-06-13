// ====== OVERLAY 'ENGINEER' ======
// store offset = 0xeca0
// overlay size   = 0x08c0

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xecb6  codep:0x7420 parp:0xecb6 size:0x0003 C-string:'UNK_0xecb6'
// 1870:      UNK_0xecbb  codep:0x7420 parp:0xecbb size:0x0003 C-string:'UNK_0xecbb'
// 1871:      UNK_0xecc0  codep:0x7420 parp:0xecc0 size:0x0003 C-string:'UNK_0xecc0'
// 1872:      UNK_0xecc5  codep:0x224c parp:0xecc5 size:0x0012 C-string:'UNK_0xecc5'
// 1873:      UNK_0xecd9  codep:0x224c parp:0xecd9 size:0x0046 C-string:'UNK_0xecd9'
// 1874:      UNK_0xed21  codep:0x224c parp:0xed21 size:0x0012 C-string:'UNK_0xed21'
// 1875:      UNK_0xed35  codep:0x224c parp:0xed35 size:0x0075 C-string:'UNK_0xed35'
// 1876:      UNK_0xedac  codep:0x224c parp:0xedac size:0x009c C-string:'UNK_0xedac'
// 1877:           DBARS  codep:0x224c parp:0xee52 size:0x0044 C-string:'DBARS'
// 1878:       (/DAMAGE)  codep:0x224c parp:0xeea4 size:0x0012 C-string:'_ro__slash_DAMAGE_rc_'
// 1879:      UNK_0xeeb8  codep:0x224c parp:0xeeb8 size:0x0036 C-string:'UNK_0xeeb8'
// 1880:      UNK_0xeef0  codep:0x224c parp:0xeef0 size:0x0142 C-string:'UNK_0xeef0'
// 1881:      .SHIP-ITEM  codep:0x4b3b parp:0xf041 size:0x0020 C-string:'_dot_SHIP_dash_ITEM'
// 1882:      UNK_0xf063  codep:0x224c parp:0xf063 size:0x0046 C-string:'UNK_0xf063'
// 1883:      UNK_0xf0ab  codep:0x224c parp:0xf0ab size:0x0023 C-string:'UNK_0xf0ab'
// 1884:      UNK_0xf0d0  codep:0x224c parp:0xf0d0 size:0x0049 C-string:'UNK_0xf0d0'
// 1885:      UNK_0xf11b  codep:0x224c parp:0xf11b size:0x0032 C-string:'UNK_0xf11b'
// 1886:      UNK_0xf14f  codep:0x224c parp:0xf14f size:0x0082 C-string:'UNK_0xf14f'
// 1887:      UNK_0xf1d3  codep:0x224c parp:0xf1d3 size:0x004c C-string:'UNK_0xf1d3'
// 1888:      UNK_0xf221  codep:0x224c parp:0xf221 size:0x0032 C-string:'UNK_0xf221'
// 1889:      UNK_0xf255  codep:0x224c parp:0xf255 size:0x002a C-string:'UNK_0xf255'
// 1890:      UNK_0xf281  codep:0x224c parp:0xf281 size:0x006d C-string:'UNK_0xf281'
// 1891:      UNK_0xf2f0  codep:0x224c parp:0xf2f0 size:0x002c C-string:'UNK_0xf2f0'
// 1892:      UNK_0xf31e  codep:0x224c parp:0xf31e size:0x004a C-string:'UNK_0xf31e'
// 1893:      UNK_0xf36a  codep:0x224c parp:0xf36a size:0x001e C-string:'UNK_0xf36a'
// 1894:      UNK_0xf38a  codep:0x224c parp:0xf38a size:0x001c C-string:'UNK_0xf38a'
// 1895:      UNK_0xf3a8  codep:0x224c parp:0xf3a8 size:0x0021 C-string:'UNK_0xf3a8'
// 1896:      UNK_0xf3cb  codep:0x224c parp:0xf3cb size:0x0024 C-string:'UNK_0xf3cb'
// 1897:      UNK_0xf3f1  codep:0x224c parp:0xf3f1 size:0x0022 C-string:'UNK_0xf3f1'
// 1898:      UNK_0xf415  codep:0x224c parp:0xf415 size:0x0046 C-string:'UNK_0xf415'
// 1899:       (/REPAIR)  codep:0x224c parp:0xf469 size:0x0000 C-string:'_ro__slash_REPAIR_rc_'

// =================================
// =========== VARIABLES ===========
// =================================



// 0xecb2: db 0x8b 0x00 '  '

// ================================================
// 0xecb4: WORD 'UNK_0xecb6' codep=0x7420 parp=0xecb6
// ================================================
// 0xecb6: db 0x10 0x1c 0x01 '   '

// ================================================
// 0xecb9: WORD 'UNK_0xecbb' codep=0x7420 parp=0xecbb
// ================================================
// 0xecbb: db 0x11 0x1a 0x03 '   '

// ================================================
// 0xecbe: WORD 'UNK_0xecc0' codep=0x7420 parp=0xecc0
// ================================================
// 0xecc0: db 0x14 0x11 0x02 '   '

// ================================================
// 0xecc3: WORD 'UNK_0xecc5' codep=0x224c parp=0xecc5
// ================================================

void UNK_0xecc5() // UNK_0xecc5
{
  Push(0x0040);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("[N Y]", 5); // (.")
}


// ================================================
// 0xecd7: WORD 'UNK_0xecd9' codep=0x224c parp=0xecd9
// ================================================

void UNK_0xecd9() // UNK_0xecd9
{
  DK_dash_BLUE(); // DK-BLUE
  _ex_COLOR(); // !COLOR
  Push(0x009a);
  Push(0x00b4);
  Push(0x0071);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x009a);
  Push(0x0082);
  Push(0x0071);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x0071);
  Push(0x0083);
  OVER(); // OVER
  Push(0x00b3);
  LLINE(); // LLINE
  Push(0x009a);
  Push(0x0083);
  OVER(); // OVER
  Push(0x00b3);
  LLINE(); // LLINE
}


// ================================================
// 0xed1f: WORD 'UNK_0xed21' codep=0x224c parp=0xed21
// ================================================

void UNK_0xed21() // UNK_0xed21
{
  Push(0xfff9);
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
  Push(0x0055);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
}


// ================================================
// 0xed33: WORD 'UNK_0xed35' codep=0x224c parp=0xed35
// ================================================

void UNK_0xed35() // UNK_0xed35
{
  _gt_2FONT(); // >2FONT
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  Push(0x0067);
  Push(0x00c2);
  POS_dot_(); // POS.
  PRINT("DAMAGE", 6); // (.")
  _gt_1FONT(); // >1FONT
  DK_dash_BLUE(); // DK-BLUE
  _ex_COLOR(); // !COLOR
  Push(0x0055);
  Push(0x00b2);
  POS_dot_(); // POS.
  PRINT("HULL", 4); // (.")
  UNK_0xed21(); // UNK_0xed21
  PRINT("ENGINES", 7); // (.")
  UNK_0xed21(); // UNK_0xed21
  PRINT("SENSORS", 7); // (.")
  UNK_0xed21(); // UNK_0xed21
  PRINT("COMM.", 5); // (.")
  UNK_0xed21(); // UNK_0xed21
  PRINT("SHIELD", 6); // (.")
  UNK_0xed21(); // UNK_0xed21
  PRINT("MISSILE", 7); // (.")
  UNK_0xed21(); // UNK_0xed21
  PRINT("LASER", 5); // (.")
}


// ================================================
// 0xedaa: WORD 'UNK_0xedac' codep=0x224c parp=0xedac
// ================================================

void UNK_0xedac() // UNK_0xedac
{
  DUP(); // DUP
  Push(Pop()*2); // 2*
  UNK_0xecc0(); // UNK_0xecc0
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(h); // I
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(h); // I
  UNK_0xecc0(); // UNK_0xecc0
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(cc__5); // 5
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(h); // I
  C_at_(); // C@
  Push(Pop()*2); // 2*
  Push(cc__5); // 5
  _slash_(); // /
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(0x0072);
  Push(0x00b2);
  ROT(); // ROT
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  POS_dot_(); // POS.
  WHITE(); // WHITE
  BLUE(); // BLUE
  DK_dash_GREE(); // DK-GREE
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(pp_WBLT); // WBLT
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  BLT(); // BLT

  label2:
  Push(0x0072);
  Push(pp_WBLT); // WBLT
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  Push(0x0028);
  Push(pp_WBLT); // WBLT
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  GREY1(); // GREY1
  RED(); // RED
  RED(); // RED
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(pp_WBLT); // WBLT
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label3;
  BLT(); // BLT

  label3:
  goto label4;

  label1:
  Pop(); // DROP

  label4:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xee48: WORD 'DBARS' codep=0x224c parp=0xee52
// ================================================
// entry

void DBARS() // DBARS
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  Push(cc__7); // 7
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xedac(); // UNK_0xedac
  i++;
  } while(i<imax); // (LOOP) 0xfffa

  UNK_0xecc0(); // UNK_0xecc0
  C_at_(); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  Push(0x000f);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(0x1d4c); Pust(0x0000);
  goto label2;

  label1:
  Push(0x3a98); Pust(0x0000);

  label2:
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_VSTIME); // VSTIME
  D_ex_(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee96: WORD '(/DAMAGE)' codep=0x224c parp=0xeea4
// ================================================
// entry

void _ro__slash_DAMAGE_rc_() // (/DAMAGE)
{
  BLACK(); // BLACK
  ERASE_dash_A(); // ERASE-A
  UNK_0xecd9(); // UNK_0xecd9
  UNK_0xed35(); // UNK_0xed35
  Push(cc__3); // 3
  Push(pp__n_AUX); // #AUX
  _ex_(); // !
  DBARS(); // DBARS
}


// ================================================
// 0xeeb6: WORD 'UNK_0xeeb8' codep=0x224c parp=0xeeb8
// ================================================

void UNK_0xeeb8() // UNK_0xeeb8
{
  _gt_R(); // >R
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  Push(0); // 0
  Push(cc__7); // 7
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xecc0(); // UNK_0xecc0
  Push(i); // I
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(h); // J
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+
  Push(i); // I
  SWAP(); // SWAP
  LEAVE(); // LEAVE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffe2

  R_gt_(); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeeee: WORD 'UNK_0xeef0' codep=0x224c parp=0xeef0
// ================================================

void UNK_0xeef0() // UNK_0xeef0
{
  _gt_R(); // >R
  Push(h); // I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  PRINT("DESTROYED", 9); // (.")
  goto label2;

  label1:
  Push(h); // I
  Push(1); // 1
  Push(0x0014);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;
  PRINT("CRITICALLY", 10); // (.")
  goto label4;

  label3:
  Push(h); // I
  Push(0x0014);
  Push(0x0028);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label5;
  PRINT("HEAVILY", 7); // (.")
  goto label4;

  label5:
  Push(h); // I
  Push(0x0028);
  Push(0x0046);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label6;
  PRINT("MODERATELY", 10); // (.")
  goto label4;

  label6:
  Push(h); // I
  Push(0x0046);
  Push(0x005a);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label7;
  PRINT("SLIGHTLY", 8); // (.")
  goto label4;

  label7:
  Push(h); // I
  Push(0x005a);
  Push(0x0064);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label8;
  PRINT("MINIMALLY", 9); // (.")
  goto label4;

  label8:
  PRINT("NOT", 3); // (.")

  label4:
  PRINT(" DAMAGED", 8); // (.")

  label2:
  R_gt_(); // R>
  Pop(); // DROP
}

// 0xefbe: db 0x4c 0x22 0xdc 0x1b 0x04 0x48 0x55 0x4c 0x4c 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x45 0x4e 0x47 0x49 0x4e 0x45 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x53 0x45 0x4e 0x53 0x4f 0x52 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x0e 0x43 0x4f 0x4d 0x4d 0x55 0x4e 0x49 0x43 0x41 0x54 0x49 0x4f 0x4e 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x53 0x48 0x49 0x45 0x4c 0x44 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x10 0x4d 0x49 0x53 0x53 0x49 0x4c 0x45 0x20 0x4c 0x41 0x55 0x4e 0x43 0x48 0x45 0x52 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x0c 0x4c 0x41 0x53 0x45 0x52 0x20 0x43 0x41 0x4e 0x4e 0x4f 0x4e 0x90 0x16 'L"   HULL  L"   ENGINES  L"   SENSORS  L"   COMMUNICATIONS  L"   SHIELDS  L"   MISSILE LAUNCHER  L"   LASER CANNON  '

// ================================================
// 0xf032: WORD '.SHIP-ITEM' codep=0x4b3b parp=0xf041
// ================================================
// 0xf041: db 0x07 0x00 0x48 0x3a 0x00 0x00 0xc0 0xef 0x01 0x00 0xcb 0xef 0x02 0x00 0xd9 0xef 0x03 0x00 0xe7 0xef 0x04 0x00 0xfc 0xef 0x05 0x00 0x0a 0xf0 0x06 0x00 0x21 0xf0 '  H:                          ! '

// ================================================
// 0xf061: WORD 'UNK_0xf063' codep=0x224c parp=0xf063
// ================================================

void UNK_0xf063() // UNK_0xf063
{
  NULL(); // NULL
  CTPOS_dot_(); // CTPOS.
  DUP(); // DUP
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM
  PRINT(": ", 2); // (.")
  Push(Pop()*2); // 2*
  UNK_0xecc0(); // UNK_0xecc0
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(h); // I
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(h); // I
  UNK_0xecc0(); // UNK_0xecc0
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(h); // I
  C_at_(); // C@
  UNK_0xeef0(); // UNK_0xeef0
  Push(h); // I
  C_at_(); // C@
  _0_gt_(); // 0>
  goto label2;

  label1:
  PRINT("NONE", 4); // (.")
  Push(0); // 0

  label2:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xf0a9: WORD 'UNK_0xf0ab' codep=0x224c parp=0xf0ab
// ================================================

void UNK_0xf0ab() // UNK_0xf0ab
{
  CTCR(); // CTCR
  PRINT("EFFICIENCY: ", 12); // (.")
  Push(Pop()*2); // 2*
  UNK_0xecc0(); // UNK_0xecc0
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  Push(0); // 0
  _dot_R(); // .R
  PRINT("%", 1); // (.")
}


// ================================================
// 0xf0ce: WORD 'UNK_0xf0d0' codep=0x224c parp=0xf0d0
// ================================================

void UNK_0xf0d0() // UNK_0xf0d0
{
  _ask_DUP(); // ?DUP
  if (Pop() == 0) return;
  CTCR(); // CTCR
  PRINT("CURRENT FUNCTIONALITY: ", 23); // (.")
  Push(Pop()*2); // 2*
  UNK_0xecc0(); // UNK_0xecc0
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  PRINT("IN", 2); // (.")

  label1:
  PRINT("OPERATIVE", 9); // (.")
}


// ================================================
// 0xf119: WORD 'UNK_0xf11b' codep=0x224c parp=0xf11b
// ================================================

void UNK_0xf11b() // UNK_0xf11b
{
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  UNK_0xecbb(); // UNK_0xecbb
  _at__gt_C_plus_S(); // @>C+S
  Push(0x00fb);
  UNK_0xecb6(); // UNK_0xecb6
  C_at_(); // C@
  _dash_(); // -
  Push(0x0064);
  ROT(); // ROT
  _dash_(); // -
  Push(Pop() * Pop()); // *
  Push(Pop()+1); // 1+
  Push(0x1c1b);
  Push(0x5559);
  _star__slash_(); // */
  Push(cc__5); // 5
  Push(Pop() + Pop()); // +
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf14d: WORD 'UNK_0xf14f' codep=0x224c parp=0xf14f
// ================================================

void UNK_0xf14f() // UNK_0xf14f
{
  DUP(); // DUP
  Push(0x003c);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(cc__5); // 5
  _slash_MOD(); // /MOD
  SWAP(); // SWAP
  Push(2); // 2
  _gt_(); // >
  Push(Pop() + Pop()); // +
  DUP(); // DUP
  _dot_(); // .
  PRINT("MINUTE", 6); // (.")
  goto label2;

  label1:
  DUP(); // DUP
  Push(0x05a0);
  _st_(); // <
  if (Pop() == 0) goto label3;
  Push(0x003c);
  _slash_MOD(); // /MOD
  SWAP(); // SWAP
  Push(0x001e);
  _gt_(); // >
  Push(Pop() + Pop()); // +
  DUP(); // DUP
  _dot_(); // .
  PRINT("HOUR", 4); // (.")
  goto label2;

  label3:
  Push(0x05a0);
  _slash_MOD(); // /MOD
  SWAP(); // SWAP
  Push(0x02d0);
  _gt_(); // >
  Push(Pop() + Pop()); // +
  DUP(); // DUP
  _dot_(); // .
  PRINT("DAY", 3); // (.")

  label2:
  Push(1); // 1
  _gt_(); // >
  if (Pop() == 0) goto label4;
  Push(0x0053);
  EMIT(); // EMIT

  label4:
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf1d1: WORD 'UNK_0xf1d3' codep=0x224c parp=0xf1d3
// ================================================

void UNK_0xf1d3() // UNK_0xf1d3
{
  Push(Pop()*2); // 2*
  UNK_0xecc0(); // UNK_0xecc0
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  DUP(); // DUP
  Push(0x0064);
  _st_(); // <
  if (Pop() == 0) goto label1;
  CTCR(); // CTCR
  PRINT("ESTIMATED TIME FOR COMPLETE REPAIRS: ", 37); // (.")
  CTCR(); // CTCR
  UNK_0xf11b(); // UNK_0xf11b
  UNK_0xf14f(); // UNK_0xf14f
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf21f: WORD 'UNK_0xf221' codep=0x224c parp=0xf221
// ================================================

void UNK_0xf221() // UNK_0xf221
{
  Push(Pop()*2); // 2*
  UNK_0xecc0(); // UNK_0xecc0
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(0x0040);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  CTCR(); // CTCR
  PRINT("CURRENTLY UNDER REPAIR.", 23); // (.")
}


// ================================================
// 0xf253: WORD 'UNK_0xf255' codep=0x224c parp=0xf255
// ================================================

void UNK_0xf255() // UNK_0xf255
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  _gt_R(); // >R
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(h); // I
  UNK_0xf063(); // UNK_0xf063
  if (Pop() == 0) goto label1;
  Push(h); // I
  UNK_0xf0ab(); // UNK_0xf0ab
  Push(h); // I
  UNK_0xf0d0(); // UNK_0xf0d0
  Push(h); // I
  UNK_0xf1d3(); // UNK_0xf1d3
  Push(h); // I
  UNK_0xf221(); // UNK_0xf221

  label1:
  R_gt_(); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf27f: WORD 'UNK_0xf281' codep=0x224c parp=0xf281
// ================================================

void UNK_0xf281() // UNK_0xf281
{
  DUP(); // DUP
  Push(Pop()*2); // 2*
  UNK_0xecc0(); // UNK_0xecc0
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  DUP(); // DUP
  Push(1); // 1
  Push(0x0064);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push(0); // 0
  return;

  label1:
  CTERASE(); // CTERASE
  SWAP(); // SWAP
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM
  PRINT(": ", 2); // (.")
  if (Pop() == 0) goto label2;
  PRINT("NO REPAIRS NEEDED.", 18); // (.")
  goto label3;

  label2:
  CTCR(); // CTCR
  PRINT("DAMAGED BEYOND REPAIR.", 22); // (.")

  label3:
  Push(1); // 1
}


// ================================================
// 0xf2ee: WORD 'UNK_0xf2f0' codep=0x224c parp=0xf2f0
// ================================================

void UNK_0xf2f0() // UNK_0xf2f0
{
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM
  PRINT(":", 1); // (.")
  CTCR(); // CTCR
  PRINT("ALREADY UNDERGOING REPAIRS.", 27); // (.")
}


// ================================================
// 0xf31c: WORD 'UNK_0xf31e' codep=0x224c parp=0xf31e
// ================================================

void UNK_0xf31e() // UNK_0xf31e
{
  CTERASE(); // CTERASE
  PRINT("CEASE REPAIRS ON ", 17); // (.")
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM
  CTCR(); // CTCR
  PRINT("AND BEGIN REPAIRS ON ", 21); // (.")
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM
  PRINT("?", 1); // (.")
  CTCR(); // CTCR
  UNK_0xecc5(); // UNK_0xecc5
  Y_slash_N(); // Y/N
  Push(pp_FTRIG); // FTRIG
  ON(); // ON
  CTERASE(); // CTERASE
}


// ================================================
// 0xf368: WORD 'UNK_0xf36a' codep=0x224c parp=0xf36a
// ================================================

void UNK_0xf36a() // UNK_0xf36a
{
  PRINT("CEASING REPAIRS ON ", 19); // (.")
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf388: WORD 'UNK_0xf38a' codep=0x224c parp=0xf38a
// ================================================

void UNK_0xf38a() // UNK_0xf38a
{
  DUP(); // DUP
  UNK_0xf36a(); // UNK_0xf36a
  Push(Pop()*2); // 2*
  UNK_0xecc0(); // UNK_0xecc0
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  DUP(); // DUP
  C_at_(); // C@
  Push(0x00bf);
  Push(Pop() & Pop()); // AND
  SWAP(); // SWAP
  C_ex_(); // C!
}


// ================================================
// 0xf3a6: WORD 'UNK_0xf3a8' codep=0x224c parp=0xf3a8
// ================================================

void UNK_0xf3a8() // UNK_0xf3a8
{
  PRINT("CONTINUING REPAIRS ON ", 22); // (.")
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf3c9: WORD 'UNK_0xf3cb' codep=0x224c parp=0xf3cb
// ================================================

void UNK_0xf3cb() // UNK_0xf3cb
{
  PRINT("BEGINNING REPAIRS ON ", 21); // (.")
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM
  PRINT(".", 1); // (.")
  Push(pp__ask_REPAIR); // ?REPAIR
  ON(); // ON
}


// ================================================
// 0xf3ef: WORD 'UNK_0xf3f1' codep=0x224c parp=0xf3f1
// ================================================

void UNK_0xf3f1() // UNK_0xf3f1
{
  DUP(); // DUP
  UNK_0xf3cb(); // UNK_0xf3cb
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  Push(Pop()*2); // 2*
  UNK_0xecc0(); // UNK_0xecc0
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  DUP(); // DUP
  C_at_(); // C@
  Push(0x0040);
  Push(Pop() | Pop()); // OR
  SWAP(); // SWAP
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf413: WORD 'UNK_0xf415' codep=0x224c parp=0xf415
// ================================================

void UNK_0xf415() // UNK_0xf415
{
  _gt_R(); // >R
  _at_CRS(); // @CRS
  Push(h); // I
  Push(pp_OCRS); // OCRS
  _ex_(); // !
  Push(h); // I
  Push(0x0054);
  Push(0x00b3);
  ROT(); // ROT
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  POS_dot_(); // POS.
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  Push(0x001d);
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(cc__7); // 7
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  LT_dash_BLUE(); // LT-BLUE
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
  BLT(); // BLT
  _ex_CRS(); // !CRS
  R_gt_(); // R>
  Push(pp_OCRS); // OCRS
  _ex_(); // !
}


// ================================================
// 0xf45b: WORD '(/REPAIR)' codep=0x224c parp=0xf469
// ================================================
// entry

void _ro__slash_REPAIR_rc_() // (/REPAIR)
{
  _ro__slash_DAMAGE_rc_(); // (/DAMAGE)
  Push(pp_NCRS); // NCRS
  _099(); // 099
  Push(0); // 0
  UNK_0xf415(); // UNK_0xf415
  Push(0); // 0
  UNK_0xf255(); // UNK_0xf255
  CTINIT(); // CTINIT
  Push(pp_FTRIG); // FTRIG
  _099(); // 099
  Push(pp_FQUIT); // FQUIT
  _099(); // 099
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S

  label7:
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  OVER(); // OVER
  _dash_(); // -
  Push(cc__7); // 7
  MOD(); // MOD
  DUP(); // DUP
  _0_st_(); // 0<
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(pp_NCRS); // NCRS
  _ex_(); // !
  if (Pop() == 0) goto label1;
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  UNK_0xf415(); // UNK_0xf415
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  DUP(); // DUP
  UNK_0xf415(); // UNK_0xf415
  UNK_0xf255(); // UNK_0xf255

  label1:
  Push(pp_FTRIG); // FTRIG
  Push(Read16(Pop())); // @
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(Pop()*2); // 2*
  UNK_0xecc0(); // UNK_0xecc0
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(h); // I
  Push(Pop()+1); // 1+
  C_at_(); // C@
  _0_gt_(); // 0>
  R_gt_(); // R>
  UNK_0xecc0(); // UNK_0xecc0
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  UNK_0xf281(); // UNK_0xf281
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  Push(0x0040);
  UNK_0xeeb8(); // UNK_0xeeb8
  if (Pop() == 0) goto label3;
  _gt_R(); // >R
  Push(h); // I
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  _eq_(); // =
  if (Pop() == 0) goto label4;
  Push(h); // I
  UNK_0xf2f0(); // UNK_0xf2f0
  goto label5;

  label4:
  Push(h); // I
  UNK_0xf31e(); // UNK_0xf31e
  if (Pop() == 0) goto label6;
  Push(h); // I
  UNK_0xf38a(); // UNK_0xf38a
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  CTCR(); // CTCR
  UNK_0xf3f1(); // UNK_0xf3f1
  goto label5;

  label6:
  Push(h); // I
  UNK_0xf3a8(); // UNK_0xf3a8

  label5:
  R_gt_(); // R>
  Pop(); // DROP
  goto label2;

  label3:
  CTERASE(); // CTERASE
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  UNK_0xf3f1(); // UNK_0xf3f1

  label2:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label7;
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  UNK_0xf415(); // UNK_0xf415
  ICLOSE(); // ICLOSE
}

// 0xf545: db 0x45 0x4e 0x47 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'ENG-VOC____________________ '
  