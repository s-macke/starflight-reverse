// store offset = 0xf140
// overlay size   = 0x0420
// name = 'SITE-'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:         LTLNBLT bitfield: 0 0 0  codep:0x1d29 parp:0xf160 size:0x000c
// 1870:      UNK_0xf16e bitfield: 0 0 0  codep:0x224c parp:0xf16e size:0x0006
// 1871:      UNK_0xf176 bitfield: 0 0 0  codep:0x224c parp:0xf176 size:0x0006
// 1872:      UNK_0xf17e bitfield: 0 0 0  codep:0x224c parp:0xf17e size:0x0061
// 1873:      UNK_0xf1e1 bitfield: 0 0 0  codep:0x224c parp:0xf1e1 size:0x0048
// 1874:      UNK_0xf22b bitfield: 0 0 0  codep:0x1d29 parp:0xf22b size:0x0002
// 1875:      UNK_0xf22f bitfield: 0 0 0  codep:0x1d29 parp:0xf22f size:0x0002
// 1876:      UNK_0xf233 bitfield: 0 0 0  codep:0x224c parp:0xf233 size:0x0072
// 1877:      UNK_0xf2a7 bitfield: 0 0 0  codep:0x224c parp:0xf2a7 size:0x0072
// 1878:      UNK_0xf31b bitfield: 0 0 0  codep:0x224c parp:0xf31b size:0x0030
// 1879:      UNK_0xf34d bitfield: 0 0 0  codep:0x224c parp:0xf34d size:0x003e
// 1880:      UNK_0xf38d bitfield: 0 0 0  codep:0x224c parp:0xf38d size:0x0028
// 1881:      UNK_0xf3b7 bitfield: 0 0 0  codep:0x224c parp:0xf3b7 size:0x0026
// 1882:      UNK_0xf3df bitfield: 0 0 0  codep:0x224c parp:0xf3df size:0x0044
// 1883:      UNK_0xf425 bitfield: 0 0 0  codep:0x224c parp:0xf425 size:0x0008
// 1884:      UNK_0xf42f bitfield: 0 0 0  codep:0x224c parp:0xf42f size:0x0006
// 1885:         GETSITE bitfield: 0 0 0  codep:0x224c parp:0xf441 size:0x00a6
// 1886:       .MERCATOR bitfield: 0 0 0  codep:0x224c parp:0xf4f5 size:0x0046
// 1887:         GETSITE bitfield: 0 0 0  codep:0x224c parp:0xf547 size:0x0019

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char LTLNBLT[12] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
unsigned char UNK_0xf22b[2] = {0x80, 0x04};
unsigned char UNK_0xf22f[2] = {0xe0, 0x01};



// 0xf152: db 0x42 0x00 'B '
  
// ================================================
// 0xf154: WORD 'LTLNBLT' codep=0x1d29 parp=0xf160
// ================================================
// 0xf160: db 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff '            '
  
// ================================================
// 0xf16c: WORD 'UNK_0xf16e' codep=0x224c parp=0xf16e
// ================================================

void UNK_0xf16e()
{
  WHITE !COLOR();
  
}


// ================================================
// 0xf174: WORD 'UNK_0xf176' codep=0x224c parp=0xf176
// ================================================

void UNK_0xf176()
{
  BLACK !COLOR();
  
}


// ================================================
// 0xf17c: WORD 'UNK_0xf17e' codep=0x224c parp=0xf17e
// ================================================

void UNK_0xf17e()
{
  Push(0x00c5); Push(0x0053); Push(0x007e); Push(0x009c); GREY1 POLY-WI();
  CTINIT();
  UNK_0xf176();
  Push(0x0066); Push(0x008a); POS.();
  
  (.") string 3 "LAT"
  Push(0x007d); pp_XBLT !();
  
  (.") string 4 "LONG"
  Push(0x00c1); Push(0x005f); Push(0x008e); Push(0x0090); BLACK POLY-WI();
  Push(0x00c1); Push(0x0093); Push(0x008e); Push(0x0098); BLACK POLY-WI();
  
}


// ================================================
// 0xf1df: WORD 'UNK_0xf1e1' codep=0x224c parp=0xf1e1
// ================================================

void UNK_0xf1e1()
{
  @CRS();
  CURSORS();
  pp_ABLT !();
  Push(cc_4); pp_WBLT !();
  Push(cc_6); pp_LBLT !();
  pp_XORMODE 099();
  Push(cc_8); Push(0); 
  do // (DO)
  {
  pp_CMAP I Push(cc_8); * + C@ !COLOR();
  Push(0x0094); Push(0x0095); I Push(cc_6); * + POS.();
  BLT 
  } while(...); // (LOOP) 0xffdc
  !CRS();
  
}


// ================================================
// 0xf229: WORD 'UNK_0xf22b' codep=0x1d29 parp=0xf22b
// ================================================
// 0xf22b: db 0x80 0x04 '  '
  
// ================================================
// 0xf22d: WORD 'UNK_0xf22f' codep=0x1d29 parp=0xf22f
// ================================================
// 0xf22f: db 0xe0 0x01 '  '
  
// ================================================
// 0xf231: WORD 'UNK_0xf233' codep=0x224c parp=0xf233
// ================================================

void UNK_0xf233()
{
  pp_XABS @ Push(0x0480); - Push(0x000a); Push(0x0040); */();
  pp_XORMODE 099();
  Push(0x007c); Push(0x0083); POS.();
  Push(cc_7); GREY1 POLY-ER();
  ?CGA();
  
  if (Pop() == 0) goto label532;
  UNK_0xf176();
  
  goto label536;
  
  label532:
  UNK_0xf16e();
  
  label536:
  DUP 0< 
  if (Pop() == 0) goto label533;
  NEGATE Push(0); Push(cc_3); D.R();
  
  (.") string 1 "W"
  
  goto label535;
  
  label533:
  DUP 0= 
  if (Pop() == 0) goto label534;
  Push(0x0082); Push(0x0083); POS.();
  .();
  
  goto label535;
  
  label534:
  Push(0); Push(cc_3); D.R();
  
  (.") string 1 "E"
  
  label535:
  
}


// ================================================
// 0xf2a5: WORD 'UNK_0xf2a7' codep=0x224c parp=0xf2a7
// ================================================

void UNK_0xf2a7()
{
  pp_YABS @ Push(0x01e0); - Push(0x000a); Push(0x0035); */();
  pp_XORMODE 099();
  Push(0x0066); Push(0x0083); POS.();
  Push(cc_7); GREY1 POLY-ER();
  ?CGA();
  
  if (Pop() == 0) goto label527;
  UNK_0xf176();
  
  goto label531;
  
  label527:
  UNK_0xf16e();
  
  label531:
  DUP 0< 
  if (Pop() == 0) goto label528;
  NEGATE Push(0); Push(2); D.R();
  
  (.") string 1 "S"
  
  goto label530;
  
  label528:
  DUP 0= 
  if (Pop() == 0) goto label529;
  Push(0x006a); Push(0x0083); POS.();
  .();
  
  goto label530;
  
  label529:
  Push(0); Push(2); D.R();
  
  (.") string 1 "N"
  
  label530:
  
}


// ================================================
// 0xf319: WORD 'UNK_0xf31b' codep=0x224c parp=0xf31b
// ================================================

void UNK_0xf31b()
{
  pp_PLHI @ Push(cc_-1); = 
  if (Pop() == 0) goto label526;
  Push(0x01e0); pp_UNK_0xf22f !();
  Push(0x0480); pp_UNK_0xf22b !();
  
  label526:
  pp_UNK_0xf22b @ pp_XABS !();
  pp_UNK_0xf22f @ pp_YABS !();
  SAVE-OV();
  
}


// ================================================
// 0xf34b: WORD 'UNK_0xf34d' codep=0x224c parp=0xf34d
// ================================================

void UNK_0xf34d()
{
  Push(cc_AX); 099();
  Push(0x00c5); Push(cc_BX); 1+ C!();
  Push(0x0053); Push(cc_BX); C!();
  Push(0x0090); Push(cc_CX); 1+ C!();
  Push(0x009d); Push(cc_CX); C!();
  Push(0x00c5); Push(cc_DX); 1+ C!();
  Push(0x0053); Push(cc_DX); C!();
  GRCALL 
}


// ================================================
// 0xf38b: WORD 'UNK_0xf38d' codep=0x224c parp=0xf38d
// ================================================

void UNK_0xf38d()
{
  Push(0x0060); pp_YABS @ Push(0x0028); / 2* Push(0x0091); + POS.();
  Push(0x0030); pp_WBLT !();
  Push(2); pp_LBLT !();
  
}


// ================================================
// 0xf3b5: WORD 'UNK_0xf3b7' codep=0x224c parp=0xf3b7
// ================================================

void UNK_0xf3b7()
{
  pp_XABS @ Push(0x0030); / Push(0x0060); + Push(0x00bf); POS.();
  Push(1); pp_WBLT !();
  Push(0x0032); pp_LBLT !();
  
}


// ================================================
// 0xf3dd: WORD 'UNK_0xf3df' codep=0x224c parp=0xf3df
// ================================================

void UNK_0xf3df()
{
  UNK_0xf176();
  UNK_0xf3b7();
  pp_XBLT @ Push(0x00c1); OVER Push(0x008f); LLINE();
  UNK_0xf38d();
  pp_YBLT @ DUP >R Push(0x005f); SWAP DUP Push(0x0090); SWAP LLINE();
  R> 1- Push(0x005f); SWAP DUP Push(0x0090); SWAP LLINE();
  
}


// ================================================
// 0xf423: WORD 'UNK_0xf425' codep=0x224c parp=0xf425
// ================================================

void UNK_0xf425()
{
  D>H();
  UNK_0xf34d();
  UNK_0xf3df();
  
}


// ================================================
// 0xf42d: WORD 'UNK_0xf42f' codep=0x224c parp=0xf42f
// ================================================

void UNK_0xf42f()
{
  H>D();
  UNK_0xf34d();
  
}


// ================================================
// 0xf435: WORD 'GETSITE' codep=0x224c parp=0xf441
// ================================================

void GETSITE()
{
  Push(cc_8); pp_#AUX !();
  pp_ESC-EN 099();
  >DISPLA();
  UNK_0xf31b();
  >1FONT();
  UNK_0xf176();
  UNK_0xf2a7();
  UNK_0xf233();
  UNK_0xf425();
  
  label538:
  XYSCAN();
  Push(0x1388); pp_KEYTIME 2@ pp_LKEYTIM 2@ D-();
  DROP / Push(cc_5); MAX();
  Push(0x00c8); MIN();
  >R I * SWAP R> * 2DUP OR 
  if (Pop() == 0) goto label537;
  GREY1 !COLOR();
  UNK_0xf2a7();
  UNK_0xf233();
  UNK_0xf42f();
  pp_YABS @ + Push(0); MAX();
  Push(0x03bf); MIN();
  pp_YABS !();
  pp_XABS @ + Push(0); MAX();
  Push(0x08ff); MIN();
  pp_XABS !();
  UNK_0xf425();
  UNK_0xf176();
  UNK_0xf2a7();
  UNK_0xf233();
  
  goto label539;
  
  label537:
  2DROP 
  label539:
  ?TRIG();
  
  if (Pop() == 0) goto label538;
  pp_XABS @ pp_UNK_0xf22b !();
  pp_YABS @ pp_UNK_0xf22f !();
  pp_ESC-EN ON();
  
}


// ================================================
// 0xf4e7: WORD '.MERCATOR' codep=0x224c parp=0xf4f5
// ================================================

void .MERCATOR()
{
  Push(cc_4); pp_#AUX !();
  UNK_0xf31b();
  >DISPLA();
  UNK_0xf17e();
  UNK_0xf1e1();
  Push(0x0060); pp_XLLDEST !();
  Push(0x0090); pp_YLLDEST !();
  Push(0x9199); pp_'.CELL !();
  Push(0x6a5a); SETLARR();
  FULLARR();
  SETREGI();
  .REGION();
  pp_CONTEXT @ 0= 
  if (Pop() == 0) goto label540;
  CTINIT();
  UNK_0xf2a7();
  UNK_0xf233();
  
  label540:
  CTINIT();
  
}


// ================================================
// 0xf53b: WORD 'GETSITE' codep=0x224c parp=0xf547
// ================================================

void GETSITE()
{
  pp_#AUX @ Push(cc_4); = NOT 
  if (Pop() == 0) goto label525;
  .MERCATOR();
  
  label525:
  GETSITE();
  
}

// 0xf55b: db 0x53 0x49 0x54 0x45 0x2d 0x00 'SITE- '
  