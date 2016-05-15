// store offset = 0xf010
// overlay size   = 0x0550
// name = 'LAUNCH-VOC______________________x for COUNTDOWN---------------)_1280_____ for STP----------'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xf026 bitfield: 0 0 0  codep:0x224c parp:0xf026 size:0x000c
// 1704:      UNK_0xf034 bitfield: 0 0 0  codep:0x224c parp:0xf034 size:0x002e
// 1705:      UNK_0xf064 bitfield: 0 0 0  codep:0x224c parp:0xf064 size:0x0014
// 1706:      UNK_0xf07a bitfield: 0 0 0  codep:0x224c parp:0xf07a size:0x0010
// 1707:      UNK_0xf08c bitfield: 0 0 0  codep:0x224c parp:0xf08c size:0x000c
// 1708:      UNK_0xf09a bitfield: 0 0 0  codep:0x224c parp:0xf09a size:0x0032
// 1709:      UNK_0xf0ce bitfield: 0 0 0  codep:0x224c parp:0xf0ce size:0x0042
// 1710:      UNK_0xf112 bitfield: 0 0 0  codep:0x224c parp:0xf112 size:0x003e
// 1711:      UNK_0xf152 bitfield: 0 0 0  codep:0x224c parp:0xf152 size:0x000e
// 1712:      UNK_0xf162 bitfield: 0 0 0  codep:0x224c parp:0xf162 size:0x005c
// 1713:      UNK_0xf1c0 bitfield: 0 0 0  codep:0x224c parp:0xf1c0 size:0x001c
// 1714:      UNK_0xf1de bitfield: 0 0 0  codep:0x224c parp:0xf1de size:0x001c
// 1715:      UNK_0xf1fc bitfield: 0 0 0  codep:0x1d29 parp:0xf1fc size:0x0032
// 1716:        .AIRLOCK bitfield: 0 0 0  codep:0x224c parp:0xf23b size:0x00a5
// 1717:      UNK_0xf2e2 bitfield: 0 0 0  codep:0x224c parp:0xf2e2 size:0x000a
// 1718:      UNK_0xf2ee bitfield: 0 0 0  codep:0x224c parp:0xf2ee size:0x000c
// 1719:      UNK_0xf2fc bitfield: 0 0 0  codep:0x224c parp:0xf2fc size:0x0008
// 1720:      UNK_0xf306 bitfield: 0 0 0  codep:0x224c parp:0xf306 size:0x0064
// 1721:      UNK_0xf36c bitfield: 0 0 0  codep:0x224c parp:0xf36c size:0x0025
// 1722:      UNK_0xf393 bitfield: 0 0 0  codep:0x224c parp:0xf393 size:0x005c
// 1723:         &LAUNCH bitfield: 0 0 0  codep:0x224c parp:0xf3fb size:0x004e
// 1724:         &RETURN bitfield: 0 0 0  codep:0x224c parp:0xf455 size:0x010b

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf1fc[50] = {0xff, 0x0f, 0xff, 0x01, 0x3f, 0xf8, 0xc7, 0xff, 0xfe, 0xff, 0xf3, 0xfc, 0x8f, 0xff, 0xf0, 0x1f, 0xff, 0xf0, 0x0f, 0x0f, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0xf0, 0xf0, 0x0f, 0xff, 0xf8, 0x0f, 0xff, 0xf1, 0x3f, 0xcf, 0xff, 0x7f, 0xff, 0xe3, 0x1f, 0xfc, 0x80, 0xff, 0xf0, 0xff};



// 0xf022: db 0x50 0x00 'P '
  
// ================================================
// 0xf024: WORD 'UNK_0xf026' codep=0x224c parp=0xf026
// ================================================

void UNK_0xf026()
{
  MODULE();
  TIME 2@ 2SWAP D-();
  
}


// ================================================
// 0xf032: WORD 'UNK_0xf034' codep=0x224c parp=0xf034
// ================================================

void UNK_0xf034()
{
  Push(0x0010); Push(0x000b); 
  do // (DO)
  {
  I 16* I + !COLOR();
  pp_XBLT @ OVER .();
  pp_XBLT !();
  Push(0x0027); MS();
  
  } while(...); // (LOOP) 0xffe2
  DROP 
}


// ================================================
// 0xf062: WORD 'UNK_0xf064' codep=0x224c parp=0xf064
// ================================================

void UNK_0xf064()
{
  Push(0x0026); Push(0x0087); POS.();
  >2FONT();
  BEEPON();
  UNK_0xf034();
  BEEPOFF 
}


// ================================================
// 0xf078: WORD 'UNK_0xf07a' codep=0x224c parp=0xf07a
// ================================================

void UNK_0xf07a()
{
  Push(0x0027); Push(0x0086); POS.();
  >1FONT();
  UNK_0xf034();
  
}


// ================================================
// 0xf08a: WORD 'UNK_0xf08c' codep=0x224c parp=0xf08c
// ================================================

void UNK_0xf08c()
{
  Push(0x0028); Push(0x0084); LPLOT 
}


// ================================================
// 0xf098: WORD 'UNK_0xf09a' codep=0x224c parp=0xf09a
// ================================================

void UNK_0xf09a()
{
  Push(0x2710); TONE Push(1); Push(cc_5); 
  do // (DO)
  {
  V>DISPL I UNK_0xf064();
  V>DISPL I UNK_0xf07a();
  V>DISPL UNK_0xf08c();
  Push(0x0064); MS();
  V>DISPL Push(0x0190); MS();
  Push(cc_-1); 
  } while(...); // (+LOOP) 0xffde
  
}


// ================================================
// 0xf0cc: WORD 'UNK_0xf0ce' codep=0x224c parp=0xf0ce
// ================================================

void UNK_0xf0ce()
{
  CTINIT();
  CTERASE();
  
  (.") string 29 "COMMENCING LAUNCH SEQUENCE..."
  UNK_0xf09a();
  CTERASE();
  pp_CONTEXT @ 0= 
  if (Pop() == 0) goto label1487;
  Push(1); pp_CONTEXT !();
  pp_?G-AWAR ON();
  pp_GWF OFF();
  
  label1487:
  
}


// ================================================
// 0xf110: WORD 'UNK_0xf112' codep=0x224c parp=0xf112
// ================================================

void UNK_0xf112()
{
  2DUP pp_STIME D!();
  Push(0x03e8); Pust(0x0000); D<();
  
  if (Pop() == 0) goto label1489;
  pp_?SECURE @ 0= 
  if (Pop() == 0) goto label1489;
  pp_STARDAT @ Push(cc_4); + pp_?SECURE !();
  Push(0x01f4); Push(0x2710); Push(0x01f4); Push(0x03e8); Push(2); >SND();
  
  label1489:
  
}


// ================================================
// 0xf150: WORD 'UNK_0xf152' codep=0x224c parp=0xf152
// ================================================

void UNK_0xf152()
{
  Push(cc_4); SWAP Push(0x004b); OVER LLINE 
}


// ================================================
// 0xf160: WORD 'UNK_0xf162' codep=0x224c parp=0xf162
// ================================================

void UNK_0xf162()
{
  BLACK !COLOR();
  DUP UNK_0xf152();
  Push(0); Push(0x000a); RRND();
  0= OVER Push(0x0084); = NOT AND 
  if (Pop() == 0) goto label1491;
  Push(1); Push(0x0010); RRND();
  DUP 16* + !COLOR();
  Push(cc_4); Push(0x004c); RRND();
  SWAP 2DUP LPLOT Push(0x0048); - SWAP Push(cc_4); - SWAP >MAINVI();
  LPLOT >DISPLA();
  
  goto label1492;
  
  label1491:
  DROP 
  label1492:
  
}


// ================================================
// 0xf1be: WORD 'UNK_0xf1c0' codep=0x224c parp=0xf1c0
// ================================================

void UNK_0xf1c0()
{
  >R Push(cc_4); Push(0x00be); Push(0x004c); I Push(cc_4); Push(0x00bf); LCOPYBL R> UNK_0xf162();
  
}


// ================================================
// 0xf1dc: WORD 'UNK_0xf1de' codep=0x224c parp=0xf1de
// ================================================

void UNK_0xf1de()
{
  >R Push(cc_4); I Push(0x004c); Push(0x0049); Push(cc_4); I 1- LCOPYBL R> UNK_0xf162();
  
}


// ================================================
// 0xf1fa: WORD 'UNK_0xf1fc' codep=0x1d29 parp=0xf1fc
// ================================================
// 0xf1fc: db 0xff 0x0f 0xff 0x01 0x3f 0xf8 0xc7 0xff 0xfe 0xff 0xf3 0xfc 0x8f 0xff 0xf0 0x1f 0xff 0xf0 0x0f 0x0f 0xf0 0x00 0x0f 0x00 0x00 0x00 0x00 0xf0 0x00 0x0f 0xf0 0xf0 0x0f 0xff 0xf8 0x0f 0xff 0xf1 0x3f 0xcf 0xff 0x7f 0xff 0xe3 0x1f 0xfc 0x80 0xff 0xf0 0xff '    ?                                 ?          '
  
// ================================================
// 0xf22e: WORD '.AIRLOCK' codep=0x224c parp=0xf23b
// ================================================

void .AIRLOCK()
{
  >MAINVI();
  GREY2 !COLOR();
  BFILL BLACK BLACK YELLOW ?MRC();
  !COLOR();
  >2FONT();
  Push(0x0011); Push(0x006d); POS.();
  
  (.") string 7 "CAUTION"
  >1FONT();
  Push(cc_5); Push(0x005d); POS.();
  
  (.") string 16 "PRESSURIZED AREA"
  Push(cc_5); Push(0x001e); POS.();
  
  (.") string 16 "STANDARD AIRLOCK"
  Push(cc_5); Push(0x0014); POS.();
  
  (.") string 16 "PROCEDURES APPLY"
  @DS pp_BLTSEG !();
  Push(0x001a); Push(0x0045); POS.();
  Push(0x0014); DUP pp_WBLT !();
  pp_LBLT !();
  pp_UNK_0xf1fc pp_ABLT !();
  BLT();
  >DISPLA();
  
}


// ================================================
// 0xf2e0: WORD 'UNK_0xf2e2' codep=0x224c parp=0xf2e2
// ================================================

void UNK_0xf2e2()
{
  TIME 2@ Push(0xd125); 
}


// ================================================
// 0xf2ec: WORD 'UNK_0xf2ee' codep=0x224c parp=0xf2ee
// ================================================

void UNK_0xf2ee()
{
  2* pp_YTABL @ + @ 
}


// ================================================
// 0xf2fa: WORD 'UNK_0xf2fc' codep=0x224c parp=0xf2fc
// ================================================

void UNK_0xf2fc()
{
  >MAINVI();
  UNK_0xf2ee();
  >DISPLA();
  
}


// ================================================
// 0xf304: WORD 'UNK_0xf306' codep=0x224c parp=0xf306
// ================================================

void UNK_0xf306()
{
  >R 
  if (Pop() == 0) goto label1483;
  Push(0x00bf); UNK_0xf2ee();
  Push(cc_4); Push(0x00bf); Push(0x004c); Push(0x00bf); I - Push(cc_4); Push(0x00be); 
  goto label1484;
  
  label1483:
  Push(0x0048); UNK_0xf2ee();
  Push(cc_4); Push(0x0048); I + Push(0x004c); Push(0x0048); 2OVER();
  1+ 
  label1484:
  LCOPYBL R> DROP pp_HBUF-SE @ ROT UNK_0xf2fc();
  pp_DBUF-SE @ Push(cc_4); ROLL();
  2+ Push(0x0024); LCMOVE 
}


// ================================================
// 0xf36a: WORD 'UNK_0xf36c' codep=0x224c parp=0xf36c
// ================================================

void UNK_0xf36c()
{
  CTINIT();
  CTERASE();
  TYPE 
  (.") string 18 " DOCKING BAY DOORS"
  Push(0x7148); TONE BEEPON();
  
}


// ================================================
// 0xf391: WORD 'UNK_0xf393' codep=0x224c parp=0xf393
// ================================================

void UNK_0xf393()
{
  >MAINVI();
  DARK();
  >DISPLA();
  pp_?EGA @ 
  if (Pop() == 0) goto label1490;
  Push(0x05dc); MS();
  V>DISPL 
  goto label1493;
  
  label1490:
  Push(0x003b); Push(0); 
  do // (DO)
  {
  Push(0x0084); I + UNK_0xf1c0();
  Push(0x0084); I - UNK_0xf1de();
  Push(0x7148); TONE Push(0x001e); MS();
  
  } while(...); // (LOOP) 0xffde
  Push(0x00bf); UNK_0xf162();
  Push(0x0048); UNK_0xf162();
  BEEPOFF Push(0x00fa); MS();
  
  label1493:
  
}


// ================================================
// 0xf3ef: WORD '&LAUNCH' codep=0x224c parp=0xf3fb
// ================================================

void &LAUNCH()
{
  pp_CONTEXT @ Push(cc_5); = DUP 
  if (Pop() == 0) goto label1486;
  UNK_0xf2e2();
  UNK_0xf026();
  UNK_0xf112();
  
  UNK_0x3f39("OPENING");
  UNK_0xf36c();
  UNK_0xf393();
  
  label1486:
  UNK_0xf0ce();
  
  if (Pop() == 0) goto label1488;
  Push(0xcc0a); MODULE();
  CTINIT();
  
  UNK_0x3f39("STANDING BY TO MANEUVER");
  .TTY();
  
  label1488:
  
}


// ================================================
// 0xf449: WORD '&RETURN' codep=0x224c parp=0xf455
// ================================================

void &RETURN()
{
  >MAINVI();
  DARK();
  Push(cc_6); Push(0x0012); RRND();
  Push(0); 
  do // (DO)
  {
  Push(1); Push(0x0010); RRND();
  DUP 16* + !COLOR();
  Push(0); Push(0x0048); RRND();
  Push(0); Push(0x0078); RRND();
  LPLOT 
  } while(...); // (LOOP) 0xffdc
  V>DISPL >DISPLA();
  
  UNK_0x3f39("CLOSING");
  UNK_0xf36c();
  .AIRLOCK();
  GREY2 !COLOR();
  pp_?EGA @ 0= 
  if (Pop() == 0) goto label1482;
  Push(0x00bf); UNK_0xf152();
  Push(0x0048); UNK_0xf152();
  Push(0x7148); TONE BEEPON();
  Push(0x003b); Push(0); 
  do // (DO)
  {
  Push(0x003c); I + Push(1); I UNK_0xf306();
  Push(0x003c); I - Push(0); I UNK_0xf306();
  Push(0x7148); TONE Push(0x001e); MS();
  
  } while(...); // (LOOP) 0xffd6
  
  goto label1485;
  
  label1482:
  Push(0x05dc); MS();
  .AIRLOCK();
  
  label1485:
  V>DISPL BEEPOFF 
}

// 0xf505: db 0x4c 0x41 0x55 0x4e 0x43 0x48 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x78 0x20 0x66 0x6f 0x72 0x20 0x43 0x4f 0x55 0x4e 0x54 0x44 0x4f 0x57 0x4e 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x5f 0x31 0x32 0x38 0x30 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x53 0x54 0x50 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'LAUNCH-VOC______________________x for COUNTDOWN---------------)_1280_____ for STP---------- '
  