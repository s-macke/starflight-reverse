// ====== OVERLAY 'MISC-OV' ======
// store offset = 0xefc0
// overlay size   = 0x05a0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WEFD6  codep:0x744d parp:0xefd6 size:0x0003 C-string:'WEFD6'
//           WEFDB  codep:0x744d parp:0xefdb size:0x0003 C-string:'WEFDB'
//           WEFE0  codep:0x744d parp:0xefe0 size:0x0003 C-string:'WEFE0'
//           WEFE5  codep:0x1d29 parp:0xefe5 size:0x0014 C-string:'WEFE5'
//           (TRIM  codep:0x224c parp:0xf003 size:0x0030 C-string:'_ro_TRIM'
//           WF035  codep:0x224c parp:0xf035 size:0x0036 C-string:'WF035'
//           WF06D  codep:0x224c parp:0xf06d size:0x0020 C-string:'WF06D'
//           WF08F  codep:0x224c parp:0xf08f size:0x0028 C-string:'WF08F'
//           WF0B9  codep:0x224c parp:0xf0b9 size:0x0026 C-string:'WF0B9'
//           (#IN$  codep:0x224c parp:0xf0e9 size:0x00ba C-string:'_ro__n_IN_do_'
//           (?ART  codep:0x224c parp:0xf1ad size:0x002e C-string:'_ro__ask_ART'
//           (QUIT  codep:0x224c parp:0xf1e5 size:0x0021 C-string:'_ro_QUIT'
//           (.0$$  codep:0x224c parp:0xf210 size:0x0019 C-string:'_ro__dot_0_do__do_'
//           (0$$$  codep:0x224c parp:0xf233 size:0x0036 C-string:'_ro_0_do__do__do_'
//           WF26B  codep:0x224c parp:0xf26b size:0x000c C-string:'WF26B'
//           WF279  codep:0x224c parp:0xf279 size:0x001b C-string:'WF279'
//           WF296  codep:0x224c parp:0xf296 size:0x000b C-string:'WF296'
//           WF2A3  codep:0x224c parp:0xf2a3 size:0x000d C-string:'WF2A3'
//           WF2B2  codep:0x224c parp:0xf2b2 size:0x000c C-string:'WF2B2'
//           WF2C0  codep:0x224c parp:0xf2c0 size:0x000c C-string:'WF2C0'
//            .ERR  codep:0x4a4f parp:0xf2d5 size:0x001c C-string:'DrawERR'
//           EINDE  codep:0x4a4f parp:0xf2fb size:0x001c C-string:'EINDE'
//           WF319  codep:0x224c parp:0xf319 size:0x0068 C-string:'WF319'
//           WF383  codep:0x224c parp:0xf383 size:0x001a C-string:'WF383'
//           WF39F  codep:0x224c parp:0xf39f size:0x0034 C-string:'WF39F'
//           (?.EQ  codep:0x224c parp:0xf3dd size:0x0079 C-string:'_ro__ask__dot_EQ'
//           WF458  codep:0x224c parp:0xf458 size:0x0020 C-string:'WF458'
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
extern Color BLACK; // BLACK
extern Color BROWN; // BROWN
extern Color PINK; // PINK
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
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
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void FILL_1(); // FILL_1
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void Is_dash_NULL(); // ?-NULL
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void BLT(); // BLT
void _gt_2FONT(); // >2FONT
void POS_dot_(); // POS.
void CTPOS_dot_(); // CTPOS.
void BEEPON(); // BEEPON
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void TTY_dash_SCR(); // TTY-SCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void IsMRC(); // ?MRC
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
void GetDS(); // @DS
void _plus_BIT(); // +BIT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WEFE5 = 0xefe5; // WEFE5 size: 20
// {0x03, 0x03, 0x00, 0x22, 0x03, 0x03, 0x80, 0x80, 0x03, 0x03, 0x00, 0x5d, 0x02, 0x02, 0x00, 0x60, 0x02, 0x02, 0x00, 0x90}




// 0xefd2: db 0x57 0x00 'W '

// ================================================
// 0xefd4: WORD 'WEFD6' codep=0x744d parp=0xefd6
// ================================================
IFieldType WEFD6 = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xefd9: WORD 'WEFDB' codep=0x744d parp=0xefdb
// ================================================
IFieldType WEFDB = {SHIPIDX, 0x1f, 0x02};

// ================================================
// 0xefde: WORD 'WEFE0' codep=0x744d parp=0xefe0
// ================================================
IFieldType WEFE0 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xefe3: WORD 'WEFE5' codep=0x1d29 parp=0xefe5
// ================================================
// 0xefe5: db 0x03 0x03 0x00 0x22 0x03 0x03 0x80 0x80 0x03 0x03 0x00 0x5d 0x02 0x02 0x00 0x60 0x02 0x02 0x00 0x90 '   "       ]   `    '

// ================================================
// 0xeff9: WORD '(TRIM' codep=0x224c parp=0xf003 params=3 returns=0
// ================================================
// entry

void _ro_TRIM() // (TRIM
{
  unsigned short int a;
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  Push(Pop() * 4 + pp_WEFE5); //  4 * WEFE5 +
  a = Pop(); // >R
  Push(Read16(a)&0xFF); // I C@
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(Read16(a + 1)&0xFF); // I 1+ C@
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(a + 2); // R> 2+
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  POS_dot_(); // POS.
  BLT(); // BLT
}


// ================================================
// 0xf033: WORD 'WF035' codep=0x224c parp=0xf035 params=0 returns=0
// ================================================

void WF035() // WF035
{
  PAD(); // PAD
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(0xfffc);
    Push(pp_XBLT); // XBLT
    _plus__ex__2(); // +!_2
    PAD(); // PAD
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop())&0xFF); //  C@
    Push(Pop() + Pop()); // +
    Push(Read16(Pop())&0xFF); //  C@
    Exec("EMIT"); // call of word 0x2731 '(EMIT)'
    Push(0xfffc);
    Push(pp_XBLT); // XBLT
    _plus__ex__2(); // +!_2
    PAD(); // PAD
    Push((Read16(Pop())&0xFF) - 1); //  C@ 1-
    PAD(); // PAD
    C_ex_(); // C!
    return;
  }
  BEEP(); // BEEP
}


// ================================================
// 0xf06b: WORD 'WF06D' codep=0x224c parp=0xf06d
// ================================================

void WF06D() // WF06D
{
  Push(0x01f4); Push(0x0000);
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    _2OVER(); // 2OVER
    D_gt_(); // D>
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf08d: WORD 'WF08F' codep=0x224c parp=0xf08f
// ================================================

void WF08F() // WF08F
{
  GetCRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  GetColor(WHITE);
  GetColor(WHITE);
  GetColor(BROWN);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  PRINT("#", 1); // (.")
  WF06D(); // WF06D
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("#", 1); // (.")
  WF06D(); // WF06D
  StoreCRS(); // !CRS
}


// ================================================
// 0xf0b7: WORD 'WF0B9' codep=0x224c parp=0xf0b9 params=1 returns=1
// ================================================

void WF0B9() // WF0B9
{
  Push(Read16(pp__dash_AIN)); // -AIN @
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(Pop()==Read16(pp__dash_AIN)?1:0); //  -AIN @ =
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
  unsigned short int a, b;
  a = Pop(); // >R
  PAD(); // PAD
  Push(a + 1); // I 1+
  Push(0);
  FILL_1(); // FILL_1
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  do
  {
    WF08F(); // WF08F
    _i_KEY(); // 'KEY
    Push(Read16(regsp)); // DUP
    Push(0x005a);
    Push(0x0080);
    WITHIN(); // WITHIN
    if (Pop() != 0)
    {
      Push(Pop() & 0x00df); //  0x00df AND
    }
    b = Pop(); // >R
    Push(b); // I
    Push(0x0021);
    Push(0x005b);
    WITHIN(); // WITHIN
    Push(b==Read16(cc_BL)?1:0); // I BL =
    PAD(); // PAD
    Push(Read16(Pop())&0xFF); //  C@
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    Push(Pop() | Pop()); // OR
    Push(b); // I
    WF0B9(); // WF0B9
    Push(Pop() & Pop()); // AND
    PAD(); // PAD
    Push(Read16(Pop())&0xFF); //  C@
    Push(a); // I'
    _st_(); // <
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(b); // I
      Exec("EMIT"); // call of word 0x2731 '(EMIT)'
      Push(b); // I
      PAD(); // PAD
      Push((Read16(Pop())&0xFF) + 1); //  C@ 1+
      Push(Read16(regsp)); // DUP
      PAD(); // PAD
      C_ex_(); // C!
      PAD(); // PAD
      Push(Pop() + Pop()); // +
      C_ex_(); // C!
    } else
    {
      Push(b==8?1:0); // I 8 =
      if (Pop() != 0)
      {
        WF035(); // WF035
      } else
      {
        Push(!(b==0x000d?1:0)); // I 0x000d = NOT
        Push(b); // I
        _0_gt_(); // 0>
        Push(Pop() & Pop()); // AND
        if (Pop() != 0)
        {
          BEEP(); // BEEP
        }
      }
    }
    Push(b==0x000d?1:0); // R> 0x000d =
    PAD(); // PAD
    Push(Read16(Pop())&0xFF); //  C@
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
  } while(Pop() == 0);
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
// 0xf1db: WORD '(QUIT' codep=0x224c parp=0xf1e5 params=0 returns=0
// ================================================
// entry

void _ro_QUIT() // (QUIT
{
  Push(1);
  _0MESS(); // 0MESS
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  Push(0x003f);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("[ QUIT ]", 8); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xf206: WORD '(.0$$' codep=0x224c parp=0xf210 params=0 returns=0
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
  StoreCRS(); // !CRS
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x09c4); Push(0x0000);
  D_plus_(); // D+
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    _2OVER(); // 2OVER
    D_gt_(); // D>
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
  _ro_QUIT(); // (QUIT
}


// ================================================
// 0xf269: WORD 'WF26B' codep=0x224c parp=0xf26b params=0 returns=2
// ================================================

void WF26B() // WF26B
{
  SET_STR_AS_PARAM("SENSORS");
}


// ================================================
// 0xf277: WORD 'WF279' codep=0x224c parp=0xf279 params=0 returns=2
// ================================================

void WF279() // WF279
{
  TTY_dash_SCR(); // TTY-SCR
  Push(0);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  SET_STR_AS_PARAM("COMMUNICATIONS");
}


// ================================================
// 0xf294: WORD 'WF296' codep=0x224c parp=0xf296 params=0 returns=2
// ================================================

void WF296() // WF296
{
  SET_STR_AS_PARAM("LASERS");
}


// ================================================
// 0xf2a1: WORD 'WF2A3' codep=0x224c parp=0xf2a3 params=0 returns=2
// ================================================

void WF2A3() // WF2A3
{
  SET_STR_AS_PARAM("MISSILES");
}


// ================================================
// 0xf2b0: WORD 'WF2B2' codep=0x224c parp=0xf2b2 params=0 returns=2
// ================================================

void WF2B2() // WF2B2
{
  SET_STR_AS_PARAM("ENGINES");
}


// ================================================
// 0xf2be: WORD 'WF2C0' codep=0x224c parp=0xf2c0 params=0 returns=2
// ================================================

void WF2C0() // WF2C0
{
  SET_STR_AS_PARAM("SHIELDS");
}


// ================================================
// 0xf2cc: WORD '.ERR' codep=0x4a4f parp=0xf2d5
// ================================================

void DrawERR() // .ERR
{
  switch(Pop()) // .ERR
  {
  case 1:
    WF26B(); // WF26B
    break;
  case 2:
    WF279(); // WF279
    break;
  case 3:
    WF296(); // WF296
    break;
  case 4:
    WF2A3(); // WF2A3
    break;
  case 5:
    WF2B2(); // WF2B2
    break;
  case 6:
    WF2C0(); // WF2C0
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
// 0xf317: WORD 'WF319' codep=0x224c parp=0xf319
// ================================================

void WF319() // WF319
{
  unsigned short int i, imax;
  GetColor(BLACK);
  ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
  CTINIT(); // CTINIT
  DrawERR(); // .ERR case
  Push(0x0079);
  OVER(); // OVER
  Push(Pop() * 2); //  2*
  _dash_(); // -
  Push(0x00b4);
  POS_dot_(); // POS.
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  GetColor(PINK);
  StoreCOLOR(); // !COLOR
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
    Push((Pop() + 2) * 0x03e8); //  2+ 0x03e8 *
    TONE(); // TONE
    Push(0x005a);
    Push(0x009b);
    POS_dot_(); // POS.
    PRINT("MALFUNCTION", 11); // (.")
    Push(0x00fa);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

  BEEPOFF(); // BEEPOFF
  Push(7);
  Push(pp__n_AUX); // #AUX
  Store_3(); // !_3
}


// ================================================
// 0xf381: WORD 'WF383' codep=0x224c parp=0xf383
// ================================================

void WF383() // WF383
{
  EINDE(); // EINDE case
  Push((Pop() * 2 + (0x63ef+WEFD6.offset)) + 1); //  2* WEFD6<IFIELD> + 1+
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF | 0x0080); //  C@ 0x0080 OR
  SWAP(); // SWAP
  C_ex_(); // C!
}


// ================================================
// 0xf39d: WORD 'WF39F' codep=0x224c parp=0xf39f
// ================================================

void WF39F() // WF39F
{
  Push(Read16(regsp)); // DUP
  EINDE(); // EINDE case
  Push((Read16(Pop() * 2 + (0x63ef+WEFD6.offset))&0xFF) - 0x0064); //  2* WEFD6<IFIELD> + C@ 0x0064 -
  ABS(); // ABS
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    WF383(); // WF383
    WF319(); // WF319
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
  Push(Read16((Pop() * 2 + (0x63ef+WEFD6.offset)) + 1)&0xFF); //  2* WEFD6<IFIELD> + 1+ C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Pop() & 0x0080); //  0x0080 AND
    if (Pop() != 0)
    {
      Push(a); // I
      DrawERR(); // .ERR case
      DrawTTY(); // .TTY
      PRINT(": INOPERATIVE", 13); // (.")
      Push(0);
    } else
    {
      Push(a); // I
      WF39F(); // WF39F
    }
  } else
  {
    SET_STR_AS_PARAM("SHIP IS NOT EQUIPPED WITH ");
    DrawTTY(); // .TTY
    Push(a); // I
    DrawERR(); // .ERR case
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(0);
  }
  Push(a); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf456: WORD 'WF458' codep=0x224c parp=0xf458 params=0 returns=1
// ================================================

void WF458() // WF458
{
  Push(0);
  do
  {
    Is_dash_NULL(); // ?-NULL
    if (Pop() != 0)
    {
      IOPEN(); // IOPEN
      Is_dash_NULL(); // ?-NULL
      Push(Pop() | Pop()); // OR
      ICLOSE(); // ICLOSE
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
    } else
    {
      Push(1);
    }
  } while(Pop() == 0);
}


// ================================================
// 0xf478: WORD '=CARG' codep=0x224c parp=0xf482 params=0 returns=0
// ================================================
// entry

void _eq_CARG() // =CARG
{
  Push2Words("NULL");
  Push(pp__10_star_END); // 10*END
  StoreD(); // D!
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+WEFDB.offset)); // WEFDB<IFIELD> @
  _plus_BIT(); // +BIT
  Push((Pop() + 1) * 0x01f4); //  1+ 0x01f4 *
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  WF458(); // WF458
  if (Pop() != 0)
  {
    Push(0);
    do
    {
      GetINST_dash_CLASS(); // @INST-CLASS
      Push(Pop()==0x000b?1:0); //  0x000b =
      GetINST_dash_SPECIES(); // @INST-SPECIES
      Push(!(Pop()==0x0011?1:0)); //  0x0011 = NOT
      Push(Pop() & Pop()); // AND
      GetINST_dash_SPECIES(); // @INST-SPECIES
      Push(!(Pop()==0x0030?1:0)); //  0x0030 = NOT
      Push(Pop() & Pop()); // AND
      if (Pop() != 0)
      {
        IOPEN(); // IOPEN
        do
        {
          GetINST_dash_SPECIES(); // @INST-SPECIES
          Push(Pop()==6?1:0); //  6 =
          GetINST_dash_CLASS(); // @INST-CLASS
          Push(Pop()==0x001a?1:0); //  0x001a =
          Push(Pop() & Pop()); // AND
          if (Pop() != 0)
          {
            Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
            Push(0x000a);
            U_star_(); // U*
            Push(pp__10_star_END); // 10*END
            StoreD(); // D!
          }
          Push(Pop() + Read16(0x63ef+INST_dash_QTY.offset)); //  INST-QTY<IFIELD> @ +
          Push2Words("NULL");
          Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
          StoreD(); // D!
          INEXT(); // INEXT
          IsFIRST(); // ?FIRST
        } while(Pop() == 0);
        ICLOSE(); // ICLOSE
      }
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
    } while(Pop() == 0);
  } else
  {
    Push(0);
  }
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(0x63ef+WEFE0.offset); // WEFE0<IFIELD>
  Store_3(); // !_3
  Push(0x000a);
  U_star_(); // U*
  Push(pp__10_star_CARGO); // 10*CARGO
  StoreD(); // D!
  ICLOSE(); // ICLOSE
}

// 0xf52e: db 0x4d 0x49 0x53 0x43 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x4d 0x49 0x53 0x43 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'MISC-___________________________for MISC---------- '

