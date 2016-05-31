// ====== OVERLAY 'CHKFLIGHT-OV' ======

#include"interface.h"

// store offset = 0xf170
// overlay size   = 0x03f0

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xf186  codep:0x7420 parp:0xf186 size:0x0003 C-string:'UNK_0xf186'
// 1870:      UNK_0xf18b  codep:0x7420 parp:0xf18b size:0x0003 C-string:'UNK_0xf18b'
// 1871:      UNK_0xf190  codep:0x7420 parp:0xf190 size:0x0003 C-string:'UNK_0xf190'
// 1872:      UNK_0xf195  codep:0x224c parp:0xf195 size:0x0034 C-string:'UNK_0xf195'
// 1873:      UNK_0xf1cb  codep:0x224c parp:0xf1cb size:0x0091 C-string:'UNK_0xf1cb'
// 1874:      UNK_0xf25e  codep:0x224c parp:0xf25e size:0x0016 C-string:'UNK_0xf25e'
// 1875:      UNK_0xf276  codep:0x224c parp:0xf276 size:0x0036 C-string:'UNK_0xf276'
// 1876:      UNK_0xf2ae  codep:0x224c parp:0xf2ae size:0x0063 C-string:'UNK_0xf2ae'
// 1877:           (.CS)  codep:0x4b3b parp:0xf31b size:0x0010 C-string:'_ro__dot_CS_rc_'
// 1878:      UNK_0xf32d  codep:0x1d29 parp:0xf32d size:0x0002 C-string:'UNK_0xf32d'
// 1879:      UNK_0xf331  codep:0x224c parp:0xf331 size:0x0045 C-string:'UNK_0xf331'
// 1880:      UNK_0xf378  codep:0x224c parp:0xf378 size:0x002f C-string:'UNK_0xf378'
// 1881:      UNK_0xf3a9  codep:0x224c parp:0xf3a9 size:0x005b C-string:'UNK_0xf3a9'
// 1882:      UNK_0xf406  codep:0x224c parp:0xf406 size:0x000c C-string:'UNK_0xf406'
// 1883:      UNK_0xf414  codep:0x224c parp:0xf414 size:0x004c C-string:'UNK_0xf414'
// 1884:      UNK_0xf462  codep:0x224c parp:0xf462 size:0x002e C-string:'UNK_0xf462'
// 1885:      UNK_0xf492  codep:0x224c parp:0xf492 size:0x0028 C-string:'UNK_0xf492'
// 1886:      UNK_0xf4bc  codep:0x224c parp:0xf4bc size:0x0048 C-string:'UNK_0xf4bc'
// 1887:      ?CAN-LEAVE  codep:0x224c parp:0xf513 size:0x004d C-string:'_ask_CAN_minus_LEAVE'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf32d[2] = {0x3a, 0x20}; // UNK_0xf32d



// 0xf182: db 0x3e 0x00 '> '

// ================================================
// 0xf184: WORD 'UNK_0xf186' codep=0x7420 parp=0xf186
// ================================================
// 0xf186: db 0x10 0x20 0x02 '   '

// ================================================
// 0xf189: WORD 'UNK_0xf18b' codep=0x7420 parp=0xf18b
// ================================================
// 0xf18b: db 0x11 0x11 0x12 '   '

// ================================================
// 0xf18e: WORD 'UNK_0xf190' codep=0x7420 parp=0xf190
// ================================================
// 0xf190: db 0x14 0x13 0x02 '   '

// ================================================
// 0xf193: WORD 'UNK_0xf195' codep=0x224c parp=0xf195
// ================================================

void UNK_0xf195() // UNK_0xf195
{
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label488;

  IOPEN(); // IOPEN
  Push(0x001a);
  Push(0x0017);
  IFIND(); // IFIND
  if (Pop() == 0) goto label489;

  Push(cc_TRUE); // TRUE
  goto label491;

  label489:
  Push(cc_FALSE); // FALSE

  label491:
  goto label490;

  label488:
  Push(cc_FALSE); // FALSE

  label490:
}


// ================================================
// 0xf1c9: WORD 'UNK_0xf1cb' codep=0x224c parp=0xf1cb
// ================================================

void UNK_0xf1cb() // UNK_0xf1cb
{
  GREY1(); // GREY1
  _ex_COLOR(); // !COLOR
  SFILL(); // SFILL
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(2); // 2
  Push(1); // 1
  Push(0x009d);
  Push(1); // 1
  LLINE(); // LLINE
  Push(2); // 2
  Push(0x00b9);
  Push(0x009d);
  Push(0x00b9);
  LLINE(); // LLINE
  Push(1); // 1
  Push(0x00b9);
  Push(1); // 1
  Push(1); // 1
  LLINE(); // LLINE
  Push(0x009e);
  Push(0x00b9);
  Push(0x009e);
  Push(1); // 1
  LLINE(); // LLINE
  _gt_3FONT(); // >3FONT
  Push(0x0013);
  Push(0x00c4);
  POS_dot_(); // POS.
  PRINT("PRE", 3); // (.")
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(0x00c0);
  OVER(); // OVER
  Push(Pop()+2); // 2+
  OVER(); // OVER
  LLINE(); // LLINE
  Push(cc__5); // 5
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("FLIGHT", 6); // (.")
  Push(cc__6); // 6
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("CHECK", 5); // (.")
  Push(2); // 2
  Push(0x00c5);
  BLACK(); // BLACK
  _dot_1LOGO(); // .1LOGO
}


// ================================================
// 0xf25c: WORD 'UNK_0xf25e' codep=0x224c parp=0xf25e
// ================================================

void UNK_0xf25e() // UNK_0xf25e
{
  Push(cc__6); // 6
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  Push(0x0014);
  _minus_(); // -
  Push(0x00aa);
  MIN(); // MIN
  POS_dot_(); // POS.
}


// ================================================
// 0xf274: WORD 'UNK_0xf276' codep=0x224c parp=0xf276
// ================================================

void UNK_0xf276() // UNK_0xf276
{
  UNK_0xf25e(); // UNK_0xf25e
  PRINT("REPORT TO OPERATIONS FOR", 24); // (.")
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
  UNK_0xf25e(); // UNK_0xf25e
  PRINT("EVALUATION", 10); // (.")
}


// ================================================
// 0xf2ac: WORD 'UNK_0xf2ae' codep=0x224c parp=0xf2ae
// ================================================

void UNK_0xf2ae() // UNK_0xf2ae
{
  UNK_0xf25e(); // UNK_0xf25e
  PRINT("REPORT TO CREW ASSIGNMENT", 25); // (.")
}

// 0xf2ce: db 0x4c 0x22 0xdc 0x1b 0x0d 0x43 0x48 0x52 0x49 0x53 0x54 0x45 0x4e 0x20 0x53 0x48 0x49 0x50 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x10 0x50 0x55 0x52 0x43 0x48 0x41 0x53 0x45 0x20 0x45 0x4e 0x47 0x49 0x4e 0x45 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x20 0x41 0x4e 0x44 0x20 0x5c 0xf2 0x5d 0x17 0x0a 0x00 0x3b 0x5a 0x23 0x6d 0xe2 0xf2 0x90 0x16 'L"   CHRISTEN SHIP  L"   PURCHASE ENGINES  L"    AND \ ]   ;Z#m    '

// ================================================
// 0xf311: WORD '(.CS)' codep=0x4b3b parp=0xf31b
// ================================================
// 0xf31b: db 0x03 0x00 0x48 0x3a 0x01 0x00 0xd0 0xf2 0x06 0x00 0xe4 0xf2 0x07 0x00 0xfb 0xf2 '  H:            '

// ================================================
// 0xf32b: WORD 'UNK_0xf32d' codep=0x1d29 parp=0xf32d
// ================================================
// 0xf32d: db 0x3a 0x20 ': '

// ================================================
// 0xf32f: WORD 'UNK_0xf331' codep=0x224c parp=0xf331
// ================================================

void UNK_0xf331() // UNK_0xf331
{
  UNK_0xf25e(); // UNK_0xf25e
  PRINT("REPORT TO SHIP-CONFIGURATION", 28); // (.")
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
  UNK_0xf25e(); // UNK_0xf25e
  PRINT("TO ", 3); // (.")
  Push(pp_UNK_0xf32d); // UNK_0xf32d
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(1); // 1
  Push(Pop() & Pop()); // AND
  _ro__dot_CS_rc_(); // (.CS)
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
  _ro__dot_CS_rc_(); // (.CS)
}


// ================================================
// 0xf376: WORD 'UNK_0xf378' codep=0x224c parp=0xf378
// ================================================

void UNK_0xf378() // UNK_0xf378
{
  UNK_0xf25e(); // UNK_0xf25e
  PRINT("UNABLE TO LAUNCH WITHOUT FUEL ", 30); // (.")
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
  UNK_0xf25e(); // UNK_0xf25e
}


// ================================================
// 0xf3a7: WORD 'UNK_0xf3a9' codep=0x224c parp=0xf3a9
// ================================================

void UNK_0xf3a9() // UNK_0xf3a9
{
  UNK_0xf1cb(); // UNK_0xf1cb
  _gt_2FONT(); // >2FONT
  DUP(); // DUP
  Push(1); // 1
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label499;

  UNK_0xf276(); // UNK_0xf276

  label499:
  DUP(); // DUP
  Push(2); // 2
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label500;

  UNK_0xf2ae(); // UNK_0xf2ae

  label500:
  DUP(); // DUP
  Push(cc__4); // 4
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label501;

  UNK_0xf331(); // UNK_0xf331

  label501:
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label502;

  UNK_0xf378(); // UNK_0xf378

  label502:
  Push(1); // 1
  Push(0x0016);
  CMESS(); // CMESS
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  PRINT("PRESS SPACEBAR TO EXIT", 22); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf404: WORD 'UNK_0xf406' codep=0x224c parp=0xf406
// ================================================

void UNK_0xf406() // UNK_0xf406
{
  Push(0x003b);
  Push(0xb76b);
  MODULE(); // MODULE
}


// ================================================
// 0xf412: WORD 'UNK_0xf414' codep=0x224c parp=0xf414
// ================================================

void UNK_0xf414() // UNK_0xf414
{
  Push(pp__ask_EVAL); // ?EVAL
  Push(Read16(Pop())); // @
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label487;

  _star_OP(); // *OP
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x002d);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN

  label493:
  CI(); // CI
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label492;

  IDELETE(); // IDELETE
  goto label493;

  label492:
  ICLOSE(); // ICLOSE
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE

  label487:
  Push(pp__ask_TV); // ?TV
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() | Pop()); // OR
  Push(pp__ask_RECALL); // ?RECALL
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  UNK_0xf406(); // UNK_0xf406
  Push(Pop() | Pop()); // OR
  UNK_0xf195(); // UNK_0xf195
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf460: WORD 'UNK_0xf462' codep=0x224c parp=0xf462
// ================================================

void UNK_0xf462() // UNK_0xf462
{
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  Push(0); // 0
  UNK_0xf18b(); // UNK_0xf18b
  Push(0x0012);
  Push(Pop() + Pop()); // +
  UNK_0xf18b(); // UNK_0xf18b

  do // (DO)
  {
  I(); // I
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf186(); // UNK_0xf186
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
  ICLOSE(); // ICLOSE
  Push(cc__6); // 6

  } while(...); // (+LOOP) 0xffea
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf490: WORD 'UNK_0xf492' codep=0x224c parp=0xf492
// ================================================

void UNK_0xf492() // UNK_0xf492
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  _pe_NAME(); // %NAME
  C_at_(); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  UNK_0xf190(); // UNK_0xf190
  Push(Pop()+1); // 1+
  C_at_(); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  ICLOSE(); // ICLOSE
  DUP(); // DUP
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xf32d); // UNK_0xf32d
  _ex_(); // !
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf4ba: WORD 'UNK_0xf4bc' codep=0x224c parp=0xf4bc
// ================================================

void UNK_0xf4bc() // UNK_0xf4bc
{
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label494;

  IOPEN(); // IOPEN
  Push(0x001a);
  Push(cc__6); // 6
  IFIND(); // IFIND
  if (Pop() == 0) goto label495;

  INST_minus_QT(); // INST-QT
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x000a);
  M_star_(); // M*
  Push(pp__10_star_END); // 10*END
  D_ex_(); // D!
  if (Pop() == 0) Push(1); else Push(0); // 0=
  goto label497;

  label495:
  Push(1); // 1

  label497:
  CDROP(); // CDROP
  goto label496;

  label494:
  Push(1); // 1

  label496:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf504: WORD '?CAN-LEAVE' codep=0x224c parp=0xf513
// ================================================

void _ask_CAN_minus_LEAVE() // ?CAN-LEAVE
{
  UNK_0xf414(); // UNK_0xf414
  UNK_0xf462(); // UNK_0xf462
  Push(Pop()*2); // 2*
  Push(Pop() | Pop()); // OR
  UNK_0xf492(); // UNK_0xf492
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(Pop() | Pop()); // OR
  UNK_0xf4bc(); // UNK_0xf4bc
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  Push(Pop() | Pop()); // OR
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label498;

  UNK_0xf3a9(); // UNK_0xf3a9
  KEY(); // KEY
  Pop(); // DROP
  Push(0); // 0
  goto label503;

  label498:
  Push(1); // 1

  label503:
}

// 0xf541: db 0x43 0x48 0x4b 0x46 0x4c 0x54 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'CHKFLT_________________________ '
  