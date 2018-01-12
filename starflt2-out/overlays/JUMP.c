// ====== OVERLAY 'JUMP' ======
// store offset = 0xed30
// overlay size   = 0x0830

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xed46  codep:0x1d29 parp:0xed46 size:0x0002 C-string:'UNK_0xed46'
//      UNK_0xed4a  codep:0x224c parp:0xed4a size:0x0008 C-string:'UNK_0xed4a'
//      UNK_0xed54  codep:0x224c parp:0xed54 size:0x0008 C-string:'UNK_0xed54'
//      UNK_0xed5e  codep:0x224c parp:0xed5e size:0x005c C-string:'UNK_0xed5e'
//      UNK_0xedbc  codep:0x7420 parp:0xedbc size:0x0003 C-string:'UNK_0xedbc'
//      UNK_0xedc1  codep:0x7420 parp:0xedc1 size:0x0003 C-string:'UNK_0xedc1'
//      UNK_0xedc6  codep:0x7420 parp:0xedc6 size:0x0003 C-string:'UNK_0xedc6'
//      UNK_0xedcb  codep:0x7420 parp:0xedcb size:0x0003 C-string:'UNK_0xedcb'
//      UNK_0xedd0  codep:0x7420 parp:0xedd0 size:0x0003 C-string:'UNK_0xedd0'
//      UNK_0xedd5  codep:0x1d29 parp:0xedd5 size:0x0002 C-string:'UNK_0xedd5'
//      UNK_0xedd9  codep:0x1d29 parp:0xedd9 size:0x0002 C-string:'UNK_0xedd9'
//      UNK_0xeddd  codep:0x224c parp:0xeddd size:0x0018 C-string:'UNK_0xeddd'
//      UNK_0xedf7  codep:0x224c parp:0xedf7 size:0x0008 C-string:'UNK_0xedf7'
//      UNK_0xee01  codep:0x224c parp:0xee01 size:0x0008 C-string:'UNK_0xee01'
//      UNK_0xee0b  codep:0x224c parp:0xee0b size:0x0008 C-string:'UNK_0xee0b'
//      UNK_0xee15  codep:0x224c parp:0xee15 size:0x0008 C-string:'UNK_0xee15'
//      UNK_0xee1f  codep:0x224c parp:0xee1f size:0x0010 C-string:'UNK_0xee1f'
//      UNK_0xee31  codep:0x224c parp:0xee31 size:0x0010 C-string:'UNK_0xee31'
//      UNK_0xee43  codep:0x224c parp:0xee43 size:0x0028 C-string:'UNK_0xee43'
//      UNK_0xee6d  codep:0x224c parp:0xee6d size:0x004c C-string:'UNK_0xee6d'
//      UNK_0xeebb  codep:0x224c parp:0xeebb size:0x0026 C-string:'UNK_0xeebb'
//      UNK_0xeee3  codep:0x224c parp:0xeee3 size:0x0022 C-string:'UNK_0xeee3'
//      UNK_0xef07  codep:0x224c parp:0xef07 size:0x0028 C-string:'UNK_0xef07'
//      UNK_0xef31  codep:0x224c parp:0xef31 size:0x0006 C-string:'UNK_0xef31'
//         (GET-AU  codep:0x4b3b parp:0xef43 size:0x0020 C-string:'_ro_GET_dash_AU'
//      UNK_0xef65  codep:0x224c parp:0xef65 size:0x001a C-string:'UNK_0xef65'
//      UNK_0xef81  codep:0x224c parp:0xef81 size:0x002f C-string:'UNK_0xef81'
//      UNK_0xefb2  codep:0x224c parp:0xefb2 size:0x0028 C-string:'UNK_0xefb2'
//      UNK_0xefdc  codep:0x1d29 parp:0xefdc size:0x0002 C-string:'UNK_0xefdc'
//      UNK_0xefe0  codep:0x224c parp:0xefe0 size:0x0008 C-string:'UNK_0xefe0'
//      UNK_0xefea  codep:0x224c parp:0xefea size:0x0024 C-string:'UNK_0xefea'
//      UNK_0xf010  codep:0x224c parp:0xf010 size:0x0006 C-string:'UNK_0xf010'
//      UNK_0xf018  codep:0x224c parp:0xf018 size:0x002e C-string:'UNK_0xf018'
//      UNK_0xf048  codep:0x224c parp:0xf048 size:0x0014 C-string:'UNK_0xf048'
//      UNK_0xf05e  codep:0x224c parp:0xf05e size:0x000c C-string:'UNK_0xf05e'
//      UNK_0xf06c  codep:0x1d29 parp:0xf06c size:0x0002 C-string:'UNK_0xf06c'
//      UNK_0xf070  codep:0x224c parp:0xf070 size:0x0022 C-string:'UNK_0xf070'
//      UNK_0xf094  codep:0x224c parp:0xf094 size:0x001a C-string:'UNK_0xf094'
//      UNK_0xf0b0  codep:0x224c parp:0xf0b0 size:0x000e C-string:'UNK_0xf0b0'
//      UNK_0xf0c0  codep:0x224c parp:0xf0c0 size:0x0006 C-string:'UNK_0xf0c0'
//      UNK_0xf0c8  codep:0x224c parp:0xf0c8 size:0x000a C-string:'UNK_0xf0c8'
//      UNK_0xf0d4  codep:0x224c parp:0xf0d4 size:0x0054 C-string:'UNK_0xf0d4'
//      UNK_0xf12a  codep:0x1d29 parp:0xf12a size:0x0002 C-string:'UNK_0xf12a'
//      UNK_0xf12e  codep:0x224c parp:0xf12e size:0x002c C-string:'UNK_0xf12e'
//      UNK_0xf15c  codep:0x224c parp:0xf15c size:0x0008 C-string:'UNK_0xf15c'
//      UNK_0xf166  codep:0x224c parp:0xf166 size:0x0024 C-string:'UNK_0xf166'
//      UNK_0xf18c  codep:0x224c parp:0xf18c size:0x003a C-string:'UNK_0xf18c'
//      UNK_0xf1c8  codep:0x224c parp:0xf1c8 size:0x001a C-string:'UNK_0xf1c8'
//      UNK_0xf1e4  codep:0x224c parp:0xf1e4 size:0x0018 C-string:'UNK_0xf1e4'
//      UNK_0xf1fe  codep:0x224c parp:0xf1fe size:0x0022 C-string:'UNK_0xf1fe'
//      UNK_0xf222  codep:0x224c parp:0xf222 size:0x002c C-string:'UNK_0xf222'
//      UNK_0xf250  codep:0x224c parp:0xf250 size:0x0018 C-string:'UNK_0xf250'
//      UNK_0xf26a  codep:0x224c parp:0xf26a size:0x00a8 C-string:'UNK_0xf26a'
//      UNK_0xf314  codep:0x224c parp:0xf314 size:0x006a C-string:'UNK_0xf314'
//      UNK_0xf380  codep:0x224c parp:0xf380 size:0x0016 C-string:'UNK_0xf380'
//      UNK_0xf398  codep:0x224c parp:0xf398 size:0x0024 C-string:'UNK_0xf398'
//      UNK_0xf3be  codep:0x224c parp:0xf3be size:0x0014 C-string:'UNK_0xf3be'
//      UNK_0xf3d4  codep:0x224c parp:0xf3d4 size:0x0020 C-string:'UNK_0xf3d4'
//      UNK_0xf3f6  codep:0x224c parp:0xf3f6 size:0x0012 C-string:'UNK_0xf3f6'
//      UNK_0xf40a  codep:0x224c parp:0xf40a size:0x0034 C-string:'UNK_0xf40a'
//      UNK_0xf440  codep:0x224c parp:0xf440 size:0x0022 C-string:'UNK_0xf440'
//      UNK_0xf464  codep:0x224c parp:0xf464 size:0x001c C-string:'UNK_0xf464'
//      UNK_0xf482  codep:0x224c parp:0xf482 size:0x0046 C-string:'UNK_0xf482'
//            JUMP  codep:0x224c parp:0xf4d1 size:0x0000 C-string:'JUMP'

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
const unsigned short int pp_UNK_0xed46 = 0xed46; // UNK_0xed46 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xedd5 = 0xedd5; // UNK_0xedd5 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xedd9 = 0xedd9; // UNK_0xedd9 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xefdc = 0xefdc; // UNK_0xefdc size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf06c = 0xf06c; // UNK_0xf06c size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf12a = 0xf12a; // UNK_0xf12a size: 2
// {0x3a, 0x20}




// 0xed42: db 0x82 0x00 '  '

// ================================================
// 0xed44: WORD 'UNK_0xed46' codep=0x1d29 parp=0xed46
// ================================================
// 0xed46: db 0x3a 0x20 ': '

// ================================================
// 0xed48: WORD 'UNK_0xed4a' codep=0x224c parp=0xed4a params=1 returns=1
// ================================================

void UNK_0xed4a() // UNK_0xed4a
{
  Push(Pop() + Read16(pp_UNK_0xed46)); //  UNK_0xed46 @ +
}


// ================================================
// 0xed52: WORD 'UNK_0xed54' codep=0x224c parp=0xed54 params=1 returns=1
// ================================================

void UNK_0xed54() // UNK_0xed54
{
  Push(Pop() - Read16(pp_UNK_0xed46)); //  UNK_0xed46 @ -
}


// ================================================
// 0xed5c: WORD 'UNK_0xed5e' codep=0x224c parp=0xed5e params=4 returns=0
// ================================================

void UNK_0xed5e() // UNK_0xed5e
{
  unsigned short int a, b, c;
  a = Pop(); // >R
  b = Pop(); // >R
  c = Pop(); // >R
  Push(Read16(regsp)); // DUP
  Push(c); // I
  UNK_0xed54(); // UNK_0xed54
  SWAP(); // SWAP
  UNK_0xed4a(); // UNK_0xed4a
  Push(a); // J
  UNK_0xed4a(); // UNK_0xed4a
  OVER(); // OVER
  LLINE(); // LLINE
  Push(c); // I
  UNK_0xed54(); // UNK_0xed54
  OVER(); // OVER
  UNK_0xed4a(); // UNK_0xed4a
  Push(c); // I
  UNK_0xed4a(); // UNK_0xed4a
  Push(b); // I'
  UNK_0xed54(); // UNK_0xed54
  LLINE(); // LLINE
  Push(c); // I
  UNK_0xed4a(); // UNK_0xed4a
  Push(b); // I'
  UNK_0xed54(); // UNK_0xed54
  Push(a); // J
  UNK_0xed54(); // UNK_0xed54
  Push(b); // I'
  UNK_0xed54(); // UNK_0xed54
  LLINE(); // LLINE
  Push(a); // J
  UNK_0xed54(); // UNK_0xed54
  Push(b); // I'
  UNK_0xed54(); // UNK_0xed54
  ROT(); // ROT
  Push(a); // J
  UNK_0xed4a(); // UNK_0xed4a
  SWAP(); // SWAP
  UNK_0xed4a(); // UNK_0xed4a
  LLINE(); // LLINE
  Push(c); // R>
  Pop(); // DROP
  Push(b); // R>
  Push(a); // R>
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xedba: WORD 'UNK_0xedbc' codep=0x7420 parp=0xedbc
// ================================================
IFieldType UNK_0xedbc = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xedbf: WORD 'UNK_0xedc1' codep=0x7420 parp=0xedc1
// ================================================
IFieldType UNK_0xedc1 = {ASSIGN_CREWIDX, 0x11, 0x12};

// ================================================
// 0xedc4: WORD 'UNK_0xedc6' codep=0x7420 parp=0xedc6
// ================================================
IFieldType UNK_0xedc6 = {SHIPIDX, 0x34, 0x0f};

// ================================================
// 0xedc9: WORD 'UNK_0xedcb' codep=0x7420 parp=0xedcb
// ================================================
IFieldType UNK_0xedcb = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xedce: WORD 'UNK_0xedd0' codep=0x7420 parp=0xedd0
// ================================================
IFieldType UNK_0xedd0 = {SHIPIDX, 0x56, 0x01};

// ================================================
// 0xedd3: WORD 'UNK_0xedd5' codep=0x1d29 parp=0xedd5
// ================================================
// 0xedd5: db 0x3a 0x20 ': '

// ================================================
// 0xedd7: WORD 'UNK_0xedd9' codep=0x1d29 parp=0xedd9
// ================================================
// 0xedd9: db 0x3a 0x20 ': '

// ================================================
// 0xeddb: WORD 'UNK_0xeddd' codep=0x224c parp=0xeddd
// ================================================

void UNK_0xeddd() // UNK_0xeddd
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
// 0xedf5: WORD 'UNK_0xedf7' codep=0x224c parp=0xedf7 params=0 returns=0
// ================================================

void UNK_0xedf7() // UNK_0xedf7
{
  Push(0xc090); // probable 'OV/STA'
  MODULE(); // MODULE
}


// ================================================
// 0xedff: WORD 'UNK_0xee01' codep=0x224c parp=0xee01 params=0 returns=0
// ================================================

void UNK_0xee01() // UNK_0xee01
{
  Push(0xbc98); // probable 'OV/DA'
  MODULE(); // MODULE
}


// ================================================
// 0xee09: WORD 'UNK_0xee0b' codep=0x224c parp=0xee0b params=0 returns=0
// ================================================

void UNK_0xee0b() // UNK_0xee0b
{
  Push(0xc4ef); // probable '(.MERC)'
  MODULE(); // MODULE
}


// ================================================
// 0xee13: WORD 'UNK_0xee15' codep=0x224c parp=0xee15 params=0 returns=1
// ================================================

void UNK_0xee15() // UNK_0xee15
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xee1d: WORD 'UNK_0xee1f' codep=0x224c parp=0xee1f params=2 returns=1
// ================================================

void UNK_0xee1f() // UNK_0xee1f
{
  UNK_0xee15(); // UNK_0xee15
  if (Pop() != 0)
  {
    Push(Pop() + Pop()); // +
    return;
  }
  _dash_(); // -
}


// ================================================
// 0xee2f: WORD 'UNK_0xee31' codep=0x224c parp=0xee31 params=2 returns=2
// ================================================

void UNK_0xee31() // UNK_0xee31
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
// 0xee41: WORD 'UNK_0xee43' codep=0x224c parp=0xee43 params=0 returns=2
// ================================================

void UNK_0xee43() // UNK_0xee43
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
// 0xee6b: WORD 'UNK_0xee6d' codep=0x224c parp=0xee6d
// ================================================

void UNK_0xee6d() // UNK_0xee6d
{
  Push(0x0010);
  Push(0x0041);
  UNK_0xeddd(); // UNK_0xeddd
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
  UNK_0xeddd(); // UNK_0xeddd
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(Pop() * 3 + (0x65e1+UNK_0xedc1.offset)); //  3 * UNK_0xedc1<IFIELD> +
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+UNK_0xedbc.offset); // UNK_0xedbc<IFIELD>
  _do__dot_(); // $.
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeeb9: WORD 'UNK_0xeebb' codep=0x224c parp=0xeebb
// ================================================

void UNK_0xeebb() // UNK_0xeebb
{
  Push(0x0010);
  Push(0x0041);
  UNK_0xeddd(); // UNK_0xeddd
  PRINT("ISS", 3); // (.")
  Push(0x0010);
  Push(0x003b);
  UNK_0xeddd(); // UNK_0xeddd
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xedc6.offset); // UNK_0xedc6<IFIELD>
  _do__dot_(); // $.
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeee1: WORD 'UNK_0xeee3' codep=0x224c parp=0xeee3
// ================================================

void UNK_0xeee3() // UNK_0xeee3
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
      UNK_0xeebb(); // UNK_0xeebb
    } else
    {
      Push(Read16(regsp)); // DUP
      UNK_0xee6d(); // UNK_0xee6d
    }
  }
  DrawBTN_dash_TE(); // .BTN-TE
}


// ================================================
// 0xef05: WORD 'UNK_0xef07' codep=0x224c parp=0xef07
// ================================================

void UNK_0xef07() // UNK_0xef07
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
  UNK_0xed5e(); // UNK_0xed5e
}


// ================================================
// 0xef2f: WORD 'UNK_0xef31' codep=0x224c parp=0xef31
// ================================================

void UNK_0xef31() // UNK_0xef31
{
  GetColor(BLACK);
  ERASE_dash_A(); // ERASE-A
}


// ================================================
// 0xef37: WORD '(GET-AU' codep=0x4b3b parp=0xef43
// ================================================

void _ro_GET_dash_AU() // (GET-AU
{
  switch(Pop()) // (GET-AU
  {
  case 1:
    UNK_0xedf7(); // UNK_0xedf7
    break;
  case 2:
    UNK_0xedf7(); // UNK_0xedf7
    break;
  case 3:
    UNK_0xee01(); // UNK_0xee01
    break;
  case 4:
    UNK_0xee0b(); // UNK_0xee0b
    break;
  case 5:
    GET_dash_HA(); // GET-HA
    break;
  case 6:
    GET_dash_HA(); // GET-HA
    break;
  case 8:
    UNK_0xee0b(); // UNK_0xee0b
    break;
  default:
    UNK_0xef31(); // UNK_0xef31
    break;

  }
}

// ================================================
// 0xef63: WORD 'UNK_0xef65' codep=0x224c parp=0xef65
// ================================================

void UNK_0xef65() // UNK_0xef65
{
  GetColor(BLACK);
  _ro_SHIP_dash_C(); // (SHIP-C
  Push(Read16(pp__n_AUX)); // #AUX @
  _ro_GET_dash_AU(); // (GET-AU case
  Push(Read16(pp_BTN_dash_REC)); // BTN-REC @
  UNK_0xeee3(); // UNK_0xeee3
  GetColor(BLUE);
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  DrawHIGHLI(); // .HIGHLI
}


// ================================================
// 0xef7f: WORD 'UNK_0xef81' codep=0x224c parp=0xef81
// ================================================

void UNK_0xef81() // UNK_0xef81
{
  _gt_DISPLA(); // >DISPLA
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("JUMP POD ENGAGED");
  DrawTTY(); // .TTY
  Push(0x6b12); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  DrawTTY(); // .TTY
  Push(0x6b3c); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  DrawTTY(); // .TTY
}


// ================================================
// 0xefb0: WORD 'UNK_0xefb2' codep=0x224c parp=0xefb2
// ================================================

void UNK_0xefb2() // UNK_0xefb2
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
// 0xefda: WORD 'UNK_0xefdc' codep=0x1d29 parp=0xefdc
// ================================================
// 0xefdc: db 0x3a 0x20 ': '

// ================================================
// 0xefde: WORD 'UNK_0xefe0' codep=0x224c parp=0xefe0
// ================================================

void UNK_0xefe0() // UNK_0xefe0
{
  Push(Read16(pp_UNK_0xefdc)); // UNK_0xefdc @
  UNK_0xefb2(); // UNK_0xefb2
}


// ================================================
// 0xefe8: WORD 'UNK_0xefea' codep=0x224c parp=0xefea
// ================================================

void UNK_0xefea() // UNK_0xefea
{
  Push(Read16(regsp)); // DUP
  Push(0x0064 - Read16(pp_UNK_0xefdc)); // 0x0064 UNK_0xefdc @ -
  Push(0);
  SWAP(); // SWAP
  RRND(); // RRND
  Push(0x0028);
  ROT(); // ROT
  _dash_(); // -
  _slash_(); // /
  Push(pp_UNK_0xed46); // UNK_0xed46
  Store_2(); // !_2
  UNK_0xef07(); // UNK_0xef07
}


// ================================================
// 0xf00e: WORD 'UNK_0xf010' codep=0x224c parp=0xf010
// ================================================

void UNK_0xf010() // UNK_0xf010
{
  StoreCOLOR(); // !COLOR
  UNK_0xefea(); // UNK_0xefea
}


// ================================================
// 0xf016: WORD 'UNK_0xf018' codep=0x224c parp=0xf018
// ================================================

void UNK_0xf018() // UNK_0xf018
{
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  Push(6);
  GetColor(DK_dash_BLUE);
  UNK_0xf010(); // UNK_0xf010
  Push(0x000b);
  GetColor(GREEN);
  UNK_0xf010(); // UNK_0xf010
  Push(0x0010);
  GetColor(YELLOW);
  UNK_0xf010(); // UNK_0xf010
  Push(0x0015);
  GetColor(ORANGE);
  UNK_0xf010(); // UNK_0xf010
  Push(0x001a);
  GetColor(RED);
  UNK_0xf010(); // UNK_0xf010
  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xf046: WORD 'UNK_0xf048' codep=0x224c parp=0xf048 params=1 returns=1
// ================================================

void UNK_0xf048() // UNK_0xf048
{
  Push(Read16(regsp)); // DUP
  Push(Pop()==0x0017?1:0); //  0x0017 =
  SWAP(); // SWAP
  Push(Pop()==0x003c?1:0); //  0x003c =
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf05c: WORD 'UNK_0xf05e' codep=0x224c parp=0xf05e
// ================================================

void UNK_0xf05e() // UNK_0xf05e
{
  POINT_gt_I(); // POINT>I
  GetIL(); // @IL
  GetIH(); // @IH
  _gt_C_plus_S(); // >C+S
  GetINST_dash_C(); // @INST-C
}


// ================================================
// 0xf06a: WORD 'UNK_0xf06c' codep=0x1d29 parp=0xf06c
// ================================================
// 0xf06c: db 0x3a 0x20 ': '

// ================================================
// 0xf06e: WORD 'UNK_0xf070' codep=0x224c parp=0xf070 params=1 returns=0
// ================================================

void UNK_0xf070() // UNK_0xf070
{
  unsigned short int i, imax;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    UNK_0xf05e(); // UNK_0xf05e
    UNK_0xf048(); // UNK_0xf048
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      Push(-1);
      Push(pp_UNK_0xf06c); // UNK_0xf06c
      _plus__ex__2(); // +!_2
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf092: WORD 'UNK_0xf094' codep=0x224c parp=0xf094
// ================================================

void UNK_0xf094() // UNK_0xf094
{
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  ROT(); // ROT
  Push(Read16(pp__star_GLOBAL)); // *GLOBAL @
  IsICONS_dash__1(); // ?ICONS-_1
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xf06c); // UNK_0xf06c
  Store_2(); // !_2
  UNK_0xf070(); // UNK_0xf070
  Push(Read16(pp_UNK_0xf06c)); // UNK_0xf06c @
}


// ================================================
// 0xf0ae: WORD 'UNK_0xf0b0' codep=0x224c parp=0xf0b0 params=3 returns=0
// ================================================

void UNK_0xf0b0() // UNK_0xf0b0
{
  unsigned short int a;
  a = Pop(); // >R
  _dash_(); // -
  Push(Pop() * a); //  R> *
  Push(pp_UNK_0xedd9); // UNK_0xedd9
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf0be: WORD 'UNK_0xf0c0' codep=0x224c parp=0xf0c0 params=2 returns=3
// ================================================

void UNK_0xf0c0() // UNK_0xf0c0
{
  SWAP(); // SWAP
  OVER(); // OVER
}


// ================================================
// 0xf0c6: WORD 'UNK_0xf0c8' codep=0x224c parp=0xf0c8
// ================================================

void UNK_0xf0c8() // UNK_0xf0c8
{
  Push(Pop() * Read16(cc__star_MAPSCA) - 1); //  *MAPSCA * 1-
  UNK_0xf094(); // UNK_0xf094
}


// ================================================
// 0xf0d2: WORD 'UNK_0xf0d4' codep=0x224c parp=0xf0d4
// ================================================

void UNK_0xf0d4() // UNK_0xf0d4
{
  Push(8);
  UNK_0xf0c8(); // UNK_0xf0c8
  Push(7);
  UNK_0xf0c8(); // UNK_0xf0c8
  UNK_0xf0c0(); // UNK_0xf0c0
  Push(1);
  UNK_0xf0b0(); // UNK_0xf0b0
  Push(6);
  UNK_0xf0c8(); // UNK_0xf0c8
  UNK_0xf0c0(); // UNK_0xf0c0
  Push(1);
  UNK_0xf0b0(); // UNK_0xf0b0
  Push(5);
  UNK_0xf0c8(); // UNK_0xf0c8
  UNK_0xf0c0(); // UNK_0xf0c0
  Push(2);
  UNK_0xf0b0(); // UNK_0xf0b0
  Push(4);
  UNK_0xf0c8(); // UNK_0xf0c8
  UNK_0xf0c0(); // UNK_0xf0c0
  Push(5);
  UNK_0xf0b0(); // UNK_0xf0b0
  Push(3);
  UNK_0xf0c8(); // UNK_0xf0c8
  UNK_0xf0c0(); // UNK_0xf0c0
  Push(0x000a);
  UNK_0xf0b0(); // UNK_0xf0b0
  Push(2);
  UNK_0xf0c8(); // UNK_0xf0c8
  UNK_0xf0c0(); // UNK_0xf0c0
  Push(0x000f);
  UNK_0xf0b0(); // UNK_0xf0b0
  Push(1);
  UNK_0xf0c8(); // UNK_0xf0c8
  UNK_0xf0c0(); // UNK_0xf0c0
  Push(0x0014);
  UNK_0xf0b0(); // UNK_0xf0b0
  Pop(); // DROP
}


// ================================================
// 0xf128: WORD 'UNK_0xf12a' codep=0x1d29 parp=0xf12a
// ================================================
// 0xf12a: db 0x3a 0x20 ': '

// ================================================
// 0xf12c: WORD 'UNK_0xf12e' codep=0x224c parp=0xf12e
// ================================================

void UNK_0xf12e() // UNK_0xf12e
{
  unsigned short int i, imax;
  Push(pp_UNK_0xf12a); // UNK_0xf12a
  _099(); // 099
  Push(Read16(pp__star_GLOBAL)); // *GLOBAL @
  IsICONS_dash__2(); // ?ICONS-_2
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      UNK_0xf05e(); // UNK_0xf05e
      UNK_0xf048(); // UNK_0xf048
      if (Pop() != 0)
      {
        Push(pp_UNK_0xf12a); // UNK_0xf12a
        ON_2(); // ON_2
      }
      ICLOSE(); // ICLOSE
      i++;
    } while(i<imax); // (LOOP)

  }
  Push(Read16(pp_UNK_0xf12a)); // UNK_0xf12a @
}


// ================================================
// 0xf15a: WORD 'UNK_0xf15c' codep=0x224c parp=0xf15c
// ================================================

void UNK_0xf15c() // UNK_0xf15c
{
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  UNK_0xf12e(); // UNK_0xf12e
}


// ================================================
// 0xf164: WORD 'UNK_0xf166' codep=0x224c parp=0xf166
// ================================================

void UNK_0xf166() // UNK_0xf166
{
  Push(pp_UNK_0xedd9); // UNK_0xedd9
  _099(); // 099
  UNK_0xf15c(); // UNK_0xf15c
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  UNK_0xf0d4(); // UNK_0xf0d4
  Push(Read16(pp_UNK_0xedd9)); // UNK_0xedd9 @
  Push(0x005f);
  MIN(); // MIN
  Push(0x000a);
  MAX(); // MAX
  Push(pp_UNK_0xedd9); // UNK_0xedd9
  Store_2(); // !_2
}


// ================================================
// 0xf18a: WORD 'UNK_0xf18c' codep=0x224c parp=0xf18c
// ================================================

void UNK_0xf18c() // UNK_0xf18c
{
  unsigned short int i, imax;
  UNK_0xef81(); // UNK_0xef81
  BEEPON_2(); // BEEPON_2
  UNK_0xf166(); // UNK_0xf166
  Push(Read16(pp_UNK_0xedd9)); // UNK_0xedd9 @
  Push(0x0064);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(pp_UNK_0xefdc); // UNK_0xefdc
    Store_2(); // !_2
    UNK_0xf018(); // UNK_0xf018
    UNK_0xefe0(); // UNK_0xefe0
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
// 0xf1c6: WORD 'UNK_0xf1c8' codep=0x224c parp=0xf1c8 params=0 returns=0
// ================================================

void UNK_0xf1c8() // UNK_0xf1c8
{
  Push(0);
  Push((0x0064 - Read16(pp_UNK_0xedd9)) * 2); // 0x0064 UNK_0xedd9 @ - 2*
  RRND(); // RRND
  Push(Pop() * 8); //  8 *
  Push(pp_UNK_0xedd5); // UNK_0xedd5
  Store_2(); // !_2
}


// ================================================
// 0xf1e2: WORD 'UNK_0xf1e4' codep=0x224c parp=0xf1e4 params=2 returns=3
// ================================================

void UNK_0xf1e4() // UNK_0xf1e4
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
// 0xf1fc: WORD 'UNK_0xf1fe' codep=0x224c parp=0xf1fe params=2 returns=2
// ================================================

void UNK_0xf1fe() // UNK_0xf1fe
{
  unsigned short int a;
  SWAP(); // SWAP
  Push(Read16(pp_UNK_0xedd5)); // UNK_0xedd5 @
  Push(Read16(regsp)); // DUP
  Push(Pop() >> 1); //  2/
  SWAP(); // SWAP
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  UNK_0xee1f(); // UNK_0xee1f
  SWAP(); // SWAP
  Push(0x00b4 - a); // 0x00b4 R> -
  UNK_0xee1f(); // UNK_0xee1f
}


// ================================================
// 0xf220: WORD 'UNK_0xf222' codep=0x224c parp=0xf222 params=0 returns=0
// ================================================

void UNK_0xf222() // UNK_0xf222
{
  unsigned short int a;
  UNK_0xf1c8(); // UNK_0xf1c8
  Push(Read16(pp_UNK_0xedd5)); // UNK_0xedd5 @
  if (Pop() == 0) return;

  label2:
  _2DUP(); // 2DUP
  UNK_0xf1fe(); // UNK_0xf1fe
  _2DUP(); // 2DUP
  UNK_0xf12e(); // UNK_0xf12e
  a = Pop(); // >R
  UNK_0xf1e4(); // UNK_0xf1e4
  Push(!Pop() | a); //  NOT R> OR
  if (Pop() == 0) goto label1;
  Pop(); Pop(); // 2DROP
  goto label2;

  label1:
  _2SWAP(); // 2SWAP
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf24e: WORD 'UNK_0xf250' codep=0x224c parp=0xf250 params=6 returns=1
// ================================================

void UNK_0xf250() // UNK_0xf250
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
// 0xf268: WORD 'UNK_0xf26a' codep=0x224c parp=0xf26a params=0 returns=0
// ================================================

void UNK_0xf26a() // UNK_0xf26a
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
  UNK_0xf250(); // UNK_0xf250
  if (Pop() != 0)
  {
    Push(3);
    Push(0xc976); // probable '.EX'
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
  UNK_0xf250(); // UNK_0xf250
  if (Pop() != 0)
  {
    Push(2);
    Push(0xc976); // probable '.EX'
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
  Push(0xc976); // probable '.EX'
  MODULE(); // MODULE
  Push(Read16(pp_IsSUP)); // ?SUP @
  if (Pop() == 0) return;
  Push(0xc636); // probable 'OV-SH'
  MODULE(); // MODULE
}


// ================================================
// 0xf312: WORD 'UNK_0xf314' codep=0x224c parp=0xf314
// ================================================

void UNK_0xf314() // UNK_0xf314
{
  Push(Read16(pp__dash_END)); // -END @
  Push(0x05dc);
  Push(pp__dash_END); // -END
  Store_2(); // !_2
  UNK_0xf26a(); // UNK_0xf26a
  Push(pp__dash_END); // -END
  Store_2(); // !_2
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x0096);
  Push(0x65e1+UNK_0xedcb.offset); // UNK_0xedcb<IFIELD>
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
  UNK_0xedf7(); // UNK_0xedf7
}


// ================================================
// 0xf37e: WORD 'UNK_0xf380' codep=0x224c parp=0xf380 params=0 returns=0
// ================================================

void UNK_0xf380() // UNK_0xf380
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(Read16(pp_UNK_0xedd9)); // UNK_0xedd9 @
  _gt_(); // >
  if (Pop() == 0) return;
  UNK_0xf222(); // UNK_0xf222
}


// ================================================
// 0xf396: WORD 'UNK_0xf398' codep=0x224c parp=0xf398
// ================================================

void UNK_0xf398() // UNK_0xf398
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
    Push(0x6b65); Push(0x0002);
    UNK_0xee31(); // UNK_0xee31
    DrawTTY(); // .TTY
  }
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf3bc: WORD 'UNK_0xf3be' codep=0x224c parp=0xf3be params=0 returns=0
// ================================================

void UNK_0xf3be() // UNK_0xf3be
{
  Push(Read16(pp_UNK_0xedd5)==0?1:0); // UNK_0xedd5 @ 0=
  if (Pop() == 0) return;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NAV_dash_TIM); // NAV-TIM
  StoreD(); // D!
}


// ================================================
// 0xf3d2: WORD 'UNK_0xf3d4' codep=0x224c parp=0xf3d4 params=0 returns=1
// ================================================

void UNK_0xf3d4() // UNK_0xf3d4
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+UNK_0xedd0.offset)&0xFF); // UNK_0xedd0<IFIELD> C@
  ICLOSE(); // ICLOSE
  _gt_FLAG(); // >FLAG
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(0x6b83); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  DrawTTY(); // .TTY
}


// ================================================
// 0xf3f4: WORD 'UNK_0xf3f6' codep=0x224c parp=0xf3f6 params=0 returns=0
// ================================================

void UNK_0xf3f6() // UNK_0xf3f6
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push((Read16(0x65e1+UNK_0xedd0.offset)&0xFF) - 1); // UNK_0xedd0<IFIELD> C@ 1-
  Push(0x65e1+UNK_0xedd0.offset); // UNK_0xedd0<IFIELD>
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf408: WORD 'UNK_0xf40a' codep=0x224c parp=0xf40a
// ================================================

void UNK_0xf40a() // UNK_0xf40a
{
  _gt_DISPLA(); // >DISPLA
  CTINIT(); // CTINIT
  _gt_SSCT(); // >SSCT
  Push(Read16(pp_UNK_0xedd5)==0?1:0); // UNK_0xedd5 @ 0=
  if (Pop() != 0)
  {
    Push(0x6ba6); Push(0x0002);
    UNK_0xee31(); // UNK_0xee31
    DrawTTY(); // .TTY
    return;
  }
  Push(0x6bc4); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  DrawTTY(); // .TTY
  Push(0x6c00); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  DrawTTY(); // .TTY
}


// ================================================
// 0xf43e: WORD 'UNK_0xf440' codep=0x224c parp=0xf440
// ================================================

void UNK_0xf440() // UNK_0xf440
{
  Push(0x6c2b); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  DrawTTY(); // .TTY
  Push(0x03e8);
  MS(); // MS
  Push(0x6c4a); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  DrawTTY(); // .TTY
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xf462: WORD 'UNK_0xf464' codep=0x224c parp=0xf464
// ================================================

void UNK_0xf464() // UNK_0xf464
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0x6c69); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  DrawTTY(); // .TTY
  Push(0x6c99); Push(0x0002);
  UNK_0xee31(); // UNK_0xee31
  DrawTTY(); // .TTY
  Y_slash_N(); // Y/N
}


// ================================================
// 0xf480: WORD 'UNK_0xf482' codep=0x224c parp=0xf482
// ================================================

void UNK_0xf482() // UNK_0xf482
{
  unsigned short int a, i, imax;
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(Read16(pp_BEEPTONE)); // BEEPTONE @
  a = Pop(); // >R
  Push(0x01f4);
  Push(pp_BEEPTONE); // BEEPTONE
  Store_2(); // !_2
  Push(3);
  Push(0);

  i = Pop();
  imax = Pop();
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
    UNK_0xefe0(); // UNK_0xefe0
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
// 0xf4c8: WORD 'JUMP' codep=0x224c parp=0xf4d1
// ================================================
// entry

void JUMP() // JUMP
{
  CTINIT(); // CTINIT
  UNK_0xf3d4(); // UNK_0xf3d4
  UNK_0xf398(); // UNK_0xf398
  if (Pop() == 0) return;
  UNK_0xf440(); // UNK_0xf440
  Push(0xd3c5); // probable 'OV/ST'
  MODULE(); // MODULE
  if (Pop() == 0) return;
  UNK_0xef65(); // UNK_0xef65
  UNK_0xf464(); // UNK_0xf464
  if (Pop() != 0)
  {
    Push(pp_UNK_0xedd5); // UNK_0xedd5
    _099(); // 099
    UNK_0xf18c(); // UNK_0xf18c
    UNK_0xf166(); // UNK_0xf166
    Push(Read16(pp_UNK_0xedd9)); // UNK_0xedd9 @
    Push(pp_UNK_0xefdc); // UNK_0xefdc
    Store_2(); // !_2
    UNK_0xf018(); // UNK_0xf018
    UNK_0xf482(); // UNK_0xf482
    Push(Read16(pp_HEADING)); // HEADING @
    Push(pp_EYEXY); // EYEXY
    _2_at_(); // 2@
    UNK_0xf380(); // UNK_0xf380
    UNK_0xee43(); // UNK_0xee43
    Push(0xc558); // probable 'JUMPF'
    MODULE(); // MODULE
    Push(0xcaeb); // probable 'JMPSHP'
    MODULE(); // MODULE
    UNK_0xf3be(); // UNK_0xf3be
    Push(0xcb2e); // probable 'OV.MVS'
    MODULE(); // MODULE
    UNK_0xf40a(); // UNK_0xf40a
    UNK_0xf3f6(); // UNK_0xf3f6
    UNK_0xf314(); // UNK_0xf314
    return;
  }
  SET_STR_AS_PARAM("CANCELLED");
  DrawTTY(); // .TTY
  Push(0xcb2e); // probable 'OV.MVS'
  MODULE(); // MODULE
}

// 0xf543: db 0x4a 0x55 0x4d 0x50 0x2d 0x56 0x4f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'JUMP-VO______________________ '

