// ====== OVERLAY 'MISC-OV' ======
// store offset = 0xee30
// overlay size   = 0x0730

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WEE46  codep:0x1d29 wordp:0xee46 size:0x0002 C-string:'WEE46'
//           WEE4A  codep:0x224c wordp:0xee4a size:0x001c C-string:'WEE4A'
//           WEE68  codep:0x224c wordp:0xee68 size:0x000c C-string:'WEE68'
//           WEE76  codep:0x224c wordp:0xee76 size:0x001b C-string:'WEE76'
//           WEE93  codep:0x224c wordp:0xee93 size:0x000b C-string:'WEE93'
//           WEEA0  codep:0x224c wordp:0xeea0 size:0x000d C-string:'WEEA0'
//           WEEAF  codep:0x224c wordp:0xeeaf size:0x000c C-string:'WEEAF'
//           WEEBD  codep:0x224c wordp:0xeebd size:0x000c C-string:'WEEBD'
//            .ERR  codep:0x4b3b wordp:0xeed2 size:0x001c C-string:'DrawERR'
//           EINDE  codep:0x4b3b wordp:0xeef8 size:0x001c C-string:'EINDE'
//           WEF16  codep:0x7420 wordp:0xef16 size:0x0003 C-string:'WEF16'
//           WEF1B  codep:0x7420 wordp:0xef1b size:0x0003 C-string:'WEF1B'
//           WEF20  codep:0x7420 wordp:0xef20 size:0x0003 C-string:'WEF20'
//           WEF25  codep:0x7420 wordp:0xef25 size:0x0003 C-string:'WEF25'
//            SCNT  codep:0x7420 wordp:0xef31 size:0x0003 C-string:'SCNT'
//           WEF36  codep:0x224c wordp:0xef36 size:0x001a C-string:'WEF36'
//           WEF52  codep:0x224c wordp:0xef52 size:0x001a C-string:'WEF52'
//           WEF6E  codep:0x224c wordp:0xef6e size:0x0036 C-string:'WEF6E'
//           WEFA6  codep:0x224c wordp:0xefa6 size:0x0006 C-string:'WEFA6'
//           WEFAE  codep:0x224c wordp:0xefae size:0x0018 C-string:'WEFAE'
//           WEFC8  codep:0x224c wordp:0xefc8 size:0x0028 C-string:'WEFC8'
//           WEFF2  codep:0x1d29 wordp:0xeff2 size:0x0014 C-string:'WEFF2'
//           (TRIM  codep:0x224c wordp:0xf010 size:0x0030 C-string:'_ro_TRIM'
//           WF042  codep:0x224c wordp:0xf042 size:0x0034 C-string:'WF042'
//           WF078  codep:0x224c wordp:0xf078 size:0x0020 C-string:'WF078'
//           WF09A  codep:0x224c wordp:0xf09a size:0x0024 C-string:'WF09A'
//           WF0C0  codep:0x224c wordp:0xf0c0 size:0x0026 C-string:'WF0C0'
//           (#IN$  codep:0x224c wordp:0xf0f0 size:0x00ba C-string:'_ro__n_IN_do_'
//           (?ART  codep:0x224c wordp:0xf1b4 size:0x0052 C-string:'_ro__ask_ART'
//           WF208  codep:0x224c wordp:0xf208 size:0x0036 C-string:'WF208'
//            RSTE  codep:0x224c wordp:0xf247 size:0x001a C-string:'RSTE'
//           (QUIT  codep:0x224c wordp:0xf26b size:0x0021 C-string:'_ro_QUIT'
//           (.0$$  codep:0x224c wordp:0xf296 size:0x0019 C-string:'_ro__dot_0_do__do_'
//           (0$$$  codep:0x224c wordp:0xf2b9 size:0x0036 C-string:'_ro_0_do__do__do_'
//           WF2F1  codep:0x224c wordp:0xf2f1 size:0x0068 C-string:'WF2F1'
//           WF35B  codep:0x224c wordp:0xf35b size:0x003a C-string:'WF35B'
//           (?.EQ  codep:0x224c wordp:0xf39f size:0x007b C-string:'_ro__ask__dot_EQ'
//           WF41C  codep:0x224c wordp:0xf41c size:0x0020 C-string:'WF41C'
//           =CARG  codep:0x224c wordp:0xf446 size:0x00ac C-string:'_eq_CARG'
//           TV?AR  codep:0x224c wordp:0xf4fc size:0x0000 C-string:'TV_ask_AR'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
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
extern Color BLACK; // BLACK
extern Color BROWN; // BROWN
extern Color PINK; // PINK
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QT; // INST-QT
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
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void FILL_2(); // FILL_2
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void CDROP(); // CDROP
void Is_dash_NULL(); // ?-NULL
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IFIND(); // IFIND
void SAVE_dash_OV(); // SAVE-OV
void StoreCOLOR(); // !COLOR
void _gt_2FONT(); // >2FONT
void POS_dot_(); // POS.
void CTPOS_dot_(); // CTPOS.
void BEEPON_2(); // BEEPON_2
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void POLY_dash_ER(); // POLY-ER
void TTY_dash_SCR(); // TTY-SCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void IsMRC(); // ?MRC
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
void GetDS(); // @DS
void _plus_BIT(); // +BIT
void L_at_PIXEL(); // L@PIXEL
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WEE46 = 0xee46; // WEE46 size: 2
// {0x00, 0x00}

const unsigned short int pp_WEFF2 = 0xeff2; // WEFF2 size: 20
// {0x03, 0x03, 0x00, 0x22, 0x03, 0x03, 0x80, 0x80, 0x03, 0x03, 0x00, 0x5d, 0x02, 0x02, 0x00, 0x60, 0x02, 0x02, 0x00, 0x90}




// 0xee42: db 0x72 0x00 'r '

// ================================================
// 0xee44: WORD 'WEE46' codep=0x1d29 wordp=0xee46
// ================================================
// 0xee46: db 0x00 0x00 '  '

// ================================================
// 0xee48: WORD 'WEE4A' codep=0x224c wordp=0xee4a
// ================================================

void WEE4A() // WEE4A
{
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  Push(4);
  Push(Read16(regsp)); // DUP
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(5);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  BLT(); // BLT
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xee66: WORD 'WEE68' codep=0x224c wordp=0xee68 params=0 returns=2
// ================================================

void WEE68() // WEE68
{
  SET_STR_AS_PARAM("SENSORS");
}


// ================================================
// 0xee74: WORD 'WEE76' codep=0x224c wordp=0xee76
// ================================================

void WEE76() // WEE76
{
  TTY_dash_SCR(); // TTY-SCR
  Push(0);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  SET_STR_AS_PARAM("COMMUNICATIONS");
}


// ================================================
// 0xee91: WORD 'WEE93' codep=0x224c wordp=0xee93 params=0 returns=2
// ================================================

void WEE93() // WEE93
{
  SET_STR_AS_PARAM("LASERS");
}


// ================================================
// 0xee9e: WORD 'WEEA0' codep=0x224c wordp=0xeea0 params=0 returns=2
// ================================================

void WEEA0() // WEEA0
{
  SET_STR_AS_PARAM("MISSILES");
}


// ================================================
// 0xeead: WORD 'WEEAF' codep=0x224c wordp=0xeeaf params=0 returns=2
// ================================================

void WEEAF() // WEEAF
{
  SET_STR_AS_PARAM("ENGINES");
}


// ================================================
// 0xeebb: WORD 'WEEBD' codep=0x224c wordp=0xeebd params=0 returns=2
// ================================================

void WEEBD() // WEEBD
{
  SET_STR_AS_PARAM("SHIELDS");
}


// ================================================
// 0xeec9: WORD '.ERR' codep=0x4b3b wordp=0xeed2
// ================================================

void DrawERR() // .ERR
{
  switch(Pop()) // .ERR
  {
  case 1:
    WEE68(); // WEE68
    break;
  case 2:
    WEE76(); // WEE76
    break;
  case 3:
    WEE93(); // WEE93
    break;
  case 4:
    WEEA0(); // WEEA0
    break;
  case 5:
    WEEAF(); // WEEAF
    break;
  case 6:
    WEEBD(); // WEEBD
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xeeee: WORD 'EINDE' codep=0x4b3b wordp=0xeef8
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
// 0xef14: WORD 'WEF16' codep=0x7420 wordp=0xef16
// ================================================
IFieldType WEF16 = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xef19: WORD 'WEF1B' codep=0x7420 wordp=0xef1b
// ================================================
// orphan
IFieldType WEF1B = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xef1e: WORD 'WEF20' codep=0x7420 wordp=0xef20
// ================================================
IFieldType WEF20 = {SHIPIDX, 0x1f, 0x02};

// ================================================
// 0xef23: WORD 'WEF25' codep=0x7420 wordp=0xef25
// ================================================
IFieldType WEF25 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xef28: WORD 'SCNT' codep=0x7420 wordp=0xef31
// ================================================
IFieldType SCNT = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xef34: WORD 'WEF36' codep=0x224c wordp=0xef36
// ================================================

void WEF36() // WEF36
{
  EINDE(); // EINDE case
  Push((Pop() * 2 + (0x65e1+WEF16.offset)) + 1); //  2* WEF16<IFIELD> + 1+
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF | 0x0080); //  C@ 0x0080 OR
  SWAP(); // SWAP
  C_ex__2(); // C!_2
}


// ================================================
// 0xef50: WORD 'WEF52' codep=0x224c wordp=0xef52
// ================================================

void WEF52() // WEF52
{
  EINDE(); // EINDE case
  Push((Pop() * 2 + (0x65e1+WEF16.offset)) + 1); //  2* WEF16<IFIELD> + 1+
  Push(Read16(regsp)); // DUP
  Push((Read16(Pop())&0xFF) & 0x007f); //  C@ 0x007f AND
  SWAP(); // SWAP
  C_ex__2(); // C!_2
}


// ================================================
// 0xef6c: WORD 'WEF6E' codep=0x224c wordp=0xef6e
// ================================================

void WEF6E() // WEF6E
{
  unsigned short int i, imax;
  Push2Words("*PLIST");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x00f9);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  CTINIT(); // CTINIT
  Push(Read16(pp__i__dot_HUFF)); // '.HUFF @
  MODULE(); // MODULE
  Push(3);
  _star_CLOSE(); // *CLOSE
  Push(pp_WEE46); // WEE46
  ON_2(); // ON_2
  SAVE_dash_OV(); // SAVE-OV
  Push(7);
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    WEF36(); // WEF36
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xefa4: WORD 'WEFA6' codep=0x224c wordp=0xefa6 params=0 returns=0
// ================================================

void WEFA6() // WEFA6
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xefac: WORD 'WEFAE' codep=0x224c wordp=0xefae params=0 returns=0
// ================================================

void WEFAE() // WEFAE
{
  WEFA6(); // WEFA6
  Push(Read16(0x65e1+SCNT.offset)); // SCNT<IFIELD> @
  Push(0x0dac);
  _gt_(); // >
  if (Pop() != 0)
  {
    BEEP(); // BEEP
    WEF6E(); // WEF6E
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefc6: WORD 'WEFC8' codep=0x224c wordp=0xefc8
// ================================================

void WEFC8() // WEFC8
{
  WEFA6(); // WEFA6
  Push(Read16(regsp)); // DUP
  EINDE(); // EINDE case
  Push((Read16((Pop() * 2 + (0x65e1+WEF16.offset)) + 1)&0xFF) & 7); //  2* WEF16<IFIELD> + 1+ C@ 7 AND
  SWAP(); // SWAP
  Push(Pop() + 2); //  2 +
  _gt_(); // >
  if (Pop() != 0)
  {
    BEEP(); // BEEP
    WEF6E(); // WEF6E
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeff0: WORD 'WEFF2' codep=0x1d29 wordp=0xeff2
// ================================================
// 0xeff2: db 0x03 0x03 0x00 0x22 0x03 0x03 0x80 0x80 0x03 0x03 0x00 0x5d 0x02 0x02 0x00 0x60 0x02 0x02 0x00 0x90 '   "       ]   `    '

// ================================================
// 0xf006: WORD '(TRIM' codep=0x224c wordp=0xf010
// ================================================
// entry

void _ro_TRIM() // (TRIM
{
  unsigned short int a;
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_2(); // !_2
  Push(Pop() * 4 + pp_WEFF2); //  4 * WEFF2 +
  a = Pop(); // >R
  Push(Read16(a)&0xFF); // I C@
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  Push(Read16(a + 1)&0xFF); // I 1+ C@
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(a + 2); // R> 2+
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  POS_dot_(); // POS.
  BLT(); // BLT
}


// ================================================
// 0xf040: WORD 'WF042' codep=0x224c wordp=0xf042 params=0 returns=0
// ================================================

void WF042() // WF042
{
  PAD(); // PAD
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(Read16(pp_XBLT) * 2); // XBLT @ 2*
    Push(Read16(pp_YBLT)); // YBLT @
    L_at_PIXEL(); // L@PIXEL
    Push(0xfffc);
    Push(pp_XBLT); // XBLT
    _plus__ex__2(); // +!_2
    Push(1);
    SWAP(); // SWAP
    POLY_dash_ER(); // POLY-ER
    PAD(); // PAD
    Push((Read16(Pop())&0xFF) - 1); //  C@ 1-
    PAD(); // PAD
    C_ex__2(); // C!_2
    return;
  }
  BEEP(); // BEEP
}


// ================================================
// 0xf076: WORD 'WF078' codep=0x224c wordp=0xf078
// ================================================

void WF078() // WF078
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
// 0xf098: WORD 'WF09A' codep=0x224c wordp=0xf09a
// ================================================

void WF09A() // WF09A
{
  GetCRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  GetColor(WHITE);
  GetColor(WHITE);
  GetColor(BROWN);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  WEE4A(); // WEE4A
  WF078(); // WF078
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  WEE4A(); // WEE4A
  WF078(); // WF078
  StoreCRS(); // !CRS
}


// ================================================
// 0xf0be: WORD 'WF0C0' codep=0x224c wordp=0xf0c0 params=1 returns=1
// ================================================

void WF0C0() // WF0C0
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
// 0xf0e6: WORD '(#IN$' codep=0x224c wordp=0xf0f0
// ================================================
// entry

void _ro__n_IN_do_() // (#IN$
{
  unsigned short int a, b;
  a = Pop(); // >R
  PAD(); // PAD
  Push(a + 1); // I 1+
  Push(0);
  FILL_2(); // FILL_2
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  do
  {
    WF09A(); // WF09A
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
    WF0C0(); // WF0C0
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
      C_ex__2(); // C!_2
      PAD(); // PAD
      Push(Pop() + Pop()); // +
      C_ex__2(); // C!_2
    } else
    {
      Push(b==8?1:0); // I 8 =
      if (Pop() != 0)
      {
        WF042(); // WF042
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
// 0xf1aa: WORD '(?ART' codep=0x224c wordp=0xf1b4
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
  Push(8);
  Push(0x000f);
  WITHIN(); // WITHIN
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0x0037);
  } else
  {
    Push(0x000f);
  }
  IFIND(); // IFIND
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Pop(); // DROP
    IOPEN(); // IOPEN
    Push(0x001c);
    Push(Read16(a)); // R@
    IFIND(); // IFIND
    CDROP(); // CDROP
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf206: WORD 'WF208' codep=0x224c wordp=0xf208 params=0 returns=0
// ================================================

void WF208() // WF208
{
  Push(Read16(pp_WEE46)==0?1:0); // WEE46 @ 0=
  Push(0);
  Push(4);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(Read16(regsp)); // DUP
  Push(Pop()==6?1:0); //  6 =
  if (Pop() != 0)
  {
    WEFAE(); // WEFAE
    return;
  }
  Push(Read16(regsp)); // DUP
  Push(3);
  Push(5);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Push(Read16(regsp)); // DUP
  WEFC8(); // WEFC8
}


// ================================================
// 0xf23e: WORD 'RSTE' codep=0x224c wordp=0xf247
// ================================================
// entry

void RSTE() // RSTE
{
  unsigned short int i, imax;
  WEFA6(); // WEFA6
  Push(7);
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    WEF52(); // WEF52
    i++;
  } while(i<imax); // (LOOP)

  ICLOSE(); // ICLOSE
  Push(pp_WEE46); // WEE46
  _099(); // 099
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xf261: WORD '(QUIT' codep=0x224c wordp=0xf26b
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
// 0xf28c: WORD '(.0$$' codep=0x224c wordp=0xf296 params=0 returns=0
// ================================================
// entry

void _ro__dot_0_do__do_() // (.0$$
{
  PRINT("INSUFFICIENT FUNDS", 18); // (.")
  BEEP(); // BEEP
}


// ================================================
// 0xf2af: WORD '(0$$$' codep=0x224c wordp=0xf2b9
// ================================================
// entry

void _ro_0_do__do__do_() // (0$$$
{
  Push(1);
  _0MESS(); // 0MESS
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
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
// 0xf2ef: WORD 'WF2F1' codep=0x224c wordp=0xf2f1
// ================================================

void WF2F1() // WF2F1
{
  unsigned short int i, imax;
  GetColor(BLACK);
  ERASE_dash_A(); // ERASE-A
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
  ON_2(); // ON_2
  GetColor(PINK);
  StoreCOLOR(); // !COLOR
  _gt_2FONT(); // >2FONT
  BEEPON_2(); // BEEPON_2
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
  Store_2(); // !_2
}


// ================================================
// 0xf359: WORD 'WF35B' codep=0x224c wordp=0xf35b
// ================================================

void WF35B() // WF35B
{
  Push(Read16(regsp)); // DUP
  EINDE(); // EINDE case
  Push((Read16(Pop() * 2 + (0x65e1+WEF16.offset))&0xFF) - 0x0064); //  2* WEF16<IFIELD> + C@ 0x0064 -
  ABS(); // ABS
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  _gt_(); // >
  Push(Pop() | Read16(pp_WEE46)); //  WEE46 @ OR
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    WEF36(); // WEF36
    WF2F1(); // WF2F1
    Push(0);
    return;
  }
  Pop(); // DROP
  Push(1);
}


// ================================================
// 0xf395: WORD '(?.EQ' codep=0x224c wordp=0xf39f
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
  Push(Read16((Pop() * 2 + (0x65e1+WEF16.offset)) + 1)&0xFF); //  2* WEF16<IFIELD> + 1+ C@
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
      WF208(); // WF208
      WF35B(); // WF35B
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
// 0xf41a: WORD 'WF41C' codep=0x224c wordp=0xf41c params=0 returns=1
// ================================================

void WF41C() // WF41C
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
// 0xf43c: WORD '=CARG' codep=0x224c wordp=0xf446 params=0 returns=0
// ================================================
// entry

void _eq_CARG() // =CARG
{
  Push2Words("NULL");
  Push(pp__10_star_END); // 10*END
  StoreD(); // D!
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+WEF20.offset)); // WEF20<IFIELD> @
  _plus_BIT(); // +BIT
  Push((Pop() + 1) * 0x01f4); //  1+ 0x01f4 *
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  WF41C(); // WF41C
  if (Pop() != 0)
  {
    Push(0);
    do
    {
      GetINST_dash_C(); // @INST-C
      Push(Pop()==0x000b?1:0); //  0x000b =
      GetINST_dash_S(); // @INST-S
      Push(!(Pop()==0x0011?1:0)); //  0x0011 = NOT
      Push(Pop() & Pop()); // AND
      GetINST_dash_S(); // @INST-S
      Push(!(Pop()==0x0030?1:0)); //  0x0030 = NOT
      Push(Pop() & Pop()); // AND
      if (Pop() != 0)
      {
        IOPEN(); // IOPEN
        do
        {
          GetINST_dash_S(); // @INST-S
          Push(Pop()==6?1:0); //  6 =
          GetINST_dash_C(); // @INST-C
          Push(Pop()==0x001a?1:0); //  0x001a =
          Push(Pop() & Pop()); // AND
          if (Pop() != 0)
          {
            Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
            Push(0x000a);
            U_star_(); // U*
            Push(pp__10_star_END); // 10*END
            StoreD(); // D!
          }
          Push(Pop() + Read16(0x65e1+INST_dash_QT.offset)); //  INST-QT<IFIELD> @ +
          Push2Words("NULL");
          Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
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
  Push(0x65e1+WEF25.offset); // WEF25<IFIELD>
  Store_2(); // !_2
  Push(0x000a);
  U_star_(); // U*
  Push(pp__10_star_CARG); // 10*CARG
  StoreD(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4f2: WORD 'TV?AR' codep=0x224c wordp=0xf4fc
// ================================================
// entry

void TV_ask_AR() // TV?AR
{
  unsigned short int a;
  a = Pop(); // >R
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(Read16(a)); // R@
  Push(0x0028);
  _st_(); // <
  Push(Read16(a)); // R@
  Push(8);
  Push(0x000f);
  WITHIN(); // WITHIN
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0x0037);
  } else
  {
    Push(0x000f);
  }
  IFIND(); // IFIND
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Pop(); // DROP
    IOPEN(); // IOPEN
    Push(0x001c);
    Push(Read16(a)); // R@
    IFIND(); // IFIND
    ICLOSE(); // ICLOSE
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push(a); // R>
  Pop(); // DROP
}

// 0xf54e: db 0x4d 0x49 0x53 0x43 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'MISC-_____________ '

