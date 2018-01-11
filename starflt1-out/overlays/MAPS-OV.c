// ====== OVERLAY 'MAPS-OV' ======
// store offset = 0xeca0
// overlay size   = 0x08c0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


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
//           .ROCK  codep:0x224c parp:0xf322 size:0x0018 C-string:'DrawROCK'
//         .LIQUID  codep:0x224c parp:0xf346 size:0x0016 C-string:'DrawLIQUID'
//        .CRYSTAL  codep:0x224c parp:0xf369 size:0x000a C-string:'DrawCRYSTAL'
//            .ICE  codep:0x224c parp:0xf37c size:0x001a C-string:'DrawICE'
//         .MOLTEN  codep:0x224c parp:0xf3a2 size:0x0010 C-string:'DrawMOLTEN'
//         .CARPET  codep:0x224c parp:0xf3be size:0x0031 C-string:'DrawCARPET'
//           /SURF  codep:0x4a4f parp:0xf3f9 size:0x0018 C-string:'_slash_SURF'
//        .SURFACE  codep:0x224c parp:0xf41e size:0x0010 C-string:'DrawSURFACE'
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
//          .STORM  codep:0x224c parp:0xf54c size:0x0000 C-string:'DrawSTORM'

// =================================
// ============= EXTERN ============
// =================================
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
extern const unsigned short int pp_IsWIN; // ?WIN
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
extern Color BLACK; // BLACK
extern Color LT_dash_BLUE; // LT-BLUE
extern Color WHITE; // WHITE
extern IFieldType PHR_dash_CNT; // PHR-CNT
extern IFieldType PHRASE_dash_MEM; // PHRASE-MEM
void DrawR(); // .R
void SPACE(); // SPACE
void SPACES(); // SPACES
void NOP(); // NOP
void UNRAVEL(); // UNRAVEL
void SQRT(); // SQRT
void SETLARRAY(); // SETLARRAY
void SETREGION(); // SETREGION
void Store_3(); // !_3
void _plus__ex_(); // +!
void StoreD(); // D!
void OFF(); // OFF
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void StoreCOLOR(); // !COLOR
void VCLIPSET(); // VCLIPSET
void DCLIPSET(); // DCLIPSET
void _gt_MAINVIEW(); // >MAINVIEW
void DARK(); // DARK
void BLT(); // BLT
void CELLCOLOR(); // CELLCOLOR
void DrawREGION_plus_(); // .REGION+
void StoreVISWINDOW(); // !VISWINDOW
void _gt_1ICONFONT(); // >1ICONFONT
void _gt_2ICONF(); // >2ICONF
void _gt_3ICONF(); // >3ICONF
void DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
void POS_dot_(); // POS.
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void _gt_TVCT(); // >TVCT
void WINDOW(); // WINDOW
void GCR(); // GCR
void _i_KEY(); // 'KEY
void IsQUIT(); // ?QUIT
void IsNEW_dash_HO(); // ?NEW-HO
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
void GetEXECUTE(); // @EXECUTE
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


const unsigned short int cc_UNK_0xed02 = 0xed02; // UNK_0xed02


// 0xecb2: db 0x8c 0x00 0x14 0x22 0x20 0x00 '   "  '

// ================================================
// 0xecb8: WORD 'UNK_0xecba' codep=0x73ea parp=0xecba
// ================================================
LoadDataType UNK_0xecba = {PLANETIDX, 0x01, 0x01, 0x16, 0x658f};
// 0xecc0: db 0xea 0x73 0x20 0x04 0x01 0x16 0x8f 0x65 0xea 0x73 0x20 0x11 0x02 0x16 0x8f 0x65 0xea 0x73 0x20 0x13 0x01 0x16 0x8f 0x65 0xea 0x73 0x20 0x0c 0x01 0x16 0x8f 0x65 ' s     e s     e s     e s     e'

// ================================================
// 0xece0: WORD 'UNK_0xece2' codep=0x73ea parp=0xece2
// ================================================
LoadDataType UNK_0xece2 = {PLANETIDX, 0x0f, 0x01, 0x16, 0x658f};

// ================================================
// 0xece8: WORD 'UNK_0xecea' codep=0x73ea parp=0xecea
// ================================================
LoadDataType UNK_0xecea = {PLANETIDX, 0x10, 0x01, 0x16, 0x658f};

// ================================================
// 0xecf0: WORD 'UNK_0xecf2' codep=0x73ea parp=0xecf2
// ================================================
LoadDataType UNK_0xecf2 = {PLANETIDX, 0x02, 0x02, 0x16, 0x658f};
// 0xecf8: db 0xea 0x73 0x43 0x07 0x08 0x1c 0xcd 0x69 ' sC    i'

// ================================================
// 0xed00: WORD 'UNK_0xed02' codep=0x2214 parp=0xed02
// ================================================
// 0xed02: dw 0x0082

// ================================================
// 0xed04: WORD 'UNK_0xed06' codep=0x73ea parp=0xed06
// ================================================
LoadDataType UNK_0xed06 = {COMPOUNDSIDX, 0x00, 0x03, 0x07, 0x93a8};

// ================================================
// 0xed0c: WORD 'UNK_0xed0e' codep=0x224c parp=0xed0e
// ================================================

void UNK_0xed0e() // UNK_0xed0e
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(UNK_0xecf2); // from 'PLANET'
  Push(Read16(Pop())); //  @
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  Push(0x0320);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Pop() - 0x0320); //  0x0320 -
    Push(0);
    SQRT(); // SQRT
    Push(Pop() * 0x000a + 0x0320); //  0x000a * 0x0320 +
  }
  Push(0x0064);
  _slash_MOD(); // /MOD
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0);
    DrawR(); // .R
  }
  PRINT(".", 1); // (.")
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0);
  DrawR(); // .R
  Push(0);
  DrawR(); // .R
}


// ================================================
// 0xed5e: WORD 'UNK_0xed60' codep=0x224c parp=0xed60
// ================================================

void UNK_0xed60() // UNK_0xed60
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(UNK_0xece2); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(UNK_0xecea); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + 1); //  1+
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed76: WORD 'UNK_0xed78' codep=0x224c parp=0xed78
// ================================================

void UNK_0xed78() // UNK_0xed78
{
  Push(Read16(pp_YABS)); // YABS @
  Push(Read16(regsp)); // DUP
  Push(0x01e0);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0x03c0);
    SWAP(); // SWAP
    _dash_(); // -
  }
  Push(0x01e0);
  UNK_0xed60(); // UNK_0xed60
  ROT(); // ROT
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop() + 1); //  1+
  ROT(); // ROT
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xeda8: WORD 'UNK_0xedaa' codep=0x73ea parp=0xedaa
// ================================================
LoadDataType UNK_0xedaa = {REGIONSIDX, 0x04, 0x03, 0x1c, 0x69cd};

// ================================================
// 0xedb0: WORD 'UNK_0xedb2' codep=0x224c parp=0xedb2
// ================================================

void UNK_0xedb2() // UNK_0xedb2
{
  UNK_0xed78(); // UNK_0xed78
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  Push(0x0043);
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  LoadData(UNK_0xedaa); // from 'REGIONS'
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+PHR_dash_CNT.offset)&0xFF); // PHR-CNT<IFIELD> C@
  Push(0x63ef+PHRASE_dash_MEM.offset); // PHRASE-MEM<IFIELD>
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
  IsNEW_dash_HO(); // ?NEW-HO
  if (Pop() != 0)
  {
    TIME(); // TIME
    _2_at_(); // 2@
    Push(pp_LAST_dash_UPDATE); // LAST-UPDATE
    StoreD(); // D!
    Push(1);
    Push(pp_STAR_dash_HR); // STAR-HR
    _plus__ex_(); // +!
    Push(Read16(pp_STAR_dash_HR)); // STAR-HR @
    Push(Read16(pp_STAR_dash_HR)==0x0018?1:0); // STAR-HR @ 0x0018 =
    if (Pop() != 0)
    {
      Push(pp_STAR_dash_HR); // STAR-HR
      OFF(); // OFF
      Push(1);
      Push(pp_STARDATE); // STARDATE
      _plus__ex_(); // +!
    }
  }
  Push(Read16(pp_STARDATE)); // STARDATE @
  Push((Read16(pp_STARDATE)==Read16(pp__ro_FLARE_rc_)?1:0) & (Read16(pp_IsWIN)==0?1:0)); // STARDATE @ (FLARE) @ = ?WIN @ 0= AND
  if (Pop() == 0) return;
  Push(pp__i_FLARE); // 'FLARE
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xee26: WORD 'UNK_0xee28' codep=0x224c parp=0xee28
// ================================================

void UNK_0xee28() // UNK_0xee28
{
  do
  {
    UNK_0xedde(); // UNK_0xedde
    Push(pp__i_SIMULA); // 'SIMULA
    GetEXECUTE(); // @EXECUTE
    _i_KEY(); // 'KEY
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  } while(Pop() == 0);
  _ro_XYSCAN(); // (XYSCAN case
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xee3c: WORD 'UNK_0xee3e' codep=0x224c parp=0xee3e params=0 returns=0
// ================================================

void UNK_0xee3e() // UNK_0xee3e
{
  Push(0x0040);
  Push(3);
  Push(7);
  Push(0x0026);
  WINDOW(); // WINDOW
  Push(-1);
  Push(pp_WBOTTOM); // WBOTTOM
  _st__plus__ex__gt_(); // <+!>
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xee56: WORD 'UNK_0xee58' codep=0x224c parp=0xee58
// ================================================

void UNK_0xee58() // UNK_0xee58
{
  Push(Read16(pp_COLOR)); // COLOR @
  Push(Read16(pp_WTOP)); // WTOP @
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WBOTTOM) - 1); // WBOTTOM @ 1-
  Push(Read16(pp_WRIGHT) + 1); // WRIGHT @ 1+
  SetColor(BLACK);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WTOP) - 1); // WTOP @ 1-
  POS_dot_(); // POS.
}


// ================================================
// 0xee84: WORD 'UNK_0xee86' codep=0x224c parp=0xee86 params=2 returns=0
// ================================================

void UNK_0xee86() // UNK_0xee86
{
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+PHRASE_dash_MEM.offset); // PHRASE-MEM<IFIELD>
  Push(Read16(0x63ef+PHR_dash_CNT.offset)&0xFF); // PHR-CNT<IFIELD> C@
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee94: WORD 'UNK_0xee96' codep=0x224c parp=0xee96 params=2 returns=2
// ================================================

void UNK_0xee96() // UNK_0xee96
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xeea2: WORD 'UNK_0xeea4' codep=0x224c parp=0xeea4 params=0 returns=0
// ================================================

void UNK_0xeea4() // UNK_0xeea4
{
  SetColor(BLACK);
  StoreCOLOR(); // !COLOR
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
// 0xef18: WORD 'UNK_0xef1a' codep=0x224c parp=0xef1a params=0 returns=2
// ================================================

void UNK_0xef1a() // UNK_0xef1a
{
  Push(Read16(pp_XVIS) - Read16(pp_XCON)); // XVIS @ XCON @ -
  Push(Read16(pp_YVIS) - Read16(pp_YCON)); // YVIS @ YCON @ -
}


// ================================================
// 0xef30: WORD '2X2CONTOUR' codep=0x224c parp=0xef3f params=0 returns=2
// ================================================
// entry

void _2X2CONTOUR() // 2X2CONTOUR
{
  Push(0x6ac1); // probable 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  Push(0x989a); // probable '.2X2CELL'
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push(1);
  Push(Read16(regsp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  UNK_0xef1a(); // UNK_0xef1a
  OVER(); // OVER
  Push(Pop() + 0x0022); //  0x0022 +
  OVER(); // OVER
  Push(Pop() + 0x003a); //  0x003a +
  SETREGION(); // SETREGION
  DrawREGION_plus_(); // .REGION+
  UNK_0xeea4(); // UNK_0xeea4
}


// ================================================
// 0xef73: WORD '4X4CONTOUR' codep=0x224c parp=0xef82 params=0 returns=2
// ================================================
// entry

void _4X4CONTOUR() // 4X4CONTOUR
{
  Push(0x6ac1); // probable 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  Push(0x98be); // probable '.4X4CELL'
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push(2);
  Push(Read16(regsp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  UNK_0xef1a(); // UNK_0xef1a
  Push(Pop() + 0x000f); //  0x000f +
  SWAP(); // SWAP
  Push(Pop() + 9); //  9 +
  SWAP(); // SWAP
  OVER(); // OVER
  Push(Pop() + 0x0010); //  0x0010 +
  OVER(); // OVER
  Push(Pop() + 0x001c); //  0x001c +
  SETREGION(); // SETREGION
  DrawREGION_plus_(); // .REGION+
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
  unsigned short int i, imax, j, jmax, a, b, c, d;
  Push(0x000e);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(8);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(Read16(pp_XLL) + j); // XLL @ I +
      Push(Read16(pp_YLL) + i); // YLL @ J +
      _2DUP(); // 2DUP
      CELLCOLOR(); // CELLCOLOR
      Push(Read16(pp_COLOR)); // COLOR @
      a = Pop(); // >R
      _2DUP(); // 2DUP
      Push(Pop() + 1); //  1+
      SWAP(); // SWAP
      Push(Pop() + 1); //  1+
      SWAP(); // SWAP
      CELLCOLOR(); // CELLCOLOR
      Push(Read16(pp_COLOR)); // COLOR @
      Push(!(Read16(pp_COLOR)==a?1:0)); // COLOR @ I = NOT
      if (Pop() != 0)
      {
        Push(!a); // R> NOT
        b = Pop(); // >R
      }
      _2DUP(); // 2DUP
      Push(Pop() + 1); //  1+
      CELLCOLOR(); // CELLCOLOR
      Push(Read16(pp_COLOR)); // COLOR @
      c = Pop(); // >R
      _2DUP(); // 2DUP
      SWAP(); // SWAP
      Push(Pop() + 1); //  1+
      SWAP(); // SWAP
      CELLCOLOR(); // CELLCOLOR
      Push(Read16(pp_COLOR)); // COLOR @
      Push(!(Read16(pp_COLOR)==c?1:0)); // COLOR @ I = NOT
      if (Pop() != 0)
      {
        Push(!c); // R> NOT
        d = Pop(); // >R
      }
      Push(d | b); // I I' OR
      if (Pop() != 0)
      {
        Push(d); // I
        Push(!(d==b?1:0)); // I I' = NOT
        if (Pop() != 0)
        {
          Push(d); // I
          _0_gt_(); // 0>
          if (Pop() != 0)
          {
            Push(d); // I
          } else
          {
            Push(b); // I'
          }
          Push(pp_COLOR); // COLOR
          Store_3(); // !_3
          _2DUP(); // 2DUP
          Push(3);
          Push(3);
          BUFFERXY(); // BUFFERXY
          CBLTP(); // CBLTP
          BLT(); // BLT
        }
      }
      Push(d); // R>
      Push(b); // R>
      Pop(); Pop(); // 2DROP
      Pop(); Pop(); // 2DROP
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

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
  Push(Pop() + 0x0016); //  0x0016 +
  SWAP(); // SWAP
  Push(Pop() + 0x000d); //  0x000d +
  SWAP(); // SWAP
  OVER(); // OVER
  Push(Pop() + 8); //  8 +
  OVER(); // OVER
  Push(Pop() + 0x000e); //  0x000e +
  SETREGION(); // SETREGION
  DrawREGION_plus_(); // .REGION+
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
  Push(4);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(Read16(pp__i_4X4)); // '4X4 @
  Push(pp__i__dot_BACKG); // '.BACKG
  _st__ex__gt_(); // <!>
  Push(Read16(pp_XVIS) + 0x000a); // XVIS @ 0x000a +
  Push(Read16(pp_YVIS) + 0x000f); // YVIS @ 0x000f +
  Push(Read16(pp_XVIS) + 0x001a); // XVIS @ 0x001a +
  Push(Read16(pp_YVIS) + 0x002b); // YVIS @ 0x002b +
  StoreVISWINDOW(); // !VISWINDOW
  _4X4CONTOUR(); // 4X4CONTOUR
  DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
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
  Push(Read16(pp__i_2X2)); // '2X2 @
  Push(pp__i__dot_BACKG); // '.BACKG
  Store_3(); // !_3
  Push(2);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(Read16(pp_XVIS)); // XVIS @
  Push(Read16(pp_YVIS)); // YVIS @
  Push(Read16(pp_XVIS) + 0x0022); // XVIS @ 0x0022 +
  Push(Read16(pp_YVIS) + 0x003a); // YVIS @ 0x003a +
  StoreVISWINDOW(); // !VISWINDOW
  _2X2CONTOUR(); // 2X2CONTOUR
  UNK_0xeea4(); // UNK_0xeea4
  DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
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
  Push(Read16(pp__i_8X8)); // '8X8 @
  Push(pp__i__dot_BACKG); // '.BACKG
  _st__ex__gt_(); // <!>
  Push(8);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(Read16(pp_XVIS) + 0x000e); // XVIS @ 0x000e +
  Push(Read16(pp_YVIS) + 0x0016); // YVIS @ 0x0016 +
  Push(Read16(pp_XVIS) + 0x0016); // XVIS @ 0x0016 +
  Push(Read16(pp_YVIS) + 0x0029); // YVIS @ 0x0029 +
  StoreVISWINDOW(); // !VISWINDOW
  _8X8CONTOUR(); // 8X8CONTOUR
  DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
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
  Push(Read16(pp_ATMO)==0?1:0); // ATMO @ 0=
  if (Pop() != 0)
  {
    UNK_0xf21f(); // UNK_0xf21f
  } else
  {
    Push(Read16(pp__n_STORM)); // #STORM @
    WPHRASE(); // WPHRASE case
  }
  UNK_0xee86(); // UNK_0xee86
}


// ================================================
// 0xf318: WORD '.ROCK' codep=0x224c parp=0xf322 params=0 returns=0
// ================================================

void DrawROCK() // .ROCK
{
  Push(Read16(pp_ATMO)); // ATMO @
  if (Pop() != 0)
  {
    Push(pp_P_dash_COLOR); // P-COLOR
    _1_dot_5_at_(); // 1.5@
    UNK_0xee86(); // UNK_0xee86
    SPACE(); // SPACE
  }
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  UNK_0xee86(); // UNK_0xee86
}


// ================================================
// 0xf33a: WORD '.LIQUID' codep=0x224c parp=0xf346
// ================================================

void DrawLIQUID() // .LIQUID
{
  Push(pp_O_dash_COLOR); // O-COLOR
  _1_dot_5_at_(); // 1.5@
  UNK_0xee86(); // UNK_0xee86
  SPACE(); // SPACE
  Push(0xe780); Push(0x0001);
  UNK_0xee86(); // UNK_0xee86
  GCR(); // GCR
  DrawROCK(); // .ROCK
}


// ================================================
// 0xf35c: WORD '.CRYSTAL' codep=0x224c parp=0xf369
// ================================================

void DrawCRYSTAL() // .CRYSTAL
{
  Push(0xe797); Push(0x0001);
  UNK_0xee86(); // UNK_0xee86
}


// ================================================
// 0xf373: WORD '.ICE' codep=0x224c parp=0xf37c
// ================================================

void DrawICE() // .ICE
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
// 0xf396: WORD '.MOLTEN' codep=0x224c parp=0xf3a2 params=0 returns=0
// ================================================

void DrawMOLTEN() // .MOLTEN
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
// 0xf3b2: WORD '.CARPET' codep=0x224c parp=0xf3be params=0 returns=0
// ================================================

void DrawCARPET() // .CARPET
{
  Push(pp_P_dash_CARP); // P-CARP
  _1_dot_5_at_(); // 1.5@
  UNK_0xee96(); // UNK_0xee96
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    PRINT(", ", 2); // (.")
    GCR(); // GCR
    Push(0xe97a); Push(0x0001);
    UNK_0xee86(); // UNK_0xee86
    SPACE(); // SPACE
    UNK_0xee86(); // UNK_0xee86
    SPACE(); // SPACE
    Push(0xc761); Push(0x0001);
    UNK_0xee86(); // UNK_0xee86
  }
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
    DrawCRYSTAL(); // .CRYSTAL
    break;
  case 2:
    DrawLIQUID(); // .LIQUID
    break;
  case 3:
    DrawICE(); // .ICE
    break;
  case 4:
    DrawMOLTEN(); // .MOLTEN
    break;
  case 5:
    DrawROCK(); // .ROCK
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf411: WORD '.SURFACE' codep=0x224c parp=0xf41e
// ================================================

void DrawSURFACE() // .SURFACE
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(UNK_0xecba); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  _slash_SURF(); // /SURF case
  DrawCARPET(); // .CARPET
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf42e: WORD 'UNK_0xf430' codep=0x224c parp=0xf430 params=0 returns=0
// ================================================

void UNK_0xf430() // UNK_0xf430
{
  SetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf436: WORD 'UNK_0xf438' codep=0x224c parp=0xf438 params=0 returns=0
// ================================================

void UNK_0xf438() // UNK_0xf438
{
  SetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf43e: WORD 'UNK_0xf440' codep=0x224c parp=0xf440
// ================================================

void UNK_0xf440() // UNK_0xf440
{
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  Push(Read16(cc_UNK_0xed02)); // UNK_0xed02
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  LoadData(UNK_0xed06); // from 'COMPOUNDS'
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
  Push(Read16(pp_ATMO)); // ATMO @
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
  Push(Read16(pp_HYDRO)); // HYDRO @
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
  DrawSURFACE(); // .SURFACE
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WTOP) - 0x001e); // WTOP @ 0x001e -
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
  Push(6);
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
  IsQUIT(); // ?QUIT
  Push(Pop()==0?1:0); //  0=
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
  if (Pop() != 0)
  {
    UNK_0xf187(); // UNK_0xf187
    UNK_0xf50a(); // UNK_0xf50a
    if (Pop() != 0)
    {
      UNK_0xf133(); // UNK_0xf133
      UNK_0xee28(); // UNK_0xee28
    }
  }
  UNK_0xf1cf(); // UNK_0xf1cf
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
}


// ================================================
// 0xf541: WORD '.STORM' codep=0x224c parp=0xf54c
// ================================================
// entry

void DrawSTORM() // .STORM
{
  UNK_0xf485(); // UNK_0xf485
  UNK_0xf438(); // UNK_0xf438
  _ro__dot_STORM_rc_(); // (.STORM)
}

// 0xf554: db 0x4d 0x41 0x50 0x53 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x00 'MAPS-VOC____ '

