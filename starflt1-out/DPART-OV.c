// store offset = 0xef50
// overlay size   = 0x0610
// name = 'DPART-VOC_______________________________________1086       '

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:          LET-TH  codep:0x224c parp:0xd489 size:0x1adb C-string:'LET_minus_TH'
// 1704:      UNK_0xef66  codep:0x2214 parp:0xef66 size:0x0002 C-string:'UNK_0xef66'
// 1705:      UNK_0xef6a  codep:0x2214 parp:0xef6a size:0x0002 C-string:'UNK_0xef6a'
// 1706:      UNK_0xef6e  codep:0x744d parp:0xef6e size:0x0003 C-string:'UNK_0xef6e'
// 1707:      UNK_0xef73  codep:0x224c parp:0xef73 size:0x0093 C-string:'UNK_0xef73'
// 1708:      UNK_0xf008  codep:0x224c parp:0xf008 size:0x0016 C-string:'UNK_0xf008'
// 1709:      UNK_0xf020  codep:0x224c parp:0xf020 size:0x0004 C-string:'UNK_0xf020'
// 1710:      UNK_0xf026  codep:0x224c parp:0xf026 size:0x003c C-string:'UNK_0xf026'
// 1711:      UNK_0xf064  codep:0x224c parp:0xf064 size:0x0028 C-string:'UNK_0xf064'
// 1712:      UNK_0xf08e  codep:0x224c parp:0xf08e size:0x000c C-string:'UNK_0xf08e'
// 1713:      UNK_0xf09c  codep:0x224c parp:0xf09c size:0x0038 C-string:'UNK_0xf09c'
// 1714:      UNK_0xf0d6  codep:0x224c parp:0xf0d6 size:0x0080 C-string:'UNK_0xf0d6'
// 1715:      UNK_0xf158  codep:0x224c parp:0xf158 size:0x000c C-string:'UNK_0xf158'
// 1716:      UNK_0xf166  codep:0x224c parp:0xf166 size:0x0044 C-string:'UNK_0xf166'
// 1717:      UNK_0xf1ac  codep:0x224c parp:0xf1ac size:0x0028 C-string:'UNK_0xf1ac'
// 1718:      UNK_0xf1d6  codep:0x224c parp:0xf1d6 size:0x007a C-string:'UNK_0xf1d6'
// 1719:      UNK_0xf252  codep:0x224c parp:0xf252 size:0x000a C-string:'UNK_0xf252'
// 1720:      UNK_0xf25e  codep:0x224c parp:0xf25e size:0x003e C-string:'UNK_0xf25e'
// 1721:      UNK_0xf29e  codep:0x224c parp:0xf29e size:0x0010 C-string:'UNK_0xf29e'
// 1722:      UNK_0xf2b0  codep:0x224c parp:0xf2b0 size:0x0034 C-string:'UNK_0xf2b0'
// 1723:      UNK_0xf2e6  codep:0x744d parp:0xf2e6 size:0x0003 C-string:'UNK_0xf2e6'
// 1724:      UNK_0xf2eb  codep:0x224c parp:0xf2eb size:0x001e C-string:'UNK_0xf2eb'
// 1725:      UNK_0xf30b  codep:0x224c parp:0xf30b size:0x0024 C-string:'UNK_0xf30b'
// 1726:      UNK_0xf331  codep:0x224c parp:0xf331 size:0x006a C-string:'UNK_0xf331'
// 1727:      UNK_0xf39d  codep:0x224c parp:0xf39d size:0x0087 C-string:'UNK_0xf39d'
// 1728:      UNK_0xf426  codep:0x224c parp:0xf426 size:0x0008 C-string:'UNK_0xf426'
// 1729:      UNK_0xf430  codep:0x224c parp:0xf430 size:0x0053 C-string:'UNK_0xf430'
// 1730:          DEPART  codep:0x224c parp:0xf48e size:0x00d2 C-string:'DEPART'

// =================================
// =========== VARIABLES ===========
// =================================

const unsigned short int cc_UNK_0xef66 = 0x03e8; // UNK_0xef66
const unsigned short int cc_UNK_0xef6a = 0x0fa0; // UNK_0xef6a


// 0xef62: db 0x5e 0x00 '^ '

// ================================================
// 0xef64: WORD 'UNK_0xef66' codep=0x2214 parp=0xef66
// ================================================
// 0xef66: db 0xe8 0x03 '  '

// ================================================
// 0xef68: WORD 'UNK_0xef6a' codep=0x2214 parp=0xef6a
// ================================================
// 0xef6a: db 0xa0 0x0f '  '

// ================================================
// 0xef6c: WORD 'UNK_0xef6e' codep=0x744d parp=0xef6e
// ================================================
// 0xef6e: db 0x3d 0x1b 0x01 '=  '

// ================================================
// 0xef71: WORD 'UNK_0xef73' codep=0x224c parp=0xef73
// ================================================

void UNK_0xef73() // UNK_0xef73
{
  _gt_MAINVI(); // >MAINVI
  _gt_2FONT(); // >2FONT
  Push(cc__3); // 3
  Push(0); // 0

  do // (DO)
  {
  Push(cc_UNK_0xef66); // UNK_0xef66
  TONE(); // TONE
  BEEPON(); // BEEPON
  DK_minus_BLUE(); // DK-BLUE
  _ex_COLOR(); // !COLOR
  BFILL(); // BFILL
  V_gt_DISPL(); // V>DISPL
  Push(0x00c8);
  MS(); // MS
  LT_minus_BLUE(); // LT-BLUE
  _ex_COLOR(); // !COLOR
  BFILL(); // BFILL
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  Push(0x000c);
  Push(0x0064);
  POS_dot_(); // POS.

  UNK_0x3f39("INCOMING");
  TYPE(); // TYPE
  Push(0x0018);
  Push(0x0050);
  POS_dot_(); // POS.

  UNK_0x3f39("HIGH");
  TYPE(); // TYPE
  Push(0x000f);
  Push(0x003c);
  POS_dot_(); // POS.

  UNK_0x3f39("PRIORITY");
  TYPE(); // TYPE
  Push(0x0011);
  Push(0x0028);
  POS_dot_(); // POS.

  UNK_0x3f39("MESSAGE");
  TYPE(); // TYPE
  Push(cc_UNK_0xef6a); // UNK_0xef6a
  TONE(); // TONE
  V_gt_DISPL(); // V>DISPL
  Push(0x01f4);
  MS(); // MS

  } while(...); // (LOOP) 0xff7d
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf006: WORD 'UNK_0xf008' codep=0x224c parp=0xf008
// ================================================

void UNK_0xf008() // UNK_0xf008
{
  _gt_DISPLA(); // >DISPLA
  Push(cc__4); // 4
  Push(0x00bf);
  POS_dot_(); // POS.
  Push(0x003c);
  Push(0xbe9d);
  MODULE(); // MODULE
}


// ================================================
// 0xf01e: WORD 'UNK_0xf020' codep=0x224c parp=0xf020
// ================================================

void UNK_0xf020() // UNK_0xf020
{
  NOP(); // NOP
}


// ================================================
// 0xf024: WORD 'UNK_0xf026' codep=0x224c parp=0xf026
// ================================================

void UNK_0xf026() // UNK_0xf026
{
  PHRASE_do_(); // PHRASE$
  Push(Pop()+1); // 1+
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  WHITE(); // WHITE
  Push(pp_CTCOLOR); // CTCOLOR
  _ex_(); // !
  Push(0xc216);
  MODULE(); // MODULE
  _i_KEY(); // 'KEY
  Pop(); // DROP
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x4e20); Pust(0x0000);
  D_plus_(); // D+

  label434:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_gt_(); // D>
  _i_KEY(); // 'KEY
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label434;

  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf062: WORD 'UNK_0xf064' codep=0x224c parp=0xf064
// ================================================

void UNK_0xf064() // UNK_0xf064
{
  CDEPTH(); // CDEPTH

  label437:
  UNK_0xf026(); // UNK_0xf026
  _ask_CHILD(); // ?CHILD
  if (Pop() == 0) goto label435;

  IOPEN(); // IOPEN
  goto label437;

  label435:
  CDEPTH(); // CDEPTH
  SWAP(); // SWAP
  _minus_(); // -
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label436;

  Push(0); // 0

  do // (DO)
  {
  ICLOSE(); // ICLOSE

  } while(...); // (LOOP) 0xfffc

  label436:
}


// ================================================
// 0xf08c: WORD 'UNK_0xf08e' codep=0x224c parp=0xf08e
// ================================================

void UNK_0xf08e() // UNK_0xf08e
{
  CTINIT(); // CTINIT
  Push(pp__ro_AWARD_rc_); // (AWARD)
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf064(); // UNK_0xf064
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf09a: WORD 'UNK_0xf09c' codep=0x224c parp=0xf09c
// ================================================

void UNK_0xf09c() // UNK_0xf09c
{
  Push(pp_TIME_minus_PA); // TIME-PA
  OFF(); // OFF
  UNK_0xef73(); // UNK_0xef73
  UNK_0xf008(); // UNK_0xf008
  Push(0); // 0
  SONG(); // SONG
  UNK_0xf08e(); // UNK_0xf08e
  UNK_0xf020(); // UNK_0xf020
  Push(0xc52d);
  MODULE(); // MODULE
  Push(0xa120); Pust(0x0007);
  Push(0xc5ca);
  MODULE(); // MODULE
  Push(cc__3); // 3
  Push(0xc542);
  MODULE(); // MODULE
  Push(pp_TIME_minus_PA); // TIME-PA
  ON(); // ON
  Push(pp_STARDAT); // STARDAT
  _at_(); // @
  Push(pp__ask_WIN); // ?WIN
  _ex_(); // !
}


// ================================================
// 0xf0d4: WORD 'UNK_0xf0d6' codep=0x224c parp=0xf0d6
// ================================================

void UNK_0xf0d6() // UNK_0xf0d6
{
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label411;

  _at_INST_minus_C(); // @INST-C
  _gt_R(); // >R
  I(); // I
  Push(0x0044);
  _eq_(); // =
  I(); // I
  Push(0x001a);
  _eq_(); // =
  I(); // I
  Push(0x0029);
  _eq_(); // =
  DUP(); // DUP
  if (Pop() == 0) goto label412;

  _at_INST_minus_S(); // @INST-S
  Push(cc__3); // 3
  _st_(); // <
  Push(Pop() & Pop()); // AND

  label412:
  I(); // I
  Push(0x001c);
  _eq_(); // =
  DUP(); // DUP
  if (Pop() == 0) goto label413;

  _at_INST_minus_S(); // @INST-S
  Push(0x0010);
  Push(0x0033);
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND

  label413:
  I(); // I
  Push(0x001c);
  _eq_(); // =
  DUP(); // DUP
  if (Pop() == 0) goto label414;

  _at_INST_minus_S(); // @INST-S
  Push(cc__3); // 3
  _eq_(); // =
  Push(pp__ask_WIN); // ?WIN
  _at_(); // @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND

  label414:
  Push(Pop() | Pop()); // OR
  Push(Pop() | Pop()); // OR
  Push(Pop() | Pop()); // OR
  Push(Pop() | Pop()); // OR
  R_gt_(); // R>
  Pop(); // DROP
  goto label415;

  label411:
  Push(0); // 0

  label415:
}


// ================================================
// 0xf156: WORD 'UNK_0xf158' codep=0x224c parp=0xf158
// ================================================

void UNK_0xf158() // UNK_0xf158
{
  if (Pop() == 0) goto label417;

  IDELETE(); // IDELETE
  IPREV(); // IPREV

  label417:
  INEXT(); // INEXT
}


// ================================================
// 0xf164: WORD 'UNK_0xf166' codep=0x224c parp=0xf166
// ================================================

void UNK_0xf166() // UNK_0xf166
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN

  label418:
  Push(0x000b);
  Push(0x000b);
  IFIND(); // IFIND
  if (Pop() == 0) goto label409;

  IOPEN(); // IOPEN

  label419:
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label410;

  UNK_0xf0d6(); // UNK_0xf0d6
  UNK_0xf158(); // UNK_0xf158
  goto label419;

  label410:
  UNK_0xf0d6(); // UNK_0xf0d6
  if (Pop() == 0) goto label416;

  IDELETE(); // IDELETE

  label416:
  _ask_NULL(); // ?NULL
  ICLOSE(); // ICLOSE
  UNK_0xf158(); // UNK_0xf158
  goto label418;

  label409:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1aa: WORD 'UNK_0xf1ac' codep=0x224c parp=0xf1ac
// ================================================

void UNK_0xf1ac() // UNK_0xf1ac
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(pp_SUPER_minus_B); // SUPER-B
  _at__gt_C_plus_S(); // @>C+S
  IDELETE(); // IDELETE
  IFIRST(); // IFIRST

  label421:
  Push(0x0043);
  Push(0); // 0
  IFIND(); // IFIND
  if (Pop() == 0) goto label420;

  IDELETE(); // IDELETE
  goto label421;

  label420:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1d4: WORD 'UNK_0xf1d6' codep=0x224c parp=0xf1d6
// ================================================

void UNK_0xf1d6() // UNK_0xf1d6
{
  CTINIT(); // CTINIT

  UNK_0x3f39("CAPTAIN, WE ARE RECEIVING A ");
  _dot_TTY(); // .TTY

  UNK_0x3f39("COUNTDOWN TRANSMISSION FROM ");
  _dot_TTY(); // .TTY

  UNK_0x3f39("THE BLACK EGG... ");
  _dot_TTY(); // .TTY
  Push(1); // 1
  Push(cc__5); // 5

  do // (DO)
  {
  I(); // I
  Push(0); // 0
  _st__n_(); // <#
  _n_S(); // #S
  _n__gt_(); // #>
  _dot_TTY(); // .TTY
  Push(0x03e8);
  MS(); // MS
  Push(cc__minus_1); // -1

  } while(...); // (+LOOP) 0xffea
}


// ================================================
// 0xf250: WORD 'UNK_0xf252' codep=0x224c parp=0xf252
// ================================================

void UNK_0xf252() // UNK_0xf252
{
  _ex_COLOR(); // !COLOR
  _gt_MAINVI(); // >MAINVI
  BFILL(); // BFILL
  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xf25c: WORD 'UNK_0xf25e' codep=0x224c parp=0xf25e
// ================================================

void UNK_0xf25e() // UNK_0xf25e
{

  UNK_0x3f39("BOOM!");
  _dot_TTY(); // .TTY
  Push(cc__3); // 3
  Push(cc_MPS); // MPS
  Push(Pop() * Pop()); // *
  Push(0); // 0

  do // (DO)
  {
  BLACK(); // BLACK
  ORANGE(); // ORANGE
  RED(); // RED
  ORANGE(); // ORANGE
  YELLOW(); // YELLOW
  ORANGE(); // ORANGE
  YELLOW(); // YELLOW
  WHITE(); // WHITE
  YELLOW(); // YELLOW
  WHITE(); // WHITE
  Push(0x000a);
  Push(0); // 0

  do // (DO)
  {
  UNK_0xf252(); // UNK_0xf252

  } while(...); // (LOOP) 0xfffc

  } while(...); // (LOOP) 0xffdc
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xf29c: WORD 'UNK_0xf29e' codep=0x224c parp=0xf29e
// ================================================

void UNK_0xf29e() // UNK_0xf29e
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_minus_S(); // @INST-S
  ICLOSE(); // ICLOSE
  Push(0x0017);
  _eq_(); // =
}


// ================================================
// 0xf2ae: WORD 'UNK_0xf2b0' codep=0x224c parp=0xf2b0
// ================================================

void UNK_0xf2b0() // UNK_0xf2b0
{
  Push(pp__ro_BOMB_rc_); // (BOMB)
  _at__gt_C_plus_S(); // @>C+S
  _ask__minus_NULL(); // ?-NULL
  if (Pop() == 0) goto label430;

  INST_minus_X(); // INST-X
  _at_(); // @
  Push(0x05a0);
  _minus_(); // -
  ABS(); // ABS
  INST_minus_Y(); // INST-Y
  _at_(); // @
  Push(0x02da);
  _minus_(); // -
  ABS(); // ABS
  Push(Pop() + Pop()); // +
  Push(0x000a);
  _st_(); // <
  goto label431;

  label430:
  Push(0); // 0

  label431:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2e4: WORD 'UNK_0xf2e6' codep=0x744d parp=0xf2e6
// ================================================
// 0xf2e6: db 0x17 0x11 0x01 '   '

// ================================================
// 0xf2e9: WORD 'UNK_0xf2eb' codep=0x224c parp=0xf2eb
// ================================================

void UNK_0xf2eb() // UNK_0xf2eb
{
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _at__gt_C_plus_S(); // @>C+S
  INST_minus_QT(); // INST-QT
  _at_(); // @
  ICLOSE(); // ICLOSE
  BIT(); // BIT
  Push(pp__ro_SYSTEM); // (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf2e6(); // UNK_0xf2e6
  C_at_(); // C@
  Push(Pop() ^ Pop()); // XOR
  UNK_0xf2e6(); // UNK_0xf2e6
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf309: WORD 'UNK_0xf30b' codep=0x224c parp=0xf30b
// ================================================

void UNK_0xf30b() // UNK_0xf30b
{
  _i_KEY(); // 'KEY
  Pop(); // DROP
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x1770); Pust(0x0000);
  D_plus_(); // D+

  label427:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_gt_(); // D>
  _ask_TERMINAL(); // ?TERMINAL
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label427;

  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf32f: WORD 'UNK_0xf331' codep=0x224c parp=0xf331
// ================================================

void UNK_0xf331() // UNK_0xf331
{
  CTINIT(); // CTINIT

  UNK_0x3f39("CAPTAIN, I FELT A TREMOR AS IF");
  _dot_TTY(); // .TTY

  UNK_0x3f39("MILLIONS OF VOICES CRIED OUT AND WERE");
  _dot_TTY(); // .TTY

  UNK_0x3f39("SUDDENLY SILENCED.");
  _dot_TTY(); // .TTY
  UNK_0xf30b(); // UNK_0xf30b
}


// ================================================
// 0xf39b: WORD 'UNK_0xf39d' codep=0x224c parp=0xf39d
// ================================================

void UNK_0xf39d() // UNK_0xf39d
{
  _star_SECS(); // *SECS
  _gt_C_plus_S(); // >C+S
  SUBROOT(); // SUBROOT

  label429:
  NEXT_minus_NO(); // NEXT-NO
  CI(); // CI
  _star_SECS(); // *SECS
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label426;

  _at_INST_minus_C(); // @INST-C
  Push(0x003d);
  _eq_(); // =
  _at_INST_minus_S(); // @INST-S
  Push(cc__9); // 9
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label428;

  Push(0); // 0
  UNK_0xef6e(); // UNK_0xef6e
  C_ex_(); // C!

  label428:
  goto label429;

  label426:
  ICLOSE(); // ICLOSE
  CTINIT(); // CTINIT

  UNK_0x3f39("CAPTAIN, ALL ALIEN COMMUNICATIONS IN");
  _dot_TTY(); // .TTY

  UNK_0x3f39("THE LOCAL VICINITY HAVE CEASED!");
  _dot_TTY(); // .TTY
  UNK_0xf30b(); // UNK_0xf30b
}


// ================================================
// 0xf424: WORD 'UNK_0xf426' codep=0x224c parp=0xf426
// ================================================

void UNK_0xf426() // UNK_0xf426
{
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
}


// ================================================
// 0xf42e: WORD 'UNK_0xf430' codep=0x224c parp=0xf430
// ================================================

void UNK_0xf430() // UNK_0xf430
{
  _star_SPHEXI(); // *SPHEXI
  UNK_0xf426(); // UNK_0xf426
  if (Pop() == 0) goto label423;

  Push(pp__ask_SPHEXI); // ?SPHEXI
  OFF(); // OFF

  label423:
  _star_ELAN(); // *ELAN
  UNK_0xf426(); // UNK_0xf426
  if (Pop() == 0) goto label424;

  Push(pp__ask_ELAN); // ?ELAN
  OFF(); // OFF
  UNK_0xf331(); // UNK_0xf331

  label424:
  _star_BRAIN(); // *BRAIN
  UNK_0xf426(); // UNK_0xf426
  if (Pop() == 0) goto label425;

  UNK_0xf39d(); // UNK_0xf39d

  label425:
  UNK_0xf2eb(); // UNK_0xf2eb
  Push(pp__ro_SYSTEM); // (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _at__gt_C_plus_S(); // @>C+S
  IDELETE(); // IDELETE
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  CTINIT(); // CTINIT

  UNK_0x3f39("PLANET OBLITERATED");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf483: WORD 'DEPART' codep=0x224c parp=0xf48e
// ================================================

void DEPART() // DEPART
{
  Push(pp__ask_CRITIC); // ?CRITIC
  OFF(); // OFF
  Push(0x3a48);
  Push(pp__i_THROW_minus_); // 'THROW-
  _ex_(); // !
  Push(pp__ask_LANDED); // ?LANDED
  _at_(); // @
  if (Pop() == 0) goto label407;

  Push(pp__ask_BOMB); // ?BOMB
  _at_(); // @
  if (Pop() == 0) goto label408;

  UNK_0xf1d6(); // UNK_0xf1d6
  UNK_0xf25e(); // UNK_0xf25e
  UNK_0xf29e(); // UNK_0xf29e
  if (Pop() == 0) goto label422;

  UNK_0xf2b0(); // UNK_0xf2b0
  if (Pop() == 0) goto label432;

  UNK_0xf430(); // UNK_0xf430
  UNK_0xf09c(); // UNK_0xf09c
  Push(pp_WMSG); // WMSG
  ON(); // ON
  goto label438;

  label432:
  CTINIT(); // CTINIT

  UNK_0x3f39("CRYSTAL PLANET DAMAGED");
  _dot_TTY(); // .TTY

  UNK_0x3f39("BUT NOT DESTROYED");
  _dot_TTY(); // .TTY
  Push(0x1388);
  MS(); // MS
  UNK_0xf1ac(); // UNK_0xf1ac

  label438:
  goto label433;

  label422:
  UNK_0xf430(); // UNK_0xf430

  label433:
  NULL(); // NULL
  Push(pp__ro_BOMB_rc_); // (BOMB)
  _1_dot_5_ex_(); // 1.5!
  Push(pp__ask_BOMB); // ?BOMB
  OFF(); // OFF
  goto label407;

  label408:
  UNK_0xf166(); // UNK_0xf166
  UNK_0xf1ac(); // UNK_0xf1ac

  label407:
  Push(cc__minus_1); // -1
  Push(pp_PLHI); // PLHI
  _ex_(); // !
  Push(pp__ask_LANDED); // ?LANDED
  OFF(); // OFF
}

// 0xf525: db 0x44 0x50 0x41 0x52 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x31 0x30 0x38 0x36 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x00 'DPART-VOC_______________________________________1086        '
  