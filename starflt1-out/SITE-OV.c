// store offset = 0xee00
// overlay size   = 0x0760
// name = 'SITE-VOC_____________'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:            WLON bitfield: 0 0 0  codep:0x1d29 parp:0xee1d size:0x0004
// 1704:            ELON bitfield: 0 0 0  codep:0x1d29 parp:0xee2a size:0x0004
// 1705:            NLAT bitfield: 0 0 0  codep:0x1d29 parp:0xee37 size:0x0004
// 1706:            SLAT bitfield: 0 0 0  codep:0x1d29 parp:0xee44 size:0x0004
// 1707:         LTLNBLT bitfield: 0 0 0  codep:0x1d29 parp:0xee54 size:0x000c
// 1708:       .LATFRAME bitfield: 0 0 0  codep:0x224c parp:0xee6e size:0x0063
// 1709:      UNK_0xeed3 bitfield: 0 0 0  codep:0x224c parp:0xeed3 size:0x0048
// 1710:      UNK_0xef1d bitfield: 0 0 0  codep:0x1d29 parp:0xef1d size:0x0002
// 1711:            .LON bitfield: 0 0 0  codep:0x224c parp:0xef28 size:0x0072
// 1712:      UNK_0xef9c bitfield: 0 0 0  codep:0x1d29 parp:0xef9c size:0x0002
// 1713:      UNK_0xefa0 bitfield: 0 0 0  codep:0x224c parp:0xefa0 size:0x0072
// 1714:      UNK_0xf014 bitfield: 0 0 0  codep:0x224c parp:0xf014 size:0x002e
// 1715:       (|REGION) bitfield: 0 0 0  codep:0xf050 parp:0xf050 size:0x0068
// 1716:            |EGA bitfield: 0 0 0  codep:0xf0c1 parp:0xf0c1 size:0x0034
// 1717:         |REGION bitfield: 0 0 0  codep:0x224c parp:0xf101 size:0x0016
// 1718:      UNK_0xf119 bitfield: 0 0 0  codep:0x224c parp:0xf119 size:0x0006
// 1719:      UNK_0xf121 bitfield: 0 0 0  codep:0x224c parp:0xf121 size:0x000c
// 1720:      UNK_0xf12f bitfield: 0 0 0  codep:0x224c parp:0xf12f size:0x0028
// 1721:      UNK_0xf159 bitfield: 0 0 0  codep:0x224c parp:0xf159 size:0x0026
// 1722:      UNK_0xf181 bitfield: 0 0 0  codep:0x224c parp:0xf181 size:0x0042
// 1723:          >XHAIR bitfield: 0 0 0  codep:0x224c parp:0xf1ce size:0x003c
// 1724:          <XHAIR bitfield: 0 0 0  codep:0x224c parp:0xf215 size:0x0022
// 1725:      UNK_0xf239 bitfield: 0 0 0  codep:0x224c parp:0xf239 size:0x0026
// 1726:      UNK_0xf261 bitfield: 0 0 0  codep:0x1d29 parp:0xf261 size:0x0029
// 1727:      UNK_0xf28c bitfield: 0 0 0  codep:0x1d29 parp:0xf28c size:0x0002
// 1728:      UNK_0xf290 bitfield: 0 0 0  codep:0x224c parp:0xf290 size:0x007f
// 1729:      UNK_0xf311 bitfield: 0 0 0  codep:0x224c parp:0xf311 size:0x0076
// 1730:      UNK_0xf389 bitfield: 0 0 0  codep:0x224c parp:0xf389 size:0x007a
// 1731:      UNK_0xf405 bitfield: 0 0 0  codep:0x224c parp:0xf405 size:0x0012
// 1732:         GETSITE bitfield: 0 0 0  codep:0x224c parp:0xf423 size:0x009e
// 1733:       .MERCATOR bitfield: 0 0 0  codep:0x224c parp:0xf4cf size:0x005c
// 1734:         GETSITE bitfield: 0 0 0  codep:0x224c parp:0xf537 size:0x0029

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char WLON[4] = {0x6b, 0x8c, 0x00, 0xf5};
unsigned char ELON[4] = {0x39, 0xf4, 0x00, 0x0f};
unsigned char NLAT[4] = {0xb9, 0x9d, 0x00, 0x90};
unsigned char SLAT[4] = {0xf1, 0x78, 0x00, 0xe0};
unsigned char LTLNBLT[12] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
unsigned char UNK_0xef1d[2] = {0x80, 0x04};
unsigned char UNK_0xef9c[2] = {0xe0, 0x01};
unsigned char UNK_0xf261[41] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x20, 0x72, 0x66, 0x67, 0x32, 0x32, 0x73, 0x65, 0x70, 0x38, 0x37, 0x29, 0x22, 0x14, 0x38, 0x32, 0x34, 0x15, 0x00, 0x14, 0x22, 0x16, 0x00, 0x14, 0x22, 0x17, 0x00, 0x14, 0x22, 0x18, 0x00, 0x14};
unsigned char UNK_0xf28c[2] = {0xa4, 0x4a};



// 0xee12: db 0x75 0x00 'u '
  
// ================================================
// 0xee14: WORD 'WLON' codep=0x1d29 parp=0xee1d
// ================================================
// 0xee1d: db 0x6b 0x8c 0x00 0xf5 'k   '
  
// ================================================
// 0xee21: WORD 'ELON' codep=0x1d29 parp=0xee2a
// ================================================
// 0xee2a: db 0x39 0xf4 0x00 0x0f '9   '
  
// ================================================
// 0xee2e: WORD 'NLAT' codep=0x1d29 parp=0xee37
// ================================================
// 0xee37: db 0xb9 0x9d 0x00 0x90 '    '
  
// ================================================
// 0xee3b: WORD 'SLAT' codep=0x1d29 parp=0xee44
// ================================================
// 0xee44: db 0xf1 0x78 0x00 0xe0 ' x  '
  
// ================================================
// 0xee48: WORD 'LTLNBLT' codep=0x1d29 parp=0xee54
// ================================================
// 0xee54: db 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff '            '
  
// ================================================
// 0xee60: WORD '.LATFRAME' codep=0x224c parp=0xee6e
// ================================================

void .LATFRAME()
{
  Push(0x00c5); Push(0x0053); Push(0x007e); Push(0x009c); GREY1 POLY-WI();
  CTINIT();
  BLACK !COLOR();
  Push(0x0066); Push(0x008a); POS.();
  
  (.") string 3 "LAT"
  Push(0x007d); pp_XBLT !();
  
  (.") string 4 "LONG"
  Push(0x00c1); Push(0x005f); Push(0x008e); Push(0x0090); BLACK POLY-WI();
  Push(0x00c1); Push(0x0093); Push(0x008e); Push(0x0098); BLACK POLY-WI();
  
}


// ================================================
// 0xeed1: WORD 'UNK_0xeed3' codep=0x224c parp=0xeed3
// ================================================

void UNK_0xeed3()
{
  @CRS();
  CURSORS();
  pp_ABLT !();
  Push(cc_4); pp_WBLT !();
  Push(cc_6); pp_LBLT !();
  pp_XORMODE OFF();
  Push(cc_8); Push(0); 
  do // (DO)
  {
  pp_CMAP I Push(cc_8); * + C@ !COLOR();
  Push(0x0094); Push(0x0095); I Push(cc_6); * + POS.();
  BLT();
  
  } while(...); // (LOOP) 0xffdc
  !CRS();
  
}


// ================================================
// 0xef1b: WORD 'UNK_0xef1d' codep=0x1d29 parp=0xef1d
// ================================================
// 0xef1d: db 0x80 0x04 '  '
  
// ================================================
// 0xef1f: WORD '.LON' codep=0x224c parp=0xef28
// ================================================

void .LON()
{
  pp_XABS @ Push(0x0480); - Push(0x000a); Push(0x0040); */();
  pp_XORMODE OFF();
  Push(0x007c); Push(0x0083); POS.();
  DUP 0< 
  if (Pop() == 0) goto label477;
  NEGATE Push(0); Push(cc_3); D.R();
  pp_WLON pp_ABLT !();
  Push(cc_5); pp_WBLT !();
  BLT();
  
  goto label479;
  
  label477:
  DUP 0= 
  if (Pop() == 0) goto label478;
  Push(0x0082); Push(0x0083); POS.();
  .();
  
  goto label479;
  
  label478:
  Push(0); Push(cc_3); D.R();
  pp_ELON pp_ABLT !();
  Push(cc_5); pp_WBLT !();
  BLT();
  
  label479:
  
}


// ================================================
// 0xef9a: WORD 'UNK_0xef9c' codep=0x1d29 parp=0xef9c
// ================================================
// 0xef9c: db 0xe0 0x01 '  '
  
// ================================================
// 0xef9e: WORD 'UNK_0xefa0' codep=0x224c parp=0xefa0
// ================================================

void UNK_0xefa0()
{
  pp_YABS @ Push(0x01e0); - Push(0x000a); Push(0x0035); */();
  pp_XORMODE OFF();
  Push(0x0066); Push(0x0083); POS.();
  DUP 0< 
  if (Pop() == 0) goto label484;
  NEGATE Push(0); Push(2); D.R();
  pp_SLAT pp_ABLT !();
  Push(cc_4); pp_WBLT !();
  BLT();
  
  goto label486;
  
  label484:
  DUP 0= 
  if (Pop() == 0) goto label485;
  Push(0x006a); Push(0x0083); POS.();
  .();
  
  goto label486;
  
  label485:
  Push(0); Push(2); D.R();
  pp_NLAT pp_ABLT !();
  Push(cc_4); pp_WBLT !();
  BLT();
  
  label486:
  
}


// ================================================
// 0xf012: WORD 'UNK_0xf014' codep=0x224c parp=0xf014
// ================================================

void UNK_0xf014()
{
  pp_PLHI @ Push(cc_-1); = 
  if (Pop() == 0) goto label483;
  Push(0x01e0); pp_UNK_0xef9c !();
  Push(0x0480); pp_UNK_0xef1d !();
  
  label483:
  pp_UNK_0xef1d @ pp_XABS !();
  pp_UNK_0xef9c @ pp_YABS !();
  
}


// ================================================
// 0xf042: WORD '(|REGION)' codep=0xf050 parp=0xf050
// ================================================
// 0xf050: pop    word ptr [561C]
// 0xf054: pop    cx
// 0xf055: push   es
// 0xf056: mov    es,cx
// 0xf058: push   si
// 0xf059: push   di
// 0xf05a: push   bp
// 0xf05b: push   ds
// 0xf05c: mov    dx,[5892]
// 0xf060: shr    dx,1
// 0xf062: shr    dx,1
// 0xf064: inc    dx
// 0xf065: inc    dx
// 0xf066: mov    bp,[586E]
// 0xf06a: shr    bp,1
// 0xf06c: xor    di,di
// 0xf06e: mov    ax,[5887]
// 0xf072: mov    cx,ax
// 0xf074: mov    ax,cx
// 0xf076: pop    ds
// 0xf077: push   ds
// 0xf078: mov    bx,[5863]
// 0xf07c: sub    bx,cx
// 0xf07e: inc    bx
// 0xf07f: shl    bx,1
// 0xf081: add    bx,[563A]
// 0xf085: mov    si,[bx]
// 0xf087: add    si,bp
// 0xf089: mov    cx,dx
// 0xf08b: mov    bx,[561C]
// 0xf08f: push   word ptr [5648]
// 0xf093: pop    ds
// 0xf094: or     bx,bx
// 0xf096: jz     F09E
// 0xf098: push   ds
// 0xf099: push   es
// 0xf09a: pop    ds
// 0xf09b: pop    es
// 0xf09c: xchg   si,di
// 0xf09e: repz   
// 0xf09f: movsw
// 0xf0a0: mov    cx,ax
// 0xf0a2: or     bx,bx
// 0xf0a4: jz     F0AC
// 0xf0a6: push   ds
// 0xf0a7: push   es
// 0xf0a8: pop    ds
// 0xf0a9: pop    es
// 0xf0aa: xchg   si,di
// 0xf0ac: loop   F074
// 0xf0ae: pop    ds
// 0xf0af: pop    bp
// 0xf0b0: pop    di
// 0xf0b1: pop    si
// 0xf0b2: pop    es
// 0xf0b3: lodsw
// 0xf0b4: mov    bx,ax
// 0xf0b6: jmp    word ptr [bx]

// ================================================
// 0xf0b8: WORD '|EGA' codep=0xf0c1 parp=0xf0c1
// ================================================
// 0xf0c1: pop    cx
// 0xf0c2: push   ds
// 0xf0c3: push   es
// 0xf0c4: push   di
// 0xf0c5: push   si
// 0xf0c6: mov    ax,[55E6]
// 0xf0ca: mov    dx,[55D8]
// 0xf0ce: mov    bx,00C5
// 0xf0d1: shl    bx,1
// 0xf0d3: add    bx,[563A]
// 0xf0d7: mov    si,[bx]
// 0xf0d9: mov    di,si
// 0xf0db: test   cx,0001
// 0xf0df: jnz    F0E2
// 0xf0e1: xchg   ax,dx
// 0xf0e2: mov    es,ax
// 0xf0e4: mov    ds,dx
// 0xf0e6: mov    cx,0A28
// 0xf0e9: call   8E32
// 0xf0ec: pop    si
// 0xf0ed: pop    di
// 0xf0ee: pop    es
// 0xf0ef: pop    ds
// 0xf0f0: lodsw
// 0xf0f1: mov    bx,ax
// 0xf0f3: jmp    word ptr [bx]

// ================================================
// 0xf0f5: WORD '|REGION' codep=0x224c parp=0xf101
// ================================================

void |REGION()
{
  pp_?EGA @ 
  if (Pop() == 0) goto label474;
  SWAP DROP |EGA 
  goto label475;
  
  label474:
  (|REGION) 
  label475:
  
}


// ================================================
// 0xf117: WORD 'UNK_0xf119' codep=0x224c parp=0xf119
// ================================================

void UNK_0xf119()
{
  pp_HBUF-SE @ 
}


// ================================================
// 0xf11f: WORD 'UNK_0xf121' codep=0x224c parp=0xf121
// ================================================

void UNK_0xf121()
{
  pp_HBUF-SE @ Push(0x0014); + 
}


// ================================================
// 0xf12d: WORD 'UNK_0xf12f' codep=0x224c parp=0xf12f
// ================================================

void UNK_0xf12f()
{
  Push(0x0060); pp_YABS @ Push(0x0028); / 2* Push(0x0091); + POS.();
  Push(0x0030); pp_WBLT !();
  Push(2); pp_LBLT !();
  
}


// ================================================
// 0xf157: WORD 'UNK_0xf159' codep=0x224c parp=0xf159
// ================================================

void UNK_0xf159()
{
  pp_XABS @ Push(0x0030); / Push(0x0060); + Push(0x00bf); POS.();
  Push(1); pp_WBLT !();
  Push(0x0030); pp_LBLT !();
  
}


// ================================================
// 0xf17f: WORD 'UNK_0xf181' codep=0x224c parp=0xf181
// ================================================

void UNK_0xf181()
{
  UNK_0xf159();
  pp_XBLT @ Push(0x00c1); OVER Push(0x0091); LLINE UNK_0xf12f();
  pp_YBLT @ DUP >R Push(0x005f); SWAP DUP Push(0x0090); SWAP LLINE R> 1+ Push(0x005f); SWAP DUP Push(0x0090); SWAP LLINE 
}


// ================================================
// 0xf1c3: WORD '>XHAIR' codep=0x224c parp=0xf1ce
// ================================================

void >XHAIR()
{
  pp_XORMODE OFF();
  BLACK !COLOR();
  @DS pp_BLTSEG !();
  pp_LTLNBLT pp_ABLT !();
  pp_?EGA @ 
  if (Pop() == 0) goto label480;
  Push(0); |EGA UNK_0xf181();
  
  goto label481;
  
  label480:
  UNK_0xf12f();
  UNK_0xf119();
  Push(0); |REGION();
  BLT();
  UNK_0xf159();
  UNK_0xf121();
  Push(0); |REGION();
  BLT();
  
  label481:
  
}


// ================================================
// 0xf20a: WORD '<XHAIR' codep=0x224c parp=0xf215
// ================================================

void <XHAIR()
{
  pp_?EGA @ 
  if (Pop() == 0) goto label473;
  Push(1); |EGA 
  goto label476;
  
  label473:
  UNK_0xf159();
  UNK_0xf121();
  Push(1); |REGION();
  UNK_0xf12f();
  UNK_0xf119();
  Push(1); |REGION();
  
  label476:
  
}


// ================================================
// 0xf237: WORD 'UNK_0xf239' codep=0x224c parp=0xf239
// ================================================

void UNK_0xf239()
{
  SWAP Push(0x0030); Push(0x0900); */();
  Push(0x0060); + SWAP Push(0x0030); Push(0x03c0); */();
  Push(0x0090); + 
}


// ================================================
// 0xf25f: WORD 'UNK_0xf261' codep=0x1d29 parp=0xf261
// ================================================
// 0xf261: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x20 0x72 0x66 0x67 0x32 0x32 0x73 0x65 0x70 0x38 0x37 0x29 0x22 0x14 0x38 0x32 0x34 0x15 0x00 0x14 0x22 0x16 0x00 0x14 0x22 0x17 0x00 0x14 0x22 0x18 0x00 0x14 ':  ALLOT  rfg22sep87)" 824   "   "   "   '
  
// ================================================
// 0xf28a: WORD 'UNK_0xf28c' codep=0x1d29 parp=0xf28c
// ================================================
// 0xf28c: db 0xa4 0x4a ' J'
  
// ================================================
// 0xf28e: WORD 'UNK_0xf290' codep=0x224c parp=0xf290
// ================================================

void UNK_0xf290()
{
  CTINIT();
  
  UNK_0x3f39("THE RED CYLINDER IS FLASHING");
  .TTY();
  Push(0x0050); Push(0); 
  do // (DO)
  {
  Push(0x0010); Push(0x000c); 
  do // (DO)
  {
  I 16* I + DUP Push(0x00fe); < * !COLOR();
  pp_UNK_0xf261 COUNT();
  Push(cc_4); * OVER + SWAP 
  do // (DO)
  {
  I 2@ 2DUP LPLOT 1- LPLOT Push(cc_4); 
  } while(...); // (+LOOP) 0xfff0
  Push(cc_5); MS();
  
  } while(...); // (LOOP) 0xffc4
  Push(0x0014); MS();
  
  } while(...); // (LOOP) 0xffb0
  
}


// ================================================
// 0xf30f: WORD 'UNK_0xf311' codep=0x224c parp=0xf311
// ================================================

void UNK_0xf311()
{
  pp_(PLANET @>C+S();
  @INST-S();
  Push(0x0017); = 
  if (Pop() == 0) goto label493;
  pp_UNK_0xf28c pp_ABLT !();
  Push(cc_3); pp_WBLT !();
  Push(cc_5); pp_LBLT !();
  pp_XORMODE OFF();
  Push(0x05a0); Push(0x02da); UNK_0xf239();
  SWAP 1- SWAP 2+ POS.();
  Push(0x0050); Push(0); 
  do // (DO)
  {
  Push(0x0010); Push(0x000c); 
  do // (DO)
  {
  I 16* I + DUP Push(0x00fe); < * !COLOR();
  BLT();
  Push(cc_5); MS();
  
  } while(...); // (LOOP) 0xffe4
  Push(0x0014); MS();
  
  } while(...); // (LOOP) 0xffd0
  
  label493:
  
}


// ================================================
// 0xf387: WORD 'UNK_0xf389' codep=0x224c parp=0xf389
// ================================================

void UNK_0xf389()
{
  pp_(PLANET @>C+S();
  @INST-S();
  Push(0x0017); = NOT ?CHILD();
  AND 
  if (Pop() == 0) goto label494;
  IOPEN();
  pp_UNK_0xf261 Push(0x0029); Push(0); FILL();
  
  label496:
  @INST-C();
  Push(0x001b); Push(0x001d); WITHIN();
  INST-X 2@ D0=();
  NOT AND 
  if (Pop() == 0) goto label495;
  INST-X 2@ SWAP UNK_0xf239();
  pp_UNK_0xf261 COUNT();
  Push(cc_4); * + D!();
  Push(1); pp_UNK_0xf261 +!();
  
  label495:
  INEXT();
  ?FIRST();
  pp_UNK_0xf261 C@ Push(0x000a); = OR 
  if (Pop() == 0) goto label496;
  CDROP();
  pp_UNK_0xf261 C@ 
  if (Pop() == 0) goto label494;
  UNK_0xf290();
  
  label494:
  ICLOSE();
  
}


// ================================================
// 0xf403: WORD 'UNK_0xf405' codep=0x224c parp=0xf405
// ================================================

void UNK_0xf405()
{
  Push(0xbdd8); MODULE();
  pp_CONTEXT @ Push(1); = AND 
}


// ================================================
// 0xf417: WORD 'GETSITE' codep=0x224c parp=0xf423
// ================================================

void GETSITE()
{
  Push(cc_8); pp_#AUX !();
  >DISPLA();
  UNK_0xf014();
  CTINIT();
  UNK_0xefa0();
  .LON();
  >XHAIR();
  
  label488:
  XYSCAN();
  Push(0x1388); pp_KEYTIME 2@ pp_LKEYTIM 2@ D-();
  DROP / Push(cc_5); MAX();
  Push(0x00c8); MIN();
  >R I * SWAP R> * 2DUP OR 
  if (Pop() == 0) goto label487;
  GREY1 !COLOR();
  UNK_0xefa0();
  .LON();
  <XHAIR();
  pp_YABS @ + Push(0); MAX();
  Push(0x03bf); MIN();
  pp_YABS !();
  pp_XABS @ + Push(0); MAX();
  Push(0x08ff); MIN();
  pp_XABS !();
  >XHAIR();
  WHITE !COLOR();
  UNK_0xefa0();
  .LON();
  
  goto label489;
  
  label487:
  2DROP 
  label489:
  ?TRIG();
  
  if (Pop() == 0) goto label488;
  pp_XABS @ pp_UNK_0xef1d !();
  pp_YABS @ pp_UNK_0xef9c !();
  
}


// ================================================
// 0xf4c1: WORD '.MERCATOR' codep=0x224c parp=0xf4cf
// ================================================

void .MERCATOR()
{
  Push(cc_4); pp_#AUX !();
  UNK_0xf014();
  >DISPLA();
  .LATFRAME();
  UNK_0xeed3();
  Push(0x0060); pp_XLLDEST !();
  Push(0x0090); pp_YLLDEST !();
  Push(0x9880); pp_'.CELL !();
  Push(0x6a99); SETLARR();
  FULLARR();
  SETREGI();
  .REGION();
  pp_CONTEXT @ 0= 
  if (Pop() == 0) goto label490;
  CTINIT();
  UNK_0xefa0();
  .LON();
  
  label490:
  Push(0x000b); UNK_0xf405();
  
  if (Pop() == 0) goto label491;
  UNK_0xf389();
  
  label491:
  Push(2); UNK_0xf405();
  
  if (Pop() == 0) goto label492;
  UNK_0xf311();
  
  label492:
  CTINIT();
  
}


// ================================================
// 0xf52b: WORD 'GETSITE' codep=0x224c parp=0xf537
// ================================================

void GETSITE()
{
  pp_#AUX @ Push(cc_4); = NOT 
  if (Pop() == 0) goto label482;
  .MERCATOR();
  
  label482:
  GETSITE();
  
}

// 0xf54b: db 0x53 0x49 0x54 0x45 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'SITE-VOC_____________ '
  