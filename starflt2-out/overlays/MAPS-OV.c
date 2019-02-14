// ====== OVERLAY 'MAPS-OV' ======
// store offset = 0xece0
// overlay size   = 0x0880

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WECF6  codep:0x2214 wordp:0xecf6 size:0x0002 C-string:'WECF6'
//           WECFA  codep:0x7394 wordp:0xecfa size:0x0006 C-string:'WECFA'
//           WED02  codep:0x7394 wordp:0xed02 size:0x0006 C-string:'WED02'
//           WED0A  codep:0x7394 wordp:0xed0a size:0x0006 C-string:'WED0A'
//           WED12  codep:0x7394 wordp:0xed12 size:0x0006 C-string:'WED12'
//           WED1A  codep:0x7394 wordp:0xed1a size:0x0006 C-string:'WED1A'
//           WED22  codep:0x7394 wordp:0xed22 size:0x0006 C-string:'WED22'
//           WED2A  codep:0x7394 wordp:0xed2a size:0x0006 C-string:'WED2A'
//           WED32  codep:0x7394 wordp:0xed32 size:0x0006 C-string:'WED32'
//           WED3A  codep:0x7394 wordp:0xed3a size:0x0006 C-string:'WED3A'
//           WED42  codep:0x2214 wordp:0xed42 size:0x0002 C-string:'WED42'
//           WED46  codep:0x7394 wordp:0xed46 size:0x0006 C-string:'WED46'
//           WED4E  codep:0x224c wordp:0xed4e size:0x0050 C-string:'WED4E'
//           WEDA0  codep:0x224c wordp:0xeda0 size:0x0016 C-string:'WEDA0'
//           WEDB8  codep:0x224c wordp:0xedb8 size:0x0030 C-string:'WEDB8'
//           WEDEA  codep:0x224c wordp:0xedea size:0x002e C-string:'WEDEA'
//           WEE1A  codep:0x7394 wordp:0xee1a size:0x0006 C-string:'WEE1A'
//           WEE22  codep:0x224c wordp:0xee22 size:0x002a C-string:'WEE22'
//           WEE4E  codep:0x224c wordp:0xee4e size:0x0016 C-string:'WEE4E'
//           WEE66  codep:0x224c wordp:0xee66 size:0x000a C-string:'WEE66'
//           WEE72  codep:0x224c wordp:0xee72 size:0x000e C-string:'WEE72'
//           WEE82  codep:0x224c wordp:0xee82 size:0x000c C-string:'WEE82'
//           WEE90  codep:0x224c wordp:0xee90 size:0x0074 C-string:'WEE90'
//           WEF06  codep:0x224c wordp:0xef06 size:0x0016 C-string:'WEF06'
//      2X2CONTOUR  codep:0x224c wordp:0xef2b size:0x0034 C-string:'_2X2CONTOUR'
//      4X4CONTOUR  codep:0x224c wordp:0xef6e size:0x0040 C-string:'_4X4CONTOUR'
//            CBLT  codep:0x1d29 wordp:0xefb7 size:0x0004 C-string:'CBLT'
//           CBLTP  codep:0xefc5 wordp:0xefc5 size:0x002c C-string:'CBLTP'
//           WEFF3  codep:0x224c wordp:0xeff3 size:0x00be C-string:'WEFF3'
//      8X8CONTOUR  codep:0x224c wordp:0xf0c0 size:0x0040 C-string:'_8X8CONTOUR'
//            '4X4  codep:0x1d29 wordp:0xf109 size:0x0002 C-string:'_i_4X4'
//            '2X2  codep:0x1d29 wordp:0xf114 size:0x0002 C-string:'_i_2X2'
//            '8X8  codep:0x1d29 wordp:0xf11f size:0x0002 C-string:'_i_8X8'
//           WF123  codep:0x224c wordp:0xf123 size:0x0050 C-string:'WF123'
//           WF175  codep:0x224c wordp:0xf175 size:0x0046 C-string:'WF175'
//           WF1BD  codep:0x224c wordp:0xf1bd size:0x004e C-string:'WF1BD'
//           WF20D  codep:0x224c wordp:0xf20d size:0x0008 C-string:'WF20D'
//           WF217  codep:0x224c wordp:0xf217 size:0x0008 C-string:'WF217'
//           WF221  codep:0x224c wordp:0xf221 size:0x0008 C-string:'WF221'
//           WF22B  codep:0x224c wordp:0xf22b size:0x0008 C-string:'WF22B'
//           WF235  codep:0x224c wordp:0xf235 size:0x0008 C-string:'WF235'
//           WF23F  codep:0x224c wordp:0xf23f size:0x0008 C-string:'WF23F'
//           WF249  codep:0x224c wordp:0xf249 size:0x0008 C-string:'WF249'
//           WF253  codep:0x224c wordp:0xf253 size:0x0008 C-string:'WF253'
//           WF25D  codep:0x224c wordp:0xf25d size:0x0008 C-string:'WF25D'
//           WF267  codep:0x224c wordp:0xf267 size:0x0008 C-string:'WF267'
//           WF271  codep:0x224c wordp:0xf271 size:0x0008 C-string:'WF271'
//           WF27B  codep:0x224c wordp:0xf27b size:0x0008 C-string:'WF27B'
//           WF285  codep:0x224c wordp:0xf285 size:0x0008 C-string:'WF285'
//           WF28F  codep:0x224c wordp:0xf28f size:0x0008 C-string:'WF28F'
//         WPHRASE  codep:0x4b3b wordp:0xf2a3 size:0x003c C-string:'WPHRASE'
//        (.STORM)  codep:0x224c wordp:0xf2ec size:0x001a C-string:'_ro__dot_STORM_rc_'
//           .ROCK  codep:0x224c wordp:0xf310 size:0x0018 C-string:'DrawROCK'
//         .LIQUID  codep:0x224c wordp:0xf334 size:0x0016 C-string:'DrawLIQUID'
//        .CRYSTAL  codep:0x224c wordp:0xf357 size:0x000a C-string:'DrawCRYSTAL'
//            .ICE  codep:0x224c wordp:0xf36a size:0x001a C-string:'DrawICE'
//         .MOLTEN  codep:0x224c wordp:0xf390 size:0x0010 C-string:'DrawMOLTEN'
//         .CARPET  codep:0x224c wordp:0xf3ac size:0x0031 C-string:'DrawCARPET'
//           /SURF  codep:0x4b3b wordp:0xf3e7 size:0x0018 C-string:'_slash_SURF'
//        .SURFACE  codep:0x224c wordp:0xf40c size:0x0010 C-string:'DrawSURFACE'
//           WF41E  codep:0x224c wordp:0xf41e size:0x0006 C-string:'WF41E'
//           WF426  codep:0x224c wordp:0xf426 size:0x0006 C-string:'WF426'
//           WF42E  codep:0x224c wordp:0xf42e size:0x0012 C-string:'WF42E'
//           WF442  codep:0x224c wordp:0xf442 size:0x0016 C-string:'WF442'
//           WF45A  codep:0x224c wordp:0xf45a size:0x0017 C-string:'WF45A'
//           WF473  codep:0x224c wordp:0xf473 size:0x0006 C-string:'WF473'
//           WF47B  codep:0x224c wordp:0xf47b size:0x0023 C-string:'WF47B'
//           WF4A0  codep:0x224c wordp:0xf4a0 size:0x0013 C-string:'WF4A0'
//           WF4B5  codep:0x224c wordp:0xf4b5 size:0x002b C-string:'WF4B5'
//           WF4E2  codep:0x224c wordp:0xf4e2 size:0x0014 C-string:'WF4E2'
//            MAPS  codep:0x224c wordp:0xf4ff size:0x0030 C-string:'MAPS'
//          .STORM  codep:0x224c wordp:0xf53a size:0x0000 C-string:'DrawSTORM'

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
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_COLOR; // COLOR
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
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp__i_SIMULA; // 'SIMULA
extern const unsigned short int pp_LAST_dash_UP; // LAST-UP
extern const unsigned short int pp_XWLD_c_XP; // XWLD:XP
extern const unsigned short int pp_YWLD_c_YP; // YWLD:YP
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp_NOF; // NOF
extern Color BLACK; // BLACK
extern Color LT_dash_BLUE; // LT-BLUE
extern Color WHITE; // WHITE
extern IFieldType PHR_dash_CNT; // PHR-CNT
extern IFieldType PHRASE; // PHRASE
void DrawR(); // .R
void SPACE(); // SPACE
void SPACES(); // SPACES
void NOP(); // NOP
void UNRAVEL(); // UNRAVEL
void SQRT(); // SQRT
void SETLARR(); // SETLARR
void SETREGI(); // SETREGI
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void StoreCOLOR(); // !COLOR
void DARK(); // DARK
void LLINE(); // LLINE
void DCLIPSE(); // DCLIPSE
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void CELLCOL(); // CELLCOL
void DrawREGION(); // .REGION
void StoreVISWIN(); // !VISWIN
void _gt_1ICONF(); // >1ICONF
void _gt_2ICONF(); // >2ICONF
void _gt_3ICONF(); // >3ICONF
void DrawLOCAL_dash_(); // .LOCAL-
void POS_dot_(); // POS.
void _gt_TVCT(); // >TVCT
void CTERASE(); // CTERASE
void GCR(); // GCR
void _i_KEY(); // 'KEY
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
void ON_1(); // ON_1
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void BLT(); // BLT
void BUFFERX(); // BUFFERX
void CBLTP(); // CBLTP


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_CBLT = 0xefb7; // CBLT size: 4
// {0xff, 0x66, 0x00, 0x66}

const unsigned short int pp__i_4X4 = 0xf109; // '4X4 size: 2
// {0x02, 0xce}

const unsigned short int pp__i_2X2 = 0xf114; // '2X2 size: 2
// {0xe0, 0xcd}

const unsigned short int pp__i_8X8 = 0xf11f; // '8X8 size: 2
// {0x24, 0xce}


const unsigned short int cc_WECF6 = 0xecf6; // WECF6
const unsigned short int cc_WED42 = 0xed42; // WED42


// 0xecf2: db 0x87 0x00 '  '

// ================================================
// 0xecf4: WORD 'WECF6' codep=0x2214 wordp=0xecf6
// ================================================
// orphan
// 0xecf6: dw 0x0020

// ================================================
// 0xecf8: WORD 'WECFA' codep=0x7394 wordp=0xecfa
// ================================================
LoadDataType WECFA = {PLANETIDX, 0x01, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed00: WORD 'WED02' codep=0x7394 wordp=0xed02
// ================================================
// orphan
LoadDataType WED02 = {PLANETIDX, 0x04, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed08: WORD 'WED0A' codep=0x7394 wordp=0xed0a
// ================================================
// orphan
LoadDataType WED0A = {PLANETIDX, 0x11, 0x02, 0x17, 0x6c49};

// ================================================
// 0xed10: WORD 'WED12' codep=0x7394 wordp=0xed12
// ================================================
// orphan
LoadDataType WED12 = {PLANETIDX, 0x13, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed18: WORD 'WED1A' codep=0x7394 wordp=0xed1a
// ================================================
// orphan
LoadDataType WED1A = {PLANETIDX, 0x0c, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed20: WORD 'WED22' codep=0x7394 wordp=0xed22
// ================================================
LoadDataType WED22 = {PLANETIDX, 0x0f, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed28: WORD 'WED2A' codep=0x7394 wordp=0xed2a
// ================================================
LoadDataType WED2A = {PLANETIDX, 0x10, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed30: WORD 'WED32' codep=0x7394 wordp=0xed32
// ================================================
LoadDataType WED32 = {PLANETIDX, 0x02, 0x02, 0x17, 0x6c49};

// ================================================
// 0xed38: WORD 'WED3A' codep=0x7394 wordp=0xed3a
// ================================================
// orphan
LoadDataType WED3A = {REGIONSIDX, 0x07, 0x08, 0x1c, 0x6efc};

// ================================================
// 0xed40: WORD 'WED42' codep=0x2214 wordp=0xed42
// ================================================
// 0xed42: dw 0x001e

// ================================================
// 0xed44: WORD 'WED46' codep=0x7394 wordp=0xed46
// ================================================
LoadDataType WED46 = {COMPOUNDSIDX, 0x00, 0x03, 0x07, 0x6c3e};

// ================================================
// 0xed4c: WORD 'WED4E' codep=0x224c wordp=0xed4e
// ================================================

void WED4E() // WED4E
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WED32); // from 'PLANET'
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
// 0xed9e: WORD 'WEDA0' codep=0x224c wordp=0xeda0
// ================================================

void WEDA0() // WEDA0
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WED22); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(WED2A); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + 1); //  1+
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedb6: WORD 'WEDB8' codep=0x224c wordp=0xedb8
// ================================================

void WEDB8() // WEDB8
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
  WEDA0(); // WEDA0
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
// 0xede8: WORD 'WEDEA' codep=0x224c wordp=0xedea params=0 returns=0
// ================================================

void WEDEA() // WEDEA
{
  IsNEW_dash_HO(); // ?NEW-HO
  if (Pop() == 0) return;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LAST_dash_UP); // LAST-UP
  StoreD(); // D!
  Push(1);
  Push(pp_STAR_dash_HR); // STAR-HR
  _plus__ex__2(); // +!_2
  Push(Read16(pp_STAR_dash_HR)==0x0018?1:0); // STAR-HR @ 0x0018 =
  if (Pop() == 0) return;
  Push(pp_STAR_dash_HR); // STAR-HR
  _099(); // 099
  Push(1);
  Push(pp_STARDAT); // STARDAT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xee18: WORD 'WEE1A' codep=0x7394 wordp=0xee1a
// ================================================
LoadDataType WEE1A = {REGIONSIDX, 0x04, 0x03, 0x1c, 0x6efc};

// ================================================
// 0xee20: WORD 'WEE22' codep=0x224c wordp=0xee22
// ================================================

void WEE22() // WEE22
{
  WEDB8(); // WEDB8
  Push(pp_RECORD_n_); // RECORD#
  Store_2(); // !_2
  Push(0x0043);
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  LoadData(WEE1A); // from 'REGIONS'
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+PHR_dash_CNT.offset)&0xFF); // PHR-CNT<IFIELD> C@
  Push(0x65e1+PHRASE.offset); // PHRASE<IFIELD>
  OVER(); // OVER
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(0x000a);
  SWAP(); // SWAP
  _dash_(); // -
  SPACES(); // SPACES
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee4c: WORD 'WEE4E' codep=0x224c wordp=0xee4e
// ================================================

void WEE4E() // WEE4E
{
  while(1)
  {
    _i_KEY(); // 'KEY
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    Push(Pop()==0?1:0); //  0=
    if (Pop() == 0) return;
    WEDEA(); // WEDEA
    Push(pp__i_SIMULA); // 'SIMULA
    GetEXECUTE(); // @EXECUTE
  }
}


// ================================================
// 0xee64: WORD 'WEE66' codep=0x224c wordp=0xee66
// ================================================

void WEE66() // WEE66
{
  WEE4E(); // WEE4E
  Push(Pop() - 0x014d); //  0x014d -
}


// ================================================
// 0xee70: WORD 'WEE72' codep=0x224c wordp=0xee72 params=2 returns=0
// ================================================

void WEE72() // WEE72
{
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+PHRASE.offset); // PHRASE<IFIELD>
  Push(Read16(0x65e1+PHR_dash_CNT.offset)&0xFF); // PHR-CNT<IFIELD> C@
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee80: WORD 'WEE82' codep=0x224c wordp=0xee82 params=2 returns=2
// ================================================

void WEE82() // WEE82
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xee8e: WORD 'WEE90' codep=0x224c wordp=0xee90
// ================================================

void WEE90() // WEE90
{
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  _gt_MAINVI(); // >MAINVI
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
// 0xef04: WORD 'WEF06' codep=0x224c wordp=0xef06 params=0 returns=2
// ================================================

void WEF06() // WEF06
{
  Push(Read16(pp_XVIS) - Read16(pp_XCON)); // XVIS @ XCON @ -
  Push(Read16(pp_YVIS) - Read16(pp_YCON)); // YVIS @ YCON @ -
}


// ================================================
// 0xef1c: WORD '2X2CONTOUR' codep=0x224c wordp=0xef2b
// ================================================
// entry

void _2X2CONTOUR() // 2X2CONTOUR
{
  Push(0x6a82); // 'CONTOUR'
  SETLARR(); // SETLARR
  Push(0x91ff); // '.2X2CEL'
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push(1);
  Push(Read16(regsp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  WEF06(); // WEF06
  OVER(); // OVER
  Push(Pop() + 0x0022); //  0x0022 +
  OVER(); // OVER
  Push(Pop() + 0x003a); //  0x003a +
  SETREGI(); // SETREGI
  DrawREGION(); // .REGION
  WEE90(); // WEE90
}


// ================================================
// 0xef5f: WORD '4X4CONTOUR' codep=0x224c wordp=0xef6e
// ================================================
// entry

void _4X4CONTOUR() // 4X4CONTOUR
{
  Push(0x6a82); // 'CONTOUR'
  SETLARR(); // SETLARR
  Push(0x9223); // '.4X4CEL'
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push(2);
  Push(Read16(regsp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  WEF06(); // WEF06
  Push(Pop() + 0x000f); //  0x000f +
  SWAP(); // SWAP
  Push(Pop() + 9); //  9 +
  SWAP(); // SWAP
  OVER(); // OVER
  Push(Pop() + 0x0010); //  0x0010 +
  OVER(); // OVER
  Push(Pop() + 0x001c); //  0x001c +
  SETREGI(); // SETREGI
  DrawREGION(); // .REGION
}


// ================================================
// 0xefae: WORD 'CBLT' codep=0x1d29 wordp=0xefb7
// ================================================
// 0xefb7: db 0xff 0x66 0x00 0x66 ' f f'

// ================================================
// 0xefbb: WORD 'CBLTP' codep=0xefc5 wordp=0xefc5
// ================================================
// 0xefc5: pop    ax
// 0xefc6: add    ax,0003
// 0xefc9: mov    [5A3D],ax // YBLT
// 0xefcd: pop    ax
// 0xefce: add    ax,0006
// 0xefd1: mov    [5A48],ax // XBLT
// 0xefd5: mov    word ptr [5A6C],0004 // WBLT
// 0xefdb: mov    word ptr [5A61],0006 // LBLT
// 0xefe1: mov    word ptr [5A77],EFB7 // ABLT
// 0xefe7: push   ds
// 0xefe8: pop    word ptr [5A84] // BLTSEG
// 0xefec: lodsw
// 0xefed: mov    bx,ax
// 0xefef: jmp    word ptr [bx]

// ================================================
// 0xeff1: WORD 'WEFF3' codep=0x224c wordp=0xeff3
// ================================================

void WEFF3() // WEFF3
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
      CELLCOL(); // CELLCOL
      Push(Read16(pp_COLOR)); // COLOR @
      a = Pop(); // >R
      _2DUP(); // 2DUP
      Push(Pop() + 1); //  1+
      SWAP(); // SWAP
      Push(Pop() + 1); //  1+
      SWAP(); // SWAP
      CELLCOL(); // CELLCOL
      Push(!(Read16(pp_COLOR)==a?1:0)); // COLOR @ I = NOT
      if (Pop() != 0)
      {
        Push(!a); // R> NOT
        b = Pop(); // >R
      }
      _2DUP(); // 2DUP
      Push(Pop() + 1); //  1+
      CELLCOL(); // CELLCOL
      Push(Read16(pp_COLOR)); // COLOR @
      c = Pop(); // >R
      _2DUP(); // 2DUP
      SWAP(); // SWAP
      Push(Pop() + 1); //  1+
      SWAP(); // SWAP
      CELLCOL(); // CELLCOL
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
          Push(pp_XORMODE); // XORMODE
          _099(); // 099
          StoreCOLOR(); // !COLOR
          _2DUP(); // 2DUP
          Push(3);
          Push(3);
          BUFFERX(); // BUFFERX
          Push(Pop() - 1); //  1-
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
// 0xf0b1: WORD '8X8CONTOUR' codep=0x224c wordp=0xf0c0
// ================================================
// entry

void _8X8CONTOUR() // 8X8CONTOUR
{
  Push(0x6a82); // 'CONTOUR'
  SETLARR(); // SETLARR
  Push(0x9241); // '.8X8CEL'
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push2Words("0.");
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  WEF06(); // WEF06
  Push(Pop() + 0x0016); //  0x0016 +
  SWAP(); // SWAP
  Push(Pop() + 0x000d); //  0x000d +
  SWAP(); // SWAP
  OVER(); // OVER
  Push(Pop() + 8); //  8 +
  OVER(); // OVER
  Push(Pop() + 0x000e); //  0x000e +
  SETREGI(); // SETREGI
  DrawREGION(); // .REGION
  WEFF3(); // WEFF3
}


// ================================================
// 0xf100: WORD ''4X4' codep=0x1d29 wordp=0xf109
// ================================================
// 0xf109: db 0x02 0xce '  '

// ================================================
// 0xf10b: WORD ''2X2' codep=0x1d29 wordp=0xf114
// ================================================
// 0xf114: db 0xe0 0xcd '  '

// ================================================
// 0xf116: WORD ''8X8' codep=0x1d29 wordp=0xf11f
// ================================================
// 0xf11f: db 0x24 0xce '$ '

// ================================================
// 0xf121: WORD 'WF123' codep=0x224c wordp=0xf123
// ================================================

void WF123() // WF123
{
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  _gt_2ICONF(); // >2ICONF
  Push(4);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  _st__ex__gt_(); // <!>
  Push(Read16(pp__i_4X4)); // '4X4 @
  Push(pp__i__dot_BACKG); // '.BACKG
  _st__ex__gt_(); // <!>
  Push(Read16(pp_XVIS) + 0x000a); // XVIS @ 0x000a +
  Push(Read16(pp_YVIS) + 0x000f); // YVIS @ 0x000f +
  Push(Read16(pp_XVIS) + 0x001a); // XVIS @ 0x001a +
  Push(Read16(pp_YVIS) + 0x002b); // YVIS @ 0x002b +
  StoreVISWIN(); // !VISWIN
  _4X4CONTOUR(); // 4X4CONTOUR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  DrawLOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xf173: WORD 'WF175' codep=0x224c wordp=0xf175
// ================================================

void WF175() // WF175
{
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  _gt_3ICONF(); // >3ICONF
  Push(Read16(pp__i_2X2)); // '2X2 @
  Push(pp__i__dot_BACKG); // '.BACKG
  Store_2(); // !_2
  Push(2);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  _st__ex__gt_(); // <!>
  Push(Read16(pp_XVIS)); // XVIS @
  Push(Read16(pp_YVIS)); // YVIS @
  Push(Read16(pp_XVIS) + 0x0022); // XVIS @ 0x0022 +
  Push(Read16(pp_YVIS) + 0x003a); // YVIS @ 0x003a +
  StoreVISWIN(); // !VISWIN
  _2X2CONTOUR(); // 2X2CONTOUR
  WEE90(); // WEE90
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  DrawLOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xf1bb: WORD 'WF1BD' codep=0x224c wordp=0xf1bd
// ================================================

void WF1BD() // WF1BD
{
  _gt_MAINVI(); // >MAINVI
  _gt_1ICONF(); // >1ICONF
  Push(Read16(pp__i_8X8)); // '8X8 @
  Push(pp__i__dot_BACKG); // '.BACKG
  _st__ex__gt_(); // <!>
  Push(8);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  _st__ex__gt_(); // <!>
  Push(Read16(pp_XVIS) + 0x000e); // XVIS @ 0x000e +
  Push(Read16(pp_YVIS) + 0x0016); // YVIS @ 0x0016 +
  Push(Read16(pp_XVIS) + 0x0016); // XVIS @ 0x0016 +
  Push(Read16(pp_YVIS) + 0x0029); // YVIS @ 0x0029 +
  StoreVISWIN(); // !VISWIN
  _8X8CONTOUR(); // 8X8CONTOUR
  DrawLOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  DCLIPSE(); // DCLIPSE
}


// ================================================
// 0xf20b: WORD 'WF20D' codep=0x224c wordp=0xf20d params=0 returns=2
// ================================================

void WF20D() // WF20D
{
  Push(0x4a1c); Push(0x0002); // 'BLACK AND STAR-FILLED.'
}


// ================================================
// 0xf215: WORD 'WF217' codep=0x224c wordp=0xf217 params=0 returns=2
// ================================================

void WF217() // WF217
{
  Push(0x4f68); Push(0x0002); // 'IT IS HAZY.'
}


// ================================================
// 0xf21f: WORD 'WF221' codep=0x224c wordp=0xf221 params=0 returns=2
// ================================================

void WF221() // WF221
{
  Push(0x4f99); Push(0x0002); // 'IT IS CLEAR.'
}


// ================================================
// 0xf229: WORD 'WF22B' codep=0x224c wordp=0xf22b params=0 returns=2
// ================================================

void WF22B() // WF22B
{
  Push(0x4e1b); Push(0x0002); // 'IT IS OVERCAST.'
}


// ================================================
// 0xf233: WORD 'WF235' codep=0x224c wordp=0xf235 params=0 returns=2
// ================================================

void WF235() // WF235
{
  Push(0x4e36); Push(0x0002); // 'IT IS SNOWING LIGHTLY.'
}


// ================================================
// 0xf23d: WORD 'WF23F' codep=0x224c wordp=0xf23f params=0 returns=2
// ================================================

void WF23F() // WF23F
{
  Push(0x4e58); Push(0x0002); // 'IT IS MISTY.'
}


// ================================================
// 0xf247: WORD 'WF249' codep=0x224c wordp=0xf249 params=0 returns=2
// ================================================

void WF249() // WF249
{
  Push(0x4e70); Push(0x0002); // 'YOU ARE IN AN ELECTRICAL STORM.'
}


// ================================================
// 0xf251: WORD 'WF253' codep=0x224c wordp=0xf253 params=0 returns=2
// ================================================

void WF253() // WF253
{
  Push(0x4f06); Push(0x0002); // 'YOU ARE IN A THUNDER STORM.'
}


// ================================================
// 0xf25b: WORD 'WF25D' codep=0x224c wordp=0xf25d params=0 returns=2
// ================================================

void WF25D() // WF25D
{
  Push(0x4e9b); Push(0x0002); // 'THE GROUND IS SHAKING AND RUMBLING.'
}


// ================================================
// 0xf265: WORD 'WF267' codep=0x224c wordp=0xf267 params=0 returns=2
// ================================================

void WF267() // WF267
{
  Push(0x4eec); Push(0x0002); // 'IT IS HAILING.'
}


// ================================================
// 0xf26f: WORD 'WF271' codep=0x224c wordp=0xf271 params=0 returns=2
// ================================================

void WF271() // WF271
{
  Push(0x4f2d); Push(0x0002); // 'YOU ARE IN A WINDSTORM.'
}


// ================================================
// 0xf279: WORD 'WF27B' codep=0x224c wordp=0xf27b params=0 returns=2
// ================================================

void WF27B() // WF27B
{
  Push(0x4eca); Push(0x0002); // 'IT IS SNOWING HEAVILY.'
}


// ================================================
// 0xf283: WORD 'WF285' codep=0x224c wordp=0xf285 params=0 returns=2
// ================================================

void WF285() // WF285
{
  Push(0x4f50); Push(0x0002); // 'IT IS FOGGY.'
}


// ================================================
// 0xf28d: WORD 'WF28F' codep=0x224c wordp=0xf28f params=0 returns=2
// ================================================

void WF28F() // WF28F
{
  Push(0x4f7f); Push(0x0002); // 'IT IS RAINING.'
}


// ================================================
// 0xf297: WORD 'WPHRASE' codep=0x4b3b wordp=0xf2a3
// ================================================

void WPHRASE() // WPHRASE
{
  switch(Pop()) // WPHRASE
  {
  case 0:
    WF221(); // WF221
    break;
  case 1:
    WF217(); // WF217
    break;
  case 2:
    WF221(); // WF221
    break;
  case 3:
    WF22B(); // WF22B
    break;
  case 4:
    WF235(); // WF235
    break;
  case 5:
    WF23F(); // WF23F
    break;
  case 6:
    WF249(); // WF249
    break;
  case 7:
    WF253(); // WF253
    break;
  case 8:
    WF25D(); // WF25D
    break;
  case 9:
    WF267(); // WF267
    break;
  case 10:
    WF271(); // WF271
    break;
  case 11:
    WF27B(); // WF27B
    break;
  case 12:
    WF285(); // WF285
    break;
  case 13:
    WF28F(); // WF28F
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf2df: WORD '(.STORM)' codep=0x224c wordp=0xf2ec
// ================================================

void _ro__dot_STORM_rc_() // (.STORM)
{
  Push(Read16(pp_ATMO)==0?1:0); // ATMO @ 0=
  if (Pop() != 0)
  {
    WF20D(); // WF20D
  } else
  {
    Push(Read16(pp__n_STORM)); // #STORM @
    WPHRASE(); // WPHRASE case
  }
  WEE72(); // WEE72
}


// ================================================
// 0xf306: WORD '.ROCK' codep=0x224c wordp=0xf310 params=0 returns=0
// ================================================

void DrawROCK() // .ROCK
{
  Push(Read16(pp_ATMO)); // ATMO @
  if (Pop() != 0)
  {
    Push(pp_P_dash_COLOR); // P-COLOR
    _1_dot_5_at_(); // 1.5@
    WEE72(); // WEE72
    SPACE(); // SPACE
  }
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  WEE72(); // WEE72
}


// ================================================
// 0xf328: WORD '.LIQUID' codep=0x224c wordp=0xf334 params=0 returns=0
// ================================================

void DrawLIQUID() // .LIQUID
{
  Push(pp_O_dash_COLOR); // O-COLOR
  _1_dot_5_at_(); // 1.5@
  WEE72(); // WEE72
  SPACE(); // SPACE
  Push(0x4b60); Push(0x0002); // 'OCEANS AND '
  WEE72(); // WEE72
  GCR(); // GCR
  DrawROCK(); // .ROCK
}


// ================================================
// 0xf34a: WORD '.CRYSTAL' codep=0x224c wordp=0xf357 params=0 returns=0
// ================================================

void DrawCRYSTAL() // .CRYSTAL
{
  Push(0x4b77); Push(0x0002); // 'SMOOTH AND FEATURELESS'
  WEE72(); // WEE72
}


// ================================================
// 0xf361: WORD '.ICE' codep=0x224c wordp=0xf36a params=0 returns=0
// ================================================

void DrawICE() // .ICE
{
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  WEE72(); // WEE72
  GCR(); // GCR
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_at_(); // 1.5@
  WEE72(); // WEE72
  SPACE(); // SPACE
  Push(0x4a04); Push(0x0002); // 'SNOW AND ICE'
  WEE72(); // WEE72
}


// ================================================
// 0xf384: WORD '.MOLTEN' codep=0x224c wordp=0xf390 params=0 returns=0
// ================================================

void DrawMOLTEN() // .MOLTEN
{
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  WEE72(); // WEE72
  GCR(); // GCR
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_at_(); // 1.5@
  WEE72(); // WEE72
}


// ================================================
// 0xf3a0: WORD '.CARPET' codep=0x224c wordp=0xf3ac params=0 returns=0
// ================================================

void DrawCARPET() // .CARPET
{
  Push(pp_P_dash_CARP); // P-CARP
  _1_dot_5_at_(); // 1.5@
  WEE82(); // WEE82
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    PRINT(", ", 2); // (.")
    GCR(); // GCR
    Push(0x4de8); Push(0x0002); // 'WITH '
    WEE72(); // WEE72
    SPACE(); // SPACE
    WEE72(); // WEE72
    SPACE(); // SPACE
    Push(0x4dcd); Push(0x0002); // 'CARPET LIFEFORM'
    WEE72(); // WEE72
  }
  PRINT(".", 1); // (.")
  GCR(); // GCR
}


// ================================================
// 0xf3dd: WORD '/SURF' codep=0x4b3b wordp=0xf3e7
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
// 0xf3ff: WORD '.SURFACE' codep=0x224c wordp=0xf40c
// ================================================

void DrawSURFACE() // .SURFACE
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WECFA); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  _slash_SURF(); // /SURF case
  DrawCARPET(); // .CARPET
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf41c: WORD 'WF41E' codep=0x224c wordp=0xf41e
// ================================================

void WF41E() // WF41E
{
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf424: WORD 'WF426' codep=0x224c wordp=0xf426
// ================================================

void WF426() // WF426
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf42c: WORD 'WF42E' codep=0x224c wordp=0xf42e
// ================================================

void WF42E() // WF42E
{
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  Push(Read16(cc_WED42)); // WED42
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  LoadData(WED46); // from 'COMPOUNDS'
  _1_dot_5_at_(); // 1.5@
  WEE72(); // WEE72
}


// ================================================
// 0xf440: WORD 'WF442' codep=0x224c wordp=0xf442
// ================================================

void WF442() // WF442
{
  WF41E(); // WF41E
  PRINT("ATMO:", 5); // (.")
  WF426(); // WF426
  Push(Read16(pp_ATMO)); // ATMO @
  WF42E(); // WF42E
  GCR(); // GCR
}


// ================================================
// 0xf458: WORD 'WF45A' codep=0x224c wordp=0xf45a
// ================================================

void WF45A() // WF45A
{
  WF41E(); // WF41E
  PRINT("HYDRO:", 6); // (.")
  WF426(); // WF426
  Push(Read16(pp_HYDRO)); // HYDRO @
  WF42E(); // WF42E
  GCR(); // GCR
}


// ================================================
// 0xf471: WORD 'WF473' codep=0x224c wordp=0xf473
// ================================================

void WF473() // WF473
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
}


// ================================================
// 0xf479: WORD 'WF47B' codep=0x224c wordp=0xf47b
// ================================================

void WF47B() // WF47B
{
  WF41E(); // WF41E
  PRINT("TERRAIN:", 8); // (.")
  WF426(); // WF426
  DrawSURFACE(); // .SURFACE
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WTOP) - 0x001e); // WTOP @ 0x001e -
  POS_dot_(); // POS.
}


// ================================================
// 0xf49e: WORD 'WF4A0' codep=0x224c wordp=0xf4a0
// ================================================

void WF4A0() // WF4A0
{
  GCR(); // GCR
  WF41E(); // WF41E
  PRINT("SKY:", 4); // (.")
  WF426(); // WF426
  _ro__dot_STORM_rc_(); // (.STORM)
  GCR(); // GCR
}


// ================================================
// 0xf4b3: WORD 'WF4B5' codep=0x224c wordp=0xf4b5
// ================================================

void WF4B5() // WF4B5
{
  WF41E(); // WF41E
  PRINT("TEMPERATURE:", 12); // (.")
  WF426(); // WF426
  WEE22(); // WEE22
  WF41E(); // WF41E
  PRINT(" GRAVITY:", 9); // (.")
  WF426(); // WF426
  WED4E(); // WED4E
  GCR(); // GCR
}


// ================================================
// 0xf4e0: WORD 'WF4E2' codep=0x224c wordp=0xf4e2
// ================================================

void WF4E2() // WF4E2
{
  WF473(); // WF473
  Push(6);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  WF4A0(); // WF4A0
  WF4B5(); // WF4B5
  WF442(); // WF442
  WF45A(); // WF45A
  WF47B(); // WF47B
}


// ================================================
// 0xf4f6: WORD 'MAPS' codep=0x224c wordp=0xf4ff
// ================================================
// entry

void MAPS() // MAPS
{
  Push(pp_FQUIT); // FQUIT
  _099(); // 099
  WF4E2(); // WF4E2
  Push(pp_ESC_dash_EN); // ESC-EN
  OFF_2(); // OFF_2
  Push(pp_NOF); // NOF
  ON_2(); // ON_2
  WF123(); // WF123
  WEE66(); // WEE66
  if (Pop() != 0)
  {
    WF175(); // WF175
    WEE66(); // WEE66
    if (Pop() != 0)
    {
      WF123(); // WF123
      WEE4E(); // WEE4E
      Pop(); // DROP
    }
  }
  WF1BD(); // WF1BD
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_1(); // ON_1
  Push(pp_NOF); // NOF
  _099(); // 099
}


// ================================================
// 0xf52f: WORD '.STORM' codep=0x224c wordp=0xf53a
// ================================================
// entry

void DrawSTORM() // .STORM
{
  WF473(); // WF473
  WF426(); // WF426
  _ro__dot_STORM_rc_(); // (.STORM)
}

// 0xf542: db 0x4d 0x41 0x50 0x53 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'MAPS-VOC______________________ '

