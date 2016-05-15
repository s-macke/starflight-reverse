// store offset = 0xeca0
// overlay size   = 0x08c0
// name = 'ENG-VOC____________________'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xecb6 bitfield: 0 0 0  codep:0x7420 parp:0xecb6 size:0x0003
// 1870:      UNK_0xecbb bitfield: 0 0 0  codep:0x7420 parp:0xecbb size:0x0003
// 1871:      UNK_0xecc0 bitfield: 0 0 0  codep:0x7420 parp:0xecc0 size:0x0003
// 1872:      UNK_0xecc5 bitfield: 0 0 0  codep:0x224c parp:0xecc5 size:0x0012
// 1873:      UNK_0xecd9 bitfield: 0 0 0  codep:0x224c parp:0xecd9 size:0x0046
// 1874:      UNK_0xed21 bitfield: 0 0 0  codep:0x224c parp:0xed21 size:0x0012
// 1875:      UNK_0xed35 bitfield: 0 0 0  codep:0x224c parp:0xed35 size:0x0075
// 1876:      UNK_0xedac bitfield: 0 0 0  codep:0x224c parp:0xedac size:0x009c
// 1877:           DBARS bitfield: 0 0 0  codep:0x224c parp:0xee52 size:0x0044
// 1878:       (/DAMAGE) bitfield: 0 0 0  codep:0x224c parp:0xeea4 size:0x0012
// 1879:      UNK_0xeeb8 bitfield: 0 0 0  codep:0x224c parp:0xeeb8 size:0x0036
// 1880:      UNK_0xeef0 bitfield: 0 0 0  codep:0x224c parp:0xeef0 size:0x0142
// 1881:      .SHIP-ITEM bitfield: 0 0 0  codep:0x4b3b parp:0xf041 size:0x0020
// 1882:      UNK_0xf063 bitfield: 0 0 0  codep:0x224c parp:0xf063 size:0x0046
// 1883:      UNK_0xf0ab bitfield: 0 0 0  codep:0x224c parp:0xf0ab size:0x0023
// 1884:      UNK_0xf0d0 bitfield: 0 0 0  codep:0x224c parp:0xf0d0 size:0x0049
// 1885:      UNK_0xf11b bitfield: 0 0 0  codep:0x224c parp:0xf11b size:0x0032
// 1886:      UNK_0xf14f bitfield: 0 0 0  codep:0x224c parp:0xf14f size:0x0082
// 1887:      UNK_0xf1d3 bitfield: 0 0 0  codep:0x224c parp:0xf1d3 size:0x004c
// 1888:      UNK_0xf221 bitfield: 0 0 0  codep:0x224c parp:0xf221 size:0x0032
// 1889:      UNK_0xf255 bitfield: 0 0 0  codep:0x224c parp:0xf255 size:0x002a
// 1890:      UNK_0xf281 bitfield: 0 0 0  codep:0x224c parp:0xf281 size:0x006d
// 1891:      UNK_0xf2f0 bitfield: 0 0 0  codep:0x224c parp:0xf2f0 size:0x002c
// 1892:      UNK_0xf31e bitfield: 0 0 0  codep:0x224c parp:0xf31e size:0x004a
// 1893:      UNK_0xf36a bitfield: 0 0 0  codep:0x224c parp:0xf36a size:0x001e
// 1894:      UNK_0xf38a bitfield: 0 0 0  codep:0x224c parp:0xf38a size:0x001c
// 1895:      UNK_0xf3a8 bitfield: 0 0 0  codep:0x224c parp:0xf3a8 size:0x0021
// 1896:      UNK_0xf3cb bitfield: 0 0 0  codep:0x224c parp:0xf3cb size:0x0024
// 1897:      UNK_0xf3f1 bitfield: 0 0 0  codep:0x224c parp:0xf3f1 size:0x0022
// 1898:      UNK_0xf415 bitfield: 0 0 0  codep:0x224c parp:0xf415 size:0x0046
// 1899:       (/REPAIR) bitfield: 0 0 0  codep:0x224c parp:0xf469 size:0x00f7

// =================================
// =========== VARIABLES ===========
// =================================



// 0xecb2: db 0x8b 0x00 '  '
  
// ================================================
// 0xecb4: WORD 'UNK_0xecb6' codep=0x7420 parp=0xecb6
// ================================================
// 0xecb6: db 0x10 0x1c 0x01 '   '
  
// ================================================
// 0xecb9: WORD 'UNK_0xecbb' codep=0x7420 parp=0xecbb
// ================================================
// 0xecbb: db 0x11 0x1a 0x03 '   '
  
// ================================================
// 0xecbe: WORD 'UNK_0xecc0' codep=0x7420 parp=0xecc0
// ================================================
// 0xecc0: db 0x14 0x11 0x02 '   '
  
// ================================================
// 0xecc3: WORD 'UNK_0xecc5' codep=0x224c parp=0xecc5
// ================================================

void UNK_0xecc5()
{
  Push(0x0040); pp_XBLT !();
  
  (.") string 5 "[N Y]"
  
}


// ================================================
// 0xecd7: WORD 'UNK_0xecd9' codep=0x224c parp=0xecd9
// ================================================

void UNK_0xecd9()
{
  DK-BLUE !COLOR();
  Push(0x009a); Push(0x00b4); Push(0x0071); OVER LLINE();
  Push(0x009a); Push(0x0082); Push(0x0071); OVER LLINE();
  Push(0x0071); Push(0x0083); OVER Push(0x00b3); LLINE();
  Push(0x009a); Push(0x0083); OVER Push(0x00b3); LLINE();
  
}


// ================================================
// 0xed1f: WORD 'UNK_0xed21' codep=0x224c parp=0xed21
// ================================================

void UNK_0xed21()
{
  Push(0xfff9); pp_YBLT +!();
  Push(0x0055); pp_XBLT !();
  
}


// ================================================
// 0xed33: WORD 'UNK_0xed35' codep=0x224c parp=0xed35
// ================================================

void UNK_0xed35()
{
  >2FONT();
  WHITE !COLOR();
  Push(0x0067); Push(0x00c2); POS.();
  
  (.") string 6 "DAMAGE"
  >1FONT();
  DK-BLUE !COLOR();
  Push(0x0055); Push(0x00b2); POS.();
  
  (.") string 4 "HULL"
  UNK_0xed21();
  
  (.") string 7 "ENGINES"
  UNK_0xed21();
  
  (.") string 7 "SENSORS"
  UNK_0xed21();
  
  (.") string 5 "COMM."
  UNK_0xed21();
  
  (.") string 6 "SHIELD"
  UNK_0xed21();
  
  (.") string 7 "MISSILE"
  UNK_0xed21();
  
  (.") string 5 "LASER"
  
}


// ================================================
// 0xedaa: WORD 'UNK_0xedac' codep=0x224c parp=0xedac
// ================================================

void UNK_0xedac()
{
  DUP 2* UNK_0xecc0 + >R I 1+ C@ I UNK_0xecc0 = OR 
  if (Pop() == 0) goto label1033;
  CURSORS();
  pp_ABLT !();
  pp_XORMODE 099();
  Push(cc_5); pp_LBLT !();
  I C@ 2* Push(cc_5); / pp_WBLT !();
  Push(0x0072); Push(0x00b2); ROT Push(cc_7); * - POS.();
  WHITE BLUE DK-GREE ?MRC();
  !COLOR();
  pp_WBLT @ 
  if (Pop() == 0) goto label1034;
  BLT 
  label1034:
  Push(0x0072); pp_WBLT @ + pp_XBLT !();
  Push(0x0028); pp_WBLT @ - pp_WBLT !();
  GREY1 RED RED ?MRC();
  !COLOR();
  pp_WBLT @ 
  if (Pop() == 0) goto label1035;
  BLT 
  label1035:
  
  goto label1036;
  
  label1033:
  DROP 
  label1036:
  R> DROP 
}


// ================================================
// 0xee48: WORD 'DBARS' codep=0x224c parp=0xee52
// ================================================

void DBARS()
{
  *SHIP >C+S();
  Push(cc_7); Push(0); 
  do // (DO)
  {
  I UNK_0xedac();
  
  } while(...); // (LOOP) 0xfffa
  UNK_0xecc0 C@ Push(0x007f); AND Push(0x000f); < 
  if (Pop() == 0) goto label1037;
  Push(0x1d4c); Pust(0x0000); 
  goto label1038;
  
  label1037:
  Push(0x3a98); Pust(0x0000); 
  label1038:
  TIME 2@ D+ pp_VSTIME D!();
  ICLOSE();
  
}


// ================================================
// 0xee96: WORD '(/DAMAGE)' codep=0x224c parp=0xeea4
// ================================================

void (/DAMAGE)()
{
  BLACK ERASE-A();
  UNK_0xecd9();
  UNK_0xed35();
  Push(cc_3); pp_#AUX !();
  DBARS();
  
}


// ================================================
// 0xeeb6: WORD 'UNK_0xeeb8' codep=0x224c parp=0xeeb8
// ================================================

void UNK_0xeeb8()
{
  >R *SHIP >C+S();
  Push(0); Push(cc_7); Push(0); 
  do // (DO)
  {
  UNK_0xecc0 I 2* + 1+ C@ J AND 
  if (Pop() == 0) goto label1066;
  1+ I SWAP LEAVE 
  label1066:
  
  } while(...); // (LOOP) 0xffe2
  R> DROP ICLOSE();
  
}


// ================================================
// 0xeeee: WORD 'UNK_0xeef0' codep=0x224c parp=0xeef0
// ================================================

void UNK_0xeef0()
{
  >R I 0= 
  if (Pop() == 0) goto label1040;
  
  (.") string 9 "DESTROYED"
  
  goto label1047;
  
  label1040:
  I Push(1); Push(0x0014); WITHIN();
  
  if (Pop() == 0) goto label1041;
  
  (.") string 10 "CRITICALLY"
  
  goto label1046;
  
  label1041:
  I Push(0x0014); Push(0x0028); WITHIN();
  
  if (Pop() == 0) goto label1042;
  
  (.") string 7 "HEAVILY"
  
  goto label1046;
  
  label1042:
  I Push(0x0028); Push(0x0046); WITHIN();
  
  if (Pop() == 0) goto label1043;
  
  (.") string 10 "MODERATELY"
  
  goto label1046;
  
  label1043:
  I Push(0x0046); Push(0x005a); WITHIN();
  
  if (Pop() == 0) goto label1044;
  
  (.") string 8 "SLIGHTLY"
  
  goto label1046;
  
  label1044:
  I Push(0x005a); Push(0x0064); WITHIN();
  
  if (Pop() == 0) goto label1045;
  
  (.") string 9 "MINIMALLY"
  
  goto label1046;
  
  label1045:
  
  (.") string 3 "NOT"
  
  label1046:
  
  (.") string 8 " DAMAGED"
  
  label1047:
  R> DROP 
}

// 0xefbe: db 0x4c 0x22 0xdc 0x1b 0x04 0x48 0x55 0x4c 0x4c 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x45 0x4e 0x47 0x49 0x4e 0x45 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x53 0x45 0x4e 0x53 0x4f 0x52 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x0e 0x43 0x4f 0x4d 0x4d 0x55 0x4e 0x49 0x43 0x41 0x54 0x49 0x4f 0x4e 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x53 0x48 0x49 0x45 0x4c 0x44 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x10 0x4d 0x49 0x53 0x53 0x49 0x4c 0x45 0x20 0x4c 0x41 0x55 0x4e 0x43 0x48 0x45 0x52 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x0c 0x4c 0x41 0x53 0x45 0x52 0x20 0x43 0x41 0x4e 0x4e 0x4f 0x4e 0x90 0x16 'L"   HULL  L"   ENGINES  L"   SENSORS  L"   COMMUNICATIONS  L"   SHIELDS  L"   MISSILE LAUNCHER  L"   LASER CANNON  '
  
// ================================================
// 0xf032: WORD '.SHIP-ITEM' codep=0x4b3b parp=0xf041
// ================================================
// 0xf041: db 0x07 0x00 0x48 0x3a 0x00 0x00 0xc0 0xef 0x01 0x00 0xcb 0xef 0x02 0x00 0xd9 0xef 0x03 0x00 0xe7 0xef 0x04 0x00 0xfc 0xef 0x05 0x00 0x0a 0xf0 0x06 0x00 0x21 0xf0 '  H:                          ! '
  
// ================================================
// 0xf061: WORD 'UNK_0xf063' codep=0x224c parp=0xf063
// ================================================

void UNK_0xf063()
{
  NULL CTPOS.();
  DUP .SHIP-ITEM 
  (.") string 2 ": "
  2* UNK_0xecc0 + >R I 1+ C@ I UNK_0xecc0 = OR 
  if (Pop() == 0) goto label1039;
  I C@ UNK_0xeef0();
  I C@ 0> 
  goto label1048;
  
  label1039:
  
  (.") string 4 "NONE"
  Push(0); 
  label1048:
  R> DROP 
}


// ================================================
// 0xf0a9: WORD 'UNK_0xf0ab' codep=0x224c parp=0xf0ab
// ================================================

void UNK_0xf0ab()
{
  CTCR();
  
  (.") string 12 "EFFICIENCY: "
  2* UNK_0xecc0 + C@ Push(0); .R();
  
  (.") string 1 "%"
  
}


// ================================================
// 0xf0ce: WORD 'UNK_0xf0d0' codep=0x224c parp=0xf0d0
// ================================================

void UNK_0xf0d0()
{
  ?DUP 
  if (Pop() == 0) goto label1050;
  CTCR();
  
  (.") string 23 "CURRENT FUNCTIONALITY: "
  2* UNK_0xecc0 + 1+ C@ Push(0x0080); AND 
  if (Pop() == 0) goto label1051;
  
  (.") string 2 "IN"
  
  label1051:
  
  (.") string 9 "OPERATIVE"
  
  label1050:
  
}


// ================================================
// 0xf119: WORD 'UNK_0xf11b' codep=0x224c parp=0xf11b
// ================================================

void UNK_0xf11b()
{
  *ASSIGN >C+S();
  UNK_0xecbb @>C+S();
  Push(0x00fb); UNK_0xecb6 C@ - Push(0x0064); ROT - * 1+ Push(0x1c1b); Push(0x5559); */();
  Push(cc_5); + CDROP();
  ICLOSE();
  
}


// ================================================
// 0xf14d: WORD 'UNK_0xf14f' codep=0x224c parp=0xf14f
// ================================================

void UNK_0xf14f()
{
  DUP Push(0x003c); < 
  if (Pop() == 0) goto label1053;
  Push(cc_5); /MOD SWAP Push(2); > + DUP .();
  
  (.") string 6 "MINUTE"
  
  goto label1056;
  
  label1053:
  DUP Push(0x05a0); < 
  if (Pop() == 0) goto label1054;
  Push(0x003c); /MOD SWAP Push(0x001e); > + DUP .();
  
  (.") string 4 "HOUR"
  
  goto label1056;
  
  label1054:
  Push(0x05a0); /MOD SWAP Push(0x02d0); > + DUP .();
  
  (.") string 3 "DAY"
  
  label1056:
  Push(1); > 
  if (Pop() == 0) goto label1055;
  Push(0x0053); EMIT 
  label1055:
  
  (.") string 1 "."
  
}


// ================================================
// 0xf1d1: WORD 'UNK_0xf1d3' codep=0x224c parp=0xf1d3
// ================================================

void UNK_0xf1d3()
{
  2* UNK_0xecc0 + C@ DUP Push(0x0064); < 
  if (Pop() == 0) goto label1052;
  CTCR();
  
  (.") string 37 "ESTIMATED TIME FOR COMPLETE REPAIRS: "
  CTCR();
  UNK_0xf11b();
  UNK_0xf14f();
  
  goto label1057;
  
  label1052:
  DROP 
  label1057:
  
}


// ================================================
// 0xf21f: WORD 'UNK_0xf221' codep=0x224c parp=0xf221
// ================================================

void UNK_0xf221()
{
  2* UNK_0xecc0 + 1+ C@ Push(0x0040); AND 
  if (Pop() == 0) goto label1058;
  CTCR();
  
  (.") string 23 "CURRENTLY UNDER REPAIR."
  
  label1058:
  
}


// ================================================
// 0xf253: WORD 'UNK_0xf255' codep=0x224c parp=0xf255
// ================================================

void UNK_0xf255()
{
  *SHIP >C+S();
  >R CTINIT();
  CTERASE();
  I UNK_0xf063();
  
  if (Pop() == 0) goto label1049;
  I UNK_0xf0ab();
  I UNK_0xf0d0();
  I UNK_0xf1d3();
  I UNK_0xf221();
  
  label1049:
  R> DROP ICLOSE();
  
}


// ================================================
// 0xf27f: WORD 'UNK_0xf281' codep=0x224c parp=0xf281
// ================================================

void UNK_0xf281()
{
  DUP 2* UNK_0xecc0 + C@ Push(0x007f); AND DUP Push(1); Push(0x0064); WITHIN();
  
  if (Pop() == 0) goto label1062;
  2DROP Push(0); 
  goto label1065;
  
  label1062:
  CTERASE();
  SWAP .SHIP-ITEM 
  (.") string 2 ": "
  
  if (Pop() == 0) goto label1063;
  
  (.") string 18 "NO REPAIRS NEEDED."
  
  goto label1064;
  
  label1063:
  CTCR();
  
  (.") string 22 "DAMAGED BEYOND REPAIR."
  
  label1064:
  Push(1); 
  label1065:
  
}


// ================================================
// 0xf2ee: WORD 'UNK_0xf2f0' codep=0x224c parp=0xf2f0
// ================================================

void UNK_0xf2f0()
{
  CTERASE();
  CTINIT();
  .SHIP-ITEM 
  (.") string 1 ":"
  CTCR();
  
  (.") string 27 "ALREADY UNDERGOING REPAIRS."
  
}


// ================================================
// 0xf31c: WORD 'UNK_0xf31e' codep=0x224c parp=0xf31e
// ================================================

void UNK_0xf31e()
{
  CTERASE();
  
  (.") string 17 "CEASE REPAIRS ON "
  .SHIP-ITEM CTCR();
  
  (.") string 21 "AND BEGIN REPAIRS ON "
  pp_OCRS @ .SHIP-ITEM 
  (.") string 1 "?"
  CTCR();
  UNK_0xecc5();
  Y/N();
  pp_FTRIG ON();
  CTERASE();
  
}


// ================================================
// 0xf368: WORD 'UNK_0xf36a' codep=0x224c parp=0xf36a
// ================================================

void UNK_0xf36a()
{
  
  (.") string 19 "CEASING REPAIRS ON "
  .SHIP-ITEM 
  (.") string 1 "."
  
}


// ================================================
// 0xf388: WORD 'UNK_0xf38a' codep=0x224c parp=0xf38a
// ================================================

void UNK_0xf38a()
{
  DUP UNK_0xf36a();
  2* UNK_0xecc0 + 1+ DUP C@ Push(0x00bf); AND SWAP C!();
  
}


// ================================================
// 0xf3a6: WORD 'UNK_0xf3a8' codep=0x224c parp=0xf3a8
// ================================================

void UNK_0xf3a8()
{
  
  (.") string 22 "CONTINUING REPAIRS ON "
  .SHIP-ITEM 
  (.") string 1 "."
  
}


// ================================================
// 0xf3c9: WORD 'UNK_0xf3cb' codep=0x224c parp=0xf3cb
// ================================================

void UNK_0xf3cb()
{
  
  (.") string 21 "BEGINNING REPAIRS ON "
  .SHIP-ITEM 
  (.") string 1 "."
  pp_?REPAIR ON();
  
}


// ================================================
// 0xf3ef: WORD 'UNK_0xf3f1' codep=0x224c parp=0xf3f1
// ================================================

void UNK_0xf3f1()
{
  DUP UNK_0xf3cb();
  *SHIP >C+S();
  2* UNK_0xecc0 + 1+ DUP C@ Push(0x0040); OR SWAP C!();
  ICLOSE();
  
}


// ================================================
// 0xf413: WORD 'UNK_0xf415' codep=0x224c parp=0xf415
// ================================================

void UNK_0xf415()
{
  >R @CRS();
  I pp_OCRS !();
  I Push(0x0054); Push(0x00b3); ROT Push(cc_7); * - POS.();
  CURSORS();
  pp_ABLT !();
  Push(0x001d); pp_WBLT !();
  Push(cc_7); pp_LBLT !();
  LT-BLUE !COLOR();
  pp_XORMODE ON();
  BLT !CRS();
  R> pp_OCRS !();
  
}


// ================================================
// 0xf45b: WORD '(/REPAIR)' codep=0x224c parp=0xf469
// ================================================

void (/REPAIR)()
{
  (/DAMAGE)();
  pp_NCRS 099();
  Push(0); UNK_0xf415();
  Push(0); UNK_0xf255();
  CTINIT();
  pp_FTRIG 099();
  pp_FQUIT 099();
  *SHIP >C+S();
  
  label1061:
  XYSCAN();
  DROP pp_NCRS @ OVER - Push(cc_7); MOD();
  DUP 0< Push(cc_7); * + pp_NCRS !();
  
  if (Pop() == 0) goto label1059;
  pp_OCRS @ UNK_0xf415();
  pp_NCRS @ DUP UNK_0xf415();
  UNK_0xf255();
  
  label1059:
  pp_FTRIG @ pp_OCRS @ 2* UNK_0xecc0 + >R I 1+ C@ 0> R> UNK_0xecc0 = OR AND 
  if (Pop() == 0) goto label1060;
  pp_OCRS @ UNK_0xf281();
  NOT 
  if (Pop() == 0) goto label1060;
  Push(0x0040); UNK_0xeeb8();
  
  if (Pop() == 0) goto label1067;
  >R I pp_OCRS @ = 
  if (Pop() == 0) goto label1068;
  I UNK_0xf2f0();
  
  goto label1070;
  
  label1068:
  I UNK_0xf31e();
  
  if (Pop() == 0) goto label1069;
  I UNK_0xf38a();
  pp_OCRS @ CTCR();
  UNK_0xf3f1();
  
  goto label1070;
  
  label1069:
  I UNK_0xf3a8();
  
  label1070:
  R> DROP 
  goto label1060;
  
  label1067:
  CTERASE();
  pp_OCRS @ UNK_0xf3f1();
  
  label1060:
  ?TRIG();
  
  if (Pop() == 0) goto label1061;
  pp_OCRS @ UNK_0xf415();
  ICLOSE();
  
}

// 0xf545: db 0x45 0x4e 0x47 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'ENG-VOC____________________ '
  