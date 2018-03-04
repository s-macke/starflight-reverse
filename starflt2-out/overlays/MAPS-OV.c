// ====== OVERLAY 'MAPS-OV' ======
// store offset = 0xece0
// overlay size   = 0x0880

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xecfa  codep:0x7394 parp:0xecfa size:0x0006 C-string:'UNK_0xecfa'
//      UNK_0xed02  codep:0x7394 parp:0xed02 size:0x0006 C-string:'UNK_0xed02'
//      UNK_0xed0a  codep:0x7394 parp:0xed0a size:0x0006 C-string:'UNK_0xed0a'
//      UNK_0xed12  codep:0x7394 parp:0xed12 size:0x0006 C-string:'UNK_0xed12'
//      UNK_0xed1a  codep:0x7394 parp:0xed1a size:0x0006 C-string:'UNK_0xed1a'
//      UNK_0xed22  codep:0x7394 parp:0xed22 size:0x0006 C-string:'UNK_0xed22'
//      UNK_0xed2a  codep:0x7394 parp:0xed2a size:0x0006 C-string:'UNK_0xed2a'
//      UNK_0xed32  codep:0x7394 parp:0xed32 size:0x0006 C-string:'UNK_0xed32'
//      UNK_0xed3a  codep:0x7394 parp:0xed3a size:0x0006 C-string:'UNK_0xed3a'
//      UNK_0xed42  codep:0x2214 parp:0xed42 size:0x0002 C-string:'UNK_0xed42'
//      UNK_0xed46  codep:0x7394 parp:0xed46 size:0x0006 C-string:'UNK_0xed46'
//      UNK_0xed4e  codep:0x224c parp:0xed4e size:0x0050 C-string:'UNK_0xed4e'
//      UNK_0xeda0  codep:0x224c parp:0xeda0 size:0x0016 C-string:'UNK_0xeda0'
//      UNK_0xedb8  codep:0x224c parp:0xedb8 size:0x0030 C-string:'UNK_0xedb8'
//      UNK_0xedea  codep:0x224c parp:0xedea size:0x002e C-string:'UNK_0xedea'
//      UNK_0xee1a  codep:0x7394 parp:0xee1a size:0x0006 C-string:'UNK_0xee1a'
//      UNK_0xee22  codep:0x224c parp:0xee22 size:0x002a C-string:'UNK_0xee22'
//      UNK_0xee4e  codep:0x224c parp:0xee4e size:0x0016 C-string:'UNK_0xee4e'
//      UNK_0xee66  codep:0x224c parp:0xee66 size:0x000a C-string:'UNK_0xee66'
//      UNK_0xee72  codep:0x224c parp:0xee72 size:0x000e C-string:'UNK_0xee72'
//      UNK_0xee82  codep:0x224c parp:0xee82 size:0x000c C-string:'UNK_0xee82'
//      UNK_0xee90  codep:0x224c parp:0xee90 size:0x0074 C-string:'UNK_0xee90'
//      UNK_0xef06  codep:0x224c parp:0xef06 size:0x0016 C-string:'UNK_0xef06'
//      2X2CONTOUR  codep:0x224c parp:0xef2b size:0x0034 C-string:'_2X2CONTOUR'
//      4X4CONTOUR  codep:0x224c parp:0xef6e size:0x0040 C-string:'_4X4CONTOUR'
//            CBLT  codep:0x1d29 parp:0xefb7 size:0x0004 C-string:'CBLT'
//           CBLTP  codep:0xefc5 parp:0xefc5 size:0x002c C-string:'CBLTP'
//      UNK_0xeff3  codep:0x224c parp:0xeff3 size:0x00be C-string:'UNK_0xeff3'
//      8X8CONTOUR  codep:0x224c parp:0xf0c0 size:0x0040 C-string:'_8X8CONTOUR'
//            '4X4  codep:0x1d29 parp:0xf109 size:0x0002 C-string:'_i_4X4'
//            '2X2  codep:0x1d29 parp:0xf114 size:0x0002 C-string:'_i_2X2'
//            '8X8  codep:0x1d29 parp:0xf11f size:0x0002 C-string:'_i_8X8'
//      UNK_0xf123  codep:0x224c parp:0xf123 size:0x0050 C-string:'UNK_0xf123'
//      UNK_0xf175  codep:0x224c parp:0xf175 size:0x0046 C-string:'UNK_0xf175'
//      UNK_0xf1bd  codep:0x224c parp:0xf1bd size:0x004e C-string:'UNK_0xf1bd'
//      UNK_0xf20d  codep:0x224c parp:0xf20d size:0x0008 C-string:'UNK_0xf20d'
//      UNK_0xf217  codep:0x224c parp:0xf217 size:0x0008 C-string:'UNK_0xf217'
//      UNK_0xf221  codep:0x224c parp:0xf221 size:0x0008 C-string:'UNK_0xf221'
//      UNK_0xf22b  codep:0x224c parp:0xf22b size:0x0008 C-string:'UNK_0xf22b'
//      UNK_0xf235  codep:0x224c parp:0xf235 size:0x0008 C-string:'UNK_0xf235'
//      UNK_0xf23f  codep:0x224c parp:0xf23f size:0x0008 C-string:'UNK_0xf23f'
//      UNK_0xf249  codep:0x224c parp:0xf249 size:0x0008 C-string:'UNK_0xf249'
//      UNK_0xf253  codep:0x224c parp:0xf253 size:0x0008 C-string:'UNK_0xf253'
//      UNK_0xf25d  codep:0x224c parp:0xf25d size:0x0008 C-string:'UNK_0xf25d'
//      UNK_0xf267  codep:0x224c parp:0xf267 size:0x0008 C-string:'UNK_0xf267'
//      UNK_0xf271  codep:0x224c parp:0xf271 size:0x0008 C-string:'UNK_0xf271'
//      UNK_0xf27b  codep:0x224c parp:0xf27b size:0x0008 C-string:'UNK_0xf27b'
//      UNK_0xf285  codep:0x224c parp:0xf285 size:0x0008 C-string:'UNK_0xf285'
//      UNK_0xf28f  codep:0x224c parp:0xf28f size:0x0008 C-string:'UNK_0xf28f'
//         WPHRASE  codep:0x4b3b parp:0xf2a3 size:0x003c C-string:'WPHRASE'
//        (.STORM)  codep:0x224c parp:0xf2ec size:0x001a C-string:'_ro__dot_STORM_rc_'
//           .ROCK  codep:0x224c parp:0xf310 size:0x0018 C-string:'DrawROCK'
//         .LIQUID  codep:0x224c parp:0xf334 size:0x0016 C-string:'DrawLIQUID'
//        .CRYSTAL  codep:0x224c parp:0xf357 size:0x000a C-string:'DrawCRYSTAL'
//            .ICE  codep:0x224c parp:0xf36a size:0x001a C-string:'DrawICE'
//         .MOLTEN  codep:0x224c parp:0xf390 size:0x0010 C-string:'DrawMOLTEN'
//         .CARPET  codep:0x224c parp:0xf3ac size:0x0031 C-string:'DrawCARPET'
//           /SURF  codep:0x4b3b parp:0xf3e7 size:0x0018 C-string:'_slash_SURF'
//        .SURFACE  codep:0x224c parp:0xf40c size:0x0010 C-string:'DrawSURFACE'
//      UNK_0xf41e  codep:0x224c parp:0xf41e size:0x0006 C-string:'UNK_0xf41e'
//      UNK_0xf426  codep:0x224c parp:0xf426 size:0x0006 C-string:'UNK_0xf426'
//      UNK_0xf42e  codep:0x224c parp:0xf42e size:0x0012 C-string:'UNK_0xf42e'
//      UNK_0xf442  codep:0x224c parp:0xf442 size:0x0016 C-string:'UNK_0xf442'
//      UNK_0xf45a  codep:0x224c parp:0xf45a size:0x0017 C-string:'UNK_0xf45a'
//      UNK_0xf473  codep:0x224c parp:0xf473 size:0x0006 C-string:'UNK_0xf473'
//      UNK_0xf47b  codep:0x224c parp:0xf47b size:0x0023 C-string:'UNK_0xf47b'
//      UNK_0xf4a0  codep:0x224c parp:0xf4a0 size:0x0013 C-string:'UNK_0xf4a0'
//      UNK_0xf4b5  codep:0x224c parp:0xf4b5 size:0x002b C-string:'UNK_0xf4b5'
//      UNK_0xf4e2  codep:0x224c parp:0xf4e2 size:0x0014 C-string:'UNK_0xf4e2'
//            MAPS  codep:0x224c parp:0xf4ff size:0x0030 C-string:'MAPS'
//          .STORM  codep:0x224c parp:0xf53a size:0x0000 C-string:'DrawSTORM'

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


const unsigned short int cc_UNK_0xed42 = 0xed42; // UNK_0xed42


// 0xecf2: db 0x87 0x00 0x14 0x22 0x20 0x00 '   "  '

// ================================================
// 0xecf8: WORD 'UNK_0xecfa' codep=0x7394 parp=0xecfa
// ================================================
LoadDataType UNK_0xecfa = {PLANETIDX, 0x01, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed00: WORD 'UNK_0xed02' codep=0x7394 parp=0xed02
// ================================================
// orphan
LoadDataType UNK_0xed02 = {PLANETIDX, 0x04, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed08: WORD 'UNK_0xed0a' codep=0x7394 parp=0xed0a
// ================================================
// orphan
LoadDataType UNK_0xed0a = {PLANETIDX, 0x11, 0x02, 0x17, 0x6c49};

// ================================================
// 0xed10: WORD 'UNK_0xed12' codep=0x7394 parp=0xed12
// ================================================
// orphan
LoadDataType UNK_0xed12 = {PLANETIDX, 0x13, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed18: WORD 'UNK_0xed1a' codep=0x7394 parp=0xed1a
// ================================================
// orphan
LoadDataType UNK_0xed1a = {PLANETIDX, 0x0c, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed20: WORD 'UNK_0xed22' codep=0x7394 parp=0xed22
// ================================================
LoadDataType UNK_0xed22 = {PLANETIDX, 0x0f, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed28: WORD 'UNK_0xed2a' codep=0x7394 parp=0xed2a
// ================================================
LoadDataType UNK_0xed2a = {PLANETIDX, 0x10, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed30: WORD 'UNK_0xed32' codep=0x7394 parp=0xed32
// ================================================
LoadDataType UNK_0xed32 = {PLANETIDX, 0x02, 0x02, 0x17, 0x6c49};

// ================================================
// 0xed38: WORD 'UNK_0xed3a' codep=0x7394 parp=0xed3a
// ================================================
// orphan
LoadDataType UNK_0xed3a = {REGIONSIDX, 0x07, 0x08, 0x1c, 0x6efc};

// ================================================
// 0xed40: WORD 'UNK_0xed42' codep=0x2214 parp=0xed42
// ================================================
// 0xed42: dw 0x001e

// ================================================
// 0xed44: WORD 'UNK_0xed46' codep=0x7394 parp=0xed46
// ================================================
LoadDataType UNK_0xed46 = {COMPOUNDSIDX, 0x00, 0x03, 0x07, 0x6c3e};

// ================================================
// 0xed4c: WORD 'UNK_0xed4e' codep=0x224c parp=0xed4e
// ================================================

void UNK_0xed4e() // UNK_0xed4e
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(UNK_0xed32); // from 'PLANET'
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
// 0xed9e: WORD 'UNK_0xeda0' codep=0x224c parp=0xeda0
// ================================================

void UNK_0xeda0() // UNK_0xeda0
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(UNK_0xed22); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(UNK_0xed2a); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + 1); //  1+
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedb6: WORD 'UNK_0xedb8' codep=0x224c parp=0xedb8
// ================================================

void UNK_0xedb8() // UNK_0xedb8
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
  UNK_0xeda0(); // UNK_0xeda0
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
// 0xede8: WORD 'UNK_0xedea' codep=0x224c parp=0xedea
// ================================================

void UNK_0xedea() // UNK_0xedea
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
// 0xee18: WORD 'UNK_0xee1a' codep=0x7394 parp=0xee1a
// ================================================
LoadDataType UNK_0xee1a = {REGIONSIDX, 0x04, 0x03, 0x1c, 0x6efc};

// ================================================
// 0xee20: WORD 'UNK_0xee22' codep=0x224c parp=0xee22
// ================================================

void UNK_0xee22() // UNK_0xee22
{
  UNK_0xedb8(); // UNK_0xedb8
  Push(pp_RECORD_n_); // RECORD#
  Store_2(); // !_2
  Push(0x0043);
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  LoadData(UNK_0xee1a); // from 'REGIONS'
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
// 0xee4c: WORD 'UNK_0xee4e' codep=0x224c parp=0xee4e
// ================================================

void UNK_0xee4e() // UNK_0xee4e
{
  do
  {
    _i_KEY(); // 'KEY
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    Push(Pop()==0?1:0); //  0=
    if (Pop() == 0) return;
    UNK_0xedea(); // UNK_0xedea
    Push(pp__i_SIMULA); // 'SIMULA
    GetEXECUTE(); // @EXECUTE
  } while(1);
}


// ================================================
// 0xee64: WORD 'UNK_0xee66' codep=0x224c parp=0xee66
// ================================================

void UNK_0xee66() // UNK_0xee66
{
  UNK_0xee4e(); // UNK_0xee4e
  Push(Pop() - 0x014d); //  0x014d -
}


// ================================================
// 0xee70: WORD 'UNK_0xee72' codep=0x224c parp=0xee72 params=2 returns=0
// ================================================

void UNK_0xee72() // UNK_0xee72
{
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+PHRASE.offset); // PHRASE<IFIELD>
  Push(Read16(0x65e1+PHR_dash_CNT.offset)&0xFF); // PHR-CNT<IFIELD> C@
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee80: WORD 'UNK_0xee82' codep=0x224c parp=0xee82 params=2 returns=2
// ================================================

void UNK_0xee82() // UNK_0xee82
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xee8e: WORD 'UNK_0xee90' codep=0x224c parp=0xee90
// ================================================

void UNK_0xee90() // UNK_0xee90
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
// 0xef04: WORD 'UNK_0xef06' codep=0x224c parp=0xef06 params=0 returns=2
// ================================================

void UNK_0xef06() // UNK_0xef06
{
  Push(Read16(pp_XVIS) - Read16(pp_XCON)); // XVIS @ XCON @ -
  Push(Read16(pp_YVIS) - Read16(pp_YCON)); // YVIS @ YCON @ -
}


// ================================================
// 0xef1c: WORD '2X2CONTOUR' codep=0x224c parp=0xef2b
// ================================================
// entry

void _2X2CONTOUR() // 2X2CONTOUR
{
  Push(0x6a82); // probable 'CONTOUR'
  SETLARR(); // SETLARR
  Push(0x91ff); // probable '.2X2CEL'
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push(1);
  Push(Read16(regsp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  UNK_0xef06(); // UNK_0xef06
  OVER(); // OVER
  Push(Pop() + 0x0022); //  0x0022 +
  OVER(); // OVER
  Push(Pop() + 0x003a); //  0x003a +
  SETREGI(); // SETREGI
  DrawREGION(); // .REGION
  UNK_0xee90(); // UNK_0xee90
}


// ================================================
// 0xef5f: WORD '4X4CONTOUR' codep=0x224c parp=0xef6e
// ================================================
// entry

void _4X4CONTOUR() // 4X4CONTOUR
{
  Push(0x6a82); // probable 'CONTOUR'
  SETLARR(); // SETLARR
  Push(0x9223); // probable '.4X4CEL'
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push(2);
  Push(Read16(regsp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  UNK_0xef06(); // UNK_0xef06
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
// 0xefae: WORD 'CBLT' codep=0x1d29 parp=0xefb7
// ================================================
// 0xefb7: db 0xff 0x66 0x00 0x66 ' f f'

// ================================================
// 0xefbb: WORD 'CBLTP' codep=0xefc5 parp=0xefc5
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
// 0xeff1: WORD 'UNK_0xeff3' codep=0x224c parp=0xeff3
// ================================================

void UNK_0xeff3() // UNK_0xeff3
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
// 0xf0b1: WORD '8X8CONTOUR' codep=0x224c parp=0xf0c0
// ================================================
// entry

void _8X8CONTOUR() // 8X8CONTOUR
{
  Push(0x6a82); // probable 'CONTOUR'
  SETLARR(); // SETLARR
  Push(0x9241); // probable '.8X8CEL'
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push2Words("0.");
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  UNK_0xef06(); // UNK_0xef06
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
  UNK_0xeff3(); // UNK_0xeff3
}


// ================================================
// 0xf100: WORD ''4X4' codep=0x1d29 parp=0xf109
// ================================================
// 0xf109: db 0x02 0xce '  '

// ================================================
// 0xf10b: WORD ''2X2' codep=0x1d29 parp=0xf114
// ================================================
// 0xf114: db 0xe0 0xcd '  '

// ================================================
// 0xf116: WORD ''8X8' codep=0x1d29 parp=0xf11f
// ================================================
// 0xf11f: db 0x24 0xce '$ '

// ================================================
// 0xf121: WORD 'UNK_0xf123' codep=0x224c parp=0xf123
// ================================================

void UNK_0xf123() // UNK_0xf123
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
// 0xf173: WORD 'UNK_0xf175' codep=0x224c parp=0xf175
// ================================================

void UNK_0xf175() // UNK_0xf175
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
  UNK_0xee90(); // UNK_0xee90
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  DrawLOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xf1bb: WORD 'UNK_0xf1bd' codep=0x224c parp=0xf1bd
// ================================================

void UNK_0xf1bd() // UNK_0xf1bd
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
// 0xf20b: WORD 'UNK_0xf20d' codep=0x224c parp=0xf20d
// ================================================

void UNK_0xf20d() // UNK_0xf20d
{
  Push(0x4a1c); Push(0x0002);
}


// ================================================
// 0xf215: WORD 'UNK_0xf217' codep=0x224c parp=0xf217
// ================================================

void UNK_0xf217() // UNK_0xf217
{
  Push(0x4f68); Push(0x0002);
}


// ================================================
// 0xf21f: WORD 'UNK_0xf221' codep=0x224c parp=0xf221
// ================================================

void UNK_0xf221() // UNK_0xf221
{
  Push(0x4f99); Push(0x0002);
}


// ================================================
// 0xf229: WORD 'UNK_0xf22b' codep=0x224c parp=0xf22b
// ================================================

void UNK_0xf22b() // UNK_0xf22b
{
  Push(0x4e1b); Push(0x0002);
}


// ================================================
// 0xf233: WORD 'UNK_0xf235' codep=0x224c parp=0xf235
// ================================================

void UNK_0xf235() // UNK_0xf235
{
  Push(0x4e36); Push(0x0002);
}


// ================================================
// 0xf23d: WORD 'UNK_0xf23f' codep=0x224c parp=0xf23f
// ================================================

void UNK_0xf23f() // UNK_0xf23f
{
  Push(0x4e58); Push(0x0002);
}


// ================================================
// 0xf247: WORD 'UNK_0xf249' codep=0x224c parp=0xf249
// ================================================

void UNK_0xf249() // UNK_0xf249
{
  Push(0x4e70); Push(0x0002);
}


// ================================================
// 0xf251: WORD 'UNK_0xf253' codep=0x224c parp=0xf253
// ================================================

void UNK_0xf253() // UNK_0xf253
{
  Push(0x4f06); Push(0x0002);
}


// ================================================
// 0xf25b: WORD 'UNK_0xf25d' codep=0x224c parp=0xf25d
// ================================================

void UNK_0xf25d() // UNK_0xf25d
{
  Push(0x4e9b); Push(0x0002);
}


// ================================================
// 0xf265: WORD 'UNK_0xf267' codep=0x224c parp=0xf267
// ================================================

void UNK_0xf267() // UNK_0xf267
{
  Push(0x4eec); Push(0x0002);
}


// ================================================
// 0xf26f: WORD 'UNK_0xf271' codep=0x224c parp=0xf271
// ================================================

void UNK_0xf271() // UNK_0xf271
{
  Push(0x4f2d); Push(0x0002);
}


// ================================================
// 0xf279: WORD 'UNK_0xf27b' codep=0x224c parp=0xf27b
// ================================================

void UNK_0xf27b() // UNK_0xf27b
{
  Push(0x4eca); Push(0x0002);
}


// ================================================
// 0xf283: WORD 'UNK_0xf285' codep=0x224c parp=0xf285
// ================================================

void UNK_0xf285() // UNK_0xf285
{
  Push(0x4f50); Push(0x0002);
}


// ================================================
// 0xf28d: WORD 'UNK_0xf28f' codep=0x224c parp=0xf28f
// ================================================

void UNK_0xf28f() // UNK_0xf28f
{
  Push(0x4f7f); Push(0x0002);
}


// ================================================
// 0xf297: WORD 'WPHRASE' codep=0x4b3b parp=0xf2a3
// ================================================

void WPHRASE() // WPHRASE
{
  switch(Pop()) // WPHRASE
  {
  case 0:
    UNK_0xf221(); // UNK_0xf221
    break;
  case 1:
    UNK_0xf217(); // UNK_0xf217
    break;
  case 2:
    UNK_0xf221(); // UNK_0xf221
    break;
  case 3:
    UNK_0xf22b(); // UNK_0xf22b
    break;
  case 4:
    UNK_0xf235(); // UNK_0xf235
    break;
  case 5:
    UNK_0xf23f(); // UNK_0xf23f
    break;
  case 6:
    UNK_0xf249(); // UNK_0xf249
    break;
  case 7:
    UNK_0xf253(); // UNK_0xf253
    break;
  case 8:
    UNK_0xf25d(); // UNK_0xf25d
    break;
  case 9:
    UNK_0xf267(); // UNK_0xf267
    break;
  case 10:
    UNK_0xf271(); // UNK_0xf271
    break;
  case 11:
    UNK_0xf27b(); // UNK_0xf27b
    break;
  case 12:
    UNK_0xf285(); // UNK_0xf285
    break;
  case 13:
    UNK_0xf28f(); // UNK_0xf28f
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf2df: WORD '(.STORM)' codep=0x224c parp=0xf2ec
// ================================================

void _ro__dot_STORM_rc_() // (.STORM)
{
  Push(Read16(pp_ATMO)==0?1:0); // ATMO @ 0=
  if (Pop() != 0)
  {
    UNK_0xf20d(); // UNK_0xf20d
  } else
  {
    Push(Read16(pp__n_STORM)); // #STORM @
    WPHRASE(); // WPHRASE case
  }
  UNK_0xee72(); // UNK_0xee72
}


// ================================================
// 0xf306: WORD '.ROCK' codep=0x224c parp=0xf310 params=0 returns=0
// ================================================

void DrawROCK() // .ROCK
{
  Push(Read16(pp_ATMO)); // ATMO @
  if (Pop() != 0)
  {
    Push(pp_P_dash_COLOR); // P-COLOR
    _1_dot_5_at_(); // 1.5@
    UNK_0xee72(); // UNK_0xee72
    SPACE(); // SPACE
  }
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  UNK_0xee72(); // UNK_0xee72
}


// ================================================
// 0xf328: WORD '.LIQUID' codep=0x224c parp=0xf334
// ================================================

void DrawLIQUID() // .LIQUID
{
  Push(pp_O_dash_COLOR); // O-COLOR
  _1_dot_5_at_(); // 1.5@
  UNK_0xee72(); // UNK_0xee72
  SPACE(); // SPACE
  Push(0x4b60); Push(0x0002);
  UNK_0xee72(); // UNK_0xee72
  GCR(); // GCR
  DrawROCK(); // .ROCK
}


// ================================================
// 0xf34a: WORD '.CRYSTAL' codep=0x224c parp=0xf357
// ================================================

void DrawCRYSTAL() // .CRYSTAL
{
  Push(0x4b77); Push(0x0002);
  UNK_0xee72(); // UNK_0xee72
}


// ================================================
// 0xf361: WORD '.ICE' codep=0x224c parp=0xf36a
// ================================================

void DrawICE() // .ICE
{
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  UNK_0xee72(); // UNK_0xee72
  GCR(); // GCR
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_at_(); // 1.5@
  UNK_0xee72(); // UNK_0xee72
  SPACE(); // SPACE
  Push(0x4a04); Push(0x0002);
  UNK_0xee72(); // UNK_0xee72
}


// ================================================
// 0xf384: WORD '.MOLTEN' codep=0x224c parp=0xf390 params=0 returns=0
// ================================================

void DrawMOLTEN() // .MOLTEN
{
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  UNK_0xee72(); // UNK_0xee72
  GCR(); // GCR
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_at_(); // 1.5@
  UNK_0xee72(); // UNK_0xee72
}


// ================================================
// 0xf3a0: WORD '.CARPET' codep=0x224c parp=0xf3ac params=0 returns=0
// ================================================

void DrawCARPET() // .CARPET
{
  Push(pp_P_dash_CARP); // P-CARP
  _1_dot_5_at_(); // 1.5@
  UNK_0xee82(); // UNK_0xee82
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    PRINT(", ", 2); // (.")
    GCR(); // GCR
    Push(0x4de8); Push(0x0002);
    UNK_0xee72(); // UNK_0xee72
    SPACE(); // SPACE
    UNK_0xee72(); // UNK_0xee72
    SPACE(); // SPACE
    Push(0x4dcd); Push(0x0002);
    UNK_0xee72(); // UNK_0xee72
  }
  PRINT(".", 1); // (.")
  GCR(); // GCR
}


// ================================================
// 0xf3dd: WORD '/SURF' codep=0x4b3b parp=0xf3e7
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
// 0xf3ff: WORD '.SURFACE' codep=0x224c parp=0xf40c
// ================================================

void DrawSURFACE() // .SURFACE
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(UNK_0xecfa); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  _slash_SURF(); // /SURF case
  DrawCARPET(); // .CARPET
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf41c: WORD 'UNK_0xf41e' codep=0x224c parp=0xf41e
// ================================================

void UNK_0xf41e() // UNK_0xf41e
{
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf424: WORD 'UNK_0xf426' codep=0x224c parp=0xf426
// ================================================

void UNK_0xf426() // UNK_0xf426
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf42c: WORD 'UNK_0xf42e' codep=0x224c parp=0xf42e
// ================================================

void UNK_0xf42e() // UNK_0xf42e
{
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  Push(Read16(cc_UNK_0xed42)); // UNK_0xed42
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  LoadData(UNK_0xed46); // from 'COMPOUNDS'
  _1_dot_5_at_(); // 1.5@
  UNK_0xee72(); // UNK_0xee72
}


// ================================================
// 0xf440: WORD 'UNK_0xf442' codep=0x224c parp=0xf442
// ================================================

void UNK_0xf442() // UNK_0xf442
{
  UNK_0xf41e(); // UNK_0xf41e
  PRINT("ATMO:", 5); // (.")
  UNK_0xf426(); // UNK_0xf426
  Push(Read16(pp_ATMO)); // ATMO @
  UNK_0xf42e(); // UNK_0xf42e
  GCR(); // GCR
}


// ================================================
// 0xf458: WORD 'UNK_0xf45a' codep=0x224c parp=0xf45a
// ================================================

void UNK_0xf45a() // UNK_0xf45a
{
  UNK_0xf41e(); // UNK_0xf41e
  PRINT("HYDRO:", 6); // (.")
  UNK_0xf426(); // UNK_0xf426
  Push(Read16(pp_HYDRO)); // HYDRO @
  UNK_0xf42e(); // UNK_0xf42e
  GCR(); // GCR
}


// ================================================
// 0xf471: WORD 'UNK_0xf473' codep=0x224c parp=0xf473
// ================================================

void UNK_0xf473() // UNK_0xf473
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
}


// ================================================
// 0xf479: WORD 'UNK_0xf47b' codep=0x224c parp=0xf47b
// ================================================

void UNK_0xf47b() // UNK_0xf47b
{
  UNK_0xf41e(); // UNK_0xf41e
  PRINT("TERRAIN:", 8); // (.")
  UNK_0xf426(); // UNK_0xf426
  DrawSURFACE(); // .SURFACE
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WTOP) - 0x001e); // WTOP @ 0x001e -
  POS_dot_(); // POS.
}


// ================================================
// 0xf49e: WORD 'UNK_0xf4a0' codep=0x224c parp=0xf4a0
// ================================================

void UNK_0xf4a0() // UNK_0xf4a0
{
  GCR(); // GCR
  UNK_0xf41e(); // UNK_0xf41e
  PRINT("SKY:", 4); // (.")
  UNK_0xf426(); // UNK_0xf426
  _ro__dot_STORM_rc_(); // (.STORM)
  GCR(); // GCR
}


// ================================================
// 0xf4b3: WORD 'UNK_0xf4b5' codep=0x224c parp=0xf4b5
// ================================================

void UNK_0xf4b5() // UNK_0xf4b5
{
  UNK_0xf41e(); // UNK_0xf41e
  PRINT("TEMPERATURE:", 12); // (.")
  UNK_0xf426(); // UNK_0xf426
  UNK_0xee22(); // UNK_0xee22
  UNK_0xf41e(); // UNK_0xf41e
  PRINT(" GRAVITY:", 9); // (.")
  UNK_0xf426(); // UNK_0xf426
  UNK_0xed4e(); // UNK_0xed4e
  GCR(); // GCR
}


// ================================================
// 0xf4e0: WORD 'UNK_0xf4e2' codep=0x224c parp=0xf4e2
// ================================================

void UNK_0xf4e2() // UNK_0xf4e2
{
  UNK_0xf473(); // UNK_0xf473
  Push(6);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  UNK_0xf4a0(); // UNK_0xf4a0
  UNK_0xf4b5(); // UNK_0xf4b5
  UNK_0xf442(); // UNK_0xf442
  UNK_0xf45a(); // UNK_0xf45a
  UNK_0xf47b(); // UNK_0xf47b
}


// ================================================
// 0xf4f6: WORD 'MAPS' codep=0x224c parp=0xf4ff
// ================================================
// entry

void MAPS() // MAPS
{
  Push(pp_FQUIT); // FQUIT
  _099(); // 099
  UNK_0xf4e2(); // UNK_0xf4e2
  Push(pp_ESC_dash_EN); // ESC-EN
  OFF_2(); // OFF_2
  Push(pp_NOF); // NOF
  ON_2(); // ON_2
  UNK_0xf123(); // UNK_0xf123
  UNK_0xee66(); // UNK_0xee66
  if (Pop() != 0)
  {
    UNK_0xf175(); // UNK_0xf175
    UNK_0xee66(); // UNK_0xee66
    if (Pop() != 0)
    {
      UNK_0xf123(); // UNK_0xf123
      UNK_0xee4e(); // UNK_0xee4e
      Pop(); // DROP
    }
  }
  UNK_0xf1bd(); // UNK_0xf1bd
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_1(); // ON_1
  Push(pp_NOF); // NOF
  _099(); // 099
}


// ================================================
// 0xf52f: WORD '.STORM' codep=0x224c parp=0xf53a
// ================================================
// entry

void DrawSTORM() // .STORM
{
  UNK_0xf473(); // UNK_0xf473
  UNK_0xf426(); // UNK_0xf426
  _ro__dot_STORM_rc_(); // (.STORM)
}

// 0xf542: db 0x4d 0x41 0x50 0x53 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'MAPS-VOC______________________ '

