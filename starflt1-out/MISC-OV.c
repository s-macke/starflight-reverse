// ====== OVERLAY 'MISC-OV' ======
// store offset = 0xefc0
// overlay size   = 0x05a0

#include"cpu.h"
#include"starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0x3f3b  codep:0x224c parp:0x3f3b size:0xb099 C-string:'UNK_0x3f3b'
// 1704:      UNK_0xefd6  codep:0x744d parp:0xefd6 size:0x0003 C-string:'UNK_0xefd6'
// 1705:      UNK_0xefdb  codep:0x744d parp:0xefdb size:0x0003 C-string:'UNK_0xefdb'
// 1706:      UNK_0xefe0  codep:0x744d parp:0xefe0 size:0x0003 C-string:'UNK_0xefe0'
// 1707:      UNK_0xefe5  codep:0x1d29 parp:0xefe5 size:0x0014 C-string:'UNK_0xefe5'
// 1708:           (TRIM  codep:0x224c parp:0xf003 size:0x0030 C-string:'_ro_TRIM'
// 1709:      UNK_0xf035  codep:0x224c parp:0xf035 size:0x0036 C-string:'UNK_0xf035'
// 1710:      UNK_0xf06d  codep:0x224c parp:0xf06d size:0x0020 C-string:'UNK_0xf06d'
// 1711:      UNK_0xf08f  codep:0x224c parp:0xf08f size:0x0028 C-string:'UNK_0xf08f'
// 1712:      UNK_0xf0b9  codep:0x224c parp:0xf0b9 size:0x0026 C-string:'UNK_0xf0b9'
// 1713:           (#IN$  codep:0x224c parp:0xf0e9 size:0x00ba C-string:'_ro__n_IN_do_'
// 1714:           (?ART  codep:0x224c parp:0xf1ad size:0x002e C-string:'_ro__ask_ART'
// 1715:           (QUIT  codep:0x224c parp:0xf1e5 size:0x0021 C-string:'_ro_QUIT'
// 1716:           (.0$$  codep:0x224c parp:0xf210 size:0x0019 C-string:'_ro__dot_0_do__do_'
// 1717:           (0$$$  codep:0x224c parp:0xf233 size:0x0099 C-string:'_ro_0_do__do__do_'
// 1718:            .ERR  codep:0x4a4f parp:0xf2d5 size:0x001c C-string:'_dot_ERR'
// 1719:           EINDE  codep:0x4a4f parp:0xf2fb size:0x001c C-string:'EINDE'
// 1720:      UNK_0xf319  codep:0x224c parp:0xf319 size:0x0068 C-string:'UNK_0xf319'
// 1721:      UNK_0xf383  codep:0x224c parp:0xf383 size:0x001a C-string:'UNK_0xf383'
// 1722:      UNK_0xf39f  codep:0x224c parp:0xf39f size:0x0034 C-string:'UNK_0xf39f'
// 1723:           (?.EQ  codep:0x224c parp:0xf3dd size:0x0079 C-string:'_ro__ask__dot_EQ'
// 1724:      UNK_0xf458  codep:0x224c parp:0xf458 size:0x0020 C-string:'UNK_0xf458'
// 1725:           =CARG  codep:0x224c parp:0xf482 size:0x0000 C-string:'_eq_CARG'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xefe5[20] = {0x03, 0x03, 0x00, 0x22, 0x03, 0x03, 0x80, 0x80, 0x03, 0x03, 0x00, 0x5d, 0x02, 0x02, 0x00, 0x60, 0x02, 0x02, 0x00, 0x90}; // UNK_0xefe5



// 0xefd2: db 0x57 0x00 'W '

// ================================================
// 0xefd4: WORD 'UNK_0xefd6' codep=0x744d parp=0xefd6
// ================================================
// 0xefd6: db 0x14 0x11 0x02 '   '

// ================================================
// 0xefd9: WORD 'UNK_0xefdb' codep=0x744d parp=0xefdb
// ================================================
// 0xefdb: db 0x14 0x1f 0x02 '   '

// ================================================
// 0xefde: WORD 'UNK_0xefe0' codep=0x744d parp=0xefe0
// ================================================
// 0xefe0: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xefe3: WORD 'UNK_0xefe5' codep=0x1d29 parp=0xefe5
// ================================================
// 0xefe5: db 0x03 0x03 0x00 0x22 0x03 0x03 0x80 0x80 0x03 0x03 0x00 0x5d 0x02 0x02 0x00 0x60 0x02 0x02 0x00 0x90 '   "       ]   `    '

// ================================================
// 0xeff9: WORD '(TRIM' codep=0x224c parp=0xf003
// ================================================
// entry

void _ro_TRIM() // (TRIM
{
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex_(); // !
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xefe5); // UNK_0xefe5
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(h); // I
  C_at_(); // C@
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(h); // I
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  R_gt_(); // R>
  Push(Pop()+2); // 2+
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  POS_dot_(); // POS.
  BLT(); // BLT
}


// ================================================
// 0xf033: WORD 'UNK_0xf035' codep=0x224c parp=0xf035
// ================================================

void UNK_0xf035() // UNK_0xf035
{
  PAD(); // PAD
  C_at_(); // C@
  if (Pop() == 0) goto label1;
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PAD(); // PAD
  DUP(); // DUP
  C_at_(); // C@
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  EMIT(); // EMIT
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PAD(); // PAD
  C_at_(); // C@
  Push(Pop()-1); // 1-
  PAD(); // PAD
  C_ex_(); // C!
  return;

  label1:
  BEEP(); // BEEP
}


// ================================================
// 0xf06b: WORD 'UNK_0xf06d' codep=0x224c parp=0xf06d
// ================================================

void UNK_0xf06d() // UNK_0xf06d
{
  Push(0x01f4); Pust(0x0000);
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_gt_(); // D>
  _ask_TERMINAL(); // ?TERMINAL
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf08d: WORD 'UNK_0xf08f' codep=0x224c parp=0xf08f
// ================================================

void UNK_0xf08f() // UNK_0xf08f
{
  _at_CRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
  SetColor("WHITE");
  SetColor("WHITE");
  SetColor("BROWN");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  PRINT("#", 1); // (.")
  UNK_0xf06d(); // UNK_0xf06d
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("#", 1); // (.")
  UNK_0xf06d(); // UNK_0xf06d
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf0b7: WORD 'UNK_0xf0b9' codep=0x224c parp=0xf0b9
// ================================================

void UNK_0xf0b9() // UNK_0xf0b9
{
  Push(pp__dash_AIN); // -AIN
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  DUP(); // DUP
  Push(pp__dash_AIN); // -AIN
  Push(Read16(Pop())); // @
  _eq_(); // =
  SWAP(); // SWAP
  Push(0x0030);
  Push(0x003a);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  return;

  label1:
  _0_gt_(); // 0>
}


// ================================================
// 0xf0df: WORD '(#IN$' codep=0x224c parp=0xf0e9
// ================================================
// entry

void _ro__n_IN_do_() // (#IN$
{
  _gt_R(); // >R
  PAD(); // PAD
  Push(h); // I
  Push(Pop()+1); // 1+
  Push(0); // 0
  FILL(); // FILL
  Push(pp_XORMODE); // XORMODE
  ON(); // ON

  label5:
  UNK_0xf08f(); // UNK_0xf08f
  _i_KEY(); // 'KEY
  DUP(); // DUP
  Push(0x005a);
  Push(0x0080);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  Push(0x00df);
  Push(Pop() & Pop()); // AND

  label1:
  _gt_R(); // >R
  Push(h); // I
  Push(0x0021);
  Push(0x005b);
  WITHIN(); // WITHIN
  Push(h); // I
  Push(cc_BL); // BL
  _eq_(); // =
  PAD(); // PAD
  C_at_(); // C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(h); // I
  UNK_0xf0b9(); // UNK_0xf0b9
  Push(Pop() & Pop()); // AND
  PAD(); // PAD
  C_at_(); // C@
  Push(h); // I'
  _st_(); // <
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(h); // I
  EMIT(); // EMIT
  Push(h); // I
  PAD(); // PAD
  C_at_(); // C@
  Push(Pop()+1); // 1+
  DUP(); // DUP
  PAD(); // PAD
  C_ex_(); // C!
  PAD(); // PAD
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  goto label3;

  label2:
  Push(h); // I
  Push(cc__8); // 8
  _eq_(); // =
  if (Pop() == 0) goto label4;
  UNK_0xf035(); // UNK_0xf035
  goto label3;

  label4:
  Push(h); // I
  Push(0x000d);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(h); // I
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label3;
  BEEP(); // BEEP

  label3:
  R_gt_(); // R>
  Push(0x000d);
  _eq_(); // =
  PAD(); // PAD
  C_at_(); // C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label5;
  R_gt_(); // R>
  Pop(); // DROP
  PAD(); // PAD
}


// ================================================
// 0xf1a3: WORD '(?ART' codep=0x224c parp=0xf1ad
// ================================================
// entry

void _ro__ask_ART() // (?ART
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0x001c);
  SWAP(); // SWAP
  IFIND(); // IFIND
  CDROP(); // CDROP
  goto label2;

  label1:
  Pop(); // DROP
  Push(0); // 0

  label2:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1db: WORD '(QUIT' codep=0x224c parp=0xf1e5
// ================================================
// entry

void _ro_QUIT() // (QUIT
{
  Push(1); // 1
  _0MESS(); // 0MESS
  _at_CRS(); // @CRS
  CTINIT(); // CTINIT
  Push(0x003f);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("[ QUIT ]", 8); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf206: WORD '(.0$$' codep=0x224c parp=0xf210
// ================================================
// entry

void _ro__dot_0_do__do_() // (.0$$
{
  PRINT("INSUFFICIENT FUNDS", 18); // (.")
  BEEP(); // BEEP
}


// ================================================
// 0xf229: WORD '(0$$$' codep=0x224c parp=0xf233
// ================================================
// entry

void _ro_0_do__do__do_() // (0$$$
{
  Push(1); // 1
  _0MESS(); // 0MESS
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(1); // 1
  Push(0x0012);
  CMESS(); // CMESS
  _ro__dot_0_do__do_(); // (.0$$
  _ex_CRS(); // !CRS
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x09c4); Pust(0x0000);
  D_plus_(); // D+

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_gt_(); // D>
  _ask_TERMINAL(); // ?TERMINAL
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  _ro_QUIT(); // (QUIT
}

// 0xf269: db 0x4c 0x22 0x39 0x3f 0x07 0x53 0x45 0x4e 0x53 0x4f 0x52 0x53 0x90 0x16 0x4c 0x22 0xef 0xa4 0x20 0x0f 0x8b 0x3b 0x51 0xa1 0x39 0x3f 0x0e 0x43 0x4f 0x4d 0x4d 0x55 0x4e 0x49 0x43 0x41 0x54 0x49 0x4f 0x4e 0x53 0x90 0x16 0x4c 0x22 0x39 0x3f 0x06 0x4c 0x41 0x53 0x45 0x52 0x53 0x90 0x16 0x4c 0x22 0x39 0x3f 0x08 0x4d 0x49 0x53 0x53 0x49 0x4c 0x45 0x53 0x90 0x16 0x4c 0x22 0x39 0x3f 0x07 0x45 0x4e 0x47 0x49 0x4e 0x45 0x53 0x90 0x16 0x4c 0x22 0x39 0x3f 0x07 0x53 0x48 0x49 0x45 0x4c 0x44 0x53 0x90 0x16 'L"9? SENSORS  L"     ;Q 9? COMMUNICATIONS  L"9? LASERS  L"9? MISSILES  L"9? ENGINES  L"9? SHIELDS  '

// ================================================
// 0xf2cc: WORD '.ERR' codep=0x4a4f parp=0xf2d5
// ================================================
// 0xf2d5: db 0x06 0x00 0x6e 0x3a 0x01 0x00 0x6b 0xf2 0x02 0x00 0x79 0xf2 0x03 0x00 0x96 0xf2 0x04 0x00 0xa3 0xf2 0x05 0x00 0xb2 0xf2 0x06 0x00 0xc0 0xf2 '  n:  k   y                 '

// ================================================
// 0xf2f1: WORD 'EINDE' codep=0x4a4f parp=0xf2fb
// ================================================
// 0xf2fb: db 0x06 0x00 0x6e 0x3a 0x01 0x00 0x3f 0x0f 0x02 0x00 0x75 0x3b 0x03 0x00 0x8d 0x3b 0x04 0x00 0x85 0x3b 0x05 0x00 0x30 0x0f 0x06 0x00 0x7d 0x3b '  n:  ?   u;   ;   ;  0   };'

// ================================================
// 0xf317: WORD 'UNK_0xf319' codep=0x224c parp=0xf319
// ================================================

void UNK_0xf319() // UNK_0xf319
{
  SetColor("BLACK");
  ERASE_dash_A(); // ERASE-A
  CTINIT(); // CTINIT
  Func10(".ERR");
  Push(0x0079);
  OVER(); // OVER
  Push(Pop()*2); // 2*
  _dash_(); // -
  Push(0x00b4);
  POS_dot_(); // POS.
  TYPE(); // TYPE
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
  SetColor("PINK");
  _ex_COLOR(); // !COLOR
  _gt_2FONT(); // >2FONT
  BEEPON(); // BEEPON
  Push(cc__9); // 9
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(2); // 2
  MOD(); // MOD
  Push(Pop()+2); // 2+
  Push(0x03e8);
  Push(Pop() * Pop()); // *
  TONE(); // TONE
  Push(0x005a);
  Push(0x009b);
  POS_dot_(); // POS.
  PRINT("MALFUNCTION", 11); // (.")
  Push(0x00fa);
  MS(); // MS
  i++;
  } while(i<imax); // (LOOP) 0xffd0

  BEEPOFF(); // BEEPOFF
  Push(cc__7); // 7
  Push(pp__n_AUX); // #AUX
  _ex_(); // !
}


// ================================================
// 0xf381: WORD 'UNK_0xf383' codep=0x224c parp=0xf383
// ================================================

void UNK_0xf383() // UNK_0xf383
{
  Func10("EINDE");
  Push(Pop()*2); // 2*
  Func8("UNK_0xefd6");
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  DUP(); // DUP
  C_at_(); // C@
  Push(0x0080);
  Push(Pop() | Pop()); // OR
  SWAP(); // SWAP
  C_ex_(); // C!
}


// ================================================
// 0xf39d: WORD 'UNK_0xf39f' codep=0x224c parp=0xf39f
// ================================================

void UNK_0xf39f() // UNK_0xf39f
{
  DUP(); // DUP
  Func10("EINDE");
  Push(Pop()*2); // 2*
  Func8("UNK_0xefd6");
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  Push(0x0064);
  _dash_(); // -
  ABS(); // ABS
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
  _gt_(); // >
  if (Pop() == 0) goto label1;
  DUP(); // DUP
  UNK_0xf383(); // UNK_0xf383
  UNK_0xf319(); // UNK_0xf319
  Push(0); // 0
  return;

  label1:
  Pop(); // DROP
  Push(1); // 1
}


// ================================================
// 0xf3d3: WORD '(?.EQ' codep=0x224c parp=0xf3dd
// ================================================
// entry

void _ro__ask__dot_EQ() // (?.EQ
{
  _gt_R(); // >R
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  CTINIT(); // CTINIT
  Push(h); // I
  Func10("EINDE");
  Push(Pop()*2); // 2*
  Func8("UNK_0xefd6");
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  C_at_(); // C@
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(h); // I
  Func10(".ERR");
  _dot_TTY(); // .TTY
  PRINT(": INOPERATIVE", 13); // (.")
  Push(0); // 0
  goto label3;

  label2:
  Push(h); // I
  UNK_0xf39f(); // UNK_0xf39f

  label3:
  goto label4;

  label1:

  UNK_0x3f3b("SHIP IS NOT EQUIPPED WITH ");
  _dot_TTY(); // .TTY
  Push(h); // I
  Func10(".ERR");
  TYPE(); // TYPE
  Push(0); // 0

  label4:
  R_gt_(); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf456: WORD 'UNK_0xf458' codep=0x224c parp=0xf458
// ================================================

void UNK_0xf458() // UNK_0xf458
{
  Push(0); // 0

  label3:
  _ask__dash_NULL(); // ?-NULL
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  _ask__dash_NULL(); // ?-NULL
  Push(Pop() | Pop()); // OR
  ICLOSE(); // ICLOSE
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  goto label2;

  label1:
  Push(1); // 1

  label2:
  if (Pop() == 0) goto label3;
}


// ================================================
// 0xf478: WORD '=CARG' codep=0x224c parp=0xf482
// ================================================
// entry

void _eq_CARG() // =CARG
{
  Push2Words("NULL");
  Push(pp__10_star_END); // 10*END
  D_ex_(); // D!
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Func8("UNK_0xefdb");
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  Push(Pop()+1); // 1+
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xf458(); // UNK_0xf458
  if (Pop() == 0) goto label1;
  Push(0); // 0

  label5:
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  _eq_(); // =
  _at_INST_dash_S(); // @INST-S
  Push(0x0011);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  _at_INST_dash_S(); // @INST-S
  Push(0x0030);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  IOPEN(); // IOPEN

  label4:
  _at_INST_dash_S(); // @INST-S
  Push(cc__6); // 6
  _eq_(); // =
  _at_INST_dash_C(); // @INST-C
  Push(0x001a);
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label3;
  Func8("INST-QT");
  Push(Read16(Pop())); // @
  Push(0x000a);
  U_star_(); // U*
  Push(pp__10_star_END); // 10*END
  D_ex_(); // D!

  label3:
  Func8("INST-QT");
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push2Words("NULL");
  Func8("INST-X");
  D_ex_(); // D!
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label4;
  ICLOSE(); // ICLOSE

  label2:
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label5;
  goto label6;

  label1:
  Push(0); // 0

  label6:
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  _dash_(); // -
  DUP(); // DUP
  Func8("UNK_0xefe0");
  _ex_(); // !
  Push(0x000a);
  U_star_(); // U*
  Push(pp__10_star_CARG); // 10*CARG
  D_ex_(); // D!
  ICLOSE(); // ICLOSE
}

// 0xf52e: db 0x4d 0x49 0x53 0x43 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x4d 0x49 0x53 0x43 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'MISC-___________________________for MISC---------- '
  