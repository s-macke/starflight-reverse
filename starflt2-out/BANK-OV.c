// store offset = 0xef80
// overlay size   = 0x05e0
// name = 'BANK-VOC__________________'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xef96 bitfield: 0 0 0  codep:0x224c parp:0xef96 size:0x0008
// 1870:      UNK_0xefa0 bitfield: 0 0 0  codep:0x2214 parp:0xefa0 size:0x0002 = 0x0
// 1871:      UNK_0xefa4 bitfield: 0 0 0  codep:0x2214 parp:0xefa4 size:0x0002 = 0x1
// 1872:      UNK_0xefa8 bitfield: 0 0 0  codep:0x2214 parp:0xefa8 size:0x0002 = 0x2
// 1873:      UNK_0xefac bitfield: 0 0 0  codep:0x2214 parp:0xefac size:0x0002 = 0x3
// 1874:      UNK_0xefb0 bitfield: 0 0 0  codep:0x2214 parp:0xefb0 size:0x0002 = 0x4
// 1875:      UNK_0xefb4 bitfield: 0 0 0  codep:0x7420 parp:0xefb4 size:0x0003
// 1876:      UNK_0xefb9 bitfield: 0 0 0  codep:0x7420 parp:0xefb9 size:0x0003
// 1877:      UNK_0xefbe bitfield: 0 0 0  codep:0x7420 parp:0xefbe size:0x0003
// 1878:      UNK_0xefc3 bitfield: 0 0 0  codep:0x7394 parp:0xefc3 size:0x0006
// 1879:      UNK_0xefcb bitfield: 0 0 0  codep:0x7420 parp:0xefcb size:0x0003
// 1880:      UNK_0xefd0 bitfield: 0 0 0  codep:0x7420 parp:0xefd0 size:0x0003
// 1881:      UNK_0xefd5 bitfield: 0 0 0  codep:0x224c parp:0xefd5 size:0x0006
// 1882:          !TFLAG bitfield: 0 0 0  codep:0x224c parp:0xefe6 size:0x000c
// 1883:       D@BALANCE bitfield: 0 0 0  codep:0x224c parp:0xf000 size:0x000a
// 1884:       D!BALANCE bitfield: 0 0 0  codep:0x224c parp:0xf018 size:0x000a
// 1885:        ?BALANCE bitfield: 0 0 0  codep:0x224c parp:0xf02f size:0x0008
// 1886:    INIT-BALANCE bitfield: 0 0 0  codep:0x224c parp:0xf048 size:0x000e
// 1887:        TRANSACT bitfield: 0 0 0  codep:0x224c parp:0xf063 size:0x0072
// 1888:            INT% bitfield: 0 0 0  codep:0x224c parp:0xf0de size:0x0042
// 1889:      UNK_0xf122 bitfield: 0 0 0  codep:0x1d29 parp:0xf122 size:0x0014
// 1890:      UNK_0xf138 bitfield: 0 0 0  codep:0x224c parp:0xf138 size:0x0028
// 1891:      UNK_0xf162 bitfield: 0 0 0  codep:0x224c parp:0xf162 size:0x0042
// 1892:      UNK_0xf1a6 bitfield: 0 0 0  codep:0x224c parp:0xf1a6 size:0x0042
// 1893:      UNK_0xf1ea bitfield: 0 0 0  codep:0x224c parp:0xf1ea size:0x0006
// 1894:      UNK_0xf1f2 bitfield: 0 0 0  codep:0x224c parp:0xf1f2 size:0x008b
// 1895:      UNK_0xf27f bitfield: 0 0 0  codep:0x224c parp:0xf27f size:0x013a
// 1896:      UNK_0xf3bb bitfield: 0 0 0  codep:0x224c parp:0xf3bb size:0x00b7
// 1897:      UNK_0xf474 bitfield: 0 0 0  codep:0x224c parp:0xf474 size:0x000c
// 1898:      UNK_0xf482 bitfield: 0 0 0  codep:0x224c parp:0xf482 size:0x0038
// 1899:      UNK_0xf4bc bitfield: 0 0 0  codep:0x224c parp:0xf4bc size:0x0016
// 1900:      UNK_0xf4d4 bitfield: 0 0 0  codep:0x224c parp:0xf4d4 size:0x001e
// 1901:        (U-BANK) bitfield: 0 0 0  codep:0x224c parp:0xf4ff size:0x0061

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf122[20] = {0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44};

const unsigned short int cc_UNK_0xefa0 = 0x0000;
const unsigned short int cc_UNK_0xefa4 = 0x0001;
const unsigned short int cc_UNK_0xefa8 = 0x0002;
const unsigned short int cc_UNK_0xefac = 0x0003;
const unsigned short int cc_UNK_0xefb0 = 0x0004;


// 0xef92: db 0x5d 0x00 '] '
  
// ================================================
// 0xef94: WORD 'UNK_0xef96' codep=0x224c parp=0xef96
// ================================================

void UNK_0xef96()
{
  Push(0xb752); MODULE();
  
}


// ================================================
// 0xef9e: WORD 'UNK_0xefa0' codep=0x2214 parp=0xefa0
// ================================================
// 0xefa0: db 0x00 0x00 '  '
  
// ================================================
// 0xefa2: WORD 'UNK_0xefa4' codep=0x2214 parp=0xefa4
// ================================================
// 0xefa4: db 0x01 0x00 '  '
  
// ================================================
// 0xefa6: WORD 'UNK_0xefa8' codep=0x2214 parp=0xefa8
// ================================================
// 0xefa8: db 0x02 0x00 '  '
  
// ================================================
// 0xefaa: WORD 'UNK_0xefac' codep=0x2214 parp=0xefac
// ================================================
// 0xefac: db 0x03 0x00 '  '
  
// ================================================
// 0xefae: WORD 'UNK_0xefb0' codep=0x2214 parp=0xefb0
// ================================================
// 0xefb0: db 0x04 0x00 '  '
  
// ================================================
// 0xefb2: WORD 'UNK_0xefb4' codep=0x7420 parp=0xefb4
// ================================================
// 0xefb4: db 0x0d 0x0b 0x04 '   '
  
// ================================================
// 0xefb7: WORD 'UNK_0xefb9' codep=0x7420 parp=0xefb9
// ================================================
// 0xefb9: db 0x0d 0x0f 0x04 '   '
  
// ================================================
// 0xefbc: WORD 'UNK_0xefbe' codep=0x7420 parp=0xefbe
// ================================================
// 0xefbe: db 0x0d 0x13 0x01 '   '
  
// ================================================
// 0xefc1: WORD 'UNK_0xefc3' codep=0x7394 parp=0xefc3
// ================================================
// 0xefc3: db 0x0e 0x00 0x13 0x13 0xbd 0x6a '     j'
  
// ================================================
// 0xefc9: WORD 'UNK_0xefcb' codep=0x7420 parp=0xefcb
// ================================================
// 0xefcb: db 0x0e 0x0b 0x04 '   '
  
// ================================================
// 0xefce: WORD 'UNK_0xefd0' codep=0x7420 parp=0xefd0
// ================================================
// 0xefd0: db 0x0e 0x0f 0x02 '   '
  
// ================================================
// 0xefd3: WORD 'UNK_0xefd5' codep=0x224c parp=0xefd5
// ================================================

void UNK_0xefd5()
{
  *BANK >C+S();
  
}


// ================================================
// 0xefdb: WORD '!TFLAG' codep=0x224c parp=0xefe6
// ================================================

void !TFLAG()
{
  UNK_0xefd5();
  Push(1); UNK_0xefbe C!();
  ICLOSE();
  
}


// ================================================
// 0xeff2: WORD 'D@BALANCE' codep=0x224c parp=0xf000
// ================================================

void D@BALANCE()
{
  UNK_0xefd5();
  UNK_0xefb9 2@ ICLOSE();
  
}


// ================================================
// 0xf00a: WORD 'D!BALANCE' codep=0x224c parp=0xf018
// ================================================

void D!BALANCE()
{
  UNK_0xefd5();
  UNK_0xefb9 D!();
  ICLOSE();
  
}


// ================================================
// 0xf022: WORD '?BALANCE' codep=0x224c parp=0xf02f
// ================================================

void ?BALANCE()
{
  D@BALANCE();
  D>();
  0= 
}


// ================================================
// 0xf037: WORD 'INIT-BALANCE' codep=0x224c parp=0xf048
// ================================================

void INIT-BALANCE()
{
  UNK_0xefd5();
  UNK_0xefb4 2@ UNK_0xefb9 D!();
  ICLOSE();
  
}


// ================================================
// 0xf056: WORD 'TRANSACT' codep=0x224c parp=0xf063
// ================================================

void TRANSACT()
{
  UNK_0xefd5();
  UNK_0xefbe C@ 
  if (Pop() == 0) goto label642;
  IOPEN();
  Push(0x000e); SWAP Push(1); *CREATE();
  IFIRST();
  Push(0); Push(cc_9); Push(0); 
  do // (DO)
  {
  INEXT();
  ?FIRST();
  
  if (Pop() == 0) goto label643;
  1+ LEAVE 
  label643:
  
  } while(...); // (LOOP) 0xfff2
  0= 
  if (Pop() == 0) goto label644;
  IFIRST();
  IDELETE();
  
  label644:
  ILAST();
  COVER();
  SET-CUR();
  pp_STARDAT @ UNK_0xefb4 2@ UNK_0xefb9 2@ D-();
  ICLOSE();
  UNK_0xefcb D!();
  UNK_0xefd0 !();
  ICLOSE();
  UNK_0xefb9 2@ UNK_0xefb4 D!();
  Push(0); UNK_0xefbe C!();
  
  goto label645;
  
  label642:
  DROP 
  label645:
  ICLOSE();
  
}


// ================================================
// 0xf0d5: WORD 'INT%' codep=0x224c parp=0xf0de
// ================================================

void INT%()
{
  INIT-BALANCE();
  D@BALANCE();
  Push(0x000c); Push(0x0064); M*/();
  pp_STARDAT @ pp_PORTDAT @ - Push(0x012c); M*/();
  2DUP D0=();
  
  if (Pop() == 0) goto label641;
  2DROP 
  goto label646;
  
  label641:
  D@BALANCE();
  D+ D!BALANCE();
  !TFLAG();
  Push(cc_5); TRANSACT();
  pp_STARDAT @ pp_PORTDAT !();
  
  label646:
  
}


// ================================================
// 0xf120: WORD 'UNK_0xf122' codep=0x1d29 parp=0xf122
// ================================================
// 0xf122: db 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 'DDDDDDDDDDDDDDDDDDDD'
  
// ================================================
// 0xf136: WORD 'UNK_0xf138' codep=0x224c parp=0xf138
// ================================================

void UNK_0xf138()
{
  Push(0xfffc); pp_YBLT +!();
  pp_XBLT @ - pp_WBLT !();
  Push(1); pp_LBLT !();
  pp_UNK_0xf122 pp_ABLT !();
  BLT Push(cc_4); pp_YBLT +!();
  
}


// ================================================
// 0xf160: WORD 'UNK_0xf162' codep=0x224c parp=0xf162
// ================================================

void UNK_0xf162()
{
  UNK_0xefd0 @ Push(0x012c); /MOD Push(0x121f); + SWAP Push(0x001e); /MOD 1+ SWAP 1+ Push(0); <#();
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
// 0xf1a4: WORD 'UNK_0xf1a6' codep=0x224c parp=0xf1a6
// ================================================

void UNK_0xf1a6()
{
  UNK_0xefcb 2@ 2DUP 2DUP DABS();
  Push(0x423f); Pust(0x000f); DMIN();
  Push(cc_6); D.R();
  Push(0); Push(0); D<();
  
  if (Pop() == 0) goto label637;
  Push(0x000b); 
  goto label638;
  
  label637:
  Push(0x000d); 
  label638:
  >R OR NOT NOT R> * Push(0x0020); + EMIT 
}


// ================================================
// 0xf1e8: WORD 'UNK_0xf1ea' codep=0x224c parp=0xf1ea
// ================================================

void UNK_0xf1ea()
{
  UNK_0xefc3 $.();
  
}


// ================================================
// 0xf1f0: WORD 'UNK_0xf1f2' codep=0x224c parp=0xf1f2
// ================================================

void UNK_0xf1f2()
{
  Push(0x0032); Push(0x00be); Push(0x0032); Push(0x00b2); LLINE();
  Push(0x006f); Push(0x00be); Push(0x006f); Push(0x00b2); LLINE();
  Push(0x0034); Push(0x00c0); Push(0x006d); Push(0x00c0); LLINE();
  Push(0x0034); Push(0x00b0); Push(0x006d); Push(0x00b0); LLINE();
  Push(0x0032); Push(0x00c0); Push(cc_UNK_0xefa8); Push(0x0032); Push(0x00b2); Push(cc_UNK_0xefa8); Push(0x006d); Push(0x00c0); Push(cc_UNK_0xefa8); Push(0x006d); Push(0x00b2); Push(cc_UNK_0xefa8); Push(cc_4); UNK_0xef96();
  CTINIT();
  Push(0x0046); Push(0x00bc); POS.();
  >3FONT();
  
  (.") string 4 "BANK"
  
}


// ================================================
// 0xf27d: WORD 'UNK_0xf27f' codep=0x224c parp=0xf27f
// ================================================

void UNK_0xf27f()
{
  !COLOR();
  pp_XORMODE ON();
  Push(cc_3); Push(0); 
  do // (DO)
  {
  Push(1); I + Push(0x00c4); Push(1); I + Push(cc_3); LLINE();
  Push(0x009c); I + Push(0x00c4); Push(0x009c); I + Push(cc_3); LLINE();
  Push(0x009c); Push(1); I + Push(cc_3); Push(1); I + LLINE();
  Push(0x009c); Push(0x00c4); I + Push(cc_3); Push(0x00c4); I + LLINE();
  
  } while(...); // (LOOP) 0xffa6
  Push(cc_5); Push(0x00c2); Push(cc_5); Push(0x0012); LLINE();
  Push(0x0012); Push(0x0012); Push(cc_6); Push(0x0012); LLINE();
  Push(0x0012); Push(0x0011); Push(0x0012); Push(cc_5); LLINE();
  Push(0x0099); Push(cc_5); Push(0x0013); Push(cc_5); LLINE();
  Push(0x009a); Push(cc_5); Push(0x009a); Push(0x00c2); LLINE();
  Push(0x0099); Push(0x00c2); Push(cc_6); Push(0x00c2); LLINE();
  Push(2); Push(0x00c5); Push(cc_UNK_0xefa4); Push(0x009b); Push(0x00c5); Push(cc_UNK_0xefa0); Push(2); Push(cc_4); Push(cc_UNK_0xefa0); Push(0x009b); Push(cc_4); Push(cc_UNK_0xefa4); Push(0x0012); Push(cc_6); Push(cc_UNK_0xefac); Push(cc_5); Push(0x0013); Push(cc_UNK_0xefac); Push(0x0011); Push(0x0012); Push(cc_UNK_0xefac); Push(0x0012); Push(cc_6); Push(cc_UNK_0xefac); Push(0x0099); Push(cc_6); Push(cc_UNK_0xefb0); Push(0x0012); Push(cc_6); Push(cc_UNK_0xefac); Push(0x0099); Push(0x00c2); Push(cc_UNK_0xefac); Push(cc_5); Push(0x00c2); Push(cc_UNK_0xefb0); Push(0x000c); UNK_0xef96();
  Push(cc_6); Push(0x000f); DK-BLUE .1LOGO();
  
}


// ================================================
// 0xf3b9: WORD 'UNK_0xf3bb' codep=0x224c parp=0xf3bb
// ================================================

void UNK_0xf3bb()
{
  CTINIT();
  Push(0x0013); Push(0x00a7); POS.();
  
  (.") string 4 "DATE"
  Push(0x003e); pp_XBLT !();
  
  (.") string 12 "TRANSACTIONS"
  Push(0x0085); pp_XBLT !();
  
  (.") string 3 "AMT"
  Push(0x0013); Push(0x00a1); Push(0x0021); Push(0x00a1); LLINE();
  Push(0x003e); Push(0x00a1); Push(0x006c); Push(0x00a1); LLINE();
  Push(0x0085); Push(0x00a1); Push(0x0090); Push(0x00a1); LLINE();
  Push(0x0090); Push(0x00a3); LPLOT Push(0x0026); Push(0x002d); POS.();
  
  (.") string 22 "( INTEREST RATE: 12% )"
  Push(0x000f); Push(0x001d); POS.();
  
  (.") string 7 "BALANCE"
  Push(0x0077); UNK_0xf138();
  
}


// ================================================
// 0xf472: WORD 'UNK_0xf474' codep=0x224c parp=0xf474
// ================================================

void UNK_0xf474()
{
  DARK();
  DK-BLUE UNK_0xf27f();
  UNK_0xf1f2();
  UNK_0xf3bb();
  
}


// ================================================
// 0xf480: WORD 'UNK_0xf482' codep=0x224c parp=0xf482
// ================================================

void UNK_0xf482()
{
  pp_XORMODE 099();
  Push(0x000a); * Push(0x0095); SWAP - Push(cc_7); SWAP POS.();
  >1FONT();
  UNK_0xf162();
  Push(0x0032); pp_XBLT !();
  UNK_0xf1ea();
  Push(0x007c); UNK_0xf138();
  Push(0x007d); pp_XBLT !();
  UNK_0xf1a6();
  
}


// ================================================
// 0xf4ba: WORD 'UNK_0xf4bc' codep=0x224c parp=0xf4bc
// ================================================

void UNK_0xf4bc()
{
  Push(0x0079); Push(0x001d); POS.();
  >1FONT();
  UNK_0xefb4 2@ Push(cc_7); D.R();
  
}


// ================================================
// 0xf4d2: WORD 'UNK_0xf4d4' codep=0x224c parp=0xf4d4
// ================================================

void UNK_0xf4d4()
{
  UNK_0xefd5();
  IOPEN();
  Push(0); 
  label639:
  DUP UNK_0xf482();
  1+ INEXT();
  ?FIRST();
  
  if (Pop() == 0) goto label639;
  DROP ICLOSE();
  UNK_0xf4bc();
  ICLOSE();
  
}


// ================================================
// 0xf4f2: WORD '(U-BANK)' codep=0x224c parp=0xf4ff
// ================================================

void (U-BANK)()
{
  Push(cc_-1); tt_CONTEXT !();
  >HIDDEN();
  UNK_0xf474();
  UNK_0xf4d4();
  CTINIT();
  Push(0x0028); Push(0x000e); POS.();
  
  (.") string 22 "PRESS SPACEBAR TO EXIT"
  >DISPLA();
  SCR-RES();
  
  label640:
  XYSCAN();
  2DROP ?TRIG();
  
  if (Pop() == 0) goto label640;
  Push(cc_5); tt_CONTEXT !();
  
}

// 0xf546: db 0x42 0x41 0x4e 0x4b 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'BANK-VOC__________________ '
  