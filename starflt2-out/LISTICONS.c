// store offset = 0xf2b0
// overlay size   = 0x02b0
// name = 'ICON-V______'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xf2c6 bitfield: 0 0 0  codep:0x224c parp:0xf2c6 size:0x00a7
// 1870:      UNK_0xf36f bitfield: 0 0 0  codep:0x224c parp:0xf36f size:0x0075
// 1871:      UNK_0xf3e6 bitfield: 0 0 0  codep:0x224c parp:0xf3e6 size:0x0030
// 1872:      UNK_0xf418 bitfield: 0 0 0  codep:0x224c parp:0xf418 size:0x0038
// 1873:      UNK_0xf452 bitfield: 0 0 0  codep:0x224c parp:0xf452 size:0x000a
// 1874:      UNK_0xf45e bitfield: 0 0 0  codep:0x224c parp:0xf45e size:0x007e
// 1875:           ICONS bitfield: 0 0 0  codep:0x224c parp:0xf4e6 size:0x007a

// =================================
// =========== VARIABLES ===========
// =================================



// 0xf2c2: db 0x2b 0x00 '+ '
  
// ================================================
// 0xf2c4: WORD 'UNK_0xf2c6' codep=0x224c parp=0xf2c6
// ================================================

void UNK_0xf2c6()
{
  Push(cc_8); Push(0); 
  do // (DO)
  {
  pp_CMAP I Push(cc_8); * + pp_TILE-PT !();
  Push(0x0020); I Push(0x000c); * + Push(0x002d); Push(0x000f); Push(0x000c); TILEFIL();
  
  } while(...); // (LOOP) 0xffd4
  BLACK !COLOR();
  Push(0x001f); Push(0x002e); Push(0x0080); Push(0x002e); LLINE();
  Push(0x0080); Push(0x002e); Push(0x0080); Push(0x001d); LLINE();
  Push(0x0080); Push(0x001d); Push(0x001f); Push(0x001d); LLINE();
  Push(0x001f); Push(0x001d); Push(0x001f); Push(0x002e); LLINE();
  Push(0x0023); Push(0x0019); POS.();
  
  (.") string 24 "LO.....ELEVATION.....HI "
  
}


// ================================================
// 0xf36d: WORD 'UNK_0xf36f' codep=0x224c parp=0xf36f
// ================================================

void UNK_0xf36f()
{
  Push(0x00be); pp_YBLT <!> Push(0x0037); pp_XBLT <!> BLACK !COLOR();
  >3FONT();
  
  (.") string 4 "ICON"
  Push(0x000a); pp_XBLT <+!> 
  (.") string 3 "KEY"
  Push(0x000a); Push(0x000f); Push(0x0096); Push(0x000f); LLINE();
  Push(0x000a); Push(0x00b2); Push(0x0096); Push(0x00b2); LLINE();
  Push(0x000a); Push(0x000f); Push(0x000a); Push(0x00b2); LLINE();
  Push(0x0096); Push(0x000f); Push(0x0096); Push(0x00b2); LLINE();
  
}


// ================================================
// 0xf3e4: WORD 'UNK_0xf3e6' codep=0x224c parp=0xf3e6
// ================================================

void UNK_0xf3e6()
{
  Push(2); Push(0); 
  do // (DO)
  {
  DUP I Push(cc_9); * + DUP C@ I>C();
  ?CGA();
  
  if (Pop() == 0) goto label1002;
  >FLAG();
  
  label1002:
  !COLOR();
  1+ pp_ABLT <!> BLT 
  } while(...); // (LOOP) 0xffdc
  DROP 
}


// ================================================
// 0xf416: WORD 'UNK_0xf418' codep=0x224c parp=0xf418
// ================================================

void UNK_0xf418()
{
  Push(0x000a); pp_YBLT <!> Push(0x001b); pp_XBLT <!> WHITE !COLOR();
  
  (.") string 27 "(PRESS ANY KEY TO CONTINUE)"
  KEY();
  DROP 
}


// ================================================
// 0xf450: WORD 'UNK_0xf452' codep=0x224c parp=0xf452
// ================================================

void UNK_0xf452()
{
  GREY1 !COLOR();
  SFILL();
  UNK_0xf36f();
  
}


// ================================================
// 0xf45c: WORD 'UNK_0xf45e' codep=0x224c parp=0xf45e
// ================================================

void UNK_0xf45e()
{
  >1FONT();
  
  do // (DO)
  {
  Push(0x000a); - DUP pp_YBLT <!> Push(0x0014); pp_XBLT <!> Push(cc_8); pp_LBLT <!> Push(cc_8); pp_WBLT <!> pp_ICON^ @ I Push(0x0012); * @DS PAD|16();
  Push(0x0012); LCMOVE PAD|16();
  UNK_0xf3e6();
  Push(0x000c); pp_XBLT <+!> BLACK !COLOR();
  Push(cc_-2); pp_YBLT <+!> Push(0x0041); I DUP Push(0x002b); > 
  if (Pop() == 0) goto label1003;
  Push(0x0011); - 
  label1003:
  @RECORD();
  Push(0x001b); TYPE Push(2); pp_YBLT <+!> 
  } while(...); // (LOOP) 0xff8c
  DROP 
}


// ================================================
// 0xf4dc: WORD 'ICONS' codep=0x224c parp=0xf4e6
// ================================================

void ICONS()
{
  pp_XORMODE 099();
  pp_ESC-EN 099();
  pp_NOF ON();
  @DS pp_BLTSEG !();
  UNK_0xf452();
  Push(0x00b4); Push(0x000f); Push(0); UNK_0xf45e();
  UNK_0xf418();
  UNK_0xf452();
  Push(0x00b4); Push(0x001b); Push(0x000f); UNK_0xf45e();
  Push(0x003c); Push(0x002e); Push(0x002d); UNK_0xf45e();
  UNK_0xf418();
  UNK_0xf452();
  Push(0x00b4); Push(0x0031); Push(0x002e); UNK_0xf45e();
  Push(0x0097); Push(0x0038); Push(0x0033); UNK_0xf45e();
  UNK_0xf2c6();
  UNK_0xf418();
  pp_ESC-EN ON();
  pp_NOF 099();
  
}

// 0xf554: db 0x49 0x43 0x4f 0x4e 0x2d 0x56 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'ICON-V______ '
  