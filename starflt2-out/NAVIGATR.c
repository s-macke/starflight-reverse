// ====== OVERLAY 'NAVIGATR' ======
// store offset = 0xf180
// overlay size   = 0x03e0

#include"cpu.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0xb28b C-string:'UNK_0x3f09'
// 1870:      UNK_0xf196  codep:0x7420 parp:0xf196 size:0x0003 C-string:'UNK_0xf196'
// 1871:      UNK_0xf19b  codep:0x7420 parp:0xf19b size:0x0003 C-string:'UNK_0xf19b'
// 1872:      UNK_0xf1a0  codep:0x7420 parp:0xf1a0 size:0x0003 C-string:'UNK_0xf1a0'
// 1873:      UNK_0xf1a5  codep:0x7420 parp:0xf1a5 size:0x0003 C-string:'UNK_0xf1a5'
// 1874:      UNK_0xf1aa  codep:0x7394 parp:0xf1aa size:0x0006 C-string:'UNK_0xf1aa'
// 1875:      UNK_0xf1b2  codep:0x7394 parp:0xf1b2 size:0x0006 C-string:'UNK_0xf1b2'
// 1876:      UNK_0xf1ba  codep:0x224c parp:0xf1ba size:0x0008 C-string:'UNK_0xf1ba'
// 1877:      UNK_0xf1c4  codep:0x224c parp:0xf1c4 size:0x0010 C-string:'UNK_0xf1c4'
// 1878:      UNK_0xf1d6  codep:0x224c parp:0xf1d6 size:0x0008 C-string:'UNK_0xf1d6'
// 1879:      UNK_0xf1e0  codep:0x224c parp:0xf1e0 size:0x0020 C-string:'UNK_0xf1e0'
// 1880:      UNK_0xf202  codep:0x224c parp:0xf202 size:0x0030 C-string:'UNK_0xf202'
// 1881:    >DOWN-SHIELD  codep:0x224c parp:0xf243 size:0x00bc C-string:'_gt_DOWN_dash_SHIELD'
// 1882:      UNK_0xf301  codep:0x224c parp:0xf301 size:0x000e C-string:'UNK_0xf301'
// 1883:      UNK_0xf311  codep:0x224c parp:0xf311 size:0x008c C-string:'UNK_0xf311'
// 1884:         >DISARM  codep:0x224c parp:0xf3a9 size:0x0044 C-string:'_gt_DISARM'
// 1885:      UNK_0xf3ef  codep:0x224c parp:0xf3ef size:0x00da C-string:'UNK_0xf3ef'
// 1886:     (/(DIS)ARM)  codep:0x224c parp:0xf4d9 size:0x0020 C-string:'_ro__slash__ro_DIS_rc_ARM_rc_'
// 1887:   (/(UD)SHIELD)  codep:0x224c parp:0xf50b size:0x0000 C-string:'_ro__slash__ro_UD_rc_SHIELD_rc_'

// =================================
// =========== VARIABLES ===========
// =================================



// 0xf192: db 0x3e 0x00 '> '

// ================================================
// 0xf194: WORD 'UNK_0xf196' codep=0x7420 parp=0xf196
// ================================================
// 0xf196: db 0x14 0x19 0x02 '   '

// ================================================
// 0xf199: WORD 'UNK_0xf19b' codep=0x7420 parp=0xf19b
// ================================================
// 0xf19b: db 0x14 0x1b 0x02 '   '

// ================================================
// 0xf19e: WORD 'UNK_0xf1a0' codep=0x7420 parp=0xf1a0
// ================================================
// 0xf1a0: db 0x14 0x1d 0x02 '   '

// ================================================
// 0xf1a3: WORD 'UNK_0xf1a5' codep=0x7420 parp=0xf1a5
// ================================================
// 0xf1a5: db 0x14 0x45 0x04 ' E '

// ================================================
// 0xf1a8: WORD 'UNK_0xf1aa' codep=0x7394 parp=0xf1aa
// ================================================
// 0xf1aa: db 0x3a 0x18 0x0c 0x49 0x57 0x6e ':  IWn'

// ================================================
// 0xf1b0: WORD 'UNK_0xf1b2' codep=0x7394 parp=0xf1b2
// ================================================
// 0xf1b2: db 0x3a 0x24 0x0c 0x49 0x57 0x6e ':$ IWn'

// ================================================
// 0xf1b8: WORD 'UNK_0xf1ba' codep=0x224c parp=0xf1ba
// ================================================

void UNK_0xf1ba() // UNK_0xf1ba
{
  Push(0xb77c);
  MODULE(); // MODULE
}


// ================================================
// 0xf1c2: WORD 'UNK_0xf1c4' codep=0x224c parp=0xf1c4
// ================================================

void UNK_0xf1c4() // UNK_0xf1c4
{
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  _ex_(); // !
  Push(cc__3); // 3
  Push(pp_RECORD_n_); // RECORD#
  _ex_(); // !
}


// ================================================
// 0xf1d4: WORD 'UNK_0xf1d6' codep=0x224c parp=0xf1d6
// ================================================

void UNK_0xf1d6() // UNK_0xf1d6
{
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xf1de: WORD 'UNK_0xf1e0' codep=0x224c parp=0xf1e0
// ================================================

void UNK_0xf1e0() // UNK_0xf1e0
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
// 0xf200: WORD 'UNK_0xf202' codep=0x224c parp=0xf202
// ================================================

void UNK_0xf202() // UNK_0xf202
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
// 0xf232: WORD '>DOWN-SHIELD' codep=0x224c parp=0xf243
// ================================================
// entry

void _gt_DOWN_dash_SHIELD() // >DOWN-SHIELD
{
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  Push(pp__ask_3); // ?3
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xf196(); // UNK_0xf196
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  ICLOSE(); // ICLOSE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;

  UNK_0x3f09("MAGNETIC DISTURBANCES IN NEBULA");
  _dot_TTY(); // .TTY

  UNK_0x3f09("CAUSING ENERGY FLUCTUATIONS");
  _dot_TTY(); // .TTY

  label1:
  UNK_0xf1c4(); // UNK_0xf1c4

  UNK_0x3f09("RAISE SHIELD");
  UNK_0xf1aa(); // UNK_0xf1aa
  UNK_0xf1d6(); // UNK_0xf1d6
  UNK_0xf1a5(); // UNK_0xf1a5
  C_at_(); // C@
  Push(0x00f7);
  Push(Pop() & Pop()); // AND
  Push(0x0010);
  Push(Pop() | Pop()); // OR
  UNK_0xf1a5(); // UNK_0xf1a5
  C_ex_(); // C!
  UNK_0xf1e0(); // UNK_0xf1e0

  UNK_0x3f09("SHIELDS ARE DOWN");
  _dot_TTY(); // .TTY
  Push(pp_BTN_dash_REC); // BTN-REC
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(cc__3); // 3
  Push(2); // 2
  _dot_ABTN(); // .ABTN

  label2:
  Push(pp__ask_SUP); // ?SUP
  _099(); // 099
}


// ================================================
// 0xf2ff: WORD 'UNK_0xf301' codep=0x224c parp=0xf301
// ================================================

void UNK_0xf301() // UNK_0xf301
{
  Push(pp__ask_3); // ?3
  Push(Read16(Pop())); // @
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf30f: WORD 'UNK_0xf311' codep=0x224c parp=0xf311
// ================================================

void UNK_0xf311() // UNK_0xf311
{
  Push(cc__6); // 6
  UNK_0xf1ba(); // UNK_0xf1ba
  _gt_FLAG(); // >FLAG
  Push(pp_NLR); // NLR
  Push(Read16(Pop())); // @
  Push(cc__dash_1); // -1
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  UNK_0xf301(); // UNK_0xf301
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xf1c4(); // UNK_0xf1c4

  UNK_0x3f09("DROP SHIELD ");
  UNK_0xf1aa(); // UNK_0xf1aa
  UNK_0xf1d6(); // UNK_0xf1d6
  UNK_0xf1a5(); // UNK_0xf1a5
  C_at_(); // C@
  Push(0x0018);
  Push(Pop() | Pop()); // OR
  UNK_0xf1a5(); // UNK_0xf1a5
  C_ex_(); // C!
  UNK_0xf1e0(); // UNK_0xf1e0

  UNK_0x3f09("SHIELDS ARE NOW UP");
  _dot_TTY(); // .TTY
  Push(cc__3); // 3
  Push(2); // 2
  _dot_ABTN(); // .ABTN
  Push(pp__ask_SUP); // ?SUP
  ON(); // ON
  return;

  label1:
  Push(pp_NLR); // NLR
  Push(Read16(Pop())); // @
  Push(cc__dash_1); // -1
  _eq_(); // =
  if (Pop() == 0) return;
  CTINIT(); // CTINIT

  UNK_0x3f09("SHIELDS INOPERATIVE");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf39d: WORD '>DISARM' codep=0x224c parp=0xf3a9
// ================================================
// entry

void _gt_DISARM() // >DISARM
{
  UNK_0xf1c4(); // UNK_0xf1c4

  UNK_0x3f09("ARM WEAPON");
  UNK_0xf1b2(); // UNK_0xf1b2
  UNK_0xf1d6(); // UNK_0xf1d6
  UNK_0xf1a5(); // UNK_0xf1a5
  C_at_(); // C@
  Push(0x00fc);
  Push(Pop() & Pop()); // AND
  Push(0x0020);
  Push(Pop() | Pop()); // OR
  UNK_0xf1a5(); // UNK_0xf1a5
  C_ex_(); // C!
  UNK_0xf202(); // UNK_0xf202

  UNK_0x3f09("WEAPONS ARE DISARMED");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf3ed: WORD 'UNK_0xf3ef' codep=0x224c parp=0xf3ef
// ================================================

void UNK_0xf3ef() // UNK_0xf3ef
{
  UNK_0xf1a0(); // UNK_0xf1a0
  Push(Pop()+1); // 1+
  C_at_(); // C@
  UNK_0xf19b(); // UNK_0xf19b
  Push(Pop()+1); // 1+
  C_at_(); // C@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  if (Pop() == 0) goto label2;
  Push(cc__4); // 4
  UNK_0xf1ba(); // UNK_0xf1ba
  goto label9;

  label2:
  Push(0); // 0

  label9:
  DUP(); // DUP
  if (Pop() == 0) goto label3;
  UNK_0xf202(); // UNK_0xf202

  UNK_0x3f09("ARMING ");
  _dot_TTY(); // .TTY
  Push(pp__ask_3); // ?3
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label8;
  PRINT("PLASMA BOLTS", 12); // (.")
  goto label3;

  label8:
  PRINT("MISSLES", 7); // (.")

  label3:
  SWAP(); // SWAP
  if (Pop() == 0) goto label4;
  Push(cc__3); // 3
  UNK_0xf1ba(); // UNK_0xf1ba
  goto label7;

  label4:
  Push(0); // 0

  label7:
  DUP(); // DUP
  if (Pop() == 0) goto label5;
  UNK_0xf202(); // UNK_0xf202

  UNK_0x3f09("ARMING LASERS");
  _dot_TTY(); // .TTY

  label5:
  Push(Pop() + Pop()); // +
  if (Pop() == 0) goto label6;
  UNK_0xf1a5(); // UNK_0xf1a5
  Push(Read16(Pop())); // @
  Push(0x0023);
  Push(Pop() | Pop()); // OR
  UNK_0xf1a5(); // UNK_0xf1a5
  _ex_(); // !
  UNK_0xf1c4(); // UNK_0xf1c4

  UNK_0x3f09("DISARM    ");
  UNK_0xf1b2(); // UNK_0xf1b2
  UNK_0xf1d6(); // UNK_0xf1d6

  label6:
  return;

  label1:
  Pop(); Pop();// 2DROP

  UNK_0x3f09("SHIP IS NOT EQUIPPED WITH WEAPONS");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf4c9: WORD '(/(DIS)ARM)' codep=0x224c parp=0xf4d9
// ================================================
// entry

void _ro__slash__ro_DIS_rc_ARM_rc_() // (/(DIS)ARM)
{
  CTINIT(); // CTINIT
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xf1a5(); // UNK_0xf1a5
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  _gt_DISARM(); // >DISARM
  goto label2;

  label1:
  UNK_0xf3ef(); // UNK_0xf3ef

  label2:
  ICLOSE(); // ICLOSE
  _dot_SORD(); // .SORD
}


// ================================================
// 0xf4f9: WORD '(/(UD)SHIELD)' codep=0x224c parp=0xf50b
// ================================================
// entry

void _ro__slash__ro_UD_rc_SHIELD_rc_() // (/(UD)SHIELD)
{
  CTINIT(); // CTINIT
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xf1a5(); // UNK_0xf1a5
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  _gt_DOWN_dash_SHIELD(); // >DOWN-SHIELD
  goto label3;

  label1:
  UNK_0xf301(); // UNK_0xf301
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;

  UNK_0x3f09("SHIELDS CAN'T BE RAISED");
  _dot_TTY(); // .TTY
  BEEP(); // BEEP
  goto label3;

  label2:
  UNK_0xf311(); // UNK_0xf311

  label3:
  ICLOSE(); // ICLOSE
  _dot_SORD(); // .SORD
}

// 0xf55d: db 0x4e 0x41 0x56 0x00 'NAV '
  