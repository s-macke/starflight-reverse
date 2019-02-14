// ====== OVERLAY 'MAPS-OV' ======
// store offset = 0xeca0
// overlay size   = 0x08c0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WECB6  codep:0x2214 wordp:0xecb6 size:0x0002 C-string:'WECB6'
//           WECBA  codep:0x73ea wordp:0xecba size:0x0006 C-string:'WECBA'
//           WECC2  codep:0x73ea wordp:0xecc2 size:0x0006 C-string:'WECC2'
//           WECCA  codep:0x73ea wordp:0xecca size:0x0006 C-string:'WECCA'
//           WECD2  codep:0x73ea wordp:0xecd2 size:0x0006 C-string:'WECD2'
//           WECDA  codep:0x73ea wordp:0xecda size:0x0006 C-string:'WECDA'
//           WECE2  codep:0x73ea wordp:0xece2 size:0x0006 C-string:'WECE2'
//           WECEA  codep:0x73ea wordp:0xecea size:0x0006 C-string:'WECEA'
//           WECF2  codep:0x73ea wordp:0xecf2 size:0x0006 C-string:'WECF2'
//           WECFA  codep:0x73ea wordp:0xecfa size:0x0006 C-string:'WECFA'
//           WED02  codep:0x2214 wordp:0xed02 size:0x0002 C-string:'WED02'
//           WED06  codep:0x73ea wordp:0xed06 size:0x0006 C-string:'WED06'
//           WED0E  codep:0x224c wordp:0xed0e size:0x0050 C-string:'WED0E'
//           WED60  codep:0x224c wordp:0xed60 size:0x0016 C-string:'WED60'
//           WED78  codep:0x224c wordp:0xed78 size:0x0030 C-string:'WED78'
//           WEDAA  codep:0x73ea wordp:0xedaa size:0x0006 C-string:'WEDAA'
//           WEDB2  codep:0x224c wordp:0xedb2 size:0x002a C-string:'WEDB2'
//           WEDDE  codep:0x224c wordp:0xedde size:0x0048 C-string:'WEDDE'
//           WEE28  codep:0x224c wordp:0xee28 size:0x0014 C-string:'WEE28'
//           WEE3E  codep:0x224c wordp:0xee3e size:0x0018 C-string:'WEE3E'
//           WEE58  codep:0x224c wordp:0xee58 size:0x002c C-string:'WEE58'
//           WEE86  codep:0x224c wordp:0xee86 size:0x000e C-string:'WEE86'
//           WEE96  codep:0x224c wordp:0xee96 size:0x000c C-string:'WEE96'
//           WEEA4  codep:0x224c wordp:0xeea4 size:0x0074 C-string:'WEEA4'
//           WEF1A  codep:0x224c wordp:0xef1a size:0x0016 C-string:'WEF1A'
//      2X2CONTOUR  codep:0x224c wordp:0xef3f size:0x0034 C-string:'_2X2CONTOUR'
//      4X4CONTOUR  codep:0x224c wordp:0xef82 size:0x0040 C-string:'_4X4CONTOUR'
//            CBLT  codep:0x1d29 wordp:0xefcb size:0x0004 C-string:'CBLT'
//           CBLTP  codep:0xefd9 wordp:0xefd9 size:0x002c C-string:'CBLTP'
//           WF007  codep:0x224c wordp:0xf007 size:0x00ba C-string:'WF007'
//      8X8CONTOUR  codep:0x224c wordp:0xf0d0 size:0x0040 C-string:'_8X8CONTOUR'
//            '4X4  codep:0x1d29 wordp:0xf119 size:0x0002 C-string:'_i_4X4'
//            '2X2  codep:0x1d29 wordp:0xf124 size:0x0002 C-string:'_i_2X2'
//            '8X8  codep:0x1d29 wordp:0xf12f size:0x0002 C-string:'_i_8X8'
//           WF133  codep:0x224c wordp:0xf133 size:0x0052 C-string:'WF133'
//           WF187  codep:0x224c wordp:0xf187 size:0x0046 C-string:'WF187'
//           WF1CF  codep:0x224c wordp:0xf1cf size:0x004e C-string:'WF1CF'
//           WF21F  codep:0x224c wordp:0xf21f size:0x0008 C-string:'WF21F'
//           WF229  codep:0x224c wordp:0xf229 size:0x0008 C-string:'WF229'
//           WF233  codep:0x224c wordp:0xf233 size:0x0008 C-string:'WF233'
//           WF23D  codep:0x224c wordp:0xf23d size:0x0008 C-string:'WF23D'
//           WF247  codep:0x224c wordp:0xf247 size:0x0008 C-string:'WF247'
//           WF251  codep:0x224c wordp:0xf251 size:0x0008 C-string:'WF251'
//           WF25B  codep:0x224c wordp:0xf25b size:0x0008 C-string:'WF25B'
//           WF265  codep:0x224c wordp:0xf265 size:0x0008 C-string:'WF265'
//           WF26F  codep:0x224c wordp:0xf26f size:0x0008 C-string:'WF26F'
//           WF279  codep:0x224c wordp:0xf279 size:0x0008 C-string:'WF279'
//           WF283  codep:0x224c wordp:0xf283 size:0x0008 C-string:'WF283'
//           WF28D  codep:0x224c wordp:0xf28d size:0x0008 C-string:'WF28D'
//           WF297  codep:0x224c wordp:0xf297 size:0x0008 C-string:'WF297'
//           WF2A1  codep:0x224c wordp:0xf2a1 size:0x0008 C-string:'WF2A1'
//         WPHRASE  codep:0x4a4f wordp:0xf2b5 size:0x003c C-string:'WPHRASE'
//        (.STORM)  codep:0x224c wordp:0xf2fe size:0x001a C-string:'_ro__dot_STORM_rc_'
//           .ROCK  codep:0x224c wordp:0xf322 size:0x0018 C-string:'DrawROCK'
//         .LIQUID  codep:0x224c wordp:0xf346 size:0x0016 C-string:'DrawLIQUID'
//        .CRYSTAL  codep:0x224c wordp:0xf369 size:0x000a C-string:'DrawCRYSTAL'
//            .ICE  codep:0x224c wordp:0xf37c size:0x001a C-string:'DrawICE'
//         .MOLTEN  codep:0x224c wordp:0xf3a2 size:0x0010 C-string:'DrawMOLTEN'
//         .CARPET  codep:0x224c wordp:0xf3be size:0x0031 C-string:'DrawCARPET'
//           /SURF  codep:0x4a4f wordp:0xf3f9 size:0x0018 C-string:'_slash_SURF'
//        .SURFACE  codep:0x224c wordp:0xf41e size:0x0010 C-string:'DrawSURFACE'
//           WF430  codep:0x224c wordp:0xf430 size:0x0006 C-string:'WF430'
//           WF438  codep:0x224c wordp:0xf438 size:0x0006 C-string:'WF438'
//           WF440  codep:0x224c wordp:0xf440 size:0x0012 C-string:'WF440'
//           WF454  codep:0x224c wordp:0xf454 size:0x0016 C-string:'WF454'
//           WF46C  codep:0x224c wordp:0xf46c size:0x0017 C-string:'WF46C'
//           WF485  codep:0x224c wordp:0xf485 size:0x0006 C-string:'WF485'
//           WF48D  codep:0x224c wordp:0xf48d size:0x0023 C-string:'WF48D'
//           WF4B2  codep:0x224c wordp:0xf4b2 size:0x0013 C-string:'WF4B2'
//           WF4C7  codep:0x224c wordp:0xf4c7 size:0x002b C-string:'WF4C7'
//           WF4F4  codep:0x224c wordp:0xf4f4 size:0x0014 C-string:'WF4F4'
//           WF50A  codep:0x224c wordp:0xf50a size:0x0008 C-string:'WF50A'
//            MAPS  codep:0x224c wordp:0xf51b size:0x0026 C-string:'MAPS'
//          .STORM  codep:0x224c wordp:0xf54c size:0x0000 C-string:'DrawSTORM'

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
extern const unsigned short int pp__ro_PLANET_rc_; // (PLANET)
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
void _plus__ex__2(); // +!_2
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
void _gt_3ICONFONT(); // >3ICONFONT
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
void _ro_XYSCAN_rc_(); // (XYSCAN)
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


const unsigned short int cc_WECB6 = 0xecb6; // WECB6
const unsigned short int cc_WED02 = 0xed02; // WED02


// 0xecb2: db 0x8c 0x00 '  '

// ================================================
// 0xecb4: WORD 'WECB6' codep=0x2214 wordp=0xecb6
// ================================================
// orphan
// 0xecb6: dw 0x0020

// ================================================
// 0xecb8: WORD 'WECBA' codep=0x73ea wordp=0xecba
// ================================================
LoadDataType WECBA = {PLANETIDX, 0x01, 0x01, 0x16, 0x658f};

// ================================================
// 0xecc0: WORD 'WECC2' codep=0x73ea wordp=0xecc2
// ================================================
// orphan
LoadDataType WECC2 = {PLANETIDX, 0x04, 0x01, 0x16, 0x658f};

// ================================================
// 0xecc8: WORD 'WECCA' codep=0x73ea wordp=0xecca
// ================================================
// orphan
LoadDataType WECCA = {PLANETIDX, 0x11, 0x02, 0x16, 0x658f};

// ================================================
// 0xecd0: WORD 'WECD2' codep=0x73ea wordp=0xecd2
// ================================================
// orphan
LoadDataType WECD2 = {PLANETIDX, 0x13, 0x01, 0x16, 0x658f};

// ================================================
// 0xecd8: WORD 'WECDA' codep=0x73ea wordp=0xecda
// ================================================
// orphan
LoadDataType WECDA = {PLANETIDX, 0x0c, 0x01, 0x16, 0x658f};

// ================================================
// 0xece0: WORD 'WECE2' codep=0x73ea wordp=0xece2
// ================================================
LoadDataType WECE2 = {PLANETIDX, 0x0f, 0x01, 0x16, 0x658f};

// ================================================
// 0xece8: WORD 'WECEA' codep=0x73ea wordp=0xecea
// ================================================
LoadDataType WECEA = {PLANETIDX, 0x10, 0x01, 0x16, 0x658f};

// ================================================
// 0xecf0: WORD 'WECF2' codep=0x73ea wordp=0xecf2
// ================================================
LoadDataType WECF2 = {PLANETIDX, 0x02, 0x02, 0x16, 0x658f};

// ================================================
// 0xecf8: WORD 'WECFA' codep=0x73ea wordp=0xecfa
// ================================================
// orphan
LoadDataType WECFA = {REGIONSIDX, 0x07, 0x08, 0x1c, 0x69cd};

// ================================================
// 0xed00: WORD 'WED02' codep=0x2214 wordp=0xed02
// ================================================
// 0xed02: dw 0x0082

// ================================================
// 0xed04: WORD 'WED06' codep=0x73ea wordp=0xed06
// ================================================
LoadDataType WED06 = {COMPOUNDSIDX, 0x00, 0x03, 0x07, 0x93a8};

// ================================================
// 0xed0c: WORD 'WED0E' codep=0x224c wordp=0xed0e
// ================================================

void WED0E() // WED0E
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WECF2); // from 'PLANET'
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
// 0xed5e: WORD 'WED60' codep=0x224c wordp=0xed60
// ================================================

void WED60() // WED60
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WECE2); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(WECEA); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + 1); //  1+
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed76: WORD 'WED78' codep=0x224c wordp=0xed78
// ================================================

void WED78() // WED78
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
  WED60(); // WED60
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
// 0xeda8: WORD 'WEDAA' codep=0x73ea wordp=0xedaa
// ================================================
LoadDataType WEDAA = {REGIONSIDX, 0x04, 0x03, 0x1c, 0x69cd};

// ================================================
// 0xedb0: WORD 'WEDB2' codep=0x224c wordp=0xedb2
// ================================================

void WEDB2() // WEDB2
{
  WED78(); // WED78
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  Push(0x0043);
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  LoadData(WEDAA); // from 'REGIONS'
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
// 0xeddc: WORD 'WEDDE' codep=0x224c wordp=0xedde params=0 returns=0
// ================================================

void WEDDE() // WEDDE
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
    _plus__ex__2(); // +!_2
    Push(Read16(pp_STAR_dash_HR)==0x0018?1:0); // STAR-HR @ 0x0018 =
    if (Pop() != 0)
    {
      Push(pp_STAR_dash_HR); // STAR-HR
      OFF(); // OFF
      Push(1);
      Push(pp_STARDATE); // STARDATE
      _plus__ex__2(); // +!_2
    }
  }
  Push((Read16(pp_STARDATE)==Read16(pp__ro_FLARE_rc_)?1:0) & (Read16(pp_IsWIN)==0?1:0)); // STARDATE @ (FLARE) @ = ?WIN @ 0= AND
  if (Pop() == 0) return;
  Push(pp__i_FLARE); // 'FLARE
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xee26: WORD 'WEE28' codep=0x224c wordp=0xee28
// ================================================

void WEE28() // WEE28
{
  do
  {
    WEDDE(); // WEDDE
    Push(pp__i_SIMULA); // 'SIMULA
    GetEXECUTE(); // @EXECUTE
    _i_KEY(); // 'KEY
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  } while(Pop() == 0);
  _ro_XYSCAN_rc_(); // (XYSCAN) case
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xee3c: WORD 'WEE3E' codep=0x224c wordp=0xee3e params=0 returns=0
// ================================================

void WEE3E() // WEE3E
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
// 0xee56: WORD 'WEE58' codep=0x224c wordp=0xee58 params=0 returns=0
// ================================================

void WEE58() // WEE58
{
  Push(Read16(pp_COLOR)); // COLOR @
  Push(Read16(pp_WTOP)); // WTOP @
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WBOTTOM) - 1); // WBOTTOM @ 1-
  Push(Read16(pp_WRIGHT) + 1); // WRIGHT @ 1+
  GetColor(BLACK);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WTOP) - 1); // WTOP @ 1-
  POS_dot_(); // POS.
}


// ================================================
// 0xee84: WORD 'WEE86' codep=0x224c wordp=0xee86 params=2 returns=0
// ================================================

void WEE86() // WEE86
{
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+PHRASE_dash_MEM.offset); // PHRASE-MEM<IFIELD>
  Push(Read16(0x63ef+PHR_dash_CNT.offset)&0xFF); // PHR-CNT<IFIELD> C@
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee94: WORD 'WEE96' codep=0x224c wordp=0xee96 params=2 returns=2
// ================================================

void WEE96() // WEE96
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xeea2: WORD 'WEEA4' codep=0x224c wordp=0xeea4 params=0 returns=0
// ================================================

void WEEA4() // WEEA4
{
  GetColor(BLACK);
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
// 0xef18: WORD 'WEF1A' codep=0x224c wordp=0xef1a params=0 returns=2
// ================================================

void WEF1A() // WEF1A
{
  Push(Read16(pp_XVIS) - Read16(pp_XCON)); // XVIS @ XCON @ -
  Push(Read16(pp_YVIS) - Read16(pp_YCON)); // YVIS @ YCON @ -
}


// ================================================
// 0xef30: WORD '2X2CONTOUR' codep=0x224c wordp=0xef3f
// ================================================
// entry

void _2X2CONTOUR() // 2X2CONTOUR
{
  Push(0x6ac1); // 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  Push(0x989a); // '.2X2CELL'
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push(1);
  Push(Read16(regsp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  WEF1A(); // WEF1A
  OVER(); // OVER
  Push(Pop() + 0x0022); //  0x0022 +
  OVER(); // OVER
  Push(Pop() + 0x003a); //  0x003a +
  SETREGION(); // SETREGION
  DrawREGION_plus_(); // .REGION+
  WEEA4(); // WEEA4
}


// ================================================
// 0xef73: WORD '4X4CONTOUR' codep=0x224c wordp=0xef82
// ================================================
// entry

void _4X4CONTOUR() // 4X4CONTOUR
{
  Push(0x6ac1); // 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  Push(0x98be); // '.4X4CELL'
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push(2);
  Push(Read16(regsp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  WEF1A(); // WEF1A
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
// 0xefc2: WORD 'CBLT' codep=0x1d29 wordp=0xefcb
// ================================================
// 0xefcb: db 0xff 0x66 0x00 0x66 ' f f'

// ================================================
// 0xefcf: WORD 'CBLTP' codep=0xefd9 wordp=0xefd9
// ================================================
// 0xefd9: pop    ax
// 0xefda: add    ax,0003
// 0xefdd: mov    [5863],ax // YBLT
// 0xefe1: pop    ax
// 0xefe2: add    ax,0006
// 0xefe5: mov    [586E],ax // XBLT
// 0xefe9: mov    word ptr [5892],0004 // WBLT
// 0xefef: mov    word ptr [5887],0006 // LBLT
// 0xeff5: mov    word ptr [589D],EFCB // ABLT
// 0xeffb: push   ds
// 0xeffc: pop    word ptr [58AA] // BLTSEG
// 0xf000: lodsw
// 0xf001: mov    bx,ax
// 0xf003: jmp    word ptr [bx]

// ================================================
// 0xf005: WORD 'WF007' codep=0x224c wordp=0xf007
// ================================================

void WF007() // WF007
{
  unsigned short int i, imax, j, jmax, a, b, c, d;

  i = 0;
  imax = 0x000e;
  do // (DO)
  {

    j = 0;
    jmax = 8;
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
      Push(!(Read16(pp_COLOR)==c?1:0)); // COLOR @ I = NOT
      if (Pop() != 0)
      {
        Push(!c); // R> NOT
        d = Pop(); // >R
      }
      Push(d | b); // I I' OR
      if (Pop() != 0)
      {
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
// 0xf0c1: WORD '8X8CONTOUR' codep=0x224c wordp=0xf0d0
// ================================================
// entry

void _8X8CONTOUR() // 8X8CONTOUR
{
  Push(0x6ac1); // 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  Push(0x98dc); // '.8X8CELL'
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push2Words("0.");
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  WEF1A(); // WEF1A
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
  WF007(); // WF007
}


// ================================================
// 0xf110: WORD ''4X4' codep=0x1d29 wordp=0xf119
// ================================================
// 0xf119: db 0x1a 0xce '  '

// ================================================
// 0xf11b: WORD ''2X2' codep=0x1d29 wordp=0xf124
// ================================================
// 0xf124: db 0xf8 0xcd '  '

// ================================================
// 0xf126: WORD ''8X8' codep=0x1d29 wordp=0xf12f
// ================================================
// 0xf12f: db 0x3c 0xce '< '

// ================================================
// 0xf131: WORD 'WF133' codep=0x224c wordp=0xf133
// ================================================

void WF133() // WF133
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
// 0xf185: WORD 'WF187' codep=0x224c wordp=0xf187
// ================================================

void WF187() // WF187
{
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  _gt_MAINVIEW(); // >MAINVIEW
  DARK(); // DARK
  _gt_3ICONFONT(); // >3ICONFONT
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
  WEEA4(); // WEEA4
  DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
}


// ================================================
// 0xf1cd: WORD 'WF1CF' codep=0x224c wordp=0xf1cf
// ================================================

void WF1CF() // WF1CF
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
// 0xf21d: WORD 'WF21F' codep=0x224c wordp=0xf21f params=0 returns=2
// ================================================

void WF21F() // WF21F
{
  Push(0xe63c); Push(0x0001); // 'BLACK AND STAR-FILLED.'
}


// ================================================
// 0xf227: WORD 'WF229' codep=0x224c wordp=0xf229 params=0 returns=2
// ================================================

void WF229() // WF229
{
  Push(0xeafa); Push(0x0001); // 'IT IS HAZY.'
}


// ================================================
// 0xf231: WORD 'WF233' codep=0x224c wordp=0xf233 params=0 returns=2
// ================================================

void WF233() // WF233
{
  Push(0xeb2b); Push(0x0001); // 'IT IS CLEAR.'
}


// ================================================
// 0xf23b: WORD 'WF23D' codep=0x224c wordp=0xf23d params=0 returns=2
// ================================================

void WF23D() // WF23D
{
  Push(0xe9ad); Push(0x0001); // 'IT IS OVERCAST.'
}


// ================================================
// 0xf245: WORD 'WF247' codep=0x224c wordp=0xf247 params=0 returns=2
// ================================================

void WF247() // WF247
{
  Push(0xe9c8); Push(0x0001); // 'IT IS SNOWING LIGHTLY.'
}


// ================================================
// 0xf24f: WORD 'WF251' codep=0x224c wordp=0xf251 params=0 returns=2
// ================================================

void WF251() // WF251
{
  Push(0xe9ea); Push(0x0001); // 'IT IS MISTY.'
}


// ================================================
// 0xf259: WORD 'WF25B' codep=0x224c wordp=0xf25b params=0 returns=2
// ================================================

void WF25B() // WF25B
{
  Push(0xea02); Push(0x0001); // 'YOU ARE IN AN ELECTRICAL STORM.'
}


// ================================================
// 0xf263: WORD 'WF265' codep=0x224c wordp=0xf265 params=0 returns=2
// ================================================

void WF265() // WF265
{
  Push(0xea98); Push(0x0001); // 'YOU ARE IN A THUNDER STORM.'
}


// ================================================
// 0xf26d: WORD 'WF26F' codep=0x224c wordp=0xf26f params=0 returns=2
// ================================================

void WF26F() // WF26F
{
  Push(0xea2d); Push(0x0001); // 'THE GROUND IS SHAKING AND RUMBLING.'
}


// ================================================
// 0xf277: WORD 'WF279' codep=0x224c wordp=0xf279 params=0 returns=2
// ================================================

void WF279() // WF279
{
  Push(0xea7e); Push(0x0001); // 'IT IS HAILING.'
}


// ================================================
// 0xf281: WORD 'WF283' codep=0x224c wordp=0xf283 params=0 returns=2
// ================================================

void WF283() // WF283
{
  Push(0xeabf); Push(0x0001); // 'YOU ARE IN A WINDSTORM.'
}


// ================================================
// 0xf28b: WORD 'WF28D' codep=0x224c wordp=0xf28d params=0 returns=2
// ================================================

void WF28D() // WF28D
{
  Push(0xea5c); Push(0x0001); // 'IT IS SNOWING HEAVILY.'
}


// ================================================
// 0xf295: WORD 'WF297' codep=0x224c wordp=0xf297 params=0 returns=2
// ================================================

void WF297() // WF297
{
  Push(0xeae2); Push(0x0001); // 'IT IS FOGGY.'
}


// ================================================
// 0xf29f: WORD 'WF2A1' codep=0x224c wordp=0xf2a1 params=0 returns=2
// ================================================

void WF2A1() // WF2A1
{
  Push(0xeb11); Push(0x0001); // 'IT IS RAINING.'
}


// ================================================
// 0xf2a9: WORD 'WPHRASE' codep=0x4a4f wordp=0xf2b5
// ================================================

void WPHRASE() // WPHRASE
{
  switch(Pop()) // WPHRASE
  {
  case 0:
    WF233(); // WF233
    break;
  case 1:
    WF229(); // WF229
    break;
  case 2:
    WF233(); // WF233
    break;
  case 3:
    WF23D(); // WF23D
    break;
  case 4:
    WF247(); // WF247
    break;
  case 5:
    WF251(); // WF251
    break;
  case 6:
    WF25B(); // WF25B
    break;
  case 7:
    WF265(); // WF265
    break;
  case 8:
    WF26F(); // WF26F
    break;
  case 9:
    WF279(); // WF279
    break;
  case 10:
    WF283(); // WF283
    break;
  case 11:
    WF28D(); // WF28D
    break;
  case 12:
    WF297(); // WF297
    break;
  case 13:
    WF2A1(); // WF2A1
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf2f1: WORD '(.STORM)' codep=0x224c wordp=0xf2fe
// ================================================

void _ro__dot_STORM_rc_() // (.STORM)
{
  Push(Read16(pp_ATMO)==0?1:0); // ATMO @ 0=
  if (Pop() != 0)
  {
    WF21F(); // WF21F
  } else
  {
    Push(Read16(pp__n_STORM)); // #STORM @
    WPHRASE(); // WPHRASE case
  }
  WEE86(); // WEE86
}


// ================================================
// 0xf318: WORD '.ROCK' codep=0x224c wordp=0xf322 params=0 returns=0
// ================================================

void DrawROCK() // .ROCK
{
  Push(Read16(pp_ATMO)); // ATMO @
  if (Pop() != 0)
  {
    Push(pp_P_dash_COLOR); // P-COLOR
    _1_dot_5_at_(); // 1.5@
    WEE86(); // WEE86
    SPACE(); // SPACE
  }
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  WEE86(); // WEE86
}


// ================================================
// 0xf33a: WORD '.LIQUID' codep=0x224c wordp=0xf346 params=0 returns=0
// ================================================

void DrawLIQUID() // .LIQUID
{
  Push(pp_O_dash_COLOR); // O-COLOR
  _1_dot_5_at_(); // 1.5@
  WEE86(); // WEE86
  SPACE(); // SPACE
  Push(0xe780); Push(0x0001); // 'OCEANS AND '
  WEE86(); // WEE86
  GCR(); // GCR
  DrawROCK(); // .ROCK
}


// ================================================
// 0xf35c: WORD '.CRYSTAL' codep=0x224c wordp=0xf369 params=0 returns=0
// ================================================

void DrawCRYSTAL() // .CRYSTAL
{
  Push(0xe797); Push(0x0001); // 'SMOOTH AND FEATURELESS'
  WEE86(); // WEE86
}


// ================================================
// 0xf373: WORD '.ICE' codep=0x224c wordp=0xf37c params=0 returns=0
// ================================================

void DrawICE() // .ICE
{
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  WEE86(); // WEE86
  GCR(); // GCR
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_at_(); // 1.5@
  WEE86(); // WEE86
  SPACE(); // SPACE
  Push(0xe624); Push(0x0001); // 'SNOW AND ICE'
  WEE86(); // WEE86
}


// ================================================
// 0xf396: WORD '.MOLTEN' codep=0x224c wordp=0xf3a2 params=0 returns=0
// ================================================

void DrawMOLTEN() // .MOLTEN
{
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  WEE86(); // WEE86
  GCR(); // GCR
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_at_(); // 1.5@
  WEE86(); // WEE86
}


// ================================================
// 0xf3b2: WORD '.CARPET' codep=0x224c wordp=0xf3be params=0 returns=0
// ================================================

void DrawCARPET() // .CARPET
{
  Push(pp_P_dash_CARP); // P-CARP
  _1_dot_5_at_(); // 1.5@
  WEE96(); // WEE96
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    PRINT(", ", 2); // (.")
    GCR(); // GCR
    Push(0xe97a); Push(0x0001); // 'WITH '
    WEE86(); // WEE86
    SPACE(); // SPACE
    WEE86(); // WEE86
    SPACE(); // SPACE
    Push(0xc761); Push(0x0001); // 'CARPET LIFEFORM'
    WEE86(); // WEE86
  }
  PRINT(".", 1); // (.")
  GCR(); // GCR
}


// ================================================
// 0xf3ef: WORD '/SURF' codep=0x4a4f wordp=0xf3f9
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
// 0xf411: WORD '.SURFACE' codep=0x224c wordp=0xf41e
// ================================================

void DrawSURFACE() // .SURFACE
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WECBA); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  _slash_SURF(); // /SURF case
  DrawCARPET(); // .CARPET
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf42e: WORD 'WF430' codep=0x224c wordp=0xf430 params=0 returns=0
// ================================================

void WF430() // WF430
{
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf436: WORD 'WF438' codep=0x224c wordp=0xf438 params=0 returns=0
// ================================================

void WF438() // WF438
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf43e: WORD 'WF440' codep=0x224c wordp=0xf440
// ================================================

void WF440() // WF440
{
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  Push(Read16(cc_WED02)); // WED02
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  LoadData(WED06); // from 'COMPOUNDS'
  _1_dot_5_at_(); // 1.5@
  WEE86(); // WEE86
}


// ================================================
// 0xf452: WORD 'WF454' codep=0x224c wordp=0xf454
// ================================================

void WF454() // WF454
{
  WF430(); // WF430
  PRINT("ATMO:", 5); // (.")
  WF438(); // WF438
  Push(Read16(pp_ATMO)); // ATMO @
  WF440(); // WF440
  GCR(); // GCR
}


// ================================================
// 0xf46a: WORD 'WF46C' codep=0x224c wordp=0xf46c
// ================================================

void WF46C() // WF46C
{
  WF430(); // WF430
  PRINT("HYDRO:", 6); // (.")
  WF438(); // WF438
  Push(Read16(pp_HYDRO)); // HYDRO @
  WF440(); // WF440
  GCR(); // GCR
}


// ================================================
// 0xf483: WORD 'WF485' codep=0x224c wordp=0xf485 params=0 returns=0
// ================================================

void WF485() // WF485
{
  WEE3E(); // WEE3E
  WEE58(); // WEE58
}


// ================================================
// 0xf48b: WORD 'WF48D' codep=0x224c wordp=0xf48d
// ================================================

void WF48D() // WF48D
{
  WF430(); // WF430
  PRINT("TERRAIN:", 8); // (.")
  WF438(); // WF438
  DrawSURFACE(); // .SURFACE
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WTOP) - 0x001e); // WTOP @ 0x001e -
  POS_dot_(); // POS.
}


// ================================================
// 0xf4b0: WORD 'WF4B2' codep=0x224c wordp=0xf4b2
// ================================================

void WF4B2() // WF4B2
{
  GCR(); // GCR
  WF430(); // WF430
  PRINT("SKY:", 4); // (.")
  WF438(); // WF438
  _ro__dot_STORM_rc_(); // (.STORM)
  GCR(); // GCR
}


// ================================================
// 0xf4c5: WORD 'WF4C7' codep=0x224c wordp=0xf4c7
// ================================================

void WF4C7() // WF4C7
{
  WF430(); // WF430
  PRINT("TEMPERATURE:", 12); // (.")
  WF438(); // WF438
  WEDB2(); // WEDB2
  WF430(); // WF430
  PRINT(" GRAVITY:", 9); // (.")
  WF438(); // WF438
  WED0E(); // WED0E
  GCR(); // GCR
}


// ================================================
// 0xf4f2: WORD 'WF4F4' codep=0x224c wordp=0xf4f4
// ================================================

void WF4F4() // WF4F4
{
  WF485(); // WF485
  Push(6);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  WF4B2(); // WF4B2
  WF4C7(); // WF4C7
  WF454(); // WF454
  WF46C(); // WF46C
  WF48D(); // WF48D
}


// ================================================
// 0xf508: WORD 'WF50A' codep=0x224c wordp=0xf50a
// ================================================

void WF50A() // WF50A
{
  WEE28(); // WEE28
  IsQUIT(); // ?QUIT
  Push(Pop()==0?1:0); //  0=
}


// ================================================
// 0xf512: WORD 'MAPS' codep=0x224c wordp=0xf51b
// ================================================
// entry

void MAPS() // MAPS
{
  Push(pp_FQUIT); // FQUIT
  OFF(); // OFF
  WF4F4(); // WF4F4
  Push(pp_ESC_dash_EN); // ESC-EN
  OFF_2(); // OFF_2
  WF133(); // WF133
  WF50A(); // WF50A
  if (Pop() != 0)
  {
    WF187(); // WF187
    WF50A(); // WF50A
    if (Pop() != 0)
    {
      WF133(); // WF133
      WEE28(); // WEE28
    }
  }
  WF1CF(); // WF1CF
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
}


// ================================================
// 0xf541: WORD '.STORM' codep=0x224c wordp=0xf54c
// ================================================
// entry

void DrawSTORM() // .STORM
{
  WF485(); // WF485
  WF438(); // WF438
  _ro__dot_STORM_rc_(); // (.STORM)
}

// 0xf554: db 0x4d 0x41 0x50 0x53 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x00 'MAPS-VOC____ '

