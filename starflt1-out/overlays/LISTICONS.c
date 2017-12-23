// ====== OVERLAY 'LISTICONS' ======
// store offset = 0xf290
// overlay size   = 0x02d0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//        altitude  codep:0x224c parp:0xf2a6 size:0x00a7 C-string:'altitude'
//        ICON-KEY  codep:0x224c parp:0xf34f size:0x0075 C-string:'ICON_dash_KEY'
//            .BLT  codep:0x224c parp:0xf3c6 size:0x002a C-string:'DrawBLT'
//      PAUSE-PAGE  codep:0x224c parp:0xf3f2 size:0x0038 C-string:'PAUSE_dash_PAGE'
//        SEE-BLTS  codep:0x224c parp:0xf42c size:0x005c C-string:'SEE_dash_BLTS'
//           title  codep:0x224c parp:0xf48a size:0x000a C-string:'title'
//           ICONS  codep:0x224c parp:0xf49e size:0x0000 C-string:'ICONS'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_TILE_dash_PTR; // TILE-PTR
extern const unsigned short int pp_CMAP; // CMAP
extern Color BLACK; // BLACK
extern Color GREY1; // GREY1
extern Color WHITE; // WHITE
void KEY_2(); // KEY_2
void Is_gt_EGA(); // ?>EGA
void Store_3(); // !_3
void OFF(); // OFF
void GetRECORD(); // @RECORD
void StoreCOLOR(); // !COLOR
void BLT(); // BLT
void _gt_1FONT(); // >1FONT
void _gt_3FONT(); // >3FONT
void POS_dot_(); // POS.
void SFILL(); // SFILL
void _dash_(); // -
void GetDS(); // @DS
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void LLINE(); // LLINE
void TILEFILL(); // TILEFILL


// =================================
// =========== VARIABLES ===========
// =================================



// 0xf2a2: db 0x24 0x00 '$ '

// ================================================
// 0xf2a4: WORD 'altitude' codep=0x224c parp=0xf2a6
// ================================================

void altitude() // altitude
{
  unsigned short int i, imax;
  SetColor(BLACK);
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
    Push(pp_TILE_dash_PTR); // TILE-PTR
    Store_3(); // !_3
    Push(0x0021);
    Push(i); // I
    Push(0x000c);
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    Push(0x002d);
    Push(0x0010);
    Push(0x000c);
    TILEFILL(); // TILEFILL
    i++;
  } while(i<imax); // (LOOP)

  Push(0x0023);
  Push(0x0019);
  POS_dot_(); // POS.
  PRINT("LO.....ELEVATION.....HI ", 24); // (.")
}


// ================================================
// 0xf34d: WORD 'ICON-KEY' codep=0x224c parp=0xf34f params=0 returns=0
// ================================================

void ICON_dash_KEY() // ICON-KEY
{
  Push(0x00be);
  Push(pp_YBLT); // YBLT
  _st__ex__gt_(); // <!>
  Push(0x0037);
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
  SetColor(BLACK);
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
// 0xf3c4: WORD '.BLT' codep=0x224c parp=0xf3c6
// ================================================

void DrawBLT() // .BLT
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
    Is_gt_EGA(); // ?>EGA
    Push(pp_COLOR); // COLOR
    _st__ex__gt_(); // <!>
    Push(Pop()+1); // 1+
    Push(pp_ABLT); // ABLT
    _st__ex__gt_(); // <!>
    BLT(); // BLT
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xf3f0: WORD 'PAUSE-PAGE' codep=0x224c parp=0xf3f2
// ================================================

void PAUSE_dash_PAGE() // PAUSE-PAGE
{
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _st__ex__gt_(); // <!>
  Push(0x001b);
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
  SetColor(WHITE);
  StoreCOLOR(); // !COLOR
  PRINT("(PRESS ANY KEY TO CONTINUE)", 27); // (.")
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xf42a: WORD 'SEE-BLTS' codep=0x224c parp=0xf42c
// ================================================

void SEE_dash_BLTS() // SEE-BLTS
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
    Push(0x003e);
    Push(i); // I
    GetRECORD(); // @RECORD
    DrawBLT(); // .BLT
    Push(0x000c);
    Push(pp_XBLT); // XBLT
    _st__plus__ex__gt_(); // <+!>
    SetColor(BLACK);
    StoreCOLOR(); // !COLOR
    Push(-2);
    Push(pp_YBLT); // YBLT
    _st__plus__ex__gt_(); // <+!>
    Push(0x0041);
    Push(i); // I
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
// 0xf488: WORD 'title' codep=0x224c parp=0xf48a
// ================================================

void title() // title
{
  SetColor(GREY1);
  StoreCOLOR(); // !COLOR
  SFILL(); // SFILL
  ICON_dash_KEY(); // ICON-KEY
}


// ================================================
// 0xf494: WORD 'ICONS' codep=0x224c parp=0xf49e
// ================================================
// entry

void ICONS() // ICONS
{
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  title(); // title
  Push(0x00b4);
  Push(0x000f);
  Push(0);
  SEE_dash_BLTS(); // SEE-BLTS
  PAUSE_dash_PAGE(); // PAUSE-PAGE
  title(); // title
  Push(0x00b4);
  Push(0x001b);
  Push(0x000f);
  SEE_dash_BLTS(); // SEE-BLTS
  altitude(); // altitude
  PAUSE_dash_PAGE(); // PAUSE-PAGE
}

// 0xf4ce: db 0x49 0x43 0x4f 0x4e 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x56 0x45 0x52 0x4c 0x41 0x59 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x28 0x72 0x66 0x67 0x31 0x31 0x73 0x65 0x70 0x38 0x35 0x29 0x0f 0x65 0x31 0x36 0x33 0x36 0x53 0xae 0x0b 0xf5 0x12 0x07 0x13 0xfa 0x15 0x04 0x00 0x90 0xf4 0x90 0x16 0x53 0x45 0x45 0x44 0x45 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0xf1 0xf3 0x86 0x2e 0x53 0x54 0x4f 0x52 0xcd 0x4c 0x22 0x83 0xf4 0x36 0xf4 0xfc 0xf2 0x90 0x16 0x4d 0x41 0x50 0x53 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x00 'ICON-VOC________________________VERLAY -----------(rfg11sep85) e1636S              SEEDER__________________________   .STOR L"  6     MAPS-VOC____ '

