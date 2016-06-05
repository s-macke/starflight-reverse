// ====== OVERLAY 'STP-OV' ======

#include"cpu.h"

// store offset = 0xf070
// overlay size   = 0x04f0

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xf086  codep:0x7420 parp:0xf086 size:0x0003 C-string:'UNK_0xf086'
// 1870:      UNK_0xf08b  codep:0x1d29 parp:0xf08b size:0x0002 C-string:'UNK_0xf08b'
// 1871:      UNK_0xf08f  codep:0x7420 parp:0xf08f size:0x0003 C-string:'UNK_0xf08f'
// 1872:      UNK_0xf094  codep:0x7420 parp:0xf094 size:0x0033 C-string:'UNK_0xf094'
// 1873:           MP'ER  codep:0x224c parp:0xf0d1 size:0x0093 C-string:'MP_i_ER'
// 1874:      UNK_0xf166  codep:0x224c parp:0xf166 size:0x0010 C-string:'UNK_0xf166'
// 1875:      UNK_0xf178  codep:0x1d29 parp:0xf178 size:0x0002 C-string:'UNK_0xf178'
// 1876:      UNK_0xf17c  codep:0x1d29 parp:0xf17c size:0x0002 C-string:'UNK_0xf17c'
// 1877:      UNK_0xf180  codep:0x1d29 parp:0xf180 size:0x0002 C-string:'UNK_0xf180'
// 1878:      UNK_0xf184  codep:0x1d29 parp:0xf184 size:0x0002 C-string:'UNK_0xf184'
// 1879:      UNK_0xf188  codep:0x1d29 parp:0xf188 size:0x0002 C-string:'UNK_0xf188'
// 1880:      UNK_0xf18c  codep:0x2214 parp:0xf18c size:0x0002 C-string:'UNK_0xf18c'
// 1881:      UNK_0xf190  codep:0x1d29 parp:0xf190 size:0x0002 C-string:'UNK_0xf190'
// 1882:      UNK_0xf194  codep:0x224c parp:0xf194 size:0x0034 C-string:'UNK_0xf194'
// 1883:      UNK_0xf1ca  codep:0x224c parp:0xf1ca size:0x0008 C-string:'UNK_0xf1ca'
// 1884:      UNK_0xf1d4  codep:0x224c parp:0xf1d4 size:0x0010 C-string:'UNK_0xf1d4'
// 1885:      UNK_0xf1e6  codep:0x224c parp:0xf1e6 size:0x0010 C-string:'UNK_0xf1e6'
// 1886:      UNK_0xf1f8  codep:0x224c parp:0xf1f8 size:0x0050 C-string:'UNK_0xf1f8'
// 1887:          COLORS  codep:0x4b3b parp:0xf253 size:0x0020 C-string:'COLORS'
// 1888:             #>A  codep:0x1d29 parp:0xf27b size:0x000e C-string:'_n__gt_A'
// 1889:      UNK_0xf28b  codep:0x224c parp:0xf28b size:0x0010 C-string:'UNK_0xf28b'
// 1890:      UNK_0xf29d  codep:0x224c parp:0xf29d size:0x0024 C-string:'UNK_0xf29d'
// 1891:      UNK_0xf2c3  codep:0x224c parp:0xf2c3 size:0x0006 C-string:'UNK_0xf2c3'
// 1892:      UNK_0xf2cb  codep:0x224c parp:0xf2cb size:0x000e C-string:'UNK_0xf2cb'
// 1893:      UNK_0xf2db  codep:0x224c parp:0xf2db size:0x0018 C-string:'UNK_0xf2db'
// 1894:      UNK_0xf2f5  codep:0x224c parp:0xf2f5 size:0x0066 C-string:'UNK_0xf2f5'
// 1895:      UNK_0xf35d  codep:0x1d29 parp:0xf35d size:0x0006 C-string:'UNK_0xf35d'
// 1896:      UNK_0xf365  codep:0x224c parp:0xf365 size:0x0028 C-string:'UNK_0xf365'
// 1897:      UNK_0xf38f  codep:0x224c parp:0xf38f size:0x002b C-string:'UNK_0xf38f'
// 1898:      UNK_0xf3bc  codep:0x224c parp:0xf3bc size:0x0056 C-string:'UNK_0xf3bc'
// 1899:      UNK_0xf414  codep:0x224c parp:0xf414 size:0x0014 C-string:'UNK_0xf414'
// 1900:      UNK_0xf42a  codep:0x224c parp:0xf42a size:0x0038 C-string:'UNK_0xf42a'
// 1901:      UNK_0xf464  codep:0x224c parp:0xf464 size:0x0044 C-string:'UNK_0xf464'
// 1902:      UNK_0xf4aa  codep:0x224c parp:0xf4aa size:0x0022 C-string:'UNK_0xf4aa'
// 1903:              SP  codep:0x224c parp:0xf4d3 size:0x001e C-string:'SP'
// 1904:              2N  codep:0x224c parp:0xf4f8 size:0x0068 C-string:'_2N'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf08b[2] = {0x3a, 0x20}; // UNK_0xf08b
unsigned char UNK_0xf178[2] = {0x3a, 0x20}; // UNK_0xf178
unsigned char UNK_0xf17c[2] = {0x3a, 0x20}; // UNK_0xf17c
unsigned char UNK_0xf180[2] = {0x3a, 0x20}; // UNK_0xf180
unsigned char UNK_0xf184[2] = {0x3a, 0x20}; // UNK_0xf184
unsigned char UNK_0xf188[2] = {0x3a, 0x20}; // UNK_0xf188
unsigned char UNK_0xf190[2] = {0x3a, 0x20}; // UNK_0xf190
unsigned char _n__gt_A[14] = {0xd7, 0x4f, 0x3e, 0x50, 0x4a, 0x50, 0x55, 0x50, 0xce, 0x4f, 0x28, 0x50, 0x0e, 0x50}; // #>A
unsigned char UNK_0xf35d[6] = {0x50, 0x55, 0x55, 0x32, 0x00, 0x00}; // UNK_0xf35d

const unsigned short int cc_UNK_0xf18c = 0x0014; // UNK_0xf18c


// 0xf082: db 0x4c 0x00 'L '

// ================================================
// 0xf084: WORD 'UNK_0xf086' codep=0x7420 parp=0xf086
// ================================================
// 0xf086: db 0x17 0x0b 0x01 '   '

// ================================================
// 0xf089: WORD 'UNK_0xf08b' codep=0x1d29 parp=0xf08b
// ================================================
// 0xf08b: db 0x3a 0x20 ': '

// ================================================
// 0xf08d: WORD 'UNK_0xf08f' codep=0x7420 parp=0xf08f
// ================================================
// 0xf08f: db 0x14 0x14 0x01 '   '

// ================================================
// 0xf092: WORD 'UNK_0xf094' codep=0x7420 parp=0xf094
// ================================================
// 0xf094: db 0x14 0x17 0x01 0x4c 0x22 0xdc 0x1b 0x03 0x52 0x45 0x44 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x4f 0x52 0x41 0x4e 0x47 0x45 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x59 0x45 0x4c 0x4c 0x4f 0x57 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x57 0x48 0x49 0x54 0x45 0x90 0x16 '   L"   RED  L"   ORANGE  L"   YELLOW  L"   WHITE  '

// ================================================
// 0xf0c7: WORD 'MP'ER' codep=0x224c parp=0xf0d1
// ================================================

void MP_i_ER() // MP'ER
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xf08f(); // UNK_0xf08f
  C_at_(); // C@
  DUP(); // DUP
  Push(0x0080);
  _st_(); // <
  Push(pp_UNK_0xf08b); // UNK_0xf08b
  _ex_(); // !
  Push(0x0080);
  Push(Pop() | Pop()); // OR
  UNK_0xf08f(); // UNK_0xf08f
  C_ex_(); // C!
  Push(0x0064);
  UNK_0xf094(); // UNK_0xf094
  C_ex_(); // C!
  UNK_0xf094(); // UNK_0xf094
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  UNK_0xf094(); // UNK_0xf094
  Push(Pop()+1); // 1+
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  _star_ARREST(); // *ARREST
  _gt_C_plus_S(); // >C+S
  INST_dash_X(); // INST-X
  D_ex_(); // D!
  ICLOSE(); // ICLOSE
  _star_ARREST(); // *ARREST
  Push(0xcb0c);
  MODULE(); // MODULE
  Push(pp__ask_AUTO); // ?AUTO
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  if (Pop() == 0) Push(1); else Push(0); // NOT

  label1:
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
}

// 0xf137: db 0x4c 0x22 0xdc 0x1b 0x05 0x47 0x52 0x45 0x45 0x4e 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x09 0x44 0x41 0x52 0x4b 0x20 0x42 0x4c 0x55 0x45 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x0a 0x4c 0x49 0x47 0x48 0x54 0x20 0x42 0x4c 0x55 0x45 0x90 0x16 'L"   GREEN  L"   DARK BLUE  L"   LIGHT BLUE  '

// ================================================
// 0xf164: WORD 'UNK_0xf166' codep=0x224c parp=0xf166
// ================================================

void UNK_0xf166() // UNK_0xf166
{
  _gt_C_plus_S(); // >C+S
  PHRASE_do_(); // PHRASE$
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf176: WORD 'UNK_0xf178' codep=0x1d29 parp=0xf178
// ================================================
// 0xf178: db 0x3a 0x20 ': '

// ================================================
// 0xf17a: WORD 'UNK_0xf17c' codep=0x1d29 parp=0xf17c
// ================================================
// 0xf17c: db 0x3a 0x20 ': '

// ================================================
// 0xf17e: WORD 'UNK_0xf180' codep=0x1d29 parp=0xf180
// ================================================
// 0xf180: db 0x3a 0x20 ': '

// ================================================
// 0xf182: WORD 'UNK_0xf184' codep=0x1d29 parp=0xf184
// ================================================
// 0xf184: db 0x3a 0x20 ': '

// ================================================
// 0xf186: WORD 'UNK_0xf188' codep=0x1d29 parp=0xf188
// ================================================
// 0xf188: db 0x3a 0x20 ': '

// ================================================
// 0xf18a: WORD 'UNK_0xf18c' codep=0x2214 parp=0xf18c
// ================================================
// 0xf18c: db 0x14 0x00 '  '

// ================================================
// 0xf18e: WORD 'UNK_0xf190' codep=0x1d29 parp=0xf190
// ================================================
// 0xf190: db 0x3a 0x20 ': '

// ================================================
// 0xf192: WORD 'UNK_0xf194' codep=0x224c parp=0xf194
// ================================================

void UNK_0xf194() // UNK_0xf194
{
  Push(0x69fe); Pust(0x0002);
  UNK_0xf166(); // UNK_0xf166
  _dot_TTY(); // .TTY
  Push(0x6a2c); Pust(0x0002);
  UNK_0xf166(); // UNK_0xf166
  _dot_TTY(); // .TTY
  PRINT("]", 1); // (.")
  Push(pp_UNK_0xf178); // UNK_0xf178
  _ask_(); // ?
  PRINT("* ^", 3); // (.")
  Push(pp_UNK_0xf17c); // UNK_0xf17c
  _ask_(); // ?
}

// 0xf1bc: db 0x4c 0x22 0x8a 0xf1 0x8f 0x3b 0x4c 0x0f 0x92 0x0f 0x90 0x16 'L"   ;L     '

// ================================================
// 0xf1c8: WORD 'UNK_0xf1ca' codep=0x224c parp=0xf1ca
// ================================================

void UNK_0xf1ca() // UNK_0xf1ca
{
  Push(0x000a);
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xf1d2: WORD 'UNK_0xf1d4' codep=0x224c parp=0xf1d4
// ================================================

void UNK_0xf1d4() // UNK_0xf1d4
{
  Push(0); // 0
  Push(0x0016);
  RRND(); // RRND
  UNK_0xf1ca(); // UNK_0xf1ca
  Push(pp_UNK_0xf178); // UNK_0xf178
  _ex_(); // !
}


// ================================================
// 0xf1e4: WORD 'UNK_0xf1e6' codep=0x224c parp=0xf1e6
// ================================================

void UNK_0xf1e6() // UNK_0xf1e6
{
  Push(0); // 0
  Push(0x0013);
  RRND(); // RRND
  UNK_0xf1ca(); // UNK_0xf1ca
  Push(pp_UNK_0xf17c); // UNK_0xf17c
  _ex_(); // !
}


// ================================================
// 0xf1f6: WORD 'UNK_0xf1f8' codep=0x224c parp=0xf1f8
// ================================================

void UNK_0xf1f8() // UNK_0xf1f8
{
  Push(0); // 0
  Push(cc__3); // 3
  RRND(); // RRND
  _gt_R(); // >R
  R_at_(); // R@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  UNK_0xf1d4(); // UNK_0xf1d4
  Push(0); // 0
  Push(cc__5); // 5
  RRND(); // RRND
  UNK_0xf1ca(); // UNK_0xf1ca
  Push(pp_UNK_0xf17c); // UNK_0xf17c
  _ex_(); // !
  goto label4;

  label1:
  R_at_(); // R@
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(0); // 0
  Push(cc__5); // 5
  RRND(); // RRND
  UNK_0xf1ca(); // UNK_0xf1ca
  goto label3;

  label2:
  Push(0x0012);
  Push(0x0016);
  RRND(); // RRND
  UNK_0xf1ca(); // UNK_0xf1ca

  label3:
  Push(pp_UNK_0xf178); // UNK_0xf178
  _ex_(); // !
  UNK_0xf1e6(); // UNK_0xf1e6

  label4:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xf248: WORD 'COLORS' codep=0x4b3b parp=0xf253
// ================================================
// 0xf253: db 0x07 0x00 0x6e 0x3a 0x04 0x00 0x99 0xf0 0x06 0x00 0xa3 0xf0 0x0e 0x00 0xb0 0xf0 0x0f 0x00 0xbd 0xf0 0x0a 0x00 0x39 0xf1 0x0b 0x00 0x55 0xf1 0x09 0x00 0x45 0xf1 '  n:                  9   U   E '

// ================================================
// 0xf273: WORD '#>A' codep=0x1d29 parp=0xf27b
// ================================================
// 0xf27b: db 0xd7 0x4f 0x3e 0x50 0x4a 0x50 0x55 0x50 0xce 0x4f 0x28 0x50 0x0e 0x50 ' O>PJPUP O(P P'

// ================================================
// 0xf289: WORD 'UNK_0xf28b' codep=0x224c parp=0xf28b
// ================================================

void UNK_0xf28b() // UNK_0xf28b
{
  Push(0); // 0
  Push(cc__7); // 7
  RRND(); // RRND
  Push(Pop()*2); // 2*
  Push(pp__n__gt_A); // #>A
  Push(Pop() + Pop()); // +
  _at_EXECUTE(); // @EXECUTE
}


// ================================================
// 0xf29b: WORD 'UNK_0xf29d' codep=0x224c parp=0xf29d
// ================================================

void UNK_0xf29d() // UNK_0xf29d
{
  CLICK(); // CLICK
  UNK_0xf1f8(); // UNK_0xf1f8
  UNK_0xf28b(); // UNK_0xf28b
  Push(pp_UNK_0xf180); // UNK_0xf180
  _ex_(); // !

  label2:
  UNK_0xf28b(); // UNK_0xf28b
  Push(pp_UNK_0xf180); // UNK_0xf180
  Push(Read16(Pop())); // @
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  goto label2;

  label1:
  Push(pp_UNK_0xf184); // UNK_0xf184
  _ex_(); // !
}


// ================================================
// 0xf2c1: WORD 'UNK_0xf2c3' codep=0x224c parp=0xf2c3
// ================================================

void UNK_0xf2c3() // UNK_0xf2c3
{
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xf2c9: WORD 'UNK_0xf2cb' codep=0x224c parp=0xf2cb
// ================================================

void UNK_0xf2cb() // UNK_0xf2cb
{
  UNK_0xf2c3(); // UNK_0xf2c3
  Push(cc_UNK_0xf18c); // UNK_0xf18c
  UNK_0xf2c3(); // UNK_0xf2c3
  Push(Pop() + Pop()); // +
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf2d9: WORD 'UNK_0xf2db' codep=0x224c parp=0xf2db
// ================================================

void UNK_0xf2db() // UNK_0xf2db
{
  Push(pp_UNK_0xf178); // UNK_0xf178
  Push(Read16(Pop())); // @
  UNK_0xf2cb(); // UNK_0xf2cb
  Push(pp_UNK_0xf17c); // UNK_0xf17c
  Push(Read16(Pop())); // @
  UNK_0xf2cb(); // UNK_0xf2cb
  Push(cc_UNK_0xf18c); // UNK_0xf18c
  UNK_0xf2c3(); // UNK_0xf2c3
  Push(pp__star_GLOBAL); // *GLOBAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_(); // ?ICONS-
}


// ================================================
// 0xf2f3: WORD 'UNK_0xf2f5' codep=0x224c parp=0xf2f5
// ================================================

void UNK_0xf2f5() // UNK_0xf2f5
{
  INIT_dash_IC(); // INIT-IC
  _star_SECS(); // *SECS
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  _plus_ICONBO(); // +ICONBO
  UNK_0xf2db(); // UNK_0xf2db
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  Push(pp_UNK_0xf188); // UNK_0xf188
  _099(); // 099
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  POINT_gt_I(); // POINT>I
  _at_IC(); // @IC
  Push(pp_UNK_0xf180); // UNK_0xf180
  Push(Read16(Pop())); // @
  _eq_(); // =
  _at_IC(); // @IC
  Push(pp_UNK_0xf184); // UNK_0xf184
  Push(Read16(Pop())); // @
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  _at_ID(); // @ID
  Push(cc_SYS_dash_ICO); // SYS-ICO
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  DUP(); // DUP
  if (Pop() == 0) goto label2;
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  UNK_0xf086(); // UNK_0xf086
  C_at_(); // C@
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE

  label2:
  if (Pop() == 0) goto label3;
  Push(1); // 1
  Push(pp_UNK_0xf188); // UNK_0xf188
  _plus__ex_(); // +!

  label3:
  i++;
  } while(i<imax); // (LOOP) 0xffbc


  label1:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf35b: WORD 'UNK_0xf35d' codep=0x1d29 parp=0xf35d
// ================================================
// 0xf35d: db 0x50 0x55 0x55 0x32 0x00 0x00 'PUU2  '

// ================================================
// 0xf363: WORD 'UNK_0xf365' codep=0x224c parp=0xf365
// ================================================

void UNK_0xf365() // UNK_0xf365
{
  Push(pp_UNK_0xf188); // UNK_0xf188
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
  Push(pp_UNK_0xf188); // UNK_0xf188
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf35d); // UNK_0xf35d
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  _st_(); // <
  return;

  label1:
  Push(cc_FALSE); // FALSE
}


// ================================================
// 0xf38d: WORD 'UNK_0xf38f' codep=0x224c parp=0xf38f
// ================================================

void UNK_0xf38f() // UNK_0xf38f
{
  Push(0x6a4b); Pust(0x0002);
  UNK_0xf166(); // UNK_0xf166
  _dot_TTY(); // .TTY
  Push(pp_UNK_0xf180); // UNK_0xf180
  Push(Read16(Pop())); // @
  COLORS(); // COLORS
  CR(); // CR
  PRINT("AND ", 4); // (.")
  Push(pp_UNK_0xf184); // UNK_0xf184
  Push(Read16(Pop())); // @
  COLORS(); // COLORS
  PRINT(" STARS?", 7); // (.")
}


// ================================================
// 0xf3ba: WORD 'UNK_0xf3bc' codep=0x224c parp=0xf3bc
// ================================================

void UNK_0xf3bc() // UNK_0xf3bc
{
  Push(0x6a6a); Pust(0x0002);
  UNK_0xf166(); // UNK_0xf166
  _dot_TTY(); // .TTY
  Push(cc__dash_1); // -1
  Push(pp__dash_AIN); // -AIN
  _ex_(); // !
  Push(0x000a);
  Push(0xb6fd);
  MODULE(); // MODULE
  NULL(); // NULL
  ROT(); // ROT
  COUNT(); // COUNT
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  SWAP(); // SWAP
  Push(0x000a);
  U_star_(); // U*
  ROT(); // ROT
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(i); // I
  C_at_(); // C@
  Push(0x0030);
  _dash_(); // -
  Push(0); // 0
  D_plus_(); // D+
  i++;
  } while(i<imax); // (LOOP) 0xffde

  Pop(); // DROP
  Push(pp_UNK_0xf190); // UNK_0xf190
  _ex_(); // !
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xf412: WORD 'UNK_0xf414' codep=0x224c parp=0xf414
// ================================================

void UNK_0xf414() // UNK_0xf414
{
  CTINIT(); // CTINIT
  Push(0x6a7f); Pust(0x0002);
  UNK_0xf166(); // UNK_0xf166
  _dot_TTY(); // .TTY
  UNK_0xf38f(); // UNK_0xf38f
  TTY_dash_SCR(); // TTY-SCR
  UNK_0xf3bc(); // UNK_0xf3bc
}


// ================================================
// 0xf428: WORD 'UNK_0xf42a' codep=0x224c parp=0xf42a
// ================================================

void UNK_0xf42a() // UNK_0xf42a
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  if (Pop() == 0) goto label1;
  Push(0x6a95); Pust(0x0002);
  UNK_0xf166(); // UNK_0xf166
  _dot_TTY(); // .TTY

  label1:
  TIME(); // TIME
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(pp_GLOBALS); // GLOBALS
  _ex_(); // !

  label2:
  UNK_0xf29d(); // UNK_0xf29d
  UNK_0xf2f5(); // UNK_0xf2f5
  UNK_0xf365(); // UNK_0xf365
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  SAVE_dash_OV(); // SAVE-OV
  CTINIT(); // CTINIT
  UNK_0xf194(); // UNK_0xf194
  UNK_0xf38f(); // UNK_0xf38f
  TTY_dash_SCR(); // TTY-SCR
  UNK_0xf3bc(); // UNK_0xf3bc
}


// ================================================
// 0xf462: WORD 'UNK_0xf464' codep=0x224c parp=0xf464
// ================================================

void UNK_0xf464() // UNK_0xf464
{
  CTINIT(); // CTINIT
  Push(0x6ac4); Pust(0x0002);
  UNK_0xf166(); // UNK_0xf166
  _dot_TTY(); // .TTY
  UNK_0xf38f(); // UNK_0xf38f
  Push(0x6adb); Pust(0x0002);
  UNK_0xf166(); // UNK_0xf166
  _dot_TTY(); // .TTY
  Push(pp_UNK_0xf190); // UNK_0xf190
  _ask_(); // ?
  Push(0x6af8); Pust(0x0002);
  UNK_0xf166(); // UNK_0xf166
  _dot_TTY(); // .TTY
  _i_KEY(); // 'KEY
  Pop(); // DROP

  label2:
  XYSCAN(); // XYSCAN
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label1;
  BEEP(); // BEEP

  label1:
  SWAP(); // SWAP
  Pop(); // DROP
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label2;
  Push(1); // 1
  _eq_(); // =
}


// ================================================
// 0xf4a8: WORD 'UNK_0xf4aa' codep=0x224c parp=0xf4aa
// ================================================

void UNK_0xf4aa() // UNK_0xf4aa
{

  label2:
  UNK_0xf464(); // UNK_0xf464
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf414(); // UNK_0xf414
  goto label2;

  label1:
  Push(pp_UNK_0xf188); // UNK_0xf188
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf190); // UNK_0xf190
  Push(Read16(Pop())); // @
  _eq_(); // =
  Push(pp__ask_SECURE); // ?SECURE
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf4cc: WORD 'SP' codep=0x224c parp=0xf4d3
// ================================================

void SP() // SP
{
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  UNK_0xf42a(); // UNK_0xf42a
  UNK_0xf4aa(); // UNK_0xf4aa
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(pp__ask_SECURE); // ?SECURE
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=

  label1:
  Push(pp_ESC_dash_EN); // ESC-EN
  ON(); // ON
  Push(pp__ask_SECURE); // ?SECURE
  _099(); // 099
}


// ================================================
// 0xf4f1: WORD '2N' codep=0x224c parp=0xf4f8
// ================================================

void _2N() // 2N
{
  UNK_0xf42a(); // UNK_0xf42a
  Push(pp_UNK_0xf188); // UNK_0xf188
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf190); // UNK_0xf190
  Push(Read16(Pop())); // @
  _eq_(); // =
  if (Pop() == 0) return;
  Push(pp__ask_SECURE); // ?SECURE
  _099(); // 099
  CTERASE(); // CTERASE
  Push(pp_UNK_0xf08b); // UNK_0xf08b
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xf08f(); // UNK_0xf08f
  C_at_(); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  UNK_0xf08f(); // UNK_0xf08f
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}

// 0xf52c: db 0x53 0x54 0x50 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x5c 0x20 0x53 0x45 0x43 0x55 0x52 0x49 0x54 0x59 0x4f 0x56 0x52 0x2d 0x20 0x72 0x00 'STP-VOC_________________________ for\ SECURITYOVR- r '
  