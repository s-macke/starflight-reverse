// ====== OVERLAY 'SCIENCE' ======

#include"interface.h"

// store offset = 0xdf90
// overlay size   = 0x15d0

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:            !PAL  codep:0x224c parp:0xb33d size:0x0012 C-string:'_ex_PAL'
// 1870:         CONFIGU  codep:0x224c parp:0xb35b size:0x006c C-string:'CONFIGU'
// 1871:         STARTER  codep:0x224c parp:0xb3d3 size:0x000a C-string:'STARTER'
// 1872:             DOS  codep:0x224c parp:0xb3e5 size:0x0002 C-string:'DOS'
// 1873:           +EDIT  codep:0x1ab5 parp:0xb3f1 size:0x0014 C-string:'_plus_EDIT'
// 1874:         EDIT-OV  codep:0x83dd parp:0xb411 size:0x028c C-string:'EDIT_minus_OV'
// 1875:      UNK_0xb69f  codep:0x224c parp:0xb69f size:0x2909 C-string:'UNK_0xb69f'
// 1876:      UNK_0xdfaa  codep:0x7420 parp:0xdfaa size:0x000b C-string:'UNK_0xdfaa'
// 1877:      UNK_0xdfb7  codep:0x224c parp:0xdfb7 size:0x004a C-string:'UNK_0xdfb7'
// 1878:      UNK_0xe003  codep:0x7420 parp:0xe003 size:0x0003 C-string:'UNK_0xe003'
// 1879:      UNK_0xe008  codep:0x7420 parp:0xe008 size:0x0003 C-string:'UNK_0xe008'
// 1880:      UNK_0xe00d  codep:0x7420 parp:0xe00d size:0x0003 C-string:'UNK_0xe00d'
// 1881:      UNK_0xe012  codep:0x7420 parp:0xe012 size:0x0003 C-string:'UNK_0xe012'
// 1882:      UNK_0xe017  codep:0x7420 parp:0xe017 size:0x0003 C-string:'UNK_0xe017'
// 1883:      UNK_0xe01c  codep:0x7420 parp:0xe01c size:0x0003 C-string:'UNK_0xe01c'
// 1884:      UNK_0xe021  codep:0x7420 parp:0xe021 size:0x0003 C-string:'UNK_0xe021'
// 1885:      UNK_0xe026  codep:0x7420 parp:0xe026 size:0x0008 C-string:'UNK_0xe026'
// 1886:      UNK_0xe030  codep:0x7420 parp:0xe030 size:0x0003 C-string:'UNK_0xe030'
// 1887:      UNK_0xe035  codep:0x7420 parp:0xe035 size:0x00e2 C-string:'UNK_0xe035'
// 1888:         BIO/ENR  codep:0x4b3b parp:0xe123 size:0x002c C-string:'BIO_slash_ENR'
// 1889:      UNK_0xe151  codep:0x224c parp:0xe151 size:0x00a2 C-string:'UNK_0xe151'
// 1890:      UNK_0xe1f5  codep:0x224c parp:0xe1f5 size:0x0010 C-string:'UNK_0xe1f5'
// 1891:      UNK_0xe207  codep:0x224c parp:0xe207 size:0x000a C-string:'UNK_0xe207'
// 1892:      UNK_0xe213  codep:0x224c parp:0xe213 size:0x0052 C-string:'UNK_0xe213'
// 1893:      UNK_0xe267  codep:0x224c parp:0xe267 size:0x000e C-string:'UNK_0xe267'
// 1894:      UNK_0xe277  codep:0x224c parp:0xe277 size:0x0050 C-string:'UNK_0xe277'
// 1895:      UNK_0xe2c9  codep:0x224c parp:0xe2c9 size:0x0006 C-string:'UNK_0xe2c9'
// 1896:          ?HEAVY  codep:0x224c parp:0xe2da size:0x000e C-string:'_ask_HEAVY'
// 1897:      UNK_0xe2ea  codep:0x224c parp:0xe2ea size:0x009c C-string:'UNK_0xe2ea'
// 1898:      UNK_0xe388  codep:0x224c parp:0xe388 size:0x0024 C-string:'UNK_0xe388'
// 1899:      UNK_0xe3ae  codep:0x224c parp:0xe3ae size:0x0018 C-string:'UNK_0xe3ae'
// 1900:      UNK_0xe3c8  codep:0x224c parp:0xe3c8 size:0x003e C-string:'UNK_0xe3c8'
// 1901:      UNK_0xe408  codep:0x224c parp:0xe408 size:0x003e C-string:'UNK_0xe408'
// 1902:      UNK_0xe448  codep:0x224c parp:0xe448 size:0x0022 C-string:'UNK_0xe448'
// 1903:      UNK_0xe46c  codep:0x224c parp:0xe46c size:0x002a C-string:'UNK_0xe46c'
// 1904:      UNK_0xe498  codep:0x224c parp:0xe498 size:0x0043 C-string:'UNK_0xe498'
// 1905:      UNK_0xe4dd  codep:0x224c parp:0xe4dd size:0x0038 C-string:'UNK_0xe4dd'
// 1906:      UNK_0xe517  codep:0x224c parp:0xe517 size:0x005a C-string:'UNK_0xe517'
// 1907:      UNK_0xe573  codep:0x224c parp:0xe573 size:0x0006 C-string:'UNK_0xe573'
// 1908:      UNK_0xe57b  codep:0x1d29 parp:0xe57b size:0x0010 C-string:'UNK_0xe57b'
// 1909:      UNK_0xe58d  codep:0x224c parp:0xe58d size:0x0010 C-string:'UNK_0xe58d'
// 1910:      UNK_0xe59f  codep:0x224c parp:0xe59f size:0x00a6 C-string:'UNK_0xe59f'
// 1911:      UNK_0xe647  codep:0x224c parp:0xe647 size:0x0007 C-string:'UNK_0xe647'
// 1912:      UNK_0xe650  codep:0x6917 parp:0xe650 size:0x00ec C-string:'UNK_0xe650'
// 1913:      UNK_0xe73e  codep:0x1d29 parp:0xe73e size:0x0002 C-string:'UNK_0xe73e'
// 1914:      UNK_0xe742  codep:0x1d29 parp:0xe742 size:0x0002 C-string:'UNK_0xe742'
// 1915:      UNK_0xe746  codep:0x1d29 parp:0xe746 size:0x0002 C-string:'UNK_0xe746'
// 1916:      UNK_0xe74a  codep:0x1d29 parp:0xe74a size:0x0002 C-string:'UNK_0xe74a'
// 1917:      UNK_0xe74e  codep:0x224c parp:0xe74e size:0x0014 C-string:'UNK_0xe74e'
// 1918:      UNK_0xe764  codep:0x224c parp:0xe764 size:0x000c C-string:'UNK_0xe764'
// 1919:      UNK_0xe772  codep:0x224c parp:0xe772 size:0x000c C-string:'UNK_0xe772'
// 1920:      UNK_0xe780  codep:0x224c parp:0xe780 size:0x001c C-string:'UNK_0xe780'
// 1921:      UNK_0xe79e  codep:0x224c parp:0xe79e size:0x001a C-string:'UNK_0xe79e'
// 1922:      UNK_0xe7ba  codep:0x224c parp:0xe7ba size:0x0022 C-string:'UNK_0xe7ba'
// 1923:      UNK_0xe7de  codep:0x224c parp:0xe7de size:0x0024 C-string:'UNK_0xe7de'
// 1924:      UNK_0xe804  codep:0x224c parp:0xe804 size:0x00ae C-string:'UNK_0xe804'
// 1925:      UNK_0xe8b4  codep:0x224c parp:0xe8b4 size:0x0050 C-string:'UNK_0xe8b4'
// 1926:      UNK_0xe906  codep:0x224c parp:0xe906 size:0x0008 C-string:'UNK_0xe906'
// 1927:      UNK_0xe910  codep:0x1d29 parp:0xe910 size:0x0002 C-string:'UNK_0xe910'
// 1928:      UNK_0xe914  codep:0x1d29 parp:0xe914 size:0x0002 C-string:'UNK_0xe914'
// 1929:      UNK_0xe918  codep:0x1d29 parp:0xe918 size:0x0008 C-string:'UNK_0xe918'
// 1930:      UNK_0xe922  codep:0x224c parp:0xe922 size:0x0038 C-string:'UNK_0xe922'
// 1931:      UNK_0xe95c  codep:0x224c parp:0xe95c size:0x0042 C-string:'UNK_0xe95c'
// 1932:      UNK_0xe9a0  codep:0x224c parp:0xe9a0 size:0x011a C-string:'UNK_0xe9a0'
// 1933:      UNK_0xeabc  codep:0x224c parp:0xeabc size:0x00bc C-string:'UNK_0xeabc'
// 1934:      UNK_0xeb7a  codep:0x224c parp:0xeb7a size:0x0030 C-string:'UNK_0xeb7a'
// 1935:      UNK_0xebac  codep:0x224c parp:0xebac size:0x0026 C-string:'UNK_0xebac'
// 1936:      UNK_0xebd4  codep:0x224c parp:0xebd4 size:0x001c C-string:'UNK_0xebd4'
// 1937:      UNK_0xebf2  codep:0x224c parp:0xebf2 size:0x04b0 C-string:'UNK_0xebf2'
// 1938:      UNK_0xf0a4  codep:0x224c parp:0xf0a4 size:0x0088 C-string:'UNK_0xf0a4'
// 1939:       .READINGS  codep:0x4b3b parp:0xf13a size:0x0010 C-string:'_dot_READINGS'
// 1940:      (/SENSORS)  codep:0x224c parp:0xf159 size:0x00b3 C-string:'_ro__slash_SENSORS_rc_'
// 1941:      UNK_0xf20e  codep:0x224c parp:0xf20e size:0x003e C-string:'UNK_0xf20e'
// 1942:      UNK_0xf24e  codep:0x224c parp:0xf24e size:0x0010 C-string:'UNK_0xf24e'
// 1943:      UNK_0xf260  codep:0x224c parp:0xf260 size:0x0006 C-string:'UNK_0xf260'
// 1944:      UNK_0xf268  codep:0x224c parp:0xf268 size:0x0036 C-string:'UNK_0xf268'
// 1945:      UNK_0xf2a0  codep:0x224c parp:0xf2a0 size:0x0012 C-string:'UNK_0xf2a0'
// 1946:      UNK_0xf2b4  codep:0x224c parp:0xf2b4 size:0x0020 C-string:'UNK_0xf2b4'
// 1947:      UNK_0xf2d6  codep:0x224c parp:0xf2d6 size:0x005a C-string:'UNK_0xf2d6'
// 1948:          CTXT>I  codep:0x4b3b parp:0xf33b size:0x000c C-string:'CTXT_gt_I'
// 1949:      UNK_0xf349  codep:0x224c parp:0xf349 size:0x0004 C-string:'UNK_0xf349'
// 1950:      UNK_0xf34f  codep:0x224c parp:0xf34f size:0x0006 C-string:'UNK_0xf34f'
// 1951:      UNK_0xf357  codep:0x224c parp:0xf357 size:0x0008 C-string:'UNK_0xf357'
// 1952:      UNK_0xf361  codep:0x224c parp:0xf361 size:0x0008 C-string:'UNK_0xf361'
// 1953:      UNK_0xf36b  codep:0x224c parp:0xf36b size:0x0010 C-string:'UNK_0xf36b'
// 1954:      UNK_0xf37d  codep:0x224c parp:0xf37d size:0x001e C-string:'UNK_0xf37d'
// 1955:      UNK_0xf39d  codep:0x224c parp:0xf39d size:0x0022 C-string:'UNK_0xf39d'
// 1956:      UNK_0xf3c1  codep:0x224c parp:0xf3c1 size:0x0032 C-string:'UNK_0xf3c1'
// 1957:       'DO-CLOUD  codep:0x1d29 parp:0xf401 size:0x0002 C-string:'_i_DO_minus_CLOUD'
// 1958:      UNK_0xf405  codep:0x224c parp:0xf405 size:0x0008 C-string:'UNK_0xf405'
// 1959:      UNK_0xf40f  codep:0x224c parp:0xf40f size:0x0046 C-string:'UNK_0xf40f'
// 1960:       .STARDATE  codep:0x224c parp:0xf463 size:0x004c C-string:'_dot_STARDATE'
// 1961:      UNK_0xf4b1  codep:0x224c parp:0xf4b1 size:0x0016 C-string:'UNK_0xf4b1'
// 1962:      UNK_0xf4c9  codep:0x224c parp:0xf4c9 size:0x001c C-string:'UNK_0xf4c9'
// 1963:      UNK_0xf4e7  codep:0x224c parp:0xf4e7 size:0x0042 C-string:'UNK_0xf4e7'
// 1964:       (/STATUS)  codep:0x224c parp:0xf537 size:0x000e C-string:'_ro__slash_STATUS_rc_'
// 1965:      .STAT-TEXT  codep:0x224c parp:0xf554 size:0x000c C-string:'_dot_STAT_minus_TEXT'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xe57b[16] = {0xe7, 0x31, 0x30, 0x9e, 0x0c, 0xc3, 0xc3, 0x30, 0xff, 0x1e, 0xf3, 0xff, 0x3c, 0xcf, 0x00, 0xc0}; // UNK_0xe57b
unsigned char UNK_0xe73e[2] = {0xff, 0xff}; // UNK_0xe73e
unsigned char UNK_0xe742[2] = {0xff, 0xf6}; // UNK_0xe742
unsigned char UNK_0xe746[2] = {0xa0, 0x5f}; // UNK_0xe746
unsigned char UNK_0xe74a[2] = {0x50, 0xa9}; // UNK_0xe74a
unsigned char UNK_0xe910[2] = {0x3a, 0x20}; // UNK_0xe910
unsigned char UNK_0xe914[2] = {0x3a, 0x20}; // UNK_0xe914
unsigned char UNK_0xe918[8] = {0x81, 0xc3, 0x81, 0x81, 0x81, 0x81, 0xc3, 0x81}; // UNK_0xe918
unsigned char _i_DO_minus_CLOUD[2] = {0xda, 0xc5}; // 'DO-CLOUD



// 0xdfa2: db 0x5d 0x01 0x29 0x1d 0x3a 0x20 '] ) : '

// ================================================
// 0xdfa8: WORD 'UNK_0xdfaa' codep=0x7420 parp=0xdfaa
// ================================================
// 0xdfaa: db 0x34 0x0b 0x01 0x29 0x1d 0x3a 0x20 0x29 0x1d 0x3a 0x20 '4  ) : ) : '

// ================================================
// 0xdfb5: WORD 'UNK_0xdfb7' codep=0x224c parp=0xdfb7
// ================================================

void UNK_0xdfb7() // UNK_0xdfb7
{
  Push(pp_STAR_minus_HR); // STAR-HR
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(pp__pe_SLUG); // %SLUG
  Push(Read16(Pop())); // @
  Push(0x0064);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1193;

  Push(pp__pe_SLUG); // %SLUG
  Push(Read16(Pop())); // @
  Push(0x000a);
  Push(0); // 0
  Push(0x000a);
  RRND(); // RRND
  Push(cc__4); // 4
  _st_(); // <
  if (Pop() == 0) goto label1194;

  Push(Pop() + Pop()); // +
  goto label1195;

  label1194:
  _minus_(); // -

  label1195:
  Push(0x000a);
  MAX(); // MAX
  Push(0x0063);
  MIN(); // MIN
  Push(pp__pe_SLUG); // %SLUG
  _ex_(); // !

  label1193:
}


// ================================================
// 0xe001: WORD 'UNK_0xe003' codep=0x7420 parp=0xe003
// ================================================
// 0xe003: db 0x14 0x25 0x02 ' % '

// ================================================
// 0xe006: WORD 'UNK_0xe008' codep=0x7420 parp=0xe008
// ================================================
// 0xe008: db 0x14 0x11 0x02 '   '

// ================================================
// 0xe00b: WORD 'UNK_0xe00d' codep=0x7420 parp=0xe00d
// ================================================
// 0xe00d: db 0x14 0x19 0x02 '   '

// ================================================
// 0xe010: WORD 'UNK_0xe012' codep=0x7420 parp=0xe012
// ================================================
// 0xe012: adc    al,30
// 0xe014: add    ah,[bx+si]

// ================================================
// 0xe015: WORD 'UNK_0xe017' codep=0x7420 parp=0xe017
// ================================================
// 0xe017: db 0x14 0x1f 0x02 '   '

// ================================================
// 0xe01a: WORD 'UNK_0xe01c' codep=0x7420 parp=0xe01c
// ================================================
// 0xe01c: db 0x14 0x32 0x02 ' 2 '

// ================================================
// 0xe01f: WORD 'UNK_0xe021' codep=0x7420 parp=0xe021
// ================================================
// 0xe021: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xe024: WORD 'UNK_0xe026' codep=0x7420 parp=0xe026
// ================================================
// 0xe026: db 0x14 0x45 0x04 0x20 0x74 0x14 0x15 0x02 ' E  t   '

// ================================================
// 0xe02e: WORD 'UNK_0xe030' codep=0x7420 parp=0xe030
// ================================================
// 0xe030: db 0x14 0x56 0x01 ' V '

// ================================================
// 0xe033: WORD 'UNK_0xe035' codep=0x7420 parp=0xe035
// ================================================
// 0xe035: db 0x14 0x57 0x01 0x20 0x74 0x10 0x1a 0x01 0x20 0x74 0x11 0x14 0x03 0x94 0x73 0x19 0x01 0x03 0x24 0x5d 0x6b 0x94 0x73 0x19 0x07 0x02 0x24 0x5d 0x6b 0x94 0x73 0x19 0x18 0x01 0x24 0x5d 0x6b 0x94 0x73 0x19 0x15 0x01 0x24 0x5d 0x6b 0x20 0x74 0x19 0x12 0x02 0x94 0x73 0x19 0x0c 0x02 0x24 0x5d 0x6b 0x20 0x74 0x19 0x14 0x02 0x94 0x73 0x19 0x0e 0x02 0x24 0x5d 0x6b 0x20 0x74 0x19 0x11 0x07 0x94 0x73 0x20 0x02 0x02 0x17 0x49 0x6c 0x94 0x73 0x20 0x04 0x01 0x17 0x49 0x6c 0x94 0x73 0x20 0x09 0x01 0x17 0x49 0x6c 0x94 0x73 0x20 0x0c 0x01 0x17 0x49 0x6c 0x94 0x73 0x1e 0x00 0x03 0x07 0x3e 0x6c 0x4c 0x22 0x5d 0x17 0x5a 0x6a 0x80 0x4e 0xe2 0x4e 0xfc 0x4e 0x20 0x0f 0xd4 0x4e 0xae 0x0b 0xe7 0x0f 0xc0 0x4e 0xae 0x0b 0xb8 0x15 0xca 0x4e 0xae 0x0b 0xe7 0x0f 0xb6 0x4e 0xae 0x0b 0xb8 0x15 0x50 0x0e 0x6e 0x0e 0xbd 0x4d 0xff 0x4d 0x5d 0x17 0x3f 0x00 0x2d 0x12 0xfa 0x15 0x08 0x00 0x2e 0x0f 0x60 0x16 0x04 0x00 0x20 0x0f 0x72 0x0f 0xd0 0x15 0xe2 0xff 0xd0 0x15 0xd2 0xff 0x90 0x16 0x4c 0x22 0xcf 0x51 0x41 0x0e 0x90 0x16 0x4c 0x22 0xc3 0x51 0x41 0x0e 0x90 0x16 0x4c 0x22 0xcf 0x51 0xc3 0x51 0x90 0x16 0x4c 0x22 0xcf 0x51 0x32 0x62 0xae 0x0b 0x90 0x16 ' W  t    t    s   $]k s   $]k s   $]k s   $]k t    s   $]k t    s   $]k t    s    Il s    Il s    Il s    Il s    >lL"] Zj N N N   N     N     N     N    P n  M M] ? -     . `     r           L" QA   L" QA   L" Q Q  L" Q2b    '

// ================================================
// 0xe117: WORD 'BIO/ENR' codep=0x4b3b parp=0xe123
// ================================================
// 0xe123: db 0x06 0x00 0xff 0xe0 0x14 0x00 0x07 0xe1 0x16 0x00 0xf7 0xe0 0x1b 0x00 0x07 0xe1 0x20 0x00 0xf7 0xe0 0x1d 0x00 0x07 0xe1 0x00 0x00 0xf7 0xe0 0x4c 0x22 0x34 0x75 0x21 0xe1 0xb1 0xdf 0x16 0x6d 0xad 0xdf 0x16 0x6d 0x90 0x16 '                            L"4u!    m   m  '

// ================================================
// 0xe14f: WORD 'UNK_0xe151' codep=0x224c parp=0xe151
// ================================================

void UNK_0xe151() // UNK_0xe151
{
  _gt_R(); // >R
  I(); // I
  Push(0); // 0
  Push(0x0014);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1201;

  PRINT("CRITICAL", 8); // (.")
  goto label1206;

  label1201:
  I(); // I
  Push(0x0014);
  Push(0x0032);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1202;

  PRINT("HEAVY", 5); // (.")
  goto label1206;

  label1202:
  I(); // I
  Push(0x0032);
  Push(0x0050);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1203;

  PRINT("MODERATE", 8); // (.")
  goto label1206;

  label1203:
  I(); // I
  Push(0x0050);
  Push(0x005f);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1204;

  PRINT("SLIGHT", 6); // (.")
  goto label1206;

  label1204:
  I(); // I
  Push(0x005f);
  Push(0x0064);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1205;

  PRINT("MINIMAL", 7); // (.")
  goto label1206;

  label1205:
  PRINT("NONE", 4); // (.")

  label1206:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xe1f3: WORD 'UNK_0xe1f5' codep=0x224c parp=0xe1f5
// ================================================

void UNK_0xe1f5() // UNK_0xe1f5
{
  Push(0x0028);
  _st_(); // <
  if (Pop() == 0) goto label1200;

  PINK(); // PINK
  _ex_COLOR(); // !COLOR

  label1200:
}


// ================================================
// 0xe205: WORD 'UNK_0xe207' codep=0x224c parp=0xe207
// ================================================

void UNK_0xe207() // UNK_0xe207
{
  BLACK(); // BLACK
  POLY_minus_ER(); // POLY-ER
  LT_minus_BLUE(); // LT-BLUE
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe211: WORD 'UNK_0xe213' codep=0x224c parp=0xe213
// ================================================

void UNK_0xe213() // UNK_0xe213
{
  NULL(); // NULL
  Push(0x000e);
  Push(0); // 0

  do // (DO)
  {
  UNK_0xe008(); // UNK_0xe008
  I(); // I
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  C_at_(); // C@
  _0_gt_(); // 0>
  I(); // I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  MAX(); // MAX
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  UNK_0xe008(); // UNK_0xe008
  I(); // I
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(2); // 2

  } while(...); // (+LOOP) 0xffd4
  Push(1); // 1
  MAX(); // MAX
  _slash_(); // /
  UNK_0xe008(); // UNK_0xe008
  C_at_(); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  Push(0x0013);
  _gt_(); // >
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xe265: WORD 'UNK_0xe267' codep=0x224c parp=0xe267
// ================================================

void UNK_0xe267() // UNK_0xe267
{
  Push(cc__8); // 8
  UNK_0xe207(); // UNK_0xe207
  UNK_0xe213(); // UNK_0xe213
  DUP(); // DUP
  UNK_0xe1f5(); // UNK_0xe1f5
  UNK_0xe151(); // UNK_0xe151
}


// ================================================
// 0xe275: WORD 'UNK_0xe277' codep=0x224c parp=0xe277
// ================================================

void UNK_0xe277() // UNK_0xe277
{
  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_minus_S(); // @INST-S
  DUP(); // DUP
  Push(cc__7); // 7
  Push(0x000a);
  WITHIN(); // WITHIN
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1196;

  Push(cc__7); // 7
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(0x001e);
  MOD(); // MOD
  Push(0x000a);
  _slash_(); // /
  Push(Pop() + Pop()); // +
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1197;

  Push(0xc014);
  MODULE(); // MODULE
  Push(0xbfda);
  MODULE(); // MODULE

  label1197:
  goto label1198;

  label1196:
  Pop(); // DROP

  label1198:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe2c7: WORD 'UNK_0xe2c9' codep=0x224c parp=0xe2c9
// ================================================

void UNK_0xe2c9() // UNK_0xe2c9
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe2cf: WORD '?HEAVY' codep=0x224c parp=0xe2da
// ================================================

void _ask_HEAVY() // ?HEAVY
{
  UNK_0xe2c9(); // UNK_0xe2c9
  UNK_0xe213(); // UNK_0xe213
  Push(0x0032);
  _st_(); // <
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe2e8: WORD 'UNK_0xe2ea' codep=0x224c parp=0xe2ea
// ================================================

void UNK_0xe2ea() // UNK_0xe2ea
{
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1192;

  Push(0x0068);
  Push(0x00b7);
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
  Push(0x000d);
  UNK_0xe207(); // UNK_0xe207
  Push(1); // 1
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1199;

  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(0x012c);
  _slash_MOD(); // /MOD
  Push(0x121f);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x001e);
  _slash_MOD(); // /MOD
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  Push(0); // 0
  _st__n_(); // <#
  _n_(); // #
  _n_(); // #
  _n__gt_(); // #>
  TYPE(); // TYPE
  PRINT(".", 1); // (.")
  Push(pp_STAR_minus_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(0); // 0
  _st__n_(); // <#
  _n_(); // #
  _n_(); // #
  _n__gt_(); // #>
  TYPE(); // TYPE
  PRINT("-", 1); // (.")
  Push(0); // 0
  _st__n_(); // <#
  _n_(); // #
  _n_(); // #
  _n__gt_(); // #>
  TYPE(); // TYPE
  PRINT("-", 1); // (.")
  Push(0); // 0
  _dot_R(); // .R
  goto label1192;

  label1199:
  PRINT("??-??-???", 9); // (.")

  label1192:
  UNK_0xdfb7(); // UNK_0xdfb7
  UNK_0xe277(); // UNK_0xe277
}


// ================================================
// 0xe386: WORD 'UNK_0xe388' codep=0x224c parp=0xe388
// ================================================

void UNK_0xe388() // UNK_0xe388
{
  Push(cc__4); // 4
  UNK_0xe207(); // UNK_0xe207
  UNK_0xe026(); // UNK_0xe026
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1210;

  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x5504(); // UNK_0x5504
  Push(pp__i_SIMULA); // 'SIMULA
  UNK_0x0918(); // UNK_0x0918
  UNK_0x0702(); // UNK_0x0702

  label1210:
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4406(); // UNK_0x4406
  UNK_0x5751(); // UNK_0x5751
  UNK_0xe650(); // UNK_0xe650
  UNK_0x9008(); // UNK_0x9008
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xe3ac: WORD 'UNK_0xe3ae' codep=0x224c parp=0xe3ae
// ================================================
  UNK_0x0124(); // UNK_0x0124

void UNK_0xe3ae() // UNK_0xe3ae
{
  Push(pp__minus_END); // -END
  Push(Read16(Pop())); // @
  Push(0x0096);
  M_star_(); // M*
  D_gt_(); // D>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1207;

  PINK(); // PINK
  _ex_COLOR(); // !COLOR

  label1207:
}


// ================================================
// 0xe3c6: WORD 'UNK_0xe3c8' codep=0x224c parp=0xe3c8
// ================================================

void UNK_0xe3c8() // UNK_0xe3c8
{
  Push(cc__5); // 5
  UNK_0xe207(); // UNK_0xe207
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  UNK_0xe3ae(); // UNK_0xe3ae
  Push(0x0064);
  U_slash_MOD(); // U/MOD
  Push(0); // 0
  _dot_R(); // .R
  PRINT(".", 1); // (.")
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0); // 0
  _dot_R(); // .R
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(0x2710); Pust(0x0000);
  D_st_(); // D<
  if (Pop() == 0) goto label1208;

  _dot_(); // .
  goto label1209;

  label1208:
  Pop(); // DROP

  label1209:
}


// ================================================
// 0xe406: WORD 'UNK_0xe408' codep=0x224c parp=0xe408
// ================================================

void UNK_0xe408() // UNK_0xe408
{
  Push(cc__6); // 6
  UNK_0xe207(); // UNK_0xe207
  UNK_0xe2c9(); // UNK_0xe2c9
  UNK_0xe017(); // UNK_0xe017
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  Push(Pop()+1); // 1+
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  DUP(); // DUP
  UNK_0xe021(); // UNK_0xe021
  Push(Read16(Pop())); // @
  Push(pp__10_star_CARG); // 10*CARG
  _2_at_(); // 2@
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  MAX(); // MAX
  _minus_(); // -
  Push(0x0064);
  ROT(); // ROT
  _star__slash_(); // */
  _dot_(); // .
  PRINT("%", 1); // (.")
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe446: WORD 'UNK_0xe448' codep=0x224c parp=0xe448
// ================================================

void UNK_0xe448() // UNK_0xe448
{
  SWAP(); // SWAP
  Push(0x008f);
  Push(Pop() + Pop()); // +
  Push(0x008f);

  do // (DO)
  {
  DUP(); // DUP
  I(); // I
  OVER(); // OVER
  Push(Pop()+2); // 2+
  I(); // I
  LLINE(); // LLINE

  } while(...); // (LOOP) 0xfff2
  Pop(); // DROP
}


// ================================================
// 0xe46a: WORD 'UNK_0xe46c' codep=0x224c parp=0xe46c
// ================================================

void UNK_0xe46c() // UNK_0xe46c
{
  SWAP(); // SWAP
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  Push(0x00a8);
  SWAP(); // SWAP
  _minus_(); // -
  Push(0x00a7);

  do // (DO)
  {
  DUP(); // DUP
  I(); // I
  OVER(); // OVER
  Push(Pop()+2); // 2+
  I(); // I
  LLINE(); // LLINE
  Push(cc__minus_1); // -1

  } while(...); // (+LOOP) 0xfff0
  Pop(); // DROP
}


// ================================================
// 0xe496: WORD 'UNK_0xe498' codep=0x224c parp=0xe498
// ================================================

void UNK_0xe498() // UNK_0xe498
{
  Push(cc__7); // 7
  UNK_0xe207(); // UNK_0xe207
  UNK_0xe026(); // UNK_0xe026
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1211;

  PRINT("UN", 2); // (.")

  label1211:
  PRINT("ARMED", 5); // (.")
}

// 0xe4b9: db 0x4c 0x22 0x5d 0x17 0x15 0x00 0x46 0x75 0x34 0x75 0x5d 0x17 0x17 0x00 0x5d 0x17 0x19 0x00 0x25 0x40 0x3e 0x13 0x5d 0x17 0x1e 0x00 0x46 0x75 0x3e 0x13 0x07 0x13 0x90 0x16 'L"]   Fu4u]   ]   %@> ]   Fu>     '

// ================================================
// 0xe4db: WORD 'UNK_0xe4dd' codep=0x224c parp=0xe4dd
// ================================================

void UNK_0xe4dd() // UNK_0xe4dd
{
  YELLOW(); // YELLOW
  _ex_COLOR(); // !COLOR
  UNK_0xe01c(); // UNK_0xe01c
  Push(Read16(Pop())); // @
  Push(0x003c);
  _slash_(); // /
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1212;

  Push(0x0065);
  UNK_0xe448(); // UNK_0xe448

  label1212:
  Push(0x0019);
  UNK_0xe01c(); // UNK_0xe01c
  Push(Read16(Pop())); // @
  Push(0x003c);
  _slash_(); // /
  _minus_(); // -
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1213;

  Push(0x0065);
  UNK_0xe46c(); // UNK_0xe46c

  label1213:
}


// ================================================
// 0xe515: WORD 'UNK_0xe517' codep=0x224c parp=0xe517
// ================================================

void UNK_0xe517() // UNK_0xe517
{
  UNK_0xe00d(); // UNK_0xe00d
  Push(Read16(Pop())); // @
  Push(0x00ff);
  Push(Pop() & Pop()); // AND
  Push(1); // 1
  Push(0x0065);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1214;

  RED(); // RED
  _ex_COLOR(); // !COLOR
  UNK_0xe012(); // UNK_0xe012
  Push(Read16(Pop())); // @
  Push(0x09c4);
  MIN(); // MIN
  Push(0x0064);
  _slash_(); // /
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1215;

  Push(0x0056);
  UNK_0xe448(); // UNK_0xe448

  label1215:
  Push(0x0019);
  UNK_0xe012(); // UNK_0xe012
  Push(Read16(Pop())); // @
  Push(0x09c4);
  MIN(); // MIN
  Push(0x0064);
  _slash_(); // /
  _minus_(); // -
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1214;

  Push(0x0056);
  UNK_0xe46c(); // UNK_0xe46c

  label1214:
}


// ================================================
// 0xe571: WORD 'UNK_0xe573' codep=0x224c parp=0xe573
// ================================================

void UNK_0xe573() // UNK_0xe573
{
  UNK_0xe4dd(); // UNK_0xe4dd
  UNK_0xe517(); // UNK_0xe517
}


// ================================================
// 0xe579: WORD 'UNK_0xe57b' codep=0x1d29 parp=0xe57b
// ================================================
// 0xe57b: db 0xe7 0x31 0x30 0x9e 0x0c 0xc3 0xc3 0x30 0xff 0x1e 0xf3 0xff 0x3c 0xcf 0x00 0xc0 ' 10    0    <   '

// ================================================
// 0xe58b: WORD 'UNK_0xe58d' codep=0x224c parp=0xe58d
// ================================================

void UNK_0xe58d() // UNK_0xe58d
{
  Push(0); // 0

  do // (DO)
  {
  _2OVER(); // 2OVER
  LLINE(); // LLINE

  } while(...); // (LOOP) 0xfffa
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe59d: WORD 'UNK_0xe59f' codep=0x224c parp=0xe59f
// ================================================

void UNK_0xe59f() // UNK_0xe59f
{
  GREY1(); // GREY1
  _ex_COLOR(); // !COLOR
  Push(0x0055);
  Push(0x008e);
  Push(0x0055);
  Push(0x00a8);
  Push(0x0059);
  Push(0x00a8);
  Push(0x0059);
  Push(0x008e);
  Push(0x0055);
  Push(0x008e);
  Push(cc__4); // 4
  UNK_0xe58d(); // UNK_0xe58d
  Push(0x0064);
  Push(0x008e);
  Push(0x0064);
  Push(0x00a8);
  Push(0x0068);
  Push(0x00a8);
  Push(0x0068);
  Push(0x008e);
  Push(0x0064);
  Push(0x008e);
  Push(cc__4); // 4
  UNK_0xe58d(); // UNK_0xe58d
  _gt_1FONT(); // >1FONT
  Push(0x0056);
  Push(0x008b);
  POS_dot_(); // POS.
  PRINT("S", 1); // (.")
  Push(0x0065);
  Push(0x008b);
  POS_dot_(); // POS.
  PRINT("A", 1); // (.")
  BLUE(); // BLUE
  _ex_COLOR(); // !COLOR
  Push(pp_UNK_0xe57b); // UNK_0xe57b
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  Push(cc__6); // 6
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(0x0014);
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex_(); // !
  Push(0x005c);
  Push(0x00a3);
  POS_dot_(); // POS.
  BLT(); // BLT
}


// ================================================
// 0xe645: WORD 'UNK_0xe647' codep=0x224c parp=0xe647
// ================================================

void UNK_0xe647() // UNK_0xe647
{
  UNK_0xe2c9(); // UNK_0xe2c9
  CTINIT(); // CTINIT
  _gt_2FONT(); // >2FONT
  Push(0x0069);

// ================================================
// 0xe64e: WORD 'UNK_0xe650' codep=0x6917 parp=0xe650
// ================================================
  Push(0x00c2);
  POS_dot_(); // POS.
  PRINT("STATUS", 6); // (.")
  _gt_1FONT(); // >1FONT
  WHITE(); // WHITE
  WHITE(); // WHITE
  LT_minus_GREE(); // LT-GREE
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(0x0055);
  Push(0x00b7);
  POS_dot_(); // POS.
  PRINT("DATE:", 5); // (.")
  _at_CRS(); // @CRS
  Push(1); // 1
  UNK_0xe2ea(); // UNK_0xe2ea
  _ex_CRS(); // !CRS
  Push(0x0055);
  Push(0x00af);
  POS_dot_(); // POS.
  PRINT("DAMAGE:", 7); // (.")
  _at_CRS(); // @CRS
  UNK_0xe267(); // UNK_0xe267
  _ex_CRS(); // !CRS
  Push(0x006b);
  Push(0x00a6);
  POS_dot_(); // POS.
  PRINT("CARGO:", 6); // (.")
  _at_CRS(); // @CRS
  UNK_0xe408(); // UNK_0xe408
  _ex_CRS(); // !CRS
  Push(0x006b);
  Push(0x009d);
  POS_dot_(); // POS.
  PRINT("ENERGY:", 7); // (.")
  _at_CRS(); // @CRS
  UNK_0xe3c8(); // UNK_0xe3c8
  _ex_CRS(); // !CRS
  Push(0x006b);
  Push(0x0094);
  POS_dot_(); // POS.
  PRINT("SHIELDS:", 8); // (.")
  _at_CRS(); // @CRS
  UNK_0xe388(); // UNK_0xe388
  _ex_CRS(); // !CRS
  Push(0x006b);
  Push(0x008b);
  POS_dot_(); // POS.
  PRINT("WEAP:", 5); // (.")
  _at_CRS(); // @CRS
  UNK_0xe498(); // UNK_0xe498
  _ex_CRS(); // !CRS
  _at_CRS(); // @CRS
  UNK_0xe573(); // UNK_0xe573
  _ex_CRS(); // !CRS
  ICLOSE(); // ICLOSE
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(pp__minus_END); // -END
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  M_star_(); // M*
  D_st_(); // D<
  if (Pop() == 0) goto label1216;

  Push(0x0dac); Pust(0x0000);
  goto label1217;

  label1216:
  Push(0x1d4c); Pust(0x0000);

  label1217:
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_VSTIME); // VSTIME
  D_ex_(); // D!
}


// ================================================
// 0xe73c: WORD 'UNK_0xe73e' codep=0x1d29 parp=0xe73e
// ================================================
// 0xe73e: db 0xff 0xff '  '

// ================================================
// 0xe740: WORD 'UNK_0xe742' codep=0x1d29 parp=0xe742
// ================================================
// 0xe742: db 0xff 0xf6 '  '

// ================================================
// 0xe744: WORD 'UNK_0xe746' codep=0x1d29 parp=0xe746
// ================================================
// 0xe746: db 0xa0 0x5f ' _'

// ================================================
// 0xe748: WORD 'UNK_0xe74a' codep=0x1d29 parp=0xe74a
// ================================================
// 0xe74a: db 0x50 0xa9 'P '

// ================================================
// 0xe74c: WORD 'UNK_0xe74e' codep=0x224c parp=0xe74e
// ================================================

void UNK_0xe74e() // UNK_0xe74e
{
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex_(); // !
  Push(cc__3); // 3
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(cc__4); // 4
  Push(pp_LBLT); // LBLT
  _ex_(); // !
}


// ================================================
// 0xe762: WORD 'UNK_0xe764' codep=0x224c parp=0xe764
// ================================================

void UNK_0xe764() // UNK_0xe764
{
  UNK_0xe74e(); // UNK_0xe74e
  Push(pp_UNK_0xe73e); // UNK_0xe73e
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  BLT(); // BLT
}


// ================================================
// 0xe770: WORD 'UNK_0xe772' codep=0x224c parp=0xe772
// ================================================

void UNK_0xe772() // UNK_0xe772
{
  UNK_0xe74e(); // UNK_0xe74e
  Push(pp_UNK_0xe742); // UNK_0xe742
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  BLT(); // BLT
}


// ================================================
// 0xe77e: WORD 'UNK_0xe780' codep=0x224c parp=0xe780
// ================================================

void UNK_0xe780() // UNK_0xe780
{
  UNK_0xe017(); // UNK_0xe017
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  Push(Pop()+1); // 1+
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  UNK_0xe021(); // UNK_0xe021
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(0x01f4);
  _slash_(); // /
}


// ================================================
// 0xe79c: WORD 'UNK_0xe79e' codep=0x224c parp=0xe79e
// ================================================

void UNK_0xe79e() // UNK_0xe79e
{
  UNK_0xe780(); // UNK_0xe780
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1218;

  Push(0); // 0

  do // (DO)
  {
  UNK_0xe764(); // UNK_0xe764
  Push(cc__4); // 4
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!

  } while(...); // (LOOP) 0xfff6

  label1218:
}


// ================================================
// 0xe7b8: WORD 'UNK_0xe7ba' codep=0x224c parp=0xe7ba
// ================================================

void UNK_0xe7ba() // UNK_0xe7ba
{
  UNK_0xe017(); // UNK_0xe017
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  UNK_0xe780(); // UNK_0xe780
  _minus_(); // -
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1219;

  Push(0); // 0

  do // (DO)
  {
  UNK_0xe772(); // UNK_0xe772
  Push(cc__4); // 4
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!

  } while(...); // (LOOP) 0xfff6

  label1219:
}


// ================================================
// 0xe7dc: WORD 'UNK_0xe7de' codep=0x224c parp=0xe7de
// ================================================

void UNK_0xe7de() // UNK_0xe7de
{
  UNK_0xe030(); // UNK_0xe030
  C_at_(); // C@
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1220;

  UNK_0xe74e(); // UNK_0xe74e
  Push(pp_UNK_0xe746); // UNK_0xe746
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  Push(0); // 0

  do // (DO)
  {
  BLT(); // BLT
  Push(cc__4); // 4
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!

  } while(...); // (LOOP) 0xfff6

  label1220:
}


// ================================================
// 0xe802: WORD 'UNK_0xe804' codep=0x224c parp=0xe804
// ================================================

void UNK_0xe804() // UNK_0xe804
{
  UNK_0xe035(); // UNK_0xe035
  C_at_(); // C@
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1221;

  UNK_0xe74e(); // UNK_0xe74e
  Push(pp_UNK_0xe74a); // UNK_0xe74a
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  Push(0); // 0

  do // (DO)
  {
  BLT(); // BLT
  Push(cc__4); // 4
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!

  } while(...); // (LOOP) 0xfff6

  label1221:
}

// 0xe828: db 0x4c 0x22 0x2d 0x6c 0x1f 0x7a 0x3f 0x7a 0x5d 0x17 0x0b 0x00 0xf2 0x0e 0x4c 0x7e 0x32 0x0e 0x3f 0x7a 0xd2 0x9f 0x5d 0x17 0x45 0xbe 0xd9 0x84 0x7f 0x3b 0x0a 0x7a 0x90 0x16 0x4c 0x22 0xf0 0x86 0x54 0x5a 0x65 0x6d 0x9d 0x86 0x77 0x85 0x97 0x3b 0x72 0x0f 0x77 0x85 0x87 0x3b 0x72 0x0f 0xae 0x0b 0x20 0x0f 0xb8 0x15 0x3b 0x5a 0xae 0x0b 0x50 0x0e 0x92 0x0f 0x6d 0x59 0x16 0x6d 0x41 0x0e 0x92 0x0c 0xc8 0x0d 0xfa 0x15 0x2e 0x00 0x20 0x0f 0xb8 0x15 0x41 0x0e 0xe7 0x0f 0x92 0x0c 0x46 0x5a 0xae 0x0b 0x72 0x0f 0x56 0x59 0x16 0x6d 0x41 0x0e 0x15 0x10 0x92 0x0c 0x46 0x5a 0xae 0x0b 0x72 0x0f 0x61 0x59 0x16 0x6d 0xed 0x89 0x15 0x10 0xd0 0x15 0xda 0xff 0xe7 0x0f 0xd0 0x15 0xba 0xff 0x32 0x0e 0x90 0x16 'L"-l z?z]     L~2 ?z  ] E   ; z  L"  TZem  w  ;r w  ;r       ;Z  P   mY mA       .     A     FZ  r VY mA     FZ  r aY m              2   '

// ================================================
// 0xe8b2: WORD 'UNK_0xe8b4' codep=0x224c parp=0xe8b4
// ================================================

void UNK_0xe8b4() // UNK_0xe8b4
{
  BLACK(); // BLACK
  ERASE_minus_A(); // ERASE-A
  UNK_0xe59f(); // UNK_0xe59f
  UNK_0xe647(); // UNK_0xe647
}

// 0xe8be: db 0x4c 0x22 0xaf 0x64 0x2f 0x7a 0x34 0x75 0x5d 0x17 0x12 0x00 0x46 0x12 0xfa 0x15 0x08 0x00 0x20 0x0f 0x60 0x16 0x2c 0x00 0x89 0xe0 0x92 0x0c 0x5d 0x17 0x59 0x00 0xf2 0x0e 0x43 0x73 0x9f 0x3b 0x72 0x0f 0x20 0x0f 0x9f 0x3b 0x20 0x0f 0xb8 0x15 0x7f 0x0e 0x50 0x0e 0x72 0x0f 0x92 0x0c 0x72 0x0f 0xd0 0x15 0xf4 0xff 0xf2 0x0e 0x32 0x0e 0xdf 0x79 0x90 0x16 'L" d/z4u]   F       ` ,     ] Y   Cs ;r    ;     P r   r       2  y  '

// ================================================
// 0xe904: WORD 'UNK_0xe906' codep=0x224c parp=0xe906
// ================================================

void UNK_0xe906() // UNK_0xe906
{
  NULL(); // NULL
  Push(pp_SENSE_minus_A); // SENSE-A
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xe90e: WORD 'UNK_0xe910' codep=0x1d29 parp=0xe910
// ================================================
// 0xe910: db 0x3a 0x20 ': '

// ================================================
// 0xe912: WORD 'UNK_0xe914' codep=0x1d29 parp=0xe914
// ================================================
// 0xe914: db 0x3a 0x20 ': '

// ================================================
// 0xe916: WORD 'UNK_0xe918' codep=0x1d29 parp=0xe918
// ================================================
// 0xe918: db 0x81 0xc3 0x81 0x81 0x81 0x81 0xc3 0x81 '        '

// ================================================
// 0xe920: WORD 'UNK_0xe922' codep=0x224c parp=0xe922
// ================================================

void UNK_0xe922() // UNK_0xe922
{
  _ex_COLOR(); // !COLOR
  DUP(); // DUP
  Push(pp_UNK_0xe910); // UNK_0xe910
  _ex_(); // !
  Push(0x004c);
  Push(Pop() + Pop()); // +
  Push(pp_YBLT); // YBLT
  _ex_(); // !
  DUP(); // DUP
  Push(pp_UNK_0xe914); // UNK_0xe914
  _ex_(); // !
  Push(Pop()+1); // 1+
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
  Push(cc__8); // 8
  DUP(); // DUP
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(pp_UNK_0xe918); // UNK_0xe918
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  BLT(); // BLT
}


// ================================================
// 0xe95a: WORD 'UNK_0xe95c' codep=0x224c parp=0xe95c
// ================================================

void UNK_0xe95c() // UNK_0xe95c
{
  Push(pp_UNK_0xe914); // UNK_0xe914
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe910); // UNK_0xe910
  Push(Read16(Pop())); // @
  RED(); // RED
  UNK_0xe922(); // UNK_0xe922
  Push(pp_UNK_0xe914); // UNK_0xe914
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(cc__3); // 3
  MAX(); // MAX
  Push(0x0043);
  MIN(); // MIN
  DUP(); // DUP
  Push(pp_UNK_0xe914); // UNK_0xe914
  _ex_(); // !
  SWAP(); // SWAP
  Push(pp_UNK_0xe910); // UNK_0xe910
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(cc__3); // 3
  MAX(); // MAX
  Push(0x0072);
  MIN(); // MIN
  DUP(); // DUP
  Push(pp_UNK_0xe910); // UNK_0xe910
  _ex_(); // !
  RED(); // RED
  UNK_0xe922(); // UNK_0xe922
  CLICK(); // CLICK
}


// ================================================
// 0xe99e: WORD 'UNK_0xe9a0' codep=0x224c parp=0xe9a0
// ================================================

void UNK_0xe9a0() // UNK_0xe9a0
{
  XYSCAN(); // XYSCAN
  Push(pp_KEYTIME); // KEYTIME
  _2_at_(); // 2@
  Push(pp_LKEYTIM); // LKEYTIM
  _2_at_(); // 2@
  D_minus_(); // D-
  Push(0x00c8); Pust(0x0000);
  D_st_(); // D<
  _gt_R(); // >R
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1228;

  Push(cc__4); // 4
  I(); // I
  Push(Pop() * Pop()); // *
  Push(1); // 1
  MAX(); // MAX
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(cc__4); // 4
  I(); // I
  Push(Pop() * Pop()); // *
  Push(1); // 1
  MAX(); // MAX
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  OVER(); // OVER
  Push(pp_UNK_0xe910); // UNK_0xe910
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(cc__3); // 3
  Push(0x0073);
  WITHIN(); // WITHIN
  OVER(); // OVER
  Push(pp_UNK_0xe914); // UNK_0xe914
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(cc__3); // 3
  Push(0x0044);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1229;

  UNK_0xe95c(); // UNK_0xe95c
  Push(0x0032);
  MS(); // MS
  goto label1231;

  label1229:
  Pop(); Pop();// 2DROP

  label1231:
  goto label1230;

  label1228:
  Pop(); Pop();// 2DROP

  label1230:
  R_gt_(); // R>
  Pop(); // DROP
}

// 0xea1a: db 0x4c 0x22 0xc1 0x4f 0x9d 0x86 0x5d 0x17 0x54 0x00 0x5d 0x17 0xb4 0x00 0x7b 0x9a 0xdc 0x1b 0x04 0x4d 0x41 0x53 0x53 0x5d 0x17 0x54 0x00 0x5d 0x17 0xa5 0x00 0x7b 0x9a 0xdc 0x1b 0x04 0x54 0x4f 0x4e 0x53 0xb4 0x0d 0x20 0x0f 0xf0 0x0d 0x5d 0x17 0x0a 0x00 0xeb 0x11 0xf2 0x0e 0x32 0x0e 0x20 0x0f 0xd2 0x9f 0x5d 0x17 0x55 0x00 0x5d 0x17 0xac 0x00 0x7b 0x9a 0xf0 0x0d 0xa6 0x49 0x14 0x40 0xfa 0x15 0x28 0x00 0x90 0x0e 0xe7 0x0f 0xb4 0x0d 0x5d 0x17 0x0a 0x00 0xeb 0x11 0xf2 0x0e 0x32 0x0e 0x20 0x0f 0x06 0x0e 0x5d 0x17 0x0a 0x00 0xeb 0x11 0xf2 0x0e 0x32 0x0e 0x20 0x0f 0x06 0x0e 0x60 0x16 0xd2 0xff 0xde 0x0d 0x90 0x0e 0xc8 0x0d 0xfa 0x15 0x1e 0x00 0xb3 0x0e 0xb3 0x0e 0x20 0x0f 0xa3 0x28 0xdc 0x1b 0x01 0x2a 0x5d 0x17 0x0a 0x00 0x20 0x0f 0xe1 0x27 0x7f 0x3b 0x3b 0x5a 0x23 0x6d 0x20 0x0f 0x93 0x28 0x90 0x16 'L" O  ] T ]   {    MASS] T ]   {    TONS      ]       2     ] U ]   {    I @  (       ]       2     ]       2     `                    (   *]      ';;Z#m   (  '

// ================================================
// 0xeaba: WORD 'UNK_0xeabc' codep=0x224c parp=0xeabc
// ================================================

void UNK_0xeabc() // UNK_0xeabc
{
  UNK_0xe906(); // UNK_0xe906
  Push(pp_UNK_0xe914); // UNK_0xe914
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe910); // UNK_0xe910
  Push(Read16(Pop())); // @
  Push(0); // 0
  TONE(); // TONE
  BEEPON(); // BEEPON
  Push(0x0032);
  Push(0); // 0

  do // (DO)
  {
  Push(0xfffb);
  Push(0x0019);
  RRND(); // RRND
  TONE(); // TONE
  _2DUP(); // 2DUP
  GREEN(); // GREEN
  UNK_0xe922(); // UNK_0xe922
  Push(cc__5); // 5
  MS(); // MS
  _2DUP(); // 2DUP
  RED(); // RED
  UNK_0xe922(); // UNK_0xe922
  Push(cc__5); // 5
  MS(); // MS

  } while(...); // (LOOP) 0xffde
  BEEPOFF(); // BEEPOFF
  Pop(); Pop();// 2DROP
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x0012);
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xe914); // UNK_0xe914
  Push(Read16(Pop())); // @
  Push(0x001f);
  _minus_(); // -
  Push(pp_XWLD_c_XP); // XWLD:XP
  _2_at_(); // 2@
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x001e);
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xe910); // UNK_0xe910
  Push(Read16(Pop())); // @
  Push(0x003f);
  _minus_(); // -
  Push(pp_YWLD_c_YP); // YWLD:YP
  _2_at_(); // 2@
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
  Push(cc__4); // 4
  Push(pp_XWLD_c_XP); // XWLD:XP
  _2_at_(); // 2@
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop()+1); // 1+
  Push(0); // 0
  SQRT(); // SQRT
  _minus_(); // -
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_minus_(); // ?ICONS-
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1233;

  Push(0); // 0

  do // (DO)
  {
  POINT_gt_I(); // POINT>I
  _at_IL(); // @IL
  _at_IH(); // @IH
  _star_SHIP(); // *SHIP
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1234;

  _at_IL(); // @IL
  _at_IH(); // @IH
  Push(pp_SENSE_minus_A); // SENSE-A
  _1_dot_5_ex_(); // 1.5!

  label1234:

  } while(...); // (LOOP) 0xffe6

  label1233:
  Push(pp_SENSE_minus_A); // SENSE-A
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xeb78: WORD 'UNK_0xeb7a' codep=0x224c parp=0xeb7a
// ================================================

void UNK_0xeb7a() // UNK_0xeb7a
{
  Push(0x00b6);
  Push(0x006f);
  Push(0x007e);
  Push(0x009c);
  GREY1(); // GREY1
  GREY1(); // GREY1
  VIOLET(); // VIOLET
  _ask_MRC(); // ?MRC
  POLY_minus_WI(); // POLY-WI
  Push(0x00b4);
  Push(0x0071);
  Push(0x0080);
  Push(0x009a);
  BLACK(); // BLACK
  POLY_minus_WI(); // POLY-WI
}


// ================================================
// 0xebaa: WORD 'UNK_0xebac' codep=0x224c parp=0xebac
// ================================================

void UNK_0xebac() // UNK_0xebac
{
  DK_minus_BLUE(); // DK-BLUE
  _ex_COLOR(); // !COLOR
  Push(0x009c);
  Push(0x00b7);
  Push(0x0053);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x006e);
  Push(0x007e);
  OVER(); // OVER
  Push(0x00b6);
  LLINE(); // LLINE
}


// ================================================
// 0xebd2: WORD 'UNK_0xebd4' codep=0x224c parp=0xebd4
// ================================================

void UNK_0xebd4() // UNK_0xebd4
{
  CTINIT(); // CTINIT
  _gt_2FONT(); // >2FONT
  Push(0x0067);
  Push(0x00c2);
  POS_dot_(); // POS.
  PRINT("SENSORS", 7); // (.")
  _gt_1FONT(); // >1FONT
}


// ================================================
// 0xebf0: WORD 'UNK_0xebf2' codep=0x224c parp=0xebf2
// ================================================

void UNK_0xebf2() // UNK_0xebf2
{
  BLACK(); // BLACK
  ERASE_minus_A(); // ERASE-A
  UNK_0xebac(); // UNK_0xebac
  UNK_0xeb7a(); // UNK_0xeb7a
  UNK_0xebd4(); // UNK_0xebd4
}

// 0xebfe: db 0x29 0x1d 0x04 0x0d 0x0e 0x0b 0x09 0x03 0x06 0x07 0x08 0x4c 0x22 0x92 0x0c 0x7f 0x3b 0xb3 0x0f 0xfe 0xeb 0x72 0x0f 0x20 ')          L"  ;    r  '
// 0xec16: db     0F
// 0xec17: jg     EC54
// 0xec19: les    cx,[bp+di+72]
// 0xec1c: db     0F
// 0xec1d: xchg   ax,dx
// 0xec1e: or     al,9D
// 0xec20: xchg   [bx+si+4C16],dl
// 0xec24: and    dh,[si+500D]
// 0xec28: push   cs
// 0xec29: out    0F,ax
// 0xec2b: xchg   ax,dx
// 0xec2c: or     al,FA
// 0xec2e: adc    ax,006A
// 0xec31: and    [bx],cl
// 0xec33: push   ax
// 0xec34: push   cs
// 0xec35: xchg   [bp+di],di
// 0xec37: jb     EC48
// 0xec39: xchg   ax,dx
// 0xec3a: or     al,E7
// 0xec3c: db     0F
// 0xec3d: les    cx,[bp+di+50]
// 0xec40: push   cs
// 0xec41: xchg   [bp+di],di
// 0xec43: jb     EC54
// 0xec45: xchg   ax,dx
// 0xec46: or     al,41
// 0xec48: push   cs
// 0xec49: mov    bl,0F
// 0xec4b: jg     EC5B
// 0xec4d: inc    cx
// 0xec4e: push   cs
// 0xec4f: mov    bl,0F
// 0xec51: xchg   ax,dx
// 0xec52: db     0F
// 0xec53: and    [bx],cl
// 0xec55: xchg   ax,cx
// 0xec56: dec    sp
// 0xec57: out    0F,ax
// 0xec59: and    [bx],cl
// 0xec5b: repnz  
// 0xec5c: push   cs
// 0xec5d: les    cx,[bp+di+20]
// 0xec60: db     0F
// 0xec61: cmp    ax,C40F
// 0xec64: dec    bx
// 0xec65: cli    
// 0xec66: adc    ax,0004
// 0xec69: mov    byte ptr [bx+di],B4
// 0xec6c: or     ax,0F20
// 0xec6f: cmp    ax,C40F
// 0xec72: dec    bx
// 0xec73: cli    
// 0xec74: adc    ax,0004
// 0xec77: mov    byte ptr [bx+di],AF
// 0xec7a: cmp    bx,[di+17]
// 0xec7d: db     0F
// 0xec7e: add    ah,al
// 0xec80: db     0F
// 0xec81: db     60
// 0xec82: push   cs
// 0xec83: adc    ax,9210
// 0xec86: or     al,72
// 0xec88: db     0F
// 0xec89: nop    
// 0xec8a: push   cs
// 0xec8b: push   ax
// 0xec8c: push   cs
// 0xec8d: jg     ECCA
// 0xec8f: jb     ECA0
// 0xec91: xchg   ax,dx
// 0xec92: or     al,72
// 0xec94: db     0F
// 0xec95: db     60
// 0xec96: push   ss
// 0xec97: sub    [bx+si],al
// 0xec99: push   ax
// 0xec9a: push   cs
// 0xec9b: adc    ax,9210
// 0xec9e: or     al,50
// 0xeca0: push   cs
// 0xeca1: xchg   [bp+di],di
// 0xeca3: jb     ECB4
// 0xeca5: xchg   ax,dx
// 0xeca6: or     al,E7
// 0xeca8: db     0F
// 0xeca9: les    cx,[bp+di+50]
// 0xecac: push   cs
// 0xecad: pop    word ptr [bp+di]
// 0xecaf: jb     ECC0
// 0xecb1: xchg   ax,dx
// 0xecb2: or     al,50
// 0xecb4: push   cs
// 0xecb5: jg     ECF2
// 0xecb7: jb     ECC8
// 0xecb9: xchg   ax,dx
// 0xecba: or     al,E7
// 0xecbc: db     0F
// 0xecbd: les    cx,[bp+di-70]
// 0xecc0: push   cs
// 0xecc1: xor    cl,[1690]
// 0xecc5: sub    [di],bx
// 0xecc7: add    [bx+di],ax
// 0xecc9: push   ss
// 0xecca: sbb    ax,[bx+si]
// 0xeccc: sub    [di],bx
// 0xecce: add    al,[bx+di]
// 0xecd0: push   ss
// 0xecd1: sbb    ax,[bx+si]
// 0xecd3: dec    sp
// 0xecd4: and    dl,[bx+di-6D20]
// 0xecd8: or     al,A9
// 0xecda: loopne ED39
// 0xecdc: pop    ss
// 0xecdd: add    byte ptr [si],C4
// 0xece0: db     0F
// 0xece1: pop    bp
// 0xece2: pop    ss
// 0xece3: db     64
// 0xece4: add    [di-6FEF],ch
// 0xece8: push   ss
// 0xece9: dec    sp
// 0xecea: and    al,[bx+di+0E]
// 0xeced: xchg   ax,dx
// 0xecee: or     al,5D
// 0xecf0: pop    ss
// 0xecf1: inc    word ptr [bx+si]
// 0xecf3: inc    si
// 0xecf4: adc    bh,dl
// 0xecf6: adc    ax,0048
// 0xecf9: inc    cx
// 0xecfa: push   cs
// 0xecfb: xchg   ax,dx
// 0xecfc: or     al,2E
// 0xecfe: db     0F
// 0xecff: pop    di
// 0xed00: adc    bh,dl
// 0xed02: adc    ax,000A
// 0xed05: lodsw
// 0xed06: esc    7,[bx+6D]
// 0xed09: db     60
// 0xed0a: push   ss
// 0xed0b: push   es
// 0xed0c: add    [bx+di+57DF],dh
// 0xed10: db     6D
// 0xed11: inc    cx
// 0xed12: push   cs
// 0xed13: or     sp,bp
// 0xed15: and    bp,sp
// 0xed17: lock   
// 0xed18: or     ax,133E
// 0xed1b: cli    
// 0xed1c: adc    ax,001C
// 0xed1f: mov    ah,0D
// 0xed21: pop    bp
// 0xed22: pop    ss
// 0xed23: jno    ED25
// 0xed25: jb     ED36
// 0xed27: nop    
// 0xed28: push   cs
// 0xed29: pop    bp
// 0xed2a: pop    ss
// 0xed2b: jg     ED2D
// 0xed2d: jb     ED3E
// 0xed2f: loop   ECCD
// 0xed31: push   ss
// 0xed32: mov    [bx+di+26],dl
// 0xed35: db     60
// 0xed36: push   ss
// 0xed37: add    al,00
// 0xed39: esc    6,[di]
// 0xed3b: db     60
// 0xed3c: push   ss
// 0xed3d: add    al,00
// 0xed3f: xor    cl,[1690]
// 0xed43: dec    sp
// 0xed44: and    bl,ah
// 0xed46: sbb    ax,[bx+di]
// 0xed48: and    ax,1690
// 0xed4b: dec    sp
// 0xed4c: and    bl,[bx]
// 0xed4e: push   si
// 0xed4f: push   ss
// 0xed50: db     6D
// 0xed51: pop    bp
// 0xed52: pop    ss
// 0xed53: sbb    al,[bx+si]
// 0xed55: adc    [bp+16],dx
// 0xed58: db     6D
// 0xed59: push   si
// 0xed5a: test   ax,175D
// 0xed5d: adc    [bx+si],al
// 0xed5f: pop    bp
// 0xed60: pop    ss
// 0xed61: cs:    
// 0xed62: add    [di],ah
// 0xed64: stosw
// 0xed65: out    06,al
// 0xed67: mov    al,[9079]
// 0xed6a: push   ss
// 0xed6b: dec    sp
// 0xed6c: and    cl,[si]
// 0xed6e: push   ax
// 0xed6f: popf   
// 0xed70: xchg   dh,ah
// 0xed72: push   es
// 0xed73: esc    4,[bp+di]
// 0xed75: add    bh,[bp+si]
// 0xed77: and    dl,dl
// 0xed79: lahf   
// 0xed7a: nop    
// 0xed7b: push   ss
// 0xed7c: dec    sp
// 0xed7d: and    bl,[di+17]
// 0xed80: sbb    ax,4600
// 0xed83: jnz    ED7F
// 0xed85: adc    ax,0008
// 0xed88: pop    bp
// 0xed89: pop    ss
// 0xed8a: iret   
// 0xed8b: add    [bx+si],ch
// 0xed8d: call   0420
// 0xed90: dec    sp
// 0xed91: and    dl,dl
// 0xed93: lahf   
// 0xed94: pop    bp
// 0xed95: pop    ss
// 0xed96: db     D6
// 0xed97: add    [bx+si],ch
// 0xed99: call   042C
// 0xed9c: dec    sp
// 0xed9d: and    cl,[bp+di-13]
// 0xeda0: popf   
// 0xeda1: lahf   
// 0xeda2: pop    bp
// 0xeda3: pop    ss
// 0xeda4: or     ax,A500
// 0xeda7: sub    [bx+si-6F87],sp
// 0xedab: push   ss
// 0xedac: dec    sp
// 0xedad: and    al,[bp-64]
// 0xedb0: rcr    byte ptr [bx+3F07],cl
// 0xedb4: or     al,[bx+di+54]
// 0xedb7: dec    bp
// 0xedb8: dec    di
// 0xedb9: push   bx
// 0xedba: push   ax
// 0xedbb: dec    ax
// 0xedbc: inc    bp
// 0xedbd: push   dx
// 0xedbe: inc    bp
// 0xedbf: db     6B
// 0xedc0: in     ax,dx
// 0xedc1: mov    cx,AE55
// 0xedc4: or     bx,[bx]
// 0xedc6: push   si
// 0xedc7: push   ss
// 0xedc8: db     6D
// 0xedc9: pop    bp
// 0xedca: pop    ss
// 0xedcb: push   ds
// 0xedcc: add    [bx+di],dl
// 0xedce: push   si
// 0xedcf: push   ss
// 0xedd0: db     6D
// 0xedd1: mov    ax,[2FE0]
// 0xedd4: jp     EDA1
// 0xedd6: mov    bx,0CCD
// 0xedd9: out    06,al
// 0xeddb: popf   
// 0xeddc: lahf   
// 0xeddd: esc    7,[bx+di+07]
// 0xede0: aas    
// 0xede1: or     cx,[bx+si+59]
// 0xede4: inc    sp
// 0xede5: push   dx
// 0xede6: dec    di
// 0xede7: push   bx
// 0xede8: push   ax
// 0xede9: dec    ax
// 0xedea: inc    bp
// 0xedeb: push   dx
// 0xedec: inc    bp
// 0xeded: db     6B
// 0xedee: in     ax,dx
// 0xedef: scasb
// 0xedf0: push   bp
// 0xedf1: scasb
// 0xedf2: or     bx,[bx]
// 0xedf4: push   si
// 0xedf5: push   ss
// 0xedf6: db     6D
// 0xedf7: pop    bp
// 0xedf8: pop    ss
// 0xedf9: push   ds
// 0xedfa: add    [bx+di],dl
// 0xedfc: push   si
// 0xedfd: push   ss
// 0xedfe: db     6D
// 0xedff: mov    ax,[2FE0]
// 0xee02: jp     EDCF
// 0xee03: retf   
// 0xee04: mov    bx,0CCD
// 0xee07: out    06,al
// 0xee09: popf   
// 0xee0a: lahf   
// 0xee0b: esc    7,[bx+di-51]
// 0xee0e: db     64
// 0xee0f: das    
// 0xee10: jp     EE19
// 0xee12: aas    
// 0xee13: or     cx,[si+49]
// 0xee16: push   sp
// 0xee17: dec    ax
// 0xee18: dec    di
// 0xee19: push   bx
// 0xee1a: push   ax
// 0xee1b: dec    ax
// 0xee1c: inc    bp
// 0xee1d: push   dx
// 0xee1e: inc    bp
// 0xee1f: db     6B
// 0xee20: in     ax,dx
// 0xee21: jg     EE5E
// 0xee23: and    [bx],cl
// 0xee25: mov    ax,9915
// 0xee28: loopne EE7A
// 0xee2a: push   cs
// 0xee2b: jb     EE3C
// 0xee2d: xchg   ax,dx
// 0xee2e: or     al,9C
// 0xee30: in     ax,dx
// 0xee31: rcl    byte ptr [di],1
// 0xee33: hlt    
// 0xee34: call   far di
// 0xee36: jns    EDC8
// 0xee38: push   ss
// 0xee39: dec    sp
// 0xee3a: and    dh,bh
// 0xee3c: dec    di
// 0xee3d: ???    word ptr [bx-3F]
// 0xee40: dec    di
// 0xee41: sbb    al,A2
// 0xee43: popf   
// 0xee44: xchg   [di+17],bl
// 0xee47: push   sp
// 0xee48: add    [di+17],bl
// 0xee4b: call   DC9A:7B00
// 0xee50: sbb    ax,[bp+di]
// 0xee52: inc    dx
// 0xee53: dec    cx
// 0xee54: dec    di
// 0xee55: pop    bp
// 0xee56: pop    ss
// 0xee57: push   sp
// 0xee58: add    [di+17],bl
// 0xee5b: mov    [bx+si],es
// 0xee5d: jnp    EDF9
// 0xee5f: esc    4,[bp+di]
// 0xee61: add    cx,[di+49]
// 0xee64: dec    si
// 0xee65: rcr    byte ptr [bx+175D],cl
// 0xee69: push   bp
// 0xee6a: add    [di+17],bl
// 0xee6d: xchg   ax,bx
// 0xee6e: add    [bp+di-66],bh
// 0xee71: mov    si,7FE8
// 0xee74: cmp    sp,cx
// 0xee76: daa    
// 0xee77: inc    bx
// 0xee78: in     ax,dx
// 0xee79: pop    bp
// 0xee7a: pop    ss
// 0xee7b: push   bp
// 0xee7c: add    [di+17],bl
// 0xee7f: test   [bx+si],ax
// 0xee81: jnp    EE1D
// 0xee83: shr    sp,cl
// 0xee85: jg     EEC2
// 0xee87: loope  EEB0
// 0xee89: inc    bx
// 0xee8a: in     ax,dx
// 0xee8b: nop    
// 0xee8c: push   ss
// 0xee8d: dec    sp
// 0xee8e: and    dl,[bp+si-20]
// 0xee91: cmp    [si],cl
// 0xee93: cli    
// 0xee94: aas    
// 0xee95: pop    es
// 0xee96: adc    di,dx
// 0xee98: adc    ax,0070
// 0xee9b: rcr    byte ptr [bx-63BA],cl
// 0xee9f: pop    es
// 0xeea0: aas    
// 0xeea1: adc    cx,[bx+42]
// 0xeea4: dec    dx
// 0xeea5: inc    bp
// 0xeea6: inc    bx
// 0xeea7: push   sp
// 0xeea8: and    [bp+di+4F],al
// 0xeeab: dec    si
// 0xeeac: push   bx
// 0xeead: push   sp
// 0xeeae: dec    cx
// 0xeeaf: push   sp
// 0xeeb0: push   bp
// 0xeeb1: inc    bp
// 0xeeb2: dec    si
// 0xeeb3: push   sp
// 0xeeb4: push   bx
// 0xeeb5: db     6B
// 0xeeb6: in     ax,dx
// 0xeeb7: push   dx
// 0xeeb8: loopne EE4C
// 0xeeba: or     al,B9
// 0xeebc: in     al,F5
// 0xeebe: adc    bh,dl
// 0xeec0: adc    ax,0008
// 0xeec3: popf   
// 0xeec4: lahf   
// 0xeec5: xchg   ax,di
// 0xeec6: cmp    cx,[bp+di-13]
// 0xeec9: jg     EF06
// 0xeecb: and    [bx],cl
// 0xeecd: mov    ax,2015
// 0xeed0: db     0F
// 0xeed1: inc    si
// 0xeed2: jnz    EECE
// 0xeed4: adc    ax,000A
// 0xeed7: jl     EEB9
// 0xeed9: out    0F,ax
// 0xeedb: db     60
// 0xeedc: push   ss
// 0xeedd: add    al,00
// 0xeedf: pop    dx
// 0xeee0: loopne EF32
// 0xeee2: push   cs
// 0xeee3: jb     EEF4
// 0xeee5: xchg   ax,dx
// 0xeee6: or     al,C8
// 0xeee8: or     ax,15FA
// 0xeeeb: push   es
// 0xeeec: add    [di+4B9F],bl
// 0xeef0: in     ax,dx
// 0xeef1: rcl    byte ptr [di],1
// 0xeef3: esc    4,??
// 0xeef5: cbw    
// 0xeef6: sub    bh,[bx+si]
// 0xeef8: or     al,16
// 0xeefa: push   ss
// 0xeefb: mov    al,[000F]
// 0xeefe: add    [di+10],ah
// 0xef01: dec    di
// 0xef02: db     64
// 0xef03: dec    sp
// 0xef04: db     6D
// 0xef05: db     60
// 0xef06: push   ss
// 0xef07: adc    [bx+si],al
// 0xef09: pop    bp
// 0xef0a: pop    ss
// 0xef0b: sbb    ax,4600
// 0xef0e: jnz    EF0A
// 0xef10: adc    ax,0006
// 0xef13: cbw    
// 0xef14: sahf   
// 0xef15: jl     EF04
// 0xef17: nop    
// 0xef18: push   ss
// 0xef19: dec    sp
// 0xef1a: and    al,cl
// 0xef1c: dec    di
// 0xef1d: popf   
// 0xef1e: xchg   [di+17],bl
// 0xef21: push   sp
// 0xef22: add    [di+17],bl
// 0xef25: call   DC9A:7B00
// 0xef2a: sbb    ax,[bp+di]
// 0xef2c: inc    dx
// 0xef2d: dec    cx
// 0xef2e: dec    di
// 0xef2f: pop    bp
// 0xef30: pop    ss
// 0xef31: push   sp
// 0xef32: add    [di+17],bl
// 0xef35: mov    [bx+si],es
// 0xef37: jnp    EED3
// 0xef39: esc    4,[bp+di]
// 0xef3b: push   es
// 0xef3c: inc    bp
// 0xef3d: dec    si
// 0xef3e: inc    bp
// 0xef3f: push   dx
// 0xef40: inc    di
// 0xef41: pop    cx
// 0xef42: rcr    byte ptr [bx+175D],cl
// 0xef46: push   bp
// 0xef47: add    [di+17],bl
// 0xef4a: xchg   ax,bx
// 0xef4b: add    [bp+di-66],bh
// 0xef4e: movsb
// 0xef4f: esc    7,[bp-52F5]
// 0xef53: esc    7,[bp-4CF5]
// 0xef57: db     0F
// 0xef58: jg     EF95
// 0xef5a: loope  EF83
// 0xef5c: inc    bx
// 0xef5d: in     ax,dx
// 0xef5e: pop    bp
// 0xef5f: pop    ss
// 0xef60: push   bp
// 0xef61: add    [di+17],bl
// 0xef64: test   [bx+si],ax
// 0xef66: jnp    EF02
// 0xef68: movsb
// 0xef69: esc    7,[bp-4EF5]
// 0xef6d: esc    7,[bp-4CF5]
// 0xef71: db     0F
// 0xef72: lodsw
// 0xef73: esc    7,[bp-5BF5]
// 0xef77: esc    7,[bp+5D0B]
// 0xef7b: pop    ss
// 0xef7c: db     64
// 0xef7d: add    [bp+12],al
// 0xef80: cmc    
// 0xef81: adc    bh,dl
// 0xef83: adc    ax,0012
// 0xef86: pop    bp
// 0xef87: pop    ss
// 0xef88: dec    bx
// 0xef89: add    [di+17],bl
// 0xef8c: push   si
// 0xef8d: add    ah,al
// 0xef8f: dec    bx
// 0xef90: pop    bp
// 0xef91: pop    ss
// 0xef92: db     64
// 0xef93: add    ah,al
// 0xef95: db     0F
// 0xef96: jg     EFD3
// 0xef98: loope  EFC1
// 0xef9a: inc    bx
// 0xef9b: in     ax,dx
// 0xef9c: nop    
// 0xef9d: push   ss
// 0xef9e: dec    sp
// 0xef9f: and    al,[bx+di-5120]
// 0xefa3: or     dx,[bx-4CC5]
// 0xefa7: db     0F
// 0xefa8: pop    bp
// 0xefa9: pop    ss
// 0xefaa: adc    ax,[bx+si]
// 0xefac: sbb    ch,dl
// 0xefae: nop    
// 0xefaf: push   ss
// 0xefb0: dec    sp
// 0xefb1: and    bl,[di+17]
// 0xefb4: mov    dh,00
// 0xefb6: pop    bp
// 0xefb7: pop    ss
// 0xefb8: db     6F
// 0xefb9: add    [di+17],bl
// 0xefbc: jle    EFBE
// 0xefbe: pop    bp
// 0xefbf: pop    ss
// 0xefc0: pushf  
// 0xefc1: add    bh,dh
// 0xefc3: dec    di
// 0xefc4: ???    word ptr [bx-1F]
// 0xefc7: dec    di
// 0xefc8: sbb    al,A2
// 0xefca: xchg   ax,bx
// 0xefcb: wait   
// 0xefcc: cmpsw
// 0xefcd: dec    di
// 0xefce: popf   
// 0xefcf: xchg   [di+17],bl
// 0xefd2: xchg   [bx+si],ax
// 0xefd4: pop    bp
// 0xefd5: pop    ss
// 0xefd6: call   AEE0:8100
// 0xefdb: or     bx,[di+17]
// 0xefde: or     al,[bx+si]
// 0xefe0: dec    sp
// 0xefe1: db     0F
// 0xefe2: pop    bp
// 0xefe3: pop    ss
// 0xefe4: sbb    [bx+si],ax
// 0xefe6: lodsw
// 0xefe7: adc    [bx-76C5],ax
// 0xefeb: adc    [si+500D],si
// 0xefef: push   cs
// 0xeff0: test   [bx+di+0E90],cl
// 0xeff4: inc    cx
// 0xeff5: push   cs
// 0xeff6: lds    bp,sp
// 0xeff8: xchg   [bp+di],di
// 0xeffa: jb     F00B
// 0xeffc: or     ch,[di-34]
// 0xefff: in     al,dx
// 0xf000: xchg   [bp+di],di
// 0xf002: jb     F013
// 0xf004: or     ch,[di-42]
// 0xf007: call   0767
// 0xf00a: inc    word ptr [bx+si]
// 0xf00c: pop    bp
// 0xf00d: pop    ss
// 0xf00e: db     64
// 0xf00f: add    ah,al
// 0xf011: db     0F
// 0xf012: inc    cx
// 0xf013: push   cs
// 0xf014: lahf   
// 0xf015: adc    bh,dl
// 0xf017: adc    ax,0008
// 0xf01a: cs:    
// 0xf01b: db     0F
// 0xf01c: db     60
// 0xf01d: push   ss
// 0xf01e: push   es
// 0xf01f: add    [di+17],bl
// 0xf022: inc    word ptr [bx+si]
// 0xf024: lds    bp,sp
// 0xf026: or     ch,[di-2D]
// 0xf029: in     al,dx
// 0xf02a: inc    cx
// 0xf02b: push   cs
// 0xf02c: lahf   
// 0xf02d: adc    bh,dl
// 0xf02f: adc    ax,0008
// 0xf032: cmp    ax,600F
// 0xf035: push   ss
// 0xf036: push   es
// 0xf037: add    [di+17],bl
// 0xf03a: inc    word ptr [bx+si]
// 0xf03c: int    3
// 0xf03d: in     al,dx
// 0xf03e: or     ch,[di-77]
// 0xf041: adc    [bx+3B],di
// 0xf044: mov    bl,0F
// 0xf046: db     C8
// 0xf047: or     ax,15FA
// 0xf04a: sbb    [bx+si],al
// 0xf04c: pop    bp
// 0xf04d: pop    ss
// 0xf04e: xchg   ax,si
// 0xf04f: add    [bx+di+2011],cl
// 0xf053: db     0F
// 0xf054: mov    ax,C515
// 0xf057: in     al,dx
// 0xf058: jmp    BD47
// 0xf05b: in     al,dx
// 0xf05c: jmp    C14B
// 0xf05f: adc    ax,FFF6
// 0xf062: sahf   
// 0xf063: out    dx,ax
// 0xf064: cmp    si,bp
// 0xf066: lodsb
// 0xf067: in     ax,dx
// 0xf068: nop    
// 0xf069: push   ss
// 0xf06a: dec    sp
// 0xf06b: and    dh,al
// 0xf06d: jmp    F0C2
// 0xf06f: push   ax
// 0xf070: popf   
// 0xf071: xchg   [di+17],bl
// 0xf074: loop   F076
// 0xf076: inc    si
// 0xf077: pop    dx
// 0xf078: push   ss
// 0xf079: db     6D
// 0xf07a: pop    bp
// 0xf07b: pop    ss
// 0xf07c: mov    ah,00
// 0xf07e: cmp    bx,[bp+si+16]
// 0xf081: db     6D
// 0xf082: pop    bp
// 0xf083: pop    ss
// 0xf084: daa    
// 0xf085: add    [bp+di+770F],dh
// 0xf089: test   [bp+si-0DF3],bx
// 0xf08d: push   cs
// 0xf08e: pop    bp
// 0xf08f: pop    ss
// 0xf090: jnp    F092
// 0xf092: push   es
// 0xf093: jb     F043
// 0xf095: or     si,[bp+si+0F]
// 0xf098: pop    bp
// 0xf099: pop    ss
// 0xf09a: daa    
// 0xf09b: add    [di],ch
// 0xf09d: jno    F0E9
// 0xf09f: call   0732

// ================================================
// 0xf0a2: WORD 'UNK_0xf0a4' codep=0x224c parp=0xf0a4
// ================================================

void UNK_0xf0a4() // UNK_0xf0a4
{
  Push(0x0083);
  Push(pp_YBLT); // YBLT
  _ex_(); // !
  Push(0x0059);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  Push(0x0010);
  BLACK(); // BLACK
  POLY_minus_ER(); // POLY-ER
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  GREY1(); // GREY1
  _ex_COLOR(); // !COLOR
  UNK_0xe79e(); // UNK_0xe79e
  UNK_0xe7ba(); // UNK_0xe7ba
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  UNK_0xe7de(); // UNK_0xe7de
  RED(); // RED
  _ex_COLOR(); // !COLOR
  UNK_0xe804(); // UNK_0xe804
  ICLOSE(); // ICLOSE
}

// 0xf0d8: db 0x4c 0x22 0x4a 0xe0 0xae 0x0b 0x20 0x0f 0x1a 0xea 0x90 0x16 0x4c 0x22 0x3f 0xe1 0x20 0x0f 0x46 0x75 0xfa 0x15 0x0a 0x00 0x5d 0x17 0x15 0x00 0x60 0x16 0x08 0x00 0x42 0xe0 0x92 0x0c 0xf6 0x0f 0x6a 0xf0 0x62 0xe0 0x38 0x0c 0x72 0x0f 0x20 0x0f 0x89 0x11 0x5d 0x17 0x64 0x00 0x67 0xe0 0x38 0x0c 0x72 0x0f 0x2e 0x0f 0x89 0x11 0xc4 0x0f 0x5d 0x17 0x64 0x00 0xad 0x11 0xa4 0xdf 0x16 0x6d 0xd8 0xf0 0x19 0xef 0x8d 0xee 0x90 0x16 'L"J         L"?   Fu    ]   `   B     j b 8 r     ] d g 8 r .     ] d      m        '

// ================================================
// 0xf12c: WORD '.READINGS' codep=0x4b3b parp=0xf13a
// ================================================
// 0xf13a: db 0x03 0x00 0x06 0xe9 0x19 0x00 0xe6 0xf0 0x20 0x00 0xb2 0xef 0x3c 0x00 0x92 0xed '            <   '

// ================================================
// 0xf14a: WORD '(/SENSORS)' codep=0x224c parp=0xf159
// ================================================

void _ro__slash_SENSORS_rc_() // (/SENSORS)
{
  Push(1); // 1
  Push(0xb77c);
  MODULE(); // MODULE
  Push(pp_IGLOBAL); // IGLOBAL
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
  Push(pp__ask_PORT); // ?PORT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1226;

  Push(2); // 2
  Push(pp__n_AUX); // #AUX
  _ex_(); // !
  UNK_0xebf2(); // UNK_0xebf2
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  if (Pop() == 0) goto label1227;

  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(pp_SENSE_minus_A); // SENSE-A
  _1_dot_5_ex_(); // 1.5!
  goto label1237;

  label1227:
  Push(0x0023);
  Push(0x003b);
  RED(); // RED
  UNK_0xe922(); // UNK_0xe922

  label1232:
  UNK_0xe9a0(); // UNK_0xe9a0
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label1232;

  UNK_0xeabc(); // UNK_0xeabc
  Push(pp_UNK_0xe914); // UNK_0xe914
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe910); // UNK_0xe910
  Push(Read16(Pop())); // @
  RED(); // RED
  UNK_0xe922(); // UNK_0xe922

  label1237:
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1235;

  _gt_C_plus_S(); // >C+S
  _at_INST_minus_C(); // @INST-C
  _dot_READINGS(); // .READINGS
  ICLOSE(); // ICLOSE
  goto label1236;

  label1235:
  Pop(); Pop();// 2DROP

  label1236:
  Push(pp_SENSE_minus_A); // SENSE-A
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  if (Pop() == 0) goto label1226;

  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("THERE'S NOTHING THERE.", 22); // (.")
  Push(0x0001); Pust(0x0000);
  Push(pp_SENSE_minus_A); // SENSE-A
  _1_dot_5_ex_(); // 1.5!

  label1226:
}


// ================================================
// 0xf20c: WORD 'UNK_0xf20e' codep=0x224c parp=0xf20e
// ================================================

void UNK_0xf20e() // UNK_0xf20e
{
  Push(cc_FALSE); // FALSE
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  INST_minus_SI(); // INST-SI
  Push(0x0011);
  Push(Pop() + Pop()); // +
  Push(0x0012);
  Push(0); // 0

  do // (DO)
  {
  I(); // I
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  Push(cc__5); // 5
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) goto label1238;

  SWAP(); // SWAP
  Pop(); // DROP
  Push(cc_TRUE); // TRUE
  SWAP(); // SWAP
  LEAVE(); // LEAVE

  label1238:
  ICLOSE(); // ICLOSE
  Push(cc__3); // 3

  } while(...); // (+LOOP) 0xffe0
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf24c: WORD 'UNK_0xf24e' codep=0x224c parp=0xf24e
// ================================================

void UNK_0xf24e() // UNK_0xf24e
{
  ILAST(); // ILAST
  CI(); // CI
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  INST_minus_OF(); // INST-OF
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf25e: WORD 'UNK_0xf260' codep=0x224c parp=0xf260
// ================================================

void UNK_0xf260() // UNK_0xf260
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xf266: WORD 'UNK_0xf268' codep=0x224c parp=0xf268
// ================================================

void UNK_0xf268() // UNK_0xf268
{
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  INST_minus_SI(); // INST-SI
  Push(0x0011);
  Push(Pop() + Pop()); // +
  Push(0x0012);
  Push(0); // 0

  do // (DO)
  {
  I(); // I
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  Push(cc__5); // 5
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) goto label1242;

  Pop(); // DROP
  CI(); // CI
  LEAVE(); // LEAVE

  label1242:
  ICLOSE(); // ICLOSE
  Push(cc__3); // 3

  } while(...); // (+LOOP) 0xffe4
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf29e: WORD 'UNK_0xf2a0' codep=0x224c parp=0xf2a0
// ================================================

void UNK_0xf2a0() // UNK_0xf2a0
{
  Push(cc__8); // 8
  UNK_0xb69f(); // UNK_0xb69f
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xdfaa(); // UNK_0xdfaa
  C_at_(); // C@
  I_gt_C(); // I>C
  _ex_COLOR(); // !COLOR
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2b2: WORD 'UNK_0xf2b4' codep=0x224c parp=0xf2b4
// ================================================

void UNK_0xf2b4() // UNK_0xf2b4
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _eq_(); // =
  if (Pop() == 0) goto label1239;

  UNK_0xf260(); // UNK_0xf260
  _gt_C_plus_S(); // >C+S
  Push(cc__7); // 7
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ICLOSE(); // ICLOSE
  goto label1240;

  label1239:
  Push(cc_TRUE); // TRUE

  label1240:
}


// ================================================
// 0xf2d4: WORD 'UNK_0xf2d6' codep=0x224c parp=0xf2d6
// ================================================

void UNK_0xf2d6() // UNK_0xf2d6
{
  UNK_0xf20e(); // UNK_0xf20e
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  UNK_0xf2b4(); // UNK_0xf2b4
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1241;

  Push(0); // 0
  Push(0x0019);
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1241;

  _star_PLIST(); // *PLIST
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0061);
  IFIND(); // IFIND
  Pop(); // DROP
  C_gt_(); // C>
  ICLOSE(); // ICLOSE
  UNK_0xf268(); // UNK_0xf268
  _gt_C_plus_S(); // >C+S
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xf2a0(); // UNK_0xf2a0
  Push(pp__i__dot_HUFF); // '.HUFF
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  UNK_0xf24e(); // UNK_0xf24e
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE

  label1241:
}

// 0xf328: db 0x4c 0x22 0x8f 0x64 0x83 0x4a 0x90 0x16 'L" d J  '

// ================================================
// 0xf330: WORD 'CTXT>I' codep=0x4b3b parp=0xf33b
// ================================================
// 0xf33b: db 0x02 0x00 0x2a 0xf3 0x03 0x00 0x30 0x53 0x04 0x00 0x60 0xf2 '  *   0S  ` '

// ================================================
// 0xf347: WORD 'UNK_0xf349' codep=0x224c parp=0xf349
// ================================================

void UNK_0xf349() // UNK_0xf349
{
  Push(pp_STAGES); // STAGES
}


// ================================================
// 0xf34d: WORD 'UNK_0xf34f' codep=0x224c parp=0xf34f
// ================================================

void UNK_0xf34f() // UNK_0xf34f
{
  Push(pp_STAGES); // STAGES
  Push(Pop()+2); // 2+
}


// ================================================
// 0xf355: WORD 'UNK_0xf357' codep=0x224c parp=0xf357
// ================================================

void UNK_0xf357() // UNK_0xf357
{
  Push(pp_STAGES); // STAGES
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf35f: WORD 'UNK_0xf361' codep=0x224c parp=0xf361
// ================================================

void UNK_0xf361() // UNK_0xf361
{
  Push(pp_STAGES); // STAGES
  Push(cc__8); // 8
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf369: WORD 'UNK_0xf36b' codep=0x224c parp=0xf36b
// ================================================

void UNK_0xf36b() // UNK_0xf36b
{
  Push(pp_STAR_minus_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(0x0aaa);
  Push(Pop() * Pop()); // *
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf37b: WORD 'UNK_0xf37d' codep=0x224c parp=0xf37d
// ================================================

void UNK_0xf37d() // UNK_0xf37d
{
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  NULL(); // NULL
  D_eq_(); // D=
  if (Pop() == 0) goto label1245;

  UNK_0xf36b(); // UNK_0xf36b
  Push(pp_HAZE); // HAZE
  D_ex_(); // D!
  Push(pp_STAGES); // STAGES
  Push(0x000e);
  Push(0); // 0
  FILL(); // FILL

  label1245:
}


// ================================================
// 0xf39b: WORD 'UNK_0xf39d' codep=0x224c parp=0xf39d
// ================================================

void UNK_0xf39d() // UNK_0xf39d
{
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  D_plus_(); // D+
  UNK_0xf36b(); // UNK_0xf36b
  D_st_(); // D<
  OVER(); // OVER
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  DUP(); // DUP
  if (Pop() == 0) goto label1246;

  OVER(); // OVER
  ON(); // ON

  label1246:
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf3bf: WORD 'UNK_0xf3c1' codep=0x224c parp=0xf3c1
// ================================================

void UNK_0xf3c1() // UNK_0xf3c1
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  CTXT_gt_I(); // CTXT>I
  _gt_C_plus_S(); // >C+S
  INST_minus_X(); // INST-X
  Push(Read16(Pop())); // @
  Push(0x02d8);
  Push(0x04e0);
  WITHIN(); // WITHIN
  INST_minus_Y(); // INST-Y
  Push(Read16(Pop())); // @
  Push(0x02e8);
  Push(0x0640);
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3f3: WORD ''DO-CLOUD' codep=0x1d29 parp=0xf401
// ================================================
// 0xf401: db 0xda 0xc5 '  '

// ================================================
// 0xf403: WORD 'UNK_0xf405' codep=0x224c parp=0xf405
// ================================================

void UNK_0xf405() // UNK_0xf405
{
  Push(pp__i_DO_minus_CLOUD); // 'DO-CLOUD
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}


// ================================================
// 0xf40d: WORD 'UNK_0xf40f' codep=0x224c parp=0xf40f
// ================================================

void UNK_0xf40f() // UNK_0xf40f
{
  UNK_0xf349(); // UNK_0xf349
  _0_dot_(); // 0.
  UNK_0xf39d(); // UNK_0xf39d
  if (Pop() == 0) goto label1247;

  Push(1); // 1
  UNK_0xf405(); // UNK_0xf405

  label1247:
  UNK_0xf34f(); // UNK_0xf34f
  Push(0xbff4); Pust(0x0000);
  UNK_0xf39d(); // UNK_0xf39d
  if (Pop() == 0) goto label1248;

  Push(2); // 2
  UNK_0xf405(); // UNK_0xf405

  label1248:
  UNK_0xf357(); // UNK_0xf357
  Push(0x7fe8); Pust(0x0001);
  UNK_0xf39d(); // UNK_0xf39d
  if (Pop() == 0) goto label1249;

  Push(cc__4); // 4
  UNK_0xf405(); // UNK_0xf405

  label1249:
  UNK_0xf361(); // UNK_0xf361
  Push(0xffe0); Pust(0x0001);
  UNK_0xf39d(); // UNK_0xf39d
  if (Pop() == 0) goto label1250;

  Push(cc__5); // 5
  UNK_0xf405(); // UNK_0xf405

  label1250:
}


// ================================================
// 0xf455: WORD '.STARDATE' codep=0x224c parp=0xf463
// ================================================

void _dot_STARDATE() // .STARDATE
{
  UNK_0xe2ea(); // UNK_0xe2ea
  UNK_0xf2d6(); // UNK_0xf2d6
  UNK_0xf3c1(); // UNK_0xf3c1
  if (Pop() == 0) goto label1243;

  UNK_0xf37d(); // UNK_0xf37d
  UNK_0xf40f(); // UNK_0xf40f
  goto label1251;

  label1243:
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  UNK_0xf349(); // UNK_0xf349
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1244;

  UNK_0xf36b(); // UNK_0xf36b
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  D_minus_(); // D-
  Push(0xffe0); Pust(0x0001);
  D_st_(); // D<
  if (Pop() == 0) goto label1244;

  Push(0); // 0
  UNK_0xf405(); // UNK_0xf405

  label1244:
  NULL(); // NULL
  Push(pp_HAZE); // HAZE
  D_ex_(); // D!

  label1251:
}


// ================================================
// 0xf4af: WORD 'UNK_0xf4b1' codep=0x224c parp=0xf4b1
// ================================================

void UNK_0xf4b1() // UNK_0xf4b1
{
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) goto label1224;

  YELLOW(); // YELLOW
  goto label1225;

  label1224:
  RED(); // RED

  label1225:
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf4c7: WORD 'UNK_0xf4c9' codep=0x224c parp=0xf4c9
// ================================================

void UNK_0xf4c9() // UNK_0xf4c9
{
  RRND(); // RRND
  Push(0x0090);
  ROT(); // ROT
  _minus_(); // -
  DUP(); // DUP
  Push(1); // 1
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1223;

  Push(Pop()+1); // 1+

  label1223:
  UNK_0xf4b1(); // UNK_0xf4b1
  LPLOT(); // LPLOT
}


// ================================================
// 0xf4e5: WORD 'UNK_0xf4e7' codep=0x224c parp=0xf4e7
// ================================================

void UNK_0xf4e7() // UNK_0xf4e7
{
  Push(pp__ask_COMBAT); // ?COMBAT
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1222;

  UNK_0xe2c9(); // UNK_0xe2c9
  UNK_0xe003(); // UNK_0xe003
  Push(Read16(Pop())); // @
  Push(Pop()*2); // 2*
  DUP(); // DUP
  Push(0); // 0

  do // (DO)
  {
  DUP(); // DUP
  Push(0); // 0

  do // (DO)
  {
  I(); // I
  Push(0x005c);
  Push(0x005e);
  UNK_0xf4c9(); // UNK_0xf4c9
  I(); // I
  Push(0x0060);
  Push(0x0062);
  UNK_0xf4c9(); // UNK_0xf4c9

  } while(...); // (LOOP) 0xffe6

  } while(...); // (LOOP) 0xffdc
  Pop(); // DROP
  ICLOSE(); // ICLOSE

  label1222:
}


// ================================================
// 0xf529: WORD '(/STATUS)' codep=0x224c parp=0xf537
// ================================================

void _ro__slash_STATUS_rc_() // (/STATUS)
{
  UNK_0xe8b4(); // UNK_0xe8b4
  UNK_0xf0a4(); // UNK_0xf0a4
  UNK_0xf4e7(); // UNK_0xf4e7
  Push(1); // 1
  Push(pp__n_AUX); // #AUX
  _ex_(); // !
}


// ================================================
// 0xf545: WORD '.STAT-TEXT' codep=0x224c parp=0xf554
// ================================================

void _dot_STAT_minus_TEXT() // .STAT-TEXT
{
  UNK_0xe647(); // UNK_0xe647
  UNK_0xf0a4(); // UNK_0xf0a4
  UNK_0xf4e7(); // UNK_0xf4e7
}

// 0xf55c: db 0x53 0x43 0x49 0x2d 0x00 'SCI- '
  