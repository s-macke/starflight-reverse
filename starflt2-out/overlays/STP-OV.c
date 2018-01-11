// ====== OVERLAY 'STP-OV' ======
// store offset = 0xf070
// overlay size   = 0x04f0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xf086  codep:0x7420 parp:0xf086 size:0x0003 C-string:'UNK_0xf086'
//      UNK_0xf08b  codep:0x1d29 parp:0xf08b size:0x0002 C-string:'UNK_0xf08b'
//      UNK_0xf08f  codep:0x7420 parp:0xf08f size:0x0003 C-string:'UNK_0xf08f'
//      UNK_0xf094  codep:0x7420 parp:0xf094 size:0x0003 C-string:'UNK_0xf094'
//      UNK_0xf099  codep:0x224c parp:0xf099 size:0x0008 C-string:'UNK_0xf099'
//      UNK_0xf0a3  codep:0x224c parp:0xf0a3 size:0x000b C-string:'UNK_0xf0a3'
//      UNK_0xf0b0  codep:0x224c parp:0xf0b0 size:0x000b C-string:'UNK_0xf0b0'
//      UNK_0xf0bd  codep:0x224c parp:0xf0bd size:0x000a C-string:'UNK_0xf0bd'
//           MP'ER  codep:0x224c parp:0xf0d1 size:0x0066 C-string:'MP_i_ER'
//      UNK_0xf139  codep:0x224c parp:0xf139 size:0x000a C-string:'UNK_0xf139'
//      UNK_0xf145  codep:0x224c parp:0xf145 size:0x000e C-string:'UNK_0xf145'
//      UNK_0xf155  codep:0x224c parp:0xf155 size:0x000f C-string:'UNK_0xf155'
//      UNK_0xf166  codep:0x224c parp:0xf166 size:0x0010 C-string:'UNK_0xf166'
//      UNK_0xf178  codep:0x1d29 parp:0xf178 size:0x0002 C-string:'UNK_0xf178'
//      UNK_0xf17c  codep:0x1d29 parp:0xf17c size:0x0002 C-string:'UNK_0xf17c'
//      UNK_0xf180  codep:0x1d29 parp:0xf180 size:0x0002 C-string:'UNK_0xf180'
//      UNK_0xf184  codep:0x1d29 parp:0xf184 size:0x0002 C-string:'UNK_0xf184'
//      UNK_0xf188  codep:0x1d29 parp:0xf188 size:0x0002 C-string:'UNK_0xf188'
//      UNK_0xf18c  codep:0x2214 parp:0xf18c size:0x0002 C-string:'UNK_0xf18c'
//      UNK_0xf190  codep:0x1d29 parp:0xf190 size:0x0002 C-string:'UNK_0xf190'
//      UNK_0xf194  codep:0x224c parp:0xf194 size:0x0028 C-string:'UNK_0xf194'
//      UNK_0xf1be  codep:0x224c parp:0xf1be size:0x000a C-string:'UNK_0xf1be'
//      UNK_0xf1ca  codep:0x224c parp:0xf1ca size:0x0008 C-string:'UNK_0xf1ca'
//      UNK_0xf1d4  codep:0x224c parp:0xf1d4 size:0x0010 C-string:'UNK_0xf1d4'
//      UNK_0xf1e6  codep:0x224c parp:0xf1e6 size:0x0010 C-string:'UNK_0xf1e6'
//      UNK_0xf1f8  codep:0x224c parp:0xf1f8 size:0x0050 C-string:'UNK_0xf1f8'
//          COLORS  codep:0x4b3b parp:0xf253 size:0x0020 C-string:'COLORS'
//             #>A  codep:0x1d29 parp:0xf27b size:0x000e C-string:'_n__gt_A'
//      UNK_0xf28b  codep:0x224c parp:0xf28b size:0x0010 C-string:'UNK_0xf28b'
//      UNK_0xf29d  codep:0x224c parp:0xf29d size:0x0024 C-string:'UNK_0xf29d'
//      UNK_0xf2c3  codep:0x224c parp:0xf2c3 size:0x0006 C-string:'UNK_0xf2c3'
//      UNK_0xf2cb  codep:0x224c parp:0xf2cb size:0x000e C-string:'UNK_0xf2cb'
//      UNK_0xf2db  codep:0x224c parp:0xf2db size:0x0018 C-string:'UNK_0xf2db'
//      UNK_0xf2f5  codep:0x224c parp:0xf2f5 size:0x0066 C-string:'UNK_0xf2f5'
//      UNK_0xf35d  codep:0x1d29 parp:0xf35d size:0x0006 C-string:'UNK_0xf35d'
//      UNK_0xf365  codep:0x224c parp:0xf365 size:0x0028 C-string:'UNK_0xf365'
//      UNK_0xf38f  codep:0x224c parp:0xf38f size:0x002b C-string:'UNK_0xf38f'
//      UNK_0xf3bc  codep:0x224c parp:0xf3bc size:0x0056 C-string:'UNK_0xf3bc'
//      UNK_0xf414  codep:0x224c parp:0xf414 size:0x0014 C-string:'UNK_0xf414'
//      UNK_0xf42a  codep:0x224c parp:0xf42a size:0x0038 C-string:'UNK_0xf42a'
//      UNK_0xf464  codep:0x224c parp:0xf464 size:0x0044 C-string:'UNK_0xf464'
//      UNK_0xf4aa  codep:0x224c parp:0xf4aa size:0x0022 C-string:'UNK_0xf4aa'
//              SP  codep:0x224c parp:0xf4d3 size:0x001e C-string:'SP'
//              2N  codep:0x224c parp:0xf4f8 size:0x0000 C-string:'_2N'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__star_MAPSCA; // *MAPSCA
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int cc_SYS_dash_ICO; // SYS-ICO
extern const unsigned short int pp_IsAUTO; // ?AUTO
extern const unsigned short int pp_GLOBALS; // GLOBALS
extern const unsigned short int pp__star_GLOBAL; // *GLOBAL
extern const unsigned short int pp__dash_AIN; // -AIN
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_IsSECURE; // ?SECURE
extern const unsigned short int pp__ro_ENCOUN; // (ENCOUN
extern const unsigned short int pp_LSCAN; // LSCAN
extern IFieldType INST_dash_X; // INST-X
extern IFieldType PHRASE_do_; // PHRASE$
void COUNT(); // COUNT
void BEEP(); // BEEP
void Is(); // ?
void UNRAVEL(); // UNRAVEL
void D0_eq_(); // D0=
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void SAVE_dash_OV(); // SAVE-OV
void GetID(); // @ID
void GetIC(); // @IC
void GetIL(); // @IL
void GetIH(); // @IH
void INIT_dash_IC(); // INIT-IC
void POINT_gt_I(); // POINT>I
void IsICONS_dash__1(); // ?ICONS-_1
void _plus_ICONBO(); // +ICONBO
void CTERASE(); // CTERASE
void CLICK(); // CLICK
void TTY_dash_SCR(); // TTY-SCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void _do__ex_(); // $!
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void U_star_(); // U*
void _st_(); // <
void TIME(); // TIME
void GetEXECUTE(); // @EXECUTE
void _1_dot_5_at_(); // 1.5@


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xf08b = 0xf08b; // UNK_0xf08b size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf178 = 0xf178; // UNK_0xf178 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf17c = 0xf17c; // UNK_0xf17c size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf180 = 0xf180; // UNK_0xf180 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf184 = 0xf184; // UNK_0xf184 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf188 = 0xf188; // UNK_0xf188 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf190 = 0xf190; // UNK_0xf190 size: 2
// {0x3a, 0x20}

const unsigned short int pp__n__gt_A = 0xf27b; // #>A size: 14
// {0xd7, 0x4f, 0x3e, 0x50, 0x4a, 0x50, 0x55, 0x50, 0xce, 0x4f, 0x28, 0x50, 0x0e, 0x50}

const unsigned short int pp_UNK_0xf35d = 0xf35d; // UNK_0xf35d size: 6
// {0x50, 0x55, 0x55, 0x32, 0x00, 0x00}


const unsigned short int cc_UNK_0xf18c = 0xf18c; // UNK_0xf18c


// 0xf082: db 0x4c 0x00 'L '

// ================================================
// 0xf084: WORD 'UNK_0xf086' codep=0x7420 parp=0xf086
// ================================================
IFieldType UNK_0xf086 = {STARSYSTEMIDX, 0x0b, 0x01};

// ================================================
// 0xf089: WORD 'UNK_0xf08b' codep=0x1d29 parp=0xf08b
// ================================================
// 0xf08b: db 0x3a 0x20 ': '

// ================================================
// 0xf08d: WORD 'UNK_0xf08f' codep=0x7420 parp=0xf08f
// ================================================
IFieldType UNK_0xf08f = {SHIPIDX, 0x14, 0x01};

// ================================================
// 0xf092: WORD 'UNK_0xf094' codep=0x7420 parp=0xf094
// ================================================
IFieldType UNK_0xf094 = {SHIPIDX, 0x17, 0x01};

// ================================================
// 0xf097: WORD 'UNK_0xf099' codep=0x224c parp=0xf099 params=0 returns=0
// ================================================

void UNK_0xf099() // UNK_0xf099
{
  PRINT("RED", 3); // (.")
}


// ================================================
// 0xf0a1: WORD 'UNK_0xf0a3' codep=0x224c parp=0xf0a3 params=0 returns=0
// ================================================

void UNK_0xf0a3() // UNK_0xf0a3
{
  PRINT("ORANGE", 6); // (.")
}


// ================================================
// 0xf0ae: WORD 'UNK_0xf0b0' codep=0x224c parp=0xf0b0 params=0 returns=0
// ================================================

void UNK_0xf0b0() // UNK_0xf0b0
{
  PRINT("YELLOW", 6); // (.")
}


// ================================================
// 0xf0bb: WORD 'UNK_0xf0bd' codep=0x224c parp=0xf0bd params=0 returns=0
// ================================================

void UNK_0xf0bd() // UNK_0xf0bd
{
  PRINT("WHITE", 5); // (.")
}


// ================================================
// 0xf0c7: WORD 'MP'ER' codep=0x224c parp=0xf0d1 params=0 returns=2
// ================================================
// entry

void MP_i_ER() // MP'ER
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+UNK_0xf08f.offset)&0xFF); // UNK_0xf08f<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(0x0080);
  _st_(); // <
  Push(pp_UNK_0xf08b); // UNK_0xf08b
  Store_2(); // !_2
  Push(Pop() | 0x0080); //  0x0080 OR
  Push(0x65e1+UNK_0xf08f.offset); // UNK_0xf08f<IFIELD>
  C_ex__2(); // C!_2
  Push(0x0064);
  Push(0x65e1+UNK_0xf094.offset); // UNK_0xf094<IFIELD>
  C_ex__2(); // C!_2
  Push((Read16((0x65e1+UNK_0xf094.offset) + 1)&0xFF) & 0x007f); // UNK_0xf094<IFIELD> 1+ C@ 0x007f AND
  Push((0x65e1+UNK_0xf094.offset) + 1); // UNK_0xf094<IFIELD> 1+
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
  Push(Read16(pp_YABS)); // YABS @
  Push(Read16(pp_XABS)); // XABS @
  Push2Words("*ARREST");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  StoreD(); // D!
  ICLOSE(); // ICLOSE
  Push2Words("*ARREST");
  Push(0xcb0c); // probable '>NEST'
  MODULE(); // MODULE
  Push(!Read16(pp_IsAUTO)); // ?AUTO @ NOT
  if (Pop() != 0)
  {
    Push(!Pop()); //  NOT
  }
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
}


// ================================================
// 0xf137: WORD 'UNK_0xf139' codep=0x224c parp=0xf139 params=0 returns=0
// ================================================

void UNK_0xf139() // UNK_0xf139
{
  PRINT("GREEN", 5); // (.")
}


// ================================================
// 0xf143: WORD 'UNK_0xf145' codep=0x224c parp=0xf145 params=0 returns=0
// ================================================

void UNK_0xf145() // UNK_0xf145
{
  PRINT("DARK BLUE", 9); // (.")
}


// ================================================
// 0xf153: WORD 'UNK_0xf155' codep=0x224c parp=0xf155 params=0 returns=0
// ================================================

void UNK_0xf155() // UNK_0xf155
{
  PRINT("LIGHT BLUE", 10); // (.")
}


// ================================================
// 0xf164: WORD 'UNK_0xf166' codep=0x224c parp=0xf166 params=2 returns=2
// ================================================

void UNK_0xf166() // UNK_0xf166
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
// 0xf176: WORD 'UNK_0xf178' codep=0x1d29 parp=0xf178
// ================================================
// 0xf178: db 0x3a 0x20 ': '

// ================================================
// 0xf17a: WORD 'UNK_0xf17c' codep=0x1d29 parp=0xf17c
// ================================================
// 0xf17c: db 0x3a 0x20 ': '

// ================================================
// 0xf17e: WORD 'UNK_0xf180' codep=0x1d29 parp=0xf180
// ================================================
// 0xf180: db 0x3a 0x20 ': '

// ================================================
// 0xf182: WORD 'UNK_0xf184' codep=0x1d29 parp=0xf184
// ================================================
// 0xf184: db 0x3a 0x20 ': '

// ================================================
// 0xf186: WORD 'UNK_0xf188' codep=0x1d29 parp=0xf188
// ================================================
// 0xf188: db 0x3a 0x20 ': '

// ================================================
// 0xf18a: WORD 'UNK_0xf18c' codep=0x2214 parp=0xf18c
// ================================================
// 0xf18c: dw 0x0014

// ================================================
// 0xf18e: WORD 'UNK_0xf190' codep=0x1d29 parp=0xf190
// ================================================
// 0xf190: db 0x3a 0x20 ': '

// ================================================
// 0xf192: WORD 'UNK_0xf194' codep=0x224c parp=0xf194
// ================================================

void UNK_0xf194() // UNK_0xf194
{
  Push(0x69fe); Push(0x0002);
  UNK_0xf166(); // UNK_0xf166
  DrawTTY(); // .TTY
  Push(0x6a2c); Push(0x0002);
  UNK_0xf166(); // UNK_0xf166
  DrawTTY(); // .TTY
  PRINT("]", 1); // (.")
  Push(pp_UNK_0xf178); // UNK_0xf178
  Is(); // ?
  PRINT("* ^", 3); // (.")
  Push(pp_UNK_0xf17c); // UNK_0xf17c
  Is(); // ?
}


// ================================================
// 0xf1bc: WORD 'UNK_0xf1be' codep=0x224c parp=0xf1be orphan params=0 returns=1
// ================================================

void UNK_0xf1be() // UNK_0xf1be
{
  Push(Read16(cc_UNK_0xf18c)); // UNK_0xf18c
  Push(5);
  _slash_(); // /
  _dash_(); // -
}


// ================================================
// 0xf1c8: WORD 'UNK_0xf1ca' codep=0x224c parp=0xf1ca params=1 returns=1
// ================================================

void UNK_0xf1ca() // UNK_0xf1ca
{
  Push(Pop() * 0x000a); //  0x000a *
}


// ================================================
// 0xf1d2: WORD 'UNK_0xf1d4' codep=0x224c parp=0xf1d4
// ================================================

void UNK_0xf1d4() // UNK_0xf1d4
{
  Push(0);
  Push(0x0016);
  RRND(); // RRND
  UNK_0xf1ca(); // UNK_0xf1ca
  Push(pp_UNK_0xf178); // UNK_0xf178
  Store_2(); // !_2
}


// ================================================
// 0xf1e4: WORD 'UNK_0xf1e6' codep=0x224c parp=0xf1e6
// ================================================

void UNK_0xf1e6() // UNK_0xf1e6
{
  Push(0);
  Push(0x0013);
  RRND(); // RRND
  UNK_0xf1ca(); // UNK_0xf1ca
  Push(pp_UNK_0xf17c); // UNK_0xf17c
  Store_2(); // !_2
}


// ================================================
// 0xf1f6: WORD 'UNK_0xf1f8' codep=0x224c parp=0xf1f8
// ================================================

void UNK_0xf1f8() // UNK_0xf1f8
{
  unsigned short int a;
  Push(0);
  Push(3);
  RRND(); // RRND
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    UNK_0xf1d4(); // UNK_0xf1d4
    Push(0);
    Push(5);
    RRND(); // RRND
    UNK_0xf1ca(); // UNK_0xf1ca
    Push(pp_UNK_0xf17c); // UNK_0xf17c
    Store_2(); // !_2
  } else
  {
    Push(Read16(a)); // R@
    Push(Pop()==1?1:0); //  1 =
    if (Pop() != 0)
    {
      Push(0);
      Push(5);
      RRND(); // RRND
      UNK_0xf1ca(); // UNK_0xf1ca
    } else
    {
      Push(0x0012);
      Push(0x0016);
      RRND(); // RRND
      UNK_0xf1ca(); // UNK_0xf1ca
    }
    Push(pp_UNK_0xf178); // UNK_0xf178
    Store_2(); // !_2
    UNK_0xf1e6(); // UNK_0xf1e6
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf248: WORD 'COLORS' codep=0x4b3b parp=0xf253
// ================================================

void COLORS() // COLORS
{
  switch(Pop()) // COLORS
  {
  case 4:
    UNK_0xf099(); // UNK_0xf099
    break;
  case 6:
    UNK_0xf0a3(); // UNK_0xf0a3
    break;
  case 14:
    UNK_0xf0b0(); // UNK_0xf0b0
    break;
  case 15:
    UNK_0xf0bd(); // UNK_0xf0bd
    break;
  case 10:
    UNK_0xf139(); // UNK_0xf139
    break;
  case 11:
    UNK_0xf155(); // UNK_0xf155
    break;
  case 9:
    UNK_0xf145(); // UNK_0xf145
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf273: WORD '#>A' codep=0x1d29 parp=0xf27b
// ================================================
// 0xf27b: db 0xd7 0x4f 0x3e 0x50 0x4a 0x50 0x55 0x50 0xce 0x4f 0x28 0x50 0x0e 0x50 ' O>PJPUP O(P P'

// ================================================
// 0xf289: WORD 'UNK_0xf28b' codep=0x224c parp=0xf28b
// ================================================

void UNK_0xf28b() // UNK_0xf28b
{
  Push(0);
  Push(7);
  RRND(); // RRND
  Push(Pop() * 2 + pp__n__gt_A); //  2* #>A +
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xf29b: WORD 'UNK_0xf29d' codep=0x224c parp=0xf29d
// ================================================

void UNK_0xf29d() // UNK_0xf29d
{
  CLICK(); // CLICK
  UNK_0xf1f8(); // UNK_0xf1f8
  UNK_0xf28b(); // UNK_0xf28b
  Push(pp_UNK_0xf180); // UNK_0xf180
  Store_2(); // !_2

  label2:
  UNK_0xf28b(); // UNK_0xf28b
  Push(Read16(pp_UNK_0xf180)); // UNK_0xf180 @
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  goto label2;

  label1:
  Push(pp_UNK_0xf184); // UNK_0xf184
  Store_2(); // !_2
}


// ================================================
// 0xf2c1: WORD 'UNK_0xf2c3' codep=0x224c parp=0xf2c3 params=1 returns=1
// ================================================

void UNK_0xf2c3() // UNK_0xf2c3
{
  Push(Pop() * Read16(cc__star_MAPSCA)); //  *MAPSCA *
}


// ================================================
// 0xf2c9: WORD 'UNK_0xf2cb' codep=0x224c parp=0xf2cb params=1 returns=1
// ================================================

void UNK_0xf2cb() // UNK_0xf2cb
{
  UNK_0xf2c3(); // UNK_0xf2c3
  Push(Read16(cc_UNK_0xf18c)); // UNK_0xf18c
  UNK_0xf2c3(); // UNK_0xf2c3
  Push(Pop() + Pop()); // +
  Push(Pop() + 4); //  4 +
}


// ================================================
// 0xf2d9: WORD 'UNK_0xf2db' codep=0x224c parp=0xf2db
// ================================================

void UNK_0xf2db() // UNK_0xf2db
{
  Push(Read16(pp_UNK_0xf178)); // UNK_0xf178 @
  UNK_0xf2cb(); // UNK_0xf2cb
  Push(Read16(pp_UNK_0xf17c)); // UNK_0xf17c @
  UNK_0xf2cb(); // UNK_0xf2cb
  Push(Read16(cc_UNK_0xf18c)); // UNK_0xf18c
  UNK_0xf2c3(); // UNK_0xf2c3
  Push(Read16(pp__star_GLOBAL)); // *GLOBAL @
  IsICONS_dash__1(); // ?ICONS-_1
}


// ================================================
// 0xf2f3: WORD 'UNK_0xf2f5' codep=0x224c parp=0xf2f5
// ================================================

void UNK_0xf2f5() // UNK_0xf2f5
{
  unsigned short int i, imax;
  INIT_dash_IC(); // INIT-IC
  Push2Words("*SECS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  _plus_ICONBO(); // +ICONBO
  UNK_0xf2db(); // UNK_0xf2db
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(pp_UNK_0xf188); // UNK_0xf188
    _099(); // 099
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      POINT_gt_I(); // POINT>I
      GetIC(); // @IC
      Push(Pop()==Read16(pp_UNK_0xf180)?1:0); //  UNK_0xf180 @ =
      GetIC(); // @IC
      Push(Pop() | (Pop()==Read16(pp_UNK_0xf184)?1:0)); //   UNK_0xf184 @ = OR
      GetID(); // @ID
      Push(Pop() & (Pop()==Read16(cc_SYS_dash_ICO)?1:0)); //   SYS-ICO = AND
      Push(Read16(regsp)); // DUP
      if (Pop() != 0)
      {
        GetIL(); // @IL
        GetIH(); // @IH
        _gt_C_plus_S(); // >C+S
        Push((Read16(0x65e1+UNK_0xf086.offset)&0xFF) & 0x0080); // UNK_0xf086<IFIELD> C@ 0x0080 AND
        _gt_FLAG(); // >FLAG
        Push(Pop() & Pop()); // AND
        ICLOSE(); // ICLOSE
      }
      if (Pop() != 0)
      {
        Push(1);
        Push(pp_UNK_0xf188); // UNK_0xf188
        _plus__ex__2(); // +!_2
      }
      i++;
    } while(i<imax); // (LOOP)

  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf35b: WORD 'UNK_0xf35d' codep=0x1d29 parp=0xf35d
// ================================================
// 0xf35d: db 0x50 0x55 0x55 0x32 0x00 0x00 'PUU2  '

// ================================================
// 0xf363: WORD 'UNK_0xf365' codep=0x224c parp=0xf365 params=0 returns=1
// ================================================

void UNK_0xf365() // UNK_0xf365
{
  Push(Read16(pp_UNK_0xf188)); // UNK_0xf188 @
  Push(6);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(0);
    Push(0x0064);
    RRND(); // RRND
    Push(Read16(Read16(pp_UNK_0xf188) + pp_UNK_0xf35d)&0xFF); // UNK_0xf188 @ UNK_0xf35d + C@
    _st_(); // <
    return;
  }
  Push(Read16(cc_FALSE)); // FALSE
}


// ================================================
// 0xf38d: WORD 'UNK_0xf38f' codep=0x224c parp=0xf38f
// ================================================

void UNK_0xf38f() // UNK_0xf38f
{
  Push(0x6a4b); Push(0x0002);
  UNK_0xf166(); // UNK_0xf166
  DrawTTY(); // .TTY
  Push(Read16(pp_UNK_0xf180)); // UNK_0xf180 @
  COLORS(); // COLORS case
  Exec("CR"); // call of word 0x26ee '(CR)'
  PRINT("AND ", 4); // (.")
  Push(Read16(pp_UNK_0xf184)); // UNK_0xf184 @
  COLORS(); // COLORS case
  PRINT(" STARS\?", 7); // (.")
}


// ================================================
// 0xf3ba: WORD 'UNK_0xf3bc' codep=0x224c parp=0xf3bc
// ================================================

void UNK_0xf3bc() // UNK_0xf3bc
{
  unsigned short int i, imax;
  Push(0x6a6a); Push(0x0002);
  UNK_0xf166(); // UNK_0xf166
  DrawTTY(); // .TTY
  Push(-1);
  Push(pp__dash_AIN); // -AIN
  Store_2(); // !_2
  Push(0x000a);
  Push(0xb6fd); // probable 'OV#IN$'
  MODULE(); // MODULE
  Push2Words("NULL");
  ROT(); // ROT
  COUNT(); // COUNT
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    SWAP(); // SWAP
    Push(0x000a);
    U_star_(); // U*
    ROT(); // ROT
    Push(Pop() * 0x000a); //  0x000a *
    Push(Pop() + Pop()); // +
    Push((Read16(i)&0xFF) - 0x0030); // I C@ 0x0030 -
    Push(0);
    D_plus_(); // D+
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  Push(pp_UNK_0xf190); // UNK_0xf190
  Store_2(); // !_2
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xf412: WORD 'UNK_0xf414' codep=0x224c parp=0xf414
// ================================================

void UNK_0xf414() // UNK_0xf414
{
  CTINIT(); // CTINIT
  Push(0x6a7f); Push(0x0002);
  UNK_0xf166(); // UNK_0xf166
  DrawTTY(); // .TTY
  UNK_0xf38f(); // UNK_0xf38f
  TTY_dash_SCR(); // TTY-SCR
  UNK_0xf3bc(); // UNK_0xf3bc
}


// ================================================
// 0xf428: WORD 'UNK_0xf42a' codep=0x224c parp=0xf42a
// ================================================

void UNK_0xf42a() // UNK_0xf42a
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  if (Pop() != 0)
  {
    Push(0x6a95); Push(0x0002);
    UNK_0xf166(); // UNK_0xf166
    DrawTTY(); // .TTY
  }
  TIME(); // TIME
  Push(Read16(Pop() + 2)); //  2+ @
  Push(pp_GLOBALS); // GLOBALS
  Store_2(); // !_2
  do
  {
    UNK_0xf29d(); // UNK_0xf29d
    UNK_0xf2f5(); // UNK_0xf2f5
    UNK_0xf365(); // UNK_0xf365
    Push(!Pop()); //  NOT
  } while(Pop() == 0);
  SAVE_dash_OV(); // SAVE-OV
  CTINIT(); // CTINIT
  UNK_0xf194(); // UNK_0xf194
  UNK_0xf38f(); // UNK_0xf38f
  TTY_dash_SCR(); // TTY-SCR
  UNK_0xf3bc(); // UNK_0xf3bc
}


// ================================================
// 0xf462: WORD 'UNK_0xf464' codep=0x224c parp=0xf464
// ================================================

void UNK_0xf464() // UNK_0xf464
{
  CTINIT(); // CTINIT
  Push(0x6ac4); Push(0x0002);
  UNK_0xf166(); // UNK_0xf166
  DrawTTY(); // .TTY
  UNK_0xf38f(); // UNK_0xf38f
  Push(0x6adb); Push(0x0002);
  UNK_0xf166(); // UNK_0xf166
  DrawTTY(); // .TTY
  Push(pp_UNK_0xf190); // UNK_0xf190
  Is(); // ?
  Push(0x6af8); Push(0x0002);
  UNK_0xf166(); // UNK_0xf166
  DrawTTY(); // .TTY
  _i_KEY(); // 'KEY
  Pop(); // DROP
  do
  {
    XYSCAN(); // XYSCAN
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      BEEP(); // BEEP
    }
    SWAP(); // SWAP
    Pop(); // DROP
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  } while(Pop() == 0);
  Push(Pop()==1?1:0); //  1 =
}


// ================================================
// 0xf4a8: WORD 'UNK_0xf4aa' codep=0x224c parp=0xf4aa
// ================================================

void UNK_0xf4aa() // UNK_0xf4aa
{

  label2:
  UNK_0xf464(); // UNK_0xf464
  Push(!Pop()); //  NOT
  if (Pop() == 0) goto label1;
  UNK_0xf414(); // UNK_0xf414
  goto label2;

  label1:
  Push(Read16(pp_UNK_0xf188)); // UNK_0xf188 @
  Push((Read16(pp_UNK_0xf188)==Read16(pp_UNK_0xf190)?1:0) & !Read16(pp_IsSECURE)); // UNK_0xf188 @ UNK_0xf190 @ = ?SECURE @ NOT AND
}


// ================================================
// 0xf4cc: WORD 'SP' codep=0x224c parp=0xf4d3
// ================================================
// entry

void SP() // SP
{
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  UNK_0xf42a(); // UNK_0xf42a
  UNK_0xf4aa(); // UNK_0xf4aa
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(Read16(pp_IsSECURE)==0?1:0); // ?SECURE @ 0=
  }
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
  Push(pp_IsSECURE); // ?SECURE
  _099(); // 099
}


// ================================================
// 0xf4f1: WORD '2N' codep=0x224c parp=0xf4f8
// ================================================
// entry

void _2N() // 2N
{
  UNK_0xf42a(); // UNK_0xf42a
  Push(Read16(pp_UNK_0xf188)); // UNK_0xf188 @
  Push(Read16(pp_UNK_0xf188)==Read16(pp_UNK_0xf190)?1:0); // UNK_0xf188 @ UNK_0xf190 @ =
  if (Pop() == 0) return;
  Push(pp_IsSECURE); // ?SECURE
  _099(); // 099
  CTERASE(); // CTERASE
  Push(Read16(pp_UNK_0xf08b)); // UNK_0xf08b @
  if (Pop() == 0) return;
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push((Read16(0x65e1+UNK_0xf08f.offset)&0xFF) & 0x007f); // UNK_0xf08f<IFIELD> C@ 0x007f AND
  Push(0x65e1+UNK_0xf08f.offset); // UNK_0xf08f<IFIELD>
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}

// 0xf52c: db 0x53 0x54 0x50 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x5c 0x20 0x53 0x45 0x43 0x55 0x52 0x49 0x54 0x59 0x4f 0x56 0x52 0x2d 0x20 0x72 0x00 'STP-VOC_________________________ for\ SECURITYOVR- r '

