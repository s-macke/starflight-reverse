// ====== OVERLAY 'SHIPBUTTONS' ======
// store offset = 0xebe0
// overlay size   = 0x0980

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WEBF6  codep:0x1d29 wordp:0xebf6 size:0x0002 C-string:'WEBF6'
//           WEBFA  codep:0x7420 wordp:0xebfa size:0x0003 C-string:'WEBFA'
//           WEBFF  codep:0x7420 wordp:0xebff size:0x0003 C-string:'WEBFF'
//           WEC04  codep:0x7420 wordp:0xec04 size:0x0003 C-string:'WEC04'
//           WEC09  codep:0x7420 wordp:0xec09 size:0x0003 C-string:'WEC09'
//           WEC0E  codep:0x7394 wordp:0xec0e size:0x0006 C-string:'WEC0E'
//           WEC16  codep:0x224c wordp:0xec16 size:0x0008 C-string:'WEC16'
//           WEC20  codep:0x224c wordp:0xec20 size:0x0008 C-string:'WEC20'
//           WEC2A  codep:0x224c wordp:0xec2a size:0x0008 C-string:'WEC2A'
//           WEC34  codep:0x224c wordp:0xec34 size:0x0036 C-string:'WEC34'
//           WEC6C  codep:0x224c wordp:0xec6c size:0x000a C-string:'WEC6C'
//           WEC78  codep:0x224c wordp:0xec78 size:0x0018 C-string:'WEC78'
//           WEC92  codep:0x224c wordp:0xec92 size:0x0020 C-string:'WEC92'
//           WECB4  codep:0x224c wordp:0xecb4 size:0x0036 C-string:'WECB4'
//           WECEC  codep:0x224c wordp:0xecec size:0x004c C-string:'WECEC'
//           WED3A  codep:0x224c wordp:0xed3a size:0x0026 C-string:'WED3A'
//           WED62  codep:0x224c wordp:0xed62 size:0x0022 C-string:'WED62'
//           WED86  codep:0x224c wordp:0xed86 size:0x0032 C-string:'WED86'
//           WEDBA  codep:0x224c wordp:0xedba size:0x0014 C-string:'WEDBA'
//           WEDD0  codep:0x224c wordp:0xedd0 size:0x0014 C-string:'WEDD0'
//           WEDE6  codep:0x224c wordp:0xede6 size:0x000c C-string:'WEDE6'
//           WEDF4  codep:0x224c wordp:0xedf4 size:0x003a C-string:'WEDF4'
//           WEE30  codep:0x224c wordp:0xee30 size:0x0008 C-string:'WEE30'
//           WEE3A  codep:0x224c wordp:0xee3a size:0x0022 C-string:'WEE3A'
//           WEE5E  codep:0x224c wordp:0xee5e size:0x0016 C-string:'WEE5E'
//           WEE76  codep:0x224c wordp:0xee76 size:0x0006 C-string:'WEE76'
//       (GET-AUX)  codep:0x4b3b wordp:0xee8a size:0x0020 C-string:'_ro_GET_dash_AUX_rc_'
//           WEEAC  codep:0x224c wordp:0xeeac size:0x0020 C-string:'WEEAC'
//           WEECE  codep:0x224c wordp:0xeece size:0x0016 C-string:'WEECE'
//           WEEE6  codep:0x224c wordp:0xeee6 size:0x0026 C-string:'WEEE6'
//      1.1BTN.XEQ  codep:0x4b3b wordp:0xef1b size:0x000c C-string:'_1_dot_1BTN_dot_XEQ'
//           WEF29  codep:0x224c wordp:0xef29 size:0x0012 C-string:'WEF29'
//           WEF3D  codep:0x224c wordp:0xef3d size:0x00b3 C-string:'WEF3D'
//           WEFF2  codep:0x224c wordp:0xeff2 size:0x0029 C-string:'WEFF2'
//      >DISEMBARK  codep:0x4b3b wordp:0xf02a size:0x000c C-string:'_gt_DISEMBARK'
//           WF038  codep:0x224c wordp:0xf038 size:0x0048 C-string:'WF038'
//           WF082  codep:0x224c wordp:0xf082 size:0x0012 C-string:'WF082'
//           WF096  codep:0x224c wordp:0xf096 size:0x0008 C-string:'WF096'
//           WF0A0  codep:0x224c wordp:0xf0a0 size:0x0008 C-string:'WF0A0'
//           WF0AA  codep:0x224c wordp:0xf0aa size:0x002c C-string:'WF0AA'
//        1BTN.XEQ  codep:0x4b3b wordp:0xf0e3 size:0x0018 C-string:'_1BTN_dot_XEQ'
//           WF0FD  codep:0x224c wordp:0xf0fd size:0x001f C-string:'WF0FD'
//           WF11E  codep:0x224c wordp:0xf11e size:0x0052 C-string:'WF11E'
//           WF172  codep:0x224c wordp:0xf172 size:0x000a C-string:'WF172'
//           WF17E  codep:0x224c wordp:0xf17e size:0x000a C-string:'WF17E'
//           WF18A  codep:0x224c wordp:0xf18a size:0x0006 C-string:'WF18A'
//        2BTN.XEQ  codep:0x4b3b wordp:0xf19d size:0x0014 C-string:'_2BTN_dot_XEQ'
//           WF1B3  codep:0x224c wordp:0xf1b3 size:0x000c C-string:'WF1B3'
//           WF1C1  codep:0x224c wordp:0xf1c1 size:0x000e C-string:'WF1C1'
//           WF1D1  codep:0x224c wordp:0xf1d1 size:0x0008 C-string:'WF1D1'
//           WF1DB  codep:0x224c wordp:0xf1db size:0x000e C-string:'WF1DB'
//           WF1EB  codep:0x224c wordp:0xf1eb size:0x0010 C-string:'WF1EB'
//        3BTN.XEQ  codep:0x4b3b wordp:0xf208 size:0x0018 C-string:'_3BTN_dot_XEQ'
//           WF222  codep:0x224c wordp:0xf222 size:0x0006 C-string:'WF222'
//           WF22A  codep:0x224c wordp:0xf22a size:0x000a C-string:'WF22A'
//           WF236  codep:0x224c wordp:0xf236 size:0x0008 C-string:'WF236'
//        4BTN.XEQ  codep:0x4b3b wordp:0xf24b size:0x0010 C-string:'_4BTN_dot_XEQ'
//           WF25D  codep:0x224c wordp:0xf25d size:0x0018 C-string:'WF25D'
//           WF277  codep:0x224c wordp:0xf277 size:0x0010 C-string:'WF277'
//           WF289  codep:0x224c wordp:0xf289 size:0x0008 C-string:'WF289'
//           WF293  codep:0x224c wordp:0xf293 size:0x0008 C-string:'WF293'
//        6BTN.XEQ  codep:0x4b3b wordp:0xf2a8 size:0x000c C-string:'_6BTN_dot_XEQ'
//           WF2B6  codep:0x224c wordp:0xf2b6 size:0x001a C-string:'WF2B6'
//           WF2D2  codep:0x224c wordp:0xf2d2 size:0x0016 C-string:'WF2D2'
//           WF2EA  codep:0x224c wordp:0xf2ea size:0x0016 C-string:'WF2EA'
//           WF302  codep:0x224c wordp:0xf302 size:0x0016 C-string:'WF302'
//           WF31A  codep:0x224c wordp:0xf31a size:0x000e C-string:'WF31A'
//           WF32A  codep:0x224c wordp:0xf32a size:0x0016 C-string:'WF32A'
//      [0BTN.XEQ]  codep:0x4b3b wordp:0xf34f size:0x0018 C-string:'_bo_0BTN_dot_XEQ_bc_'
//           WF369  codep:0x224c wordp:0xf369 size:0x0048 C-string:'WF369'
//           WF3B3  codep:0x224c wordp:0xf3b3 size:0x009d C-string:'WF3B3'
//           WF452  codep:0x224c wordp:0xf452 size:0x000c C-string:'WF452'
//           WF460  codep:0x224c wordp:0xf460 size:0x001a C-string:'WF460'
//           WF47C  codep:0x224c wordp:0xf47c size:0x0084 C-string:'WF47C'
//           WF502  codep:0x224c wordp:0xf502 size:0x000c C-string:'WF502'
//            >FLT  codep:0x224c wordp:0xf517 size:0x0000 C-string:'_gt_FLT'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp_TRAK_dash_HR; // TRAK-HR
extern const unsigned short int pp_IsTV; // ?TV
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_IsLANDED; // ?LANDED
extern const unsigned short int pp_Is3; // ?3
extern const unsigned short int pp_GWF; // GWF
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_FORCEPT; // FORCEPT
extern const unsigned short int pp_THIS_dash_BU; // THIS-BU
extern const unsigned short int pp_IsON_dash_PLA; // ?ON-PLA
extern const unsigned short int pp_IsRECALL; // ?RECALL
extern const unsigned short int pp__i_BUTTON; // 'BUTTON
extern const unsigned short int pp_BTN_dash_REC; // BTN-REC
extern const unsigned short int pp_Is_gt_OP; // ?>OP
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp__i_COMBAT; // 'COMBAT
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp__i__dot_DATE; // '.DATE
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp_HAZE; // HAZE
extern const unsigned short int pp__pe_SLUG; // %SLUG
extern const unsigned short int pp_ENC_dash_TIM; // ENC-TIM
extern const unsigned short int pp_NAV_dash_TIM; // NAV-TIM
extern const unsigned short int pp__ro_SYSTEM; // (SYSTEM
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp__ro_ENCOUN; // (ENCOUN
extern LoadDataType _1BTN; // 1BTN
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color GREY1; // GREY1
extern Color GREY2; // GREY2
extern Color BLUE; // BLUE
extern Color WHITE; // WHITE
extern IFieldType INST_dash_SI; // INST-SI
void MIN(); // MIN
void BEEP(); // BEEP
void MS(); // MS
void D_dash_(); // D-
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void _3_star_(); // 3*
void RRND(); // RRND
void Store_2(); // !_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void GetINST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void _gt_1FONT(); // >1FONT
void V_gt_DISPL(); // V>DISPL
void POS_dot_(); // POS.
void CTERASE(); // CTERASE
void CLICK(); // CLICK
void _gt_SND(); // >SND
void _do__dot_(); // $.
void POLY_dash_ER(); // POLY-ER
void TTY_dash_SCR(); // TTY-SCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void IsMRC(); // ?MRC
void ERASE_dash_A(); // ERASE-A
void DrawHIGHLI(); // .HIGHLI
void DrawON(); // .ON
void CLR_dash_BUT(); // CLR-BUT
void INIT_dash_BU(); // INIT-BU
void _ro_SHIP_dash_C(); // (SHIP-C
void _i_KEY(); // 'KEY
void IsTRIG(); // ?TRIG
void DrawABTN(); // .ABTN
void DrawBTN_dash_TE(); // .BTN-TE
void NEW_dash_BUT(); // NEW-BUT
void GET_dash_HA(); // GET-HA
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void SWAP(); // SWAP
void _st_(); // <
void _0_st_(); // 0<
void TIME(); // TIME
void GetEXECUTE(); // @EXECUTE
void _1_dot_5_at_(); // 1.5@
void CI(); // CI
void _gt_V(); // >V
void V_gt_(); // V>
void _ro_XYSCAN(); // (XYSCAN


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WEBF6 = 0xebf6; // WEBF6 size: 2
// {0x3a, 0x20}




// 0xebf2: db 0x97 0x00 '  '

// ================================================
// 0xebf4: WORD 'WEBF6' codep=0x1d29 wordp=0xebf6
// ================================================
// 0xebf6: db 0x3a 0x20 ': '

// ================================================
// 0xebf8: WORD 'WEBFA' codep=0x7420 wordp=0xebfa
// ================================================
IFieldType WEBFA = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xebfd: WORD 'WEBFF' codep=0x7420 wordp=0xebff
// ================================================
IFieldType WEBFF = {SHIPIDX, 0x34, 0x0f};

// ================================================
// 0xec02: WORD 'WEC04' codep=0x7420 wordp=0xec04
// ================================================
IFieldType WEC04 = {ASSIGN_CREWIDX, 0x11, 0x12};

// ================================================
// 0xec07: WORD 'WEC09' codep=0x7420 wordp=0xec09
// ================================================
IFieldType WEC09 = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xec0c: WORD 'WEC0E' codep=0x7394 wordp=0xec0e
// ================================================
LoadDataType WEC0E = {PLANETIDX, 0x16, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec14: WORD 'WEC16' codep=0x224c wordp=0xec16 params=0 returns=0
// ================================================

void WEC16() // WEC16
{
  Push(0xc090); // 'OV/STA'
  MODULE(); // MODULE
}


// ================================================
// 0xec1e: WORD 'WEC20' codep=0x224c wordp=0xec20 params=0 returns=0
// ================================================

void WEC20() // WEC20
{
  Push(0xbc98); // 'OV/DA'
  MODULE(); // MODULE
}


// ================================================
// 0xec28: WORD 'WEC2A' codep=0x224c wordp=0xec2a params=0 returns=0
// ================================================

void WEC2A() // WEC2A
{
  Push(0xc4ef); // '(.MERC)'
  MODULE(); // MODULE
}


// ================================================
// 0xec32: WORD 'WEC34' codep=0x224c wordp=0xec34 params=0 returns=0
// ================================================

void WEC34() // WEC34
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+WEBFA.offset)&0xFF); // WEBFA<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(Pop() & 8); //  8 AND
  if (Pop() != 0)
  {
    Push(0xc636); // 'OV-SH'
    MODULE(); // MODULE
    Push(0x02ee);
    MS(); // MS
  }
  Push(Pop() & 3); //  3 AND
  if (Pop() != 0)
  {
    Push(0xc64e); // 'OV-AR'
    MODULE(); // MODULE
    Push(0x02ee);
    MS(); // MS
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xec6a: WORD 'WEC6C' codep=0x224c wordp=0xec6c
// ================================================

void WEC6C() // WEC6C
{
  CLICK(); // CLICK
  Push(pp__i_BUTTON); // 'BUTTON
  GetEXECUTE(); // @EXECUTE
  CLICK(); // CLICK
}


// ================================================
// 0xec76: WORD 'WEC78' codep=0x224c wordp=0xec78
// ================================================

void WEC78() // WEC78
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
// 0xec90: WORD 'WEC92' codep=0x224c wordp=0xec92 params=0 returns=6
// ================================================

void WEC92() // WEC92
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
// 0xecb2: WORD 'WECB4' codep=0x224c wordp=0xecb4
// ================================================

void WECB4() // WECB4
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("REPORT TO OPERATIONS FOR EVALUATION");
  DrawTTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
  Push(pp_Is_gt_OP); // ?>OP
  ON_2(); // ON_2
}


// ================================================
// 0xecea: WORD 'WECEC' codep=0x224c wordp=0xecec
// ================================================

void WECEC() // WECEC
{
  Push(0x0010);
  Push(0x0041);
  WEC78(); // WEC78
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
  WEC78(); // WEC78
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(Pop() * 3 + (0x65e1+WEC04.offset)); //  3 * WEC04<IFIELD> +
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+WEC09.offset); // WEC09<IFIELD>
  _do__dot_(); // $.
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed38: WORD 'WED3A' codep=0x224c wordp=0xed3a
// ================================================

void WED3A() // WED3A
{
  Push(0x0010);
  Push(0x0041);
  WEC78(); // WEC78
  PRINT("ISS", 3); // (.")
  Push(0x0010);
  Push(0x003b);
  WEC78(); // WEC78
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WEBFF.offset); // WEBFF<IFIELD>
  _do__dot_(); // $.
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed60: WORD 'WED62' codep=0x224c wordp=0xed62
// ================================================

void WED62() // WED62
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
      WED3A(); // WED3A
    } else
    {
      Push(Read16(regsp)); // DUP
      WECEC(); // WECEC
    }
  }
  DrawBTN_dash_TE(); // .BTN-TE
}


// ================================================
// 0xed84: WORD 'WED86' codep=0x224c wordp=0xed86
// ================================================

void WED86() // WED86
{
  V_gt_(); // V>
  Push(pp__i_BUTTON); // 'BUTTON
  Store_2(); // !_2
  V_gt_(); // V>
  Push(Read16(regsp)); // DUP
  Push(pp_THIS_dash_BU); // THIS-BU
  Store_2(); // !_2
  V_gt_(); // V>
  Push(Read16(regsp)); // DUP
  Push(pp_BTN_dash_REC); // BTN-REC
  Store_2(); // !_2
  CLR_dash_BUT(); // CLR-BUT
  Push(Read16(pp_WEBF6)==0?1:0); // WEBF6 @ 0=
  if (Pop() != 0)
  {
    WED62(); // WED62
    GetColor(BLUE);
    SWAP(); // SWAP
    DrawHIGHLI(); // .HIGHLI
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xedb8: WORD 'WEDBA' codep=0x224c wordp=0xedba params=0 returns=1
// ================================================

void WEDBA() // WEDBA
{
  Push(0x0037);
  Push(0xb76b); // 'OV?ART'
  MODULE(); // MODULE
  Push(Pop() & (Read16(pp_Is3)==0?1:0)); //  ?3 @ 0= AND
}


// ================================================
// 0xedce: WORD 'WEDD0' codep=0x224c wordp=0xedd0 params=0 returns=0
// ================================================

void WEDD0() // WEDD0
{
  Push(Read16(pp_BTN_dash_REC)); // BTN-REC @
  _gt_V(); // >V
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  _gt_V(); // >V
  Push(Read16(pp__i_BUTTON)); // 'BUTTON @
  _gt_V(); // >V
}


// ================================================
// 0xede4: WORD 'WEDE6' codep=0x224c wordp=0xede6
// ================================================

void WEDE6() // WEDE6
{
  WEDD0(); // WEDD0
  WED62(); // WED62
  INIT_dash_BU(); // INIT-BU
  Push(pp__i_BUTTON); // 'BUTTON
  Store_2(); // !_2
}


// ================================================
// 0xedf2: WORD 'WEDF4' codep=0x224c wordp=0xedf4
// ================================================

void WEDF4() // WEDF4
{
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
    Push(0x0017);
    IFIND(); // IFIND
    if (Pop() != 0)
    {
      Push(Read16(cc_TRUE)); // TRUE
    } else
    {
      Push(Read16(cc_FALSE)); // FALSE
    }
    ICLOSE(); // ICLOSE
  } else
  {
    Push(Read16(cc_FALSE)); // FALSE
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xee2e: WORD 'WEE30' codep=0x224c wordp=0xee30
// ================================================

void WEE30() // WEE30
{
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  DrawON(); // .ON
}


// ================================================
// 0xee38: WORD 'WEE3A' codep=0x224c wordp=0xee3a
// ================================================

void WEE3A() // WEE3A
{
  _ro_XYSCAN(); // (XYSCAN case
  Pop(); // DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    NEW_dash_BUT(); // NEW-BUT
  }
  IsTRIG(); // ?TRIG
  if (Pop() == 0) return;
  GetColor(BLUE);
  WEE30(); // WEE30
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  WEC6C(); // WEC6C
  GetColor(BLACK);
  WEE30(); // WEE30
}


// ================================================
// 0xee5c: WORD 'WEE5E' codep=0x224c wordp=0xee5e
// ================================================

void WEE5E() // WEE5E
{
  Push(!Read16(pp_IsTV) | Read16(pp_IsRECALL)); // ?TV @ NOT ?RECALL @ OR
  WEDBA(); // WEDBA
  Push(Pop() | Pop()); // OR
  WEDF4(); // WEDF4
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xee74: WORD 'WEE76' codep=0x224c wordp=0xee76
// ================================================

void WEE76() // WEE76
{
  GetColor(BLACK);
  ERASE_dash_A(); // ERASE-A
}


// ================================================
// 0xee7c: WORD '(GET-AUX)' codep=0x4b3b wordp=0xee8a
// ================================================

void _ro_GET_dash_AUX_rc_() // (GET-AUX)
{
  switch(Pop()) // (GET-AUX)
  {
  case 1:
    WEC16(); // WEC16
    break;
  case 2:
    WEC16(); // WEC16
    break;
  case 3:
    WEC20(); // WEC20
    break;
  case 4:
    WEC2A(); // WEC2A
    break;
  case 5:
    GET_dash_HA(); // GET-HA
    break;
  case 6:
    GET_dash_HA(); // GET-HA
    break;
  case 8:
    WEC2A(); // WEC2A
    break;
  default:
    WEE76(); // WEE76
    break;

  }
}

// ================================================
// 0xeeaa: WORD 'WEEAC' codep=0x224c wordp=0xeeac
// ================================================

void WEEAC() // WEEAC
{
  GetColor(BLACK);
  _ro_SHIP_dash_C(); // (SHIP-C
  Push(0xcb2e); // 'OV.MVS'
  MODULE(); // MODULE
  Push(Read16(pp__n_AUX)); // #AUX @
  _ro_GET_dash_AUX_rc_(); // (GET-AUX) case
  Push(Read16(pp_BTN_dash_REC)); // BTN-REC @
  WED62(); // WED62
  GetColor(BLUE);
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  DrawHIGHLI(); // .HIGHLI
}


// ================================================
// 0xeecc: WORD 'WEECE' codep=0x224c wordp=0xeece params=0 returns=0
// ================================================

void WEECE() // WEECE
{
  Push(Read16(pp__n_AUX)==8?1:0); // #AUX @ 8 =
  if (Pop() != 0)
  {
    WEC2A(); // WEC2A
  }
  Push(0xc505); // '(GETSITE)'
  MODULE(); // MODULE
}


// ================================================
// 0xeee4: WORD 'WEEE6' codep=0x224c wordp=0xeee6 params=0 returns=0
// ================================================

void WEEE6() // WEEE6
{
  Push(5);
  Push(0xb77c); // 'OV?.EQ'
  MODULE(); // MODULE
  if (Pop() == 0) return;
  Push(0xd444); // 'TRY-L_2'
  MODULE(); // MODULE
  Push(Read16(pp_GWF)); // GWF @
  _0_st_(); // 0<
  if (Pop() == 0) return;
  Push(0xd2f2); // 'OV>DE'
  MODULE(); // MODULE
  Push(!Pop()); //  NOT
}


// ================================================
// 0xef0c: WORD '1.1BTN.XEQ' codep=0x4b3b wordp=0xef1b
// ================================================

void _1_dot_1BTN_dot_XEQ() // 1.1BTN.XEQ
{
  switch(Pop()) // 1.1BTN.XEQ
  {
  case 0:
    WEECE(); // WEECE
    break;
  case 1:
    WEEE6(); // WEEE6
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xef27: WORD 'WEF29' codep=0x224c wordp=0xef29
// ================================================

void WEF29() // WEF29
{
  WEC34(); // WEC34
  WEE5E(); // WEE5E
  if (Pop() != 0)
  {
    WECB4(); // WECB4
  }
  Push(!Pop()); //  NOT
  SWAP(); // SWAP
  Push(!Pop()); //  NOT
}


// ================================================
// 0xef3b: WORD 'WEF3D' codep=0x224c wordp=0xef3d
// ================================================

void WEF3D() // WEF3D
{
  Push(Read16(pp_IsTV)); // ?TV @
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    CTERASE(); // CTERASE
    Push(pp_IsON_dash_PLA); // ?ON-PLA
    ON_2(); // ON_2
    WEC34(); // WEC34
    SET_STR_AS_PARAM("STANDBY...SCANNING PLANET.");
    DrawTTY(); // .TTY
    Push(Read16(pp_PLHI)==-1?1:0); // PLHI @ -1 =
    if (Pop() != 0)
    {
      Push(pp_IsLANDED); // ?LANDED
      ON_2(); // ON_2
      Push(0xcd74); // 'DIO'
      MODULE(); // MODULE
      Push(0xbcf9); // 'SET-PLAN'
      MODULE(); // MODULE
    }
    Push(0xd196); // 'TV'
    MODULE(); // MODULE
    Push(0xb6ec); // '=CARGO'
    MODULE(); // MODULE
    _i_KEY(); // 'KEY
    Pop(); // DROP
    Push(pp_IsON_dash_PLA); // ?ON-PLA
    _099(); // 099
    WEEAC(); // WEEAC
    Push(0xbd8b); // 'SEEGR'
    MODULE(); // MODULE
  } else
  {
    CTINIT(); // CTINIT
    SET_STR_AS_PARAM("THE SHIP IS NO LONGER EQUIPPED");
    DrawTTY(); // .TTY
    SET_STR_AS_PARAM("WITH A TERRAIN VEHICLE");
    DrawTTY(); // .TTY
  }
  Push(pp_WEBF6); // WEBF6
  _099(); // 099
}


// ================================================
// 0xeff0: WORD 'WEFF2' codep=0x224c wordp=0xeff2
// ================================================

void WEFF2() // WEFF2
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("WE CAN'T DISEMBARK IN SPACE!", 28); // (.")
  Push(pp_WEBF6); // WEBF6
  _099(); // 099
}


// ================================================
// 0xf01b: WORD '>DISEMBARK' codep=0x4b3b wordp=0xf02a
// ================================================

void _gt_DISEMBARK() // >DISEMBARK
{
  switch(Pop()) // >DISEMBARK
  {
  case 5:
    WEF29(); // WEF29
    break;
  case 0:
    WEF3D(); // WEF3D
    break;
  default:
    WEFF2(); // WEFF2
    break;

  }
}

// ================================================
// 0xf036: WORD 'WF038' codep=0x224c wordp=0xf038
// ================================================

void WF038() // WF038
{
  WEE5E(); // WEE5E
  Push(Pop() & (Read16(pp_CONTEXT_3)==5?1:0)); //  CONTEXT_3 @ 5 = AND
  if (Pop() != 0)
  {
    WECB4(); // WECB4
    return;
  }
  Push(0xd2e2); // 'OV/LA'
  MODULE(); // MODULE
  Push(0xc0e7); // '/STARD'
  Push(pp__i__dot_DATE); // '.DATE
  Store_2(); // !_2
  if (Pop() != 0)
  {
    WEC92(); // WEC92
    WEC2A(); // WEC2A
    Push(0xed86); // 'WED86'
    Push(0xee3a); // 'WEE3A'
    Push(0xef1b); // '1.1BTN.XEQ'
    Push(7);
    Push(0xede6); // 'WEDE6'
    DOTASKS2(WEDE6, WEDE6, WEDE6, WEDE6);
  }
  Push(1);
  Push(0);
  DrawABTN(); // .ABTN
}


// ================================================
// 0xf080: WORD 'WF082' codep=0x224c wordp=0xf082
// ================================================

void WF082() // WF082
{
  Push(0xb6ec); // '=CARGO'
  MODULE(); // MODULE
  Push(pp_WEBF6); // WEBF6
  ON_2(); // ON_2
  Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
  _gt_DISEMBARK(); // >DISEMBARK case
}


// ================================================
// 0xf094: WORD 'WF096' codep=0x224c wordp=0xf096 params=0 returns=0
// ================================================

void WF096() // WF096
{
  Push(0xd2d2); // 'OV/IT'
  MODULE(); // MODULE
}


// ================================================
// 0xf09e: WORD 'WF0A0' codep=0x224c wordp=0xf0a0 params=0 returns=0
// ================================================

void WF0A0() // WF0A0
{
  Push(0xd302); // 'OV/LO'
  MODULE(); // MODULE
}


// ================================================
// 0xf0a8: WORD 'WF0AA' codep=0x224c wordp=0xf0aa params=0 returns=0
// ================================================

void WF0AA() // WF0AA
{
  Push(Read16(pp_CONTEXT_3)==4?1:0); // CONTEXT_3 @ 4 =
  Push(pp__ro_ENCOUN); // (ENCOUN
  Get_gt_C_plus_S(); // @>C+S
  Push(0x0016);
  _eq_SPECIE(); // =SPECIE
  ICLOSE(); // ICLOSE
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(pp_FORCEPT); // FORCEPT
    ON_2(); // ON_2
    Push(0xc8f1); // 'BOLT'
    MODULE(); // MODULE
    return;
  }
  BEEP(); // BEEP
}


// ================================================
// 0xf0d6: WORD '1BTN.XEQ' codep=0x4b3b wordp=0xf0e3
// ================================================

void _1BTN_dot_XEQ() // 1BTN.XEQ
{
  switch(Pop()) // 1BTN.XEQ
  {
  case 0:
    WF038(); // WF038
    break;
  case 1:
    WF082(); // WF082
    break;
  case 2:
    WF096(); // WF096
    break;
  case 3:
    WF0A0(); // WF0A0
    break;
  case 5:
    WF0AA(); // WF0AA
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf0fb: WORD 'WF0FD' codep=0x224c wordp=0xf0fd
// ================================================

void WF0FD() // WF0FD
{
  SET_STR_AS_PARAM("NO CIVILIZATION DETECTED");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf11c: WORD 'WF11E' codep=0x224c wordp=0xf11e
// ================================================

void WF11E() // WF11E
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  CI(); // CI
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
    Push(2);
    _st_(); // <
    LoadData(WEC0E); // from 'PLANET'
    Push(!((Read16(Pop())&0xFF)==0?1:0)); //  C@ 0= NOT
    Push(Pop() & Pop()); // AND
    Push(Pop() & !Read16(pp_PAST)); //  PAST @ NOT AND
    Push(pp__ro_SYSTEM); // (SYSTEM
    _1_dot_5_at_(); // 1.5@
    Push2Words("*ARTH");
    D_eq_(); // D=
    Push(!Pop()); //  NOT
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(0xbdda); // '.CULT'
      MODULE(); // MODULE
    } else
    {
      WF0FD(); // WF0FD
    }
  } else
  {
    WF0FD(); // WF0FD
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf170: WORD 'WF172' codep=0x224c wordp=0xf172 params=0 returns=6
// ================================================

void WF172() // WF172
{
  WEC92(); // WEC92
  Push(0xc0c5); // 'OV/SEN'
  MODULE(); // MODULE
}


// ================================================
// 0xf17c: WORD 'WF17E' codep=0x224c wordp=0xf17e params=0 returns=1
// ================================================

void WF17E() // WF17E
{
  Push(1);
  Push(0xd38a); // 'OV/AN'
  MODULE(); // MODULE
}


// ================================================
// 0xf188: WORD 'WF18A' codep=0x224c wordp=0xf18a params=0 returns=6
// ================================================

void WF18A() // WF18A
{
  WEC92(); // WEC92
  WEC16(); // WEC16
}


// ================================================
// 0xf190: WORD '2BTN.XEQ' codep=0x4b3b wordp=0xf19d
// ================================================

void _2BTN_dot_XEQ() // 2BTN.XEQ
{
  switch(Pop()) // 2BTN.XEQ
  {
  case 0:
    WF172(); // WF172
    break;
  case 1:
    WF17E(); // WF17E
    break;
  case 2:
    WF11E(); // WF11E
    break;
  case 3:
    WF18A(); // WF18A
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf1b1: WORD 'WF1B3' codep=0x224c wordp=0xf1b3
// ================================================

void WF1B3() // WF1B3
{
  Push(0xcaa2); // 'MAN'
  MODULE(); // MODULE
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xf1bf: WORD 'WF1C1' codep=0x224c wordp=0xf1c1 params=1 returns=0
// ================================================

void WF1C1() // WF1C1
{
  Push(0xd3c5); // 'OV/ST'
  MODULE(); // MODULE
  if (Pop() == 0) return;
  WEEAC(); // WEEAC
}


// ================================================
// 0xf1cf: WORD 'WF1D1' codep=0x224c wordp=0xf1d1 params=0 returns=0
// ================================================

void WF1D1() // WF1D1
{
  Push(0xc626); // 'OV/(U'
  MODULE(); // MODULE
}


// ================================================
// 0xf1d9: WORD 'WF1DB' codep=0x224c wordp=0xf1db
// ================================================

void WF1DB() // WF1DB
{
  Push(0xc616); // 'OV/(D'
  MODULE(); // MODULE
  Push(3);
  Push(3);
  DrawABTN(); // .ABTN
}


// ================================================
// 0xf1e9: WORD 'WF1EB' codep=0x224c wordp=0xf1eb params=0 returns=0
// ================================================

void WF1EB() // WF1EB
{
  Push(pp_FORCEPT); // FORCEPT
  ON_2(); // ON_2
  Push(Read16(pp__i_COMBAT)); // 'COMBAT @
  MODULE(); // MODULE
  Push(pp_FORCEPT); // FORCEPT
  _099(); // 099
}


// ================================================
// 0xf1fb: WORD '3BTN.XEQ' codep=0x4b3b wordp=0xf208
// ================================================

void _3BTN_dot_XEQ() // 3BTN.XEQ
{
  switch(Pop()) // 3BTN.XEQ
  {
  case 0:
    WF1B3(); // WF1B3
    break;
  case 1:
    WF1C1(); // WF1C1
    break;
  case 2:
    WF1D1(); // WF1D1
    break;
  case 3:
    WF1DB(); // WF1DB
    break;
  case 4:
    WF1EB(); // WF1EB
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf220: WORD 'WF222' codep=0x224c wordp=0xf222 params=0 returns=6
// ================================================

void WF222() // WF222
{
  WEC92(); // WEC92
  WEC20(); // WEC20
}


// ================================================
// 0xf228: WORD 'WF22A' codep=0x224c wordp=0xf22a params=0 returns=6
// ================================================

void WF22A() // WF22A
{
  WEC92(); // WEC92
  Push(0xbca8); // 'OV/RE'
  MODULE(); // MODULE
}


// ================================================
// 0xf234: WORD 'WF236' codep=0x224c wordp=0xf236 params=0 returns=0
// ================================================

void WF236() // WF236
{
  Push(0xd408); // 'JUMP'
  MODULE(); // MODULE
}


// ================================================
// 0xf23e: WORD '4BTN.XEQ' codep=0x4b3b wordp=0xf24b
// ================================================

void _4BTN_dot_XEQ() // 4BTN.XEQ
{
  switch(Pop()) // 4BTN.XEQ
  {
  case 0:
    WF222(); // WF222
    break;
  case 1:
    WF22A(); // WF22A
    break;
  case 2:
    WF236(); // WF236
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf25b: WORD 'WF25D' codep=0x224c wordp=0xf25d
// ================================================

void WF25D() // WF25D
{
  Push2Words("*PLIST");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
  CI(); // CI
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf275: WORD 'WF277' codep=0x224c wordp=0xf277
// ================================================

void WF277() // WF277
{
  Push(0x0060);
  WF25D(); // WF25D
  CTINIT(); // CTINIT
  Push(0xbe55); // '.AHUF'
  MODULE(); // MODULE
}


// ================================================
// 0xf287: WORD 'WF289' codep=0x224c wordp=0xf289 params=0 returns=0
// ================================================

void WF289() // WF289
{
  Push(0xd33f); // 'OV/EX'
  MODULE(); // MODULE
}


// ================================================
// 0xf291: WORD 'WF293' codep=0x224c wordp=0xf293 params=0 returns=0
// ================================================

void WF293() // WF293
{
  Push(0xd34f); // 'OV/TR'
  MODULE(); // MODULE
}


// ================================================
// 0xf29b: WORD '6BTN.XEQ' codep=0x4b3b wordp=0xf2a8
// ================================================

void _6BTN_dot_XEQ() // 6BTN.XEQ
{
  switch(Pop()) // 6BTN.XEQ
  {
  case 0:
    WF289(); // WF289
    break;
  case 1:
    WF293(); // WF293
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf2b4: WORD 'WF2B6' codep=0x224c wordp=0xf2b6
// ================================================

void WF2B6() // WF2B6
{
  Push(0xed86); // 'WED86'
  Push(0xee3a); // 'WEE3A'
  Push(0xf0e3); // '1BTN.XEQ'
  Push(1);
  Push(0xede6); // 'WEDE6'
  DOTASKS2(WEDE6, WEDE6, WEDE6, WEDE6);
  Push(pp_WEBF6); // WEBF6
  _099(); // 099
}


// ================================================
// 0xf2d0: WORD 'WF2D2' codep=0x224c wordp=0xf2d2
// ================================================

void WF2D2() // WF2D2
{
  Push(0xed86); // 'WED86'
  Push(0xee3a); // 'WEE3A'
  Push(0xf19d); // '2BTN.XEQ'
  Push(2);
  Push(0xede6); // 'WEDE6'
  DOTASKS2(WEDE6, WEDE6, WEDE6, WEDE6);
}


// ================================================
// 0xf2e8: WORD 'WF2EA' codep=0x224c wordp=0xf2ea
// ================================================

void WF2EA() // WF2EA
{
  Push(0xed86); // 'WED86'
  Push(0xee3a); // 'WEE3A'
  Push(0xf208); // '3BTN.XEQ'
  Push(3);
  Push(0xede6); // 'WEDE6'
  DOTASKS2(WEDE6, WEDE6, WEDE6, WEDE6);
}


// ================================================
// 0xf300: WORD 'WF302' codep=0x224c wordp=0xf302
// ================================================

void WF302() // WF302
{
  Push(0xed86); // 'WED86'
  Push(0xee3a); // 'WEE3A'
  Push(0xf24b); // '4BTN.XEQ'
  Push(4);
  Push(0xede6); // 'WEDE6'
  DOTASKS2(WEDE6, WEDE6, WEDE6, WEDE6);
}


// ================================================
// 0xf318: WORD 'WF31A' codep=0x224c wordp=0xf31a
// ================================================

void WF31A() // WF31A
{
  Push(5);
  WECEC(); // WECEC
  Push(0xbef2); // 'U-COMM'
  MODULE(); // MODULE
  WED3A(); // WED3A
}


// ================================================
// 0xf328: WORD 'WF32A' codep=0x224c wordp=0xf32a
// ================================================

void WF32A() // WF32A
{
  Push(0xed86); // 'WED86'
  Push(0xee3a); // 'WEE3A'
  Push(0xf2a8); // '6BTN.XEQ'
  Push(6);
  Push(0xede6); // 'WEDE6'
  DOTASKS2(WEDE6, WEDE6, WEDE6, WEDE6);
}


// ================================================
// 0xf340: WORD '[0BTN.XEQ]' codep=0x4b3b wordp=0xf34f
// ================================================

void _bo_0BTN_dot_XEQ_bc_() // [0BTN.XEQ]
{
  switch(Pop()) // [0BTN.XEQ]
  {
  case 0:
    WF2B6(); // WF2B6
    break;
  case 1:
    WF2D2(); // WF2D2
    break;
  case 2:
    WF2EA(); // WF2EA
    break;
  case 3:
    WF302(); // WF302
    break;
  case 4:
    WF31A(); // WF31A
    break;
  default:
    WF32A(); // WF32A
    break;

  }
}

// ================================================
// 0xf367: WORD 'WF369' codep=0x224c wordp=0xf369
// ================================================

void WF369() // WF369
{
  Push(0x002b);
  Push(0xb76b); // 'OV?ART'
  MODULE(); // MODULE
  if (Pop() != 0)
  {
    Push(Read16(pp__pe_SLUG)); // %SLUG @
    Push(0x0063);
    MIN(); // MIN
    Push(pp__pe_SLUG); // %SLUG
    Store_2(); // !_2
    Push(0);
    Push(0x0064);
    RRND(); // RRND
    Push(Read16(pp__pe_SLUG)); // %SLUG @
    _st_(); // <
    if (Pop() != 0)
    {
      _bo_0BTN_dot_XEQ_bc_(); // [0BTN.XEQ] case
    } else
    {
      Pop(); // DROP
      WF277(); // WF277
    }
    return;
  }
  Push(0x0064);
  Push(pp__pe_SLUG); // %SLUG
  Store_2(); // !_2
  _bo_0BTN_dot_XEQ_bc_(); // [0BTN.XEQ] case
}


// ================================================
// 0xf3b1: WORD 'WF3B3' codep=0x224c wordp=0xf3b3
// ================================================

void WF3B3() // WF3B3
{
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push2Words("*ASSIGN");
    _gt_C_plus_S(); // >C+S
    Push((0x65e1+INST_dash_SI.offset) + 0x0011); // INST-SI<IFIELD> 0x0011 +
    OVER(); // OVER
    _3_star_(); // 3*
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    GetINST_dash_S(); // @INST-S
    Push(Pop()==0?1:0); //  0=
    Push(2);
    _star_CLOSE(); // *CLOSE
    Push(Read16(pp_STAR_dash_HR) * 0x0aaa); // STAR-HR @ 0x0aaa *
    Push(Read16(pp_STARDAT)); // STARDAT @
    Push(pp_HAZE); // HAZE
    _2_at_(); // 2@
    D_dash_(); // D-
    Push(0x5180); Push(0x0001);
    D_gt_(); // D>
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(0);
      Push(2);
      RRND(); // RRND
      if (Pop() != 0)
      {
        WF369(); // WF369
      } else
      {
        Pop(); // DROP
        CTINIT(); // CTINIT
        SET_STR_AS_PARAM("CREWMEMBER CONSCIOUS BUT");
        DrawTTY(); // .TTY
        SET_STR_AS_PARAM("IS NOT RESPONDING");
        DrawTTY(); // .TTY
      }
    } else
    {
      WF369(); // WF369
    }
    return;
  }
  WF369(); // WF369
}


// ================================================
// 0xf450: WORD 'WF452' codep=0x224c wordp=0xf452 params=0 returns=0
// ================================================

void WF452() // WF452
{
  V_gt_(); // V>
  V_gt_(); // V>
  V_gt_(); // V>
  Pop(); // DROP
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf45e: WORD 'WF460' codep=0x224c wordp=0xf460
// ================================================

void WF460() // WF460
{
  Push(0xf452); // 'WF452'
  Push(0xee3a); // 'WEE3A'
  Push(0xf3b3); // 'WF3B3'
  Push(0);
  Push(0xede6); // 'WEDE6'
  DOTASKS2(WEDE6, WEDE6, WEDE6, WEDE6);
  Push(pp_WEBF6); // WEBF6
  _099(); // 099
}


// ================================================
// 0xf47a: WORD 'WF47C' codep=0x224c wordp=0xf47c
// ================================================

void WF47C() // WF47C
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  SET_STR_AS_PARAM("SHIP COMPUTER ACTIVATED");
  DrawTTY(); // .TTY
  Push(0xc090); // 'OV/STA'
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
// 0xf500: WORD 'WF502' codep=0x224c wordp=0xf502
// ================================================

void WF502() // WF502
{
  Push(0xd296); // '.AIRL'
  MODULE(); // MODULE
  V_gt_DISPL(); // V>DISPL
  WF47C(); // WF47C
}


// ================================================
// 0xf50e: WORD '>FLT' codep=0x224c wordp=0xf517
// ================================================
// entry

void _gt_FLT() // >FLT
{
  TIME(); // TIME
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  Push(pp_NAV_dash_TIM); // NAV-TIM
  StoreD(); // D!
  Push(pp_ENC_dash_TIM); // ENC-TIM
  StoreD(); // D!
  Push(Read16(pp_STAR_dash_HR)); // STAR-HR @
  Push(pp_TRAK_dash_HR); // TRAK-HR
  Store_2(); // !_2
  GetColor(GREY2);
  _ro_SHIP_dash_C(); // (SHIP-C
  Push(Read16(pp_CONTEXT_3)==5?1:0); // CONTEXT_3 @ 5 =
  if (Pop() != 0)
  {
    WF502(); // WF502
  }
  Push(pp_WEBF6); // WEBF6
  _099(); // 099
  WF460(); // WF460
}

// 0xf547: db 0x42 0x54 0x4e 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'BTN-VOC__________________ '

