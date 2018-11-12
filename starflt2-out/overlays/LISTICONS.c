// ====== OVERLAY 'LISTICONS' ======
// store offset = 0xf2b0
// overlay size   = 0x02b0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF2C6  codep:0x224c wordp:0xf2c6 size:0x00a7 C-string:'WF2C6'
//           WF36F  codep:0x224c wordp:0xf36f size:0x0075 C-string:'WF36F'
//           WF3E6  codep:0x224c wordp:0xf3e6 size:0x0030 C-string:'WF3E6'
//           WF418  codep:0x224c wordp:0xf418 size:0x0038 C-string:'WF418'
//           WF452  codep:0x224c wordp:0xf452 size:0x000a C-string:'WF452'
//           WF45E  codep:0x224c wordp:0xf45e size:0x007e C-string:'WF45E'
//           ICONS  codep:0x224c wordp:0xf4e6 size:0x0000 C-string:'ICONS'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_ICON_h_; // ICON^
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_TILE_dash_PT; // TILE-PT
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_CMAP; // CMAP
extern const unsigned short int pp_NOF; // NOF
extern Color BLACK; // BLACK
extern Color GREY1; // GREY1
extern Color WHITE; // WHITE
void KEY_2(); // KEY_2
void _gt_FLAG(); // >FLAG
void I_gt_C(); // I>C
void Store_2(); // !_2
void ON_2(); // ON_2
void _099(); // 099
void GetRECORD(); // @RECORD
void PAD_v_16(); // PAD|16
void IsCGA(); // ?CGA
void StoreCOLOR(); // !COLOR
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_3FONT(); // >3FONT
void TILEFIL(); // TILEFIL
void SFILL(); // SFILL
void POS_dot_(); // POS.
void _dash_(); // -
void _gt_(); // >
void LCMOVE(); // LCMOVE
void GetDS(); // @DS
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================



// 0xf2c2: db 0x2b 0x00 '+ '

// ================================================
// 0xf2c4: WORD 'WF2C6' codep=0x224c wordp=0xf2c6
// ================================================

void WF2C6() // WF2C6
{
  unsigned short int i, imax;

  i = 0;
  imax = 8;
  do // (DO)
  {
    Push(pp_CMAP + i * 8); // CMAP I 8 * +
    Push(pp_TILE_dash_PT); // TILE-PT
    Store_2(); // !_2
    Push(0x0020 + i * 0x000c); // 0x0020 I 0x000c * +
    Push(0x002d);
    Push(0x000f);
    Push(0x000c);
    TILEFIL(); // TILEFIL
    i++;
  } while(i<imax); // (LOOP)

  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x001f);
  Push(0x002e);
  Push(0x0080);
  Push(0x002e);
  LLINE(); // LLINE
  Push(0x0080);
  Push(0x002e);
  Push(0x0080);
  Push(0x001d);
  LLINE(); // LLINE
  Push(0x0080);
  Push(0x001d);
  Push(0x001f);
  Push(0x001d);
  LLINE(); // LLINE
  Push(0x001f);
  Push(0x001d);
  Push(0x001f);
  Push(0x002e);
  LLINE(); // LLINE
  Push(0x0023);
  Push(0x0019);
  POS_dot_(); // POS.
  PRINT("LO.....ELEVATION.....HI ", 24); // (.")
}


// ================================================
// 0xf36d: WORD 'WF36F' codep=0x224c wordp=0xf36f
// ================================================

void WF36F() // WF36F
{
  Push(0x00be);
  Push(pp_YBLT); // YBLT
  _st__ex__gt_(); // <!>
  Push(0x0037);
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  _gt_3FONT(); // >3FONT
  PRINT("ICON", 4); // (.")
  Push(0x000a);
  Push(pp_XBLT); // XBLT
  _st__plus__ex__gt_(); // <+!>
  PRINT("KEY", 3); // (.")
  Push(0x000a);
  Push(0x000f);
  Push(0x0096);
  Push(0x000f);
  LLINE(); // LLINE
  Push(0x000a);
  Push(0x00b2);
  Push(0x0096);
  Push(0x00b2);
  LLINE(); // LLINE
  Push(0x000a);
  Push(0x000f);
  Push(0x000a);
  Push(0x00b2);
  LLINE(); // LLINE
  Push(0x0096);
  Push(0x000f);
  Push(0x0096);
  Push(0x00b2);
  LLINE(); // LLINE
}


// ================================================
// 0xf3e4: WORD 'WF3E6' codep=0x224c wordp=0xf3e6
// ================================================

void WF3E6() // WF3E6
{
  unsigned short int i, imax;

  i = 0;
  imax = 2;
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(Pop() + i * 9); //  I 9 * +
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop())&0xFF); //  C@
    I_gt_C(); // I>C
    IsCGA(); // ?CGA
    if (Pop() != 0)
    {
      _gt_FLAG(); // >FLAG
    }
    StoreCOLOR(); // !COLOR
    Push(Pop() + 1); //  1+
    Push(pp_ABLT); // ABLT
    _st__ex__gt_(); // <!>
    BLT(); // BLT
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xf416: WORD 'WF418' codep=0x224c wordp=0xf418
// ================================================

void WF418() // WF418
{
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _st__ex__gt_(); // <!>
  Push(0x001b);
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  PRINT("(PRESS ANY KEY TO CONTINUE)", 27); // (.")
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xf450: WORD 'WF452' codep=0x224c wordp=0xf452
// ================================================

void WF452() // WF452
{
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR
  SFILL(); // SFILL
  WF36F(); // WF36F
}


// ================================================
// 0xf45c: WORD 'WF45E' codep=0x224c wordp=0xf45e
// ================================================

void WF45E() // WF45E
{
  unsigned short int i, imax;
  _gt_1FONT(); // >1FONT

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Pop() - 0x000a); //  0x000a -
    Push(Read16(regsp)); // DUP
    Push(pp_YBLT); // YBLT
    _st__ex__gt_(); // <!>
    Push(0x0014);
    Push(pp_XBLT); // XBLT
    _st__ex__gt_(); // <!>
    Push(8);
    Push(pp_LBLT); // LBLT
    _st__ex__gt_(); // <!>
    Push(8);
    Push(pp_WBLT); // WBLT
    _st__ex__gt_(); // <!>
    Push(Read16(pp_ICON_h_)); // ICON^ @
    Push(i * 0x0012); // I 0x0012 *
    GetDS(); // @DS
    PAD_v_16(); // PAD|16
    Push(0x0012);
    LCMOVE(); // LCMOVE
    PAD_v_16(); // PAD|16
    WF3E6(); // WF3E6
    Push(0x000c);
    Push(pp_XBLT); // XBLT
    _st__plus__ex__gt_(); // <+!>
    GetColor(BLACK);
    StoreCOLOR(); // !COLOR
    Push(-2);
    Push(pp_YBLT); // YBLT
    _st__plus__ex__gt_(); // <+!>
    Push(0x0041);
    Push(i); // I
    Push(Read16(regsp)); // DUP
    Push(0x002b);
    _gt_(); // >
    if (Pop() != 0)
    {
      Push(Pop() - 0x0011); //  0x0011 -
    }
    GetRECORD(); // @RECORD
    Push(0x001b);
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(2);
    Push(pp_YBLT); // YBLT
    _st__plus__ex__gt_(); // <+!>
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xf4dc: WORD 'ICONS' codep=0x224c wordp=0xf4e6
// ================================================
// entry

void ICONS() // ICONS
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  Push(pp_NOF); // NOF
  ON_2(); // ON_2
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_2(); // !_2
  WF452(); // WF452
  Push(0x00b4);
  Push(0x000f);
  Push(0);
  WF45E(); // WF45E
  WF418(); // WF418
  WF452(); // WF452
  Push(0x00b4);
  Push(0x001b);
  Push(0x000f);
  WF45E(); // WF45E
  Push(0x003c);
  Push(0x002e);
  Push(0x002d);
  WF45E(); // WF45E
  WF418(); // WF418
  WF452(); // WF452
  Push(0x00b4);
  Push(0x0031);
  Push(0x002e);
  WF45E(); // WF45E
  Push(0x0097);
  Push(0x0038);
  Push(0x0033);
  WF45E(); // WF45E
  WF2C6(); // WF2C6
  WF418(); // WF418
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
  Push(pp_NOF); // NOF
  _099(); // 099
}

// 0xf554: db 0x49 0x43 0x4f 0x4e 0x2d 0x56 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'ICON-V______ '

