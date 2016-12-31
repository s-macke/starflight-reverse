// ====== OVERLAY 'MISC-OV' ======
// store offset = 0xee30
// overlay size   = 0x0730

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xee46  codep:0x1d29 parp:0xee46 size:0x0002 C-string:'UNK_0xee46'
//      UNK_0xee4a  codep:0x224c parp:0xee4a size:0x001c C-string:'UNK_0xee4a'
//      UNK_0xee68  codep:0x224c parp:0xee68 size:0x000c C-string:'UNK_0xee68'
//      UNK_0xee76  codep:0x224c parp:0xee76 size:0x001b C-string:'UNK_0xee76'
//      UNK_0xee93  codep:0x224c parp:0xee93 size:0x000b C-string:'UNK_0xee93'
//      UNK_0xeea0  codep:0x224c parp:0xeea0 size:0x000d C-string:'UNK_0xeea0'
//      UNK_0xeeaf  codep:0x224c parp:0xeeaf size:0x000c C-string:'UNK_0xeeaf'
//      UNK_0xeebd  codep:0x224c parp:0xeebd size:0x000c C-string:'UNK_0xeebd'
//            .ERR  codep:0x4b3b parp:0xeed2 size:0x001c C-string:'_dot_ERR'
//           EINDE  codep:0x4b3b parp:0xeef8 size:0x001c C-string:'EINDE'
//      UNK_0xef16  codep:0x7420 parp:0xef16 size:0x0008 C-string:'UNK_0xef16'
//      UNK_0xef20  codep:0x7420 parp:0xef20 size:0x0003 C-string:'UNK_0xef20'
//      UNK_0xef25  codep:0x7420 parp:0xef25 size:0x0003 C-string:'UNK_0xef25'
//            SCNT  codep:0x7420 parp:0xef31 size:0x0003 C-string:'SCNT'
//      UNK_0xef36  codep:0x224c parp:0xef36 size:0x001a C-string:'UNK_0xef36'
//      UNK_0xef52  codep:0x224c parp:0xef52 size:0x001a C-string:'UNK_0xef52'
//      UNK_0xef6e  codep:0x224c parp:0xef6e size:0x0036 C-string:'UNK_0xef6e'
//      UNK_0xefa6  codep:0x224c parp:0xefa6 size:0x0006 C-string:'UNK_0xefa6'
//      UNK_0xefae  codep:0x224c parp:0xefae size:0x0018 C-string:'UNK_0xefae'
//      UNK_0xefc8  codep:0x224c parp:0xefc8 size:0x0028 C-string:'UNK_0xefc8'
//      UNK_0xeff2  codep:0x1d29 parp:0xeff2 size:0x0014 C-string:'UNK_0xeff2'
//           (TRIM  codep:0x224c parp:0xf010 size:0x0030 C-string:'_ro_TRIM'
//      UNK_0xf042  codep:0x224c parp:0xf042 size:0x0034 C-string:'UNK_0xf042'
//      UNK_0xf078  codep:0x224c parp:0xf078 size:0x0020 C-string:'UNK_0xf078'
//      UNK_0xf09a  codep:0x224c parp:0xf09a size:0x0024 C-string:'UNK_0xf09a'
//      UNK_0xf0c0  codep:0x224c parp:0xf0c0 size:0x0026 C-string:'UNK_0xf0c0'
//           (#IN$  codep:0x224c parp:0xf0f0 size:0x00ba C-string:'_ro__n_IN_do_'
//           (?ART  codep:0x224c parp:0xf1b4 size:0x0052 C-string:'_ro__ask_ART'
//      UNK_0xf208  codep:0x224c parp:0xf208 size:0x0036 C-string:'UNK_0xf208'
//            RSTE  codep:0x224c parp:0xf247 size:0x001a C-string:'RSTE'
//           (QUIT  codep:0x224c parp:0xf26b size:0x0021 C-string:'_ro_QUIT'
//           (.0$$  codep:0x224c parp:0xf296 size:0x0019 C-string:'_ro__dot_0_do__do_'
//           (0$$$  codep:0x224c parp:0xf2b9 size:0x0036 C-string:'_ro_0_do__do__do_'
//      UNK_0xf2f1  codep:0x224c parp:0xf2f1 size:0x0068 C-string:'UNK_0xf2f1'
//      UNK_0xf35b  codep:0x224c parp:0xf35b size:0x003a C-string:'UNK_0xf35b'
//           (?.EQ  codep:0x224c parp:0xf39f size:0x007b C-string:'_ro__ask__dot_EQ'
//      UNK_0xf41c  codep:0x224c parp:0xf41c size:0x0020 C-string:'UNK_0xf41c'
//           =CARG  codep:0x224c parp:0xf446 size:0x00ac C-string:'_eq_CARG'
//           TV?AR  codep:0x224c parp:0xf4fc size:0x0000 C-string:'TV_ask_AR'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc__3; // 3
extern const unsigned short int cc__4; // 4
extern const unsigned short int cc__5; // 5
extern const unsigned short int cc__6; // 6
extern const unsigned short int cc__7; // 7
extern const unsigned short int cc__8; // 8
extern const unsigned short int cc__9; // 9
extern const unsigned short int pp__i__dot_HUFF; // '.HUFF
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp__dash_AIN; // -AIN
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp__10_star_CARG; // 10*CARG
extern const unsigned short int pp__10_star_END; // 10*END
extern const unsigned short int pp_TV_dash_HOLD; // TV-HOLD
void ABS(); // ABS
void MOD(); // MOD
void PAD(); // PAD
void BEEP(); // BEEP
void MS(); // MS
void UNRAVEL(); // UNRAVEL
void _2OVER(); // 2OVER
void D_gt_(); // D>
void WITHIN(); // WITHIN
void RRND(); // RRND
void C_ex__2(); // C!_2
void _ex__2(); // !_2
void _plus__ex__2(); // +!_2
void D_ex_(); // D!
void ON_2(); // ON_2
void _099(); // 099
void FILL_2(); // FILL_2
void _at_INST_dash_C(); // @INST-C
void _at_INST_dash_S(); // @INST-S
void CDROP(); // CDROP
void _ask__dash_NULL(); // ?-NULL
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void _at__gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void _ask_FIRST(); // ?FIRST
void INEXT(); // INEXT
void IFIND(); // IFIND
void SAVE_dash_OV(); // SAVE-OV
void MODULE(); // MODULE
void _ex_COLOR(); // !COLOR
void _gt_2FONT(); // >2FONT
void POS_dot_(); // POS.
void CTPOS_dot_(); // CTPOS.
void BEEPON_2(); // BEEPON_2
void _at_CRS(); // @CRS
void _ex_CRS(); // !CRS
void POLY_dash_ER(); // POLY-ER
void TTY_dash_SCR(); // TTY-SCR
void CTINIT(); // CTINIT
void _dot_TTY(); // .TTY
void _ask_MRC(); // ?MRC
void ERASE_dash_A(); // ERASE-A
void _i_KEY(); // 'KEY
void CURSORS(); // CURSORS
void CMESS(); // CMESS
void _0MESS(); // 0MESS
void _2_at_(); // 2@
void OVER(); // OVER
void SWAP(); // SWAP
void _dash_(); // -
void D_plus_(); // D+
void U_star_(); // U*
void _gt_(); // >
void _st_(); // <
void _0_gt_(); // 0>
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void _at_DS(); // @DS
void _plus_BIT(); // +BIT
void L_at_PIXEL(); // L@PIXEL
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xee46 = 0xee46; // UNK_0xee46 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xeff2 = 0xeff2; // UNK_0xeff2 size: 20
// {0x03, 0x03, 0x00, 0x22, 0x03, 0x03, 0x80, 0x80, 0x03, 0x03, 0x00, 0x5d, 0x02, 0x02, 0x00, 0x60, 0x02, 0x02, 0x00, 0x90}




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
  _ex__2(); // !_2
  Push(Read16(cc__4)); // 4
  Push(Read16(regsp)); // DUP
  Push(pp_WBLT); // WBLT
  _ex__2(); // !_2
  Push(Read16(cc__5)); // 5
  Push(pp_LBLT); // LBLT
  _ex__2(); // !_2
  BLT(); // BLT
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xee66: WORD 'UNK_0xee68' codep=0x224c parp=0xee68
// ================================================

void UNK_0xee68() // UNK_0xee68
{

  UNK_0x3f09("SENSORS");
}


// ================================================
// 0xee74: WORD 'UNK_0xee76' codep=0x224c parp=0xee76
// ================================================

void UNK_0xee76() // UNK_0xee76
{
  TTY_dash_SCR(); // TTY-SCR
  Push(0); // 0
  Push(Read16(cc__6)); // 6
  CTPOS_dot_(); // CTPOS.

  UNK_0x3f09("COMMUNICATIONS");
}


// ================================================
// 0xee91: WORD 'UNK_0xee93' codep=0x224c parp=0xee93
// ================================================

void UNK_0xee93() // UNK_0xee93
{

  UNK_0x3f09("LASERS");
}


// ================================================
// 0xee9e: WORD 'UNK_0xeea0' codep=0x224c parp=0xeea0
// ================================================

void UNK_0xeea0() // UNK_0xeea0
{

  UNK_0x3f09("MISSILES");
}


// ================================================
// 0xeead: WORD 'UNK_0xeeaf' codep=0x224c parp=0xeeaf
// ================================================

void UNK_0xeeaf() // UNK_0xeeaf
{

  UNK_0x3f09("ENGINES");
}


// ================================================
// 0xeebb: WORD 'UNK_0xeebd' codep=0x224c parp=0xeebd
// ================================================

void UNK_0xeebd() // UNK_0xeebd
{

  UNK_0x3f09("SHIELDS");
}


// ================================================
// 0xeec9: WORD '.ERR' codep=0x4b3b parp=0xeed2
// ================================================

void _dot_ERR() // .ERR
{
  switch(Pop()) // .ERR
  {
  case 1:
    UNK_0xee68(); // UNK_0xee68
    break;
  case 2:
    UNK_0xee76(); // UNK_0xee76
    break;
  case 3:
    UNK_0xee93(); // UNK_0xee93
    break;
  case 4:
    UNK_0xeea0(); // UNK_0xeea0
    break;
  case 5:
    UNK_0xeeaf(); // UNK_0xeeaf
    break;
  case 6:
    UNK_0xeebd(); // UNK_0xeebd
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xeeee: WORD 'EINDE' codep=0x4b3b parp=0xeef8
// ================================================

void EINDE() // EINDE
{
  switch(Pop()) // EINDE
  {
  case 1:
    Push(2); // 2
    break;
  case 2:
    Push(Read16(cc__3)); // 3
    break;
  case 3:
    Push(Read16(cc__6)); // 6
    break;
  case 4:
    Push(Read16(cc__5)); // 5
    break;
  case 5:
    Push(1); // 1
    break;
  case 6:
    Push(Read16(cc__4)); // 4
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

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
  EINDE(); // EINDE case
  Push(Pop()*2); // 2*
  Push(0x65f2); // IFIELD(UNK_0xef16)
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0080);
  Push(Pop() | Pop()); // OR
  SWAP(); // SWAP
  C_ex__2(); // C!_2
}


// ================================================
// 0xef50: WORD 'UNK_0xef52' codep=0x224c parp=0xef52
// ================================================

void UNK_0xef52() // UNK_0xef52
{
  EINDE(); // EINDE case
  Push(Pop()*2); // 2*
  Push(0x65f2); // IFIELD(UNK_0xef16)
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  SWAP(); // SWAP
  C_ex__2(); // C!_2
}


// ================================================
// 0xef6c: WORD 'UNK_0xef6e' codep=0x224c parp=0xef6e
// ================================================

void UNK_0xef6e() // UNK_0xef6e
{
  signed short int i, imax;
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
  Push(Read16(cc__3)); // 3
  _star_CLOSE(); // *CLOSE
  Push(pp_UNK_0xee46); // UNK_0xee46
  ON_2(); // ON_2
  SAVE_dash_OV(); // SAVE-OV
  Push(Read16(cc__7)); // 7
  Push(1); // 1

  i = Pop();
  imax = Pop();
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
  Push(0x6611); // IFIELD(SCNT)
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
  Push(Read16(regsp)); // DUP
  EINDE(); // EINDE case
  Push(Pop()*2); // 2*
  Push(0x65f2); // IFIELD(UNK_0xef16)
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc__7)); // 7
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
  unsigned short int a;
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex__2(); // !_2
  Push(Read16(cc__4)); // 4
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xeff2); // UNK_0xeff2
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(a); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_LBLT); // LBLT
  _ex__2(); // !_2
  Push(a); // I
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_WBLT); // WBLT
  _ex__2(); // !_2
  Push(a); // R>
  Push(Pop()+2); // 2+
  Push(pp_ABLT); // ABLT
  _ex__2(); // !_2
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
  _plus__ex__2(); // +!_2
  Push(1); // 1
  SWAP(); // SWAP
  POLY_dash_ER(); // POLY-ER
  PAD(); // PAD
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()-1); // 1-
  PAD(); // PAD
  C_ex__2(); // C!_2
  return;

  label1:
  BEEP(); // BEEP
}


// ================================================
// 0xf076: WORD 'UNK_0xf078' codep=0x224c parp=0xf078
// ================================================

void UNK_0xf078() // UNK_0xf078
{
  Push(0x01f4); Push(0x0000);
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_gt_(); // D>
  Exec("?TERMINAL"); // call of word 0x25bc '(?TERMINAL)'
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
  ON_2(); // ON_2
  SetColor("WHITE");
  SetColor("WHITE");
  SetColor("BROWN");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  UNK_0xee4a(); // UNK_0xee4a
  UNK_0xf078(); // UNK_0xf078
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
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
  Push(Read16(regsp)); // DUP
  Push(pp__dash_AIN); // -AIN
  Push(Read16(Pop())); // @
  Push((Pop()==Pop())?1:0); // =
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
  unsigned short int a;
  unsigned short int b;
  a = Pop(); // >R
  PAD(); // PAD
  Push(a); // I
  Push(Pop()+1); // 1+
  Push(0); // 0
  FILL_2(); // FILL_2
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2

  label4:
  UNK_0xf09a(); // UNK_0xf09a
  _i_KEY(); // 'KEY
  Push(Read16(regsp)); // DUP
  Push(0x005a);
  Push(0x0080);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  Push(0x00df);
  Push(Pop() & Pop()); // AND

  label1:
  b = Pop(); // >R
  Push(b); // I
  Push(0x0021);
  Push(0x005b);
  WITHIN(); // WITHIN
  Push(b); // I
  Push(Read16(cc_BL)); // BL
  Push((Pop()==Pop())?1:0); // =
  PAD(); // PAD
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(b); // I
  UNK_0xf0c0(); // UNK_0xf0c0
  Push(Pop() & Pop()); // AND
  PAD(); // PAD
  Push(Read8(Pop())&0xFF); // C@
  Push(a); // I'
  _st_(); // <
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(b); // I
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
  Push(b); // I
  PAD(); // PAD
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  Push(Read16(regsp)); // DUP
  PAD(); // PAD
  C_ex__2(); // C!_2
  PAD(); // PAD
  Push(Pop() + Pop()); // +
  C_ex__2(); // C!_2
  goto label3;

  label2:
  Push(b); // I
  Push(Read16(cc__8)); // 8
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label5;
  UNK_0xf042(); // UNK_0xf042
  goto label3;

  label5:
  Push(b); // I
  Push(0x000d);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(b); // I
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label3;
  BEEP(); // BEEP

  label3:
  Push(b); // R>
  Push(0x000d);
  Push((Pop()==Pop())?1:0); // =
  PAD(); // PAD
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label4;
  Push(a); // R>
  Pop(); // DROP
  PAD(); // PAD
}


// ================================================
// 0xf1aa: WORD '(?ART' codep=0x224c parp=0xf1b4
// ================================================
// entry

void _ro__ask_ART() // (?ART
{
  unsigned short int a;
  a = Pop(); // >R
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(Read16(a)); // R@
  Push(0x0028);
  _st_(); // <
  Push(Read16(a)); // R@
  Push(Read16(cc__8)); // 8
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
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label3;
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x001c);
  Push(Read16(a)); // R@
  IFIND(); // IFIND
  CDROP(); // CDROP

  label3:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(a); // R>
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
  Push(Read16(cc__4)); // 4
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(Read16(regsp)); // DUP
  Push(Read16(cc__6)); // 6
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  UNK_0xefae(); // UNK_0xefae
  return;

  label1:
  Push(Read16(regsp)); // DUP
  Push(Read16(cc__3)); // 3
  Push(Read16(cc__5)); // 5
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Push(Read16(regsp)); // DUP
  UNK_0xefc8(); // UNK_0xefc8
}


// ================================================
// 0xf23e: WORD 'RSTE' codep=0x224c parp=0xf247
// ================================================
// entry

void RSTE() // RSTE
{
  signed short int i, imax;
  UNK_0xefa6(); // UNK_0xefa6
  Push(Read16(cc__7)); // 7
  Push(1); // 1

  i = Pop();
  imax = Pop();
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
  Push(0x09c4); Push(0x0000);
  D_plus_(); // D+

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_gt_(); // D>
  Exec("?TERMINAL"); // call of word 0x25bc '(?TERMINAL)'
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
  signed short int i, imax;
  SetColor("BLACK");
  ERASE_dash_A(); // ERASE-A
  CTINIT(); // CTINIT
  _dot_ERR(); // .ERR case
  Push(0x0079);
  OVER(); // OVER
  Push(Pop()*2); // 2*
  _dash_(); // -
  Push(0x00b4);
  POS_dot_(); // POS.
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  SetColor("PINK");
  _ex_COLOR(); // !COLOR
  _gt_2FONT(); // >2FONT
  BEEPON_2(); // BEEPON_2
  Push(Read16(cc__9)); // 9
  Push(0); // 0

  i = Pop();
  imax = Pop();
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
  Push(Read16(cc__7)); // 7
  Push(pp__n_AUX); // #AUX
  _ex__2(); // !_2
}


// ================================================
// 0xf359: WORD 'UNK_0xf35b' codep=0x224c parp=0xf35b
// ================================================

void UNK_0xf35b() // UNK_0xf35b
{
  Push(Read16(regsp)); // DUP
  EINDE(); // EINDE case
  Push(Pop()*2); // 2*
  Push(0x65f2); // IFIELD(UNK_0xef16)
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
  Push(Read16(regsp)); // DUP
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
  unsigned short int a;
  a = Pop(); // >R
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  CTINIT(); // CTINIT
  Push(a); // I
  EINDE(); // EINDE case
  Push(Pop()*2); // 2*
  Push(0x65f2); // IFIELD(UNK_0xef16)
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(a); // I
  _dot_ERR(); // .ERR case
  _dot_TTY(); // .TTY
  PRINT(": INOPERATIVE", 13); // (.")
  Push(0); // 0
  goto label3;

  label2:
  Push(a); // I
  UNK_0xf208(); // UNK_0xf208
  UNK_0xf35b(); // UNK_0xf35b

  label3:
  goto label4;

  label1:

  UNK_0x3f09("SHIP IS NOT EQUIPPED WITH ");
  _dot_TTY(); // .TTY
  Push(a); // I
  _dot_ERR(); // .ERR case
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(0); // 0

  label4:
  Push(a); // R>
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
  Push(0x6600); // IFIELD(UNK_0xef20)
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
  Push((Pop()==Pop())?1:0); // =
  _at_INST_dash_S(); // @INST-S
  Push(0x0011);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  _at_INST_dash_S(); // @INST-S
  Push(0x0030);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  IOPEN(); // IOPEN

  label4:
  _at_INST_dash_S(); // @INST-S
  Push(Read16(cc__6)); // 6
  Push((Pop()==Pop())?1:0); // =
  _at_INST_dash_C(); // @INST-C
  Push(0x001a);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label3;
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(0x000a);
  U_star_(); // U*
  Push(pp__10_star_END); // 10*END
  D_ex_(); // D!

  label3:
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push2Words("NULL");
  Push(0x65ee); // IFIELD(INST-X)
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
  Push(Read16(regsp)); // DUP
  Push(0x6624); // IFIELD(UNK_0xef25)
  _ex__2(); // !_2
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
  unsigned short int a;
  a = Pop(); // >R
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(Read16(a)); // R@
  Push(0x0028);
  _st_(); // <
  Push(Read16(a)); // R@
  Push(Read16(cc__8)); // 8
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
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label3;
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x001c);
  Push(Read16(a)); // R@
  IFIND(); // IFIND
  ICLOSE(); // ICLOSE

  label3:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  Push(a); // R>
  Pop(); // DROP
}

// 0xf54e: db 0x4d 0x49 0x53 0x43 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'MISC-_____________ '
  