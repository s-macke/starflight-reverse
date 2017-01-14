// ====== OVERLAY 'MISC-OV' ======
// store offset = 0xefc0
// overlay size   = 0x05a0

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xefd6  codep:0x744d parp:0xefd6 size:0x0003 C-string:'UNK_0xefd6'
//      UNK_0xefdb  codep:0x744d parp:0xefdb size:0x0003 C-string:'UNK_0xefdb'
//      UNK_0xefe0  codep:0x744d parp:0xefe0 size:0x0003 C-string:'UNK_0xefe0'
//      UNK_0xefe5  codep:0x1d29 parp:0xefe5 size:0x0014 C-string:'UNK_0xefe5'
//           (TRIM  codep:0x224c parp:0xf003 size:0x0030 C-string:'_ro_TRIM'
//      UNK_0xf035  codep:0x224c parp:0xf035 size:0x0036 C-string:'UNK_0xf035'
//      UNK_0xf06d  codep:0x224c parp:0xf06d size:0x0020 C-string:'UNK_0xf06d'
//      UNK_0xf08f  codep:0x224c parp:0xf08f size:0x0028 C-string:'UNK_0xf08f'
//      UNK_0xf0b9  codep:0x224c parp:0xf0b9 size:0x0026 C-string:'UNK_0xf0b9'
//           (#IN$  codep:0x224c parp:0xf0e9 size:0x00ba C-string:'_ro__n_IN_do_'
//           (?ART  codep:0x224c parp:0xf1ad size:0x002e C-string:'_ro__ask_ART'
//           (QUIT  codep:0x224c parp:0xf1e5 size:0x0021 C-string:'_ro_QUIT'
//           (.0$$  codep:0x224c parp:0xf210 size:0x0019 C-string:'_ro__dot_0_do__do_'
//           (0$$$  codep:0x224c parp:0xf233 size:0x0036 C-string:'_ro_0_do__do__do_'
//      UNK_0xf26b  codep:0x224c parp:0xf26b size:0x000c C-string:'UNK_0xf26b'
//      UNK_0xf279  codep:0x224c parp:0xf279 size:0x001b C-string:'UNK_0xf279'
//      UNK_0xf296  codep:0x224c parp:0xf296 size:0x000b C-string:'UNK_0xf296'
//      UNK_0xf2a3  codep:0x224c parp:0xf2a3 size:0x000d C-string:'UNK_0xf2a3'
//      UNK_0xf2b2  codep:0x224c parp:0xf2b2 size:0x000c C-string:'UNK_0xf2b2'
//      UNK_0xf2c0  codep:0x224c parp:0xf2c0 size:0x000c C-string:'UNK_0xf2c0'
//            .ERR  codep:0x4a4f parp:0xf2d5 size:0x001c C-string:'_dot_ERR'
//           EINDE  codep:0x4a4f parp:0xf2fb size:0x001c C-string:'EINDE'
//      UNK_0xf319  codep:0x224c parp:0xf319 size:0x0068 C-string:'UNK_0xf319'
//      UNK_0xf383  codep:0x224c parp:0xf383 size:0x001a C-string:'UNK_0xf383'
//      UNK_0xf39f  codep:0x224c parp:0xf39f size:0x0034 C-string:'UNK_0xf39f'
//           (?.EQ  codep:0x224c parp:0xf3dd size:0x0079 C-string:'_ro__ask__dot_EQ'
//      UNK_0xf458  codep:0x224c parp:0xf458 size:0x0020 C-string:'UNK_0xf458'
//           =CARG  codep:0x224c parp:0xf482 size:0x0000 C-string:'_eq_CARG'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp__dash_AIN; // -AIN
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp__10_star_CARGO; // 10*CARGO
extern const unsigned short int pp__10_star_END; // 10*END
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
void C_ex_(); // C!
void _ex__3(); // !_3
void _plus__ex_(); // +!
void D_ex_(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void FILL_1(); // FILL_1
void _at_INST_dash_CLASS(); // @INST-CLASS
void _at_INST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void _ask__dash_NULL(); // ?-NULL
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void _ask_FIRST(); // ?FIRST
void INEXT(); // INEXT
void IFIND(); // IFIND
void _ex_COLOR(); // !COLOR
void BLT(); // BLT
void _gt_2FONT(); // >2FONT
void POS_dot_(); // POS.
void CTPOS_dot_(); // CTPOS.
void BEEPON(); // BEEPON
void _at_CRS(); // @CRS
void _ex_CRS(); // !CRS
void TTY_dash_SCR(); // TTY-SCR
void CTINIT(); // CTINIT
void _dot_TTY(); // .TTY
void _ask_MRC(); // ?MRC
void ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
void _i_KEY(); // 'KEY
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


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xefe5 = 0xefe5; // UNK_0xefe5 size: 20
// {0x03, 0x03, 0x00, 0x22, 0x03, 0x03, 0x80, 0x80, 0x03, 0x03, 0x00, 0x5d, 0x02, 0x02, 0x00, 0x60, 0x02, 0x02, 0x00, 0x90}




// 0xefd2: db 0x57 0x00 'W '

// ================================================
// 0xefd4: WORD 'UNK_0xefd6' codep=0x744d parp=0xefd6
// ================================================
// 0xefd6: db 0x14 0x11 0x02 '   '

// ================================================
// 0xefd9: WORD 'UNK_0xefdb' codep=0x744d parp=0xefdb
// ================================================
// 0xefdb: db 0x14 0x1f 0x02 '   '

// ================================================
// 0xefde: WORD 'UNK_0xefe0' codep=0x744d parp=0xefe0
// ================================================
// 0xefe0: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xefe3: WORD 'UNK_0xefe5' codep=0x1d29 parp=0xefe5
// ================================================
// 0xefe5: db 0x03 0x03 0x00 0x22 0x03 0x03 0x80 0x80 0x03 0x03 0x00 0x5d 0x02 0x02 0x00 0x60 0x02 0x02 0x00 0x90 '   "       ]   `    '

// ================================================
// 0xeff9: WORD '(TRIM' codep=0x224c parp=0xf003
// ================================================
// entry

void _ro_TRIM() // (TRIM
{
  unsigned short int a;
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex__3(); // !_3
  Push(4);
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xefe5); // UNK_0xefe5
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(a); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_LBLT); // LBLT
  _ex__3(); // !_3
  Push(a); // I
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_WBLT); // WBLT
  _ex__3(); // !_3
  Push(a); // R>
  Push(Pop()+2); // 2+
  Push(pp_ABLT); // ABLT
  _ex__3(); // !_3
  POS_dot_(); // POS.
  BLT(); // BLT
}


// ================================================
// 0xf033: WORD 'UNK_0xf035' codep=0x224c parp=0xf035
// ================================================

void UNK_0xf035() // UNK_0xf035
{
  PAD(); // PAD
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() != 0)
  {
    Push(0xfffc);
    Push(pp_XBLT); // XBLT
    _plus__ex_(); // +!
    PAD(); // PAD
    Push(Read16(regsp)); // DUP
    Push(Read8(Pop())&0xFF); // C@
    Push(Pop() + Pop()); // +
    Push(Read8(Pop())&0xFF); // C@
    Exec("EMIT"); // call of word 0x2731 '(EMIT)'
    Push(0xfffc);
    Push(pp_XBLT); // XBLT
    _plus__ex_(); // +!
    PAD(); // PAD
    Push(Read8(Pop())&0xFF); // C@
    Push(Pop()-1); // 1-
    PAD(); // PAD
    C_ex_(); // C!
    return;
  }
  BEEP(); // BEEP
}


// ================================================
// 0xf06b: WORD 'UNK_0xf06d' codep=0x224c parp=0xf06d
// ================================================

void UNK_0xf06d() // UNK_0xf06d
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
// 0xf08d: WORD 'UNK_0xf08f' codep=0x224c parp=0xf08f
// ================================================

void UNK_0xf08f() // UNK_0xf08f
{
  _at_CRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  SetColor("WHITE");
  SetColor("WHITE");
  SetColor("BROWN");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  PRINT("#", 1); // (.")
  UNK_0xf06d(); // UNK_0xf06d
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("#", 1); // (.")
  UNK_0xf06d(); // UNK_0xf06d
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf0b7: WORD 'UNK_0xf0b9' codep=0x224c parp=0xf0b9
// ================================================

void UNK_0xf0b9() // UNK_0xf0b9
{
  Push(pp__dash_AIN); // -AIN
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
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
  }
  _0_gt_(); // 0>
}


// ================================================
// 0xf0df: WORD '(#IN$' codep=0x224c parp=0xf0e9
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
  Push(0);
  FILL_1(); // FILL_1
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3

  label4:
  UNK_0xf08f(); // UNK_0xf08f
  _i_KEY(); // 'KEY
  Push(Read16(regsp)); // DUP
  Push(0x005a);
  Push(0x0080);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Push(0x00df);
    Push(Pop() & Pop()); // AND
  }
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
  UNK_0xf0b9(); // UNK_0xf0b9
  Push(Pop() & Pop()); // AND
  PAD(); // PAD
  Push(Read8(Pop())&0xFF); // C@
  Push(a); // I'
  _st_(); // <
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(b); // I
    Exec("EMIT"); // call of word 0x2731 '(EMIT)'
    Push(b); // I
    PAD(); // PAD
    Push(Read8(Pop())&0xFF); // C@
    Push(Pop()+1); // 1+
    Push(Read16(regsp)); // DUP
    PAD(); // PAD
    C_ex_(); // C!
    PAD(); // PAD
    Push(Pop() + Pop()); // +
    C_ex_(); // C!
  } else
  {
    Push(b); // I
    Push(8);
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      UNK_0xf035(); // UNK_0xf035
    } else
    {
      Push(b); // I
      Push(0x000d);
      Push((Pop()==Pop())?1:0); // =
      if (Pop() == 0) Push(1); else Push(0); // NOT
      Push(b); // I
      _0_gt_(); // 0>
      Push(Pop() & Pop()); // AND
      if (Pop() != 0)
      {
        BEEP(); // BEEP
      }
    }
  }
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
// 0xf1a3: WORD '(?ART' codep=0x224c parp=0xf1ad
// ================================================
// entry

void _ro__ask_ART() // (?ART
{
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001c);
    SWAP(); // SWAP
    IFIND(); // IFIND
    CDROP(); // CDROP
  } else
  {
    Pop(); // DROP
    Push(0);
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1db: WORD '(QUIT' codep=0x224c parp=0xf1e5
// ================================================
// entry

void _ro_QUIT() // (QUIT
{
  Push(1);
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
// 0xf206: WORD '(.0$$' codep=0x224c parp=0xf210
// ================================================
// entry

void _ro__dot_0_do__do_() // (.0$$
{
  PRINT("INSUFFICIENT FUNDS", 18); // (.")
  BEEP(); // BEEP
}


// ================================================
// 0xf229: WORD '(0$$$' codep=0x224c parp=0xf233
// ================================================
// entry

void _ro_0_do__do__do_() // (0$$$
{
  Push(1);
  _0MESS(); // 0MESS
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(1);
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
// 0xf269: WORD 'UNK_0xf26b' codep=0x224c parp=0xf26b
// ================================================

void UNK_0xf26b() // UNK_0xf26b
{
  UNK_0x3f3b("SENSORS");
}


// ================================================
// 0xf277: WORD 'UNK_0xf279' codep=0x224c parp=0xf279
// ================================================

void UNK_0xf279() // UNK_0xf279
{
  TTY_dash_SCR(); // TTY-SCR
  Push(0);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  UNK_0x3f3b("COMMUNICATIONS");
}


// ================================================
// 0xf294: WORD 'UNK_0xf296' codep=0x224c parp=0xf296
// ================================================

void UNK_0xf296() // UNK_0xf296
{
  UNK_0x3f3b("LASERS");
}


// ================================================
// 0xf2a1: WORD 'UNK_0xf2a3' codep=0x224c parp=0xf2a3
// ================================================

void UNK_0xf2a3() // UNK_0xf2a3
{
  UNK_0x3f3b("MISSILES");
}


// ================================================
// 0xf2b0: WORD 'UNK_0xf2b2' codep=0x224c parp=0xf2b2
// ================================================

void UNK_0xf2b2() // UNK_0xf2b2
{
  UNK_0x3f3b("ENGINES");
}


// ================================================
// 0xf2be: WORD 'UNK_0xf2c0' codep=0x224c parp=0xf2c0
// ================================================

void UNK_0xf2c0() // UNK_0xf2c0
{
  UNK_0x3f3b("SHIELDS");
}


// ================================================
// 0xf2cc: WORD '.ERR' codep=0x4a4f parp=0xf2d5
// ================================================

void _dot_ERR() // .ERR
{
  switch(Pop()) // .ERR
  {
  case 1:
    UNK_0xf26b(); // UNK_0xf26b
    break;
  case 2:
    UNK_0xf279(); // UNK_0xf279
    break;
  case 3:
    UNK_0xf296(); // UNK_0xf296
    break;
  case 4:
    UNK_0xf2a3(); // UNK_0xf2a3
    break;
  case 5:
    UNK_0xf2b2(); // UNK_0xf2b2
    break;
  case 6:
    UNK_0xf2c0(); // UNK_0xf2c0
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf2f1: WORD 'EINDE' codep=0x4a4f parp=0xf2fb
// ================================================

void EINDE() // EINDE
{
  switch(Pop()) // EINDE
  {
  case 1:
    Push(2);
    break;
  case 2:
    Push(3);
    break;
  case 3:
    Push(6);
    break;
  case 4:
    Push(5);
    break;
  case 5:
    Push(1);
    break;
  case 6:
    Push(4);
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf317: WORD 'UNK_0xf319' codep=0x224c parp=0xf319
// ================================================

void UNK_0xf319() // UNK_0xf319
{
  signed short int i, imax;
  SetColor("BLACK");
  ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
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
  ON_3(); // ON_3
  SetColor("PINK");
  _ex_COLOR(); // !COLOR
  _gt_2FONT(); // >2FONT
  BEEPON(); // BEEPON
  Push(9);
  Push(0);
    
  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(2);
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
  Push(7);
  Push(pp__n_AUX); // #AUX
  _ex__3(); // !_3
}


// ================================================
// 0xf381: WORD 'UNK_0xf383' codep=0x224c parp=0xf383
// ================================================

void UNK_0xf383() // UNK_0xf383
{
  EINDE(); // EINDE case
  Push(Pop()*2); // 2*
  Push(0x6400); // IFIELD(UNK_0xefd6)
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0080);
  Push(Pop() | Pop()); // OR
  SWAP(); // SWAP
  C_ex_(); // C!
}


// ================================================
// 0xf39d: WORD 'UNK_0xf39f' codep=0x224c parp=0xf39f
// ================================================

void UNK_0xf39f() // UNK_0xf39f
{
  Push(Read16(regsp)); // DUP
  EINDE(); // EINDE case
  Push(Pop()*2); // 2*
  Push(0x6400); // IFIELD(UNK_0xefd6)
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0064);
  _dash_(); // -
  ABS(); // ABS
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    UNK_0xf383(); // UNK_0xf383
    UNK_0xf319(); // UNK_0xf319
    Push(0);
    return;
  }
  Pop(); // DROP
  Push(1);
}


// ================================================
// 0xf3d3: WORD '(?.EQ' codep=0x224c parp=0xf3dd
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
  Push(0x6400); // IFIELD(UNK_0xefd6)
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0x0080);
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(a); // I
      _dot_ERR(); // .ERR case
      _dot_TTY(); // .TTY
      PRINT(": INOPERATIVE", 13); // (.")
      Push(0);
    } else
    {
      Push(a); // I
      UNK_0xf39f(); // UNK_0xf39f
    }
  } else
  {
    UNK_0x3f3b("SHIP IS NOT EQUIPPED WITH ");
    _dot_TTY(); // .TTY
    Push(a); // I
    _dot_ERR(); // .ERR case
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(0);
  }
  Push(a); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf456: WORD 'UNK_0xf458' codep=0x224c parp=0xf458
// ================================================

void UNK_0xf458() // UNK_0xf458
{
  Push(0);

  label3:
  _ask__dash_NULL(); // ?-NULL
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    _ask__dash_NULL(); // ?-NULL
    Push(Pop() | Pop()); // OR
    ICLOSE(); // ICLOSE
    INEXT(); // INEXT
    _ask_FIRST(); // ?FIRST
  } else
  {
    Push(1);
  }
  if (Pop() == 0) goto label3;
}


// ================================================
// 0xf478: WORD '=CARG' codep=0x224c parp=0xf482
// ================================================
// entry

void _eq_CARG() // =CARG
{
  Push2Words("NULL");
  Push(pp__10_star_END); // 10*END
  D_ex_(); // D!
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x640e); // IFIELD(UNK_0xefdb)
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  Push(Pop()+1); // 1+
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xf458(); // UNK_0xf458
  if (Pop() == 0) goto label1;
  Push(0);

  label5:
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x000b);
  Push((Pop()==Pop())?1:0); // =
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(0x0011);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(0x0030);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  IOPEN(); // IOPEN

  label4:
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(6);
  Push((Pop()==Pop())?1:0); // =
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x001a);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0x63fa); // IFIELD(INST-QTY)
    Push(Read16(Pop())); // @
    Push(0x000a);
    U_star_(); // U*
    Push(pp__10_star_END); // 10*END
    D_ex_(); // D!
  }
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push2Words("NULL");
  Push(0x63fc); // IFIELD(INST-X)
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
  Push(0);

  label6:
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(0x6432); // IFIELD(UNK_0xefe0)
  _ex__3(); // !_3
  Push(0x000a);
  U_star_(); // U*
  Push(pp__10_star_CARGO); // 10*CARGO
  D_ex_(); // D!
  ICLOSE(); // ICLOSE
}

// 0xf52e: db 0x4d 0x49 0x53 0x43 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x4d 0x49 0x53 0x43 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'MISC-___________________________for MISC---------- '
  