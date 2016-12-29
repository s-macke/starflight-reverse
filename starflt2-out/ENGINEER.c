// ====== OVERLAY 'ENGINEER' ======
// store offset = 0xeca0
// overlay size   = 0x08c0

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xecb6  codep:0x7420 parp:0xecb6 size:0x0003 C-string:'UNK_0xecb6'
//      UNK_0xecbb  codep:0x7420 parp:0xecbb size:0x0003 C-string:'UNK_0xecbb'
//      UNK_0xecc0  codep:0x7420 parp:0xecc0 size:0x0003 C-string:'UNK_0xecc0'
//      UNK_0xecc5  codep:0x224c parp:0xecc5 size:0x0012 C-string:'UNK_0xecc5'
//      UNK_0xecd9  codep:0x224c parp:0xecd9 size:0x0046 C-string:'UNK_0xecd9'
//      UNK_0xed21  codep:0x224c parp:0xed21 size:0x0012 C-string:'UNK_0xed21'
//      UNK_0xed35  codep:0x224c parp:0xed35 size:0x0075 C-string:'UNK_0xed35'
//      UNK_0xedac  codep:0x224c parp:0xedac size:0x009c C-string:'UNK_0xedac'
//           DBARS  codep:0x224c parp:0xee52 size:0x0044 C-string:'DBARS'
//       (/DAMAGE)  codep:0x224c parp:0xeea4 size:0x0012 C-string:'_ro__slash_DAMAGE_rc_'
//      UNK_0xeeb8  codep:0x224c parp:0xeeb8 size:0x0036 C-string:'UNK_0xeeb8'
//      UNK_0xeef0  codep:0x224c parp:0xeef0 size:0x00ce C-string:'UNK_0xeef0'
//      UNK_0xefc0  codep:0x224c parp:0xefc0 size:0x0009 C-string:'UNK_0xefc0'
//      UNK_0xefcb  codep:0x224c parp:0xefcb size:0x000c C-string:'UNK_0xefcb'
//      UNK_0xefd9  codep:0x224c parp:0xefd9 size:0x000c C-string:'UNK_0xefd9'
//      UNK_0xefe7  codep:0x224c parp:0xefe7 size:0x0013 C-string:'UNK_0xefe7'
//      UNK_0xeffc  codep:0x224c parp:0xeffc size:0x000c C-string:'UNK_0xeffc'
//      UNK_0xf00a  codep:0x224c parp:0xf00a size:0x0015 C-string:'UNK_0xf00a'
//      UNK_0xf021  codep:0x224c parp:0xf021 size:0x0011 C-string:'UNK_0xf021'
//      .SHIP-ITEM  codep:0x4b3b parp:0xf041 size:0x0020 C-string:'_dot_SHIP_dash_ITEM'
//      UNK_0xf063  codep:0x224c parp:0xf063 size:0x0046 C-string:'UNK_0xf063'
//      UNK_0xf0ab  codep:0x224c parp:0xf0ab size:0x0023 C-string:'UNK_0xf0ab'
//      UNK_0xf0d0  codep:0x224c parp:0xf0d0 size:0x0049 C-string:'UNK_0xf0d0'
//      UNK_0xf11b  codep:0x224c parp:0xf11b size:0x0032 C-string:'UNK_0xf11b'
//      UNK_0xf14f  codep:0x224c parp:0xf14f size:0x0082 C-string:'UNK_0xf14f'
//      UNK_0xf1d3  codep:0x224c parp:0xf1d3 size:0x004c C-string:'UNK_0xf1d3'
//      UNK_0xf221  codep:0x224c parp:0xf221 size:0x0032 C-string:'UNK_0xf221'
//      UNK_0xf255  codep:0x224c parp:0xf255 size:0x002a C-string:'UNK_0xf255'
//      UNK_0xf281  codep:0x224c parp:0xf281 size:0x006d C-string:'UNK_0xf281'
//      UNK_0xf2f0  codep:0x224c parp:0xf2f0 size:0x002c C-string:'UNK_0xf2f0'
//      UNK_0xf31e  codep:0x224c parp:0xf31e size:0x004a C-string:'UNK_0xf31e'
//      UNK_0xf36a  codep:0x224c parp:0xf36a size:0x001e C-string:'UNK_0xf36a'
//      UNK_0xf38a  codep:0x224c parp:0xf38a size:0x001c C-string:'UNK_0xf38a'
//      UNK_0xf3a8  codep:0x224c parp:0xf3a8 size:0x0021 C-string:'UNK_0xf3a8'
//      UNK_0xf3cb  codep:0x224c parp:0xf3cb size:0x0024 C-string:'UNK_0xf3cb'
//      UNK_0xf3f1  codep:0x224c parp:0xf3f1 size:0x0022 C-string:'UNK_0xf3f1'
//      UNK_0xf415  codep:0x224c parp:0xf415 size:0x0046 C-string:'UNK_0xf415'
//       (/REPAIR)  codep:0x224c parp:0xf469 size:0x0000 C-string:'_ro__slash_REPAIR_rc_'

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
  Push(pp_XBLT); // XBLT size: 2
  _ex__2(); // !_2
  PRINT("[N Y]", 5); // (.")
}


// ================================================
// 0xecd7: WORD 'UNK_0xecd9' codep=0x224c parp=0xecd9
// ================================================

void UNK_0xecd9() // UNK_0xecd9
{
  SetColor("DK-BLUE");
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
  Push(pp_YBLT); // YBLT size: 2
  _plus__ex__2(); // +!_2
  Push(0x0055);
  Push(pp_XBLT); // XBLT size: 2
  _ex__2(); // !_2
}


// ================================================
// 0xed33: WORD 'UNK_0xed35' codep=0x224c parp=0xed35
// ================================================

void UNK_0xed35() // UNK_0xed35
{
  _gt_2FONT(); // >2FONT
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0x0067);
  Push(0x00c2);
  POS_dot_(); // POS.
  PRINT("DAMAGE", 6); // (.")
  _gt_1FONT(); // >1FONT
  SetColor("DK-BLUE");
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
  Push(Read16(regsp)); // DUP
  Push(Pop()*2); // 2*
  Push(0x65f2); // IFIELD(UNK_0xecc0)
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(h); // I
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(h); // I
  Push(0x65f2); // IFIELD(UNK_0xecc0)
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT size: 2
  _ex__2(); // !_2
  Push(pp_XORMODE); // XORMODE size: 2
  _099(); // 099
  Push(cc__5); // 5
  Push(pp_LBLT); // LBLT size: 2
  _ex__2(); // !_2
  Push(h); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()*2); // 2*
  Push(cc__5); // 5
  _slash_(); // /
  Push(pp_WBLT); // WBLT size: 2
  _ex__2(); // !_2
  Push(0x0072);
  Push(0x00b2);
  ROT(); // ROT
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  POS_dot_(); // POS.
  SetColor("WHITE");
  SetColor("BLUE");
  SetColor("DK-GREE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(pp_WBLT); // WBLT size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  BLT(); // BLT

  label2:
  Push(0x0072);
  Push(pp_WBLT); // WBLT size: 2
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_XBLT); // XBLT size: 2
  _ex__2(); // !_2
  Push(0x0028);
  Push(pp_WBLT); // WBLT size: 2
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_WBLT); // WBLT size: 2
  _ex__2(); // !_2
  SetColor("GREY1");
  SetColor("RED");
  SetColor("RED");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(pp_WBLT); // WBLT size: 2
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
  Push2Words("*SHIP");
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

  Push(0x65f2); // IFIELD(UNK_0xecc0)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  Push(0x000f);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(0x1d4c); Push(0x0000);
  goto label2;

  label1:
  Push(0x3a98); Push(0x0000);

  label2:
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_VSTIME); // VSTIME size: 4
  D_ex_(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee96: WORD '(/DAMAGE)' codep=0x224c parp=0xeea4
// ================================================
// entry

void _ro__slash_DAMAGE_rc_() // (/DAMAGE)
{
  SetColor("BLACK");
  ERASE_dash_A(); // ERASE-A
  UNK_0xecd9(); // UNK_0xecd9
  UNK_0xed35(); // UNK_0xed35
  Push(cc__3); // 3
  Push(pp__n_AUX); // #AUX size: 2
  _ex__2(); // !_2
  DBARS(); // DBARS
}


// ================================================
// 0xeeb6: WORD 'UNK_0xeeb8' codep=0x224c parp=0xeeb8
// ================================================

void UNK_0xeeb8() // UNK_0xeeb8
{
  _gt_R(); // >R
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0); // 0
  Push(cc__7); // 7
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x65f2); // IFIELD(UNK_0xecc0)
  Push(i); // I
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
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


// ================================================
// 0xefbe: WORD 'UNK_0xefc0' codep=0x224c parp=0xefc0
// ================================================

void UNK_0xefc0() // UNK_0xefc0
{
  PRINT("HULL", 4); // (.")
}


// ================================================
// 0xefc9: WORD 'UNK_0xefcb' codep=0x224c parp=0xefcb
// ================================================

void UNK_0xefcb() // UNK_0xefcb
{
  PRINT("ENGINES", 7); // (.")
}


// ================================================
// 0xefd7: WORD 'UNK_0xefd9' codep=0x224c parp=0xefd9
// ================================================

void UNK_0xefd9() // UNK_0xefd9
{
  PRINT("SENSORS", 7); // (.")
}


// ================================================
// 0xefe5: WORD 'UNK_0xefe7' codep=0x224c parp=0xefe7
// ================================================

void UNK_0xefe7() // UNK_0xefe7
{
  PRINT("COMMUNICATIONS", 14); // (.")
}


// ================================================
// 0xeffa: WORD 'UNK_0xeffc' codep=0x224c parp=0xeffc
// ================================================

void UNK_0xeffc() // UNK_0xeffc
{
  PRINT("SHIELDS", 7); // (.")
}


// ================================================
// 0xf008: WORD 'UNK_0xf00a' codep=0x224c parp=0xf00a
// ================================================

void UNK_0xf00a() // UNK_0xf00a
{
  PRINT("MISSILE LAUNCHER", 16); // (.")
}


// ================================================
// 0xf01f: WORD 'UNK_0xf021' codep=0x224c parp=0xf021
// ================================================

void UNK_0xf021() // UNK_0xf021
{
  PRINT("LASER CANNON", 12); // (.")
}


// ================================================
// 0xf032: WORD '.SHIP-ITEM' codep=0x4b3b parp=0xf041
// ================================================

void _dot_SHIP_dash_ITEM() // .SHIP-ITEM
{
  switch(Pop()) // .SHIP-ITEM
  {
  case 0:
    UNK_0xefc0(); // UNK_0xefc0
    break;
  case 1:
    UNK_0xefcb(); // UNK_0xefcb
    break;
  case 2:
    UNK_0xefd9(); // UNK_0xefd9
    break;
  case 3:
    UNK_0xefe7(); // UNK_0xefe7
    break;
  case 4:
    UNK_0xeffc(); // UNK_0xeffc
    break;
  case 5:
    UNK_0xf00a(); // UNK_0xf00a
    break;
  case 6:
    UNK_0xf021(); // UNK_0xf021
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf061: WORD 'UNK_0xf063' codep=0x224c parp=0xf063
// ================================================

void UNK_0xf063() // UNK_0xf063
{
  Push2Words("NULL");
  CTPOS_dot_(); // CTPOS.
  Push(Read16(regsp)); // DUP
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(": ", 2); // (.")
  Push(Pop()*2); // 2*
  Push(0x65f2); // IFIELD(UNK_0xecc0)
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(h); // I
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(h); // I
  Push(0x65f2); // IFIELD(UNK_0xecc0)
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(h); // I
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xeef0(); // UNK_0xeef0
  Push(h); // I
  Push(Read8(Pop())&0xFF); // C@
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
  Push(0x65f2); // IFIELD(UNK_0xecc0)
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(0); // 0
  _dot_R(); // .R
  PRINT("%", 1); // (.")
}


// ================================================
// 0xf0ce: WORD 'UNK_0xf0d0' codep=0x224c parp=0xf0d0
// ================================================

void UNK_0xf0d0() // UNK_0xf0d0
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  CTCR(); // CTCR
  PRINT("CURRENT FUNCTIONALITY: ", 23); // (.")
  Push(Pop()*2); // 2*
  Push(0x65f2); // IFIELD(UNK_0xecc0)
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
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
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65fb); // IFIELD(UNK_0xecbb)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x00fb);
  Push(0x65fd); // IFIELD(UNK_0xecb6)
  Push(Read8(Pop())&0xFF); // C@
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
  Push(Read16(regsp)); // DUP
  Push(0x003c);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(cc__5); // 5
  _slash_MOD(); // /MOD
  SWAP(); // SWAP
  Push(2); // 2
  _gt_(); // >
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  _dot_(); // .
  PRINT("MINUTE", 6); // (.")
  goto label2;

  label1:
  Push(Read16(regsp)); // DUP
  Push(0x05a0);
  _st_(); // <
  if (Pop() == 0) goto label3;
  Push(0x003c);
  _slash_MOD(); // /MOD
  SWAP(); // SWAP
  Push(0x001e);
  _gt_(); // >
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
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
  Push(Read16(regsp)); // DUP
  _dot_(); // .
  PRINT("DAY", 3); // (.")

  label2:
  Push(1); // 1
  _gt_(); // >
  if (Pop() == 0) goto label4;
  Push(0x0053);
  Exec(EMIT); // call of word 0x2731 '(EMIT)'

  label4:
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf1d1: WORD 'UNK_0xf1d3' codep=0x224c parp=0xf1d3
// ================================================

void UNK_0xf1d3() // UNK_0xf1d3
{
  Push(Pop()*2); // 2*
  Push(0x65f2); // IFIELD(UNK_0xecc0)
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
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
  Push(0x65f2); // IFIELD(UNK_0xecc0)
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
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
  Push2Words("*SHIP");
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
  Push(Read16(regsp)); // DUP
  Push(Pop()*2); // 2*
  Push(0x65f2); // IFIELD(UNK_0xecc0)
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
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
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM case
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
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM case
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
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM case
  CTCR(); // CTCR
  PRINT("AND BEGIN REPAIRS ON ", 21); // (.")
  Push(pp_OCRS); // OCRS size: 7
  Push(Read16(Pop())); // @
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT("?", 1); // (.")
  CTCR(); // CTCR
  UNK_0xecc5(); // UNK_0xecc5
  Y_slash_N(); // Y/N
  Push(pp_FTRIG); // FTRIG size: 2
  ON_2(); // ON_2
  CTERASE(); // CTERASE
}


// ================================================
// 0xf368: WORD 'UNK_0xf36a' codep=0x224c parp=0xf36a
// ================================================

void UNK_0xf36a() // UNK_0xf36a
{
  PRINT("CEASING REPAIRS ON ", 19); // (.")
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf388: WORD 'UNK_0xf38a' codep=0x224c parp=0xf38a
// ================================================

void UNK_0xf38a() // UNK_0xf38a
{
  Push(Read16(regsp)); // DUP
  UNK_0xf36a(); // UNK_0xf36a
  Push(Pop()*2); // 2*
  Push(0x65f2); // IFIELD(UNK_0xecc0)
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  Push(0x00bf);
  Push(Pop() & Pop()); // AND
  SWAP(); // SWAP
  C_ex__2(); // C!_2
}


// ================================================
// 0xf3a6: WORD 'UNK_0xf3a8' codep=0x224c parp=0xf3a8
// ================================================

void UNK_0xf3a8() // UNK_0xf3a8
{
  PRINT("CONTINUING REPAIRS ON ", 22); // (.")
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf3c9: WORD 'UNK_0xf3cb' codep=0x224c parp=0xf3cb
// ================================================

void UNK_0xf3cb() // UNK_0xf3cb
{
  PRINT("BEGINNING REPAIRS ON ", 21); // (.")
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(".", 1); // (.")
  Push(pp__ask_REPAIR); // ?REPAIR size: 2
  ON_2(); // ON_2
}


// ================================================
// 0xf3ef: WORD 'UNK_0xf3f1' codep=0x224c parp=0xf3f1
// ================================================

void UNK_0xf3f1() // UNK_0xf3f1
{
  Push(Read16(regsp)); // DUP
  UNK_0xf3cb(); // UNK_0xf3cb
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Pop()*2); // 2*
  Push(0x65f2); // IFIELD(UNK_0xecc0)
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0040);
  Push(Pop() | Pop()); // OR
  SWAP(); // SWAP
  C_ex__2(); // C!_2
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
  Push(pp_OCRS); // OCRS size: 7
  _ex__2(); // !_2
  Push(h); // I
  Push(0x0054);
  Push(0x00b3);
  ROT(); // ROT
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  POS_dot_(); // POS.
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT size: 2
  _ex__2(); // !_2
  Push(0x001d);
  Push(pp_WBLT); // WBLT size: 2
  _ex__2(); // !_2
  Push(cc__7); // 7
  Push(pp_LBLT); // LBLT size: 2
  _ex__2(); // !_2
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE size: 2
  ON_2(); // ON_2
  BLT(); // BLT
  _ex_CRS(); // !CRS
  R_gt_(); // R>
  Push(pp_OCRS); // OCRS size: 7
  _ex__2(); // !_2
}


// ================================================
// 0xf45b: WORD '(/REPAIR)' codep=0x224c parp=0xf469
// ================================================
// entry

void _ro__slash_REPAIR_rc_() // (/REPAIR)
{
  _ro__slash_DAMAGE_rc_(); // (/DAMAGE)
  Push(pp_NCRS); // NCRS size: 2
  _099(); // 099
  Push(0); // 0
  UNK_0xf415(); // UNK_0xf415
  Push(0); // 0
  UNK_0xf255(); // UNK_0xf255
  CTINIT(); // CTINIT
  Push(pp_FTRIG); // FTRIG size: 2
  _099(); // 099
  Push(pp_FQUIT); // FQUIT size: 2
  _099(); // 099
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S

  label7:
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  Push(pp_NCRS); // NCRS size: 2
  Push(Read16(Pop())); // @
  OVER(); // OVER
  _dash_(); // -
  Push(cc__7); // 7
  MOD(); // MOD
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(pp_NCRS); // NCRS size: 2
  _ex__2(); // !_2
  if (Pop() == 0) goto label1;
  Push(pp_OCRS); // OCRS size: 7
  Push(Read16(Pop())); // @
  UNK_0xf415(); // UNK_0xf415
  Push(pp_NCRS); // NCRS size: 2
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  UNK_0xf415(); // UNK_0xf415
  UNK_0xf255(); // UNK_0xf255

  label1:
  Push(pp_FTRIG); // FTRIG size: 2
  Push(Read16(Pop())); // @
  Push(pp_OCRS); // OCRS size: 7
  Push(Read16(Pop())); // @
  Push(Pop()*2); // 2*
  Push(0x65f2); // IFIELD(UNK_0xecc0)
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(h); // I
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  R_gt_(); // R>
  Push(0x65f2); // IFIELD(UNK_0xecc0)
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(pp_OCRS); // OCRS size: 7
  Push(Read16(Pop())); // @
  UNK_0xf281(); // UNK_0xf281
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  Push(0x0040);
  UNK_0xeeb8(); // UNK_0xeeb8
  if (Pop() == 0) goto label3;
  _gt_R(); // >R
  Push(h); // I
  Push(pp_OCRS); // OCRS size: 7
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
  Push(pp_OCRS); // OCRS size: 7
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
  Push(pp_OCRS); // OCRS size: 7
  Push(Read16(Pop())); // @
  UNK_0xf3f1(); // UNK_0xf3f1

  label2:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label7;
  Push(pp_OCRS); // OCRS size: 7
  Push(Read16(Pop())); // @
  UNK_0xf415(); // UNK_0xf415
  ICLOSE(); // ICLOSE
}

// 0xf545: db 0x45 0x4e 0x47 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'ENG-VOC____________________ '
  