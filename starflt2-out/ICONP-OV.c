// ====== OVERLAY 'ICONP-OV' ======
// store offset = 0xf0b0
// overlay size   = 0x04b0

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xf0cb  codep:0x7420 parp:0xf0cb size:0x0003 C-string:'UNK_0xf0cb'
// 1870:      UNK_0xf0d0  codep:0x7394 parp:0xf0d0 size:0x0006 C-string:'UNK_0xf0d0'
// 1871:      UNK_0xf0d8  codep:0x7420 parp:0xf0d8 size:0x0003 C-string:'UNK_0xf0d8'
// 1872:      UNK_0xf0dd  codep:0x7394 parp:0xf0dd size:0x0006 C-string:'UNK_0xf0dd'
// 1873:      UNK_0xf0e5  codep:0x7420 parp:0xf0e5 size:0x0003 C-string:'UNK_0xf0e5'
// 1874:      UNK_0xf0ea  codep:0x7420 parp:0xf0ea size:0x0003 C-string:'UNK_0xf0ea'
// 1875:      UNK_0xf0ef  codep:0x7394 parp:0xf0ef size:0x000b C-string:'UNK_0xf0ef'
// 1876:      UNK_0xf0fc  codep:0x7394 parp:0xf0fc size:0x001c C-string:'UNK_0xf0fc'
// 1877:      UNK_0xf11a  codep:0x2214 parp:0xf11a size:0x0006 C-string:'UNK_0xf11a'
// 1878:      UNK_0xf122  codep:0x2214 parp:0xf122 size:0x0006 C-string:'UNK_0xf122'
// 1879:      UNK_0xf12a  codep:0x2214 parp:0xf12a size:0x0002 C-string:'UNK_0xf12a'
// 1880:      UNK_0xf12e  codep:0x2214 parp:0xf12e size:0x0002 C-string:'UNK_0xf12e'
// 1881:      UNK_0xf132  codep:0x2214 parp:0xf132 size:0x0002 C-string:'UNK_0xf132'
// 1882:      UNK_0xf136  codep:0x2214 parp:0xf136 size:0x0002 C-string:'UNK_0xf136'
// 1883:      UNK_0xf13a  codep:0x2214 parp:0xf13a size:0x0002 C-string:'UNK_0xf13a'
// 1884:      UNK_0xf13e  codep:0x2214 parp:0xf13e size:0x0002 C-string:'UNK_0xf13e'
// 1885:      UNK_0xf142  codep:0x2214 parp:0xf142 size:0x0002 C-string:'UNK_0xf142'
// 1886:      UNK_0xf146  codep:0x2214 parp:0xf146 size:0x0002 C-string:'UNK_0xf146'
// 1887:      UNK_0xf14a  codep:0x2214 parp:0xf14a size:0x0002 C-string:'UNK_0xf14a'
// 1888:      UNK_0xf14e  codep:0x2214 parp:0xf14e size:0x0002 C-string:'UNK_0xf14e'
// 1889:      UNK_0xf152  codep:0x2214 parp:0xf152 size:0x0002 C-string:'UNK_0xf152'
// 1890:      UNK_0xf156  codep:0x2214 parp:0xf156 size:0x0002 C-string:'UNK_0xf156'
// 1891:      UNK_0xf15a  codep:0x2214 parp:0xf15a size:0x0006 C-string:'UNK_0xf15a'
// 1892:      UNK_0xf162  codep:0x2214 parp:0xf162 size:0x0002 C-string:'UNK_0xf162'
// 1893:      UNK_0xf166  codep:0x2214 parp:0xf166 size:0x0002 C-string:'UNK_0xf166'
// 1894:      UNK_0xf16a  codep:0x224c parp:0xf16a size:0x0006 C-string:'UNK_0xf16a'
// 1895:      UNK_0xf172  codep:0x224c parp:0xf172 size:0x0010 C-string:'UNK_0xf172'
// 1896:      UNK_0xf184  codep:0x224c parp:0xf184 size:0x000c C-string:'UNK_0xf184'
// 1897:      UNK_0xf192  codep:0x224c parp:0xf192 size:0x003c C-string:'UNK_0xf192'
// 1898:    STAR-ID-CASE  codep:0x4b3b parp:0xf1df size:0x0008 C-string:'STAR_dash_ID_dash_CASE'
// 1899:      UNK_0xf1e9  codep:0x224c parp:0xf1e9 size:0x0008 C-string:'UNK_0xf1e9'
// 1900:    PLANET-ID-CA  codep:0x4b3b parp:0xf202 size:0x0008 C-string:'PLANET_dash_ID_dash_CA'
// 1901:      UNK_0xf20c  codep:0x224c parp:0xf20c size:0x0008 C-string:'UNK_0xf20c'
// 1902:      UNK_0xf216  codep:0x224c parp:0xf216 size:0x000a C-string:'UNK_0xf216'
// 1903:          BOX-ID  codep:0x4b3b parp:0xf22b size:0x000c C-string:'BOX_dash_ID'
// 1904:      UNK_0xf239  codep:0x224c parp:0xf239 size:0x000a C-string:'UNK_0xf239'
// 1905:      UNK_0xf245  codep:0x224c parp:0xf245 size:0x0012 C-string:'UNK_0xf245'
// 1906:        SPACE-ID  codep:0x4b3b parp:0xf264 size:0x0028 C-string:'SPACE_dash_ID'
// 1907:      UNK_0xf28e  codep:0x224c parp:0xf28e size:0x0016 C-string:'UNK_0xf28e'
// 1908:    RUIN-ID-CASE  codep:0x4b3b parp:0xf2b5 size:0x0014 C-string:'RUIN_dash_ID_dash_CASE'
// 1909:      UNK_0xf2cb  codep:0x224c parp:0xf2cb size:0x001a C-string:'UNK_0xf2cb'
// 1910:      UNK_0xf2e7  codep:0x224c parp:0xf2e7 size:0x0006 C-string:'UNK_0xf2e7'
// 1911:      UNK_0xf2ef  codep:0x224c parp:0xf2ef size:0x002e C-string:'UNK_0xf2ef'
// 1912:      UNK_0xf31f  codep:0x224c parp:0xf31f size:0x0006 C-string:'UNK_0xf31f'
// 1913:       PLANET-ID  codep:0x4b3b parp:0xf333 size:0x0030 C-string:'PLANET_dash_ID'
// 1914:      UNK_0xf365  codep:0x224c parp:0xf365 size:0x0014 C-string:'UNK_0xf365'
// 1915:    STAR-IC-CASE  codep:0x4b3b parp:0xf38a size:0x001c C-string:'STAR_dash_IC_dash_CASE'
// 1916:      UNK_0xf3a8  codep:0x224c parp:0xf3a8 size:0x0006 C-string:'UNK_0xf3a8'
// 1917:      UNK_0xf3b0  codep:0x224c parp:0xf3b0 size:0x0010 C-string:'UNK_0xf3b0'
// 1918:      UNK_0xf3c2  codep:0x224c parp:0xf3c2 size:0x0034 C-string:'UNK_0xf3c2'
// 1919:    PLAN-IC-CASE  codep:0x4b3b parp:0xf407 size:0x0018 C-string:'PLAN_dash_IC_dash_CASE'
// 1920:      UNK_0xf421  codep:0x224c parp:0xf421 size:0x0008 C-string:'UNK_0xf421'
// 1921:      UNK_0xf42b  codep:0x224c parp:0xf42b size:0x0010 C-string:'UNK_0xf42b'
// 1922:          BOX-IC  codep:0x4b3b parp:0xf446 size:0x000c C-string:'BOX_dash_IC'
// 1923:      UNK_0xf454  codep:0x224c parp:0xf454 size:0x002c C-string:'UNK_0xf454'
// 1924:       #IC-CASES  codep:0x4b3b parp:0xf48e size:0x0024 C-string:'_n_IC_dash_CASES'
// 1925:      UNK_0xf4b4  codep:0x224c parp:0xf4b4 size:0x0046 C-string:'UNK_0xf4b4'
// 1926:       ICON-PARM  codep:0x224c parp:0xf508 size:0x001e C-string:'ICON_dash_PARM'
// 1927:        +ICONBOX  codep:0x224c parp:0xf533 size:0x0000 C-string:'_plus_ICONBOX'

// =================================
// =========== VARIABLES ===========
// =================================

const unsigned short int cc_UNK_0xf11a = 0x0034; // UNK_0xf11a
const unsigned short int cc_UNK_0xf122 = 0x0033; // UNK_0xf122
const unsigned short int cc_UNK_0xf12a = 0x0015; // UNK_0xf12a
const unsigned short int cc_UNK_0xf12e = 0x0016; // UNK_0xf12e
const unsigned short int cc_UNK_0xf132 = 0x0017; // UNK_0xf132
const unsigned short int cc_UNK_0xf136 = 0x0018; // UNK_0xf136
const unsigned short int cc_UNK_0xf13a = 0x0019; // UNK_0xf13a
const unsigned short int cc_UNK_0xf13e = 0x001a; // UNK_0xf13e
const unsigned short int cc_UNK_0xf142 = 0x00fe; // UNK_0xf142
const unsigned short int cc_UNK_0xf146 = 0x0014; // UNK_0xf146
const unsigned short int cc_UNK_0xf14a = 0x002c; // UNK_0xf14a
const unsigned short int cc_UNK_0xf14e = 0x002d; // UNK_0xf14e
const unsigned short int cc_UNK_0xf152 = 0x002e; // UNK_0xf152
const unsigned short int cc_UNK_0xf156 = 0x002f; // UNK_0xf156
const unsigned short int cc_UNK_0xf15a = 0x0030; // UNK_0xf15a
const unsigned short int cc_UNK_0xf162 = 0x0060; // UNK_0xf162
const unsigned short int cc_UNK_0xf166 = 0x0062; // UNK_0xf166


// 0xf0c2: db 0x49 0x00 0x20 0x74 0x2e 0x11 0x01 'I  t.  '

// ================================================
// 0xf0c9: WORD 'UNK_0xf0cb' codep=0x7420 parp=0xf0cb
// ================================================
// 0xf0cb: db 0x14 0x49 0x01 ' I '

// ================================================
// 0xf0ce: WORD 'UNK_0xf0d0' codep=0x7394 parp=0xf0d0
// ================================================
// 0xf0d0: db 0x19 0x1c 0x01 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xf0d6: WORD 'UNK_0xf0d8' codep=0x7420 parp=0xf0d8
// ================================================
// 0xf0d8: db 0x19 0x0b 0x01 '   '

// ================================================
// 0xf0db: WORD 'UNK_0xf0dd' codep=0x7394 parp=0xf0dd
// ================================================
// 0xf0dd: db 0x44 0x1a 0x01 0x22 0x07 0x6f 'D  " o'

// ================================================
// 0xf0e3: WORD 'UNK_0xf0e5' codep=0x7420 parp=0xf0e5
// ================================================
// 0xf0e5: db 0x44 0x19 0x01 'D  '

// ================================================
// 0xf0e8: WORD 'UNK_0xf0ea' codep=0x7420 parp=0xf0ea
// ================================================
// 0xf0ea: db 0x44 0x18 0x01 'D  '

// ================================================
// 0xf0ed: WORD 'UNK_0xf0ef' codep=0x7394 parp=0xf0ef
// ================================================
// 0xf0ef: db 0x20 0x01 0x01 0x17 0x49 0x6c 0x20 0x74 0x3d 0x1b 0x01 '    Il t=  '

// ================================================
// 0xf0fa: WORD 'UNK_0xf0fc' codep=0x7394 parp=0xf0fc
// ================================================
// 0xf0fc: db 0x15 0x13 0x01 0x32 0xd1 0x6a 0x20 0x74 0x15 0x0c 0x01 0x20 0x74 0x17 0x0b 0x01 0x94 0x73 0x19 0x04 0x01 0x24 0x5d 0x6b 0x14 0x22 0x32 0x00 '   2 j t    t    s   $]k "2 '

// ================================================
// 0xf118: WORD 'UNK_0xf11a' codep=0x2214 parp=0xf11a
// ================================================
// 0xf11a: db 0x34 0x00 0x14 0x22 0x34 0x00 '4  "4 '

// ================================================
// 0xf120: WORD 'UNK_0xf122' codep=0x2214 parp=0xf122
// ================================================
// 0xf122: db 0x33 0x00 0x14 0x22 0x33 0x00 '3  "3 '

// ================================================
// 0xf128: WORD 'UNK_0xf12a' codep=0x2214 parp=0xf12a
// ================================================
// 0xf12a: db 0x15 0x00 '  '

// ================================================
// 0xf12c: WORD 'UNK_0xf12e' codep=0x2214 parp=0xf12e
// ================================================
// 0xf12e: db 0x16 0x00 '  '

// ================================================
// 0xf130: WORD 'UNK_0xf132' codep=0x2214 parp=0xf132
// ================================================
// 0xf132: db 0x17 0x00 '  '

// ================================================
// 0xf134: WORD 'UNK_0xf136' codep=0x2214 parp=0xf136
// ================================================
// 0xf136: db 0x18 0x00 '  '

// ================================================
// 0xf138: WORD 'UNK_0xf13a' codep=0x2214 parp=0xf13a
// ================================================
// 0xf13a: db 0x19 0x00 '  '

// ================================================
// 0xf13c: WORD 'UNK_0xf13e' codep=0x2214 parp=0xf13e
// ================================================
// 0xf13e: db 0x1a 0x00 '  '

// ================================================
// 0xf140: WORD 'UNK_0xf142' codep=0x2214 parp=0xf142
// ================================================
// 0xf142: db 0xfe 0x00 '  '

// ================================================
// 0xf144: WORD 'UNK_0xf146' codep=0x2214 parp=0xf146
// ================================================
// 0xf146: db 0x14 0x00 '  '

// ================================================
// 0xf148: WORD 'UNK_0xf14a' codep=0x2214 parp=0xf14a
// ================================================
// 0xf14a: db 0x2c 0x00 ', '

// ================================================
// 0xf14c: WORD 'UNK_0xf14e' codep=0x2214 parp=0xf14e
// ================================================
// 0xf14e: db 0x2d 0x00 '- '

// ================================================
// 0xf150: WORD 'UNK_0xf152' codep=0x2214 parp=0xf152
// ================================================
// 0xf152: db 0x2e 0x00 '. '

// ================================================
// 0xf154: WORD 'UNK_0xf156' codep=0x2214 parp=0xf156
// ================================================
// 0xf156: db 0x2f 0x00 '/ '

// ================================================
// 0xf158: WORD 'UNK_0xf15a' codep=0x2214 parp=0xf15a
// ================================================
// 0xf15a: db 0x30 0x00 0x14 0x22 0x5f 0x00 '0  "_ '

// ================================================
// 0xf160: WORD 'UNK_0xf162' codep=0x2214 parp=0xf162
// ================================================
// 0xf162: db 0x60 0x00 '` '

// ================================================
// 0xf164: WORD 'UNK_0xf166' codep=0x2214 parp=0xf166
// ================================================
// 0xf166: db 0x62 0x00 'b '

// ================================================
// 0xf168: WORD 'UNK_0xf16a' codep=0x224c parp=0xf16a
// ================================================

void UNK_0xf16a() // UNK_0xf16a
{
  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xf170: WORD 'UNK_0xf172' codep=0x224c parp=0xf172
// ================================================

void UNK_0xf172() // UNK_0xf172
{
  UNK_0xf16a(); // UNK_0xf16a
  LoadData("UNK_0xf0fc"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x005a);
  Push(Pop() + Pop()); // +
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf182: WORD 'UNK_0xf184' codep=0x224c parp=0xf184
// ================================================

void UNK_0xf184() // UNK_0xf184
{
  Func8("UNK_0xf0cb");
  Push(Read8(Pop())&0xFF); // C@
  Push(0x001b);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf190: WORD 'UNK_0xf192' codep=0x224c parp=0xf192
// ================================================

void UNK_0xf192() // UNK_0xf192
{
  LoadData("UNK_0xf0d0"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  Push(0x0014);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) goto label2;
  Push(cc_UNK_0xf162); // UNK_0xf162
  goto label3;

  label2:
  Push(0x001d);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) goto label4;
  Push(cc_UNK_0xf166); // UNK_0xf166
  goto label3;

  label4:
  Func8("UNK_0xf0d8");
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0023);
  Push(Pop() + Pop()); // +

  label3:
  return;

  label1:
  Push(0x002b);
}


// ================================================
// 0xf1ce: WORD 'STAR-ID-CASE' codep=0x4b3b parp=0xf1df
// ================================================
// 0xf1df: db 0x01 0x00 0x1a 0xf1 0x02 0x00 0x1e 0xf1 '        '

// ================================================
// 0xf1e7: WORD 'UNK_0xf1e9' codep=0x224c parp=0xf1e9
// ================================================

void UNK_0xf1e9() // UNK_0xf1e9
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  switch(Pop()) // STAR-ID-CASE
  {
  case 2:
    UNK_0xf11a(); // UNK_0xf11a
    break;
  }
}


// ================================================
// 0xf1f1: WORD 'PLANET-ID-CA' codep=0x4b3b parp=0xf202
// ================================================
// 0xf202: db 0x01 0x00 0x22 0xf1 0x02 0x00 0x26 0xf1 '  "   & '

// ================================================
// 0xf20a: WORD 'UNK_0xf20c' codep=0x224c parp=0xf20c
// ================================================

void UNK_0xf20c() // UNK_0xf20c
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  switch(Pop()) // PLANET-ID-CA
  {
  case 2:
    UNK_0xf122(); // UNK_0xf122
    break;
  }
}


// ================================================
// 0xf214: WORD 'UNK_0xf216' codep=0x224c parp=0xf216
// ================================================

void UNK_0xf216() // UNK_0xf216
{
  _at_INST_dash_S(); // @INST-S
  Push(0x0032);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf220: WORD 'BOX-ID' codep=0x4b3b parp=0xf22b
// ================================================
// 0xf22b: db 0x02 0x00 0x4a 0x52 0x18 0x00 0xe9 0xf1 0x20 0x00 0x0c 0xf2 '  JR        '

// ================================================
// 0xf237: WORD 'UNK_0xf239' codep=0x224c parp=0xf239
// ================================================

void UNK_0xf239() // UNK_0xf239
{
  IOPEN(); // IOPEN
  _at_INST_dash_C(); // @INST-C
  switch(Pop()) // BOX-ID
  {
  case 24:
    INVIS_dash_I(); // INVIS-I
    break;
  case 32:
    UNK_0xf1e9(); // UNK_0xf1e9
    break;
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf243: WORD 'UNK_0xf245' codep=0x224c parp=0xf245
// ================================================

void UNK_0xf245() // UNK_0xf245
{
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(cc_UNK_0xf14a); // UNK_0xf14a
  return;

  label1:
  Push(cc_UNK_0xf132); // UNK_0xf132
}


// ================================================
// 0xf257: WORD 'SPACE-ID' codep=0x4b3b parp=0xf264
// ================================================
// 0xf264: db 0x09 0x00 0x4a 0x52 0x0b 0x00 0x39 0xf2 0x14 0x00 0x84 0xf1 0x17 0x00 0x3c 0x52 0x18 0x00 0xe9 0xf1 0x19 0x00 0x92 0xf1 0x20 0x00 0x0c 0xf2 0x2d 0x00 0x58 0x52 0x2e 0x00 0x16 0xf2 0x3c 0x00 0x16 0xf1 '  JR  9       <R            - XR.   <   '

// ================================================
// 0xf28c: WORD 'UNK_0xf28e' codep=0x224c parp=0xf28e
// ================================================

void UNK_0xf28e() // UNK_0xf28e
{
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(0x0031);
  return;

  label1:
  Push(0x0061);
}


// ================================================
// 0xf2a4: WORD 'RUIN-ID-CASE' codep=0x4b3b parp=0xf2b5
// ================================================
// 0xf2b5: db 0x04 0x00 0x45 0xf2 0x02 0x00 0x36 0xf1 0x04 0x00 0x36 0xf1 0x05 0x00 0x8e 0xf2 0x06 0x00 0x5e 0xf1 '  E   6   6       ^ '

// ================================================
// 0xf2c9: WORD 'UNK_0xf2cb' codep=0x224c parp=0xf2cb
// ================================================

void UNK_0xf2cb() // UNK_0xf2cb
{
  UNK_0xf16a(); // UNK_0xf16a
  LoadData("UNK_0xf0fc"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(cc_UNK_0xf156); // UNK_0xf156
  goto label2;

  label1:
  Push(cc_UNK_0xf15a); // UNK_0xf15a

  label2:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2e5: WORD 'UNK_0xf2e7' codep=0x224c parp=0xf2e7
// ================================================

void UNK_0xf2e7() // UNK_0xf2e7
{
  LoadData("UNK_0xf0dd"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
}


// ================================================
// 0xf2ed: WORD 'UNK_0xf2ef' codep=0x224c parp=0xf2ef
// ================================================

void UNK_0xf2ef() // UNK_0xf2ef
{
  _at_INST_dash_S(); // @INST-S
  _gt_R(); // >R
  Push(h); // I
  Push(cc__6); // 6
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(cc_UNK_0xf14e); // UNK_0xf14e
  goto label2;

  label1:
  Push(h); // I
  Push(0x0017);
  _eq_(); // =
  if (Pop() == 0) goto label3;
  Push(cc_UNK_0xf146); // UNK_0xf146
  goto label2;

  label3:
  Push(cc_UNK_0xf12a); // UNK_0xf12a

  label2:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xf31d: WORD 'UNK_0xf31f' codep=0x224c parp=0xf31f
// ================================================

void UNK_0xf31f() // UNK_0xf31f
{
  _at_INST_dash_S(); // @INST-S
  switch(Pop()) // RUIN-ID-CASE
  {
  case 2:
    UNK_0xf245(); // UNK_0xf245
    break;
  case 4:
    UNK_0xf136(); // UNK_0xf136
    break;
  case 5:
    UNK_0xf136(); // UNK_0xf136
    break;
  case 6:
    UNK_0xf28e(); // UNK_0xf28e
    break;
  }
}


// ================================================
// 0xf325: WORD 'PLANET-ID' codep=0x4b3b parp=0xf333
// ================================================
// 0xf333: db 0x0b 0x00 0x6e 0x3a 0x29 0x00 0x1f 0xf3 0x2a 0x00 0x3e 0xf1 0x44 0x00 0xe7 0xf2 0x14 0x00 0x3a 0xf1 0x1a 0x00 0xef 0xf2 0x1c 0x00 0x2e 0xf1 0x1f 0x00 0x72 0xf1 0x21 0x00 0x52 0xf1 0x15 0x00 0xcb 0xf2 0x1b 0x00 0x42 0xf1 0x30 0x00 0x42 0xf1 '  n:)   * > D     :       .   r ! R       B 0 B '

// ================================================
// 0xf363: WORD 'UNK_0xf365' codep=0x224c parp=0xf365
// ================================================

void UNK_0xf365() // UNK_0xf365
{
  _at_INST_dash_C(); // @INST-C
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  switch(Pop()) // SPACE-ID
  {
  case 11:
    INVIS_dash_I(); // INVIS-I
    break;
  case 20:
    UNK_0xf239(); // UNK_0xf239
    break;
  case 23:
    UNK_0xf184(); // UNK_0xf184
    break;
  case 24:
    SYS_dash_ICO(); // SYS-ICO
    break;
  case 25:
    UNK_0xf1e9(); // UNK_0xf1e9
    break;
  case 32:
    UNK_0xf192(); // UNK_0xf192
    break;
  case 45:
    UNK_0xf20c(); // UNK_0xf20c
    break;
  case 46:
    FLUX_dash_IC(); // FLUX-IC
    break;
  case 60:
    UNK_0xf216(); // UNK_0xf216
    break;
  }
  return;

  label1:
  switch(Pop()) // PLANET-ID
  {
  case 41:
    UNRAVEL(); // UNRAVEL
    break;
  case 42:
    UNK_0xf31f(); // UNK_0xf31f
    break;
  case 68:
    UNK_0xf13e(); // UNK_0xf13e
    break;
  case 20:
    UNK_0xf2e7(); // UNK_0xf2e7
    break;
  case 26:
    UNK_0xf13a(); // UNK_0xf13a
    break;
  case 28:
    UNK_0xf2ef(); // UNK_0xf2ef
    break;
  case 31:
    UNK_0xf12e(); // UNK_0xf12e
    break;
  case 33:
    UNK_0xf172(); // UNK_0xf172
    break;
  case 21:
    UNK_0xf152(); // UNK_0xf152
    break;
  case 27:
    UNK_0xf2cb(); // UNK_0xf2cb
    break;
  case 48:
    UNK_0xf142(); // UNK_0xf142
    break;
  }
}


// ================================================
// 0xf379: WORD 'STAR-IC-CASE' codep=0x4b3b parp=0xf38a
// ================================================
// 0xf38a: db 0x06 0x00 0x28 0x50 0x4d 0x00 0xd7 0x4f 0x4b 0x00 0x3e 0x50 0x47 0x00 0x4a 0x50 0x46 0x00 0x55 0x50 0x41 0x00 0xce 0x4f 0x42 0x00 0x0e 0x50 '  (PM  OK >PG JPF UPA  OB  P'

// ================================================
// 0xf3a6: WORD 'UNK_0xf3a8' codep=0x224c parp=0xf3a8
// ================================================

void UNK_0xf3a8() // UNK_0xf3a8
{
  _at_INST_dash_S(); // @INST-S
  switch(Pop()) // STAR-IC-CASE
  {
  case 77:
    LT_dash_BLUE(); // LT-BLUE
    break;
  case 75:
    RED(); // RED
    break;
  case 71:
    ORANGE(); // ORANGE
    break;
  case 70:
    YELLOW(); // YELLOW
    break;
  case 65:
    WHITE(); // WHITE
    break;
  case 66:
    GREEN(); // GREEN
    break;
  }
}


// ================================================
// 0xf3ae: WORD 'UNK_0xf3b0' codep=0x224c parp=0xf3b0
// ================================================

void UNK_0xf3b0() // UNK_0xf3b0
{
  _ask_CGA(); // ?CGA
  if (Pop() == 0) goto label1;
  SetColor("RED");
  return;

  label1:
  SetColor("DK-GREE");
}


// ================================================
// 0xf3c0: WORD 'UNK_0xf3c2' codep=0x224c parp=0xf3c2
// ================================================

void UNK_0xf3c2() // UNK_0xf3c2
{
  Func8("UNK_0xf0e5");
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  Func8("UNK_0xf0ea");
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  Push(cc_DEFAULT); // DEFAULT
  goto label3;

  label2:
  Push(cc__4); // 4

  label3:
  return;

  label1:
  Push(cc_DEAD_dash_IC); // DEAD-IC
}

// 0xf3e4: db 0x4c 0x22 0x0f 0x86 0xfa 0x15 0x08 0x00 0xec 0x4f 0x60 0x16 0x04 0x00 0xd5 0x4f 0x90 0x16 'L"       O`    O  '

// ================================================
// 0xf3f6: WORD 'PLAN-IC-CASE' codep=0x4b3b parp=0xf407
// ================================================
// 0xf407: db 0x05 0x00 0xee 0x4f 0x00 0x00 0xf9 0x4f 0x01 0x00 0xe3 0x4f 0x02 0x00 0x0e 0x50 0x03 0x00 0x55 0x50 0x04 0x00 0xe6 0xf3 '   O   O   O   P  UP    '

// ================================================
// 0xf41f: WORD 'UNK_0xf421' codep=0x224c parp=0xf421
// ================================================

void UNK_0xf421() // UNK_0xf421
{
  LoadData("UNK_0xf0ef"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  switch(Pop()) // PLAN-IC-CASE
  {
  case 0:
    BROWN(); // BROWN
    break;
  case 1:
    GREY1(); // GREY1
    break;
  case 2:
    VIOLET(); // VIOLET
    break;
  case 3:
    BLUE(); // BLUE
    break;
  case 4:
    WHITE(); // WHITE
    break;
  }
}


// ================================================
// 0xf429: WORD 'UNK_0xf42b' codep=0x224c parp=0xf42b
// ================================================

void UNK_0xf42b() // UNK_0xf42b
{
  _at_INST_dash_S(); // @INST-S
  if (Pop() == 0) goto label1;
  Push(cc__3); // 3
  return;

  label1:
  Push(cc_DEFAULT); // DEFAULT
}


// ================================================
// 0xf43b: WORD 'BOX-IC' codep=0x4b3b parp=0xf446
// ================================================
// 0xf446: db 0x02 0x00 0x74 0x52 0x18 0x00 0xa8 0xf3 0x20 0x00 0x21 0xf4 '  tR      ! '

// ================================================
// 0xf452: WORD 'UNK_0xf454' codep=0x224c parp=0xf454
// ================================================

void UNK_0xf454() // UNK_0xf454
{
  IOPEN(); // IOPEN
  _at_INST_dash_C(); // @INST-C
  switch(Pop()) // BOX-IC
  {
  case 24:
    DEFAULT(); // DEFAULT
    break;
  case 32:
    UNK_0xf3a8(); // UNK_0xf3a8
    break;
  }
  ICLOSE(); // ICLOSE
}

// 0xf45e: db 0x4c 0x22 0x02 0xf1 0x92 0x0c 0xfa 0x15 0x16 0x00 0x8b 0x62 0xae 0x0b 0xfa 0x15 0x08 0x00 0x87 0x3b 0x60 0x16 0x04 0x00 0x72 0x52 0x60 0x16 0x04 0x00 0x64 0x52 0x90 0x16 'L"         b       ;`   rR`   dR  '

// ================================================
// 0xf480: WORD '#IC-CASES' codep=0x4b3b parp=0xf48e
// ================================================
// 0xf48e: db 0x08 0x00 0x74 0x52 0x0b 0x00 0x54 0xf4 0x17 0x00 0xa8 0xf3 0x20 0x00 0x21 0xf4 0x18 0x00 0xa8 0xf3 0x44 0x00 0xc2 0xf3 0x2d 0x00 0x2b 0xf4 0x2e 0x00 0xb0 0xf3 0x15 0x00 0x60 0xf4 '  tR  T       !     D   - + .     ` '

// ================================================
// 0xf4b2: WORD 'UNK_0xf4b4' codep=0x224c parp=0xf4b4
// ================================================

void UNK_0xf4b4() // UNK_0xf4b4
{
  _at_INST_dash_C(); // @INST-C
  switch(Pop()) // #IC-CASES
  {
  case 11:
    DEFAULT(); // DEFAULT
    break;
  case 23:
    UNK_0xf454(); // UNK_0xf454
    break;
  case 32:
    UNK_0xf3a8(); // UNK_0xf3a8
    break;
  case 24:
    UNK_0xf421(); // UNK_0xf421
    break;
  case 68:
    UNK_0xf3a8(); // UNK_0xf3a8
    break;
  case 45:
    UNK_0xf3c2(); // UNK_0xf3c2
    break;
  case 46:
    UNK_0xf42b(); // UNK_0xf42b
    break;
  case 21:
    UNK_0xf3b0(); // UNK_0xf3b0
    break;
  }
}

// 0xf4ba: db 0x4c 0x22 0x22 0x75 0x5d 0x17 0x17 0x00 0x5f 0x12 0xfa 0x15 0x14 0x00 0x32 0x62 0xae 0x0b 0x07 0xf1 0x92 0x0c 0x2e 0x0f 0xf5 0x12 0x3e 0x13 0x60 0x16 0x20 0x00 0x22 0x75 0x5d 0x17 0x2e 0x00 0x5f 0x12 0xfa 0x15 0x12 0x00 0x32 0x62 0xae 0x0b 0x07 0x13 0xc4 0xf0 0x92 0x0c 0x3e 0x13 0x60 0x16 0x04 0x00 0x2e 0x0f 0x90 0x16 'L""u]   _     2b      .   > `   "u] . _     2b        > `   .   '

// ================================================
// 0xf4fa: WORD 'ICON-PARM' codep=0x224c parp=0xf508
// ================================================
// entry

void ICON_dash_PARM() // ICON-PARM
{
  Func8("INST-X");
  Push(Read16(Pop())); // @
  Func8("INST-Y");
  Push(Read16(Pop())); // @
  UNK_0xf365(); // UNK_0xf365
  UNK_0xf4b4(); // UNK_0xf4b4
  CI(); // CI
}

// 0xf518: db 0x4c 0x22 0xba 0xf4 0xfa 0x15 0x06 0x00 0x06 0xf5 0x50 0x99 0x90 0x16 'L"        P   '

// ================================================
// 0xf526: WORD '+ICONBOX' codep=0x224c parp=0xf533
// ================================================
// entry

void _plus_ICONBOX() // +ICONBOX
{
  Push(0xf51a);
  ALL(); // ALL
}

// 0xf53b: db 0x56 0x49 0x43 0x4f 0x4e 0x50 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x46 0x49 0x58 0x20 0x5c 0x00 'VICONP__________________________FIX \ '
  