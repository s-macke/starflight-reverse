// store offset = 0xf290
// overlay size   = 0x02d0
// name = 'ICON-VOC________________________VERLAY -----------(rfg11sep85)e1636S®õú'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xf2a6  codep:0x224c parp:0xf2a6 size:0x00a7 C-string:'UNK_0xf2a6'
// 1704:      UNK_0xf34f  codep:0x224c parp:0xf34f size:0x0075 C-string:'UNK_0xf34f'
// 1705:      UNK_0xf3c6  codep:0x224c parp:0xf3c6 size:0x002a C-string:'UNK_0xf3c6'
// 1706:      UNK_0xf3f2  codep:0x224c parp:0xf3f2 size:0x0038 C-string:'UNK_0xf3f2'
// 1707:      UNK_0xf42c  codep:0x224c parp:0xf42c size:0x005c C-string:'UNK_0xf42c'
// 1708:      UNK_0xf48a  codep:0x224c parp:0xf48a size:0x000a C-string:'UNK_0xf48a'
// 1709:           ICONS  codep:0x224c parp:0xf49e size:0x00c2 C-string:'ICONS'

// =================================
// =========== VARIABLES ===========
// =================================



// 0xf2a2: db 0x24 0x00 '$ '

// ================================================
// 0xf2a4: WORD 'UNK_0xf2a6' codep=0x224c parp=0xf2a6
// ================================================

void UNK_0xf2a6() // UNK_0xf2a6
{
  BLACK(); // BLACK
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

  do // (DO)
  {
  Push(pp_CMAP); // CMAP
  I(); // I
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(pp_TILE_minus_PT); // TILE-PT
  _ex_(); // !
  Push(0x0021);
  I(); // I
  Push(0x000c);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x002d);
  Push(0x0010);
  Push(0x000c);
  TILEFIL(); // TILEFIL

  } while(...); // (LOOP) 0xffd4
  Push(0x0023);
  Push(0x0019);
  POS_dot_(); // POS.
  PRINT("LO.....ELEVATION.....HI ", 24); // (.")
}


// ================================================
// 0xf34d: WORD 'UNK_0xf34f' codep=0x224c parp=0xf34f
// ================================================

void UNK_0xf34f() // UNK_0xf34f
{
  Push(0x00be);
  Push(pp_YBLT); // YBLT
  _st__ex__gt_(); // <!>
  Push(0x0037);
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
  BLACK(); // BLACK
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
// 0xf3c4: WORD 'UNK_0xf3c6' codep=0x224c parp=0xf3c6
// ================================================

void UNK_0xf3c6() // UNK_0xf3c6
{
  Push(2); // 2
  Push(0); // 0

  do // (DO)
  {
  DUP(); // DUP
  I(); // I
  Push(cc__9); // 9
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  DUP(); // DUP
  C_at_(); // C@
  _ask__gt_EGA(); // ?>EGA
  Push(pp_COLOR); // COLOR
  _st__ex__gt_(); // <!>
  Push(Pop()+1); // 1+
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  BLT(); // BLT

  } while(...); // (LOOP) 0xffe2
  Pop(); // DROP
}


// ================================================
// 0xf3f0: WORD 'UNK_0xf3f2' codep=0x224c parp=0xf3f2
// ================================================

void UNK_0xf3f2() // UNK_0xf3f2
{
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _st__ex__gt_(); // <!>
  Push(0x001b);
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  PRINT("(PRESS ANY KEY TO CONTINUE)", 27); // (.")
  KEY(); // KEY
  Pop(); // DROP
}


// ================================================
// 0xf42a: WORD 'UNK_0xf42c' codep=0x224c parp=0xf42c
// ================================================

void UNK_0xf42c() // UNK_0xf42c
{
  _gt_1FONT(); // >1FONT

  do // (DO)
  {
  Push(0x000a);
  _minus_(); // -
  DUP(); // DUP
  Push(pp_YBLT); // YBLT
  _st__ex__gt_(); // <!>
  Push(0x0014);
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
  Push(cc__8); // 8
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(cc__8); // 8
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  Push(0x003e);
  I(); // I
  _at_RECORD(); // @RECORD
  UNK_0xf3c6(); // UNK_0xf3c6
  Push(0x000c);
  Push(pp_XBLT); // XBLT
  _st__plus__ex__gt_(); // <+!>
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  Push(cc__minus_2); // -2
  Push(pp_YBLT); // YBLT
  _st__plus__ex__gt_(); // <+!>
  Push(0x0041);
  I(); // I
  _at_RECORD(); // @RECORD
  Push(0x001b);
  TYPE(); // TYPE
  Push(2); // 2
  Push(pp_YBLT); // YBLT
  _st__plus__ex__gt_(); // <+!>

  } while(...); // (LOOP) 0xffae
  Pop(); // DROP
}


// ================================================
// 0xf488: WORD 'UNK_0xf48a' codep=0x224c parp=0xf48a
// ================================================

void UNK_0xf48a() // UNK_0xf48a
{
  GREY1(); // GREY1
  _ex_COLOR(); // !COLOR
  SFILL(); // SFILL
  UNK_0xf34f(); // UNK_0xf34f
}


// ================================================
// 0xf494: WORD 'ICONS' codep=0x224c parp=0xf49e
// ================================================

void ICONS() // ICONS
{
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex_(); // !
  UNK_0xf48a(); // UNK_0xf48a
  Push(0x00b4);
  Push(0x000f);
  Push(0); // 0
  UNK_0xf42c(); // UNK_0xf42c
  UNK_0xf3f2(); // UNK_0xf3f2
  UNK_0xf48a(); // UNK_0xf48a
  Push(0x00b4);
  Push(0x001b);
  Push(0x000f);
  UNK_0xf42c(); // UNK_0xf42c
  UNK_0xf2a6(); // UNK_0xf2a6
  UNK_0xf3f2(); // UNK_0xf3f2
}

// 0xf4ce: db 0x49 0x43 0x4f 0x4e 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x56 0x45 0x52 0x4c 0x41 0x59 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x28 0x72 0x66 0x67 0x31 0x31 0x73 0x65 0x70 0x38 0x35 0x29 0x0f 0x65 0x31 0x36 0x33 0x36 0x53 0xae 0x0b 0xf5 0x12 0x07 0x13 0xfa 0x15 0x04 0x00 0x90 0xf4 0x90 0x16 0x53 0x45 0x45 0x44 0x45 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0xf1 0xf3 0x86 0x2e 0x53 0x54 0x4f 0x52 0xcd 0x4c 0x22 0x83 0xf4 0x36 0xf4 0xfc 0xf2 0x90 0x16 0x4d 0x41 0x50 0x53 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x00 'ICON-VOC________________________VERLAY -----------(rfg11sep85) e1636S              SEEDER__________________________   .STOR L"  6     MAPS-VOC____ '
  