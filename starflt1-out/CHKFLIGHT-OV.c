// store offset = 0xf1a0
// overlay size   = 0x03c0
// name = 'CHKFLT-VOC______________________or CHKFLIGHT-OV -'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xf1b6 bitfield: 0 0 0  codep:0x744d parp:0xf1b6 size:0x0003
// 1704:      UNK_0xf1bb bitfield: 0 0 0  codep:0x744d parp:0xf1bb size:0x0003
// 1705:      UNK_0xf1c0 bitfield: 0 0 0  codep:0x744d parp:0xf1c0 size:0x0003
// 1706:      UNK_0xf1c5 bitfield: 0 0 0  codep:0x224c parp:0xf1c5 size:0x0091
// 1707:      UNK_0xf258 bitfield: 0 0 0  codep:0x224c parp:0xf258 size:0x0016
// 1708:      UNK_0xf270 bitfield: 0 0 0  codep:0x224c parp:0xf270 size:0x0036
// 1709:      UNK_0xf2a8 bitfield: 0 0 0  codep:0x224c parp:0xf2a8 size:0x0063
// 1710:           (.CS) bitfield: 0 0 0  codep:0x4a4f parp:0xf315 size:0x0010
// 1711:      UNK_0xf327 bitfield: 0 0 0  codep:0x1d29 parp:0xf327 size:0x0002
// 1712:      UNK_0xf32b bitfield: 0 0 0  codep:0x224c parp:0xf32b size:0x0045
// 1713:      UNK_0xf372 bitfield: 0 0 0  codep:0x224c parp:0xf372 size:0x0039
// 1714:      UNK_0xf3ad bitfield: 0 0 0  codep:0x224c parp:0xf3ad size:0x005b
// 1715:      UNK_0xf40a bitfield: 0 0 0  codep:0x224c parp:0xf40a size:0x0044
// 1716:      UNK_0xf450 bitfield: 0 0 0  codep:0x224c parp:0xf450 size:0x002e
// 1717:      UNK_0xf480 bitfield: 0 0 0  codep:0x224c parp:0xf480 size:0x0028
// 1718:      UNK_0xf4aa bitfield: 0 0 0  codep:0x224c parp:0xf4aa size:0x0048
// 1719:      ?CAN-LEAVE bitfield: 0 0 0  codep:0x224c parp:0xf501 size:0x005f

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf327[2] = {0x3a, 0x20};



// 0xf1b2: db 0x39 0x00 '9 '
  
// ================================================
// 0xf1b4: WORD 'UNK_0xf1b6' codep=0x744d parp=0xf1b6
// ================================================
// 0xf1b6: db 0x10 0x20 0x02 '   '
  
// ================================================
// 0xf1b9: WORD 'UNK_0xf1bb' codep=0x744d parp=0xf1bb
// ================================================
// 0xf1bb: db 0x11 0x11 0x12 '   '
  
// ================================================
// 0xf1be: WORD 'UNK_0xf1c0' codep=0x744d parp=0xf1c0
// ================================================
// 0xf1c0: db 0x14 0x13 0x02 '   '
  
// ================================================
// 0xf1c3: WORD 'UNK_0xf1c5' codep=0x224c parp=0xf1c5
// ================================================

void UNK_0xf1c5()
{
  GREY1 !COLOR();
  SFILL();
  BLACK !COLOR();
  pp_XORMODE OFF();
  Push(2); Push(1); Push(0x009d); Push(1); LLINE Push(2); Push(0x00b9); Push(0x009d); Push(0x00b9); LLINE Push(1); Push(0x00b9); Push(1); Push(1); LLINE Push(0x009e); Push(0x00b9); Push(0x009e); Push(1); LLINE >3FONT();
  Push(0x0013); Push(0x00c4); POS.();
  
  (.") string 3 "PRE"
  pp_XBLT @ Push(0x00c0); OVER 2+ OVER LLINE Push(cc_5); pp_XBLT +!();
  
  (.") string 6 "FLIGHT"
  Push(cc_6); pp_XBLT +!();
  
  (.") string 5 "CHECK"
  Push(2); Push(0x00c5); BLACK .1LOGO();
  
}


// ================================================
// 0xf256: WORD 'UNK_0xf258' codep=0x224c parp=0xf258
// ================================================

void UNK_0xf258()
{
  Push(cc_6); pp_YBLT @ Push(0x0014); - Push(0x00aa); MIN();
  POS.();
  
}


// ================================================
// 0xf26e: WORD 'UNK_0xf270' codep=0x224c parp=0xf270
// ================================================

void UNK_0xf270()
{
  UNK_0xf258();
  
  (.") string 24 "REPORT TO OPERATIONS FOR"
  Push(0x000a); pp_YBLT +!();
  UNK_0xf258();
  
  (.") string 10 "EVALUATION"
  
}


// ================================================
// 0xf2a6: WORD 'UNK_0xf2a8' codep=0x224c parp=0xf2a8
// ================================================

void UNK_0xf2a8()
{
  UNK_0xf258();
  
  (.") string 25 "REPORT TO CREW ASSIGNMENT"
  
}

// 0xf2c8: db 0x4c 0x22 0xdc 0x1b 0x0d 0x43 0x48 0x52 0x49 0x53 0x54 0x45 0x4e 0x20 0x53 0x48 0x49 0x50 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x10 0x50 0x55 0x52 0x43 0x48 0x41 0x53 0x45 0x20 0x45 0x4e 0x47 0x49 0x4e 0x45 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x20 0x41 0x4e 0x44 0x20 0x56 0xf2 0x5d 0x17 0x0a 0x00 0x61 0x58 0x83 0x6d 0xdc 0xf2 0x90 0x16 'L"   CHRISTEN SHIP  L"   PURCHASE ENGINES  L"    AND V ]   aX m    '
  
// ================================================
// 0xf30b: WORD '(.CS)' codep=0x4a4f parp=0xf315
// ================================================
// 0xf315: db 0x03 0x00 0x48 0x3a 0x01 0x00 0xca 0xf2 0x06 0x00 0xde 0xf2 0x07 0x00 0xf5 0xf2 '  H:            '
  
// ================================================
// 0xf325: WORD 'UNK_0xf327' codep=0x1d29 parp=0xf327
// ================================================
// 0xf327: db 0x3a 0x20 ': '
  
// ================================================
// 0xf329: WORD 'UNK_0xf32b' codep=0x224c parp=0xf32b
// ================================================

void UNK_0xf32b()
{
  UNK_0xf258();
  
  (.") string 28 "REPORT TO SHIP-CONFIGURATION"
  Push(0x000a); pp_YBLT +!();
  UNK_0xf258();
  
  (.") string 3 "TO "
  pp_UNK_0xf327 @ DUP Push(1); AND (.CS) Push(cc_7); AND (.CS) 
}


// ================================================
// 0xf370: WORD 'UNK_0xf372' codep=0x224c parp=0xf372
// ================================================

void UNK_0xf372()
{
  UNK_0xf258();
  
  (.") string 24 "REPORT TO TRADE DEPOT TO"
  Push(0x000a); pp_YBLT +!();
  UNK_0xf258();
  
  (.") string 13 "PURCHASE FUEL"
  
}


// ================================================
// 0xf3ab: WORD 'UNK_0xf3ad' codep=0x224c parp=0xf3ad
// ================================================

void UNK_0xf3ad()
{
  UNK_0xf1c5();
  >2FONT();
  DUP Push(1); AND 
  if (Pop() == 0) goto label447;
  UNK_0xf270();
  
  label447:
  DUP Push(2); AND 
  if (Pop() == 0) goto label448;
  UNK_0xf2a8();
  
  label448:
  DUP Push(cc_4); AND 
  if (Pop() == 0) goto label449;
  UNK_0xf32b();
  
  label449:
  Push(cc_8); AND 
  if (Pop() == 0) goto label450;
  UNK_0xf372();
  
  label450:
  Push(1); Push(0x0016); CMESS();
  BLACK !COLOR();
  
  (.") string 22 "PRESS SPACEBAR TO EXIT"
  !CRS();
  
}


// ================================================
// 0xf408: WORD 'UNK_0xf40a' codep=0x224c parp=0xf40a
// ================================================

void UNK_0xf40a()
{
  pp_?EVAL @ DUP 0= 
  if (Pop() == 0) goto label439;
  *OP >C+S();
  IOPEN();
  Push(0x000b); Push(0x002d); IFIND();
  DROP IOPEN();
  
  label441:
  CI OR 
  if (Pop() == 0) goto label440;
  IDELETE();
  
  goto label441;
  
  label440:
  ICLOSE();
  CDROP();
  ICLOSE();
  
  label439:
  pp_?TV @ 0= OR pp_?RECALL @ OR 
}


// ================================================
// 0xf44e: WORD 'UNK_0xf450' codep=0x224c parp=0xf450
// ================================================

void UNK_0xf450()
{
  *ASSIGN >C+S();
  Push(0); UNK_0xf1bb Push(0x0012); + UNK_0xf1bb 
  do // (DO)
  {
  I @>C+S();
  UNK_0xf1b6 @ Push(cc_8); AND NOT OR ICLOSE();
  Push(cc_6); 
  } while(...); // (+LOOP) 0xffea
  ICLOSE();
  
}


// ================================================
// 0xf47e: WORD 'UNK_0xf480' codep=0x224c parp=0xf480
// ================================================

void UNK_0xf480()
{
  *SHIP >C+S();
  %NAME C@ 0= UNK_0xf1c0 1+ C@ 0= 2* + ICLOSE();
  DUP Push(cc_4); + pp_UNK_0xf327 !();
  NOT NOT 
}


// ================================================
// 0xf4a8: WORD 'UNK_0xf4aa' codep=0x224c parp=0xf4aa
// ================================================

void UNK_0xf4aa()
{
  *STARSH >C+S();
  IOPEN();
  Push(0x000b); Push(0x000a); IFIND();
  
  if (Pop() == 0) goto label442;
  IOPEN();
  Push(0x001a); Push(cc_6); IFIND();
  
  if (Pop() == 0) goto label443;
  INST-QT @ DUP Push(0x000a); M*();
  pp_10*END D!();
  0= 
  goto label445;
  
  label443:
  Push(1); 
  label445:
  CDROP();
  
  goto label444;
  
  label442:
  Push(1); 
  label444:
  CDROP();
  ICLOSE();
  
}


// ================================================
// 0xf4f2: WORD '?CAN-LEAVE' codep=0x224c parp=0xf501
// ================================================

void ?CAN-LEAVE()
{
  UNK_0xf40a();
  UNK_0xf450();
  2* OR UNK_0xf480();
  Push(cc_4); * OR UNK_0xf4aa();
  Push(cc_8); * OR ?DUP 
  if (Pop() == 0) goto label446;
  UNK_0xf3ad();
  KEY();
  DROP Push(0); 
  goto label451;
  
  label446:
  Push(1); 
  label451:
  
}

// 0xf52f: db 0x43 0x48 0x4b 0x46 0x4c 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x6f 0x72 0x20 0x43 0x48 0x4b 0x46 0x4c 0x49 0x47 0x48 0x54 0x2d 0x4f 0x56 0x20 0x2d 0x00 'CHKFLT-VOC______________________or CHKFLIGHT-OV - '
  