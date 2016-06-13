// ====== OVERLAY 'CAPTAIN' ======
// store offset = 0xe420
// overlay size   = 0x1140

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0xa52b C-string:'UNK_0x3f09'
// 1870:      UNK_0xe436  codep:0x1d29 parp:0xe436 size:0x0002 C-string:'UNK_0xe436'
// 1871:      UNK_0xe43a  codep:0x1d29 parp:0xe43a size:0x0008 C-string:'UNK_0xe43a'
// 1872:      UNK_0xe444  codep:0x1d29 parp:0xe444 size:0x0002 C-string:'UNK_0xe444'
// 1873:      UNK_0xe448  codep:0x1d29 parp:0xe448 size:0x0002 C-string:'UNK_0xe448'
// 1874:      UNK_0xe44c  codep:0x224c parp:0xe44c size:0x0010 C-string:'UNK_0xe44c'
// 1875:      UNK_0xe45e  codep:0x7394 parp:0xe45e size:0x0006 C-string:'UNK_0xe45e'
// 1876:      UNK_0xe466  codep:0x224c parp:0xe466 size:0x000a C-string:'UNK_0xe466'
// 1877:      UNK_0xe472  codep:0x224c parp:0xe472 size:0x0008 C-string:'UNK_0xe472'
// 1878:      UNK_0xe47c  codep:0x224c parp:0xe47c size:0x0041 C-string:'UNK_0xe47c'
// 1879:      UNK_0xe4bf  codep:0x7420 parp:0xe4bf size:0x000b C-string:'UNK_0xe4bf'
// 1880:      UNK_0xe4cc  codep:0x7394 parp:0xe4cc size:0x0006 C-string:'UNK_0xe4cc'
// 1881:      UNK_0xe4d4  codep:0x7394 parp:0xe4d4 size:0x0006 C-string:'UNK_0xe4d4'
// 1882:      UNK_0xe4dc  codep:0x7394 parp:0xe4dc size:0x0006 C-string:'UNK_0xe4dc'
// 1883:      UNK_0xe4e4  codep:0x7394 parp:0xe4e4 size:0x0006 C-string:'UNK_0xe4e4'
// 1884:      UNK_0xe4ec  codep:0x7420 parp:0xe4ec size:0x0003 C-string:'UNK_0xe4ec'
// 1885:      UNK_0xe4f1  codep:0x7394 parp:0xe4f1 size:0x0006 C-string:'UNK_0xe4f1'
// 1886:      UNK_0xe4f9  codep:0x7394 parp:0xe4f9 size:0x0006 C-string:'UNK_0xe4f9'
// 1887:      UNK_0xe501  codep:0x7420 parp:0xe501 size:0x0003 C-string:'UNK_0xe501'
// 1888:      UNK_0xe506  codep:0x7420 parp:0xe506 size:0x0003 C-string:'UNK_0xe506'
// 1889:      UNK_0xe50b  codep:0x7420 parp:0xe50b size:0x0003 C-string:'UNK_0xe50b'
// 1890:      UNK_0xe510  codep:0x7420 parp:0xe510 size:0x0003 C-string:'UNK_0xe510'
// 1891:      UNK_0xe515  codep:0x7420 parp:0xe515 size:0x0003 C-string:'UNK_0xe515'
// 1892:      UNK_0xe51a  codep:0x7420 parp:0xe51a size:0x000d C-string:'UNK_0xe51a'
// 1893:      UNK_0xe529  codep:0x7420 parp:0xe529 size:0x0017 C-string:'UNK_0xe529'
// 1894:      UNK_0xe542  codep:0x1d29 parp:0xe542 size:0x000e C-string:'UNK_0xe542'
// 1895:      UNK_0xe552  codep:0x224c parp:0xe552 size:0x0010 C-string:'UNK_0xe552'
// 1896:      UNK_0xe564  codep:0x224c parp:0xe564 size:0x0008 C-string:'UNK_0xe564'
// 1897:      UNK_0xe56e  codep:0x224c parp:0xe56e size:0x000c C-string:'UNK_0xe56e'
// 1898:            .BAL  codep:0x224c parp:0xe583 size:0x0046 C-string:'_dot_BAL'
// 1899:      UNK_0xe5cb  codep:0x224c parp:0xe5cb size:0x002a C-string:'UNK_0xe5cb'
// 1900:      UNK_0xe5f7  codep:0x224c parp:0xe5f7 size:0x000e C-string:'UNK_0xe5f7'
// 1901:      UNK_0xe607  codep:0x224c parp:0xe607 size:0x000e C-string:'UNK_0xe607'
// 1902:      UNK_0xe617  codep:0x224c parp:0xe617 size:0x0032 C-string:'UNK_0xe617'
// 1903:      UNK_0xe64b  codep:0x224c parp:0xe64b size:0x000a C-string:'UNK_0xe64b'
// 1904:      UNK_0xe657  codep:0x224c parp:0xe657 size:0x002a C-string:'UNK_0xe657'
// 1905:      UNK_0xe683  codep:0x224c parp:0xe683 size:0x0060 C-string:'UNK_0xe683'
// 1906:       TD-SCROLL  codep:0x4b3b parp:0xe6f1 size:0x013f C-string:'TD_dash_SCROLL'
// 1907:      UNK_0xe832  codep:0x224c parp:0xe832 size:0x0014 C-string:'UNK_0xe832'
// 1908:      UNK_0xe848  codep:0x224c parp:0xe848 size:0x0028 C-string:'UNK_0xe848'
// 1909:      UNK_0xe872  codep:0x224c parp:0xe872 size:0x0030 C-string:'UNK_0xe872'
// 1910:      UNK_0xe8a4  codep:0x224c parp:0xe8a4 size:0x002a C-string:'UNK_0xe8a4'
// 1911:      UNK_0xe8d0  codep:0x224c parp:0xe8d0 size:0x008e C-string:'UNK_0xe8d0'
// 1912:      UNK_0xe960  codep:0x224c parp:0xe960 size:0x002a C-string:'UNK_0xe960'
// 1913:      UNK_0xe98c  codep:0x224c parp:0xe98c size:0x00c4 C-string:'UNK_0xe98c'
// 1914:      UNK_0xea52  codep:0x224c parp:0xea52 size:0x001c C-string:'UNK_0xea52'
// 1915:      UNK_0xea70  codep:0x224c parp:0xea70 size:0x0029 C-string:'UNK_0xea70'
// 1916:      UNK_0xea9b  codep:0x224c parp:0xea9b size:0x0284 C-string:'UNK_0xea9b'
// 1917:      UNK_0xed21  codep:0x224c parp:0xed21 size:0x003e C-string:'UNK_0xed21'
// 1918:      UNK_0xed61  codep:0x224c parp:0xed61 size:0x0032 C-string:'UNK_0xed61'
// 1919:       1STOPTION  codep:0x4b3b parp:0xeda1 size:0x0018 C-string:'_1STOPTION'
// 1920:      UNK_0xedbb  codep:0x1d29 parp:0xedbb size:0x0002 C-string:'UNK_0xedbb'
// 1921:      UNK_0xedbf  codep:0x1d29 parp:0xedbf size:0x0002 C-string:'UNK_0xedbf'
// 1922:       DO-OPTION  codep:0x224c parp:0xedcf size:0x006b C-string:'DO_dash_OPTION'
// 1923:    ITEM-OPTIONS  codep:0x4b3b parp:0xee4b size:0x0014 C-string:'ITEM_dash_OPTIONS'
// 1924:      UNK_0xee61  codep:0x224c parp:0xee61 size:0x0051 C-string:'UNK_0xee61'
// 1925:      UNK_0xeeb4  codep:0x224c parp:0xeeb4 size:0x00a4 C-string:'UNK_0xeeb4'
// 1926:      UNK_0xef5a  codep:0x224c parp:0xef5a size:0x0024 C-string:'UNK_0xef5a'
// 1927:        (/ITEMS)  codep:0x224c parp:0xef8b size:0x0094 C-string:'_ro__slash_ITEMS_rc_'
// 1928:        >DESCEND  codep:0x224c parp:0xf02c size:0x0031 C-string:'_gt_DESCEND'
// 1929:      UNK_0xf05f  codep:0x224c parp:0xf05f size:0x00ac C-string:'UNK_0xf05f'
// 1930:      UNK_0xf10d  codep:0x224c parp:0xf10d size:0x001b C-string:'UNK_0xf10d'
// 1931:      UNK_0xf12a  codep:0x224c parp:0xf12a size:0x003d C-string:'UNK_0xf12a'
// 1932:  (/LAUNCH/LAND)  codep:0x224c parp:0xf17a size:0x0044 C-string:'_ro__slash_LAUNCH_slash_LAND_rc_'
// 1933:      UNK_0xf1c0  codep:0x1d29 parp:0xf1c0 size:0x0002 C-string:'UNK_0xf1c0'
// 1934:      UNK_0xf1c4  codep:0x224c parp:0xf1c4 size:0x0006 C-string:'UNK_0xf1c4'
// 1935:      UNK_0xf1cc  codep:0x224c parp:0xf1cc size:0x0010 C-string:'UNK_0xf1cc'
// 1936:      UNK_0xf1de  codep:0x224c parp:0xf1de size:0x0010 C-string:'UNK_0xf1de'
// 1937:      UNK_0xf1f0  codep:0x224c parp:0xf1f0 size:0x0020 C-string:'UNK_0xf1f0'
// 1938:      UNK_0xf212  codep:0x224c parp:0xf212 size:0x001a C-string:'UNK_0xf212'
// 1939:      UNK_0xf22e  codep:0x224c parp:0xf22e size:0x001c C-string:'UNK_0xf22e'
// 1940:      UNK_0xf24c  codep:0x224c parp:0xf24c size:0x0018 C-string:'UNK_0xf24c'
// 1941:      UNK_0xf266  codep:0x224c parp:0xf266 size:0x000a C-string:'UNK_0xf266'
// 1942:      UNK_0xf272  codep:0x224c parp:0xf272 size:0x0016 C-string:'UNK_0xf272'
// 1943:      UNK_0xf28a  codep:0x224c parp:0xf28a size:0x0039 C-string:'UNK_0xf28a'
// 1944:      UNK_0xf2c5  codep:0x224c parp:0xf2c5 size:0x003c C-string:'UNK_0xf2c5'
// 1945:      UNK_0xf303  codep:0x224c parp:0xf303 size:0x004e C-string:'UNK_0xf303'
// 1946:      UNK_0xf353  codep:0x224c parp:0xf353 size:0x0030 C-string:'UNK_0xf353'
// 1947:      UNK_0xf385  codep:0x224c parp:0xf385 size:0x0034 C-string:'UNK_0xf385'
// 1948:      UNK_0xf3bb  codep:0x224c parp:0xf3bb size:0x001f C-string:'UNK_0xf3bb'
// 1949:      UNK_0xf3dc  codep:0x224c parp:0xf3dc size:0x0065 C-string:'UNK_0xf3dc'
// 1950:     (/LOG-PLAN)  codep:0x224c parp:0xf451 size:0x0000 C-string:'_ro__slash_LOG_dash_PLAN_rc_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xe436[2] = {0x00, 0x00}; // UNK_0xe436
unsigned char UNK_0xe43a[8] = {0x00, 0x00, 0x29, 0x1d, 0x56, 0x3a, 0x20, 0x58}; // UNK_0xe43a
unsigned char UNK_0xe444[2] = {0x00, 0x00}; // UNK_0xe444
unsigned char UNK_0xe448[2] = {0x00, 0x00}; // UNK_0xe448
unsigned char UNK_0xe542[14] = {0x3a, 0x20, 0x4c, 0x22, 0x16, 0x9c, 0xb8, 0x3b, 0x46, 0x5a, 0x23, 0x6d, 0x90, 0x16}; // UNK_0xe542
unsigned char UNK_0xedbb[2] = {0x3a, 0x20}; // UNK_0xedbb
unsigned char UNK_0xedbf[2] = {0x3a, 0x20}; // UNK_0xedbf
unsigned char UNK_0xf1c0[2] = {0x3a, 0x20}; // UNK_0xf1c0



// 0xe432: db 0x12 0x01 '  '

// ================================================
// 0xe434: WORD 'UNK_0xe436' codep=0x1d29 parp=0xe436
// ================================================
// 0xe436: db 0x00 0x00 '  '

// ================================================
// 0xe438: WORD 'UNK_0xe43a' codep=0x1d29 parp=0xe43a
// ================================================
// 0xe43a: db 0x00 0x00 0x29 0x1d 0x56 0x3a 0x20 0x58 '  ) V: X'

// ================================================
// 0xe442: WORD 'UNK_0xe444' codep=0x1d29 parp=0xe444
// ================================================
// 0xe444: db 0x00 0x00 '  '

// ================================================
// 0xe446: WORD 'UNK_0xe448' codep=0x1d29 parp=0xe448
// ================================================
// 0xe448: db 0x00 0x00 '  '

// ================================================
// 0xe44a: WORD 'UNK_0xe44c' codep=0x224c parp=0xe44c
// ================================================

void UNK_0xe44c() // UNK_0xe44c
{
  Push(pp_UNK_0xe448); // UNK_0xe448
  ON(); // ON
}

// 0xe452: db 0x4c 0x22 0x5d 0x17 0x6b 0xb7 0xd9 0x84 0x90 0x16 'L"] k     '

// ================================================
// 0xe45c: WORD 'UNK_0xe45e' codep=0x7394 parp=0xe45e
// ================================================
// 0xe45e: db 0x20 0x16 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xe464: WORD 'UNK_0xe466' codep=0x224c parp=0xe466
// ================================================

void UNK_0xe466() // UNK_0xe466
{
  UNK_0xe45e(); // UNK_0xe45e
  C_at_(); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xe470: WORD 'UNK_0xe472' codep=0x224c parp=0xe472
// ================================================

void UNK_0xe472() // UNK_0xe472
{
  Push(1); // 1
  Push(pp_WBOTTOM); // WBOTTOM
  _ex_(); // !
}


// ================================================
// 0xe47a: WORD 'UNK_0xe47c' codep=0x224c parp=0xe47c
// ================================================

void UNK_0xe47c() // UNK_0xe47c
{
  Push(pp_ETIME); // ETIME
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  CTINIT(); // CTINIT

  UNK_0x3f09("DRONE RECALLED");
  _dot_TTY(); // .TTY
  Push(0x03e8);
  MS(); // MS
  Push(pp_ETIME); // ETIME
  _099(); // 099
}

// 0xe4a5: db 0x94 0x73 0x1c 0x18 0x01 0x20 0xcd 0x6b 0x94 0x73 0x1c 0x1d 0x01 0x20 0xcd 0x6b 0x94 0x73 0x39 0x00 0xbe 0x00 0x57 0x6e ' s     k s     k s9   Wn'

// ================================================
// 0xe4bd: WORD 'UNK_0xe4bf' codep=0x7420 parp=0xe4bf
// ================================================
// 0xe4bf: db 0x14 0x45 0x04 0x94 0x73 0x20 0x07 0x02 0x17 0x49 0x6c ' E  s    Il'

// ================================================
// 0xe4ca: WORD 'UNK_0xe4cc' codep=0x7394 parp=0xe4cc
// ================================================
// 0xe4cc: db 0x20 0x02 0x02 0x17 0x49 0x6c '    Il'

// ================================================
// 0xe4d2: WORD 'UNK_0xe4d4' codep=0x7394 parp=0xe4d4
// ================================================
// 0xe4d4: db 0x20 0x11 0x02 0x17 0x49 0x6c '    Il'

// ================================================
// 0xe4da: WORD 'UNK_0xe4dc' codep=0x7394 parp=0xe4dc
// ================================================
// 0xe4dc: db 0x20 0x04 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xe4e2: WORD 'UNK_0xe4e4' codep=0x7394 parp=0xe4e4
// ================================================
// 0xe4e4: db 0x20 0x09 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xe4ea: WORD 'UNK_0xe4ec' codep=0x7420 parp=0xe4ec
// ================================================
// 0xe4ec: db 0x19 0x12 0x07 '   '

// ================================================
// 0xe4ef: WORD 'UNK_0xe4f1' codep=0x7394 parp=0xe4f1
// ================================================
// 0xe4f1: db 0x20 0x0f 0x02 0x17 0x49 0x6c '    Il'

// ================================================
// 0xe4f7: WORD 'UNK_0xe4f9' codep=0x7394 parp=0xe4f9
// ================================================
// 0xe4f9: db 0x20 0x10 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xe4ff: WORD 'UNK_0xe501' codep=0x7420 parp=0xe501
// ================================================
// 0xe501: db 0x24 0x0a 0x01 '$  '

// ================================================
// 0xe504: WORD 'UNK_0xe506' codep=0x7420 parp=0xe506
// ================================================
// 0xe506: db 0x24 0x0b 0x02 '$  '

// ================================================
// 0xe509: WORD 'UNK_0xe50b' codep=0x7420 parp=0xe50b
// ================================================
// 0xe50b: db 0x24 0x11 0x02 '$  '

// ================================================
// 0xe50e: WORD 'UNK_0xe510' codep=0x7420 parp=0xe510
// ================================================
// 0xe510: db 0x24 0x13 0x01 '$  '

// ================================================
// 0xe513: WORD 'UNK_0xe515' codep=0x7420 parp=0xe515
// ================================================
// 0xe515: db 0x24 0x14 0x01 '$  '

// ================================================
// 0xe518: WORD 'UNK_0xe51a' codep=0x7420 parp=0xe51a
// ================================================
// 0xe51a: db 0x24 0x15 0x0f 0x20 0x74 0x14 0x13 0x02 0x20 0x74 0x00 0x13 0x02 '$   t    t   '

// ================================================
// 0xe527: WORD 'UNK_0xe529' codep=0x7420 parp=0xe529
// ================================================
// 0xe529: db 0x17 0x12 0x01 0x20 0x74 0x00 0x15 0x01 0x20 0x74 0x00 0x16 0x01 0x20 0x74 0x00 0x17 0x01 0x20 0x74 0x14 0x43 0x02 '    t    t    t    t C '

// ================================================
// 0xe540: WORD 'UNK_0xe542' codep=0x1d29 parp=0xe542
// ================================================
// 0xe542: db 0x3a 0x20 0x4c 0x22 0x16 0x9c 0xb8 0x3b 0x46 0x5a 0x23 0x6d 0x90 0x16 ': L"   ;FZ#m  '

// ================================================
// 0xe550: WORD 'UNK_0xe552' codep=0x224c parp=0xe552
// ================================================

void UNK_0xe552() // UNK_0xe552
{
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  _ex_(); // !
  Push(1); // 1
  Push(pp_RECORD_n_); // RECORD#
  _ex_(); // !
}


// ================================================
// 0xe562: WORD 'UNK_0xe564' codep=0x224c parp=0xe564
// ================================================

void UNK_0xe564() // UNK_0xe564
{
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xe56c: WORD 'UNK_0xe56e' codep=0x224c parp=0xe56e
// ================================================

void UNK_0xe56e() // UNK_0xe56e
{
  Push(0xc285);
  MODULE(); // MODULE
  Push(cc__7); // 7
  D_dot_R(); // D.R
}


// ================================================
// 0xe57a: WORD '.BAL' codep=0x224c parp=0xe583
// ================================================

void _dot_BAL() // .BAL
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()+3); // 3+
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()-2); // 2-
  POS_dot_(); // POS.
  PRINT("YOUR ACCOUNT BALANCE IS: ", 25); // (.")
  UNK_0xe56e(); // UNK_0xe56e
  PRINT(" SP", 3); // (.")
  Push(0x2710); Pust(0x0000);
  Push(0xbe96);
  MODULE(); // MODULE
  CTERASE(); // CTERASE
}


// ================================================
// 0xe5c9: WORD 'UNK_0xe5cb' codep=0x224c parp=0xe5cb
// ================================================

void UNK_0xe5cb() // UNK_0xe5cb
{
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_at_(); // 1.5@
}

// 0xe5d1: db 0x4c 0x22 0xc9 0xe5 0x1f 0x7a 0xb1 0x7a 0x8b 0x75 0x0f 0x65 0x32 0x6d 0xdf 0x79 0x90 0x16 0x4c 0x22 0xc9 0xe5 0x1f 0x7a 0xc9 0x7a 0x8b 0x75 0x0f 0x65 0x32 0x6d 0xdf 0x79 0x90 0x16 'L"   z z u e2m y  L"   z z u e2m y  '

// ================================================
// 0xe5f5: WORD 'UNK_0xe5f7' codep=0x224c parp=0xe5f7
// ================================================

void UNK_0xe5f7() // UNK_0xe5f7
{
  UNK_0xe5cb(); // UNK_0xe5cb
  _gt_C_plus_S(); // >C+S
  TEXT_dash_IN(); // TEXT-IN
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe605: WORD 'UNK_0xe607' codep=0x224c parp=0xe607
// ================================================

void UNK_0xe607() // UNK_0xe607
{
  _gt_C_plus_S(); // >C+S
  _star_EOL(); // *EOL
  _gt_C_plus_S(); // >C+S
  BOX_gt_LIS(); // BOX>LIS
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe615: WORD 'UNK_0xe617' codep=0x224c parp=0xe617
// ================================================

void UNK_0xe617() // UNK_0xe617
{
  _gt_R(); // >R
  _at_CRS(); // @CRS
  Push(cc__3); // 3
  R_gt_(); // R>
  POS_dot_(); // POS.
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  Push(cc__7); // 7
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(0x009a);
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  WHITE(); // WHITE
  GREY1(); // GREY1
  DK_dash_GREE(); // DK-GREE
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
  BLT(); // BLT
  _ex_CRS(); // !CRS
}


// ================================================
// 0xe649: WORD 'UNK_0xe64b' codep=0x224c parp=0xe64b
// ================================================

void UNK_0xe64b() // UNK_0xe64b
{
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  UNK_0xe617(); // UNK_0xe617
}


// ================================================
// 0xe655: WORD 'UNK_0xe657' codep=0x224c parp=0xe657
// ================================================

void UNK_0xe657() // UNK_0xe657
{
  CTINIT(); // CTINIT
  Push(pp_WLINES); // WLINES
  Push(Read16(Pop())); // @
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  POS_dot_(); // POS.
  TEXT_gt_PA(); // TEXT>PA
  PAD(); // PAD
  _do__dot_(); // $.
  INEXT(); // INEXT
  i++;
  } while(i<imax); // (LOOP) 0xffe4

}


// ================================================
// 0xe681: WORD 'UNK_0xe683' codep=0x224c parp=0xe683
// ================================================

void UNK_0xe683() // UNK_0xe683
{
  Push(pp__ro_SCROLL); // (SCROLL
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex_(); // 1.5!
  Push(0); // 0

  label1:
  Push(Pop()+1); // 1+
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label1;
  _gt_R(); // >R
  _gt_1FONT(); // >1FONT
  Push(0x002b);
  Push(cc__3); // 3
  Push(cc__5); // 5
  R_gt_(); // R>
  MIN(); // MIN
  Push(0x0026);
  WINDOW(); // WINDOW
  UNK_0xe657(); // UNK_0xe657
  IPREV(); // IPREV
  UNK_0xe64b(); // UNK_0xe64b
}

// 0xe6b9: db 0x4c 0x22 0xb1 0x7a 0xd1 0xe5 0x84 0xaa 0xdb 0x23 0x49 0xe6 0xfc 0x9e 0x49 0xe6 0x90 0x16 0x4c 0x22 0xc9 0x7a 0xe3 0xe5 0xc9 0xe5 0x1f 0x7a 0x84 0xaa 0xdf 0x79 0xdb 0x23 0x49 0xe6 0x0e 0x9f 0x49 0xe6 0x90 0x16 'L" z     #I   I   L" z     z   y #I   I   '

// ================================================
// 0xe6e3: WORD 'TD-SCROLL' codep=0x4b3b parp=0xe6f1
// ================================================
// 0xe6f1: db 0x02 0x00 0x48 0x3a 0x01 0x00 0xbb 0xe6 0xff 0xff 0xcd 0xe6 0x4c 0x22 0x5d 0x17 0x38 0x00 0x20 0x0f 0xa9 0x81 0x1f 0x7a 0x57 0xaa 0x32 0x6d 0x66 0xaa 0x32 0x6d 0x75 0xaa 0x5d 0x17 0x26 0x00 0x98 0x09 0x9d 0x6d 0x75 0xaa 0xf2 0x0e 0x8a 0x6d 0x8b 0x75 0xdf 0x79 0x2e 0x0f 0xb0 0x5e 0x23 0x6d 0x90 0x16 0x4c 0x22 0x07 0x3f 0x08 0x45 0x4c 0x45 0x4d 0x45 0x4e 0x54 0x53 0x3c 0xe4 0x83 0x4a 0x11 0x6c 0xfd 0xe6 0xd0 0x63 0x2f 0x7a 0x3f 0x7a 0x8b 0x75 0xf1 0x7b 0xa7 0x75 0xdf 0x79 0x38 0xe4 0x57 0x6d 0x90 0x16 0x4c 0x22 0x11 0x6c 0x1f 0x7a 0x3f 0x7a 0x5d 0x17 0x0b 0x00 0x5d 0x17 0x0a 0x00 0x4c 0x7e 0x32 0x0e 0x8b 0x75 0x3c 0xe4 0x32 0x6d 0xa7 0x75 0xdf 0x79 0x66 0xaa 0x2f 0x7a 0x22 0x75 0x5d 0x17 0x0b 0x00 0x5f 0x12 0x34 0x75 0x5d 0x17 0x0a 0x00 0x5f 0x12 0xf5 0x12 0x07 0x13 0xdf 0x79 0xfa 0x15 0x08 0x00 0xb1 0x7a 0x60 0x16 0xde 0xff 0x90 0x16 0x4c 0x22 0x34 0x75 0xb4 0x0d 0xd0 0x63 0x2f 0x7a 0x3f 0x7a 0x20 0x0f 0x66 0xaa 0x2f 0x7a 0x34 0x75 0x50 0x0e 0x5f 0x12 0x22 0x75 0x5d 0x17 0x1a 0x00 0x5f 0x12 0xf5 0x12 0xbb 0x74 0x38 0x0c 0x16 0x16 0xff 0xff 0xff 0xff 0x07 0x40 0x07 0x13 0xf5 0x12 0x3e 0x13 0xdf 0x79 0x41 0x0e 0xfa 0x15 0x08 0x00 0x8b 0x75 0x0f 0x65 0x32 0x6d 0xb1 0x7a 0x41 0x0e 0x8d 0x7a 0x3e 0x13 0xfa 0x15 0xc2 0xff 0x90 0x0e 0x32 0x0e 0xa7 0x75 0xdf 0x79 0x90 0x16 0x4c 0x22 0xb1 0xa8 0x1f 0x7a 0x9a 0xe7 0x07 0x13 0xfa 0x15 0x2e 0x00 0x38 0xe4 0xae 0x0b 0x07 0x13 0xfa 0x15 0x04 0x00 0x2d 0xe7 0xd0 0x63 0x2f 0x7a 0x3f 0x7a 0x56 0xe7 0x8b 0x75 0xa7 0x75 0xdf 0x79 0x88 0xb9 0xdb 0x23 0xcd 0x0c 0x8b 0x75 0x3c 0xe4 0x83 0x4a 0xfd 0xe6 0x06 0x0e 0x17 0x7c 0xdf 0x79 0x90 0x16 '  H:        L"] 8      zW 2mf 2mu ] &    mu    m u y.  ^#m  L" ? ELEMENTS<  J l   c/z?z u { u y8 Wm  L" l z?z]   ]   L~2  u< 2m u yf /z"u]   _ 4u]   _      y     z`     L"4u   c/z?z  f /z4uP _ "u]   _    t8        @    >  yA      u e2m zA  z>       2  u y  L"   z      . 8         -  c/z?zV  u u y   #   u<  J     | y  '

// ================================================
// 0xe830: WORD 'UNK_0xe832' codep=0x224c parp=0xe832
// ================================================

void UNK_0xe832() // UNK_0xe832
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  INST_dash_X(); // INST-X
  _2_at_(); // 2@
  SWAP(); // SWAP
  ICLOSE(); // ICLOSE
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_(); // ?ICONS-
}


// ================================================
// 0xe846: WORD 'UNK_0xe848' codep=0x224c parp=0xe848
// ================================================

void UNK_0xe848() // UNK_0xe848
{
  _at_ID(); // @ID
  Push(0x002b);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  UNK_0xe4ec(); // UNK_0xe4ec
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ICLOSE(); // ICLOSE
  return;

  label1:
  Push(0); // 0
}


// ================================================
// 0xe870: WORD 'UNK_0xe872' codep=0x224c parp=0xe872
// ================================================

void UNK_0xe872() // UNK_0xe872
{
  Push(pp_UNK_0xe436); // UNK_0xe436
  _099(); // 099
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xe832(); // UNK_0xe832
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  POINT_gt_I(); // POINT>I
  UNK_0xe848(); // UNK_0xe848
  Push(pp_UNK_0xe436); // UNK_0xe436
  _plus__ex_(); // +!
  i++;
  } while(i<imax); // (LOOP) 0xfff6


  label1:
  Push(pp_UNK_0xe436); // UNK_0xe436
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_UNK_0xe436); // UNK_0xe436
  _ex_(); // !
}


// ================================================
// 0xe8a2: WORD 'UNK_0xe8a4' codep=0x224c parp=0xe8a4
// ================================================

void UNK_0xe8a4() // UNK_0xe8a4
{
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0030);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN

  label2:
  Push(0xffff); Pust(0xffff);
  INST_dash_X(); // INST-X
  D_ex_(); // D!
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label2;
  CDROP(); // CDROP

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8ce: WORD 'UNK_0xe8d0' codep=0x224c parp=0xe8d0
// ================================================

void UNK_0xe8d0() // UNK_0xe8d0
{
  UNK_0xe832(); // UNK_0xe832
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  POINT_gt_I(); // POINT>I
  _at_ID(); // @ID
  Push(0x002b);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0x00ff);
  INST_dash_QT(); // INST-QT
  Push(Read16(Pop())); // @
  MIN(); // MIN
  DUP(); // DUP
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex_(); // !
  Push(-Pop()); // NEGATE
  INST_dash_QT(); // INST-QT
  _plus__ex_(); // +!
  _at_INST_dash_S(); // @INST-S
  DUP(); // DUP
  Push(pp_UNK_0xe542); // UNK_0xe542
  _ex_(); // !
  Push(cc__6); // 6
  _eq_(); // =
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  if (Pop() == 0) goto label2;
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  UNK_0xe4ec(); // UNK_0xe4ec
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  goto label3;

  label2:
  Push(cc__3); // 3
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  UNK_0xe4ec(); // UNK_0xe4ec
  Push(j); // I
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label4;
  Push(pp_UNK_0xe542); // UNK_0xe542
  Push(Read16(Pop())); // @
  UNK_0xe4ec(); // UNK_0xe4ec
  Push(j); // I
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  UNK_0xe4ec(); // UNK_0xe4ec
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(j); // I
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  LEAVE(); // LEAVE

  label4:
  j++;
  } while(j<jmax); // (LOOP) 0xffd2


  label3:
  ICLOSE(); // ICLOSE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xff7c

}


// ================================================
// 0xe95e: WORD 'UNK_0xe960' codep=0x224c parp=0xe960
// ================================================

void UNK_0xe960() // UNK_0xe960
{
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0030);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN

  label2:
  UNK_0xe8d0(); // UNK_0xe8d0
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label2;
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe98a: WORD 'UNK_0xe98c' codep=0x224c parp=0xe98c
// ================================================

void UNK_0xe98c() // UNK_0xe98c
{
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  Push(0x0031);
  _ex_INST_dash_S(); // !INST-S

  label1:
  ICLOSE(); // ICLOSE
  UNK_0xe832(); // UNK_0xe832
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  POINT_gt_I(); // POINT>I
  UNK_0xe848(); // UNK_0xe848
  if (Pop() == 0) goto label2;
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  Push(cc__4); // 4
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  UNK_0xe4ec(); // UNK_0xe4ec
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  Push(j); // I
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label3;
  Push(0x001a);
  Push(j); // I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label4;
  Push(cc__6); // 6
  goto label5;

  label4:
  UNK_0xe4ec(); // UNK_0xe4ec
  Push(j); // I
  Push(Pop()-1); // 1-
  Push(Pop() + Pop()); // +
  C_at_(); // C@

  label5:
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  INST_dash_QT(); // INST-QT
  _ex_(); // !
  CI(); // CI
  ICLOSE(); // ICLOSE
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE

  label3:
  j++;
  } while(j<jmax); // (LOOP) 0xffbc

  UNK_0xe4ec(); // UNK_0xe4ec
  Push(cc__7); // 7
  Push(0); // 0
  FILL(); // FILL
  ICLOSE(); // ICLOSE

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xff9a

  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Push(pp_UNK_0xe436); // UNK_0xe436
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label6;
  Push(0x0030);
  _ex_INST_dash_S(); // !INST-S

  label6:
  IFIRST(); // IFIRST
  Push(0x000b);
  Push(0x0031);
  IFIND(); // IFIND
  if (Pop() == 0) goto label7;
  Push(0x000a);
  _ex_INST_dash_S(); // !INST-S

  label7:
  ICLOSE(); // ICLOSE
  UNK_0xe8a4(); // UNK_0xe8a4
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea50: WORD 'UNK_0xea52' codep=0x224c parp=0xea52
// ================================================

void UNK_0xea52() // UNK_0xea52
{
  _gt_R(); // >R
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  _dash_(); // -
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(1); // 1
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  R_gt_(); // R>
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xea6e: WORD 'UNK_0xea70' codep=0x224c parp=0xea70
// ================================================

void UNK_0xea70() // UNK_0xea70
{
  BLUE(); // BLUE
  _ex_COLOR(); // !COLOR
  Push(cc__5); // 5
  Push(cc__6); // 6
  CTPOS_dot_(); // CTPOS.
  PRINT("SCROLL ITEMS: ^\  QUIT: []", 26); // (.")
}


// ================================================
// 0xea99: WORD 'UNK_0xea9b' codep=0x224c parp=0xea9b
// ================================================

void UNK_0xea9b() // UNK_0xea9b
{
  _gt_1FONT(); // >1FONT
  _gt_SSCT(); // >SSCT
  CTERASE(); // CTERASE
  UNK_0xea70(); // UNK_0xea70
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _plus__ex_(); // +!
  Push(cc__4); // 4
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(cc__7); // 7
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
  PRINT("ITEM", 4); // (.")
  Push(0x006c);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("VOLUME", 6); // (.")
  Push(0x0088);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("VALUE", 5); // (.")
}

// 0xeae1: db 0x4c 0x22 0xf5 0xe5 0xad 0x74 0xae 0x0b 0x5d 0x17 0x0a 0x00 0x60 0x0f 0xdf 0x79 0xc9 0xe5 0x1f 0x7a 0x75 0xaa 0x5d 0x17 0x1a 0x00 0x72 0x0f 0x97 0x3b 0x5d 0x17 0x2e 0x00 0x9d 0x6d 0xd7 0xa9 0x75 0xaa 0x5d 0x17 0x1e 0x00 0x72 0x0f 0x7f 0x0e 0x92 0x0f 0xf2 0x0e 0x8a 0x6d 0xd7 0xa9 0x32 0x0e 0x92 0x0c 0x75 0xaa 0x5d 0x17 0x1f 0x00 0x72 0x0f 0x0a 0x6d 0xdf 0x79 0x90 0x16 0x4c 0x22 0xf5 0xe5 0xad 0x74 0xae 0x0b 0xdf 0x79 0x89 0x12 0xfa 0x15 0x18 0x00 0xd0 0x63 0x83 0x4a 0x9d 0x7a 0xc9 0xe5 0x1f 0x7a 0x1e 0x7f 0xb8 0x3b 0xb0 0x5e 0x23 0x6d 0xa7 0x75 0xdf 0x79 0x90 0x16 0x4c 0x22 0x5d 0x17 0x80 0xbf 0xd9 0x84 0x0c 0x50 0x9d 0x86 0x20 0x0f 0x97 0x3b 0x16 0x9c 0xdc 0x1b 0x19 0x50 0x52 0x45 0x53 0x53 0x20 0x41 0x4e 0x59 0x20 0x4b 0x45 0x59 0x20 0x54 0x4f 0x20 0x43 0x4f 0x4e 0x54 0x49 0x4e 0x55 0x45 0x98 0x2a 0x38 0x0c 0x16 0x16 0x60 0xea 0x00 0x00 0x65 0x10 0x98 0x2a 0x38 0x0c 0xdb 0x3f 0x14 0x40 0xdd 0xa3 0x3e 0x13 0xfa 0x15 0xf2 0xff 0xde 0x0d 0x90 0x16 0x4c 0x22 0x5d 0x17 0x01 0xcd 0xd9 0x84 0x59 0x55 0xae 0x0b 0x41 0x0e 0xc6 0x11 0x41 0x0e 0xad 0x74 0x23 0x6d 0x2e 0x53 0x1f 0x7a 0x3b 0xe5 0x23 0x6d 0xdf 0x79 0x41 0x0e 0x5d 0x17 0xf6 0xff 0xcd 0x10 0xfc 0x62 0x38 0x0c 0x65 0x10 0xfc 0x62 0x4c 0x6d 0x5d 0x17 0x1a 0x00 0x34 0x75 0xa9 0x81 0x1f 0x7a 0xad 0x74 0x16 0x6d 0x8b 0x75 0xdf 0x79 0x11 0x6c 0x1f 0x7a 0xf0 0x0d 0x3c 0xb9 0xdf 0x79 0x59 0x55 0xae 0x0b 0xfa 0x15 0x0e 0x00 0xe1 0xea 0x2b 0xeb 0xf2 0xe7 0xe1 0xea 0x60 0x16 0x04 0x00 0xde 0x0d 0x5d 0x17 0xec 0xb6 0xd9 0x84 0xf7 0xc0 0x90 0x16 0x4c 0x22 0x9e 0x74 0x2f 0x7a 0xe7 0x5e 0x65 0x6d 0xbe 0xa9 0xcd 0x0c 0x7f 0xbb 0xdf 0x79 0xf7 0x66 0xcd 0x0c 0x5d 0x17 0x6f 0xbf 0xd9 0x84 0x16 0x16 0x20 0x4e 0x00 0x00 0x5d 0x17 0x96 0xbe 0xd9 0x84 0x90 0x16 0x4c 0x22 0x5c 0x5d 0xae 0x0b 0x97 0x3b 0x92 0x0f 0x15 0xe6 0x9f 0x3b 0x65 0x6c 0x23 0x6d 0xb8 0x3b 0x6a 0x5d 0x23 0x6d 0x46 0x9c 0x53 0x50 0x49 0x59 0x16 0x6d 0x0f 0xec 0x29 0x76 0xfa 0x15 0x10 0x00 0x3f 0x7a 0x0f 0xec 0xb1 0x7a 0x8d 0x7a 0xfa 0x15 0xf8 0xff 0xdf 0x79 0x5d 0x17 0xf9 0xff 0x65 0x6c 0x23 0x6d 0x2e 0x0f 0x6a 0x5d 0x23 0x6d 0x90 0x16 0x4c 0x22 0x5d 0x17 0xe0 0x01 0x92 0x0f 0x5d 0x17 0x0a 0x00 0x5d 0x17 0x35 0x00 0xc4 0x0f 0xf2 0x0e 0x5d 0x17 0x80 0x04 0x92 0x0f 0x5d 0x17 0x0a 0x00 0x5d 0x17 0x40 0x00 0xc4 0x0f 0xf2 0x0e 0x90 0x16 0x4c 0x22 0xc8 0x0d 0xfa 0x15 0x18 0x00 0x78 0x12 0xfa 0x15 0x0a 0x00 0xdc 0x1b 0x01 0x57 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x45 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x20 0x90 0x16 0x4c 0x22 0xc8 0x0d 0xfa 0x15 0x18 0x00 0x78 0x12 0xfa 0x15 0x0a 0x00 0xdc 0x1b 0x01 0x53 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x4e 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x20 0x90 0x16 0x4c 0x22 0x7f 0xec 0x41 0x0e 0x41 0x0e 0x78 0x12 0xfa 0x15 0x04 0x00 0xc6 0x11 0x20 0x0f 0xe1 0x27 0xcb 0xec 0xdc 0x1b 0x03 0x20 0x2a 0x20 0x41 0x0e 0x41 0x0e 0x78 0x12 0xfa 0x15 0x04 0x00 0xc6 0x11 0x20 0x0f 0xe1 0x27 0xa7 0xec 0x90 0x16 'L"   t  ]   `  y   zu ]   r  ;] .  m  u ]   r       m  2   u ]   r  m y  L"   t   y       c J z   z  ; ^#m u y  L"]      P     ;     PRESS ANY KEY TO CONTINUE *8   `   e  *8  ? @  >         L"]     YU  A   A  t#m.S z; #m yA ]      b8 e  bLm]   4u   z t m u y l z  <  yYU        +     `     ]         L" t/z ^em      y f  ] o      N  ]       L"\]   ;     ;el#m ;j]#mF SPIY m  )v    ?z   z z     y]   el#m. j]#m  L"]     ]   ] 5     ]     ]   ] @       L"      x        W`      E`         L"      x        S`      N`         L" A A x          '      * A A x          '    '

// ================================================
// 0xed1f: WORD 'UNK_0xed21' codep=0x224c parp=0xed21
// ================================================

void UNK_0xed21() // UNK_0xed21
{
  Push(pp_UNK_0xe448); // UNK_0xe448
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(1); // 1
  Push(cc__5); // 5
  CTPOS_dot_(); // CTPOS.
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  PRINT("REVISING...", 11); // (.")

  label1:
  DELETE_dash_(); // DELETE-
  MAKE_dash_SC(); // MAKE-SC
  _star_STARSH(); // *STARSH
  GET_dash_BOX(); // GET-BOX
  Push(1); // 1
  Push(cc__5); // 5
  CTPOS_dot_(); // CTPOS.
  Push(0x000b);
  BLACK(); // BLACK
  POLY_dash_ER(); // POLY-ER
  _star_STARSH(); // *STARSH
  UNK_0xe607(); // UNK_0xe607
  UNK_0xe683(); // UNK_0xe683
}


// ================================================
// 0xed5f: WORD 'UNK_0xed61' codep=0x224c parp=0xed61
// ================================================

void UNK_0xed61() // UNK_0xed61
{
  UNK_0xe44c(); // UNK_0xe44c
  Push(0xccf0);
  MODULE(); // MODULE
  Pop(); Pop();// 2DROP
  Push(0xb6ec);
  MODULE(); // MODULE
  _dot_SORD(); // .SORD
}

// 0xed75: db 0x4c 0x22 0x4a 0xe4 0xbb 0x74 0x38 0x0c 0x16 0x16 0xff 0xff 0xff 0xff 0x07 0x40 0xfa 0x15 0x08 0x00 0xa1 0xeb 0x60 0x16 0x04 0x00 0x5f 0xed 0x90 0x16 'L"J  t8        @      `   _   '

// ================================================
// 0xed93: WORD '1STOPTION' codep=0x4b3b parp=0xeda1
// ================================================
// 0xeda1: db 0x05 0x00 0x61 0xed 0x1c 0x00 0x61 0xed 0x1b 0x00 0x3b 0xec 0x1a 0x00 0x77 0xed 0x44 0x00 0x61 0xed 0x09 0x00 0x61 0xed '  a   a   ;   w D a   a '

// ================================================
// 0xedb9: WORD 'UNK_0xedbb' codep=0x1d29 parp=0xedbb
// ================================================
// 0xedbb: db 0x3a 0x20 ': '

// ================================================
// 0xedbd: WORD 'UNK_0xedbf' codep=0x1d29 parp=0xedbf
// ================================================
// 0xedbf: db 0x3a 0x20 ': '

// ================================================
// 0xedc1: WORD 'DO-OPTION' codep=0x224c parp=0xedcf
// ================================================

void DO_dash_OPTION() // DO-OPTION
{
  Push(pp_UNK_0xedbb); // UNK_0xedbb
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xed61(); // UNK_0xed61
  goto label2;

  label1:
  _at_INST_dash_C(); // @INST-C
  _1STOPTION(); // 1STOPTION

  label2:
  Push(1); // 1
}

// 0xede5: db 0x4c 0x22 0xdc 0x1b 0x09 0x20 0x4a 0x45 0x54 0x54 0x49 0x53 0x4f 0x4e 0x20 0x0f 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x09 0x20 0x50 0x4c 0x41 0x59 0x42 0x41 0x43 0x4b 0x1c 0x9f 0xdc 0x1b 0x06 0x20 0x45 0x52 0x41 0x53 0x45 0x2e 0x0f 0x90 0x16 0x4c 0x22 0xbb 0x74 0x38 0x0c 0x16 0x16 0xff 0xff 0xff 0xff 0x07 0x40 0xfa 0x15 0x12 0x00 0xdc 0x1b 0x07 0x20 0x50 0x49 0x43 0x4b 0x55 0x50 0x20 0x0f 0x60 0x16 0x04 0x00 0xe5 0xed 0x90 0x16 'L"    JETTISON    L"    PLAYBACK      ERASE.   L" t8        @        PICKUP  `       '

// ================================================
// 0xee3a: WORD 'ITEM-OPTIONS' codep=0x4b3b parp=0xee4b
// ================================================
// 0xee4b: db 0x04 0x00 0xe7 0xed 0x1c 0x00 0xe7 0xed 0x1b 0x00 0xf9 0xed 0x44 0x00 0xe7 0xed 0x1a 0x00 0x16 0xee '            D       '

// ================================================
// 0xee5f: WORD 'UNK_0xee61' codep=0x224c parp=0xee61
// ================================================

void UNK_0xee61() // UNK_0xee61
{
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(cc__7); // 7
  _dash_(); // -
  POS_dot_(); // POS.
  CTINIT(); // CTINIT
  _at_INST_dash_C(); // @INST-C
  ITEM_dash_OPTIONS(); // ITEM-OPTIONS
  Push(pp_UNK_0xedbf); // UNK_0xedbf
  _ex_(); // !
  Push(pp_UNK_0xedbb); // UNK_0xedbb
  _099(); // 099
  BLUE(); // BLUE
  _ex_COLOR(); // !COLOR
  Push(cc__4); // 4
  Push(cc__6); // 6
  CTPOS_dot_(); // CTPOS.
  PRINT("^\ SELECT OPTION OR [ QUIT ]", 28); // (.")
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  _dash_(); // -
  UNK_0xe617(); // UNK_0xe617
}


// ================================================
// 0xeeb2: WORD 'UNK_0xeeb4' codep=0x224c parp=0xeeb4
// ================================================

void UNK_0xeeb4() // UNK_0xeeb4
{
  UNK_0xe5f7(); // UNK_0xe5f7
  _at_INST_dash_C(); // @INST-C
  ICLOSE(); // ICLOSE
  Push(0x000b);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xe5f7(); // UNK_0xe5f7
  BLACK(); // BLACK
  UNK_0xe64b(); // UNK_0xe64b
  UNK_0xea52(); // UNK_0xea52
  UNK_0xee61(); // UNK_0xee61

  label6:
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label2;
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xedbb); // UNK_0xedbb
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  DUP(); // DUP
  Push(0); // 0
  Push(pp_UNK_0xedbf); // UNK_0xedbf
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xedbb); // UNK_0xedbb
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(Pop()+1); // 1+
  UNK_0xe617(); // UNK_0xe617
  DUP(); // DUP
  Push(pp_UNK_0xedbb); // UNK_0xedbb
  _ex_(); // !
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(Pop()+1); // 1+
  UNK_0xe617(); // UNK_0xe617
  goto label2;

  label3:
  Pop(); // DROP

  label2:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label4;
  DO_dash_OPTION(); // DO-OPTION
  goto label5;

  label4:
  Push(0); // 0

  label5:
  Push(pp_FQUIT); // FQUIT
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label6;
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(1); // 1
  _gt_(); // >
  if (Pop() == 0) goto label7;
  UNK_0xea9b(); // UNK_0xea9b
  UNK_0xed21(); // UNK_0xed21

  label7:
  return;

  label1:
  BEEP(); // BEEP
}


// ================================================
// 0xef58: WORD 'UNK_0xef5a' codep=0x224c parp=0xef5a
// ================================================

void UNK_0xef5a() // UNK_0xef5a
{
  CTINIT(); // CTINIT
  PRINT("STARSHIP HOLD IS EMPTY.", 23); // (.")
  Push(0x07d0);
  MS(); // MS
}


// ================================================
// 0xef7e: WORD '(/ITEMS)' codep=0x224c parp=0xef8b
// ================================================
// entry

void _ro__slash_ITEMS_rc_() // (/ITEMS)
{
  _dot_BAL(); // .BAL
  CTERASE(); // CTERASE
  UNK_0xe872(); // UNK_0xe872
  Push(pp_UNK_0xe436); // UNK_0xe436
  Push(Read16(Pop())); // @
  DUP(); // DUP
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Push(pp_UNK_0xe43a); // UNK_0xe43a
  _ex_(); // !
  CI(); // CI
  Push(Pop() | Pop()); // OR
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(0x002b);
  Push(cc__3); // 3
  Push(cc__7); // 7
  Push(0x0026);
  WINDOW(); // WINDOW
  UNK_0xe472(); // UNK_0xe472
  UNK_0xea9b(); // UNK_0xea9b
  MAKE_dash_SC(); // MAKE-SC
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  if (Pop() == 0) goto label2;
  UNK_0xe98c(); // UNK_0xe98c

  label2:
  _star_STARSH(); // *STARSH
  GET_dash_BOX(); // GET-BOX
  _star_STARSH(); // *STARSH
  UNK_0xe607(); // UNK_0xe607
  UNK_0xe683(); // UNK_0xe683

  label4:
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  TD_dash_SCROLL(); // TD-SCROLL
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label3;
  UNK_0xeeb4(); // UNK_0xeeb4
  Push(pp_FQUIT); // FQUIT
  _099(); // 099

  label3:
  _ask_QUIT(); // ?QUIT
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label4;
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  DELETE_dash_(); // DELETE-
  Push(pp_ESC_dash_EN); // ESC-EN
  ON(); // ON
  UNK_0xe64b(); // UNK_0xe64b
  goto label5;

  label1:
  Pop(); // DROP
  UNK_0xef5a(); // UNK_0xef5a

  label5:
  _gt_SSCT(); // >SSCT
  CTERASE(); // CTERASE
  UNK_0xe960(); // UNK_0xe960
}


// ================================================
// 0xf01f: WORD '>DESCEND' codep=0x224c parp=0xf02c
// ================================================
// entry

void _gt_DESCEND() // >DESCEND
{
  UNK_0xe552(); // UNK_0xe552

  UNK_0x3f09("LAUNCH");
  _1BTN(); // 1BTN
  UNK_0xe564(); // UNK_0xe564
  Push(pp_CONTEXT); // CONTEXT
  _099(); // 099
  Push(0x3a48);
  Push(pp__i_EXTERN); // 'EXTERN
  _ex_(); // !
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xe4bf(); // UNK_0xe4bf
  C_at_(); // C@
  Push(0x00ef);
  Push(Pop() & Pop()); // AND
  UNK_0xe4bf(); // UNK_0xe4bf
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf05d: WORD 'UNK_0xf05f' codep=0x224c parp=0xf05f
// ================================================

void UNK_0xf05f() // UNK_0xf05f
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("READY TO LAUNCH", 15); // (.")
  CTCR(); // CTCR
  PRINT("CONFIRM: [N Y]", 14); // (.")
  Y_slash_N(); // Y/N
  if (Pop() == 0) goto label1;
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(pp__i_LAUNCH); // 'LAUNCH
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  DUP(); // DUP
  if (Pop() == 0) goto label3;
  UNK_0xe47c(); // UNK_0xe47c
  Push(0xbd8b);
  MODULE(); // MODULE
  Push(0xd272);
  MODULE(); // MODULE
  Push(0xbd67);
  MODULE(); // MODULE
  Push(0xbd9b);
  Push(pp__i_EXTERN); // 'EXTERN
  _ex_(); // !

  label3:
  goto label4;

  label2:
  Push(0xd272);
  MODULE(); // MODULE
  Push(1); // 1

  label4:
  if (Pop() == 0) goto label5;
  UNK_0xe552(); // UNK_0xe552

  UNK_0x3f09("LAND  ");
  _1BTN(); // 1BTN
  UNK_0xe564(); // UNK_0xe564

  label5:
  Push(pp_STIME); // STIME
  _2_at_(); // 2@
  Push(0x03e8); Pust(0x0000);
  D_st_(); // D<
  Pop(); // DROP
  return;

  label1:
  CTERASE(); // CTERASE
  PRINT("CANCELLED", 9); // (.")
}


// ================================================
// 0xf10b: WORD 'UNK_0xf10d' codep=0x224c parp=0xf10d
// ================================================

void UNK_0xf10d() // UNK_0xf10d
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("WE'RE NOT IN ORBIT", 18); // (.")
}


// ================================================
// 0xf128: WORD 'UNK_0xf12a' codep=0x224c parp=0xf12a
// ================================================

void UNK_0xf12a() // UNK_0xf12a
{
  Push(pp__ask_PORT); // ?PORT
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("WE CAN'T LAND HERE", 18); // (.")
  Push(0); // 0
  return;

  label1:
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  _ask_DUP(); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xf10d(); // UNK_0xf10d
  Push(0); // 0
}


// ================================================
// 0xf167: WORD '(/LAUNCH/LAND)' codep=0x224c parp=0xf17a
// ================================================
// entry

void _ro__slash_LAUNCH_slash_LAND_rc_() // (/LAUNCH/LAND)
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(cc__5); // 5
  Push(0xb77c);
  MODULE(); // MODULE
  goto label2;

  label1:
  Push(1); // 1

  label2:
  if (Pop() == 0) goto label3;
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  SWAP(); // SWAP
  Push(cc__5); // 5
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label4;
  UNK_0xf05f(); // UNK_0xf05f
  Push(0); // 0
  goto label5;

  label4:
  UNK_0xf12a(); // UNK_0xf12a

  label5:
  return;

  label3:
  Push(0); // 0
}


// ================================================
// 0xf1be: WORD 'UNK_0xf1c0' codep=0x1d29 parp=0xf1c0
// ================================================
// 0xf1c0: db 0x3a 0x20 ': '

// ================================================
// 0xf1c2: WORD 'UNK_0xf1c4' codep=0x224c parp=0xf1c4
// ================================================

void UNK_0xf1c4() // UNK_0xf1c4
{
  Push(pp_UNK_0xf1c0); // UNK_0xf1c0
  _plus__ex_(); // +!
}


// ================================================
// 0xf1ca: WORD 'UNK_0xf1cc' codep=0x224c parp=0xf1cc
// ================================================

void UNK_0xf1cc() // UNK_0xf1cc
{
  UNK_0xe4f9(); // UNK_0xe4f9
  C_at_(); // C@
  Push(2); // 2
  _st_(); // <
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xf1c4(); // UNK_0xf1c4
}


// ================================================
// 0xf1dc: WORD 'UNK_0xf1de' codep=0x224c parp=0xf1de
// ================================================

void UNK_0xf1de() // UNK_0xf1de
{
  UNK_0xe4f1(); // UNK_0xe4f1
  C_at_(); // C@
  Push(cc__3); // 3
  _gt_(); // >
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xf1c4(); // UNK_0xf1c4
}


// ================================================
// 0xf1ee: WORD 'UNK_0xf1f0' codep=0x224c parp=0xf1f0
// ================================================

void UNK_0xf1f0() // UNK_0xf1f0
{
  UNK_0xe4cc(); // UNK_0xe4cc
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x0045);
  _gt_(); // >
  OVER(); // OVER
  Push(0x0083);
  _st_(); // <
  Push(Pop() + Pop()); // +
  UNK_0xf1c4(); // UNK_0xf1c4
  Push(0x00c8);
  _gt_(); // >
}


// ================================================
// 0xf210: WORD 'UNK_0xf212' codep=0x224c parp=0xf212
// ================================================

void UNK_0xf212() // UNK_0xf212
{
  UNK_0xe4d4(); // UNK_0xe4d4
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(cc__4); // 4
  _st_(); // <
  OVER(); // OVER
  Push(cc__3); // 3
  _st_(); // <
  Push(Pop() + Pop()); // +
  UNK_0xf1c4(); // UNK_0xf1c4
  Push(2); // 2
  _gt_(); // >
}


// ================================================
// 0xf22c: WORD 'UNK_0xf22e' codep=0x224c parp=0xf22e
// ================================================

void UNK_0xf22e() // UNK_0xf22e
{
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  Push(0x000f);
  Push(0x0011);
  WITHIN(); // WITHIN
  Push(pp_HYDRO); // HYDRO
  Push(Read16(Pop())); // @
  Push(2); // 2
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf24a: WORD 'UNK_0xf24c' codep=0x224c parp=0xf24c
// ================================================

void UNK_0xf24c() // UNK_0xf24c
{
  Push(pp_HYDRO); // HYDRO
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _eq_(); // =
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  Push(0x0015);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf264: WORD 'UNK_0xf266' codep=0x224c parp=0xf266
// ================================================

void UNK_0xf266() // UNK_0xf266
{
  UNK_0xe4dc(); // UNK_0xe4dc
  C_at_(); // C@
  _0_gt_(); // 0>
  UNK_0xf1c4(); // UNK_0xf1c4
}


// ================================================
// 0xf270: WORD 'UNK_0xf272' codep=0x224c parp=0xf272
// ================================================

void UNK_0xf272() // UNK_0xf272
{
  UNK_0xe4e4(); // UNK_0xe4e4
  C_at_(); // C@
  DUP(); // DUP
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push(0x0032);
  _slash_(); // /
  MAX(); // MAX
  UNK_0xf1c4(); // UNK_0xf1c4
}


// ================================================
// 0xf288: WORD 'UNK_0xf28a' codep=0x224c parp=0xf28a
// ================================================

void UNK_0xf28a() // UNK_0xf28a
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("NAME THIS PLANET: ", 18); // (.")
  CTCR(); // CTCR
  UNK_0xe51a(); // UNK_0xe51a
  Push(0x000f);
  Push(cc_BL); // BL
  FILL(); // FILL
  Push(0x000f);
  Push(0xb6fd);
  MODULE(); // MODULE
  COUNT(); // COUNT
  UNK_0xe51a(); // UNK_0xe51a
  SWAP(); // SWAP
  CMOVE(); // CMOVE
}


// ================================================
// 0xf2c3: WORD 'UNK_0xf2c5' codep=0x224c parp=0xf2c5
// ================================================

void UNK_0xf2c5() // UNK_0xf2c5
{
  _star_OP(); // *OP
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x002d);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x0024);
  Push(0); // 0
  Push(1); // 1
  _star_CREATE(); // *CREATE
  Push(pp__ro_SYSTEM); // (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
  INST_dash_X(); // INST-X
  _2_at_(); // 2@
  ICLOSE(); // ICLOSE
  INST_dash_X(); // INST-X
  D_ex_(); // D!
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _at__gt_C_plus_S(); // @>C+S
  INST_dash_QT(); // INST-QT
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  UNK_0xe510(); // UNK_0xe510
  C_ex_(); // C!
}


// ================================================
// 0xf301: WORD 'UNK_0xf303' codep=0x224c parp=0xf303
// ================================================

void UNK_0xf303() // UNK_0xf303
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf1de(); // UNK_0xf1de
  UNK_0xf1cc(); // UNK_0xf1cc
  Push(Pop()*2); // 2*
  Push(Pop() | Pop()); // OR
  UNK_0xf1f0(); // UNK_0xf1f0
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(Pop() | Pop()); // OR
  UNK_0xe466(); // UNK_0xe466
  Push(0x0040);
  Push(Pop() * Pop()); // *
  Push(Pop() | Pop()); // OR
  UNK_0xf212(); // UNK_0xf212
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  Push(Pop() | Pop()); // OR
  UNK_0xf22e(); // UNK_0xf22e
  Push(Pop()<<4); // 16*
  Push(Pop() | Pop()); // OR
  UNK_0xf24c(); // UNK_0xf24c
  Push(0x0020);
  Push(Pop() * Pop()); // *
  Push(Pop() | Pop()); // OR
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  Push(0x0080);
  Push(Pop() * Pop()); // *
  Push(Pop() | Pop()); // OR
  UNK_0xf266(); // UNK_0xf266
  UNK_0xf272(); // UNK_0xf272
  ICLOSE(); // ICLOSE
  UNK_0xe515(); // UNK_0xe515
  C_ex_(); // C!
}


// ================================================
// 0xf351: WORD 'UNK_0xf353' codep=0x224c parp=0xf353
// ================================================

void UNK_0xf353() // UNK_0xf353
{
  UNK_0xe515(); // UNK_0xe515
  C_at_(); // C@
  if (Pop() == 0) goto label1;
  Push(pp_UNK_0xe444); // UNK_0xe444
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  MIN(); // MIN
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(1); // 1
  Push(pp_UNK_0xe444); // UNK_0xe444
  _plus__ex_(); // +!
  SAVE_dash_OV(); // SAVE-OV
  goto label2;

  label1:
  Push(pp_UNK_0xf1c0); // UNK_0xf1c0
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  Push(Pop() * Pop()); // *

  label2:
  UNK_0xe501(); // UNK_0xe501
  C_ex_(); // C!
}


// ================================================
// 0xf383: WORD 'UNK_0xf385' codep=0x224c parp=0xf385
// ================================================

void UNK_0xf385() // UNK_0xf385
{
  Push(pp_UNK_0xf1c0); // UNK_0xf1c0
  _099(); // 099
  UNK_0xf2c5(); // UNK_0xf2c5
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  UNK_0xe506(); // UNK_0xe506
  _ex_(); // !
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  Push(1); // 1
  INST_dash_QT(); // INST-QT
  _plus__ex_(); // +!
  INST_dash_QT(); // INST-QT
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  UNK_0xe50b(); // UNK_0xe50b
  _ex_(); // !
  UNK_0xf303(); // UNK_0xf303
  UNK_0xf353(); // UNK_0xf353
  UNK_0xf28a(); // UNK_0xf28a
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(pp__ask_EVAL); // ?EVAL
  ON(); // ON
}


// ================================================
// 0xf3b9: WORD 'UNK_0xf3bb' codep=0x224c parp=0xf3bb
// ================================================

void UNK_0xf3bb() // UNK_0xf3bb
{
  UNK_0xf385(); // UNK_0xf385
  CTCR(); // CTCR
  PRINT("RECOMMENDATION LOGGED.", 22); // (.")
}


// ================================================
// 0xf3da: WORD 'UNK_0xf3dc' codep=0x224c parp=0xf3dc
// ================================================

void UNK_0xf3dc() // UNK_0xf3dc
{
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _at__gt_C_plus_S(); // @>C+S
  INST_dash_QT(); // INST-QT
  Push(Read16(Pop())); // @
  BIT(); // BIT
  DUP(); // DUP
  ICLOSE(); // ICLOSE
  Push(pp__ro_SYSTEM); // (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xe529(); // UNK_0xe529
  C_at_(); // C@
  Push(Pop() & Pop()); // AND
  DUP(); // DUP
  ROT(); // ROT
  UNK_0xe529(); // UNK_0xe529
  C_at_(); // C@
  Push(Pop() | Pop()); // OR
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  goto label2;

  label1:
  UNK_0xe529(); // UNK_0xe529
  C_ex_(); // C!

  label2:
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label3;
  PRINT("THIS PLANET HAS ALREADY BEEN LOGGED.", 36); // (.")

  label3:
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf441: WORD '(/LOG-PLAN)' codep=0x224c parp=0xf451
// ================================================
// entry

void _ro__slash_LOG_dash_PLAN_rc_() // (/LOG-PLAN)
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(pp__dash_AIN); // -AIN
  _099(); // 099
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x000c);
  Push(0); // 0
  IFIND(); // IFIND
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label2;
  PRINT("THE PLANET THAT STARPORT ORBITS IS", 34); // (.")
  GCR(); // GCR
  PRINT("DEFINITELY NOT COLONIZABLE!", 27); // (.")
  goto label3;

  label2:
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  if (Pop() == 0) goto label4;
  PRINT("RECOMMEND THIS PLANET FOR", 25); // (.")
  CTCR(); // CTCR
  PRINT("COLONIZATION? [N Y]", 19); // (.")
  Y_slash_N(); // Y/N
  CTCR(); // CTCR
  if (Pop() == 0) goto label5;
  UNK_0xf3dc(); // UNK_0xf3dc
  if (Pop() == 0) goto label5;
  Push(0xc2cd);
  MODULE(); // MODULE
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(pp_PORTDAT); // PORTDAT
  _ex_(); // !
  UNK_0xf3bb(); // UNK_0xf3bb

  label5:
  goto label3;

  label4:
  UNK_0xf10d(); // UNK_0xf10d

  label3:
  return;

  label1:
  UNK_0xf10d(); // UNK_0xf10d
}

// 0xf530: db 0x43 0x41 0x50 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x43 0x41 0x50 0x54 0x41 0x49 0x4e 0x20 0x2d 0x2d 0x2d 0x00 'CAP-VOC_________________________ for CAPTAIN --- '
  