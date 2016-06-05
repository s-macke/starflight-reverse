// ====== OVERLAY 'MISC-OV' ======

#include"cpu.h"

// store offset = 0xee30
// overlay size   = 0x0730

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x2008  codep:0x12f5 parp:0x2008 size:0x001a C-string:'UNK_0x2008'
// 1870:      UNK_0x2024  codep:0x7275 parp:0x2024 size:0x0020 C-string:'UNK_0x2024'
// 1871:      UNK_0x2046  codep:0x6e6f parp:0x2046 size:0x000a C-string:'UNK_0x2046'
// 1872:      UNK_0x2052  codep:0x6568 parp:0x2052 size:0x11bc C-string:'UNK_0x2052'
// 1873:      UNK_0x3210  codep:0x425b parp:0x3210 size:0x0cf7 C-string:'UNK_0x3210'
// 1874:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0x0617 C-string:'UNK_0x3f09'
// 1875:      UNK_0x4522  codep:0x3b9f parp:0x4522 size:0x002e C-string:'UNK_0x4522'
// 1876:      UNK_0x4552  codep:0x0f2e parp:0x4552 size:0x0302 C-string:'UNK_0x4552'
// 1877:      UNK_0x4856  codep:0x1d29 parp:0x4856 size:0x00f2 C-string:'UNK_0x4856'
// 1878:      UNK_0x494a  codep:0xffec parp:0x494a size:0x000d C-string:'UNK_0x494a'
// 1879:      UNK_0x4959  codep:0x9040 parp:0x4959 size:0x02bd C-string:'UNK_0x4959'
// 1880:      UNK_0x4c18  codep:0x48e0 parp:0x4c18 size:0x0208 C-string:'UNK_0x4c18'
// 1881:      UNK_0x4e22  codep:0x77ff parp:0x4e22 size:0x0227 C-string:'UNK_0x4e22'
// 1882:      UNK_0x504b  codep:0x0e4f parp:0x504b size:0x0054 C-string:'UNK_0x504b'
// 1883:      UNK_0x50a1  codep:0x5816 parp:0x50a1 size:0x0279 C-string:'UNK_0x50a1'
// 1884:      UNK_0x531c  codep:0x5341 parp:0x531c size:0x002d C-string:'UNK_0x531c'
// 1885:      UNK_0x534b  codep:0x74c8 parp:0x534b size:0x0104 C-string:'UNK_0x534b'
// 1886:      UNK_0x5451  codep:0x8354 parp:0x5451 size:0x0100 C-string:'UNK_0x5451'
// 1887:      UNK_0x5553  codep:0x4588 parp:0x5553 size:0x3abc C-string:'UNK_0x5553'
// 1888:      UNK_0x9011  codep:0x8ef9 parp:0x9011 size:0x0068 C-string:'UNK_0x9011'
// 1889:      UNK_0x907b  codep:0x125f parp:0x907b size:0x3f93 C-string:'UNK_0x907b'
// 1890:      UNK_0xd010  codep:0x0000 parp:0xd010 size:0x0efe C-string:'UNK_0xd010'
// 1891:      UNK_0xdf10  codep:0x0000 parp:0xdf10 size:0x07de C-string:'UNK_0xdf10'
// 1892:      UNK_0xe6f0  codep:0x7420 parp:0xe6f0 size:0x0754 C-string:'UNK_0xe6f0'
// 1893:      UNK_0xee46  codep:0x1d29 parp:0xee46 size:0x0002 C-string:'UNK_0xee46'
// 1894:      UNK_0xee4a  codep:0x224c parp:0xee4a size:0x007f C-string:'UNK_0xee4a'
// 1895:            .ERR  codep:0x4b3b parp:0xeed2 size:0x001c C-string:'_dot_ERR'
// 1896:           EINDE  codep:0x4b3b parp:0xeef8 size:0x001c C-string:'EINDE'
// 1897:      UNK_0xef16  codep:0x7420 parp:0xef16 size:0x0008 C-string:'UNK_0xef16'
// 1898:      UNK_0xef20  codep:0x7420 parp:0xef20 size:0x0003 C-string:'UNK_0xef20'
// 1899:      UNK_0xef25  codep:0x7420 parp:0xef25 size:0x0003 C-string:'UNK_0xef25'
// 1900:            SCNT  codep:0x7420 parp:0xef31 size:0x0003 C-string:'SCNT'
// 1901:      UNK_0xef36  codep:0x224c parp:0xef36 size:0x001a C-string:'UNK_0xef36'
// 1902:      UNK_0xef52  codep:0x224c parp:0xef52 size:0x001a C-string:'UNK_0xef52'
// 1903:      UNK_0xef6e  codep:0x224c parp:0xef6e size:0x0036 C-string:'UNK_0xef6e'
// 1904:      UNK_0xefa6  codep:0x224c parp:0xefa6 size:0x0006 C-string:'UNK_0xefa6'
// 1905:      UNK_0xefae  codep:0x224c parp:0xefae size:0x0018 C-string:'UNK_0xefae'
// 1906:      UNK_0xefc8  codep:0x224c parp:0xefc8 size:0x0028 C-string:'UNK_0xefc8'
// 1907:      UNK_0xeff2  codep:0x1d29 parp:0xeff2 size:0x0014 C-string:'UNK_0xeff2'
// 1908:           (TRIM  codep:0x224c parp:0xf010 size:0x0030 C-string:'_ro_TRIM'
// 1909:      UNK_0xf042  codep:0x224c parp:0xf042 size:0x0034 C-string:'UNK_0xf042'
// 1910:      UNK_0xf078  codep:0x224c parp:0xf078 size:0x0020 C-string:'UNK_0xf078'
// 1911:      UNK_0xf09a  codep:0x224c parp:0xf09a size:0x0024 C-string:'UNK_0xf09a'
// 1912:      UNK_0xf0c0  codep:0x224c parp:0xf0c0 size:0x0026 C-string:'UNK_0xf0c0'
// 1913:           (#IN$  codep:0x224c parp:0xf0f0 size:0x0030 C-string:'_ro__n_IN_do_'
// 1914:      UNK_0xf122  codep:0x0021 parp:0xf122 size:0x0088 C-string:'UNK_0xf122'
// 1915:           (?ART  codep:0x224c parp:0xf1b4 size:0x0052 C-string:'_ro__ask_ART'
// 1916:      UNK_0xf208  codep:0x224c parp:0xf208 size:0x0036 C-string:'UNK_0xf208'
// 1917:            RSTE  codep:0x224c parp:0xf247 size:0x001a C-string:'RSTE'
// 1918:           (QUIT  codep:0x224c parp:0xf26b size:0x0021 C-string:'_ro_QUIT'
// 1919:           (.0$$  codep:0x224c parp:0xf296 size:0x0019 C-string:'_ro__dot_0_do__do_'
// 1920:           (0$$$  codep:0x224c parp:0xf2b9 size:0x0036 C-string:'_ro_0_do__do__do_'
// 1921:      UNK_0xf2f1  codep:0x224c parp:0xf2f1 size:0x0068 C-string:'UNK_0xf2f1'
// 1922:      UNK_0xf35b  codep:0x224c parp:0xf35b size:0x003a C-string:'UNK_0xf35b'
// 1923:           (?.EQ  codep:0x224c parp:0xf39f size:0x007b C-string:'_ro__ask__dot_EQ'
// 1924:      UNK_0xf41c  codep:0x224c parp:0xf41c size:0x0020 C-string:'UNK_0xf41c'
// 1925:           =CARG  codep:0x224c parp:0xf446 size:0x00ac C-string:'_eq_CARG'
// 1926:           TV?AR  codep:0x224c parp:0xf4fc size:0x0064 C-string:'TV_ask_AR'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0x4856[242] = {0x4e, 0x95, 0x00, 0x00, 0xfa, 0x47, 0x84, 0x3f, 0x45, 0x52, 0xd2, 0x4c, 0x22, 0x8f, 0x39, 0xae, 0x0b, 0x2e, 0x0f, 0xf5, 0x12, 0x90, 0x16, 0x4c, 0x22, 0x4c, 0x48, 0xae, 0x0b, 0x50, 0x48, 0xae, 0x0b, 0x54, 0x48, 0xdf, 0x0b, 0x54, 0x48, 0x15, 0x10, 0x1e, 0x13, 0xb3, 0x39, 0xdf, 0x0b, 0x5d, 0x17, 0x03, 0x00, 0x98, 0x39, 0x5e, 0x0c, 0x15, 0x0c, 0xe0, 0x39, 0xdf, 0x0b, 0x54, 0x48, 0xa1, 0x39, 0xdf, 0x0b, 0x5d, 0x17, 0x4b, 0x00, 0x1c, 0x42, 0x90, 0x16, 0x04, 0x46, 0x85, 0x5b, 0x4c, 0x44, 0x53, 0xdd, 0x4c, 0x22, 0x6d, 0x48, 0x61, 0x48, 0x41, 0x0e, 0xfa, 0x15, 0x4a, 0x00, 0x15, 0x41, 0x92, 0x0c, 0x89, 0x12, 0xfa, 0x15, 0x40, 0x00, 0xb4, 0x0d, 0x58, 0x45, 0x15, 0x41, 0x92, 0x0c, 0x15, 0x41, 0x92, 0x0c, 0x8c, 0x45, 0xf0, 0x0d, 0x5f, 0x12, 0x07, 0x13, 0x50, 0x0e, 0xf5, 0x12, 0xfa, 0x15, 0x14, 0x00, 0x15, 0x41, 0x5e, 0x0c, 0x6d, 0x48, 0x61, 0x48, 0x90, 0x0e, 0x32, 0x0e, 0xb4, 0x0d, 0x60, 0x16, 0xdc, 0xff, 0xde, 0x0d, 0x90, 0x0e, 0x41, 0x0e, 0xfa, 0x15, 0x08, 0x00, 0x20, 0x0f, 0x15, 0x41, 0x5e, 0x0c, 0x90, 0x16, 0x29, 0x1d, 0x00, 0x52, 0x32, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x56, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x41, 0xd0, 0x46, 0x85, 0x28, 0x4c, 0x44, 0x53, 0xa9, 0x4c, 0x22, 0xa5, 0x2b, 0xae, 0x0b, 0xb4, 0x0d, 0xff, 0x48, 0xa5, 0x2b, 0xdf, 0x0b, 0x7f, 0x0e, 0x33, 0x42, 0x50, 0x48, 0xdf, 0x0b, 0x4c, 0x48, 0xdf, 0x0b, 0xa9, 0x48, 0x25, 0x46, 0xae, 0x0b, 0x07, 0x13, 0xf5, 0x12, 0xfa, 0x15, 0x0a, 0x00, 0x0c, 0x46, 0x37, 0x3a, 0x60, 0x16}; // UNK_0x4856
unsigned char UNK_0xee46[2] = {0x00, 0x00}; // UNK_0xee46
unsigned char UNK_0xeff2[20] = {0x03, 0x03, 0x00, 0x22, 0x03, 0x03, 0x80, 0x80, 0x03, 0x03, 0x00, 0x5d, 0x02, 0x02, 0x00, 0x60, 0x02, 0x02, 0x00, 0x90}; // UNK_0xeff2



// 0xee42: db 0x72 0x00 'r '

// ================================================
// 0xee44: WORD 'UNK_0xee46' codep=0x1d29 parp=0xee46
// ================================================
// 0xee46: db 0x00 0x00 '  '

// ================================================
// 0xee48: WORD 'UNK_0xee4a' codep=0x224c parp=0xee4a
// ================================================

void UNK_0xee4a() // UNK_0xee4a
{
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  Push(cc__4); // 4
  DUP(); // DUP
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(cc__5); // 5
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  BLT(); // BLT
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
}

// 0xee66: db 0x4c 0x22 0x07 0x3f 0x07 0x53 0x45 0x4e 0x53 0x4f 0x52 0x53 0x90 0x16 0x4c 0x22 0xb9 0x9f 0x20 0x0f 0x97 0x3b 0x16 0x9c 0x07 0x3f 0x0e 0x43 0x4f 0x4d 0x4d 0x55 0x4e 0x49 0x43 0x41 0x54 0x49 0x4f 0x4e 0x53 0x90 0x16 0x4c 0x22 0x07 0x3f 0x06 0x4c 0x41 0x53 0x45 0x52 0x53 0x90 0x16 0x4c 0x22 0x07 0x3f 0x08 0x4d 0x49 0x53 0x53 0x49 0x4c 0x45 0x53 0x90 0x16 0x4c 0x22 0x07 0x3f 0x07 0x45 0x4e 0x47 0x49 0x4e 0x45 0x53 0x90 0x16 0x4c 0x22 0x07 0x3f 0x07 0x53 0x48 0x49 0x45 0x4c 0x44 0x53 0x90 0x16 'L" ? SENSORS  L"     ;   ? COMMUNICATIONS  L" ? LASERS  L" ? MISSILES  L" ? ENGINES  L" ? SHIELDS  '

// ================================================
// 0xeec9: WORD '.ERR' codep=0x4b3b parp=0xeed2
// ================================================
// 0xeed2: db 0x06 0x00 0x6e 0x3a 0x01 0x00 0x68 0xee 0x02 0x00 0x76 0xee 0x03 0x00 0x93 0xee 0x04 0x00 0xa0 0xee 0x05 0x00 0xaf 0xee 0x06 0x00 0xbd 0xee '  n:  h   v                 '

// ================================================
// 0xeeee: WORD 'EINDE' codep=0x4b3b parp=0xeef8
// ================================================
// 0xeef8: db 0x06 0x00 0x6e 0x3a 0x01 0x00 0x3f 0x0f 0x02 0x00 0x81 0x3b 0x03 0x00 0x99 0x3b 0x04 0x00 0x91 0x3b 0x05 0x00 0x30 0x0f 0x06 0x00 0x89 0x3b '  n:  ?    ;   ;   ;  0    ;'

// ================================================
// 0xef14: WORD 'UNK_0xef16' codep=0x7420 parp=0xef16
// ================================================
// 0xef16: db 0x14 0x11 0x02 0x20 0x74 0x14 0x1b 0x02 '    t   '

// ================================================
// 0xef1e: WORD 'UNK_0xef20' codep=0x7420 parp=0xef20
// ================================================
// 0xef20: db 0x14 0x1f 0x02 '   '

// ================================================
// 0xef23: WORD 'UNK_0xef25' codep=0x7420 parp=0xef25
// ================================================
// 0xef25: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xef28: WORD 'SCNT' codep=0x7420 parp=0xef31
// ================================================
// 0xef31: db 0x14 0x30 0x02 ' 0 '

// ================================================
// 0xef34: WORD 'UNK_0xef36' codep=0x224c parp=0xef36
// ================================================

void UNK_0xef36() // UNK_0xef36
{
  EINDE(); // EINDE
  Push(Pop()*2); // 2*
  UNK_0xef16(); // UNK_0xef16
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  DUP(); // DUP
  C_at_(); // C@
  Push(0x0080);
  Push(Pop() | Pop()); // OR
  SWAP(); // SWAP
  C_ex_(); // C!
}


// ================================================
// 0xef50: WORD 'UNK_0xef52' codep=0x224c parp=0xef52
// ================================================

void UNK_0xef52() // UNK_0xef52
{
  EINDE(); // EINDE
  Push(Pop()*2); // 2*
  UNK_0xef16(); // UNK_0xef16
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  DUP(); // DUP
  C_at_(); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  SWAP(); // SWAP
  C_ex_(); // C!
}


// ================================================
// 0xef6c: WORD 'UNK_0xef6e' codep=0x224c parp=0xef6e
// ================================================

void UNK_0xef6e() // UNK_0xef6e
{
  _star_PLIST(); // *PLIST
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x00f9);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  CTINIT(); // CTINIT
  Push(pp__i__dot_HUFF); // '.HUFF
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
  Push(pp_UNK_0xee46); // UNK_0xee46
  ON(); // ON
  SAVE_minus_OV(); // SAVE-OV
  Push(cc__7); // 7
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xef36(); // UNK_0xef36
  i++;
  } while(i<imax); // (LOOP) 0xfffa

}


// ================================================
// 0xefa4: WORD 'UNK_0xefa6' codep=0x224c parp=0xefa6
// ================================================

void UNK_0xefa6() // UNK_0xefa6
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xefac: WORD 'UNK_0xefae' codep=0x224c parp=0xefae
// ================================================

void UNK_0xefae() // UNK_0xefae
{
  UNK_0xefa6(); // UNK_0xefa6
  SCNT(); // SCNT
  Push(Read16(Pop())); // @
  Push(0x0dac);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  BEEP(); // BEEP
  UNK_0xef6e(); // UNK_0xef6e

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefc6: WORD 'UNK_0xefc8' codep=0x224c parp=0xefc8
// ================================================

void UNK_0xefc8() // UNK_0xefc8
{
  UNK_0xefa6(); // UNK_0xefa6
  DUP(); // DUP
  EINDE(); // EINDE
  Push(Pop()*2); // 2*
  UNK_0xef16(); // UNK_0xef16
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
  SWAP(); // SWAP
  Push(2); // 2
  Push(Pop() + Pop()); // +
  _gt_(); // >
  if (Pop() == 0) goto label1;
  BEEP(); // BEEP
  UNK_0xef6e(); // UNK_0xef6e

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeff0: WORD 'UNK_0xeff2' codep=0x1d29 parp=0xeff2
// ================================================
// 0xeff2: db 0x03 0x03 0x00 0x22 0x03 0x03 0x80 0x80 0x03 0x03 0x00 0x5d 0x02 0x02 0x00 0x60 0x02 0x02 0x00 0x90 '   "       ]   `    '

// ================================================
// 0xf006: WORD '(TRIM' codep=0x224c parp=0xf010
// ================================================

void _ro_TRIM() // (TRIM
{
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex_(); // !
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xeff2); // UNK_0xeff2
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(h); // I
  C_at_(); // C@
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(h); // I
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  R_gt_(); // R>
  Push(Pop()+2); // 2+
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  POS_dot_(); // POS.
  BLT(); // BLT
}


// ================================================
// 0xf040: WORD 'UNK_0xf042' codep=0x224c parp=0xf042
// ================================================

void UNK_0xf042() // UNK_0xf042
{
  PAD(); // PAD
  C_at_(); // C@
  if (Pop() == 0) goto label1;
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(Pop()*2); // 2*
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  L_at_PIXEL(); // L@PIXEL
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  Push(1); // 1
  SWAP(); // SWAP
  POLY_minus_ER(); // POLY-ER
  PAD(); // PAD
  C_at_(); // C@
  Push(Pop()-1); // 1-
  PAD(); // PAD
  C_ex_(); // C!
  return;

  label1:
  BEEP(); // BEEP
}


// ================================================
// 0xf076: WORD 'UNK_0xf078' codep=0x224c parp=0xf078
// ================================================

void UNK_0xf078() // UNK_0xf078
{
  Push(0x01f4); Pust(0x0000);
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_gt_(); // D>
  _ask_TERMINAL(); // ?TERMINAL
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf098: WORD 'UNK_0xf09a' codep=0x224c parp=0xf09a
// ================================================

void UNK_0xf09a() // UNK_0xf09a
{
  _at_CRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
  WHITE(); // WHITE
  WHITE(); // WHITE
  BROWN(); // BROWN
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  UNK_0xee4a(); // UNK_0xee4a
  UNK_0xf078(); // UNK_0xf078
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  UNK_0xee4a(); // UNK_0xee4a
  UNK_0xf078(); // UNK_0xf078
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf0be: WORD 'UNK_0xf0c0' codep=0x224c parp=0xf0c0
// ================================================

void UNK_0xf0c0() // UNK_0xf0c0
{
  Push(pp__minus_AIN); // -AIN
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  DUP(); // DUP
  Push(pp__minus_AIN); // -AIN
  Push(Read16(Pop())); // @
  _eq_(); // =
  SWAP(); // SWAP
  Push(0x0030);
  Push(0x003a);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  return;

  label1:
  _0_gt_(); // 0>
}


// ================================================
// 0xf0e6: WORD '(#IN$' codep=0x224c parp=0xf0f0
// ================================================

void _ro__n_IN_do_() // (#IN$
{
  _gt_R(); // >R
  PAD(); // PAD
  Push(h); // I
  Push(Pop()+1); // 1+
  Push(0); // 0
  FILL(); // FILL
  Push(pp_XORMODE); // XORMODE
  ON(); // ON

  label5:
  UNK_0xf09a(); // UNK_0xf09a
  _i_KEY(); // 'KEY
  DUP(); // DUP
  Push(0x005a);
  Push(0x0080);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  Push(0x00df);
  Push(Pop() & Pop()); // AND

  label1:
  _gt_R(); // >R
  Push(h); // I
  Push(0x0021);

// ================================================
// 0xf120: WORD 'UNK_0xf122' codep=0x0021 parp=0xf122
// ================================================
  Push(0x005b);
  WITHIN(); // WITHIN
  Push(h); // I
  Push(cc_BL); // BL
  _eq_(); // =
  PAD(); // PAD
  C_at_(); // C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(h); // I
  UNK_0xf0c0(); // UNK_0xf0c0
  Push(Pop() & Pop()); // AND
  PAD(); // PAD
  C_at_(); // C@
  Push(h); // I'
  _st_(); // <
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(h); // I
  EMIT(); // EMIT
  Push(h); // I
  PAD(); // PAD
  C_at_(); // C@
  Push(Pop()+1); // 1+
  DUP(); // DUP
  PAD(); // PAD
  C_ex_(); // C!
  PAD(); // PAD
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  goto label4;

  label2:
  Push(h); // I
  Push(cc__8); // 8
  _eq_(); // =
  if (Pop() == 0) goto label3;
  UNK_0xf042(); // UNK_0xf042
  goto label4;

  label3:
  Push(h); // I
  Push(0x000d);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(h); // I
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label4;
  BEEP(); // BEEP

  label4:
  R_gt_(); // R>
  Push(0x000d);
  _eq_(); // =
  PAD(); // PAD
  C_at_(); // C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label5;
  R_gt_(); // R>
  Pop(); // DROP
  PAD(); // PAD
}


// ================================================
// 0xf1aa: WORD '(?ART' codep=0x224c parp=0xf1b4
// ================================================

void _ro__ask_ART() // (?ART
{
  _gt_R(); // >R
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  R_at_(); // R@
  Push(0x0028);
  _st_(); // <
  R_at_(); // R@
  Push(cc__8); // 8
  Push(0x000f);
  WITHIN(); // WITHIN
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(0x0037);
  goto label3;

  label1:
  Push(0x000f);

  label3:
  IFIND(); // IFIND
  DUP(); // DUP
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x001c);
  R_at_(); // R@
  IFIND(); // IFIND
  CDROP(); // CDROP

  label2:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xf206: WORD 'UNK_0xf208' codep=0x224c parp=0xf208
// ================================================

void UNK_0xf208() // UNK_0xf208
{
  Push(pp_UNK_0xee46); // UNK_0xee46
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(0); // 0
  Push(cc__4); // 4
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  DUP(); // DUP
  Push(cc__6); // 6
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xefae(); // UNK_0xefae
  return;

  label1:
  DUP(); // DUP
  Push(cc__3); // 3
  Push(cc__5); // 5
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  DUP(); // DUP
  UNK_0xefc8(); // UNK_0xefc8
}


// ================================================
// 0xf23e: WORD 'RSTE' codep=0x224c parp=0xf247
// ================================================

void RSTE() // RSTE
{
  UNK_0xefa6(); // UNK_0xefa6
  Push(cc__7); // 7
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xef52(); // UNK_0xef52
  i++;
  } while(i<imax); // (LOOP) 0xfffa

  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xee46); // UNK_0xee46
  _099(); // 099
  SAVE_minus_OV(); // SAVE-OV
}


// ================================================
// 0xf261: WORD '(QUIT' codep=0x224c parp=0xf26b
// ================================================

void _ro_QUIT() // (QUIT
{
  Push(1); // 1
  _0MESS(); // 0MESS
  _at_CRS(); // @CRS
  CTINIT(); // CTINIT
  Push(0x003f);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("[ QUIT ]", 8); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf28c: WORD '(.0$$' codep=0x224c parp=0xf296
// ================================================

void _ro__dot_0_do__do_() // (.0$$
{
  PRINT("INSUFFICIENT FUNDS", 18); // (.")
  BEEP(); // BEEP
}


// ================================================
// 0xf2af: WORD '(0$$$' codep=0x224c parp=0xf2b9
// ================================================

void _ro_0_do__do__do_() // (0$$$
{
  Push(1); // 1
  _0MESS(); // 0MESS
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(1); // 1
  Push(0x0012);
  CMESS(); // CMESS
  _ro__dot_0_do__do_(); // (.0$$
  _ex_CRS(); // !CRS
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x09c4); Pust(0x0000);
  D_plus_(); // D+

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_gt_(); // D>
  _ask_TERMINAL(); // ?TERMINAL
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  _ro_QUIT(); // (QUIT
}


// ================================================
// 0xf2ef: WORD 'UNK_0xf2f1' codep=0x224c parp=0xf2f1
// ================================================

void UNK_0xf2f1() // UNK_0xf2f1
{
  BLACK(); // BLACK
  ERASE_minus_A(); // ERASE-A
  CTINIT(); // CTINIT
  _dot_ERR(); // .ERR
  Push(0x0079);
  OVER(); // OVER
  Push(Pop()*2); // 2*
  _minus_(); // -
  Push(0x00b4);
  POS_dot_(); // POS.
  TYPE(); // TYPE
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
  PINK(); // PINK
  _ex_COLOR(); // !COLOR
  _gt_2FONT(); // >2FONT
  BEEPON(); // BEEPON
  Push(cc__9); // 9
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(2); // 2
  MOD(); // MOD
  Push(Pop()+2); // 2+
  Push(0x03e8);
  Push(Pop() * Pop()); // *
  TONE(); // TONE
  Push(0x005a);
  Push(0x009b);
  POS_dot_(); // POS.
  PRINT("MALFUNCTION", 11); // (.")
  Push(0x00fa);
  MS(); // MS
  i++;
  } while(i<imax); // (LOOP) 0xffd0

  BEEPOFF(); // BEEPOFF
  Push(cc__7); // 7
  Push(pp__n_AUX); // #AUX
  _ex_(); // !
}


// ================================================
// 0xf359: WORD 'UNK_0xf35b' codep=0x224c parp=0xf35b
// ================================================

void UNK_0xf35b() // UNK_0xf35b
{
  DUP(); // DUP
  EINDE(); // EINDE
  Push(Pop()*2); // 2*
  UNK_0xef16(); // UNK_0xef16
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  Push(0x0064);
  _minus_(); // -
  ABS(); // ABS
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
  _gt_(); // >
  Push(pp_UNK_0xee46); // UNK_0xee46
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  DUP(); // DUP
  UNK_0xef36(); // UNK_0xef36
  UNK_0xf2f1(); // UNK_0xf2f1
  Push(0); // 0
  return;

  label1:
  Pop(); // DROP
  Push(1); // 1
}


// ================================================
// 0xf395: WORD '(?.EQ' codep=0x224c parp=0xf39f
// ================================================

void _ro__ask__dot_EQ() // (?.EQ
{
  _gt_R(); // >R
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  CTINIT(); // CTINIT
  Push(h); // I
  EINDE(); // EINDE
  Push(Pop()*2); // 2*
  UNK_0xef16(); // UNK_0xef16
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  C_at_(); // C@
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(h); // I
  _dot_ERR(); // .ERR
  _dot_TTY(); // .TTY
  PRINT(": INOPERATIVE", 13); // (.")
  Push(0); // 0
  goto label4;

  label2:
  Push(h); // I
  UNK_0xf208(); // UNK_0xf208
  UNK_0xf35b(); // UNK_0xf35b

  label4:
  goto label3;

  label1:
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x531c(); // UNK_0x531c
  UNK_0x494a(); // UNK_0x494a
  UNK_0x2052(); // UNK_0x2052
  UNK_0x534b(); // UNK_0x534b
  UNK_0x4e22(); // UNK_0x4e22
  UNK_0x5451(); // UNK_0x5451
  UNK_0x4522(); // UNK_0x4522
  UNK_0x5553(); // UNK_0x5553
  UNK_0x504b(); // UNK_0x504b
  UNK_0x4552(); // UNK_0x4552
  UNK_0x2046(); // UNK_0x2046
  UNK_0x4959(); // UNK_0x4959
  Push(pp_UNK_0x4856); // UNK_0x4856
  UNK_0xf122(); // UNK_0xf122
  UNK_0x50a1(); // UNK_0x50a1
  UNK_0xd010(); // UNK_0xd010
  UNK_0xe6f0(); // UNK_0xe6f0
  UNK_0x2008(); // UNK_0x2008
  UNK_0x9011(); // UNK_0x9011

  label3:
  UNK_0x3210(); // UNK_0x3210
  UNK_0xdf10(); // UNK_0xdf10
  UNK_0x907b(); // UNK_0x907b
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf41a: WORD 'UNK_0xf41c' codep=0x224c parp=0xf41c
// ================================================
  UNK_0x2024(); // UNK_0x2024

void UNK_0xf41c() // UNK_0xf41c
{
  Push(0); // 0

  label2:
  _ask__minus_NULL(); // ?-NULL
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  _ask__minus_NULL(); // ?-NULL
  Push(Pop() | Pop()); // OR
  ICLOSE(); // ICLOSE
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  goto label3;

  label1:
  Push(1); // 1

  label3:
  if (Pop() == 0) goto label2;
}


// ================================================
// 0xf43c: WORD '=CARG' codep=0x224c parp=0xf446
// ================================================

void _eq_CARG() // =CARG
{
  NULL(); // NULL
  Push(pp__10_star_END); // 10*END
  D_ex_(); // D!
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xef20(); // UNK_0xef20
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  Push(Pop()+1); // 1+
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xf41c(); // UNK_0xf41c
  if (Pop() == 0) goto label1;
  Push(0); // 0

  label3:
  _at_INST_minus_C(); // @INST-C
  Push(0x000b);
  _eq_(); // =
  _at_INST_minus_S(); // @INST-S
  Push(0x0011);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  _at_INST_minus_S(); // @INST-S
  Push(0x0030);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  IOPEN(); // IOPEN

  label6:
  _at_INST_minus_S(); // @INST-S
  Push(cc__6); // 6
  _eq_(); // =
  _at_INST_minus_C(); // @INST-C
  Push(0x001a);
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label5;
  INST_minus_QT(); // INST-QT
  Push(Read16(Pop())); // @
  Push(0x000a);
  U_star_(); // U*
  Push(pp__10_star_END); // 10*END
  D_ex_(); // D!

  label5:
  INST_minus_QT(); // INST-QT
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  NULL(); // NULL
  INST_minus_X(); // INST-X
  D_ex_(); // D!
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label6;
  ICLOSE(); // ICLOSE

  label2:
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label3;
  goto label4;

  label1:
  Push(0); // 0

  label4:
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  _minus_(); // -
  DUP(); // DUP
  UNK_0xef25(); // UNK_0xef25
  _ex_(); // !
  Push(0x000a);
  U_star_(); // U*
  Push(pp__10_star_CARG); // 10*CARG
  D_ex_(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4f2: WORD 'TV?AR' codep=0x224c parp=0xf4fc
// ================================================

void TV_ask_AR() // TV?AR
{
  _gt_R(); // >R
  Push(pp_TV_minus_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  R_at_(); // R@
  Push(0x0028);
  _st_(); // <
  R_at_(); // R@
  Push(cc__8); // 8
  Push(0x000f);
  WITHIN(); // WITHIN
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(0x0037);
  goto label3;

  label1:
  Push(0x000f);

  label3:
  IFIND(); // IFIND
  DUP(); // DUP
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x001c);
  R_at_(); // R@
  IFIND(); // IFIND
  ICLOSE(); // ICLOSE

  label2:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  R_gt_(); // R>
  Pop(); // DROP
}

// 0xf54e: db 0x4d 0x49 0x53 0x43 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'MISC-_____________ '
  