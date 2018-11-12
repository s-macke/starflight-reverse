// ====== OVERLAY 'MARKET' ======
// store offset = 0xe810
// overlay size   = 0x0d50

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WE826  codep:0x224c wordp:0xe826 size:0x003e C-string:'WE826'
//           WE866  codep:0x224c wordp:0xe866 size:0x0008 C-string:'WE866'
//           WE870  codep:0x224c wordp:0xe870 size:0x0008 C-string:'WE870'
//           WE87A  codep:0x224c wordp:0xe87a size:0x000e C-string:'WE87A'
//           WE88A  codep:0x224c wordp:0xe88a size:0x000e C-string:'WE88A'
//           WE89A  codep:0x2214 wordp:0xe89a size:0x0002 C-string:'WE89A'
//           WE89E  codep:0x7394 wordp:0xe89e size:0x0006 C-string:'WE89E'
//           WE8A6  codep:0x224c wordp:0xe8a6 size:0x0006 C-string:'WE8A6'
//           WE8AE  codep:0x224c wordp:0xe8ae size:0x0006 C-string:'WE8AE'
//           WE8B6  codep:0x224c wordp:0xe8b6 size:0x0006 C-string:'WE8B6'
//           WE8BE  codep:0x224c wordp:0xe8be size:0x0004 C-string:'WE8BE'
//           WE8C4  codep:0x224c wordp:0xe8c4 size:0x0048 C-string:'WE8C4'
//           WE90E  codep:0x7394 wordp:0xe90e size:0x0006 C-string:'WE90E'
//           WE916  codep:0x7394 wordp:0xe916 size:0x0006 C-string:'WE916'
//           WE91E  codep:0x7394 wordp:0xe91e size:0x0006 C-string:'WE91E'
//           WE926  codep:0x7394 wordp:0xe926 size:0x0006 C-string:'WE926'
//           WE92E  codep:0x224c wordp:0xe92e size:0x000c C-string:'WE92E'
//           WE93C  codep:0x224c wordp:0xe93c size:0x0004 C-string:'WE93C'
//           WE942  codep:0x224c wordp:0xe942 size:0x0004 C-string:'WE942'
//           WE948  codep:0x224c wordp:0xe948 size:0x0004 C-string:'WE948'
//           WE94E  codep:0x224c wordp:0xe94e size:0x0006 C-string:'WE94E'
//           WE956  codep:0x224c wordp:0xe956 size:0x0004 C-string:'WE956'
//           WE95C  codep:0x224c wordp:0xe95c size:0x0004 C-string:'WE95C'
//           WE962  codep:0x224c wordp:0xe962 size:0x0004 C-string:'WE962'
//           WE968  codep:0x224c wordp:0xe968 size:0x0004 C-string:'WE968'
//           WE96E  codep:0x224c wordp:0xe96e size:0x0004 C-string:'WE96E'
//           WE974  codep:0x224c wordp:0xe974 size:0x0004 C-string:'WE974'
//           WE97A  codep:0x224c wordp:0xe97a size:0x005c C-string:'WE97A'
//           MCURS  codep:0x1d29 wordp:0xe9e0 size:0x000d C-string:'MCURS'
//           WE9EF  codep:0x224c wordp:0xe9ef size:0x003e C-string:'WE9EF'
//           WEA2F  codep:0x224c wordp:0xea2f size:0x0016 C-string:'WEA2F'
//           WEA47  codep:0x224c wordp:0xea47 size:0x0006 C-string:'WEA47'
//           WEA4F  codep:0x224c wordp:0xea4f size:0x0006 C-string:'WEA4F'
//           WEA57  codep:0x224c wordp:0xea57 size:0x003c C-string:'WEA57'
//           WEA95  codep:0x224c wordp:0xea95 size:0x0043 C-string:'WEA95'
//           WEADA  codep:0x224c wordp:0xeada size:0x006c C-string:'WEADA'
//           WEB48  codep:0x224c wordp:0xeb48 size:0x000e C-string:'WEB48'
//           WEB58  codep:0x224c wordp:0xeb58 size:0x0006 C-string:'WEB58'
//           WEB60  codep:0x224c wordp:0xeb60 size:0x000e C-string:'WEB60'
//           WEB70  codep:0x224c wordp:0xeb70 size:0x0008 C-string:'WEB70'
//           WEB7A  codep:0x224c wordp:0xeb7a size:0x0039 C-string:'WEB7A'
//           WEBB5  codep:0x224c wordp:0xebb5 size:0x000a C-string:'WEBB5'
//           WEBC1  codep:0x224c wordp:0xebc1 size:0x0008 C-string:'WEBC1'
//           WEBCB  codep:0x224c wordp:0xebcb size:0x002c C-string:'WEBCB'
//           WEBF9  codep:0x224c wordp:0xebf9 size:0x002c C-string:'WEBF9'
//           WEC27  codep:0x224c wordp:0xec27 size:0x0040 C-string:'WEC27'
//           WEC69  codep:0x224c wordp:0xec69 size:0x0014 C-string:'WEC69'
//           C>VAL  codep:0x4b3b wordp:0xec87 size:0x0014 C-string:'C_gt_VAL'
//           WEC9D  codep:0x224c wordp:0xec9d size:0x0026 C-string:'WEC9D'
//           WECC5  codep:0x224c wordp:0xecc5 size:0x0012 C-string:'WECC5'
//           WECD9  codep:0x224c wordp:0xecd9 size:0x0026 C-string:'WECD9'
//           WED01  codep:0x224c wordp:0xed01 size:0x002a C-string:'WED01'
//           WED2D  codep:0x224c wordp:0xed2d size:0x0008 C-string:'WED2D'
//          T>NAME  codep:0x4b3b wordp:0xed40 size:0x0014 C-string:'T_gt_NAME'
//           WED56  codep:0x2214 wordp:0xed56 size:0x0002 C-string:'WED56'
//           WED5A  codep:0x2214 wordp:0xed5a size:0x0002 C-string:'WED5A'
//           WED5E  codep:0x2214 wordp:0xed5e size:0x0002 C-string:'WED5E'
//            TLEN  codep:0x4b3b wordp:0xed69 size:0x000c C-string:'TLEN'
//           WED77  codep:0x224c wordp:0xed77 size:0x001e C-string:'WED77'
//           WED97  codep:0x224c wordp:0xed97 size:0x0016 C-string:'WED97'
//           WEDAF  codep:0x224c wordp:0xedaf size:0x0036 C-string:'WEDAF'
//           WEDE7  codep:0x224c wordp:0xede7 size:0x0010 C-string:'WEDE7'
//           WEDF9  codep:0x224c wordp:0xedf9 size:0x0016 C-string:'WEDF9'
//           WEE11  codep:0x224c wordp:0xee11 size:0x0006 C-string:'WEE11'
//           WEE19  codep:0x224c wordp:0xee19 size:0x0018 C-string:'WEE19'
//           WEE33  codep:0x224c wordp:0xee33 size:0x0016 C-string:'WEE33'
//           WEE4B  codep:0x224c wordp:0xee4b size:0x000e C-string:'WEE4B'
//           WEE5B  codep:0x224c wordp:0xee5b size:0x000e C-string:'WEE5B'
//           WEE6B  codep:0x224c wordp:0xee6b size:0x0004 C-string:'WEE6B'
//           WEE71  codep:0x224c wordp:0xee71 size:0x0010 C-string:'WEE71'
//           WEE83  codep:0x1d29 wordp:0xee83 size:0x0002 C-string:'WEE83'
//           WEE87  codep:0x224c wordp:0xee87 size:0x0014 C-string:'WEE87'
//           WEE9D  codep:0x224c wordp:0xee9d size:0x0030 C-string:'WEE9D'
//           WEECF  codep:0x224c wordp:0xeecf size:0x0012 C-string:'WEECF'
//           WEEE3  codep:0x224c wordp:0xeee3 size:0x002f C-string:'WEEE3'
//           WEF14  codep:0x224c wordp:0xef14 size:0x0042 C-string:'WEF14'
//           WEF58  codep:0x224c wordp:0xef58 size:0x001a C-string:'WEF58'
//           WEF74  codep:0x224c wordp:0xef74 size:0x0010 C-string:'WEF74'
//           WEF86  codep:0x224c wordp:0xef86 size:0x0008 C-string:'WEF86'
//           WEF90  codep:0x224c wordp:0xef90 size:0x000c C-string:'WEF90'
//           WEF9E  codep:0x224c wordp:0xef9e size:0x000e C-string:'WEF9E'
//           WEFAE  codep:0x224c wordp:0xefae size:0x000e C-string:'WEFAE'
//           WEFBE  codep:0x224c wordp:0xefbe size:0x0012 C-string:'WEFBE'
//           WEFD2  codep:0x224c wordp:0xefd2 size:0x0006 C-string:'WEFD2'
//           WEFDA  codep:0x224c wordp:0xefda size:0x0006 C-string:'WEFDA'
//           WEFE2  codep:0x224c wordp:0xefe2 size:0x000e C-string:'WEFE2'
//           WEFF2  codep:0x224c wordp:0xeff2 size:0x0018 C-string:'WEFF2'
//           WF00C  codep:0x224c wordp:0xf00c size:0x001a C-string:'WF00C'
//           WF028  codep:0x224c wordp:0xf028 size:0x000e C-string:'WF028'
//           WF038  codep:0x224c wordp:0xf038 size:0x001a C-string:'WF038'
//           WF054  codep:0x224c wordp:0xf054 size:0x0022 C-string:'WF054'
//           WF078  codep:0x224c wordp:0xf078 size:0x004c C-string:'WF078'
//           WF0C6  codep:0x224c wordp:0xf0c6 size:0x0012 C-string:'WF0C6'
//           WF0DA  codep:0x224c wordp:0xf0da size:0x0012 C-string:'WF0DA'
//           WF0EE  codep:0x224c wordp:0xf0ee size:0x001a C-string:'WF0EE'
//           WF10A  codep:0x224c wordp:0xf10a size:0x0016 C-string:'WF10A'
//           WF122  codep:0x224c wordp:0xf122 size:0x0010 C-string:'WF122'
//           WF134  codep:0x224c wordp:0xf134 size:0x0006 C-string:'WF134'
//           WF13C  codep:0x224c wordp:0xf13c size:0x0014 C-string:'WF13C'
//           WF152  codep:0x224c wordp:0xf152 size:0x004e C-string:'WF152'
//           WF1A2  codep:0x224c wordp:0xf1a2 size:0x000a C-string:'WF1A2'
//           WF1AE  codep:0x224c wordp:0xf1ae size:0x0018 C-string:'WF1AE'
//           WF1C8  codep:0x2214 wordp:0xf1c8 size:0x0002 C-string:'WF1C8'
//            ID>#  codep:0x4b3b wordp:0xf1d3 size:0x0014 C-string:'ID_gt__n_'
//           WF1E9  codep:0x224c wordp:0xf1e9 size:0x0020 C-string:'WF1E9'
//           WF20B  codep:0x224c wordp:0xf20b size:0x000a C-string:'WF20B'
//           WF217  codep:0x224c wordp:0xf217 size:0x000a C-string:'WF217'
//           WF223  codep:0x224c wordp:0xf223 size:0x0049 C-string:'WF223'
//           WF26E  codep:0x224c wordp:0xf26e size:0x0034 C-string:'WF26E'
//           WF2A4  codep:0x224c wordp:0xf2a4 size:0x002e C-string:'WF2A4'
//           WF2D4  codep:0x224c wordp:0xf2d4 size:0x001c C-string:'WF2D4'
//           WF2F2  codep:0x224c wordp:0xf2f2 size:0x000a C-string:'WF2F2'
//           WF2FE  codep:0x224c wordp:0xf2fe size:0x000a C-string:'WF2FE'
//           WF30A  codep:0x224c wordp:0xf30a size:0x0012 C-string:'WF30A'
//         P>REPLY  codep:0x4b3b wordp:0xf328 size:0x0010 C-string:'P_gt_REPLY'
//           WF33A  codep:0x224c wordp:0xf33a size:0x0010 C-string:'WF33A'
//           WF34C  codep:0x224c wordp:0xf34c size:0x0012 C-string:'WF34C'
//           WF360  codep:0x224c wordp:0xf360 size:0x0028 C-string:'WF360'
//           WF38A  codep:0x224c wordp:0xf38a size:0x002c C-string:'WF38A'
//           WF3B8  codep:0x224c wordp:0xf3b8 size:0x0030 C-string:'WF3B8'
//           WF3EA  codep:0x224c wordp:0xf3ea size:0x000c C-string:'WF3EA'
//           WF3F8  codep:0x224c wordp:0xf3f8 size:0x000c C-string:'WF3F8'
//           WF406  codep:0x224c wordp:0xf406 size:0x0073 C-string:'WF406'
//           WF47B  codep:0x224c wordp:0xf47b size:0x0008 C-string:'WF47B'
//           WF485  codep:0x224c wordp:0xf485 size:0x0008 C-string:'WF485'
//        T>ACTION  codep:0x4b3b wordp:0xf49a size:0x0010 C-string:'T_gt_ACTION'
//           WF4AC  codep:0x224c wordp:0xf4ac size:0x0024 C-string:'WF4AC'
//           WF4D2  codep:0x224c wordp:0xf4d2 size:0x0032 C-string:'WF4D2'
//           TRADE  codep:0x224c wordp:0xf50e size:0x0000 C-string:'TRADE'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_PIC_n_; // PIC#
extern const unsigned short int pp_A_dash_POSTU; // A-POSTU
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_OCRS; // OCRS
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WBOTTOM; // WBOTTOM
extern const unsigned short int pp_WRIGHT; // WRIGHT
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_WLINES; // WLINES
extern const unsigned short int pp_WCHARS; // WCHARS
extern const unsigned short int pp__dash_AIN; // -AIN
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp_CRSCOLO; // CRSCOLO
extern const unsigned short int pp__pe_VAL; // %VAL
extern const unsigned short int pp_SCROLL_dash_; // SCROLL-
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_TERMINA; // TERMINA
extern const unsigned short int pp_TBOX; // TBOX
extern const unsigned short int pp__1ST; // 1ST
extern const unsigned short int pp_SELLING; // SELLING
extern const unsigned short int pp_BARTERI; // BARTERI
extern const unsigned short int pp_IsREPLY; // ?REPLY
extern const unsigned short int pp_PLAST; // PLAST
extern const unsigned short int pp__ro_SCROLL_1; // (SCROLL_1
extern const unsigned short int pp_TV_dash_HOLD; // TV-HOLD
extern const unsigned short int pp_SUPER_dash_B; // SUPER-B
extern const unsigned short int pp__ro_THIS_dash_I; // (THIS-I
extern const unsigned short int pp__ro_TRADER; // (TRADER
extern const unsigned short int pp__ro_THING_rc_; // (THING)
extern const unsigned short int pp_CTTOP; // CTTOP
extern const unsigned short int pp_CTBOT; // CTBOT
extern LoadDataType ELEM_dash_NA; // ELEM-NA
extern LoadDataType ELEM_dash_VA; // ELEM-VA
extern LoadDataType ART_dash_NAM; // ART-NAM
extern LoadDataType ART_dash_VAL; // ART-VAL
extern Color BLACK; // BLACK
extern Color RED; // RED
extern Color BLUE; // BLUE
extern Color LT_dash_BLUE; // LT-BLUE
extern Color ORANGE; // ORANGE
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType TEXT_dash_IN; // TEXT-IN
extern IFieldType TEXT_dash_TE; // TEXT-TE
void M_star_(); // M*
void MAX(); // MAX
void MIN(); // MIN
void PAD(); // PAD
void D_dot_(); // D.
void U_dot_(); // U.
void MS(); // MS
void NOP(); // NOP
void UNRAVEL(); // UNRAVEL
void D_eq_(); // D=
void WITHIN(); // WITHIN
void DMIN(); // DMIN
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void ON_2(); // ON_2
void _099(); // 099
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void INEXT(); // INEXT
void IPREV(); // IPREV
void IFIRST(); // IFIRST
void ILAST(); // ILAST
void IINSERT(); // IINSERT
void _gt_INSERT(); // >INSERT
void IEXTRAC(); // IEXTRAC
void IFLD_at_(); // IFLD@
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void GetCOLOR(); // @COLOR
void DARK(); // DARK
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_DISPLA(); // >DISPLA
void LCOPYBL(); // LCOPYBL
void POS_dot_(); // POS.
void POLY_dash_WI(); // POLY-WI
void BEEPON_2(); // BEEPON_2
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void POLY_dash_ER(); // POLY-ER
void WUP(); // WUP
void GCR(); // GCR
void _gt_BOTT(); // >BOTT
void DrawTTY(); // .TTY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void IsQUIT(); // ?QUIT
void CURSORS(); // CURSORS
void BLD_dash_CRS(); // BLD-CRS
void SET_dash_CRS(); // SET-CRS
void _dash_XTRAIL(); // -XTRAIL
void GET_dash_BOX(); // GET-BOX
void MAKE_dash_SC(); // MAKE-SC
void DELETE_dash_(); // DELETE-
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void CI(); // CI
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_MCURS = 0xe9e0; // MCURS size: 13
// {0x02, 0x0a, 0x02, 0x09, 0x33, 0x0a, 0x36, 0x09, 0x34, 0x0a, 0x6b, 0x09, 0x33}

const unsigned short int pp_WEE83 = 0xee83; // WEE83 size: 2
// {0x3a, 0x20}


const unsigned short int cc_WE89A = 0xe89a; // WE89A
const unsigned short int cc_WED56 = 0xed56; // WED56
const unsigned short int cc_WED5A = 0xed5a; // WED5A
const unsigned short int cc_WED5E = 0xed5e; // WED5E
const unsigned short int cc_WF1C8 = 0xf1c8; // WF1C8


// 0xe822: db 0xd4 0x00 '  '

// ================================================
// 0xe824: WORD 'WE826' codep=0x224c wordp=0xe826 params=4 returns=0
// ================================================

void WE826() // WE826
{
  unsigned short int a, b, c;
  a = Pop(); // >R
  b = Pop(); // >R
  c = Pop(); // >R
  Push(Read16(regsp)); // DUP
  Push(c); // I
  SWAP(); // SWAP
  Push(a); // J
  OVER(); // OVER
  LLINE(); // LLINE
  Push(c); // I
  OVER(); // OVER
  Push(c); // I
  Push(b); // I'
  LLINE(); // LLINE
  Push(c); // I
  Push(b); // I'
  Push(a); // J
  Push(b); // I'
  LLINE(); // LLINE
  Push(a); // J
  Push(b); // I'
  ROT(); // ROT
  Push(a); // J
  SWAP(); // SWAP
  LLINE(); // LLINE
  Push(c); // R>
  Pop(); // DROP
  Push(b); // R>
  Push(a); // R>
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe864: WORD 'WE866' codep=0x224c wordp=0xe866 params=0 returns=0
// ================================================

void WE866() // WE866
{
  Push(1);
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe86e: WORD 'WE870' codep=0x224c wordp=0xe870 params=0 returns=0
// ================================================

void WE870() // WE870
{
  Push(-1);
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe878: WORD 'WE87A' codep=0x224c wordp=0xe87a params=0 returns=1
// ================================================

void WE87A() // WE87A
{
  WE866(); // WE866
  Push(1);
  Push(0xb822); // 'PSYCH'
  MODULE(); // MODULE
  WE870(); // WE870
}


// ================================================
// 0xe888: WORD 'WE88A' codep=0x224c wordp=0xe88a params=0 returns=1
// ================================================

void WE88A() // WE88A
{
  WE866(); // WE866
  Push(0);
  Push(0xb822); // 'PSYCH'
  MODULE(); // MODULE
  WE870(); // WE870
}


// ================================================
// 0xe898: WORD 'WE89A' codep=0x2214 wordp=0xe89a
// ================================================
// orphan
// 0xe89a: dw 0x0015

// ================================================
// 0xe89c: WORD 'WE89E' codep=0x7394 wordp=0xe89e
// ================================================
LoadDataType WE89E = {TRADERSIDX, 0x00, 0x10, 0x32, 0x6ad1};

// ================================================
// 0xe8a4: WORD 'WE8A6' codep=0x224c wordp=0xe8a6 params=0 returns=0
// ================================================

void WE8A6() // WE8A6
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe8ac: WORD 'WE8AE' codep=0x224c wordp=0xe8ae params=0 returns=0
// ================================================

void WE8AE() // WE8AE
{
  Push(pp__ro_THING_rc_); // (THING)
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe8b4: WORD 'WE8B6' codep=0x224c wordp=0xe8b6 params=0 returns=0
// ================================================

void WE8B6() // WE8B6
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe8bc: WORD 'WE8BE' codep=0x224c wordp=0xe8be params=0 returns=1
// ================================================

void WE8BE() // WE8BE
{
  GetColor(RED);
}


// ================================================
// 0xe8c2: WORD 'WE8C4' codep=0x224c wordp=0xe8c4
// ================================================

void WE8C4() // WE8C4
{
  Push(0x000a);
  Push(2);
  Push(2);
  Push(0x009d);
  GetColor(BLACK);
  POLY_dash_WI(); // POLY-WI
  WE8BE(); // WE8BE
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(1);
  Push(1);
  Push(0x000b);
  Push(0x0035);
  WE826(); // WE826
  Push(1);
  Push(0x0035);
  Push(0x000b);
  Push(0x006a);
  WE826(); // WE826
  Push(1);
  Push(0x006a);
  Push(0x000b);
  Push(0x009e);
  WE826(); // WE826
}


// ================================================
// 0xe90c: WORD 'WE90E' codep=0x7394 wordp=0xe90e
// ================================================
LoadDataType WE90E = {CREATUREIDX, 0x00, 0x14, 0x22, 0x6f07};

// ================================================
// 0xe914: WORD 'WE916' codep=0x7394 wordp=0xe916
// ================================================
LoadDataType WE916 = {CREATUREIDX, 0x14, 0x02, 0x22, 0x6f07};

// ================================================
// 0xe91c: WORD 'WE91E' codep=0x7394 wordp=0xe91e
// ================================================
LoadDataType WE91E = {STISIDX, 0x00, 0x18, 0x1b, 0x6a54};

// ================================================
// 0xe924: WORD 'WE926' codep=0x7394 wordp=0xe926
// ================================================
LoadDataType WE926 = {STISIDX, 0x18, 0x02, 0x1b, 0x6a54};

// ================================================
// 0xe92c: WORD 'WE92E' codep=0x224c wordp=0xe92e
// ================================================

void WE92E() // WE92E
{
  WE8AE(); // WE8AE
  Push(0xa9ce); // 'ASKING'
  IFLD_at_(); // IFLD@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe93a: WORD 'WE93C' codep=0x224c wordp=0xe93c params=0 returns=1
// ================================================

void WE93C() // WE93C
{
  GetColor(LT_dash_BLUE);
}


// ================================================
// 0xe940: WORD 'WE942' codep=0x224c wordp=0xe942 params=0 returns=1
// ================================================

void WE942() // WE942
{
  GetColor(WHITE);
}


// ================================================
// 0xe946: WORD 'WE948' codep=0x224c wordp=0xe948 params=0 returns=1
// ================================================
// orphan

void WE948() // WE948
{
  GetColor(BLUE);
}


// ================================================
// 0xe94c: WORD 'WE94E' codep=0x224c wordp=0xe94e
// ================================================
// orphan

void WE94E() // WE94E
{
  WE948(); // WE948
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe954: WORD 'WE956' codep=0x224c wordp=0xe956 params=0 returns=1
// ================================================

void WE956() // WE956
{
  GetColor(WHITE);
}


// ================================================
// 0xe95a: WORD 'WE95C' codep=0x224c wordp=0xe95c params=0 returns=1
// ================================================

void WE95C() // WE95C
{
  GetColor(WHITE);
}


// ================================================
// 0xe960: WORD 'WE962' codep=0x224c wordp=0xe962 params=0 returns=1
// ================================================

void WE962() // WE962
{
  GetColor(YELLOW);
}


// ================================================
// 0xe966: WORD 'WE968' codep=0x224c wordp=0xe968 params=0 returns=1
// ================================================

void WE968() // WE968
{
  GetColor(ORANGE);
}


// ================================================
// 0xe96c: WORD 'WE96E' codep=0x224c wordp=0xe96e params=0 returns=1
// ================================================

void WE96E() // WE96E
{
  GetColor(BLUE);
}


// ================================================
// 0xe972: WORD 'WE974' codep=0x224c wordp=0xe974 params=0 returns=1
// ================================================
// orphan

void WE974() // WE974
{
  GetColor(BLUE);
}


// ================================================
// 0xe978: WORD 'WE97A' codep=0x224c wordp=0xe97a
// ================================================

void WE97A() // WE97A
{
  _gt_DISPLA(); // >DISPLA
  DARK(); // DARK
  WE8BE(); // WE8BE
  StoreCOLOR(); // !COLOR
  Push(0);
  Push(0);
  Push(0x00c7);
  Push(0x009f);
  WE826(); // WE826
  WE8C4(); // WE8C4
  Push(0x0086);
  Push(3);
  Push(0x00c6);
  Push(0x0035);
  WE826(); // WE826
  Push(0x0086);
  Push(1);
  Push(0x00c6);
  Push(2);
  WE826(); // WE826
  Push(0x0086);
  Push(0x0038);
  Push(0x00c6);
  Push(0x009e);
  WE826(); // WE826
  Push(0x0086);
  Push(0x0036);
  Push(0x00c6);
  Push(0x0037);
  WE826(); // WE826
}


// ================================================
// 0xe9d6: WORD 'MCURS' codep=0x1d29 wordp=0xe9e0
// ================================================
// 0xe9e0: db 0x02 0x0a 0x02 0x09 0x33 0x0a 0x36 0x09 0x34 0x0a 0x6b 0x09 0x33 '    3 6 4 k 3'

// ================================================
// 0xe9ed: WORD 'WE9EF' codep=0x224c wordp=0xe9ef params=0 returns=0
// ================================================

void WE9EF() // WE9EF
{
  Push(2);
  Push(pp_WLEFT); // WLEFT
  Store_2(); // !_2
  Push(0x000d);
  Push(Read16(regsp)); // DUP
  Push(pp_WBOTTOM); // WBOTTOM
  Store_2(); // !_2
  Push(pp_CTBOT); // CTBOT
  Store_2(); // !_2
  Push(0x0084);
  Push(Read16(regsp)); // DUP
  Push(pp_WTOP); // WTOP
  Store_2(); // !_2
  Push(Pop() - 1); //  1-
  Push(pp_CTTOP); // CTTOP
  Store_2(); // !_2
  Push(0x00a0);
  Push(pp_WRIGHT); // WRIGHT
  Store_2(); // !_2
  Push(0x0010);
  Push(pp_WLINES); // WLINES
  Store_2(); // !_2
  Push(0x0026);
  Push(pp_WCHARS); // WCHARS
  Store_2(); // !_2
}


// ================================================
// 0xea2d: WORD 'WEA2F' codep=0x224c wordp=0xea2f
// ================================================

void WEA2F() // WEA2F
{
  WE93C(); // WE93C
  Push(pp_CRSCOLO); // CRSCOLO
  Store_2(); // !_2
  Push(Read16(regsp)); // DUP
  Push(pp_NCRS); // NCRS
  Store_2(); // !_2
  Push(pp_OCRS); // OCRS
  Store_2(); // !_2
  Push(pp_MCURS); // MCURS
  BLD_dash_CRS(); // BLD-CRS
}


// ================================================
// 0xea45: WORD 'WEA47' codep=0x224c wordp=0xea47
// ================================================

void WEA47() // WEA47
{
  Push(0);
  WEA2F(); // WEA2F
}


// ================================================
// 0xea4d: WORD 'WEA4F' codep=0x224c wordp=0xea4f
// ================================================

void WEA4F() // WEA4F
{
  Push(1);
  WEA2F(); // WEA2F
}


// ================================================
// 0xea55: WORD 'WEA57' codep=0x224c wordp=0xea57
// ================================================

void WEA57() // WEA57
{
  WE8C4(); // WE8C4
  _gt_1FONT(); // >1FONT
  WE942(); // WE942
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x0013);
  Push(8);
  POS_dot_(); // POS.
  PRINT("BUY", 3); // (.")
  Push(0x0048);
  Push(8);
  POS_dot_(); // POS.
  PRINT("SELL", 4); // (.")
  Push(0x007d);
  Push(8);
  POS_dot_(); // POS.
  PRINT("EXIT", 4); // (.")
  WEA47(); // WEA47
}


// ================================================
// 0xea93: WORD 'WEA95' codep=0x224c wordp=0xea95
// ================================================

void WEA95() // WEA95
{
  WE8C4(); // WE8C4
  _gt_1FONT(); // >1FONT
  WE942(); // WE942
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x0011);
  Push(8);
  POS_dot_(); // POS.
  PRINT("AGREE", 5); // (.")
  Push(0x0042);
  Push(8);
  POS_dot_(); // POS.
  PRINT("COUNTER", 7); // (.")
  Push(0x0079);
  Push(8);
  POS_dot_(); // POS.
  PRINT("REFUSE", 6); // (.")
  WEA4F(); // WEA4F
}


// ================================================
// 0xead8: WORD 'WEADA' codep=0x224c wordp=0xeada
// ================================================

void WEADA() // WEADA
{
  Push(0x003a);
  Push(0x00c3);
  POS_dot_(); // POS.
  PRINT("YOU ARE ", 8); // (.")
  Push(Read16(pp_COLOR)); // COLOR @
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    PRINT("SELLING", 7); // (.")
  } else
  {
    PRINT("BUYING", 6); // (.")
  }
  StoreCOLOR(); // !COLOR
  Push(0x003a);
  Push(0x00b5);
  POS_dot_(); // POS.
  Push(0x0018);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    PRINT("TO ", 3); // (.")
    return;
  }
  PRINT("FROM ", 5); // (.")
}


// ================================================
// 0xeb46: WORD 'WEB48' codep=0x224c wordp=0xeb48
// ================================================

void WEB48() // WEB48
{
  WE8A6(); // WE8A6
  LoadData(WE89E); // from 'TRADERS'
  Push(0x0010);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb56: WORD 'WEB58' codep=0x224c wordp=0xeb58 params=0 returns=2
// ================================================

void WEB58() // WEB58
{
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xeb5e: WORD 'WEB60' codep=0x224c wordp=0xeb60 params=0 returns=0
// ================================================

void WEB60() // WEB60
{
  WEB58(); // WEB58
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xeb6e: WORD 'WEB70' codep=0x224c wordp=0xeb70 params=0 returns=2
// ================================================

void WEB70() // WEB70
{
  WEB60(); // WEB60
  CI(); // CI
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb78: WORD 'WEB7A' codep=0x224c wordp=0xeb7a
// ================================================

void WEB7A() // WEB7A
{
  Push(0x003a);
  Push(0x008d);
  POS_dot_(); // POS.
  Push(0x0018);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  WE96E(); // WE96E
  StoreCOLOR(); // !COLOR
  PRINT("BALANCE: ", 9); // (.")
  WE942(); // WE942
  StoreCOLOR(); // !COLOR
  Push(0xc285); // 'OVD@BAL'
  MODULE(); // MODULE
  D_dot_(); // D.
  WE96E(); // WE96E
  StoreCOLOR(); // !COLOR
  PRINT("SP", 2); // (.")
}


// ================================================
// 0xebb3: WORD 'WEBB5' codep=0x224c wordp=0xebb5 params=0 returns=1
// ================================================

void WEBB5() // WEBB5
{
  WEB70(); // WEB70
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
}


// ================================================
// 0xebbf: WORD 'WEBC1' codep=0x224c wordp=0xebc1 params=0 returns=1
// ================================================

void WEBC1() // WEBC1
{
  WEB70(); // WEB70
  Push2Words("*STARSH");
  D_eq_(); // D=
}


// ================================================
// 0xebc9: WORD 'WEBCB' codep=0x224c wordp=0xebcb params=0 returns=0
// ================================================

void WEBCB() // WEBCB
{
  WEBB5(); // WEBB5
  if (Pop() != 0)
  {
    Push(pp_TBOX); // TBOX
    ON_2(); // ON_2
  } else
  {
    WEBC1(); // WEBC1
    if (Pop() != 0)
    {
      Push(pp_TBOX); // TBOX
      _099(); // 099
    }
  }
  WE8B6(); // WE8B6
  WEB58(); // WEB58
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex__2(); // 1.5!_2
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xebf7: WORD 'WEBF9' codep=0x224c wordp=0xebf9 params=0 returns=0
// ================================================

void WEBF9() // WEBF9
{
  WEBB5(); // WEBB5
  if (Pop() != 0)
  {
    Push(pp_TBOX); // TBOX
    _099(); // 099
  } else
  {
    WEBC1(); // WEBC1
    if (Pop() != 0)
    {
      Push(pp_TBOX); // TBOX
      ON_2(); // ON_2
    }
  }
  WE8B6(); // WE8B6
  WEB58(); // WEB58
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex__2(); // 1.5!_2
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec25: WORD 'WEC27' codep=0x224c wordp=0xec27 params=0 returns=2
// ================================================

void WEC27() // WEC27
{
  Push(0x002e);
  Push(pp__dash_AIN); // -AIN
  Store_2(); // !_2
  Push(5);
  Push(0xb6fd); // 'OV#IN$'
  MODULE(); // MODULE
  PAD(); // PAD
  Push((Read16(Pop())&0xFF)==0?1:0); //  C@ 0=
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(-1);
    return;
  }
  Push(0);
  PAD(); // PAD
  Push(Read16(regsp)); // DUP
  Push((Read16(Pop())&0xFF) + 1); //  C@ 1+
  Push(Pop() + Pop()); // +
  Store_2(); // !_2
  Exec("NUMBER"); // call of word 0x13d1 '(NUMBER)'
  Push(0xfde8); Push(0x0000);
  DMIN(); // DMIN
  Pop(); // DROP
}


// ================================================
// 0xec67: WORD 'WEC69' codep=0x224c wordp=0xec69
// ================================================

void WEC69() // WEC69
{
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    WE95C(); // WE95C
  } else
  {
    WE956(); // WE956
  }
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xec7d: WORD 'C>VAL' codep=0x4b3b wordp=0xec87
// ================================================

void C_gt_VAL() // C>VAL
{
  switch(Pop()) // C>VAL
  {
  case 28:
    LoadData(ART_dash_VAL); // from 'ARTIFACT'
    break;
  case 26:
    LoadData(ELEM_dash_VA); // from 'ELEMENT'
    break;
  case 68:
    LoadData(WE916); // from 'CREATURE'
    break;
  case 9:
    LoadData(WE926); // from 'STIS'
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xec9b: WORD 'WEC9D' codep=0x224c wordp=0xec9d
// ================================================

void WEC9D() // WEC9D
{
  Push(0xa9ce); // 'ASKING'
  IFLD_at_(); // IFLD@
  Push(0x000a);
  _slash_(); // /
  Push(0x0064);
  M_star_(); // M*
  GetINST_dash_C(); // @INST-C
  C_gt_VAL(); // C>VAL case
  Push(Read16(Pop())); //  @
  Push(0x000a);
  _slash_(); // /
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xecc3: WORD 'WECC5' codep=0x224c wordp=0xecc5
// ================================================

void WECC5() // WECC5
{
  Push(0x007a);
  Push(0x00aa);
  POS_dot_(); // POS.
  Push(5);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
}


// ================================================
// 0xecd7: WORD 'WECD9' codep=0x224c wordp=0xecd9
// ================================================

void WECD9() // WECD9
{
  Push(0x003a);
  Push(0x00aa);
  POS_dot_(); // POS.
  GetCOLOR(); // @COLOR
  WE96E(); // WE96E
  StoreCOLOR(); // !COLOR
  PRINT("S.T.V. RATING =", 15); // (.")
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xecff: WORD 'WED01' codep=0x224c wordp=0xed01
// ================================================

void WED01() // WED01
{
  WECC5(); // WECC5
  GetINST_dash_C(); // @INST-C
  Push(!(Pop()==0x000b?1:0)); //  0x000b = NOT
  if (Pop() == 0) return;
  GetCOLOR(); // @COLOR
  WE942(); // WE942
  StoreCOLOR(); // !COLOR
  WEC9D(); // WEC9D
  U_dot_(); // U.
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("%", 1); // (.")
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xed2b: WORD 'WED2D' codep=0x224c wordp=0xed2d
// ================================================

void WED2D() // WED2D
{
  WEB60(); // WEB60
  WED01(); // WED01
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed35: WORD 'T>NAME' codep=0x4b3b wordp=0xed40
// ================================================

void T_gt_NAME() // T>NAME
{
  switch(Pop()) // T>NAME
  {
  case 28:
    LoadData(ART_dash_NAM); // from 'ARTIFACT'
    break;
  case 68:
    LoadData(WE90E); // from 'CREATURE'
    break;
  case 9:
    LoadData(WE91E); // from 'STIS'
    break;
  case 26:
    LoadData(ELEM_dash_NA); // from 'ELEMENT'
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed54: WORD 'WED56' codep=0x2214 wordp=0xed56
// ================================================
// 0xed56: dw 0x0010

// ================================================
// 0xed58: WORD 'WED5A' codep=0x2214 wordp=0xed5a
// ================================================
// 0xed5a: dw 0x0014

// ================================================
// 0xed5c: WORD 'WED5E' codep=0x2214 wordp=0xed5e
// ================================================
// 0xed5e: dw 0x0018

// ================================================
// 0xed60: WORD 'TLEN' codep=0x4b3b wordp=0xed69
// ================================================

void TLEN() // TLEN
{
  switch(Pop()) // TLEN
  {
  case 26:
    Push(Read16(cc_WED56)); // WED56
    break;
  case 68:
    Push(Read16(cc_WED5A)); // WED5A
    break;
  default:
    Push(Read16(cc_WED5E)); // WED5E
    break;

  }
}

// ================================================
// 0xed75: WORD 'WED77' codep=0x224c wordp=0xed77
// ================================================

void WED77() // WED77
{
  GetINST_dash_C(); // @INST-C
  Push(Read16(regsp)); // DUP
  T_gt_NAME(); // T>NAME case
  SWAP(); // SWAP
  TLEN(); // TLEN case
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Push(0x003a);
  Push(0x00bc);
  POS_dot_(); // POS.
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xed95: WORD 'WED97' codep=0x224c wordp=0xed97
// ================================================

void WED97() // WED97
{
  Push(0x00c5);
  Push(0x0039);
  Push(0x0087);
  Push(0x009d);
  GetColor(BLACK);
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xedad: WORD 'WEDAF' codep=0x224c wordp=0xedaf
// ================================================

void WEDAF() // WEDAF
{
  WED97(); // WED97
  WE8AE(); // WE8AE
  CI(); // CI
  Push2Words("0.");
  D_eq_(); // D=
  Push(!Pop()); //  NOT
  _gt_1FONT(); // >1FONT
  WE96E(); // WE96E
  StoreCOLOR(); // !COLOR
  if (Pop() != 0)
  {
    WEADA(); // WEADA
    WEB48(); // WEB48
    WED77(); // WED77
    WECD9(); // WECD9
    WED01(); // WED01
  } else
  {
    Push(0x003a);
    Push(0x00b5);
    POS_dot_(); // POS.
    WEB48(); // WEB48
  }
  WEB7A(); // WEB7A
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xede5: WORD 'WEDE7' codep=0x224c wordp=0xede7
// ================================================

void WEDE7() // WEDE7
{
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_CTTOP) - 1); // CTTOP @ 1-
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
}


// ================================================
// 0xedf7: WORD 'WEDF9' codep=0x224c wordp=0xedf9
// ================================================

void WEDF9() // WEDF9
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x0085);
  Push(1);
  Push(0x000c);
  Push(0x009e);
  Push(a); // R>
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xee0f: WORD 'WEE11' codep=0x224c wordp=0xee11
// ================================================

void WEE11() // WEE11
{
  GetColor(BLACK);
  WEDF9(); // WEDF9
}


// ================================================
// 0xee17: WORD 'WEE19' codep=0x224c wordp=0xee19
// ================================================

void WEE19() // WEE19
{
  Push(2);
  Push(0x0083);
  Push(0x009e);
  Push(0x0013);
  Push(2);
  Push(0x0084);
  LCOPYBL(); // LCOPYBL
}


// ================================================
// 0xee31: WORD 'WEE33' codep=0x224c wordp=0xee33
// ================================================

void WEE33() // WEE33
{
  Push(2);
  Push(0x0084);
  Push(0x009e);
  Push(Read16(cc_WED5A)); // WED5A
  Push(2);
  Push(0x0083);
  LCOPYBL(); // LCOPYBL
}


// ================================================
// 0xee49: WORD 'WEE4B' codep=0x224c wordp=0xee4b
// ================================================

void WEE4B() // WEE4B
{
  unsigned short int i, imax;

  i = 0;
  imax = 7;
  do // (DO)
  {
    WEE19(); // WEE19
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xee59: WORD 'WEE5B' codep=0x224c wordp=0xee5b
// ================================================

void WEE5B() // WEE5B
{
  unsigned short int i, imax;

  i = 0;
  imax = 7;
  do // (DO)
  {
    WEE33(); // WEE33
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xee69: WORD 'WEE6B' codep=0x224c wordp=0xee6b
// ================================================

void WEE6B() // WEE6B
{
  WUP(); // WUP
}


// ================================================
// 0xee6f: WORD 'WEE71' codep=0x224c wordp=0xee71
// ================================================

void WEE71() // WEE71
{
  WEE6B(); // WEE6B
  _gt_BOTT(); // >BOTT
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xee81: WORD 'WEE83' codep=0x1d29 wordp=0xee83
// ================================================
// 0xee83: db 0x3a 0x20 ': '

// ================================================
// 0xee85: WORD 'WEE87' codep=0x224c wordp=0xee87
// ================================================

void WEE87() // WEE87
{
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    WE968(); // WE968
  } else
  {
    WE962(); // WE962
  }
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xee9b: WORD 'WEE9D' codep=0x224c wordp=0xee9d
// ================================================

void WEE9D() // WEE9D
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(1);
  Push(a); // R>
  POS_dot_(); // POS.
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  Push(7);
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(0x009e);
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  WEE87(); // WEE87
  Push(1);
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
  BLT(); // BLT
  StoreCRS(); // !CRS
  Push(pp_XORMODE); // XORMODE
  OFF_2(); // OFF_2
}


// ================================================
// 0xeecd: WORD 'WEECF' codep=0x224c wordp=0xeecf
// ================================================

void WEECF() // WEECF
{
  Push(0x0083 - Read16(pp_WEE83) * 7); // 0x0083 WEE83 @ 7 * -
  WEE9D(); // WEE9D
}


// ================================================
// 0xeee1: WORD 'WEEE3' codep=0x224c wordp=0xeee3
// ================================================

void WEEE3() // WEEE3
{
  _gt_BOTT(); // >BOTT
  WE96E(); // WE96E
  StoreCOLOR(); // !COLOR
  PRINT(" SCROLL CURSOR: ^\\          QUIT: []", 36); // (.")
}


// ================================================
// 0xef12: WORD 'WEF14' codep=0x224c wordp=0xef14
// ================================================

void WEF14() // WEF14
{
  unsigned short int i, imax;
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  WEE11(); // WEE11
  WEC69(); // WEC69
  WEDE7(); // WEDE7
  WE8B6(); // WE8B6
  IOPEN(); // IOPEN
  Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
  Push(Read16(pp_WLINES)); // WLINES @
  MIN(); // MIN

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
    Push(Read16(pp_WCHARS)); // WCHARS @
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    GCR(); // GCR
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

  IFIRST(); // IFIRST
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex__2(); // 1.5!_2
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push(pp_WEE83); // WEE83
  _099(); // 099
  WEECF(); // WEECF
  WEEE3(); // WEEE3
}


// ================================================
// 0xef56: WORD 'WEF58' codep=0x224c wordp=0xef58 params=0 returns=1
// ================================================

void WEF58() // WEF58
{
  WEB60(); // WEB60
  GetINST_dash_C(); // @INST-C
  Push(!(Pop()==0x000b?1:0)); //  0x000b = NOT
  CI(); // CI
  Push(Pop() | Pop()); // OR
  Push((Pop()==0?1:0)==0?1:0); //  0= 0=
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef72: WORD 'WEF74' codep=0x224c wordp=0xef74
// ================================================

void WEF74() // WEF74
{
  WEF58(); // WEF58
  if (Pop() != 0)
  {
    WED2D(); // WED2D
    return;
  }
  WECC5(); // WECC5
}


// ================================================
// 0xef84: WORD 'WEF86' codep=0x224c wordp=0xef86 params=0 returns=1
// ================================================

void WEF86() // WEF86
{
  Push(Read16(pp_WEE83)==0?1:0); // WEE83 @ 0=
}


// ================================================
// 0xef8e: WORD 'WEF90' codep=0x224c wordp=0xef90 params=0 returns=1
// ================================================

void WEF90() // WEF90
{
  Push(Read16(pp_WEE83)==0x000f?1:0); // WEE83 @ 0x000f =
}


// ================================================
// 0xef9c: WORD 'WEF9E' codep=0x224c wordp=0xef9e
// ================================================

void WEF9E() // WEF9E
{
  WEECF(); // WEECF
  Push(-1);
  Push(pp_WEE83); // WEE83
  _plus__ex__2(); // +!_2
  WEECF(); // WEECF
  WEBF9(); // WEBF9
}


// ================================================
// 0xefac: WORD 'WEFAE' codep=0x224c wordp=0xefae
// ================================================

void WEFAE() // WEFAE
{
  WEECF(); // WEECF
  Push(1);
  Push(pp_WEE83); // WEE83
  _plus__ex__2(); // +!_2
  WEECF(); // WEECF
  WEBCB(); // WEBCB
}


// ================================================
// 0xefbc: WORD 'WEFBE' codep=0x224c wordp=0xefbe
// ================================================

void WEFBE() // WEFBE
{
  WEC69(); // WEC69
  WEB58(); // WEB58
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  Push(0x0026);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefd0: WORD 'WEFD2' codep=0x224c wordp=0xefd2 params=2 returns=1
// ================================================

void WEFD2() // WEFD2
{
  WEB58(); // WEB58
  D_eq_(); // D=
}


// ================================================
// 0xefd8: WORD 'WEFDA' codep=0x224c wordp=0xefda params=0 returns=0
// ================================================

void WEFDA() // WEFDA
{
  WE8B6(); // WE8B6
  IOPEN(); // IOPEN
}


// ================================================
// 0xefe0: WORD 'WEFE2' codep=0x224c wordp=0xefe2 params=0 returns=1
// ================================================

void WEFE2() // WEFE2
{
  WEFDA(); // WEFDA
  IFIRST(); // IFIRST
  CI(); // CI
  Push(2);
  _star_CLOSE(); // *CLOSE
  WEFD2(); // WEFD2
}


// ================================================
// 0xeff0: WORD 'WEFF2' codep=0x224c wordp=0xeff2 params=0 returns=1
// ================================================

void WEFF2() // WEFF2
{
  WEFDA(); // WEFDA
  ILAST(); // ILAST
  CI(); // CI
  Push(2);
  _star_CLOSE(); // *CLOSE
  WEFD2(); // WEFD2
  Push(Pop() | (Read16(pp_SCROLL_dash_)==1?1:0)); //  SCROLL- @ 1 = OR
}


// ================================================
// 0xf00a: WORD 'WF00C' codep=0x224c wordp=0xf00c
// ================================================

void WF00C() // WF00C
{
  WEECF(); // WEECF
  WEE4B(); // WEE4B
  WEBCB(); // WEBCB
  _gt_BOTT(); // >BOTT
  Push(-2);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(7);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  WEFBE(); // WEFBE
  WEECF(); // WEECF
}


// ================================================
// 0xf026: WORD 'WF028' codep=0x224c wordp=0xf028
// ================================================

void WF028() // WF028
{
  WEECF(); // WEECF
  WEE5B(); // WEE5B
  WEBF9(); // WEBF9
  WEDE7(); // WEDE7
  WEFBE(); // WEFBE
  WEECF(); // WEECF
}


// ================================================
// 0xf036: WORD 'WF038' codep=0x224c wordp=0xf038
// ================================================

void WF038() // WF038
{
  WEF86(); // WEF86
  if (Pop() != 0)
  {
    WEFE2(); // WEFE2
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      WF028(); // WF028
    }
  } else
  {
    WEF9E(); // WEF9E
  }
  WEF74(); // WEF74
}


// ================================================
// 0xf052: WORD 'WF054' codep=0x224c wordp=0xf054
// ================================================

void WF054() // WF054
{
  WEF90(); // WEF90
  if (Pop() != 0)
  {
    WEFF2(); // WEFF2
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      WF00C(); // WF00C
    }
  } else
  {
    WEFF2(); // WEFF2
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      WEFAE(); // WEFAE
    }
  }
  WEF74(); // WEF74
}


// ================================================
// 0xf076: WORD 'WF078' codep=0x224c wordp=0xf078
// ================================================

void WF078() // WF078
{
  WECD9(); // WECD9
  while(1)
  {
    XYSCAN(); // XYSCAN
    Push(Read16(pp_FTRIG)); // FTRIG @
    WEF58(); // WEF58
    Push(Pop() & Pop()); // AND
    Push(!(Pop() | Read16(pp_FQUIT))); //  FQUIT @ OR NOT
    if (Pop() == 0) break;

    Pop(); // DROP
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      _0_st_(); // 0<
      if (Pop() != 0)
      {
        WF054(); // WF054
      } else
      {
        WF038(); // WF038
      }
    }
  }
  Pop(); Pop(); // 2DROP
  IsQUIT(); // ?QUIT
  if (Pop() != 0)
  {
    Push2Words("0.");
  } else
  {
    WEB60(); // WEB60
    CI(); // CI
    ICLOSE(); // ICLOSE
  }
  Push(pp__ro_THING_rc_); // (THING)
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf0c4: WORD 'WF0C6' codep=0x224c wordp=0xf0c6
// ================================================

void WF0C6() // WF0C6
{
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0017);
  IFIND(); // IFIND
  Pop(); // DROP
  IEXTRAC(); // IEXTRAC
}


// ================================================
// 0xf0d8: WORD 'WF0DA' codep=0x224c wordp=0xf0da
// ================================================

void WF0DA() // WF0DA
{
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0028);
  IFIND(); // IFIND
  Pop(); // DROP
  IEXTRAC(); // IEXTRAC
}


// ================================================
// 0xf0ec: WORD 'WF0EE' codep=0x224c wordp=0xf0ee
// ================================================

void WF0EE() // WF0EE
{
  Push(pp_SUPER_dash_B); // SUPER-B
  Get_gt_C_plus_S(); // @>C+S
  WF0DA(); // WF0DA
  Push2Words("*4SALE");
  IINSERT(); // IINSERT
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  WF0C6(); // WF0C6
  Push2Words("*4SALE");
  IINSERT(); // IINSERT
  Push(4);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf108: WORD 'WF10A' codep=0x224c wordp=0xf10a
// ================================================

void WF10A() // WF10A
{
  Push2Words("*4SALE");
  _gt_C_plus_S(); // >C+S
  WF0DA(); // WF0DA
  Push(pp_SUPER_dash_B); // SUPER-B
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  _gt_INSERT(); // >INSERT
  Push(4);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf120: WORD 'WF122' codep=0x224c wordp=0xf122
// ================================================

void WF122() // WF122
{
  Push2Words("*4SALE");
  _gt_C_plus_S(); // >C+S
  WF0C6(); // WF0C6
  Push2Words("*SHIP");
  IINSERT(); // IINSERT
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf132: WORD 'WF134' codep=0x224c wordp=0xf134
// ================================================

void WF134() // WF134
{
  WF10A(); // WF10A
  WF122(); // WF122
}


// ================================================
// 0xf13a: WORD 'WF13C' codep=0x224c wordp=0xf13c
// ================================================

void WF13C() // WF13C
{
  Push(0x00c5);
  Push(4);
  Push(0x0087);
  Push(0x0034);
  GetColor(BLACK);
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xf150: WORD 'WF152' codep=0x224c wordp=0xf152 params=0 returns=1
// ================================================

void WF152() // WF152
{
  unsigned short int a;
  GetINST_dash_S(); // @INST-S
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(0x000e);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Pop() - 3); //  3 -
  }
  Push(Read16(a)); // R@
  Push(0x0028);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Pop() - 2); //  2 -
  }
  Push(Read16(a)); // R@
  Push(0x002e);
  Push(0x0034);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(0x0029);
  }
  Push(a); // R>
  Push(0x0033);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(Pop() - 5); //  5 -
}


// ================================================
// 0xf1a0: WORD 'WF1A2' codep=0x224c wordp=0xf1a2 params=0 returns=1
// ================================================

void WF1A2() // WF1A2
{
  GetINST_dash_S(); // @INST-S
  Push(Pop() + 0x002d); //  0x002d +
}


// ================================================
// 0xf1ac: WORD 'WF1AE' codep=0x224c wordp=0xf1ae params=0 returns=1
// ================================================

void WF1AE() // WF1AE
{
  GetINST_dash_S(); // @INST-S
  Push(Pop()==6?1:0); //  6 =
  if (Pop() != 0)
  {
    Push(0x0047);
    return;
  }
  Push(0x0045);
}


// ================================================
// 0xf1c6: WORD 'WF1C8' codep=0x2214 wordp=0xf1c8
// ================================================
// 0xf1c8: dw 0x0046

// ================================================
// 0xf1ca: WORD 'ID>#' codep=0x4b3b wordp=0xf1d3
// ================================================

void ID_gt__n_() // ID>#
{
  switch(Pop()) // ID>#
  {
  case 28:
    WF152(); // WF152
    break;
  case 9:
    WF1A2(); // WF1A2
    break;
  case 26:
    WF1AE(); // WF1AE
    break;
  case 68:
    Push(Read16(cc_WF1C8)); // WF1C8
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xf1e7: WORD 'WF1E9' codep=0x224c wordp=0xf1e9
// ================================================

void WF1E9() // WF1E9
{
  WF13C(); // WF13C
  Push(pp_PIC_n_); // PIC#
  _099(); // 099
  Push(pp__ro_THING_rc_); // (THING)
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_C(); // @INST-C
  ID_gt__n_(); // ID># case
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Pop() - 1); //  1-
    Push(0xb9d8); // '.TPIC'
    MODULE(); // MODULE
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf209: WORD 'WF20B' codep=0x224c wordp=0xf20b params=0 returns=1
// ================================================

void WF20B() // WF20B
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf215: WORD 'WF217' codep=0x224c wordp=0xf217 params=0 returns=1
// ================================================

void WF217() // WF217
{
  WF20B(); // WF20B
  Push(0xb9e8); // '.APIC'
  MODULE(); // MODULE
}


// ================================================
// 0xf221: WORD 'WF223' codep=0x224c wordp=0xf223
// ================================================

void WF223() // WF223
{
  _gt_1FONT(); // >1FONT
  Push(0x003a);
  Push(0x009c);
  POS_dot_(); // POS.
  Push(Read16(cc_WED5E)); // WED5E
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  WE96E(); // WE96E
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  PRINT("NEW ", 4); // (.")
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    PRINT("PRICE", 5); // (.")
  } else
  {
    PRINT("OFFER", 5); // (.")
  }
  PRINT(" = ", 3); // (.")
  WE942(); // WE942
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf26c: WORD 'WF26E' codep=0x224c wordp=0xf26e
// ================================================

void WF26E() // WF26E
{
  Push(0xc472); // 'L>P'
  MODULE(); // MODULE
  Push(Read16(pp__1ST) - 1); // 1ST @ 1-
  Push(0);
  MAX(); // MAX
  Push(pp__1ST); // 1ST
  Store_2(); // !_2
  WF223(); // WF223
  WEC27(); // WEC27
  Push(Read16(regsp)); // DUP
  Push(Pop() + 1); //  1+
  if (Pop() != 0)
  {
    Push(pp_PLAST); // PLAST
    Store_2(); // !_2
  } else
  {
    Pop(); // DROP
  }
  Push(2);
  Push(0xc462); // '!PFLAGS'
  MODULE(); // MODULE
}


// ================================================
// 0xf2a2: WORD 'WF2A4' codep=0x224c wordp=0xf2a4
// ================================================

void WF2A4() // WF2A4
{
  while(1)
  {
    XYSCAN(); // XYSCAN
    IsTRIG(); // ?TRIG
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    SWAP(); // SWAP
    Pop(); // DROP
    Push(Pop() + Read16(pp_NCRS)); //  NCRS @ +
    Push(0);
    MAX(); // MAX
    Push(2);
    MIN(); // MIN
    Push(pp_NCRS); // NCRS
    Store_2(); // !_2
    Push(pp_MCURS); // MCURS
    SET_dash_CRS(); // SET-CRS
    Pop(); // DROP
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf2d2: WORD 'WF2D4' codep=0x224c wordp=0xf2d4
// ================================================

void WF2D4() // WF2D4
{
  WE92E(); // WE92E
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    Push(Pop() * 3); //  3 *
  } else
  {
    Push(3);
    _slash_(); // /
  }
  Push(pp_PLAST); // PLAST
  Store_2(); // !_2
}


// ================================================
// 0xf2f0: WORD 'WF2F2' codep=0x224c wordp=0xf2f2 params=0 returns=1
// ================================================

void WF2F2() // WF2F2
{
  Push(1);
  Push(0xc462); // '!PFLAGS'
  MODULE(); // MODULE
}


// ================================================
// 0xf2fc: WORD 'WF2FE' codep=0x224c wordp=0xf2fe params=0 returns=1
// ================================================

void WF2FE() // WF2FE
{
  Push(0);
  Push(0xc462); // '!PFLAGS'
  MODULE(); // MODULE
}


// ================================================
// 0xf308: WORD 'WF30A' codep=0x224c wordp=0xf30a params=0 returns=2
// ================================================

void WF30A() // WF30A
{
  Push(0x07d0);
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2
  Push(0x0032);
  MS(); // MS
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf31c: WORD 'P>REPLY' codep=0x4b3b wordp=0xf328
// ================================================

void P_gt_REPLY() // P>REPLY
{
  switch(Pop()) // P>REPLY
  {
  case 0:
    WF2F2(); // WF2F2
    break;
  case 1:
    WF26E(); // WF26E
    break;
  case 2:
    WF2FE(); // WF2FE
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf338: WORD 'WF33A' codep=0x224c wordp=0xf33a
// ================================================

void WF33A() // WF33A
{
  WEA95(); // WEA95
  WF2A4(); // WF2A4
  WF30A(); // WF30A
  Push(Read16(pp_NCRS)); // NCRS @
  P_gt_REPLY(); // P>REPLY case
  WE8C4(); // WE8C4
}


// ================================================
// 0xf34a: WORD 'WF34C' codep=0x224c wordp=0xf34c params=0 returns=0
// ================================================

void WF34C() // WF34C
{
  Push(Read16(pp_BARTERI) & Read16(pp_IsREPLY)); // BARTERI @ ?REPLY @ AND
  if (Pop() == 0) return;
  WF33A(); // WF33A
}


// ================================================
// 0xf35e: WORD 'WF360' codep=0x224c wordp=0xf360 params=0 returns=1
// ================================================

void WF360() // WF360
{
  while(1)
  {
    Push(Read16(pp_BARTERI)); // BARTERI @
    if (Pop() == 0) break;

    Push(0xc44e); // 'DOBARTE'
    MODULE(); // MODULE
    WE88A(); // WE88A
    Push(Read16(pp_BARTERI)); // BARTERI @
    if (Pop() != 0)
    {
      WE8AE(); // WE8AE
      WED01(); // WED01
      ICLOSE(); // ICLOSE
    }
    WF34C(); // WF34C
  }
  WE87A(); // WE87A
}


// ================================================
// 0xf388: WORD 'WF38A' codep=0x224c wordp=0xf38a
// ================================================

void WF38A() // WF38A
{
  Push(!Read16(pp_TERMINA)); // TERMINA @ NOT
  if (Pop() != 0)
  {
    Push(0xc43a); // 'DOOPEN'
    MODULE(); // MODULE
    WE88A(); // WE88A
    Push(pp_IsREPLY); // ?REPLY
    ON_2(); // ON_2
    Push(Read16(pp_BARTERI)); // BARTERI @
    if (Pop() != 0)
    {
      WF2D4(); // WF2D4
      WF33A(); // WF33A
      WF360(); // WF360
    }
  }
  SET_STR_AS_PARAM(" ");
  WEE71(); // WEE71
}


// ================================================
// 0xf3b6: WORD 'WF3B8' codep=0x224c wordp=0xf3b8
// ================================================

void WF3B8() // WF3B8
{
  WEE11(); // WEE11
  MAKE_dash_SC(); // MAKE-SC
  GET_dash_BOX(); // GET-BOX
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  WEF14(); // WEF14
  WF078(); // WF078
  DELETE_dash_(); // DELETE-
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
  Push2Words("0.");
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _1_dot_5_ex__2(); // 1.5!_2
  WEDAF(); // WEDAF
  WEE11(); // WEE11
  Push(pp__ro_THING_rc_); // (THING)
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  WF1E9(); // WF1E9
  WF38A(); // WF38A
  WF13C(); // WF13C
}


// ================================================
// 0xf3e8: WORD 'WF3EA' codep=0x224c wordp=0xf3ea
// ================================================

void WF3EA() // WF3EA
{
  Push(pp_SELLING); // SELLING
  ON_2(); // ON_2
  WF30A(); // WF30A
  Push2Words("*4SALE");
  WF3B8(); // WF3B8
}


// ================================================
// 0xf3f6: WORD 'WF3F8' codep=0x224c wordp=0xf3f8
// ================================================

void WF3F8() // WF3F8
{
  Push(pp_SELLING); // SELLING
  _099(); // 099
  WF30A(); // WF30A
  Push2Words("BUY-LIS");
  WF3B8(); // WF3B8
}


// ================================================
// 0xf404: WORD 'WF406' codep=0x224c wordp=0xf406 params=0 returns=0
// ================================================

void WF406() // WF406
{
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(8);
  _st_(); // <
  if (Pop() != 0)
  {
    GetColor(WHITE);
    StoreCOLOR(); // !COLOR
    SET_STR_AS_PARAM("ANY PURCHASED GOODS WILL BE TRANSFERRED");
    DrawTTY(); // .TTY
    SET_STR_AS_PARAM("TO YOUR SHIP. THANK YOU AND COME AGAIN");
    DrawTTY(); // .TTY
    Push(0x0bb8);
    MS(); // MS
  }
  Push(pp_PIC_n_); // PIC#
  _099(); // 099
}


// ================================================
// 0xf479: WORD 'WF47B' codep=0x224c wordp=0xf47b params=0 returns=2
// ================================================

void WF47B() // WF47B
{
  Push(pp_TERMINA); // TERMINA
  ON_2(); // ON_2
  WF30A(); // WF30A
}


// ================================================
// 0xf483: WORD 'WF485' codep=0x224c wordp=0xf485
// ================================================

void WF485() // WF485
{
  WEA57(); // WEA57
  WF217(); // WF217
  WF2A4(); // WF2A4
}


// ================================================
// 0xf48d: WORD 'T>ACTION' codep=0x4b3b wordp=0xf49a
// ================================================

void T_gt_ACTION() // T>ACTION
{
  switch(Pop()) // T>ACTION
  {
  case 0:
    WF3F8(); // WF3F8
    break;
  case 1:
    WF3EA(); // WF3EA
    break;
  case 2:
    WF47B(); // WF47B
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf4aa: WORD 'WF4AC' codep=0x224c wordp=0xf4ac
// ================================================

void WF4AC() // WF4AC
{
  while(1)
  {
    Push2Words("0.");
    Push(pp__ro_THING_rc_); // (THING)
    _1_dot_5_ex__2(); // 1.5!_2
    WEDAF(); // WEDAF
    Push(!Read16(pp_TERMINA)); // TERMINA @ NOT
    if (Pop() == 0) return;
    Push(pp_TBOX); // TBOX
    _099(); // 099
    WF485(); // WF485
    Push(Read16(pp_NCRS)); // NCRS @
    T_gt_ACTION(); // T>ACTION case
  }
}


// ================================================
// 0xf4d0: WORD 'WF4D2' codep=0x224c wordp=0xf4d2
// ================================================

void WF4D2() // WF4D2
{
  Push(0xc261); // 'OVINIT-_1'
  MODULE(); // MODULE
  WE9EF(); // WE9EF
  WE97A(); // WE97A
  Push(0xba0a); // 'LDAPIC'
  MODULE(); // MODULE
  Push(0xc427); // 'DOENTER'
  MODULE(); // MODULE
  Push(Read16(pp_TERMINA)); // TERMINA @
  if (Pop() != 0)
  {
    Push(0x0bb8);
    MS(); // MS
  }
  WF4AC(); // WF4AC
  WE8C4(); // WE8C4
  Push(7);
  Push(0xc273); // 'OVTRANS'
  MODULE(); // MODULE
}


// ================================================
// 0xf504: WORD 'TRADE' codep=0x224c wordp=0xf50e
// ================================================
// entry

void TRADE() // TRADE
{
  unsigned short int a;
  Push(Read16(pp__pe_VAL)); // %VAL @
  a = Pop(); // >R
  Push(0x0064);
  Push(pp__pe_VAL); // %VAL
  Store_2(); // !_2
  Push(6);
  Push(pp_CONTEXT_3); // CONTEXT_3
  Store_2(); // !_2
  Push(0xc024); // 'SET-C'
  MODULE(); // MODULE
  Push2Words("NULL");
  Push(pp__ro_THING_rc_); // (THING)
  _1_dot_5_ex__2(); // 1.5!_2
  WF0EE(); // WF0EE
  WF4D2(); // WF4D2
  WF406(); // WF406
  Push(0);
  Push(pp_CONTEXT_3); // CONTEXT_3
  Store_2(); // !_2
  Push(a); // R>
  Push(pp__pe_VAL); // %VAL
  Store_2(); // !_2
  WF134(); // WF134
  Push(0xb6ec); // '=CARGO'
  MODULE(); // MODULE
}

// 0xf54a: db 0x4d 0x41 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'MAR___________________ '

