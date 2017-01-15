// ====== OVERLAY 'SHIPBUTTONS' ======
// store offset = 0xebe0
// overlay size   = 0x0980

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xebf6  codep:0x1d29 parp:0xebf6 size:0x0002 C-string:'UNK_0xebf6'
//      UNK_0xebfa  codep:0x7420 parp:0xebfa size:0x0003 C-string:'UNK_0xebfa'
//      UNK_0xebff  codep:0x7420 parp:0xebff size:0x0003 C-string:'UNK_0xebff'
//      UNK_0xec04  codep:0x7420 parp:0xec04 size:0x0003 C-string:'UNK_0xec04'
//      UNK_0xec09  codep:0x7420 parp:0xec09 size:0x0003 C-string:'UNK_0xec09'
//      UNK_0xec0e  codep:0x7394 parp:0xec0e size:0x0006 C-string:'UNK_0xec0e'
//      UNK_0xec16  codep:0x224c parp:0xec16 size:0x0008 C-string:'UNK_0xec16'
//      UNK_0xec20  codep:0x224c parp:0xec20 size:0x0008 C-string:'UNK_0xec20'
//      UNK_0xec2a  codep:0x224c parp:0xec2a size:0x0008 C-string:'UNK_0xec2a'
//      UNK_0xec34  codep:0x224c parp:0xec34 size:0x0036 C-string:'UNK_0xec34'
//      UNK_0xec6c  codep:0x224c parp:0xec6c size:0x000a C-string:'UNK_0xec6c'
//      UNK_0xec78  codep:0x224c parp:0xec78 size:0x0018 C-string:'UNK_0xec78'
//      UNK_0xec92  codep:0x224c parp:0xec92 size:0x0020 C-string:'UNK_0xec92'
//      UNK_0xecb4  codep:0x224c parp:0xecb4 size:0x0036 C-string:'UNK_0xecb4'
//      UNK_0xecec  codep:0x224c parp:0xecec size:0x004c C-string:'UNK_0xecec'
//      UNK_0xed3a  codep:0x224c parp:0xed3a size:0x0026 C-string:'UNK_0xed3a'
//      UNK_0xed62  codep:0x224c parp:0xed62 size:0x0022 C-string:'UNK_0xed62'
//      UNK_0xed86  codep:0x224c parp:0xed86 size:0x0032 C-string:'UNK_0xed86'
//      UNK_0xedba  codep:0x224c parp:0xedba size:0x0014 C-string:'UNK_0xedba'
//      UNK_0xedd0  codep:0x224c parp:0xedd0 size:0x0014 C-string:'UNK_0xedd0'
//      UNK_0xede6  codep:0x224c parp:0xede6 size:0x000c C-string:'UNK_0xede6'
//      UNK_0xedf4  codep:0x224c parp:0xedf4 size:0x003a C-string:'UNK_0xedf4'
//      UNK_0xee30  codep:0x224c parp:0xee30 size:0x0008 C-string:'UNK_0xee30'
//      UNK_0xee3a  codep:0x224c parp:0xee3a size:0x0022 C-string:'UNK_0xee3a'
//      UNK_0xee5e  codep:0x224c parp:0xee5e size:0x0016 C-string:'UNK_0xee5e'
//      UNK_0xee76  codep:0x224c parp:0xee76 size:0x0006 C-string:'UNK_0xee76'
//       (GET-AUX)  codep:0x4b3b parp:0xee8a size:0x0020 C-string:'_ro_GET_dash_AUX_rc_'
//      UNK_0xeeac  codep:0x224c parp:0xeeac size:0x0020 C-string:'UNK_0xeeac'
//      UNK_0xeece  codep:0x224c parp:0xeece size:0x0016 C-string:'UNK_0xeece'
//      UNK_0xeee6  codep:0x224c parp:0xeee6 size:0x0026 C-string:'UNK_0xeee6'
//      1.1BTN.XEQ  codep:0x4b3b parp:0xef1b size:0x000c C-string:'_1_dot_1BTN_dot_XEQ'
//      UNK_0xef29  codep:0x224c parp:0xef29 size:0x0012 C-string:'UNK_0xef29'
//      UNK_0xef3d  codep:0x224c parp:0xef3d size:0x00b3 C-string:'UNK_0xef3d'
//      UNK_0xeff2  codep:0x224c parp:0xeff2 size:0x0029 C-string:'UNK_0xeff2'
//      >DISEMBARK  codep:0x4b3b parp:0xf02a size:0x000c C-string:'_gt_DISEMBARK'
//      UNK_0xf038  codep:0x224c parp:0xf038 size:0x0048 C-string:'UNK_0xf038'
//      UNK_0xf082  codep:0x224c parp:0xf082 size:0x0012 C-string:'UNK_0xf082'
//      UNK_0xf096  codep:0x224c parp:0xf096 size:0x0008 C-string:'UNK_0xf096'
//      UNK_0xf0a0  codep:0x224c parp:0xf0a0 size:0x0008 C-string:'UNK_0xf0a0'
//      UNK_0xf0aa  codep:0x224c parp:0xf0aa size:0x002c C-string:'UNK_0xf0aa'
//        1BTN.XEQ  codep:0x4b3b parp:0xf0e3 size:0x0018 C-string:'_1BTN_dot_XEQ'
//      UNK_0xf0fd  codep:0x224c parp:0xf0fd size:0x001f C-string:'UNK_0xf0fd'
//      UNK_0xf11e  codep:0x224c parp:0xf11e size:0x0052 C-string:'UNK_0xf11e'
//      UNK_0xf172  codep:0x224c parp:0xf172 size:0x000a C-string:'UNK_0xf172'
//      UNK_0xf17e  codep:0x224c parp:0xf17e size:0x000a C-string:'UNK_0xf17e'
//      UNK_0xf18a  codep:0x224c parp:0xf18a size:0x0006 C-string:'UNK_0xf18a'
//        2BTN.XEQ  codep:0x4b3b parp:0xf19d size:0x0014 C-string:'_2BTN_dot_XEQ'
//      UNK_0xf1b3  codep:0x224c parp:0xf1b3 size:0x000c C-string:'UNK_0xf1b3'
//      UNK_0xf1c1  codep:0x224c parp:0xf1c1 size:0x000e C-string:'UNK_0xf1c1'
//      UNK_0xf1d1  codep:0x224c parp:0xf1d1 size:0x0008 C-string:'UNK_0xf1d1'
//      UNK_0xf1db  codep:0x224c parp:0xf1db size:0x000e C-string:'UNK_0xf1db'
//      UNK_0xf1eb  codep:0x224c parp:0xf1eb size:0x0010 C-string:'UNK_0xf1eb'
//        3BTN.XEQ  codep:0x4b3b parp:0xf208 size:0x0018 C-string:'_3BTN_dot_XEQ'
//      UNK_0xf222  codep:0x224c parp:0xf222 size:0x0006 C-string:'UNK_0xf222'
//      UNK_0xf22a  codep:0x224c parp:0xf22a size:0x000a C-string:'UNK_0xf22a'
//      UNK_0xf236  codep:0x224c parp:0xf236 size:0x0008 C-string:'UNK_0xf236'
//        4BTN.XEQ  codep:0x4b3b parp:0xf24b size:0x0010 C-string:'_4BTN_dot_XEQ'
//      UNK_0xf25d  codep:0x224c parp:0xf25d size:0x0018 C-string:'UNK_0xf25d'
//      UNK_0xf277  codep:0x224c parp:0xf277 size:0x0010 C-string:'UNK_0xf277'
//      UNK_0xf289  codep:0x224c parp:0xf289 size:0x0008 C-string:'UNK_0xf289'
//      UNK_0xf293  codep:0x224c parp:0xf293 size:0x0008 C-string:'UNK_0xf293'
//        6BTN.XEQ  codep:0x4b3b parp:0xf2a8 size:0x000c C-string:'_6BTN_dot_XEQ'
//      UNK_0xf2b6  codep:0x224c parp:0xf2b6 size:0x001a C-string:'UNK_0xf2b6'
//      UNK_0xf2d2  codep:0x224c parp:0xf2d2 size:0x0016 C-string:'UNK_0xf2d2'
//      UNK_0xf2ea  codep:0x224c parp:0xf2ea size:0x0016 C-string:'UNK_0xf2ea'
//      UNK_0xf302  codep:0x224c parp:0xf302 size:0x0016 C-string:'UNK_0xf302'
//      UNK_0xf31a  codep:0x224c parp:0xf31a size:0x000e C-string:'UNK_0xf31a'
//      UNK_0xf32a  codep:0x224c parp:0xf32a size:0x0016 C-string:'UNK_0xf32a'
//      [0BTN.XEQ]  codep:0x4b3b parp:0xf34f size:0x0018 C-string:'_bo_0BTN_dot_XEQ_bc_'
//      UNK_0xf369  codep:0x224c parp:0xf369 size:0x0048 C-string:'UNK_0xf369'
//      UNK_0xf3b3  codep:0x224c parp:0xf3b3 size:0x009d C-string:'UNK_0xf3b3'
//      UNK_0xf452  codep:0x224c parp:0xf452 size:0x000c C-string:'UNK_0xf452'
//      UNK_0xf460  codep:0x224c parp:0xf460 size:0x001a C-string:'UNK_0xf460'
//      UNK_0xf47c  codep:0x224c parp:0xf47c size:0x0084 C-string:'UNK_0xf47c'
//      UNK_0xf502  codep:0x224c parp:0xf502 size:0x000c C-string:'UNK_0xf502'
//            >FLT  codep:0x224c parp:0xf517 size:0x0000 C-string:'_gt_FLT'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp_TRAK_dash_HR; // TRAK-HR
extern const unsigned short int pp__ask_TV; // ?TV
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp__ask_LANDED; // ?LANDED
extern const unsigned short int pp__ask_3; // ?3
extern const unsigned short int pp_GWF; // GWF
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_FORCEPT; // FORCEPT
extern const unsigned short int pp_THIS_dash_BU; // THIS-BU
extern const unsigned short int pp__ask_ON_dash_PLA; // ?ON-PLA
extern const unsigned short int pp__ask_RECALL; // ?RECALL
extern const unsigned short int pp__i_BUTTON; // 'BUTTON
extern const unsigned short int pp_BTN_dash_REC; // BTN-REC
extern const unsigned short int pp__ask__gt_OP; // ?>OP
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
void MIN(); // MIN
void BEEP(); // BEEP
void MS(); // MS
void D_dash_(); // D-
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void _3_star_(); // 3*
void RRND(); // RRND
void _ex__2(); // !_2
void D_ex_(); // D!
void ON_2(); // ON_2
void _099(); // 099
void _at_INST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void _at__gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void _ex_COLOR(); // !COLOR
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
void _dot_TTY(); // .TTY
void _ask_MRC(); // ?MRC
void ERASE_dash_A(); // ERASE-A
void _dot_HIGHLI(); // .HIGHLI
void _dot_ON(); // .ON
void CLR_dash_BUT(); // CLR-BUT
void INIT_dash_BU(); // INIT-BU
void _ro_SHIP_dash_C(); // (SHIP-C
void _i_KEY(); // 'KEY
void _ask_TRIG(); // ?TRIG
void _dot_ABTN(); // .ABTN
void _dot_BTN_dash_TE(); // .BTN-TE
void NEW_dash_BUT(); // NEW-BUT
void GET_dash_HA(); // GET-HA
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void SWAP(); // SWAP
void _st_(); // <
void _0_st_(); // 0<
void TIME(); // TIME
void _at_EXECUTE(); // @EXECUTE
void _1_dot_5_at_(); // 1.5@
void CI(); // CI
void _gt_V(); // >V
void V_gt_(); // V>
void _ro_XYSCAN(); // (XYSCAN


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xebf6 = 0xebf6; // UNK_0xebf6 size: 2
// {0x3a, 0x20}




// 0xebf2: db 0x97 0x00 '  '

// ================================================
// 0xebf4: WORD 'UNK_0xebf6' codep=0x1d29 parp=0xebf6
// ================================================
// 0xebf6: db 0x3a 0x20 ': '

// ================================================
// 0xebf8: WORD 'UNK_0xebfa' codep=0x7420 parp=0xebfa
// ================================================
// 0xebfa: db 0x14 0x45 0x04 ' E '

// ================================================
// 0xebfd: WORD 'UNK_0xebff' codep=0x7420 parp=0xebff
// ================================================
// 0xebff: db 0x14 0x34 0x0f ' 4 '

// ================================================
// 0xec02: WORD 'UNK_0xec04' codep=0x7420 parp=0xec04
// ================================================
// 0xec04: db 0x11 0x11 0x12 '   '

// ================================================
// 0xec07: WORD 'UNK_0xec09' codep=0x7420 parp=0xec09
// ================================================
// 0xec09: db 0x10 0x0b 0x0f '   '

// ================================================
// 0xec0c: WORD 'UNK_0xec0e' codep=0x7394 parp=0xec0e
// ================================================
LoadDataType UNK_0xec0e = {0x20, 0x16, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec14: WORD 'UNK_0xec16' codep=0x224c parp=0xec16
// ================================================

void UNK_0xec16() // UNK_0xec16
{
  Push(0xc090); // probable 'OV/STA'
  MODULE(); // MODULE
}


// ================================================
// 0xec1e: WORD 'UNK_0xec20' codep=0x224c parp=0xec20
// ================================================

void UNK_0xec20() // UNK_0xec20
{
  Push(0xbc98); // probable 'OV/DA'
  MODULE(); // MODULE
}


// ================================================
// 0xec28: WORD 'UNK_0xec2a' codep=0x224c parp=0xec2a
// ================================================

void UNK_0xec2a() // UNK_0xec2a
{
  Push(0xc4ef); // probable '(.MERC)'
  MODULE(); // MODULE
}


// ================================================
// 0xec32: WORD 'UNK_0xec34' codep=0x224c parp=0xec34
// ================================================

void UNK_0xec34() // UNK_0xec34
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6626); // IFIELD(UNK_0xebfa)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(8);
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0xc636); // probable 'OV-SH'
    MODULE(); // MODULE
    Push(0x02ee);
    MS(); // MS
  }
  Push(3);
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0xc64e); // probable 'OV-AR'
    MODULE(); // MODULE
    Push(0x02ee);
    MS(); // MS
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xec6a: WORD 'UNK_0xec6c' codep=0x224c parp=0xec6c
// ================================================

void UNK_0xec6c() // UNK_0xec6c
{
  CLICK(); // CLICK
  Push(pp__i_BUTTON); // 'BUTTON
  _at_EXECUTE(); // @EXECUTE
  CLICK(); // CLICK
}


// ================================================
// 0xec76: WORD 'UNK_0xec78' codep=0x224c parp=0xec78
// ================================================

void UNK_0xec78() // UNK_0xec78
{
  POS_dot_(); // POS.
  Push(0x000d);
  SetColor("GREY1");
  POLY_dash_ER(); // POLY-ER
  _gt_1FONT(); // >1FONT
  SetColor("BLACK");
  SetColor("GREY2");
  SetColor("DK-BLUE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xec90: WORD 'UNK_0xec92' codep=0x224c parp=0xec92
// ================================================

void UNK_0xec92() // UNK_0xec92
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
// 0xecb2: WORD 'UNK_0xecb4' codep=0x224c parp=0xecb4
// ================================================

void UNK_0xecb4() // UNK_0xecb4
{
  CTINIT(); // CTINIT
  UNK_0x3f09("REPORT TO OPERATIONS FOR EVALUATION");
  _dot_TTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
  Push(pp__ask__gt_OP); // ?>OP
  ON_2(); // ON_2
}


// ================================================
// 0xecea: WORD 'UNK_0xecec' codep=0x224c parp=0xecec
// ================================================

void UNK_0xecec() // UNK_0xecec
{
  Push(0x0010);
  Push(0x0041);
  UNK_0xec78(); // UNK_0xec78
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  _ex__2(); // !_2
  Push(pp_RECORD_n_); // RECORD#
  _099(); // 099
  Push(Pop()-1); // 1-
  Push(Read16(regsp)); // DUP
  Push(0x000c);
  Push(Pop() * Pop()); // *
  LoadData(_1BTN); // from 'ANALYZE-TEXT'
  Push(Pop() + Pop()); // +
  Push(0x000c);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(0x0010);
  Push(0x003b);
  UNK_0xec78(); // UNK_0xec78
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(3);
  Push(Pop() * Pop()); // *
  Push(0x65f2); // IFIELD(UNK_0xec04)
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65ec); // IFIELD(UNK_0xec09)
  _do__dot_(); // $.
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed38: WORD 'UNK_0xed3a' codep=0x224c parp=0xed3a
// ================================================

void UNK_0xed3a() // UNK_0xed3a
{
  Push(0x0010);
  Push(0x0041);
  UNK_0xec78(); // UNK_0xec78
  PRINT("ISS", 3); // (.")
  Push(0x0010);
  Push(0x003b);
  UNK_0xec78(); // UNK_0xec78
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6615); // IFIELD(UNK_0xebff)
  _do__dot_(); // $.
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed60: WORD 'UNK_0xed62' codep=0x224c parp=0xed62
// ================================================

void UNK_0xed62() // UNK_0xed62
{
  Push(Read16(regsp)); // DUP
  Push(0);
  Push(7);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    if (Pop() == 0) Push(1); else Push(0); // 0=
    if (Pop() != 0)
    {
      UNK_0xed3a(); // UNK_0xed3a
    } else
    {
      Push(Read16(regsp)); // DUP
      UNK_0xecec(); // UNK_0xecec
    }
  }
  _dot_BTN_dash_TE(); // .BTN-TE
}


// ================================================
// 0xed84: WORD 'UNK_0xed86' codep=0x224c parp=0xed86
// ================================================

void UNK_0xed86() // UNK_0xed86
{
  V_gt_(); // V>
  Push(pp__i_BUTTON); // 'BUTTON
  _ex__2(); // !_2
  V_gt_(); // V>
  Push(Read16(regsp)); // DUP
  Push(pp_THIS_dash_BU); // THIS-BU
  _ex__2(); // !_2
  V_gt_(); // V>
  Push(Read16(regsp)); // DUP
  Push(pp_BTN_dash_REC); // BTN-REC
  _ex__2(); // !_2
  CLR_dash_BUT(); // CLR-BUT
  Push(pp_UNK_0xebf6); // UNK_0xebf6
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    UNK_0xed62(); // UNK_0xed62
    SetColor("BLUE");
    SWAP(); // SWAP
    _dot_HIGHLI(); // .HIGHLI
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xedb8: WORD 'UNK_0xedba' codep=0x224c parp=0xedba
// ================================================

void UNK_0xedba() // UNK_0xedba
{
  Push(0x0037);
  Push(0xb76b); // probable 'OV?ART'
  MODULE(); // MODULE
  Push(pp__ask_3); // ?3
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xedce: WORD 'UNK_0xedd0' codep=0x224c parp=0xedd0
// ================================================

void UNK_0xedd0() // UNK_0xedd0
{
  Push(pp_BTN_dash_REC); // BTN-REC
  Push(Read16(Pop())); // @
  _gt_V(); // >V
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  _gt_V(); // >V
  Push(pp__i_BUTTON); // 'BUTTON
  Push(Read16(Pop())); // @
  _gt_V(); // >V
}


// ================================================
// 0xede4: WORD 'UNK_0xede6' codep=0x224c parp=0xede6
// ================================================

void UNK_0xede6() // UNK_0xede6
{
  UNK_0xedd0(); // UNK_0xedd0
  UNK_0xed62(); // UNK_0xed62
  INIT_dash_BU(); // INIT-BU
  Push(pp__i_BUTTON); // 'BUTTON
  _ex__2(); // !_2
}


// ================================================
// 0xedf2: WORD 'UNK_0xedf4' codep=0x224c parp=0xedf4
// ================================================

void UNK_0xedf4() // UNK_0xedf4
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
// 0xee2e: WORD 'UNK_0xee30' codep=0x224c parp=0xee30
// ================================================

void UNK_0xee30() // UNK_0xee30
{
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  _dot_ON(); // .ON
}


// ================================================
// 0xee38: WORD 'UNK_0xee3a' codep=0x224c parp=0xee3a
// ================================================

void UNK_0xee3a() // UNK_0xee3a
{
  _ro_XYSCAN(); // (XYSCAN case
  Pop(); // DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    NEW_dash_BUT(); // NEW-BUT
  }
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) return;
  SetColor("BLUE");
  UNK_0xee30(); // UNK_0xee30
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  UNK_0xec6c(); // UNK_0xec6c
  SetColor("BLACK");
  UNK_0xee30(); // UNK_0xee30
}


// ================================================
// 0xee5c: WORD 'UNK_0xee5e' codep=0x224c parp=0xee5e
// ================================================

void UNK_0xee5e() // UNK_0xee5e
{
  Push(pp__ask_TV); // ?TV
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp__ask_RECALL); // ?RECALL
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  UNK_0xedba(); // UNK_0xedba
  Push(Pop() | Pop()); // OR
  UNK_0xedf4(); // UNK_0xedf4
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xee74: WORD 'UNK_0xee76' codep=0x224c parp=0xee76
// ================================================

void UNK_0xee76() // UNK_0xee76
{
  SetColor("BLACK");
  ERASE_dash_A(); // ERASE-A
}


// ================================================
// 0xee7c: WORD '(GET-AUX)' codep=0x4b3b parp=0xee8a
// ================================================

void _ro_GET_dash_AUX_rc_() // (GET-AUX)
{
  switch(Pop()) // (GET-AUX)
  {
  case 1:
    UNK_0xec16(); // UNK_0xec16
    break;
  case 2:
    UNK_0xec16(); // UNK_0xec16
    break;
  case 3:
    UNK_0xec20(); // UNK_0xec20
    break;
  case 4:
    UNK_0xec2a(); // UNK_0xec2a
    break;
  case 5:
    GET_dash_HA(); // GET-HA
    break;
  case 6:
    GET_dash_HA(); // GET-HA
    break;
  case 8:
    UNK_0xec2a(); // UNK_0xec2a
    break;
  default:
    UNK_0xee76(); // UNK_0xee76
    break;

  }
}

// ================================================
// 0xeeaa: WORD 'UNK_0xeeac' codep=0x224c parp=0xeeac
// ================================================

void UNK_0xeeac() // UNK_0xeeac
{
  SetColor("BLACK");
  _ro_SHIP_dash_C(); // (SHIP-C
  Push(0xcb2e); // probable 'OV.MVS'
  MODULE(); // MODULE
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  _ro_GET_dash_AUX_rc_(); // (GET-AUX) case
  Push(pp_BTN_dash_REC); // BTN-REC
  Push(Read16(Pop())); // @
  UNK_0xed62(); // UNK_0xed62
  SetColor("BLUE");
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  _dot_HIGHLI(); // .HIGHLI
}


// ================================================
// 0xeecc: WORD 'UNK_0xeece' codep=0x224c parp=0xeece
// ================================================

void UNK_0xeece() // UNK_0xeece
{
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(8);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    UNK_0xec2a(); // UNK_0xec2a
  }
  Push(0xc505); // probable '(GETSITE)'
  MODULE(); // MODULE
}


// ================================================
// 0xeee4: WORD 'UNK_0xeee6' codep=0x224c parp=0xeee6
// ================================================

void UNK_0xeee6() // UNK_0xeee6
{
  Push(5);
  Push(0xb77c); // probable 'OV?.EQ'
  MODULE(); // MODULE
  if (Pop() == 0) return;
  Push(0xd444); // probable 'TRY-L_2'
  MODULE(); // MODULE
  Push(pp_GWF); // GWF
  Push(Read16(Pop())); // @
  _0_st_(); // 0<
  if (Pop() == 0) return;
  Push(0xd2f2); // probable 'OV>DE'
  MODULE(); // MODULE
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xef0c: WORD '1.1BTN.XEQ' codep=0x4b3b parp=0xef1b
// ================================================

void _1_dot_1BTN_dot_XEQ() // 1.1BTN.XEQ
{
  switch(Pop()) // 1.1BTN.XEQ
  {
  case 0:
    UNK_0xeece(); // UNK_0xeece
    break;
  case 1:
    UNK_0xeee6(); // UNK_0xeee6
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xef27: WORD 'UNK_0xef29' codep=0x224c parp=0xef29
// ================================================

void UNK_0xef29() // UNK_0xef29
{
  UNK_0xec34(); // UNK_0xec34
  UNK_0xee5e(); // UNK_0xee5e
  if (Pop() != 0)
  {
    UNK_0xecb4(); // UNK_0xecb4
  }
  if (Pop() == 0) Push(1); else Push(0); // NOT
  SWAP(); // SWAP
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xef3b: WORD 'UNK_0xef3d' codep=0x224c parp=0xef3d
// ================================================

void UNK_0xef3d() // UNK_0xef3d
{
  Push(pp__ask_TV); // ?TV
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    CTERASE(); // CTERASE
    Push(pp__ask_ON_dash_PLA); // ?ON-PLA
    ON_2(); // ON_2
    UNK_0xec34(); // UNK_0xec34
    UNK_0x3f09("STANDBY...SCANNING PLANET.");
    _dot_TTY(); // .TTY
    Push(pp_PLHI); // PLHI
    Push(Read16(Pop())); // @
    Push(-1);
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Push(pp__ask_LANDED); // ?LANDED
      ON_2(); // ON_2
      Push(0xcd74); // probable 'DIO'
      MODULE(); // MODULE
      Push(0xbcf9); // probable 'SET-PLAN'
      MODULE(); // MODULE
    }
    Push(0xd196); // probable 'TV'
    MODULE(); // MODULE
    Push(0xb6ec); // probable '=CARGO'
    MODULE(); // MODULE
    _i_KEY(); // 'KEY
    Pop(); // DROP
    Push(pp__ask_ON_dash_PLA); // ?ON-PLA
    _099(); // 099
    UNK_0xeeac(); // UNK_0xeeac
    Push(0xbd8b); // probable 'SEEGR'
    MODULE(); // MODULE
  } else
  {
    CTINIT(); // CTINIT
    UNK_0x3f09("THE SHIP IS NO LONGER EQUIPPED");
    _dot_TTY(); // .TTY
    UNK_0x3f09("WITH A TERRAIN VEHICLE");
    _dot_TTY(); // .TTY
  }
  Push(pp_UNK_0xebf6); // UNK_0xebf6
  _099(); // 099
}


// ================================================
// 0xeff0: WORD 'UNK_0xeff2' codep=0x224c parp=0xeff2
// ================================================

void UNK_0xeff2() // UNK_0xeff2
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("WE CAN'T DISEMBARK IN SPACE!", 28); // (.")
  Push(pp_UNK_0xebf6); // UNK_0xebf6
  _099(); // 099
}


// ================================================
// 0xf01b: WORD '>DISEMBARK' codep=0x4b3b parp=0xf02a
// ================================================

void _gt_DISEMBARK() // >DISEMBARK
{
  switch(Pop()) // >DISEMBARK
  {
  case 5:
    UNK_0xef29(); // UNK_0xef29
    break;
  case 0:
    UNK_0xef3d(); // UNK_0xef3d
    break;
  default:
    UNK_0xeff2(); // UNK_0xeff2
    break;

  }
}

// ================================================
// 0xf036: WORD 'UNK_0xf038' codep=0x224c parp=0xf038
// ================================================

void UNK_0xf038() // UNK_0xf038
{
  UNK_0xee5e(); // UNK_0xee5e
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  Push(5);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    UNK_0xecb4(); // UNK_0xecb4
    return;
  }
  Push(0xd2e2); // probable 'OV/LA'
  MODULE(); // MODULE
  Push(0xc0e7); // probable '/STARD'
  Push(pp__i__dot_DATE); // '.DATE
  _ex__2(); // !_2
  if (Pop() != 0)
  {
    UNK_0xec92(); // UNK_0xec92
    UNK_0xec2a(); // UNK_0xec2a
    Push(0xed86); // probable 'UNK_0xed86'
    Push(0xee3a); // probable 'UNK_0xee3a'
    Push(0xef1b); // probable '1.1BTN.XEQ'
    Push(7);
    Push(0xede6); // probable 'UNK_0xede6'
    DOTASKS2(UNK_0xede6, UNK_0xede6, UNK_0xede6, UNK_0xede6);
  }
  Push(1);
  Push(0);
  _dot_ABTN(); // .ABTN
}


// ================================================
// 0xf080: WORD 'UNK_0xf082' codep=0x224c parp=0xf082
// ================================================

void UNK_0xf082() // UNK_0xf082
{
  Push(0xb6ec); // probable '=CARGO'
  MODULE(); // MODULE
  Push(pp_UNK_0xebf6); // UNK_0xebf6
  ON_2(); // ON_2
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  _gt_DISEMBARK(); // >DISEMBARK case
}


// ================================================
// 0xf094: WORD 'UNK_0xf096' codep=0x224c parp=0xf096
// ================================================

void UNK_0xf096() // UNK_0xf096
{
  Push(0xd2d2); // probable 'OV/IT'
  MODULE(); // MODULE
}


// ================================================
// 0xf09e: WORD 'UNK_0xf0a0' codep=0x224c parp=0xf0a0
// ================================================

void UNK_0xf0a0() // UNK_0xf0a0
{
  Push(0xd302); // probable 'OV/LO'
  MODULE(); // MODULE
}


// ================================================
// 0xf0a8: WORD 'UNK_0xf0aa' codep=0x224c parp=0xf0aa
// ================================================

void UNK_0xf0aa() // UNK_0xf0aa
{
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  Push(4);
  Push((Pop()==Pop())?1:0); // =
  Push(pp__ro_ENCOUN); // (ENCOUN
  _at__gt_C_plus_S(); // @>C+S
  Push(0x0016);
  _eq_SPECIE(); // =SPECIE
  ICLOSE(); // ICLOSE
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(pp_FORCEPT); // FORCEPT
    ON_2(); // ON_2
    Push(0xc8f1); // probable 'BOLT'
    MODULE(); // MODULE
    return;
  }
  BEEP(); // BEEP
}


// ================================================
// 0xf0d6: WORD '1BTN.XEQ' codep=0x4b3b parp=0xf0e3
// ================================================

void _1BTN_dot_XEQ() // 1BTN.XEQ
{
  switch(Pop()) // 1BTN.XEQ
  {
  case 0:
    UNK_0xf038(); // UNK_0xf038
    break;
  case 1:
    UNK_0xf082(); // UNK_0xf082
    break;
  case 2:
    UNK_0xf096(); // UNK_0xf096
    break;
  case 3:
    UNK_0xf0a0(); // UNK_0xf0a0
    break;
  case 5:
    UNK_0xf0aa(); // UNK_0xf0aa
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf0fb: WORD 'UNK_0xf0fd' codep=0x224c parp=0xf0fd
// ================================================

void UNK_0xf0fd() // UNK_0xf0fd
{
  UNK_0x3f09("NO CIVILIZATION DETECTED");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf11c: WORD 'UNK_0xf11e' codep=0x224c parp=0xf11e
// ================================================

void UNK_0xf11e() // UNK_0xf11e
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  CI(); // CI
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(pp_CONTEXT_3); // CONTEXT_3
    Push(Read16(Pop())); // @
    Push(2);
    _st_(); // <
    LoadData(UNK_0xec0e); // from 'PLANET      '
    Push(Read8(Pop())&0xFF); // C@
    if (Pop() == 0) Push(1); else Push(0); // 0=
    if (Pop() == 0) Push(1); else Push(0); // NOT
    Push(Pop() & Pop()); // AND
    Push(pp_PAST); // PAST
    Push(Read16(Pop())); // @
    if (Pop() == 0) Push(1); else Push(0); // NOT
    Push(Pop() & Pop()); // AND
    Push(pp__ro_SYSTEM); // (SYSTEM
    _1_dot_5_at_(); // 1.5@
    Push2Words("*ARTH");
    D_eq_(); // D=
    if (Pop() == 0) Push(1); else Push(0); // NOT
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(0xbdda); // probable '.CULT'
      MODULE(); // MODULE
    } else
    {
      UNK_0xf0fd(); // UNK_0xf0fd
    }
  } else
  {
    UNK_0xf0fd(); // UNK_0xf0fd
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf170: WORD 'UNK_0xf172' codep=0x224c parp=0xf172
// ================================================

void UNK_0xf172() // UNK_0xf172
{
  UNK_0xec92(); // UNK_0xec92
  Push(0xc0c5); // probable 'OV/SEN'
  MODULE(); // MODULE
}


// ================================================
// 0xf17c: WORD 'UNK_0xf17e' codep=0x224c parp=0xf17e
// ================================================

void UNK_0xf17e() // UNK_0xf17e
{
  Push(1);
  Push(0xd38a); // probable 'OV/AN'
  MODULE(); // MODULE
}


// ================================================
// 0xf188: WORD 'UNK_0xf18a' codep=0x224c parp=0xf18a
// ================================================

void UNK_0xf18a() // UNK_0xf18a
{
  UNK_0xec92(); // UNK_0xec92
  UNK_0xec16(); // UNK_0xec16
}


// ================================================
// 0xf190: WORD '2BTN.XEQ' codep=0x4b3b parp=0xf19d
// ================================================

void _2BTN_dot_XEQ() // 2BTN.XEQ
{
  switch(Pop()) // 2BTN.XEQ
  {
  case 0:
    UNK_0xf172(); // UNK_0xf172
    break;
  case 1:
    UNK_0xf17e(); // UNK_0xf17e
    break;
  case 2:
    UNK_0xf11e(); // UNK_0xf11e
    break;
  case 3:
    UNK_0xf18a(); // UNK_0xf18a
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf1b1: WORD 'UNK_0xf1b3' codep=0x224c parp=0xf1b3
// ================================================

void UNK_0xf1b3() // UNK_0xf1b3
{
  Push(0xcaa2); // probable 'MAN'
  MODULE(); // MODULE
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xf1bf: WORD 'UNK_0xf1c1' codep=0x224c parp=0xf1c1
// ================================================

void UNK_0xf1c1() // UNK_0xf1c1
{
  Push(0xd3c5); // probable 'OV/ST'
  MODULE(); // MODULE
  if (Pop() == 0) return;
  UNK_0xeeac(); // UNK_0xeeac
}


// ================================================
// 0xf1cf: WORD 'UNK_0xf1d1' codep=0x224c parp=0xf1d1
// ================================================

void UNK_0xf1d1() // UNK_0xf1d1
{
  Push(0xc626); // probable 'OV/(U'
  MODULE(); // MODULE
}


// ================================================
// 0xf1d9: WORD 'UNK_0xf1db' codep=0x224c parp=0xf1db
// ================================================

void UNK_0xf1db() // UNK_0xf1db
{
  Push(0xc616); // probable 'OV/(D'
  MODULE(); // MODULE
  Push(3);
  Push(3);
  _dot_ABTN(); // .ABTN
}


// ================================================
// 0xf1e9: WORD 'UNK_0xf1eb' codep=0x224c parp=0xf1eb
// ================================================

void UNK_0xf1eb() // UNK_0xf1eb
{
  Push(pp_FORCEPT); // FORCEPT
  ON_2(); // ON_2
  Push(pp__i_COMBAT); // 'COMBAT
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  Push(pp_FORCEPT); // FORCEPT
  _099(); // 099
}


// ================================================
// 0xf1fb: WORD '3BTN.XEQ' codep=0x4b3b parp=0xf208
// ================================================

void _3BTN_dot_XEQ() // 3BTN.XEQ
{
  switch(Pop()) // 3BTN.XEQ
  {
  case 0:
    UNK_0xf1b3(); // UNK_0xf1b3
    break;
  case 1:
    UNK_0xf1c1(); // UNK_0xf1c1
    break;
  case 2:
    UNK_0xf1d1(); // UNK_0xf1d1
    break;
  case 3:
    UNK_0xf1db(); // UNK_0xf1db
    break;
  case 4:
    UNK_0xf1eb(); // UNK_0xf1eb
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf220: WORD 'UNK_0xf222' codep=0x224c parp=0xf222
// ================================================

void UNK_0xf222() // UNK_0xf222
{
  UNK_0xec92(); // UNK_0xec92
  UNK_0xec20(); // UNK_0xec20
}


// ================================================
// 0xf228: WORD 'UNK_0xf22a' codep=0x224c parp=0xf22a
// ================================================

void UNK_0xf22a() // UNK_0xf22a
{
  UNK_0xec92(); // UNK_0xec92
  Push(0xbca8); // probable 'OV/RE'
  MODULE(); // MODULE
}


// ================================================
// 0xf234: WORD 'UNK_0xf236' codep=0x224c parp=0xf236
// ================================================

void UNK_0xf236() // UNK_0xf236
{
  Push(0xd408); // probable 'JUMP'
  MODULE(); // MODULE
}


// ================================================
// 0xf23e: WORD '4BTN.XEQ' codep=0x4b3b parp=0xf24b
// ================================================

void _4BTN_dot_XEQ() // 4BTN.XEQ
{
  switch(Pop()) // 4BTN.XEQ
  {
  case 0:
    UNK_0xf222(); // UNK_0xf222
    break;
  case 1:
    UNK_0xf22a(); // UNK_0xf22a
    break;
  case 2:
    UNK_0xf236(); // UNK_0xf236
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf25b: WORD 'UNK_0xf25d' codep=0x224c parp=0xf25d
// ================================================

void UNK_0xf25d() // UNK_0xf25d
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
// 0xf275: WORD 'UNK_0xf277' codep=0x224c parp=0xf277
// ================================================

void UNK_0xf277() // UNK_0xf277
{
  Push(0x0060);
  UNK_0xf25d(); // UNK_0xf25d
  CTINIT(); // CTINIT
  Push(0xbe55); // probable '.AHUF'
  MODULE(); // MODULE
}


// ================================================
// 0xf287: WORD 'UNK_0xf289' codep=0x224c parp=0xf289
// ================================================

void UNK_0xf289() // UNK_0xf289
{
  Push(0xd33f); // probable 'OV/EX'
  MODULE(); // MODULE
}


// ================================================
// 0xf291: WORD 'UNK_0xf293' codep=0x224c parp=0xf293
// ================================================

void UNK_0xf293() // UNK_0xf293
{
  Push(0xd34f); // probable 'OV/TR'
  MODULE(); // MODULE
}


// ================================================
// 0xf29b: WORD '6BTN.XEQ' codep=0x4b3b parp=0xf2a8
// ================================================

void _6BTN_dot_XEQ() // 6BTN.XEQ
{
  switch(Pop()) // 6BTN.XEQ
  {
  case 0:
    UNK_0xf289(); // UNK_0xf289
    break;
  case 1:
    UNK_0xf293(); // UNK_0xf293
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf2b4: WORD 'UNK_0xf2b6' codep=0x224c parp=0xf2b6
// ================================================

void UNK_0xf2b6() // UNK_0xf2b6
{
  Push(0xed86); // probable 'UNK_0xed86'
  Push(0xee3a); // probable 'UNK_0xee3a'
  Push(0xf0e3); // probable '1BTN.XEQ'
  Push(1);
  Push(0xede6); // probable 'UNK_0xede6'
  DOTASKS2(UNK_0xede6, UNK_0xede6, UNK_0xede6, UNK_0xede6);
  Push(pp_UNK_0xebf6); // UNK_0xebf6
  _099(); // 099
}


// ================================================
// 0xf2d0: WORD 'UNK_0xf2d2' codep=0x224c parp=0xf2d2
// ================================================

void UNK_0xf2d2() // UNK_0xf2d2
{
  Push(0xed86); // probable 'UNK_0xed86'
  Push(0xee3a); // probable 'UNK_0xee3a'
  Push(0xf19d); // probable '2BTN.XEQ'
  Push(2);
  Push(0xede6); // probable 'UNK_0xede6'
  DOTASKS2(UNK_0xede6, UNK_0xede6, UNK_0xede6, UNK_0xede6);
}


// ================================================
// 0xf2e8: WORD 'UNK_0xf2ea' codep=0x224c parp=0xf2ea
// ================================================

void UNK_0xf2ea() // UNK_0xf2ea
{
  Push(0xed86); // probable 'UNK_0xed86'
  Push(0xee3a); // probable 'UNK_0xee3a'
  Push(0xf208); // probable '3BTN.XEQ'
  Push(3);
  Push(0xede6); // probable 'UNK_0xede6'
  DOTASKS2(UNK_0xede6, UNK_0xede6, UNK_0xede6, UNK_0xede6);
}


// ================================================
// 0xf300: WORD 'UNK_0xf302' codep=0x224c parp=0xf302
// ================================================

void UNK_0xf302() // UNK_0xf302
{
  Push(0xed86); // probable 'UNK_0xed86'
  Push(0xee3a); // probable 'UNK_0xee3a'
  Push(0xf24b); // probable '4BTN.XEQ'
  Push(4);
  Push(0xede6); // probable 'UNK_0xede6'
  DOTASKS2(UNK_0xede6, UNK_0xede6, UNK_0xede6, UNK_0xede6);
}


// ================================================
// 0xf318: WORD 'UNK_0xf31a' codep=0x224c parp=0xf31a
// ================================================

void UNK_0xf31a() // UNK_0xf31a
{
  Push(5);
  UNK_0xecec(); // UNK_0xecec
  Push(0xbef2); // probable 'U-COMM'
  MODULE(); // MODULE
  UNK_0xed3a(); // UNK_0xed3a
}


// ================================================
// 0xf328: WORD 'UNK_0xf32a' codep=0x224c parp=0xf32a
// ================================================

void UNK_0xf32a() // UNK_0xf32a
{
  Push(0xed86); // probable 'UNK_0xed86'
  Push(0xee3a); // probable 'UNK_0xee3a'
  Push(0xf2a8); // probable '6BTN.XEQ'
  Push(6);
  Push(0xede6); // probable 'UNK_0xede6'
  DOTASKS2(UNK_0xede6, UNK_0xede6, UNK_0xede6, UNK_0xede6);
}


// ================================================
// 0xf340: WORD '[0BTN.XEQ]' codep=0x4b3b parp=0xf34f
// ================================================

void _bo_0BTN_dot_XEQ_bc_() // [0BTN.XEQ]
{
  switch(Pop()) // [0BTN.XEQ]
  {
  case 0:
    UNK_0xf2b6(); // UNK_0xf2b6
    break;
  case 1:
    UNK_0xf2d2(); // UNK_0xf2d2
    break;
  case 2:
    UNK_0xf2ea(); // UNK_0xf2ea
    break;
  case 3:
    UNK_0xf302(); // UNK_0xf302
    break;
  case 4:
    UNK_0xf31a(); // UNK_0xf31a
    break;
  default:
    UNK_0xf32a(); // UNK_0xf32a
    break;

  }
}

// ================================================
// 0xf367: WORD 'UNK_0xf369' codep=0x224c parp=0xf369
// ================================================

void UNK_0xf369() // UNK_0xf369
{
  Push(0x002b);
  Push(0xb76b); // probable 'OV?ART'
  MODULE(); // MODULE
  if (Pop() != 0)
  {
    Push(pp__pe_SLUG); // %SLUG
    Push(Read16(Pop())); // @
    Push(0x0063);
    MIN(); // MIN
    Push(pp__pe_SLUG); // %SLUG
    _ex__2(); // !_2
    Push(0);
    Push(0x0064);
    RRND(); // RRND
    Push(pp__pe_SLUG); // %SLUG
    Push(Read16(Pop())); // @
    _st_(); // <
    if (Pop() != 0)
    {
      _bo_0BTN_dot_XEQ_bc_(); // [0BTN.XEQ] case
    } else
    {
      Pop(); // DROP
      UNK_0xf277(); // UNK_0xf277
    }
    return;
  }
  Push(0x0064);
  Push(pp__pe_SLUG); // %SLUG
  _ex__2(); // !_2
  _bo_0BTN_dot_XEQ_bc_(); // [0BTN.XEQ] case
}


// ================================================
// 0xf3b1: WORD 'UNK_0xf3b3' codep=0x224c parp=0xf3b3
// ================================================

void UNK_0xf3b3() // UNK_0xf3b3
{
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push2Words("*ASSIGN");
    _gt_C_plus_S(); // >C+S
    Push(0x65e1); // IFIELD(INST-SI)
    Push(0x0011);
    Push(Pop() + Pop()); // +
    OVER(); // OVER
    _3_star_(); // 3*
    Push(Pop() + Pop()); // +
    _at__gt_C_plus_S(); // @>C+S
    _at_INST_dash_S(); // @INST-S
    if (Pop() == 0) Push(1); else Push(0); // 0=
    Push(2);
    _star_CLOSE(); // *CLOSE
    Push(pp_STAR_dash_HR); // STAR-HR
    Push(Read16(Pop())); // @
    Push(0x0aaa);
    Push(Pop() * Pop()); // *
    Push(pp_STARDAT); // STARDAT
    Push(Read16(Pop())); // @
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
        UNK_0xf369(); // UNK_0xf369
      } else
      {
        Pop(); // DROP
        CTINIT(); // CTINIT
        UNK_0x3f09("CREWMEMBER CONSCIOUS BUT");
        _dot_TTY(); // .TTY
        UNK_0x3f09("IS NOT RESPONDING");
        _dot_TTY(); // .TTY
      }
    } else
    {
      UNK_0xf369(); // UNK_0xf369
    }
    return;
  }
  UNK_0xf369(); // UNK_0xf369
}


// ================================================
// 0xf450: WORD 'UNK_0xf452' codep=0x224c parp=0xf452
// ================================================

void UNK_0xf452() // UNK_0xf452
{
  V_gt_(); // V>
  V_gt_(); // V>
  V_gt_(); // V>
  Pop(); // DROP
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf45e: WORD 'UNK_0xf460' codep=0x224c parp=0xf460
// ================================================

void UNK_0xf460() // UNK_0xf460
{
  Push(0xf452); // probable 'UNK_0xf452'
  Push(0xee3a); // probable 'UNK_0xee3a'
  Push(0xf3b3); // probable 'UNK_0xf3b3'
  Push(0);
  Push(0xede6); // probable 'UNK_0xede6'
  DOTASKS2(UNK_0xede6, UNK_0xede6, UNK_0xede6, UNK_0xede6);
  Push(pp_UNK_0xebf6); // UNK_0xebf6
  _099(); // 099
}


// ================================================
// 0xf47a: WORD 'UNK_0xf47c' codep=0x224c parp=0xf47c
// ================================================

void UNK_0xf47c() // UNK_0xf47c
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  UNK_0x3f09("SHIP COMPUTER ACTIVATED");
  _dot_TTY(); // .TTY
  Push(0xc090); // probable 'OV/STA'
  MODULE(); // MODULE
  CTINIT(); // CTINIT
  UNK_0x3f09("PRE-LAUNCH PROCEDURES COMPLETE");
  _dot_TTY(); // .TTY
  Push(0x00fa);
  MS(); // MS
  UNK_0x3f09("STANDING BY TO INITIATE LAUNCH");
  _dot_TTY(); // .TTY
  Push(0x00fa);
  MS(); // MS
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR
}


// ================================================
// 0xf500: WORD 'UNK_0xf502' codep=0x224c parp=0xf502
// ================================================

void UNK_0xf502() // UNK_0xf502
{
  Push(0xd296); // probable '.AIRL'
  MODULE(); // MODULE
  V_gt_DISPL(); // V>DISPL
  UNK_0xf47c(); // UNK_0xf47c
}


// ================================================
// 0xf50e: WORD '>FLT' codep=0x224c parp=0xf517
// ================================================
// entry

void _gt_FLT() // >FLT
{
  TIME(); // TIME
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  Push(pp_NAV_dash_TIM); // NAV-TIM
  D_ex_(); // D!
  Push(pp_ENC_dash_TIM); // ENC-TIM
  D_ex_(); // D!
  Push(pp_STAR_dash_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(pp_TRAK_dash_HR); // TRAK-HR
  _ex__2(); // !_2
  SetColor("GREY2");
  _ro_SHIP_dash_C(); // (SHIP-C
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  Push(5);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    UNK_0xf502(); // UNK_0xf502
  }
  Push(pp_UNK_0xebf6); // UNK_0xebf6
  _099(); // 099
  UNK_0xf460(); // UNK_0xf460
}

// 0xf547: db 0x42 0x54 0x4e 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'BTN-VOC__________________ '

