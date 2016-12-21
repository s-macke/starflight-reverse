// ====== OVERLAY 'IT-OV' ======
// store offset = 0xee80
// overlay size   = 0x06e0

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0xaf93 C-string:'UNK_0x3f09'
// 1870:      UNK_0xee9e  codep:0x7394 parp:0xee9e size:0x001e C-string:'UNK_0xee9e'
// 1871:      UNK_0xeebe  codep:0x2214 parp:0xeebe size:0x002a C-string:'UNK_0xeebe'
// 1872:      UNK_0xeeea  codep:0x224c parp:0xeeea size:0x0010 C-string:'UNK_0xeeea'
// 1873:      UNK_0xeefc  codep:0x224c parp:0xeefc size:0x000e C-string:'UNK_0xeefc'
// 1874:      UNK_0xef0c  codep:0x224c parp:0xef0c size:0x0020 C-string:'UNK_0xef0c'
// 1875:      UNK_0xef2e  codep:0x224c parp:0xef2e size:0x0016 C-string:'UNK_0xef2e'
// 1876:      UNK_0xef46  codep:0x1d29 parp:0xef46 size:0x0002 C-string:'UNK_0xef46'
// 1877:      UNK_0xef4a  codep:0x224c parp:0xef4a size:0x00b3 C-string:'UNK_0xef4a'
// 1878:      UNK_0xefff  codep:0x224c parp:0xefff size:0x0048 C-string:'UNK_0xefff'
// 1879:      UNK_0xf049  codep:0x224c parp:0xf049 size:0x00d5 C-string:'UNK_0xf049'
// 1880:        DATE$>AD  codep:0x224c parp:0xf12b size:0x00bf C-string:'DATE_do__gt_AD'
// 1881:        IDENT-IT  codep:0x4b3b parp:0xf1f7 size:0x001c C-string:'IDENT_dash_IT'
// 1882:        ITEM>PAD  codep:0x224c parp:0xf220 size:0x0024 C-string:'ITEM_gt_PAD'
// 1883:      UNK_0xf246  codep:0x224c parp:0xf246 size:0x000c C-string:'UNK_0xf246'
// 1884:      UNK_0xf254  codep:0x224c parp:0xf254 size:0x0006 C-string:'UNK_0xf254'
// 1885:      UNK_0xf25c  codep:0x224c parp:0xf25c size:0x0030 C-string:'UNK_0xf25c'
// 1886:      UNK_0xf28e  codep:0x224c parp:0xf28e size:0x005a C-string:'UNK_0xf28e'
// 1887:        BOX>LIST  codep:0x224c parp:0xf2f5 size:0x003c C-string:'BOX_gt_LIST'
// 1888:        GET-BOXE  codep:0x224c parp:0xf33e size:0x0016 C-string:'GET_dash_BOXE'
// 1889:        MAKE-SCR  codep:0x224c parp:0xf361 size:0x002c C-string:'MAKE_dash_SCR'
// 1890:        DELETE-S  codep:0x224c parp:0xf39a size:0x0016 C-string:'DELETE_dash_S'
// 1891:        CLASS>BO  codep:0x4b3b parp:0xf3bd size:0x001c C-string:'CLASS_gt_BO'
// 1892:      UNK_0xf3db  codep:0x224c parp:0xf3db size:0x000e C-string:'UNK_0xf3db'
// 1893:        BOX>TOCS  codep:0x224c parp:0xf3f6 size:0x000e C-string:'BOX_gt_TOCS'
// 1894:        ?ELEMENT  codep:0x224c parp:0xf411 size:0x002c C-string:'_ask_ELEMENT'
// 1895:            >BOX  codep:0x224c parp:0xf446 size:0x0082 C-string:'_gt_BOX'
// 1896:          (BOX>)  codep:0x224c parp:0xf4d3 size:0x0036 C-string:'_ro_BOX_gt__rc_'
// 1897:            BOX>  codep:0x224c parp:0xf512 size:0x0000 C-string:'BOX_gt_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xef46[2] = {0x3a, 0x20}; // UNK_0xef46

const unsigned short int cc_UNK_0xeebe = 0x0011; // UNK_0xeebe


// 0xee92: db 0x6d 0x00 0x94 0x73 0x1c 0x1d 0x01 0x20 0xcd 0x6b 'm  s     k'

// ================================================
// 0xee9c: WORD 'UNK_0xee9e' codep=0x7394 parp=0xee9e
// ================================================
// 0xee9e: db 0x1c 0x1e 0x01 0x20 0xcd 0x6b 0x94 0x73 0x09 0x00 0x20 0x1b 0x54 0x6a 0x94 0x73 0x09 0x18 0x02 0x1b 0x54 0x6a 0x14 0x22 0x0a 0x00 0x14 0x22 0x0f 0x00 '     k s    Tj s    Tj "   "  '

// ================================================
// 0xeebc: WORD 'UNK_0xeebe' codep=0x2214 parp=0xeebe
// ================================================
// 0xeebe: db 0x11 0x00 0x14 0x22 0x0b 0x00 0x14 0x22 0x10 0x00 0x14 0x22 0x37 0x00 0x14 0x22 0x36 0x00 0x94 0x73 0x44 0x00 0x14 0x22 0x07 0x6f 0x94 0x73 0x44 0x14 0x02 0x22 0x07 0x6f 0x94 0x73 0x44 0x1c 0x01 0x22 0x07 0x6f '   "   "   "7  "6  sD  " o sD  " o sD  " o'

// ================================================
// 0xeee8: WORD 'UNK_0xeeea' codep=0x224c parp=0xeeea
// ================================================

void UNK_0xeeea() // UNK_0xeeea
{
  SRDEPTH(); // SRDEPTH
  Push(0); // 0
  MAX(); // MAX
  Push(Pop()*2); // 2*
  PAD(); // PAD
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
}


// ================================================
// 0xeefa: WORD 'UNK_0xeefc' codep=0x224c parp=0xeefc
// ================================================

void UNK_0xeefc() // UNK_0xeefc
{
  PAD(); // PAD
  Push(Pop()+1); // 1+
  Push(0x0026);
  Push(cc_BL); // BL
  FILL(); // FILL
}


// ================================================
// 0xef0a: WORD 'UNK_0xef0c' codep=0x224c parp=0xef0c
// ================================================

void UNK_0xef0c() // UNK_0xef0c
{
  Push(pp_TIME_dash_PA); // TIME-PA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(pp_CTTOP); // CTTOP
  Push(Read16(Pop())); // @
  goto label2;

  label1:
  Push(0x0096);

  label2:
  Push(cc__7); // 7
  _dash_(); // -
  Push(cc__7); // 7
  SWAP(); // SWAP
  POS_dot_(); // POS.
}


// ================================================
// 0xef2c: WORD 'UNK_0xef2e' codep=0x224c parp=0xef2e
// ================================================

void UNK_0xef2e() // UNK_0xef2e
{
  Push(0x0025);
  OVER(); // OVER
  _dash_(); // -
  Push(Pop()*2); // 2*
  Push(cc__7); // 7
  Push(Pop() + Pop()); // +
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  Func14("TYPE"); // call of word 0x2690
}


// ================================================
// 0xef44: WORD 'UNK_0xef46' codep=0x1d29 parp=0xef46
// ================================================
// 0xef46: db 0x3a 0x20 ': '

// ================================================
// 0xef48: WORD 'UNK_0xef4a' codep=0x224c parp=0xef4a
// ================================================

void UNK_0xef4a() // UNK_0xef4a
{
  _at_CRS(); // @CRS
  CTERASE(); // CTERASE
  _gt_1FONT(); // >1FONT
  UNK_0xef0c(); // UNK_0xef0c
  Push(cc__3); // 3
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  PRINT("ATTENTION", 9); // (.")
  Push(cc__5); // 5
  SPACES(); // SPACES
  i++;
  } while(i<imax); // (LOOP) 0xffee

  GCR(); // GCR

  UNK_0x3f09("THE MANIFEST-COMPUTER CAPACITY HAS");
  UNK_0xef2e(); // UNK_0xef2e
  GCR(); // GCR

  UNK_0x3f09("BEEN EXCEEDED. SOME ITEMS MAY NOT");
  UNK_0xef2e(); // UNK_0xef2e
  GCR(); // GCR

  UNK_0x3f09("APPEAR IN THIS LIST.");
  UNK_0xef2e(); // UNK_0xef2e
  GCR(); // GCR

  UNK_0x3f09("PRESS SPACEBAR TO CONTINUE");
  UNK_0xef2e(); // UNK_0xef2e
  _ex_CRS(); // !CRS
}


// ================================================
// 0xeffd: WORD 'UNK_0xefff' codep=0x224c parp=0xefff
// ================================================

void UNK_0xefff() // UNK_0xefff
{
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(0x0031);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(pp_UNK_0xef46); // UNK_0xef46
  ON(); // ON
  Push(0x03e8);
  MS(); // MS
  _i_KEY(); // 'KEY
  Pop(); // DROP
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xef4a(); // UNK_0xef4a
  KEY(); // KEY
  Pop(); // DROP
  CTERASE(); // CTERASE
  SAVE_dash_OV(); // SAVE-OV
}

// 0xf02b: db 0x4c 0x22 0xfa 0xee 0xfd 0x81 0xe8 0xee 0x5d 0x17 0x10 0x00 0x8a 0x6d 0x90 0x16 0x4c 0x22 0x2a 0x5c 0xae 0x0b 0x97 0x3b 0x5f 0x12 0x90 0x16 'L"      ]    m  L"*\   ;_   '

// ================================================
// 0xf047: WORD 'UNK_0xf049' codep=0x224c parp=0xf049
// ================================================

void UNK_0xf049() // UNK_0xf049
{
  SWAP(); // SWAP
  Pop(); // DROP

  UNK_0x3f09("??-??-????");
  Pop(); // DROP
  Push(Pop()-1); // 1-
  SWAP(); // SWAP
  _do__ex_(); // $!
}

// 0xf064: db 0x4c 0x22 0x5d 0x17 0x0a 0x00 0x60 0x0f 0xf2 0x0e 0xd7 0xa9 0x32 0x0e 0x92 0x0c 0xdb 0x23 0x5d 0x17 0x20 0x00 0x72 0x0f 0x0a 0x6d 0x5d 0x17 0x2e 0x00 0xdb 0x23 0x5d 0x17 0x1f 0x00 0x72 0x0f 0x0a 0x6d 0xd7 0xa9 0xdb 0x23 0x5d 0x17 0x1f 0x00 0x72 0x0f 0x7f 0x0e 0x92 0x0f 0xf2 0x0e 0x8a 0x6d 0x3b 0xf0 0xfa 0x15 0x08 0x00 0x32 0x0e 0xcc 0xa9 0xae 0x0b 0xa2 0x5e 0xae 0x0b 0xd6 0x11 0x5d 0x17 0x64 0x00 0xeb 0x11 0xf2 0x0e 0x32 0x0e 0xd7 0xa9 0xdb 0x23 0x5d 0x17 0x26 0x00 0x72 0x0f 0x7f 0x0e 0xf6 0x0f 0x92 0x0f 0xf2 0x0e 0x8a 0x6d 0x90 0x16 0x4c 0x22 0xd0 0xee 0xe8 0xee 0x5d 0x17 0x14 0x00 0x8a 0x6d 0xd8 0xee 0xae 0x0b 0xad 0x74 0xae 0x0b 0x64 0xf0 0x90 0x16 0x4c 0x22 0x7d 0x62 0x2f 0x7a 0x9c 0xee 0x92 0x0c 0xf6 0x0f 0xfa 0x15 0x08 0x00 0xc8 0xee 0x60 0x16 0x04 0x00 0xb8 0xee 0xdf 0x79 0x90 0x16 0x4c 0x22 0x56 0xa9 0xe8 0xee 0x5d 0x17 0x10 0x00 0x8a 0x6d 0xad 0x74 0xae 0x0b 0x68 0xa9 0xae 0x0b 0xf2 0x0e 0x64 0xf0 0x90 0x16 'L"]   `     2    #]   r  m] .  #]   r  m   #]   r       m;     2      ^    ] d     2    #] & r         m  L"    ]    m     t  d   L"}b/z            `      y  L"V   ]    m t  h     d   '

// ================================================
// 0xf11e: WORD 'DATE$>AD' codep=0x224c parp=0xf12b
// ================================================

void DATE_do__gt_AD() // DATE$>AD
{
  OVER(); // OVER
  Push(cc__dash_1); // -1
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xf049(); // UNK_0xf049
  return;

  label1:

  UNK_0x3f09("00-00-");
  Push(cc__3); // 3
  PICK(); // PICK
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SWAP(); // SWAP
  Push(0x012c);
  _slash_MOD(); // /MOD
  Push(0x121f);
  Push(Pop() + Pop()); // +
  U_gt__do_(); // U>$
  Push(cc__4); // 4
  PICK(); // PICK
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(0x001e);
  _slash_MOD(); // /MOD
  Push(Pop()+1); // 1+
  U_gt__do_(); // U>$
  Push(cc__4); // 4
  PICK(); // PICK
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(Pop()-1); // 1-
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(Pop()+1); // 1+
  U_gt__do_(); // U>$
  ROT(); // ROT
  Push(Pop()+1); // 1+
  OVER(); // OVER
  Push(Pop()-1); // 1-
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
}

// 0xf198: db 0x4c 0x22 0xfa 0xee 0x28 0xa9 0xae 0x0b 0xe8 0xee 0x29 0xf1 0x90 0x16 0x4c 0x22 0x7a 0xa9 0xe8 0xee 0x5d 0x17 0x18 0x00 0x8a 0x6d 0x8c 0xa9 0xae 0x0b 0x9c 0xee 0x92 0x0c 0xf6 0x0f 0x89 0x12 0xfa 0x15 0x0a 0x00 0x9e 0xa9 0xae 0x0b 0x60 0x16 0x06 0x00 0xad 0x74 0xae 0x0b 0x64 0xf0 0x90 0x16 0x4c 0x22 0xa4 0xee 0xe8 0xee 0x5d 0x17 0x18 0x00 0x8a 0x6d 0xac 0xee 0xae 0x0b 0xad 0x74 0xae 0x0b 0x64 0xf0 0x90 0x16 'L"  (     )   L"z   ]    m                    `    t  d   L"    ]    m     t  d   '

// ================================================
// 0xf1ea: WORD 'IDENT-IT' codep=0x4b3b parp=0xf1f7
// ================================================
// 0xf1f7: db 0x06 0x00 0x6e 0x3a 0x0b 0x00 0x2d 0xf0 0x09 0x00 0xd4 0xf1 0x1a 0x00 0x06 0xf1 0x1b 0x00 0x9a 0xf1 0x1c 0x00 0xa8 0xf1 0x44 0x00 0xd2 0xf0 '  n:  -                 D   '

// ================================================
// 0xf213: WORD 'ITEM>PAD' codep=0x224c parp=0xf220
// ================================================

void ITEM_gt_PAD() // ITEM>PAD
{
  UNK_0xeefc(); // UNK_0xeefc
  UNK_0xeeea(); // UNK_0xeeea
  PAD(); // PAD
  Push(0x001e);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  _dash_(); // -
  Push(0x002e);
  FILL(); // FILL
  Push(0x0026);
  PAD(); // PAD
  C_ex_(); // C!
  _at_INST_dash_C(); // @INST-C
  Case(IDENT-IT);
}


// ================================================
// 0xf244: WORD 'UNK_0xf246' codep=0x224c parp=0xf246
// ================================================

void UNK_0xf246() // UNK_0xf246
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf252: WORD 'UNK_0xf254' codep=0x224c parp=0xf254
// ================================================

void UNK_0xf254() // UNK_0xf254
{
  _at_INST_dash_C(); // @INST-C
  _eq_(); // =
}


// ================================================
// 0xf25a: WORD 'UNK_0xf25c' codep=0x224c parp=0xf25c
// ================================================

void UNK_0xf25c() // UNK_0xf25c
{
  Push(0x000b);
  UNK_0xf254(); // UNK_0xf254
  if (Pop() == 0) goto label1;
  Push(cc_UNK_0xeebe); // UNK_0xeebe
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xf246(); // UNK_0xf246
  Push(Pop() | Pop()); // OR
  return;

  label1:
  Push(0x001b);
  UNK_0xf254(); // UNK_0xf254
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xf246(); // UNK_0xf246
  Push(Pop() | Pop()); // OR
  Push(0x0035);
  UNK_0xf254(); // UNK_0xf254
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf28c: WORD 'UNK_0xf28e' codep=0x224c parp=0xf28e
// ================================================

void UNK_0xf28e() // UNK_0xf28e
{
  Push(cc__3); // 3
  PICK(); // PICK
  Push(cc__3); // 3
  PICK(); // PICK
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  _eq_(); // =
  ICLOSE(); // ICLOSE
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(0x0032);
  _st_(); // <
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(pp__ro_SCROLL); // (SCROLL
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x0038);
  Push(0); // 0
  Push(1); // 1
  _star_CREATE(); // *CREATE
  Func8("TEXT-TE");
  Push(0x0026);
  CMOVE(); // CMOVE
  Func8("TEXT-IN");
  _1_dot_5_ex_(); // 1.5!
  Func8("TEXT-CO");
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
  Push(1); // 1
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  return;

  label1:
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
  Pop(); // DROP
}


// ================================================
// 0xf2e8: WORD 'BOX>LIST' codep=0x224c parp=0xf2f5
// ================================================

void BOX_gt_LIST() // BOX>LIST
{
  SUBROOT(); // SUBROOT
  CI(); // CI

  label2:
  UNK_0xf25c(); // UNK_0xf25c
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(0x0032);
  _st_(); // <
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  CI_i_(); // CI'
  CI(); // CI
  ITEM_gt_PAD(); // ITEM>PAD
  PAD(); // PAD
  Push(Pop()+1); // 1+
  UNK_0xf28e(); // UNK_0xf28e

  label1:
  NEXT_dash_NO(); // NEXT-NO
  _2DUP(); // 2DUP
  CI(); // CI
  D_eq_(); // D=
  if (Pop() == 0) goto label2;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf331: WORD 'GET-BOXE' codep=0x224c parp=0xf33e
// ================================================

void GET_dash_BOXE() // GET-BOXE
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN

  label1:
  BOX_gt_LIST(); // BOX>LIST
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label1;
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  UNK_0xefff(); // UNK_0xefff
}


// ================================================
// 0xf354: WORD 'MAKE-SCR' codep=0x224c parp=0xf361
// ================================================

void MAKE_dash_SCR() // MAKE-SCR
{
  Push(pp_UNK_0xef46); // UNK_0xef46
  _099(); // 099
  Push2Words("FRAGMEN");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0038);
  Push(1); // 1
  _star_CREATE(); // *CREATE
  CI(); // CI
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_ex_(); // 1.5!
  CI_i_(); // CI'
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_ex_(); // 1.5!
  Push(pp_SCROLL_dash_); // SCROLL-
  _099(); // 099
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf38d: WORD 'DELETE-S' codep=0x224c parp=0xf39a
// ================================================

void DELETE_dash_S() // DELETE-S
{
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_at_(); // 1.5@
  _gt_C(); // >C
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_(); // >C+
  SET_dash_CUR(); // SET-CUR
  IDELETE(); // IDELETE
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3b0: WORD 'CLASS>BO' codep=0x4b3b parp=0xf3bd
// ================================================
// 0xf3bd: db 0x06 0x00 0x6e 0x3a 0x09 0x00 0xce 0xee 0x1a 0x00 0xb6 0xee 0x1c 0x00 0xea 0xf0 0x29 0x00 0xc6 0xee 0x1b 0x00 0xbe 0xee 0x44 0x00 0xc2 0xee '  n:            )       D   '

// ================================================
// 0xf3d9: WORD 'UNK_0xf3db' codep=0x224c parp=0xf3db
// ================================================

void UNK_0xf3db() // UNK_0xf3db
{
  Case(CLASS>BO);
  Push(0x000b);
  SWAP(); // SWAP
  Push(1); // 1
  _star_CREATE(); // *CREATE
}


// ================================================
// 0xf3e9: WORD 'BOX>TOCS' codep=0x224c parp=0xf3f6
// ================================================

void BOX_gt_TOCS() // BOX>TOCS
{
  Case(CLASS>BO);
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xf404: WORD '?ELEMENT' codep=0x224c parp=0xf411
// ================================================

void _ask_ELEMENT() // ?ELEMENT
{
  _at_INST_dash_C(); // @INST-C
  Push(0x001c);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  LoadData("UNK_0xee9e"); // from 'ARTIFACT    '
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()-1); // 1-
  return;

  label1:
  _at_INST_dash_C(); // @INST-C
  Push(0x001b);
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(cc_FALSE); // FALSE
  return;

  label2:
  Push(cc_TRUE); // TRUE
}


// ================================================
// 0xf43d: WORD '>BOX' codep=0x224c parp=0xf446
// ================================================

void _gt_BOX() // >BOX
{
  _2DUP(); // 2DUP
  Push(pp_ITEM); // ITEM
  _1_dot_5_ex_(); // 1.5!
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_C(); // @INST-C
  _gt_R(); // >R
  ICLOSE(); // ICLOSE
  IOPEN(); // IOPEN
  Push(h); // I
  Case(CLASS>BO);
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(h); // I
  UNK_0xf3db(); // UNK_0xf3db

  label1:
  R_gt_(); // R>
  BOX_gt_TOCS(); // BOX>TOCS
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_S(); // @INST-S
  _at_INST_dash_C(); // @INST-C
  _ask_ELEMENT(); // ?ELEMENT
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label2;
  OVER(); // OVER
  IOPEN(); // IOPEN
  IFIND(); // IFIND
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label3;
  IOPEN(); // IOPEN

  label4:
  Push(Read16(sp)); // DUP
  INEXT(); // INEXT
  _at_INST_dash_S(); // @INST-S
  _eq_(); // =
  if (Pop() == 0) goto label4;
  Pop(); // DROP
  _gt_C_plus_S(); // >C+S
  Func8("INST-QT");
  Push(Read16(Pop())); // @
  CI(); // CI
  ICLOSE(); // ICLOSE
  _gt_INACTI(); // >INACTI
  Func8("INST-QT");
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  goto label5;

  label3:
  Pop(); // DROP
  CI(); // CI
  IINSERT(); // IINSERT

  label5:
  goto label6;

  label2:
  Pop(); Pop();// 2DROP
  CI(); // CI
  IINSERT(); // IINSERT

  label6:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4c8: WORD '(BOX>)' codep=0x224c parp=0xf4d3
// ================================================

void _ro_BOX_gt__rc_() // (BOX>)
{
  _ask_ELEMENT(); // ?ELEMENT
  Func8("INST-QT");
  Push(Read16(Pop())); // @
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Push(-Pop()); // NEGATE
  Func8("INST-QT");
  _plus__ex_(); // +!
  _at_INST_dash_C(); // @INST-C
  _at_INST_dash_S(); // @INST-S
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Func8("INST-QT");
  _ex_(); // !
  C_gt_(); // C>
  return;

  label1:
  IEXTRAC(); // IEXTRAC
}


// ================================================
// 0xf509: WORD 'BOX>' codep=0x224c parp=0xf512
// ================================================

void BOX_gt_() // BOX>
{
  _ro_BOX_gt__rc_(); // (BOX>)
  CI(); // CI
  D0_eq_(); // D0=
  if (Pop() == 0) goto label1;
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  CI(); // CI
  D0_eq_(); // D0=
  if (Pop() == 0) goto label2;
  ICLOSE(); // ICLOSE

  label2:
  Push(1); // 1
  goto label3;

  label1:
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_C(); // @INST-C
  Push(0x001a);
  _eq_(); // =
  _at_INST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  _at_INST_dash_S(); // @INST-S
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND

  label3:
  ROT(); // ROT
  ROT(); // ROT
}

// 0xf54e: db 0x49 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'IT-VOC____________ '
  