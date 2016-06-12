// ====== OVERLAY 'DOCTOR' ======
// store offset = 0xf060
// overlay size   = 0x0500

#include"cpu.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xf076  codep:0x73ea parp:0xf076 size:0x0006 C-string:'UNK_0xf076'
// 1704:      UNK_0xf07e  codep:0x744d parp:0xf07e size:0x0003 C-string:'UNK_0xf07e'
// 1705:      UNK_0xf083  codep:0x744d parp:0xf083 size:0x0003 C-string:'UNK_0xf083'
// 1706:      UNK_0xf088  codep:0x744d parp:0xf088 size:0x0003 C-string:'UNK_0xf088'
// 1707:      UNK_0xf08d  codep:0x744d parp:0xf08d size:0x0003 C-string:'UNK_0xf08d'
// 1708:      UNK_0xf092  codep:0x224c parp:0xf092 size:0x0012 C-string:'UNK_0xf092'
// 1709:      UNK_0xf0a6  codep:0x224c parp:0xf0a6 size:0x003e C-string:'UNK_0xf0a6'
// 1710:      UNK_0xf0e6  codep:0x224c parp:0xf0e6 size:0x00a9 C-string:'UNK_0xf0e6'
// 1711:      UNK_0xf191  codep:0x224c parp:0xf191 size:0x001c C-string:'UNK_0xf191'
// 1712:      UNK_0xf1af  codep:0x224c parp:0xf1af size:0x0049 C-string:'UNK_0xf1af'
// 1713:      UNK_0xf1fa  codep:0x224c parp:0xf1fa size:0x002d C-string:'UNK_0xf1fa'
// 1714:      UNK_0xf229  codep:0x224c parp:0xf229 size:0x0019 C-string:'UNK_0xf229'
// 1715:      UNK_0xf244  codep:0x224c parp:0xf244 size:0x0029 C-string:'UNK_0xf244'
// 1716:      UNK_0xf26f  codep:0x224c parp:0xf26f size:0x003e C-string:'UNK_0xf26f'
// 1717:      UNK_0xf2af  codep:0x224c parp:0xf2af size:0x0028 C-string:'UNK_0xf2af'
// 1718:      UNK_0xf2d9  codep:0x224c parp:0xf2d9 size:0x0016 C-string:'UNK_0xf2d9'
// 1719:      UNK_0xf2f1  codep:0x224c parp:0xf2f1 size:0x002b C-string:'UNK_0xf2f1'
// 1720:      UNK_0xf31e  codep:0x224c parp:0xf31e size:0x003c C-string:'UNK_0xf31e'
// 1721:          NPCREW  codep:0x4a4f parp:0xf365 size:0x000c C-string:'NPCREW'
// 1722:      UNK_0xf373  codep:0x224c parp:0xf373 size:0x00ac C-string:'UNK_0xf373'
// 1723:      UNK_0xf421  codep:0x224c parp:0xf421 size:0x00a5 C-string:'UNK_0xf421'
// 1724:      (/EXAMINE)  codep:0x224c parp:0xf4d5 size:0x000c C-string:'_ro__slash_EXAMINE_rc_'
// 1725:        (/TREAT)  codep:0x224c parp:0xf4ee size:0x0072 C-string:'_ro__slash_TREAT_rc_'

// =================================
// =========== VARIABLES ===========
// =================================



// 0xf072: db 0x4d 0x00 'M '

// ================================================
// 0xf074: WORD 'UNK_0xf076' codep=0x73ea parp=0xf076
// ================================================
// 0xf076: db 0x10 0x13 0x01 0x14 0x89 0x64 '     d'

// ================================================
// 0xf07c: WORD 'UNK_0xf07e' codep=0x744d parp=0xf07e
// ================================================
// 0xf07e: db 0x10 0x0b 0x0f '   '

// ================================================
// 0xf081: WORD 'UNK_0xf083' codep=0x744d parp=0xf083
// ================================================
// 0xf083: db 0x10 0x1f 0x01 '   '

// ================================================
// 0xf086: WORD 'UNK_0xf088' codep=0x744d parp=0xf088
// ================================================
// 0xf088: db 0x10 0x20 0x02 '   '

// ================================================
// 0xf08b: WORD 'UNK_0xf08d' codep=0x744d parp=0xf08d
// ================================================
// 0xf08d: db 0x11 0x11 0x03 '   '

// ================================================
// 0xf090: WORD 'UNK_0xf092' codep=0x224c parp=0xf092
// ================================================

void UNK_0xf092() // UNK_0xf092
{
  Push(0x0040);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("[N Y]", 5); // (.")
}


// ================================================
// 0xf0a4: WORD 'UNK_0xf0a6' codep=0x224c parp=0xf0a6
// ================================================

void UNK_0xf0a6() // UNK_0xf0a6
{
  _gt_R(); // >R
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  Push(0); // 0
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xf08d(); // UNK_0xf08d
  Push(i); // I
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf088(); // UNK_0xf088
  Push(Read16(Pop())); // @
  Push(h); // J
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+
  _gt_R(); // >R
  CI(); // CI
  R_gt_(); // R>
  LEAVE(); // LEAVE

  label1:
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xffda

  ICLOSE(); // ICLOSE
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xf0e4: WORD 'UNK_0xf0e6' codep=0x224c parp=0xf0e6
// ================================================

void UNK_0xf0e6() // UNK_0xf0e6
{
  _gt_R(); // >R
  Push(h); // I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  PRINT("DEAD", 4); // (.")
  goto label7;

  label1:
  Push(h); // I
  Push(1); // 1
  Push(0x0015);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label2;
  PRINT("CRITICALLY", 10); // (.")
  goto label6;

  label2:
  Push(h); // I
  Push(0x0015);
  Push(0x0033);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;
  PRINT("HEAVILY", 7); // (.")
  goto label6;

  label3:
  Push(h); // I
  Push(0x0033);
  Push(0x0051);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label4;
  PRINT("MODERATELY", 10); // (.")
  goto label6;

  label4:
  Push(h); // I
  Push(0x0051);
  Push(0x0064);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label5;
  PRINT("SLIGHTLY", 8); // (.")
  goto label6;

  label5:
  PRINT("NOT", 3); // (.")

  label6:
  PRINT(" WOUNDED", 8); // (.")

  label7:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xf18f: WORD 'UNK_0xf191' codep=0x224c parp=0xf191
// ================================================

void UNK_0xf191() // UNK_0xf191
{
  if (Pop() == 0) goto label1;
  PRINT("TREAT", 5); // (.")
  return;

  label1:
  PRINT("EXAMINE", 7); // (.")
}


// ================================================
// 0xf1ad: WORD 'UNK_0xf1af' codep=0x224c parp=0xf1af
// ================================================

void UNK_0xf1af() // UNK_0xf1af
{
  _gt_C_plus_S(); // >C+S
  CTINIT(); // CTINIT
  PRINT("SHOULD I STOP TREATING ", 23); // (.")
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.
  ICLOSE(); // ICLOSE
  CTCR(); // CTCR
  PRINT("TO ", 3); // (.")
  UNK_0xf191(); // UNK_0xf191
  PRINT(" SOMEONE ELSE?", 14); // (.")
  CTCR(); // CTCR
  UNK_0xf092(); // UNK_0xf092
  Y_slash_N(); // Y/N
  CTERASE(); // CTERASE
}


// ================================================
// 0xf1f8: WORD 'UNK_0xf1fa' codep=0x224c parp=0xf1fa
// ================================================

void UNK_0xf1fa() // UNK_0xf1fa
{
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.
  PRINT(" DOESN'T NEED MEDICAL", 21); // (.")
  CTCR(); // CTCR
  PRINT("TREATMENT.", 10); // (.")
}


// ================================================
// 0xf227: WORD 'UNK_0xf229' codep=0x224c parp=0xf229
// ================================================

void UNK_0xf229() // UNK_0xf229
{
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.
  PRINT(" IS BEYOND HELP.", 16); // (.")
}


// ================================================
// 0xf242: WORD 'UNK_0xf244' codep=0x224c parp=0xf244
// ================================================

void UNK_0xf244() // UNK_0xf244
{
  PRINT("I AM STARTING TREATMENT ON", 26); // (.")
  CTCR(); // CTCR
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf26d: WORD 'UNK_0xf26f' codep=0x224c parp=0xf26f
// ================================================

void UNK_0xf26f() // UNK_0xf26f
{
  _gt_C_plus_S(); // >C+S
  UNK_0xf083(); // UNK_0xf083
  C_at_(); // C@
  Push(1); // 1
  Push(0x0064);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  UNK_0xf244(); // UNK_0xf244
  UNK_0xf088(); // UNK_0xf088
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  Push(Pop() | Pop()); // OR
  UNK_0xf088(); // UNK_0xf088
  _ex_(); // !
  goto label3;

  label1:
  UNK_0xf083(); // UNK_0xf083
  C_at_(); // C@
  Push(0x0064);
  _eq_(); // =
  if (Pop() == 0) goto label2;
  UNK_0xf1fa(); // UNK_0xf1fa
  goto label3;

  label2:
  UNK_0xf229(); // UNK_0xf229

  label3:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2ad: WORD 'UNK_0xf2af' codep=0x224c parp=0xf2af
// ================================================

void UNK_0xf2af() // UNK_0xf2af
{
  PRINT("I AM CEASING TREATMENT ON", 25); // (.")
  CTCR(); // CTCR
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf2d7: WORD 'UNK_0xf2d9' codep=0x224c parp=0xf2d9
// ================================================

void UNK_0xf2d9() // UNK_0xf2d9
{
  _gt_C_plus_S(); // >C+S
  UNK_0xf2af(); // UNK_0xf2af
  UNK_0xf088(); // UNK_0xf088
  Push(Read16(Pop())); // @
  Push(0xfffb);
  Push(Pop() & Pop()); // AND
  UNK_0xf088(); // UNK_0xf088
  _ex_(); // !
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2ef: WORD 'UNK_0xf2f1' codep=0x224c parp=0xf2f1
// ================================================

void UNK_0xf2f1() // UNK_0xf2f1
{
  PRINT("I AM CONTINUING TREATMENT ON", 28); // (.")
  CTCR(); // CTCR
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf31c: WORD 'UNK_0xf31e' codep=0x224c parp=0xf31e
// ================================================

void UNK_0xf31e() // UNK_0xf31e
{
  _gt_C_plus_S(); // >C+S
  UNK_0xf2f1(); // UNK_0xf2f1
  UNK_0xf088(); // UNK_0xf088
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  Push(Pop() | Pop()); // OR
  UNK_0xf088(); // UNK_0xf088
  _ex_(); // !
  ICLOSE(); // ICLOSE
}

// 0xf332: db 0x4c 0x22 0x84 0x7a 0x86 0xf0 0x92 0x0c 0x9b 0x3b 0xf5 0x12 0xfa 0x15 0xf4 0xff 0x2e 0x0f 0x90 0x16 0x4c 0x22 0x9c 0x7a 0x86 0xf0 0x92 0x0c 0x9b 0x3b 0xf5 0x12 0xfa 0x15 0xf4 0xff 0x2e 0x0f 0x90 0x16 'L" z     ;      .   L" z     ;      .   '

// ================================================
// 0xf35a: WORD 'NPCREW' codep=0x4a4f parp=0xf365
// ================================================
// 0xf365: db 0x02 0x00 0x22 0x0f 0x01 0x00 0x34 0xf3 0xff 0xff 0x48 0xf3 '  "   4   H '

// ================================================
// 0xf371: WORD 'UNK_0xf373' codep=0x224c parp=0xf373
// ================================================

void UNK_0xf373() // UNK_0xf373
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("WHO SHOULD I ", 13); // (.")
  UNK_0xf191(); // UNK_0xf191
  PRINT("?", 1); // (.")
  _star_PERSON(); // *PERSON
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN

  label4:
  UNK_0xf088(); // UNK_0xf088
  C_at_(); // C@
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  INEXT(); // INEXT
  goto label4;

  label1:
  Push(1); // 1
  Push(0x0015);
  CMESS(); // CMESS
  PRINT("CHOOSE CREWMEMBER ^\", 20); // (.")
  _ex_CRS(); // !CRS
  Push(2); // 2
  Push(0x0012);
  CMESS(); // CMESS
  PRINT("AND PRESS SPACEBAR", 18); // (.")
  _ex_CRS(); // !CRS
  Push(0x000b);
  Push(2); // 2
  CTPOS_dot_(); // CTPOS.
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.

  label3:
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  NPCREW(); // NPCREW
  if (Pop() == 0) goto label2;
  Push(0x000b);
  Push(2); // 2
  CTPOS_dot_(); // CTPOS.
  Push(0x000f);
  BLACK(); // BLACK
  POLY_dash_ER(); // POLY-ER
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.

  label2:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label3;
  CI(); // CI
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf41f: WORD 'UNK_0xf421' codep=0x224c parp=0xf421
// ================================================

void UNK_0xf421() // UNK_0xf421
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  _gt_C_plus_S(); // >C+S
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.
  PRINT(" IS ", 4); // (.")
  UNK_0xf083(); // UNK_0xf083
  C_at_(); // C@
  DUP(); // DUP
  UNK_0xf0e6(); // UNK_0xf0e6
  if (Pop() == 0) goto label1;
  PRINT(",", 1); // (.")
  CTCR(); // CTCR
  PRINT("AND HAS A VITALITY OF ", 22); // (.")
  UNK_0xf083(); // UNK_0xf083
  C_at_(); // C@
  Push(0); // 0
  _dot_R(); // .R
  PRINT(" AND A", 6); // (.")
  CTCR(); // CTCR
  PRINT("DURABILITY OF ", 14); // (.")
  UNK_0xf076(); // UNK_0xf076
  C_at_(); // C@
  Push(0); // 0
  _dot_R(); // .R

  label1:
  PRINT(".", 1); // (.")
  CTCR(); // CTCR
  UNK_0xf088(); // UNK_0xf088
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.
  PRINT(" IS CURRENTLY BEING", 19); // (.")
  CTCR(); // CTCR
  PRINT("TREATED.", 8); // (.")

  label2:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4c6: WORD '(/EXAMINE)' codep=0x224c parp=0xf4d5
// ================================================
// entry

void _ro__slash_EXAMINE_rc_() // (/EXAMINE)
{
  CTERASE(); // CTERASE
  _gt_1FONT(); // >1FONT
  Push(0); // 0
  UNK_0xf373(); // UNK_0xf373
  UNK_0xf421(); // UNK_0xf421
}


// ================================================
// 0xf4e1: WORD '(/TREAT)' codep=0x224c parp=0xf4ee
// ================================================
// entry

void _ro__slash_TREAT_rc_() // (/TREAT)
{
  CTERASE(); // CTERASE
  Push(cc__4); // 4
  UNK_0xf0a6(); // UNK_0xf0a6
  if (Pop() == 0) goto label1;
  _2DUP(); // 2DUP
  Push(1); // 1
  ROT(); // ROT
  ROT(); // ROT
  UNK_0xf1af(); // UNK_0xf1af
  if (Pop() == 0) goto label2;
  UNK_0xf2d9(); // UNK_0xf2d9
  Push(0x09c4);
  MS(); // MS
  Push(1); // 1
  UNK_0xf373(); // UNK_0xf373
  CTERASE(); // CTERASE
  UNK_0xf26f(); // UNK_0xf26f
  goto label3;

  label2:
  UNK_0xf31e(); // UNK_0xf31e

  label3:
  return;

  label1:
  Push(1); // 1
  UNK_0xf373(); // UNK_0xf373
  CTERASE(); // CTERASE
  UNK_0xf26f(); // UNK_0xf26f
}

// 0xf52a: db 0x44 0x4f 0x43 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x44 0x4f 0x43 0x54 0x4f 0x52 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'DOC-VOC_________________________ for DOCTOR----------- '
  