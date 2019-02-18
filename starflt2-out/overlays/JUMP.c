// ====== OVERLAY 'JUMP' ======
// store offset = 0xed30
// overlay size   = 0x0830

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WED46  codep:0x1d29 wordp:0xed46 size:0x0002 C-string:'WED46'
//           WED4A  codep:0x224c wordp:0xed4a size:0x0008 C-string:'WED4A'
//           WED54  codep:0x224c wordp:0xed54 size:0x0008 C-string:'WED54'
//           WED5E  codep:0x224c wordp:0xed5e size:0x005c C-string:'WED5E'
//           WEDBC  codep:0x7420 wordp:0xedbc size:0x0003 C-string:'WEDBC'
//           WEDC1  codep:0x7420 wordp:0xedc1 size:0x0003 C-string:'WEDC1'
//           WEDC6  codep:0x7420 wordp:0xedc6 size:0x0003 C-string:'WEDC6'
//           WEDCB  codep:0x7420 wordp:0xedcb size:0x0003 C-string:'WEDCB'
//           WEDD0  codep:0x7420 wordp:0xedd0 size:0x0003 C-string:'WEDD0'
//           WEDD5  codep:0x1d29 wordp:0xedd5 size:0x0002 C-string:'WEDD5'
//           WEDD9  codep:0x1d29 wordp:0xedd9 size:0x0002 C-string:'WEDD9'
//           WEDDD  codep:0x224c wordp:0xeddd size:0x0018 C-string:'WEDDD'
//           WEDF7  codep:0x224c wordp:0xedf7 size:0x0008 C-string:'WEDF7'
//           WEE01  codep:0x224c wordp:0xee01 size:0x0008 C-string:'WEE01'
//           WEE0B  codep:0x224c wordp:0xee0b size:0x0008 C-string:'WEE0B'
//           WEE15  codep:0x224c wordp:0xee15 size:0x0008 C-string:'WEE15'
//           WEE1F  codep:0x224c wordp:0xee1f size:0x0010 C-string:'WEE1F'
//           WEE31  codep:0x224c wordp:0xee31 size:0x0010 C-string:'WEE31'
//           WEE43  codep:0x224c wordp:0xee43 size:0x0028 C-string:'WEE43'
//           WEE6D  codep:0x224c wordp:0xee6d size:0x004c C-string:'WEE6D'
//           WEEBB  codep:0x224c wordp:0xeebb size:0x0026 C-string:'WEEBB'
//           WEEE3  codep:0x224c wordp:0xeee3 size:0x0022 C-string:'WEEE3'
//           WEF07  codep:0x224c wordp:0xef07 size:0x0028 C-string:'WEF07'
//           WEF31  codep:0x224c wordp:0xef31 size:0x0006 C-string:'WEF31'
//         (GET-AU  codep:0x4b3b wordp:0xef43 size:0x0020 C-string:'_ro_GET_dash_AU'
//           WEF65  codep:0x224c wordp:0xef65 size:0x001a C-string:'WEF65'
//           WEF81  codep:0x224c wordp:0xef81 size:0x002f C-string:'WEF81'
//           WEFB2  codep:0x224c wordp:0xefb2 size:0x0028 C-string:'WEFB2'
//           WEFDC  codep:0x1d29 wordp:0xefdc size:0x0002 C-string:'WEFDC'
//           WEFE0  codep:0x224c wordp:0xefe0 size:0x0008 C-string:'WEFE0'
//           WEFEA  codep:0x224c wordp:0xefea size:0x0024 C-string:'WEFEA'
//           WF010  codep:0x224c wordp:0xf010 size:0x0006 C-string:'WF010'
//           WF018  codep:0x224c wordp:0xf018 size:0x002e C-string:'WF018'
//           WF048  codep:0x224c wordp:0xf048 size:0x0014 C-string:'WF048'
//           WF05E  codep:0x224c wordp:0xf05e size:0x000c C-string:'WF05E'
//           WF06C  codep:0x1d29 wordp:0xf06c size:0x0002 C-string:'WF06C'
//           WF070  codep:0x224c wordp:0xf070 size:0x0022 C-string:'WF070'
//           WF094  codep:0x224c wordp:0xf094 size:0x001a C-string:'WF094'
//           WF0B0  codep:0x224c wordp:0xf0b0 size:0x000e C-string:'WF0B0'
//           WF0C0  codep:0x224c wordp:0xf0c0 size:0x0006 C-string:'WF0C0'
//           WF0C8  codep:0x224c wordp:0xf0c8 size:0x000a C-string:'WF0C8'
//           WF0D4  codep:0x224c wordp:0xf0d4 size:0x0054 C-string:'WF0D4'
//           WF12A  codep:0x1d29 wordp:0xf12a size:0x0002 C-string:'WF12A'
//           WF12E  codep:0x224c wordp:0xf12e size:0x002c C-string:'WF12E'
//           WF15C  codep:0x224c wordp:0xf15c size:0x0008 C-string:'WF15C'
//           WF166  codep:0x224c wordp:0xf166 size:0x0024 C-string:'WF166'
//           WF18C  codep:0x224c wordp:0xf18c size:0x003a C-string:'WF18C'
//           WF1C8  codep:0x224c wordp:0xf1c8 size:0x001a C-string:'WF1C8'
//           WF1E4  codep:0x224c wordp:0xf1e4 size:0x0018 C-string:'WF1E4'
//           WF1FE  codep:0x224c wordp:0xf1fe size:0x0022 C-string:'WF1FE'
//           WF222  codep:0x224c wordp:0xf222 size:0x002c C-string:'WF222'
//           WF250  codep:0x224c wordp:0xf250 size:0x0018 C-string:'WF250'
//           WF26A  codep:0x224c wordp:0xf26a size:0x00a8 C-string:'WF26A'
//           WF314  codep:0x224c wordp:0xf314 size:0x006a C-string:'WF314'
//           WF380  codep:0x224c wordp:0xf380 size:0x0016 C-string:'WF380'
//           WF398  codep:0x224c wordp:0xf398 size:0x0024 C-string:'WF398'
//           WF3BE  codep:0x224c wordp:0xf3be size:0x0014 C-string:'WF3BE'
//           WF3D4  codep:0x224c wordp:0xf3d4 size:0x0020 C-string:'WF3D4'
//           WF3F6  codep:0x224c wordp:0xf3f6 size:0x0012 C-string:'WF3F6'
//           WF40A  codep:0x224c wordp:0xf40a size:0x0034 C-string:'WF40A'
//           WF440  codep:0x224c wordp:0xf440 size:0x0022 C-string:'WF440'
//           WF464  codep:0x224c wordp:0xf464 size:0x001c C-string:'WF464'
//           WF482  codep:0x224c wordp:0xf482 size:0x0046 C-string:'WF482'
//            JUMP  codep:0x224c wordp:0xf4d1 size:0x0000 C-string:'JUMP'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__star_MAPSCA; // *MAPSCA
extern const unsigned short int pp_BEEPTONE; // BEEPTONE
extern const unsigned short int pp_IsAUTO; // ?AUTO
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp__star_GLOBAL; // *GLOBAL
extern const unsigned short int pp_THIS_dash_BU; // THIS-BU
extern const unsigned short int pp_BTN_dash_REC; // BTN-REC
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_HEADING; // HEADING
extern const unsigned short int pp_IsSUP; // ?SUP
extern const unsigned short int pp__10_star_CARG; // 10*CARG
extern const unsigned short int pp_EYEXY; // EYEXY
extern const unsigned short int pp__10_star_END; // 10*END
extern const unsigned short int pp_NAV_dash_TIM; // NAV-TIM
extern const unsigned short int pp_LSCAN; // LSCAN
extern LoadDataType _1BTN; // 1BTN
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color GREEN; // GREEN
extern Color RED; // RED
extern Color GREY1; // GREY1
extern Color GREY2; // GREY2
extern Color BLUE; // BLUE
extern Color ORANGE; // ORANGE
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
extern IFieldType PHRASE_do_; // PHRASE$
void COUNT(); // COUNT
void ABS(); // ABS
void M_star_(); // M*
void MAX(); // MAX
void MIN(); // MIN
void D_st_(); // D<
void BEEP(); // BEEP
void DrawR(); // .R
void MS(); // MS
void PICK(); // PICK
void ROLL(); // ROLL
void D_dash_(); // D-
void D0_eq_(); // D0=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void DMIN(); // DMIN
void DMAX(); // DMAX
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void GetINST_dash_C(); // @INST-C
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void DARK(); // DARK
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void GetIL(); // @IL
void GetIH(); // @IH
void POINT_gt_I(); // POINT>I
void IsICONS_dash__1(); // ?ICONS-_1
void IsICONS_dash__2(); // ?ICONS-_2
void POS_dot_(); // POS.
void _gt_SSCT(); // >SSCT
void BEEPON_2(); // BEEPON_2
void _do__dot_(); // $.
void POLY_dash_ER(); // POLY-ER
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void IsMRC(); // ?MRC
void ERASE_dash_A(); // ERASE-A
void DrawHIGHLI(); // .HIGHLI
void _ro_SHIP_dash_C(); // (SHIP-C
void Y_slash_N(); // Y/N
void DrawBTN_dash_TE(); // .BTN-TE
void _do__ex_(); // $!
void GET_dash_HA(); // GET-HA
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void DISPLAY(); // DISPLAY


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WED46 = 0xed46; // WED46 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEDD5 = 0xedd5; // WEDD5 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEDD9 = 0xedd9; // WEDD9 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEFDC = 0xefdc; // WEFDC size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF06C = 0xf06c; // WF06C size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF12A = 0xf12a; // WF12A size: 2
// {0x3a, 0x20}




// 0xed42: db 0x82 0x00 '  '

// ================================================
// 0xed44: WORD 'WED46' codep=0x1d29 wordp=0xed46
// ================================================
// 0xed46: db 0x3a 0x20 ': '

// ================================================
// 0xed48: WORD 'WED4A' codep=0x224c wordp=0xed4a params=1 returns=1
// ================================================

void WED4A() // WED4A
{
  Push(Pop() + Read16(pp_WED46)); //  WED46 @ +
}


// ================================================
// 0xed52: WORD 'WED54' codep=0x224c wordp=0xed54 params=1 returns=1
// ================================================

void WED54() // WED54
{
  Push(Pop() - Read16(pp_WED46)); //  WED46 @ -
}


// ================================================
// 0xed5c: WORD 'WED5E' codep=0x224c wordp=0xed5e params=4 returns=0
// ================================================

void WED5E() // WED5E
{
  unsigned short int a, b, c;
  a = Pop(); // >R
  b = Pop(); // >R
  c = Pop(); // >R
  Push(Read16(regsp)); // DUP
  Push(c); // I
  WED54(); // WED54
  SWAP(); // SWAP
  WED4A(); // WED4A
  Push(a); // J
  WED4A(); // WED4A
  OVER(); // OVER
  LLINE(); // LLINE
  Push(c); // I
  WED54(); // WED54
  OVER(); // OVER
  WED4A(); // WED4A
  Push(c); // I
  WED4A(); // WED4A
  Push(b); // I'
  WED54(); // WED54
  LLINE(); // LLINE
  Push(c); // I
  WED4A(); // WED4A
  Push(b); // I'
  WED54(); // WED54
  Push(a); // J
  WED54(); // WED54
  Push(b); // I'
  WED54(); // WED54
  LLINE(); // LLINE
  Push(a); // J
  WED54(); // WED54
  Push(b); // I'
  WED54(); // WED54
  ROT(); // ROT
  Push(a); // J
  WED4A(); // WED4A
  SWAP(); // SWAP
  WED4A(); // WED4A
  LLINE(); // LLINE
  Push(c); // R>
  Pop(); // DROP
  Push(b); // R>
  Push(a); // R>
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xedba: WORD 'WEDBC' codep=0x7420 wordp=0xedbc
// ================================================
IFieldType WEDBC = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xedbf: WORD 'WEDC1' codep=0x7420 wordp=0xedc1
// ================================================
IFieldType WEDC1 = {ASSIGN_CREWIDX, 0x11, 0x12};

// ================================================
// 0xedc4: WORD 'WEDC6' codep=0x7420 wordp=0xedc6
// ================================================
IFieldType WEDC6 = {SHIPIDX, 0x34, 0x0f};

// ================================================
// 0xedc9: WORD 'WEDCB' codep=0x7420 wordp=0xedcb
// ================================================
IFieldType WEDCB = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xedce: WORD 'WEDD0' codep=0x7420 wordp=0xedd0
// ================================================
IFieldType WEDD0 = {SHIPIDX, 0x56, 0x01};

// ================================================
// 0xedd3: WORD 'WEDD5' codep=0x1d29 wordp=0xedd5
// ================================================
// 0xedd5: db 0x3a 0x20 ': '

// ================================================
// 0xedd7: WORD 'WEDD9' codep=0x1d29 wordp=0xedd9
// ================================================
// 0xedd9: db 0x3a 0x20 ': '

// ================================================
// 0xeddb: WORD 'WEDDD' codep=0x224c wordp=0xeddd
// ================================================

void WEDDD() // WEDDD
{
  POS_dot_(); // POS.
  Push(0x000d);
  GetColor(GREY1);
  POLY_dash_ER(); // POLY-ER
  _gt_1FONT(); // >1FONT
  GetColor(BLACK);
  GetColor(GREY2);
  GetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xedf5: WORD 'WEDF7' codep=0x224c wordp=0xedf7 params=0 returns=0
// ================================================

void WEDF7() // WEDF7
{
  Push(0xc090); // 'OV/STA'
  MODULE(); // MODULE
}


// ================================================
// 0xedff: WORD 'WEE01' codep=0x224c wordp=0xee01 params=0 returns=0
// ================================================

void WEE01() // WEE01
{
  Push(0xbc98); // 'OV/DA'
  MODULE(); // MODULE
}


// ================================================
// 0xee09: WORD 'WEE0B' codep=0x224c wordp=0xee0b params=0 returns=0
// ================================================

void WEE0B() // WEE0B
{
  Push(0xc4ef); // '(.MERC)'
  MODULE(); // MODULE
}


// ================================================
// 0xee13: WORD 'WEE15' codep=0x224c wordp=0xee15 params=0 returns=1
// ================================================

void WEE15() // WEE15
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xee1d: WORD 'WEE1F' codep=0x224c wordp=0xee1f params=2 returns=1
// ================================================

void WEE1F() // WEE1F
{
  WEE15(); // WEE15
  if (Pop() != 0)
  {
    Push(Pop() + Pop()); // +
    return;
  }
  _dash_(); // -
}


// ================================================
// 0xee2f: WORD 'WEE31' codep=0x224c wordp=0xee31 params=2 returns=2
// ================================================

void WEE31() // WEE31
{
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+PHRASE_do_.offset); // PHRASE$<IFIELD>
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee41: WORD 'WEE43' codep=0x224c wordp=0xee43 params=0 returns=2
// ================================================

void WEE43() // WEE43
{
  unsigned short int a;
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  ROT(); // ROT
  _dash_(); // -
  ABS(); // ABS
  a = Pop(); // >R
  Push(Pop() - Read16(0x65e1+INST_dash_Y.offset)); //  INST-Y<IFIELD> @ -
  ABS(); // ABS
  Push(a); // R>
  MAX(); // MAX
  ICLOSE(); // ICLOSE
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
}


// ================================================
// 0xee6b: WORD 'WEE6D' codep=0x224c wordp=0xee6d
// ================================================

void WEE6D() // WEE6D
{
  Push(0x0010);
  Push(0x0041);
  WEDDD(); // WEDDD
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_2(); // !_2
  Push(pp_RECORD_n_); // RECORD#
  _099(); // 099
  Push(Pop() - 1); //  1-
  Push(Read16(regsp)); // DUP
  Push(Pop() * 0x000c); //  0x000c *
  LoadData(_1BTN); // from 'BUTTONS'
  Push(Pop() + Pop()); // +
  Push(0x000c);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(0x0010);
  Push(0x003b);
  WEDDD(); // WEDDD
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(Pop() * 3 + (0x65e1+WEDC1.offset)); //  3 * WEDC1<IFIELD> +
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+WEDBC.offset); // WEDBC<IFIELD>
  _do__dot_(); // $.
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeeb9: WORD 'WEEBB' codep=0x224c wordp=0xeebb
// ================================================

void WEEBB() // WEEBB
{
  Push(0x0010);
  Push(0x0041);
  WEDDD(); // WEDDD
  PRINT("ISS", 3); // (.")
  Push(0x0010);
  Push(0x003b);
  WEDDD(); // WEDDD
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WEDC6.offset); // WEDC6<IFIELD>
  _do__dot_(); // $.
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeee1: WORD 'WEEE3' codep=0x224c wordp=0xeee3
// ================================================

void WEEE3() // WEEE3
{
  Push(Read16(regsp)); // DUP
  Push(0);
  Push(7);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      WEEBB(); // WEEBB
    } else
    {
      Push(Read16(regsp)); // DUP
      WEE6D(); // WEE6D
    }
  }
  DrawBTN_dash_TE(); // .BTN-TE
}


// ================================================
// 0xef05: WORD 'WEF07' codep=0x224c wordp=0xef07
// ================================================

void WEF07() // WEF07
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x003b);
  Push(Read16(a)); // R@
  _dash_(); // -
  Push(0x0023);
  Push(Read16(a)); // R@
  _dash_(); // -
  Push(0x003c);
  Push(Read16(a)); // R@
  Push(Pop() + Pop()); // +
  Push(0x0024 + a); // 0x0024 R> +
  DISPLAY(); // DISPLAY
  WED5E(); // WED5E
}


// ================================================
// 0xef2f: WORD 'WEF31' codep=0x224c wordp=0xef31
// ================================================

void WEF31() // WEF31
{
  GetColor(BLACK);
  ERASE_dash_A(); // ERASE-A
}


// ================================================
// 0xef37: WORD '(GET-AU' codep=0x4b3b wordp=0xef43
// ================================================

void _ro_GET_dash_AU() // (GET-AU
{
  switch(Pop()) // (GET-AU
  {
  case 1:
    WEDF7(); // WEDF7
    break;
  case 2:
    WEDF7(); // WEDF7
    break;
  case 3:
    WEE01(); // WEE01
    break;
  case 4:
    WEE0B(); // WEE0B
    break;
  case 5:
    GET_dash_HA(); // GET-HA
    break;
  case 6:
    GET_dash_HA(); // GET-HA
    break;
  case 8:
    WEE0B(); // WEE0B
    break;
  default:
    WEF31(); // WEF31
    break;

  }
}

// ================================================
// 0xef63: WORD 'WEF65' codep=0x224c wordp=0xef65
// ================================================

void WEF65() // WEF65
{
  GetColor(BLACK);
  _ro_SHIP_dash_C(); // (SHIP-C
  Push(Read16(pp__n_AUX)); // #AUX @
  _ro_GET_dash_AU(); // (GET-AU case
  Push(Read16(pp_BTN_dash_REC)); // BTN-REC @
  WEEE3(); // WEEE3
  GetColor(BLUE);
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  DrawHIGHLI(); // .HIGHLI
}


// ================================================
// 0xef7f: WORD 'WEF81' codep=0x224c wordp=0xef81
// ================================================

void WEF81() // WEF81
{
  _gt_DISPLA(); // >DISPLA
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("JUMP POD ENGAGED");
  DrawTTY(); // .TTY
  Push(0x6b12); Push(0x0002); // 'GRAVITATIONAL MATRIX ANALYSIS'
  WEE31(); // WEE31
  DrawTTY(); // .TTY
  Push(0x6b3c); Push(0x0002); // 'COMPUTING % ACCURACY OF JUMP'
  WEE31(); // WEE31
  DrawTTY(); // .TTY
}


// ================================================
// 0xefb0: WORD 'WEFB2' codep=0x224c wordp=0xefb2
// ================================================

void WEFB2() // WEFB2
{
  _gt_DISPLA(); // >DISPLA
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0x0025);
  Push(0x0085);
  POS_dot_(); // POS.
  Push(2);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  Push(0x0063);
  MIN(); // MIN
  Push(2);
  DrawR(); // .R
  _gt_MAINVI(); // >MAINVI
}


// ================================================
// 0xefda: WORD 'WEFDC' codep=0x1d29 wordp=0xefdc
// ================================================
// 0xefdc: db 0x3a 0x20 ': '

// ================================================
// 0xefde: WORD 'WEFE0' codep=0x224c wordp=0xefe0
// ================================================

void WEFE0() // WEFE0
{
  Push(Read16(pp_WEFDC)); // WEFDC @
  WEFB2(); // WEFB2
}


// ================================================
// 0xefe8: WORD 'WEFEA' codep=0x224c wordp=0xefea
// ================================================

void WEFEA() // WEFEA
{
  Push(Read16(regsp)); // DUP
  Push(0x0064 - Read16(pp_WEFDC)); // 0x0064 WEFDC @ -
  Push(0);
  SWAP(); // SWAP
  RRND(); // RRND
  Push(0x0028);
  ROT(); // ROT
  _dash_(); // -
  _slash_(); // /
  Push(pp_WED46); // WED46
  Store_2(); // !_2
  WEF07(); // WEF07
}


// ================================================
// 0xf00e: WORD 'WF010' codep=0x224c wordp=0xf010
// ================================================

void WF010() // WF010
{
  StoreCOLOR(); // !COLOR
  WEFEA(); // WEFEA
}


// ================================================
// 0xf016: WORD 'WF018' codep=0x224c wordp=0xf018
// ================================================

void WF018() // WF018
{
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  Push(6);
  GetColor(DK_dash_BLUE);
  WF010(); // WF010
  Push(0x000b);
  GetColor(GREEN);
  WF010(); // WF010
  Push(0x0010);
  GetColor(YELLOW);
  WF010(); // WF010
  Push(0x0015);
  GetColor(ORANGE);
  WF010(); // WF010
  Push(0x001a);
  GetColor(RED);
  WF010(); // WF010
  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xf046: WORD 'WF048' codep=0x224c wordp=0xf048 params=1 returns=1
// ================================================

void WF048() // WF048
{
  Push(Read16(regsp)); // DUP
  Push(Pop()==0x0017?1:0); //  0x0017 =
  SWAP(); // SWAP
  Push(Pop()==0x003c?1:0); //  0x003c =
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf05c: WORD 'WF05E' codep=0x224c wordp=0xf05e
// ================================================

void WF05E() // WF05E
{
  POINT_gt_I(); // POINT>I
  GetIL(); // @IL
  GetIH(); // @IH
  _gt_C_plus_S(); // >C+S
  GetINST_dash_C(); // @INST-C
}


// ================================================
// 0xf06a: WORD 'WF06C' codep=0x1d29 wordp=0xf06c
// ================================================
// 0xf06c: db 0x3a 0x20 ': '

// ================================================
// 0xf06e: WORD 'WF070' codep=0x224c wordp=0xf070 params=1 returns=0
// ================================================

void WF070() // WF070
{
  unsigned short int i, imax;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    WF05E(); // WF05E
    WF048(); // WF048
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      Push(-1);
      Push(pp_WF06C); // WF06C
      _plus__ex__2(); // +!_2
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf092: WORD 'WF094' codep=0x224c wordp=0xf094
// ================================================

void WF094() // WF094
{
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  ROT(); // ROT
  Push(Read16(pp__star_GLOBAL)); // *GLOBAL @
  IsICONS_dash__1(); // ?ICONS-_1
  Push(Read16(regsp)); // DUP
  Push(pp_WF06C); // WF06C
  Store_2(); // !_2
  WF070(); // WF070
  Push(Read16(pp_WF06C)); // WF06C @
}


// ================================================
// 0xf0ae: WORD 'WF0B0' codep=0x224c wordp=0xf0b0 params=3 returns=0
// ================================================

void WF0B0() // WF0B0
{
  unsigned short int a;
  a = Pop(); // >R
  _dash_(); // -
  Push(Pop() * a); //  R> *
  Push(pp_WEDD9); // WEDD9
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf0be: WORD 'WF0C0' codep=0x224c wordp=0xf0c0 params=2 returns=3
// ================================================

void WF0C0() // WF0C0
{
  SWAP(); // SWAP
  OVER(); // OVER
}


// ================================================
// 0xf0c6: WORD 'WF0C8' codep=0x224c wordp=0xf0c8
// ================================================

void WF0C8() // WF0C8
{
  Push(Pop() * Read16(cc__star_MAPSCA) - 1); //  *MAPSCA * 1-
  WF094(); // WF094
}


// ================================================
// 0xf0d2: WORD 'WF0D4' codep=0x224c wordp=0xf0d4
// ================================================

void WF0D4() // WF0D4
{
  Push(8);
  WF0C8(); // WF0C8
  Push(7);
  WF0C8(); // WF0C8
  WF0C0(); // WF0C0
  Push(1);
  WF0B0(); // WF0B0
  Push(6);
  WF0C8(); // WF0C8
  WF0C0(); // WF0C0
  Push(1);
  WF0B0(); // WF0B0
  Push(5);
  WF0C8(); // WF0C8
  WF0C0(); // WF0C0
  Push(2);
  WF0B0(); // WF0B0
  Push(4);
  WF0C8(); // WF0C8
  WF0C0(); // WF0C0
  Push(5);
  WF0B0(); // WF0B0
  Push(3);
  WF0C8(); // WF0C8
  WF0C0(); // WF0C0
  Push(0x000a);
  WF0B0(); // WF0B0
  Push(2);
  WF0C8(); // WF0C8
  WF0C0(); // WF0C0
  Push(0x000f);
  WF0B0(); // WF0B0
  Push(1);
  WF0C8(); // WF0C8
  WF0C0(); // WF0C0
  Push(0x0014);
  WF0B0(); // WF0B0
  Pop(); // DROP
}


// ================================================
// 0xf128: WORD 'WF12A' codep=0x1d29 wordp=0xf12a
// ================================================
// 0xf12a: db 0x3a 0x20 ': '

// ================================================
// 0xf12c: WORD 'WF12E' codep=0x224c wordp=0xf12e
// ================================================

void WF12E() // WF12E
{
  unsigned short int i, imax;
  Push(pp_WF12A); // WF12A
  _099(); // 099
  Push(Read16(pp__star_GLOBAL)); // *GLOBAL @
  IsICONS_dash__2(); // ?ICONS-_2
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {

    i = 0;
    imax = Pop();
    do // (DO)
    {
      WF05E(); // WF05E
      WF048(); // WF048
      if (Pop() != 0)
      {
        Push(pp_WF12A); // WF12A
        ON_2(); // ON_2
      }
      ICLOSE(); // ICLOSE
      i++;
    } while(i<imax); // (LOOP)

  }
  Push(Read16(pp_WF12A)); // WF12A @
}


// ================================================
// 0xf15a: WORD 'WF15C' codep=0x224c wordp=0xf15c
// ================================================

void WF15C() // WF15C
{
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  WF12E(); // WF12E
}


// ================================================
// 0xf164: WORD 'WF166' codep=0x224c wordp=0xf166
// ================================================

void WF166() // WF166
{
  Push(pp_WEDD9); // WEDD9
  _099(); // 099
  WF15C(); // WF15C
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  WF0D4(); // WF0D4
  Push(Read16(pp_WEDD9)); // WEDD9 @
  Push(0x005f);
  MIN(); // MIN
  Push(0x000a);
  MAX(); // MAX
  Push(pp_WEDD9); // WEDD9
  Store_2(); // !_2
}


// ================================================
// 0xf18a: WORD 'WF18C' codep=0x224c wordp=0xf18c
// ================================================

void WF18C() // WF18C
{
  unsigned short int i, imax;
  WEF81(); // WEF81
  BEEPON_2(); // BEEPON_2
  WF166(); // WF166

  i = 0x0064;
  imax = Read16(pp_WEDD9); // WEDD9 @
  do // (DO)
  {
    Push(i); // I
    Push(pp_WEFDC); // WEFDC
    Store_2(); // !_2
    WF018(); // WF018
    WEFE0(); // WEFE0
    Push(0x03e8 - i * 0x000a); // 0x03e8 I 0x000a * -
    TONE(); // TONE
    Push(0x0028);
    MS(); // MS
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf1c6: WORD 'WF1C8' codep=0x224c wordp=0xf1c8 params=0 returns=0
// ================================================

void WF1C8() // WF1C8
{
  Push(0);
  Push((0x0064 - Read16(pp_WEDD9)) * 2); // 0x0064 WEDD9 @ - 2*
  RRND(); // RRND
  Push(Pop() * 8); //  8 *
  Push(pp_WEDD5); // WEDD5
  Store_2(); // !_2
}


// ================================================
// 0xf1e2: WORD 'WF1E4' codep=0x224c wordp=0xf1e4 params=2 returns=3
// ================================================

void WF1E4() // WF1E4
{
  OVER(); // OVER
  Push(0);
  Push(0x07d0);
  WITHIN(); // WITHIN
  OVER(); // OVER
  Push(0);
  Push(0x06e0);
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf1fc: WORD 'WF1FE' codep=0x224c wordp=0xf1fe params=2 returns=2
// ================================================

void WF1FE() // WF1FE
{
  unsigned short int a;
  SWAP(); // SWAP
  Push(Read16(pp_WEDD5)); // WEDD5 @
  Push(Read16(regsp)); // DUP
  Push(Pop() >> 1); //  2/
  SWAP(); // SWAP
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  WEE1F(); // WEE1F
  SWAP(); // SWAP
  Push(0x00b4 - a); // 0x00b4 R> -
  WEE1F(); // WEE1F
}


// ================================================
// 0xf220: WORD 'WF222' codep=0x224c wordp=0xf222 params=0 returns=0
// ================================================

void WF222() // WF222
{
  unsigned short int a;
  WF1C8(); // WF1C8
  Push(Read16(pp_WEDD5)); // WEDD5 @
  if (Pop() == 0) return;
  while(1)
  {
    _2DUP(); // 2DUP
    WF1FE(); // WF1FE
    _2DUP(); // 2DUP
    WF12E(); // WF12E
    a = Pop(); // >R
    WF1E4(); // WF1E4
    Push(!Pop() | a); //  NOT R> OR
    if (Pop() == 0) break;

    Pop(); Pop(); // 2DROP
  }
  _2SWAP(); // 2SWAP
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf24e: WORD 'WF250' codep=0x224c wordp=0xf250 params=6 returns=1
// ================================================

void WF250() // WF250
{
  unsigned short int a;
  Push(6);
  PICK(); // PICK
  Push(6);
  PICK(); // PICK
  _2SWAP(); // 2SWAP
  D_st_(); // D<
  a = Pop(); // >R
  D_st_(); // D<
  Push(!Pop() & a); //  NOT R> AND
}


// ================================================
// 0xf268: WORD 'WF26A' codep=0x224c wordp=0xf26a params=0 returns=0
// ================================================

void WF26A() // WF26A
{
  Push(pp__10_star_CARG); // 10*CARG
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(0);
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  DMIN(); // DMIN
  D_plus_(); // D+
  Push(pp__10_star_CARG); // 10*CARG
  StoreD(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(0);
  D_dash_(); // D-
  Push2Words("NULL");
  DMAX(); // DMAX
  Push(pp__10_star_END); // 10*END
  StoreD(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(Read16(regsp)); // DUP
  Push(0x01f4);
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(5);
  ROLL(); // ROLL
  Push(0);
  D_plus_(); // D+
  WF250(); // WF250
  if (Pop() != 0)
  {
    Push(3);
    Push(0xc976); // '.EX'
    MODULE(); // MODULE
    return;
  }
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(Read16(regsp)); // DUP
  Push(0x0096);
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(5);
  ROLL(); // ROLL
  Push(0);
  D_plus_(); // D+
  WF250(); // WF250
  if (Pop() != 0)
  {
    Push(2);
    Push(0xc976); // '.EX'
    MODULE(); // MODULE
    return;
  }
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) return;
  Push(pp_IsAUTO); // ?AUTO
  ON_2(); // ON_2
  Push(1);
  Push(0xc976); // '.EX'
  MODULE(); // MODULE
  Push(Read16(pp_IsSUP)); // ?SUP @
  if (Pop() == 0) return;
  Push(0xc636); // 'OV-SH'
  MODULE(); // MODULE
}


// ================================================
// 0xf312: WORD 'WF314' codep=0x224c wordp=0xf314
// ================================================

void WF314() // WF314
{
  Push(Read16(pp__dash_END)); // -END @
  Push(0x05dc);
  Push(pp__dash_END); // -END
  Store_2(); // !_2
  WF26A(); // WF26A
  Push(pp__dash_END); // -END
  Store_2(); // !_2
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x0096);
  Push(0x65e1+WEDCB.offset); // WEDCB<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001a);
    Push(6);
    IFIND(); // IFIND
    if (Pop() != 0)
    {
      Push(Read16(0x65e1+INST_dash_QT.offset) - 0x0096); // INST-QT<IFIELD> @ 0x0096 -
      Push(0);
      MAX(); // MAX
      Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
      Store_2(); // !_2
    }
    CDROP(); // CDROP
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(Read16(pp__n_AUX)); // #AUX @
  Push(3);
  _st_(); // <
  if (Pop() == 0) return;
  WEDF7(); // WEDF7
}


// ================================================
// 0xf37e: WORD 'WF380' codep=0x224c wordp=0xf380 params=0 returns=0
// ================================================

void WF380() // WF380
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(Read16(pp_WEDD9)); // WEDD9 @
  _gt_(); // >
  if (Pop() == 0) return;
  WF222(); // WF222
}


// ================================================
// 0xf396: WORD 'WF398' codep=0x224c wordp=0xf398 params=1 returns=1
// ================================================

void WF398() // WF398
{
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(0x05db); Push(0x0000);
  D_gt_(); // D>
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    Push(0x6b65); Push(0x0002); // 'INSUFFICIENT FUEL'
    WEE31(); // WEE31
    DrawTTY(); // .TTY
  }
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf3bc: WORD 'WF3BE' codep=0x224c wordp=0xf3be params=0 returns=0
// ================================================

void WF3BE() // WF3BE
{
  Push(Read16(pp_WEDD5)==0?1:0); // WEDD5 @ 0=
  if (Pop() == 0) return;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NAV_dash_TIM); // NAV-TIM
  StoreD(); // D!
}


// ================================================
// 0xf3d2: WORD 'WF3D4' codep=0x224c wordp=0xf3d4 params=0 returns=1
// ================================================

void WF3D4() // WF3D4
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+WEDD0.offset)&0xFF); // WEDD0<IFIELD> C@
  ICLOSE(); // ICLOSE
  _gt_FLAG(); // >FLAG
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(0x6b83); Push(0x0002); // 'NO JUMP PODS AVAILABLE'
  WEE31(); // WEE31
  DrawTTY(); // .TTY
}


// ================================================
// 0xf3f4: WORD 'WF3F6' codep=0x224c wordp=0xf3f6 params=0 returns=0
// ================================================

void WF3F6() // WF3F6
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push((Read16(0x65e1+WEDD0.offset)&0xFF) - 1); // WEDD0<IFIELD> C@ 1-
  Push(0x65e1+WEDD0.offset); // WEDD0<IFIELD>
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf408: WORD 'WF40A' codep=0x224c wordp=0xf40a
// ================================================

void WF40A() // WF40A
{
  _gt_DISPLA(); // >DISPLA
  CTINIT(); // CTINIT
  _gt_SSCT(); // >SSCT
  Push(Read16(pp_WEDD5)==0?1:0); // WEDD5 @ 0=
  if (Pop() != 0)
  {
    Push(0x6ba6); Push(0x0002); // 'JUMP SUCCESSFUL! '
    WEE31(); // WEE31
    DrawTTY(); // .TTY
    return;
  }
  Push(0x6bc4); Push(0x0002); // 'GRAVITATIONAL DISTORTION ENCOUNTERED'
  WEE31(); // WEE31
  DrawTTY(); // .TTY
  Push(0x6c00); Push(0x0002); // 'WE HAVE MISSED THE TARGET SITE'
  WEE31(); // WEE31
  DrawTTY(); // .TTY
}


// ================================================
// 0xf43e: WORD 'WF440' codep=0x224c wordp=0xf440
// ================================================

void WF440() // WF440
{
  Push(0x6c2b); Push(0x0002); // 'ACTIVATING STARMAP'
  WEE31(); // WEE31
  DrawTTY(); // .TTY
  Push(0x03e8);
  MS(); // MS
  Push(0x6c4a); Push(0x0002); // 'SELECT DESTINATION'
  WEE31(); // WEE31
  DrawTTY(); // .TTY
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xf462: WORD 'WF464' codep=0x224c wordp=0xf464
// ================================================

void WF464() // WF464
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0x6c69); Push(0x0002); // 'JUMP PODS CONSUME 15 CM OF SHYNEUM.'
  WEE31(); // WEE31
  DrawTTY(); // .TTY
  Push(0x6c99); Push(0x0002); // 'PROCEED?  [NO   YES]'
  WEE31(); // WEE31
  DrawTTY(); // .TTY
  Y_slash_N(); // Y/N
}


// ================================================
// 0xf480: WORD 'WF482' codep=0x224c wordp=0xf482
// ================================================

void WF482() // WF482
{
  unsigned short int a, i, imax;
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(Read16(pp_BEEPTONE)); // BEEPTONE @
  a = Pop(); // >R
  Push(0x01f4);
  Push(pp_BEEPTONE); // BEEPTONE
  Store_2(); // !_2

  i = 0;
  imax = 3;
  do // (DO)
  {
    Push(0x0025);
    Push(0x0085);
    POS_dot_(); // POS.
    _gt_DISPLA(); // >DISPLA
    Push(2);
    GetColor(BLACK);
    POLY_dash_ER(); // POLY-ER
    Push(0x0064);
    MS(); // MS
    WEFE0(); // WEFE0
    BEEP(); // BEEP
    Push(0x01f4);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

  Push(a); // R>
  Push(pp_BEEPTONE); // BEEPTONE
  Store_2(); // !_2
}


// ================================================
// 0xf4c8: WORD 'JUMP' codep=0x224c wordp=0xf4d1
// ================================================
// entry

void JUMP() // JUMP
{
  CTINIT(); // CTINIT
  WF3D4(); // WF3D4
  WF398(); // WF398
  if (Pop() == 0) return;
  WF440(); // WF440
  Push(0xd3c5); // 'OV/ST'
  MODULE(); // MODULE
  if (Pop() == 0) return;
  WEF65(); // WEF65
  WF464(); // WF464
  if (Pop() != 0)
  {
    Push(pp_WEDD5); // WEDD5
    _099(); // 099
    WF18C(); // WF18C
    WF166(); // WF166
    Push(Read16(pp_WEDD9)); // WEDD9 @
    Push(pp_WEFDC); // WEFDC
    Store_2(); // !_2
    WF018(); // WF018
    WF482(); // WF482
    Push(Read16(pp_HEADING)); // HEADING @
    Push(pp_EYEXY); // EYEXY
    _2_at_(); // 2@
    WF380(); // WF380
    WEE43(); // WEE43
    Push(0xc558); // 'JUMPF'
    MODULE(); // MODULE
    Push(0xcaeb); // 'JMPSHP'
    MODULE(); // MODULE
    WF3BE(); // WF3BE
    Push(0xcb2e); // 'OV.MVS'
    MODULE(); // MODULE
    WF40A(); // WF40A
    WF3F6(); // WF3F6
    WF314(); // WF314
    return;
  }
  SET_STR_AS_PARAM("CANCELLED");
  DrawTTY(); // .TTY
  Push(0xcb2e); // 'OV.MVS'
  MODULE(); // MODULE
}

// 0xf543: db 0x4a 0x55 0x4d 0x50 0x2d 0x56 0x4f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'JUMP-VO______________________ '

