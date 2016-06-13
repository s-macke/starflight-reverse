// ====== OVERLAY 'ENGINEER' ======
// store offset = 0xec50
// overlay size   = 0x0910

#include"cpu.h"
#include"starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xec66  codep:0x744d parp:0xec66 size:0x0003 C-string:'UNK_0xec66'
// 1704:      UNK_0xec6b  codep:0x744d parp:0xec6b size:0x0003 C-string:'UNK_0xec6b'
// 1705:      UNK_0xec70  codep:0x744d parp:0xec70 size:0x0003 C-string:'UNK_0xec70'
// 1706:      UNK_0xec75  codep:0x224c parp:0xec75 size:0x0012 C-string:'UNK_0xec75'
// 1707:      UNK_0xec89  codep:0x224c parp:0xec89 size:0x0046 C-string:'UNK_0xec89'
// 1708:      UNK_0xecd1  codep:0x224c parp:0xecd1 size:0x0012 C-string:'UNK_0xecd1'
// 1709:      UNK_0xece5  codep:0x224c parp:0xece5 size:0x0075 C-string:'UNK_0xece5'
// 1710:      UNK_0xed5c  codep:0x224c parp:0xed5c size:0x009c C-string:'UNK_0xed5c'
// 1711:           DBARS  codep:0x224c parp:0xee02 size:0x0044 C-string:'DBARS'
// 1712:       (/DAMAGE)  codep:0x224c parp:0xee54 size:0x0012 C-string:'_ro__slash_DAMAGE_rc_'
// 1713:      UNK_0xee68  codep:0x224c parp:0xee68 size:0x0036 C-string:'UNK_0xee68'
// 1714:      UNK_0xeea0  codep:0x224c parp:0xeea0 size:0x0142 C-string:'UNK_0xeea0'
// 1715:      .SHIP-ITEM  codep:0x4a4f parp:0xeff1 size:0x0020 C-string:'_dot_SHIP_dash_ITEM'
// 1716:      UNK_0xf013  codep:0x224c parp:0xf013 size:0x0046 C-string:'UNK_0xf013'
// 1717:      UNK_0xf05b  codep:0x224c parp:0xf05b size:0x0023 C-string:'UNK_0xf05b'
// 1718:      UNK_0xf080  codep:0x224c parp:0xf080 size:0x0049 C-string:'UNK_0xf080'
// 1719:      UNK_0xf0cb  codep:0x224c parp:0xf0cb size:0x0032 C-string:'UNK_0xf0cb'
// 1720:      UNK_0xf0ff  codep:0x224c parp:0xf0ff size:0x0082 C-string:'UNK_0xf0ff'
// 1721:      UNK_0xf183  codep:0x224c parp:0xf183 size:0x004c C-string:'UNK_0xf183'
// 1722:      UNK_0xf1d1  codep:0x224c parp:0xf1d1 size:0x0032 C-string:'UNK_0xf1d1'
// 1723:      UNK_0xf205  codep:0x224c parp:0xf205 size:0x002a C-string:'UNK_0xf205'
// 1724:      UNK_0xf231  codep:0x224c parp:0xf231 size:0x006d C-string:'UNK_0xf231'
// 1725:      UNK_0xf2a0  codep:0x224c parp:0xf2a0 size:0x002c C-string:'UNK_0xf2a0'
// 1726:      UNK_0xf2ce  codep:0x224c parp:0xf2ce size:0x004a C-string:'UNK_0xf2ce'
// 1727:      UNK_0xf31a  codep:0x224c parp:0xf31a size:0x001e C-string:'UNK_0xf31a'
// 1728:      UNK_0xf33a  codep:0x224c parp:0xf33a size:0x001c C-string:'UNK_0xf33a'
// 1729:      UNK_0xf358  codep:0x224c parp:0xf358 size:0x0021 C-string:'UNK_0xf358'
// 1730:      UNK_0xf37b  codep:0x224c parp:0xf37b size:0x0024 C-string:'UNK_0xf37b'
// 1731:      UNK_0xf3a1  codep:0x224c parp:0xf3a1 size:0x0022 C-string:'UNK_0xf3a1'
// 1732:      UNK_0xf3c5  codep:0x224c parp:0xf3c5 size:0x0046 C-string:'UNK_0xf3c5'
// 1733:       (/REPAIR)  codep:0x224c parp:0xf419 size:0x0000 C-string:'_ro__slash_REPAIR_rc_'

// =================================
// =========== VARIABLES ===========
// =================================



// 0xec62: db 0x8b 0x00 '  '

// ================================================
// 0xec64: WORD 'UNK_0xec66' codep=0x744d parp=0xec66
// ================================================
// 0xec66: db 0x10 0x1c 0x01 '   '

// ================================================
// 0xec69: WORD 'UNK_0xec6b' codep=0x744d parp=0xec6b
// ================================================
// 0xec6b: db 0x11 0x1a 0x03 '   '

// ================================================
// 0xec6e: WORD 'UNK_0xec70' codep=0x744d parp=0xec70
// ================================================
// 0xec70: db 0x14 0x11 0x02 '   '

// ================================================
// 0xec73: WORD 'UNK_0xec75' codep=0x224c parp=0xec75
// ================================================

void UNK_0xec75() // UNK_0xec75
{
  Push(0x0040);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("[N Y]", 5); // (.")
}


// ================================================
// 0xec87: WORD 'UNK_0xec89' codep=0x224c parp=0xec89
// ================================================

void UNK_0xec89() // UNK_0xec89
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
// 0xeccf: WORD 'UNK_0xecd1' codep=0x224c parp=0xecd1
// ================================================

void UNK_0xecd1() // UNK_0xecd1
{
  Push(0xfff9);
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
  Push(0x0055);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
}


// ================================================
// 0xece3: WORD 'UNK_0xece5' codep=0x224c parp=0xece5
// ================================================

void UNK_0xece5() // UNK_0xece5
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
  UNK_0xecd1(); // UNK_0xecd1
  PRINT("ENGINES", 7); // (.")
  UNK_0xecd1(); // UNK_0xecd1
  PRINT("SENSORS", 7); // (.")
  UNK_0xecd1(); // UNK_0xecd1
  PRINT("COMM.", 5); // (.")
  UNK_0xecd1(); // UNK_0xecd1
  PRINT("SHIELD", 6); // (.")
  UNK_0xecd1(); // UNK_0xecd1
  PRINT("MISSILE", 7); // (.")
  UNK_0xecd1(); // UNK_0xecd1
  PRINT("LASER", 5); // (.")
}


// ================================================
// 0xed5a: WORD 'UNK_0xed5c' codep=0x224c parp=0xed5c
// ================================================

void UNK_0xed5c() // UNK_0xed5c
{
  DUP(); // DUP
  Push(Pop()*2); // 2*
  UNK_0xec70(); // UNK_0xec70
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(h); // I
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(h); // I
  UNK_0xec70(); // UNK_0xec70
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
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
  GREY2(); // GREY2
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
  GREY1(); // GREY1
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
// 0xedf8: WORD 'DBARS' codep=0x224c parp=0xee02
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
  UNK_0xed5c(); // UNK_0xed5c
  i++;
  } while(i<imax); // (LOOP) 0xfffa

  UNK_0xec70(); // UNK_0xec70
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
// 0xee46: WORD '(/DAMAGE)' codep=0x224c parp=0xee54
// ================================================
// entry

void _ro__slash_DAMAGE_rc_() // (/DAMAGE)
{
  BLACK(); // BLACK
  ERASE_dash_A(); // ERASE-A
  UNK_0xec89(); // UNK_0xec89
  UNK_0xece5(); // UNK_0xece5
  Push(cc__3); // 3
  Push(pp__n_AUX); // #AUX
  _ex_(); // !
  DBARS(); // DBARS
}


// ================================================
// 0xee66: WORD 'UNK_0xee68' codep=0x224c parp=0xee68
// ================================================

void UNK_0xee68() // UNK_0xee68
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
  UNK_0xec70(); // UNK_0xec70
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
// 0xee9e: WORD 'UNK_0xeea0' codep=0x224c parp=0xeea0
// ================================================

void UNK_0xeea0() // UNK_0xeea0
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

// 0xef6e: db 0x4c 0x22 0xdc 0x1b 0x04 0x48 0x55 0x4c 0x4c 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x45 0x4e 0x47 0x49 0x4e 0x45 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x53 0x45 0x4e 0x53 0x4f 0x52 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x0e 0x43 0x4f 0x4d 0x4d 0x55 0x4e 0x49 0x43 0x41 0x54 0x49 0x4f 0x4e 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x53 0x48 0x49 0x45 0x4c 0x44 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x10 0x4d 0x49 0x53 0x53 0x49 0x4c 0x45 0x20 0x4c 0x41 0x55 0x4e 0x43 0x48 0x45 0x52 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x0c 0x4c 0x41 0x53 0x45 0x52 0x20 0x43 0x41 0x4e 0x4e 0x4f 0x4e 0x90 0x16 'L"   HULL  L"   ENGINES  L"   SENSORS  L"   COMMUNICATIONS  L"   SHIELDS  L"   MISSILE LAUNCHER  L"   LASER CANNON  '

// ================================================
// 0xefe2: WORD '.SHIP-ITEM' codep=0x4a4f parp=0xeff1
// ================================================
// 0xeff1: db 0x07 0x00 0x48 0x3a 0x00 0x00 0x70 0xef 0x01 0x00 0x7b 0xef 0x02 0x00 0x89 0xef 0x03 0x00 0x97 0xef 0x04 0x00 0xac 0xef 0x05 0x00 0xba 0xef 0x06 0x00 0xd1 0xef '  H:  p   {                     '

// ================================================
// 0xf011: WORD 'UNK_0xf013' codep=0x224c parp=0xf013
// ================================================

void UNK_0xf013() // UNK_0xf013
{
  NULL(); // NULL
  CTPOS_dot_(); // CTPOS.
  DUP(); // DUP
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM
  PRINT(": ", 2); // (.")
  Push(Pop()*2); // 2*
  UNK_0xec70(); // UNK_0xec70
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(h); // I
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(h); // I
  UNK_0xec70(); // UNK_0xec70
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(h); // I
  C_at_(); // C@
  UNK_0xeea0(); // UNK_0xeea0
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
// 0xf059: WORD 'UNK_0xf05b' codep=0x224c parp=0xf05b
// ================================================

void UNK_0xf05b() // UNK_0xf05b
{
  CTCR(); // CTCR
  PRINT("EFFICIENCY: ", 12); // (.")
  Push(Pop()*2); // 2*
  UNK_0xec70(); // UNK_0xec70
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  Push(0); // 0
  _dot_R(); // .R
  PRINT("%", 1); // (.")
}


// ================================================
// 0xf07e: WORD 'UNK_0xf080' codep=0x224c parp=0xf080
// ================================================

void UNK_0xf080() // UNK_0xf080
{
  _ask_DUP(); // ?DUP
  if (Pop() == 0) return;
  CTCR(); // CTCR
  PRINT("CURRENT FUNCTIONALITY: ", 23); // (.")
  Push(Pop()*2); // 2*
  UNK_0xec70(); // UNK_0xec70
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
// 0xf0c9: WORD 'UNK_0xf0cb' codep=0x224c parp=0xf0cb
// ================================================

void UNK_0xf0cb() // UNK_0xf0cb
{
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  UNK_0xec6b(); // UNK_0xec6b
  _at__gt_C_plus_S(); // @>C+S
  Push(0x00fb);
  UNK_0xec66(); // UNK_0xec66
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
// 0xf0fd: WORD 'UNK_0xf0ff' codep=0x224c parp=0xf0ff
// ================================================

void UNK_0xf0ff() // UNK_0xf0ff
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
// 0xf181: WORD 'UNK_0xf183' codep=0x224c parp=0xf183
// ================================================

void UNK_0xf183() // UNK_0xf183
{
  Push(Pop()*2); // 2*
  UNK_0xec70(); // UNK_0xec70
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  DUP(); // DUP
  Push(0x0064);
  _st_(); // <
  if (Pop() == 0) goto label1;
  CTCR(); // CTCR
  PRINT("ESTIMATED TIME FOR COMPLETE REPAIRS: ", 37); // (.")
  CTCR(); // CTCR
  UNK_0xf0cb(); // UNK_0xf0cb
  UNK_0xf0ff(); // UNK_0xf0ff
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf1cf: WORD 'UNK_0xf1d1' codep=0x224c parp=0xf1d1
// ================================================

void UNK_0xf1d1() // UNK_0xf1d1
{
  Push(Pop()*2); // 2*
  UNK_0xec70(); // UNK_0xec70
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
// 0xf203: WORD 'UNK_0xf205' codep=0x224c parp=0xf205
// ================================================

void UNK_0xf205() // UNK_0xf205
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  _gt_R(); // >R
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(h); // I
  UNK_0xf013(); // UNK_0xf013
  if (Pop() == 0) goto label1;
  Push(h); // I
  UNK_0xf05b(); // UNK_0xf05b
  Push(h); // I
  UNK_0xf080(); // UNK_0xf080
  Push(h); // I
  UNK_0xf183(); // UNK_0xf183
  Push(h); // I
  UNK_0xf1d1(); // UNK_0xf1d1

  label1:
  R_gt_(); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf22f: WORD 'UNK_0xf231' codep=0x224c parp=0xf231
// ================================================

void UNK_0xf231() // UNK_0xf231
{
  DUP(); // DUP
  Push(Pop()*2); // 2*
  UNK_0xec70(); // UNK_0xec70
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
// 0xf29e: WORD 'UNK_0xf2a0' codep=0x224c parp=0xf2a0
// ================================================

void UNK_0xf2a0() // UNK_0xf2a0
{
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM
  PRINT(":", 1); // (.")
  CTCR(); // CTCR
  PRINT("ALREADY UNDERGOING REPAIRS.", 27); // (.")
}


// ================================================
// 0xf2cc: WORD 'UNK_0xf2ce' codep=0x224c parp=0xf2ce
// ================================================

void UNK_0xf2ce() // UNK_0xf2ce
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
  UNK_0xec75(); // UNK_0xec75
  Y_slash_N(); // Y/N
  Push(pp_FTRIG); // FTRIG
  ON(); // ON
  CTERASE(); // CTERASE
}


// ================================================
// 0xf318: WORD 'UNK_0xf31a' codep=0x224c parp=0xf31a
// ================================================

void UNK_0xf31a() // UNK_0xf31a
{
  PRINT("CEASING REPAIRS ON ", 19); // (.")
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf338: WORD 'UNK_0xf33a' codep=0x224c parp=0xf33a
// ================================================

void UNK_0xf33a() // UNK_0xf33a
{
  DUP(); // DUP
  UNK_0xf31a(); // UNK_0xf31a
  Push(Pop()*2); // 2*
  UNK_0xec70(); // UNK_0xec70
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
// 0xf356: WORD 'UNK_0xf358' codep=0x224c parp=0xf358
// ================================================

void UNK_0xf358() // UNK_0xf358
{
  PRINT("CONTINUING REPAIRS ON ", 22); // (.")
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf379: WORD 'UNK_0xf37b' codep=0x224c parp=0xf37b
// ================================================

void UNK_0xf37b() // UNK_0xf37b
{
  PRINT("BEGINNING REPAIRS ON ", 21); // (.")
  _dot_SHIP_dash_ITEM(); // .SHIP-ITEM
  PRINT(".", 1); // (.")
  Push(pp__ask_REPAIR); // ?REPAIR
  ON(); // ON
}


// ================================================
// 0xf39f: WORD 'UNK_0xf3a1' codep=0x224c parp=0xf3a1
// ================================================

void UNK_0xf3a1() // UNK_0xf3a1
{
  DUP(); // DUP
  UNK_0xf37b(); // UNK_0xf37b
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  Push(Pop()*2); // 2*
  UNK_0xec70(); // UNK_0xec70
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
// 0xf3c3: WORD 'UNK_0xf3c5' codep=0x224c parp=0xf3c5
// ================================================

void UNK_0xf3c5() // UNK_0xf3c5
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
// 0xf40b: WORD '(/REPAIR)' codep=0x224c parp=0xf419
// ================================================
// entry

void _ro__slash_REPAIR_rc_() // (/REPAIR)
{
  _ro__slash_DAMAGE_rc_(); // (/DAMAGE)
  Push(pp_NCRS); // NCRS
  OFF(); // OFF
  Push(0); // 0
  UNK_0xf3c5(); // UNK_0xf3c5
  Push(0); // 0
  UNK_0xf205(); // UNK_0xf205
  CTINIT(); // CTINIT
  Push(pp_FTRIG); // FTRIG
  OFF(); // OFF
  Push(pp_FQUIT); // FQUIT
  OFF(); // OFF
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
  UNK_0xf3c5(); // UNK_0xf3c5
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  DUP(); // DUP
  UNK_0xf3c5(); // UNK_0xf3c5
  UNK_0xf205(); // UNK_0xf205

  label1:
  Push(pp_FTRIG); // FTRIG
  Push(Read16(Pop())); // @
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(Pop()*2); // 2*
  UNK_0xec70(); // UNK_0xec70
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(h); // I
  Push(Pop()+1); // 1+
  C_at_(); // C@
  _0_gt_(); // 0>
  R_gt_(); // R>
  UNK_0xec70(); // UNK_0xec70
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  UNK_0xf231(); // UNK_0xf231
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  Push(0x0040);
  UNK_0xee68(); // UNK_0xee68
  if (Pop() == 0) goto label3;
  _gt_R(); // >R
  Push(h); // I
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  _eq_(); // =
  if (Pop() == 0) goto label4;
  Push(h); // I
  UNK_0xf2a0(); // UNK_0xf2a0
  goto label5;

  label4:
  Push(h); // I
  UNK_0xf2ce(); // UNK_0xf2ce
  if (Pop() == 0) goto label6;
  Push(h); // I
  UNK_0xf33a(); // UNK_0xf33a
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  CTCR(); // CTCR
  UNK_0xf3a1(); // UNK_0xf3a1
  goto label5;

  label6:
  Push(h); // I
  UNK_0xf358(); // UNK_0xf358

  label5:
  R_gt_(); // R>
  Pop(); // DROP
  goto label2;

  label3:
  CTERASE(); // CTERASE
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  UNK_0xf3a1(); // UNK_0xf3a1

  label2:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label7;
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  UNK_0xf3c5(); // UNK_0xf3c5
  ICLOSE(); // ICLOSE
}

// 0xf4f5: db 0x45 0x4e 0x47 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x45 0x4e 0x47 0x49 0x4e 0x45 0x45 0x52 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x29 0x5f 0x5f 0x31 0x33 0x39 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x4d 0x49 0x53 0x43 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'ENG-VOC_________________________ ENGINEER-------------------- )__139_____________________for MISC---------- '
  