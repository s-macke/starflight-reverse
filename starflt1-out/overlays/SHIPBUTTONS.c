// ====== OVERLAY 'SHIPBUTTONS' ======
// store offset = 0xeda0
// overlay size   = 0x07c0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WEDB6  codep:0x1d29 wordp:0xedb6 size:0x0002 C-string:'WEDB6'
//           WEDBA  codep:0x744d wordp:0xedba size:0x0003 C-string:'WEDBA'
//           WEDBF  codep:0x744d wordp:0xedbf size:0x0003 C-string:'WEDBF'
//           WEDC4  codep:0x744d wordp:0xedc4 size:0x0003 C-string:'WEDC4'
//           WEDC9  codep:0x744d wordp:0xedc9 size:0x0003 C-string:'WEDC9'
//           WEDCE  codep:0x224c wordp:0xedce size:0x0008 C-string:'WEDCE'
//           WEDD8  codep:0x224c wordp:0xedd8 size:0x0008 C-string:'WEDD8'
//           WEDE2  codep:0x224c wordp:0xede2 size:0x0008 C-string:'WEDE2'
//           WEDEC  codep:0x224c wordp:0xedec size:0x0036 C-string:'WEDEC'
//           WEE24  codep:0x224c wordp:0xee24 size:0x000a C-string:'WEE24'
//           WEE30  codep:0x224c wordp:0xee30 size:0x0018 C-string:'WEE30'
//           WEE4A  codep:0x224c wordp:0xee4a size:0x0020 C-string:'WEE4A'
//           WEE6C  codep:0x224c wordp:0xee6c size:0x004c C-string:'WEE6C'
//           WEEBA  codep:0x224c wordp:0xeeba size:0x0026 C-string:'WEEBA'
//           WEEE2  codep:0x224c wordp:0xeee2 size:0x0022 C-string:'WEEE2'
//           WEF06  codep:0x224c wordp:0xef06 size:0x0032 C-string:'WEF06'
//           WEF3A  codep:0x224c wordp:0xef3a size:0x0014 C-string:'WEF3A'
//           WEF50  codep:0x224c wordp:0xef50 size:0x000c C-string:'WEF50'
//           WEF5E  codep:0x224c wordp:0xef5e size:0x0008 C-string:'WEF5E'
//           WEF68  codep:0x224c wordp:0xef68 size:0x0022 C-string:'WEF68'
//           WEF8C  codep:0x224c wordp:0xef8c size:0x0006 C-string:'WEF8C'
//       (GET-AUX)  codep:0x4a4f wordp:0xefa0 size:0x0020 C-string:'_ro_GET_dash_AUX_rc_'
//           WEFC2  codep:0x224c wordp:0xefc2 size:0x0020 C-string:'WEFC2'
//           WEFE4  codep:0x224c wordp:0xefe4 size:0x0016 C-string:'WEFE4'
//           WEFFC  codep:0x224c wordp:0xeffc size:0x0026 C-string:'WEFFC'
//      1.1BTN.XEQ  codep:0x4a4f wordp:0xf031 size:0x000c C-string:'_1_dot_1BTN_dot_XEQ'
//           WF03F  codep:0x224c wordp:0xf03f size:0x0036 C-string:'WF03F'
//           WF077  codep:0x224c wordp:0xf077 size:0x001c C-string:'WF077'
//           WF095  codep:0x224c wordp:0xf095 size:0x00b1 C-string:'WF095'
//           WF148  codep:0x224c wordp:0xf148 size:0x0029 C-string:'WF148'
//      >DISEMBARK  codep:0x4a4f wordp:0xf180 size:0x000c C-string:'_gt_DISEMBARK'
//           WF18E  codep:0x224c wordp:0xf18e size:0x0052 C-string:'WF18E'
//           WF1E2  codep:0x224c wordp:0xf1e2 size:0x0012 C-string:'WF1E2'
//           WF1F6  codep:0x224c wordp:0xf1f6 size:0x0008 C-string:'WF1F6'
//           WF200  codep:0x224c wordp:0xf200 size:0x0008 C-string:'WF200'
//           WF20A  codep:0x224c wordp:0xf20a size:0x0008 C-string:'WF20A'
//        1BTN.XEQ  codep:0x4a4f wordp:0xf21f size:0x0018 C-string:'_1BTN_dot_XEQ'
//           WF239  codep:0x224c wordp:0xf239 size:0x000a C-string:'WF239'
//           WF245  codep:0x224c wordp:0xf245 size:0x000a C-string:'WF245'
//           WF251  codep:0x224c wordp:0xf251 size:0x0006 C-string:'WF251'
//        2BTN.XEQ  codep:0x4a4f wordp:0xf264 size:0x0010 C-string:'_2BTN_dot_XEQ'
//           WF276  codep:0x224c wordp:0xf276 size:0x000c C-string:'WF276'
//           WF284  codep:0x224c wordp:0xf284 size:0x000e C-string:'WF284'
//           WF294  codep:0x224c wordp:0xf294 size:0x0008 C-string:'WF294'
//           WF29E  codep:0x224c wordp:0xf29e size:0x000e C-string:'WF29E'
//           WF2AE  codep:0x224c wordp:0xf2ae size:0x0010 C-string:'WF2AE'
//        3BTN.XEQ  codep:0x4a4f wordp:0xf2cb size:0x0018 C-string:'_3BTN_dot_XEQ'
//           WF2E5  codep:0x224c wordp:0xf2e5 size:0x0006 C-string:'WF2E5'
//           WF2ED  codep:0x224c wordp:0xf2ed size:0x000a C-string:'WF2ED'
//        4BTN.XEQ  codep:0x4a4f wordp:0xf304 size:0x000c C-string:'_4BTN_dot_XEQ'
//           WF312  codep:0x224c wordp:0xf312 size:0x0008 C-string:'WF312'
//           WF31C  codep:0x224c wordp:0xf31c size:0x0008 C-string:'WF31C'
//        6BTN.XEQ  codep:0x4a4f wordp:0xf331 size:0x000c C-string:'_6BTN_dot_XEQ'
//           WF33F  codep:0x224c wordp:0xf33f size:0x001a C-string:'WF33F'
//           WF35B  codep:0x224c wordp:0xf35b size:0x0016 C-string:'WF35B'
//           WF373  codep:0x224c wordp:0xf373 size:0x0016 C-string:'WF373'
//           WF38B  codep:0x224c wordp:0xf38b size:0x0016 C-string:'WF38B'
//           WF3A3  codep:0x224c wordp:0xf3a3 size:0x000e C-string:'WF3A3'
//           WF3B3  codep:0x224c wordp:0xf3b3 size:0x0016 C-string:'WF3B3'
//        0BTN.XEQ  codep:0x4a4f wordp:0xf3d6 size:0x0018 C-string:'_0BTN_dot_XEQ'
//           WF3F0  codep:0x224c wordp:0xf3f0 size:0x000c C-string:'WF3F0'
//           WF3FE  codep:0x224c wordp:0xf3fe size:0x001a C-string:'WF3FE'
//           WF41A  codep:0x224c wordp:0xf41a size:0x0084 C-string:'WF41A'
//           WF4A0  codep:0x224c wordp:0xf4a0 size:0x000c C-string:'WF4A0'
//            >FLT  codep:0x224c wordp:0xf4b5 size:0x0000 C-string:'_gt_FLT'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_TRAK_dash_HR; // TRAK-HR
extern const unsigned short int pp_IsTV; // ?TV
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_Is_ask__ask_IT; // ???IT
extern const unsigned short int pp_IsLANDED; // ?LANDED
extern const unsigned short int pp_GWF; // GWF
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern const unsigned short int pp_FORCEPTASK; // FORCEPTASK
extern const unsigned short int pp_THIS_dash_BUTTON; // THIS-BUTTON
extern const unsigned short int pp_IsON_dash_PLA; // ?ON-PLA
extern const unsigned short int pp_IsRECALL; // ?RECALL
extern const unsigned short int pp__i_BUTTON; // 'BUTTON
extern const unsigned short int pp_BTN_dash_REC; // BTN-REC
extern const unsigned short int pp_Is_gt_OP; // ?>OP
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp__i_COMBAT; // 'COMBAT
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp__i__dot_DATE; // '.DATE
extern const unsigned short int pp_ENC_dash_TIME; // ENC-TIME
extern const unsigned short int pp_NAV_dash_TIME; // NAV-TIME
extern LoadDataType _1BTN; // 1BTN
extern LoadDataType ELEM_dash_VAL; // ELEM-VAL
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color GREY1; // GREY1
extern Color GREY2; // GREY2
extern Color BLUE; // BLUE
void MS(); // MS
void WITHIN(); // WITHIN
void Store_3(); // !_3
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void CDROP(); // CDROP
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void StoreCOLOR(); // !COLOR
void _gt_1FONT(); // >1FONT
void POS_dot_(); // POS.
void CTERASE(); // CTERASE
void CLICK(); // CLICK
void _gt_SND(); // >SND
void _do__dot_(); // $.
void POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
void TTY_dash_SCR(); // TTY-SCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void IsMRC(); // ?MRC
void ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
void DrawHIGHLI(); // .HIGHLI
void DrawON(); // .ON
void CLR_dash_BUT(); // CLR-BUT
void INIT_dash_BUTTON(); // INIT-BUTTON
void _ro_SHIP_dash_C(); // (SHIP-C
void _i_KEY(); // 'KEY
void IsTRIG(); // ?TRIG
void DrawABTN(); // .ABTN
void DrawBTN_dash_TEXT(); // .BTN-TEXT
void NEW_dash_BUT(); // NEW-BUT
void CFIGARRAYS(); // CFIGARRAYS
void GET_dash_HAUX(); // GET-HAUX
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void SWAP(); // SWAP
void _0_st_(); // 0<
void TIME(); // TIME
void GetEXECUTE(); // @EXECUTE
void _gt_V(); // >V
void V_gt_(); // V>
void V_gt_DISPLAY(); // V>DISPLAY
void _ro_XYSCAN_rc_(); // (XYSCAN)


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WEDB6 = 0xedb6; // WEDB6 size: 2
// {0x3a, 0x20}




// 0xedb2: db 0x78 0x00 'x '

// ================================================
// 0xedb4: WORD 'WEDB6' codep=0x1d29 wordp=0xedb6
// ================================================
// 0xedb6: db 0x3a 0x20 ': '

// ================================================
// 0xedb8: WORD 'WEDBA' codep=0x744d wordp=0xedba
// ================================================
IFieldType WEDBA = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xedbd: WORD 'WEDBF' codep=0x744d wordp=0xedbf
// ================================================
IFieldType WEDBF = {SHIPIDX, 0x34, 0x0f};

// ================================================
// 0xedc2: WORD 'WEDC4' codep=0x744d wordp=0xedc4
// ================================================
IFieldType WEDC4 = {ASSIGN_CREWIDX, 0x11, 0x12};

// ================================================
// 0xedc7: WORD 'WEDC9' codep=0x744d wordp=0xedc9
// ================================================
IFieldType WEDC9 = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xedcc: WORD 'WEDCE' codep=0x224c wordp=0xedce params=0 returns=0
// ================================================

void WEDCE() // WEDCE
{
  Push(0xbef3); // 'OV/STATUS'
  MODULE(); // MODULE
}


// ================================================
// 0xedd6: WORD 'WEDD8' codep=0x224c wordp=0xedd8 params=0 returns=0
// ================================================

void WEDD8() // WEDD8
{
  Push(0xbe2b); // 'OV/DA'
  MODULE(); // MODULE
}


// ================================================
// 0xede0: WORD 'WEDE2' codep=0x224c wordp=0xede2 params=0 returns=0
// ================================================

void WEDE2() // WEDE2
{
  Push(0xc48c); // '(.MERC)'
  MODULE(); // MODULE
}


// ================================================
// 0xedea: WORD 'WEDEC' codep=0x224c wordp=0xedec params=0 returns=0
// ================================================

void WEDEC() // WEDEC
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+WEDBA.offset)&0xFF); // WEDBA<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(Pop() & 8); //  8 AND
  if (Pop() != 0)
  {
    Push(0xcb4e); // 'OV-SH'
    MODULE(); // MODULE
    Push(0x02ee);
    MS(); // MS
  }
  Push(Pop() & 3); //  3 AND
  if (Pop() != 0)
  {
    Push(0xcb66); // 'OV-AR'
    MODULE(); // MODULE
    Push(0x02ee);
    MS(); // MS
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee22: WORD 'WEE24' codep=0x224c wordp=0xee24
// ================================================

void WEE24() // WEE24
{
  CLICK(); // CLICK
  Push(pp__i_BUTTON); // 'BUTTON
  GetEXECUTE(); // @EXECUTE
  CLICK(); // CLICK
}


// ================================================
// 0xee2e: WORD 'WEE30' codep=0x224c wordp=0xee30 params=2 returns=0
// ================================================

void WEE30() // WEE30
{
  POS_dot_(); // POS.
  Push(0x000e);
  GetColor(GREY1);
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  _gt_1FONT(); // >1FONT
  GetColor(BLACK);
  GetColor(GREY2);
  GetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xee48: WORD 'WEE4A' codep=0x224c wordp=0xee4a params=0 returns=6
// ================================================

void WEE4A() // WEE4A
{
  Push(0x0064);
  Push(0x01f4);
  Push(5);
  Push(3);
  Push(0x0064);
  Push(0x01f4);
  Push(3);
  _gt_SND(); // >SND
  Push(0x0096);
  MS(); // MS
}


// ================================================
// 0xee6a: WORD 'WEE6C' codep=0x224c wordp=0xee6c
// ================================================

void WEE6C() // WEE6C
{
  Push(0x0010);
  Push(0x0041);
  WEE30(); // WEE30
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(pp_RECORD_n_); // RECORD#
  OFF(); // OFF
  Push(Pop() - 1); //  1-
  Push(Read16(regsp)); // DUP
  Push(Pop() * 0x000c); //  0x000c *
  LoadData(_1BTN); // from 'BUTTONS'
  Push(Pop() + Pop()); // +
  Push(0x000c);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(0x0010);
  Push(0x003b);
  WEE30(); // WEE30
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(Pop() * 3 + (0x63ef+WEDC4.offset)); //  3 * WEDC4<IFIELD> +
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+WEDC9.offset); // WEDC9<IFIELD>
  _do__dot_(); // $.
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeeb8: WORD 'WEEBA' codep=0x224c wordp=0xeeba params=0 returns=0
// ================================================

void WEEBA() // WEEBA
{
  Push(0x0010);
  Push(0x0041);
  WEE30(); // WEE30
  PRINT("ISS", 3); // (.")
  Push(0x0010);
  Push(0x003b);
  WEE30(); // WEE30
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WEDBF.offset); // WEDBF<IFIELD>
  _do__dot_(); // $.
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeee0: WORD 'WEEE2' codep=0x224c wordp=0xeee2
// ================================================

void WEEE2() // WEEE2
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
      WEEBA(); // WEEBA
    } else
    {
      Push(Read16(regsp)); // DUP
      WEE6C(); // WEE6C
    }
  }
  DrawBTN_dash_TEXT(); // .BTN-TEXT
}


// ================================================
// 0xef04: WORD 'WEF06' codep=0x224c wordp=0xef06 params=0 returns=0
// ================================================

void WEF06() // WEF06
{
  V_gt_(); // V>
  Push(pp__i_BUTTON); // 'BUTTON
  Store_3(); // !_3
  V_gt_(); // V>
  Push(Read16(regsp)); // DUP
  Push(pp_THIS_dash_BUTTON); // THIS-BUTTON
  Store_3(); // !_3
  V_gt_(); // V>
  Push(Read16(regsp)); // DUP
  Push(pp_BTN_dash_REC); // BTN-REC
  Store_3(); // !_3
  CLR_dash_BUT(); // CLR-BUT
  Push(Read16(pp_WEDB6)==0?1:0); // WEDB6 @ 0=
  if (Pop() != 0)
  {
    WEEE2(); // WEEE2
    GetColor(BLUE);
    SWAP(); // SWAP
    DrawHIGHLI(); // .HIGHLI
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xef38: WORD 'WEF3A' codep=0x224c wordp=0xef3a params=0 returns=0
// ================================================

void WEF3A() // WEF3A
{
  Push(Read16(pp_BTN_dash_REC)); // BTN-REC @
  _gt_V(); // >V
  Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
  _gt_V(); // >V
  Push(Read16(pp__i_BUTTON)); // 'BUTTON @
  _gt_V(); // >V
}


// ================================================
// 0xef4e: WORD 'WEF50' codep=0x224c wordp=0xef50
// ================================================

void WEF50() // WEF50
{
  WEF3A(); // WEF3A
  WEEE2(); // WEEE2
  INIT_dash_BUTTON(); // INIT-BUTTON
  Push(pp__i_BUTTON); // 'BUTTON
  Store_3(); // !_3
}


// ================================================
// 0xef5c: WORD 'WEF5E' codep=0x224c wordp=0xef5e params=1 returns=0
// ================================================

void WEF5E() // WEF5E
{
  Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
  DrawON(); // .ON
}


// ================================================
// 0xef66: WORD 'WEF68' codep=0x224c wordp=0xef68
// ================================================

void WEF68() // WEF68
{
  _ro_XYSCAN_rc_(); // (XYSCAN) case
  Pop(); // DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    NEW_dash_BUT(); // NEW-BUT
  }
  IsTRIG(); // ?TRIG
  if (Pop() == 0) return;
  GetColor(BLUE);
  WEF5E(); // WEF5E
  Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
  WEE24(); // WEE24
  GetColor(BLACK);
  WEF5E(); // WEF5E
}


// ================================================
// 0xef8a: WORD 'WEF8C' codep=0x224c wordp=0xef8c params=0 returns=0
// ================================================

void WEF8C() // WEF8C
{
  GetColor(BLACK);
  ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
}


// ================================================
// 0xef92: WORD '(GET-AUX)' codep=0x4a4f wordp=0xefa0
// ================================================

void _ro_GET_dash_AUX_rc_() // (GET-AUX)
{
  switch(Pop()) // (GET-AUX)
  {
  case 1:
    WEDCE(); // WEDCE
    break;
  case 2:
    WEDCE(); // WEDCE
    break;
  case 3:
    WEDD8(); // WEDD8
    break;
  case 4:
    WEDE2(); // WEDE2
    break;
  case 5:
    GET_dash_HAUX(); // GET-HAUX
    break;
  case 6:
    GET_dash_HAUX(); // GET-HAUX
    break;
  case 8:
    WEDE2(); // WEDE2
    break;
  default:
    WEF8C(); // WEF8C
    break;

  }
}

// ================================================
// 0xefc0: WORD 'WEFC2' codep=0x224c wordp=0xefc2
// ================================================

void WEFC2() // WEFC2
{
  GetColor(BLACK);
  _ro_SHIP_dash_C(); // (SHIP-C
  Push(0xcc3e); // 'OV.MVS'
  MODULE(); // MODULE
  Push(Read16(pp__n_AUX)); // #AUX @
  _ro_GET_dash_AUX_rc_(); // (GET-AUX) case
  Push(Read16(pp_BTN_dash_REC)); // BTN-REC @
  WEEE2(); // WEEE2
  GetColor(BLUE);
  Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
  DrawHIGHLI(); // .HIGHLI
}


// ================================================
// 0xefe2: WORD 'WEFE4' codep=0x224c wordp=0xefe4 params=0 returns=0
// ================================================

void WEFE4() // WEFE4
{
  Push(Read16(pp__n_AUX)==8?1:0); // #AUX @ 8 =
  if (Pop() != 0)
  {
    WEDE2(); // WEDE2
  }
  Push(0xc4a2); // '(GETSITE)'
  MODULE(); // MODULE
}


// ================================================
// 0xeffa: WORD 'WEFFC' codep=0x224c wordp=0xeffc params=0 returns=0
// ================================================

void WEFFC() // WEFFC
{
  Push(5);
  Push(0xbdef); // 'OV?.EQUIP-OK'
  MODULE(); // MODULE
  if (Pop() == 0) return;
  Push(0xd342); // 'TRY-LAND'
  MODULE(); // MODULE
  Push(Read16(pp_GWF)); // GWF @
  _0_st_(); // 0<
  if (Pop() == 0) return;
  Push(0xd214); // 'OV>DE'
  MODULE(); // MODULE
  Push(!Pop()); //  NOT
}


// ================================================
// 0xf022: WORD '1.1BTN.XEQ' codep=0x4a4f wordp=0xf031
// ================================================

void _1_dot_1BTN_dot_XEQ() // 1.1BTN.XEQ
{
  switch(Pop()) // 1.1BTN.XEQ
  {
  case 0:
    WEFE4(); // WEFE4
    break;
  case 1:
    WEFFC(); // WEFFC
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf03d: WORD 'WF03F' codep=0x224c wordp=0xf03f params=0 returns=2
// ================================================

void WF03F() // WF03F
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("REPORT TO OPERATIONS FOR EVALUATION");
  DrawTTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
  Push(pp_Is_gt_OP); // ?>OP
  ON_3(); // ON_3
}


// ================================================
// 0xf075: WORD 'WF077' codep=0x224c wordp=0xf077 params=2 returns=2
// ================================================

void WF077() // WF077
{
  WEDEC(); // WEDEC
  Push(!Read16(pp_IsTV) | Read16(pp_IsRECALL)); // ?TV @ NOT ?RECALL @ OR
  if (Pop() != 0)
  {
    WF03F(); // WF03F
  }
  Push(!Pop()); //  NOT
  SWAP(); // SWAP
  Push(!Pop()); //  NOT
}


// ================================================
// 0xf093: WORD 'WF095' codep=0x224c wordp=0xf095 params=0 returns=0
// ================================================

void WF095() // WF095
{
  Push(Read16(pp_IsTV)); // ?TV @
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    CTERASE(); // CTERASE
    Push(pp_Is_ask__ask_IT); // ???IT
    OFF(); // OFF
    Push(pp_IsON_dash_PLA); // ?ON-PLA
    ON_3(); // ON_3
    WEDEC(); // WEDEC
    SET_STR_AS_PARAM("STANDBY...SCANNING PLANET.");
    DrawTTY(); // .TTY
    Push(Read16(pp_PLHI)==-1?1:0); // PLHI @ -1 =
    if (Pop() != 0)
    {
      Push(pp_IsLANDED); // ?LANDED
      ON_3(); // ON_3
      Push(0xccfa); // 'BIO'
      MODULE(); // MODULE
    }
    Push(0xd0bf); // 'TV'
    MODULE(); // MODULE
    Push(0xbd4a); // '=CARGO'
    MODULE(); // MODULE
    _i_KEY(); // 'KEY
    Pop(); // DROP
    Push(pp_IsON_dash_PLA); // ?ON-PLA
    OFF(); // OFF
    WEFC2(); // WEFC2
    Push(0xc3e1); // 'SEEGRID'
    MODULE(); // MODULE
  } else
  {
    CTINIT(); // CTINIT
    SET_STR_AS_PARAM("THE SHIP IS NO LONGER EQUIPPED");
    DrawTTY(); // .TTY
    SET_STR_AS_PARAM("WITH A TERRAIN VEHICLE");
    DrawTTY(); // .TTY
  }
  Push(pp_WEDB6); // WEDB6
  OFF(); // OFF
}


// ================================================
// 0xf146: WORD 'WF148' codep=0x224c wordp=0xf148 params=0 returns=0
// ================================================

void WF148() // WF148
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("WE CAN'T DISEMBARK IN SPACE!", 28); // (.")
  Push(pp_WEDB6); // WEDB6
  OFF(); // OFF
}


// ================================================
// 0xf171: WORD '>DISEMBARK' codep=0x4a4f wordp=0xf180
// ================================================

void _gt_DISEMBARK() // >DISEMBARK
{
  switch(Pop()) // >DISEMBARK
  {
  case 5:
    WF077(); // WF077
    break;
  case 0:
    WF095(); // WF095
    break;
  default:
    WF148(); // WF148
    break;

  }
}

// ================================================
// 0xf18c: WORD 'WF18E' codep=0x224c wordp=0xf18e
// ================================================

void WF18E() // WF18E
{
  Push((!Read16(pp_IsTV) | Read16(pp_IsRECALL)) & (Read16(pp_CONTEXT_dash_ID_n_)==5?1:0)); // ?TV @ NOT ?RECALL @ OR CONTEXT-ID# @ 5 = AND
  if (Pop() != 0)
  {
    WF03F(); // WF03F
    return;
  }
  Push(0xd204); // 'OV/LA'
  MODULE(); // MODULE
  Push(0xbf56); // '/STARDATE'
  Push(pp__i__dot_DATE); // '.DATE
  Store_3(); // !_3
  if (Pop() != 0)
  {
    WEE4A(); // WEE4A
    WEDE2(); // WEDE2
    Push(0xef06); // 'WEF06'
    Push(0xef68); // 'WEF68'
    Push(0xf031); // '1.1BTN.XEQ'
    Push(7);
    Push(0xef50); // 'WEF50'
    DOTASKS2(WEF50, WEF50, WEF50, WEF50);
  }
  Push(1);
  Push(0);
  DrawABTN(); // .ABTN
}


// ================================================
// 0xf1e0: WORD 'WF1E2' codep=0x224c wordp=0xf1e2
// ================================================

void WF1E2() // WF1E2
{
  Push(0xbd4a); // '=CARGO'
  MODULE(); // MODULE
  Push(pp_WEDB6); // WEDB6
  ON_3(); // ON_3
  Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
  _gt_DISEMBARK(); // >DISEMBARK case
}


// ================================================
// 0xf1f4: WORD 'WF1F6' codep=0x224c wordp=0xf1f6 params=0 returns=0
// ================================================

void WF1F6() // WF1F6
{
  Push(0xd1e4); // 'OV/IT'
  MODULE(); // MODULE
}


// ================================================
// 0xf1fe: WORD 'WF200' codep=0x224c wordp=0xf200 params=0 returns=0
// ================================================

void WF200() // WF200
{
  Push(0xd224); // 'OV/LO'
  MODULE(); // MODULE
}


// ================================================
// 0xf208: WORD 'WF20A' codep=0x224c wordp=0xf20a params=0 returns=0
// ================================================

void WF20A() // WF20A
{
  Push(0xd1f4); // 'OV/CA'
  MODULE(); // MODULE
}


// ================================================
// 0xf212: WORD '1BTN.XEQ' codep=0x4a4f wordp=0xf21f
// ================================================

void _1BTN_dot_XEQ() // 1BTN.XEQ
{
  switch(Pop()) // 1BTN.XEQ
  {
  case 0:
    WF18E(); // WF18E
    break;
  case 1:
    WF1E2(); // WF1E2
    break;
  case 2:
    WF1F6(); // WF1F6
    break;
  case 3:
    WF200(); // WF200
    break;
  case 4:
    WF20A(); // WF20A
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf237: WORD 'WF239' codep=0x224c wordp=0xf239 params=0 returns=6
// ================================================

void WF239() // WF239
{
  WEE4A(); // WEE4A
  Push(0xbf31); // 'OV/SENSORS'
  MODULE(); // MODULE
}


// ================================================
// 0xf243: WORD 'WF245' codep=0x224c wordp=0xf245 params=0 returns=1
// ================================================

void WF245() // WF245
{
  Push(1);
  Push(0xd2ba); // 'OV/ANALYSIS'
  MODULE(); // MODULE
}


// ================================================
// 0xf24f: WORD 'WF251' codep=0x224c wordp=0xf251 params=0 returns=6
// ================================================

void WF251() // WF251
{
  WEE4A(); // WEE4A
  WEDCE(); // WEDCE
}


// ================================================
// 0xf257: WORD '2BTN.XEQ' codep=0x4a4f wordp=0xf264
// ================================================

void _2BTN_dot_XEQ() // 2BTN.XEQ
{
  switch(Pop()) // 2BTN.XEQ
  {
  case 0:
    WF239(); // WF239
    break;
  case 1:
    WF245(); // WF245
    break;
  case 2:
    WF251(); // WF251
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf274: WORD 'WF276' codep=0x224c wordp=0xf276
// ================================================

void WF276() // WF276
{
  Push(0xcbbf); // 'MANEUVER'
  MODULE(); // MODULE
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xf282: WORD 'WF284' codep=0x224c wordp=0xf284 params=1 returns=0
// ================================================

void WF284() // WF284
{
  Push(0xd2fa); // 'OV/STARMAP'
  MODULE(); // MODULE
  if (Pop() == 0) return;
  WEFC2(); // WEFC2
}


// ================================================
// 0xf292: WORD 'WF294' codep=0x224c wordp=0xf294 params=0 returns=0
// ================================================

void WF294() // WF294
{
  Push(0xcb3e); // 'OV/(U'
  MODULE(); // MODULE
}


// ================================================
// 0xf29c: WORD 'WF29E' codep=0x224c wordp=0xf29e
// ================================================

void WF29E() // WF29E
{
  Push(0xcb2e); // 'OV/(D'
  MODULE(); // MODULE
  Push(3);
  Push(3);
  DrawABTN(); // .ABTN
}


// ================================================
// 0xf2ac: WORD 'WF2AE' codep=0x224c wordp=0xf2ae params=0 returns=0
// ================================================

void WF2AE() // WF2AE
{
  Push(pp_FORCEPTASK); // FORCEPTASK
  ON_3(); // ON_3
  Push(Read16(pp__i_COMBAT)); // 'COMBAT @
  MODULE(); // MODULE
  Push(pp_FORCEPTASK); // FORCEPTASK
  OFF(); // OFF
}


// ================================================
// 0xf2be: WORD '3BTN.XEQ' codep=0x4a4f wordp=0xf2cb
// ================================================

void _3BTN_dot_XEQ() // 3BTN.XEQ
{
  switch(Pop()) // 3BTN.XEQ
  {
  case 0:
    WF276(); // WF276
    break;
  case 1:
    WF284(); // WF284
    break;
  case 2:
    WF294(); // WF294
    break;
  case 3:
    WF29E(); // WF29E
    break;
  case 4:
    WF2AE(); // WF2AE
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf2e3: WORD 'WF2E5' codep=0x224c wordp=0xf2e5 params=0 returns=6
// ================================================

void WF2E5() // WF2E5
{
  WEE4A(); // WEE4A
  WEDD8(); // WEDD8
}


// ================================================
// 0xf2eb: WORD 'WF2ED' codep=0x224c wordp=0xf2ed params=0 returns=6
// ================================================

void WF2ED() // WF2ED
{
  WEE4A(); // WEE4A
  Push(0xbe3b); // 'OV/RE'
  MODULE(); // MODULE
}


// ================================================
// 0xf2f7: WORD '4BTN.XEQ' codep=0x4a4f wordp=0xf304
// ================================================

void _4BTN_dot_XEQ() // 4BTN.XEQ
{
  switch(Pop()) // 4BTN.XEQ
  {
  case 0:
    WF2E5(); // WF2E5
    break;
  case 1:
    WF2ED(); // WF2ED
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf310: WORD 'WF312' codep=0x224c wordp=0xf312 params=0 returns=0
// ================================================

void WF312() // WF312
{
  Push(0xd266); // 'OV/EXAMINE'
  MODULE(); // MODULE
}


// ================================================
// 0xf31a: WORD 'WF31C' codep=0x224c wordp=0xf31c params=0 returns=0
// ================================================

void WF31C() // WF31C
{
  Push(0xd279); // 'OV/TREAT'
  MODULE(); // MODULE
}


// ================================================
// 0xf324: WORD '6BTN.XEQ' codep=0x4a4f wordp=0xf331
// ================================================

void _6BTN_dot_XEQ() // 6BTN.XEQ
{
  switch(Pop()) // 6BTN.XEQ
  {
  case 0:
    WF312(); // WF312
    break;
  case 1:
    WF31C(); // WF31C
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf33d: WORD 'WF33F' codep=0x224c wordp=0xf33f
// ================================================

void WF33F() // WF33F
{
  Push(0xef06); // 'WEF06'
  Push(0xef68); // 'WEF68'
  Push(0xf21f); // '1BTN.XEQ'
  Push(1);
  Push(0xef50); // 'WEF50'
  DOTASKS2(WEF50, WEF50, WEF50, WEF50);
  Push(pp_WEDB6); // WEDB6
  OFF(); // OFF
}


// ================================================
// 0xf359: WORD 'WF35B' codep=0x224c wordp=0xf35b
// ================================================

void WF35B() // WF35B
{
  Push(0xef06); // 'WEF06'
  Push(0xef68); // 'WEF68'
  Push(0xf264); // '2BTN.XEQ'
  Push(2);
  Push(0xef50); // 'WEF50'
  DOTASKS2(WEF50, WEF50, WEF50, WEF50);
}


// ================================================
// 0xf371: WORD 'WF373' codep=0x224c wordp=0xf373
// ================================================

void WF373() // WF373
{
  Push(0xef06); // 'WEF06'
  Push(0xef68); // 'WEF68'
  Push(0xf2cb); // '3BTN.XEQ'
  Push(3);
  Push(0xef50); // 'WEF50'
  DOTASKS2(WEF50, WEF50, WEF50, WEF50);
}


// ================================================
// 0xf389: WORD 'WF38B' codep=0x224c wordp=0xf38b
// ================================================

void WF38B() // WF38B
{
  Push(0xef06); // 'WEF06'
  Push(0xef68); // 'WEF68'
  Push(0xf304); // '4BTN.XEQ'
  Push(4);
  Push(0xef50); // 'WEF50'
  DOTASKS2(WEF50, WEF50, WEF50, WEF50);
}


// ================================================
// 0xf3a1: WORD 'WF3A3' codep=0x224c wordp=0xf3a3
// ================================================

void WF3A3() // WF3A3
{
  Push(5);
  WEE6C(); // WEE6C
  Push(0xc1a8); // 'U-COMM'
  MODULE(); // MODULE
  WEEBA(); // WEEBA
}


// ================================================
// 0xf3b1: WORD 'WF3B3' codep=0x224c wordp=0xf3b3
// ================================================

void WF3B3() // WF3B3
{
  Push(0xef06); // 'WEF06'
  Push(0xef68); // 'WEF68'
  Push(0xf331); // '6BTN.XEQ'
  Push(6);
  Push(0xef50); // 'WEF50'
  DOTASKS2(WEF50, WEF50, WEF50, WEF50);
}


// ================================================
// 0xf3c9: WORD '0BTN.XEQ' codep=0x4a4f wordp=0xf3d6
// ================================================

void _0BTN_dot_XEQ() // 0BTN.XEQ
{
  switch(Pop()) // 0BTN.XEQ
  {
  case 0:
    WF33F(); // WF33F
    break;
  case 1:
    WF35B(); // WF35B
    break;
  case 2:
    WF373(); // WF373
    break;
  case 3:
    WF38B(); // WF38B
    break;
  case 4:
    WF3A3(); // WF3A3
    break;
  default:
    WF3B3(); // WF3B3
    break;

  }
}

// ================================================
// 0xf3ee: WORD 'WF3F0' codep=0x224c wordp=0xf3f0 params=0 returns=0
// ================================================

void WF3F0() // WF3F0
{
  V_gt_(); // V>
  V_gt_(); // V>
  V_gt_(); // V>
  Pop(); // DROP
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf3fc: WORD 'WF3FE' codep=0x224c wordp=0xf3fe
// ================================================

void WF3FE() // WF3FE
{
  Push(0xf3f0); // 'WF3F0'
  Push(0xef68); // 'WEF68'
  Push(0xf3d6); // '0BTN.XEQ'
  Push(0);
  Push(0xef50); // 'WEF50'
  DOTASKS2(WEF50, WEF50, WEF50, WEF50);
  Push(pp_WEDB6); // WEDB6
  OFF(); // OFF
}


// ================================================
// 0xf418: WORD 'WF41A' codep=0x224c wordp=0xf41a params=0 returns=4
// ================================================

void WF41A() // WF41A
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  SET_STR_AS_PARAM("SHIP COMPUTER ACTIVATED");
  DrawTTY(); // .TTY
  Push(0xbef3); // 'OV/STATUS'
  MODULE(); // MODULE
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("PRE-LAUNCH PROCEDURES COMPLETE");
  DrawTTY(); // .TTY
  Push(0x00fa);
  MS(); // MS
  SET_STR_AS_PARAM("STANDING BY TO INITIATE LAUNCH");
  DrawTTY(); // .TTY
  Push(0x00fa);
  MS(); // MS
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR
}


// ================================================
// 0xf49e: WORD 'WF4A0' codep=0x224c wordp=0xf4a0 params=0 returns=4
// ================================================

void WF4A0() // WF4A0
{
  Push(0xd1a8); // '.AIRL'
  MODULE(); // MODULE
  V_gt_DISPLAY(); // V>DISPLAY
  WF41A(); // WF41A
}


// ================================================
// 0xf4ac: WORD '>FLT' codep=0x224c wordp=0xf4b5
// ================================================
// entry

void _gt_FLT() // >FLT
{
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(6);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Push(Read16(Pop()) * 2); //  @ 2*
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Store_3(); // !_3
  SET_dash_CURRENT(); // SET-CURRENT
  TIME(); // TIME
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  Push(pp_NAV_dash_TIME); // NAV-TIME
  StoreD(); // D!
  Push(pp_ENC_dash_TIME); // ENC-TIME
  StoreD(); // D!
  Push(Read16(pp_STAR_dash_HR)); // STAR-HR @
  Push(pp_TRAK_dash_HR); // TRAK-HR
  Store_3(); // !_3
  CFIGARRAYS(); // CFIGARRAYS
  GetColor(GREY2);
  _ro_SHIP_dash_C(); // (SHIP-C
  Push(Read16(pp_CONTEXT_dash_ID_n_)==5?1:0); // CONTEXT-ID# @ 5 =
  if (Pop() != 0)
  {
    WF4A0(); // WF4A0
  }
  Push(pp_WEDB6); // WEDB6
  OFF(); // OFF
  WF3FE(); // WF3FE
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(6);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Push(Read16(Pop()) >> 1); //  @ 2/
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Store_3(); // !_3
  SET_dash_CURRENT(); // SET-CURRENT
}

// 0xf51b: db 0x42 0x54 0x4e 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x42 0x55 0x54 0x54 0x4f 0x4e 0x53 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x32 0x31 0x32 0x30 0x2d 0x00 'BTN-VOC_________________________ for BUTTONS-------------------)2120- '

