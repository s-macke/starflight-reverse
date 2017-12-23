// ====== OVERLAY 'TV-OV' ======
// store offset = 0xe6d0
// overlay size   = 0x0e90

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe6e6  codep:0x2214 parp:0xe6e6 size:0x0002 C-string:'UNK_0xe6e6'
//      UNK_0xe6ea  codep:0x224c parp:0xe6ea size:0x004e C-string:'UNK_0xe6ea'
//      UNK_0xe73a  codep:0x7420 parp:0xe73a size:0x0003 C-string:'UNK_0xe73a'
//      UNK_0xe73f  codep:0x7420 parp:0xe73f size:0x0003 C-string:'UNK_0xe73f'
//      UNK_0xe744  codep:0x7420 parp:0xe744 size:0x0003 C-string:'UNK_0xe744'
//      UNK_0xe749  codep:0x7420 parp:0xe749 size:0x0003 C-string:'UNK_0xe749'
//      UNK_0xe74e  codep:0x7420 parp:0xe74e size:0x0010 C-string:'UNK_0xe74e'
//      UNK_0xe760  codep:0x7394 parp:0xe760 size:0x0006 C-string:'UNK_0xe760'
//      UNK_0xe768  codep:0x7420 parp:0xe768 size:0x0003 C-string:'UNK_0xe768'
//      UNK_0xe76d  codep:0x224c parp:0xe76d size:0x000a C-string:'UNK_0xe76d'
//      UNK_0xe779  codep:0x224c parp:0xe779 size:0x0036 C-string:'UNK_0xe779'
//        DISPOSAL  codep:0x4b3b parp:0xe7bc size:0x0024 C-string:'DISPOSAL'
//      UNK_0xe7e2  codep:0x224c parp:0xe7e2 size:0x0018 C-string:'UNK_0xe7e2'
//      UNK_0xe7fc  codep:0x224c parp:0xe7fc size:0x000c C-string:'UNK_0xe7fc'
//      UNK_0xe80a  codep:0x224c parp:0xe80a size:0x0018 C-string:'UNK_0xe80a'
//      UNK_0xe824  codep:0x224c parp:0xe824 size:0x002c C-string:'UNK_0xe824'
//      UNK_0xe852  codep:0x224c parp:0xe852 size:0x0008 C-string:'UNK_0xe852'
//      UNK_0xe85c  codep:0x224c parp:0xe85c size:0x0010 C-string:'UNK_0xe85c'
//      UNK_0xe86e  codep:0x224c parp:0xe86e size:0x0026 C-string:'UNK_0xe86e'
//      UNK_0xe896  codep:0x224c parp:0xe896 size:0x0030 C-string:'UNK_0xe896'
//      UNK_0xe8c8  codep:0x224c parp:0xe8c8 size:0x001e C-string:'UNK_0xe8c8'
//      UNK_0xe8e8  codep:0x224c parp:0xe8e8 size:0x0008 C-string:'UNK_0xe8e8'
//      UNK_0xe8f2  codep:0x224c parp:0xe8f2 size:0x0014 C-string:'UNK_0xe8f2'
//      UNK_0xe908  codep:0x224c parp:0xe908 size:0x0016 C-string:'UNK_0xe908'
//      UNK_0xe920  codep:0x224c parp:0xe920 size:0x0014 C-string:'UNK_0xe920'
//      UNK_0xe936  codep:0x224c parp:0xe936 size:0x0012 C-string:'UNK_0xe936'
//      UNK_0xe94a  codep:0x224c parp:0xe94a size:0x008e C-string:'UNK_0xe94a'
//      UNK_0xe9da  codep:0x224c parp:0xe9da size:0x001e C-string:'UNK_0xe9da'
//      UNK_0xe9fa  codep:0x224c parp:0xe9fa size:0x001c C-string:'UNK_0xe9fa'
//      UNK_0xea18  codep:0x224c parp:0xea18 size:0x002a C-string:'UNK_0xea18'
//      UNK_0xea44  codep:0x224c parp:0xea44 size:0x0024 C-string:'UNK_0xea44'
//      UNK_0xea6a  codep:0x224c parp:0xea6a size:0x0028 C-string:'UNK_0xea6a'
//      UNK_0xea94  codep:0x224c parp:0xea94 size:0x007e C-string:'UNK_0xea94'
//      UNK_0xeb14  codep:0x224c parp:0xeb14 size:0x0014 C-string:'UNK_0xeb14'
//      UNK_0xeb2a  codep:0x224c parp:0xeb2a size:0x0078 C-string:'UNK_0xeb2a'
//      UNK_0xeba4  codep:0x224c parp:0xeba4 size:0x005d C-string:'UNK_0xeba4'
//      UNK_0xec03  codep:0x224c parp:0xec03 size:0x0028 C-string:'UNK_0xec03'
//      UNK_0xec2d  codep:0x224c parp:0xec2d size:0x001a C-string:'UNK_0xec2d'
//      UNK_0xec49  codep:0x224c parp:0xec49 size:0x0030 C-string:'UNK_0xec49'
//      UNK_0xec7b  codep:0x224c parp:0xec7b size:0x0024 C-string:'UNK_0xec7b'
//      UNK_0xeca1  codep:0x224c parp:0xeca1 size:0x000e C-string:'UNK_0xeca1'
//       FUNCTIONS  codep:0x1d29 parp:0xecbd size:0x0019 C-string:'FUNCTIONS'
//      UNK_0xecd8  codep:0x224c parp:0xecd8 size:0x0014 C-string:'UNK_0xecd8'
//      UNK_0xecee  codep:0x224c parp:0xecee size:0x004c C-string:'UNK_0xecee'
//      UNK_0xed3c  codep:0x224c parp:0xed3c size:0x000e C-string:'UNK_0xed3c'
//      UNK_0xed4c  codep:0x1d29 parp:0xed4c size:0x0006 C-string:'UNK_0xed4c'
//      UNK_0xed54  codep:0x224c parp:0xed54 size:0x0026 C-string:'UNK_0xed54'
//      UNK_0xed7c  codep:0x224c parp:0xed7c size:0x002a C-string:'UNK_0xed7c'
//      UNK_0xeda8  codep:0x224c parp:0xeda8 size:0x0074 C-string:'UNK_0xeda8'
//         HEAVEHO  codep:0x224c parp:0xee28 size:0x000a C-string:'HEAVEHO'
//      UNK_0xee34  codep:0x2214 parp:0xee34 size:0x0002 C-string:'UNK_0xee34'
//      UNK_0xee38  codep:0x224c parp:0xee38 size:0x002c C-string:'UNK_0xee38'
//        TV-SETUP  codep:0x224c parp:0xee71 size:0x000e C-string:'TV_dash_SETUP'
//      UNK_0xee81  codep:0x224c parp:0xee81 size:0x000c C-string:'UNK_0xee81'
//      UNK_0xee8f  codep:0x224c parp:0xee8f size:0x0010 C-string:'UNK_0xee8f'
//      UNK_0xeea1  codep:0x224c parp:0xeea1 size:0x0026 C-string:'UNK_0xeea1'
//      UNK_0xeec9  codep:0x224c parp:0xeec9 size:0x0024 C-string:'UNK_0xeec9'
//      UNK_0xeeef  codep:0x224c parp:0xeeef size:0x0058 C-string:'UNK_0xeeef'
//      UNK_0xef49  codep:0x224c parp:0xef49 size:0x004c C-string:'UNK_0xef49'
//      UNK_0xef97  codep:0x224c parp:0xef97 size:0x001c C-string:'UNK_0xef97'
//      UNK_0xefb5  codep:0x224c parp:0xefb5 size:0x0058 C-string:'UNK_0xefb5'
//      UNK_0xf00f  codep:0x224c parp:0xf00f size:0x005a C-string:'UNK_0xf00f'
//      UNK_0xf06b  codep:0x224c parp:0xf06b size:0x0012 C-string:'UNK_0xf06b'
//      UNK_0xf07f  codep:0x224c parp:0xf07f size:0x0092 C-string:'UNK_0xf07f'
//      UNK_0xf113  codep:0x224c parp:0xf113 size:0x003c C-string:'UNK_0xf113'
//      UNK_0xf151  codep:0x224c parp:0xf151 size:0x0010 C-string:'UNK_0xf151'
//      UNK_0xf163  codep:0x224c parp:0xf163 size:0x002c C-string:'UNK_0xf163'
//      UNK_0xf191  codep:0x1d29 parp:0xf191 size:0x0006 C-string:'UNK_0xf191'
//      UNK_0xf199  codep:0x224c parp:0xf199 size:0x004a C-string:'UNK_0xf199'
//      UNK_0xf1e5  codep:0x224c parp:0xf1e5 size:0x0034 C-string:'UNK_0xf1e5'
//      UNK_0xf21b  codep:0x224c parp:0xf21b size:0x0016 C-string:'UNK_0xf21b'
//      UNK_0xf233  codep:0x224c parp:0xf233 size:0x0058 C-string:'UNK_0xf233'
//       WALK&TALK  codep:0x224c parp:0xf299 size:0x0022 C-string:'WALK_and_TALK'
//      UNK_0xf2bd  codep:0x224c parp:0xf2bd size:0x0039 C-string:'UNK_0xf2bd'
//      UNK_0xf2f8  codep:0x224c parp:0xf2f8 size:0x002e C-string:'UNK_0xf2f8'
//      UNK_0xf328  codep:0x224c parp:0xf328 size:0x0010 C-string:'UNK_0xf328'
//      UNK_0xf33a  codep:0x224c parp:0xf33a size:0x000e C-string:'UNK_0xf33a'
//         TV-DISP  codep:0x224c parp:0xf354 size:0x0071 C-string:'TV_dash_DISP'
//       TV-CLEANU  codep:0x224c parp:0xf3d3 size:0x0004 C-string:'TV_dash_CLEANU'
//      UNK_0xf3d9  codep:0x1d29 parp:0xf3d9 size:0x0002 C-string:'UNK_0xf3d9'
//      UNK_0xf3dd  codep:0x224c parp:0xf3dd size:0x0016 C-string:'UNK_0xf3dd'
//      UNK_0xf3f5  codep:0x224c parp:0xf3f5 size:0x0018 C-string:'UNK_0xf3f5'
//      UNK_0xf40f  codep:0x224c parp:0xf40f size:0x0012 C-string:'UNK_0xf40f'
//      UNK_0xf423  codep:0x224c parp:0xf423 size:0x0049 C-string:'UNK_0xf423'
//      UNK_0xf46e  codep:0x1d29 parp:0xf46e size:0x0002 C-string:'UNK_0xf46e'
//      UNK_0xf472  codep:0x224c parp:0xf472 size:0x0080 C-string:'UNK_0xf472'
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

const unsigned short int pp_UNK_0xed4c = 0xed4c; // UNK_0xed4c size: 6
// {0x56, 0x3a, 0x20, 0x0f, 0x05, 0x41}

const unsigned short int pp_UNK_0xf191 = 0xf191; // UNK_0xf191 size: 6
// {0x00, 0x42, 0x99, 0x99, 0x42, 0x00}

const unsigned short int pp_UNK_0xf3d9 = 0xf3d9; // UNK_0xf3d9 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf46e = 0xf46e; // UNK_0xf46e size: 2
// {0x3a, 0x20}


const unsigned short int cc_UNK_0xe6e6 = 0xe6e6; // UNK_0xe6e6
const unsigned short int cc_UNK_0xee34 = 0xee34; // UNK_0xee34


// 0xe6e2: db 0xe9 0x00 '  '

// ================================================
// 0xe6e4: WORD 'UNK_0xe6e6' codep=0x2214 parp=0xe6e6
// ================================================
// 0xe6e6: dw 0x0000

// ================================================
// 0xe6e8: WORD 'UNK_0xe6ea' codep=0x224c parp=0xe6ea
// ================================================

void UNK_0xe6ea() // UNK_0xe6ea
{
  unsigned short int i, imax, j, jmax;
  Push(0x0064);
  Push(0x03e8);
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  SetColor(RED);
  Push((Pop()==Pop())?1:0); // =
  Push(Read16(regsp)); // DUP
  Push(Pop()*2); // 2*
  Push(Pop()-1); // 1-
  Push(0xe6e6); // probable 'UNK_0xe6e6'
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
    Push(i); // I
    Push(Pop()*2); // 2*
    RRND(); // RRND
    TONE(); // TONE
    Push(3);
    Push(Read16(cc_MPS)); // MPS
    Push(Pop() * Pop()); // *
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      NOP(); // NOP
      j++;
    } while(j<jmax); // (LOOP)

    Push(Read16(cc_UNK_0xe6e6)); // UNK_0xe6e6
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  BEEPOFF(); // BEEPOFF
}

// 0xe734: db 0x14 0x22 0x44 0x00 ' "D '

// ================================================
// 0xe738: WORD 'UNK_0xe73a' codep=0x7420 parp=0xe73a
// ================================================
IFieldType UNK_0xe73a = {TVEHICLEIDX, 0x11, 0x01};

// ================================================
// 0xe73d: WORD 'UNK_0xe73f' codep=0x7420 parp=0xe73f
// ================================================
IFieldType UNK_0xe73f = {BOXIDX, 0x11, 0x02};

// ================================================
// 0xe742: WORD 'UNK_0xe744' codep=0x7420 parp=0xe744
// ================================================
IFieldType UNK_0xe744 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xe747: WORD 'UNK_0xe749' codep=0x7420 parp=0xe749
// ================================================
IFieldType UNK_0xe749 = {ASSIGN_CREWIDX, 0x17, 0x03};

// ================================================
// 0xe74c: WORD 'UNK_0xe74e' codep=0x7420 parp=0xe74e
// ================================================
IFieldType UNK_0xe74e = {CREWMEMBERIDX, 0x1b, 0x01};
// 0xe751: db 0x94 0x73 0x15 0x2a 0x01 0x32 0xd1 0x6a 0x20 0x74 0x44 0x17 0x01 ' s * 2 j tD  '

// ================================================
// 0xe75e: WORD 'UNK_0xe760' codep=0x7394 parp=0xe760
// ================================================
LoadDataType UNK_0xe760 = {ARTIFACTIDX, 0x1e, 0x01, 0x20, 0x6bcd};

// ================================================
// 0xe766: WORD 'UNK_0xe768' codep=0x7420 parp=0xe768
// ================================================
IFieldType UNK_0xe768 = {CREATUREIDX, 0x18, 0x01};

// ================================================
// 0xe76b: WORD 'UNK_0xe76d' codep=0x224c parp=0xe76d
// ================================================

void UNK_0xe76d() // UNK_0xe76d
{
  LoadData(UNK_0xe760); // from 'ARTIFACT'
  Push(Read8(Pop())&0xFF); // C@
  Push(2);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xe777: WORD 'UNK_0xe779' codep=0x224c parp=0xe779
// ================================================

void UNK_0xe779() // UNK_0xe779
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
  if (Pop() == 0) Push(1); else Push(0); // NOT
  IFIRST(); // IFIRST
  Push(0x001c);
  Push(0);
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // NOT
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
    UNK_0xe76d(); // UNK_0xe76d
    break;
  case 41:
    UNK_0xe779(); // UNK_0xe779
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
// 0xe7e0: WORD 'UNK_0xe7e2' codep=0x224c parp=0xe7e2
// ================================================

void UNK_0xe7e2() // UNK_0xe7e2
{
  Push(2);
  Push(0x000a);
  RRND(); // RRND
  Push(Read16(cc_MPS)); // MPS
  Push(Pop() * Pop()); // *
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _slash_(); // /
  Push(1);
  MAX(); // MAX
}


// ================================================
// 0xe7fa: WORD 'UNK_0xe7fc' codep=0x224c parp=0xe7fc
// ================================================

void UNK_0xe7fc() // UNK_0xe7fc
{
  _dash_ICON(); // -ICON
  Push(0xba55); // probable 'ICON-'
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
}


// ================================================
// 0xe808: WORD 'UNK_0xe80a' codep=0x224c parp=0xe80a
// ================================================

void UNK_0xe80a() // UNK_0xe80a
{
  GetID(); // @ID
  Push(0x0011);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(0);
  Push(0xe75b);
  IFLD_ex_(); // IFLD!
}


// ================================================
// 0xe822: WORD 'UNK_0xe824' codep=0x224c parp=0xe824
// ================================================

void UNK_0xe824() // UNK_0xe824
{
  Push(0);
  Push(0x000a);
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    UNK_0xe80a(); // UNK_0xe80a
  } else
  {
    GetID(); // @ID
    Push(0x0011);
    Push((Pop()==Pop())?1:0); // =
    if (Pop() == 0) Push(1); else Push(0); // NOT
    if (Pop() != 0)
    {
      UNK_0xe7e2(); // UNK_0xe7e2
      Push(0x65e1+UNK_0xe768.offset); // IFIELD
      C_ex__2(); // C!_2
    }
  }
  UNK_0xe7fc(); // UNK_0xe7fc
}


// ================================================
// 0xe850: WORD 'UNK_0xe852' codep=0x224c parp=0xe852
// ================================================

void UNK_0xe852() // UNK_0xe852
{
  Push(0xcf39); // probable '.WH'
  MODULE(); // MODULE
}


// ================================================
// 0xe85a: WORD 'UNK_0xe85c' codep=0x224c parp=0xe85c params=1 returns=0
// ================================================

void UNK_0xe85c() // UNK_0xe85c
{
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  OVER(); // OVER
  Push(pp_WBOTTOM); // WBOTTOM
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  LLINE(); // LLINE
}


// ================================================
// 0xe86c: WORD 'UNK_0xe86e' codep=0x224c parp=0xe86e params=0 returns=0
// ================================================

void UNK_0xe86e() // UNK_0xe86e
{
  Push(0x0016);
  UNK_0xe85c(); // UNK_0xe85c
  Push(0x002a);
  UNK_0xe85c(); // UNK_0xe85c
  Push(0x0042);
  UNK_0xe85c(); // UNK_0xe85c
  Push(0x006a);
  UNK_0xe85c(); // UNK_0xe85c
  Push(0x0086);
  UNK_0xe85c(); // UNK_0xe85c
  Push(0x009e);
  UNK_0xe85c(); // UNK_0xe85c
}


// ================================================
// 0xe894: WORD 'UNK_0xe896' codep=0x224c parp=0xe896
// ================================================

void UNK_0xe896() // UNK_0xe896
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

// 0xe8ae: db 0x4c 0x22 0x7e 0x5c 0xae 0x0b 0x41 0x0e 0x87 0x3b 0x46 0x12 0xf2 0x0e 0x5d 0x17 0x0b 0x00 0x2d 0x12 0x3e 0x13 0x90 0x16 'L"~\  A  ;F   ]   - >   '

// ================================================
// 0xe8c6: WORD 'UNK_0xe8c8' codep=0x224c parp=0xe8c8
// ================================================

void UNK_0xe8c8() // UNK_0xe8c8
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xe749.offset); // IFIELD
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+UNK_0xe74e.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(2);
  _star_CLOSE(); // *CLOSE
}

// 0xe8da: db 0x4c 0x22 0xc6 0xe8 0x5d 0x17 0xc7 0x00 0x2d 0x12 0x90 0x16 'L"  ]   -   '

// ================================================
// 0xe8e6: WORD 'UNK_0xe8e8' codep=0x224c parp=0xe8e8 params=0 returns=0
// ================================================

void UNK_0xe8e8() // UNK_0xe8e8
{
  Push(-1);
  Push(pp_WBOTTOM); // WBOTTOM
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xe8f0: WORD 'UNK_0xe8f2' codep=0x224c parp=0xe8f2 params=0 returns=0
// ================================================

void UNK_0xe8f2() // UNK_0xe8f2
{
  Push(0x0083);
  Push(0x0053);
  Push(9);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xe906: WORD 'UNK_0xe908' codep=0x224c parp=0xe908 params=0 returns=0
// ================================================

void UNK_0xe908() // UNK_0xe908
{
  Push(0x0040);
  Push(3);
  Push(7);
  Push(0x0026);
  WINDOW(); // WINDOW
  UNK_0xe8e8(); // UNK_0xe8e8
  UNK_0xe8e8(); // UNK_0xe8e8
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xe91e: WORD 'UNK_0xe920' codep=0x224c parp=0xe920 params=0 returns=0
// ================================================

void UNK_0xe920() // UNK_0xe920
{
  Push(0x00c1);
  Push(0x0053);
  Push(8);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xe934: WORD 'UNK_0xe936' codep=0x224c parp=0xe936 params=0 returns=0
// ================================================

void UNK_0xe936() // UNK_0xe936
{
  Push(0x00bf);
  Push(3);
  Push(0x0011);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xe948: WORD 'UNK_0xe94a' codep=0x224c parp=0xe94a params=0 returns=0
// ================================================

void UNK_0xe94a() // UNK_0xe94a
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

// 0xe968: db 0x4c 0x22 0x5d 0x17 0xe0 0x01 0x92 0x0f 0x5d 0x17 0x0a 0x00 0x5d 0x17 0x35 0x00 0xc4 0x0f 0xf2 0x0e 0x5d 0x17 0x80 0x04 0x92 0x0f 0x5d 0x17 0x0a 0x00 0x5d 0x17 0x40 0x00 0xc4 0x0f 0xf2 0x0e 0x90 0x16 0x4c 0x22 0xc8 0x0d 0xfa 0x15 0x18 0x00 0x78 0x12 0xfa 0x15 0x0a 0x00 0xdc 0x1b 0x01 0x57 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x45 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x20 0x90 0x16 0x4c 0x22 0xc8 0x0d 0xfa 0x15 0x18 0x00 0x78 0x12 0xfa 0x15 0x0a 0x00 0xdc 0x1b 0x01 0x53 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x4e 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x20 0x90 0x16 'L"]     ]   ] 5     ]     ]   ] @       L"      x        W`      E`         L"      x        S`      N`         '

// ================================================
// 0xe9d8: WORD 'UNK_0xe9da' codep=0x224c parp=0xe9da params=2 returns=0
// ================================================

void UNK_0xe9da() // UNK_0xe9da
{
  SWAP(); // SWAP
  _4_star_(); // 4*
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  Push(Pop() + Pop()); // +
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  ROT(); // ROT
  Push(7);
  Push(Pop() * Pop()); // *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xe9f8: WORD 'UNK_0xe9fa' codep=0x224c parp=0xe9fa
// ================================================

void UNK_0xe9fa() // UNK_0xe9fa
{
  Push(pp_TVEHICL); // TVEHICL
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+INST_dash_X.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(0x65e1+INST_dash_Y.offset); // IFIELD
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}

// 0xea0a: db 0x4c 0x22 0xc9 0x74 0x16 0x6d 0xbb 0x74 0x16 0x6d 0x90 0x16 'L" t m t m  '

// ================================================
// 0xea16: WORD 'UNK_0xea18' codep=0x224c parp=0xea18
// ================================================

void UNK_0xea18() // UNK_0xea18
{
  Push(0x65e1+UNK_0xe73f.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xe744.offset); // IFIELD
  Push(Read16(Pop())); // @
  _st_(); // <
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    SWAP(); // SWAP
    Push(-Pop()); // NEGATE
    Push(0x65e1+UNK_0xe744.offset); // IFIELD
    _plus__ex__2(); // +!_2
  } else
  {
    SWAP(); // SWAP
    Pop(); // DROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea42: WORD 'UNK_0xea44' codep=0x224c parp=0xea44
// ================================================

void UNK_0xea44() // UNK_0xea44
{
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WBOTTOM); // WBOTTOM
  Push(Read16(Pop())); // @
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  SetColor(BLACK);
  POLY_dash_WI(); // POLY-WI
  Push(0);
  Push(0);
  UNK_0xe9da(); // UNK_0xe9da
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xea68: WORD 'UNK_0xea6a' codep=0x224c parp=0xea6a
// ================================================

void UNK_0xea6a() // UNK_0xea6a
{
  unsigned short int i, imax;
  Push(0x2001);
  PAD(); // PAD
  _st__ex__gt_(); // <!>
  Push(pp_LINE_dash_CO); // LINE-CO
  Push(Read16(Pop())); // @
  Push(pp_WLINES); // WLINES
  Push(Read16(Pop())); // @
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
// 0xea92: WORD 'UNK_0xea94' codep=0x224c parp=0xea94
// ================================================

void UNK_0xea94() // UNK_0xea94
{
  unsigned short int i, imax;
  Push(2);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(pp_WLEFT); // WLEFT
    Push(Read16(Pop())); // @
    Push(Pop()-2); // 2-
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(pp_WBOTTOM); // WBOTTOM
    Push(Read16(Pop())); // @
    OVER(); // OVER
    Push(pp_WTOP); // WTOP
    Push(Read16(Pop())); // @
    Push(Pop()+2); // 2+
    LLINE(); // LLINE
    Push(pp_WRIGHT); // WRIGHT
    Push(Read16(Pop())); // @
    Push(Pop()+2); // 2+
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(pp_WBOTTOM); // WBOTTOM
    Push(Read16(Pop())); // @
    OVER(); // OVER
    Push(pp_WTOP); // WTOP
    Push(Read16(Pop())); // @
    Push(Pop()+2); // 2+
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()-2); // 2-
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+3); // 3+
  OVER(); // OVER
  LLINE(); // LLINE
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()-2); // 2-
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+3); // 3+
  OVER(); // OVER
  LLINE(); // LLINE
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()-2); // 2-
  Push(pp_WBOTTOM); // WBOTTOM
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+3); // 3+
  OVER(); // OVER
  LLINE(); // LLINE
}


// ================================================
// 0xeb12: WORD 'UNK_0xeb14' codep=0x224c parp=0xeb14
// ================================================

void UNK_0xeb14() // UNK_0xeb14
{
  UNK_0xe936(); // UNK_0xe936
  SetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(-1);
  UNK_0xe9da(); // UNK_0xe9da
  SetColor(BLACK);
  UNK_0xe896(); // UNK_0xe896
  UNK_0xe852(); // UNK_0xe852
}


// ================================================
// 0xeb28: WORD 'UNK_0xeb2a' codep=0x224c parp=0xeb2a
// ================================================

void UNK_0xeb2a() // UNK_0xeb2a
{
  UNK_0xe920(); // UNK_0xe920
  UNK_0xea44(); // UNK_0xea44
  SetColor(RED);
  StoreCOLOR(); // !COLOR
  UNK_0xea94(); // UNK_0xea94
  _gt_2FONT(); // >2FONT
  SetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(0);
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("STATUS", 6); // (.")
  _gt_1FONT(); // >1FONT
  Push(0);
  Push(2);
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("DATE  : ", 8); // (.")
  Push(0);
  Push(3);
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("ENERGY: ", 8); // (.")
  Push(0);
  Push(4);
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("EFF.  : ", 8); // (.")
  Push(0);
  Push(5);
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("CARGO : ", 8); // (.")
  Push(0);
  Push(6);
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("SHIP  : ", 8); // (.")
}


// ================================================
// 0xeba2: WORD 'UNK_0xeba4' codep=0x224c parp=0xeba4
// ================================================

void UNK_0xeba4() // UNK_0xeba4
{
  UNK_0xe94a(); // UNK_0xe94a
  UNK_0xea44(); // UNK_0xea44
  SetColor(RED);
  StoreCOLOR(); // !COLOR
  UNK_0xea94(); // UNK_0xea94
  UNK_0xe86e(); // UNK_0xe86e
  SetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(-3);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  Push(0);
  Push(0);
  UNK_0xe9da(); // UNK_0xe9da
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
// 0xec01: WORD 'UNK_0xec03' codep=0x224c parp=0xec03
// ================================================

void UNK_0xec03() // UNK_0xec03
{
  UNK_0xe8f2(); // UNK_0xe8f2
  UNK_0xea44(); // UNK_0xea44
  SetColor(RED);
  StoreCOLOR(); // !COLOR
  UNK_0xea94(); // UNK_0xea94
  _gt_2FONT(); // >2FONT
  SetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0);
  Push(0);
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("CREW VITALITY", 13); // (.")
}


// ================================================
// 0xec2b: WORD 'UNK_0xec2d' codep=0x224c parp=0xec2d
// ================================================

void UNK_0xec2d() // UNK_0xec2d
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  Push(-3);
  Push(pp_WRIGHT); // WRIGHT
  _plus__ex__2(); // +!_2
  SetColor(RED);
  StoreCOLOR(); // !COLOR
  UNK_0xea94(); // UNK_0xea94
  Push(3);
  Push(pp_WRIGHT); // WRIGHT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xec47: WORD 'UNK_0xec49' codep=0x224c parp=0xec49
// ================================================

void UNK_0xec49() // UNK_0xec49
{
  _gt_DISPLA(); // >DISPLA
  _gt_1FONT(); // >1FONT
  Push(0);
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
  SetColor(GREY1);
  StoreCOLOR(); // !COLOR
  SFILL(); // SFILL
  SetColor(RED);
  StoreCOLOR(); // !COLOR
  SetColor(BLACK);
  VIEWSCR(); // VIEWSCR
  UNK_0xeb14(); // UNK_0xeb14
  UNK_0xeb2a(); // UNK_0xeb2a
  UNK_0xec03(); // UNK_0xec03
  UNK_0xeba4(); // UNK_0xeba4
  UNK_0xec2d(); // UNK_0xec2d
  _gt_TVCT(); // >TVCT
  CTINIT(); // CTINIT
}

// 0xec71: db 0x4c 0x22 0x06 0xe9 0x68 0xea 0x90 0x16 'L"  h   '

// ================================================
// 0xec79: WORD 'UNK_0xec7b' codep=0x224c parp=0xec7b
// ================================================

void UNK_0xec7b() // UNK_0xec7b
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
// 0xec9f: WORD 'UNK_0xeca1' codep=0x224c parp=0xeca1
// ================================================

void UNK_0xeca1() // UNK_0xeca1
{
  IsLAST(); // ?LAST
  GetINST_dash_C(); // @INST-C
  DISPOSAL(); // DISPOSAL case
  Push(Read16(cc_FALSE)); // FALSE
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xecaf: WORD 'FUNCTIONS' codep=0x1d29 parp=0xecbd
// ================================================
// 0xecbd: db 0x05 0x0c 0x03 0x0c 0x13 0x0c 0x17 0x0c 0x13 0x0c 0x2b 0x0c 0x17 0x0c 0x43 0x0c 0x27 0x0c 0x6b 0x0c 0x1b 0x0c 0x87 0x0c 0x16 '          +   C ' k      '

// ================================================
// 0xecd6: WORD 'UNK_0xecd8' codep=0x224c parp=0xecd8
// ================================================

void UNK_0xecd8() // UNK_0xecd8
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
// 0xecec: WORD 'UNK_0xecee' codep=0x224c parp=0xecee
// ================================================

void UNK_0xecee() // UNK_0xecee
{
  if (Pop() == 0) return;
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
  Push(1);
  Push(pp__n_SHOTS); // #SHOTS
  _plus__ex__2(); // +!_2
  Push(pp__n_SHOTS); // #SHOTS
  Push(Read16(Pop())); // @
  Push(4);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(9);
  } else
  {
    Push(0x000a);
    GetINST_dash_S(); // @INST-S
    Push(0xc032); // probable 'T>O'
    MODULE(); // MODULE
    if (Pop() != 0)
    {
      Push(0x0064);
      Push(0xbf4a); // probable 'OV+!EDL'
      MODULE(); // MODULE
    }
  }
  Push(0xe753);
  IFLD_at_(); // IFLD@
  MAX(); // MAX
  Push(0xe753);
  IFLD_ex_(); // IFLD!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed3a: WORD 'UNK_0xed3c' codep=0x224c parp=0xed3c
// ================================================

void UNK_0xed3c() // UNK_0xed3c
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+UNK_0xe73f.offset); // IFIELD
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xed4a: WORD 'UNK_0xed4c' codep=0x1d29 parp=0xed4c
// ================================================
// 0xed4c: db 0x56 0x3a 0x20 0x0f 0x05 0x41 'V:   A'

// ================================================
// 0xed52: WORD 'UNK_0xed54' codep=0x224c parp=0xed54
// ================================================

void UNK_0xed54() // UNK_0xed54
{
  Push(0x65e1+INST_dash_X.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  Push(0x65e1+INST_dash_Y.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xed7a: WORD 'UNK_0xed7c' codep=0x224c parp=0xed7c
// ================================================

void UNK_0xed7c() // UNK_0xed7c
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(pp_UNK_0xed4c); // UNK_0xed4c
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  do
  {
    UNK_0xecd8(); // UNK_0xecd8
    IsNULL(); // ?NULL
    UNK_0xeca1(); // UNK_0xeca1
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
// 0xeda6: WORD 'UNK_0xeda8' codep=0x224c parp=0xeda8
// ================================================

void UNK_0xeda8() // UNK_0xeda8
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp_UNK_0xed4c); // UNK_0xed4c
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0);
  Push(pp_UNK_0xed4c); // UNK_0xed4c
  Push(4);
  Push(Pop() + Pop()); // +
  _st__ex__gt_(); // <!>
  Push(0x000b);
  Push(0x000b);

  label4:
  Push(pp_SUPER_dash_B); // SUPER-B
  _1_dot_5_at_(); // 1.5@
  CI(); // CI
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  IsCLASS_slash_(); // ?CLASS/
  if (Pop() != 0)
  {
    UNK_0xed54(); // UNK_0xed54
    Push(pp_UNK_0xed4c); // UNK_0xed4c
    Push(4);
    Push(Pop() + Pop()); // +
    Push(Read16(Pop())); // @
    OVER(); // OVER
    _st_(); // <
    IOPEN(); // IOPEN
    ILAST(); // ILAST
    UNK_0xeca1(); // UNK_0xeca1
    if (Pop() == 0) Push(1); else Push(0); // NOT
    Push(Pop() & Pop()); // AND
    ICLOSE(); // ICLOSE
    if (Pop() != 0)
    {
      CI(); // CI
      Push(pp_UNK_0xed4c); // UNK_0xed4c
      _1_dot_5_ex__2(); // 1.5!_2
      Push(pp_UNK_0xed4c); // UNK_0xed4c
      Push(4);
      Push(Pop() + Pop()); // +
      _st__ex__gt_(); // <!>
    } else
    {
      Pop(); // DROP
    }
  }
  INEXT(); // INEXT
  goto label4;

  label1:
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
  UNK_0xeda8(); // UNK_0xeda8
  UNK_0xed7c(); // UNK_0xed7c
}


// ================================================
// 0xee32: WORD 'UNK_0xee34' codep=0x2214 parp=0xee34
// ================================================
// 0xee34: dw 0x7fff

// ================================================
// 0xee36: WORD 'UNK_0xee38' codep=0x224c parp=0xee38
// ================================================

void UNK_0xee38() // UNK_0xee38
{
  Push(pp_TVEHICL); // TVEHICL
  Get_gt_C_plus_S(); // @>C+S
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(0x65e1+INST_dash_X.offset); // IFIELD
  Store_2(); // !_2
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(0x65e1+INST_dash_Y.offset); // IFIELD
  Store_2(); // !_2
  Push(Read16(cc_UNK_0xee34)); // UNK_0xee34
  Push(0x65e1+INST_dash_QT.offset); // IFIELD
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  Push(0x01f4);
  Push(0x65e1+INST_dash_QT.offset); // IFIELD
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee64: WORD 'TV-SETUP' codep=0x224c parp=0xee71
// ================================================
// entry

void TV_dash_SETUP() // TV-SETUP
{
  UNK_0xec49(); // UNK_0xec49
  SetColor(DK_dash_BLUE);
  Push(pp_CRSCOLO); // CRSCOLO
  Store_2(); // !_2
  Push(pp_FUNCTIONS); // FUNCTIONS
  BLD_dash_CRS(); // BLD-CRS
}


// ================================================
// 0xee7f: WORD 'UNK_0xee81' codep=0x224c parp=0xee81
// ================================================

void UNK_0xee81() // UNK_0xee81
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xe744.offset); // IFIELD
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee8d: WORD 'UNK_0xee8f' codep=0x224c parp=0xee8f
// ================================================

void UNK_0xee8f() // UNK_0xee8f
{
  IsNULL(); // ?NULL
  if (Pop() == 0) return;
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  Push2Words("0.");
  _gt_C(); // >C
}


// ================================================
// 0xee9f: WORD 'UNK_0xeea1' codep=0x224c parp=0xeea1
// ================================================

void UNK_0xeea1() // UNK_0xeea1
{
  unsigned short int a;
  LoadData(ART_dash_VOL); // from 'ARTIFACT'
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(0x65e1+INST_dash_QT.offset); // IFIELD
  Store_2(); // !_2
  IEXTRAC(); // IEXTRAC
  UNK_0xee8f(); // UNK_0xee8f
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  _gt_BOX(); // >BOX
  Push(Read16(a)); // R@
  Push(0x65e1+UNK_0xe73f.offset); // IFIELD
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
  Push(a); // R>
  Push(-Pop()); // NEGATE
  UNK_0xee81(); // UNK_0xee81
}


// ================================================
// 0xeec7: WORD 'UNK_0xeec9' codep=0x224c parp=0xeec9
// ================================================

void UNK_0xeec9() // UNK_0xeec9
{
  Push(Read16(regsp)); // DUP
  Push(0xb76b); // probable 'OV?ART'
  MODULE(); // MODULE
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001c);
    SWAP(); // SWAP
    IFIND(); // IFIND
    Pop(); // DROP
    UNK_0xeea1(); // UNK_0xeea1
    ICLOSE(); // ICLOSE
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xeeed: WORD 'UNK_0xeeef' codep=0x224c parp=0xeeef
// ================================================

void UNK_0xeeef() // UNK_0xeeef
{
  Push(0x002a);
  Push(0xb76b); // probable 'OV?ART'
  MODULE(); // MODULE
  Push(0x002a);
  Push(0xb78d); // probable 'TV?ART'
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
    UNK_0xeec9(); // UNK_0xeec9
    Push(0x0034);
    UNK_0xeec9(); // UNK_0xeec9
    Push(0x000b);
    UNK_0xeec9(); // UNK_0xeec9
    Push(0x000c);
    UNK_0xeec9(); // UNK_0xeec9
    Push(0x000e);
    UNK_0xeec9(); // UNK_0xeec9
  }
  Push(0xb6ec); // probable '=CARGO'
  MODULE(); // MODULE
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xef47: WORD 'UNK_0xef49' codep=0x224c parp=0xef49
// ================================================

void UNK_0xef49() // UNK_0xef49
{
  Push(pp_TVEHICL); // TVEHICL
  Get_gt_C_plus_S(); // @>C+S
  UNK_0xee38(); // UNK_0xee38
  Push(0xba55); // probable 'ICON-'
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
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(0x65e1+INST_dash_X.offset); // IFIELD
  Store_2(); // !_2
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(0x65e1+INST_dash_Y.offset); // IFIELD
  Store_2(); // !_2
  Push(0xba55); // probable 'ICON-'
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
  ICLOSE(); // ICLOSE
  UNK_0xeeef(); // UNK_0xeeef
}


// ================================================
// 0xef95: WORD 'UNK_0xef97' codep=0x224c parp=0xef97
// ================================================

void UNK_0xef97() // UNK_0xef97
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
// 0xefb3: WORD 'UNK_0xefb5' codep=0x224c parp=0xefb5
// ================================================

void UNK_0xefb5() // UNK_0xefb5
{
  Push(pp_IsTV); // ?TV
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  GCR(); // GCR
  PRINT("REFUELING TERRAIN VEHICLE ", 26); // (.")
  GCR(); // GCR
  UNK_0xed3c(); // UNK_0xed3c
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  UNK_0xea18(); // UNK_0xea18
  ICLOSE(); // ICLOSE
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  PRINT("AND TRANSFERRING ALL CARGO", 26); // (.")
}


// ================================================
// 0xf00d: WORD 'UNK_0xf00f' codep=0x224c parp=0xf00f
// ================================================

void UNK_0xf00f() // UNK_0xf00f
{
  IOPEN(); // IOPEN

  label2:
  IsNULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  IEXTRAC(); // IEXTRAC
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
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
    Push(0x65e1+INST_dash_QT.offset); // IFIELD
    Push(Read16(Pop())); // @
    Push(Pop() * Pop()); // *
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
// 0xf069: WORD 'UNK_0xf06b' codep=0x224c parp=0xf06b
// ================================================

void UNK_0xf06b() // UNK_0xf06b
{
  do
  {
    IsNULL(); // ?NULL
    if (Pop() == 0) Push(1); else Push(0); // NOT
    if (Pop() == 0) return;
    UNK_0xf00f(); // UNK_0xf00f
    IDELETE(); // IDELETE
  } while(1);
}


// ================================================
// 0xf07d: WORD 'UNK_0xf07f' codep=0x224c parp=0xf07f
// ================================================

void UNK_0xf07f() // UNK_0xf07f
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  Push(-2);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  CTINIT(); // CTINIT
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  UNK_0xefb5(); // UNK_0xefb5
  UNK_0xea18(); // UNK_0xea18
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    UNK_0xf06b(); // UNK_0xf06b
    ICLOSE(); // ICLOSE
    Push(0);
    Push(0x65e1+UNK_0xe73f.offset); // IFIELD
    Store_2(); // !_2
  } else
  {
    Push(pp_IsTV); // ?TV
    Push(Read16(Pop())); // @
    UNK_0xed3c(); // UNK_0xed3c
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      GCR(); // GCR
      PRINT("NOT ENOUGH ROOM IN SHIP'S HOLD", 30); // (.")
      GCR(); // GCR
      PRINT("ITEMS WILL STAY IN TERRAIN VEHICLE", 34); // (.")
      GCR(); // GCR
      Push(0x1194);
      UNK_0xec7b(); // UNK_0xec7b
    }
  }
  Push(0x05dc);
  MS(); // MS
  ICLOSE(); // ICLOSE
  UNK_0xef97(); // UNK_0xef97
}


// ================================================
// 0xf111: WORD 'UNK_0xf113' codep=0x224c parp=0xf113
// ================================================

void UNK_0xf113() // UNK_0xf113
{
  UNK_0xe936(); // UNK_0xe936
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
  Push(0xce24); // probable '8X8CO'
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
  Push(pp_XWLD_c_XP); // XWLD:XP
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf14f: WORD 'UNK_0xf151' codep=0x224c parp=0xf151
// ================================================

void UNK_0xf151() // UNK_0xf151
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
// 0xf161: WORD 'UNK_0xf163' codep=0x224c parp=0xf163 params=0 returns=0
// ================================================

void UNK_0xf163() // UNK_0xf163
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
  StoreVISWIN(); // !VISWIN
}


// ================================================
// 0xf18f: WORD 'UNK_0xf191' codep=0x1d29 parp=0xf191
// ================================================
// 0xf191: db 0x00 0x42 0x99 0x99 0x42 0x00 ' B  B '

// ================================================
// 0xf197: WORD 'UNK_0xf199' codep=0x224c parp=0xf199 params=0 returns=0
// ================================================

void UNK_0xf199() // UNK_0xf199
{
  unsigned short int a, b;
  Push(pp_EYEXY); // EYEXY
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(0x0016);
  Push(Pop() + Pop()); // +
  MIN(); // MIN
  Push(a); // R>
  Push(0x000e);
  Push(Pop() + Pop()); // +
  MAX(); // MAX
  Push(pp_EYEXY); // EYEXY
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(pp_EYEXY); // EYEXY
  Push(Read16(Pop())); // @
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  b = Pop(); // >R
  Push(0x0024);
  Push(Pop() + Pop()); // +
  MIN(); // MIN
  Push(b); // R>
  Push(0x0016);
  Push(Pop() + Pop()); // +
  MAX(); // MAX
  Push(pp_EYEXY); // EYEXY
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf1e3: WORD 'UNK_0xf1e5' codep=0x224c parp=0xf1e5
// ================================================

void UNK_0xf1e5() // UNK_0xf1e5
{
  SetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(6);
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(8);
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  Push(pp_UNK_0xf191); // UNK_0xf191
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  UNK_0xe9fa(); // UNK_0xe9fa
  _2DUP(); // 2DUP
  Push(pp_EYEXY); // EYEXY
  _st_D_ex__gt_(); // <D!>
  WLD_gt_SCR(); // WLD>SCR
  Push(0x004e);
  Push(Pop() + Pop()); // +
  Push(pp_YBLT); // YBLT
  _st__ex__gt_(); // <!>
  Push(4);
  Push(Pop() + Pop()); // +
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf219: WORD 'UNK_0xf21b' codep=0x224c parp=0xf21b
// ================================================

void UNK_0xf21b() // UNK_0xf21b
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
// 0xf231: WORD 'UNK_0xf233' codep=0x224c parp=0xf233
// ================================================

void UNK_0xf233() // UNK_0xf233
{
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _st__ex__gt_(); // <!>
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  UNK_0xf1e5(); // UNK_0xf1e5
  UNK_0xf21b(); // UNK_0xf21b
  do
  {
    XYSCAN(); // XYSCAN
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      CLICK(); // CLICK
      BLT(); // BLT
      Push(pp_EYEXY); // EYEXY
      Push(Pop()+2); // 2+
      _st__plus__ex__gt_(); // <+!>
      Push(pp_EYEXY); // EYEXY
      _st__plus__ex__gt_(); // <+!>
      UNK_0xf199(); // UNK_0xf199
      Push(pp_EYEXY); // EYEXY
      _2_at_(); // 2@
      WLD_gt_SCR(); // WLD>SCR
      Push(0x004e);
      Push(Pop() + Pop()); // +
      Push(pp_YBLT); // YBLT
      _st__ex__gt_(); // <!>
      Push(4);
      Push(Pop() + Pop()); // +
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
  UNK_0xf233(); // UNK_0xf233
  GetCRS(); // @CRS
  UNK_0xe908(); // UNK_0xe908
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  IsICONS_dash__2(); // ?ICONS-_2
  UNK_0xea6a(); // UNK_0xea6a
  Push(0xbe25); // probable 'DO-LO'
  MODULE(); // MODULE
  StoreCRS(); // !CRS
  BLT(); // BLT
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
}


// ================================================
// 0xf2bb: WORD 'UNK_0xf2bd' codep=0x224c parp=0xf2bd
// ================================================

void UNK_0xf2bd() // UNK_0xf2bd
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  Push(0);
  Push(0);
  UNK_0xe9da(); // UNK_0xe9da
  SetColor(WHITE);
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
// 0xf2f6: WORD 'UNK_0xf2f8' codep=0x224c parp=0xf2f8
// ================================================

void UNK_0xf2f8() // UNK_0xf2f8
{
  unsigned short int a;
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  StoreCOLOR(); // !COLOR
  _gt_MAINVI(); // >MAINVI
  UNK_0xe9fa(); // UNK_0xe9fa
  WLD_gt_SCR(); // WLD>SCR
  Push(Pop()+2); // 2+
  SWAP(); // SWAP
  Push(Pop()+2); // 2+
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
  UNK_0xe6ea(); // UNK_0xe6ea
}


// ================================================
// 0xf326: WORD 'UNK_0xf328' codep=0x224c parp=0xf328
// ================================================

void UNK_0xf328() // UNK_0xf328
{
  if (Pop() != 0)
  {
    SetColor(RED);
  } else
  {
    SetColor(DK_dash_BLUE);
  }
  UNK_0xf2f8(); // UNK_0xf2f8
}


// ================================================
// 0xf338: WORD 'UNK_0xf33a' codep=0x224c parp=0xf33a
// ================================================

void UNK_0xf33a() // UNK_0xf33a
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
  SetColor(WHITE);
  StoreCOLOR(); // !COLOR
  UNK_0x3f09("ACTIVATING TERRAIN VEHICLE");
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
  UNK_0xf163(); // UNK_0xf163
  UNK_0xf113(); // UNK_0xf113
  Push2Words("0.");
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0xd081); // probable '?POP'
  MODULE(); // MODULE
  UNK_0xef49(); // UNK_0xef49
  UNK_0xf33a(); // UNK_0xf33a
  TV_dash_SETUP(); // TV-SETUP
  UNK_0xf151(); // UNK_0xf151
  SetColor(WHITE);
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
  UNK_0xf07f(); // UNK_0xf07f
}


// ================================================
// 0xf3d7: WORD 'UNK_0xf3d9' codep=0x1d29 parp=0xf3d9
// ================================================
// 0xf3d9: db 0x3a 0x20 ': '

// ================================================
// 0xf3db: WORD 'UNK_0xf3dd' codep=0x224c parp=0xf3dd
// ================================================

void UNK_0xf3dd() // UNK_0xf3dd
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
// 0xf3f3: WORD 'UNK_0xf3f5' codep=0x224c parp=0xf3f5
// ================================================

void UNK_0xf3f5() // UNK_0xf3f5
{
  UNK_0xe8c8(); // UNK_0xe8c8
  Push(0x000a);
  _slash_(); // /
  Push(0);
  Push(0x001b);
  RRND(); // RRND
  _st_(); // <
  Push(pp_UNK_0xf3d9); // UNK_0xf3d9
  Store_2(); // !_2
}


// ================================================
// 0xf40d: WORD 'UNK_0xf40f' codep=0x224c parp=0xf40f
// ================================================

void UNK_0xf40f() // UNK_0xf40f
{
  Push(pp_UNK_0xf3d9); // UNK_0xf3d9
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  UNK_0xf3dd(); // UNK_0xf3dd
  SWAP(); // SWAP
  UNK_0xf3dd(); // UNK_0xf3dd
  SWAP(); // SWAP
}


// ================================================
// 0xf421: WORD 'UNK_0xf423' codep=0x224c parp=0xf423
// ================================================

void UNK_0xf423() // UNK_0xf423
{
  Push2Words("*SHIP");
  IsICON_eq_I(); // ?ICON=I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    Push(0);
  }
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0);
  } else
  {
    Push(-1);
  }
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(Pop() + Pop()); // +
  Push(pp_WEAPON_dash_); // WEAPON-
  _st__plus__ex__gt_(); // <+!>
  _gt_TVCT(); // >TVCT
  CTINIT(); // CTINIT
  Push(1);
  Push(0);
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("AIM, THEN FIRE", 14); // (.")
}


// ================================================
// 0xf46c: WORD 'UNK_0xf46e' codep=0x1d29 parp=0xf46e
// ================================================
// 0xf46e: db 0x3a 0x20 ': '

// ================================================
// 0xf470: WORD 'UNK_0xf472' codep=0x224c parp=0xf472
// ================================================

void UNK_0xf472() // UNK_0xf472
{
  unsigned short int a, i, imax;
  Push(pp_UNK_0xf46e); // UNK_0xf46e
  _099(); // 099
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  IsICONS_dash__2(); // ?ICONS-_2
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(pp_IINDEX); // IINDEX
    Push(Read16(Pop())); // @
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
      if (Pop() == 0) Push(1); else Push(0); // 0=
      if (Pop() != 0)
      {
        GetIL(); // @IL
        GetIH(); // @IH
        _gt_C_plus_S(); // >C+S
        GetINST_dash_C(); // @INST-C
        Push(0x0044);
        Push((Pop()==Pop())?1:0); // =
        Push(pp_UNK_0xf3d9); // UNK_0xf3d9
        Push(Read16(Pop())); // @
        if (Pop() == 0) Push(1); else Push(0); // NOT
        Push(Pop() & Pop()); // AND
        if (Pop() != 0)
        {
          UNK_0xe824(); // UNK_0xe824
        }
        ICLOSE(); // ICLOSE
      }
      Push(pp_UNK_0xf46e); // UNK_0xf46e
      Push(Read16(Pop())); // @
      MAX(); // MAX
      Push(pp_UNK_0xf46e); // UNK_0xf46e
      Store_2(); // !_2
      i++;
    } while(i<imax); // (LOOP)

    Push(a); // R>
    POINT_gt_I(); // POINT>I
    Push(pp_UNK_0xf46e); // UNK_0xf46e
    Push(Read16(Pop())); // @
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
  UNK_0xf423(); // UNK_0xf423
  UNK_0xf3f5(); // UNK_0xf3f5
  UNK_0xf233(); // UNK_0xf233
  UNK_0xf472(); // UNK_0xf472
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    Push(pp_TVEHICL); // TVEHICL
    Get_gt_C_plus_S(); // @>C+S
    Push(Read16(regsp)); // DUP
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    Push(Read16(a)); // R@
    Push(0x65e1+UNK_0xe73a.offset); // IFIELD
    C_ex__2(); // C!_2
    Push(Pop()+1); // 1+
    Push(0xfed4);
    Push(Pop() * Pop()); // *
    Push(0x65e1+INST_dash_QT.offset); // IFIELD
    _plus__ex__2(); // +!_2
    ICLOSE(); // ICLOSE
    Push(pp_EYEXY); // EYEXY
    _2_at_(); // 2@
    UNK_0xf40f(); // UNK_0xf40f
    Push(pp_WEAPXY); // WEAPXY
    _st_D_ex__gt_(); // <D!>
    UNK_0xf328(); // UNK_0xf328
    UNK_0xf2bd(); // UNK_0xf2bd
    Push(a); // R>
    UNK_0xecee(); // UNK_0xecee
  } else
  {
    Pop(); // DROP
  }
  UNK_0xf33a(); // UNK_0xf33a
  UNK_0xf151(); // UNK_0xf151
  CTERASE(); // CTERASE
}

// 0xf552: db 0x54 0x2e 0x56 0x2e 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'T.V.__________ '

