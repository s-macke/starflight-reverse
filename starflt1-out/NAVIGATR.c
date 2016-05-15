// store offset = 0xf1f0
// overlay size   = 0x0370
// name = 'NAV-VOC_____________'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xf20b bitfield: 0 0 0  codep:0x744d parp:0xf20b size:0x0003
// 1704:      UNK_0xf210 bitfield: 0 0 0  codep:0x744d parp:0xf210 size:0x0003
// 1705:      UNK_0xf215 bitfield: 0 0 0  codep:0x744d parp:0xf215 size:0x0003
// 1706:      UNK_0xf21a bitfield: 0 0 0  codep:0x73ea parp:0xf21a size:0x0006
// 1707:      UNK_0xf222 bitfield: 0 0 0  codep:0x73ea parp:0xf222 size:0x0006
// 1708:      UNK_0xf22a bitfield: 0 0 0  codep:0x224c parp:0xf22a size:0x0008
// 1709:      UNK_0xf234 bitfield: 0 0 0  codep:0x224c parp:0xf234 size:0x0010
// 1710:      UNK_0xf246 bitfield: 0 0 0  codep:0x224c parp:0xf246 size:0x0008
// 1711:      UNK_0xf250 bitfield: 0 0 0  codep:0x224c parp:0xf250 size:0x0020
// 1712:      UNK_0xf272 bitfield: 0 0 0  codep:0x224c parp:0xf272 size:0x0030
// 1713:    >DOWN-SHIELD bitfield: 0 0 0  codep:0x224c parp:0xf2b3 size:0x00a4
// 1714:      UNK_0xf359 bitfield: 0 0 0  codep:0x224c parp:0xf359 size:0x0050
// 1715:         >DISARM bitfield: 0 0 0  codep:0x224c parp:0xf3b5 size:0x0044
// 1716:      UNK_0xf3fb bitfield: 0 0 0  codep:0x224c parp:0xf3fb size:0x00bd
// 1717:     (/(DIS)ARM) bitfield: 0 0 0  codep:0x224c parp:0xf4c8 size:0x0020
// 1718:   (/(UD)SHIELD) bitfield: 0 0 0  codep:0x224c parp:0xf4fa size:0x0066

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

void UNK_0xf22a()
{
  Push(0xbdef); MODULE();
  
}


// ================================================
// 0xf232: WORD 'UNK_0xf234' codep=0x224c parp=0xf234
// ================================================

void UNK_0xf234()
{
  Push(0x003a); pp_FILE# !();
  Push(cc_3); pp_RECORD# !();
  
}


// ================================================
// 0xf244: WORD 'UNK_0xf246' codep=0x224c parp=0xf246
// ================================================

void UNK_0xf246()
{
  SWAP CMOVE();
  SET-CUR();
  
}


// ================================================
// 0xf24e: WORD 'UNK_0xf250' codep=0x224c parp=0xf250
// ================================================

void UNK_0xf250()
{
  Push(0x003c); Push(0x03e8); Push(0x000f); Push(cc_3); 2OVER();
  2OVER();
  Push(0x003c); Push(0x01f4); Push(cc_5); >SND();
  
}


// ================================================
// 0xf270: WORD 'UNK_0xf272' codep=0x224c parp=0xf272
// ================================================

void UNK_0xf272()
{
  Push(0x0064); Push(cc_3); Push(0x003c); Push(0x01f4); Push(0x000f); Push(cc_3); 2OVER();
  2OVER();
  Push(0x003c); Push(0x03e8); 2OVER();
  Push(0x003c); Push(0x01f4); Push(cc_8); >SND();
  
}


// ================================================
// 0xf2a2: WORD '>DOWN-SHIELD' codep=0x224c parp=0xf2b3
// ================================================

void >DOWN-SHIELD()
{
  pp_?NEB @ 
  if (Pop() == 0) goto label1347;
  
  UNK_0x3f39("MAGNETIC DISTURBANCES IN NEBULA");
  .TTY();
  
  UNK_0x3f39("CAUSING ENERGY FLUCTUATIONS");
  .TTY();
  
  label1347:
  UNK_0xf234();
  
  UNK_0x3f39("RAISE SHIELD");
  UNK_0xf21a UNK_0xf246();
  UNK_0xf215 C@ Push(0x00f7); AND Push(0x0010); OR UNK_0xf215 C!();
  UNK_0xf250();
  
  UNK_0x3f39("SHIELDS ARE DOWN");
  .TTY();
  pp_BTN-REC @ Push(cc_3); = 
  if (Pop() == 0) goto label1348;
  Push(cc_3); Push(2); .ABTN();
  
  label1348:
  pp_?SUP OFF();
  
}


// ================================================
// 0xf357: WORD 'UNK_0xf359' codep=0x224c parp=0xf359
// ================================================

void UNK_0xf359()
{
  Push(cc_6); UNK_0xf22a();
  
  if (Pop() == 0) goto label1351;
  UNK_0xf234();
  
  UNK_0x3f39("DROP SHIELD ");
  UNK_0xf21a UNK_0xf246();
  UNK_0xf215 C@ Push(0x0018); OR UNK_0xf215 C!();
  UNK_0xf250();
  
  UNK_0x3f39("SHIELDS ARE NOW UP");
  .TTY();
  Push(cc_3); Push(2); .ABTN();
  pp_?SUP ON();
  
  label1351:
  
}


// ================================================
// 0xf3a9: WORD '>DISARM' codep=0x224c parp=0xf3b5
// ================================================

void >DISARM()
{
  UNK_0xf234();
  
  UNK_0x3f39("ARM WEAPON");
  UNK_0xf222 UNK_0xf246();
  UNK_0xf215 C@ Push(0x00fc); AND Push(0x0020); OR UNK_0xf215 C!();
  UNK_0xf272();
  
  UNK_0x3f39("WEAPONS ARE DISARMED");
  .TTY();
  
}


// ================================================
// 0xf3f9: WORD 'UNK_0xf3fb' codep=0x224c parp=0xf3fb
// ================================================

void UNK_0xf3fb()
{
  UNK_0xf210 1+ C@ UNK_0xf20b 1+ C@ 2DUP OR 
  if (Pop() == 0) goto label1337;
  
  if (Pop() == 0) goto label1338;
  Push(cc_4); UNK_0xf22a();
  
  goto label1345;
  
  label1338:
  Push(0); 
  label1345:
  DUP 
  if (Pop() == 0) goto label1339;
  UNK_0xf272();
  
  UNK_0x3f39("ARMING MISSILES");
  .TTY();
  
  label1339:
  SWAP 
  if (Pop() == 0) goto label1340;
  Push(cc_3); UNK_0xf22a();
  
  goto label1344;
  
  label1340:
  Push(0); 
  label1344:
  DUP 
  if (Pop() == 0) goto label1341;
  UNK_0xf272();
  
  UNK_0x3f39("ARMING LASERS");
  .TTY();
  
  label1341:
  + 
  if (Pop() == 0) goto label1342;
  UNK_0xf215 @ Push(0x0023); OR UNK_0xf215 !();
  UNK_0xf234();
  
  UNK_0x3f39("DISARM    ");
  UNK_0xf222 UNK_0xf246();
  
  label1342:
  
  goto label1343;
  
  label1337:
  2DROP 
  UNK_0x3f39("SHIP IS NOT EQUIPPED WITH WEAPONS");
  .TTY();
  
  label1343:
  
}


// ================================================
// 0xf4b8: WORD '(/(DIS)ARM)' codep=0x224c parp=0xf4c8
// ================================================

void (/(DIS)ARM)()
{
  CTINIT();
  *SHIP >C+S();
  UNK_0xf215 @ Push(cc_3); AND 
  if (Pop() == 0) goto label1336;
  >DISARM();
  
  goto label1346;
  
  label1336:
  UNK_0xf3fb();
  
  label1346:
  ICLOSE();
  .SORD();
  
}


// ================================================
// 0xf4e8: WORD '(/(UD)SHIELD)' codep=0x224c parp=0xf4fa
// ================================================

void (/(UD)SHIELD)()
{
  CTINIT();
  *SHIP >C+S();
  UNK_0xf215 @ Push(cc_8); AND 
  if (Pop() == 0) goto label1349;
  >DOWN-SHIELD();
  
  goto label1352;
  
  label1349:
  pp_?NEB @ pp_10*END 2@ D0=();
  OR 
  if (Pop() == 0) goto label1350;
  
  UNK_0x3f39("SHIELDS CAN'T BE RAISED");
  .TTY();
  BEEP();
  
  goto label1352;
  
  label1350:
  UNK_0xf359();
  
  label1352:
  ICLOSE();
  .SORD();
  
}

// 0xf54c: db 0x4e 0x41 0x56 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'NAV-VOC_____________ '
  