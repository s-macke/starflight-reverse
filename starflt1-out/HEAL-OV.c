// store offset = 0xf090
// overlay size   = 0x04d0
// name = 'HEALER__________________________Y ----------------( rf'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xf0a6 bitfield: 0 0 0  codep:0x224c parp:0xf0a6 size:0x0014
// 1704:      UNK_0xf0bc bitfield: 0 0 0  codep:0x224c parp:0xf0bc size:0x0010
// 1705:      UNK_0xf0ce bitfield: 0 0 0  codep:0x224c parp:0xf0ce size:0x0020
// 1706:      UNK_0xf0f0 bitfield: 0 0 0  codep:0x744d parp:0xf0f0 size:0x0003
// 1707:      UNK_0xf0f5 bitfield: 0 0 0  codep:0x744d parp:0xf0f5 size:0x0003
// 1708:      UNK_0xf0fa bitfield: 0 0 0  codep:0x744d parp:0xf0fa size:0x0003
// 1709:      UNK_0xf0ff bitfield: 0 0 0  codep:0x744d parp:0xf0ff size:0x0003
// 1710:      UNK_0xf104 bitfield: 0 0 0  codep:0x744d parp:0xf104 size:0x0012
// 1711:      UNK_0xf118 bitfield: 0 0 0  codep:0x744d parp:0xf118 size:0x0003
// 1712:      UNK_0xf11d bitfield: 0 0 0  codep:0x744d parp:0xf11d size:0x0003
// 1713:      UNK_0xf122 bitfield: 0 0 0  codep:0x744d parp:0xf122 size:0x000b
// 1714:      UNK_0xf12f bitfield: 0 0 0  codep:0x224c parp:0xf12f size:0x0008
// 1715:      UNK_0xf139 bitfield: 0 0 0  codep:0x224c parp:0xf139 size:0x000c
// 1716:      UNK_0xf147 bitfield: 0 0 0  codep:0x224c parp:0xf147 size:0x003a
// 1717:      UNK_0xf183 bitfield: 0 0 0  codep:0x224c parp:0xf183 size:0x0074
// 1718:          ROLE-C bitfield: 0 0 0  codep:0x224c parp:0xf202 size:0x0038
// 1719:      UNK_0xf23c bitfield: 0 0 0  codep:0x224c parp:0xf23c size:0x0042
// 1720:      UNK_0xf280 bitfield: 0 0 0  codep:0x224c parp:0xf280 size:0x0010
// 1721:      UNK_0xf292 bitfield: 0 0 0  codep:0x224c parp:0xf292 size:0x0020
// 1722:      UNK_0xf2b4 bitfield: 0 0 0  codep:0x224c parp:0xf2b4 size:0x0017
// 1723:      UNK_0xf2cd bitfield: 0 0 0  codep:0x224c parp:0xf2cd size:0x0086
// 1724:           .VITS bitfield: 0 0 0  codep:0x224c parp:0xf35d size:0x0094
// 1725:          >SKILL bitfield: 0 0 0  codep:0x4a4f parp:0xf3fc size:0x0018
// 1726:      UNK_0xf416 bitfield: 0 0 0  codep:0x224c parp:0xf416 size:0x000e
// 1727:      UNK_0xf426 bitfield: 0 0 0  codep:0x1d29 parp:0xf426 size:0x0002
// 1728:      UNK_0xf42a bitfield: 0 0 0  codep:0x1d29 parp:0xf42a size:0x0003
// 1729:      UNK_0xf42f bitfield: 0 0 0  codep:0x224c parp:0xf42f size:0x0058
// 1730:      UNK_0xf489 bitfield: 0 0 0  codep:0x224c parp:0xf489 size:0x000c
// 1731:      UNK_0xf497 bitfield: 0 0 0  codep:0x224c parp:0xf497 size:0x0028
// 1732:      UNK_0xf4c1 bitfield: 0 0 0  codep:0x224c parp:0xf4c1 size:0x004a
// 1733:           OBITS bitfield: 0 0 0  codep:0x224c parp:0xf515 size:0x0006
// 1734:            HEAL bitfield: 0 0 0  codep:0x224c parp:0xf524 size:0x003c

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf426[2] = {0x3a, 0x20};
unsigned char UNK_0xf42a[3] = {0x3a, 0x20, 0x05};



// 0xf0a2: db 0x4a 0x00 'J '
  
// ================================================
// 0xf0a4: WORD 'UNK_0xf0a6' codep=0x224c parp=0xf0a6
// ================================================

void UNK_0xf0a6()
{
  Push(0x0083); Push(0x0053); Push(0x0009); Push(0x0012); WINDOW();
  
}


// ================================================
// 0xf0ba: WORD 'UNK_0xf0bc' codep=0x224c parp=0xf0bc
// ================================================

void UNK_0xf0bc()
{
  Push(0x0040); Push(cc_3); Push(cc_7); Push(0x0026); WINDOW();
  
}


// ================================================
// 0xf0cc: WORD 'UNK_0xf0ce' codep=0x224c parp=0xf0ce
// ================================================

void UNK_0xf0ce()
{
  SWAP Push(cc_4); * pp_WLEFT @ 2+ + pp_WTOP @ 1- ROT Push(cc_7); * - POS.();
  
}


// ================================================
// 0xf0ee: WORD 'UNK_0xf0f0' codep=0x744d parp=0xf0f0
// ================================================
// 0xf0f0: db 0x11 0x11 0x03 '   '
  
// ================================================
// 0xf0f3: WORD 'UNK_0xf0f5' codep=0x744d parp=0xf0f5
// ================================================
// 0xf0f5: db 0x11 0x14 0x03 '   '
  
// ================================================
// 0xf0f8: WORD 'UNK_0xf0fa' codep=0x744d parp=0xf0fa
// ================================================
// 0xf0fa: db 0x11 0x20 0x03 '   '
  
// ================================================
// 0xf0fd: WORD 'UNK_0xf0ff' codep=0x744d parp=0xf0ff
// ================================================
// 0xf0ff: db 0x10 0x0b 0x0f '   '
  
// ================================================
// 0xf102: WORD 'UNK_0xf104' codep=0x744d parp=0xf104
// ================================================
// 0xf104: db 0x10 0x1a 0x01 0x4d 0x74 0x10 0x1b 0x01 0x4d 0x74 0x10 0x1c 0x01 0x4d 0x74 0x10 0x1d 0x01 '   Mt   Mt   Mt   '
  
// ================================================
// 0xf116: WORD 'UNK_0xf118' codep=0x744d parp=0xf118
// ================================================
// 0xf118: db 0x10 0x1e 0x01 '   '
  
// ================================================
// 0xf11b: WORD 'UNK_0xf11d' codep=0x744d parp=0xf11d
// ================================================
// 0xf11d: db 0x10 0x1f 0x01 '   '
  
// ================================================
// 0xf120: WORD 'UNK_0xf122' codep=0x744d parp=0xf122
// ================================================
// 0xf122: db 0x10 0x20 0x02 0xea 0x73 0x10 0x13 0x01 0x14 0x89 0x64 '    s     d'
  
// ================================================
// 0xf12d: WORD 'UNK_0xf12f' codep=0x224c parp=0xf12f
// ================================================

void UNK_0xf12f()
{
  3*();
  pp_ROSTER + 
}


// ================================================
// 0xf137: WORD 'UNK_0xf139' codep=0x224c parp=0xf139
// ================================================

void UNK_0xf139()
{
  pp_ROSTER Push(0x0012); Push(0); FILL();
  
}


// ================================================
// 0xf145: WORD 'UNK_0xf147' codep=0x224c parp=0xf147
// ================================================

void UNK_0xf147()
{
  Push(cc_6); Push(0); 
  do // (DO)
  {
  I UNK_0xf12f();
  1.5@ 2OVER();
  D=();
  
  if (Pop() == 0) goto label1631;
  LEAVE 
  goto label1632;
  
  label1631:
  I UNK_0xf12f();
  1.5@ OR 0= 
  if (Pop() == 0) goto label1632;
  2DUP I UNK_0xf12f();
  <1.5!> LEAVE 
  label1632:
  
  } while(...); // (LOOP) 0xffd2
  2DROP 
}


// ================================================
// 0xf181: WORD 'UNK_0xf183' codep=0x224c parp=0xf183
// ================================================

void UNK_0xf183()
{
  pp_ROSTER 1.5@ NULL D=();
  pp_CONTEXT @ 0= AND 
  if (Pop() == 0) goto label1630;
  UNK_0xf0bc();
  >DISPLA();
  pp_WTOP @ pp_WLEFT @ pp_WBOTTOM @ 1- pp_WRIGHT @ 1+ YELLOW POLY-WI();
  RED !COLOR();
  Push(1); Push(1); UNK_0xf0ce();
  GCR();
  
  (.") string 18 "!!CREW DECEASED!! "
  GCR();
  
  (.") string 14 "**GAME OVER** "
  Push(0x09c4); MS();
  'KEY();
  DROP KEY();
  BYE();
  
  label1630:
  
}


// ================================================
// 0xf1f7: WORD 'ROLE-C' codep=0x224c parp=0xf202
// ================================================

void ROLE-C()
{
  UNK_0xf139();
  *ASSIGN >C+S();
  INST-SI Push(0x0011); + Push(cc_6); Push(0); 
  do // (DO)
  {
  I 3*();
  OVER + @>C+S();
  UNK_0xf11d C@ 
  if (Pop() == 0) goto label1629;
  CI UNK_0xf147();
  
  label1629:
  ICLOSE();
  
  } while(...); // (LOOP) 0xffe6
  DROP ICLOSE();
  UNK_0xf183();
  
}


// ================================================
// 0xf23a: WORD 'UNK_0xf23c' codep=0x224c parp=0xf23c
// ================================================

void UNK_0xf23c()
{
  >R Push(1); pp_ROSTER Push(cc_6); Push(0); 
  do // (DO)
  {
  I 3*();
  OVER + 1.5@ 2DUP OR 
  if (Pop() == 0) goto label1638;
  >C+S();
  UNK_0xf11d C@ ICLOSE();
  J = 
  goto label1639;
  
  label1638:
  2DROP Push(1); 
  label1639:
  ROT AND SWAP 
  } while(...); // (LOOP) 0xffd2
  R> 2DROP 
}


// ================================================
// 0xf27e: WORD 'UNK_0xf280' codep=0x224c parp=0xf280
// ================================================

void UNK_0xf280()
{
  Push(0x0064); UNK_0xf23c();
  DUP 0= pp_?HEAL !();
  
}


// ================================================
// 0xf290: WORD 'UNK_0xf292' codep=0x224c parp=0xf292
// ================================================

void UNK_0xf292()
{
  *ASSIGN >C SET-CUR();
  UNK_0xf0fa @>C+S();
  Push(0x0104); UNK_0xf118 C@ - Push(0x00fa); * CDROP();
  ICLOSE();
  
}


// ================================================
// 0xf2b2: WORD 'UNK_0xf2b4' codep=0x224c parp=0xf2b4
// ================================================

void UNK_0xf2b4()
{
  CTINIT();
  UNK_0xf0ff COUNT();
  .TTY();
  
  (.") string 10 " IS HEALED"
  
}


// ================================================
// 0xf2cb: WORD 'UNK_0xf2cd' codep=0x224c parp=0xf2cd
// ================================================

void UNK_0xf2cd()
{
  ROLE-C();
  UNK_0xf280();
  NOT 
  if (Pop() == 0) goto label1640;
  Push(cc_6); Push(0); 
  do // (DO)
  {
  I UNK_0xf12f();
  1.5@ 2DUP OR 
  if (Pop() == 0) goto label1641;
  >C+S();
  UNK_0xf11d C@ ?DUP 
  if (Pop() == 0) goto label1642;
  UNK_0xf122 C@ Push(cc_4); AND 0= 0= pp_CONTEXT @ 0> AND 
  if (Pop() == 0) goto label1644;
  2+ DUP Push(0x0064); < NOT 
  if (Pop() == 0) goto label1645;
  UNK_0xf122 C@ Push(0x00fb); AND UNK_0xf122 C!();
  UNK_0xf2b4();
  
  label1645:
  
  goto label1646;
  
  label1644:
  1+ 
  label1646:
  Push(0x0064); MIN();
  UNK_0xf11d C!();
  
  label1642:
  ICLOSE();
  
  goto label1643;
  
  label1641:
  2DROP 
  label1643:
  
  } while(...); // (LOOP) 0xff94
  
  label1640:
  UNK_0xf292();
  pp_HEALTI !();
  
}


// ================================================
// 0xf353: WORD '.VITS' codep=0x224c parp=0xf35d
// ================================================

void .VITS()
{
  pp_XORMODE @ >R pp_XORMODE OFF();
  pp_COLOR @ >R WHITE !COLOR();
  UNK_0xf0a6();
  Push(0); Push(1); UNK_0xf0ce();
  Push(cc_6); Push(0); 
  do // (DO)
  {
  GCR();
  pp_WCHARS @ BLACK POLY-ER();
  I UNK_0xf12f();
  1.5@ 2DUP >C+S();
  OR 
  if (Pop() == 0) goto label1627;
  Push(1); pp_XBLT +!();
  UNK_0xf0ff $.();
  Push(0x000e); UNK_0xf0ff C@ - ?DUP 
  if (Pop() == 0) goto label1628;
  Push(0); 
  do // (DO)
  {
  
  (.") string 1 "."
  
  } while(...); // (LOOP) 0xfffa
  
  label1628:
  pp_XBLT @ Push(cc_-1); pp_XBLT +!();
  Push(cc_4); BLACK POLY-ER();
  pp_XBLT !();
  UNK_0xf11d C@ Push(cc_3); .R();
  
  (.") string 1 "%"
  
  label1627:
  ICLOSE();
  
  } while(...); // (LOOP) 0xff9c
  R> !COLOR();
  R> pp_XORMODE !();
  
}


// ================================================
// 0xf3f1: WORD '>SKILL' codep=0x4a4f parp=0xf3fc
// ================================================
// 0xf3fc: db 0x05 0x00 0x27 0x06 0x01 0x00 0x04 0xf1 0x02 0x00 0x09 0xf1 0x03 0x00 0x0e 0xf1 0x04 0x00 0x13 0xf1 0x05 0x00 0x18 0xf1 '  '                     '
  
// ================================================
// 0xf414: WORD 'UNK_0xf416' codep=0x224c parp=0xf416
// ================================================

void UNK_0xf416()
{
  UNK_0xf122 @ Push(2); OR UNK_0xf122 !();
  
}


// ================================================
// 0xf424: WORD 'UNK_0xf426' codep=0x1d29 parp=0xf426
// ================================================
// 0xf426: db 0x3a 0x20 ': '
  
// ================================================
// 0xf428: WORD 'UNK_0xf42a' codep=0x1d29 parp=0xf42a
// ================================================
// 0xf42a: db 0x3a 0x20 0x05 ':  '
  
// ================================================
// 0xf42d: WORD 'UNK_0xf42f' codep=0x224c parp=0xf42f
// ================================================

void UNK_0xf42f()
{
  Push(0); pp_UNK_0xf426 !();
  *ASSIGN >C+S();
  UNK_0xf0f0 1.5@ pp_UNK_0xf42a 1.5!();
  INST-SI Push(0x0011); + Push(cc_6); Push(0); 
  do // (DO)
  {
  I 3*();
  OVER + @>C+S();
  OVER >SKILL C@ DUP pp_UNK_0xf426 @ > 
  if (Pop() == 0) goto label1634;
  CI pp_UNK_0xf42a <1.5!> pp_UNK_0xf426 <!> 
  goto label1635;
  
  label1634:
  DROP 
  label1635:
  ICLOSE();
  
  } while(...); // (LOOP) 0xffd0
  2DROP ICLOSE();
  
}


// ================================================
// 0xf487: WORD 'UNK_0xf489' codep=0x224c parp=0xf489
// ================================================

void UNK_0xf489()
{
  UNK_0xf104 Push(cc_6); Push(0); FILL();
  UNK_0xf416();
  
}


// ================================================
// 0xf495: WORD 'UNK_0xf497' codep=0x224c parp=0xf497
// ================================================

void UNK_0xf497()
{
  *ASSIGN >C+S();
  UNK_0xf0f0 @>C+S();
  UNK_0xf11d C@ 0= 
  if (Pop() == 0) goto label1637;
  UNK_0xf489();
  CI'();
  >C+S();
  UNK_0xf0f5 1.5@ UNK_0xf0f0 1.5!();
  ICLOSE();
  
  label1637:
  CDROP();
  ICLOSE();
  
}


// ================================================
// 0xf4bf: WORD 'UNK_0xf4c1' codep=0x224c parp=0xf4c1
// ================================================

void UNK_0xf4c1()
{
  *ASSIGN >C SET-CUR();
  UNK_0xf0f0 Push(cc_6); Push(1); 
  do // (DO)
  {
  I 3*();
  OVER + @>C+S();
  UNK_0xf11d C@ 0= 
  if (Pop() == 0) goto label1633;
  UNK_0xf489();
  ICLOSE();
  I UNK_0xf42f();
  pp_UNK_0xf42a 1.5@ I 3*();
  Push(cc_4); PICK();
  + 1.5!();
  
  goto label1636;
  
  label1633:
  ICLOSE();
  
  label1636:
  
  } while(...); // (LOOP) 0xffcc
  DROP ICLOSE();
  
}


// ================================================
// 0xf50b: WORD 'OBITS' codep=0x224c parp=0xf515
// ================================================

void OBITS()
{
  UNK_0xf4c1();
  UNK_0xf497();
  
}


// ================================================
// 0xf51b: WORD 'HEAL' codep=0x224c parp=0xf524
// ================================================

void HEAL()
{
  OBITS();
  UNK_0xf2cd();
  
}

// 0xf52a: db 0x48 0x45 0x41 0x4c 0x45 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x59 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x28 0x20 0x72 0x66 0x00 'HEALER__________________________Y ----------------( rf '
  