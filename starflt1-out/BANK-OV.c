// store offset = 0xef70
// overlay size   = 0x05f0
// name = 'BANK-VOC________________________for BANK--------------'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xef86 bitfield: 0 0 0  codep:0x224c parp:0xef86 size:0x0008
// 1704:      UNK_0xef90 bitfield: 0 0 0  codep:0x2214 parp:0xef90 size:0x0002 = 0x0
// 1705:      UNK_0xef94 bitfield: 0 0 0  codep:0x2214 parp:0xef94 size:0x0002 = 0x1
// 1706:      UNK_0xef98 bitfield: 0 0 0  codep:0x2214 parp:0xef98 size:0x0002 = 0x2
// 1707:      UNK_0xef9c bitfield: 0 0 0  codep:0x2214 parp:0xef9c size:0x0002 = 0x3
// 1708:      UNK_0xefa0 bitfield: 0 0 0  codep:0x2214 parp:0xefa0 size:0x0002 = 0x4
// 1709:      UNK_0xefa4 bitfield: 0 0 0  codep:0x744d parp:0xefa4 size:0x0003
// 1710:      UNK_0xefa9 bitfield: 0 0 0  codep:0x744d parp:0xefa9 size:0x0003
// 1711:      UNK_0xefae bitfield: 0 0 0  codep:0x744d parp:0xefae size:0x0003
// 1712:      UNK_0xefb3 bitfield: 0 0 0  codep:0x73ea parp:0xefb3 size:0x0006
// 1713:      UNK_0xefbb bitfield: 0 0 0  codep:0x744d parp:0xefbb size:0x0003
// 1714:      UNK_0xefc0 bitfield: 0 0 0  codep:0x744d parp:0xefc0 size:0x0003
// 1715:      UNK_0xefc5 bitfield: 0 0 0  codep:0x224c parp:0xefc5 size:0x0006
// 1716:          !TFLAG bitfield: 0 0 0  codep:0x224c parp:0xefd6 size:0x000c
// 1717:       D@BALANCE bitfield: 0 0 0  codep:0x224c parp:0xeff0 size:0x000a
// 1718:       D!BALANCE bitfield: 0 0 0  codep:0x224c parp:0xf008 size:0x000a
// 1719:        ?BALANCE bitfield: 0 0 0  codep:0x224c parp:0xf01f size:0x0008
// 1720:    INIT-BALANCE bitfield: 0 0 0  codep:0x224c parp:0xf038 size:0x000e
// 1721:        TRANSACT bitfield: 0 0 0  codep:0x224c parp:0xf053 size:0x0072
// 1722:            INT% bitfield: 0 0 0  codep:0x224c parp:0xf0ce size:0x0042
// 1723:      UNK_0xf112 bitfield: 0 0 0  codep:0x1d29 parp:0xf112 size:0x0014
// 1724:      UNK_0xf128 bitfield: 0 0 0  codep:0x224c parp:0xf128 size:0x0028
// 1725:      UNK_0xf152 bitfield: 0 0 0  codep:0x224c parp:0xf152 size:0x0042
// 1726:      UNK_0xf196 bitfield: 0 0 0  codep:0x224c parp:0xf196 size:0x0042
// 1727:      UNK_0xf1da bitfield: 0 0 0  codep:0x224c parp:0xf1da size:0x0006
// 1728:      UNK_0xf1e2 bitfield: 0 0 0  codep:0x224c parp:0xf1e2 size:0x008b
// 1729:      UNK_0xf26f bitfield: 0 0 0  codep:0x224c parp:0xf26f size:0x013a
// 1730:      UNK_0xf3ab bitfield: 0 0 0  codep:0x224c parp:0xf3ab size:0x00b7
// 1731:      UNK_0xf464 bitfield: 0 0 0  codep:0x224c parp:0xf464 size:0x000c
// 1732:      UNK_0xf472 bitfield: 0 0 0  codep:0x224c parp:0xf472 size:0x0038
// 1733:      UNK_0xf4ac bitfield: 0 0 0  codep:0x224c parp:0xf4ac size:0x0016
// 1734:      UNK_0xf4c4 bitfield: 0 0 0  codep:0x224c parp:0xf4c4 size:0x001e
// 1735:        (U-BANK) bitfield: 0 0 0  codep:0x224c parp:0xf4ef size:0x0071

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf112[20] = {0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44};

const unsigned short int cc_UNK_0xef90 = 0x0000;
const unsigned short int cc_UNK_0xef94 = 0x0001;
const unsigned short int cc_UNK_0xef98 = 0x0002;
const unsigned short int cc_UNK_0xef9c = 0x0003;
const unsigned short int cc_UNK_0xefa0 = 0x0004;


// 0xef82: db 0x5c 0x00 '\ '
  
// ================================================
// 0xef84: WORD 'UNK_0xef86' codep=0x224c parp=0xef86
// ================================================

void UNK_0xef86()
{
  Push(0xbdba); MODULE();
  
}


// ================================================
// 0xef8e: WORD 'UNK_0xef90' codep=0x2214 parp=0xef90
// ================================================
// 0xef90: db 0x00 0x00 '  '
  
// ================================================
// 0xef92: WORD 'UNK_0xef94' codep=0x2214 parp=0xef94
// ================================================
// 0xef94: db 0x01 0x00 '  '
  
// ================================================
// 0xef96: WORD 'UNK_0xef98' codep=0x2214 parp=0xef98
// ================================================
// 0xef98: db 0x02 0x00 '  '
  
// ================================================
// 0xef9a: WORD 'UNK_0xef9c' codep=0x2214 parp=0xef9c
// ================================================
// 0xef9c: db 0x03 0x00 '  '
  
// ================================================
// 0xef9e: WORD 'UNK_0xefa0' codep=0x2214 parp=0xefa0
// ================================================
// 0xefa0: db 0x04 0x00 '  '
  
// ================================================
// 0xefa2: WORD 'UNK_0xefa4' codep=0x744d parp=0xefa4
// ================================================
// 0xefa4: db 0x0d 0x0b 0x04 '   '
  
// ================================================
// 0xefa7: WORD 'UNK_0xefa9' codep=0x744d parp=0xefa9
// ================================================
// 0xefa9: db 0x0d 0x0f 0x04 '   '
  
// ================================================
// 0xefac: WORD 'UNK_0xefae' codep=0x744d parp=0xefae
// ================================================
// 0xefae: db 0x0d 0x13 0x01 '   '
  
// ================================================
// 0xefb1: WORD 'UNK_0xefb3' codep=0x73ea parp=0xefb3
// ================================================
// 0xefb3: db 0x0e 0x00 0x13 0x13 0x80 0x64 '     d'
  
// ================================================
// 0xefb9: WORD 'UNK_0xefbb' codep=0x744d parp=0xefbb
// ================================================
// 0xefbb: db 0x0e 0x0b 0x04 '   '
  
// ================================================
// 0xefbe: WORD 'UNK_0xefc0' codep=0x744d parp=0xefc0
// ================================================
// 0xefc0: db 0x0e 0x0f 0x02 '   '
  
// ================================================
// 0xefc3: WORD 'UNK_0xefc5' codep=0x224c parp=0xefc5
// ================================================

void UNK_0xefc5()
{
  *BANK >C+S();
  
}


// ================================================
// 0xefcb: WORD '!TFLAG' codep=0x224c parp=0xefd6
// ================================================

void !TFLAG()
{
  UNK_0xefc5();
  Push(1); UNK_0xefae C!();
  ICLOSE();
  
}


// ================================================
// 0xefe2: WORD 'D@BALANCE' codep=0x224c parp=0xeff0
// ================================================

void D@BALANCE()
{
  UNK_0xefc5();
  UNK_0xefa9 2@ ICLOSE();
  
}


// ================================================
// 0xeffa: WORD 'D!BALANCE' codep=0x224c parp=0xf008
// ================================================

void D!BALANCE()
{
  UNK_0xefc5();
  UNK_0xefa9 D!();
  ICLOSE();
  
}


// ================================================
// 0xf012: WORD '?BALANCE' codep=0x224c parp=0xf01f
// ================================================

void ?BALANCE()
{
  D@BALANCE();
  D>();
  0= 
}


// ================================================
// 0xf027: WORD 'INIT-BALANCE' codep=0x224c parp=0xf038
// ================================================

void INIT-BALANCE()
{
  UNK_0xefc5();
  UNK_0xefa4 2@ UNK_0xefa9 D!();
  ICLOSE();
  
}


// ================================================
// 0xf046: WORD 'TRANSACT' codep=0x224c parp=0xf053
// ================================================

void TRANSACT()
{
  UNK_0xefc5();
  UNK_0xefae C@ 
  if (Pop() == 0) goto label572;
  IOPEN();
  Push(0x000e); SWAP Push(1); *CREATE();
  IFIRST();
  Push(0); Push(cc_9); Push(0); 
  do // (DO)
  {
  INEXT();
  ?FIRST();
  
  if (Pop() == 0) goto label573;
  1+ LEAVE 
  label573:
  
  } while(...); // (LOOP) 0xfff2
  0= 
  if (Pop() == 0) goto label574;
  IFIRST();
  IDELETE();
  
  label574:
  ILAST();
  COVER();
  SET-CUR();
  pp_STARDAT @ UNK_0xefa4 2@ UNK_0xefa9 2@ D-();
  ICLOSE();
  UNK_0xefbb D!();
  UNK_0xefc0 !();
  ICLOSE();
  UNK_0xefa9 2@ UNK_0xefa4 D!();
  Push(0); UNK_0xefae C!();
  
  goto label575;
  
  label572:
  DROP 
  label575:
  ICLOSE();
  
}


// ================================================
// 0xf0c5: WORD 'INT%' codep=0x224c parp=0xf0ce
// ================================================

void INT%()
{
  INIT-BALANCE();
  D@BALANCE();
  Push(0x000c); Push(0x0064); M*/();
  pp_STARDAT @ pp_PORTDAT @ - Push(0x012c); M*/();
  2DUP D0=();
  
  if (Pop() == 0) goto label571;
  2DROP 
  goto label576;
  
  label571:
  D@BALANCE();
  D+ D!BALANCE();
  !TFLAG();
  Push(cc_5); TRANSACT();
  pp_STARDAT @ pp_PORTDAT !();
  
  label576:
  
}


// ================================================
// 0xf110: WORD 'UNK_0xf112' codep=0x1d29 parp=0xf112
// ================================================
// 0xf112: db 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 'DDDDDDDDDDDDDDDDDDDD'
  
// ================================================
// 0xf126: WORD 'UNK_0xf128' codep=0x224c parp=0xf128
// ================================================

void UNK_0xf128()
{
  Push(0xfffc); pp_YBLT +!();
  pp_XBLT @ - pp_WBLT !();
  Push(1); pp_LBLT !();
  pp_UNK_0xf112 pp_ABLT !();
  BLT();
  Push(cc_4); pp_YBLT +!();
  
}


// ================================================
// 0xf150: WORD 'UNK_0xf152' codep=0x224c parp=0xf152
// ================================================

void UNK_0xf152()
{
  UNK_0xefc0 @ Push(0x012c); /MOD Push(0x120c); + SWAP Push(0x001e); /MOD 1+ SWAP 1+ Push(0); <#();
  #();
  #();
  #>();
  TYPE 
  (.") string 1 "-"
  Push(0); <#();
  #();
  #();
  #>();
  TYPE 
  (.") string 1 "-"
  .();
  
}


// ================================================
// 0xf194: WORD 'UNK_0xf196' codep=0x224c parp=0xf196
// ================================================

void UNK_0xf196()
{
  UNK_0xefbb 2@ 2DUP 2DUP DABS();
  Push(0x423f); Pust(0x000f); DMIN();
  Push(cc_6); D.R();
  Push(0); Push(0); D<();
  
  if (Pop() == 0) goto label567;
  Push(0x000b); 
  goto label568;
  
  label567:
  Push(0x000d); 
  label568:
  >R OR NOT NOT R> * Push(0x0020); + EMIT 
}


// ================================================
// 0xf1d8: WORD 'UNK_0xf1da' codep=0x224c parp=0xf1da
// ================================================

void UNK_0xf1da()
{
  UNK_0xefb3 $.();
  
}


// ================================================
// 0xf1e0: WORD 'UNK_0xf1e2' codep=0x224c parp=0xf1e2
// ================================================

void UNK_0xf1e2()
{
  Push(0x0032); Push(0x00be); Push(0x0032); Push(0x00b2); LLINE Push(0x006f); Push(0x00be); Push(0x006f); Push(0x00b2); LLINE Push(0x0034); Push(0x00c0); Push(0x006d); Push(0x00c0); LLINE Push(0x0034); Push(0x00b0); Push(0x006d); Push(0x00b0); LLINE Push(0x0032); Push(0x00c0); Push(cc_UNK_0xef98); Push(0x0032); Push(0x00b2); Push(cc_UNK_0xef98); Push(0x006d); Push(0x00c0); Push(cc_UNK_0xef98); Push(0x006d); Push(0x00b2); Push(cc_UNK_0xef98); Push(cc_4); UNK_0xef86();
  CTINIT();
  Push(0x0046); Push(0x00bc); POS.();
  >3FONT();
  
  (.") string 4 "BANK"
  
}


// ================================================
// 0xf26d: WORD 'UNK_0xf26f' codep=0x224c parp=0xf26f
// ================================================

void UNK_0xf26f()
{
  !COLOR();
  pp_XORMODE ON();
  Push(cc_3); Push(0); 
  do // (DO)
  {
  Push(1); I + Push(0x00c4); Push(1); I + Push(cc_3); LLINE Push(0x009c); I + Push(0x00c4); Push(0x009c); I + Push(cc_3); LLINE Push(0x009c); Push(1); I + Push(cc_3); Push(1); I + LLINE Push(0x009c); Push(0x00c4); I + Push(cc_3); Push(0x00c4); I + LLINE 
  } while(...); // (LOOP) 0xffa6
  Push(cc_5); Push(0x00c2); Push(cc_5); Push(0x0012); LLINE Push(0x0012); Push(0x0012); Push(cc_6); Push(0x0012); LLINE Push(0x0012); Push(0x0011); Push(0x0012); Push(cc_5); LLINE Push(0x0099); Push(cc_5); Push(0x0013); Push(cc_5); LLINE Push(0x009a); Push(cc_5); Push(0x009a); Push(0x00c2); LLINE Push(0x0099); Push(0x00c2); Push(cc_6); Push(0x00c2); LLINE Push(2); Push(0x00c5); Push(cc_UNK_0xef94); Push(0x009b); Push(0x00c5); Push(cc_UNK_0xef90); Push(2); Push(cc_4); Push(cc_UNK_0xef90); Push(0x009b); Push(cc_4); Push(cc_UNK_0xef94); Push(0x0012); Push(cc_6); Push(cc_UNK_0xef9c); Push(cc_5); Push(0x0013); Push(cc_UNK_0xef9c); Push(0x0011); Push(0x0012); Push(cc_UNK_0xef9c); Push(0x0012); Push(cc_6); Push(cc_UNK_0xef9c); Push(0x0099); Push(cc_6); Push(cc_UNK_0xefa0); Push(0x0012); Push(cc_6); Push(cc_UNK_0xef9c); Push(0x0099); Push(0x00c2); Push(cc_UNK_0xef9c); Push(cc_5); Push(0x00c2); Push(cc_UNK_0xefa0); Push(0x000c); UNK_0xef86();
  Push(cc_6); Push(0x000f); DK-BLUE .1LOGO();
  
}


// ================================================
// 0xf3a9: WORD 'UNK_0xf3ab' codep=0x224c parp=0xf3ab
// ================================================

void UNK_0xf3ab()
{
  CTINIT();
  Push(0x0013); Push(0x00a7); POS.();
  
  (.") string 4 "DATE"
  Push(0x003e); pp_XBLT !();
  
  (.") string 12 "TRANSACTIONS"
  Push(0x0085); pp_XBLT !();
  
  (.") string 3 "AMT"
  Push(0x0013); Push(0x00a1); Push(0x0021); Push(0x00a1); LLINE Push(0x003e); Push(0x00a1); Push(0x006c); Push(0x00a1); LLINE Push(0x0085); Push(0x00a1); Push(0x0090); Push(0x00a1); LLINE Push(0x0090); Push(0x00a3); LPLOT Push(0x0026); Push(0x002d); POS.();
  
  (.") string 22 "( INTEREST RATE: 12% )"
  Push(0x000f); Push(0x001d); POS.();
  
  (.") string 7 "BALANCE"
  Push(0x0077); UNK_0xf128();
  
}


// ================================================
// 0xf462: WORD 'UNK_0xf464' codep=0x224c parp=0xf464
// ================================================

void UNK_0xf464()
{
  DARK();
  DK-BLUE UNK_0xf26f();
  UNK_0xf1e2();
  UNK_0xf3ab();
  
}


// ================================================
// 0xf470: WORD 'UNK_0xf472' codep=0x224c parp=0xf472
// ================================================

void UNK_0xf472()
{
  pp_XORMODE OFF();
  Push(0x000a); * Push(0x0095); SWAP - Push(cc_7); SWAP POS.();
  >1FONT();
  UNK_0xf152();
  Push(0x0032); pp_XBLT !();
  UNK_0xf1da();
  Push(0x007c); UNK_0xf128();
  Push(0x007d); pp_XBLT !();
  UNK_0xf196();
  
}


// ================================================
// 0xf4aa: WORD 'UNK_0xf4ac' codep=0x224c parp=0xf4ac
// ================================================

void UNK_0xf4ac()
{
  Push(0x0079); Push(0x001d); POS.();
  >1FONT();
  UNK_0xefa4 2@ Push(cc_7); D.R();
  
}


// ================================================
// 0xf4c2: WORD 'UNK_0xf4c4' codep=0x224c parp=0xf4c4
// ================================================

void UNK_0xf4c4()
{
  UNK_0xefc5();
  IOPEN();
  Push(0); 
  label569:
  DUP UNK_0xf472();
  1+ INEXT();
  ?FIRST();
  
  if (Pop() == 0) goto label569;
  DROP ICLOSE();
  UNK_0xf4ac();
  ICLOSE();
  
}


// ================================================
// 0xf4e2: WORD '(U-BANK)' codep=0x224c parp=0xf4ef
// ================================================

void (U-BANK)()
{
  >HIDDEN();
  UNK_0xf464();
  UNK_0xf4c4();
  CTINIT();
  Push(0x0028); Push(0x000e); POS.();
  
  (.") string 22 "PRESS SPACEBAR TO EXIT"
  >DISPLA();
  SCR-RES();
  
  label570:
  XYSCAN();
  2DROP ?TRIG();
  
  if (Pop() == 0) goto label570;
  
}

// 0xf52a: db 0x42 0x41 0x4e 0x4b 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x42 0x41 0x4e 0x4b 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'BANK-VOC________________________for BANK-------------- '
  