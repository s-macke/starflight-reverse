// ====== OVERLAY 'MAPS-OV' ======
// store offset = 0xece0
// overlay size   = 0x0880

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xecfa  codep:0x7394 parp:0xecfa size:0x0026 C-string:'UNK_0xecfa'
// 1870:      UNK_0xed22  codep:0x7394 parp:0xed22 size:0x0006 C-string:'UNK_0xed22'
// 1871:      UNK_0xed2a  codep:0x7394 parp:0xed2a size:0x0006 C-string:'UNK_0xed2a'
// 1872:      UNK_0xed32  codep:0x7394 parp:0xed32 size:0x000e C-string:'UNK_0xed32'
// 1873:      UNK_0xed42  codep:0x2214 parp:0xed42 size:0x0002 C-string:'UNK_0xed42'
// 1874:      UNK_0xed46  codep:0x7394 parp:0xed46 size:0x0006 C-string:'UNK_0xed46'
// 1875:      UNK_0xed4e  codep:0x224c parp:0xed4e size:0x0050 C-string:'UNK_0xed4e'
// 1876:      UNK_0xeda0  codep:0x224c parp:0xeda0 size:0x0016 C-string:'UNK_0xeda0'
// 1877:      UNK_0xedb8  codep:0x224c parp:0xedb8 size:0x0030 C-string:'UNK_0xedb8'
// 1878:      UNK_0xedea  codep:0x224c parp:0xedea size:0x002e C-string:'UNK_0xedea'
// 1879:      UNK_0xee1a  codep:0x7394 parp:0xee1a size:0x0006 C-string:'UNK_0xee1a'
// 1880:      UNK_0xee22  codep:0x224c parp:0xee22 size:0x002a C-string:'UNK_0xee22'
// 1881:      UNK_0xee4e  codep:0x224c parp:0xee4e size:0x0016 C-string:'UNK_0xee4e'
// 1882:      UNK_0xee66  codep:0x224c parp:0xee66 size:0x000a C-string:'UNK_0xee66'
// 1883:      UNK_0xee72  codep:0x224c parp:0xee72 size:0x000e C-string:'UNK_0xee72'
// 1884:      UNK_0xee82  codep:0x224c parp:0xee82 size:0x000c C-string:'UNK_0xee82'
// 1885:      UNK_0xee90  codep:0x224c parp:0xee90 size:0x0074 C-string:'UNK_0xee90'
// 1886:      UNK_0xef06  codep:0x224c parp:0xef06 size:0x0016 C-string:'UNK_0xef06'
// 1887:      2X2CONTOUR  codep:0x224c parp:0xef2b size:0x0034 C-string:'_2X2CONTOUR'
// 1888:      4X4CONTOUR  codep:0x224c parp:0xef6e size:0x0040 C-string:'_4X4CONTOUR'
// 1889:            CBLT  codep:0x1d29 parp:0xefb7 size:0x0004 C-string:'CBLT'
// 1890:           CBLTP  codep:0xefc5 parp:0xefc5 size:0x002c C-string:'CBLTP'
// 1891:      UNK_0xeff3  codep:0x224c parp:0xeff3 size:0x00be C-string:'UNK_0xeff3'
// 1892:      8X8CONTOUR  codep:0x224c parp:0xf0c0 size:0x0040 C-string:'_8X8CONTOUR'
// 1893:            '4X4  codep:0x1d29 parp:0xf109 size:0x0002 C-string:'_i_4X4'
// 1894:            '2X2  codep:0x1d29 parp:0xf114 size:0x0002 C-string:'_i_2X2'
// 1895:            '8X8  codep:0x1d29 parp:0xf11f size:0x0002 C-string:'_i_8X8'
// 1896:      UNK_0xf123  codep:0x224c parp:0xf123 size:0x0050 C-string:'UNK_0xf123'
// 1897:      UNK_0xf175  codep:0x224c parp:0xf175 size:0x0046 C-string:'UNK_0xf175'
// 1898:      UNK_0xf1bd  codep:0x224c parp:0xf1bd size:0x004e C-string:'UNK_0xf1bd'
// 1899:      UNK_0xf20d  codep:0x224c parp:0xf20d size:0x0008 C-string:'UNK_0xf20d'
// 1900:      UNK_0xf217  codep:0x224c parp:0xf217 size:0x0008 C-string:'UNK_0xf217'
// 1901:      UNK_0xf221  codep:0x224c parp:0xf221 size:0x0008 C-string:'UNK_0xf221'
// 1902:      UNK_0xf22b  codep:0x224c parp:0xf22b size:0x0008 C-string:'UNK_0xf22b'
// 1903:      UNK_0xf235  codep:0x224c parp:0xf235 size:0x0008 C-string:'UNK_0xf235'
// 1904:      UNK_0xf23f  codep:0x224c parp:0xf23f size:0x0008 C-string:'UNK_0xf23f'
// 1905:      UNK_0xf249  codep:0x224c parp:0xf249 size:0x0008 C-string:'UNK_0xf249'
// 1906:      UNK_0xf253  codep:0x224c parp:0xf253 size:0x0008 C-string:'UNK_0xf253'
// 1907:      UNK_0xf25d  codep:0x224c parp:0xf25d size:0x0008 C-string:'UNK_0xf25d'
// 1908:      UNK_0xf267  codep:0x224c parp:0xf267 size:0x0008 C-string:'UNK_0xf267'
// 1909:      UNK_0xf271  codep:0x224c parp:0xf271 size:0x0008 C-string:'UNK_0xf271'
// 1910:      UNK_0xf27b  codep:0x224c parp:0xf27b size:0x0008 C-string:'UNK_0xf27b'
// 1911:      UNK_0xf285  codep:0x224c parp:0xf285 size:0x0012 C-string:'UNK_0xf285'
// 1912:         WPHRASE  codep:0x4b3b parp:0xf2a3 size:0x003c C-string:'WPHRASE'
// 1913:        (.STORM)  codep:0x224c parp:0xf2ec size:0x001a C-string:'_ro__dot_STORM_rc_'
// 1914:           .ROCK  codep:0x224c parp:0xf310 size:0x0018 C-string:'_dot_ROCK'
// 1915:         .LIQUID  codep:0x224c parp:0xf334 size:0x0016 C-string:'_dot_LIQUID'
// 1916:        .CRYSTAL  codep:0x224c parp:0xf357 size:0x000a C-string:'_dot_CRYSTAL'
// 1917:            .ICE  codep:0x224c parp:0xf36a size:0x001a C-string:'_dot_ICE'
// 1918:         .MOLTEN  codep:0x224c parp:0xf390 size:0x0010 C-string:'_dot_MOLTEN'
// 1919:         .CARPET  codep:0x224c parp:0xf3ac size:0x0031 C-string:'_dot_CARPET'
// 1920:           /SURF  codep:0x4b3b parp:0xf3e7 size:0x0018 C-string:'_slash_SURF'
// 1921:        .SURFACE  codep:0x224c parp:0xf40c size:0x0010 C-string:'_dot_SURFACE'
// 1922:      UNK_0xf41e  codep:0x224c parp:0xf41e size:0x0006 C-string:'UNK_0xf41e'
// 1923:      UNK_0xf426  codep:0x224c parp:0xf426 size:0x0006 C-string:'UNK_0xf426'
// 1924:      UNK_0xf42e  codep:0x224c parp:0xf42e size:0x0012 C-string:'UNK_0xf42e'
// 1925:      UNK_0xf442  codep:0x224c parp:0xf442 size:0x0016 C-string:'UNK_0xf442'
// 1926:      UNK_0xf45a  codep:0x224c parp:0xf45a size:0x0017 C-string:'UNK_0xf45a'
// 1927:      UNK_0xf473  codep:0x224c parp:0xf473 size:0x0006 C-string:'UNK_0xf473'
// 1928:      UNK_0xf47b  codep:0x224c parp:0xf47b size:0x0023 C-string:'UNK_0xf47b'
// 1929:      UNK_0xf4a0  codep:0x224c parp:0xf4a0 size:0x0013 C-string:'UNK_0xf4a0'
// 1930:      UNK_0xf4b5  codep:0x224c parp:0xf4b5 size:0x002b C-string:'UNK_0xf4b5'
// 1931:      UNK_0xf4e2  codep:0x224c parp:0xf4e2 size:0x0014 C-string:'UNK_0xf4e2'
// 1932:            MAPS  codep:0x224c parp:0xf4ff size:0x0030 C-string:'MAPS'
// 1933:          .STORM  codep:0x224c parp:0xf53a size:0x0000 C-string:'_dot_STORM'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char CBLT[4] = {0xff, 0x66, 0x00, 0x66}; // CBLT
unsigned char _i_4X4[2] = {0x02, 0xce}; // '4X4
unsigned char _i_2X2[2] = {0xe0, 0xcd}; // '2X2
unsigned char _i_8X8[2] = {0x24, 0xce}; // '8X8

const unsigned short int cc_UNK_0xed42 = 0x001e; // UNK_0xed42


// 0xecf2: db 0x87 0x00 0x14 0x22 0x20 0x00 '   "  '

// ================================================
// 0xecf8: WORD 'UNK_0xecfa' codep=0x7394 parp=0xecfa
// ================================================
// 0xecfa: db 0x20 0x01 0x01 0x17 0x49 0x6c 0x94 0x73 0x20 0x04 0x01 0x17 0x49 0x6c 0x94 0x73 0x20 0x11 0x02 0x17 0x49 0x6c 0x94 0x73 0x20 0x13 0x01 0x17 0x49 0x6c 0x94 0x73 0x20 0x0c 0x01 0x17 0x49 0x6c '    Il s    Il s    Il s    Il s    Il'

// ================================================
// 0xed20: WORD 'UNK_0xed22' codep=0x7394 parp=0xed22
// ================================================
// 0xed22: db 0x20 0x0f 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xed28: WORD 'UNK_0xed2a' codep=0x7394 parp=0xed2a
// ================================================
// 0xed2a: db 0x20 0x10 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xed30: WORD 'UNK_0xed32' codep=0x7394 parp=0xed32
// ================================================
// 0xed32: db 0x20 0x02 0x02 0x17 0x49 0x6c 0x94 0x73 0x43 0x07 0x08 0x1c 0xfc 0x6e '    Il sC    n'

// ================================================
// 0xed40: WORD 'UNK_0xed42' codep=0x2214 parp=0xed42
// ================================================
// 0xed42: db 0x1e 0x00 '  '

// ================================================
// 0xed44: WORD 'UNK_0xed46' codep=0x7394 parp=0xed46
// ================================================
// 0xed46: db 0x1e 0x00 0x03 0x07 0x3e 0x6c '    >l'

// ================================================
// 0xed4c: WORD 'UNK_0xed4e' codep=0x224c parp=0xed4e
// ================================================

void UNK_0xed4e() // UNK_0xed4e
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  LoadData("UNK_0xed32"); // from 'PLANET      '
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  Push(Read16(sp)); // DUP
  Push(0x0320);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x0320);
  _dash_(); // -
  Push(0); // 0
  SQRT(); // SQRT
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x0320);
  Push(Pop() + Pop()); // +

  label1:
  Push(0x0064);
  _slash_MOD(); // /MOD
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label2;
  Push(0); // 0
  _dot_R(); // .R

  label2:
  PRINT(".", 1); // (.")
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0); // 0
  _dot_R(); // .R
  Push(0); // 0
  _dot_R(); // .R
}


// ================================================
// 0xed9e: WORD 'UNK_0xeda0' codep=0x224c parp=0xeda0
// ================================================

void UNK_0xeda0() // UNK_0xeda0
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  LoadData("UNK_0xed22"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  LoadData("UNK_0xed2a"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  OVER(); // OVER
  _dash_(); // -
  Push(Pop()+1); // 1+
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedb6: WORD 'UNK_0xedb8' codep=0x224c parp=0xedb8
// ================================================

void UNK_0xedb8() // UNK_0xedb8
{
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(0x01e0);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x03c0);
  SWAP(); // SWAP
  _dash_(); // -

  label1:
  Push(0x01e0);
  UNK_0xeda0(); // UNK_0xeda0
  ROT(); // ROT
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop()+1); // 1+
  ROT(); // ROT
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xede8: WORD 'UNK_0xedea' codep=0x224c parp=0xedea
// ================================================

void UNK_0xedea() // UNK_0xedea
{
  _ask_NEW_dash_HO(); // ?NEW-HO
  if (Pop() == 0) return;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LAST_dash_UP); // LAST-UP
  D_ex_(); // D!
  Push(1); // 1
  Push(pp_STAR_dash_HR); // STAR-HR
  _plus__ex_(); // +!
  Push(pp_STAR_dash_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(0x0018);
  _eq_(); // =
  if (Pop() == 0) return;
  Push(pp_STAR_dash_HR); // STAR-HR
  _099(); // 099
  Push(1); // 1
  Push(pp_STARDAT); // STARDAT
  _plus__ex_(); // +!
}


// ================================================
// 0xee18: WORD 'UNK_0xee1a' codep=0x7394 parp=0xee1a
// ================================================
// 0xee1a: db 0x43 0x04 0x03 0x1c 0xfc 0x6e 'C    n'

// ================================================
// 0xee20: WORD 'UNK_0xee22' codep=0x224c parp=0xee22
// ================================================

void UNK_0xee22() // UNK_0xee22
{
  UNK_0xedb8(); // UNK_0xedb8
  Push(pp_RECORD_n_); // RECORD#
  _ex_(); // !
  Push(0x0043);
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  LoadData("UNK_0xee1a"); // from 'REGIONS     '
  _at__gt_C_plus_S(); // @>C+S
  Func8("PHR-CNT");
  Push(Read8(Pop())&0xFF); // C@
  Func8("PHRASE");
  OVER(); // OVER
  Func14("TYPE"); // call of word 0x2690
  Push(0x000a);
  SWAP(); // SWAP
  _dash_(); // -
  SPACES(); // SPACES
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee4c: WORD 'UNK_0xee4e' codep=0x224c parp=0xee4e
// ================================================

void UNK_0xee4e() // UNK_0xee4e
{

  label1:
  _i_KEY(); // 'KEY
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xedea(); // UNK_0xedea
  Push(pp__i_SIMULA); // 'SIMULA
  _at_EXECUTE(); // @EXECUTE
  goto label1;
}


// ================================================
// 0xee64: WORD 'UNK_0xee66' codep=0x224c parp=0xee66
// ================================================

void UNK_0xee66() // UNK_0xee66
{
  UNK_0xee4e(); // UNK_0xee4e
  Push(0x014d);
  _dash_(); // -
}


// ================================================
// 0xee70: WORD 'UNK_0xee72' codep=0x224c parp=0xee72
// ================================================

void UNK_0xee72() // UNK_0xee72
{
  _gt_C_plus_S(); // >C+S
  Func8("PHRASE");
  Func8("PHR-CNT");
  Push(Read8(Pop())&0xFF); // C@
  Func14("TYPE"); // call of word 0x2690
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee80: WORD 'UNK_0xee82' codep=0x224c parp=0xee82
// ================================================

void UNK_0xee82() // UNK_0xee82
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xee8e: WORD 'UNK_0xee90' codep=0x224c parp=0xee90
// ================================================

void UNK_0xee90() // UNK_0xee90
{
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  _gt_MAINVI(); // >MAINVI
  Push(0x001a);
  Push(0x002b);
  Push(0x002d);
  Push(0x002b);
  LLINE(); // LLINE
  Push(0x001a);
  Push(0x002c);
  Push(0x002d);
  Push(0x002c);
  LLINE(); // LLINE
  Push(0x001a);
  Push(0x004b);
  Push(0x002d);
  Push(0x004b);
  LLINE(); // LLINE
  Push(0x001a);
  Push(0x004c);
  Push(0x002d);
  Push(0x004c);
  LLINE(); // LLINE
  Push(0x001a);
  Push(0x002d);
  Push(0x001a);
  Push(0x004a);
  LLINE(); // LLINE
  Push(0x002d);
  Push(0x002d);
  Push(0x002d);
  Push(0x004a);
  LLINE(); // LLINE
}


// ================================================
// 0xef04: WORD 'UNK_0xef06' codep=0x224c parp=0xef06
// ================================================

void UNK_0xef06() // UNK_0xef06
{
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  _dash_(); // -
}


// ================================================
// 0xef1c: WORD '2X2CONTOUR' codep=0x224c parp=0xef2b
// ================================================
// entry

void _2X2CONTOUR() // 2X2CONTOUR
{
  Push(0x6a82);
  SETLARR(); // SETLARR
  Push(0x91ff);
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push(1); // 1
  Push(Read16(sp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  UNK_0xef06(); // UNK_0xef06
  OVER(); // OVER
  Push(0x0022);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(0x003a);
  Push(Pop() + Pop()); // +
  SETREGI(); // SETREGI
  _dot_REGION(); // .REGION
  UNK_0xee90(); // UNK_0xee90
}


// ================================================
// 0xef5f: WORD '4X4CONTOUR' codep=0x224c parp=0xef6e
// ================================================
// entry

void _4X4CONTOUR() // 4X4CONTOUR
{
  Push(0x6a82);
  SETLARR(); // SETLARR
  Push(0x9223);
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push(2); // 2
  Push(Read16(sp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  UNK_0xef06(); // UNK_0xef06
  Push(0x000f);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(cc__9); // 9
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  OVER(); // OVER
  Push(0x0010);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(0x001c);
  Push(Pop() + Pop()); // +
  SETREGI(); // SETREGI
  _dot_REGION(); // .REGION
}


// ================================================
// 0xefae: WORD 'CBLT' codep=0x1d29 parp=0xefb7
// ================================================
// 0xefb7: db 0xff 0x66 0x00 0x66 ' f f'

// ================================================
// 0xefbb: WORD 'CBLTP' codep=0xefc5 parp=0xefc5
// ================================================
// 0xefc5: pop    ax
// 0xefc6: add    ax,0003
// 0xefc9: mov    [5A3D],ax
// 0xefcd: pop    ax
// 0xefce: add    ax,0006
// 0xefd1: mov    [5A48],ax
// 0xefd5: mov    word ptr [5A6C],0004
// 0xefdb: mov    word ptr [5A61],0006
// 0xefe1: mov    word ptr [5A77],EFB7
// 0xefe7: push   ds
// 0xefe8: pop    word ptr [5A84]
// 0xefec: lodsw
// 0xefed: mov    bx,ax
// 0xefef: jmp    word ptr [bx]

// ================================================
// 0xeff1: WORD 'UNK_0xeff3' codep=0x224c parp=0xeff3
// ================================================

void UNK_0xeff3() // UNK_0xeff3
{
  Push(0x000e);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__8); // 8
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(pp_XLL); // XLL
  Push(Read16(Pop())); // @
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(pp_YLL); // YLL
  Push(Read16(Pop())); // @
  Push(i); // J
  Push(Pop() + Pop()); // +
  _2DUP(); // 2DUP
  CELLCOL(); // CELLCOL
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  _2DUP(); // 2DUP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  CELLCOL(); // CELLCOL
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(j); // I
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  R_gt_(); // R>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _gt_R(); // >R

  label1:
  _2DUP(); // 2DUP
  Push(Pop()+1); // 1+
  CELLCOL(); // CELLCOL
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  CELLCOL(); // CELLCOL
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(j); // I
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  R_gt_(); // R>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _gt_R(); // >R

  label2:
  Push(j); // I
  Push(j); // I'
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label3;
  Push(j); // I
  Push(j); // I'
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  Push(j); // I
  _0_gt_(); // 0>
  if (Pop() == 0) goto label4;
  Push(j); // I
  goto label5;

  label4:
  Push(j); // I'

  label5:
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  _ex_COLOR(); // !COLOR
  _2DUP(); // 2DUP
  Push(cc__3); // 3
  Push(cc__3); // 3
  BUFFERX(); // BUFFERX
  Push(Pop()-1); // 1-
  CBLTP(); // CBLTP
  BLT(); // BLT

  label3:
  R_gt_(); // R>
  R_gt_(); // R>
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
  j++;
  } while(j<jmax); // (LOOP) 0xff58

  i++;
  } while(i<imax); // (LOOP) 0xff4e

}


// ================================================
// 0xf0b1: WORD '8X8CONTOUR' codep=0x224c parp=0xf0c0
// ================================================
// entry

void _8X8CONTOUR() // 8X8CONTOUR
{
  Push(0x6a82);
  SETLARR(); // SETLARR
  Push(0x9241);
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push2Words("0.");
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  UNK_0xef06(); // UNK_0xef06
  Push(0x0016);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x000d);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  OVER(); // OVER
  Push(cc__8); // 8
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(0x000e);
  Push(Pop() + Pop()); // +
  SETREGI(); // SETREGI
  _dot_REGION(); // .REGION
  UNK_0xeff3(); // UNK_0xeff3
}


// ================================================
// 0xf100: WORD ''4X4' codep=0x1d29 parp=0xf109
// ================================================
// 0xf109: db 0x02 0xce '  '

// ================================================
// 0xf10b: WORD ''2X2' codep=0x1d29 parp=0xf114
// ================================================
// 0xf114: db 0xe0 0xcd '  '

// ================================================
// 0xf116: WORD ''8X8' codep=0x1d29 parp=0xf11f
// ================================================
// 0xf11f: db 0x24 0xce '$ '

// ================================================
// 0xf121: WORD 'UNK_0xf123' codep=0x224c parp=0xf123
// ================================================

void UNK_0xf123() // UNK_0xf123
{
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  _gt_2ICONF(); // >2ICONF
  Push(cc__4); // 4
  Push(Read16(sp)); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  _st__ex__gt_(); // <!>
  Push(pp__i_4X4); // '4X4
  Push(Read16(Pop())); // @
  Push(pp__i__dot_BACKG); // '.BACKG
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x000a);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x000f);
  Push(Pop() + Pop()); // +
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x001a);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x002b);
  Push(Pop() + Pop()); // +
  _ex_VISWIN(); // !VISWIN
  _4X4CONTOUR(); // 4X4CONTOUR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  _dot_LOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xf173: WORD 'UNK_0xf175' codep=0x224c parp=0xf175
// ================================================

void UNK_0xf175() // UNK_0xf175
{
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  _gt_3ICONF(); // >3ICONF
  Push(pp__i_2X2); // '2X2
  Push(Read16(Pop())); // @
  Push(pp__i__dot_BACKG); // '.BACKG
  _ex_(); // !
  Push(2); // 2
  Push(Read16(sp)); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x0022);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x003a);
  Push(Pop() + Pop()); // +
  _ex_VISWIN(); // !VISWIN
  _2X2CONTOUR(); // 2X2CONTOUR
  UNK_0xee90(); // UNK_0xee90
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  _dot_LOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xf1bb: WORD 'UNK_0xf1bd' codep=0x224c parp=0xf1bd
// ================================================

void UNK_0xf1bd() // UNK_0xf1bd
{
  _gt_MAINVI(); // >MAINVI
  _gt_1ICONF(); // >1ICONF
  Push(pp__i_8X8); // '8X8
  Push(Read16(Pop())); // @
  Push(pp__i__dot_BACKG); // '.BACKG
  _st__ex__gt_(); // <!>
  Push(cc__8); // 8
  Push(Read16(sp)); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x000e);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x0016);
  Push(Pop() + Pop()); // +
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x0016);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x0029);
  Push(Pop() + Pop()); // +
  _ex_VISWIN(); // !VISWIN
  _8X8CONTOUR(); // 8X8CONTOUR
  _dot_LOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  DCLIPSE(); // DCLIPSE
}


// ================================================
// 0xf20b: WORD 'UNK_0xf20d' codep=0x224c parp=0xf20d
// ================================================

void UNK_0xf20d() // UNK_0xf20d
{
  Push(0x4a1c); Pust(0x0002);
}


// ================================================
// 0xf215: WORD 'UNK_0xf217' codep=0x224c parp=0xf217
// ================================================

void UNK_0xf217() // UNK_0xf217
{
  Push(0x4f68); Pust(0x0002);
}


// ================================================
// 0xf21f: WORD 'UNK_0xf221' codep=0x224c parp=0xf221
// ================================================

void UNK_0xf221() // UNK_0xf221
{
  Push(0x4f99); Pust(0x0002);
}


// ================================================
// 0xf229: WORD 'UNK_0xf22b' codep=0x224c parp=0xf22b
// ================================================

void UNK_0xf22b() // UNK_0xf22b
{
  Push(0x4e1b); Pust(0x0002);
}


// ================================================
// 0xf233: WORD 'UNK_0xf235' codep=0x224c parp=0xf235
// ================================================

void UNK_0xf235() // UNK_0xf235
{
  Push(0x4e36); Pust(0x0002);
}


// ================================================
// 0xf23d: WORD 'UNK_0xf23f' codep=0x224c parp=0xf23f
// ================================================

void UNK_0xf23f() // UNK_0xf23f
{
  Push(0x4e58); Pust(0x0002);
}


// ================================================
// 0xf247: WORD 'UNK_0xf249' codep=0x224c parp=0xf249
// ================================================

void UNK_0xf249() // UNK_0xf249
{
  Push(0x4e70); Pust(0x0002);
}


// ================================================
// 0xf251: WORD 'UNK_0xf253' codep=0x224c parp=0xf253
// ================================================

void UNK_0xf253() // UNK_0xf253
{
  Push(0x4f06); Pust(0x0002);
}


// ================================================
// 0xf25b: WORD 'UNK_0xf25d' codep=0x224c parp=0xf25d
// ================================================

void UNK_0xf25d() // UNK_0xf25d
{
  Push(0x4e9b); Pust(0x0002);
}


// ================================================
// 0xf265: WORD 'UNK_0xf267' codep=0x224c parp=0xf267
// ================================================

void UNK_0xf267() // UNK_0xf267
{
  Push(0x4eec); Pust(0x0002);
}


// ================================================
// 0xf26f: WORD 'UNK_0xf271' codep=0x224c parp=0xf271
// ================================================

void UNK_0xf271() // UNK_0xf271
{
  Push(0x4f2d); Pust(0x0002);
}


// ================================================
// 0xf279: WORD 'UNK_0xf27b' codep=0x224c parp=0xf27b
// ================================================

void UNK_0xf27b() // UNK_0xf27b
{
  Push(0x4eca); Pust(0x0002);
}


// ================================================
// 0xf283: WORD 'UNK_0xf285' codep=0x224c parp=0xf285
// ================================================

void UNK_0xf285() // UNK_0xf285
{
  Push(0x4f50); Pust(0x0002);
}

// 0xf28d: db 0x4c 0x22 0x16 0x16 0x7f 0x4f 0x02 0x00 0x90 0x16 'L"  O    '

// ================================================
// 0xf297: WORD 'WPHRASE' codep=0x4b3b parp=0xf2a3
// ================================================
// 0xf2a3: db 0x0e 0x00 0x6e 0x3a 0x00 0x00 0x21 0xf2 0x01 0x00 0x17 0xf2 0x02 0x00 0x21 0xf2 0x03 0x00 0x2b 0xf2 0x04 0x00 0x35 0xf2 0x05 0x00 0x3f 0xf2 0x06 0x00 0x49 0xf2 0x07 0x00 0x53 0xf2 0x08 0x00 0x5d 0xf2 0x09 0x00 0x67 0xf2 0x0a 0x00 0x71 0xf2 0x0b 0x00 0x7b 0xf2 0x0c 0x00 0x85 0xf2 0x0d 0x00 0x8f 0xf2 '  n:  !       !   +   5   ?   I   S   ]   g   q   {         '

// ================================================
// 0xf2df: WORD '(.STORM)' codep=0x224c parp=0xf2ec
// ================================================

void _ro__dot_STORM_rc_() // (.STORM)
{
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  UNK_0xf20d(); // UNK_0xf20d
  goto label2;

  label1:
  Push(pp__n_STORM); // #STORM
  Push(Read16(Pop())); // @
  switch(Pop()) // WPHRASE
  {
  case 0:
    UNRAVEL(); // UNRAVEL
    break;
  case 1:
    UNK_0xf221(); // UNK_0xf221
    break;
  case 2:
    UNK_0xf217(); // UNK_0xf217
    break;
  case 3:
    UNK_0xf221(); // UNK_0xf221
    break;
  case 4:
    UNK_0xf22b(); // UNK_0xf22b
    break;
  case 5:
    UNK_0xf235(); // UNK_0xf235
    break;
  case 6:
    UNK_0xf23f(); // UNK_0xf23f
    break;
  case 7:
    UNK_0xf249(); // UNK_0xf249
    break;
  case 8:
    UNK_0xf253(); // UNK_0xf253
    break;
  case 9:
    UNK_0xf25d(); // UNK_0xf25d
    break;
  case 10:
    UNK_0xf267(); // UNK_0xf267
    break;
  case 11:
    UNK_0xf271(); // UNK_0xf271
    break;
  case 12:
    UNK_0xf27b(); // UNK_0xf27b
    break;
  case 13:
    UNK_0xf285(); // UNK_0xf285
    break;
  }

  label2:
  UNK_0xee72(); // UNK_0xee72
}


// ================================================
// 0xf306: WORD '.ROCK' codep=0x224c parp=0xf310
// ================================================

void _dot_ROCK() // .ROCK
{
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_at_(); // 1.5@
  UNK_0xee72(); // UNK_0xee72
  SPACE(); // SPACE

  label1:
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  UNK_0xee72(); // UNK_0xee72
}


// ================================================
// 0xf328: WORD '.LIQUID' codep=0x224c parp=0xf334
// ================================================

void _dot_LIQUID() // .LIQUID
{
  Push(pp_O_dash_COLOR); // O-COLOR
  _1_dot_5_at_(); // 1.5@
  UNK_0xee72(); // UNK_0xee72
  SPACE(); // SPACE
  Push(0x4b60); Pust(0x0002);
  UNK_0xee72(); // UNK_0xee72
  GCR(); // GCR
  _dot_ROCK(); // .ROCK
}


// ================================================
// 0xf34a: WORD '.CRYSTAL' codep=0x224c parp=0xf357
// ================================================

void _dot_CRYSTAL() // .CRYSTAL
{
  Push(0x4b77); Pust(0x0002);
  UNK_0xee72(); // UNK_0xee72
}


// ================================================
// 0xf361: WORD '.ICE' codep=0x224c parp=0xf36a
// ================================================

void _dot_ICE() // .ICE
{
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  UNK_0xee72(); // UNK_0xee72
  GCR(); // GCR
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_at_(); // 1.5@
  UNK_0xee72(); // UNK_0xee72
  SPACE(); // SPACE
  Push(0x4a04); Pust(0x0002);
  UNK_0xee72(); // UNK_0xee72
}


// ================================================
// 0xf384: WORD '.MOLTEN' codep=0x224c parp=0xf390
// ================================================

void _dot_MOLTEN() // .MOLTEN
{
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  UNK_0xee72(); // UNK_0xee72
  GCR(); // GCR
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_at_(); // 1.5@
  UNK_0xee72(); // UNK_0xee72
}


// ================================================
// 0xf3a0: WORD '.CARPET' codep=0x224c parp=0xf3ac
// ================================================

void _dot_CARPET() // .CARPET
{
  Push(pp_P_dash_CARP); // P-CARP
  _1_dot_5_at_(); // 1.5@
  UNK_0xee82(); // UNK_0xee82
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  PRINT(", ", 2); // (.")
  GCR(); // GCR
  Push(0x4de8); Pust(0x0002);
  UNK_0xee72(); // UNK_0xee72
  SPACE(); // SPACE
  UNK_0xee72(); // UNK_0xee72
  SPACE(); // SPACE
  Push(0x4dcd); Pust(0x0002);
  UNK_0xee72(); // UNK_0xee72

  label1:
  PRINT(".", 1); // (.")
  GCR(); // GCR
}


// ================================================
// 0xf3dd: WORD '/SURF' codep=0x4b3b parp=0xf3e7
// ================================================
// 0xf3e7: db 0x05 0x00 0x48 0x3a 0x00 0x00 0x57 0xf3 0x02 0x00 0x34 0xf3 0x03 0x00 0x6a 0xf3 0x04 0x00 0x90 0xf3 0x05 0x00 0x10 0xf3 '  H:  W   4   j         '

// ================================================
// 0xf3ff: WORD '.SURFACE' codep=0x224c parp=0xf40c
// ================================================

void _dot_SURFACE() // .SURFACE
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  LoadData("UNK_0xecfa"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  switch(Pop()) // /SURF
  {
  case 0:
    NOP(); // NOP
    break;
  case 2:
    _dot_CRYSTAL(); // .CRYSTAL
    break;
  case 3:
    _dot_LIQUID(); // .LIQUID
    break;
  case 4:
    _dot_ICE(); // .ICE
    break;
  case 5:
    _dot_MOLTEN(); // .MOLTEN
    break;
  }
  _dot_CARPET(); // .CARPET
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf41c: WORD 'UNK_0xf41e' codep=0x224c parp=0xf41e
// ================================================

void UNK_0xf41e() // UNK_0xf41e
{
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf424: WORD 'UNK_0xf426' codep=0x224c parp=0xf426
// ================================================

void UNK_0xf426() // UNK_0xf426
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf42c: WORD 'UNK_0xf42e' codep=0x224c parp=0xf42e
// ================================================

void UNK_0xf42e() // UNK_0xf42e
{
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  Push(cc_UNK_0xed42); // UNK_0xed42
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  LoadData("UNK_0xed46"); // from 'COMPOUNDS   '
  _1_dot_5_at_(); // 1.5@
  UNK_0xee72(); // UNK_0xee72
}


// ================================================
// 0xf440: WORD 'UNK_0xf442' codep=0x224c parp=0xf442
// ================================================

void UNK_0xf442() // UNK_0xf442
{
  UNK_0xf41e(); // UNK_0xf41e
  PRINT("ATMO:", 5); // (.")
  UNK_0xf426(); // UNK_0xf426
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  UNK_0xf42e(); // UNK_0xf42e
  GCR(); // GCR
}


// ================================================
// 0xf458: WORD 'UNK_0xf45a' codep=0x224c parp=0xf45a
// ================================================

void UNK_0xf45a() // UNK_0xf45a
{
  UNK_0xf41e(); // UNK_0xf41e
  PRINT("HYDRO:", 6); // (.")
  UNK_0xf426(); // UNK_0xf426
  Push(pp_HYDRO); // HYDRO
  Push(Read16(Pop())); // @
  UNK_0xf42e(); // UNK_0xf42e
  GCR(); // GCR
}


// ================================================
// 0xf471: WORD 'UNK_0xf473' codep=0x224c parp=0xf473
// ================================================

void UNK_0xf473() // UNK_0xf473
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
}


// ================================================
// 0xf479: WORD 'UNK_0xf47b' codep=0x224c parp=0xf47b
// ================================================

void UNK_0xf47b() // UNK_0xf47b
{
  UNK_0xf41e(); // UNK_0xf41e
  PRINT("TERRAIN:", 8); // (.")
  UNK_0xf426(); // UNK_0xf426
  _dot_SURFACE(); // .SURFACE
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(0x001e);
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xf49e: WORD 'UNK_0xf4a0' codep=0x224c parp=0xf4a0
// ================================================

void UNK_0xf4a0() // UNK_0xf4a0
{
  GCR(); // GCR
  UNK_0xf41e(); // UNK_0xf41e
  PRINT("SKY:", 4); // (.")
  UNK_0xf426(); // UNK_0xf426
  _ro__dot_STORM_rc_(); // (.STORM)
  GCR(); // GCR
}


// ================================================
// 0xf4b3: WORD 'UNK_0xf4b5' codep=0x224c parp=0xf4b5
// ================================================

void UNK_0xf4b5() // UNK_0xf4b5
{
  UNK_0xf41e(); // UNK_0xf41e
  PRINT("TEMPERATURE:", 12); // (.")
  UNK_0xf426(); // UNK_0xf426
  UNK_0xee22(); // UNK_0xee22
  UNK_0xf41e(); // UNK_0xf41e
  PRINT(" GRAVITY:", 9); // (.")
  UNK_0xf426(); // UNK_0xf426
  UNK_0xed4e(); // UNK_0xed4e
  GCR(); // GCR
}


// ================================================
// 0xf4e0: WORD 'UNK_0xf4e2' codep=0x224c parp=0xf4e2
// ================================================

void UNK_0xf4e2() // UNK_0xf4e2
{
  UNK_0xf473(); // UNK_0xf473
  Push(cc__6); // 6
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
  UNK_0xf4a0(); // UNK_0xf4a0
  UNK_0xf4b5(); // UNK_0xf4b5
  UNK_0xf442(); // UNK_0xf442
  UNK_0xf45a(); // UNK_0xf45a
  UNK_0xf47b(); // UNK_0xf47b
}


// ================================================
// 0xf4f6: WORD 'MAPS' codep=0x224c parp=0xf4ff
// ================================================
// entry

void MAPS() // MAPS
{
  Push(pp_FQUIT); // FQUIT
  _099(); // 099
  UNK_0xf4e2(); // UNK_0xf4e2
  Push(pp_ESC_dash_EN); // ESC-EN
  OFF(); // OFF
  Push(pp_NOF); // NOF
  ON(); // ON
  UNK_0xf123(); // UNK_0xf123
  UNK_0xee66(); // UNK_0xee66
  if (Pop() == 0) goto label1;
  UNK_0xf175(); // UNK_0xf175
  UNK_0xee66(); // UNK_0xee66
  if (Pop() == 0) goto label1;
  UNK_0xf123(); // UNK_0xf123
  UNK_0xee4e(); // UNK_0xee4e
  Pop(); // DROP

  label1:
  UNK_0xf1bd(); // UNK_0xf1bd
  Push(pp_ESC_dash_EN); // ESC-EN
  ON(); // ON
  Push(pp_NOF); // NOF
  _099(); // 099
}


// ================================================
// 0xf52f: WORD '.STORM' codep=0x224c parp=0xf53a
// ================================================
// entry

void _dot_STORM() // .STORM
{
  UNK_0xf473(); // UNK_0xf473
  UNK_0xf426(); // UNK_0xf426
  _ro__dot_STORM_rc_(); // (.STORM)
}

// 0xf542: db 0x4d 0x41 0x50 0x53 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'MAPS-VOC______________________ '
  