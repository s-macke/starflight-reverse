// ====== OVERLAY 'HEAL-OV' ======
// store offset = 0xf090
// overlay size   = 0x04d0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF0A6  codep:0x224c wordp:0xf0a6 size:0x0014 C-string:'WF0A6'
//           WF0BC  codep:0x224c wordp:0xf0bc size:0x0010 C-string:'WF0BC'
//           WF0CE  codep:0x224c wordp:0xf0ce size:0x0020 C-string:'WF0CE'
//           WF0F0  codep:0x744d wordp:0xf0f0 size:0x0003 C-string:'WF0F0'
//           WF0F5  codep:0x744d wordp:0xf0f5 size:0x0003 C-string:'WF0F5'
//           WF0FA  codep:0x744d wordp:0xf0fa size:0x0003 C-string:'WF0FA'
//           WF0FF  codep:0x744d wordp:0xf0ff size:0x0003 C-string:'WF0FF'
//           WF104  codep:0x744d wordp:0xf104 size:0x0003 C-string:'WF104'
//           WF109  codep:0x744d wordp:0xf109 size:0x0003 C-string:'WF109'
//           WF10E  codep:0x744d wordp:0xf10e size:0x0003 C-string:'WF10E'
//           WF113  codep:0x744d wordp:0xf113 size:0x0003 C-string:'WF113'
//           WF118  codep:0x744d wordp:0xf118 size:0x0003 C-string:'WF118'
//           WF11D  codep:0x744d wordp:0xf11d size:0x0003 C-string:'WF11D'
//           WF122  codep:0x744d wordp:0xf122 size:0x0003 C-string:'WF122'
//           WF127  codep:0x73ea wordp:0xf127 size:0x0006 C-string:'WF127'
//           WF12F  codep:0x224c wordp:0xf12f size:0x0008 C-string:'WF12F'
//           WF139  codep:0x224c wordp:0xf139 size:0x000c C-string:'WF139'
//           WF147  codep:0x224c wordp:0xf147 size:0x003a C-string:'WF147'
//           WF183  codep:0x224c wordp:0xf183 size:0x0074 C-string:'WF183'
//          ROLE-C  codep:0x224c wordp:0xf202 size:0x0038 C-string:'ROLE_dash_C'
//           WF23C  codep:0x224c wordp:0xf23c size:0x0042 C-string:'WF23C'
//           WF280  codep:0x224c wordp:0xf280 size:0x0010 C-string:'WF280'
//           WF292  codep:0x224c wordp:0xf292 size:0x0020 C-string:'WF292'
//           WF2B4  codep:0x224c wordp:0xf2b4 size:0x0017 C-string:'WF2B4'
//           WF2CD  codep:0x224c wordp:0xf2cd size:0x0086 C-string:'WF2CD'
//           .VITS  codep:0x224c wordp:0xf35d size:0x0094 C-string:'DrawVITS'
//          >SKILL  codep:0x4a4f wordp:0xf3fc size:0x0018 C-string:'_gt_SKILL'
//           WF416  codep:0x224c wordp:0xf416 size:0x000e C-string:'WF416'
//           WF426  codep:0x1d29 wordp:0xf426 size:0x0002 C-string:'WF426'
//           WF42A  codep:0x1d29 wordp:0xf42a size:0x0003 C-string:'WF42A'
//           WF42F  codep:0x224c wordp:0xf42f size:0x0058 C-string:'WF42F'
//           WF489  codep:0x224c wordp:0xf489 size:0x000c C-string:'WF489'
//           WF497  codep:0x224c wordp:0xf497 size:0x0028 C-string:'WF497'
//           WF4C1  codep:0x224c wordp:0xf4c1 size:0x004a C-string:'WF4C1'
//           OBITS  codep:0x224c wordp:0xf515 size:0x0006 C-string:'OBITS'
//            HEAL  codep:0x224c wordp:0xf524 size:0x0000 C-string:'HEAL'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern const unsigned short int pp_IsHEAL; // ?HEAL
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WBOTTOM; // WBOTTOM
extern const unsigned short int pp_WRIGHT; // WRIGHT
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_WCHARS; // WCHARS
extern const unsigned short int pp_HEALTI; // HEALTI
extern const unsigned short int pp_ROSTER; // ROSTER
extern Color BLACK; // BLACK
extern Color RED; // RED
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType INST_dash_SIB; // INST-SIB
void COUNT(); // COUNT
void MIN(); // MIN
void DrawR(); // .R
void MS(); // MS
void PICK(); // PICK
void _2OVER(); // 2OVER
void D_eq_(); // D=
void KEY_2(); // KEY_2
void _3_star_(); // 3*
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _1_dot_5_ex_(); // 1.5!
void OFF(); // OFF
void FILL_1(); // FILL_1
void CDROP(); // CDROP
void CI_i_(); // CI'
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void StoreCOLOR(); // !COLOR
void _gt_DISPLAY(); // >DISPLAY
void BYE(); // BYE
void POS_dot_(); // POS.
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void _do__dot_(); // $.
void POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
void WINDOW(); // WINDOW
void GCR(); // GCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _dash_(); // -
void _gt_(); // >
void _st_(); // <
void _0_gt_(); // 0>
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void _st_1_dot_5_ex__gt_(); // <1.5!>
void _gt_C(); // >C
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WF426 = 0xf426; // WF426 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF42A = 0xf42a; // WF42A size: 3
// {0x3a, 0x20, 0x05}




// 0xf0a2: db 0x4a 0x00 'J '

// ================================================
// 0xf0a4: WORD 'WF0A6' codep=0x224c wordp=0xf0a6 params=0 returns=0
// ================================================

void WF0A6() // WF0A6
{
  Push(0x0083);
  Push(0x0053);
  Push(9);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xf0ba: WORD 'WF0BC' codep=0x224c wordp=0xf0bc params=0 returns=0
// ================================================

void WF0BC() // WF0BC
{
  Push(0x0040);
  Push(3);
  Push(7);
  Push(0x0026);
  WINDOW(); // WINDOW
}


// ================================================
// 0xf0cc: WORD 'WF0CE' codep=0x224c wordp=0xf0ce params=2 returns=0
// ================================================

void WF0CE() // WF0CE
{
  SWAP(); // SWAP
  Push(Pop() * 4 + (Read16(pp_WLEFT) + 2)); //  4 * WLEFT @ 2+ +
  Push(Read16(pp_WTOP) - 1); // WTOP @ 1-
  ROT(); // ROT
  Push(Pop() * 7); //  7 *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xf0ee: WORD 'WF0F0' codep=0x744d wordp=0xf0f0
// ================================================
IFieldType WF0F0 = {ASSIGN_CREWIDX, 0x11, 0x03};

// ================================================
// 0xf0f3: WORD 'WF0F5' codep=0x744d wordp=0xf0f5
// ================================================
IFieldType WF0F5 = {ASSIGN_CREWIDX, 0x14, 0x03};

// ================================================
// 0xf0f8: WORD 'WF0FA' codep=0x744d wordp=0xf0fa
// ================================================
IFieldType WF0FA = {ASSIGN_CREWIDX, 0x20, 0x03};

// ================================================
// 0xf0fd: WORD 'WF0FF' codep=0x744d wordp=0xf0ff
// ================================================
IFieldType WF0FF = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xf102: WORD 'WF104' codep=0x744d wordp=0xf104
// ================================================
IFieldType WF104 = {CREWMEMBERIDX, 0x1a, 0x01};

// ================================================
// 0xf107: WORD 'WF109' codep=0x744d wordp=0xf109
// ================================================
IFieldType WF109 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xf10c: WORD 'WF10E' codep=0x744d wordp=0xf10e
// ================================================
IFieldType WF10E = {CREWMEMBERIDX, 0x1c, 0x01};

// ================================================
// 0xf111: WORD 'WF113' codep=0x744d wordp=0xf113
// ================================================
IFieldType WF113 = {CREWMEMBERIDX, 0x1d, 0x01};

// ================================================
// 0xf116: WORD 'WF118' codep=0x744d wordp=0xf118
// ================================================
IFieldType WF118 = {CREWMEMBERIDX, 0x1e, 0x01};

// ================================================
// 0xf11b: WORD 'WF11D' codep=0x744d wordp=0xf11d
// ================================================
IFieldType WF11D = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xf120: WORD 'WF122' codep=0x744d wordp=0xf122
// ================================================
IFieldType WF122 = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xf125: WORD 'WF127' codep=0x73ea wordp=0xf127
// ================================================
// orphan
LoadDataType WF127 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6489};

// ================================================
// 0xf12d: WORD 'WF12F' codep=0x224c wordp=0xf12f params=1 returns=1
// ================================================

void WF12F() // WF12F
{
  _3_star_(); // 3*
  Push(Pop() + pp_ROSTER); //  ROSTER +
}


// ================================================
// 0xf137: WORD 'WF139' codep=0x224c wordp=0xf139 params=0 returns=0
// ================================================

void WF139() // WF139
{
  Push(pp_ROSTER); // ROSTER
  Push(0x0012);
  Push(0);
  FILL_1(); // FILL_1
}


// ================================================
// 0xf145: WORD 'WF147' codep=0x224c wordp=0xf147 params=2 returns=0
// ================================================

void WF147() // WF147
{
  unsigned short int i, imax;

  i = 0;
  imax = 6;
  do // (DO)
  {
    Push(i); // I
    WF12F(); // WF12F
    _1_dot_5_at_(); // 1.5@
    _2OVER(); // 2OVER
    D_eq_(); // D=
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    } else
    {
      Push(i); // I
      WF12F(); // WF12F
      _1_dot_5_at_(); // 1.5@
      Push(Pop() | Pop()); // OR
      Push(Pop()==0?1:0); //  0=
      if (Pop() != 0)
      {
        _2DUP(); // 2DUP
        Push(i); // I
        WF12F(); // WF12F
        _st_1_dot_5_ex__gt_(); // <1.5!>
        imax = i; // LEAVE
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf181: WORD 'WF183' codep=0x224c wordp=0xf183 params=0 returns=0
// ================================================

void WF183() // WF183
{
  Push(pp_ROSTER); // ROSTER
  _1_dot_5_at_(); // 1.5@
  Push2Words("NULL");
  D_eq_(); // D=
  Push(Pop() & (Read16(pp_CONTEXT_dash_ID_n_)==0?1:0)); //  CONTEXT-ID# @ 0= AND
  if (Pop() == 0) return;
  WF0BC(); // WF0BC
  _gt_DISPLAY(); // >DISPLAY
  Push(Read16(pp_WTOP)); // WTOP @
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WBOTTOM) - 1); // WBOTTOM @ 1-
  Push(Read16(pp_WRIGHT) + 1); // WRIGHT @ 1+
  GetColor(YELLOW);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  Push(1);
  Push(1);
  WF0CE(); // WF0CE
  GCR(); // GCR
  PRINT("!!CREW DECEASED!! ", 18); // (.")
  GCR(); // GCR
  PRINT("**GAME OVER** ", 14); // (.")
  Push(0x09c4);
  MS(); // MS
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  BYE(); // BYE
}


// ================================================
// 0xf1f7: WORD 'ROLE-C' codep=0x224c wordp=0xf202 params=0 returns=0
// ================================================
// entry

void ROLE_dash_C() // ROLE-C
{
  unsigned short int i, imax;
  WF139(); // WF139
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push((0x63ef+INST_dash_SIB.offset) + 0x0011); // INST-SIB<IFIELD> 0x0011 +

  i = 0;
  imax = 6;
  do // (DO)
  {
    Push(i); // I
    _3_star_(); // 3*
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    Push(Read16(0x63ef+WF11D.offset)&0xFF); // WF11D<IFIELD> C@
    if (Pop() != 0)
    {
      CI(); // CI
      WF147(); // WF147
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  ICLOSE(); // ICLOSE
  WF183(); // WF183
}


// ================================================
// 0xf23a: WORD 'WF23C' codep=0x224c wordp=0xf23c params=1 returns=1
// ================================================

void WF23C() // WF23C
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  Push(1);
  Push(pp_ROSTER); // ROSTER

  i = 0;
  imax = 6;
  do // (DO)
  {
    Push(i); // I
    _3_star_(); // 3*
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    _1_dot_5_at_(); // 1.5@
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      _gt_C_plus_S(); // >C+S
      Push(Read16(0x63ef+WF11D.offset)&0xFF); // WF11D<IFIELD> C@
      ICLOSE(); // ICLOSE
      Push(Pop()==a?1:0); //  J =
    } else
    {
      Pop(); Pop(); // 2DROP
      Push(1);
    }
    ROT(); // ROT
    Push(Pop() & Pop()); // AND
    SWAP(); // SWAP
    i++;
  } while(i<imax); // (LOOP)

  Push(a); // R>
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf27e: WORD 'WF280' codep=0x224c wordp=0xf280 params=0 returns=1
// ================================================

void WF280() // WF280
{
  Push(0x0064);
  WF23C(); // WF23C
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  Push(pp_IsHEAL); // ?HEAL
  Store_3(); // !_3
}


// ================================================
// 0xf290: WORD 'WF292' codep=0x224c wordp=0xf292 params=0 returns=1
// ================================================

void WF292() // WF292
{
  Push2Words("*ASSIGN-CREW");
  _gt_C(); // >C
  SET_dash_CURRENT(); // SET-CURRENT
  Push(0x63ef+WF0FA.offset); // WF0FA<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push((0x0104 - (Read16(0x63ef+WF118.offset)&0xFF)) * 0x00fa); // 0x0104 WF118<IFIELD> C@ - 0x00fa *
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2b2: WORD 'WF2B4' codep=0x224c wordp=0xf2b4 params=0 returns=0
// ================================================

void WF2B4() // WF2B4
{
  CTINIT(); // CTINIT
  Push(0x63ef+WF0FF.offset); // WF0FF<IFIELD>
  COUNT(); // COUNT
  DrawTTY(); // .TTY
  PRINT(" IS HEALED", 10); // (.")
}


// ================================================
// 0xf2cb: WORD 'WF2CD' codep=0x224c wordp=0xf2cd params=0 returns=0
// ================================================

void WF2CD() // WF2CD
{
  unsigned short int i, imax;
  ROLE_dash_C(); // ROLE-C
  WF280(); // WF280
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {

    i = 0;
    imax = 6;
    do // (DO)
    {
      Push(i); // I
      WF12F(); // WF12F
      _1_dot_5_at_(); // 1.5@
      _2DUP(); // 2DUP
      Push(Pop() | Pop()); // OR
      if (Pop() != 0)
      {
        _gt_C_plus_S(); // >C+S
        Push(Read16(0x63ef+WF11D.offset)&0xFF); // WF11D<IFIELD> C@
        if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
        if (Pop() != 0)
        {
          Push((((Read16(0x63ef+WF122.offset)&0xFF) & 4)==0?1:0)==0?1:0); // WF122<IFIELD> C@ 4 AND 0= 0=
          Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
          _0_gt_(); // 0>
          Push(Pop() & Pop()); // AND
          if (Pop() != 0)
          {
            Push(Pop() + 2); //  2+
            Push(Read16(regsp)); // DUP
            Push(0x0064);
            _st_(); // <
            Push(!Pop()); //  NOT
            if (Pop() != 0)
            {
              Push((Read16(0x63ef+WF122.offset)&0xFF) & 0x00fb); // WF122<IFIELD> C@ 0x00fb AND
              Push(0x63ef+WF122.offset); // WF122<IFIELD>
              C_ex_(); // C!
              WF2B4(); // WF2B4
            }
          } else
          {
            Push(Pop() + 1); //  1+
          }
          Push(0x0064);
          MIN(); // MIN
          Push(0x63ef+WF11D.offset); // WF11D<IFIELD>
          C_ex_(); // C!
        }
        ICLOSE(); // ICLOSE
      } else
      {
        Pop(); Pop(); // 2DROP
      }
      i++;
    } while(i<imax); // (LOOP)

  }
  WF292(); // WF292
  Push(pp_HEALTI); // HEALTI
  Store_3(); // !_3
}


// ================================================
// 0xf353: WORD '.VITS' codep=0x224c wordp=0xf35d params=0 returns=0
// ================================================
// entry

void DrawVITS() // .VITS
{
  unsigned short int a, b, i, imax, j, jmax;
  Push(Read16(pp_XORMODE)); // XORMODE @
  a = Pop(); // >R
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(Read16(pp_COLOR)); // COLOR @
  b = Pop(); // >R
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WF0A6(); // WF0A6
  Push(0);
  Push(1);
  WF0CE(); // WF0CE

  i = 0;
  imax = 6;
  do // (DO)
  {
    GCR(); // GCR
    Push(Read16(pp_WCHARS)); // WCHARS @
    GetColor(BLACK);
    POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
    Push(i); // I
    WF12F(); // WF12F
    _1_dot_5_at_(); // 1.5@
    _2DUP(); // 2DUP
    _gt_C_plus_S(); // >C+S
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      Push(1);
      Push(pp_XBLT); // XBLT
      _plus__ex__2(); // +!_2
      Push(0x63ef+WF0FF.offset); // WF0FF<IFIELD>
      _do__dot_(); // $.
      Push(0x000e - (Read16(0x63ef+WF0FF.offset)&0xFF)); // 0x000e WF0FF<IFIELD> C@ -
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
      if (Pop() != 0)
      {

        j = 0;
        jmax = Pop();
        do // (DO)
        {
          PRINT(".", 1); // (.")
          j++;
        } while(j<jmax); // (LOOP)

      }
      Push(Read16(pp_XBLT)); // XBLT @
      Push(-1);
      Push(pp_XBLT); // XBLT
      _plus__ex__2(); // +!_2
      Push(4);
      GetColor(BLACK);
      POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
      Push(pp_XBLT); // XBLT
      Store_3(); // !_3
      Push(Read16(0x63ef+WF11D.offset)&0xFF); // WF11D<IFIELD> C@
      Push(3);
      DrawR(); // .R
      PRINT("%", 1); // (.")
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

  Push(b); // R>
  StoreCOLOR(); // !COLOR
  Push(a); // R>
  Push(pp_XORMODE); // XORMODE
  Store_3(); // !_3
}


// ================================================
// 0xf3f1: WORD '>SKILL' codep=0x4a4f wordp=0xf3fc
// ================================================

void _gt_SKILL() // >SKILL
{
  switch(Pop()) // >SKILL
  {
  case 1:
    Push(0x63ef+WF104.offset); // IFIELD
    break;
  case 2:
    Push(0x63ef+WF109.offset); // IFIELD
    break;
  case 3:
    Push(0x63ef+WF10E.offset); // IFIELD
    break;
  case 4:
    Push(0x63ef+WF113.offset); // IFIELD
    break;
  case 5:
    Push(0x63ef+WF118.offset); // IFIELD
    break;
  default:
    Exec("ABORT"); // call of word 0x1c45 '(ABORT)'
    break;

  }
}

// ================================================
// 0xf414: WORD 'WF416' codep=0x224c wordp=0xf416 params=0 returns=0
// ================================================

void WF416() // WF416
{
  Push(Read16(0x63ef+WF122.offset) | 2); // WF122<IFIELD> @ 2 OR
  Push(0x63ef+WF122.offset); // WF122<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xf424: WORD 'WF426' codep=0x1d29 wordp=0xf426
// ================================================
// 0xf426: db 0x3a 0x20 ': '

// ================================================
// 0xf428: WORD 'WF42A' codep=0x1d29 wordp=0xf42a
// ================================================
// 0xf42a: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xf42d: WORD 'WF42F' codep=0x224c wordp=0xf42f
// ================================================

void WF42F() // WF42F
{
  unsigned short int i, imax;
  Push(0);
  Push(pp_WF426); // WF426
  Store_3(); // !_3
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WF0F0.offset); // WF0F0<IFIELD>
  _1_dot_5_at_(); // 1.5@
  Push(pp_WF42A); // WF42A
  _1_dot_5_ex_(); // 1.5!
  Push((0x63ef+INST_dash_SIB.offset) + 0x0011); // INST-SIB<IFIELD> 0x0011 +

  i = 0;
  imax = 6;
  do // (DO)
  {
    Push(i); // I
    _3_star_(); // 3*
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    OVER(); // OVER
    _gt_SKILL(); // >SKILL case
    Push(Read16(Pop())&0xFF); //  C@
    Push(Read16(regsp)); // DUP
    Push(Read16(pp_WF426)); // WF426 @
    _gt_(); // >
    if (Pop() != 0)
    {
      CI(); // CI
      Push(pp_WF42A); // WF42A
      _st_1_dot_5_ex__gt_(); // <1.5!>
      Push(pp_WF426); // WF426
      _st__ex__gt_(); // <!>
    } else
    {
      Pop(); // DROP
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf487: WORD 'WF489' codep=0x224c wordp=0xf489 params=0 returns=0
// ================================================

void WF489() // WF489
{
  Push(0x63ef+WF104.offset); // WF104<IFIELD>
  Push(6);
  Push(0);
  FILL_1(); // FILL_1
  WF416(); // WF416
}


// ================================================
// 0xf495: WORD 'WF497' codep=0x224c wordp=0xf497 params=0 returns=0
// ================================================

void WF497() // WF497
{
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WF0F0.offset); // WF0F0<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push((Read16(0x63ef+WF11D.offset)&0xFF)==0?1:0); // WF11D<IFIELD> C@ 0=
  if (Pop() != 0)
  {
    WF489(); // WF489
    CI_i_(); // CI'
    _gt_C_plus_S(); // >C+S
    Push(0x63ef+WF0F5.offset); // WF0F5<IFIELD>
    _1_dot_5_at_(); // 1.5@
    Push(0x63ef+WF0F0.offset); // WF0F0<IFIELD>
    _1_dot_5_ex_(); // 1.5!
    ICLOSE(); // ICLOSE
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4bf: WORD 'WF4C1' codep=0x224c wordp=0xf4c1 params=0 returns=0
// ================================================

void WF4C1() // WF4C1
{
  unsigned short int i, imax;
  Push2Words("*ASSIGN-CREW");
  _gt_C(); // >C
  SET_dash_CURRENT(); // SET-CURRENT
  Push(0x63ef+WF0F0.offset); // WF0F0<IFIELD>

  i = 1;
  imax = 6;
  do // (DO)
  {
    Push(i); // I
    _3_star_(); // 3*
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    Push((Read16(0x63ef+WF11D.offset)&0xFF)==0?1:0); // WF11D<IFIELD> C@ 0=
    if (Pop() != 0)
    {
      WF489(); // WF489
      ICLOSE(); // ICLOSE
      Push(i); // I
      WF42F(); // WF42F
      Push(pp_WF42A); // WF42A
      _1_dot_5_at_(); // 1.5@
      Push(i); // I
      _3_star_(); // 3*
      Push(4);
      PICK(); // PICK
      Push(Pop() + Pop()); // +
      _1_dot_5_ex_(); // 1.5!
    } else
    {
      ICLOSE(); // ICLOSE
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf50b: WORD 'OBITS' codep=0x224c wordp=0xf515 params=0 returns=0
// ================================================
// entry

void OBITS() // OBITS
{
  WF4C1(); // WF4C1
  WF497(); // WF497
}


// ================================================
// 0xf51b: WORD 'HEAL' codep=0x224c wordp=0xf524 params=0 returns=0
// ================================================
// entry

void HEAL() // HEAL
{
  OBITS(); // OBITS
  WF2CD(); // WF2CD
}

// 0xf52a: db 0x48 0x45 0x41 0x4c 0x45 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x59 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x28 0x20 0x72 0x66 0x00 'HEALER__________________________Y ----------------( rf '

