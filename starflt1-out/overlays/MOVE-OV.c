// ====== OVERLAY 'MOVE-OV' ======
// store offset = 0xe680
// overlay size   = 0x0ee0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WE696  codep:0x224c wordp:0xe696 size:0x002e C-string:'WE696'
//           WE6C6  codep:0x224c wordp:0xe6c6 size:0x0018 C-string:'WE6C6'
//           WE6E0  codep:0x224c wordp:0xe6e0 size:0x0020 C-string:'WE6E0'
//           WE702  codep:0x224c wordp:0xe702 size:0x0018 C-string:'WE702'
//           WE71C  codep:0x224c wordp:0xe71c size:0x0006 C-string:'WE71C'
//           WE724  codep:0x224c wordp:0xe724 size:0x0026 C-string:'WE724'
//           WE74C  codep:0x224c wordp:0xe74c size:0x0022 C-string:'WE74C'
//           WE770  codep:0x224c wordp:0xe770 size:0x0022 C-string:'WE770'
//           WE794  codep:0x224c wordp:0xe794 size:0x000a C-string:'WE794'
//           WE7A0  codep:0x224c wordp:0xe7a0 size:0x000a C-string:'WE7A0'
//           WE7AC  codep:0x224c wordp:0xe7ac size:0x000a C-string:'WE7AC'
//           WE7B8  codep:0x224c wordp:0xe7b8 size:0x000a C-string:'WE7B8'
//           WE7C4  codep:0x744d wordp:0xe7c4 size:0x0003 C-string:'WE7C4'
//           WE7C9  codep:0x744d wordp:0xe7c9 size:0x0003 C-string:'WE7C9'
//           WE7CE  codep:0x224c wordp:0xe7ce size:0x0018 C-string:'WE7CE'
//           WE7E8  codep:0x224c wordp:0xe7e8 size:0x0018 C-string:'WE7E8'
//           WE802  codep:0x224c wordp:0xe802 size:0x005a C-string:'WE802'
//           WE85E  codep:0x224c wordp:0xe85e size:0x001e C-string:'WE85E'
//           WE87E  codep:0x224c wordp:0xe87e size:0x000e C-string:'WE87E'
//       SET-SPEED  codep:0x224c wordp:0xe89a size:0x002a C-string:'SET_dash_SPEED'
//           WE8C6  codep:0x224c wordp:0xe8c6 size:0x0016 C-string:'WE8C6'
//            CBLT  codep:0x1d29 wordp:0xe8e5 size:0x0004 C-string:'CBLT'
//           CBLTP  codep:0xe8f3 wordp:0xe8f3 size:0x002c C-string:'CBLTP'
//           WE921  codep:0x224c wordp:0xe921 size:0x00c2 C-string:'WE921'
//           WE9E5  codep:0x224c wordp:0xe9e5 size:0x002e C-string:'WE9E5'
//           WEA15  codep:0x73ea wordp:0xea15 size:0x0006 C-string:'WEA15'
//           WEA1D  codep:0x224c wordp:0xea1d size:0x0024 C-string:'WEA1D'
//          %STORM  codep:0x1d29 wordp:0xea4c size:0x000a C-string:'_pe_STORM'
//           WEA58  codep:0x224c wordp:0xea58 size:0x0014 C-string:'WEA58'
//           WEA6E  codep:0x224c wordp:0xea6e size:0x0096 C-string:'WEA6E'
//           WEB06  codep:0x224c wordp:0xeb06 size:0x0076 C-string:'WEB06'
//           WEB7E  codep:0x224c wordp:0xeb7e size:0x001c C-string:'WEB7E'
//           WEB9C  codep:0x1d29 wordp:0xeb9c size:0x0002 C-string:'WEB9C'
//           WEBA0  codep:0x1d29 wordp:0xeba0 size:0x0002 C-string:'WEBA0'
//           WEBA4  codep:0x2214 wordp:0xeba4 size:0x0002 C-string:'WEBA4'
//           WEBA8  codep:0x73ea wordp:0xeba8 size:0x0006 C-string:'WEBA8'
//           WEBB0  codep:0x224c wordp:0xebb0 size:0x0012 C-string:'WEBB0'
//           WEBC4  codep:0x224c wordp:0xebc4 size:0x001e C-string:'WEBC4'
//           WEBE4  codep:0x224c wordp:0xebe4 size:0x000c C-string:'WEBE4'
//           WEBF2  codep:0x224c wordp:0xebf2 size:0x000c C-string:'WEBF2'
//           WEC00  codep:0x224c wordp:0xec00 size:0x007e C-string:'WEC00'
//           WEC80  codep:0x224c wordp:0xec80 size:0x0006 C-string:'WEC80'
//           WEC88  codep:0x224c wordp:0xec88 size:0x000c C-string:'WEC88'
//           WEC96  codep:0x224c wordp:0xec96 size:0x000e C-string:'WEC96'
//           WECA6  codep:0x224c wordp:0xeca6 size:0x0018 C-string:'WECA6'
//           WECC0  codep:0x224c wordp:0xecc0 size:0x0012 C-string:'WECC0'
//           WECD4  codep:0x224c wordp:0xecd4 size:0x001c C-string:'WECD4'
//           WECF2  codep:0x224c wordp:0xecf2 size:0x0020 C-string:'WECF2'
//           WED14  codep:0x224c wordp:0xed14 size:0x001e C-string:'WED14'
//           WED34  codep:0x224c wordp:0xed34 size:0x000c C-string:'WED34'
//           WED42  codep:0x224c wordp:0xed42 size:0x0008 C-string:'WED42'
//           WED4C  codep:0x224c wordp:0xed4c size:0x002c C-string:'WED4C'
//           WED7A  codep:0x224c wordp:0xed7a size:0x002c C-string:'WED7A'
//           WEDA8  codep:0x224c wordp:0xeda8 size:0x005c C-string:'WEDA8'
//           WEE06  codep:0x224c wordp:0xee06 size:0x002c C-string:'WEE06'
//           WEE34  codep:0x224c wordp:0xee34 size:0x0024 C-string:'WEE34'
//         ?POPULA  codep:0x224c wordp:0xee64 size:0x0068 C-string:'IsPOPULA'
//           WEECE  codep:0x224c wordp:0xeece size:0x004e C-string:'WEECE'
//           WEF1E  codep:0x224c wordp:0xef1e size:0x0028 C-string:'WEF1E'
//           WEF48  codep:0x224c wordp:0xef48 size:0x002a C-string:'WEF48'
//           WEF74  codep:0x224c wordp:0xef74 size:0x00e4 C-string:'WEF74'
//           WF05A  codep:0x224c wordp:0xf05a size:0x0026 C-string:'WF05A'
//           WF082  codep:0x224c wordp:0xf082 size:0x001a C-string:'WF082'
//           WF09E  codep:0x224c wordp:0xf09e size:0x0016 C-string:'WF09E'
//           WF0B6  codep:0x224c wordp:0xf0b6 size:0x0008 C-string:'WF0B6'
//           WF0C0  codep:0x224c wordp:0xf0c0 size:0x0060 C-string:'WF0C0'
//           WF122  codep:0x224c wordp:0xf122 size:0x004a C-string:'WF122'
//           WF16E  codep:0x224c wordp:0xf16e size:0x008e C-string:'WF16E'
//           WF1FE  codep:0x224c wordp:0xf1fe size:0x0012 C-string:'WF1FE'
//           WF212  codep:0x224c wordp:0xf212 size:0x007e C-string:'WF212'
//           WF292  codep:0x224c wordp:0xf292 size:0x0008 C-string:'WF292'
//           WF29C  codep:0x224c wordp:0xf29c size:0x001a C-string:'WF29C'
//           WF2B8  codep:0x224c wordp:0xf2b8 size:0x0010 C-string:'WF2B8'
//           WF2CA  codep:0x224c wordp:0xf2ca size:0x000c C-string:'WF2CA'
//           WF2D8  codep:0x224c wordp:0xf2d8 size:0x0008 C-string:'WF2D8'
//           WF2E2  codep:0x224c wordp:0xf2e2 size:0x0024 C-string:'WF2E2'
//           WF308  codep:0x224c wordp:0xf308 size:0x0013 C-string:'WF308'
//           WF31D  codep:0x224c wordp:0xf31d size:0x0036 C-string:'WF31D'
//           WF355  codep:0x224c wordp:0xf355 size:0x0016 C-string:'WF355'
//           WF36D  codep:0x224c wordp:0xf36d size:0x000c C-string:'WF36D'
//           WF37B  codep:0x224c wordp:0xf37b size:0x000e C-string:'WF37B'
//           WF38B  codep:0x224c wordp:0xf38b size:0x000a C-string:'WF38B'
//           WF397  codep:0x224c wordp:0xf397 size:0x000e C-string:'WF397'
//           WF3A7  codep:0x224c wordp:0xf3a7 size:0x004e C-string:'WF3A7'
//         TV-MOVE  codep:0x224c wordp:0xf401 size:0x0014 C-string:'TV_dash_MOVE'
//      plan-tseed  codep:0x73ea wordp:0xf417 size:0x0006 C-string:'plan_dash_tseed'
//        APPROACH  codep:0x224c wordp:0xf42a size:0x0000 C-string:'APPROACH'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_DEFAULT; // DEFAULT
extern const unsigned short int pp_XLL; // XLL
extern const unsigned short int pp_YLL; // YLL
extern const unsigned short int pp__i_INJURE; // 'INJURE
extern const unsigned short int pp_ATMO; // ATMO
extern const unsigned short int pp_LCOLOR; // LCOLOR
extern const unsigned short int pp__i_FLARE; // 'FLARE
extern const unsigned short int pp__ro_FLARE_rc_; // (FLARE)
extern const unsigned short int pp_IsTV; // ?TV
extern const unsigned short int pp_OLDHR; // OLDHR
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
extern const unsigned short int pp_STORM; // STORM
extern const unsigned short int pp__i_TVT; // 'TVT
extern const unsigned short int pp__i_STORM; // 'STORM
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
extern const unsigned short int pp__ro_PLANET_rc_; // (PLANET)
extern const unsigned short int pp_THIS_dash_RE; // THIS-RE
extern LoadDataType ART_dash_VOL; // ART-VOL
extern Color BLACK; // BLACK
extern Color GREEN; // GREEN
extern Color PINK; // PINK
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void _star__slash_(); // */
void ABS(); // ABS
void MAX(); // MAX
void MIN(); // MIN
void DrawR(); // .R
void MS(); // MS
void NOP(); // NOP
void _2OVER(); // 2OVER
void D_eq_(); // D=
void WITHIN(); // WITHIN
void _3_star_(); // 3*
void RRND(); // RRND
void SQRT(); // SQRT
void ACELLADDR(); // ACELLADDR
void A_at_(); // A@
void SETLARRAY(); // SETLARRAY
void SETREGION(); // SETREGION
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
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
void IFIND(); // IFIND
void ALL(); // ALL
void ICREATE(); // ICREATE
void StoreCOLOR(); // !COLOR
void VCLIPSET(); // VCLIPSET
void DCLIPSET(); // DCLIPSET
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void _gt_LORES_2(); // >LORES_2
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
void IsICON_dash_IADDR(); // ?ICON-IADDR
void _dash_ICON(); // -ICON
void _plus_ICON(); // +ICON
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
void _slash_MOD(); // /MOD
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
void _ro_XYSCAN_rc_(); // (XYSCAN)
void CBLTP(); // CBLTP


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_CBLT = 0xe8e5; // CBLT size: 4
// {0xff, 0x66, 0x00, 0x66}

const unsigned short int pp__pe_STORM = 0xea4c; // %STORM size: 10
// {0x00, 0x00, 0x14, 0x00, 0x28, 0x00, 0x3c, 0x00, 0x55, 0x00}

const unsigned short int pp_WEB9C = 0xeb9c; // WEB9C size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEBA0 = 0xeba0; // WEBA0 size: 2
// {0x3a, 0x20}


const unsigned short int cc_WEBA4 = 0xeba4; // WEBA4


// 0xe692: db 0xe1 0x00 '  '

// ================================================
// 0xe694: WORD 'WE696' codep=0x224c wordp=0xe696 params=0 returns=0
// ================================================

void WE696() // WE696
{
  IsNEW_dash_HO(); // ?NEW-HO
  if (Pop() == 0) return;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LAST_dash_UPDATE); // LAST-UPDATE
  StoreD(); // D!
  Push(1);
  Push(pp_STAR_dash_HR); // STAR-HR
  _plus__ex__2(); // +!_2
  Push(Read16(pp_STAR_dash_HR)==0x0018?1:0); // STAR-HR @ 0x0018 =
  if (Pop() == 0) return;
  Push(pp_STAR_dash_HR); // STAR-HR
  OFF(); // OFF
  Push(1);
  Push(pp_STARDATE); // STARDATE
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe6c4: WORD 'WE6C6' codep=0x224c wordp=0xe6c6 params=0 returns=0
// ================================================

void WE6C6() // WE6C6
{
  Push(0x0040);
  Push(3);
  Push(7);
  Push(0x0026);
  WINDOW(); // WINDOW
  Push(-1);
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex__2(); // +!_2
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xe6de: WORD 'WE6E0' codep=0x224c wordp=0xe6e0 params=0 returns=0
// ================================================

void WE6E0() // WE6E0
{
  Push(Read16(pp_COLOR)); // COLOR @
  Push(Read16(pp_WTOP)); // WTOP @
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WBOTTOM) - 1); // WBOTTOM @ 1-
  Push(Read16(pp_WRIGHT) + 1); // WRIGHT @ 1+
  GetColor(BLACK);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe700: WORD 'WE702' codep=0x224c wordp=0xe702 params=0 returns=0
// ================================================

void WE702() // WE702
{
  WE6C6(); // WE6C6
  WE6E0(); // WE6E0
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_WLEFT) + 1); // WLEFT @ 1+
  Push(Read16(pp_WTOP) - 1); // WTOP @ 1-
  POS_dot_(); // POS.
}


// ================================================
// 0xe71a: WORD 'WE71C' codep=0x224c wordp=0xe71c params=1 returns=1
// ================================================
// orphan

void WE71C() // WE71C
{
  Push((Pop()==0?1:0)==0?1:0); //  0= 0=
}


// ================================================
// 0xe722: WORD 'WE724' codep=0x224c wordp=0xe724 params=2 returns=2
// ================================================

void WE724() // WE724
{
  Push(Pop() - 0x01e0); //  0x01e0 -
  Push(0x000a);
  Push(0x0035);
  _star__slash_(); // */
  SWAP(); // SWAP
  Push(Pop() - 0x0480); //  0x0480 -
  Push(0x000a);
  Push(0x0040);
  _star__slash_(); // */
  SWAP(); // SWAP
}


// ================================================
// 0xe74a: WORD 'WE74C' codep=0x224c wordp=0xe74c params=1 returns=0
// ================================================

void WE74C() // WE74C
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
// 0xe76e: WORD 'WE770' codep=0x224c wordp=0xe770 params=1 returns=0
// ================================================

void WE770() // WE770
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
// 0xe792: WORD 'WE794' codep=0x224c wordp=0xe794 params=0 returns=2
// ================================================

void WE794() // WE794
{
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xe79e: WORD 'WE7A0' codep=0x224c wordp=0xe7a0 params=0 returns=2
// ================================================

void WE7A0() // WE7A0
{
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  WE794(); // WE794
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe7aa: WORD 'WE7AC' codep=0x224c wordp=0xe7ac params=2 returns=0
// ================================================

void WE7AC() // WE7AC
{
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xe7b6: WORD 'WE7B8' codep=0x224c wordp=0xe7b8 params=0 returns=2
// ================================================

void WE7B8() // WE7B8
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
}


// ================================================
// 0xe7c2: WORD 'WE7C4' codep=0x744d wordp=0xe7c4
// ================================================
IFieldType WE7C4 = {ASSIGN_CREWIDX, 0x17, 0x03};

// ================================================
// 0xe7c7: WORD 'WE7C9' codep=0x744d wordp=0xe7c9
// ================================================
IFieldType WE7C9 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xe7cc: WORD 'WE7CE' codep=0x224c wordp=0xe7ce params=0 returns=1
// ================================================

void WE7CE() // WE7CE
{
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WE7C4.offset); // WE7C4<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+WE7C9.offset)&0xFF); // WE7C9<IFIELD> C@
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0x00c7);
  _gt_(); // >
}


// ================================================
// 0xe7e6: WORD 'WE7E8' codep=0x224c wordp=0xe7e8 params=1 returns=0
// ================================================

void WE7E8() // WE7E8
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
// 0xe800: WORD 'WE802' codep=0x224c wordp=0xe802 params=0 returns=0
// ================================================

void WE802() // WE802
{
  Push(Read16(pp__n_STORM)); // #STORM @
  Push(Read16(regsp)); // DUP
  Push(4);
  _st_(); // <
  SWAP(); // SWAP
  Push(0x000b);
  _gt_(); // >
  Push(Pop() | Pop()); // OR
  WE7CE(); // WE7CE
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WE7A0(); // WE7A0
  WE724(); // WE724
  Push(0x0010);
  Push(0x00c5);
  POS_dot_(); // POS.
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); //  NEGATE
  }
  Push(4);
  DrawR(); // .R
  WE770(); // WE770
  PRINT(" * ", 3); // (.")
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); //  NEGATE
  }
  Push(0);
  DrawR(); // .R
  WE74C(); // WE74C
}


// ================================================
// 0xe85c: WORD 'WE85E' codep=0x224c wordp=0xe85e params=0 returns=2
// ================================================

void WE85E() // WE85E
{
  Push(0x6ac1); // 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  Push(Read16(pp_XABS) - (Read16(pp_XCON) + 1)); // XABS @ XCON @ 1+ -
  Push(Read16(pp_YABS) - Read16(pp_YCON)); // YABS @ YCON @ -
}


// ================================================
// 0xe87c: WORD 'WE87E' codep=0x224c wordp=0xe87e
// ================================================
// orphan

void WE87E() // WE87E
{
  WE85E(); // WE85E
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(0x0010);
  _st_(); // <
}


// ================================================
// 0xe88c: WORD 'SET-SPEED' codep=0x224c wordp=0xe89a
// ================================================
// entry

void SET_dash_SPEED() // SET-SPEED
{
  WE85E(); // WE85E
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
    Push(-Pop()); //  NEGATE
  }
  Push(pp_E_slash_M); // E/M
  Store_3(); // !_3
}


// ================================================
// 0xe8c4: WORD 'WE8C6' codep=0x224c wordp=0xe8c6 params=0 returns=2
// ================================================

void WE8C6() // WE8C6
{
  Push(Read16(pp_XVIS) - Read16(pp_XCON)); // XVIS @ XCON @ -
  Push(Read16(pp_YVIS) - Read16(pp_YCON)); // YVIS @ YCON @ -
}


// ================================================
// 0xe8dc: WORD 'CBLT' codep=0x1d29 wordp=0xe8e5
// ================================================
// 0xe8e5: db 0xff 0x66 0x00 0x66 ' f f'

// ================================================
// 0xe8e9: WORD 'CBLTP' codep=0xe8f3 wordp=0xe8f3
// ================================================
// 0xe8f3: pop    ax
// 0xe8f4: add    ax,0003
// 0xe8f7: mov    [5863],ax // YBLT
// 0xe8fb: pop    ax
// 0xe8fc: add    ax,0006
// 0xe8ff: mov    [586E],ax // XBLT
// 0xe903: mov    word ptr [5892],0004 // WBLT
// 0xe909: mov    word ptr [5887],0006 // LBLT
// 0xe90f: mov    word ptr [589D],E8E5 // ABLT
// 0xe915: push   ds
// 0xe916: pop    word ptr [58AA] // BLTSEG
// 0xe91a: lodsw
// 0xe91b: mov    bx,ax
// 0xe91d: jmp    word ptr [bx]

// ================================================
// 0xe91f: WORD 'WE921' codep=0x224c wordp=0xe921
// ================================================

void WE921() // WE921
{
  unsigned short int i, imax, j, jmax, a, b, c, d;
  Push(Read16(pp_BLTSEG)); // BLTSEG @
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
// 0xe9e3: WORD 'WE9E5' codep=0x224c wordp=0xe9e5
// ================================================

void WE9E5() // WE9E5
{
  Push(0x6ac1); // 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  WE8C6(); // WE8C6
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
  WE921(); // WE921
}


// ================================================
// 0xea13: WORD 'WEA15' codep=0x73ea wordp=0xea15
// ================================================
LoadDataType WEA15 = {PLANETIDX, 0x11, 0x02, 0x16, 0x658f};

// ================================================
// 0xea1b: WORD 'WEA1D' codep=0x224c wordp=0xea1d params=0 returns=0
// ================================================

void WEA1D() // WEA1D
{
  Push(Read16(pp__n_STORM)); // #STORM @
  Push(6);
  Push(0x000b);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Push(0);
  Push(3);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(Read16(pp__i_INJURE)); // 'INJURE @
  MODULE(); // MODULE
}


// ================================================
// 0xea41: WORD '%STORM' codep=0x1d29 wordp=0xea4c
// ================================================
// 0xea4c: db 0x00 0x00 0x14 0x00 0x28 0x00 0x3c 0x00 0x55 0x00 '    ( < U '

// ================================================
// 0xea56: WORD 'WEA58' codep=0x224c wordp=0xea58 params=0 returns=0
// ================================================

void WEA58() // WEA58
{
  Push(Read16(pp__n_STORM)); // #STORM @
  Push(3);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(0xcdd8); // '.STOR'
  MODULE(); // MODULE
}


// ================================================
// 0xea6c: WORD 'WEA6E' codep=0x224c wordp=0xea6e params=0 returns=0
// ================================================

void WEA6E() // WEA6E
{
  Push(Read16(pp_ATMO)); // ATMO @
  if (Pop() != 0)
  {
    Push(Read16(pp_STORM)); // STORM @
    if (Pop() != 0)
    {
      Push(-1);
      Push(pp_STORM); // STORM
      _plus__ex__2(); // +!_2
      WEA58(); // WEA58
    } else
    {
      Push(pp__ro_PLANET_rc_); // (PLANET)
      Get_gt_C_plus_S(); // @>C+S
      LoadData(WEA15); // from 'PLANET'
      Push(Read16(Pop())); //  @
      Push(pp__pe_STORM); // %STORM
      OVER(); // OVER
      Push(Pop() + Pop()); // +
      Push(Pop() + Pop()); // +
      Push(Read16(Pop())); //  @
      Push(1);
      Push(0x0064);
      RRND(); // RRND
      _gt_(); // >
      if (Pop() != 0)
      {
        Push(Read16(pp__i_STORM)); // 'STORM @
        MODULE(); // MODULE
      } else
      {
        Push(1);
        Push(4);
        RRND(); // RRND
        Push(pp__n_STORM); // #STORM
        Store_3(); // !_3
        Push(0xcdd8); // '.STOR'
        MODULE(); // MODULE
        Push(1);
        LoadData(WEA15); // from 'PLANET'
        Push(Read16(Pop())); //  @
        Push(5);
        SWAP(); // SWAP
        _dash_(); // -
        _3_star_(); // 3*
        RRND(); // RRND
        Push(0x000c);
        MIN(); // MIN
        Push(0);
        MAX(); // MAX
        Push(pp_STORM); // STORM
        Store_3(); // !_3
        Push(0x0064);
        Push(pp__pe_EFF); // %EFF
        _st__ex__gt_(); // <!>
      }
      ICLOSE(); // ICLOSE
    }
    WEA1D(); // WEA1D
    return;
  }
  Push(pp__n_STORM); // #STORM
  OFF(); // OFF
  Push(pp_STORM); // STORM
  OFF(); // OFF
  Push(0x0064);
  Push(pp__pe_EFF); // %EFF
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xeb04: WORD 'WEB06' codep=0x224c wordp=0xeb06 params=0 returns=0
// ================================================

void WEB06() // WEB06
{
  Push(Read16(pp_XORMODE)); // XORMODE @
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0x0074);
  Push(0x00b2);
  POS_dot_(); // POS.
  Push(0x000a);
  GetColor(BLACK);
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_STARDATE)); // STARDATE @
  Push(0x012c);
  _slash_MOD(); // /MOD
  Push(Pop() + 0x120c); //  0x120c +
  SWAP(); // SWAP
  Push(0x001e);
  _slash_MOD(); // /MOD
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  Push(Read16(regsp)); // DUP
  Push(0x000a);
  _st_(); // <
  if (Pop() != 0)
  {
    PRINT("0", 1); // (.")
  }
  Push(0);
  DrawR(); // .R
  PRINT("-", 1); // (.")
  Push(Read16(regsp)); // DUP
  Push(0x000a);
  _st_(); // <
  if (Pop() != 0)
  {
    PRINT("0", 1); // (.")
  }
  Push(0);
  DrawR(); // .R
  PRINT("-", 1); // (.")
  Push(0);
  DrawR(); // .R
  Push(pp_XORMODE); // XORMODE
  Store_3(); // !_3
}


// ================================================
// 0xeb7c: WORD 'WEB7E' codep=0x224c wordp=0xeb7e params=0 returns=0
// ================================================

void WEB7E() // WEB7E
{
  Push((Read16(pp_STARDATE)==Read16(pp__ro_FLARE_rc_)?1:0) & (Read16(pp_IsWIN)==0?1:0)); // STARDATE @ (FLARE) @ = ?WIN @ 0= AND
  if (Pop() == 0) return;
  Push(pp__i_FLARE); // 'FLARE
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xeb9a: WORD 'WEB9C' codep=0x1d29 wordp=0xeb9c
// ================================================
// 0xeb9c: db 0x3a 0x20 ': '

// ================================================
// 0xeb9e: WORD 'WEBA0' codep=0x1d29 wordp=0xeba0
// ================================================
// 0xeba0: db 0x3a 0x20 ': '

// ================================================
// 0xeba2: WORD 'WEBA4' codep=0x2214 wordp=0xeba4
// ================================================
// 0xeba4: dw 0x07d0

// ================================================
// 0xeba6: WORD 'WEBA8' codep=0x73ea wordp=0xeba8
// ================================================
// orphan
LoadDataType WEBA8 = {CREATUREIDX, 0x90, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xebae: WORD 'WEBB0' codep=0x224c wordp=0xebb0 params=0 returns=0
// ================================================

void WEBB0() // WEBB0
{
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  WE7AC(); // WE7AC
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xebc2: WORD 'WEBC4' codep=0x224c wordp=0xebc4 params=0 returns=0
// ================================================

void WEBC4() // WEBC4
{
  Push(Read16(pp_WEB9C)); // WEB9C @
  Push(Read16(regsp)); // DUP
  Push(pp_DXVIS); // DXVIS
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  _st__plus__ex__gt_(); // <+!>
  Push(Read16(pp_WEBA0)); // WEBA0 @
  Push(Read16(regsp)); // DUP
  Push(pp_DYVIS); // DYVIS
  _st__ex__gt_(); // <!>
  Push(pp_YVIS); // YVIS
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xebe2: WORD 'WEBE4' codep=0x224c wordp=0xebe4 params=1 returns=0
// ================================================

void WEBE4() // WEBE4
{
  Push(Read16(regsp)); // DUP
  Push(pp_DXCON); // DXCON
  _st__ex__gt_(); // <!>
  Push(pp_XCON); // XCON
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xebf0: WORD 'WEBF2' codep=0x224c wordp=0xebf2 params=1 returns=0
// ================================================

void WEBF2() // WEBF2
{
  Push(Read16(regsp)); // DUP
  Push(pp_DYCON); // DYCON
  _st__ex__gt_(); // <!>
  Push(pp_YCON); // YCON
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xebfe: WORD 'WEC00' codep=0x224c wordp=0xec00 params=0 returns=0
// ================================================

void WEC00() // WEC00
{
  Push(Read16(pp_XVIS)); // XVIS @
  Push(Read16(pp_XCON)); // XCON @
  _2DUP(); // 2DUP
  Push(Pop() - 1); //  1-
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(0xfff4);
  } else
  {
    Push(Pop() + 0x001a); //  0x001a +
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Push(0x000c);
    } else
    {
      Push(0);
    }
  }
  WEBE4(); // WEBE4
  Push(Read16(pp_YVIS)); // YVIS @
  Push(Read16(pp_YCON)); // YCON @
  _2DUP(); // 2DUP
  Push(Pop() - 1); //  1-
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(0xffec);
  } else
  {
    Push(Pop() + 0x002a); //  0x002a +
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Push(0x0014);
    } else
    {
      Push(0);
    }
  }
  WEBF2(); // WEBF2
  Push(Read16(pp_DXCON) | Read16(pp_DYCON)); // DXCON @ DYCON @ OR
  if (Pop() == 0) return;
  Push(0xc33e); // 'SCRLCON'
  MODULE(); // MODULE
}


// ================================================
// 0xec7e: WORD 'WEC80' codep=0x224c wordp=0xec80
// ================================================
// orphan

void WEC80() // WEC80
{
  _2DUP(); // 2DUP
  IFIND(); // IFIND
}


// ================================================
// 0xec86: WORD 'WEC88' codep=0x224c wordp=0xec88 params=2 returns=2
// ================================================

void WEC88() // WEC88
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xec94: WORD 'WEC96' codep=0x224c wordp=0xec96 params=0 returns=0
// ================================================

void WEC96() // WEC96
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  _2_ex_(); // 2!
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xeca4: WORD 'WECA6' codep=0x224c wordp=0xeca6 params=2 returns=2
// ================================================

void WECA6() // WECA6
{
  _gt_C(); // >C
  SET_dash_CURRENT(); // SET-CURRENT
  CI(); // CI
  IsICON_dash_IADDR(); // ?ICON-IADDR
  if (Pop() != 0)
  {
    POINT_gt_ICON(); // POINT>ICON
    WE794(); // WE794
    StoreIY(); // !IY
    StoreIX(); // !IX
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xecbe: WORD 'WECC0' codep=0x224c wordp=0xecc0 params=0 returns=6
// ================================================

void WECC0() // WECC0
{
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  Push(0x00fe);
  Push(Read16(cc_DEFAULT)); // DEFAULT
  CI(); // CI
}


// ================================================
// 0xecd2: WORD 'WECD4' codep=0x224c wordp=0xecd4
// ================================================

void WECD4() // WECD4
{
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x001b?1:0); //  0x001b =
  if (Pop() != 0)
  {
    WECC0(); // WECC0
  } else
  {
    Push(0xc437); // 'ICON-PARM'
    MODULE(); // MODULE
  }
  _plus_ICON(); // +ICON
}


// ================================================
// 0xecf0: WORD 'WECF2' codep=0x224c wordp=0xecf2 params=0 returns=0
// ================================================

void WECF2() // WECF2
{
  IOPEN(); // IOPEN
  IsNULL(); // ?NULL
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(0xecd4); // 'WECD4'
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
// 0xed12: WORD 'WED14' codep=0x224c wordp=0xed14 params=1 returns=3
// ================================================

void WED14() // WED14
{
  Push(0x001e);
  _slash_(); // /
  Push(Pop() * 0x001e); //  0x001e *
  SWAP(); // SWAP
  Push(0x0012);
  _slash_(); // /
  Push(Pop() * 0x0012); //  0x0012 *
  SWAP(); // SWAP
}


// ================================================
// 0xed32: WORD 'WED34' codep=0x224c wordp=0xed34 params=0 returns=0
// ================================================

void WED34() // WED34
{
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  StoreXYSEED(); // !XYSEED
}


// ================================================
// 0xed40: WORD 'WED42' codep=0x224c wordp=0xed42 params=0 returns=2
// ================================================

void WED42() // WED42
{
  WE7B8(); // WE7B8
  WED14(); // WED14
  WE7AC(); // WE7AC
}


// ================================================
// 0xed4a: WORD 'WED4C' codep=0x224c wordp=0xed4c
// ================================================

void WED4C() // WED4C
{
  Push(0x000b);
  Push(0x000b);
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  Push(pp__ro_PLANET_rc_); // (PLANET)
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  _2DUP(); // 2DUP
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_ex_(); // 1.5!
  _2DUP(); // 2DUP
  _gt_C(); // >C
  SET_dash_CURRENT(); // SET-CURRENT
  WED42(); // WED42
  WED34(); // WED34
  Push(0);
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed78: WORD 'WED7A' codep=0x224c wordp=0xed7a params=0 returns=1
// ================================================

void WED7A() // WED7A
{
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  WEC88(); // WEC88
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    _gt_C_plus_S(); // >C+S
    WE7B8(); // WE7B8
    WED14(); // WED14
    WE794(); // WE794
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
// 0xeda6: WORD 'WEDA8' codep=0x224c wordp=0xeda8 params=0 returns=4
// ================================================

void WEDA8() // WEDA8
{
  unsigned short int a, b;
  WE7B8(); // WE7B8
  WED14(); // WED14
  Push2Words("NULL");
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  while(1)
  {
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    Push(Pop()==0?1:0); //  0=
    IsLAST(); // ?LAST
    Push(!Pop()); //  NOT
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) break;

    GetINST_dash_CLASS(); // @INST-CLASS
    Push(Pop()==0x000b?1:0); //  0x000b =
    GetINST_dash_SPECIES(); // @INST-SPECIES
    Push(Pop()==0x000b?1:0); //  0x000b =
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
      _2DUP(); // 2DUP
      WE794(); // WE794
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
  }
  a = Pop(); // >R
  b = Pop(); // >R
  Pop(); Pop(); // 2DROP
  Push(b); // R>
  Push(a); // R>
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee04: WORD 'WEE06' codep=0x224c wordp=0xee06 params=0 returns=0
// ================================================

void WEE06() // WEE06
{
  Push(Read16(pp_XVIS) + 0x000e); // XVIS @ 0x000e +
  Push(Read16(pp_YVIS) + 0x0016); // YVIS @ 0x0016 +
  Push(Read16(pp_XVIS) + 0x0016); // XVIS @ 0x0016 +
  Push(Read16(pp_YVIS) + 0x0029); // YVIS @ 0x0029 +
  StoreVISWINDOW(); // !VISWINDOW
}


// ================================================
// 0xee32: WORD 'WEE34' codep=0x224c wordp=0xee34 params=2 returns=3
// ================================================

void WEE34() // WEE34
{
  _2DUP(); // 2DUP
  _gt_C(); // >C
  SET_dash_CURRENT(); // SET-CURRENT
  IOPEN(); // IOPEN
  CI(); // CI
  IsICON_dash_IADDR(); // ?ICON-IADDR
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    ICLOSE(); // ICLOSE
    WECF2(); // WECF2
    IOPEN(); // IOPEN
  } else
  {
    Pop(); // DROP
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee58: WORD '?POPULA' codep=0x224c wordp=0xee64 params=0 returns=0
// ================================================
// entry

void IsPOPULA() // ?POPULA
{
  WED7A(); // WED7A
  if (Pop() == 0) return;
  Push(pp_IsNEW); // ?NEW
  ON_3(); // ON_3
  WEDA8(); // WEDA8
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    WED4C(); // WED4C
    Push(pp__ro_PLANET_rc_); // (PLANET)
    Get_gt_C_plus_S(); // @>C+S
    IOPEN(); // IOPEN
    CDROP(); // CDROP
    _gt_C_plus_S(); // >C+S
    Push(Read16(pp_MOVED)); // MOVED @
    if (Pop() != 0)
    {
      WE702(); // WE702
      PRINT("SCANNING NEW TERRAIN ", 21); // (.")
    }
    Push(0xce7c); // 'POPULA'
    MODULE(); // MODULE
    WECF2(); // WECF2
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
    Push(Read16(pp_MOVED)); // MOVED @
    if (Pop() != 0)
    {
      WE6E0(); // WE6E0
    }
    return;
  }
  WEE34(); // WEE34
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xeecc: WORD 'WEECE' codep=0x224c wordp=0xeece
// ================================================

void WEECE() // WEECE
{
  GetColor(PINK);
  WE7E8(); // WE7E8
  WE802(); // WE802
  Push(pp_IsNEW); // ?NEW
  ON_3(); // ON_3
  Push(pp_MOVED); // MOVED
  ON_3(); // ON_3
  Push(Read16(regsp)); // DUP
  Push(pp_WEB9C); // WEB9C
  _st__ex__gt_(); // <!>
  Push(pp_XABS); // XABS
  _st__plus__ex__gt_(); // <+!>
  Push(Read16(regsp)); // DUP
  Push(pp_WEBA0); // WEBA0
  _st__ex__gt_(); // <!>
  Push(pp_YABS); // YABS
  _st__plus__ex__gt_(); // <+!>
  WEBC4(); // WEBC4
  WEC00(); // WEC00
  IsPOPULA(); // ?POPULA
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  WEE06(); // WEE06
  WEBB0(); // WEBB0
  Push(pp_TVEHICLE); // TVEHICLE
  _1_dot_5_at_(); // 1.5@
  WECA6(); // WECA6
  WEC96(); // WEC96
  WE9E5(); // WE9E5
  DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
  GetColor(GREEN);
  WE7E8(); // WE7E8
  WE802(); // WE802
  WE696(); // WE696
  WEB7E(); // WEB7E
}


// ================================================
// 0xef1c: WORD 'WEF1E' codep=0x224c wordp=0xef1e params=2 returns=2
// ================================================

void WEF1E() // WEF1E
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
// 0xef46: WORD 'WEF48' codep=0x224c wordp=0xef48
// ================================================

void WEF48() // WEF48
{
  Push(0x001c);
  Push(0x0033);
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  _gt_C_plus_S(); // >C+S
  WE7B8(); // WE7B8
  WE7AC(); // WE7AC
  Push(0x0bb8);
  Push(Read16(regsp)); // DUP
  LoadData(ART_dash_VOL); // from 'ARTIFACT'
  Store_3(); // !_3
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef72: WORD 'WEF74' codep=0x224c wordp=0xef74 params=2 returns=0
// ================================================

void WEF74() // WEF74
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
// 0xf058: WORD 'WF05A' codep=0x224c wordp=0xf05a params=0 returns=1
// ================================================

void WF05A() // WF05A
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  WE7B8(); // WE7B8
  Push(Pop() - Read16(0x63ef+INST_dash_Y.offset)); //  INST-Y<IFIELD> @ -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  ROT(); // ROT
  Push(Pop() - Read16(0x63ef+INST_dash_X.offset)); //  INST-X<IFIELD> @ -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xf080: WORD 'WF082' codep=0x224c wordp=0xf082 params=0 returns=1
// ================================================

void WF082() // WF082
{
  Push(Read16(pp_OLDHR) - Read16(pp_STAR_dash_HR)); // OLDHR @ STAR-HR @ -
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(Read16(pp_STAR_dash_HR)); // STAR-HR @
  Push(pp_OLDHR); // OLDHR
  Store_3(); // !_3
}


// ================================================
// 0xf09c: WORD 'WF09E' codep=0x224c wordp=0xf09e params=0 returns=1
// ================================================

void WF09E() // WF09E
{
  Push(Read16(pp__n_STORM)); // #STORM @
  Push(Read16(regsp)); // DUP
  Push(4);
  _st_(); // <
  SWAP(); // SWAP
  Push(0x000b);
  _gt_(); // >
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf0b4: WORD 'WF0B6' codep=0x224c wordp=0xf0b6 params=0 returns=1
// ================================================

void WF0B6() // WF0B6
{
  WF09E(); // WF09E
  WE7CE(); // WE7CE
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf0be: WORD 'WF0C0' codep=0x224c wordp=0xf0c0 params=0 returns=0
// ================================================

void WF0C0() // WF0C0
{
  _gt_DISPLAY(); // >DISPLAY
  Push(0x0074);
  Push(0x0096);
  POS_dot_(); // POS.
  Push(8);
  GetColor(BLACK);
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WF0B6(); // WF0B6
  if (Pop() != 0)
  {
    WF05A(); // WF05A
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
  GetColor(BLACK);
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WF0B6(); // WF0B6
  if (Pop() == 0) return;
  WE7B8(); // WE7B8
  WE794(); // WE794
  ICLOSE(); // ICLOSE
  WEF1E(); // WEF1E
  _2SWAP(); // 2SWAP
  Pop(); Pop(); // 2DROP
  WEF74(); // WEF74
}


// ================================================
// 0xf120: WORD 'WF122' codep=0x224c wordp=0xf122
// ================================================

void WF122() // WF122
{
  Push(Read16(regsp)); // DUP
  Push(pp_WEBA0); // WEBA0
  _st__ex__gt_(); // <!>
  Push(pp_YABS); // YABS
  _st__plus__ex__gt_(); // <+!>
  Push(Read16(regsp)); // DUP
  Push(pp_WEB9C); // WEB9C
  _st__ex__gt_(); // <!>
  Push(pp_XABS); // XABS
  _st__plus__ex__gt_(); // <+!>
  WEBC4(); // WEBC4
  WEC00(); // WEC00
  SET_dash_SPEED(); // SET-SPEED
  WF0C0(); // WF0C0
  Push(0);
  Push(5);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(0xc03f); // '(ROL'
    MODULE(); // MODULE
    _gt_DISPLAY(); // >DISPLAY
    Push(Read16(pp__i_INJURE)); // 'INJURE @
    MODULE(); // MODULE
  }
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  WEE06(); // WEE06
  NOP(); // NOP
  WEC96(); // WEC96
  WE9E5(); // WE9E5
  DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  DCLIPSET(); // DCLIPSET
}


// ================================================
// 0xf16c: WORD 'WF16E' codep=0x224c wordp=0xf16e
// ================================================

void WF16E() // WF16E
{
  WE702(); // WE702
  PRINT("OUT OF FUEL ", 12); // (.")
  GCR(); // GCR
  Push(1);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("RETURNING TO SHIP ON FOOT ", 26); // (.")
  Push(0x03e8);
  MS(); // MS
  BEEPOFF(); // BEEPOFF
  Push(0xcf10); // '>DEBRIS'
  MODULE(); // MODULE
  Push(pp_IsTV); // ?TV
  OFF_2(); // OFF_2
  WEF48(); // WEF48
  Push(pp_LCOLOR); // LCOLOR
  OFF(); // OFF
  GetColor(BLACK);
  WE7E8(); // WE7E8
  WE802(); // WE802
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  WE794(); // WE794
  ICLOSE(); // ICLOSE
  while(1)
  {
    WE7B8(); // WE7B8
    _2OVER(); // 2OVER
    WEF1E(); // WEF1E
    _2DUP(); // 2DUP
    Push2Words("NULL");
    D_eq_(); // D=
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    WF122(); // WF122
    Pop(); Pop(); // 2DROP
  }
  Pop(); Pop(); // 2DROP
  Pop(); Pop(); // 2DROP
  Pop(); Pop(); // 2DROP
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  _dash_ICON(); // -ICON
  ICLOSE(); // ICLOSE
  Push(pp_FTRIG); // FTRIG
  ON_2(); // ON_2
  WEBB0(); // WEBB0
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf1fc: WORD 'WF1FE' codep=0x224c wordp=0xf1fe params=0 returns=0
// ================================================

void WF1FE() // WF1FE
{
  Push(0x0074);
  Push(0x00ab);
  POS_dot_(); // POS.
  Push(7);
  GetColor(BLACK);
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
}


// ================================================
// 0xf210: WORD 'WF212' codep=0x224c wordp=0xf212 params=0 returns=0
// ================================================

void WF212() // WF212
{
  WF1FE(); // WF1FE
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  ICLOSE(); // ICLOSE
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(Pop() - Read16(cc_WEBA4)); //  WEBA4 -
  Push(0x0064);
  Push(0x782f);
  _star__slash_(); // */
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(Read16(pp_COLOR)); // COLOR @
    GetColor(PINK);
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
  GetColor(BLACK);
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  Push(Read16(pp__pe_EFF)); // %EFF @
  Push(0x0064);
  Push(-(Read16(pp_E_slash_M) * 4)); // E/M @ 4 * NEGATE
  _star__slash_(); // */
  Push(0x0063);
  MIN(); // MIN
  Push(3);
  DrawR(); // .R
  PRINT("%", 1); // (.")
}


// ================================================
// 0xf290: WORD 'WF292' codep=0x224c wordp=0xf292 params=0 returns=0
// ================================================

void WF292() // WF292
{
  WF212(); // WF212
  WF0C0(); // WF0C0
  WE802(); // WE802
}


// ================================================
// 0xf29a: WORD 'WF29C' codep=0x224c wordp=0xf29c params=0 returns=0
// ================================================

void WF29C() // WF29C
{
  Push(Read16(pp_E_slash_M)); // E/M @
  Push(0x0064);
  Push(Read16(pp__pe_EFF)); // %EFF @
  _star__slash_(); // */
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2b6: WORD 'WF2B8' codep=0x224c wordp=0xf2b8 params=0 returns=1
// ================================================

void WF2B8() // WF2B8
{
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
  Push(!Pop()); //  NOT
}


// ================================================
// 0xf2c8: WORD 'WF2CA' codep=0x224c wordp=0xf2ca params=0 returns=0
// ================================================

void WF2CA() // WF2CA
{
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  GetColor(GREEN);
  WE7E8(); // WE7E8
  WE802(); // WE802
}


// ================================================
// 0xf2d6: WORD 'WF2D8' codep=0x224c wordp=0xf2d8 params=0 returns=0
// ================================================

void WF2D8() // WF2D8
{
  GetColor(BLACK);
  WE7E8(); // WE7E8
  WE802(); // WE802
}


// ================================================
// 0xf2e0: WORD 'WF2E2' codep=0x224c wordp=0xf2e2 params=0 returns=0
// ================================================

void WF2E2() // WF2E2
{
  Push(Read16(pp_LKEY)); // LKEY @
  Push(Read16(regsp)); // DUP
  Push(Pop()==0x0152?1:0); //  0x0152 =
  SWAP(); // SWAP
  Push(Pop()==0?1:0); //  0=
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(pp_FTRIG); // FTRIG
  OFF(); // OFF
  Pop(); Pop(); // 2DROP
  Push(Read16(pp_SKEY)); // SKEY @
  _ro_XYSCAN_rc_(); // (XYSCAN) case
}


// ================================================
// 0xf306: WORD 'WF308' codep=0x224c wordp=0xf308
// ================================================

void WF308() // WF308
{
  WF1FE(); // WF1FE
  GetColor(YELLOW);
  StoreCOLOR(); // !COLOR
  PRINT("NONE", 4); // (.")
  Pop(); Pop(); // 2DROP
  WF16E(); // WF16E
}


// ================================================
// 0xf31b: WORD 'WF31D' codep=0x224c wordp=0xf31d params=0 returns=0
// ================================================

void WF31D() // WF31D
{
  Push(0xf082); // 'WF082'
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  _st__ex__gt_(); // <!>
  Push(0xea6e); // 'WEA6E'
  Push(pp__i_REPAIR); // 'REPAIR
  _st__ex__gt_(); // <!>
  Push(0xf292); // 'WF292'
  Push(pp__i__dot_VEHICLE_dash_STATUS); // '.VEHICLE-STATUS
  _st__ex__gt_(); // <!>
  Push(Read16(pp__i_SIMULA)); // 'SIMULA @
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  _st__ex__gt_(); // <!>
  Push(0x266b); // 'BEEP'
  Push(pp__i_ENDING); // 'ENDING
  _st__ex__gt_(); // <!>
  Push(0xeb06); // 'WEB06'
  Push(pp__i__dot_DATE); // '.DATE
  _st__ex__gt_(); // <!>
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_3(); // ON_3
}


// ================================================
// 0xf353: WORD 'WF355' codep=0x224c wordp=0xf355 params=0 returns=0
// ================================================

void WF355() // WF355
{
  IsTRIG(); // ?TRIG
  Pop(); // DROP
  WF2CA(); // WF2CA
  WF31D(); // WF31D
  GetColor(GREEN);
  Push(pp_LCOLOR); // LCOLOR
  Store_3(); // !_3
  Push(-1);
  TONE(); // TONE
  BEEPON(); // BEEPON
}


// ================================================
// 0xf36b: WORD 'WF36D' codep=0x224c wordp=0xf36d params=0 returns=0
// ================================================

void WF36D() // WF36D
{
  Push(Read16(pp__i_TVT)); // 'TVT @
  MODULE(); // MODULE
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  OFF(); // OFF
}


// ================================================
// 0xf379: WORD 'WF37B' codep=0x224c wordp=0xf37b params=0 returns=0
// ================================================

void WF37B() // WF37B
{
  WF36D(); // WF36D
  WF2D8(); // WF2D8
  GetColor(BLACK);
  Push(pp_LCOLOR); // LCOLOR
  Store_3(); // !_3
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf389: WORD 'WF38B' codep=0x224c wordp=0xf38b
// ================================================

void WF38B() // WF38B
{
  WEECE(); // WEECE
  SET_dash_SPEED(); // SET-SPEED
  WF29C(); // WF29C
  WF292(); // WF292
}


// ================================================
// 0xf395: WORD 'WF397' codep=0x224c wordp=0xf397 params=2 returns=3
// ================================================

void WF397() // WF397
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  Push(Pop() & (Read16(pp_FTRIG)==0?1:0)); //  FTRIG @ 0= AND
}


// ================================================
// 0xf3a5: WORD 'WF3A7' codep=0x224c wordp=0xf3a7
// ================================================

void WF3A7() // WF3A7
{
  _ro_XYSCAN_rc_(); // (XYSCAN) case
  WF397(); // WF397
  if (Pop() != 0)
  {
    WF2B8(); // WF2B8
    if (Pop() != 0)
    {
      WF308(); // WF308
    } else
    {
      WF38B(); // WF38B
      while(1)
      {
        XYSCAN(); // XYSCAN
        WF2E2(); // WF2E2
        WF397(); // WF397
        WF2B8(); // WF2B8
        Push(!Pop()); //  NOT
        Push(Pop() & Pop()); // AND
        if (Pop() == 0) break;

        WF38B(); // WF38B
      }
      Pop(); Pop(); // 2DROP
      WF2B8(); // WF2B8
      if (Pop() != 0)
      {
        Push2Words("0.");
        WF308(); // WF308
      }
    }
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  IsTRIG(); // ?TRIG
  if (Pop() == 0) return;
  Pop(); // DROP
  Push(0);
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  OFF(); // OFF
}


// ================================================
// 0xf3f5: WORD 'TV-MOVE' codep=0x224c wordp=0xf401
// ================================================
// entry

void TV_dash_MOVE() // TV-MOVE
{
  Push(0xf37b); // 'WF37B'
  Push(0xf3a7); // 'WF3A7'
  Push(0xf355); // 'WF355'
  DOTASKS(WF355, WF355, WF355);
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_3(); // ON_3
}


// ================================================
// 0xf415: WORD 'plan-tseed' codep=0x73ea wordp=0xf417
// ================================================
LoadDataType plan_dash_tseed = {PLANETIDX, 0x07, 0x02, 0x16, 0x658f};

// ================================================
// 0xf41d: WORD 'APPROACH' codep=0x224c wordp=0xf42a
// ================================================

void APPROACH() // APPROACH
{
  _gt_LORES_2(); // >LORES_2
  DARK(); // DARK
  Push(pp__ro_PLANET_rc_); // (PLANET)
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
    LoadData(plan_dash_tseed); // from 'PLANET'
    Push(Read16(Pop())); //  @
  }
  Push(Read16(regsp)); // DUP
  Push(0xc302); // 'MERCATOR-GEN'
  MODULE(); // MODULE
  SHIP_dash_CONSOLE(); // SHIP-CONSOLE
  Push(0xc48c); // '(.MERC)'
  MODULE(); // MODULE
  DrawREGION_plus_(); // .REGION+
  Push(0xc4a2); // '(GETSITE)'
  MODULE(); // MODULE
  Push(Read16(pp__n_CLRMAP)); // #CLRMAP @
  SWAP(); // SWAP
  Push(0xc380); // 'INIT-ORBIT'
  MODULE(); // MODULE
  Push(0xc395); // 'SHOWSITE'
  MODULE(); // MODULE
  Push(0xc3a7); // 'DESCEND'
  MODULE(); // MODULE
  _gt_DISPLAY(); // >DISPLAY
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  DCLIPSET(); // DCLIPSET
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  OFF(); // OFF
  ICLOSE(); // ICLOSE
}

// 0xf48e: db 0x4d 0x4f 0x56 0x45 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x4e 0x54 0x20 0x4f 0x56 0x45 0x52 0x4c 0x41 0x59 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x28 0x20 0x72 0x66 0x67 0x32 0x38 0x61 0x70 0x72 0x38 0x36 0x29 0xb6 0x31 0x32 0x32 0x35 0xee 0xb6 0x4f 0x17 0x85 0x00 0xf0 0x60 0xef 0x20 0xf2 0x6a 0xaa 0xfa 0x15 0xce 0xff 0x2f 0x4f 0x06 0xf1 0x12 0xbb 0x58 0x51 0x90 0x61 0x92 0x6d 0x38 0xf4 0x91 0x75 0xc9 0x79 0x0a 0xef 0x93 0x3b 0xf8 0xdd 0xfd 0x4b 0x89 0x4f 0x06 0xf1 0xff 0xde 0xb3 0xe0 0x7e 0xf4 0x60 0x16 0x36 0x00 0x42 0xe0 0xb3 0xe0 0x8b 0x3b 0x20 0x0f 0x53 0xdf 0xdc 0x1b 0x1f 0x4e 0x4f 0x54 0x20 0x45 0x4e 0x4f 0x55 0x47 0x48 0x20 0x53 0x54 0x4f 0x52 0x41 0x47 0x45 0x20 0x46 0x4f 0x52 0x20 0x46 0x55 0x4e 0x43 0x54 0x49 0x4f 0x4e 0x5d 0x17 0xa0 0x0f 0xef 0x2a 0xb3 0xe0 0x90 0x16 0x49 0x54 0x45 0x4d 0x53 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'MOVE-VOC________________________NT OVERLAY -------( rfg28apr86) 1225  O    `   j     /O    XQ a m8  u y   ;   K O      ~ ` 6 B    ;  S    NOT ENOUGH STORAGE FOR FUNCTION]    *    ITEMS__________________________ '

