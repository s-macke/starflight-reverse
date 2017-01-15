// ====== OVERLAY 'SHIPBUTTONS' ======
// store offset = 0xeda0
// overlay size   = 0x07c0

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xedb6  codep:0x1d29 parp:0xedb6 size:0x0002 C-string:'UNK_0xedb6'
//      UNK_0xedba  codep:0x744d parp:0xedba size:0x0003 C-string:'UNK_0xedba'
//      UNK_0xedbf  codep:0x744d parp:0xedbf size:0x0003 C-string:'UNK_0xedbf'
//      UNK_0xedc4  codep:0x744d parp:0xedc4 size:0x0003 C-string:'UNK_0xedc4'
//      UNK_0xedc9  codep:0x744d parp:0xedc9 size:0x0003 C-string:'UNK_0xedc9'
//      UNK_0xedce  codep:0x224c parp:0xedce size:0x0008 C-string:'UNK_0xedce'
//      UNK_0xedd8  codep:0x224c parp:0xedd8 size:0x0008 C-string:'UNK_0xedd8'
//      UNK_0xede2  codep:0x224c parp:0xede2 size:0x0008 C-string:'UNK_0xede2'
//      UNK_0xedec  codep:0x224c parp:0xedec size:0x0036 C-string:'UNK_0xedec'
//      UNK_0xee24  codep:0x224c parp:0xee24 size:0x000a C-string:'UNK_0xee24'
//      UNK_0xee30  codep:0x224c parp:0xee30 size:0x0018 C-string:'UNK_0xee30'
//      UNK_0xee4a  codep:0x224c parp:0xee4a size:0x0020 C-string:'UNK_0xee4a'
//      UNK_0xee6c  codep:0x224c parp:0xee6c size:0x004c C-string:'UNK_0xee6c'
//      UNK_0xeeba  codep:0x224c parp:0xeeba size:0x0026 C-string:'UNK_0xeeba'
//      UNK_0xeee2  codep:0x224c parp:0xeee2 size:0x0022 C-string:'UNK_0xeee2'
//      UNK_0xef06  codep:0x224c parp:0xef06 size:0x0032 C-string:'UNK_0xef06'
//      UNK_0xef3a  codep:0x224c parp:0xef3a size:0x0014 C-string:'UNK_0xef3a'
//      UNK_0xef50  codep:0x224c parp:0xef50 size:0x000c C-string:'UNK_0xef50'
//      UNK_0xef5e  codep:0x224c parp:0xef5e size:0x0008 C-string:'UNK_0xef5e'
//      UNK_0xef68  codep:0x224c parp:0xef68 size:0x0022 C-string:'UNK_0xef68'
//      UNK_0xef8c  codep:0x224c parp:0xef8c size:0x0006 C-string:'UNK_0xef8c'
//       (GET-AUX)  codep:0x4a4f parp:0xefa0 size:0x0020 C-string:'_ro_GET_dash_AUX_rc_'
//      UNK_0xefc2  codep:0x224c parp:0xefc2 size:0x0020 C-string:'UNK_0xefc2'
//      UNK_0xefe4  codep:0x224c parp:0xefe4 size:0x0016 C-string:'UNK_0xefe4'
//      UNK_0xeffc  codep:0x224c parp:0xeffc size:0x0026 C-string:'UNK_0xeffc'
//      1.1BTN.XEQ  codep:0x4a4f parp:0xf031 size:0x000c C-string:'_1_dot_1BTN_dot_XEQ'
//      UNK_0xf03f  codep:0x224c parp:0xf03f size:0x0036 C-string:'UNK_0xf03f'
//      UNK_0xf077  codep:0x224c parp:0xf077 size:0x001c C-string:'UNK_0xf077'
//      UNK_0xf095  codep:0x224c parp:0xf095 size:0x00b1 C-string:'UNK_0xf095'
//      UNK_0xf148  codep:0x224c parp:0xf148 size:0x0029 C-string:'UNK_0xf148'
//      >DISEMBARK  codep:0x4a4f parp:0xf180 size:0x000c C-string:'_gt_DISEMBARK'
//      UNK_0xf18e  codep:0x224c parp:0xf18e size:0x0052 C-string:'UNK_0xf18e'
//      UNK_0xf1e2  codep:0x224c parp:0xf1e2 size:0x0012 C-string:'UNK_0xf1e2'
//      UNK_0xf1f6  codep:0x224c parp:0xf1f6 size:0x0008 C-string:'UNK_0xf1f6'
//      UNK_0xf200  codep:0x224c parp:0xf200 size:0x0008 C-string:'UNK_0xf200'
//      UNK_0xf20a  codep:0x224c parp:0xf20a size:0x0008 C-string:'UNK_0xf20a'
//        1BTN.XEQ  codep:0x4a4f parp:0xf21f size:0x0018 C-string:'_1BTN_dot_XEQ'
//      UNK_0xf239  codep:0x224c parp:0xf239 size:0x000a C-string:'UNK_0xf239'
//      UNK_0xf245  codep:0x224c parp:0xf245 size:0x000a C-string:'UNK_0xf245'
//      UNK_0xf251  codep:0x224c parp:0xf251 size:0x0006 C-string:'UNK_0xf251'
//        2BTN.XEQ  codep:0x4a4f parp:0xf264 size:0x0010 C-string:'_2BTN_dot_XEQ'
//      UNK_0xf276  codep:0x224c parp:0xf276 size:0x000c C-string:'UNK_0xf276'
//      UNK_0xf284  codep:0x224c parp:0xf284 size:0x000e C-string:'UNK_0xf284'
//      UNK_0xf294  codep:0x224c parp:0xf294 size:0x0008 C-string:'UNK_0xf294'
//      UNK_0xf29e  codep:0x224c parp:0xf29e size:0x000e C-string:'UNK_0xf29e'
//      UNK_0xf2ae  codep:0x224c parp:0xf2ae size:0x0010 C-string:'UNK_0xf2ae'
//        3BTN.XEQ  codep:0x4a4f parp:0xf2cb size:0x0018 C-string:'_3BTN_dot_XEQ'
//      UNK_0xf2e5  codep:0x224c parp:0xf2e5 size:0x0006 C-string:'UNK_0xf2e5'
//      UNK_0xf2ed  codep:0x224c parp:0xf2ed size:0x000a C-string:'UNK_0xf2ed'
//        4BTN.XEQ  codep:0x4a4f parp:0xf304 size:0x000c C-string:'_4BTN_dot_XEQ'
//      UNK_0xf312  codep:0x224c parp:0xf312 size:0x0008 C-string:'UNK_0xf312'
//      UNK_0xf31c  codep:0x224c parp:0xf31c size:0x0008 C-string:'UNK_0xf31c'
//        6BTN.XEQ  codep:0x4a4f parp:0xf331 size:0x000c C-string:'_6BTN_dot_XEQ'
//      UNK_0xf33f  codep:0x224c parp:0xf33f size:0x001a C-string:'UNK_0xf33f'
//      UNK_0xf35b  codep:0x224c parp:0xf35b size:0x0016 C-string:'UNK_0xf35b'
//      UNK_0xf373  codep:0x224c parp:0xf373 size:0x0016 C-string:'UNK_0xf373'
//      UNK_0xf38b  codep:0x224c parp:0xf38b size:0x0016 C-string:'UNK_0xf38b'
//      UNK_0xf3a3  codep:0x224c parp:0xf3a3 size:0x000e C-string:'UNK_0xf3a3'
//      UNK_0xf3b3  codep:0x224c parp:0xf3b3 size:0x0016 C-string:'UNK_0xf3b3'
//        0BTN.XEQ  codep:0x4a4f parp:0xf3d6 size:0x0018 C-string:'_0BTN_dot_XEQ'
//      UNK_0xf3f0  codep:0x224c parp:0xf3f0 size:0x000c C-string:'UNK_0xf3f0'
//      UNK_0xf3fe  codep:0x224c parp:0xf3fe size:0x001a C-string:'UNK_0xf3fe'
//      UNK_0xf41a  codep:0x224c parp:0xf41a size:0x0084 C-string:'UNK_0xf41a'
//      UNK_0xf4a0  codep:0x224c parp:0xf4a0 size:0x000c C-string:'UNK_0xf4a0'
//            >FLT  codep:0x224c parp:0xf4b5 size:0x0000 C-string:'_gt_FLT'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_TRAK_dash_HR; // TRAK-HR
extern const unsigned short int pp__ask_TV; // ?TV
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp__ask__ask__ask_IT; // ???IT
extern const unsigned short int pp__ask_LANDED; // ?LANDED
extern const unsigned short int pp_GWF; // GWF
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern const unsigned short int pp_FORCEPTASK; // FORCEPTASK
extern const unsigned short int pp_THIS_dash_BU; // THIS-BU
extern const unsigned short int pp__ask_ON_dash_PLA; // ?ON-PLA
extern const unsigned short int pp__ask_RECALL; // ?RECALL
extern const unsigned short int pp__i_BUTTON; // 'BUTTON
extern const unsigned short int pp_BTN_dash_REC; // BTN-REC
extern const unsigned short int pp__ask__gt_OP; // ?>OP
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp__i_COMBAT; // 'COMBAT
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp__i__dot_DATE; // '.DATE
extern const unsigned short int pp_ENC_dash_TIME; // ENC-TIME
extern const unsigned short int pp_NAV_dash_TIME; // NAV-TIME
void MS(); // MS
void WITHIN(); // WITHIN
void _ex__3(); // !_3
void D_ex_(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void CDROP(); // CDROP
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void _at__gt_C_plus_S(); // @>C+S
void _ex_COLOR(); // !COLOR
void _gt_1FONT(); // >1FONT
void POS_dot_(); // POS.
void CTERASE(); // CTERASE
void CLICK(); // CLICK
void _gt_SND(); // >SND
void _do__dot_(); // $.
void POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
void TTY_dash_SCR(); // TTY-SCR
void CTINIT(); // CTINIT
void _dot_TTY(); // .TTY
void _ask_MRC(); // ?MRC
void ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
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
void CFIGARRAYS(); // CFIGARRAYS
void GET_dash_HAUX(); // GET-HAUX
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void SWAP(); // SWAP
void _0_st_(); // 0<
void TIME(); // TIME
void _at_EXECUTE(); // @EXECUTE
void _gt_V(); // >V
void V_gt_(); // V>
void V_gt_DISPLAY(); // V>DISPLAY
void _ro_XYSCAN(); // (XYSCAN


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xedb6 = 0xedb6; // UNK_0xedb6 size: 2
// {0x00, 0x00}




// 0xedb2: db 0x78 0x00 'x '

// ================================================
// 0xedb4: WORD 'UNK_0xedb6' codep=0x1d29 parp=0xedb6
// ================================================
// 0xedb6: db 0x00 0x00 '  '

// ================================================
// 0xedb8: WORD 'UNK_0xedba' codep=0x744d parp=0xedba
// ================================================
// 0xedba: db 0x14 0x45 0x04 ' E '

// ================================================
// 0xedbd: WORD 'UNK_0xedbf' codep=0x744d parp=0xedbf
// ================================================
// 0xedbf: db 0x14 0x34 0x0f ' 4 '

// ================================================
// 0xedc2: WORD 'UNK_0xedc4' codep=0x744d parp=0xedc4
// ================================================
// 0xedc4: db 0x11 0x11 0x12 '   '

// ================================================
// 0xedc7: WORD 'UNK_0xedc9' codep=0x744d parp=0xedc9
// ================================================
// 0xedc9: db 0x10 0x0b 0x0f '   '

// ================================================
// 0xedcc: WORD 'UNK_0xedce' codep=0x224c parp=0xedce
// ================================================

void UNK_0xedce() // UNK_0xedce
{
  Push(0xbef3); // probable 'OV/STATUS'
  MODULE(); // MODULE
}


// ================================================
// 0xedd6: WORD 'UNK_0xedd8' codep=0x224c parp=0xedd8
// ================================================

void UNK_0xedd8() // UNK_0xedd8
{
  Push(0xbe2b); // probable 'OV/DA'
  MODULE(); // MODULE
}


// ================================================
// 0xede0: WORD 'UNK_0xede2' codep=0x224c parp=0xede2
// ================================================

void UNK_0xede2() // UNK_0xede2
{
  Push(0xc48c); // probable '(.MERC)'
  MODULE(); // MODULE
}


// ================================================
// 0xedea: WORD 'UNK_0xedec' codep=0x224c parp=0xedec
// ================================================

void UNK_0xedec() // UNK_0xedec
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6434); // IFIELD(UNK_0xedba)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(8);
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0xcb4e); // probable 'OV-SH'
    MODULE(); // MODULE
    Push(0x02ee);
    MS(); // MS
  }
  Push(3);
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0xcb66); // probable 'OV-AR'
    MODULE(); // MODULE
    Push(0x02ee);
    MS(); // MS
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee22: WORD 'UNK_0xee24' codep=0x224c parp=0xee24
// ================================================

void UNK_0xee24() // UNK_0xee24
{
  CLICK(); // CLICK
  Push(pp__i_BUTTON); // 'BUTTON
  _at_EXECUTE(); // @EXECUTE
  CLICK(); // CLICK
}


// ================================================
// 0xee2e: WORD 'UNK_0xee30' codep=0x224c parp=0xee30
// ================================================

void UNK_0xee30() // UNK_0xee30
{
  POS_dot_(); // POS.
  Push(0x000e);
  SetColor("GREY1");
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  _gt_1FONT(); // >1FONT
  SetColor("BLACK");
  SetColor("GREY2");
  SetColor("DK-BLUE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xee48: WORD 'UNK_0xee4a' codep=0x224c parp=0xee4a
// ================================================

void UNK_0xee4a() // UNK_0xee4a
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
// 0xee6a: WORD 'UNK_0xee6c' codep=0x224c parp=0xee6c
// ================================================

void UNK_0xee6c() // UNK_0xee6c
{
  Push(0x0010);
  Push(0x0041);
  UNK_0xee30(); // UNK_0xee30
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  _ex__3(); // !_3
  Push(pp_RECORD_n_); // RECORD#
  OFF(); // OFF
  Push(Pop()-1); // 1-
  Push(Read16(regsp)); // DUP
  Push(0x000c);
  Push(Pop() * Pop()); // *
  LoadData("1BTN"); // from 'BUTTONS     '
  Push(Pop() + Pop()); // +
  Push(0x000c);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(0x0010);
  Push(0x003b);
  UNK_0xee30(); // UNK_0xee30
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(3);
  Push(Pop() * Pop()); // *
  Push(0x6400); // IFIELD(UNK_0xedc4)
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63fa); // IFIELD(UNK_0xedc9)
  _do__dot_(); // $.
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeeb8: WORD 'UNK_0xeeba' codep=0x224c parp=0xeeba
// ================================================

void UNK_0xeeba() // UNK_0xeeba
{
  Push(0x0010);
  Push(0x0041);
  UNK_0xee30(); // UNK_0xee30
  PRINT("ISS", 3); // (.")
  Push(0x0010);
  Push(0x003b);
  UNK_0xee30(); // UNK_0xee30
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6423); // IFIELD(UNK_0xedbf)
  _do__dot_(); // $.
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeee0: WORD 'UNK_0xeee2' codep=0x224c parp=0xeee2
// ================================================

void UNK_0xeee2() // UNK_0xeee2
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
      UNK_0xeeba(); // UNK_0xeeba
    } else
    {
      Push(Read16(regsp)); // DUP
      UNK_0xee6c(); // UNK_0xee6c
    }
  }
  _dot_BTN_dash_TE(); // .BTN-TE
}


// ================================================
// 0xef04: WORD 'UNK_0xef06' codep=0x224c parp=0xef06
// ================================================

void UNK_0xef06() // UNK_0xef06
{
  V_gt_(); // V>
  Push(pp__i_BUTTON); // 'BUTTON
  _ex__3(); // !_3
  V_gt_(); // V>
  Push(Read16(regsp)); // DUP
  Push(pp_THIS_dash_BU); // THIS-BU
  _ex__3(); // !_3
  V_gt_(); // V>
  Push(Read16(regsp)); // DUP
  Push(pp_BTN_dash_REC); // BTN-REC
  _ex__3(); // !_3
  CLR_dash_BUT(); // CLR-BUT
  Push(pp_UNK_0xedb6); // UNK_0xedb6
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    UNK_0xeee2(); // UNK_0xeee2
    SetColor("BLUE");
    SWAP(); // SWAP
    _dot_HIGHLI(); // .HIGHLI
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xef38: WORD 'UNK_0xef3a' codep=0x224c parp=0xef3a
// ================================================

void UNK_0xef3a() // UNK_0xef3a
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
// 0xef4e: WORD 'UNK_0xef50' codep=0x224c parp=0xef50
// ================================================

void UNK_0xef50() // UNK_0xef50
{
  UNK_0xef3a(); // UNK_0xef3a
  UNK_0xeee2(); // UNK_0xeee2
  INIT_dash_BU(); // INIT-BU
  Push(pp__i_BUTTON); // 'BUTTON
  _ex__3(); // !_3
}


// ================================================
// 0xef5c: WORD 'UNK_0xef5e' codep=0x224c parp=0xef5e
// ================================================

void UNK_0xef5e() // UNK_0xef5e
{
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  _dot_ON(); // .ON
}


// ================================================
// 0xef66: WORD 'UNK_0xef68' codep=0x224c parp=0xef68
// ================================================

void UNK_0xef68() // UNK_0xef68
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
  UNK_0xef5e(); // UNK_0xef5e
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  UNK_0xee24(); // UNK_0xee24
  SetColor("BLACK");
  UNK_0xef5e(); // UNK_0xef5e
}


// ================================================
// 0xef8a: WORD 'UNK_0xef8c' codep=0x224c parp=0xef8c
// ================================================

void UNK_0xef8c() // UNK_0xef8c
{
  SetColor("BLACK");
  ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
}


// ================================================
// 0xef92: WORD '(GET-AUX)' codep=0x4a4f parp=0xefa0
// ================================================

void _ro_GET_dash_AUX_rc_() // (GET-AUX)
{
  switch(Pop()) // (GET-AUX)
  {
  case 1:
    UNK_0xedce(); // UNK_0xedce
    break;
  case 2:
    UNK_0xedce(); // UNK_0xedce
    break;
  case 3:
    UNK_0xedd8(); // UNK_0xedd8
    break;
  case 4:
    UNK_0xede2(); // UNK_0xede2
    break;
  case 5:
    GET_dash_HAUX(); // GET-HAUX
    break;
  case 6:
    GET_dash_HAUX(); // GET-HAUX
    break;
  case 8:
    UNK_0xede2(); // UNK_0xede2
    break;
  default:
    UNK_0xef8c(); // UNK_0xef8c
    break;

  }
}

// ================================================
// 0xefc0: WORD 'UNK_0xefc2' codep=0x224c parp=0xefc2
// ================================================

void UNK_0xefc2() // UNK_0xefc2
{
  SetColor("BLACK");
  _ro_SHIP_dash_C(); // (SHIP-C
  Push(0xcc3e); // probable 'OV.MVS'
  MODULE(); // MODULE
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  _ro_GET_dash_AUX_rc_(); // (GET-AUX) case
  Push(pp_BTN_dash_REC); // BTN-REC
  Push(Read16(Pop())); // @
  UNK_0xeee2(); // UNK_0xeee2
  SetColor("BLUE");
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  _dot_HIGHLI(); // .HIGHLI
}


// ================================================
// 0xefe2: WORD 'UNK_0xefe4' codep=0x224c parp=0xefe4
// ================================================

void UNK_0xefe4() // UNK_0xefe4
{
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(8);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    UNK_0xede2(); // UNK_0xede2
  }
  Push(0xc4a2); // probable '(GETSITE)'
  MODULE(); // MODULE
}


// ================================================
// 0xeffa: WORD 'UNK_0xeffc' codep=0x224c parp=0xeffc
// ================================================

void UNK_0xeffc() // UNK_0xeffc
{
  Push(5);
  Push(0xbdef); // probable 'OV?.EQUIP-OK'
  MODULE(); // MODULE
  if (Pop() == 0) return;
  Push(0xd342); // probable 'TRY-LAND'
  MODULE(); // MODULE
  Push(pp_GWF); // GWF
  Push(Read16(Pop())); // @
  _0_st_(); // 0<
  if (Pop() == 0) return;
  Push(0xd214); // probable 'OV>DE'
  MODULE(); // MODULE
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf022: WORD '1.1BTN.XEQ' codep=0x4a4f parp=0xf031
// ================================================

void _1_dot_1BTN_dot_XEQ() // 1.1BTN.XEQ
{
  switch(Pop()) // 1.1BTN.XEQ
  {
  case 0:
    UNK_0xefe4(); // UNK_0xefe4
    break;
  case 1:
    UNK_0xeffc(); // UNK_0xeffc
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf03d: WORD 'UNK_0xf03f' codep=0x224c parp=0xf03f
// ================================================

void UNK_0xf03f() // UNK_0xf03f
{
  CTINIT(); // CTINIT
  UNK_0x3f3b("REPORT TO OPERATIONS FOR EVALUATION");
  _dot_TTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
  Push(pp__ask__gt_OP); // ?>OP
  ON_3(); // ON_3
}


// ================================================
// 0xf075: WORD 'UNK_0xf077' codep=0x224c parp=0xf077
// ================================================

void UNK_0xf077() // UNK_0xf077
{
  UNK_0xedec(); // UNK_0xedec
  Push(pp__ask_TV); // ?TV
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp__ask_RECALL); // ?RECALL
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    UNK_0xf03f(); // UNK_0xf03f
  }
  if (Pop() == 0) Push(1); else Push(0); // NOT
  SWAP(); // SWAP
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf093: WORD 'UNK_0xf095' codep=0x224c parp=0xf095
// ================================================

void UNK_0xf095() // UNK_0xf095
{
  Push(pp__ask_TV); // ?TV
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    CTERASE(); // CTERASE
    Push(pp__ask__ask__ask_IT); // ???IT
    OFF(); // OFF
    Push(pp__ask_ON_dash_PLA); // ?ON-PLA
    ON_3(); // ON_3
    UNK_0xedec(); // UNK_0xedec
    UNK_0x3f3b("STANDBY...SCANNING PLANET.");
    _dot_TTY(); // .TTY
    Push(pp_PLHI); // PLHI
    Push(Read16(Pop())); // @
    Push(-1);
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Push(pp__ask_LANDED); // ?LANDED
      ON_3(); // ON_3
      Push(0xccfa); // probable 'BIO'
      MODULE(); // MODULE
    }
    Push(0xd0bf); // probable 'TV'
    MODULE(); // MODULE
    Push(0xbd4a); // probable '=CARGO'
    MODULE(); // MODULE
    _i_KEY(); // 'KEY
    Pop(); // DROP
    Push(pp__ask_ON_dash_PLA); // ?ON-PLA
    OFF(); // OFF
    UNK_0xefc2(); // UNK_0xefc2
    Push(0xc3e1); // probable 'SEEGRID'
    MODULE(); // MODULE
  } else
  {
    CTINIT(); // CTINIT
    UNK_0x3f3b("THE SHIP IS NO LONGER EQUIPPED");
    _dot_TTY(); // .TTY
    UNK_0x3f3b("WITH A TERRAIN VEHICLE");
    _dot_TTY(); // .TTY
  }
  Push(pp_UNK_0xedb6); // UNK_0xedb6
  OFF(); // OFF
}


// ================================================
// 0xf146: WORD 'UNK_0xf148' codep=0x224c parp=0xf148
// ================================================

void UNK_0xf148() // UNK_0xf148
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("WE CAN'T DISEMBARK IN SPACE!", 28); // (.")
  Push(pp_UNK_0xedb6); // UNK_0xedb6
  OFF(); // OFF
}


// ================================================
// 0xf171: WORD '>DISEMBARK' codep=0x4a4f parp=0xf180
// ================================================

void _gt_DISEMBARK() // >DISEMBARK
{
  switch(Pop()) // >DISEMBARK
  {
  case 5:
    UNK_0xf077(); // UNK_0xf077
    break;
  case 0:
    UNK_0xf095(); // UNK_0xf095
    break;
  default:
    UNK_0xf148(); // UNK_0xf148
    break;

  }
}

// ================================================
// 0xf18c: WORD 'UNK_0xf18e' codep=0x224c parp=0xf18e
// ================================================

void UNK_0xf18e() // UNK_0xf18e
{
  Push(pp__ask_TV); // ?TV
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp__ask_RECALL); // ?RECALL
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(5);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    UNK_0xf03f(); // UNK_0xf03f
    return;
  }
  Push(0xd204); // probable 'OV/LA'
  MODULE(); // MODULE
  Push(0xbf56); // probable '/STARDATE'
  Push(pp__i__dot_DATE); // '.DATE
  _ex__3(); // !_3
  if (Pop() != 0)
  {
    UNK_0xee4a(); // UNK_0xee4a
    UNK_0xede2(); // UNK_0xede2
    Push(0xef06); // probable 'UNK_0xef06'
    Push(0xef68); // probable 'UNK_0xef68'
    Push(0xf031); // probable '1.1BTN.XEQ'
    Push(7);
    Push(0xef50); // probable 'UNK_0xef50'
    DOTASKS2(UNK_0xef50, UNK_0xef50, UNK_0xef50, UNK_0xef50);
  }
  Push(1);
  Push(0);
  _dot_ABTN(); // .ABTN
}


// ================================================
// 0xf1e0: WORD 'UNK_0xf1e2' codep=0x224c parp=0xf1e2
// ================================================

void UNK_0xf1e2() // UNK_0xf1e2
{
  Push(0xbd4a); // probable '=CARGO'
  MODULE(); // MODULE
  Push(pp_UNK_0xedb6); // UNK_0xedb6
  ON_3(); // ON_3
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  _gt_DISEMBARK(); // >DISEMBARK case
}


// ================================================
// 0xf1f4: WORD 'UNK_0xf1f6' codep=0x224c parp=0xf1f6
// ================================================

void UNK_0xf1f6() // UNK_0xf1f6
{
  Push(0xd1e4); // probable 'OV/IT'
  MODULE(); // MODULE
}


// ================================================
// 0xf1fe: WORD 'UNK_0xf200' codep=0x224c parp=0xf200
// ================================================

void UNK_0xf200() // UNK_0xf200
{
  Push(0xd224); // probable 'OV/LO'
  MODULE(); // MODULE
}


// ================================================
// 0xf208: WORD 'UNK_0xf20a' codep=0x224c parp=0xf20a
// ================================================

void UNK_0xf20a() // UNK_0xf20a
{
  Push(0xd1f4); // probable 'OV/CA'
  MODULE(); // MODULE
}


// ================================================
// 0xf212: WORD '1BTN.XEQ' codep=0x4a4f parp=0xf21f
// ================================================

void _1BTN_dot_XEQ() // 1BTN.XEQ
{
  switch(Pop()) // 1BTN.XEQ
  {
  case 0:
    UNK_0xf18e(); // UNK_0xf18e
    break;
  case 1:
    UNK_0xf1e2(); // UNK_0xf1e2
    break;
  case 2:
    UNK_0xf1f6(); // UNK_0xf1f6
    break;
  case 3:
    UNK_0xf200(); // UNK_0xf200
    break;
  case 4:
    UNK_0xf20a(); // UNK_0xf20a
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf237: WORD 'UNK_0xf239' codep=0x224c parp=0xf239
// ================================================

void UNK_0xf239() // UNK_0xf239
{
  UNK_0xee4a(); // UNK_0xee4a
  Push(0xbf31); // probable 'OV/SENSORS'
  MODULE(); // MODULE
}


// ================================================
// 0xf243: WORD 'UNK_0xf245' codep=0x224c parp=0xf245
// ================================================

void UNK_0xf245() // UNK_0xf245
{
  Push(1);
  Push(0xd2ba); // probable 'OV/ANALYSIS'
  MODULE(); // MODULE
}


// ================================================
// 0xf24f: WORD 'UNK_0xf251' codep=0x224c parp=0xf251
// ================================================

void UNK_0xf251() // UNK_0xf251
{
  UNK_0xee4a(); // UNK_0xee4a
  UNK_0xedce(); // UNK_0xedce
}


// ================================================
// 0xf257: WORD '2BTN.XEQ' codep=0x4a4f parp=0xf264
// ================================================

void _2BTN_dot_XEQ() // 2BTN.XEQ
{
  switch(Pop()) // 2BTN.XEQ
  {
  case 0:
    UNK_0xf239(); // UNK_0xf239
    break;
  case 1:
    UNK_0xf245(); // UNK_0xf245
    break;
  case 2:
    UNK_0xf251(); // UNK_0xf251
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf274: WORD 'UNK_0xf276' codep=0x224c parp=0xf276
// ================================================

void UNK_0xf276() // UNK_0xf276
{
  Push(0xcbbf); // probable 'MANEUVER'
  MODULE(); // MODULE
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xf282: WORD 'UNK_0xf284' codep=0x224c parp=0xf284
// ================================================

void UNK_0xf284() // UNK_0xf284
{
  Push(0xd2fa); // probable 'OV/STARMAP'
  MODULE(); // MODULE
  if (Pop() == 0) return;
  UNK_0xefc2(); // UNK_0xefc2
}


// ================================================
// 0xf292: WORD 'UNK_0xf294' codep=0x224c parp=0xf294
// ================================================

void UNK_0xf294() // UNK_0xf294
{
  Push(0xcb3e); // probable 'OV/(U'
  MODULE(); // MODULE
}


// ================================================
// 0xf29c: WORD 'UNK_0xf29e' codep=0x224c parp=0xf29e
// ================================================

void UNK_0xf29e() // UNK_0xf29e
{
  Push(0xcb2e); // probable 'OV/(D'
  MODULE(); // MODULE
  Push(3);
  Push(3);
  _dot_ABTN(); // .ABTN
}


// ================================================
// 0xf2ac: WORD 'UNK_0xf2ae' codep=0x224c parp=0xf2ae
// ================================================

void UNK_0xf2ae() // UNK_0xf2ae
{
  Push(pp_FORCEPTASK); // FORCEPTASK
  ON_3(); // ON_3
  Push(pp__i_COMBAT); // 'COMBAT
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  Push(pp_FORCEPTASK); // FORCEPTASK
  OFF(); // OFF
}


// ================================================
// 0xf2be: WORD '3BTN.XEQ' codep=0x4a4f parp=0xf2cb
// ================================================

void _3BTN_dot_XEQ() // 3BTN.XEQ
{
  switch(Pop()) // 3BTN.XEQ
  {
  case 0:
    UNK_0xf276(); // UNK_0xf276
    break;
  case 1:
    UNK_0xf284(); // UNK_0xf284
    break;
  case 2:
    UNK_0xf294(); // UNK_0xf294
    break;
  case 3:
    UNK_0xf29e(); // UNK_0xf29e
    break;
  case 4:
    UNK_0xf2ae(); // UNK_0xf2ae
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf2e3: WORD 'UNK_0xf2e5' codep=0x224c parp=0xf2e5
// ================================================

void UNK_0xf2e5() // UNK_0xf2e5
{
  UNK_0xee4a(); // UNK_0xee4a
  UNK_0xedd8(); // UNK_0xedd8
}


// ================================================
// 0xf2eb: WORD 'UNK_0xf2ed' codep=0x224c parp=0xf2ed
// ================================================

void UNK_0xf2ed() // UNK_0xf2ed
{
  UNK_0xee4a(); // UNK_0xee4a
  Push(0xbe3b); // probable 'OV/RE'
  MODULE(); // MODULE
}


// ================================================
// 0xf2f7: WORD '4BTN.XEQ' codep=0x4a4f parp=0xf304
// ================================================

void _4BTN_dot_XEQ() // 4BTN.XEQ
{
  switch(Pop()) // 4BTN.XEQ
  {
  case 0:
    UNK_0xf2e5(); // UNK_0xf2e5
    break;
  case 1:
    UNK_0xf2ed(); // UNK_0xf2ed
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf310: WORD 'UNK_0xf312' codep=0x224c parp=0xf312
// ================================================

void UNK_0xf312() // UNK_0xf312
{
  Push(0xd266); // probable 'OV/EXAMINE'
  MODULE(); // MODULE
}


// ================================================
// 0xf31a: WORD 'UNK_0xf31c' codep=0x224c parp=0xf31c
// ================================================

void UNK_0xf31c() // UNK_0xf31c
{
  Push(0xd279); // probable 'OV/TREAT'
  MODULE(); // MODULE
}


// ================================================
// 0xf324: WORD '6BTN.XEQ' codep=0x4a4f parp=0xf331
// ================================================

void _6BTN_dot_XEQ() // 6BTN.XEQ
{
  switch(Pop()) // 6BTN.XEQ
  {
  case 0:
    UNK_0xf312(); // UNK_0xf312
    break;
  case 1:
    UNK_0xf31c(); // UNK_0xf31c
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;

  }
}

// ================================================
// 0xf33d: WORD 'UNK_0xf33f' codep=0x224c parp=0xf33f
// ================================================

void UNK_0xf33f() // UNK_0xf33f
{
  Push(0xef06); // probable 'UNK_0xef06'
  Push(0xef68); // probable 'UNK_0xef68'
  Push(0xf21f); // probable '1BTN.XEQ'
  Push(1);
  Push(0xef50); // probable 'UNK_0xef50'
  DOTASKS2(UNK_0xef50, UNK_0xef50, UNK_0xef50, UNK_0xef50);
  Push(pp_UNK_0xedb6); // UNK_0xedb6
  OFF(); // OFF
}


// ================================================
// 0xf359: WORD 'UNK_0xf35b' codep=0x224c parp=0xf35b
// ================================================

void UNK_0xf35b() // UNK_0xf35b
{
  Push(0xef06); // probable 'UNK_0xef06'
  Push(0xef68); // probable 'UNK_0xef68'
  Push(0xf264); // probable '2BTN.XEQ'
  Push(2);
  Push(0xef50); // probable 'UNK_0xef50'
  DOTASKS2(UNK_0xef50, UNK_0xef50, UNK_0xef50, UNK_0xef50);
}


// ================================================
// 0xf371: WORD 'UNK_0xf373' codep=0x224c parp=0xf373
// ================================================

void UNK_0xf373() // UNK_0xf373
{
  Push(0xef06); // probable 'UNK_0xef06'
  Push(0xef68); // probable 'UNK_0xef68'
  Push(0xf2cb); // probable '3BTN.XEQ'
  Push(3);
  Push(0xef50); // probable 'UNK_0xef50'
  DOTASKS2(UNK_0xef50, UNK_0xef50, UNK_0xef50, UNK_0xef50);
}


// ================================================
// 0xf389: WORD 'UNK_0xf38b' codep=0x224c parp=0xf38b
// ================================================

void UNK_0xf38b() // UNK_0xf38b
{
  Push(0xef06); // probable 'UNK_0xef06'
  Push(0xef68); // probable 'UNK_0xef68'
  Push(0xf304); // probable '4BTN.XEQ'
  Push(4);
  Push(0xef50); // probable 'UNK_0xef50'
  DOTASKS2(UNK_0xef50, UNK_0xef50, UNK_0xef50, UNK_0xef50);
}


// ================================================
// 0xf3a1: WORD 'UNK_0xf3a3' codep=0x224c parp=0xf3a3
// ================================================

void UNK_0xf3a3() // UNK_0xf3a3
{
  Push(5);
  UNK_0xee6c(); // UNK_0xee6c
  Push(0xc1a8); // probable 'U-COMM'
  MODULE(); // MODULE
  UNK_0xeeba(); // UNK_0xeeba
}


// ================================================
// 0xf3b1: WORD 'UNK_0xf3b3' codep=0x224c parp=0xf3b3
// ================================================

void UNK_0xf3b3() // UNK_0xf3b3
{
  Push(0xef06); // probable 'UNK_0xef06'
  Push(0xef68); // probable 'UNK_0xef68'
  Push(0xf331); // probable '6BTN.XEQ'
  Push(6);
  Push(0xef50); // probable 'UNK_0xef50'
  DOTASKS2(UNK_0xef50, UNK_0xef50, UNK_0xef50, UNK_0xef50);
}


// ================================================
// 0xf3c9: WORD '0BTN.XEQ' codep=0x4a4f parp=0xf3d6
// ================================================

void _0BTN_dot_XEQ() // 0BTN.XEQ
{
  switch(Pop()) // 0BTN.XEQ
  {
  case 0:
    UNK_0xf33f(); // UNK_0xf33f
    break;
  case 1:
    UNK_0xf35b(); // UNK_0xf35b
    break;
  case 2:
    UNK_0xf373(); // UNK_0xf373
    break;
  case 3:
    UNK_0xf38b(); // UNK_0xf38b
    break;
  case 4:
    UNK_0xf3a3(); // UNK_0xf3a3
    break;
  default:
    UNK_0xf3b3(); // UNK_0xf3b3
    break;

  }
}

// ================================================
// 0xf3ee: WORD 'UNK_0xf3f0' codep=0x224c parp=0xf3f0
// ================================================

void UNK_0xf3f0() // UNK_0xf3f0
{
  V_gt_(); // V>
  V_gt_(); // V>
  V_gt_(); // V>
  Pop(); // DROP
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf3fc: WORD 'UNK_0xf3fe' codep=0x224c parp=0xf3fe
// ================================================

void UNK_0xf3fe() // UNK_0xf3fe
{
  Push(0xf3f0); // probable 'UNK_0xf3f0'
  Push(0xef68); // probable 'UNK_0xef68'
  Push(0xf3d6); // probable '0BTN.XEQ'
  Push(0);
  Push(0xef50); // probable 'UNK_0xef50'
  DOTASKS2(UNK_0xef50, UNK_0xef50, UNK_0xef50, UNK_0xef50);
  Push(pp_UNK_0xedb6); // UNK_0xedb6
  OFF(); // OFF
}


// ================================================
// 0xf418: WORD 'UNK_0xf41a' codep=0x224c parp=0xf41a
// ================================================

void UNK_0xf41a() // UNK_0xf41a
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  UNK_0x3f3b("SHIP COMPUTER ACTIVATED");
  _dot_TTY(); // .TTY
  Push(0xbef3); // probable 'OV/STATUS'
  MODULE(); // MODULE
  CTINIT(); // CTINIT
  UNK_0x3f3b("PRE-LAUNCH PROCEDURES COMPLETE");
  _dot_TTY(); // .TTY
  Push(0x00fa);
  MS(); // MS
  UNK_0x3f3b("STANDING BY TO INITIATE LAUNCH");
  _dot_TTY(); // .TTY
  Push(0x00fa);
  MS(); // MS
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR
}


// ================================================
// 0xf49e: WORD 'UNK_0xf4a0' codep=0x224c parp=0xf4a0
// ================================================

void UNK_0xf4a0() // UNK_0xf4a0
{
  Push(0xd1a8); // probable '.AIRL'
  MODULE(); // MODULE
  V_gt_DISPLAY(); // V>DISPLAY
  UNK_0xf41a(); // UNK_0xf41a
}


// ================================================
// 0xf4ac: WORD '>FLT' codep=0x224c parp=0xf4b5
// ================================================
// entry

void _gt_FLT() // >FLT
{
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  _ex__3(); // !_3
  Push(6);
  Push(pp_RECORD_n_); // RECORD#
  _ex__3(); // !_3
  LoadData("ELEM-VAL"); // from 'ELEMENT     '
  Push(Read16(Pop())); // @
  Push(Pop()*2); // 2*
  LoadData("ELEM-VAL"); // from 'ELEMENT     '
  _ex__3(); // !_3
  SET_dash_CURRENT(); // SET-CURRENT
  TIME(); // TIME
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  Push(pp_NAV_dash_TIME); // NAV-TIME
  D_ex_(); // D!
  Push(pp_ENC_dash_TIME); // ENC-TIME
  D_ex_(); // D!
  Push(pp_STAR_dash_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(pp_TRAK_dash_HR); // TRAK-HR
  _ex__3(); // !_3
  CFIGARRAYS(); // CFIGARRAYS
  SetColor("GREY2");
  _ro_SHIP_dash_C(); // (SHIP-C
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(5);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    UNK_0xf4a0(); // UNK_0xf4a0
  }
  Push(pp_UNK_0xedb6); // UNK_0xedb6
  OFF(); // OFF
  UNK_0xf3fe(); // UNK_0xf3fe
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  _ex__3(); // !_3
  Push(6);
  Push(pp_RECORD_n_); // RECORD#
  _ex__3(); // !_3
  LoadData("ELEM-VAL"); // from 'ELEMENT     '
  Push(Read16(Pop())); // @
  Push(Pop()>>1); // 2/
  LoadData("ELEM-VAL"); // from 'ELEMENT     '
  _ex__3(); // !_3
  SET_dash_CURRENT(); // SET-CURRENT
}

// 0xf51b: db 0x42 0x54 0x4e 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x42 0x55 0x54 0x54 0x4f 0x4e 0x53 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x32 0x31 0x32 0x30 0x2d 0x00 'BTN-VOC_________________________ for BUTTONS-------------------)2120- '

