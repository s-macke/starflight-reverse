// store offset = 0xf390
// overlay size   = 0x01d0
// name = 'DPART-VOC______'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:        DISPOSAL bitfield: 0 0 0  codep:0x4b3b parp:0xf3fd size:0x0024
// 1870:      UNK_0xf423 bitfield: 0 0 0  codep:0x224c parp:0xf423 size:0x0014
// 1871:      UNK_0xf439 bitfield: 0 0 0  codep:0x224c parp:0xf439 size:0x000c
// 1872:      UNK_0xf447 bitfield: 0 0 0  codep:0x224c parp:0xf447 size:0x0044
// 1873:      UNK_0xf48d bitfield: 0 0 0  codep:0x224c parp:0xf48d size:0x0028
// 1874:      UNK_0xf4b7 bitfield: 0 0 0  codep:0x7420 parp:0xf4b7 size:0x0003
// 1875:      UNK_0xf4bc bitfield: 0 0 0  codep:0x224c parp:0xf4bc size:0x004a
// 1876:          DEPART bitfield: 0 0 0  codep:0x224c parp:0xf511 size:0x004f

// =================================
// =========== VARIABLES ===========
// =================================



// 0xf3a2: db 0x1d 0x00 0x94 0x73 0x1c 0x1e 0x01 0x20 0xcd 0x6b 0x4c 0x22 0xa4 0xf3 0x92 0x0c 0x3d 0x0f 0x5f 0x12 0x90 0x16 0x4c 0x22 0x34 0x75 0x7f 0x3b 0x46 0x12 0xb5 0x75 0x1f 0x7a 0x3f 0x7a 0x5d 0x17 0x1b 0x00 0x20 0x0f 0x4c 0x7e 0x07 0x13 0xe2 0x7a 0x5d 0x17 0x1c 0x00 0x20 0x0f 0x4c 0x7e 0x07 0x13 0xf5 0x12 0x34 0x75 0x7f 0x3b 0x8f 0x3b 0x25 0x40 0xf5 0x12 0x3e 0x13 0x3d 0x0f 0x0a 0x7a 0x90 0x16 '   s     kL"    = _   L"4u;F  u z?z]     L~   z]     L~    4u; ;%@  > =  z  '
  
// ================================================
// 0xf3f0: WORD 'DISPOSAL' codep=0x4b3b parp=0xf3fd
// ================================================
// 0xf3fd: db 0x08 0x00 0xd1 0x51 0x44 0x00 0xc5 0x51 0x1a 0x00 0xc5 0x51 0x15 0x00 0xc5 0x51 0x1f 0x00 0xc5 0x51 0x21 0x00 0xc5 0x51 0x1c 0x00 0xae 0xf3 0x29 0x00 0xba 0xf3 0x09 0x00 0xc5 0x51 '   QD  Q   Q   Q   Q!  Q    )      Q'
  
// ================================================
// 0xf421: WORD 'UNK_0xf423' codep=0x224c parp=0xf423
// ================================================

void UNK_0xf423()
{
  ?NULL();
  NOT 
  if (Pop() == 0) goto label479;
  @INST-C();
  DISPOSAL 
  goto label480;
  
  label479:
  Push(cc_FALSE); 
  label480:
  
}


// ================================================
// 0xf437: WORD 'UNK_0xf439' codep=0x224c parp=0xf439
// ================================================

void UNK_0xf439()
{
  
  if (Pop() == 0) goto label482;
  IDELETE();
  IPREV();
  
  label482:
  INEXT();
  
}


// ================================================
// 0xf445: WORD 'UNK_0xf447' codep=0x224c parp=0xf447
// ================================================

void UNK_0xf447()
{
  pp_(PLANET @>C+S();
  IOPEN();
  
  label483:
  Push(0x000b); Push(0x000b); IFIND();
  
  if (Pop() == 0) goto label477;
  IOPEN();
  
  label484:
  ?LAST();
  NOT ?NULL();
  NOT AND 
  if (Pop() == 0) goto label478;
  UNK_0xf423();
  UNK_0xf439();
  
  goto label484;
  
  label478:
  UNK_0xf423();
  
  if (Pop() == 0) goto label481;
  IDELETE();
  
  label481:
  ?NULL();
  ICLOSE();
  UNK_0xf439();
  
  goto label483;
  
  label477:
  CDROP();
  ICLOSE();
  
}


// ================================================
// 0xf48b: WORD 'UNK_0xf48d' codep=0x224c parp=0xf48d
// ================================================

void UNK_0xf48d()
{
  pp_(PLANET @>C+S();
  IOPEN();
  CDROP();
  pp_SUPER-B @>C+S();
  IDELETE();
  IFIRST();
  
  label486:
  Push(0x0043); Push(0); IFIND();
  
  if (Pop() == 0) goto label485;
  IDELETE();
  
  goto label486;
  
  label485:
  CDROP();
  ICLOSE();
  
}


// ================================================
// 0xf4b5: WORD 'UNK_0xf4b7' codep=0x7420 parp=0xf4b7
// ================================================
// 0xf4b7: db 0x34 0x12 0x01 '4  '
  
// ================================================
// 0xf4ba: WORD 'UNK_0xf4bc' codep=0x224c parp=0xf4bc
// ================================================

void UNK_0xf4bc()
{
  pp_(AORIGI @>C+S();
  pp_EDL @ UNK_0xf4b7 C@ - DUP 0> 
  if (Pop() == 0) goto label475;
  DUP 0> 2* 1- SWAP ABS();
  Push(cc_3); / Push(cc_5); MAX();
  * UNK_0xf4b7 C@ + Push(0x0064); MIN();
  Push(0); MAX();
  UNK_0xf4b7 C!();
  
  goto label476;
  
  label475:
  DROP 
  label476:
  ICLOSE();
  
}


// ================================================
// 0xf506: WORD 'DEPART' codep=0x224c parp=0xf511
// ================================================

void DEPART()
{
  pp_?CRITIC 099();
  Push(0x3a48); pp_'THROW- !();
  pp_?LANDED @ 
  if (Pop() == 0) goto label473;
  UNK_0xf447();
  UNK_0xf48d();
  
  label473:
  Push(cc_-1); pp_PLHI !();
  pp_?LANDED 099();
  pp_(AORIGI 1.5@ OR 
  if (Pop() == 0) goto label474;
  UNK_0xf4bc();
  
  label474:
  NULL pp_(AORIGI 1.5!();
  pp_(TRADER @>C+S();
  Push(0); !INST-S();
  ICLOSE();
  
}

// 0xf551: db 0x44 0x50 0x41 0x52 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'DPART-VOC______ '
  