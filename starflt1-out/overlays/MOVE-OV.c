// ====== OVERLAY 'MOVE-OV' ======
// store offset = 0xe680
// overlay size   = 0x0ee0

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe696  codep:0x224c parp:0xe696 size:0x002e C-string:'UNK_0xe696'
//      UNK_0xe6c6  codep:0x224c parp:0xe6c6 size:0x0018 C-string:'UNK_0xe6c6'
//      UNK_0xe6e0  codep:0x224c parp:0xe6e0 size:0x0020 C-string:'UNK_0xe6e0'
//      UNK_0xe702  codep:0x224c parp:0xe702 size:0x0020 C-string:'UNK_0xe702'
//      UNK_0xe724  codep:0x224c parp:0xe724 size:0x0026 C-string:'UNK_0xe724'
//      UNK_0xe74c  codep:0x224c parp:0xe74c size:0x0022 C-string:'UNK_0xe74c'
//      UNK_0xe770  codep:0x224c parp:0xe770 size:0x0022 C-string:'UNK_0xe770'
//      UNK_0xe794  codep:0x224c parp:0xe794 size:0x000a C-string:'UNK_0xe794'
//      UNK_0xe7a0  codep:0x224c parp:0xe7a0 size:0x000a C-string:'UNK_0xe7a0'
//      UNK_0xe7ac  codep:0x224c parp:0xe7ac size:0x000a C-string:'UNK_0xe7ac'
//      UNK_0xe7b8  codep:0x224c parp:0xe7b8 size:0x000a C-string:'UNK_0xe7b8'
//      UNK_0xe7c4  codep:0x744d parp:0xe7c4 size:0x0003 C-string:'UNK_0xe7c4'
//      UNK_0xe7c9  codep:0x744d parp:0xe7c9 size:0x0003 C-string:'UNK_0xe7c9'
//      UNK_0xe7ce  codep:0x224c parp:0xe7ce size:0x0018 C-string:'UNK_0xe7ce'
//      UNK_0xe7e8  codep:0x224c parp:0xe7e8 size:0x0018 C-string:'UNK_0xe7e8'
//      UNK_0xe802  codep:0x224c parp:0xe802 size:0x005a C-string:'UNK_0xe802'
//      UNK_0xe85e  codep:0x224c parp:0xe85e size:0x002e C-string:'UNK_0xe85e'
//       SET-SPEED  codep:0x224c parp:0xe89a size:0x002a C-string:'SET_dash_SPEED'
//      UNK_0xe8c6  codep:0x224c parp:0xe8c6 size:0x0016 C-string:'UNK_0xe8c6'
//            CBLT  codep:0x1d29 parp:0xe8e5 size:0x0004 C-string:'CBLT'
//           CBLTP  codep:0xe8f3 parp:0xe8f3 size:0x002c C-string:'CBLTP'
//      UNK_0xe921  codep:0x224c parp:0xe921 size:0x00c2 C-string:'UNK_0xe921'
//      UNK_0xe9e5  codep:0x224c parp:0xe9e5 size:0x005c C-string:'UNK_0xe9e5'
//          %STORM  codep:0x1d29 parp:0xea4c size:0x0130 C-string:'_pe_STORM'
//      UNK_0xeb7e  codep:0x224c parp:0xeb7e size:0x001c C-string:'UNK_0xeb7e'
//      UNK_0xeb9c  codep:0x1d29 parp:0xeb9c size:0x0002 C-string:'UNK_0xeb9c'
//      UNK_0xeba0  codep:0x1d29 parp:0xeba0 size:0x0002 C-string:'UNK_0xeba0'
//      UNK_0xeba4  codep:0x2214 parp:0xeba4 size:0x000a C-string:'UNK_0xeba4'
//      UNK_0xebb0  codep:0x224c parp:0xebb0 size:0x0012 C-string:'UNK_0xebb0'
//      UNK_0xebc4  codep:0x224c parp:0xebc4 size:0x001e C-string:'UNK_0xebc4'
//      UNK_0xebe4  codep:0x224c parp:0xebe4 size:0x000c C-string:'UNK_0xebe4'
//      UNK_0xebf2  codep:0x224c parp:0xebf2 size:0x000c C-string:'UNK_0xebf2'
//      UNK_0xec00  codep:0x224c parp:0xec00 size:0x0086 C-string:'UNK_0xec00'
//      UNK_0xec88  codep:0x224c parp:0xec88 size:0x000c C-string:'UNK_0xec88'
//      UNK_0xec96  codep:0x224c parp:0xec96 size:0x000e C-string:'UNK_0xec96'
//      UNK_0xeca6  codep:0x224c parp:0xeca6 size:0x004a C-string:'UNK_0xeca6'
//      UNK_0xecf2  codep:0x224c parp:0xecf2 size:0x0020 C-string:'UNK_0xecf2'
//      UNK_0xed14  codep:0x224c parp:0xed14 size:0x001e C-string:'UNK_0xed14'
//      UNK_0xed34  codep:0x224c parp:0xed34 size:0x000c C-string:'UNK_0xed34'
//      UNK_0xed42  codep:0x224c parp:0xed42 size:0x0008 C-string:'UNK_0xed42'
//      UNK_0xed4c  codep:0x224c parp:0xed4c size:0x002c C-string:'UNK_0xed4c'
//      UNK_0xed7a  codep:0x224c parp:0xed7a size:0x002c C-string:'UNK_0xed7a'
//      UNK_0xeda8  codep:0x224c parp:0xeda8 size:0x005c C-string:'UNK_0xeda8'
//      UNK_0xee06  codep:0x224c parp:0xee06 size:0x002c C-string:'UNK_0xee06'
//      UNK_0xee34  codep:0x224c parp:0xee34 size:0x0024 C-string:'UNK_0xee34'
//         ?POPULA  codep:0x224c parp:0xee64 size:0x0068 C-string:'IsPOPULA'
//      UNK_0xeece  codep:0x224c parp:0xeece size:0x004e C-string:'UNK_0xeece'
//      UNK_0xef1e  codep:0x224c parp:0xef1e size:0x0028 C-string:'UNK_0xef1e'
//      UNK_0xef48  codep:0x224c parp:0xef48 size:0x002a C-string:'UNK_0xef48'
//      UNK_0xef74  codep:0x224c parp:0xef74 size:0x00e4 C-string:'UNK_0xef74'
//      UNK_0xf05a  codep:0x224c parp:0xf05a size:0x0042 C-string:'UNK_0xf05a'
//      UNK_0xf09e  codep:0x224c parp:0xf09e size:0x0016 C-string:'UNK_0xf09e'
//      UNK_0xf0b6  codep:0x224c parp:0xf0b6 size:0x0008 C-string:'UNK_0xf0b6'
//      UNK_0xf0c0  codep:0x224c parp:0xf0c0 size:0x0060 C-string:'UNK_0xf0c0'
//      UNK_0xf122  codep:0x224c parp:0xf122 size:0x004a C-string:'UNK_0xf122'
//      UNK_0xf16e  codep:0x224c parp:0xf16e size:0x008e C-string:'UNK_0xf16e'
//      UNK_0xf1fe  codep:0x224c parp:0xf1fe size:0x0012 C-string:'UNK_0xf1fe'
//      UNK_0xf212  codep:0x224c parp:0xf212 size:0x007e C-string:'UNK_0xf212'
//      UNK_0xf292  codep:0x224c parp:0xf292 size:0x0008 C-string:'UNK_0xf292'
//      UNK_0xf29c  codep:0x224c parp:0xf29c size:0x001a C-string:'UNK_0xf29c'
//      UNK_0xf2b8  codep:0x224c parp:0xf2b8 size:0x0010 C-string:'UNK_0xf2b8'
//      UNK_0xf2ca  codep:0x224c parp:0xf2ca size:0x000c C-string:'UNK_0xf2ca'
//      UNK_0xf2d8  codep:0x224c parp:0xf2d8 size:0x0008 C-string:'UNK_0xf2d8'
//      UNK_0xf2e2  codep:0x224c parp:0xf2e2 size:0x0024 C-string:'UNK_0xf2e2'
//      UNK_0xf308  codep:0x224c parp:0xf308 size:0x0013 C-string:'UNK_0xf308'
//      UNK_0xf31d  codep:0x224c parp:0xf31d size:0x0036 C-string:'UNK_0xf31d'
//      UNK_0xf355  codep:0x224c parp:0xf355 size:0x0016 C-string:'UNK_0xf355'
//      UNK_0xf36d  codep:0x224c parp:0xf36d size:0x000c C-string:'UNK_0xf36d'
//      UNK_0xf37b  codep:0x224c parp:0xf37b size:0x000e C-string:'UNK_0xf37b'
//      UNK_0xf38b  codep:0x224c parp:0xf38b size:0x000a C-string:'UNK_0xf38b'
//      UNK_0xf397  codep:0x224c parp:0xf397 size:0x000e C-string:'UNK_0xf397'
//      UNK_0xf3a7  codep:0x224c parp:0xf3a7 size:0x004e C-string:'UNK_0xf3a7'
//         TV-MOVE  codep:0x224c parp:0xf401 size:0x0014 C-string:'TV_dash_MOVE'
//      plan-tseed  codep:0x73ea parp:0xf417 size:0x0006 C-string:'plan_dash_tseed'
//        APPROACH  codep:0x224c parp:0xf42a size:0x0000 C-string:'APPROACH'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_XLL; // XLL
extern const unsigned short int pp_YLL; // YLL
extern const unsigned short int pp__i_INJURE; // 'INJURE
extern const unsigned short int pp_LCOLOR; // LCOLOR
extern const unsigned short int pp__i_FLARE; // 'FLARE
extern const unsigned short int pp__ro_FLARE_rc_; // (FLARE)
extern const unsigned short int pp_IsTV; // ?TV
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_IsWIN; // ?WIN
extern const unsigned short int pp_IsNEW; // ?NEW
extern const unsigned short int pp_MOVED; // MOVED
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_DXVIS; // DXVIS
extern const unsigned short int pp_DYVIS; // DYVIS
extern const unsigned short int pp_XCON; // XCON
extern const unsigned short int pp_YCON; // YCON
extern const unsigned short int pp_DXCON; // DXCON
extern const unsigned short int pp_DYCON; // DYCON
extern const unsigned short int pp_XVIS; // XVIS
extern const unsigned short int pp_YVIS; // YVIS
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern const unsigned short int pp__pe_EFF; // %EFF
extern const unsigned short int pp__i_TVT; // 'TVT
extern const unsigned short int pp_E_slash_M; // E/M
extern const unsigned short int pp__n_STORM; // #STORM
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WBOTTOM; // WBOTTOM
extern const unsigned short int pp_WRIGHT; // WRIGHT
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp_SKEY; // SKEY
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp_TIME_dash_PASSING; // TIME-PASSING
extern const unsigned short int pp__n_CLRMAP; // #CLRMAP
extern const unsigned short int pp__i_SIMULA; // 'SIMULA
extern const unsigned short int pp__i_ENDING; // 'ENDING
extern const unsigned short int pp__i__dot_DATE; // '.DATE
extern const unsigned short int pp__i__dot_VEHICLE_dash_STATUS; // '.VEHICLE-STATUS
extern const unsigned short int pp__i_VEHICLE_dash_CYCLE; // 'VEHICLE-CYCLE
extern const unsigned short int pp__i_EXTERNAL_dash_EVENTS; // 'EXTERNAL-EVENTS
extern const unsigned short int pp__i_REPAIR; // 'REPAIR
extern const unsigned short int pp_LAST_dash_UPDATE; // LAST-UPDATE
extern const unsigned short int pp_ANCHOR_dash_CONTOUR; // ANCHOR-CONTOUR
extern const unsigned short int pp_TVEHICLE; // TVEHICLE
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp_THIS_dash_RE; // THIS-RE
extern LoadDataType ART_dash_VOL; // ART-VOL
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void _star__slash_(); // */
void ABS(); // ABS
void MIN(); // MIN
void DrawR(); // .R
void MS(); // MS
void NOP(); // NOP
void _2OVER(); // 2OVER
void D_eq_(); // D=
void RRND(); // RRND
void SQRT(); // SQRT
void ACELLADDR(); // ACELLADDR
void A_at_(); // A@
void SETLARRAY(); // SETLARRAY
void SETREGION(); // SETREGION
void Store_3(); // !_3
void _plus__ex_(); // +!
void _1_dot_5_ex_(); // 1.5!
void _2_ex_(); // 2!
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void IsNULL(); // ?NULL
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void INEXT(); // INEXT
void IINSERT(); // IINSERT
void ALL(); // ALL
void ICREATE(); // ICREATE
void StoreCOLOR(); // !COLOR
void VCLIPSET(); // VCLIPSET
void DCLIPSET(); // DCLIPSET
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void _gt_LORES(); // >LORES
void DARK(); // DARK
void BLT(); // BLT
void CELLCOLOR(); // CELLCOLOR
void StoreXYSEED(); // !XYSEED
void DrawREGION_plus_(); // .REGION+
void StoreVISWINDOW(); // !VISWINDOW
void StoreIX(); // !IX
void StoreIY(); // !IY
void POINT_gt_ICON(); // POINT>ICON
void DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
void IsICON_eq_I(); // ?ICON=I
void _dash_ICON(); // -ICON
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void _gt_TVCT(); // >TVCT
void BEEPON(); // BEEPON
void POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
void WINDOW(); // WINDOW
void GCR(); // GCR
void SHIP_dash_CONSOLE(); // SHIP-CONSOLE
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void IsNEW_dash_HO(); // ?NEW-HO
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void U_star_(); // U*
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void GetEXECUTE(); // @EXECUTE
void ON_2(); // ON_2
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void _gt_C(); // >C
void CI(); // CI
void V_gt_DISPLAY(); // V>DISPLAY
void BUFFERXY(); // BUFFERXY
void _ro_XYSCAN(); // (XYSCAN
void CBLTP(); // CBLTP


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_CBLT = 0xe8e5; // CBLT size: 4
// {0xff, 0x66, 0x00, 0x66}

const unsigned short int pp__pe_STORM = 0xea4c; // %STORM size: 304
// {0x00, 0x00, 0x14, 0x00, 0x28, 0x00, 0x3c, 0x00, 0x55, 0x00, 0x4c, 0x22, 0xf2, 0x5a, 0xae, 0x0b, 0x73, 0x3b, 0x2d, 0x12, 0xfa, 0x15, 0x08, 0x00, 0x5d, 0x17, 0xd8, 0xcd, 0xce, 0x84, 0x90, 0x16, 0x4c, 0x22, 0x2b, 0x54, 0xae, 0x0b, 0xfa, 0x15, 0x7e, 0x00, 0xb5, 0x5a, 0xae, 0x0b, 0xfa, 0x15, 0x0e, 0x00, 0xac, 0x3b, 0xb5, 0x5a, 0x83, 0x6d, 0x56, 0xea, 0x60, 0x16, 0x64, 0x00, 0xbd, 0x62, 0x02, 0x7a, 0x13, 0xea, 0xae, 0x0b, 0x4a, 0xea, 0x7f, 0x0e, 0x72, 0x0f, 0x72, 0x0f, 0xae, 0x0b, 0x2e, 0x0f, 0x5d, 0x17, 0x64, 0x00, 0xd8, 0x4a, 0x2d, 0x12, 0xfa, 0x15, 0x0c, 0x00, 0xcd, 0x5a, 0xae, 0x0b, 0xce, 0x84, 0x60, 0x16, 0x38, 0x00, 0x2e, 0x0f, 0x7b, 0x3b, 0xd8, 0x4a, 0xf2, 0x5a, 0x76, 0x6d, 0x5d, 0x17, 0xd8, 0xcd, 0xce, 0x84, 0x2e, 0x0f, 0x13, 0xea, 0xae, 0x0b, 0x83, 0x3b, 0xf2, 0x0e, 0x92, 0x0f, 0x75, 0x49, 0xd8, 0x4a, 0x5d, 0x17, 0x0c, 0x00, 0xad, 0x11, 0x20, 0x0f, 0x89, 0x11, 0xb5, 0x5a, 0x76, 0x6d, 0x5d, 0x17, 0x64, 0x00, 0xa9, 0x5a, 0xfd, 0x4b, 0xc9, 0x79, 0x1b, 0xea, 0x60, 0x16, 0x12, 0x00, 0xf2, 0x5a, 0xc5, 0x6d, 0xb5, 0x5a, 0xc5, 0x6d, 0x5d, 0x17, 0x64, 0x00, 0xa9, 0x5a, 0xfd, 0x4b, 0x90, 0x16, 0x4c, 0x22, 0x7a, 0x58, 0xae, 0x0b, 0x7a, 0x58, 0xc5, 0x6d, 0x5d, 0x17, 0x74, 0x00, 0x5d, 0x17, 0xb2, 0x00, 0x2b, 0xa0, 0x5d, 0x17, 0x0a, 0x00, 0x0a, 0x4f, 0x43, 0xa3, 0xb6, 0x4f, 0x17, 0x85, 0x72, 0x5e, 0xae, 0x0b, 0x5d, 0x17, 0x2c, 0x01, 0x60, 0x0f, 0x5d, 0x17, 0x0c, 0x12, 0x72, 0x0f, 0xf2, 0x0e, 0x5d, 0x17, 0x1e, 0x00, 0x60, 0x0f, 0xe7, 0x0f, 0xf2, 0x0e, 0xe7, 0x0f, 0x41, 0x0e, 0x5d, 0x17, 0x0a, 0x00, 0x46, 0x12, 0xfa, 0x15, 0x06, 0x00, 0xdc, 0x1b, 0x01, 0x30, 0x20, 0x0f, 0xe1, 0x27, 0xdc, 0x1b, 0x01, 0x2d, 0x41, 0x0e, 0x5d, 0x17, 0x0a, 0x00, 0x46, 0x12, 0xfa, 0x15, 0x06, 0x00, 0xdc, 0x1b, 0x01, 0x30, 0x20, 0x0f, 0xe1, 0x27, 0xdc, 0x1b, 0x01, 0x2d, 0x20, 0x0f, 0xe1, 0x27, 0x7a, 0x58, 0x76, 0x6d, 0x90, 0x16}

const unsigned short int pp_UNK_0xeb9c = 0xeb9c; // UNK_0xeb9c size: 2
// {0x01, 0x00}

const unsigned short int pp_UNK_0xeba0 = 0xeba0; // UNK_0xeba0 size: 2
// {0x00, 0x00}


const unsigned short int cc_UNK_0xeba4 = 0xeba4; // UNK_0xeba4


// 0xe692: db 0xe1 0x00 '  '

// ================================================
// 0xe694: WORD 'UNK_0xe696' codep=0x224c parp=0xe696
// ================================================

void UNK_0xe696() // UNK_0xe696
{
  IsNEW_dash_HO(); // ?NEW-HO
  if (Pop() == 0) return;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LAST_dash_UPDATE); // LAST-UPDATE
  StoreD(); // D!
  Push(1);
  Push(pp_STAR_dash_HR); // STAR-HR
  _plus__ex_(); // +!
  Push(pp_STAR_dash_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(0x0018);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) return;
  Push(pp_STAR_dash_HR); // STAR-HR
  OFF(); // OFF
  Push(1);
  Push(pp_STARDATE); // STARDATE
  _plus__ex_(); // +!
}


// ================================================
// 0xe6c4: WORD 'UNK_0xe6c6' codep=0x224c parp=0xe6c6
// ================================================

void UNK_0xe6c6() // UNK_0xe6c6
{
  Push(0x0040);
  Push(3);
  Push(7);
  Push(0x0026);
  WINDOW(); // WINDOW
  Push(-1);
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex_(); // +!
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xe6de: WORD 'UNK_0xe6e0' codep=0x224c parp=0xe6e0
// ================================================

void UNK_0xe6e0() // UNK_0xe6e0
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
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe700: WORD 'UNK_0xe702' codep=0x224c parp=0xe702
// ================================================

void UNK_0xe702() // UNK_0xe702
{
  UNK_0xe6c6(); // UNK_0xe6c6
  UNK_0xe6e0(); // UNK_0xe6e0
  SetColor("WHITE");
  StoreCOLOR(); // !COLOR
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  POS_dot_(); // POS.
}

// 0xe71a: db 0x4c 0x22 0x89 0x12 0x89 0x12 0x90 0x16 'L"      '

// ================================================
// 0xe722: WORD 'UNK_0xe724' codep=0x224c parp=0xe724
// ================================================

void UNK_0xe724() // UNK_0xe724
{
  Push(0x01e0);
  _dash_(); // -
  Push(0x000a);
  Push(0x0035);
  _star__slash_(); // */
  SWAP(); // SWAP
  Push(0x0480);
  _dash_(); // -
  Push(0x000a);
  Push(0x0040);
  _star__slash_(); // */
  SWAP(); // SWAP
}


// ================================================
// 0xe74a: WORD 'UNK_0xe74c' codep=0x224c parp=0xe74c
// ================================================

void UNK_0xe74c() // UNK_0xe74c
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      PRINT("W", 1); // (.")
    } else
    {
      PRINT("E", 1); // (.")
    }
    return;
  }
  PRINT(" ", 1); // (.")
}


// ================================================
// 0xe76e: WORD 'UNK_0xe770' codep=0x224c parp=0xe770
// ================================================

void UNK_0xe770() // UNK_0xe770
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      PRINT("S", 1); // (.")
    } else
    {
      PRINT("N", 1); // (.")
    }
    return;
  }
  PRINT(" ", 1); // (.")
}


// ================================================
// 0xe792: WORD 'UNK_0xe794' codep=0x224c parp=0xe794
// ================================================

void UNK_0xe794() // UNK_0xe794
{
  Push(0x63ef+INST_dash_X.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(0x63ef+INST_dash_Y.offset); // IFIELD
  Push(Read16(Pop())); // @
}


// ================================================
// 0xe79e: WORD 'UNK_0xe7a0' codep=0x224c parp=0xe7a0
// ================================================

void UNK_0xe7a0() // UNK_0xe7a0
{
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  UNK_0xe794(); // UNK_0xe794
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe7aa: WORD 'UNK_0xe7ac' codep=0x224c parp=0xe7ac
// ================================================

void UNK_0xe7ac() // UNK_0xe7ac
{
  Push(0x63ef+INST_dash_Y.offset); // IFIELD
  Store_3(); // !_3
  Push(0x63ef+INST_dash_X.offset); // IFIELD
  Store_3(); // !_3
}


// ================================================
// 0xe7b6: WORD 'UNK_0xe7b8' codep=0x224c parp=0xe7b8
// ================================================

void UNK_0xe7b8() // UNK_0xe7b8
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
}


// ================================================
// 0xe7c2: WORD 'UNK_0xe7c4' codep=0x744d parp=0xe7c4
// ================================================
IFieldType UNK_0xe7c4 = {0x11, 0x17, 0x03};

// ================================================
// 0xe7c7: WORD 'UNK_0xe7c9' codep=0x744d parp=0xe7c9
// ================================================
IFieldType UNK_0xe7c9 = {0x10, 0x1b, 0x01};

// ================================================
// 0xe7cc: WORD 'UNK_0xe7ce' codep=0x224c parp=0xe7ce
// ================================================

void UNK_0xe7ce() // UNK_0xe7ce
{
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+UNK_0xe7c4.offset); // IFIELD
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+UNK_0xe7c9.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0x00c7);
  _gt_(); // >
}


// ================================================
// 0xe7e6: WORD 'UNK_0xe7e8' codep=0x224c parp=0xe7e8
// ================================================

void UNK_0xe7e8() // UNK_0xe7e8
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x00c5);
  Push(0x000c);
  Push(0x00c1);
  Push(0x0044);
  Push(a); // R>
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
}


// ================================================
// 0xe800: WORD 'UNK_0xe802' codep=0x224c parp=0xe802
// ================================================

void UNK_0xe802() // UNK_0xe802
{
  Push(pp__n_STORM); // #STORM
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(4);
  _st_(); // <
  SWAP(); // SWAP
  Push(0x000b);
  _gt_(); // >
  Push(Pop() | Pop()); // OR
  UNK_0xe7ce(); // UNK_0xe7ce
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  SetColor("WHITE");
  StoreCOLOR(); // !COLOR
  UNK_0xe7a0(); // UNK_0xe7a0
  UNK_0xe724(); // UNK_0xe724
  Push(0x0010);
  Push(0x00c5);
  POS_dot_(); // POS.
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); // NEGATE
  }
  Push(4);
  DrawR(); // .R
  UNK_0xe770(); // UNK_0xe770
  PRINT(" * ", 3); // (.")
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); // NEGATE
  }
  Push(0);
  DrawR(); // .R
  UNK_0xe74c(); // UNK_0xe74c
}


// ================================================
// 0xe85c: WORD 'UNK_0xe85e' codep=0x224c parp=0xe85e
// ================================================

void UNK_0xe85e() // UNK_0xe85e
{
  Push(0x6ac1); // probable 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  _dash_(); // -
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  _dash_(); // -
}

// 0xe87c: db 0x4c 0x22 0x5c 0xe8 0x4e 0x4d 0x90 0x4d 0x5d 0x17 0x10 0x00 0x46 0x12 0x90 0x16 'L"\ NM M]   F   '

// ================================================
// 0xe88c: WORD 'SET-SPEED' codep=0x224c parp=0xe89a
// ================================================
// entry

void SET_dash_SPEED() // SET-SPEED
{
  UNK_0xe85e(); // UNK_0xe85e
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(Read16(regsp)); // DUP
  Push(0x0010);
  _st_(); // <
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(0xff56);
  } else
  {
    Push(3);
    Push(2);
    _star__slash_(); // */
    Push(-Pop()); // NEGATE
  }
  Push(pp_E_slash_M); // E/M
  Store_3(); // !_3
}


// ================================================
// 0xe8c4: WORD 'UNK_0xe8c6' codep=0x224c parp=0xe8c6
// ================================================

void UNK_0xe8c6() // UNK_0xe8c6
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
// 0xe8dc: WORD 'CBLT' codep=0x1d29 parp=0xe8e5
// ================================================
// 0xe8e5: db 0xff 0x66 0x00 0x66 ' f f'

// ================================================
// 0xe8e9: WORD 'CBLTP' codep=0xe8f3 parp=0xe8f3
// ================================================
// 0xe8f3: pop    ax
// 0xe8f4: add    ax,0003
// 0xe8f7: mov    [5863],ax
// 0xe8fb: pop    ax
// 0xe8fc: add    ax,0006
// 0xe8ff: mov    [586E],ax
// 0xe903: mov    word ptr [5892],0004
// 0xe909: mov    word ptr [5887],0006
// 0xe90f: mov    word ptr [589D],E8E5
// 0xe915: push   ds
// 0xe916: pop    word ptr [58AA]
// 0xe91a: lodsw
// 0xe91b: mov    bx,ax
// 0xe91d: jmp    word ptr [bx]

// ================================================
// 0xe91f: WORD 'UNK_0xe921' codep=0x224c parp=0xe921
// ================================================

void UNK_0xe921() // UNK_0xe921
{
  unsigned short int i, imax, j, jmax, a, b, c, d;
  Push(pp_BLTSEG); // BLTSEG
  Push(Read16(Pop())); // @
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
      if (Pop() != 0)
      {
        Push(a); // R>
        if (Pop() == 0) Push(1); else Push(0); // NOT
        b = Pop(); // >R
      }
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
      if (Pop() != 0)
      {
        Push(c); // R>
        if (Pop() == 0) Push(1); else Push(0); // NOT
        d = Pop(); // >R
      }
      Push(d); // I
      Push(b); // I'
      Push(Pop() | Pop()); // OR
      if (Pop() != 0)
      {
        Push(d); // I
        Push(b); // I'
        Push((Pop()==Pop())?1:0); // =
        if (Pop() == 0) Push(1); else Push(0); // NOT
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
          _st__ex__gt_(); // <!>
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

  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
}


// ================================================
// 0xe9e3: WORD 'UNK_0xe9e5' codep=0x224c parp=0xe9e5
// ================================================

void UNK_0xe9e5() // UNK_0xe9e5
{
  Push(0x6ac1); // probable 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  UNK_0xe8c6(); // UNK_0xe8c6
  Push(0x0016);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x000d);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  OVER(); // OVER
  Push(8);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(0x000e);
  Push(Pop() + Pop()); // +
  SETREGION(); // SETREGION
  DrawREGION_plus_(); // .REGION+
  UNK_0xe921(); // UNK_0xe921
}

// 0xea13: db 0xea 0x73 0x20 0x11 0x02 0x16 0x8f 0x65 0x4c 0x22 0xf2 0x5a 0xae 0x0b 0x8b 0x3b 0x5d 0x17 0x0b 0x00 0x57 0x40 0xfa 0x15 0x14 0x00 0x20 0x0f 0x73 0x3b 0xd8 0x4a 0x89 0x12 0xfa 0x15 0x08 0x00 0xd9 0x53 0xae 0x0b 0xce 0x84 0x90 0x16 ' s     eL" Z   ;]   W@      s; J       S      '

// ================================================
// 0xea41: WORD '%STORM' codep=0x1d29 parp=0xea4c
// ================================================
// 0xea4c: db 0x00 0x00 0x14 0x00 0x28 0x00 0x3c 0x00 0x55 0x00 0x4c 0x22 0xf2 0x5a 0xae 0x0b 0x73 0x3b 0x2d 0x12 0xfa 0x15 0x08 0x00 0x5d 0x17 0xd8 0xcd 0xce 0x84 0x90 0x16 0x4c 0x22 0x2b 0x54 0xae 0x0b 0xfa 0x15 0x7e 0x00 0xb5 0x5a 0xae 0x0b 0xfa 0x15 0x0e 0x00 0xac 0x3b 0xb5 0x5a 0x83 0x6d 0x56 0xea 0x60 0x16 0x64 0x00 0xbd 0x62 0x02 0x7a 0x13 0xea 0xae 0x0b 0x4a 0xea 0x7f 0x0e 0x72 0x0f 0x72 0x0f 0xae 0x0b 0x2e 0x0f 0x5d 0x17 0x64 0x00 0xd8 0x4a 0x2d 0x12 0xfa 0x15 0x0c 0x00 0xcd 0x5a 0xae 0x0b 0xce 0x84 0x60 0x16 0x38 0x00 0x2e 0x0f 0x7b 0x3b 0xd8 0x4a 0xf2 0x5a 0x76 0x6d 0x5d 0x17 0xd8 0xcd 0xce 0x84 0x2e 0x0f 0x13 0xea 0xae 0x0b 0x83 0x3b 0xf2 0x0e 0x92 0x0f 0x75 0x49 0xd8 0x4a 0x5d 0x17 0x0c 0x00 0xad 0x11 0x20 0x0f 0x89 0x11 0xb5 0x5a 0x76 0x6d 0x5d 0x17 0x64 0x00 0xa9 0x5a 0xfd 0x4b 0xc9 0x79 0x1b 0xea 0x60 0x16 0x12 0x00 0xf2 0x5a 0xc5 0x6d 0xb5 0x5a 0xc5 0x6d 0x5d 0x17 0x64 0x00 0xa9 0x5a 0xfd 0x4b 0x90 0x16 0x4c 0x22 0x7a 0x58 0xae 0x0b 0x7a 0x58 0xc5 0x6d 0x5d 0x17 0x74 0x00 0x5d 0x17 0xb2 0x00 0x2b 0xa0 0x5d 0x17 0x0a 0x00 0x0a 0x4f 0x43 0xa3 0xb6 0x4f 0x17 0x85 0x72 0x5e 0xae 0x0b 0x5d 0x17 0x2c 0x01 0x60 0x0f 0x5d 0x17 0x0c 0x12 0x72 0x0f 0xf2 0x0e 0x5d 0x17 0x1e 0x00 0x60 0x0f 0xe7 0x0f 0xf2 0x0e 0xe7 0x0f 0x41 0x0e 0x5d 0x17 0x0a 0x00 0x46 0x12 0xfa 0x15 0x06 0x00 0xdc 0x1b 0x01 0x30 0x20 0x0f 0xe1 0x27 0xdc 0x1b 0x01 0x2d 0x41 0x0e 0x5d 0x17 0x0a 0x00 0x46 0x12 0xfa 0x15 0x06 0x00 0xdc 0x1b 0x01 0x30 0x20 0x0f 0xe1 0x27 0xdc 0x1b 0x01 0x2d 0x20 0x0f 0xe1 0x27 0x7a 0x58 0x76 0x6d 0x90 0x16 '    ( < U L" Z  s;-     ]       L"+T    ~  Z       ; Z mV ` d  b z    J  r r   . ] d  J-      Z    ` 8 . {; J Zvm]     .      ;    uI J]          Zvm] d  Z K y  `    Z m Z m] d  Z K  L"zX  zX m] t ]   + ]    OC  O  r^  ] , ` ]   r   ]   `       A ]   F        0   '   -A ]   F        0   '   -   'zXvm  '

// ================================================
// 0xeb7c: WORD 'UNK_0xeb7e' codep=0x224c parp=0xeb7e
// ================================================

void UNK_0xeb7e() // UNK_0xeb7e
{
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(pp__ro_FLARE_rc_); // (FLARE)
  Push(Read16(Pop())); // @
  Push((Pop()==Pop())?1:0); // =
  Push(pp_IsWIN); // ?WIN
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(pp__i_FLARE); // 'FLARE
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xeb9a: WORD 'UNK_0xeb9c' codep=0x1d29 parp=0xeb9c
// ================================================
// 0xeb9c: db 0x01 0x00 '  '

// ================================================
// 0xeb9e: WORD 'UNK_0xeba0' codep=0x1d29 parp=0xeba0
// ================================================
// 0xeba0: db 0x00 0x00 '  '

// ================================================
// 0xeba2: WORD 'UNK_0xeba4' codep=0x2214 parp=0xeba4
// ================================================
// 0xeba4: dw 0x07d0
// 0xeba6: db 0xea 0x73 0x44 0x90 0x02 0x9c 0xd8 0x69 ' sD    i'

// ================================================
// 0xebae: WORD 'UNK_0xebb0' codep=0x224c parp=0xebb0
// ================================================

void UNK_0xebb0() // UNK_0xebb0
{
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  UNK_0xe7ac(); // UNK_0xe7ac
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xebc2: WORD 'UNK_0xebc4' codep=0x224c parp=0xebc4
// ================================================

void UNK_0xebc4() // UNK_0xebc4
{
  Push(pp_UNK_0xeb9c); // UNK_0xeb9c
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(pp_DXVIS); // DXVIS
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  _st__plus__ex__gt_(); // <+!>
  Push(pp_UNK_0xeba0); // UNK_0xeba0
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(pp_DYVIS); // DYVIS
  _st__ex__gt_(); // <!>
  Push(pp_YVIS); // YVIS
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xebe2: WORD 'UNK_0xebe4' codep=0x224c parp=0xebe4
// ================================================

void UNK_0xebe4() // UNK_0xebe4
{
  Push(Read16(regsp)); // DUP
  Push(pp_DXCON); // DXCON
  _st__ex__gt_(); // <!>
  Push(pp_XCON); // XCON
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xebf0: WORD 'UNK_0xebf2' codep=0x224c parp=0xebf2
// ================================================

void UNK_0xebf2() // UNK_0xebf2
{
  Push(Read16(regsp)); // DUP
  Push(pp_DYCON); // DYCON
  _st__ex__gt_(); // <!>
  Push(pp_YCON); // YCON
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xebfe: WORD 'UNK_0xec00' codep=0x224c parp=0xec00
// ================================================

void UNK_0xec00() // UNK_0xec00
{
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  _2DUP(); // 2DUP
  Push(Pop()-1); // 1-
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(0xfff4);
  } else
  {
    Push(0x001a);
    Push(Pop() + Pop()); // +
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Push(0x000c);
    } else
    {
      Push(0);
    }
  }
  UNK_0xebe4(); // UNK_0xebe4
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  _2DUP(); // 2DUP
  Push(Pop()-1); // 1-
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(0xffec);
  } else
  {
    Push(0x002a);
    Push(Pop() + Pop()); // +
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Push(0x0014);
    } else
    {
      Push(0);
    }
  }
  UNK_0xebf2(); // UNK_0xebf2
  Push(pp_DXCON); // DXCON
  Push(Read16(Pop())); // @
  Push(pp_DYCON); // DYCON
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(0xc33e); // probable 'SCRLCON'
  MODULE(); // MODULE
}

// 0xec7e: db 0x4c 0x22 0xf0 0x0d 0x12 0x7e 0x90 0x16 'L"   ~  '

// ================================================
// 0xec86: WORD 'UNK_0xec88' codep=0x224c parp=0xec88
// ================================================

void UNK_0xec88() // UNK_0xec88
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xec94: WORD 'UNK_0xec96' codep=0x224c parp=0xec96
// ================================================

void UNK_0xec96() // UNK_0xec96
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  _2_ex_(); // 2!
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xeca4: WORD 'UNK_0xeca6' codep=0x224c parp=0xeca6
// ================================================

void UNK_0xeca6() // UNK_0xeca6
{
  _gt_C(); // >C
  SET_dash_CURRENT(); // SET-CURRENT
  CI(); // CI
  IsICON_eq_I(); // ?ICON=I
  if (Pop() != 0)
  {
    POINT_gt_ICON(); // POINT>ICON
    UNK_0xe794(); // UNK_0xe794
    StoreIY(); // !IY
    StoreIX(); // !IX
  }
  ICLOSE(); // ICLOSE
}

// 0xecbe: db 0x4c 0x22 0xb7 0x74 0xae 0x0b 0xc5 0x74 0xae 0x0b 0x5d 0x17 0xfe 0x00 0x14 0x51 0x75 0x75 0x90 0x16 0x4c 0x22 0x1e 0x75 0x5d 0x17 0x1b 0x00 0x5f 0x12 0xfa 0x15 0x08 0x00 0xbe 0xec 0x60 0x16 0x08 0x00 0x5d 0x17 0x37 0xc4 0xce 0x84 0x0e 0x9f 0x90 0x16 'L" t   t  ]    Quu  L" u]   _       `   ] 7       '

// ================================================
// 0xecf0: WORD 'UNK_0xecf2' codep=0x224c parp=0xecf2
// ================================================

void UNK_0xecf2() // UNK_0xecf2
{
  IOPEN(); // IOPEN
  IsNULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    Push(0xecd4);
    ALL(); // ALL
    Push(0xec78);
    Push(Read16(regsp)); // DUP
    Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
    _2_ex_(); // 2!
    ORGLIST(); // ORGLIST
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed12: WORD 'UNK_0xed14' codep=0x224c parp=0xed14
// ================================================

void UNK_0xed14() // UNK_0xed14
{
  Push(0x001e);
  _slash_(); // /
  Push(0x001e);
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(0x0012);
  _slash_(); // /
  Push(0x0012);
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
}


// ================================================
// 0xed32: WORD 'UNK_0xed34' codep=0x224c parp=0xed34
// ================================================

void UNK_0xed34() // UNK_0xed34
{
  Push(0x63ef+INST_dash_X.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(0x63ef+INST_dash_Y.offset); // IFIELD
  Push(Read16(Pop())); // @
  StoreXYSEED(); // !XYSEED
}


// ================================================
// 0xed40: WORD 'UNK_0xed42' codep=0x224c parp=0xed42
// ================================================

void UNK_0xed42() // UNK_0xed42
{
  UNK_0xe7b8(); // UNK_0xe7b8
  UNK_0xed14(); // UNK_0xed14
  UNK_0xe7ac(); // UNK_0xe7ac
}


// ================================================
// 0xed4a: WORD 'UNK_0xed4c' codep=0x224c parp=0xed4c
// ================================================

void UNK_0xed4c() // UNK_0xed4c
{
  Push(0x000b);
  Push(0x000b);
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  _2DUP(); // 2DUP
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_ex_(); // 1.5!
  _2DUP(); // 2DUP
  _gt_C(); // >C
  SET_dash_CURRENT(); // SET-CURRENT
  UNK_0xed42(); // UNK_0xed42
  UNK_0xed34(); // UNK_0xed34
  Push(0);
  Push(0x63ef+INST_dash_QTY.offset); // IFIELD
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed78: WORD 'UNK_0xed7a' codep=0x224c parp=0xed7a
// ================================================

void UNK_0xed7a() // UNK_0xed7a
{
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  UNK_0xec88(); // UNK_0xec88
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    _gt_C_plus_S(); // >C+S
    UNK_0xe7b8(); // UNK_0xe7b8
    UNK_0xed14(); // UNK_0xed14
    UNK_0xe794(); // UNK_0xe794
    D_eq_(); // D=
    if (Pop() != 0)
    {
      Push(0);
    } else
    {
      Push(1);
    }
    ICLOSE(); // ICLOSE
    return;
  }
  Push(1);
}


// ================================================
// 0xeda6: WORD 'UNK_0xeda8' codep=0x224c parp=0xeda8
// ================================================

void UNK_0xeda8() // UNK_0xeda8
{
  unsigned short int a, b;
  UNK_0xe7b8(); // UNK_0xe7b8
  UNK_0xed14(); // UNK_0xed14
  Push2Words("NULL");
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN

  label4:
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  IsLAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(0x000b);
  Push((Pop()==Pop())?1:0); // =
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(0x000b);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    _2DUP(); // 2DUP
    UNK_0xe794(); // UNK_0xe794
    D_eq_(); // D=
    if (Pop() != 0)
    {
      CI(); // CI
    } else
    {
      Push2Words("0.");
    }
  }
  INEXT(); // INEXT
  goto label4;

  label1:
  a = Pop(); // >R
  b = Pop(); // >R
  Pop(); Pop(); // 2DROP
  Push(b); // R>
  Push(a); // R>
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee04: WORD 'UNK_0xee06' codep=0x224c parp=0xee06
// ================================================

void UNK_0xee06() // UNK_0xee06
{
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
  StoreVISWINDOW(); // !VISWINDOW
}


// ================================================
// 0xee32: WORD 'UNK_0xee34' codep=0x224c parp=0xee34
// ================================================

void UNK_0xee34() // UNK_0xee34
{
  _2DUP(); // 2DUP
  _gt_C(); // >C
  SET_dash_CURRENT(); // SET-CURRENT
  IOPEN(); // IOPEN
  CI(); // CI
  IsICON_eq_I(); // ?ICON=I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    ICLOSE(); // ICLOSE
    UNK_0xecf2(); // UNK_0xecf2
    IOPEN(); // IOPEN
  } else
  {
    Pop(); // DROP
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee58: WORD '?POPULA' codep=0x224c parp=0xee64
// ================================================
// entry

void IsPOPULA() // ?POPULA
{
  UNK_0xed7a(); // UNK_0xed7a
  if (Pop() == 0) return;
  Push(pp_IsNEW); // ?NEW
  ON_3(); // ON_3
  UNK_0xeda8(); // UNK_0xeda8
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    UNK_0xed4c(); // UNK_0xed4c
    Push(pp__ro_PLANET); // (PLANET
    Get_gt_C_plus_S(); // @>C+S
    IOPEN(); // IOPEN
    CDROP(); // CDROP
    _gt_C_plus_S(); // >C+S
    Push(pp_MOVED); // MOVED
    Push(Read16(Pop())); // @
    if (Pop() != 0)
    {
      UNK_0xe702(); // UNK_0xe702
      PRINT("SCANNING NEW TERRAIN ", 21); // (.")
    }
    Push(0xce7c); // probable 'POPULA'
    MODULE(); // MODULE
    UNK_0xecf2(); // UNK_0xecf2
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
    Push(pp_MOVED); // MOVED
    Push(Read16(Pop())); // @
    if (Pop() != 0)
    {
      UNK_0xe6e0(); // UNK_0xe6e0
    }
    return;
  }
  UNK_0xee34(); // UNK_0xee34
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xeecc: WORD 'UNK_0xeece' codep=0x224c parp=0xeece
// ================================================

void UNK_0xeece() // UNK_0xeece
{
  SetColor("PINK");
  UNK_0xe7e8(); // UNK_0xe7e8
  UNK_0xe802(); // UNK_0xe802
  Push(pp_IsNEW); // ?NEW
  ON_3(); // ON_3
  Push(pp_MOVED); // MOVED
  ON_3(); // ON_3
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xeb9c); // UNK_0xeb9c
  _st__ex__gt_(); // <!>
  Push(pp_XABS); // XABS
  _st__plus__ex__gt_(); // <+!>
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xeba0); // UNK_0xeba0
  _st__ex__gt_(); // <!>
  Push(pp_YABS); // YABS
  _st__plus__ex__gt_(); // <+!>
  UNK_0xebc4(); // UNK_0xebc4
  UNK_0xec00(); // UNK_0xec00
  IsPOPULA(); // ?POPULA
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  UNK_0xee06(); // UNK_0xee06
  UNK_0xebb0(); // UNK_0xebb0
  Push(pp_TVEHICLE); // TVEHICLE
  _1_dot_5_at_(); // 1.5@
  UNK_0xeca6(); // UNK_0xeca6
  UNK_0xec96(); // UNK_0xec96
  UNK_0xe9e5(); // UNK_0xe9e5
  DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
  SetColor("GREEN");
  UNK_0xe7e8(); // UNK_0xe7e8
  UNK_0xe802(); // UNK_0xe802
  UNK_0xe696(); // UNK_0xe696
  UNK_0xeb7e(); // UNK_0xeb7e
}


// ================================================
// 0xef1c: WORD 'UNK_0xef1e' codep=0x224c parp=0xef1e
// ================================================

void UNK_0xef1e() // UNK_0xef1e
{
  unsigned short int a;
  _2OVER(); // 2OVER
  ROT(); // ROT
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    ABS(); // ABS
    _slash_(); // /
  }
  a = Pop(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    ABS(); // ABS
    _slash_(); // /
  }
  Push(a); // R>
}


// ================================================
// 0xef46: WORD 'UNK_0xef48' codep=0x224c parp=0xef48
// ================================================

void UNK_0xef48() // UNK_0xef48
{
  Push(0x001c);
  Push(0x0033);
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  _gt_C_plus_S(); // >C+S
  UNK_0xe7b8(); // UNK_0xe7b8
  UNK_0xe7ac(); // UNK_0xe7ac
  Push(0x0bb8);
  Push(Read16(regsp)); // DUP
  LoadData(ART_dash_VOL); // from 'ARTIFACT    '
  Store_3(); // !_3
  Push(0x63ef+INST_dash_QTY.offset); // IFIELD
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef72: WORD 'UNK_0xef74' codep=0x224c parp=0xef74
// ================================================

void UNK_0xef74() // UNK_0xef74
{
  Push(0);
  Push(1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("NORTH", 5); // (.")
    return;
  }
  Push(1);
  Push(1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("NORTHEAST", 9); // (.")
    return;
  }
  Push(1);
  Push(0);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("EAST", 4); // (.")
    return;
  }
  Push(1);
  Push(-1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("SOUTHEAST", 9); // (.")
    return;
  }
  Push(0);
  Push(-1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("SOUTH", 5); // (.")
    return;
  }
  Push(-1);
  Push(-1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("SOUTHWEST", 9); // (.")
    return;
  }
  Push(-1);
  Push(0);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("WEST", 4); // (.")
    return;
  }
  Push(-1);
  Push(1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("NORTHWEST", 9); // (.")
    return;
  }
  Pop(); // DROP
  Pop(); // DROP
}


// ================================================
// 0xf058: WORD 'UNK_0xf05a' codep=0x224c parp=0xf05a
// ================================================

void UNK_0xf05a() // UNK_0xf05a
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xe7b8(); // UNK_0xe7b8
  Push(0x63ef+INST_dash_Y.offset); // IFIELD
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  ROT(); // ROT
  Push(0x63ef+INST_dash_X.offset); // IFIELD
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  D_plus_(); // D+
  SQRT(); // SQRT
}

// 0xf080: db 0x4c 0x22 0x69 0x54 0xae 0x0b 0x64 0x5e 0xae 0x0b 0x92 0x0f 0x41 0x0e 0xfa 0x15 0x0a 0x00 0x64 0x5e 0xae 0x0b 0x69 0x54 0x76 0x6d 0x90 0x16 'L"iT  d^    A     d^  iTvm  '

// ================================================
// 0xf09c: WORD 'UNK_0xf09e' codep=0x224c parp=0xf09e
// ================================================

void UNK_0xf09e() // UNK_0xf09e
{
  Push(pp__n_STORM); // #STORM
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(4);
  _st_(); // <
  SWAP(); // SWAP
  Push(0x000b);
  _gt_(); // >
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf0b4: WORD 'UNK_0xf0b6' codep=0x224c parp=0xf0b6
// ================================================

void UNK_0xf0b6() // UNK_0xf0b6
{
  UNK_0xf09e(); // UNK_0xf09e
  UNK_0xe7ce(); // UNK_0xe7ce
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf0be: WORD 'UNK_0xf0c0' codep=0x224c parp=0xf0c0
// ================================================

void UNK_0xf0c0() // UNK_0xf0c0
{
  _gt_DISPLAY(); // >DISPLAY
  Push(0x0074);
  Push(0x0096);
  POS_dot_(); // POS.
  Push(8);
  SetColor("BLACK");
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  SetColor("WHITE");
  StoreCOLOR(); // !COLOR
  UNK_0xf0b6(); // UNK_0xf0b6
  if (Pop() != 0)
  {
    UNK_0xf05a(); // UNK_0xf05a
    Push(5);
    DrawR(); // .R
    PRINT("KM.", 3); // (.")
  } else
  {
    PRINT("LOST!", 5); // (.")
  }
  Push(0x0074);
  Push(0x008f);
  POS_dot_(); // POS.
  Push(9);
  SetColor("BLACK");
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  SetColor("WHITE");
  StoreCOLOR(); // !COLOR
  UNK_0xf0b6(); // UNK_0xf0b6
  if (Pop() == 0) return;
  UNK_0xe7b8(); // UNK_0xe7b8
  UNK_0xe794(); // UNK_0xe794
  ICLOSE(); // ICLOSE
  UNK_0xef1e(); // UNK_0xef1e
  _2SWAP(); // 2SWAP
  Pop(); Pop(); // 2DROP
  UNK_0xef74(); // UNK_0xef74
}


// ================================================
// 0xf120: WORD 'UNK_0xf122' codep=0x224c parp=0xf122
// ================================================

void UNK_0xf122() // UNK_0xf122
{
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xeba0); // UNK_0xeba0
  _st__ex__gt_(); // <!>
  Push(pp_YABS); // YABS
  _st__plus__ex__gt_(); // <+!>
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xeb9c); // UNK_0xeb9c
  _st__ex__gt_(); // <!>
  Push(pp_XABS); // XABS
  _st__plus__ex__gt_(); // <+!>
  UNK_0xebc4(); // UNK_0xebc4
  UNK_0xec00(); // UNK_0xec00
  SET_dash_SPEED(); // SET-SPEED
  UNK_0xf0c0(); // UNK_0xf0c0
  Push(0);
  Push(5);
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    Push(0xc03f); // probable '(ROL'
    MODULE(); // MODULE
    _gt_DISPLAY(); // >DISPLAY
    Push(pp__i_INJURE); // 'INJURE
    Push(Read16(Pop())); // @
    MODULE(); // MODULE
  }
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  UNK_0xee06(); // UNK_0xee06
  NOP(); // NOP
  UNK_0xec96(); // UNK_0xec96
  UNK_0xe9e5(); // UNK_0xe9e5
  DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  DCLIPSET(); // DCLIPSET
}


// ================================================
// 0xf16c: WORD 'UNK_0xf16e' codep=0x224c parp=0xf16e
// ================================================

void UNK_0xf16e() // UNK_0xf16e
{
  UNK_0xe702(); // UNK_0xe702
  PRINT("OUT OF FUEL ", 12); // (.")
  GCR(); // GCR
  Push(1);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("RETURNING TO SHIP ON FOOT ", 26); // (.")
  Push(0x03e8);
  MS(); // MS
  BEEPOFF(); // BEEPOFF
  Push(0xcf10); // probable '>DEBRIS'
  MODULE(); // MODULE
  Push(pp_IsTV); // ?TV
  OFF_2(); // OFF_2
  UNK_0xef48(); // UNK_0xef48
  Push(pp_LCOLOR); // LCOLOR
  OFF(); // OFF
  SetColor("BLACK");
  UNK_0xe7e8(); // UNK_0xe7e8
  UNK_0xe802(); // UNK_0xe802
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xe794(); // UNK_0xe794
  ICLOSE(); // ICLOSE

  label2:
  UNK_0xe7b8(); // UNK_0xe7b8
  _2OVER(); // 2OVER
  UNK_0xef1e(); // UNK_0xef1e
  _2DUP(); // 2DUP
  Push2Words("NULL");
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf122(); // UNK_0xf122
  Pop(); Pop(); // 2DROP
  goto label2;

  label1:
  Pop(); Pop(); // 2DROP
  Pop(); Pop(); // 2DROP
  Pop(); Pop(); // 2DROP
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  _dash_ICON(); // -ICON
  ICLOSE(); // ICLOSE
  Push(pp_FTRIG); // FTRIG
  ON_2(); // ON_2
  UNK_0xebb0(); // UNK_0xebb0
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf1fc: WORD 'UNK_0xf1fe' codep=0x224c parp=0xf1fe
// ================================================

void UNK_0xf1fe() // UNK_0xf1fe
{
  Push(0x0074);
  Push(0x00ab);
  POS_dot_(); // POS.
  Push(7);
  SetColor("BLACK");
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
}


// ================================================
// 0xf210: WORD 'UNK_0xf212' codep=0x224c parp=0xf212
// ================================================

void UNK_0xf212() // UNK_0xf212
{
  UNK_0xf1fe(); // UNK_0xf1fe
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+INST_dash_QTY.offset); // IFIELD
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  SetColor("WHITE");
  StoreCOLOR(); // !COLOR
  Push(Read16(cc_UNK_0xeba4)); // UNK_0xeba4
  _dash_(); // -
  Push(0x0064);
  Push(0x782f);
  _star__slash_(); // */
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(pp_COLOR); // COLOR
    Push(Read16(Pop())); // @
    SetColor("PINK");
    StoreCOLOR(); // !COLOR
    PRINT("RESERVE", 7); // (.")
    StoreCOLOR(); // !COLOR
  } else
  {
    Push(3);
    DrawR(); // .R
    PRINT("%", 1); // (.")
  }
  Push(0x0074);
  Push(0x00a4);
  POS_dot_(); // POS.
  Push(3);
  SetColor("BLACK");
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  Push(pp__pe_EFF); // %EFF
  Push(Read16(Pop())); // @
  Push(0x0064);
  Push(pp_E_slash_M); // E/M
  Push(Read16(Pop())); // @
  Push(4);
  Push(Pop() * Pop()); // *
  Push(-Pop()); // NEGATE
  _star__slash_(); // */
  Push(0x0063);
  MIN(); // MIN
  Push(3);
  DrawR(); // .R
  PRINT("%", 1); // (.")
}


// ================================================
// 0xf290: WORD 'UNK_0xf292' codep=0x224c parp=0xf292
// ================================================

void UNK_0xf292() // UNK_0xf292
{
  UNK_0xf212(); // UNK_0xf212
  UNK_0xf0c0(); // UNK_0xf0c0
  UNK_0xe802(); // UNK_0xe802
}


// ================================================
// 0xf29a: WORD 'UNK_0xf29c' codep=0x224c parp=0xf29c
// ================================================

void UNK_0xf29c() // UNK_0xf29c
{
  Push(pp_E_slash_M); // E/M
  Push(Read16(Pop())); // @
  Push(0x0064);
  Push(pp__pe_EFF); // %EFF
  Push(Read16(Pop())); // @
  _star__slash_(); // */
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+INST_dash_QTY.offset); // IFIELD
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2b6: WORD 'UNK_0xf2b8' codep=0x224c parp=0xf2b8
// ================================================

void UNK_0xf2b8() // UNK_0xf2b8
{
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+INST_dash_QTY.offset); // IFIELD
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf2c8: WORD 'UNK_0xf2ca' codep=0x224c parp=0xf2ca
// ================================================

void UNK_0xf2ca() // UNK_0xf2ca
{
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  SetColor("GREEN");
  UNK_0xe7e8(); // UNK_0xe7e8
  UNK_0xe802(); // UNK_0xe802
}


// ================================================
// 0xf2d6: WORD 'UNK_0xf2d8' codep=0x224c parp=0xf2d8
// ================================================

void UNK_0xf2d8() // UNK_0xf2d8
{
  SetColor("BLACK");
  UNK_0xe7e8(); // UNK_0xe7e8
  UNK_0xe802(); // UNK_0xe802
}


// ================================================
// 0xf2e0: WORD 'UNK_0xf2e2' codep=0x224c parp=0xf2e2
// ================================================

void UNK_0xf2e2() // UNK_0xf2e2
{
  Push(pp_LKEY); // LKEY
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x0152);
  Push((Pop()==Pop())?1:0); // =
  SWAP(); // SWAP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(pp_FTRIG); // FTRIG
  OFF(); // OFF
  Pop(); Pop(); // 2DROP
  Push(pp_SKEY); // SKEY
  Push(Read16(Pop())); // @
  _ro_XYSCAN(); // (XYSCAN case
}


// ================================================
// 0xf306: WORD 'UNK_0xf308' codep=0x224c parp=0xf308
// ================================================

void UNK_0xf308() // UNK_0xf308
{
  UNK_0xf1fe(); // UNK_0xf1fe
  SetColor("YELLOW");
  StoreCOLOR(); // !COLOR
  PRINT("NONE", 4); // (.")
  Pop(); Pop(); // 2DROP
  UNK_0xf16e(); // UNK_0xf16e
}


// ================================================
// 0xf31b: WORD 'UNK_0xf31d' codep=0x224c parp=0xf31d
// ================================================

void UNK_0xf31d() // UNK_0xf31d
{
  Push(0xf082);
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  _st__ex__gt_(); // <!>
  Push(0xea6e);
  Push(pp__i_REPAIR); // 'REPAIR
  _st__ex__gt_(); // <!>
  Push(0xf292); // probable 'UNK_0xf292'
  Push(pp__i__dot_VEHICLE_dash_STATUS); // '.VEHICLE-STATUS
  _st__ex__gt_(); // <!>
  Push(pp__i_SIMULA); // 'SIMULA
  Push(Read16(Pop())); // @
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  _st__ex__gt_(); // <!>
  Push(0x266b); // probable 'BEEP'
  Push(pp__i_ENDING); // 'ENDING
  _st__ex__gt_(); // <!>
  Push(0xeb06);
  Push(pp__i__dot_DATE); // '.DATE
  _st__ex__gt_(); // <!>
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_3(); // ON_3
}


// ================================================
// 0xf353: WORD 'UNK_0xf355' codep=0x224c parp=0xf355
// ================================================

void UNK_0xf355() // UNK_0xf355
{
  IsTRIG(); // ?TRIG
  Pop(); // DROP
  UNK_0xf2ca(); // UNK_0xf2ca
  UNK_0xf31d(); // UNK_0xf31d
  SetColor("GREEN");
  Push(pp_LCOLOR); // LCOLOR
  Store_3(); // !_3
  Push(-1);
  TONE(); // TONE
  BEEPON(); // BEEPON
}


// ================================================
// 0xf36b: WORD 'UNK_0xf36d' codep=0x224c parp=0xf36d
// ================================================

void UNK_0xf36d() // UNK_0xf36d
{
  Push(pp__i_TVT); // 'TVT
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  OFF(); // OFF
}


// ================================================
// 0xf379: WORD 'UNK_0xf37b' codep=0x224c parp=0xf37b
// ================================================

void UNK_0xf37b() // UNK_0xf37b
{
  UNK_0xf36d(); // UNK_0xf36d
  UNK_0xf2d8(); // UNK_0xf2d8
  SetColor("BLACK");
  Push(pp_LCOLOR); // LCOLOR
  Store_3(); // !_3
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf389: WORD 'UNK_0xf38b' codep=0x224c parp=0xf38b
// ================================================

void UNK_0xf38b() // UNK_0xf38b
{
  UNK_0xeece(); // UNK_0xeece
  SET_dash_SPEED(); // SET-SPEED
  UNK_0xf29c(); // UNK_0xf29c
  UNK_0xf292(); // UNK_0xf292
}


// ================================================
// 0xf395: WORD 'UNK_0xf397' codep=0x224c parp=0xf397
// ================================================

void UNK_0xf397() // UNK_0xf397
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  Push(pp_FTRIG); // FTRIG
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf3a5: WORD 'UNK_0xf3a7' codep=0x224c parp=0xf3a7
// ================================================

void UNK_0xf3a7() // UNK_0xf3a7
{
  _ro_XYSCAN(); // (XYSCAN case
  UNK_0xf397(); // UNK_0xf397
  if (Pop() == 0) goto label1;
  UNK_0xf2b8(); // UNK_0xf2b8
  if (Pop() == 0) goto label2;
  UNK_0xf308(); // UNK_0xf308
  goto label3;

  label2:
  UNK_0xf38b(); // UNK_0xf38b

  label6:
  XYSCAN(); // XYSCAN
  UNK_0xf2e2(); // UNK_0xf2e2
  UNK_0xf397(); // UNK_0xf397
  UNK_0xf2b8(); // UNK_0xf2b8
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label5;
  UNK_0xf38b(); // UNK_0xf38b
  goto label6;

  label5:
  Pop(); Pop(); // 2DROP
  UNK_0xf2b8(); // UNK_0xf2b8
  if (Pop() != 0)
  {
    Push2Words("0.");
    UNK_0xf308(); // UNK_0xf308
  }

  label3:
  goto label4;

  label1:
  Pop(); Pop(); // 2DROP

  label4:
  IsTRIG(); // ?TRIG
  if (Pop() == 0) return;
  Pop(); // DROP
  Push(0);
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  OFF(); // OFF
}


// ================================================
// 0xf3f5: WORD 'TV-MOVE' codep=0x224c parp=0xf401
// ================================================
// entry

void TV_dash_MOVE() // TV-MOVE
{
  Push(0xf37b); // probable 'UNK_0xf37b'
  Push(0xf3a7); // probable 'UNK_0xf3a7'
  Push(0xf355); // probable 'UNK_0xf355'
  DOTASKS(UNK_0xf355, UNK_0xf355, UNK_0xf355);
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_3(); // ON_3
}


// ================================================
// 0xf415: WORD 'plan-tseed' codep=0x73ea parp=0xf417
// ================================================
LoadDataType plan_dash_tseed = {0x20, 0x07, 0x02, 0x16, 0x658f};

// ================================================
// 0xf41d: WORD 'APPROACH' codep=0x224c parp=0xf42a
// ================================================

void APPROACH() // APPROACH
{
  _gt_LORES(); // >LORES
  DARK(); // DARK
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  _gt_C(); // >C
  SET_dash_CURRENT(); // SET-CURRENT
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(0x0012);
  _st_(); // <
  if (Pop() != 0)
  {
    CI(); // CI
    Pop(); // DROP
  } else
  {
    LoadData(plan_dash_tseed); // from 'PLANET      '
    Push(Read16(Pop())); // @
  }
  Push(Read16(regsp)); // DUP
  Push(0xc302); // probable 'MERCATOR-GEN'
  MODULE(); // MODULE
  SHIP_dash_CONSOLE(); // SHIP-CONSOLE
  Push(0xc48c); // probable '(.MERC)'
  MODULE(); // MODULE
  DrawREGION_plus_(); // .REGION+
  Push(0xc4a2); // probable '(GETSITE)'
  MODULE(); // MODULE
  Push(pp__n_CLRMAP); // #CLRMAP
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(0xc380); // probable 'INIT-ORBIT'
  MODULE(); // MODULE
  Push(0xc395); // probable 'SHOWSITE'
  MODULE(); // MODULE
  Push(0xc3a7); // probable 'DESCEND'
  MODULE(); // MODULE
  _gt_DISPLAY(); // >DISPLAY
  SetColor("WHITE");
  StoreCOLOR(); // !COLOR
  DCLIPSET(); // DCLIPSET
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  OFF(); // OFF
  ICLOSE(); // ICLOSE
}

// 0xf48e: db 0x4d 0x4f 0x56 0x45 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x4e 0x54 0x20 0x4f 0x56 0x45 0x52 0x4c 0x41 0x59 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x28 0x20 0x72 0x66 0x67 0x32 0x38 0x61 0x70 0x72 0x38 0x36 0x29 0xb6 0x31 0x32 0x32 0x35 0xee 0xb6 0x4f 0x17 0x85 0x00 0xf0 0x60 0xef 0x20 0xf2 0x6a 0xaa 0xfa 0x15 0xce 0xff 0x2f 0x4f 0x06 0xf1 0x12 0xbb 0x58 0x51 0x90 0x61 0x92 0x6d 0x38 0xf4 0x91 0x75 0xc9 0x79 0x0a 0xef 0x93 0x3b 0xf8 0xdd 0xfd 0x4b 0x89 0x4f 0x06 0xf1 0xff 0xde 0xb3 0xe0 0x7e 0xf4 0x60 0x16 0x36 0x00 0x42 0xe0 0xb3 0xe0 0x8b 0x3b 0x20 0x0f 0x53 0xdf 0xdc 0x1b 0x1f 0x4e 0x4f 0x54 0x20 0x45 0x4e 0x4f 0x55 0x47 0x48 0x20 0x53 0x54 0x4f 0x52 0x41 0x47 0x45 0x20 0x46 0x4f 0x52 0x20 0x46 0x55 0x4e 0x43 0x54 0x49 0x4f 0x4e 0x5d 0x17 0xa0 0x0f 0xef 0x2a 0xb3 0xe0 0x90 0x16 0x49 0x54 0x45 0x4d 0x53 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'MOVE-VOC________________________NT OVERLAY -------( rfg28apr86) 1225  O    `   j     /O    XQ a m8  u y   ;   K O      ~ ` 6 B    ;  S    NOT ENOUGH STORAGE FOR FUNCTION]    *    ITEMS__________________________ '

