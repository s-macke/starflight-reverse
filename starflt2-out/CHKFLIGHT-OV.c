// store offset = 0xf170
// overlay size   = 0x03f0
// name = 'CHKFLT_________________________'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xf186 bitfield: 0 0 0  codep:0x7420 parp:0xf186 size:0x0003
// 1870:      UNK_0xf18b bitfield: 0 0 0  codep:0x7420 parp:0xf18b size:0x0003
// 1871:      UNK_0xf190 bitfield: 0 0 0  codep:0x7420 parp:0xf190 size:0x0003
// 1872:      UNK_0xf195 bitfield: 0 0 0  codep:0x224c parp:0xf195 size:0x0034
// 1873:      UNK_0xf1cb bitfield: 0 0 0  codep:0x224c parp:0xf1cb size:0x0091
// 1874:      UNK_0xf25e bitfield: 0 0 0  codep:0x224c parp:0xf25e size:0x0016
// 1875:      UNK_0xf276 bitfield: 0 0 0  codep:0x224c parp:0xf276 size:0x0036
// 1876:      UNK_0xf2ae bitfield: 0 0 0  codep:0x224c parp:0xf2ae size:0x0063
// 1877:           (.CS) bitfield: 0 0 0  codep:0x4b3b parp:0xf31b size:0x0010
// 1878:      UNK_0xf32d bitfield: 0 0 0  codep:0x1d29 parp:0xf32d size:0x0002
// 1879:      UNK_0xf331 bitfield: 0 0 0  codep:0x224c parp:0xf331 size:0x0045
// 1880:      UNK_0xf378 bitfield: 0 0 0  codep:0x224c parp:0xf378 size:0x002f
// 1881:      UNK_0xf3a9 bitfield: 0 0 0  codep:0x224c parp:0xf3a9 size:0x005b
// 1882:      UNK_0xf406 bitfield: 0 0 0  codep:0x224c parp:0xf406 size:0x000c
// 1883:      UNK_0xf414 bitfield: 0 0 0  codep:0x224c parp:0xf414 size:0x004c
// 1884:      UNK_0xf462 bitfield: 0 0 0  codep:0x224c parp:0xf462 size:0x002e
// 1885:      UNK_0xf492 bitfield: 0 0 0  codep:0x224c parp:0xf492 size:0x0028
// 1886:      UNK_0xf4bc bitfield: 0 0 0  codep:0x224c parp:0xf4bc size:0x0048
// 1887:      ?CAN-LEAVE bitfield: 0 0 0  codep:0x224c parp:0xf513 size:0x004d

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf32d[2] = {0x3a, 0x20};



// 0xf182: db 0x3e 0x00 '> '
  
// ================================================
// 0xf184: WORD 'UNK_0xf186' codep=0x7420 parp=0xf186
// ================================================
// 0xf186: db 0x10 0x20 0x02 '   '
  
// ================================================
// 0xf189: WORD 'UNK_0xf18b' codep=0x7420 parp=0xf18b
// ================================================
// 0xf18b: db 0x11 0x11 0x12 '   '
  
// ================================================
// 0xf18e: WORD 'UNK_0xf190' codep=0x7420 parp=0xf190
// ================================================
// 0xf190: db 0x14 0x13 0x02 '   '
  
// ================================================
// 0xf193: WORD 'UNK_0xf195' codep=0x224c parp=0xf195
// ================================================

void UNK_0xf195()
{
  *STARSH >C+S();
  IOPEN();
  Push(0x000b); Push(0x000a); IFIND();
  
  if (Pop() == 0) goto label488;
  IOPEN();
  Push(0x001a); Push(0x0017); IFIND();
  
  if (Pop() == 0) goto label489;
  Push(cc_TRUE); 
  goto label491;
  
  label489:
  Push(cc_FALSE); 
  label491:
  
  goto label490;
  
  label488:
  Push(cc_FALSE); 
  label490:
  
}


// ================================================
// 0xf1c9: WORD 'UNK_0xf1cb' codep=0x224c parp=0xf1cb
// ================================================

void UNK_0xf1cb()
{
  GREY1 !COLOR();
  SFILL();
  BLACK !COLOR();
  pp_XORMODE 099();
  Push(2); Push(1); Push(0x009d); Push(1); LLINE();
  Push(2); Push(0x00b9); Push(0x009d); Push(0x00b9); LLINE();
  Push(1); Push(0x00b9); Push(1); Push(1); LLINE();
  Push(0x009e); Push(0x00b9); Push(0x009e); Push(1); LLINE();
  >3FONT();
  Push(0x0013); Push(0x00c4); POS.();
  
  (.") string 3 "PRE"
  pp_XBLT @ Push(0x00c0); OVER 2+ OVER LLINE();
  Push(cc_5); pp_XBLT +!();
  
  (.") string 6 "FLIGHT"
  Push(cc_6); pp_XBLT +!();
  
  (.") string 5 "CHECK"
  Push(2); Push(0x00c5); BLACK .1LOGO();
  
}


// ================================================
// 0xf25c: WORD 'UNK_0xf25e' codep=0x224c parp=0xf25e
// ================================================

void UNK_0xf25e()
{
  Push(cc_6); pp_YBLT @ Push(0x0014); - Push(0x00aa); MIN();
  POS.();
  
}


// ================================================
// 0xf274: WORD 'UNK_0xf276' codep=0x224c parp=0xf276
// ================================================

void UNK_0xf276()
{
  UNK_0xf25e();
  
  (.") string 24 "REPORT TO OPERATIONS FOR"
  Push(0x000a); pp_YBLT +!();
  UNK_0xf25e();
  
  (.") string 10 "EVALUATION"
  
}


// ================================================
// 0xf2ac: WORD 'UNK_0xf2ae' codep=0x224c parp=0xf2ae
// ================================================

void UNK_0xf2ae()
{
  UNK_0xf25e();
  
  (.") string 25 "REPORT TO CREW ASSIGNMENT"
  
}

// 0xf2ce: db 0x4c 0x22 0xdc 0x1b 0x0d 0x43 0x48 0x52 0x49 0x53 0x54 0x45 0x4e 0x20 0x53 0x48 0x49 0x50 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x10 0x50 0x55 0x52 0x43 0x48 0x41 0x53 0x45 0x20 0x45 0x4e 0x47 0x49 0x4e 0x45 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x20 0x41 0x4e 0x44 0x20 0x5c 0xf2 0x5d 0x17 0x0a 0x00 0x3b 0x5a 0x23 0x6d 0xe2 0xf2 0x90 0x16 'L"   CHRISTEN SHIP  L"   PURCHASE ENGINES  L"    AND \ ]   ;Z#m    '
  
// ================================================
// 0xf311: WORD '(.CS)' codep=0x4b3b parp=0xf31b
// ================================================
// 0xf31b: db 0x03 0x00 0x48 0x3a 0x01 0x00 0xd0 0xf2 0x06 0x00 0xe4 0xf2 0x07 0x00 0xfb 0xf2 '  H:            '
  
// ================================================
// 0xf32b: WORD 'UNK_0xf32d' codep=0x1d29 parp=0xf32d
// ================================================
// 0xf32d: db 0x3a 0x20 ': '
  
// ================================================
// 0xf32f: WORD 'UNK_0xf331' codep=0x224c parp=0xf331
// ================================================

void UNK_0xf331()
{
  UNK_0xf25e();
  
  (.") string 28 "REPORT TO SHIP-CONFIGURATION"
  Push(0x000a); pp_YBLT +!();
  UNK_0xf25e();
  
  (.") string 3 "TO "
  pp_UNK_0xf32d @ DUP Push(1); AND (.CS) Push(cc_7); AND (.CS) 
}


// ================================================
// 0xf376: WORD 'UNK_0xf378' codep=0x224c parp=0xf378
// ================================================

void UNK_0xf378()
{
  UNK_0xf25e();
  
  (.") string 30 "UNABLE TO LAUNCH WITHOUT FUEL "
  Push(0x000a); pp_YBLT +!();
  UNK_0xf25e();
  
}


// ================================================
// 0xf3a7: WORD 'UNK_0xf3a9' codep=0x224c parp=0xf3a9
// ================================================

void UNK_0xf3a9()
{
  UNK_0xf1cb();
  >2FONT();
  DUP Push(1); AND 
  if (Pop() == 0) goto label499;
  UNK_0xf276();
  
  label499:
  DUP Push(2); AND 
  if (Pop() == 0) goto label500;
  UNK_0xf2ae();
  
  label500:
  DUP Push(cc_4); AND 
  if (Pop() == 0) goto label501;
  UNK_0xf331();
  
  label501:
  Push(cc_8); AND 
  if (Pop() == 0) goto label502;
  UNK_0xf378();
  
  label502:
  Push(1); Push(0x0016); CMESS();
  BLACK !COLOR();
  
  (.") string 22 "PRESS SPACEBAR TO EXIT"
  !CRS();
  
}


// ================================================
// 0xf404: WORD 'UNK_0xf406' codep=0x224c parp=0xf406
// ================================================

void UNK_0xf406()
{
  Push(0x003b); Push(0xb76b); MODULE();
  
}


// ================================================
// 0xf412: WORD 'UNK_0xf414' codep=0x224c parp=0xf414
// ================================================

void UNK_0xf414()
{
  pp_?EVAL @ DUP 0= 
  if (Pop() == 0) goto label487;
  *OP >C+S();
  IOPEN();
  Push(0x000b); Push(0x002d); IFIND();
  DROP IOPEN();
  
  label493:
  CI OR 
  if (Pop() == 0) goto label492;
  IDELETE();
  
  goto label493;
  
  label492:
  ICLOSE();
  CDROP();
  ICLOSE();
  
  label487:
  pp_?TV @ 0= OR pp_?RECALL @ OR UNK_0xf406();
  OR UNK_0xf195();
  OR 
}


// ================================================
// 0xf460: WORD 'UNK_0xf462' codep=0x224c parp=0xf462
// ================================================

void UNK_0xf462()
{
  *ASSIGN >C+S();
  Push(0); UNK_0xf18b Push(0x0012); + UNK_0xf18b 
  do // (DO)
  {
  I @>C+S();
  UNK_0xf186 @ Push(cc_8); AND NOT OR ICLOSE();
  Push(cc_6); 
  } while(...); // (+LOOP) 0xffea
  ICLOSE();
  
}


// ================================================
// 0xf490: WORD 'UNK_0xf492' codep=0x224c parp=0xf492
// ================================================

void UNK_0xf492()
{
  *SHIP >C+S();
  %NAME C@ 0= UNK_0xf190 1+ C@ 0= 2* + ICLOSE();
  DUP Push(cc_4); + pp_UNK_0xf32d !();
  NOT NOT 
}


// ================================================
// 0xf4ba: WORD 'UNK_0xf4bc' codep=0x224c parp=0xf4bc
// ================================================

void UNK_0xf4bc()
{
  *STARSH >C+S();
  IOPEN();
  Push(0x000b); Push(0x000a); IFIND();
  
  if (Pop() == 0) goto label494;
  IOPEN();
  Push(0x001a); Push(cc_6); IFIND();
  
  if (Pop() == 0) goto label495;
  INST-QT @ DUP Push(0x000a); M*();
  pp_10*END D!();
  0= 
  goto label497;
  
  label495:
  Push(1); 
  label497:
  CDROP();
  
  goto label496;
  
  label494:
  Push(1); 
  label496:
  CDROP();
  ICLOSE();
  
}


// ================================================
// 0xf504: WORD '?CAN-LEAVE' codep=0x224c parp=0xf513
// ================================================

void ?CAN-LEAVE()
{
  UNK_0xf414();
  UNK_0xf462();
  2* OR UNK_0xf492();
  Push(cc_4); * OR UNK_0xf4bc();
  Push(cc_8); * OR ?DUP 
  if (Pop() == 0) goto label498;
  UNK_0xf3a9();
  KEY();
  DROP Push(0); 
  goto label503;
  
  label498:
  Push(1); 
  label503:
  
}

// 0xf541: db 0x43 0x48 0x4b 0x46 0x4c 0x54 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'CHKFLT_________________________ '
  