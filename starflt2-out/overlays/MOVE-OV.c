// ====== OVERLAY 'MOVE-OV' ======
// store offset = 0xea20
// overlay size   = 0x0b40

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WEA36  codep:0x224c wordp:0xea36 size:0x0006 C-string:'WEA36'
//           WEA3E  codep:0x224c wordp:0xea3e size:0x0006 C-string:'WEA3E'
//           WEA46  codep:0x224c wordp:0xea46 size:0x002e C-string:'WEA46'
//           WEA76  codep:0x224c wordp:0xea76 size:0x0010 C-string:'WEA76'
//           WEA88  codep:0x7394 wordp:0xea88 size:0x0006 C-string:'WEA88'
//           WEA90  codep:0x7394 wordp:0xea90 size:0x0006 C-string:'WEA90'
//           WEA98  codep:0x7394 wordp:0xea98 size:0x0006 C-string:'WEA98'
//           WEAA0  codep:0x224c wordp:0xeaa0 size:0x0012 C-string:'WEAA0'
//            S>CM  codep:0x4b3b wordp:0xeabb size:0x0010 C-string:'S_gt_CM'
//           WEACD  codep:0x224c wordp:0xeacd size:0x000c C-string:'WEACD'
//           WEADB  codep:0x224c wordp:0xeadb size:0x000a C-string:'WEADB'
//           WEAE7  codep:0x224c wordp:0xeae7 size:0x0008 C-string:'WEAE7'
//           WEAF1  codep:0x224c wordp:0xeaf1 size:0x000a C-string:'WEAF1'
//           WEAFD  codep:0x224c wordp:0xeafd size:0x000a C-string:'WEAFD'
//           WEB09  codep:0x224c wordp:0xeb09 size:0x0018 C-string:'WEB09'
//           WEB23  codep:0x224c wordp:0xeb23 size:0x001e C-string:'WEB23'
//           WEB43  codep:0x224c wordp:0xeb43 size:0x000e C-string:'WEB43'
//         SET-SPE  codep:0x224c wordp:0xeb5d size:0x002a C-string:'SET_dash_SPE'
//          .STATS  codep:0x224c wordp:0xeb92 size:0x0008 C-string:'DrawSTATS'
//         .DISTAN  codep:0x224c wordp:0xeba6 size:0x0008 C-string:'DrawDISTAN'
//          .WHERE  codep:0x224c wordp:0xebb9 size:0x0008 C-string:'DrawWHERE'
//         .ENERGY  codep:0x224c wordp:0xebcd size:0x0008 C-string:'DrawENERGY'
//           WEBD7  codep:0x224c wordp:0xebd7 size:0x0016 C-string:'WEBD7'
//            CBLT  codep:0x1d29 wordp:0xebf6 size:0x0004 C-string:'CBLT'
//           CBLTP  codep:0xec04 wordp:0xec04 size:0x002c C-string:'CBLTP'
//           WEC32  codep:0x224c wordp:0xec32 size:0x00c6 C-string:'WEC32'
//           WECFA  codep:0x224c wordp:0xecfa size:0x002e C-string:'WECFA'
//           WED2A  codep:0x224c wordp:0xed2a size:0x005e C-string:'WED2A'
//           WED8A  codep:0x224c wordp:0xed8a size:0x0010 C-string:'WED8A'
//         .STARDA  codep:0x224c wordp:0xeda6 size:0x0008 C-string:'DrawSTARDA'
//           WEDB0  codep:0x1d29 wordp:0xedb0 size:0x0002 C-string:'WEDB0'
//           WEDB4  codep:0x1d29 wordp:0xedb4 size:0x0002 C-string:'WEDB4'
//           WEDB8  codep:0x2214 wordp:0xedb8 size:0x0002 C-string:'WEDB8'
//           WEDBC  codep:0x2214 wordp:0xedbc size:0x0002 C-string:'WEDBC'
//           WEDC0  codep:0x7394 wordp:0xedc0 size:0x0006 C-string:'WEDC0'
//           WEDC8  codep:0x224c wordp:0xedc8 size:0x0010 C-string:'WEDC8'
//          #BOXES  codep:0x224c wordp:0xede3 size:0x0022 C-string:'_n_BOXES'
//           WEE07  codep:0x224c wordp:0xee07 size:0x0016 C-string:'WEE07'
//           WEE1F  codep:0x224c wordp:0xee1f size:0x001e C-string:'WEE1F'
//           WEE3F  codep:0x224c wordp:0xee3f size:0x000c C-string:'WEE3F'
//           WEE4D  codep:0x224c wordp:0xee4d size:0x000c C-string:'WEE4D'
//           WEE5B  codep:0x224c wordp:0xee5b size:0x007e C-string:'WEE5B'
//           WEEDB  codep:0x224c wordp:0xeedb size:0x0006 C-string:'WEEDB'
//           WEEE3  codep:0x224c wordp:0xeee3 size:0x000c C-string:'WEEE3'
//           WEEF1  codep:0x224c wordp:0xeef1 size:0x000e C-string:'WEEF1'
//           WEF01  codep:0x224c wordp:0xef01 size:0x0016 C-string:'WEF01'
//           WEF19  codep:0x224c wordp:0xef19 size:0x0012 C-string:'WEF19'
//           WEF2D  codep:0x224c wordp:0xef2d size:0x0028 C-string:'WEF2D'
//           WEF57  codep:0x224c wordp:0xef57 size:0x0020 C-string:'WEF57'
//           WEF79  codep:0x224c wordp:0xef79 size:0x001e C-string:'WEF79'
//           WEF99  codep:0x224c wordp:0xef99 size:0x000c C-string:'WEF99'
//           WEFA7  codep:0x224c wordp:0xefa7 size:0x0008 C-string:'WEFA7'
//           WEFB1  codep:0x224c wordp:0xefb1 size:0x002c C-string:'WEFB1'
//           WEFDF  codep:0x224c wordp:0xefdf size:0x002c C-string:'WEFDF'
//           WF00D  codep:0x224c wordp:0xf00d size:0x0058 C-string:'WF00D'
//           WF067  codep:0x224c wordp:0xf067 size:0x002c C-string:'WF067'
//           WF095  codep:0x224c wordp:0xf095 size:0x0022 C-string:'WF095'
//           WF0B9  codep:0x224c wordp:0xf0b9 size:0x0006 C-string:'WF0B9'
//         ?POPULA  codep:0x224c wordp:0xf0cb size:0x0056 C-string:'IsPOPULA'
//           WF123  codep:0x224c wordp:0xf123 size:0x0048 C-string:'WF123'
//           WF16D  codep:0x224c wordp:0xf16d size:0x0028 C-string:'WF16D'
//           WF197  codep:0x224c wordp:0xf197 size:0x0024 C-string:'WF197'
//           WF1BD  codep:0x224c wordp:0xf1bd size:0x001a C-string:'WF1BD'
//           WF1D9  codep:0x224c wordp:0xf1d9 size:0x0026 C-string:'WF1D9'
//           WF201  codep:0x224c wordp:0xf201 size:0x0008 C-string:'WF201'
//           WF20B  codep:0x224c wordp:0xf20b size:0x0016 C-string:'WF20B'
//           WF223  codep:0x224c wordp:0xf223 size:0x000c C-string:'WF223'
//           WF231  codep:0x224c wordp:0xf231 size:0x002c C-string:'WF231'
//           WF25F  codep:0x224c wordp:0xf25f size:0x0034 C-string:'WF25F'
//           WF295  codep:0x224c wordp:0xf295 size:0x0076 C-string:'WF295'
//           WF30D  codep:0x224c wordp:0xf30d size:0x0074 C-string:'WF30D'
//           WF383  codep:0x224c wordp:0xf383 size:0x0044 C-string:'WF383'
//           WF3C9  codep:0x224c wordp:0xf3c9 size:0x000e C-string:'WF3C9'
//           WF3D9  codep:0x224c wordp:0xf3d9 size:0x000c C-string:'WF3D9'
//           WF3E7  codep:0x224c wordp:0xf3e7 size:0x0024 C-string:'WF3E7'
//           WF40D  codep:0x224c wordp:0xf40d size:0x0008 C-string:'WF40D'
//           WF417  codep:0x224c wordp:0xf417 size:0x002e C-string:'WF417'
//           WF447  codep:0x224c wordp:0xf447 size:0x0016 C-string:'WF447'
//           WF45F  codep:0x224c wordp:0xf45f size:0x000c C-string:'WF45F'
//           WF46D  codep:0x224c wordp:0xf46d size:0x000e C-string:'WF46D'
//           WF47D  codep:0x224c wordp:0xf47d size:0x000a C-string:'WF47D'
//           WF489  codep:0x224c wordp:0xf489 size:0x000e C-string:'WF489'
//           WF499  codep:0x224c wordp:0xf499 size:0x0050 C-string:'WF499'
//            TELE  codep:0x224c wordp:0xf4f2 size:0x003d C-string:'TELE'
//         TV-MOVE  codep:0x224c wordp:0xf53b size:0x0000 C-string:'TV_dash_MOVE'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_DEFAULT; // DEFAULT
extern const unsigned short int pp_Get_co_0_star_1_sc_; // @,0*1;
extern const unsigned short int pp_XLL; // XLL
extern const unsigned short int pp_YLL; // YLL
extern const unsigned short int pp_IsCRITIC; // ?CRITIC
extern const unsigned short int pp__i_INJURE; // 'INJURE
extern const unsigned short int pp_LCOLOR; // LCOLOR
extern const unsigned short int pp_IsTV; // ?TV
extern const unsigned short int pp_OLDHR; // OLDHR
extern const unsigned short int pp__i_THROW_dash_; // 'THROW-
extern const unsigned short int pp_COLOR; // COLOR
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
extern const unsigned short int pp__pe_EFF; // %EFF
extern const unsigned short int pp__i_TVT; // 'TVT
extern const unsigned short int pp_E_slash_M; // E/M
extern const unsigned short int pp_IsON_dash_PLA; // ?ON-PLA
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp_SKEY; // SKEY
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp_TIME_dash_PA; // TIME-PA
extern const unsigned short int pp__i_SIMULA; // 'SIMULA
extern const unsigned short int pp__i_KEY_dash_CA; // 'KEY-CA
extern const unsigned short int pp__i__dot_DATE; // '.DATE
extern const unsigned short int pp__i__dot_VEHIC; // '.VEHIC
extern const unsigned short int pp__i_VEHICL; // 'VEHICL
extern const unsigned short int pp__i_EXTERN; // 'EXTERN
extern const unsigned short int pp__i_REPAIR; // 'REPAIR
extern const unsigned short int pp_LAST_dash_UP; // LAST-UP
extern const unsigned short int pp_ANCHOR; // ANCHOR
extern const unsigned short int pp_TVEHICL; // TVEHICL
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp_THIS_dash_RE; // THIS-RE
extern const unsigned short int pp_LSCAN; // LSCAN
extern const unsigned short int pp_NOF; // NOF
extern LoadDataType ART_dash_VOL; // ART-VOL
extern Color BLACK; // BLACK
extern Color GREEN; // GREEN
extern Color PINK; // PINK
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
extern IFieldType PHRASE_do_; // PHRASE$
void COUNT(); // COUNT
void _star__slash_(); // */
void ABS(); // ABS
void MOD(); // MOD
void BEEP(); // BEEP
void MS(); // MS
void NOP(); // NOP
void _2OVER(); // 2OVER
void D_eq_(); // D=
void RRND(); // RRND
void ACELLAD(); // ACELLAD
void A_at_(); // A@
void SETLARR(); // SETLARR
void SETREGI(); // SETREGI
void I_gt_C(); // I>C
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void _2_ex__2(); // 2!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void GetINST_dash_C(); // @INST-C
void _eq_SPECIE(); // =SPECIE
void CDROP(); // CDROP
void IsNULL(); // ?NULL
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
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
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void CELLCOL(); // CELLCOL
void StoreXYSEED(); // !XYSEED
void DrawREGION(); // .REGION
void StoreVISWIN(); // !VISWIN
void StoreIX(); // !IX
void StoreIY(); // !IY
void POINT_gt_I(); // POINT>I
void DrawLOCAL_dash_(); // .LOCAL-
void IsICON_eq_I(); // ?ICON=I
void _dash_ICON(); // -ICON
void _plus_ICON_2(); // +ICON_2
void ORGLIST(); // ORGLIST
void POLY_dash_WI(); // POLY-WI
void _gt_TVCT(); // >TVCT
void CTPOS_dot_(); // CTPOS.
void CTERASE(); // CTERASE
void BEEPON_2(); // BEEPON_2
void GCR(); // GCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void Y_slash_N(); // Y/N
void _do__ex_(); // $!
void IsNEW_dash_HO(); // ?NEW-HO
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void _gt_(); // >
void _st_(); // <
void _0_gt_(); // 0>
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void GetEXECUTE(); // @EXECUTE
void ON_1(); // ON_1
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void CI(); // CI
void BLT(); // BLT
void BUFFERX(); // BUFFERX
void _ro_XYSCAN(); // (XYSCAN
void CBLTP(); // CBLTP


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_CBLT = 0xebf6; // CBLT size: 4
// {0xff, 0x66, 0x00, 0x66}

const unsigned short int pp_WEDB0 = 0xedb0; // WEDB0 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEDB4 = 0xedb4; // WEDB4 size: 2
// {0x3a, 0x20}


const unsigned short int cc_WEDB8 = 0xedb8; // WEDB8
const unsigned short int cc_WEDBC = 0xedbc; // WEDBC


// 0xea32: db 0xb4 0x00 '  '

// ================================================
// 0xea34: WORD 'WEA36' codep=0x224c wordp=0xea36 params=0 returns=0
// ================================================

void WEA36() // WEA36
{
  Push(pp_TVEHICL); // TVEHICL
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xea3c: WORD 'WEA3E' codep=0x224c wordp=0xea3e params=0 returns=0
// ================================================

void WEA3E() // WEA3E
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xea44: WORD 'WEA46' codep=0x224c wordp=0xea46 params=0 returns=0
// ================================================

void WEA46() // WEA46
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
// 0xea74: WORD 'WEA76' codep=0x224c wordp=0xea76
// ================================================

void WEA76() // WEA76
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0);
  Push(0);
  CTPOS_dot_(); // CTPOS.
}


// ================================================
// 0xea86: WORD 'WEA88' codep=0x7394 wordp=0xea88
// ================================================
// orphan
LoadDataType WEA88 = {PLANETIDX, 0x07, 0x02, 0x17, 0x6c49};

// ================================================
// 0xea8e: WORD 'WEA90' codep=0x7394 wordp=0xea90
// ================================================
LoadDataType WEA90 = {PLANETIDX, 0x01, 0x01, 0x17, 0x6c49};

// ================================================
// 0xea96: WORD 'WEA98' codep=0x7394 wordp=0xea98
// ================================================
LoadDataType WEA98 = {PLANETIDX, 0x04, 0x01, 0x17, 0x6c49};

// ================================================
// 0xea9e: WORD 'WEAA0' codep=0x224c wordp=0xeaa0
// ================================================

void WEAA0() // WEAA0
{
  LoadData(WEA98); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(1);
    return;
  }
  Push(2);
}


// ================================================
// 0xeab2: WORD 'S>CM' codep=0x4b3b wordp=0xeabb
// ================================================

void S_gt_CM() // S>CM
{
  switch(Pop()) // S>CM
  {
  case 4:
    Push(4);
    break;
  case 1:
    Push(5);
    break;
  case 3:
    Push(3);
    break;
  default:
    WEAA0(); // WEAA0
    break;

  }
}

// ================================================
// 0xeacb: WORD 'WEACD' codep=0x224c wordp=0xeacd
// ================================================
// orphan

void WEACD() // WEACD
{
  WEA3E(); // WEA3E
  LoadData(WEA90); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  S_gt_CM(); // S>CM case
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xead9: WORD 'WEADB' codep=0x224c wordp=0xeadb params=0 returns=2
// ================================================

void WEADB() // WEADB
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xeae5: WORD 'WEAE7' codep=0x224c wordp=0xeae7 params=0 returns=2
// ================================================
// orphan

void WEAE7() // WEAE7
{
  WEA36(); // WEA36
  WEADB(); // WEADB
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeaef: WORD 'WEAF1' codep=0x224c wordp=0xeaf1 params=2 returns=0
// ================================================

void WEAF1() // WEAF1
{
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xeafb: WORD 'WEAFD' codep=0x224c wordp=0xeafd params=0 returns=2
// ================================================

void WEAFD() // WEAFD
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
}


// ================================================
// 0xeb07: WORD 'WEB09' codep=0x224c wordp=0xeb09
// ================================================

void WEB09() // WEB09
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x00c5);
  Push(0x000c);
  Push(0x00c1);
  Push(0x0044);
  Push(a); // R>
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xeb21: WORD 'WEB23' codep=0x224c wordp=0xeb23 params=0 returns=2
// ================================================

void WEB23() // WEB23
{
  Push(0x6a82); // 'CONTOUR'
  SETLARR(); // SETLARR
  Push(Read16(pp_XABS) - (Read16(pp_XCON) + 1)); // XABS @ XCON @ 1+ -
  Push(Read16(pp_YABS) - Read16(pp_YCON)); // YABS @ YCON @ -
}


// ================================================
// 0xeb41: WORD 'WEB43' codep=0x224c wordp=0xeb43
// ================================================
// orphan

void WEB43() // WEB43
{
  WEB23(); // WEB23
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(0x0010);
  _st_(); // <
}


// ================================================
// 0xeb51: WORD 'SET-SPE' codep=0x224c wordp=0xeb5d
// ================================================
// entry

void SET_dash_SPE() // SET-SPE
{
  WEB23(); // WEB23
  ACELLAD(); // ACELLAD
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
  Store_2(); // !_2
}


// ================================================
// 0xeb87: WORD '.STATS' codep=0x224c wordp=0xeb92 params=0 returns=0
// ================================================

void DrawSTATS() // .STATS
{
  Push(0xcf2b); // '.ST'
  MODULE(); // MODULE
}


// ================================================
// 0xeb9a: WORD '.DISTAN' codep=0x224c wordp=0xeba6 params=0 returns=0
// ================================================

void DrawDISTAN() // .DISTAN
{
  Push(0xcf71); // '.DI'
  MODULE(); // MODULE
}


// ================================================
// 0xebae: WORD '.WHERE' codep=0x224c wordp=0xebb9 params=0 returns=0
// ================================================

void DrawWHERE() // .WHERE
{
  Push(0xcf39); // '.WH'
  MODULE(); // MODULE
}


// ================================================
// 0xebc1: WORD '.ENERGY' codep=0x224c wordp=0xebcd params=0 returns=0
// ================================================

void DrawENERGY() // .ENERGY
{
  Push(0xcf55); // '.EN'
  MODULE(); // MODULE
}


// ================================================
// 0xebd5: WORD 'WEBD7' codep=0x224c wordp=0xebd7 params=0 returns=2
// ================================================

void WEBD7() // WEBD7
{
  Push(Read16(pp_XVIS) - Read16(pp_XCON)); // XVIS @ XCON @ -
  Push(Read16(pp_YVIS) - Read16(pp_YCON)); // YVIS @ YCON @ -
}


// ================================================
// 0xebed: WORD 'CBLT' codep=0x1d29 wordp=0xebf6
// ================================================
// 0xebf6: db 0xff 0x66 0x00 0x66 ' f f'

// ================================================
// 0xebfa: WORD 'CBLTP' codep=0xec04 wordp=0xec04
// ================================================
// 0xec04: pop    ax
// 0xec05: add    ax,0003
// 0xec08: mov    [5A3D],ax // YBLT
// 0xec0c: pop    ax
// 0xec0d: add    ax,0006
// 0xec10: mov    [5A48],ax // XBLT
// 0xec14: mov    word ptr [5A6C],0004 // WBLT
// 0xec1a: mov    word ptr [5A61],0006 // LBLT
// 0xec20: mov    word ptr [5A77],EBF6 // ABLT
// 0xec26: push   ds
// 0xec27: pop    word ptr [5A84] // BLTSEG
// 0xec2b: lodsw
// 0xec2c: mov    bx,ax
// 0xec2e: jmp    word ptr [bx]

// ================================================
// 0xec30: WORD 'WEC32' codep=0x224c wordp=0xec32
// ================================================

void WEC32() // WEC32
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

  Push(pp_BLTSEG); // BLTSEG
  Store_2(); // !_2
}


// ================================================
// 0xecf8: WORD 'WECFA' codep=0x224c wordp=0xecfa
// ================================================

void WECFA() // WECFA
{
  Push(0x6a82); // 'CONTOUR'
  SETLARR(); // SETLARR
  WEBD7(); // WEBD7
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
  WEC32(); // WEC32
}


// ================================================
// 0xed28: WORD 'WED2A' codep=0x224c wordp=0xed2a params=0 returns=0
// ================================================

void WED2A() // WED2A
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(regsp)); // DUP
  Push(0x000c);
  MOD(); // MOD
  _dash_(); // -
  Push(Pop() - 0x0018); //  0x0018 -
  Push(pp_XCON); // XCON
  Store_2(); // !_2
  Push(Read16(pp_YABS)); // YABS @
  Push(Read16(regsp)); // DUP
  Push(0x0014);
  MOD(); // MOD
  _dash_(); // -
  Push(Pop() - 0x0028); //  0x0028 -
  Push(pp_YCON); // YCON
  Store_2(); // !_2
  Push(pp_DXCON); // DXCON
  _099(); // 099
  Push(pp_DYCON); // DYCON
  _099(); // 099
  Push(Read16(pp_XABS) - 0x0012); // XABS @ 0x0012 -
  Push(pp_XVIS); // XVIS
  Store_2(); // !_2
  Push(Read16(pp_YABS) - 0x001e); // YABS @ 0x001e -
  Push(pp_YVIS); // YVIS
  Store_2(); // !_2
  Push(pp_DXVIS); // DXVIS
  _099(); // 099
  Push(pp_DYVIS); // DYVIS
  _099(); // 099
}


// ================================================
// 0xed88: WORD 'WED8A' codep=0x224c wordp=0xed8a params=2 returns=2
// ================================================

void WED8A() // WED8A
{
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+PHRASE_do_.offset); // PHRASE$<IFIELD>
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed9a: WORD '.STARDA' codep=0x224c wordp=0xeda6 params=0 returns=0
// ================================================

void DrawSTARDA() // .STARDA
{
  Push(0xcf47); // '.DA'
  MODULE(); // MODULE
}


// ================================================
// 0xedae: WORD 'WEDB0' codep=0x1d29 wordp=0xedb0
// ================================================
// 0xedb0: db 0x3a 0x20 ': '

// ================================================
// 0xedb2: WORD 'WEDB4' codep=0x1d29 wordp=0xedb4
// ================================================
// 0xedb4: db 0x3a 0x20 ': '

// ================================================
// 0xedb6: WORD 'WEDB8' codep=0x2214 wordp=0xedb8
// ================================================
// orphan
// 0xedb8: dw 0x07d0

// ================================================
// 0xedba: WORD 'WEDBC' codep=0x2214 wordp=0xedbc
// ================================================
// 0xedbc: dw 0x47d0

// ================================================
// 0xedbe: WORD 'WEDC0' codep=0x7394 wordp=0xedc0
// ================================================
// orphan
LoadDataType WEDC0 = {CREATUREIDX, 0x90, 0x02, 0x22, 0x6f07};

// ================================================
// 0xedc6: WORD 'WEDC8' codep=0x224c wordp=0xedc8 params=0 returns=0
// ================================================

void WEDC8() // WEDC8
{
  WEA36(); // WEA36
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  WEAF1(); // WEAF1
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedd8: WORD '#BOXES' codep=0x224c wordp=0xede3
// ================================================

void _n_BOXES() // #BOXES
{
  Push(0);
  WEA3E(); // WEA3E
  IOPEN(); // IOPEN
  while(1)
  {
    Push(0x000b);
    Push(0x000b);
    IFIND(); // IFIND
    if (Pop() == 0) break;

    Push(Pop() + 1); //  1+
    INEXT(); // INEXT
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xee05: WORD 'WEE07' codep=0x224c wordp=0xee07
// ================================================

void WEE07() // WEE07
{
  _n_BOXES(); // #BOXES
  Push(6);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(pp__i_THROW_dash_); // 'THROW-
  GetEXECUTE(); // @EXECUTE
  Push(pp_IsCRITIC); // ?CRITIC
  _099(); // 099
}


// ================================================
// 0xee1d: WORD 'WEE1F' codep=0x224c wordp=0xee1f params=0 returns=0
// ================================================

void WEE1F() // WEE1F
{
  Push(Read16(pp_WEDB0)); // WEDB0 @
  Push(Read16(regsp)); // DUP
  Push(pp_DXVIS); // DXVIS
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  _st__plus__ex__gt_(); // <+!>
  Push(Read16(pp_WEDB4)); // WEDB4 @
  Push(Read16(regsp)); // DUP
  Push(pp_DYVIS); // DYVIS
  _st__ex__gt_(); // <!>
  Push(pp_YVIS); // YVIS
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xee3d: WORD 'WEE3F' codep=0x224c wordp=0xee3f params=1 returns=0
// ================================================

void WEE3F() // WEE3F
{
  Push(Read16(regsp)); // DUP
  Push(pp_DXCON); // DXCON
  _st__ex__gt_(); // <!>
  Push(pp_XCON); // XCON
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xee4b: WORD 'WEE4D' codep=0x224c wordp=0xee4d params=1 returns=0
// ================================================

void WEE4D() // WEE4D
{
  Push(Read16(regsp)); // DUP
  Push(pp_DYCON); // DYCON
  _st__ex__gt_(); // <!>
  Push(pp_YCON); // YCON
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xee59: WORD 'WEE5B' codep=0x224c wordp=0xee5b params=0 returns=0
// ================================================

void WEE5B() // WEE5B
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
  WEE3F(); // WEE3F
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
  WEE4D(); // WEE4D
  Push(Read16(pp_DXCON) | Read16(pp_DYCON)); // DXCON @ DYCON @ OR
  if (Pop() == 0) return;
  Push(0xbad2); // 'SCRLC'
  MODULE(); // MODULE
}


// ================================================
// 0xeed9: WORD 'WEEDB' codep=0x224c wordp=0xeedb
// ================================================
// orphan

void WEEDB() // WEEDB
{
  _2DUP(); // 2DUP
  IFIND(); // IFIND
}


// ================================================
// 0xeee1: WORD 'WEEE3' codep=0x224c wordp=0xeee3 params=2 returns=2
// ================================================

void WEEE3() // WEEE3
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xeeef: WORD 'WEEF1' codep=0x224c wordp=0xeef1 params=0 returns=0
// ================================================

void WEEF1() // WEEF1
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  _2_ex__2(); // 2!_2
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xeeff: WORD 'WEF01' codep=0x224c wordp=0xef01 params=2 returns=2
// ================================================

void WEF01() // WEF01
{
  _gt_C_plus_S(); // >C+S
  CI(); // CI
  IsICON_eq_I(); // ?ICON=I
  if (Pop() != 0)
  {
    POINT_gt_I(); // POINT>I
    WEADB(); // WEADB
    StoreIY(); // !IY
    StoreIX(); // !IX
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef17: WORD 'WEF19' codep=0x224c wordp=0xef19 params=0 returns=6
// ================================================

void WEF19() // WEF19
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  Push(0x00fe);
  Push(Read16(cc_DEFAULT)); // DEFAULT
  CI(); // CI
}


// ================================================
// 0xef2b: WORD 'WEF2D' codep=0x224c wordp=0xef2d
// ================================================

void WEF2D() // WEF2D
{
  GetINST_dash_C(); // @INST-C
  Push(Read16(regsp)); // DUP
  Push(Pop()==0x001b?1:0); //  0x001b =
  SWAP(); // SWAP
  Push(Pop()==0x0030?1:0); //  0x0030 =
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    WEF19(); // WEF19
  } else
  {
    Push(0xba55); // 'ICON-'
    MODULE(); // MODULE
  }
  _plus_ICON_2(); // +ICON_2
}


// ================================================
// 0xef55: WORD 'WEF57' codep=0x224c wordp=0xef57 params=0 returns=0
// ================================================

void WEF57() // WEF57
{
  IOPEN(); // IOPEN
  IsNULL(); // ?NULL
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(0xef2d); // 'WEF2D'
    ALL(); // ALL
    Push(0xec78);
    Push(Read16(regsp)); // DUP
    Push(pp_ANCHOR); // ANCHOR
    _2_ex__2(); // 2!_2
    ORGLIST(); // ORGLIST
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef77: WORD 'WEF79' codep=0x224c wordp=0xef79 params=1 returns=3
// ================================================

void WEF79() // WEF79
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
// 0xef97: WORD 'WEF99' codep=0x224c wordp=0xef99 params=0 returns=0
// ================================================

void WEF99() // WEF99
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  StoreXYSEED(); // !XYSEED
}


// ================================================
// 0xefa5: WORD 'WEFA7' codep=0x224c wordp=0xefa7 params=0 returns=2
// ================================================

void WEFA7() // WEFA7
{
  WEAFD(); // WEAFD
  WEF79(); // WEF79
  WEAF1(); // WEAF1
}


// ================================================
// 0xefaf: WORD 'WEFB1' codep=0x224c wordp=0xefb1
// ================================================

void WEFB1() // WEFB1
{
  WEE07(); // WEE07
  Push(0x000b);
  Push(0x000b);
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  _2DUP(); // 2DUP
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_ex__2(); // 1.5!_2
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  WEFA7(); // WEFA7
  WEF99(); // WEF99
  Push(0);
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefdd: WORD 'WEFDF' codep=0x224c wordp=0xefdf params=0 returns=1
// ================================================

void WEFDF() // WEFDF
{
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  WEEE3(); // WEEE3
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    _gt_C_plus_S(); // >C+S
    WEAFD(); // WEAFD
    WEF79(); // WEF79
    WEADB(); // WEADB
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
// 0xf00b: WORD 'WF00D' codep=0x224c wordp=0xf00d params=0 returns=4
// ================================================

void WF00D() // WF00D
{
  unsigned short int a, b;
  WEAFD(); // WEAFD
  WEF79(); // WEF79
  Push2Words("NULL");
  WEA3E(); // WEA3E
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

    GetINST_dash_C(); // @INST-C
    Push(Pop()==0x000b?1:0); //  0x000b =
    Push(0x000b);
    _eq_SPECIE(); // =SPECIE
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
      _2DUP(); // 2DUP
      WEADB(); // WEADB
      D_eq_(); // D=
      if (Pop() != 0)
      {
        CI(); // CI
      } else
      {
        Push2Words("NULL");
      }
    }
    INEXT(); // INEXT
  }
  a = Pop(); // >R
  b = Pop(); // >R
  Pop(); Pop(); // 2DROP
  Push(b); // R>
  Push(a); // R>
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf065: WORD 'WF067' codep=0x224c wordp=0xf067 params=0 returns=0
// ================================================

void WF067() // WF067
{
  Push(Read16(pp_XVIS) + 0x000e); // XVIS @ 0x000e +
  Push(Read16(pp_YVIS) + 0x0016); // YVIS @ 0x0016 +
  Push(Read16(pp_XVIS) + 0x0016); // XVIS @ 0x0016 +
  Push(Read16(pp_YVIS) + 0x0029); // YVIS @ 0x0029 +
  StoreVISWIN(); // !VISWIN
}


// ================================================
// 0xf093: WORD 'WF095' codep=0x224c wordp=0xf095 params=2 returns=3
// ================================================

void WF095() // WF095
{
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  CI(); // CI
  IsICON_eq_I(); // ?ICON=I
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    ICLOSE(); // ICLOSE
    WEF57(); // WEF57
    IOPEN(); // IOPEN
  } else
  {
    Pop(); // DROP
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf0b7: WORD 'WF0B9' codep=0x224c wordp=0xf0b9 params=0 returns=1
// ================================================

void WF0B9() // WF0B9
{
  Push(Read16(pp_MOVED)); // MOVED @
}


// ================================================
// 0xf0bf: WORD '?POPULA' codep=0x224c wordp=0xf0cb params=0 returns=0
// ================================================
// entry

void IsPOPULA() // ?POPULA
{
  WEFDF(); // WEFDF
  if (Pop() == 0) return;
  Push(pp_IsNEW); // ?NEW
  ON_2(); // ON_2
  WF00D(); // WF00D
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    WEFB1(); // WEFB1
    Push(pp__ro_PLANET); // (PLANET
    Get_gt_C_plus_S(); // @>C+S
    IOPEN(); // IOPEN
    CDROP(); // CDROP
    _gt_C_plus_S(); // >C+S
    WF0B9(); // WF0B9
    if (Pop() != 0)
    {
      WEA76(); // WEA76
      Push(0x6934); Push(0x0002);
      WED8A(); // WED8A
      Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    }
    Push(0xcfa8); // 'POPU'
    MODULE(); // MODULE
    WEF57(); // WEF57
    Push(2);
    _star_CLOSE(); // *CLOSE
    WF0B9(); // WF0B9
    if (Pop() != 0)
    {
      CTERASE(); // CTERASE
    }
    return;
  }
  WF095(); // WF095
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf121: WORD 'WF123' codep=0x224c wordp=0xf123
// ================================================

void WF123() // WF123
{
  GetColor(PINK);
  WEB09(); // WEB09
  DrawWHERE(); // .WHERE
  Push(pp_IsNEW); // ?NEW
  ON_2(); // ON_2
  Push(pp_MOVED); // MOVED
  ON_2(); // ON_2
  Push(Read16(regsp)); // DUP
  Push(pp_WEDB0); // WEDB0
  _st__ex__gt_(); // <!>
  Push(pp_XABS); // XABS
  _st__plus__ex__gt_(); // <+!>
  Push(Read16(regsp)); // DUP
  Push(pp_WEDB4); // WEDB4
  _st__ex__gt_(); // <!>
  Push(pp_YABS); // YABS
  _st__plus__ex__gt_(); // <+!>
  WEE1F(); // WEE1F
  WEE5B(); // WEE5B
  IsPOPULA(); // ?POPULA
  _gt_MAINVI(); // >MAINVI
  WF067(); // WF067
  WEDC8(); // WEDC8
  Push(pp_TVEHICL); // TVEHICL
  _1_dot_5_at_(); // 1.5@
  WEF01(); // WEF01
  WEEF1(); // WEEF1
  WECFA(); // WECFA
  DrawLOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  GetColor(GREEN);
  WEB09(); // WEB09
  DrawWHERE(); // .WHERE
  WEA46(); // WEA46
}


// ================================================
// 0xf16b: WORD 'WF16D' codep=0x224c wordp=0xf16d params=2 returns=2
// ================================================

void WF16D() // WF16D
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
// 0xf195: WORD 'WF197' codep=0x224c wordp=0xf197
// ================================================

void WF197() // WF197
{
  Push(0x001c);
  Push(0x0029);
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  _gt_C_plus_S(); // >C+S
  WEAFD(); // WEAFD
  WEAF1(); // WEAF1
  LoadData(ART_dash_VOL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1bb: WORD 'WF1BD' codep=0x224c wordp=0xf1bd params=0 returns=1
// ================================================

void WF1BD() // WF1BD
{
  Push(Read16(pp_OLDHR) - Read16(pp_STAR_dash_HR)); // OLDHR @ STAR-HR @ -
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(Read16(pp_STAR_dash_HR)); // STAR-HR @
  Push(pp_OLDHR); // OLDHR
  Store_2(); // !_2
}


// ================================================
// 0xf1d7: WORD 'WF1D9' codep=0x224c wordp=0xf1d9
// ================================================

void WF1D9() // WF1D9
{
  WEA76(); // WEA76
  Push(0x6956); Push(0x0002);
  WED8A(); // WED8A
  DrawTTY(); // .TTY
  Y_slash_N(); // Y/N
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  SET_STR_AS_PARAM("CANCELLED");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf1ff: WORD 'WF201' codep=0x224c wordp=0xf201
// ================================================

void WF201() // WF201
{
  GetColor(BLACK);
  WEB09(); // WEB09
  DrawWHERE(); // .WHERE
}


// ================================================
// 0xf209: WORD 'WF20B' codep=0x224c wordp=0xf20b params=2 returns=0
// ================================================

void WF20B() // WF20B
{
  Push(Read16(regsp)); // DUP
  Push(pp_WEDB4); // WEDB4
  _st__ex__gt_(); // <!>
  Push(pp_YABS); // YABS
  _st__plus__ex__gt_(); // <+!>
  Push(Read16(regsp)); // DUP
  Push(pp_WEDB0); // WEDB0
  _st__ex__gt_(); // <!>
  Push(pp_XABS); // XABS
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xf221: WORD 'WF223' codep=0x224c wordp=0xf223
// ================================================

void WF223() // WF223
{
  WF20B(); // WF20B
  WEE1F(); // WEE1F
  WEE5B(); // WEE5B
  SET_dash_SPE(); // SET-SPE
  DrawDISTAN(); // .DISTAN
}


// ================================================
// 0xf22f: WORD 'WF231' codep=0x224c wordp=0xf231
// ================================================

void WF231() // WF231
{
  WF223(); // WF223
  _gt_MAINVI(); // >MAINVI
  WF067(); // WF067
  NOP(); // NOP
  WEEF1(); // WEEF1
  WECFA(); // WECFA
  DrawLOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  Push(0);
  Push(5);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(0xc1b8); // '(ROL'
  MODULE(); // MODULE
  Push(Read16(pp__i_INJURE)); // 'INJURE @
  MODULE(); // MODULE
}


// ================================================
// 0xf25d: WORD 'WF25F' codep=0x224c wordp=0xf25f params=0 returns=0
// ================================================

void WF25F() // WF25F
{
  unsigned short int i, imax;
  Push(Read16(pp_Get_co_0_star_1_sc_)); // @,0*1; @
  if (Pop() == 0) return;
  BEEPON_2(); // BEEPON_2
  Push(0x07d0);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0);
    Push(0x0010);
    RRND(); // RRND
    I_gt_C(); // I>C
    WEB09(); // WEB09
    Push(i); // I
    Push(5);
    _slash_(); // /
    Push(Pop() + 0x0064); //  0x0064 +
    TONE(); // TONE
    i++;
  } while(i<imax); // (LOOP)

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf293: WORD 'WF295' codep=0x224c wordp=0xf295
// ================================================

void WF295() // WF295
{
  WEA76(); // WEA76
  Push(0x697a); Push(0x0002);
  WED8A(); // WED8A
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  GCR(); // GCR
  Push(1);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(0x6993); Push(0x0002);
  WED8A(); // WED8A
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(0x03e8);
  MS(); // MS
  BEEPOFF(); // BEEPOFF
  Push(0xcff8); // '>DEBRIS'
  MODULE(); // MODULE
  Push(pp_IsTV); // ?TV
  OFF_2(); // OFF_2
  WF197(); // WF197
  Push(pp_LCOLOR); // LCOLOR
  _099(); // 099
  GetColor(BLACK);
  WEB09(); // WEB09
  DrawWHERE(); // .WHERE
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  WEADB(); // WEADB
  ICLOSE(); // ICLOSE
  while(1)
  {
    WEAFD(); // WEAFD
    _2OVER(); // 2OVER
    WF16D(); // WF16D
    _2DUP(); // 2DUP
    Push2Words("NULL");
    D_eq_(); // D=
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    WF231(); // WF231
    Pop(); Pop(); // 2DROP
  }
  Pop(); Pop(); // 2DROP
  Pop(); Pop(); // 2DROP
  Pop(); Pop(); // 2DROP
  Push(pp_TVEHICL); // TVEHICL
  Get_gt_C_plus_S(); // @>C+S
  _dash_ICON(); // -ICON
  ICLOSE(); // ICLOSE
  Push(pp_FTRIG); // FTRIG
  ON_1(); // ON_1
  WEDC8(); // WEDC8
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf30b: WORD 'WF30D' codep=0x224c wordp=0xf30d params=0 returns=0
// ================================================

void WF30D() // WF30D
{
  unsigned short int a;
  Push(0x000c);
  Push(0xb78d); // 'TV?ART'
  MODULE(); // MODULE
  Push((Pop() & Read16(pp_IsON_dash_PLA)) & (Read16(pp_NOF)==0?1:0)); //  ?ON-PLA @ AND NOF @ 0= AND
  if (Pop() != 0)
  {
    Push(pp_NOF); // NOF
    ON_2(); // ON_2
    WF1D9(); // WF1D9
    if (Pop() != 0)
    {
      Push(0x69ba); Push(0x0002);
      WED8A(); // WED8A
      DrawTTY(); // .TTY
      WF25F(); // WF25F
      WF201(); // WF201
      Push2Words("*SHIP");
      _gt_C_plus_S(); // >C+S
      WEADB(); // WEADB
      ICLOSE(); // ICLOSE
      WEAFD(); // WEAFD
      ROT(); // ROT
      SWAP(); // SWAP
      _dash_(); // -
      a = Pop(); // >R
      _dash_(); // -
      Push(a); // R>
      WF20B(); // WF20B
      WEDC8(); // WEDC8
      WEEF1(); // WEEF1
      WED2A(); // WED2A
      Push(0xbab2); // 'NEWCO'
      MODULE(); // MODULE
    }
    Push(pp_NOF); // NOF
    _099(); // 099
    return;
  }
  Push(Read16(pp_IsON_dash_PLA)); // ?ON-PLA @
  if (Pop() != 0)
  {
    _gt_TVCT(); // >TVCT
    CTINIT(); // CTINIT
  }
  Push(0xb7e7); // '.NOFUN'
  MODULE(); // MODULE
}


// ================================================
// 0xf381: WORD 'WF383' codep=0x224c wordp=0xf383 params=0 returns=0
// ================================================

void WF383() // WF383
{
  unsigned short int a;
  WEA36(); // WEA36
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  Push(Read16(cc_WEDBC)); // WEDBC
  _gt_(); // >
  a = Pop(); // >R
  Push(Read16(pp_E_slash_M)); // E/M @
  Push(0x0064);
  Push(Read16(pp__pe_EFF)); // %EFF @
  _star__slash_(); // */
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  _plus__ex__2(); // +!_2
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  ICLOSE(); // ICLOSE
  Push(Read16(cc_WEDBC)); // WEDBC
  _st_(); // <
  Push(Pop() & a); //  R> AND
  if (Pop() == 0) return;
  BEEP(); // BEEP
  Push(0x69e0); Push(0x0002);
  WED8A(); // WED8A
  DrawTTY(); // .TTY
  Push(-1);
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2
}


// ================================================
// 0xf3c7: WORD 'WF3C9' codep=0x224c wordp=0xf3c9 params=0 returns=1
// ================================================

void WF3C9() // WF3C9
{
  WEA36(); // WEA36
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
  Push(!Pop()); //  NOT
}


// ================================================
// 0xf3d7: WORD 'WF3D9' codep=0x224c wordp=0xf3d9
// ================================================

void WF3D9() // WF3D9
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  GetColor(GREEN);
  WEB09(); // WEB09
  DrawWHERE(); // .WHERE
}


// ================================================
// 0xf3e5: WORD 'WF3E7' codep=0x224c wordp=0xf3e7 params=0 returns=0
// ================================================

void WF3E7() // WF3E7
{
  Push(Read16(pp_LKEY)); // LKEY @
  Push(Read16(regsp)); // DUP
  Push(Pop()==0x0152?1:0); //  0x0152 =
  SWAP(); // SWAP
  Push(Pop()==0?1:0); //  0=
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(pp_FTRIG); // FTRIG
  _099(); // 099
  Pop(); Pop(); // 2DROP
  Push(Read16(pp_SKEY)); // SKEY @
  _ro_XYSCAN(); // (XYSCAN case
}


// ================================================
// 0xf40b: WORD 'WF40D' codep=0x224c wordp=0xf40d
// ================================================

void WF40D() // WF40D
{
  DrawENERGY(); // .ENERGY
  Pop(); Pop(); // 2DROP
  WF295(); // WF295
}


// ================================================
// 0xf415: WORD 'WF417' codep=0x224c wordp=0xf417 params=0 returns=0
// ================================================

void WF417() // WF417
{
  Push(0xf1bd); // 'WF1BD'
  Push(pp__i_VEHICL); // 'VEHICL
  _st__ex__gt_(); // <!>
  Push(0xcf1b); // 'DO-STORM'
  Push(pp__i_REPAIR); // 'REPAIR
  _st__ex__gt_(); // <!>
  Push(0xeb92); // '.STATS'
  Push(pp__i__dot_VEHIC); // '.VEHIC
  _st__ex__gt_(); // <!>
  Push(Read16(pp__i_SIMULA)); // 'SIMULA @
  Push(pp__i_EXTERN); // 'EXTERN
  _st__ex__gt_(); // <!>
  Push(0xeda6); // '.STARDA'
  Push(pp__i__dot_DATE); // '.DATE
  _st__ex__gt_(); // <!>
  Push(pp_TIME_dash_PA); // TIME-PA
  ON_2(); // ON_2
}


// ================================================
// 0xf445: WORD 'WF447' codep=0x224c wordp=0xf447
// ================================================

void WF447() // WF447
{
  IsTRIG(); // ?TRIG
  Pop(); // DROP
  WF3D9(); // WF3D9
  WF417(); // WF417
  GetColor(GREEN);
  Push(pp_LCOLOR); // LCOLOR
  Store_2(); // !_2
  Push(-1);
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2
}


// ================================================
// 0xf45d: WORD 'WF45F' codep=0x224c wordp=0xf45f params=0 returns=0
// ================================================

void WF45F() // WF45F
{
  Push(Read16(pp__i_TVT)); // 'TVT @
  MODULE(); // MODULE
  Push(pp_TIME_dash_PA); // TIME-PA
  _099(); // 099
}


// ================================================
// 0xf46b: WORD 'WF46D' codep=0x224c wordp=0xf46d
// ================================================

void WF46D() // WF46D
{
  WF45F(); // WF45F
  WF201(); // WF201
  GetColor(BLACK);
  Push(pp_LCOLOR); // LCOLOR
  Store_2(); // !_2
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf47b: WORD 'WF47D' codep=0x224c wordp=0xf47d
// ================================================

void WF47D() // WF47D
{
  WF123(); // WF123
  SET_dash_SPE(); // SET-SPE
  WF383(); // WF383
  DrawSTATS(); // .STATS
}


// ================================================
// 0xf487: WORD 'WF489' codep=0x224c wordp=0xf489 params=2 returns=3
// ================================================

void WF489() // WF489
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  Push(Pop() & (Read16(pp_FTRIG)==0?1:0)); //  FTRIG @ 0= AND
}


// ================================================
// 0xf497: WORD 'WF499' codep=0x224c wordp=0xf499
// ================================================

void WF499() // WF499
{
  _ro_XYSCAN(); // (XYSCAN case
  WF489(); // WF489
  if (Pop() != 0)
  {
    WF3C9(); // WF3C9
    if (Pop() != 0)
    {
      WF40D(); // WF40D
    } else
    {
      WF47D(); // WF47D
      while(1)
      {
        XYSCAN(); // XYSCAN
        WF3E7(); // WF3E7
        WF489(); // WF489
        WF3C9(); // WF3C9
        Push(!Pop()); //  NOT
        Push(Pop() & Pop()); // AND
        if (Pop() == 0) break;

        WF47D(); // WF47D
      }
      Pop(); Pop(); // 2DROP
      WF3C9(); // WF3C9
      if (Pop() != 0)
      {
        Push2Words("0.");
        WF40D(); // WF40D
        Pop(); Pop(); // 2DROP
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
  Push(pp_TIME_dash_PA); // TIME-PA
  _099(); // 099
}


// ================================================
// 0xf4e9: WORD 'TELE' codep=0x224c wordp=0xf4f2
// ================================================
// entry

void TELE() // TELE
{
  Push(Read16(pp__i_KEY_dash_CA)); // 'KEY-CA @
  Push(0xf499); // 'WF499'
  Push((Pop()==Pop())?1:0); // =
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    WF30D(); // WF30D
  } else
  {
    CTINIT(); // CTINIT
    SET_STR_AS_PARAM("PLEASE DROP OUT OF MOVE MODE");
    DrawTTY(); // .TTY
  }
  Push2Words("NULL");
}


// ================================================
// 0xf52f: WORD 'TV-MOVE' codep=0x224c wordp=0xf53b
// ================================================
// entry

void TV_dash_MOVE() // TV-MOVE
{
  Push(0xf46d); // 'WF46D'
  Push(0xf499); // 'WF499'
  Push(0xf447); // 'WF447'
  DOTASKS(WF447, WF447, WF447);
  Push(pp__i_SIMULA); // 'SIMULA
  GetEXECUTE(); // @EXECUTE
  Push(pp_TIME_dash_PA); // TIME-PA
  ON_2(); // ON_2
}

// 0xf553: db 0x4d 0x4f 0x56 0x45 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'MOVE-VOC_____ '

