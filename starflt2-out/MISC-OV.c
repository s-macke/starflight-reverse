// ====== OVERLAY 'MISC-OV' ======
// store offset = 0xee30
// overlay size   = 0x0730

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0xaf3b C-string:'UNK_0x3f09'
// 1870:      UNK_0xee46  codep:0x1d29 parp:0xee46 size:0x0002 C-string:'UNK_0xee46'
// 1871:      UNK_0xee4a  codep:0x224c parp:0xee4a size:0x007f C-string:'UNK_0xee4a'
// 1872:            .ERR  codep:0x4b3b parp:0xeed2 size:0x001c C-string:'_dot_ERR'
// 1873:           EINDE  codep:0x4b3b parp:0xeef8 size:0x001c C-string:'EINDE'
// 1874:      UNK_0xef16  codep:0x7420 parp:0xef16 size:0x0008 C-string:'UNK_0xef16'
// 1875:      UNK_0xef20  codep:0x7420 parp:0xef20 size:0x0003 C-string:'UNK_0xef20'
// 1876:      UNK_0xef25  codep:0x7420 parp:0xef25 size:0x0003 C-string:'UNK_0xef25'
// 1877:            SCNT  codep:0x7420 parp:0xef31 size:0x0003 C-string:'SCNT'
// 1878:      UNK_0xef36  codep:0x224c parp:0xef36 size:0x001a C-string:'UNK_0xef36'
// 1879:      UNK_0xef52  codep:0x224c parp:0xef52 size:0x001a C-string:'UNK_0xef52'
// 1880:      UNK_0xef6e  codep:0x224c parp:0xef6e size:0x0036 C-string:'UNK_0xef6e'
// 1881:      UNK_0xefa6  codep:0x224c parp:0xefa6 size:0x0006 C-string:'UNK_0xefa6'
// 1882:      UNK_0xefae  codep:0x224c parp:0xefae size:0x0018 C-string:'UNK_0xefae'
// 1883:      UNK_0xefc8  codep:0x224c parp:0xefc8 size:0x0028 C-string:'UNK_0xefc8'
// 1884:      UNK_0xeff2  codep:0x1d29 parp:0xeff2 size:0x0014 C-string:'UNK_0xeff2'
// 1885:           (TRIM  codep:0x224c parp:0xf010 size:0x0030 C-string:'_ro_TRIM'
// 1886:      UNK_0xf042  codep:0x224c parp:0xf042 size:0x0034 C-string:'UNK_0xf042'
// 1887:      UNK_0xf078  codep:0x224c parp:0xf078 size:0x0020 C-string:'UNK_0xf078'
// 1888:      UNK_0xf09a  codep:0x224c parp:0xf09a size:0x0024 C-string:'UNK_0xf09a'
// 1889:      UNK_0xf0c0  codep:0x224c parp:0xf0c0 size:0x0026 C-string:'UNK_0xf0c0'
// 1890:           (#IN$  codep:0x224c parp:0xf0f0 size:0x00ba C-string:'_ro__n_IN_do_'
// 1891:           (?ART  codep:0x224c parp:0xf1b4 size:0x0052 C-string:'_ro__ask_ART'
// 1892:      UNK_0xf208  codep:0x224c parp:0xf208 size:0x0036 C-string:'UNK_0xf208'
// 1893:            RSTE  codep:0x224c parp:0xf247 size:0x001a C-string:'RSTE'
// 1894:           (QUIT  codep:0x224c parp:0xf26b size:0x0021 C-string:'_ro_QUIT'
// 1895:           (.0$$  codep:0x224c parp:0xf296 size:0x0019 C-string:'_ro__dot_0_do__do_'
// 1896:           (0$$$  codep:0x224c parp:0xf2b9 size:0x0036 C-string:'_ro_0_do__do__do_'
// 1897:      UNK_0xf2f1  codep:0x224c parp:0xf2f1 size:0x0068 C-string:'UNK_0xf2f1'
// 1898:      UNK_0xf35b  codep:0x224c parp:0xf35b size:0x003a C-string:'UNK_0xf35b'
// 1899:           (?.EQ  codep:0x224c parp:0xf39f size:0x007b C-string:'_ro__ask__dot_EQ'
// 1900:      UNK_0xf41c  codep:0x224c parp:0xf41c size:0x0020 C-string:'UNK_0xf41c'
// 1901:           =CARG  codep:0x224c parp:0xf446 size:0x00ac C-string:'_eq_CARG'
// 1902:           TV?AR  codep:0x224c parp:0xf4fc size:0x0000 C-string:'TV_ask_AR'

// =================================
// =========== VARIABLES ===========
// =================================
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
  Push(Read16(sp)); // DUP
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
  Case(EINDE);
  Push(Pop()*2); // 2*
  Func8("UNK_0xef16");
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  Push(Read16(sp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
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
  Case(EINDE);
  Push(Pop()*2); // 2*
  Func8("UNK_0xef16");
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  Push(Read16(sp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
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
  Push2Words("*PLIST");
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
  SAVE_dash_OV(); // SAVE-OV
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
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xefac: WORD 'UNK_0xefae' codep=0x224c parp=0xefae
// ================================================

void UNK_0xefae() // UNK_0xefae
{
  UNK_0xefa6(); // UNK_0xefa6
  Func8("SCNT");
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
  Push(Read16(sp)); // DUP
  Case(EINDE);
  Push(Pop()*2); // 2*
  Func8("UNK_0xef16");
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
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
// entry

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
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(h); // I
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
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
  Push(Read8(Pop())&0xFF); // C@
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
  POLY_dash_ER(); // POLY-ER
  PAD(); // PAD
  Push(Read8(Pop())&0xFF); // C@
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
  Func14("?TERMINAL"); // call of word 0x25bc
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
  SetColor("WHITE");
  SetColor("WHITE");
  SetColor("BROWN");
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
  Push(pp__dash_AIN); // -AIN
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(Read16(sp)); // DUP
  Push(pp__dash_AIN); // -AIN
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
// entry

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
  Push(Read16(sp)); // DUP
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
  Push(0x005b);
  WITHIN(); // WITHIN
  Push(h); // I
  Push(cc_BL); // BL
  _eq_(); // =
  PAD(); // PAD
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(h); // I
  UNK_0xf0c0(); // UNK_0xf0c0
  Push(Pop() & Pop()); // AND
  PAD(); // PAD
  Push(Read8(Pop())&0xFF); // C@
  Push(h); // I'
  _st_(); // <
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(h); // I
  Func14("EMIT"); // call of word 0x2731
  Push(h); // I
  PAD(); // PAD
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  Push(Read16(sp)); // DUP
  PAD(); // PAD
  C_ex_(); // C!
  PAD(); // PAD
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  goto label3;

  label2:
  Push(h); // I
  Push(cc__8); // 8
  _eq_(); // =
  if (Pop() == 0) goto label4;
  UNK_0xf042(); // UNK_0xf042
  goto label3;

  label4:
  Push(h); // I
  Push(0x000d);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(h); // I
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label3;
  BEEP(); // BEEP

  label3:
  R_gt_(); // R>
  Push(0x000d);
  _eq_(); // =
  PAD(); // PAD
  Push(Read8(Pop())&0xFF); // C@
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
// entry

void _ro__ask_ART() // (?ART
{
  _gt_R(); // >R
  Push2Words("*STARSH");
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
  goto label2;

  label1:
  Push(0x000f);

  label2:
  IFIND(); // IFIND
  Push(Read16(sp)); // DUP
  if (Pop() == 0) goto label3;
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x001c);
  R_at_(); // R@
  IFIND(); // IFIND
  CDROP(); // CDROP

  label3:
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
  Push(Read16(sp)); // DUP
  Push(cc__6); // 6
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xefae(); // UNK_0xefae
  return;

  label1:
  Push(Read16(sp)); // DUP
  Push(cc__3); // 3
  Push(cc__5); // 5
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Push(Read16(sp)); // DUP
  UNK_0xefc8(); // UNK_0xefc8
}


// ================================================
// 0xf23e: WORD 'RSTE' codep=0x224c parp=0xf247
// ================================================
// entry

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
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xf261: WORD '(QUIT' codep=0x224c parp=0xf26b
// ================================================
// entry

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
// entry

void _ro__dot_0_do__do_() // (.0$$
{
  PRINT("INSUFFICIENT FUNDS", 18); // (.")
  BEEP(); // BEEP
}


// ================================================
// 0xf2af: WORD '(0$$$' codep=0x224c parp=0xf2b9
// ================================================
// entry

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
  Func14("?TERMINAL"); // call of word 0x25bc
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
  SetColor("BLACK");
  ERASE_dash_A(); // ERASE-A
  CTINIT(); // CTINIT
  Case(.ERR);
  Push(0x0079);
  OVER(); // OVER
  Push(Pop()*2); // 2*
  _dash_(); // -
  Push(0x00b4);
  POS_dot_(); // POS.
  Func14("TYPE"); // call of word 0x2690
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
  SetColor("PINK");
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
  Push(Read16(sp)); // DUP
  Case(EINDE);
  Push(Pop()*2); // 2*
  Func8("UNK_0xef16");
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0064);
  _dash_(); // -
  ABS(); // ABS
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
  _gt_(); // >
  Push(pp_UNK_0xee46); // UNK_0xee46
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(Read16(sp)); // DUP
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
// entry

void _ro__ask__dot_EQ() // (?.EQ
{
  _gt_R(); // >R
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  CTINIT(); // CTINIT
  Push(h); // I
  Case(EINDE);
  Push(Pop()*2); // 2*
  Func8("UNK_0xef16");
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(h); // I
  Case(.ERR);
  _dot_TTY(); // .TTY
  PRINT(": INOPERATIVE", 13); // (.")
  Push(0); // 0
  goto label3;

  label2:
  Push(h); // I
  UNK_0xf208(); // UNK_0xf208
  UNK_0xf35b(); // UNK_0xf35b

  label3:
  goto label4;

  label1:

  UNK_0x3f09("SHIP IS NOT EQUIPPED WITH ");
  _dot_TTY(); // .TTY
  Push(h); // I
  Case(.ERR);
  Func14("TYPE"); // call of word 0x2690
  Push(0); // 0

  label4:
  R_gt_(); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf41a: WORD 'UNK_0xf41c' codep=0x224c parp=0xf41c
// ================================================

void UNK_0xf41c() // UNK_0xf41c
{
  Push(0); // 0

  label3:
  _ask__dash_NULL(); // ?-NULL
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  _ask__dash_NULL(); // ?-NULL
  Push(Pop() | Pop()); // OR
  ICLOSE(); // ICLOSE
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  goto label2;

  label1:
  Push(1); // 1

  label2:
  if (Pop() == 0) goto label3;
}


// ================================================
// 0xf43c: WORD '=CARG' codep=0x224c parp=0xf446
// ================================================
// entry

void _eq_CARG() // =CARG
{
  Push2Words("NULL");
  Push(pp__10_star_END); // 10*END
  D_ex_(); // D!
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Func8("UNK_0xef20");
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  Push(Pop()+1); // 1+
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xf41c(); // UNK_0xf41c
  if (Pop() == 0) goto label1;
  Push(0); // 0

  label5:
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  _eq_(); // =
  _at_INST_dash_S(); // @INST-S
  Push(0x0011);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  _at_INST_dash_S(); // @INST-S
  Push(0x0030);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  IOPEN(); // IOPEN

  label4:
  _at_INST_dash_S(); // @INST-S
  Push(cc__6); // 6
  _eq_(); // =
  _at_INST_dash_C(); // @INST-C
  Push(0x001a);
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label3;
  Func8("INST-QT");
  Push(Read16(Pop())); // @
  Push(0x000a);
  U_star_(); // U*
  Push(pp__10_star_END); // 10*END
  D_ex_(); // D!

  label3:
  Func8("INST-QT");
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push2Words("NULL");
  Func8("INST-X");
  D_ex_(); // D!
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label4;
  ICLOSE(); // ICLOSE

  label2:
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label5;
  goto label6;

  label1:
  Push(0); // 0

  label6:
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  _dash_(); // -
  Push(Read16(sp)); // DUP
  Func8("UNK_0xef25");
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
// entry

void TV_ask_AR() // TV?AR
{
  _gt_R(); // >R
  Push(pp_TV_dash_HOLD); // TV-HOLD
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
  goto label2;

  label1:
  Push(0x000f);

  label2:
  IFIND(); // IFIND
  Push(Read16(sp)); // DUP
  if (Pop() == 0) goto label3;
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x001c);
  R_at_(); // R@
  IFIND(); // IFIND
  ICLOSE(); // ICLOSE

  label3:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  R_gt_(); // R>
  Pop(); // DROP
}

// 0xf54e: db 0x4d 0x49 0x53 0x43 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'MISC-_____________ '
  