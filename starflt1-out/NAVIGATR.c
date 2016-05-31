// ====== OVERLAY 'NAVIGATR' ======

#include"interface.h"

// store offset = 0xf1f0
// overlay size   = 0x0370

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xf20b  codep:0x744d parp:0xf20b size:0x0003 C-string:'UNK_0xf20b'
// 1704:      UNK_0xf210  codep:0x744d parp:0xf210 size:0x0003 C-string:'UNK_0xf210'
// 1705:      UNK_0xf215  codep:0x744d parp:0xf215 size:0x0003 C-string:'UNK_0xf215'
// 1706:      UNK_0xf21a  codep:0x73ea parp:0xf21a size:0x0006 C-string:'UNK_0xf21a'
// 1707:      UNK_0xf222  codep:0x73ea parp:0xf222 size:0x0006 C-string:'UNK_0xf222'
// 1708:      UNK_0xf22a  codep:0x224c parp:0xf22a size:0x0008 C-string:'UNK_0xf22a'
// 1709:      UNK_0xf234  codep:0x224c parp:0xf234 size:0x0010 C-string:'UNK_0xf234'
// 1710:      UNK_0xf246  codep:0x224c parp:0xf246 size:0x0008 C-string:'UNK_0xf246'
// 1711:      UNK_0xf250  codep:0x224c parp:0xf250 size:0x0020 C-string:'UNK_0xf250'
// 1712:      UNK_0xf272  codep:0x224c parp:0xf272 size:0x0030 C-string:'UNK_0xf272'
// 1713:    >DOWN-SHIELD  codep:0x224c parp:0xf2b3 size:0x00a4 C-string:'_gt_DOWN_minus_SHIELD'
// 1714:      UNK_0xf359  codep:0x224c parp:0xf359 size:0x0050 C-string:'UNK_0xf359'
// 1715:         >DISARM  codep:0x224c parp:0xf3b5 size:0x0044 C-string:'_gt_DISARM'
// 1716:      UNK_0xf3fb  codep:0x224c parp:0xf3fb size:0x00bd C-string:'UNK_0xf3fb'
// 1717:     (/(DIS)ARM)  codep:0x224c parp:0xf4c8 size:0x0020 C-string:'_ro__slash__ro_DIS_rc_ARM_rc_'
// 1718:   (/(UD)SHIELD)  codep:0x224c parp:0xf4fa size:0x0066 C-string:'_ro__slash__ro_UD_rc_SHIELD_rc_'

// =================================
// =========== VARIABLES ===========
// =================================



// 0xf202: db 0x36 0x00 0x4d 0x74 0x14 0x19 0x02 '6 Mt   '

// ================================================
// 0xf209: WORD 'UNK_0xf20b' codep=0x744d parp=0xf20b
// ================================================
// 0xf20b: db 0x14 0x1b 0x02 '   '

// ================================================
// 0xf20e: WORD 'UNK_0xf210' codep=0x744d parp=0xf210
// ================================================
// 0xf210: db 0x14 0x1d 0x02 '   '

// ================================================
// 0xf213: WORD 'UNK_0xf215' codep=0x744d parp=0xf215
// ================================================
// 0xf215: db 0x14 0x45 0x04 ' E '

// ================================================
// 0xf218: WORD 'UNK_0xf21a' codep=0x73ea parp=0xf21a
// ================================================
// 0xf21a: db 0x3a 0x18 0x0c 0x49 0x58 0x68 ':  IXh'

// ================================================
// 0xf220: WORD 'UNK_0xf222' codep=0x73ea parp=0xf222
// ================================================
// 0xf222: db 0x3a 0x24 0x0c 0x49 0x58 0x68 ':$ IXh'

// ================================================
// 0xf228: WORD 'UNK_0xf22a' codep=0x224c parp=0xf22a
// ================================================

void UNK_0xf22a() // UNK_0xf22a
{
  Push(0xbdef);
  MODULE(); // MODULE
}


// ================================================
// 0xf232: WORD 'UNK_0xf234' codep=0x224c parp=0xf234
// ================================================

void UNK_0xf234() // UNK_0xf234
{
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  _ex_(); // !
  Push(cc__3); // 3
  Push(pp_RECORD_n_); // RECORD#
  _ex_(); // !
}


// ================================================
// 0xf244: WORD 'UNK_0xf246' codep=0x224c parp=0xf246
// ================================================

void UNK_0xf246() // UNK_0xf246
{
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SET_minus_CUR(); // SET-CUR
}


// ================================================
// 0xf24e: WORD 'UNK_0xf250' codep=0x224c parp=0xf250
// ================================================

void UNK_0xf250() // UNK_0xf250
{
  Push(0x003c);
  Push(0x03e8);
  Push(0x000f);
  Push(cc__3); // 3
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  Push(0x003c);
  Push(0x01f4);
  Push(cc__5); // 5
  _gt_SND(); // >SND
}


// ================================================
// 0xf270: WORD 'UNK_0xf272' codep=0x224c parp=0xf272
// ================================================

void UNK_0xf272() // UNK_0xf272
{
  Push(0x0064);
  Push(cc__3); // 3
  Push(0x003c);
  Push(0x01f4);
  Push(0x000f);
  Push(cc__3); // 3
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  Push(0x003c);
  Push(0x03e8);
  _2OVER(); // 2OVER
  Push(0x003c);
  Push(0x01f4);
  Push(cc__8); // 8
  _gt_SND(); // >SND
}


// ================================================
// 0xf2a2: WORD '>DOWN-SHIELD' codep=0x224c parp=0xf2b3
// ================================================

void _gt_DOWN_minus_SHIELD()
{ // >DOWN-SHIELD
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1347;


  UNK_0x3f39("MAGNETIC DISTURBANCES IN NEBULA");
  _dot_TTY(); // .TTY

  UNK_0x3f39("CAUSING ENERGY FLUCTUATIONS");
  _dot_TTY(); // .TTY

  label1347:
  UNK_0xf234(); // UNK_0xf234

  UNK_0x3f39("RAISE SHIELD");
  UNK_0xf21a(); // UNK_0xf21a
  UNK_0xf246(); // UNK_0xf246
  UNK_0xf215(); // UNK_0xf215
  C_at_(); // C@
  Push(0x00f7);
  Push(Pop() & Pop()); // AND
  Push(0x0010);
  Push(Pop() | Pop()); // OR
  UNK_0xf215(); // UNK_0xf215
  C_ex_(); // C!
  UNK_0xf250(); // UNK_0xf250

  UNK_0x3f39("SHIELDS ARE DOWN");
  _dot_TTY(); // .TTY
  Push(pp_BTN_minus_REC); // BTN-REC
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _eq_(); // =
  if (Pop() == 0) goto label1348;

  Push(cc__3); // 3
  Push(2); // 2
  _dot_ABTN(); // .ABTN

  label1348:
  Push(pp__ask_SUP); // ?SUP
  OFF(); // OFF
}


// ================================================
// 0xf357: WORD 'UNK_0xf359' codep=0x224c parp=0xf359
// ================================================

void UNK_0xf359() // UNK_0xf359
{
  Push(cc__6); // 6
  UNK_0xf22a(); // UNK_0xf22a
  if (Pop() == 0) goto label1351;

  UNK_0xf234(); // UNK_0xf234

  UNK_0x3f39("DROP SHIELD ");
  UNK_0xf21a(); // UNK_0xf21a
  UNK_0xf246(); // UNK_0xf246
  UNK_0xf215(); // UNK_0xf215
  C_at_(); // C@
  Push(0x0018);
  Push(Pop() | Pop()); // OR
  UNK_0xf215(); // UNK_0xf215
  C_ex_(); // C!
  UNK_0xf250(); // UNK_0xf250

  UNK_0x3f39("SHIELDS ARE NOW UP");
  _dot_TTY(); // .TTY
  Push(cc__3); // 3
  Push(2); // 2
  _dot_ABTN(); // .ABTN
  Push(pp__ask_SUP); // ?SUP
  ON(); // ON

  label1351:
}


// ================================================
// 0xf3a9: WORD '>DISARM' codep=0x224c parp=0xf3b5
// ================================================

void _gt_DISARM() // >DISARM
{
  UNK_0xf234(); // UNK_0xf234

  UNK_0x3f39("ARM WEAPON");
  UNK_0xf222(); // UNK_0xf222
  UNK_0xf246(); // UNK_0xf246
  UNK_0xf215(); // UNK_0xf215
  C_at_(); // C@
  Push(0x00fc);
  Push(Pop() & Pop()); // AND
  Push(0x0020);
  Push(Pop() | Pop()); // OR
  UNK_0xf215(); // UNK_0xf215
  C_ex_(); // C!
  UNK_0xf272(); // UNK_0xf272

  UNK_0x3f39("WEAPONS ARE DISARMED");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf3f9: WORD 'UNK_0xf3fb' codep=0x224c parp=0xf3fb
// ================================================

void UNK_0xf3fb() // UNK_0xf3fb
{
  UNK_0xf210(); // UNK_0xf210
  Push(Pop()+1); // 1+
  C_at_(); // C@
  UNK_0xf20b(); // UNK_0xf20b
  Push(Pop()+1); // 1+
  C_at_(); // C@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1337;

  if (Pop() == 0) goto label1338;

  Push(cc__4); // 4
  UNK_0xf22a(); // UNK_0xf22a
  goto label1345;

  label1338:
  Push(0); // 0

  label1345:
  DUP(); // DUP
  if (Pop() == 0) goto label1339;

  UNK_0xf272(); // UNK_0xf272

  UNK_0x3f39("ARMING MISSILES");
  _dot_TTY(); // .TTY

  label1339:
  SWAP(); // SWAP
  if (Pop() == 0) goto label1340;

  Push(cc__3); // 3
  UNK_0xf22a(); // UNK_0xf22a
  goto label1344;

  label1340:
  Push(0); // 0

  label1344:
  DUP(); // DUP
  if (Pop() == 0) goto label1341;

  UNK_0xf272(); // UNK_0xf272

  UNK_0x3f39("ARMING LASERS");
  _dot_TTY(); // .TTY

  label1341:
  Push(Pop() + Pop()); // +
  if (Pop() == 0) goto label1342;

  UNK_0xf215(); // UNK_0xf215
  Push(Read16(Pop())); // @
  Push(0x0023);
  Push(Pop() | Pop()); // OR
  UNK_0xf215(); // UNK_0xf215
  _ex_(); // !
  UNK_0xf234(); // UNK_0xf234

  UNK_0x3f39("DISARM    ");
  UNK_0xf222(); // UNK_0xf222
  UNK_0xf246(); // UNK_0xf246

  label1342:
  goto label1343;

  label1337:
  Pop(); Pop();// 2DROP

  UNK_0x3f39("SHIP IS NOT EQUIPPED WITH WEAPONS");
  _dot_TTY(); // .TTY

  label1343:
}


// ================================================
// 0xf4b8: WORD '(/(DIS)ARM)' codep=0x224c parp=0xf4c8
// ================================================

void _ro__slash__ro_DIS_rc_ARM_rc_() // (/(DIS)ARM)
{
  CTINIT(); // CTINIT
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xf215(); // UNK_0xf215
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1336;

  _gt_DISARM(); // >DISARM
  goto label1346;

  label1336:
  UNK_0xf3fb(); // UNK_0xf3fb

  label1346:
  ICLOSE(); // ICLOSE
  _dot_SORD(); // .SORD
}


// ================================================
// 0xf4e8: WORD '(/(UD)SHIELD)' codep=0x224c parp=0xf4fa
// ================================================

void _ro__slash__ro_UD_rc_SHIELD_rc_() // (/(UD)SHIELD)
{
  CTINIT(); // CTINIT
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xf215(); // UNK_0xf215
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1349;

  _gt_DOWN_minus_SHIELD(); // >DOWN-SHIELD
  goto label1352;

  label1349:
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1350;


  UNK_0x3f39("SHIELDS CAN'T BE RAISED");
  _dot_TTY(); // .TTY
  BEEP(); // BEEP
  goto label1352;

  label1350:
  UNK_0xf359(); // UNK_0xf359

  label1352:
  ICLOSE(); // ICLOSE
  _dot_SORD(); // .SORD
}

// 0xf54c: db 0x4e 0x41 0x56 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'NAV-VOC_____________ '
  