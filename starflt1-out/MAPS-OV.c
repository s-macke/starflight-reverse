// ====== OVERLAY 'MAPS-OV' ======
// store offset = 0xeca0
// overlay size   = 0x08c0

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xecba  codep:0x73ea parp:0xecba size:0x0026 C-string:'UNK_0xecba'
//      UNK_0xece2  codep:0x73ea parp:0xece2 size:0x0006 C-string:'UNK_0xece2'
//      UNK_0xecea  codep:0x73ea parp:0xecea size:0x0006 C-string:'UNK_0xecea'
//      UNK_0xecf2  codep:0x73ea parp:0xecf2 size:0x000e C-string:'UNK_0xecf2'
//      UNK_0xed02  codep:0x2214 parp:0xed02 size:0x0002 C-string:'UNK_0xed02'
//      UNK_0xed06  codep:0x73ea parp:0xed06 size:0x0006 C-string:'UNK_0xed06'
//      UNK_0xed0e  codep:0x224c parp:0xed0e size:0x0050 C-string:'UNK_0xed0e'
//      UNK_0xed60  codep:0x224c parp:0xed60 size:0x0016 C-string:'UNK_0xed60'
//      UNK_0xed78  codep:0x224c parp:0xed78 size:0x0030 C-string:'UNK_0xed78'
//      UNK_0xedaa  codep:0x73ea parp:0xedaa size:0x0006 C-string:'UNK_0xedaa'
//      UNK_0xedb2  codep:0x224c parp:0xedb2 size:0x002a C-string:'UNK_0xedb2'
//      UNK_0xedde  codep:0x224c parp:0xedde size:0x0048 C-string:'UNK_0xedde'
//      UNK_0xee28  codep:0x224c parp:0xee28 size:0x0014 C-string:'UNK_0xee28'
//      UNK_0xee3e  codep:0x224c parp:0xee3e size:0x0018 C-string:'UNK_0xee3e'
//      UNK_0xee58  codep:0x224c parp:0xee58 size:0x002c C-string:'UNK_0xee58'
//      UNK_0xee86  codep:0x224c parp:0xee86 size:0x000e C-string:'UNK_0xee86'
//      UNK_0xee96  codep:0x224c parp:0xee96 size:0x000c C-string:'UNK_0xee96'
//      UNK_0xeea4  codep:0x224c parp:0xeea4 size:0x0074 C-string:'UNK_0xeea4'
//      UNK_0xef1a  codep:0x224c parp:0xef1a size:0x0016 C-string:'UNK_0xef1a'
//      2X2CONTOUR  codep:0x224c parp:0xef3f size:0x0034 C-string:'_2X2CONTOUR'
//      4X4CONTOUR  codep:0x224c parp:0xef82 size:0x0040 C-string:'_4X4CONTOUR'
//            CBLT  codep:0x1d29 parp:0xefcb size:0x0004 C-string:'CBLT'
//           CBLTP  codep:0xefd9 parp:0xefd9 size:0x002c C-string:'CBLTP'
//      UNK_0xf007  codep:0x224c parp:0xf007 size:0x00ba C-string:'UNK_0xf007'
//      8X8CONTOUR  codep:0x224c parp:0xf0d0 size:0x0040 C-string:'_8X8CONTOUR'
//            '4X4  codep:0x1d29 parp:0xf119 size:0x0002 C-string:'_i_4X4'
//            '2X2  codep:0x1d29 parp:0xf124 size:0x0002 C-string:'_i_2X2'
//            '8X8  codep:0x1d29 parp:0xf12f size:0x0002 C-string:'_i_8X8'
//      UNK_0xf133  codep:0x224c parp:0xf133 size:0x0052 C-string:'UNK_0xf133'
//      UNK_0xf187  codep:0x224c parp:0xf187 size:0x0046 C-string:'UNK_0xf187'
//      UNK_0xf1cf  codep:0x224c parp:0xf1cf size:0x004e C-string:'UNK_0xf1cf'
//      UNK_0xf21f  codep:0x224c parp:0xf21f size:0x0008 C-string:'UNK_0xf21f'
//      UNK_0xf229  codep:0x224c parp:0xf229 size:0x0008 C-string:'UNK_0xf229'
//      UNK_0xf233  codep:0x224c parp:0xf233 size:0x0008 C-string:'UNK_0xf233'
//      UNK_0xf23d  codep:0x224c parp:0xf23d size:0x0008 C-string:'UNK_0xf23d'
//      UNK_0xf247  codep:0x224c parp:0xf247 size:0x0008 C-string:'UNK_0xf247'
//      UNK_0xf251  codep:0x224c parp:0xf251 size:0x0008 C-string:'UNK_0xf251'
//      UNK_0xf25b  codep:0x224c parp:0xf25b size:0x0008 C-string:'UNK_0xf25b'
//      UNK_0xf265  codep:0x224c parp:0xf265 size:0x0008 C-string:'UNK_0xf265'
//      UNK_0xf26f  codep:0x224c parp:0xf26f size:0x0008 C-string:'UNK_0xf26f'
//      UNK_0xf279  codep:0x224c parp:0xf279 size:0x0008 C-string:'UNK_0xf279'
//      UNK_0xf283  codep:0x224c parp:0xf283 size:0x0008 C-string:'UNK_0xf283'
//      UNK_0xf28d  codep:0x224c parp:0xf28d size:0x0008 C-string:'UNK_0xf28d'
//      UNK_0xf297  codep:0x224c parp:0xf297 size:0x0008 C-string:'UNK_0xf297'
//      UNK_0xf2a1  codep:0x224c parp:0xf2a1 size:0x0008 C-string:'UNK_0xf2a1'
//         WPHRASE  codep:0x4a4f parp:0xf2b5 size:0x003c C-string:'WPHRASE'
//        (.STORM)  codep:0x224c parp:0xf2fe size:0x001a C-string:'_ro__dot_STORM_rc_'
//           .ROCK  codep:0x224c parp:0xf322 size:0x0018 C-string:'_dot_ROCK'
//         .LIQUID  codep:0x224c parp:0xf346 size:0x0016 C-string:'_dot_LIQUID'
//        .CRYSTAL  codep:0x224c parp:0xf369 size:0x000a C-string:'_dot_CRYSTAL'
//            .ICE  codep:0x224c parp:0xf37c size:0x001a C-string:'_dot_ICE'
//         .MOLTEN  codep:0x224c parp:0xf3a2 size:0x0010 C-string:'_dot_MOLTEN'
//         .CARPET  codep:0x224c parp:0xf3be size:0x0031 C-string:'_dot_CARPET'
//           /SURF  codep:0x4a4f parp:0xf3f9 size:0x0018 C-string:'_slash_SURF'
//        .SURFACE  codep:0x224c parp:0xf41e size:0x0010 C-string:'_dot_SURFACE'
//      UNK_0xf430  codep:0x224c parp:0xf430 size:0x0006 C-string:'UNK_0xf430'
//      UNK_0xf438  codep:0x224c parp:0xf438 size:0x0006 C-string:'UNK_0xf438'
//      UNK_0xf440  codep:0x224c parp:0xf440 size:0x0012 C-string:'UNK_0xf440'
//      UNK_0xf454  codep:0x224c parp:0xf454 size:0x0016 C-string:'UNK_0xf454'
//      UNK_0xf46c  codep:0x224c parp:0xf46c size:0x0017 C-string:'UNK_0xf46c'
//      UNK_0xf485  codep:0x224c parp:0xf485 size:0x0006 C-string:'UNK_0xf485'
//      UNK_0xf48d  codep:0x224c parp:0xf48d size:0x0023 C-string:'UNK_0xf48d'
//      UNK_0xf4b2  codep:0x224c parp:0xf4b2 size:0x0013 C-string:'UNK_0xf4b2'
//      UNK_0xf4c7  codep:0x224c parp:0xf4c7 size:0x002b C-string:'UNK_0xf4c7'
//      UNK_0xf4f4  codep:0x224c parp:0xf4f4 size:0x0014 C-string:'UNK_0xf4f4'
//      UNK_0xf50a  codep:0x224c parp:0xf50a size:0x0008 C-string:'UNK_0xf50a'
//            MAPS  codep:0x224c parp:0xf51b size:0x0026 C-string:'MAPS'
//          .STORM  codep:0x224c parp:0xf54c size:0x0000 C-string:'_dot_STORM'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__3; // 3
extern const unsigned short int cc__4; // 4
extern const unsigned short int cc__6; // 6
extern const unsigned short int cc__7; // 7
extern const unsigned short int cc__8; // 8
extern const unsigned short int cc__9; // 9
extern const unsigned short int cc__dash_1; // -1
extern const unsigned short int pp_XLL; // XLL
extern const unsigned short int pp_YLL; // YLL
extern const unsigned short int pp_P_dash_COLOR; // P-COLOR
extern const unsigned short int pp_P_dash_PHRAS; // P-PHRAS
extern const unsigned short int pp_P_dash_CARP; // P-CARP
extern const unsigned short int pp_O_dash_COLOR; // O-COLOR
extern const unsigned short int pp_HYDRO; // HYDRO
extern const unsigned short int pp_ATMO; // ATMO
extern const unsigned short int pp__i_FLARE; // 'FLARE
extern const unsigned short int pp__ro_FLARE_rc_; // (FLARE)
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp__ask_WIN; // ?WIN
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_XCON; // XCON
extern const unsigned short int pp_YCON; // YCON
extern const unsigned short int pp_XVIS; // XVIS
extern const unsigned short int pp_YVIS; // YVIS
extern const unsigned short int pp_XLLDEST; // XLLDEST
extern const unsigned short int pp_YLLDEST; // YLLDEST
extern const unsigned short int pp__i__dot_CELL; // '.CELL
extern const unsigned short int pp__i__dot_BACKG; // '.BACKG
extern const unsigned short int pp__n_STORM; // #STORM
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WBOTTOM; // WBOTTOM
extern const unsigned short int pp_WRIGHT; // WRIGHT
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp__i_SIMULA; // 'SIMULA
extern const unsigned short int pp_LAST_dash_UPDATE; // LAST-UPDATE
extern const unsigned short int pp_XWLD_c_XPIX; // XWLD:XPIX
extern const unsigned short int pp_YWLD_c_YPIX; // YWLD:YPIX
extern const unsigned short int pp__ro_PLANET; // (PLANET
void _dot_R(); // .R
void SPACE(); // SPACE
void SPACES(); // SPACES
void NOP(); // NOP
void UNRAVEL(); // UNRAVEL
void SQRT(); // SQRT
void SETLARRAY(); // SETLARRAY
void SETREGION(); // SETREGION
void _ex__3(); // !_3
void _plus__ex_(); // +!
void D_ex_(); // D!
void OFF(); // OFF
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void _at__gt_C_plus_S(); // @>C+S
void _ex_COLOR(); // !COLOR
void VCLIPSET(); // VCLIPSET
void DCLIPSET(); // DCLIPSET
void _gt_MAINVIEW(); // >MAINVIEW
void DARK(); // DARK
void BLT(); // BLT
void CELLCOLOR(); // CELLCOLOR
void _dot_REGION_plus_(); // .REGION+
void _ex_VISWINDOW(); // !VISWINDOW
void _gt_1ICONFONT(); // >1ICONFONT
void _gt_2ICONF(); // >2ICONF
void _gt_3ICONF(); // >3ICONF
void _dot_LOCAL_dash_ICONS(); // .LOCAL-ICONS
void POS_dot_(); // POS.
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void _gt_TVCT(); // >TVCT
void WINDOW(); // WINDOW
void GCR(); // GCR
void _i_KEY(); // 'KEY
void _ask_QUIT(); // ?QUIT
void _ask_NEW_dash_HO(); // ?NEW-HO
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _slash_MOD(); // /MOD
void _dash_(); // -
void _gt_(); // >
void _0_gt_(); // 0>
void TIME(); // TIME
void _at_EXECUTE(); // @EXECUTE
void ON_2(); // ON_2
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void LLINE(); // LLINE
void V_gt_DISPLAY(); // V>DISPLAY
void BUFFERXY(); // BUFFERXY
void _ro_XYSCAN(); // (XYSCAN
void CBLTP(); // CBLTP


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_CBLT = 0xefcb; // CBLT size: 4
// {0xff, 0x66, 0x00, 0x66}

const unsigned short int pp__i_4X4 = 0xf119; // '4X4 size: 2
// {0x1a, 0xce}

const unsigned short int pp__i_2X2 = 0xf124; // '2X2 size: 2
// {0xf8, 0xcd}

const unsigned short int pp__i_8X8 = 0xf12f; // '8X8 size: 2
// {0x3c, 0xce}


const unsigned short int cc_UNK_0xed02 = 0x0082; // UNK_0xed02


// 0xecb2: db 0x8c 0x00 0x14 0x22 0x20 0x00 '   "  '

// ================================================
// 0xecb8: WORD 'UNK_0xecba' codep=0x73ea parp=0xecba
// ================================================
// 0xecba: db 0x20 0x01 0x01 0x16 0x8f 0x65 0xea 0x73 0x20 0x04 0x01 0x16 0x8f 0x65 0xea 0x73 0x20 0x11 0x02 0x16 0x8f 0x65 0xea 0x73 0x20 0x13 0x01 0x16 0x8f 0x65 0xea 0x73 0x20 0x0c 0x01 0x16 0x8f 0x65 '     e s     e s     e s     e s     e'

// ================================================
// 0xece0: WORD 'UNK_0xece2' codep=0x73ea parp=0xece2
// ================================================
// 0xece2: db 0x20 0x0f 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xece8: WORD 'UNK_0xecea' codep=0x73ea parp=0xecea
// ================================================
// 0xecea: db 0x20 0x10 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xecf0: WORD 'UNK_0xecf2' codep=0x73ea parp=0xecf2
// ================================================
// 0xecf2: db 0x20 0x02 0x02 0x16 0x8f 0x65 0xea 0x73 0x43 0x07 0x08 0x1c 0xcd 0x69 '     e sC    i'

// ================================================
// 0xed00: WORD 'UNK_0xed02' codep=0x2214 parp=0xed02
// ================================================
// 0xed02: db 0x82 0x00 '  '

// ================================================
// 0xed04: WORD 'UNK_0xed06' codep=0x73ea parp=0xed06
// ================================================
// 0xed06: db 0x82 0x00 0x03 0x07 0xa8 0x93 '      '

// ================================================
// 0xed0c: WORD 'UNK_0xed0e' codep=0x224c parp=0xed0e
// ================================================

void UNK_0xed0e() // UNK_0xed0e
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  LoadData("UNK_0xecf2"); // from 'PLANET      '
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  Push(0x0320);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x0320);
  _dash_(); // -
  Push(0); // 0
  SQRT(); // SQRT
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x0320);
  Push(Pop() + Pop()); // +

  label1:
  Push(0x0064);
  _slash_MOD(); // /MOD
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label2;
  Push(0); // 0
  _dot_R(); // .R

  label2:
  PRINT(".", 1); // (.")
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0); // 0
  _dot_R(); // .R
  Push(0); // 0
  _dot_R(); // .R
}


// ================================================
// 0xed5e: WORD 'UNK_0xed60' codep=0x224c parp=0xed60
// ================================================

void UNK_0xed60() // UNK_0xed60
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  LoadData("UNK_0xece2"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  LoadData("UNK_0xecea"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  OVER(); // OVER
  _dash_(); // -
  Push(Pop()+1); // 1+
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed76: WORD 'UNK_0xed78' codep=0x224c parp=0xed78
// ================================================

void UNK_0xed78() // UNK_0xed78
{
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x01e0);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x03c0);
  SWAP(); // SWAP
  _dash_(); // -

  label1:
  Push(0x01e0);
  UNK_0xed60(); // UNK_0xed60
  ROT(); // ROT
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop()+1); // 1+
  ROT(); // ROT
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xeda8: WORD 'UNK_0xedaa' codep=0x73ea parp=0xedaa
// ================================================
// 0xedaa: db 0x43 0x04 0x03 0x1c 0xcd 0x69 'C    i'

// ================================================
// 0xedb0: WORD 'UNK_0xedb2' codep=0x224c parp=0xedb2
// ================================================

void UNK_0xedb2() // UNK_0xedb2
{
  UNK_0xed78(); // UNK_0xed78
  Push(pp_RECORD_n_); // RECORD#
  _ex__3(); // !_3
  Push(0x0043);
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  LoadData("UNK_0xedaa"); // from 'REGIONS     '
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63fa); // IFIELD(PHR-CNT)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x63fb); // IFIELD(PHRASE-MEM)
  OVER(); // OVER
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(0x000a);
  SWAP(); // SWAP
  _dash_(); // -
  SPACES(); // SPACES
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeddc: WORD 'UNK_0xedde' codep=0x224c parp=0xedde
// ================================================

void UNK_0xedde() // UNK_0xedde
{
  _ask_NEW_dash_HO(); // ?NEW-HO
  if (Pop() == 0) goto label1;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LAST_dash_UPDATE); // LAST-UPDATE
  D_ex_(); // D!
  Push(1); // 1
  Push(pp_STAR_dash_HR); // STAR-HR
  _plus__ex_(); // +!
  Push(pp_STAR_dash_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(0x0018);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  Push(pp_STAR_dash_HR); // STAR-HR
  OFF(); // OFF
  Push(1); // 1
  Push(pp_STARDATE); // STARDATE
  _plus__ex_(); // +!

  label1:
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(pp__ro_FLARE_rc_); // (FLARE)
  Push(Read16(Pop())); // @
  Push((Pop()==Pop())?1:0); // =
  Push(pp__ask_WIN); // ?WIN
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(pp__i_FLARE); // 'FLARE
  _at_EXECUTE(); // @EXECUTE
}


// ================================================
// 0xee26: WORD 'UNK_0xee28' codep=0x224c parp=0xee28
// ================================================

void UNK_0xee28() // UNK_0xee28
{

  label1:
  UNK_0xedde(); // UNK_0xedde
  Push(pp__i_SIMULA); // 'SIMULA
  _at_EXECUTE(); // @EXECUTE
  _i_KEY(); // 'KEY
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  _ro_XYSCAN(); // (XYSCAN case
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xee3c: WORD 'UNK_0xee3e' codep=0x224c parp=0xee3e
// ================================================

void UNK_0xee3e() // UNK_0xee3e
{
  Push(0x0040);
  Push(cc__3); // 3
  Push(cc__7); // 7
  Push(0x0026);
  WINDOW(); // WINDOW
  Push(cc__dash_1); // -1
  Push(pp_WBOTTOM); // WBOTTOM
  _st__plus__ex__gt_(); // <+!>
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xee56: WORD 'UNK_0xee58' codep=0x224c parp=0xee58
// ================================================

void UNK_0xee58() // UNK_0xee58
{
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WBOTTOM); // WBOTTOM
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  SetColor("BLACK");
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  _ex_COLOR(); // !COLOR
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  POS_dot_(); // POS.
}


// ================================================
// 0xee84: WORD 'UNK_0xee86' codep=0x224c parp=0xee86
// ================================================

void UNK_0xee86() // UNK_0xee86
{
  _gt_C_plus_S(); // >C+S
  Push(0x63fb); // IFIELD(PHRASE-MEM)
  Push(0x63fa); // IFIELD(PHR-CNT)
  Push(Read8(Pop())&0xFF); // C@
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee94: WORD 'UNK_0xee96' codep=0x224c parp=0xee96
// ================================================

void UNK_0xee96() // UNK_0xee96
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xeea2: WORD 'UNK_0xeea4' codep=0x224c parp=0xeea4
// ================================================

void UNK_0xeea4() // UNK_0xeea4
{
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  _gt_MAINVIEW(); // >MAINVIEW
  Push(0x001a);
  Push(0x002b);
  Push(0x002d);
  Push(0x002b);
  LLINE(); // LLINE
  Push(0x001a);
  Push(0x002c);
  Push(0x002d);
  Push(0x002c);
  LLINE(); // LLINE
  Push(0x001a);
  Push(0x004b);
  Push(0x002d);
  Push(0x004b);
  LLINE(); // LLINE
  Push(0x001a);
  Push(0x004c);
  Push(0x002d);
  Push(0x004c);
  LLINE(); // LLINE
  Push(0x001a);
  Push(0x002d);
  Push(0x001a);
  Push(0x004a);
  LLINE(); // LLINE
  Push(0x002d);
  Push(0x002d);
  Push(0x002d);
  Push(0x004a);
  LLINE(); // LLINE
}


// ================================================
// 0xef18: WORD 'UNK_0xef1a' codep=0x224c parp=0xef1a
// ================================================

void UNK_0xef1a() // UNK_0xef1a
{
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  _dash_(); // -
}


// ================================================
// 0xef30: WORD '2X2CONTOUR' codep=0x224c parp=0xef3f
// ================================================
// entry

void _2X2CONTOUR() // 2X2CONTOUR
{
  Push(0x6ac1); // probable 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  Push(0x989a); // probable '.2X2CELL'
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push(1); // 1
  Push(Read16(regsp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  UNK_0xef1a(); // UNK_0xef1a
  OVER(); // OVER
  Push(0x0022);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(0x003a);
  Push(Pop() + Pop()); // +
  SETREGION(); // SETREGION
  _dot_REGION_plus_(); // .REGION+
  UNK_0xeea4(); // UNK_0xeea4
}


// ================================================
// 0xef73: WORD '4X4CONTOUR' codep=0x224c parp=0xef82
// ================================================
// entry

void _4X4CONTOUR() // 4X4CONTOUR
{
  Push(0x6ac1); // probable 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  Push(0x98be); // probable '.4X4CELL'
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push(2); // 2
  Push(Read16(regsp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  UNK_0xef1a(); // UNK_0xef1a
  Push(0x000f);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(cc__9); // 9
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  OVER(); // OVER
  Push(0x0010);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(0x001c);
  Push(Pop() + Pop()); // +
  SETREGION(); // SETREGION
  _dot_REGION_plus_(); // .REGION+
}


// ================================================
// 0xefc2: WORD 'CBLT' codep=0x1d29 parp=0xefcb
// ================================================
// 0xefcb: db 0xff 0x66 0x00 0x66 ' f f'

// ================================================
// 0xefcf: WORD 'CBLTP' codep=0xefd9 parp=0xefd9
// ================================================
// 0xefd9: pop    ax
// 0xefda: add    ax,0003
// 0xefdd: mov    [5863],ax
// 0xefe1: pop    ax
// 0xefe2: add    ax,0006
// 0xefe5: mov    [586E],ax
// 0xefe9: mov    word ptr [5892],0004
// 0xefef: mov    word ptr [5887],0006
// 0xeff5: mov    word ptr [589D],EFCB
// 0xeffb: push   ds
// 0xeffc: pop    word ptr [58AA]
// 0xf000: lodsw
// 0xf001: mov    bx,ax
// 0xf003: jmp    word ptr [bx]

// ================================================
// 0xf005: WORD 'UNK_0xf007' codep=0x224c parp=0xf007
// ================================================

void UNK_0xf007() // UNK_0xf007
{
  signed short int i, imax;
  signed short int j, jmax;
  unsigned short int a;
  unsigned short int b;
  unsigned short int c;
  unsigned short int d;
  Push(0x000e);
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(cc__8); // 8
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(pp_XLL); // XLL
  Push(Read16(Pop())); // @
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(pp_YLL); // YLL
  Push(Read16(Pop())); // @
  Push(i); // J
  Push(Pop() + Pop()); // +
  _2DUP(); // 2DUP
  CELLCOLOR(); // CELLCOLOR
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  _2DUP(); // 2DUP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  CELLCOLOR(); // CELLCOLOR
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(a); // I
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(a); // R>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  b = Pop(); // >R

  label1:
  _2DUP(); // 2DUP
  Push(Pop()+1); // 1+
  CELLCOLOR(); // CELLCOLOR
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  c = Pop(); // >R
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  CELLCOLOR(); // CELLCOLOR
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(c); // I
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  Push(c); // R>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  d = Pop(); // >R

  label2:
  Push(d); // I
  Push(b); // I'
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label3;
  Push(d); // I
  Push(b); // I'
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  Push(d); // I
  _0_gt_(); // 0>
  if (Pop() == 0) goto label4;
  Push(d); // I
  goto label5;

  label4:
  Push(b); // I'

  label5:
  Push(pp_COLOR); // COLOR
  _ex__3(); // !_3
  _2DUP(); // 2DUP
  Push(cc__3); // 3
  Push(cc__3); // 3
  BUFFERXY(); // BUFFERXY
  CBLTP(); // CBLTP
  BLT(); // BLT

  label3:
  Push(d); // R>
  Push(b); // R>
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
  j++;
  } while(j<jmax); // (LOOP) 0xff5c

  i++;
  } while(i<imax); // (LOOP) 0xff52

}


// ================================================
// 0xf0c1: WORD '8X8CONTOUR' codep=0x224c parp=0xf0d0
// ================================================
// entry

void _8X8CONTOUR() // 8X8CONTOUR
{
  Push(0x6ac1); // probable 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  Push(0x98dc); // probable '.8X8CELL'
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push2Words("0.");
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  UNK_0xef1a(); // UNK_0xef1a
  Push(0x0016);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x000d);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  OVER(); // OVER
  Push(cc__8); // 8
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(0x000e);
  Push(Pop() + Pop()); // +
  SETREGION(); // SETREGION
  _dot_REGION_plus_(); // .REGION+
  UNK_0xf007(); // UNK_0xf007
}


// ================================================
// 0xf110: WORD ''4X4' codep=0x1d29 parp=0xf119
// ================================================
// 0xf119: db 0x1a 0xce '  '

// ================================================
// 0xf11b: WORD ''2X2' codep=0x1d29 parp=0xf124
// ================================================
// 0xf124: db 0xf8 0xcd '  '

// ================================================
// 0xf126: WORD ''8X8' codep=0x1d29 parp=0xf12f
// ================================================
// 0xf12f: db 0x3c 0xce '< '

// ================================================
// 0xf131: WORD 'UNK_0xf133' codep=0x224c parp=0xf133
// ================================================

void UNK_0xf133() // UNK_0xf133
{
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  _gt_MAINVIEW(); // >MAINVIEW
  DARK(); // DARK
  _gt_2ICONF(); // >2ICONF
  VCLIPSET(); // VCLIPSET
  Push(cc__4); // 4
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(pp__i_4X4); // '4X4
  Push(Read16(Pop())); // @
  Push(pp__i__dot_BACKG); // '.BACKG
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x000a);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x000f);
  Push(Pop() + Pop()); // +
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x001a);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x002b);
  Push(Pop() + Pop()); // +
  _ex_VISWINDOW(); // !VISWINDOW
  _4X4CONTOUR(); // 4X4CONTOUR
  _dot_LOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
}


// ================================================
// 0xf185: WORD 'UNK_0xf187' codep=0x224c parp=0xf187
// ================================================

void UNK_0xf187() // UNK_0xf187
{
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  _gt_MAINVIEW(); // >MAINVIEW
  DARK(); // DARK
  _gt_3ICONF(); // >3ICONF
  Push(pp__i_2X2); // '2X2
  Push(Read16(Pop())); // @
  Push(pp__i__dot_BACKG); // '.BACKG
  _ex__3(); // !_3
  Push(2); // 2
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x0022);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x003a);
  Push(Pop() + Pop()); // +
  _ex_VISWINDOW(); // !VISWINDOW
  _2X2CONTOUR(); // 2X2CONTOUR
  UNK_0xeea4(); // UNK_0xeea4
  _dot_LOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
}


// ================================================
// 0xf1cd: WORD 'UNK_0xf1cf' codep=0x224c parp=0xf1cf
// ================================================

void UNK_0xf1cf() // UNK_0xf1cf
{
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  _gt_1ICONFONT(); // >1ICONFONT
  Push(pp__i_8X8); // '8X8
  Push(Read16(Pop())); // @
  Push(pp__i__dot_BACKG); // '.BACKG
  _st__ex__gt_(); // <!>
  Push(cc__8); // 8
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x000e);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x0016);
  Push(Pop() + Pop()); // +
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x0016);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x0029);
  Push(Pop() + Pop()); // +
  _ex_VISWINDOW(); // !VISWINDOW
  _8X8CONTOUR(); // 8X8CONTOUR
  _dot_LOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  DCLIPSET(); // DCLIPSET
}


// ================================================
// 0xf21d: WORD 'UNK_0xf21f' codep=0x224c parp=0xf21f
// ================================================

void UNK_0xf21f() // UNK_0xf21f
{
  Push(0xe63c); Push(0x0001);
}


// ================================================
// 0xf227: WORD 'UNK_0xf229' codep=0x224c parp=0xf229
// ================================================

void UNK_0xf229() // UNK_0xf229
{
  Push(0xeafa); Push(0x0001);
}


// ================================================
// 0xf231: WORD 'UNK_0xf233' codep=0x224c parp=0xf233
// ================================================

void UNK_0xf233() // UNK_0xf233
{
  Push(0xeb2b); Push(0x0001);
}


// ================================================
// 0xf23b: WORD 'UNK_0xf23d' codep=0x224c parp=0xf23d
// ================================================

void UNK_0xf23d() // UNK_0xf23d
{
  Push(0xe9ad); Push(0x0001);
}


// ================================================
// 0xf245: WORD 'UNK_0xf247' codep=0x224c parp=0xf247
// ================================================

void UNK_0xf247() // UNK_0xf247
{
  Push(0xe9c8); Push(0x0001);
}


// ================================================
// 0xf24f: WORD 'UNK_0xf251' codep=0x224c parp=0xf251
// ================================================

void UNK_0xf251() // UNK_0xf251
{
  Push(0xe9ea); Push(0x0001);
}


// ================================================
// 0xf259: WORD 'UNK_0xf25b' codep=0x224c parp=0xf25b
// ================================================

void UNK_0xf25b() // UNK_0xf25b
{
  Push(0xea02); Push(0x0001);
}


// ================================================
// 0xf263: WORD 'UNK_0xf265' codep=0x224c parp=0xf265
// ================================================

void UNK_0xf265() // UNK_0xf265
{
  Push(0xea98); Push(0x0001);
}


// ================================================
// 0xf26d: WORD 'UNK_0xf26f' codep=0x224c parp=0xf26f
// ================================================

void UNK_0xf26f() // UNK_0xf26f
{
  Push(0xea2d); Push(0x0001);
}


// ================================================
// 0xf277: WORD 'UNK_0xf279' codep=0x224c parp=0xf279
// ================================================

void UNK_0xf279() // UNK_0xf279
{
  Push(0xea7e); Push(0x0001);
}


// ================================================
// 0xf281: WORD 'UNK_0xf283' codep=0x224c parp=0xf283
// ================================================

void UNK_0xf283() // UNK_0xf283
{
  Push(0xeabf); Push(0x0001);
}


// ================================================
// 0xf28b: WORD 'UNK_0xf28d' codep=0x224c parp=0xf28d
// ================================================

void UNK_0xf28d() // UNK_0xf28d
{
  Push(0xea5c); Push(0x0001);
}


// ================================================
// 0xf295: WORD 'UNK_0xf297' codep=0x224c parp=0xf297
// ================================================

void UNK_0xf297() // UNK_0xf297
{
  Push(0xeae2); Push(0x0001);
}


// ================================================
// 0xf29f: WORD 'UNK_0xf2a1' codep=0x224c parp=0xf2a1
// ================================================

void UNK_0xf2a1() // UNK_0xf2a1
{
  Push(0xeb11); Push(0x0001);
}


// ================================================
// 0xf2a9: WORD 'WPHRASE' codep=0x4a4f parp=0xf2b5
// ================================================

void WPHRASE() // WPHRASE
{
  switch(Pop()) // WPHRASE
  {
  case 0:
    UNK_0xf233(); // UNK_0xf233
    break;
  case 1:
    UNK_0xf229(); // UNK_0xf229
    break;
  case 2:
    UNK_0xf233(); // UNK_0xf233
    break;
  case 3:
    UNK_0xf23d(); // UNK_0xf23d
    break;
  case 4:
    UNK_0xf247(); // UNK_0xf247
    break;
  case 5:
    UNK_0xf251(); // UNK_0xf251
    break;
  case 6:
    UNK_0xf25b(); // UNK_0xf25b
    break;
  case 7:
    UNK_0xf265(); // UNK_0xf265
    break;
  case 8:
    UNK_0xf26f(); // UNK_0xf26f
    break;
  case 9:
    UNK_0xf279(); // UNK_0xf279
    break;
  case 10:
    UNK_0xf283(); // UNK_0xf283
    break;
  case 11:
    UNK_0xf28d(); // UNK_0xf28d
    break;
  case 12:
    UNK_0xf297(); // UNK_0xf297
    break;
  case 13:
    UNK_0xf2a1(); // UNK_0xf2a1
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf2f1: WORD '(.STORM)' codep=0x224c parp=0xf2fe
// ================================================

void _ro__dot_STORM_rc_() // (.STORM)
{
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  UNK_0xf21f(); // UNK_0xf21f
  goto label2;

  label1:
  Push(pp__n_STORM); // #STORM
  Push(Read16(Pop())); // @
  WPHRASE(); // WPHRASE case

  label2:
  UNK_0xee86(); // UNK_0xee86
}


// ================================================
// 0xf318: WORD '.ROCK' codep=0x224c parp=0xf322
// ================================================

void _dot_ROCK() // .ROCK
{
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_at_(); // 1.5@
  UNK_0xee86(); // UNK_0xee86
  SPACE(); // SPACE

  label1:
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  UNK_0xee86(); // UNK_0xee86
}


// ================================================
// 0xf33a: WORD '.LIQUID' codep=0x224c parp=0xf346
// ================================================

void _dot_LIQUID() // .LIQUID
{
  Push(pp_O_dash_COLOR); // O-COLOR
  _1_dot_5_at_(); // 1.5@
  UNK_0xee86(); // UNK_0xee86
  SPACE(); // SPACE
  Push(0xe780); Push(0x0001);
  UNK_0xee86(); // UNK_0xee86
  GCR(); // GCR
  _dot_ROCK(); // .ROCK
}


// ================================================
// 0xf35c: WORD '.CRYSTAL' codep=0x224c parp=0xf369
// ================================================

void _dot_CRYSTAL() // .CRYSTAL
{
  Push(0xe797); Push(0x0001);
  UNK_0xee86(); // UNK_0xee86
}


// ================================================
// 0xf373: WORD '.ICE' codep=0x224c parp=0xf37c
// ================================================

void _dot_ICE() // .ICE
{
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  UNK_0xee86(); // UNK_0xee86
  GCR(); // GCR
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_at_(); // 1.5@
  UNK_0xee86(); // UNK_0xee86
  SPACE(); // SPACE
  Push(0xe624); Push(0x0001);
  UNK_0xee86(); // UNK_0xee86
}


// ================================================
// 0xf396: WORD '.MOLTEN' codep=0x224c parp=0xf3a2
// ================================================

void _dot_MOLTEN() // .MOLTEN
{
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  UNK_0xee86(); // UNK_0xee86
  GCR(); // GCR
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_at_(); // 1.5@
  UNK_0xee86(); // UNK_0xee86
}


// ================================================
// 0xf3b2: WORD '.CARPET' codep=0x224c parp=0xf3be
// ================================================

void _dot_CARPET() // .CARPET
{
  Push(pp_P_dash_CARP); // P-CARP
  _1_dot_5_at_(); // 1.5@
  UNK_0xee96(); // UNK_0xee96
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  PRINT(", ", 2); // (.")
  GCR(); // GCR
  Push(0xe97a); Push(0x0001);
  UNK_0xee86(); // UNK_0xee86
  SPACE(); // SPACE
  UNK_0xee86(); // UNK_0xee86
  SPACE(); // SPACE
  Push(0xc761); Push(0x0001);
  UNK_0xee86(); // UNK_0xee86

  label1:
  PRINT(".", 1); // (.")
  GCR(); // GCR
}


// ================================================
// 0xf3ef: WORD '/SURF' codep=0x4a4f parp=0xf3f9
// ================================================

void _slash_SURF() // /SURF
{
  switch(Pop()) // /SURF
  {
  case 0:
    _dot_CRYSTAL(); // .CRYSTAL
    break;
  case 2:
    _dot_LIQUID(); // .LIQUID
    break;
  case 3:
    _dot_ICE(); // .ICE
    break;
  case 4:
    _dot_MOLTEN(); // .MOLTEN
    break;
  case 5:
    _dot_ROCK(); // .ROCK
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf411: WORD '.SURFACE' codep=0x224c parp=0xf41e
// ================================================

void _dot_SURFACE() // .SURFACE
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  LoadData("UNK_0xecba"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  _slash_SURF(); // /SURF case
  _dot_CARPET(); // .CARPET
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf42e: WORD 'UNK_0xf430' codep=0x224c parp=0xf430
// ================================================

void UNK_0xf430() // UNK_0xf430
{
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf436: WORD 'UNK_0xf438' codep=0x224c parp=0xf438
// ================================================

void UNK_0xf438() // UNK_0xf438
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf43e: WORD 'UNK_0xf440' codep=0x224c parp=0xf440
// ================================================

void UNK_0xf440() // UNK_0xf440
{
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  Push(cc_UNK_0xed02); // UNK_0xed02
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  LoadData("UNK_0xed06"); // from 'COMPOUNDS   '
  _1_dot_5_at_(); // 1.5@
  UNK_0xee86(); // UNK_0xee86
}


// ================================================
// 0xf452: WORD 'UNK_0xf454' codep=0x224c parp=0xf454
// ================================================

void UNK_0xf454() // UNK_0xf454
{
  UNK_0xf430(); // UNK_0xf430
  PRINT("ATMO:", 5); // (.")
  UNK_0xf438(); // UNK_0xf438
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  UNK_0xf440(); // UNK_0xf440
  GCR(); // GCR
}


// ================================================
// 0xf46a: WORD 'UNK_0xf46c' codep=0x224c parp=0xf46c
// ================================================

void UNK_0xf46c() // UNK_0xf46c
{
  UNK_0xf430(); // UNK_0xf430
  PRINT("HYDRO:", 6); // (.")
  UNK_0xf438(); // UNK_0xf438
  Push(pp_HYDRO); // HYDRO
  Push(Read16(Pop())); // @
  UNK_0xf440(); // UNK_0xf440
  GCR(); // GCR
}


// ================================================
// 0xf483: WORD 'UNK_0xf485' codep=0x224c parp=0xf485
// ================================================

void UNK_0xf485() // UNK_0xf485
{
  UNK_0xee3e(); // UNK_0xee3e
  UNK_0xee58(); // UNK_0xee58
}


// ================================================
// 0xf48b: WORD 'UNK_0xf48d' codep=0x224c parp=0xf48d
// ================================================

void UNK_0xf48d() // UNK_0xf48d
{
  UNK_0xf430(); // UNK_0xf430
  PRINT("TERRAIN:", 8); // (.")
  UNK_0xf438(); // UNK_0xf438
  _dot_SURFACE(); // .SURFACE
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(0x001e);
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xf4b0: WORD 'UNK_0xf4b2' codep=0x224c parp=0xf4b2
// ================================================

void UNK_0xf4b2() // UNK_0xf4b2
{
  GCR(); // GCR
  UNK_0xf430(); // UNK_0xf430
  PRINT("SKY:", 4); // (.")
  UNK_0xf438(); // UNK_0xf438
  _ro__dot_STORM_rc_(); // (.STORM)
  GCR(); // GCR
}


// ================================================
// 0xf4c5: WORD 'UNK_0xf4c7' codep=0x224c parp=0xf4c7
// ================================================

void UNK_0xf4c7() // UNK_0xf4c7
{
  UNK_0xf430(); // UNK_0xf430
  PRINT("TEMPERATURE:", 12); // (.")
  UNK_0xf438(); // UNK_0xf438
  UNK_0xedb2(); // UNK_0xedb2
  UNK_0xf430(); // UNK_0xf430
  PRINT(" GRAVITY:", 9); // (.")
  UNK_0xf438(); // UNK_0xf438
  UNK_0xed0e(); // UNK_0xed0e
  GCR(); // GCR
}


// ================================================
// 0xf4f2: WORD 'UNK_0xf4f4' codep=0x224c parp=0xf4f4
// ================================================

void UNK_0xf4f4() // UNK_0xf4f4
{
  UNK_0xf485(); // UNK_0xf485
  Push(cc__6); // 6
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
  UNK_0xf4b2(); // UNK_0xf4b2
  UNK_0xf4c7(); // UNK_0xf4c7
  UNK_0xf454(); // UNK_0xf454
  UNK_0xf46c(); // UNK_0xf46c
  UNK_0xf48d(); // UNK_0xf48d
}


// ================================================
// 0xf508: WORD 'UNK_0xf50a' codep=0x224c parp=0xf50a
// ================================================

void UNK_0xf50a() // UNK_0xf50a
{
  UNK_0xee28(); // UNK_0xee28
  _ask_QUIT(); // ?QUIT
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xf512: WORD 'MAPS' codep=0x224c parp=0xf51b
// ================================================
// entry

void MAPS() // MAPS
{
  Push(pp_FQUIT); // FQUIT
  OFF(); // OFF
  UNK_0xf4f4(); // UNK_0xf4f4
  Push(pp_ESC_dash_EN); // ESC-EN
  OFF_2(); // OFF_2
  UNK_0xf133(); // UNK_0xf133
  UNK_0xf50a(); // UNK_0xf50a
  if (Pop() == 0) goto label1;
  UNK_0xf187(); // UNK_0xf187
  UNK_0xf50a(); // UNK_0xf50a
  if (Pop() == 0) goto label1;
  UNK_0xf133(); // UNK_0xf133
  UNK_0xee28(); // UNK_0xee28

  label1:
  UNK_0xf1cf(); // UNK_0xf1cf
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
}


// ================================================
// 0xf541: WORD '.STORM' codep=0x224c parp=0xf54c
// ================================================
// entry

void _dot_STORM() // .STORM
{
  UNK_0xf485(); // UNK_0xf485
  UNK_0xf438(); // UNK_0xf438
  _ro__dot_STORM_rc_(); // (.STORM)
}

// 0xf554: db 0x4d 0x41 0x50 0x53 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x00 'MAPS-VOC____ '
  