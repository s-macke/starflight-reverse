// store offset = 0xefc0
// overlay size   = 0x05a0
// name = 'MISC-___________________________for MISC----------'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xefd6 bitfield: 0 0 0  codep:0x744d parp:0xefd6 size:0x0003
// 1704:      UNK_0xefdb bitfield: 0 0 0  codep:0x744d parp:0xefdb size:0x0003
// 1705:      UNK_0xefe0 bitfield: 0 0 0  codep:0x744d parp:0xefe0 size:0x0003
// 1706:      UNK_0xefe5 bitfield: 0 0 0  codep:0x1d29 parp:0xefe5 size:0x0014
// 1707:           (TRIM bitfield: 0 0 0  codep:0x224c parp:0xf003 size:0x0030
// 1708:      UNK_0xf035 bitfield: 0 0 0  codep:0x224c parp:0xf035 size:0x0036
// 1709:      UNK_0xf06d bitfield: 0 0 0  codep:0x224c parp:0xf06d size:0x0020
// 1710:      UNK_0xf08f bitfield: 0 0 0  codep:0x224c parp:0xf08f size:0x0028
// 1711:      UNK_0xf0b9 bitfield: 0 0 0  codep:0x224c parp:0xf0b9 size:0x0026
// 1712:           (#IN$ bitfield: 0 0 0  codep:0x224c parp:0xf0e9 size:0x00ba
// 1713:           (?ART bitfield: 0 0 0  codep:0x224c parp:0xf1ad size:0x002e
// 1714:           (QUIT bitfield: 0 0 0  codep:0x224c parp:0xf1e5 size:0x0021
// 1715:           (.0$$ bitfield: 0 0 0  codep:0x224c parp:0xf210 size:0x0019
// 1716:           (0$$$ bitfield: 0 0 0  codep:0x224c parp:0xf233 size:0x0099
// 1717:            .ERR bitfield: 0 0 0  codep:0x4a4f parp:0xf2d5 size:0x001c
// 1718:           EINDE bitfield: 0 0 0  codep:0x4a4f parp:0xf2fb size:0x001c
// 1719:      UNK_0xf319 bitfield: 0 0 0  codep:0x224c parp:0xf319 size:0x0068
// 1720:      UNK_0xf383 bitfield: 0 0 0  codep:0x224c parp:0xf383 size:0x001a
// 1721:      UNK_0xf39f bitfield: 0 0 0  codep:0x224c parp:0xf39f size:0x0034
// 1722:           (?.EQ bitfield: 0 0 0  codep:0x224c parp:0xf3dd size:0x0079
// 1723:      UNK_0xf458 bitfield: 0 0 0  codep:0x224c parp:0xf458 size:0x0020
// 1724:           =CARG bitfield: 0 0 0  codep:0x224c parp:0xf482 size:0x00de

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xefe5[20] = {0x03, 0x03, 0x00, 0x22, 0x03, 0x03, 0x80, 0x80, 0x03, 0x03, 0x00, 0x5d, 0x02, 0x02, 0x00, 0x60, 0x02, 0x02, 0x00, 0x90};



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

void (TRIM()
{
  @DS pp_BLTSEG !();
  Push(cc_4); * pp_UNK_0xefe5 + >R I C@ pp_LBLT !();
  I 1+ C@ pp_WBLT !();
  R> 2+ pp_ABLT !();
  POS.();
  BLT();
  
}


// ================================================
// 0xf033: WORD 'UNK_0xf035' codep=0x224c parp=0xf035
// ================================================

void UNK_0xf035()
{
  PAD();
  C@ 
  if (Pop() == 0) goto label565;
  Push(0xfffc); pp_XBLT +!();
  PAD();
  DUP C@ + C@ EMIT Push(0xfffc); pp_XBLT +!();
  PAD();
  C@ 1- PAD();
  C!();
  
  goto label566;
  
  label565:
  BEEP();
  
  label566:
  
}


// ================================================
// 0xf06b: WORD 'UNK_0xf06d' codep=0x224c parp=0xf06d
// ================================================

void UNK_0xf06d()
{
  Push(0x01f4); Pust(0x0000); TIME 2@ D+ 
  label557:
  TIME 2@ 2OVER();
  D>();
  ?TERMINAL OR 
  if (Pop() == 0) goto label557;
  2DROP 
}


// ================================================
// 0xf08d: WORD 'UNK_0xf08f' codep=0x224c parp=0xf08f
// ================================================

void UNK_0xf08f()
{
  @CRS();
  pp_XORMODE ON();
  WHITE WHITE BROWN ?MRC();
  !COLOR();
  
  (.") string 1 "#"
  UNK_0xf06d();
  Push(0xfffc); pp_XBLT +!();
  
  (.") string 1 "#"
  UNK_0xf06d();
  !CRS();
  
}


// ================================================
// 0xf0b7: WORD 'UNK_0xf0b9' codep=0x224c parp=0xf0b9
// ================================================

void UNK_0xf0b9()
{
  pp_-AIN @ 
  if (Pop() == 0) goto label559;
  DUP pp_-AIN @ = SWAP Push(0x0030); Push(0x003a); WITHIN();
  OR 
  goto label560;
  
  label559:
  0> 
  label560:
  
}


// ================================================
// 0xf0df: WORD '(#IN$' codep=0x224c parp=0xf0e9
// ================================================

void (#IN$()
{
  >R PAD();
  I 1+ Push(0); FILL();
  pp_XORMODE ON();
  
  label564:
  UNK_0xf08f();
  'KEY();
  DUP Push(0x005a); Push(0x0080); WITHIN();
  
  if (Pop() == 0) goto label558;
  Push(0x00df); AND 
  label558:
  >R I Push(0x0021); Push(0x005b); WITHIN();
  I Push(cc_BL); = PAD();
  C@ 0> AND OR I UNK_0xf0b9();
  AND PAD();
  C@ I' < AND 
  if (Pop() == 0) goto label561;
  I EMIT I PAD();
  C@ 1+ DUP PAD();
  C!();
  PAD();
  + C!();
  
  goto label563;
  
  label561:
  I Push(cc_8); = 
  if (Pop() == 0) goto label562;
  UNK_0xf035();
  
  goto label563;
  
  label562:
  I Push(0x000d); = NOT I 0> AND 
  if (Pop() == 0) goto label563;
  BEEP();
  
  label563:
  R> Push(0x000d); = PAD();
  C@ 0> AND 
  if (Pop() == 0) goto label564;
  R> DROP PAD();
  
}


// ================================================
// 0xf1a3: WORD '(?ART' codep=0x224c parp=0xf1ad
// ================================================

void (?ART()
{
  *STARSH >C+S();
  IOPEN();
  Push(0x000b); Push(0x000f); IFIND();
  
  if (Pop() == 0) goto label549;
  IOPEN();
  Push(0x001c); SWAP IFIND();
  CDROP();
  
  goto label550;
  
  label549:
  DROP Push(0); 
  label550:
  CDROP();
  ICLOSE();
  
}


// ================================================
// 0xf1db: WORD '(QUIT' codep=0x224c parp=0xf1e5
// ================================================

void (QUIT()
{
  Push(1); 0MESS();
  @CRS();
  CTINIT();
  Push(0x003f); Push(0x0011); POS.();
  
  (.") string 8 "[ QUIT ]"
  !CRS();
  
}


// ================================================
// 0xf206: WORD '(.0$$' codep=0x224c parp=0xf210
// ================================================

void (.0$$()
{
  
  (.") string 18 "INSUFFICIENT FUNDS"
  BEEP();
  
}


// ================================================
// 0xf229: WORD '(0$$$' codep=0x224c parp=0xf233
// ================================================

void (0$$$()
{
  Push(1); 0MESS();
  pp_XORMODE OFF();
  Push(1); Push(0x0012); CMESS();
  (.0$$();
  !CRS();
  TIME 2@ Push(0x09c4); Pust(0x0000); D+ 
  label548:
  TIME 2@ 2OVER();
  D>();
  ?TERMINAL OR 
  if (Pop() == 0) goto label548;
  2DROP (QUIT();
  
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

void UNK_0xf319()
{
  BLACK ERASE-A();
  CTINIT();
  .ERR Push(0x0079); OVER 2* - Push(0x00b4); POS.();
  TYPE pp_XORMODE ON();
  PINK !COLOR();
  >2FONT();
  BEEPON();
  Push(cc_9); Push(0); 
  do // (DO)
  {
  I Push(2); MOD();
  2+ Push(0x03e8); * TONE Push(0x005a); Push(0x009b); POS.();
  
  (.") string 11 "MALFUNCTION"
  Push(0x00fa); MS();
  
  } while(...); // (LOOP) 0xffd0
  BEEPOFF Push(cc_7); pp_#AUX !();
  
}


// ================================================
// 0xf381: WORD 'UNK_0xf383' codep=0x224c parp=0xf383
// ================================================

void UNK_0xf383()
{
  EINDE 2* UNK_0xefd6 + 1+ DUP C@ Push(0x0080); OR SWAP C!();
  
}


// ================================================
// 0xf39d: WORD 'UNK_0xf39f' codep=0x224c parp=0xf39f
// ================================================

void UNK_0xf39f()
{
  DUP EINDE 2* UNK_0xefd6 + C@ Push(0x0064); - ABS();
  Push(0); Push(0x0064); RRND();
  > 
  if (Pop() == 0) goto label553;
  DUP UNK_0xf383();
  UNK_0xf319();
  Push(0); 
  goto label554;
  
  label553:
  DROP Push(1); 
  label554:
  
}


// ================================================
// 0xf3d3: WORD '(?.EQ' codep=0x224c parp=0xf3dd
// ================================================

void (?.EQ()
{
  >R *SHIP >C+S();
  CTINIT();
  I EINDE 2* UNK_0xefd6 + 1+ C@ ?DUP 
  if (Pop() == 0) goto label551;
  Push(0x0080); AND 
  if (Pop() == 0) goto label552;
  I .ERR .TTY();
  
  (.") string 13 ": INOPERATIVE"
  Push(0); 
  goto label556;
  
  label552:
  I UNK_0xf39f();
  
  label556:
  
  goto label555;
  
  label551:
  
  UNK_0x3f39("SHIP IS NOT EQUIPPED WITH ");
  .TTY();
  I .ERR TYPE Push(0); 
  label555:
  R> DROP ICLOSE();
  
}


// ================================================
// 0xf456: WORD 'UNK_0xf458' codep=0x224c parp=0xf458
// ================================================

void UNK_0xf458()
{
  Push(0); 
  label540:
  ?-NULL();
  
  if (Pop() == 0) goto label539;
  IOPEN();
  ?-NULL();
  OR ICLOSE();
  INEXT();
  ?FIRST();
  
  goto label541;
  
  label539:
  Push(1); 
  label541:
  
  if (Pop() == 0) goto label540;
  
}


// ================================================
// 0xf478: WORD '=CARG' codep=0x224c parp=0xf482
// ================================================

void =CARG()
{
  NULL pp_10*END D!();
  *SHIP >C+S();
  UNK_0xefdb @ +BIT 1+ Push(0x01f4); * *STARSH >C+S();
  IOPEN();
  UNK_0xf458();
  
  if (Pop() == 0) goto label542;
  Push(0); 
  label544:
  @INST-C();
  Push(0x000b); = @INST-S();
  Push(0x0011); = NOT AND @INST-S();
  Push(0x0030); = NOT AND 
  if (Pop() == 0) goto label543;
  IOPEN();
  
  label547:
  @INST-S();
  Push(cc_6); = @INST-C();
  Push(0x001a); = AND 
  if (Pop() == 0) goto label546;
  INST-QT @ Push(0x000a); U* pp_10*END D!();
  
  label546:
  INST-QT @ + NULL INST-X D!();
  INEXT();
  ?FIRST();
  
  if (Pop() == 0) goto label547;
  ICLOSE();
  
  label543:
  INEXT();
  ?FIRST();
  
  if (Pop() == 0) goto label544;
  
  goto label545;
  
  label542:
  Push(0); 
  label545:
  ICLOSE();
  ICLOSE();
  - DUP UNK_0xefe0 !();
  Push(0x000a); U* pp_10*CARG D!();
  ICLOSE();
  
}

// 0xf52e: db 0x4d 0x49 0x53 0x43 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x4d 0x49 0x53 0x43 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'MISC-___________________________for MISC---------- '
  