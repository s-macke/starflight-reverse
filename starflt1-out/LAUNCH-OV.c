// store offset = 0xf010
// overlay size   = 0x0550
// name = 'LAUNCH-VOC______________________x for COUNTDOWN---------------)_1280_____ for STP----------'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xf026  codep:0x224c parp:0xf026 size:0x000c C-string:'UNK_0xf026'
// 1704:      UNK_0xf034  codep:0x224c parp:0xf034 size:0x002e C-string:'UNK_0xf034'
// 1705:      UNK_0xf064  codep:0x224c parp:0xf064 size:0x0014 C-string:'UNK_0xf064'
// 1706:      UNK_0xf07a  codep:0x224c parp:0xf07a size:0x0010 C-string:'UNK_0xf07a'
// 1707:      UNK_0xf08c  codep:0x224c parp:0xf08c size:0x000c C-string:'UNK_0xf08c'
// 1708:      UNK_0xf09a  codep:0x224c parp:0xf09a size:0x0032 C-string:'UNK_0xf09a'
// 1709:      UNK_0xf0ce  codep:0x224c parp:0xf0ce size:0x0042 C-string:'UNK_0xf0ce'
// 1710:      UNK_0xf112  codep:0x224c parp:0xf112 size:0x003e C-string:'UNK_0xf112'
// 1711:      UNK_0xf152  codep:0x224c parp:0xf152 size:0x000e C-string:'UNK_0xf152'
// 1712:      UNK_0xf162  codep:0x224c parp:0xf162 size:0x005c C-string:'UNK_0xf162'
// 1713:      UNK_0xf1c0  codep:0x224c parp:0xf1c0 size:0x001c C-string:'UNK_0xf1c0'
// 1714:      UNK_0xf1de  codep:0x224c parp:0xf1de size:0x001c C-string:'UNK_0xf1de'
// 1715:      UNK_0xf1fc  codep:0x1d29 parp:0xf1fc size:0x0032 C-string:'UNK_0xf1fc'
// 1716:        .AIRLOCK  codep:0x224c parp:0xf23b size:0x00a5 C-string:'_dot_AIRLOCK'
// 1717:      UNK_0xf2e2  codep:0x224c parp:0xf2e2 size:0x000a C-string:'UNK_0xf2e2'
// 1718:      UNK_0xf2ee  codep:0x224c parp:0xf2ee size:0x000c C-string:'UNK_0xf2ee'
// 1719:      UNK_0xf2fc  codep:0x224c parp:0xf2fc size:0x0008 C-string:'UNK_0xf2fc'
// 1720:      UNK_0xf306  codep:0x224c parp:0xf306 size:0x0064 C-string:'UNK_0xf306'
// 1721:      UNK_0xf36c  codep:0x224c parp:0xf36c size:0x0025 C-string:'UNK_0xf36c'
// 1722:      UNK_0xf393  codep:0x224c parp:0xf393 size:0x005c C-string:'UNK_0xf393'
// 1723:         &LAUNCH  codep:0x224c parp:0xf3fb size:0x004e C-string:'_and_LAUNCH'
// 1724:         &RETURN  codep:0x224c parp:0xf455 size:0x010b C-string:'_and_RETURN'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf1fc[50] = {0xff, 0x0f, 0xff, 0x01, 0x3f, 0xf8, 0xc7, 0xff, 0xfe, 0xff, 0xf3, 0xfc, 0x8f, 0xff, 0xf0, 0x1f, 0xff, 0xf0, 0x0f, 0x0f, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0xf0, 0xf0, 0x0f, 0xff, 0xf8, 0x0f, 0xff, 0xf1, 0x3f, 0xcf, 0xff, 0x7f, 0xff, 0xe3, 0x1f, 0xfc, 0x80, 0xff, 0xf0, 0xff}; // UNK_0xf1fc



// 0xf022: db 0x50 0x00 'P '

// ================================================
// 0xf024: WORD 'UNK_0xf026' codep=0x224c parp=0xf026
// ================================================

void UNK_0xf026() // UNK_0xf026
{
  MODULE(); // MODULE
  TIME(); // TIME
  _2_at_(); // 2@
  _2SWAP(); // 2SWAP
  D_minus_(); // D-
}


// ================================================
// 0xf032: WORD 'UNK_0xf034' codep=0x224c parp=0xf034
// ================================================

void UNK_0xf034() // UNK_0xf034
{
  Push(0x0010);
  Push(0x000b);

  do // (DO)
  {
  I(); // I
  Push(Pop()<<4); // 16*
  I(); // I
  Push(Pop() + Pop()); // +
  _ex_COLOR(); // !COLOR
  Push(pp_XBLT); // XBLT
  _at_(); // @
  OVER(); // OVER
  _dot_(); // .
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  Push(0x0027);
  MS(); // MS

  } while(...); // (LOOP) 0xffe2
  Pop(); // DROP
}


// ================================================
// 0xf062: WORD 'UNK_0xf064' codep=0x224c parp=0xf064
// ================================================

void UNK_0xf064() // UNK_0xf064
{
  Push(0x0026);
  Push(0x0087);
  POS_dot_(); // POS.
  _gt_2FONT(); // >2FONT
  BEEPON(); // BEEPON
  UNK_0xf034(); // UNK_0xf034
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf078: WORD 'UNK_0xf07a' codep=0x224c parp=0xf07a
// ================================================

void UNK_0xf07a() // UNK_0xf07a
{
  Push(0x0027);
  Push(0x0086);
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
  UNK_0xf034(); // UNK_0xf034
}


// ================================================
// 0xf08a: WORD 'UNK_0xf08c' codep=0x224c parp=0xf08c
// ================================================

void UNK_0xf08c() // UNK_0xf08c
{
  Push(0x0028);
  Push(0x0084);
  LPLOT(); // LPLOT
}


// ================================================
// 0xf098: WORD 'UNK_0xf09a' codep=0x224c parp=0xf09a
// ================================================

void UNK_0xf09a() // UNK_0xf09a
{
  Push(0x2710);
  TONE(); // TONE
  Push(1); // 1
  Push(cc__5); // 5

  do // (DO)
  {
  V_gt_DISPL(); // V>DISPL
  I(); // I
  UNK_0xf064(); // UNK_0xf064
  V_gt_DISPL(); // V>DISPL
  I(); // I
  UNK_0xf07a(); // UNK_0xf07a
  V_gt_DISPL(); // V>DISPL
  UNK_0xf08c(); // UNK_0xf08c
  Push(0x0064);
  MS(); // MS
  V_gt_DISPL(); // V>DISPL
  Push(0x0190);
  MS(); // MS
  Push(cc__minus_1); // -1

  } while(...); // (+LOOP) 0xffde
}


// ================================================
// 0xf0cc: WORD 'UNK_0xf0ce' codep=0x224c parp=0xf0ce
// ================================================

void UNK_0xf0ce() // UNK_0xf0ce
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("COMMENCING LAUNCH SEQUENCE...", 29); // (.")
  UNK_0xf09a(); // UNK_0xf09a
  CTERASE(); // CTERASE
  Push(pp_CONTEXT); // CONTEXT
  _at_(); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1487;

  Push(1); // 1
  Push(pp_CONTEXT); // CONTEXT
  _ex_(); // !
  Push(pp__ask_G_minus_AWAR); // ?G-AWAR
  ON(); // ON
  Push(pp_GWF); // GWF
  OFF(); // OFF

  label1487:
}


// ================================================
// 0xf110: WORD 'UNK_0xf112' codep=0x224c parp=0xf112
// ================================================

void UNK_0xf112() // UNK_0xf112
{
  _2DUP(); // 2DUP
  Push(pp_STIME); // STIME
  D_ex_(); // D!
  Push(0x03e8); Pust(0x0000);
  D_st_(); // D<
  if (Pop() == 0) goto label1489;

  Push(pp__ask_SECURE); // ?SECURE
  _at_(); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1489;

  Push(pp_STARDAT); // STARDAT
  _at_(); // @
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(pp__ask_SECURE); // ?SECURE
  _ex_(); // !
  Push(0x01f4);
  Push(0x2710);
  Push(0x01f4);
  Push(0x03e8);
  Push(2); // 2
  _gt_SND(); // >SND

  label1489:
}


// ================================================
// 0xf150: WORD 'UNK_0xf152' codep=0x224c parp=0xf152
// ================================================

void UNK_0xf152() // UNK_0xf152
{
  Push(cc__4); // 4
  SWAP(); // SWAP
  Push(0x004b);
  OVER(); // OVER
  LLINE(); // LLINE
}


// ================================================
// 0xf160: WORD 'UNK_0xf162' codep=0x224c parp=0xf162
// ================================================

void UNK_0xf162() // UNK_0xf162
{
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  DUP(); // DUP
  UNK_0xf152(); // UNK_0xf152
  Push(0); // 0
  Push(0x000a);
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  OVER(); // OVER
  Push(0x0084);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1491;

  Push(1); // 1
  Push(0x0010);
  RRND(); // RRND
  DUP(); // DUP
  Push(Pop()<<4); // 16*
  Push(Pop() + Pop()); // +
  _ex_COLOR(); // !COLOR
  Push(cc__4); // 4
  Push(0x004c);
  RRND(); // RRND
  SWAP(); // SWAP
  _2DUP(); // 2DUP
  LPLOT(); // LPLOT
  Push(0x0048);
  _minus_(); // -
  SWAP(); // SWAP
  Push(cc__4); // 4
  _minus_(); // -
  SWAP(); // SWAP
  _gt_MAINVI(); // >MAINVI
  LPLOT(); // LPLOT
  _gt_DISPLA(); // >DISPLA
  goto label1492;

  label1491:
  Pop(); // DROP

  label1492:
}


// ================================================
// 0xf1be: WORD 'UNK_0xf1c0' codep=0x224c parp=0xf1c0
// ================================================

void UNK_0xf1c0() // UNK_0xf1c0
{
  _gt_R(); // >R
  Push(cc__4); // 4
  Push(0x00be);
  Push(0x004c);
  I(); // I
  Push(cc__4); // 4
  Push(0x00bf);
  LCOPYBL(); // LCOPYBL
  R_gt_(); // R>
  UNK_0xf162(); // UNK_0xf162
}


// ================================================
// 0xf1dc: WORD 'UNK_0xf1de' codep=0x224c parp=0xf1de
// ================================================

void UNK_0xf1de() // UNK_0xf1de
{
  _gt_R(); // >R
  Push(cc__4); // 4
  I(); // I
  Push(0x004c);
  Push(0x0049);
  Push(cc__4); // 4
  I(); // I
  Push(Pop()-1); // 1-
  LCOPYBL(); // LCOPYBL
  R_gt_(); // R>
  UNK_0xf162(); // UNK_0xf162
}


// ================================================
// 0xf1fa: WORD 'UNK_0xf1fc' codep=0x1d29 parp=0xf1fc
// ================================================
// 0xf1fc: db 0xff 0x0f 0xff 0x01 0x3f 0xf8 0xc7 0xff 0xfe 0xff 0xf3 0xfc 0x8f 0xff 0xf0 0x1f 0xff 0xf0 0x0f 0x0f 0xf0 0x00 0x0f 0x00 0x00 0x00 0x00 0xf0 0x00 0x0f 0xf0 0xf0 0x0f 0xff 0xf8 0x0f 0xff 0xf1 0x3f 0xcf 0xff 0x7f 0xff 0xe3 0x1f 0xfc 0x80 0xff 0xf0 0xff '    ?                                 ?          '

// ================================================
// 0xf22e: WORD '.AIRLOCK' codep=0x224c parp=0xf23b
// ================================================

void _dot_AIRLOCK() // .AIRLOCK
{
  _gt_MAINVI(); // >MAINVI
  GREY2(); // GREY2
  _ex_COLOR(); // !COLOR
  BFILL(); // BFILL
  BLACK(); // BLACK
  BLACK(); // BLACK
  YELLOW(); // YELLOW
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  _gt_2FONT(); // >2FONT
  Push(0x0011);
  Push(0x006d);
  POS_dot_(); // POS.
  PRINT("CAUTION", 7); // (.")
  _gt_1FONT(); // >1FONT
  Push(cc__5); // 5
  Push(0x005d);
  POS_dot_(); // POS.
  PRINT("PRESSURIZED AREA", 16); // (.")
  Push(cc__5); // 5
  Push(0x001e);
  POS_dot_(); // POS.
  PRINT("STANDARD AIRLOCK", 16); // (.")
  Push(cc__5); // 5
  Push(0x0014);
  POS_dot_(); // POS.
  PRINT("PROCEDURES APPLY", 16); // (.")
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex_(); // !
  Push(0x001a);
  Push(0x0045);
  POS_dot_(); // POS.
  Push(0x0014);
  DUP(); // DUP
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(pp_UNK_0xf1fc); // UNK_0xf1fc
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  BLT(); // BLT
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xf2e0: WORD 'UNK_0xf2e2' codep=0x224c parp=0xf2e2
// ================================================

void UNK_0xf2e2() // UNK_0xf2e2
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0xd125);
}


// ================================================
// 0xf2ec: WORD 'UNK_0xf2ee' codep=0x224c parp=0xf2ee
// ================================================

void UNK_0xf2ee() // UNK_0xf2ee
{
  Push(Pop()*2); // 2*
  Push(pp_YTABL); // YTABL
  _at_(); // @
  Push(Pop() + Pop()); // +
  _at_(); // @
}


// ================================================
// 0xf2fa: WORD 'UNK_0xf2fc' codep=0x224c parp=0xf2fc
// ================================================

void UNK_0xf2fc() // UNK_0xf2fc
{
  _gt_MAINVI(); // >MAINVI
  UNK_0xf2ee(); // UNK_0xf2ee
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xf304: WORD 'UNK_0xf306' codep=0x224c parp=0xf306
// ================================================

void UNK_0xf306() // UNK_0xf306
{
  _gt_R(); // >R
  if (Pop() == 0) goto label1483;

  Push(0x00bf);
  UNK_0xf2ee(); // UNK_0xf2ee
  Push(cc__4); // 4
  Push(0x00bf);
  Push(0x004c);
  Push(0x00bf);
  I(); // I
  _minus_(); // -
  Push(cc__4); // 4
  Push(0x00be);
  goto label1484;

  label1483:
  Push(0x0048);
  UNK_0xf2ee(); // UNK_0xf2ee
  Push(cc__4); // 4
  Push(0x0048);
  I(); // I
  Push(Pop() + Pop()); // +
  Push(0x004c);
  Push(0x0048);
  _2OVER(); // 2OVER
  Push(Pop()+1); // 1+

  label1484:
  LCOPYBL(); // LCOPYBL
  R_gt_(); // R>
  Pop(); // DROP
  Push(pp_HBUF_minus_SE); // HBUF-SE
  _at_(); // @
  ROT(); // ROT
  UNK_0xf2fc(); // UNK_0xf2fc
  Push(pp_DBUF_minus_SE); // DBUF-SE
  _at_(); // @
  Push(cc__4); // 4
  ROLL(); // ROLL
  Push(Pop()+2); // 2+
  Push(0x0024);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xf36a: WORD 'UNK_0xf36c' codep=0x224c parp=0xf36c
// ================================================

void UNK_0xf36c() // UNK_0xf36c
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  TYPE(); // TYPE
  PRINT(" DOCKING BAY DOORS", 18); // (.")
  Push(0x7148);
  TONE(); // TONE
  BEEPON(); // BEEPON
}


// ================================================
// 0xf391: WORD 'UNK_0xf393' codep=0x224c parp=0xf393
// ================================================

void UNK_0xf393() // UNK_0xf393
{
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  _gt_DISPLA(); // >DISPLA
  Push(pp__ask_EGA); // ?EGA
  _at_(); // @
  if (Pop() == 0) goto label1490;

  Push(0x05dc);
  MS(); // MS
  V_gt_DISPL(); // V>DISPL
  goto label1493;

  label1490:
  Push(0x003b);
  Push(0); // 0

  do // (DO)
  {
  Push(0x0084);
  I(); // I
  Push(Pop() + Pop()); // +
  UNK_0xf1c0(); // UNK_0xf1c0
  Push(0x0084);
  I(); // I
  _minus_(); // -
  UNK_0xf1de(); // UNK_0xf1de
  Push(0x7148);
  TONE(); // TONE
  Push(0x001e);
  MS(); // MS

  } while(...); // (LOOP) 0xffde
  Push(0x00bf);
  UNK_0xf162(); // UNK_0xf162
  Push(0x0048);
  UNK_0xf162(); // UNK_0xf162
  BEEPOFF(); // BEEPOFF
  Push(0x00fa);
  MS(); // MS

  label1493:
}


// ================================================
// 0xf3ef: WORD '&LAUNCH' codep=0x224c parp=0xf3fb
// ================================================

void _and_LAUNCH() // &LAUNCH
{
  Push(pp_CONTEXT); // CONTEXT
  _at_(); // @
  Push(cc__5); // 5
  _eq_(); // =
  DUP(); // DUP
  if (Pop() == 0) goto label1486;

  UNK_0xf2e2(); // UNK_0xf2e2
  UNK_0xf026(); // UNK_0xf026
  UNK_0xf112(); // UNK_0xf112

  UNK_0x3f39("OPENING");
  UNK_0xf36c(); // UNK_0xf36c
  UNK_0xf393(); // UNK_0xf393

  label1486:
  UNK_0xf0ce(); // UNK_0xf0ce
  if (Pop() == 0) goto label1488;

  Push(0xcc0a);
  MODULE(); // MODULE
  CTINIT(); // CTINIT

  UNK_0x3f39("STANDING BY TO MANEUVER");
  _dot_TTY(); // .TTY

  label1488:
}


// ================================================
// 0xf449: WORD '&RETURN' codep=0x224c parp=0xf455
// ================================================

void _and_RETURN() // &RETURN
{
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  Push(cc__6); // 6
  Push(0x0012);
  RRND(); // RRND
  Push(0); // 0

  do // (DO)
  {
  Push(1); // 1
  Push(0x0010);
  RRND(); // RRND
  DUP(); // DUP
  Push(Pop()<<4); // 16*
  Push(Pop() + Pop()); // +
  _ex_COLOR(); // !COLOR
  Push(0); // 0
  Push(0x0048);
  RRND(); // RRND
  Push(0); // 0
  Push(0x0078);
  RRND(); // RRND
  LPLOT(); // LPLOT

  } while(...); // (LOOP) 0xffdc
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA

  UNK_0x3f39("CLOSING");
  UNK_0xf36c(); // UNK_0xf36c
  _dot_AIRLOCK(); // .AIRLOCK
  GREY2(); // GREY2
  _ex_COLOR(); // !COLOR
  Push(pp__ask_EGA); // ?EGA
  _at_(); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1482;

  Push(0x00bf);
  UNK_0xf152(); // UNK_0xf152
  Push(0x0048);
  UNK_0xf152(); // UNK_0xf152
  Push(0x7148);
  TONE(); // TONE
  BEEPON(); // BEEPON
  Push(0x003b);
  Push(0); // 0

  do // (DO)
  {
  Push(0x003c);
  I(); // I
  Push(Pop() + Pop()); // +
  Push(1); // 1
  I(); // I
  UNK_0xf306(); // UNK_0xf306
  Push(0x003c);
  I(); // I
  _minus_(); // -
  Push(0); // 0
  I(); // I
  UNK_0xf306(); // UNK_0xf306
  Push(0x7148);
  TONE(); // TONE
  Push(0x001e);
  MS(); // MS

  } while(...); // (LOOP) 0xffd6
  goto label1485;

  label1482:
  Push(0x05dc);
  MS(); // MS
  _dot_AIRLOCK(); // .AIRLOCK

  label1485:
  V_gt_DISPL(); // V>DISPL
  BEEPOFF(); // BEEPOFF
}

// 0xf505: db 0x4c 0x41 0x55 0x4e 0x43 0x48 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x78 0x20 0x66 0x6f 0x72 0x20 0x43 0x4f 0x55 0x4e 0x54 0x44 0x4f 0x57 0x4e 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x5f 0x31 0x32 0x38 0x30 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x53 0x54 0x50 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'LAUNCH-VOC______________________x for COUNTDOWN---------------)_1280_____ for STP---------- '
  