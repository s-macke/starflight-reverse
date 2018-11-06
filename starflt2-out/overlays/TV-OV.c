// ====== OVERLAY 'TV-OV' ======
// store offset = 0xe6d0
// overlay size   = 0x0e90

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WE6E6  codep:0x2214 parp:0xe6e6 size:0x0002 C-string:'WE6E6'
//           WE6EA  codep:0x224c parp:0xe6ea size:0x004a C-string:'WE6EA'
//           WE736  codep:0x2214 parp:0xe736 size:0x0002 C-string:'WE736'
//           WE73A  codep:0x7420 parp:0xe73a size:0x0003 C-string:'WE73A'
//           WE73F  codep:0x7420 parp:0xe73f size:0x0003 C-string:'WE73F'
//           WE744  codep:0x7420 parp:0xe744 size:0x0003 C-string:'WE744'
//           WE749  codep:0x7420 parp:0xe749 size:0x0003 C-string:'WE749'
//           WE74E  codep:0x7420 parp:0xe74e size:0x0003 C-string:'WE74E'
//           WE753  codep:0x7394 parp:0xe753 size:0x0006 C-string:'WE753'
//           WE75B  codep:0x7420 parp:0xe75b size:0x0003 C-string:'WE75B'
//           WE760  codep:0x7394 parp:0xe760 size:0x0006 C-string:'WE760'
//           WE768  codep:0x7420 parp:0xe768 size:0x0003 C-string:'WE768'
//           WE76D  codep:0x224c parp:0xe76d size:0x000a C-string:'WE76D'
//           WE779  codep:0x224c parp:0xe779 size:0x0036 C-string:'WE779'
//        DISPOSAL  codep:0x4b3b parp:0xe7bc size:0x0024 C-string:'DISPOSAL'
//           WE7E2  codep:0x224c parp:0xe7e2 size:0x0018 C-string:'WE7E2'
//           WE7FC  codep:0x224c parp:0xe7fc size:0x000c C-string:'WE7FC'
//           WE80A  codep:0x224c parp:0xe80a size:0x0018 C-string:'WE80A'
//           WE824  codep:0x224c parp:0xe824 size:0x002c C-string:'WE824'
//           WE852  codep:0x224c parp:0xe852 size:0x0008 C-string:'WE852'
//           WE85C  codep:0x224c parp:0xe85c size:0x0010 C-string:'WE85C'
//           WE86E  codep:0x224c parp:0xe86e size:0x0026 C-string:'WE86E'
//           WE896  codep:0x224c parp:0xe896 size:0x0018 C-string:'WE896'
//           WE8B0  codep:0x224c parp:0xe8b0 size:0x0016 C-string:'WE8B0'
//           WE8C8  codep:0x224c parp:0xe8c8 size:0x0012 C-string:'WE8C8'
//           WE8DC  codep:0x224c parp:0xe8dc size:0x000a C-string:'WE8DC'
//           WE8E8  codep:0x224c parp:0xe8e8 size:0x0008 C-string:'WE8E8'
//           WE8F2  codep:0x224c parp:0xe8f2 size:0x0014 C-string:'WE8F2'
//           WE908  codep:0x224c parp:0xe908 size:0x0016 C-string:'WE908'
//           WE920  codep:0x224c parp:0xe920 size:0x0014 C-string:'WE920'
//           WE936  codep:0x224c parp:0xe936 size:0x0012 C-string:'WE936'
//           WE94A  codep:0x224c parp:0xe94a size:0x001e C-string:'WE94A'
//           WE96A  codep:0x224c parp:0xe96a size:0x0026 C-string:'WE96A'
//           WE992  codep:0x224c parp:0xe992 size:0x0022 C-string:'WE992'
//           WE9B6  codep:0x224c parp:0xe9b6 size:0x0022 C-string:'WE9B6'
//           WE9DA  codep:0x224c parp:0xe9da size:0x001e C-string:'WE9DA'
//           WE9FA  codep:0x224c parp:0xe9fa size:0x0010 C-string:'WE9FA'
//           WEA0C  codep:0x224c parp:0xea0c size:0x000a C-string:'WEA0C'
//           WEA18  codep:0x224c parp:0xea18 size:0x002a C-string:'WEA18'
//           WEA44  codep:0x224c parp:0xea44 size:0x0024 C-string:'WEA44'
//           WEA6A  codep:0x224c parp:0xea6a size:0x0028 C-string:'WEA6A'
//           WEA94  codep:0x224c parp:0xea94 size:0x007e C-string:'WEA94'
//           WEB14  codep:0x224c parp:0xeb14 size:0x0014 C-string:'WEB14'
//           WEB2A  codep:0x224c parp:0xeb2a size:0x0078 C-string:'WEB2A'
//           WEBA4  codep:0x224c parp:0xeba4 size:0x005d C-string:'WEBA4'
//           WEC03  codep:0x224c parp:0xec03 size:0x0028 C-string:'WEC03'
//           WEC2D  codep:0x224c parp:0xec2d size:0x001a C-string:'WEC2D'
//           WEC49  codep:0x224c parp:0xec49 size:0x0028 C-string:'WEC49'
//           WEC73  codep:0x224c parp:0xec73 size:0x0006 C-string:'WEC73'
//           WEC7B  codep:0x224c parp:0xec7b size:0x0024 C-string:'WEC7B'
//           WECA1  codep:0x224c parp:0xeca1 size:0x000e C-string:'WECA1'
//       FUNCTIONS  codep:0x1d29 parp:0xecbd size:0x0019 C-string:'FUNCTIONS'
//           WECD8  codep:0x224c parp:0xecd8 size:0x0014 C-string:'WECD8'
//           WECEE  codep:0x224c parp:0xecee size:0x004c C-string:'WECEE'
//           WED3C  codep:0x224c parp:0xed3c size:0x000e C-string:'WED3C'
//           WED4C  codep:0x1d29 parp:0xed4c size:0x0006 C-string:'WED4C'
//           WED54  codep:0x224c parp:0xed54 size:0x0026 C-string:'WED54'
//           WED7C  codep:0x224c parp:0xed7c size:0x002a C-string:'WED7C'
//           WEDA8  codep:0x224c parp:0xeda8 size:0x0074 C-string:'WEDA8'
//         HEAVEHO  codep:0x224c parp:0xee28 size:0x000a C-string:'HEAVEHO'
//           WEE34  codep:0x2214 parp:0xee34 size:0x0002 C-string:'WEE34'
//           WEE38  codep:0x224c parp:0xee38 size:0x002c C-string:'WEE38'
//        TV-SETUP  codep:0x224c parp:0xee71 size:0x000e C-string:'TV_dash_SETUP'
//           WEE81  codep:0x224c parp:0xee81 size:0x000c C-string:'WEE81'
//           WEE8F  codep:0x224c parp:0xee8f size:0x0010 C-string:'WEE8F'
//           WEEA1  codep:0x224c parp:0xeea1 size:0x0026 C-string:'WEEA1'
//           WEEC9  codep:0x224c parp:0xeec9 size:0x0024 C-string:'WEEC9'
//           WEEEF  codep:0x224c parp:0xeeef size:0x0058 C-string:'WEEEF'
//           WEF49  codep:0x224c parp:0xef49 size:0x004c C-string:'WEF49'
//           WEF97  codep:0x224c parp:0xef97 size:0x001c C-string:'WEF97'
//           WEFB5  codep:0x224c parp:0xefb5 size:0x0058 C-string:'WEFB5'
//           WF00F  codep:0x224c parp:0xf00f size:0x005a C-string:'WF00F'
//           WF06B  codep:0x224c parp:0xf06b size:0x0012 C-string:'WF06B'
//           WF07F  codep:0x224c parp:0xf07f size:0x0092 C-string:'WF07F'
//           WF113  codep:0x224c parp:0xf113 size:0x003c C-string:'WF113'
//           WF151  codep:0x224c parp:0xf151 size:0x0010 C-string:'WF151'
//           WF163  codep:0x224c parp:0xf163 size:0x002c C-string:'WF163'
//           WF191  codep:0x1d29 parp:0xf191 size:0x0006 C-string:'WF191'
//           WF199  codep:0x224c parp:0xf199 size:0x004a C-string:'WF199'
//           WF1E5  codep:0x224c parp:0xf1e5 size:0x0034 C-string:'WF1E5'
//           WF21B  codep:0x224c parp:0xf21b size:0x0016 C-string:'WF21B'
//           WF233  codep:0x224c parp:0xf233 size:0x0058 C-string:'WF233'
//       WALK&TALK  codep:0x224c parp:0xf299 size:0x0022 C-string:'WALK_and_TALK'
//           WF2BD  codep:0x224c parp:0xf2bd size:0x0039 C-string:'WF2BD'
//           WF2F8  codep:0x224c parp:0xf2f8 size:0x002e C-string:'WF2F8'
//           WF328  codep:0x224c parp:0xf328 size:0x0010 C-string:'WF328'
//           WF33A  codep:0x224c parp:0xf33a size:0x000e C-string:'WF33A'
//         TV-DISP  codep:0x224c parp:0xf354 size:0x0071 C-string:'TV_dash_DISP'
//       TV-CLEANU  codep:0x224c parp:0xf3d3 size:0x0004 C-string:'TV_dash_CLEANU'
//           WF3D9  codep:0x1d29 parp:0xf3d9 size:0x0002 C-string:'WF3D9'
//           WF3DD  codep:0x224c parp:0xf3dd size:0x0016 C-string:'WF3DD'
//           WF3F5  codep:0x224c parp:0xf3f5 size:0x0018 C-string:'WF3F5'
//           WF40F  codep:0x224c parp:0xf40f size:0x0012 C-string:'WF40F'
//           WF423  codep:0x224c parp:0xf423 size:0x0049 C-string:'WF423'
//           WF46E  codep:0x1d29 parp:0xf46e size:0x0002 C-string:'WF46E'
//           WF472  codep:0x224c parp:0xf472 size:0x0080 C-string:'WF472'
//       DO.WEAPON  codep:0x224c parp:0xf500 size:0x0000 C-string:'DO_dot_WEAPON'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int cc_MPS; // MPS
extern const unsigned short int pp__n_SHOTS; // #SHOTS
extern const unsigned short int pp_IsCRITIC; // ?CRITIC
extern const unsigned short int pp_IsTV; // ?TV
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_IsNEW; // ?NEW
extern const unsigned short int pp_MOVED; // MOVED
extern const unsigned short int pp_LOCRADI; // LOCRADI
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_XVIS; // XVIS
extern const unsigned short int pp_YVIS; // YVIS
extern const unsigned short int pp_XLLDEST; // XLLDEST
extern const unsigned short int pp_YLLDEST; // YLLDEST
extern const unsigned short int pp__i__dot_BACKG; // '.BACKG
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_IINDEX; // IINDEX
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp__n_STORM; // #STORM
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_OCRS; // OCRS
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WBOTTOM; // WBOTTOM
extern const unsigned short int pp_WRIGHT; // WRIGHT
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_WLINES; // WLINES
extern const unsigned short int pp_CRSCOLO; // CRSCOLO
extern const unsigned short int pp__pe_VAL; // %VAL
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_LINE_dash_CO; // LINE-CO
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_WEAPON_dash_; // WEAPON-
extern const unsigned short int pp_IsFLAT; // ?FLAT
extern const unsigned short int pp_EYEXY; // EYEXY
extern const unsigned short int pp_WEAPXY; // WEAPXY
extern const unsigned short int pp__10_star_END; // 10*END
extern const unsigned short int pp_LKEYTIM; // LKEYTIM
extern const unsigned short int pp__ro_SCROLL_1; // (SCROLL_1
extern const unsigned short int pp_XWLD_c_XP; // XWLD:XP
extern const unsigned short int pp_YWLD_c_YP; // YWLD:YP
extern const unsigned short int pp_ANCHOR; // ANCHOR
extern const unsigned short int pp_TVEHICL; // TVEHICL
extern const unsigned short int pp_TV_dash_HOLD; // TV-HOLD
extern const unsigned short int pp_SUPER_dash_B; // SUPER-B
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp_THIS_dash_RE; // THIS-RE
extern const unsigned short int pp__ro_TRADER; // (TRADER
extern LoadDataType ART_dash_VOL; // ART-VOL
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color RED; // RED
extern Color GREY1; // GREY1
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void _star__slash_(); // */
void ABS(); // ABS
void MAX(); // MAX
void MIN(); // MIN
void D_st_(); // D<
void PAD(); // PAD
void MS(); // MS
void NOP(); // NOP
void D_eq_(); // D=
void WITHIN(); // WITHIN
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void _2_ex__2(); // 2!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void CDROP(); // CDROP
void CI_i_(); // CI'
void IsNULL(); // ?NULL
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void INEXT(); // INEXT
void IFIRST(); // IFIRST
void ILAST(); // ILAST
void IINSERT(); // IINSERT
void _gt_INSERT(); // >INSERT
void IEXTRAC(); // IEXTRAC
void IFLD_at_(); // IFLD@
void IFLD_ex_(); // IFLD!
void IsCLASS_slash_(); // ?CLASS/
void IFIND(); // IFIND
void IDELETE(); // IDELETE
void SAVE_dash_OV(); // SAVE-OV
void _1PIX(); // 1PIX
void _2PIX(); // 2PIX
void StoreCOLOR(); // !COLOR
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void DCLIPSE(); // DCLIPSE
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void StoreVISWIN(); // !VISWIN
void _gt_1ICONF(); // >1ICONF
void GetID(); // @ID
void GetIL(); // @IL
void GetIH(); // @IH
void INIT_dash_IC(); // INIT-IC
void DrawBACKGR(); // .BACKGR
void POINT_gt_I(); // POINT>I
void DrawLOCAL_dash_(); // .LOCAL-
void IsICONS_dash__2(); // ?ICONS-_2
void IsICON_eq_I(); // ?ICON=I
void _dash_ICON(); // -ICON
void _plus_ICON_2(); // +ICON_2
void ORGLIST(); // ORGLIST
void SFILL(); // SFILL
void POS_dot_(); // POS.
void WINDOW(); // WINDOW
void POLY_dash_WI(); // POLY-WI
void _gt_TVCT(); // >TVCT
void CTERASE(); // CTERASE
void CLICK(); // CLICK
void BEEPON_2(); // BEEPON_2
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void WLINE_dash_U(); // WLINE-U
void GCR(); // GCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void VIEWSCR(); // VIEWSCR
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void BLD_dash_CRS(); // BLD-CRS
void _gt_BOX(); // >BOX
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void _4_star_(); // 4*
void D_plus_(); // D+
void U_star_(); // U*
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void _1_dot_5_at_(); // 1.5@
void GetDS(); // @DS
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void _st_D_ex__gt_(); // <D!>
void _gt_C(); // >C
void CI(); // CI
void BLT(); // BLT
void WLD_gt_SCR(); // WLD>SCR


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_FUNCTIONS = 0xecbd; // FUNCTIONS size: 25
// {0x05, 0x0c, 0x03, 0x0c, 0x13, 0x0c, 0x17, 0x0c, 0x13, 0x0c, 0x2b, 0x0c, 0x17, 0x0c, 0x43, 0x0c, 0x27, 0x0c, 0x6b, 0x0c, 0x1b, 0x0c, 0x87, 0x0c, 0x16}

const unsigned short int pp_WED4C = 0xed4c; // WED4C size: 6
// {0x56, 0x3a, 0x20, 0x0f, 0x05, 0x41}

const unsigned short int pp_WF191 = 0xf191; // WF191 size: 6
// {0x00, 0x42, 0x99, 0x99, 0x42, 0x00}

const unsigned short int pp_WF3D9 = 0xf3d9; // WF3D9 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF46E = 0xf46e; // WF46E size: 2
// {0x3a, 0x20}


const unsigned short int cc_WE6E6 = 0xe6e6; // WE6E6
const unsigned short int cc_WE736 = 0xe736; // WE736
const unsigned short int cc_WEE34 = 0xee34; // WEE34


// 0xe6e2: db 0xe9 0x00 '  '

// ================================================
// 0xe6e4: WORD 'WE6E6' codep=0x2214 parp=0xe6e6
// ================================================
// 0xe6e6: dw 0x0000

// ================================================
// 0xe6e8: WORD 'WE6EA' codep=0x224c parp=0xe6ea params=0 returns=0
// ================================================

void WE6EA() // WE6EA
{
  unsigned short int i, imax, j, jmax;
  Push(0x0064);
  Push(0x03e8);
  Push(Read16(pp_COLOR)); // COLOR @
  GetColor(RED);
  Push((Pop()==Pop())?1:0); // =
  Push(Read16(regsp)); // DUP
  Push(Pop() * 2 - 1); //  2* 1-
  Push(0xe6e6); // 'WE6E6'
  Store_2(); // !_2
  if (Pop() != 0)
  {
    SWAP(); // SWAP
  }

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    BEEPON_2(); // BEEPON_2
    Push(i); // I
    Push(i * 2); // I 2*
    RRND(); // RRND
    TONE(); // TONE
    Push(3 * Read16(cc_MPS)); // 3 MPS *
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      NOP(); // NOP
      j++;
    } while(j<jmax); // (LOOP)

    Push(Read16(cc_WE6E6)); // WE6E6
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xe734: WORD 'WE736' codep=0x2214 parp=0xe736
// ================================================
// orphan
// 0xe736: dw 0x0044

// ================================================
// 0xe738: WORD 'WE73A' codep=0x7420 parp=0xe73a
// ================================================
IFieldType WE73A = {TVEHICLEIDX, 0x11, 0x01};

// ================================================
// 0xe73d: WORD 'WE73F' codep=0x7420 parp=0xe73f
// ================================================
IFieldType WE73F = {BOXIDX, 0x11, 0x02};

// ================================================
// 0xe742: WORD 'WE744' codep=0x7420 parp=0xe744
// ================================================
IFieldType WE744 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xe747: WORD 'WE749' codep=0x7420 parp=0xe749
// ================================================
IFieldType WE749 = {ASSIGN_CREWIDX, 0x17, 0x03};

// ================================================
// 0xe74c: WORD 'WE74E' codep=0x7420 parp=0xe74e
// ================================================
IFieldType WE74E = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xe751: WORD 'WE753' codep=0x7394 parp=0xe753
// ================================================
// orphan
LoadDataType WE753 = {TRADERSIDX, 0x2a, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe759: WORD 'WE75B' codep=0x7420 parp=0xe75b
// ================================================
// orphan
IFieldType WE75B = {CREATUREIDX, 0x17, 0x01};

// ================================================
// 0xe75e: WORD 'WE760' codep=0x7394 parp=0xe760
// ================================================
LoadDataType WE760 = {ARTIFACTIDX, 0x1e, 0x01, 0x20, 0x6bcd};

// ================================================
// 0xe766: WORD 'WE768' codep=0x7420 parp=0xe768
// ================================================
IFieldType WE768 = {CREATUREIDX, 0x18, 0x01};

// ================================================
// 0xe76b: WORD 'WE76D' codep=0x224c parp=0xe76d
// ================================================

void WE76D() // WE76D
{
  LoadData(WE760); // from 'ARTIFACT'
  Push((Read16(Pop())&0xFF)==2?1:0); //  C@ 2 =
}


// ================================================
// 0xe777: WORD 'WE779' codep=0x224c parp=0xe779
// ================================================

void WE779() // WE779
{
  GetINST_dash_S(); // @INST-S
  Push(3);
  _st_(); // <
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x001b);
  Push(0);
  IFIND(); // IFIND
  Push(!Pop()); //  NOT
  IFIRST(); // IFIRST
  Push(0x001c);
  Push(0);
  IFIND(); // IFIND
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  GetINST_dash_S(); // @INST-S
  Push(3);
  Push(5);
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe7af: WORD 'DISPOSAL' codep=0x4b3b parp=0xe7bc
// ================================================

void DISPOSAL() // DISPOSAL
{
  switch(Pop()) // DISPOSAL
  {
  case 68:
    Push(Read16(cc_TRUE)); // TRUE
    break;
  case 26:
    Push(Read16(cc_TRUE)); // TRUE
    break;
  case 21:
    Push(Read16(cc_TRUE)); // TRUE
    break;
  case 31:
    Push(Read16(cc_TRUE)); // TRUE
    break;
  case 33:
    Push(Read16(cc_TRUE)); // TRUE
    break;
  case 28:
    WE76D(); // WE76D
    break;
  case 41:
    WE779(); // WE779
    break;
  case 9:
    Push(Read16(cc_TRUE)); // TRUE
    break;
  default:
    Push(Read16(cc_FALSE)); // FALSE
    break;

  }
}

// ================================================
// 0xe7e0: WORD 'WE7E2' codep=0x224c parp=0xe7e2 params=0 returns=2
// ================================================

void WE7E2() // WE7E2
{
  Push(2);
  Push(0x000a);
  RRND(); // RRND
  Push(Pop() * Read16(cc_MPS)); //  MPS *
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  _slash_(); // /
  Push(1);
  MAX(); // MAX
}


// ================================================
// 0xe7fa: WORD 'WE7FC' codep=0x224c parp=0xe7fc
// ================================================

void WE7FC() // WE7FC
{
  _dash_ICON(); // -ICON
  Push(0xba55); // 'ICON-'
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
}


// ================================================
// 0xe808: WORD 'WE80A' codep=0x224c parp=0xe80a
// ================================================

void WE80A() // WE80A
{
  GetID(); // @ID
  Push(!(Pop()==0x0011?1:0)); //  0x0011 = NOT
  if (Pop() == 0) return;
  Push(0);
  Push(0xe75b); // 'WE75B'
  IFLD_ex_(); // IFLD!
}


// ================================================
// 0xe822: WORD 'WE824' codep=0x224c parp=0xe824
// ================================================

void WE824() // WE824
{
  Push(0);
  Push(0x000a);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    WE80A(); // WE80A
  } else
  {
    GetID(); // @ID
    Push(!(Pop()==0x0011?1:0)); //  0x0011 = NOT
    if (Pop() != 0)
    {
      WE7E2(); // WE7E2
      Push(0x65e1+WE768.offset); // WE768<IFIELD>
      C_ex__2(); // C!_2
    }
  }
  WE7FC(); // WE7FC
}


// ================================================
// 0xe850: WORD 'WE852' codep=0x224c parp=0xe852 params=0 returns=0
// ================================================

void WE852() // WE852
{
  Push(0xcf39); // '.WH'
  MODULE(); // MODULE
}


// ================================================
// 0xe85a: WORD 'WE85C' codep=0x224c parp=0xe85c params=1 returns=0
// ================================================

void WE85C() // WE85C
{
  Push(Read16(pp_WTOP)); // WTOP @
  OVER(); // OVER
  Push(Read16(pp_WBOTTOM) - 1); // WBOTTOM @ 1-
  LLINE(); // LLINE
}


// ================================================
// 0xe86c: WORD 'WE86E' codep=0x224c parp=0xe86e params=0 returns=0
// ================================================

void WE86E() // WE86E
{
  Push(0x0016);
  WE85C(); // WE85C
  Push(0x002a);
  WE85C(); // WE85C
  Push(0x0042);
  WE85C(); // WE85C
  Push(0x006a);
  WE85C(); // WE85C
  Push(0x0086);
  WE85C(); // WE85C
  Push(0x009e);
  WE85C(); // WE85C
}


// ================================================
// 0xe894: WORD 'WE896' codep=0x224c parp=0xe896
// ================================================

void WE896() // WE896
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
// 0xe8ae: WORD 'WE8B0' codep=0x224c parp=0xe8b0 params=0 returns=1
// ================================================
// orphan

void WE8B0() // WE8B0
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
// 0xe8c6: WORD 'WE8C8' codep=0x224c parp=0xe8c8 params=0 returns=1
// ================================================

void WE8C8() // WE8C8
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WE749.offset); // WE749<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+WE74E.offset)&0xFF); // WE74E<IFIELD> C@
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe8da: WORD 'WE8DC' codep=0x224c parp=0xe8dc params=0 returns=1
// ================================================
// orphan

void WE8DC() // WE8DC
{
  WE8C8(); // WE8C8
  Push(0x00c7);
  _gt_(); // >
}


// ================================================
// 0xe8e6: WORD 'WE8E8' codep=0x224c parp=0xe8e8 params=0 returns=0
// ================================================

void WE8E8() // WE8E8
{
  Push(-1);
  Push(pp_WBOTTOM); // WBOTTOM
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xe8f0: WORD 'WE8F2' codep=0x224c parp=0xe8f2 params=0 returns=0
// ================================================

void WE8F2() // WE8F2
{
  Push(0x0083);
  Push(0x0053);
  Push(9);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xe906: WORD 'WE908' codep=0x224c parp=0xe908 params=0 returns=0
// ================================================

void WE908() // WE908
{
  Push(0x0040);
  Push(3);
  Push(7);
  Push(0x0026);
  WINDOW(); // WINDOW
  WE8E8(); // WE8E8
  WE8E8(); // WE8E8
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xe91e: WORD 'WE920' codep=0x224c parp=0xe920 params=0 returns=0
// ================================================

void WE920() // WE920
{
  Push(0x00c1);
  Push(0x0053);
  Push(8);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xe934: WORD 'WE936' codep=0x224c parp=0xe936 params=0 returns=0
// ================================================

void WE936() // WE936
{
  Push(0x00bf);
  Push(3);
  Push(0x0011);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xe948: WORD 'WE94A' codep=0x224c parp=0xe94a params=0 returns=0
// ================================================

void WE94A() // WE94A
{
  Push(0x000c);
  Push(pp_WTOP); // WTOP
  _st__ex__gt_(); // <!>
  Push(3);
  Push(pp_WLEFT); // WLEFT
  _st__ex__gt_(); // <!>
  Push(0x009b);
  Push(pp_WRIGHT); // WRIGHT
  _st__ex__gt_(); // <!>
  Push(1);
  Push(pp_WBOTTOM); // WBOTTOM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe968: WORD 'WE96A' codep=0x224c parp=0xe96a params=2 returns=2
// ================================================
// orphan

void WE96A() // WE96A
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
// 0xe990: WORD 'WE992' codep=0x224c parp=0xe992 params=1 returns=0
// ================================================
// orphan

void WE992() // WE992
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
// 0xe9b4: WORD 'WE9B6' codep=0x224c parp=0xe9b6 params=1 returns=0
// ================================================
// orphan

void WE9B6() // WE9B6
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
// 0xe9d8: WORD 'WE9DA' codep=0x224c parp=0xe9da params=2 returns=0
// ================================================

void WE9DA() // WE9DA
{
  SWAP(); // SWAP
  _4_star_(); // 4*
  Push(Pop() + (Read16(pp_WLEFT) + 2)); //  WLEFT @ 2+ +
  Push(Read16(pp_WTOP) - 1); // WTOP @ 1-
  ROT(); // ROT
  Push(Pop() * 7); //  7 *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xe9f8: WORD 'WE9FA' codep=0x224c parp=0xe9fa params=0 returns=2
// ================================================

void WE9FA() // WE9FA
{
  Push(pp_TVEHICL); // TVEHICL
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea0a: WORD 'WEA0C' codep=0x224c parp=0xea0c params=2 returns=0
// ================================================
// orphan

void WEA0C() // WEA0C
{
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xea16: WORD 'WEA18' codep=0x224c parp=0xea18 params=0 returns=1
// ================================================

void WEA18() // WEA18
{
  Push(Read16(0x65e1+WE73F.offset)); // WE73F<IFIELD> @
  Push(Read16(regsp)); // DUP
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+WE744.offset)); // WE744<IFIELD> @
  _st_(); // <
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    SWAP(); // SWAP
    Push(-Pop()); //  NEGATE
    Push(0x65e1+WE744.offset); // WE744<IFIELD>
    _plus__ex__2(); // +!_2
  } else
  {
    SWAP(); // SWAP
    Pop(); // DROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea42: WORD 'WEA44' codep=0x224c parp=0xea44
// ================================================

void WEA44() // WEA44
{
  Push(Read16(pp_COLOR)); // COLOR @
  Push(Read16(pp_WTOP)); // WTOP @
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WBOTTOM)); // WBOTTOM @
  Push(Read16(pp_WRIGHT) + 1); // WRIGHT @ 1+
  GetColor(BLACK);
  POLY_dash_WI(); // POLY-WI
  Push(0);
  Push(0);
  WE9DA(); // WE9DA
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xea68: WORD 'WEA6A' codep=0x224c parp=0xea6a
// ================================================

void WEA6A() // WEA6A
{
  unsigned short int i, imax;
  Push(0x2001);
  PAD(); // PAD
  _st__ex__gt_(); // <!>
  Push(Read16(pp_LINE_dash_CO)); // LINE-CO @
  Push(Read16(pp_WLINES)); // WLINES @
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + Pop()); // +
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    PAD(); // PAD
    WLINE_dash_U(); // WLINE-U
    i++;
  } while(i<imax); // (LOOP)

  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
}


// ================================================
// 0xea92: WORD 'WEA94' codep=0x224c parp=0xea94 params=0 returns=0
// ================================================

void WEA94() // WEA94
{
  unsigned short int i, imax;
  Push(2);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push((Read16(pp_WLEFT) - 2) + i); // WLEFT @ 2- I +
    Push(Read16(pp_WBOTTOM)); // WBOTTOM @
    OVER(); // OVER
    Push(Read16(pp_WTOP) + 2); // WTOP @ 2+
    LLINE(); // LLINE
    Push((Read16(pp_WRIGHT) + 2) + i); // WRIGHT @ 2+ I +
    Push(Read16(pp_WBOTTOM)); // WBOTTOM @
    OVER(); // OVER
    Push(Read16(pp_WTOP) + 2); // WTOP @ 2+
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_WLEFT) - 2); // WLEFT @ 2-
  Push(Read16(pp_WTOP) + 2); // WTOP @ 2+
  Push(Read16(pp_WRIGHT) + 3); // WRIGHT @ 3+
  OVER(); // OVER
  LLINE(); // LLINE
  Push(Read16(pp_WLEFT) - 2); // WLEFT @ 2-
  Push(Read16(pp_WTOP) + 1); // WTOP @ 1+
  Push(Read16(pp_WRIGHT) + 3); // WRIGHT @ 3+
  OVER(); // OVER
  LLINE(); // LLINE
  Push(Read16(pp_WLEFT) - 2); // WLEFT @ 2-
  Push(Read16(pp_WBOTTOM) - 1); // WBOTTOM @ 1-
  Push(Read16(pp_WRIGHT) + 3); // WRIGHT @ 3+
  OVER(); // OVER
  LLINE(); // LLINE
}


// ================================================
// 0xeb12: WORD 'WEB14' codep=0x224c parp=0xeb14
// ================================================

void WEB14() // WEB14
{
  WE936(); // WE936
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(-1);
  WE9DA(); // WE9DA
  GetColor(BLACK);
  WE896(); // WE896
  WE852(); // WE852
}


// ================================================
// 0xeb28: WORD 'WEB2A' codep=0x224c parp=0xeb2a
// ================================================

void WEB2A() // WEB2A
{
  WE920(); // WE920
  WEA44(); // WEA44
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  WEA94(); // WEA94
  _gt_2FONT(); // >2FONT
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(0);
  WE9DA(); // WE9DA
  PRINT("STATUS", 6); // (.")
  _gt_1FONT(); // >1FONT
  Push(0);
  Push(2);
  WE9DA(); // WE9DA
  PRINT("DATE  : ", 8); // (.")
  Push(0);
  Push(3);
  WE9DA(); // WE9DA
  PRINT("ENERGY: ", 8); // (.")
  Push(0);
  Push(4);
  WE9DA(); // WE9DA
  PRINT("EFF.  : ", 8); // (.")
  Push(0);
  Push(5);
  WE9DA(); // WE9DA
  PRINT("CARGO : ", 8); // (.")
  Push(0);
  Push(6);
  WE9DA(); // WE9DA
  PRINT("SHIP  : ", 8); // (.")
}


// ================================================
// 0xeba2: WORD 'WEBA4' codep=0x224c parp=0xeba4
// ================================================

void WEBA4() // WEBA4
{
  WE94A(); // WE94A
  WEA44(); // WEA44
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  WEA94(); // WEA94
  WE86E(); // WE86E
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(-3);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  Push(0);
  Push(0);
  WE9DA(); // WE9DA
  _gt_1FONT(); // >1FONT
  PRINT("MAPS MOVE CARGO ", 16); // (.")
  Push(2);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("DESCRIBE ", 9); // (.")
  Push(2);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("WEAPON ICONS ", 13); // (.")
}


// ================================================
// 0xec01: WORD 'WEC03' codep=0x224c parp=0xec03
// ================================================

void WEC03() // WEC03
{
  WE8F2(); // WE8F2
  WEA44(); // WEA44
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  WEA94(); // WEA94
  _gt_2FONT(); // >2FONT
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0);
  Push(0);
  WE9DA(); // WE9DA
  PRINT("CREW VITALITY", 13); // (.")
}


// ================================================
// 0xec2b: WORD 'WEC2D' codep=0x224c parp=0xec2d
// ================================================

void WEC2D() // WEC2D
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  Push(-3);
  Push(pp_WRIGHT); // WRIGHT
  _plus__ex__2(); // +!_2
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  WEA94(); // WEA94
  Push(3);
  Push(pp_WRIGHT); // WRIGHT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xec47: WORD 'WEC49' codep=0x224c parp=0xec49
// ================================================

void WEC49() // WEC49
{
  _gt_DISPLA(); // >DISPLA
  _gt_1FONT(); // >1FONT
  Push(0);
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR
  SFILL(); // SFILL
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  GetColor(BLACK);
  VIEWSCR(); // VIEWSCR
  WEB14(); // WEB14
  WEB2A(); // WEB2A
  WEC03(); // WEC03
  WEBA4(); // WEBA4
  WEC2D(); // WEC2D
  _gt_TVCT(); // >TVCT
  CTINIT(); // CTINIT
}


// ================================================
// 0xec71: WORD 'WEC73' codep=0x224c parp=0xec73
// ================================================
// orphan

void WEC73() // WEC73
{
  WE908(); // WE908
  WEA6A(); // WEA6A
}


// ================================================
// 0xec79: WORD 'WEC7B' codep=0x224c parp=0xec7b
// ================================================

void WEC7B() // WEC7B
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LKEYTIM); // LKEYTIM
  _2_ex__2(); // 2!_2
  do
  {
    Push(Read16(regsp)); // DUP
    Push(0);
    Push(pp_LKEYTIM); // LKEYTIM
    _2_at_(); // 2@
    D_plus_(); // D+
    TIME(); // TIME
    _2_at_(); // 2@
    D_st_(); // D<
    _i_KEY(); // 'KEY
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Pop(); // DROP
}


// ================================================
// 0xec9f: WORD 'WECA1' codep=0x224c parp=0xeca1
// ================================================

void WECA1() // WECA1
{
  IsLAST(); // ?LAST
  GetINST_dash_C(); // @INST-C
  DISPOSAL(); // DISPOSAL case
  Push(Pop()==Read16(cc_FALSE)?1:0); //  FALSE =
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xecaf: WORD 'FUNCTIONS' codep=0x1d29 parp=0xecbd
// ================================================
// 0xecbd: db 0x05 0x0c 0x03 0x0c 0x13 0x0c 0x17 0x0c 0x13 0x0c 0x2b 0x0c 0x17 0x0c 0x43 0x0c 0x27 0x0c 0x6b 0x0c 0x1b 0x0c 0x87 0x0c 0x16 '          +   C ' k      '

// ================================================
// 0xecd6: WORD 'WECD8' codep=0x224c parp=0xecd8
// ================================================

void WECD8() // WECD8
{
  GetINST_dash_C(); // @INST-C
  DISPOSAL(); // DISPOSAL case
  if (Pop() != 0)
  {
    _dash_ICON(); // -ICON
    IDELETE(); // IDELETE
    return;
  }
  INEXT(); // INEXT
}


// ================================================
// 0xecec: WORD 'WECEE' codep=0x224c parp=0xecee params=1 returns=0
// ================================================

void WECEE() // WECEE
{
  if (Pop() == 0) return;
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
  Push(1);
  Push(pp__n_SHOTS); // #SHOTS
  _plus__ex__2(); // +!_2
  Push(Read16(pp__n_SHOTS)); // #SHOTS @
  Push(4);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(9);
  } else
  {
    Push(0x000a);
    GetINST_dash_S(); // @INST-S
    Push(0xc032); // 'T>O'
    MODULE(); // MODULE
    if (Pop() != 0)
    {
      Push(0x0064);
      Push(0xbf4a); // 'OV+!EDL'
      MODULE(); // MODULE
    }
  }
  Push(0xe753); // 'WE753'
  IFLD_at_(); // IFLD@
  MAX(); // MAX
  Push(0xe753); // 'WE753'
  IFLD_ex_(); // IFLD!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed3a: WORD 'WED3C' codep=0x224c parp=0xed3c params=0 returns=1
// ================================================

void WED3C() // WED3C
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+WE73F.offset)); // WE73F<IFIELD> @
  ICLOSE(); // ICLOSE
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xed4a: WORD 'WED4C' codep=0x1d29 parp=0xed4c
// ================================================
// 0xed4c: db 0x56 0x3a 0x20 0x0f 0x05 0x41 'V:   A'

// ================================================
// 0xed52: WORD 'WED54' codep=0x224c parp=0xed54 params=0 returns=1
// ================================================

void WED54() // WED54
{
  Push(Read16(0x65e1+INST_dash_X.offset) - Read16(pp_XABS)); // INST-X<IFIELD> @ XABS @ -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  Push(Read16(0x65e1+INST_dash_Y.offset) - Read16(pp_YABS)); // INST-Y<IFIELD> @ YABS @ -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xed7a: WORD 'WED7C' codep=0x224c parp=0xed7c
// ================================================

void WED7C() // WED7C
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(pp_WED4C); // WED4C
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  do
  {
    WECD8(); // WECD8
    IsNULL(); // ?NULL
    WECA1(); // WECA1
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  IsNULL(); // ?NULL
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xeda6: WORD 'WEDA8' codep=0x224c parp=0xeda8 params=0 returns=0
// ================================================

void WEDA8() // WEDA8
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp_WED4C); // WED4C
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0);
  Push(pp_WED4C + 4); // WED4C 4 +
  _st__ex__gt_(); // <!>
  Push(0x000b);
  Push(0x000b);
  while(1)
  {
    Push(pp_SUPER_dash_B); // SUPER-B
    _1_dot_5_at_(); // 1.5@
    CI(); // CI
    D_eq_(); // D=
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    IsCLASS_slash_(); // ?CLASS/
    if (Pop() != 0)
    {
      WED54(); // WED54
      Push(Read16(pp_WED4C + 4)); // WED4C 4 + @
      OVER(); // OVER
      _st_(); // <
      IOPEN(); // IOPEN
      ILAST(); // ILAST
      WECA1(); // WECA1
      Push(!Pop()); //  NOT
      Push(Pop() & Pop()); // AND
      ICLOSE(); // ICLOSE
      if (Pop() != 0)
      {
        CI(); // CI
        Push(pp_WED4C); // WED4C
        _1_dot_5_ex__2(); // 1.5!_2
        Push(pp_WED4C + 4); // WED4C 4 +
        _st__ex__gt_(); // <!>
      } else
      {
        Pop(); // DROP
      }
    }
    INEXT(); // INEXT
  }
  Pop(); Pop(); // 2DROP
  Push(2);
  _star_CLOSE(); // *CLOSE
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xee1c: WORD 'HEAVEHO' codep=0x224c parp=0xee28
// ================================================
// entry

void HEAVEHO() // HEAVEHO
{
  Push(pp_IsCRITIC); // ?CRITIC
  ON_2(); // ON_2
  WEDA8(); // WEDA8
  WED7C(); // WED7C
}


// ================================================
// 0xee32: WORD 'WEE34' codep=0x2214 parp=0xee34
// ================================================
// 0xee34: dw 0x7fff

// ================================================
// 0xee36: WORD 'WEE38' codep=0x224c parp=0xee38 params=0 returns=0
// ================================================

void WEE38() // WEE38
{
  Push(pp_TVEHICL); // TVEHICL
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(pp_XABS)); // XABS @
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
  Push(Read16(pp_YABS)); // YABS @
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
  Push(Read16(cc_WEE34)); // WEE34
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  Push(0x01f4);
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee64: WORD 'TV-SETUP' codep=0x224c parp=0xee71
// ================================================
// entry

void TV_dash_SETUP() // TV-SETUP
{
  WEC49(); // WEC49
  GetColor(DK_dash_BLUE);
  Push(pp_CRSCOLO); // CRSCOLO
  Store_2(); // !_2
  Push(pp_FUNCTIONS); // FUNCTIONS
  BLD_dash_CRS(); // BLD-CRS
}


// ================================================
// 0xee7f: WORD 'WEE81' codep=0x224c parp=0xee81 params=1 returns=0
// ================================================

void WEE81() // WEE81
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WE744.offset); // WE744<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee8d: WORD 'WEE8F' codep=0x224c parp=0xee8f params=0 returns=0
// ================================================

void WEE8F() // WEE8F
{
  IsNULL(); // ?NULL
  if (Pop() == 0) return;
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  Push2Words("0.");
  _gt_C(); // >C
}


// ================================================
// 0xee9f: WORD 'WEEA1' codep=0x224c parp=0xeea1
// ================================================

void WEEA1() // WEEA1
{
  unsigned short int a;
  LoadData(ART_dash_VOL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  IEXTRAC(); // IEXTRAC
  WEE8F(); // WEE8F
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  _gt_BOX(); // >BOX
  Push(Read16(a)); // R@
  Push(0x65e1+WE73F.offset); // WE73F<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
  Push(-a); // R> NEGATE
  WEE81(); // WEE81
}


// ================================================
// 0xeec7: WORD 'WEEC9' codep=0x224c parp=0xeec9 params=1 returns=0
// ================================================

void WEEC9() // WEEC9
{
  Push(Read16(regsp)); // DUP
  Push(0xb76b); // 'OV?ART'
  MODULE(); // MODULE
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001c);
    SWAP(); // SWAP
    IFIND(); // IFIND
    Pop(); // DROP
    WEEA1(); // WEEA1
    ICLOSE(); // ICLOSE
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xeeed: WORD 'WEEEF' codep=0x224c parp=0xeeef
// ================================================

void WEEEF() // WEEEF
{
  Push(0x002a);
  Push(0xb76b); // 'OV?ART'
  MODULE(); // MODULE
  Push(0x002a);
  Push(0xb78d); // 'TV?ART'
  MODULE(); // MODULE
  Push(Pop() | Pop()); // OR
  Push(pp_IsFLAT); // ?FLAT
  _st__ex__gt_(); // <!>
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    Push(0x002a);
    WEEC9(); // WEEC9
    Push(0x0034);
    WEEC9(); // WEEC9
    Push(0x000b);
    WEEC9(); // WEEC9
    Push(0x000c);
    WEEC9(); // WEEC9
    Push(0x000e);
    WEEC9(); // WEEC9
  }
  Push(0xb6ec); // '=CARGO'
  MODULE(); // MODULE
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xef47: WORD 'WEF49' codep=0x224c parp=0xef49
// ================================================

void WEF49() // WEF49
{
  Push(pp_TVEHICL); // TVEHICL
  Get_gt_C_plus_S(); // @>C+S
  WEE38(); // WEE38
  Push(0xba55); // 'ICON-'
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  IEXTRAC(); // IEXTRAC
  Push(pp_SUPER_dash_B); // SUPER-B
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  CI(); // CI
  _gt_INSERT(); // >INSERT
  Push(4);
  _star_CLOSE(); // *CLOSE
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(pp_XABS)); // XABS @
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
  Push(Read16(pp_YABS) + 1); // YABS @ 1+
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
  Push(0xba55); // 'ICON-'
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
  ICLOSE(); // ICLOSE
  WEEEF(); // WEEEF
}


// ================================================
// 0xef95: WORD 'WEF97' codep=0x224c parp=0xef97 params=0 returns=0
// ================================================

void WEF97() // WEF97
{
  Push(pp_SUPER_dash_B); // SUPER-B
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  IEXTRAC(); // IEXTRAC
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(pp_TVEHICL); // TVEHICL
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  INIT_dash_IC(); // INIT-IC
}


// ================================================
// 0xefb3: WORD 'WEFB5' codep=0x224c parp=0xefb5 params=0 returns=0
// ================================================

void WEFB5() // WEFB5
{
  Push(Read16(pp_IsTV)); // ?TV @
  if (Pop() == 0) return;
  GCR(); // GCR
  PRINT("REFUELING TERRAIN VEHICLE ", 26); // (.")
  GCR(); // GCR
  WED3C(); // WED3C
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  WEA18(); // WEA18
  ICLOSE(); // ICLOSE
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  PRINT("AND TRANSFERRING ALL CARGO", 26); // (.")
}


// ================================================
// 0xf00d: WORD 'WF00F' codep=0x224c parp=0xf00f
// ================================================

void WF00F() // WF00F
{
  IOPEN(); // IOPEN
  while(1)
  {
    IsNULL(); // ?NULL
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    IEXTRAC(); // IEXTRAC
    Push2Words("*STARSH");
    _gt_C_plus_S(); // >C+S
    IOPEN(); // IOPEN
    CDROP(); // CDROP
    _gt_BOX(); // >BOX
    ICLOSE(); // ICLOSE
  }
  ICLOSE(); // ICLOSE
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001a);
    Push(6);
    IFIND(); // IFIND
    Push(Pop() * Read16(0x65e1+INST_dash_QT.offset)); //  INST-QT<IFIELD> @ *
    Push(0x000a);
    U_star_(); // U*
    CDROP(); // CDROP
  } else
  {
    Push2Words("NULL");
  }
  Push(pp__10_star_END); // 10*END
  StoreD(); // D!
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf069: WORD 'WF06B' codep=0x224c parp=0xf06b params=0 returns=0
// ================================================

void WF06B() // WF06B
{
  while(1)
  {
    IsNULL(); // ?NULL
    Push(!Pop()); //  NOT
    if (Pop() == 0) return;
    WF00F(); // WF00F
    IDELETE(); // IDELETE
  }
}


// ================================================
// 0xf07d: WORD 'WF07F' codep=0x224c parp=0xf07f
// ================================================

void WF07F() // WF07F
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  Push(-2);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  CTINIT(); // CTINIT
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  WEFB5(); // WEFB5
  WEA18(); // WEA18
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    WF06B(); // WF06B
    ICLOSE(); // ICLOSE
    Push(0);
    Push(0x65e1+WE73F.offset); // WE73F<IFIELD>
    Store_2(); // !_2
  } else
  {
    Push(Read16(pp_IsTV)); // ?TV @
    WED3C(); // WED3C
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      GCR(); // GCR
      PRINT("NOT ENOUGH ROOM IN SHIP'S HOLD", 30); // (.")
      GCR(); // GCR
      PRINT("ITEMS WILL STAY IN TERRAIN VEHICLE", 34); // (.")
      GCR(); // GCR
      Push(0x1194);
      WEC7B(); // WEC7B
    }
  }
  Push(0x05dc);
  MS(); // MS
  ICLOSE(); // ICLOSE
  WEF97(); // WEF97
}


// ================================================
// 0xf111: WORD 'WF113' codep=0x224c parp=0xf113 params=0 returns=0
// ================================================

void WF113() // WF113
{
  WE936(); // WE936
  Push2Words("0.");
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_CONTEXT_3); // CONTEXT_3
  _099(); // 099
  _gt_1ICONF(); // >1ICONF
  Push(pp_MOVED); // MOVED
  _099(); // 099
  Push(0xce24); // '8X8CO'
  Push(pp__i__dot_BACKG); // '.BACKG
  _st__ex__gt_(); // <!>
  Push(8);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  _st__ex__gt_(); // <!>
  Push(1);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP + 2); // XWLD:XP 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP + 2); // YWLD:YP 2+
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf14f: WORD 'WF151' codep=0x224c parp=0xf151
// ================================================

void WF151() // WF151
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  _gt_MAINVI(); // >MAINVI
  DrawBACKGR(); // .BACKGR
  DrawLOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xf161: WORD 'WF163' codep=0x224c parp=0xf163 params=0 returns=0
// ================================================

void WF163() // WF163
{
  Push(Read16(pp_XVIS) + 0x000e); // XVIS @ 0x000e +
  Push(Read16(pp_YVIS) + 0x0016); // YVIS @ 0x0016 +
  Push(Read16(pp_XVIS) + 0x0016); // XVIS @ 0x0016 +
  Push(Read16(pp_YVIS) + 0x0029); // YVIS @ 0x0029 +
  StoreVISWIN(); // !VISWIN
}


// ================================================
// 0xf18f: WORD 'WF191' codep=0x1d29 parp=0xf191
// ================================================
// 0xf191: db 0x00 0x42 0x99 0x99 0x42 0x00 ' B  B '

// ================================================
// 0xf197: WORD 'WF199' codep=0x224c parp=0xf199 params=0 returns=0
// ================================================

void WF199() // WF199
{
  unsigned short int a, b;
  Push(Read16(pp_EYEXY + 2)); // EYEXY 2+ @
  Push(Read16(pp_XVIS)); // XVIS @
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Pop() + 0x0016); //  0x0016 +
  MIN(); // MIN
  Push(a + 0x000e); // R> 0x000e +
  MAX(); // MAX
  Push(pp_EYEXY + 2); // EYEXY 2+
  _st__ex__gt_(); // <!>
  Push(Read16(pp_EYEXY)); // EYEXY @
  Push(Read16(pp_YVIS)); // YVIS @
  Push(Read16(regsp)); // DUP
  b = Pop(); // >R
  Push(Pop() + 0x0024); //  0x0024 +
  MIN(); // MIN
  Push(b + 0x0016); // R> 0x0016 +
  MAX(); // MAX
  Push(pp_EYEXY); // EYEXY
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf1e3: WORD 'WF1E5' codep=0x224c parp=0xf1e5
// ================================================

void WF1E5() // WF1E5
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(6);
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(8);
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  Push(pp_WF191); // WF191
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  WE9FA(); // WE9FA
  _2DUP(); // 2DUP
  Push(pp_EYEXY); // EYEXY
  _st_D_ex__gt_(); // <D!>
  WLD_gt_SCR(); // WLD>SCR
  Push(Pop() + 0x004e); //  0x004e +
  Push(pp_YBLT); // YBLT
  _st__ex__gt_(); // <!>
  Push(Pop() + 4); //  4 +
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf219: WORD 'WF21B' codep=0x224c parp=0xf21b
// ================================================

void WF21B() // WF21B
{
  unsigned short int i, imax;
  Push(0x000b);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    BLT(); // BLT
    Push(0x0032);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf231: WORD 'WF233' codep=0x224c parp=0xf233
// ================================================

void WF233() // WF233
{
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _st__ex__gt_(); // <!>
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  WF1E5(); // WF1E5
  WF21B(); // WF21B
  do
  {
    XYSCAN(); // XYSCAN
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      CLICK(); // CLICK
      BLT(); // BLT
      Push(pp_EYEXY + 2); // EYEXY 2+
      _st__plus__ex__gt_(); // <+!>
      Push(pp_EYEXY); // EYEXY
      _st__plus__ex__gt_(); // <+!>
      WF199(); // WF199
      Push(pp_EYEXY); // EYEXY
      _2_at_(); // 2@
      WLD_gt_SCR(); // WLD>SCR
      Push(Pop() + 0x004e); //  0x004e +
      Push(pp_YBLT); // YBLT
      _st__ex__gt_(); // <!>
      Push(Pop() + 4); //  4 +
      Push(pp_XBLT); // XBLT
      _st__ex__gt_(); // <!>
      BLT(); // BLT
    } else
    {
      Pop(); Pop(); // 2DROP
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
}


// ================================================
// 0xf28b: WORD 'WALK&TALK' codep=0x224c parp=0xf299
// ================================================
// entry

void WALK_and_TALK() // WALK&TALK
{
  WF233(); // WF233
  GetCRS(); // @CRS
  WE908(); // WE908
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash__2(); // ?ICONS-_2
  WEA6A(); // WEA6A
  Push(0xbe25); // 'DO-LO'
  MODULE(); // MODULE
  StoreCRS(); // !CRS
  BLT(); // BLT
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
}


// ================================================
// 0xf2bb: WORD 'WF2BD' codep=0x224c parp=0xf2bd
// ================================================

void WF2BD() // WF2BD
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  Push(0);
  Push(0);
  WE9DA(); // WE9DA
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(pp_WEAPXY); // WEAPXY
  _2_at_(); // 2@
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  D_eq_(); // D=
  if (Pop() != 0)
  {
    PRINT("HIT!", 4); // (.")
  } else
  {
    PRINT("MISSED!", 7); // (.")
  }
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xf2f6: WORD 'WF2F8' codep=0x224c parp=0xf2f8
// ================================================

void WF2F8() // WF2F8
{
  unsigned short int a;
  Push(Read16(pp_COLOR)); // COLOR @
  a = Pop(); // >R
  StoreCOLOR(); // !COLOR
  _gt_MAINVI(); // >MAINVI
  WE9FA(); // WE9FA
  WLD_gt_SCR(); // WLD>SCR
  Push(Pop() + 2); //  2+
  SWAP(); // SWAP
  Push(Pop() + 2); //  2+
  SWAP(); // SWAP
  Push(pp_WEAPXY); // WEAPXY
  _2_at_(); // 2@
  WLD_gt_SCR(); // WLD>SCR
  _1PIX(); // 1PIX
  LLINE(); // LLINE
  _2PIX(); // 2PIX
  Push(a); // R>
  StoreCOLOR(); // !COLOR
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  WE6EA(); // WE6EA
}


// ================================================
// 0xf326: WORD 'WF328' codep=0x224c parp=0xf328
// ================================================

void WF328() // WF328
{
  if (Pop() != 0)
  {
    GetColor(RED);
  } else
  {
    GetColor(DK_dash_BLUE);
  }
  WF2F8(); // WF2F8
}


// ================================================
// 0xf338: WORD 'WF33A' codep=0x224c parp=0xf33a params=0 returns=0
// ================================================

void WF33A() // WF33A
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  _st_D_ex__gt_(); // <D!>
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xf348: WORD 'TV-DISP' codep=0x224c parp=0xf354
// ================================================
// entry

void TV_dash_DISP() // TV-DISP
{
  DCLIPSE(); // DCLIPSE
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  SET_STR_AS_PARAM("ACTIVATING TERRAIN VEHICLE");
  DrawTTY(); // .TTY
  Push2Words("0.");
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp_IsNEW); // ?NEW
  ON_2(); // ON_2
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
  Push2Words("0.");
  Push(pp_NCRS); // NCRS
  _st__ex__gt_(); // <!>
  Push(pp_OCRS); // OCRS
  _st__ex__gt_(); // <!>
  INIT_dash_IC(); // INIT-IC
  Push(0x0014);
  Push(pp_LOCRADI); // LOCRADI
  _st__ex__gt_(); // <!>
  WF163(); // WF163
  WF113(); // WF113
  Push2Words("0.");
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0xd081); // '?POP'
  MODULE(); // MODULE
  WEF49(); // WEF49
  WF33A(); // WF33A
  TV_dash_SETUP(); // TV-SETUP
  WF151(); // WF151
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0x0064);
  Push(pp__pe_VAL); // %VAL
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf3c5: WORD 'TV-CLEANU' codep=0x224c parp=0xf3d3
// ================================================
// entry

void TV_dash_CLEANU() // TV-CLEANU
{
  WF07F(); // WF07F
}


// ================================================
// 0xf3d7: WORD 'WF3D9' codep=0x1d29 parp=0xf3d9
// ================================================
// 0xf3d9: db 0x3a 0x20 ': '

// ================================================
// 0xf3db: WORD 'WF3DD' codep=0x224c parp=0xf3dd params=1 returns=1
// ================================================

void WF3DD() // WF3DD
{
  Push(1);
  Push(0);
  Push(2);
  RRND(); // RRND
  if (Pop() != 0)
  {
    Push(Pop() + Pop()); // +
    return;
  }
  _dash_(); // -
}


// ================================================
// 0xf3f3: WORD 'WF3F5' codep=0x224c parp=0xf3f5 params=0 returns=1
// ================================================

void WF3F5() // WF3F5
{
  WE8C8(); // WE8C8
  Push(0x000a);
  _slash_(); // /
  Push(0);
  Push(0x001b);
  RRND(); // RRND
  _st_(); // <
  Push(pp_WF3D9); // WF3D9
  Store_2(); // !_2
}


// ================================================
// 0xf40d: WORD 'WF40F' codep=0x224c parp=0xf40f params=0 returns=0
// ================================================

void WF40F() // WF40F
{
  Push(Read16(pp_WF3D9)); // WF3D9 @
  if (Pop() == 0) return;
  WF3DD(); // WF3DD
  SWAP(); // SWAP
  WF3DD(); // WF3DD
  SWAP(); // SWAP
}


// ================================================
// 0xf421: WORD 'WF423' codep=0x224c parp=0xf423
// ================================================

void WF423() // WF423
{
  Push2Words("*SHIP");
  IsICON_eq_I(); // ?ICON=I
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(0);
  }
  Push(Read16(pp_ILOCAL) - 1); // ILOCAL @ 1-
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0);
  } else
  {
    Push(-1);
  }
  Push(Pop() + (Read16(pp_ILOCAL) - 1)); //  ILOCAL @ 1- +
  Push(pp_WEAPON_dash_); // WEAPON-
  _st__plus__ex__gt_(); // <+!>
  _gt_TVCT(); // >TVCT
  CTINIT(); // CTINIT
  Push(1);
  Push(0);
  WE9DA(); // WE9DA
  PRINT("AIM, THEN FIRE", 14); // (.")
}


// ================================================
// 0xf46c: WORD 'WF46E' codep=0x1d29 parp=0xf46e
// ================================================
// 0xf46e: db 0x3a 0x20 ': '

// ================================================
// 0xf470: WORD 'WF472' codep=0x224c parp=0xf472
// ================================================

void WF472() // WF472
{
  unsigned short int a, i, imax;
  Push(pp_WF46E); // WF46E
  _099(); // 099
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash__2(); // ?ICONS-_2
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(pp_IINDEX)); // IINDEX @
    a = Pop(); // >R
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      POINT_gt_I(); // POINT>I
      GetID(); // @ID
      Push(Read16(regsp)); // DUP
      Push(0x002f);
      Push(0x0031);
      WITHIN(); // WITHIN
      SWAP(); // SWAP
      Push(0x005b);
      Push(0x005f);
      WITHIN(); // WITHIN
      Push(Pop() | Pop()); // OR
      Push(Read16(regsp)); // DUP
      Push(Pop()==0?1:0); //  0=
      if (Pop() != 0)
      {
        GetIL(); // @IL
        GetIH(); // @IH
        _gt_C_plus_S(); // >C+S
        GetINST_dash_C(); // @INST-C
        Push((Pop()==0x0044?1:0) & !Read16(pp_WF3D9)); //  0x0044 = WF3D9 @ NOT AND
        if (Pop() != 0)
        {
          WE824(); // WE824
        }
        ICLOSE(); // ICLOSE
      }
      Push(Read16(pp_WF46E)); // WF46E @
      MAX(); // MAX
      Push(pp_WF46E); // WF46E
      Store_2(); // !_2
      i++;
    } while(i<imax); // (LOOP)

    Push(a); // R>
    POINT_gt_I(); // POINT>I
    Push(Read16(pp_WF46E)); // WF46E @
    return;
  }
  Push(-1);
}


// ================================================
// 0xf4f2: WORD 'DO.WEAPON' codep=0x224c parp=0xf500
// ================================================
// entry

void DO_dot_WEAPON() // DO.WEAPON
{
  unsigned short int a;
  CTERASE(); // CTERASE
  WF423(); // WF423
  WF3F5(); // WF3F5
  WF233(); // WF233
  WF472(); // WF472
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(pp_TVEHICL); // TVEHICL
    Get_gt_C_plus_S(); // @>C+S
    Push(Read16(regsp)); // DUP
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    Push(Read16(a)); // R@
    Push(0x65e1+WE73A.offset); // WE73A<IFIELD>
    C_ex__2(); // C!_2
    Push((Pop() + 1) * 0xfed4); //  1+ 0xfed4 *
    Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
    _plus__ex__2(); // +!_2
    ICLOSE(); // ICLOSE
    Push(pp_EYEXY); // EYEXY
    _2_at_(); // 2@
    WF40F(); // WF40F
    Push(pp_WEAPXY); // WEAPXY
    _st_D_ex__gt_(); // <D!>
    WF328(); // WF328
    WF2BD(); // WF2BD
    Push(a); // R>
    WECEE(); // WECEE
  } else
  {
    Pop(); // DROP
  }
  WF33A(); // WF33A
  WF151(); // WF151
  CTERASE(); // CTERASE
}

// 0xf552: db 0x54 0x2e 0x56 0x2e 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'T.V.__________ '

