// store offset = 0xf120
// overlay size   = 0x0440
// name = 'LAND-VOC________________________for LAND-OV-------------------)-2263/85)1155DOCTOR-----------'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xf136 bitfield: 0 0 0  codep:0x744d parp:0xf136 size:0x0003
// 1704:      UNK_0xf13b bitfield: 0 0 0  codep:0x73ea parp:0xf13b size:0x0006
// 1705:      UNK_0xf143 bitfield: 0 0 0  codep:0x1d29 parp:0xf143 size:0x0002
// 1706:      UNK_0xf147 bitfield: 0 0 0  codep:0x224c parp:0xf147 size:0x002e
// 1707:      UNK_0xf177 bitfield: 0 0 0  codep:0x224c parp:0xf177 size:0x0050
// 1708:      UNK_0xf1c9 bitfield: 0 0 0  codep:0x224c parp:0xf1c9 size:0x0010
// 1709:      UNK_0xf1db bitfield: 0 0 0  codep:0x224c parp:0xf1db size:0x0014
// 1710:      UNK_0xf1f1 bitfield: 0 0 0  codep:0x224c parp:0xf1f1 size:0x0065
// 1711:      UNK_0xf258 bitfield: 0 0 0  codep:0x224c parp:0xf258 size:0x00d2
// 1712:      UNK_0xf32c bitfield: 0 0 0  codep:0x224c parp:0xf32c size:0x0014
// 1713:      UNK_0xf342 bitfield: 0 0 0  codep:0x224c parp:0xf342 size:0x0037
// 1714:      UNK_0xf37b bitfield: 0 0 0  codep:0x224c parp:0xf37b size:0x0020
// 1715:      UNK_0xf39d bitfield: 0 0 0  codep:0x224c parp:0xf39d size:0x0037
// 1716:      UNK_0xf3d6 bitfield: 0 0 0  codep:0x224c parp:0xf3d6 size:0x000a
// 1717:      UNK_0xf3e2 bitfield: 0 0 0  codep:0x224c parp:0xf3e2 size:0x004c
// 1718:      UNK_0xf430 bitfield: 0 0 0  codep:0x224c parp:0xf430 size:0x002c
// 1719:      UNK_0xf45e bitfield: 0 0 0  codep:0x224c parp:0xf45e size:0x0036
// 1720:           ?LAND bitfield: 0 0 0  codep:0x224c parp:0xf49e size:0x004b
// 1721:         ?LAUNCH bitfield: 0 0 0  codep:0x224c parp:0xf4f5 size:0x006b

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf143[2] = {0x00, 0x00};



// 0xf132: db 0x3f 0x00 '? '
  
// ================================================
// 0xf134: WORD 'UNK_0xf136' codep=0x744d parp=0xf136
// ================================================
// 0xf136: db 0x14 0x34 0x0f ' 4 '
  
// ================================================
// 0xf139: WORD 'UNK_0xf13b' codep=0x73ea parp=0xf13b
// ================================================
// 0xf13b: db 0x20 0x02 0x02 0x16 0x8f 0x65 '     e'
  
// ================================================
// 0xf141: WORD 'UNK_0xf143' codep=0x1d29 parp=0xf143
// ================================================
// 0xf143: db 0x00 0x00 '  '
  
// ================================================
// 0xf145: WORD 'UNK_0xf147' codep=0x224c parp=0xf147
// ================================================

void UNK_0xf147()
{
  pp_(PLANET @>C+S();
  UNK_0xf13b @ DUP Push(0x0320); > 
  if (Pop() == 0) goto label1920;
  Push(0x0320); - Push(0); SQRT();
  Push(0x000a); * Push(0x0320); + 
  label1920:
  ICLOSE();
  
}


// ================================================
// 0xf175: WORD 'UNK_0xf177' codep=0x224c parp=0xf177
// ================================================

void UNK_0xf177()
{
  *STARSH >C+S();
  IOPEN();
  Push(0x000b); Push(0x000a); IFIND();
  
  if (Pop() == 0) goto label1917;
  IOPEN();
  Push(0x001a); Push(cc_6); IFIND();
  INST-QT @ * pp_UNK_0xf143 @ 
  if (Pop() == 0) goto label1918;
  UNK_0xf147();
  Push(0x0028); / SWAP OVER - Push(0); MAX();
  INST-QT !();
  
  label1918:
  CDROP();
  
  goto label1919;
  
  label1917:
  Push(0); 
  label1919:
  CDROP();
  ICLOSE();
  
}


// ================================================
// 0xf1c7: WORD 'UNK_0xf1c9' codep=0x224c parp=0xf1c9
// ================================================

void UNK_0xf1c9()
{
  BLACK !COLOR();
  YELLOW Push(0x4f0c); !();
  CTERASE();
  
}


// ================================================
// 0xf1d9: WORD 'UNK_0xf1db' codep=0x224c parp=0xf1db
// ================================================

void UNK_0xf1db()
{
  pp_UNK_0xf143 ON();
  UNK_0xf177();
  DROP pp_UNK_0xf143 OFF();
  Push(0xbd4a); MODULE();
  
}


// ================================================
// 0xf1ef: WORD 'UNK_0xf1f1' codep=0x224c parp=0xf1f1
// ================================================

void UNK_0xf1f1()
{
  CTINIT();
  UNK_0xf1c9();
  
  UNK_0x3f39("CAPTAIN, THE SHIP IS BEING CRUSHED BY");
  TYPE CTCR();
  
  UNK_0x3f39("EXTREME GRAVITY. THE ...");
  TYPE Push(0x1388); Push(0x03e8); Push(1); >SND();
  'KEY();
  DROP KEY();
  DROP BYE();
  
}


// ================================================
// 0xf256: WORD 'UNK_0xf258' codep=0x224c parp=0xf258
// ================================================

void UNK_0xf258()
{
  CTINIT();
  UNK_0xf1c9();
  *SHIP >C+S();
  'KEY();
  DROP 
  label1923:
  TTY-SCR();
  TTY-SCR();
  
  UNK_0x3f39("EMERGENCY LOCATOR TRANSMISSION:");
  .TTY();
  
  UNK_0x3f39(" STARSHIP ISS ");
  .TTY();
  UNK_0xf136 COUNT();
  TYPE 
  UNK_0x3f39(" CRASHED ON PLANET ");
  .TTY();
  pp_(ORBIT) @>C+S();
  INST-QT ?();
  ICLOSE();
  
  UNK_0x3f39(" IN SYSTEM ");
  .TTY();
  pp_(SYSTEM @>C+S();
  INST-X @ Push(cc_*MAPSCA); / Push(0); .R();
  
  (.") string 1 ","
  INST-Y @ Push(cc_*MAPSCA); / Push(0); .R();
  ICLOSE();
  
  UNK_0x3f39("NO SURVIVORS");
  .TTY();
  TTY-SCR();
  TTY-SCR();
  Push(0x1388); Push(cc_3); Push(0x0032); Push(0x03e8); Push(2); >SND();
  'KEY();
  
  if (Pop() == 0) goto label1923;
  BYE();
  
}


// ================================================
// 0xf32a: WORD 'UNK_0xf32c' codep=0x224c parp=0xf32c
// ================================================

void UNK_0xf32c()
{
  UNK_0xf177();
  Push(0x0140); MIN();
  Push(0x0028); * UNK_0xf147();
  < 
}


// ================================================
// 0xf340: WORD 'UNK_0xf342' codep=0x224c parp=0xf342
// ================================================

void UNK_0xf342()
{
  UNK_0xf32c();
  DUP 
  if (Pop() == 0) goto label1927;
  CTINIT();
  CTERASE();
  
  UNK_0x3f39("INSUFFICIENT FUEL FOR SAFE LANDING");
  TYPE BEEP();
  
  label1927:
  
}


// ================================================
// 0xf379: WORD 'UNK_0xf37b' codep=0x224c parp=0xf37b
// ================================================

void UNK_0xf37b()
{
  UNK_0xf177();
  Push(0x0140); MIN();
  DUP pp_CONTEXT @ 0= * + Push(0x0014); * UNK_0xf147();
  < 
}


// ================================================
// 0xf39b: WORD 'UNK_0xf39d' codep=0x224c parp=0xf39d
// ================================================

void UNK_0xf39d()
{
  UNK_0xf37b();
  DUP 
  if (Pop() == 0) goto label1929;
  CTINIT();
  CTERASE();
  
  UNK_0x3f39("INSUFFICIENT FUEL FOR RE-LAUNCHING");
  TYPE BEEP();
  
  label1929:
  
}


// ================================================
// 0xf3d4: WORD 'UNK_0xf3d6' codep=0x224c parp=0xf3d6
// ================================================

void UNK_0xf3d6()
{
  UNK_0xf147();
  Push(0x031f); > 
}


// ================================================
// 0xf3e0: WORD 'UNK_0xf3e2' codep=0x224c parp=0xf3e2
// ================================================

void UNK_0xf3e2()
{
  UNK_0xf3d6();
  DUP 
  if (Pop() == 0) goto label1925;
  CTINIT();
  CTERASE();
  
  UNK_0x3f39("THIS PLANET'S GRAVITY WILL CRUSH THE");
  TYPE CTCR();
  
  UNK_0x3f39("SHIP'S HULL.");
  TYPE BEEP();
  
  label1925:
  
}


// ================================================
// 0xf42e: WORD 'UNK_0xf430' codep=0x224c parp=0xf430
// ================================================

void UNK_0xf430()
{
  UNK_0xf32c();
  pp_?FUEL-D !();
  Push(cc_-1); pp_GWF !();
  UNK_0xf1db();
  Push(0xc3a7); MODULE();
  pp_?FUEL-D @ 
  if (Pop() == 0) goto label1921;
  UNK_0xf258();
  
  goto label1922;
  
  label1921:
  UNK_0xf3d6();
  
  if (Pop() == 0) goto label1922;
  UNK_0xf1f1();
  
  label1922:
  
}


// ================================================
// 0xf45c: WORD 'UNK_0xf45e' codep=0x224c parp=0xf45e
// ================================================

void UNK_0xf45e()
{
  pp_GWF @ ?DUP NOT 
  if (Pop() == 0) goto label1924;
  UNK_0xf3e2();
  
  if (Pop() == 0) goto label1926;
  pp_GWF ON();
  
  goto label1930;
  
  label1926:
  UNK_0xf342();
  
  if (Pop() == 0) goto label1928;
  pp_GWF ON();
  
  goto label1930;
  
  label1928:
  UNK_0xf39d();
  pp_GWF !();
  
  label1930:
  pp_GWF @ NOT 
  label1924:
  
}


// ================================================
// 0xf494: WORD '?LAND' codep=0x224c parp=0xf49e
// ================================================

void ?LAND()
{
  pp_'EXTERN @ pp_'HEAT @ = 
  if (Pop() == 0) goto label1915;
  CTINIT();
  CTERASE();
  
  (.") string 24 "COMPUTER NOT RESPONDING!"
  BEEP();
  
  goto label1932;
  
  label1915:
  pp_?G-AWAR @ 
  if (Pop() == 0) goto label1916;
  UNK_0xf45e();
  
  if (Pop() == 0) goto label1931;
  UNK_0xf430();
  
  label1931:
  
  goto label1932;
  
  label1916:
  UNK_0xf430();
  
  label1932:
  
}


// ================================================
// 0xf4e9: WORD '?LAUNCH' codep=0x224c parp=0xf4f5
// ================================================

void ?LAUNCH()
{
  UNK_0xf39d();
  NOT DUP 
  if (Pop() == 0) goto label1933;
  UNK_0xf1db();
  
  label1933:
  
}

// 0xf503: db 0x4c 0x41 0x4e 0x44 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x4c 0x41 0x4e 0x44 0x2d 0x4f 0x56 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x2d 0x32 0x32 0x36 0x33 0x2f 0x38 0x35 0x29 0x31 0x31 0x35 0x35 0x44 0x4f 0x43 0x54 0x4f 0x52 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'LAND-VOC________________________for LAND-OV-------------------)-2263/85)1155DOCTOR----------- '
  