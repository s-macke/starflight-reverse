// store offset = 0xef50
// overlay size   = 0x0610
// name = 'DPART-VOC_______________________________________1086       '

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:          LET-TH bitfield: 0 0 0  codep:0x224c parp:0xd489 size:0x1adb
// 1704:      UNK_0xef66 bitfield: 0 0 0  codep:0x2214 parp:0xef66 size:0x0002 = 0x3e8
// 1705:      UNK_0xef6a bitfield: 0 0 0  codep:0x2214 parp:0xef6a size:0x0002 = 0xfa0
// 1706:      UNK_0xef6e bitfield: 0 0 0  codep:0x744d parp:0xef6e size:0x0003
// 1707:      UNK_0xef73 bitfield: 0 0 0  codep:0x224c parp:0xef73 size:0x0093
// 1708:      UNK_0xf008 bitfield: 0 0 0  codep:0x224c parp:0xf008 size:0x0016
// 1709:      UNK_0xf020 bitfield: 0 0 0  codep:0x224c parp:0xf020 size:0x0004
// 1710:      UNK_0xf026 bitfield: 0 0 0  codep:0x224c parp:0xf026 size:0x003c
// 1711:      UNK_0xf064 bitfield: 0 0 0  codep:0x224c parp:0xf064 size:0x0028
// 1712:      UNK_0xf08e bitfield: 0 0 0  codep:0x224c parp:0xf08e size:0x000c
// 1713:      UNK_0xf09c bitfield: 0 0 0  codep:0x224c parp:0xf09c size:0x0038
// 1714:      UNK_0xf0d6 bitfield: 0 0 0  codep:0x224c parp:0xf0d6 size:0x0080
// 1715:      UNK_0xf158 bitfield: 0 0 0  codep:0x224c parp:0xf158 size:0x000c
// 1716:      UNK_0xf166 bitfield: 0 0 0  codep:0x224c parp:0xf166 size:0x0044
// 1717:      UNK_0xf1ac bitfield: 0 0 0  codep:0x224c parp:0xf1ac size:0x0028
// 1718:      UNK_0xf1d6 bitfield: 0 0 0  codep:0x224c parp:0xf1d6 size:0x007a
// 1719:      UNK_0xf252 bitfield: 0 0 0  codep:0x224c parp:0xf252 size:0x000a
// 1720:      UNK_0xf25e bitfield: 0 0 0  codep:0x224c parp:0xf25e size:0x003e
// 1721:      UNK_0xf29e bitfield: 0 0 0  codep:0x224c parp:0xf29e size:0x0010
// 1722:      UNK_0xf2b0 bitfield: 0 0 0  codep:0x224c parp:0xf2b0 size:0x0034
// 1723:      UNK_0xf2e6 bitfield: 0 0 0  codep:0x744d parp:0xf2e6 size:0x0003
// 1724:      UNK_0xf2eb bitfield: 0 0 0  codep:0x224c parp:0xf2eb size:0x001e
// 1725:      UNK_0xf30b bitfield: 0 0 0  codep:0x224c parp:0xf30b size:0x0024
// 1726:      UNK_0xf331 bitfield: 0 0 0  codep:0x224c parp:0xf331 size:0x006a
// 1727:      UNK_0xf39d bitfield: 0 0 0  codep:0x224c parp:0xf39d size:0x0087
// 1728:      UNK_0xf426 bitfield: 0 0 0  codep:0x224c parp:0xf426 size:0x0008
// 1729:      UNK_0xf430 bitfield: 0 0 0  codep:0x224c parp:0xf430 size:0x0053
// 1730:          DEPART bitfield: 0 0 0  codep:0x224c parp:0xf48e size:0x00d2

// =================================
// =========== VARIABLES ===========
// =================================

const unsigned short int cc_UNK_0xef66 = 0x03e8;
const unsigned short int cc_UNK_0xef6a = 0x0fa0;


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

void UNK_0xef73()
{
  >MAINVI();
  >2FONT();
  Push(cc_3); Push(0); 
  do // (DO)
  {
  Push(cc_UNK_0xef66); TONE BEEPON();
  DK-BLUE !COLOR();
  BFILL V>DISPL Push(0x00c8); MS();
  LT-BLUE !COLOR();
  BFILL BLACK !COLOR();
  Push(0x000c); Push(0x0064); POS.();
  
  UNK_0x3f39("INCOMING");
  TYPE Push(0x0018); Push(0x0050); POS.();
  
  UNK_0x3f39("HIGH");
  TYPE Push(0x000f); Push(0x003c); POS.();
  
  UNK_0x3f39("PRIORITY");
  TYPE Push(0x0011); Push(0x0028); POS.();
  
  UNK_0x3f39("MESSAGE");
  TYPE Push(cc_UNK_0xef6a); TONE V>DISPL Push(0x01f4); MS();
  
  } while(...); // (LOOP) 0xff7d
  BEEPOFF 
}


// ================================================
// 0xf006: WORD 'UNK_0xf008' codep=0x224c parp=0xf008
// ================================================

void UNK_0xf008()
{
  >DISPLA();
  Push(cc_4); Push(0x00bf); POS.();
  Push(0x003c); Push(0xbe9d); MODULE();
  
}


// ================================================
// 0xf01e: WORD 'UNK_0xf020' codep=0x224c parp=0xf020
// ================================================

void UNK_0xf020()
{
  NOP();
  
}


// ================================================
// 0xf024: WORD 'UNK_0xf026' codep=0x224c parp=0xf026
// ================================================

void UNK_0xf026()
{
  PHRASE$ 1+ COUNT();
  HUFF>();
  pp_LSCAN COUNT();
  WHITE pp_CTCOLOR !();
  Push(0xc216); MODULE();
  'KEY();
  DROP TIME 2@ Push(0x4e20); Pust(0x0000); D+ 
  label434:
  TIME 2@ 2OVER();
  D>();
  'KEY();
  OR 
  if (Pop() == 0) goto label434;
  2DROP 
}


// ================================================
// 0xf062: WORD 'UNK_0xf064' codep=0x224c parp=0xf064
// ================================================

void UNK_0xf064()
{
  CDEPTH 
  label437:
  UNK_0xf026();
  ?CHILD();
  
  if (Pop() == 0) goto label435;
  IOPEN();
  
  goto label437;
  
  label435:
  CDEPTH SWAP - ?DUP 
  if (Pop() == 0) goto label436;
  Push(0); 
  do // (DO)
  {
  ICLOSE();
  
  } while(...); // (LOOP) 0xfffc
  
  label436:
  
}


// ================================================
// 0xf08c: WORD 'UNK_0xf08e' codep=0x224c parp=0xf08e
// ================================================

void UNK_0xf08e()
{
  CTINIT();
  pp_(AWARD) @>C+S();
  UNK_0xf064();
  ICLOSE();
  
}


// ================================================
// 0xf09a: WORD 'UNK_0xf09c' codep=0x224c parp=0xf09c
// ================================================

void UNK_0xf09c()
{
  pp_TIME-PA OFF();
  UNK_0xef73();
  UNK_0xf008();
  Push(0); SONG();
  UNK_0xf08e();
  UNK_0xf020();
  Push(0xc52d); MODULE();
  Push(0xa120); Pust(0x0007); Push(0xc5ca); MODULE();
  Push(cc_3); Push(0xc542); MODULE();
  pp_TIME-PA ON();
  pp_STARDAT @ pp_?WIN !();
  
}


// ================================================
// 0xf0d4: WORD 'UNK_0xf0d6' codep=0x224c parp=0xf0d6
// ================================================

void UNK_0xf0d6()
{
  ?NULL();
  NOT 
  if (Pop() == 0) goto label411;
  @INST-C();
  >R I Push(0x0044); = I Push(0x001a); = I Push(0x0029); = DUP 
  if (Pop() == 0) goto label412;
  @INST-S();
  Push(cc_3); < AND 
  label412:
  I Push(0x001c); = DUP 
  if (Pop() == 0) goto label413;
  @INST-S();
  Push(0x0010); Push(0x0033); WITHIN();
  AND 
  label413:
  I Push(0x001c); = DUP 
  if (Pop() == 0) goto label414;
  @INST-S();
  Push(cc_3); = pp_?WIN @ 0> AND AND 
  label414:
  OR OR OR OR R> DROP 
  goto label415;
  
  label411:
  Push(0); 
  label415:
  
}


// ================================================
// 0xf156: WORD 'UNK_0xf158' codep=0x224c parp=0xf158
// ================================================

void UNK_0xf158()
{
  
  if (Pop() == 0) goto label417;
  IDELETE();
  IPREV();
  
  label417:
  INEXT();
  
}


// ================================================
// 0xf164: WORD 'UNK_0xf166' codep=0x224c parp=0xf166
// ================================================

void UNK_0xf166()
{
  pp_(PLANET @>C+S();
  IOPEN();
  
  label418:
  Push(0x000b); Push(0x000b); IFIND();
  
  if (Pop() == 0) goto label409;
  IOPEN();
  
  label419:
  ?LAST();
  NOT ?NULL();
  NOT AND 
  if (Pop() == 0) goto label410;
  UNK_0xf0d6();
  UNK_0xf158();
  
  goto label419;
  
  label410:
  UNK_0xf0d6();
  
  if (Pop() == 0) goto label416;
  IDELETE();
  
  label416:
  ?NULL();
  ICLOSE();
  UNK_0xf158();
  
  goto label418;
  
  label409:
  CDROP();
  ICLOSE();
  
}


// ================================================
// 0xf1aa: WORD 'UNK_0xf1ac' codep=0x224c parp=0xf1ac
// ================================================

void UNK_0xf1ac()
{
  pp_(PLANET @>C+S();
  IOPEN();
  CDROP();
  pp_SUPER-B @>C+S();
  IDELETE();
  IFIRST();
  
  label421:
  Push(0x0043); Push(0); IFIND();
  
  if (Pop() == 0) goto label420;
  IDELETE();
  
  goto label421;
  
  label420:
  CDROP();
  ICLOSE();
  
}


// ================================================
// 0xf1d4: WORD 'UNK_0xf1d6' codep=0x224c parp=0xf1d6
// ================================================

void UNK_0xf1d6()
{
  CTINIT();
  
  UNK_0x3f39("CAPTAIN, WE ARE RECEIVING A ");
  .TTY();
  
  UNK_0x3f39("COUNTDOWN TRANSMISSION FROM ");
  .TTY();
  
  UNK_0x3f39("THE BLACK EGG... ");
  .TTY();
  Push(1); Push(cc_5); 
  do // (DO)
  {
  I Push(0); <#();
  #S();
  #>();
  .TTY();
  Push(0x03e8); MS();
  Push(cc_-1); 
  } while(...); // (+LOOP) 0xffea
  
}


// ================================================
// 0xf250: WORD 'UNK_0xf252' codep=0x224c parp=0xf252
// ================================================

void UNK_0xf252()
{
  !COLOR();
  >MAINVI();
  BFILL V>DISPL 
}


// ================================================
// 0xf25c: WORD 'UNK_0xf25e' codep=0x224c parp=0xf25e
// ================================================

void UNK_0xf25e()
{
  
  UNK_0x3f39("BOOM!");
  .TTY();
  Push(cc_3); Push(cc_MPS); * Push(0); 
  do // (DO)
  {
  BLACK ORANGE RED ORANGE YELLOW ORANGE YELLOW WHITE YELLOW WHITE Push(0x000a); Push(0); 
  do // (DO)
  {
  UNK_0xf252();
  
  } while(...); // (LOOP) 0xfffc
  
  } while(...); // (LOOP) 0xffdc
  >DISPLA();
  
}


// ================================================
// 0xf29c: WORD 'UNK_0xf29e' codep=0x224c parp=0xf29e
// ================================================

void UNK_0xf29e()
{
  pp_(PLANET @>C+S();
  @INST-S();
  ICLOSE();
  Push(0x0017); = 
}


// ================================================
// 0xf2ae: WORD 'UNK_0xf2b0' codep=0x224c parp=0xf2b0
// ================================================

void UNK_0xf2b0()
{
  pp_(BOMB) @>C+S();
  ?-NULL();
  
  if (Pop() == 0) goto label430;
  INST-X @ Push(0x05a0); - ABS();
  INST-Y @ Push(0x02da); - ABS();
  + Push(0x000a); < 
  goto label431;
  
  label430:
  Push(0); 
  label431:
  ICLOSE();
  
}


// ================================================
// 0xf2e4: WORD 'UNK_0xf2e6' codep=0x744d parp=0xf2e6
// ================================================
// 0xf2e6: db 0x17 0x11 0x01 '   '
  
// ================================================
// 0xf2e9: WORD 'UNK_0xf2eb' codep=0x224c parp=0xf2eb
// ================================================

void UNK_0xf2eb()
{
  pp_(ORBIT) @>C+S();
  INST-QT @ ICLOSE();
  BIT();
  pp_(SYSTEM @>C+S();
  UNK_0xf2e6 C@ XOR UNK_0xf2e6 C!();
  ICLOSE();
  
}


// ================================================
// 0xf309: WORD 'UNK_0xf30b' codep=0x224c parp=0xf30b
// ================================================

void UNK_0xf30b()
{
  'KEY();
  DROP TIME 2@ Push(0x1770); Pust(0x0000); D+ 
  label427:
  TIME 2@ 2OVER();
  D>();
  ?TERMINAL OR 
  if (Pop() == 0) goto label427;
  2DROP 
}


// ================================================
// 0xf32f: WORD 'UNK_0xf331' codep=0x224c parp=0xf331
// ================================================

void UNK_0xf331()
{
  CTINIT();
  
  UNK_0x3f39("CAPTAIN, I FELT A TREMOR AS IF");
  .TTY();
  
  UNK_0x3f39("MILLIONS OF VOICES CRIED OUT AND WERE");
  .TTY();
  
  UNK_0x3f39("SUDDENLY SILENCED.");
  .TTY();
  UNK_0xf30b();
  
}


// ================================================
// 0xf39b: WORD 'UNK_0xf39d' codep=0x224c parp=0xf39d
// ================================================

void UNK_0xf39d()
{
  *SECS >C+S();
  SUBROOT();
  
  label429:
  NEXT-NO();
  CI *SECS D=();
  NOT 
  if (Pop() == 0) goto label426;
  @INST-C();
  Push(0x003d); = @INST-S();
  Push(cc_9); = AND 
  if (Pop() == 0) goto label428;
  Push(0); UNK_0xef6e C!();
  
  label428:
  
  goto label429;
  
  label426:
  ICLOSE();
  CTINIT();
  
  UNK_0x3f39("CAPTAIN, ALL ALIEN COMMUNICATIONS IN");
  .TTY();
  
  UNK_0x3f39("THE LOCAL VICINITY HAVE CEASED!");
  .TTY();
  UNK_0xf30b();
  
}


// ================================================
// 0xf424: WORD 'UNK_0xf426' codep=0x224c parp=0xf426
// ================================================

void UNK_0xf426()
{
  pp_(PLANET 1.5@ D=();
  
}


// ================================================
// 0xf42e: WORD 'UNK_0xf430' codep=0x224c parp=0xf430
// ================================================

void UNK_0xf430()
{
  *SPHEXI UNK_0xf426();
  
  if (Pop() == 0) goto label423;
  pp_?SPHEXI OFF();
  
  label423:
  *ELAN UNK_0xf426();
  
  if (Pop() == 0) goto label424;
  pp_?ELAN OFF();
  UNK_0xf331();
  
  label424:
  *BRAIN UNK_0xf426();
  
  if (Pop() == 0) goto label425;
  UNK_0xf39d();
  
  label425:
  UNK_0xf2eb();
  pp_(SYSTEM @>C+S();
  IOPEN();
  CDROP();
  pp_(ORBIT) @>C+S();
  IDELETE();
  CDROP();
  ICLOSE();
  CTINIT();
  
  UNK_0x3f39("PLANET OBLITERATED");
  .TTY();
  
}


// ================================================
// 0xf483: WORD 'DEPART' codep=0x224c parp=0xf48e
// ================================================

void DEPART()
{
  pp_?CRITIC OFF();
  Push(0x3a48); pp_'THROW- !();
  pp_?LANDED @ 
  if (Pop() == 0) goto label407;
  pp_?BOMB @ 
  if (Pop() == 0) goto label408;
  UNK_0xf1d6();
  UNK_0xf25e();
  UNK_0xf29e();
  
  if (Pop() == 0) goto label422;
  UNK_0xf2b0();
  
  if (Pop() == 0) goto label432;
  UNK_0xf430();
  UNK_0xf09c();
  pp_WMSG ON();
  
  goto label438;
  
  label432:
  CTINIT();
  
  UNK_0x3f39("CRYSTAL PLANET DAMAGED");
  .TTY();
  
  UNK_0x3f39("BUT NOT DESTROYED");
  .TTY();
  Push(0x1388); MS();
  UNK_0xf1ac();
  
  label438:
  
  goto label433;
  
  label422:
  UNK_0xf430();
  
  label433:
  NULL pp_(BOMB) 1.5!();
  pp_?BOMB OFF();
  
  goto label407;
  
  label408:
  UNK_0xf166();
  UNK_0xf1ac();
  
  label407:
  Push(cc_-1); pp_PLHI !();
  pp_?LANDED OFF();
  
}

// 0xf525: db 0x44 0x50 0x41 0x52 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x31 0x30 0x38 0x36 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x00 'DPART-VOC_______________________________________1086        '
  