// ====== OVERLAY 'LISTICONS' ======
// store offset = 0xf2b0
// overlay size   = 0x02b0

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xf2c6  codep:0x224c parp:0xf2c6 size:0x00a7 C-string:'UNK_0xf2c6'
//      UNK_0xf36f  codep:0x224c parp:0xf36f size:0x0075 C-string:'UNK_0xf36f'
//      UNK_0xf3e6  codep:0x224c parp:0xf3e6 size:0x0030 C-string:'UNK_0xf3e6'
//      UNK_0xf418  codep:0x224c parp:0xf418 size:0x0038 C-string:'UNK_0xf418'
//      UNK_0xf452  codep:0x224c parp:0xf452 size:0x000a C-string:'UNK_0xf452'
//      UNK_0xf45e  codep:0x224c parp:0xf45e size:0x007e C-string:'UNK_0xf45e'
//           ICONS  codep:0x224c parp:0xf4e6 size:0x0000 C-string:'ICONS'

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
void KEY_2(); // KEY_2
void _gt_FLAG(); // >FLAG
void I_gt_C(); // I>C
void _ex__2(); // !_2
void ON_2(); // ON_2
void _099(); // 099
void _at_RECORD(); // @RECORD
void PAD_v_16(); // PAD|16
void _ask_CGA(); // ?CGA
void _ex_COLOR(); // !COLOR
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_3FONT(); // >3FONT
void TILEFIL(); // TILEFIL
void SFILL(); // SFILL
void POS_dot_(); // POS.
void _dash_(); // -
void _gt_(); // >
void LCMOVE(); // LCMOVE
void _at_DS(); // @DS
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================



// 0xf2c2: db 0x2b 0x00 '+ '

// ================================================
// 0xf2c4: WORD 'UNK_0xf2c6' codep=0x224c parp=0xf2c6
// ================================================

void UNK_0xf2c6() // UNK_0xf2c6
{
  unsigned short int i, imax;
  Push(8);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(pp_CMAP); // CMAP
    Push(i); // I
    Push(8);
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    Push(pp_TILE_dash_PT); // TILE-PT
    _ex__2(); // !_2
    Push(0x0020);
    Push(i); // I
    Push(0x000c);
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    Push(0x002d);
    Push(0x000f);
    Push(0x000c);
    TILEFIL(); // TILEFIL
  i++;
  } while(i<imax); // (LOOP) 0xffd4

  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
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
// 0xf36d: WORD 'UNK_0xf36f' codep=0x224c parp=0xf36f
// ================================================

void UNK_0xf36f() // UNK_0xf36f
{
  Push(0x00be);
  Push(pp_YBLT); // YBLT
  _st__ex__gt_(); // <!>
  Push(0x0037);
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
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
// 0xf3e4: WORD 'UNK_0xf3e6' codep=0x224c parp=0xf3e6
// ================================================

void UNK_0xf3e6() // UNK_0xf3e6
{
  unsigned short int i, imax;
  Push(2);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(i); // I
    Push(9);
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    Push(Read16(regsp)); // DUP
    Push(Read8(Pop())&0xFF); // C@
    I_gt_C(); // I>C
    _ask_CGA(); // ?CGA
    if (Pop() != 0)
    {
      _gt_FLAG(); // >FLAG
    }
    _ex_COLOR(); // !COLOR
    Push(Pop()+1); // 1+
    Push(pp_ABLT); // ABLT
    _st__ex__gt_(); // <!>
    BLT(); // BLT
  i++;
  } while(i<imax); // (LOOP) 0xffdc

  Pop(); // DROP
}


// ================================================
// 0xf416: WORD 'UNK_0xf418' codep=0x224c parp=0xf418
// ================================================

void UNK_0xf418() // UNK_0xf418
{
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _st__ex__gt_(); // <!>
  Push(0x001b);
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  PRINT("(PRESS ANY KEY TO CONTINUE)", 27); // (.")
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xf450: WORD 'UNK_0xf452' codep=0x224c parp=0xf452
// ================================================

void UNK_0xf452() // UNK_0xf452
{
  SetColor("GREY1");
  _ex_COLOR(); // !COLOR
  SFILL(); // SFILL
  UNK_0xf36f(); // UNK_0xf36f
}


// ================================================
// 0xf45c: WORD 'UNK_0xf45e' codep=0x224c parp=0xf45e
// ================================================

void UNK_0xf45e() // UNK_0xf45e
{
  unsigned short int i, imax;
  _gt_1FONT(); // >1FONT

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x000a);
    _dash_(); // -
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
    Push(pp_ICON_h_); // ICON^
    Push(Read16(Pop())); // @
    Push(i); // I
    Push(0x0012);
    Push(Pop() * Pop()); // *
    _at_DS(); // @DS
    PAD_v_16(); // PAD|16
    Push(0x0012);
    LCMOVE(); // LCMOVE
    PAD_v_16(); // PAD|16
    UNK_0xf3e6(); // UNK_0xf3e6
    Push(0x000c);
    Push(pp_XBLT); // XBLT
    _st__plus__ex__gt_(); // <+!>
    SetColor("BLACK");
    _ex_COLOR(); // !COLOR
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
      Push(0x0011);
      _dash_(); // -
    }
    _at_RECORD(); // @RECORD
    Push(0x001b);
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(2);
    Push(pp_YBLT); // YBLT
    _st__plus__ex__gt_(); // <+!>
  i++;
  } while(i<imax); // (LOOP) 0xff8c

  Pop(); // DROP
}


// ================================================
// 0xf4dc: WORD 'ICONS' codep=0x224c parp=0xf4e6
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
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex__2(); // !_2
  UNK_0xf452(); // UNK_0xf452
  Push(0x00b4);
  Push(0x000f);
  Push(0);
  UNK_0xf45e(); // UNK_0xf45e
  UNK_0xf418(); // UNK_0xf418
  UNK_0xf452(); // UNK_0xf452
  Push(0x00b4);
  Push(0x001b);
  Push(0x000f);
  UNK_0xf45e(); // UNK_0xf45e
  Push(0x003c);
  Push(0x002e);
  Push(0x002d);
  UNK_0xf45e(); // UNK_0xf45e
  UNK_0xf418(); // UNK_0xf418
  UNK_0xf452(); // UNK_0xf452
  Push(0x00b4);
  Push(0x0031);
  Push(0x002e);
  UNK_0xf45e(); // UNK_0xf45e
  Push(0x0097);
  Push(0x0038);
  Push(0x0033);
  UNK_0xf45e(); // UNK_0xf45e
  UNK_0xf2c6(); // UNK_0xf2c6
  UNK_0xf418(); // UNK_0xf418
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
  Push(pp_NOF); // NOF
  _099(); // 099
}

// 0xf554: db 0x49 0x43 0x4f 0x4e 0x2d 0x56 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'ICON-V______ '
  