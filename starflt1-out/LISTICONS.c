// ====== OVERLAY 'LISTICONS' ======
// store offset = 0xf290
// overlay size   = 0x02d0

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:        altitude  codep:0x224c parp:0xf2a6 size:0x00a7 C-string:'altitude'
// 1704:        ICON-KEY  codep:0x224c parp:0xf34f size:0x0075 C-string:'ICON_dash_KEY'
// 1705:            .BLT  codep:0x224c parp:0xf3c6 size:0x002a C-string:'_dot_BLT'
// 1706:      PAUSE-PAGE  codep:0x224c parp:0xf3f2 size:0x0038 C-string:'PAUSE_dash_PAGE'
// 1707:        SEE-BLTS  codep:0x224c parp:0xf42c size:0x005c C-string:'SEE_dash_BLTS'
// 1708:           title  codep:0x224c parp:0xf48a size:0x000a C-string:'title'
// 1709:           ICONS  codep:0x224c parp:0xf49e size:0x0000 C-string:'ICONS'

// =================================
// =========== VARIABLES ===========
// =================================



// 0xf2a2: db 0x24 0x00 '$ '

// ================================================
// 0xf2a4: WORD 'altitude' codep=0x224c parp=0xf2a6
// ================================================

void altitude() // altitude
{
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
  Push(cc__8); // 8
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x6a3f); // pointer to CMAP
  Push(i); // I
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x58cd); // pointer to TILE-PTR
  _ex__3(); // !_3
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
  } while(i<imax); // (LOOP) 0xffd4

  Push(0x0023);
  Push(0x0019);
  POS_dot_(); // POS.
  PRINT("LO.....ELEVATION.....HI ", 24); // (.")
}


// ================================================
// 0xf34d: WORD 'ICON-KEY' codep=0x224c parp=0xf34f
// ================================================

void ICON_dash_KEY() // ICON-KEY
{
  Push(0x00be);
  Push(0x5863); // pointer to YBLT
  _st__ex__gt_(); // <!>
  Push(0x0037);
  Push(0x586e); // pointer to XBLT
  _st__ex__gt_(); // <!>
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  _gt_3FONT(); // >3FONT
  PRINT("ICON", 4); // (.")
  Push(0x000a);
  Push(0x586e); // pointer to XBLT
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

void _dot_BLT() // .BLT
{
  Push(2); // 2
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(regsp)); // DUP
  Push(i); // I
  Push(cc__9); // 9
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  _ask__gt_EGA(); // ?>EGA
  Push(0x55f2); // pointer to COLOR
  _st__ex__gt_(); // <!>
  Push(Pop()+1); // 1+
  Push(0x589d); // pointer to ABLT
  _st__ex__gt_(); // <!>
  BLT(); // BLT
  i++;
  } while(i<imax); // (LOOP) 0xffe2

  Pop(); // DROP
}


// ================================================
// 0xf3f0: WORD 'PAUSE-PAGE' codep=0x224c parp=0xf3f2
// ================================================

void PAUSE_dash_PAGE() // PAUSE-PAGE
{
  Push(0x000a);
  Push(0x5863); // pointer to YBLT
  _st__ex__gt_(); // <!>
  Push(0x001b);
  Push(0x586e); // pointer to XBLT
  _st__ex__gt_(); // <!>
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  PRINT("(PRESS ANY KEY TO CONTINUE)", 27); // (.")
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xf42a: WORD 'SEE-BLTS' codep=0x224c parp=0xf42c
// ================================================

void SEE_dash_BLTS() // SEE-BLTS
{
  _gt_1FONT(); // >1FONT

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x000a);
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(0x5863); // pointer to YBLT
  _st__ex__gt_(); // <!>
  Push(0x0014);
  Push(0x586e); // pointer to XBLT
  _st__ex__gt_(); // <!>
  Push(cc__8); // 8
  Push(0x5887); // pointer to LBLT
  _st__ex__gt_(); // <!>
  Push(cc__8); // 8
  Push(0x5892); // pointer to WBLT
  _st__ex__gt_(); // <!>
  Push(0x003e);
  Push(i); // I
  _at_RECORD(); // @RECORD
  _dot_BLT(); // .BLT
  Push(0x000c);
  Push(0x586e); // pointer to XBLT
  _st__plus__ex__gt_(); // <+!>
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  Push(cc__dash_2); // -2
  Push(0x5863); // pointer to YBLT
  _st__plus__ex__gt_(); // <+!>
  Push(0x0041);
  Push(i); // I
  _at_RECORD(); // @RECORD
  Push(0x001b);
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  Push(2); // 2
  Push(0x5863); // pointer to YBLT
  _st__plus__ex__gt_(); // <+!>
  i++;
  } while(i<imax); // (LOOP) 0xffae

  Pop(); // DROP
}


// ================================================
// 0xf488: WORD 'title' codep=0x224c parp=0xf48a
// ================================================

void title() // title
{
  SetColor("GREY1");
  _ex_COLOR(); // !COLOR
  SFILL(); // SFILL
  ICON_dash_KEY(); // ICON-KEY
}


// ================================================
// 0xf494: WORD 'ICONS' codep=0x224c parp=0xf49e
// ================================================
// entry

void ICONS() // ICONS
{
  Push(0x587c); // pointer to XORMODE
  OFF(); // OFF
  _at_DS(); // @DS
  Push(0x58aa); // pointer to BLTSEG
  _ex__3(); // !_3
  title(); // title
  Push(0x00b4);
  Push(0x000f);
  Push(0); // 0
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
  