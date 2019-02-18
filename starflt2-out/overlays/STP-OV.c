// ====== OVERLAY 'STP-OV' ======
// store offset = 0xf070
// overlay size   = 0x04f0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF086  codep:0x7420 wordp:0xf086 size:0x0003 C-string:'WF086'
//           WF08B  codep:0x1d29 wordp:0xf08b size:0x0002 C-string:'WF08B'
//           WF08F  codep:0x7420 wordp:0xf08f size:0x0003 C-string:'WF08F'
//           WF094  codep:0x7420 wordp:0xf094 size:0x0003 C-string:'WF094'
//           WF099  codep:0x224c wordp:0xf099 size:0x0008 C-string:'WF099'
//           WF0A3  codep:0x224c wordp:0xf0a3 size:0x000b C-string:'WF0A3'
//           WF0B0  codep:0x224c wordp:0xf0b0 size:0x000b C-string:'WF0B0'
//           WF0BD  codep:0x224c wordp:0xf0bd size:0x000a C-string:'WF0BD'
//           MP'ER  codep:0x224c wordp:0xf0d1 size:0x0066 C-string:'MP_i_ER'
//           WF139  codep:0x224c wordp:0xf139 size:0x000a C-string:'WF139'
//           WF145  codep:0x224c wordp:0xf145 size:0x000e C-string:'WF145'
//           WF155  codep:0x224c wordp:0xf155 size:0x000f C-string:'WF155'
//           WF166  codep:0x224c wordp:0xf166 size:0x0010 C-string:'WF166'
//           WF178  codep:0x1d29 wordp:0xf178 size:0x0002 C-string:'WF178'
//           WF17C  codep:0x1d29 wordp:0xf17c size:0x0002 C-string:'WF17C'
//           WF180  codep:0x1d29 wordp:0xf180 size:0x0002 C-string:'WF180'
//           WF184  codep:0x1d29 wordp:0xf184 size:0x0002 C-string:'WF184'
//           WF188  codep:0x1d29 wordp:0xf188 size:0x0002 C-string:'WF188'
//           WF18C  codep:0x2214 wordp:0xf18c size:0x0002 C-string:'WF18C'
//           WF190  codep:0x1d29 wordp:0xf190 size:0x0002 C-string:'WF190'
//           WF194  codep:0x224c wordp:0xf194 size:0x0028 C-string:'WF194'
//           WF1BE  codep:0x224c wordp:0xf1be size:0x000a C-string:'WF1BE'
//           WF1CA  codep:0x224c wordp:0xf1ca size:0x0008 C-string:'WF1CA'
//           WF1D4  codep:0x224c wordp:0xf1d4 size:0x0010 C-string:'WF1D4'
//           WF1E6  codep:0x224c wordp:0xf1e6 size:0x0010 C-string:'WF1E6'
//           WF1F8  codep:0x224c wordp:0xf1f8 size:0x0050 C-string:'WF1F8'
//          COLORS  codep:0x4b3b wordp:0xf253 size:0x0020 C-string:'COLORS'
//             #>A  codep:0x1d29 wordp:0xf27b size:0x000e C-string:'_n__gt_A'
//           WF28B  codep:0x224c wordp:0xf28b size:0x0010 C-string:'WF28B'
//           WF29D  codep:0x224c wordp:0xf29d size:0x0024 C-string:'WF29D'
//           WF2C3  codep:0x224c wordp:0xf2c3 size:0x0006 C-string:'WF2C3'
//           WF2CB  codep:0x224c wordp:0xf2cb size:0x000e C-string:'WF2CB'
//           WF2DB  codep:0x224c wordp:0xf2db size:0x0018 C-string:'WF2DB'
//           WF2F5  codep:0x224c wordp:0xf2f5 size:0x0066 C-string:'WF2F5'
//           WF35D  codep:0x1d29 wordp:0xf35d size:0x0006 C-string:'WF35D'
//           WF365  codep:0x224c wordp:0xf365 size:0x0028 C-string:'WF365'
//           WF38F  codep:0x224c wordp:0xf38f size:0x002b C-string:'WF38F'
//           WF3BC  codep:0x224c wordp:0xf3bc size:0x0056 C-string:'WF3BC'
//           WF414  codep:0x224c wordp:0xf414 size:0x0014 C-string:'WF414'
//           WF42A  codep:0x224c wordp:0xf42a size:0x0038 C-string:'WF42A'
//           WF464  codep:0x224c wordp:0xf464 size:0x0044 C-string:'WF464'
//           WF4AA  codep:0x224c wordp:0xf4aa size:0x0022 C-string:'WF4AA'
//              SP  codep:0x224c wordp:0xf4d3 size:0x001e C-string:'SP'
//              2N  codep:0x224c wordp:0xf4f8 size:0x0000 C-string:'_2N'

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
const unsigned short int pp_WF08B = 0xf08b; // WF08B size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF178 = 0xf178; // WF178 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF17C = 0xf17c; // WF17C size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF180 = 0xf180; // WF180 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF184 = 0xf184; // WF184 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF188 = 0xf188; // WF188 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF190 = 0xf190; // WF190 size: 2
// {0x3a, 0x20}

const unsigned short int pp__n__gt_A = 0xf27b; // #>A size: 14
// {0xd7, 0x4f, 0x3e, 0x50, 0x4a, 0x50, 0x55, 0x50, 0xce, 0x4f, 0x28, 0x50, 0x0e, 0x50}

const unsigned short int pp_WF35D = 0xf35d; // WF35D size: 6
// {0x50, 0x55, 0x55, 0x32, 0x00, 0x00}


const unsigned short int cc_WF18C = 0xf18c; // WF18C


// 0xf082: db 0x4c 0x00 'L '

// ================================================
// 0xf084: WORD 'WF086' codep=0x7420 wordp=0xf086
// ================================================
IFieldType WF086 = {STARSYSTEMIDX, 0x0b, 0x01};

// ================================================
// 0xf089: WORD 'WF08B' codep=0x1d29 wordp=0xf08b
// ================================================
// 0xf08b: db 0x3a 0x20 ': '

// ================================================
// 0xf08d: WORD 'WF08F' codep=0x7420 wordp=0xf08f
// ================================================
IFieldType WF08F = {SHIPIDX, 0x14, 0x01};

// ================================================
// 0xf092: WORD 'WF094' codep=0x7420 wordp=0xf094
// ================================================
IFieldType WF094 = {SHIPIDX, 0x17, 0x01};

// ================================================
// 0xf097: WORD 'WF099' codep=0x224c wordp=0xf099 params=0 returns=0
// ================================================

void WF099() // WF099
{
  PRINT("RED", 3); // (.")
}


// ================================================
// 0xf0a1: WORD 'WF0A3' codep=0x224c wordp=0xf0a3 params=0 returns=0
// ================================================

void WF0A3() // WF0A3
{
  PRINT("ORANGE", 6); // (.")
}


// ================================================
// 0xf0ae: WORD 'WF0B0' codep=0x224c wordp=0xf0b0 params=0 returns=0
// ================================================

void WF0B0() // WF0B0
{
  PRINT("YELLOW", 6); // (.")
}


// ================================================
// 0xf0bb: WORD 'WF0BD' codep=0x224c wordp=0xf0bd params=0 returns=0
// ================================================

void WF0BD() // WF0BD
{
  PRINT("WHITE", 5); // (.")
}


// ================================================
// 0xf0c7: WORD 'MP'ER' codep=0x224c wordp=0xf0d1 params=0 returns=2
// ================================================
// entry

void MP_i_ER() // MP'ER
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+WF08F.offset)&0xFF); // WF08F<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(0x0080);
  _st_(); // <
  Push(pp_WF08B); // WF08B
  Store_2(); // !_2
  Push(Pop() | 0x0080); //  0x0080 OR
  Push(0x65e1+WF08F.offset); // WF08F<IFIELD>
  C_ex__2(); // C!_2
  Push(0x0064);
  Push(0x65e1+WF094.offset); // WF094<IFIELD>
  C_ex__2(); // C!_2
  Push((Read16((0x65e1+WF094.offset) + 1)&0xFF) & 0x007f); // WF094<IFIELD> 1+ C@ 0x007f AND
  Push((0x65e1+WF094.offset) + 1); // WF094<IFIELD> 1+
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
  Push(0xcb0c); // '>NEST'
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
// 0xf137: WORD 'WF139' codep=0x224c wordp=0xf139 params=0 returns=0
// ================================================

void WF139() // WF139
{
  PRINT("GREEN", 5); // (.")
}


// ================================================
// 0xf143: WORD 'WF145' codep=0x224c wordp=0xf145 params=0 returns=0
// ================================================

void WF145() // WF145
{
  PRINT("DARK BLUE", 9); // (.")
}


// ================================================
// 0xf153: WORD 'WF155' codep=0x224c wordp=0xf155 params=0 returns=0
// ================================================

void WF155() // WF155
{
  PRINT("LIGHT BLUE", 10); // (.")
}


// ================================================
// 0xf164: WORD 'WF166' codep=0x224c wordp=0xf166 params=2 returns=2
// ================================================

void WF166() // WF166
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
// 0xf176: WORD 'WF178' codep=0x1d29 wordp=0xf178
// ================================================
// 0xf178: db 0x3a 0x20 ': '

// ================================================
// 0xf17a: WORD 'WF17C' codep=0x1d29 wordp=0xf17c
// ================================================
// 0xf17c: db 0x3a 0x20 ': '

// ================================================
// 0xf17e: WORD 'WF180' codep=0x1d29 wordp=0xf180
// ================================================
// 0xf180: db 0x3a 0x20 ': '

// ================================================
// 0xf182: WORD 'WF184' codep=0x1d29 wordp=0xf184
// ================================================
// 0xf184: db 0x3a 0x20 ': '

// ================================================
// 0xf186: WORD 'WF188' codep=0x1d29 wordp=0xf188
// ================================================
// 0xf188: db 0x3a 0x20 ': '

// ================================================
// 0xf18a: WORD 'WF18C' codep=0x2214 wordp=0xf18c
// ================================================
// 0xf18c: dw 0x0014

// ================================================
// 0xf18e: WORD 'WF190' codep=0x1d29 wordp=0xf190
// ================================================
// 0xf190: db 0x3a 0x20 ': '

// ================================================
// 0xf192: WORD 'WF194' codep=0x224c wordp=0xf194
// ================================================

void WF194() // WF194
{
  Push(0x69fe); Push(0x0002); // 'PLACE DEVICE SO LOWER LEFT CORNER'
  WF166(); // WF166
  DrawTTY(); // .TTY
  Push(0x6a2c); Push(0x0002); // 'IS AT COORDINATES '
  WF166(); // WF166
  DrawTTY(); // .TTY
  PRINT("]", 1); // (.")
  Push(pp_WF178); // WF178
  Is(); // ?
  PRINT("* ^", 3); // (.")
  Push(pp_WF17C); // WF17C
  Is(); // ?
}


// ================================================
// 0xf1bc: WORD 'WF1BE' codep=0x224c wordp=0xf1be params=0 returns=1
// ================================================
// orphan

void WF1BE() // WF1BE
{
  Push(Read16(cc_WF18C)); // WF18C
  Push(5);
  _slash_(); // /
  _dash_(); // -
}


// ================================================
// 0xf1c8: WORD 'WF1CA' codep=0x224c wordp=0xf1ca params=1 returns=1
// ================================================

void WF1CA() // WF1CA
{
  Push(Pop() * 0x000a); //  0x000a *
}


// ================================================
// 0xf1d2: WORD 'WF1D4' codep=0x224c wordp=0xf1d4 params=0 returns=0
// ================================================

void WF1D4() // WF1D4
{
  Push(0);
  Push(0x0016);
  RRND(); // RRND
  WF1CA(); // WF1CA
  Push(pp_WF178); // WF178
  Store_2(); // !_2
}


// ================================================
// 0xf1e4: WORD 'WF1E6' codep=0x224c wordp=0xf1e6 params=0 returns=0
// ================================================

void WF1E6() // WF1E6
{
  Push(0);
  Push(0x0013);
  RRND(); // RRND
  WF1CA(); // WF1CA
  Push(pp_WF17C); // WF17C
  Store_2(); // !_2
}


// ================================================
// 0xf1f6: WORD 'WF1F8' codep=0x224c wordp=0xf1f8 params=0 returns=0
// ================================================

void WF1F8() // WF1F8
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
    WF1D4(); // WF1D4
    Push(0);
    Push(5);
    RRND(); // RRND
    WF1CA(); // WF1CA
    Push(pp_WF17C); // WF17C
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
      WF1CA(); // WF1CA
    } else
    {
      Push(0x0012);
      Push(0x0016);
      RRND(); // RRND
      WF1CA(); // WF1CA
    }
    Push(pp_WF178); // WF178
    Store_2(); // !_2
    WF1E6(); // WF1E6
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf248: WORD 'COLORS' codep=0x4b3b wordp=0xf253
// ================================================

void COLORS() // COLORS
{
  switch(Pop()) // COLORS
  {
  case 4:
    WF099(); // WF099
    break;
  case 6:
    WF0A3(); // WF0A3
    break;
  case 14:
    WF0B0(); // WF0B0
    break;
  case 15:
    WF0BD(); // WF0BD
    break;
  case 10:
    WF139(); // WF139
    break;
  case 11:
    WF155(); // WF155
    break;
  case 9:
    WF145(); // WF145
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf273: WORD '#>A' codep=0x1d29 wordp=0xf27b
// ================================================
// 0xf27b: db 0xd7 0x4f 0x3e 0x50 0x4a 0x50 0x55 0x50 0xce 0x4f 0x28 0x50 0x0e 0x50 ' O>PJPUP O(P P'

// ================================================
// 0xf289: WORD 'WF28B' codep=0x224c wordp=0xf28b
// ================================================

void WF28B() // WF28B
{
  Push(0);
  Push(7);
  RRND(); // RRND
  Push(Pop() * 2 + pp__n__gt_A); //  2* #>A +
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xf29b: WORD 'WF29D' codep=0x224c wordp=0xf29d
// ================================================

void WF29D() // WF29D
{
  CLICK(); // CLICK
  WF1F8(); // WF1F8
  WF28B(); // WF28B
  Push(pp_WF180); // WF180
  Store_2(); // !_2
  while(1)
  {
    WF28B(); // WF28B
    Push(Read16(pp_WF180)); // WF180 @
    OVER(); // OVER
    Push((Pop()==Pop())?1:0); // =
    if (Pop() == 0) break;

    Pop(); // DROP
  }
  Push(pp_WF184); // WF184
  Store_2(); // !_2
}


// ================================================
// 0xf2c1: WORD 'WF2C3' codep=0x224c wordp=0xf2c3 params=1 returns=1
// ================================================

void WF2C3() // WF2C3
{
  Push(Pop() * Read16(cc__star_MAPSCA)); //  *MAPSCA *
}


// ================================================
// 0xf2c9: WORD 'WF2CB' codep=0x224c wordp=0xf2cb params=1 returns=1
// ================================================

void WF2CB() // WF2CB
{
  WF2C3(); // WF2C3
  Push(Read16(cc_WF18C)); // WF18C
  WF2C3(); // WF2C3
  Push(Pop() + Pop()); // +
  Push(Pop() + 4); //  4 +
}


// ================================================
// 0xf2d9: WORD 'WF2DB' codep=0x224c wordp=0xf2db
// ================================================

void WF2DB() // WF2DB
{
  Push(Read16(pp_WF178)); // WF178 @
  WF2CB(); // WF2CB
  Push(Read16(pp_WF17C)); // WF17C @
  WF2CB(); // WF2CB
  Push(Read16(cc_WF18C)); // WF18C
  WF2C3(); // WF2C3
  Push(Read16(pp__star_GLOBAL)); // *GLOBAL @
  IsICONS_dash__1(); // ?ICONS-_1
}


// ================================================
// 0xf2f3: WORD 'WF2F5' codep=0x224c wordp=0xf2f5
// ================================================

void WF2F5() // WF2F5
{
  unsigned short int i, imax;
  INIT_dash_IC(); // INIT-IC
  Push2Words("*SECS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  _plus_ICONBO(); // +ICONBO
  WF2DB(); // WF2DB
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(pp_WF188); // WF188
    _099(); // 099

    i = 0;
    imax = Pop();
    do // (DO)
    {
      POINT_gt_I(); // POINT>I
      GetIC(); // @IC
      Push(Pop()==Read16(pp_WF180)?1:0); //  WF180 @ =
      GetIC(); // @IC
      Push(Pop()==Read16(pp_WF184)?1:0); //  WF184 @ =
      Push(Pop() | Pop()); // OR
      GetID(); // @ID
      Push(Pop()==Read16(cc_SYS_dash_ICO)?1:0); //  SYS-ICO =
      Push(Pop() & Pop()); // AND
      Push(Read16(regsp)); // DUP
      if (Pop() != 0)
      {
        GetIL(); // @IL
        GetIH(); // @IH
        _gt_C_plus_S(); // >C+S
        Push((Read16(0x65e1+WF086.offset)&0xFF) & 0x0080); // WF086<IFIELD> C@ 0x0080 AND
        _gt_FLAG(); // >FLAG
        Push(Pop() & Pop()); // AND
        ICLOSE(); // ICLOSE
      }
      if (Pop() != 0)
      {
        Push(1);
        Push(pp_WF188); // WF188
        _plus__ex__2(); // +!_2
      }
      i++;
    } while(i<imax); // (LOOP)

  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf35b: WORD 'WF35D' codep=0x1d29 wordp=0xf35d
// ================================================
// 0xf35d: db 0x50 0x55 0x55 0x32 0x00 0x00 'PUU2  '

// ================================================
// 0xf363: WORD 'WF365' codep=0x224c wordp=0xf365 params=0 returns=1
// ================================================

void WF365() // WF365
{
  Push(Read16(pp_WF188)); // WF188 @
  Push(6);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(0);
    Push(0x0064);
    RRND(); // RRND
    Push(Read16(Read16(pp_WF188) + pp_WF35D)&0xFF); // WF188 @ WF35D + C@
    _st_(); // <
    return;
  }
  Push(Read16(cc_FALSE)); // FALSE
}


// ================================================
// 0xf38d: WORD 'WF38F' codep=0x224c wordp=0xf38f
// ================================================

void WF38F() // WF38F
{
  Push(0x6a4b); Push(0x0002); // 'WHAT IS NUMBER OF '
  WF166(); // WF166
  DrawTTY(); // .TTY
  Push(Read16(pp_WF180)); // WF180 @
  COLORS(); // COLORS case
  Exec("CR"); // call of word 0x26ee '(CR)'
  PRINT("AND ", 4); // (.")
  Push(Read16(pp_WF184)); // WF184 @
  COLORS(); // COLORS case
  PRINT(" STARS\?", 7); // (.")
}


// ================================================
// 0xf3ba: WORD 'WF3BC' codep=0x224c wordp=0xf3bc
// ================================================

void WF3BC() // WF3BC
{
  unsigned short int i, imax;
  Push(0x6a6a); Push(0x0002); // 'NUMBER: '
  WF166(); // WF166
  DrawTTY(); // .TTY
  Push(-1);
  Push(pp__dash_AIN); // -AIN
  Store_2(); // !_2
  Push(0x000a);
  Push(0xb6fd); // 'OV#IN$'
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
  Push(pp_WF190); // WF190
  Store_2(); // !_2
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xf412: WORD 'WF414' codep=0x224c wordp=0xf414
// ================================================

void WF414() // WF414
{
  CTINIT(); // CTINIT
  Push(0x6a7f); Push(0x0002); // 'RE-ENTER:'
  WF166(); // WF166
  DrawTTY(); // .TTY
  WF38F(); // WF38F
  TTY_dash_SCR(); // TTY-SCR
  WF3BC(); // WF3BC
}


// ================================================
// 0xf428: WORD 'WF42A' codep=0x224c wordp=0xf42a
// ================================================

void WF42A() // WF42A
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  if (Pop() != 0)
  {
    Push(0x6a95); Push(0x0002); // 'CALIBRATING NAVIGATIONAL SYSTEM...'
    WF166(); // WF166
    DrawTTY(); // .TTY
  }
  TIME(); // TIME
  Push(Read16(Pop() + 2)); //  2+ @
  Push(pp_GLOBALS); // GLOBALS
  Store_2(); // !_2
  do
  {
    WF29D(); // WF29D
    WF2F5(); // WF2F5
    WF365(); // WF365
    Push(!Pop()); //  NOT
  } while(Pop() == 0);
  SAVE_dash_OV(); // SAVE-OV
  CTINIT(); // CTINIT
  WF194(); // WF194
  WF38F(); // WF38F
  TTY_dash_SCR(); // TTY-SCR
  WF3BC(); // WF3BC
}


// ================================================
// 0xf462: WORD 'WF464' codep=0x224c wordp=0xf464
// ================================================

void WF464() // WF464
{
  CTINIT(); // CTINIT
  Push(0x6ac4); Push(0x0002); // 'VERIFYING:'
  WF166(); // WF166
  DrawTTY(); // .TTY
  WF38F(); // WF38F
  Push(0x6adb); Push(0x0002); // 'NUMBER ENTERED: '
  WF166(); // WF166
  DrawTTY(); // .TTY
  Push(pp_WF190); // WF190
  Is(); // ?
  Push(0x6af8); Push(0x0002); // 'CONFIRM [N Y]'
  WF166(); // WF166
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
// 0xf4a8: WORD 'WF4AA' codep=0x224c wordp=0xf4aa
// ================================================

void WF4AA() // WF4AA
{
  while(1)
  {
    WF464(); // WF464
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    WF414(); // WF414
  }
  Push((Read16(pp_WF188)==Read16(pp_WF190)?1:0) & !Read16(pp_IsSECURE)); // WF188 @ WF190 @ = ?SECURE @ NOT AND
}


// ================================================
// 0xf4cc: WORD 'SP' codep=0x224c wordp=0xf4d3
// ================================================
// entry

void SP() // SP
{
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  WF42A(); // WF42A
  WF4AA(); // WF4AA
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
// 0xf4f1: WORD '2N' codep=0x224c wordp=0xf4f8
// ================================================
// entry

void _2N() // 2N
{
  WF42A(); // WF42A
  Push(Read16(pp_WF188)==Read16(pp_WF190)?1:0); // WF188 @ WF190 @ =
  if (Pop() == 0) return;
  Push(pp_IsSECURE); // ?SECURE
  _099(); // 099
  CTERASE(); // CTERASE
  Push(Read16(pp_WF08B)); // WF08B @
  if (Pop() == 0) return;
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push((Read16(0x65e1+WF08F.offset)&0xFF) & 0x007f); // WF08F<IFIELD> C@ 0x007f AND
  Push(0x65e1+WF08F.offset); // WF08F<IFIELD>
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}

// 0xf52c: db 0x53 0x54 0x50 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x5c 0x20 0x53 0x45 0x43 0x55 0x52 0x49 0x54 0x59 0x4f 0x56 0x52 0x2d 0x20 0x72 0x00 'STP-VOC_________________________ for\ SECURITYOVR- r '

