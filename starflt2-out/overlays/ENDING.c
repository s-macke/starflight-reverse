// ====== OVERLAY 'ENDING' ======
// store offset = 0xe7f0
// overlay size   = 0x0d70

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WE806  codep:0x1d29 parp:0xe806 size:0x0002 C-string:'WE806'
//           WE80A  codep:0x7420 parp:0xe80a size:0x0003 C-string:'WE80A'
//           WE80F  codep:0x7420 parp:0xe80f size:0x0003 C-string:'WE80F'
//           WE814  codep:0x7420 parp:0xe814 size:0x0003 C-string:'WE814'
//           WE819  codep:0x7420 parp:0xe819 size:0x0003 C-string:'WE819'
//           WE81E  codep:0x7420 parp:0xe81e size:0x0003 C-string:'WE81E'
//           WE823  codep:0x7394 parp:0xe823 size:0x0006 C-string:'WE823'
//           WE82B  codep:0x7420 parp:0xe82b size:0x0003 C-string:'WE82B'
//           WE830  codep:0x224c parp:0xe830 size:0x000a C-string:'WE830'
//           WE83C  codep:0x224c parp:0xe83c size:0x0014 C-string:'WE83C'
//           WE852  codep:0x224c parp:0xe852 size:0x0006 C-string:'WE852'
//           WE85A  codep:0x224c parp:0xe85a size:0x0006 C-string:'WE85A'
//           WE862  codep:0x224c parp:0xe862 size:0x0006 C-string:'WE862'
//           WE86A  codep:0x224c parp:0xe86a size:0x0042 C-string:'WE86A'
//           FREEB  codep:0x224c parp:0xe8b6 size:0x0026 C-string:'FREEB'
//           WE8DE  codep:0x224c parp:0xe8de size:0x0024 C-string:'WE8DE'
//           WE904  codep:0x224c parp:0xe904 size:0x0016 C-string:'WE904'
//           WE91C  codep:0x224c parp:0xe91c size:0x0010 C-string:'WE91C'
//           WE92E  codep:0x224c parp:0xe92e size:0x000a C-string:'WE92E'
//           WE93A  codep:0x224c parp:0xe93a size:0x0004 C-string:'WE93A'
//           WE940  codep:0x224c parp:0xe940 size:0x0010 C-string:'WE940'
//           EXPOS  codep:0x1d29 parp:0xe95a size:0x0008 C-string:'EXPOS'
//           WE964  codep:0x1d29 parp:0xe964 size:0x0004 C-string:'WE964'
//           WE96A  codep:0x1d29 parp:0xe96a size:0x0004 C-string:'WE96A'
//           WE970  codep:0x224c parp:0xe970 size:0x000c C-string:'WE970'
//         STAGESE  codep:0x1d29 parp:0xe988 size:0x0006 C-string:'STAGESE'
//           WE990  codep:0x224c parp:0xe990 size:0x0018 C-string:'WE990'
//           WE9AA  codep:0x224c parp:0xe9aa size:0x0004 C-string:'WE9AA'
//           WE9B0  codep:0x224c parp:0xe9b0 size:0x0006 C-string:'WE9B0'
//           WE9B8  codep:0x224c parp:0xe9b8 size:0x0008 C-string:'WE9B8'
//           WE9C2  codep:0x224c parp:0xe9c2 size:0x0008 C-string:'WE9C2'
//           WE9CC  codep:0x224c parp:0xe9cc size:0x0008 C-string:'WE9CC'
//           WE9D6  codep:0x224c parp:0xe9d6 size:0x0008 C-string:'WE9D6'
//           WE9E0  codep:0x224c parp:0xe9e0 size:0x000a C-string:'WE9E0'
//           WE9EC  codep:0x224c parp:0xe9ec size:0x0018 C-string:'WE9EC'
//           WEA06  codep:0x224c parp:0xea06 size:0x0008 C-string:'WEA06'
//           WEA10  codep:0x224c parp:0xea10 size:0x0032 C-string:'WEA10'
//           WEA44  codep:0x224c parp:0xea44 size:0x0010 C-string:'WEA44'
//           WEA56  codep:0x224c parp:0xea56 size:0x003a C-string:'WEA56'
//           WEA92  codep:0x224c parp:0xea92 size:0x001c C-string:'WEA92'
//           WEAB0  codep:0x1d29 parp:0xeab0 size:0x0004 C-string:'WEAB0'
//           WEAB6  codep:0x1d29 parp:0xeab6 size:0x0004 C-string:'WEAB6'
//           WEABC  codep:0x1d29 parp:0xeabc size:0x0004 C-string:'WEABC'
//           WEAC2  codep:0x1d29 parp:0xeac2 size:0x0004 C-string:'WEAC2'
//           WEAC8  codep:0x1d29 parp:0xeac8 size:0x0004 C-string:'WEAC8'
//           WEACE  codep:0x224c parp:0xeace size:0x000e C-string:'WEACE'
//           WEADE  codep:0x224c parp:0xeade size:0x001e C-string:'WEADE'
//           WEAFE  codep:0x224c parp:0xeafe size:0x0056 C-string:'WEAFE'
//           WEB56  codep:0x224c parp:0xeb56 size:0x000a C-string:'WEB56'
//           WEB62  codep:0x224c parp:0xeb62 size:0x004c C-string:'WEB62'
//           WEBB0  codep:0x224c parp:0xebb0 size:0x0018 C-string:'WEBB0'
//           WEBCA  codep:0x1d29 parp:0xebca size:0x0002 C-string:'WEBCA'
//           WEBCE  codep:0x1d29 parp:0xebce size:0x0004 C-string:'WEBCE'
//           WEBD4  codep:0x224c parp:0xebd4 size:0x001e C-string:'WEBD4'
//           WEBF4  codep:0x224c parp:0xebf4 size:0x0024 C-string:'WEBF4'
//           WEC1A  codep:0x224c parp:0xec1a size:0x005c C-string:'WEC1A'
//           WEC78  codep:0x224c parp:0xec78 size:0x0028 C-string:'WEC78'
//           WECA2  codep:0x224c parp:0xeca2 size:0x001e C-string:'WECA2'
//            TPIC  codep:0x2214 parp:0xecc9 size:0x000e C-string:'TPIC'
//            BPIC  codep:0x2214 parp:0xece0 size:0x000e C-string:'BPIC'
//            VPIC  codep:0x2214 parp:0xecf7 size:0x000e C-string:'VPIC'
//           WED07  codep:0x224c parp:0xed07 size:0x0016 C-string:'WED07'
//           WED1F  codep:0x224c parp:0xed1f size:0x0012 C-string:'WED1F'
//           WED33  codep:0x224c parp:0xed33 size:0x0058 C-string:'WED33'
//           WED8D  codep:0x224c parp:0xed8d size:0x002a C-string:'WED8D'
//           WEDB9  codep:0x224c parp:0xedb9 size:0x0010 C-string:'WEDB9'
//           WEDCB  codep:0x224c parp:0xedcb size:0x0016 C-string:'WEDCB'
//           WEDE3  codep:0x224c parp:0xede3 size:0x0018 C-string:'WEDE3'
//           WEDFD  codep:0x224c parp:0xedfd size:0x0044 C-string:'WEDFD'
//           WEE43  codep:0x224c parp:0xee43 size:0x0030 C-string:'WEE43'
//           WEE75  codep:0x224c parp:0xee75 size:0x000a C-string:'WEE75'
//           WEE81  codep:0x224c parp:0xee81 size:0x0038 C-string:'WEE81'
//           WEEBB  codep:0x224c parp:0xeebb size:0x0014 C-string:'WEEBB'
//           WEED1  codep:0x224c parp:0xeed1 size:0x007c C-string:'WEED1'
//           WEF4F  codep:0x224c parp:0xef4f size:0x000c C-string:'WEF4F'
//           WEF5D  codep:0x224c parp:0xef5d size:0x004c C-string:'WEF5D'
//           WEFAB  codep:0x224c parp:0xefab size:0x002e C-string:'WEFAB'
//           WEFDB  codep:0x224c parp:0xefdb size:0x0042 C-string:'WEFDB'
//           WF01F  codep:0x224c parp:0xf01f size:0x003a C-string:'WF01F'
//           WF05B  codep:0x224c parp:0xf05b size:0x000c C-string:'WF05B'
//           WF069  codep:0x224c parp:0xf069 size:0x000e C-string:'WF069'
//           WF079  codep:0x224c parp:0xf079 size:0x001e C-string:'WF079'
//           WF099  codep:0x224c parp:0xf099 size:0x001a C-string:'WF099'
//            ANIM  codep:0x2214 parp:0xf0bc size:0x000c C-string:'ANIM'
//           WF0CA  codep:0x224c parp:0xf0ca size:0x000e C-string:'WF0CA'
//           WF0DA  codep:0x224c parp:0xf0da size:0x005c C-string:'WF0DA'
//           WF138  codep:0x224c parp:0xf138 size:0x0022 C-string:'WF138'
//           WF15C  codep:0x224c parp:0xf15c size:0x0026 C-string:'WF15C'
//           WF184  codep:0x224c parp:0xf184 size:0x001a C-string:'WF184'
//           WF1A0  codep:0x224c parp:0xf1a0 size:0x000a C-string:'WF1A0'
//           WF1AC  codep:0x224c parp:0xf1ac size:0x0014 C-string:'WF1AC'
//           WF1C2  codep:0x224c parp:0xf1c2 size:0x0014 C-string:'WF1C2'
//           WF1D8  codep:0x224c parp:0xf1d8 size:0x0036 C-string:'WF1D8'
//           WF210  codep:0x224c parp:0xf210 size:0x0034 C-string:'WF210'
//           WF246  codep:0x224c parp:0xf246 size:0x0006 C-string:'WF246'
//           WF24E  codep:0x224c parp:0xf24e size:0x0014 C-string:'WF24E'
//           WF264  codep:0x224c parp:0xf264 size:0x004a C-string:'WF264'
//           WF2B0  codep:0x224c parp:0xf2b0 size:0x0048 C-string:'WF2B0'
//           WF2FA  codep:0x224c parp:0xf2fa size:0x0042 C-string:'WF2FA'
//           WF33E  codep:0x224c parp:0xf33e size:0x0074 C-string:'WF33E'
//           WF3B4  codep:0x224c parp:0xf3b4 size:0x003a C-string:'WF3B4'
//           WF3F0  codep:0x224c parp:0xf3f0 size:0x001c C-string:'WF3F0'
//            BOLT  codep:0x224c parp:0xf415 size:0x0062 C-string:'BOLT'
//           WF479  codep:0x224c parp:0xf479 size:0x0024 C-string:'WF479'
//           WF49F  codep:0x224c parp:0xf49f size:0x0026 C-string:'WF49F'
//           WF4C7  codep:0x224c parp:0xf4c7 size:0x0018 C-string:'WF4C7'
//           WF4E1  codep:0x224c parp:0xf4e1 size:0x0008 C-string:'WF4E1'
//           WF4EB  codep:0x224c parp:0xf4eb size:0x0008 C-string:'WF4EB'
//           WF4F5  codep:0x224c parp:0xf4f5 size:0x0014 C-string:'WF4F5'
//        DO-HALLS  codep:0x224c parp:0xf516 size:0x0016 C-string:'DO_dash_HALLS'
//           !INIT  codep:0x224c parp:0xf536 size:0x0006 C-string:'StoreINIT'
//            DUHL  codep:0x224c parp:0xf545 size:0x0000 C-string:'DUHL'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_MPS; // MPS
extern const unsigned short int pp_Get_co_0_star_1_sc_; // @,0*1;
extern const unsigned short int pp_DTA_1; // DTA_1
extern const unsigned short int pp_BMAP; // BMAP
extern const unsigned short int pp_WIN; // WIN
extern const unsigned short int pp_IsUF; // ?UF
extern const unsigned short int pp_IsAF; // ?AF
extern const unsigned short int pp_FONTSEG; // FONTSEG
extern const unsigned short int pp_XBUF_dash_SE; // XBUF-SE
extern const unsigned short int pp_DICT; // DICT
extern const unsigned short int pp_PIC_n_; // PIC#
extern const unsigned short int pp__n_VESS; // #VESS
extern const unsigned short int pp_CTCOLOR; // CTCOLOR
extern const unsigned short int pp_Is3; // ?3
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_FORCEPT; // FORCEPT
extern const unsigned short int pp_SSYSEG; // SSYSEG
extern const unsigned short int pp_LINE_dash_CO; // LINE-CO
extern const unsigned short int pp_IsEGA; // ?EGA
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_TERMINA; // TERMINA
extern const unsigned short int pp_ANCHOR; // ANCHOR
extern const unsigned short int pp__ro_ENCOUN; // (ENCOUN
extern const unsigned short int pp__ro_AORIGI; // (AORIGI
extern const unsigned short int pp_LSCAN; // LSCAN
extern const unsigned short int pp__n_ETIME; // #ETIME
extern LoadDataType ART_dash_VOL; // ART-VOL
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
extern IFieldType PHRASE; // PHRASE
extern IFieldType PHRASE_do_; // PHRASE$
void COUNT(); // COUNT
void ABS(); // ABS
void M_star_(); // M*
void M_star__slash_(); // M*/
void MAX(); // MAX
void MIN(); // MIN
void D_st_(); // D<
void BEEP(); // BEEP
void MS(); // MS
void NOP(); // NOP
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D_eq_(); // D=
void D_gt_(); // D>
void DOS_dash_DTA(); // DOS-DTA
void _ro_LDS_rc_(); // (LDS)
void KEY_2(); // KEY_2
void _plus__at_(); // +@
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void SQRT(); // SQRT
void BMOFF(); // BMOFF
void BMSEG(); // BMSEG
void BMWIDE(); // BMWIDE
void BMPAL(); // BMPAL
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void FILL_2(); // FILL_2
void MOUNTB(); // MOUNTB
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void INEXT(); // INEXT
void IPREV(); // IPREV
void IFIRST(); // IFIRST
void ILAST(); // ILAST
void SAVE_dash_BU(); // SAVE-BU
void IINSERT(); // IINSERT
void IFIND(); // IFIND
void ICREATE(); // ICREATE
void SAVE_dash_OV(); // SAVE-OV
void IsVGA(); // ?VGA
void StoreCOLOR(); // !COLOR
void RNDCLR(); // RNDCLR
void BFILL(); // BFILL
void DARK(); // DARK
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void _gt_HIDDEN(); // >HIDDEN
void DrawRAW(); // .RAW
void SCR_dash_RES(); // SCR-RES
void V_gt_DISPL(); // V>DISPL
void BYE_2(); // BYE_2
void StoreIX(); // !IX
void StoreIY(); // !IY
void POINT_gt_I(); // POINT>I
void DrawLOCAL_dash_(); // .LOCAL-
void IsICON_eq_I(); // ?ICON=I
void _dash_ICON(); // -ICON
void _plus_ICON_2(); // +ICON_2
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void _gt_TVCT(); // >TVCT
void BEEPON_2(); // BEEPON_2
void WUP(); // WUP
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void _do__ex_(); // $!
void _gt_BOX(); // >BOX
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void LC_at_(); // LC@
void LCMOVE(); // LCMOVE
void _1_dot_5_at_(); // 1.5@
void GetDS(); // @DS
void CI(); // CI
void LXPLOT(); // LXPLOT
void WLD_gt_SCR(); // WLD>SCR


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WE806 = 0xe806; // WE806 size: 2
// {0x3a, 0x20}

const unsigned short int pp_EXPOS = 0xe95a; // EXPOS size: 8
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}

const unsigned short int pp_WE964 = 0xe964; // WE964 size: 4
// {0x00, 0x00, 0x00, 0x00}

const unsigned short int pp_WE96A = 0xe96a; // WE96A size: 4
// {0x00, 0x00, 0x00, 0x00}

const unsigned short int pp_STAGESE = 0xe988; // STAGESE size: 6
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}

const unsigned short int pp_WEAB0 = 0xeab0; // WEAB0 size: 4
// {0x56, 0x3a, 0x20, 0x64}

const unsigned short int pp_WEAB6 = 0xeab6; // WEAB6 size: 4
// {0x56, 0x3a, 0x20, 0x73}

const unsigned short int pp_WEABC = 0xeabc; // WEABC size: 4
// {0x56, 0x3a, 0x20, 0x2d}

const unsigned short int pp_WEAC2 = 0xeac2; // WEAC2 size: 4
// {0x56, 0x3a, 0x20, 0x65}

const unsigned short int pp_WEAC8 = 0xeac8; // WEAC8 size: 4
// {0x56, 0x3a, 0x20, 0x73}

const unsigned short int pp_WEBCA = 0xebca; // WEBCA size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEBCE = 0xebce; // WEBCE size: 4
// {0x56, 0x3a, 0x20, 0x20}


const unsigned short int cc_TPIC = 0xecc9; // TPIC
const unsigned short int cc_BPIC = 0xece0; // BPIC
const unsigned short int cc_VPIC = 0xecf7; // VPIC
const unsigned short int cc_ANIM = 0xf0bc; // ANIM


// 0xe802: db 0xd6 0x00 '  '

// ================================================
// 0xe804: WORD 'WE806' codep=0x1d29 parp=0xe806
// ================================================
// 0xe806: db 0x3a 0x20 ': '

// ================================================
// 0xe808: WORD 'WE80A' codep=0x7420 parp=0xe80a
// ================================================
IFieldType WE80A = {ORIGINATORIDX, 0x0c, 0x01};

// ================================================
// 0xe80d: WORD 'WE80F' codep=0x7420 parp=0xe80f
// ================================================
IFieldType WE80F = {ORIGINATORIDX, 0x12, 0x01};

// ================================================
// 0xe812: WORD 'WE814' codep=0x7420 parp=0xe814
// ================================================
IFieldType WE814 = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xe817: WORD 'WE819' codep=0x7420 parp=0xe819
// ================================================
IFieldType WE819 = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xe81c: WORD 'WE81E' codep=0x7420 parp=0xe81e
// ================================================
IFieldType WE81E = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xe821: WORD 'WE823' codep=0x7394 parp=0xe823
// ================================================
LoadDataType WE823 = {VESSELIDX, 0x10, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xe829: WORD 'WE82B' codep=0x7420 parp=0xe82b
// ================================================
IFieldType WE82B = {SHIPIDX, 0x14, 0x01};

// ================================================
// 0xe82e: WORD 'WE830' codep=0x224c parp=0xe830
// ================================================
// orphan

void WE830() // WE830
{
  WUP(); // WUP
  Push(1);
  Push(pp_LINE_dash_CO); // LINE-CO
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe83a: WORD 'WE83C' codep=0x224c parp=0xe83c
// ================================================

void WE83C() // WE83C
{
  Push2Words("*PLIST");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
}


// ================================================
// 0xe850: WORD 'WE852' codep=0x224c parp=0xe852
// ================================================
// orphan

void WE852() // WE852
{
  GetColor(YELLOW);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe858: WORD 'WE85A' codep=0x224c parp=0xe85a params=0 returns=0
// ================================================

void WE85A() // WE85A
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe860: WORD 'WE862' codep=0x224c parp=0xe862 params=0 returns=0
// ================================================

void WE862() // WE862
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe868: WORD 'WE86A' codep=0x224c parp=0xe86a params=0 returns=0
// ================================================

void WE86A() // WE86A
{
  unsigned short int i, imax, j, jmax;
  Push(Read16(pp_Get_co_0_star_1_sc_)); // @,0*1; @
  if (Pop() == 0) return;
  BEEPON_2(); // BEEPON_2
  Push(0x012c * (Read16(cc_MPS) - 1)); // 0x012c MPS 1- *
  Push(0x01f4);
  MAX(); // MAX
  Push(0x09c4);
  MIN(); // MIN
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    TONE(); // TONE
    Push(0x000a * Read16(cc_MPS)); // 0x000a MPS *
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      NOP(); // NOP
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xe8ac: WORD 'FREEB' codep=0x224c parp=0xe8b6 params=0 returns=0
// ================================================
// entry

void FREEB() // FREEB
{
  Push(Read16(pp_Is3)); // ?3 @
  if (Pop() == 0) return;
  WE862(); // WE862
  Push(0x0764);
  Push(0x65e1+WE814.offset); // WE814<IFIELD>
  Store_2(); // !_2
  Push(0x0664);
  Push(0x65e1+WE819.offset); // WE819<IFIELD>
  Store_2(); // !_2
  Push(0x0dac);
  Push(0x65e1+WE81E.offset); // WE81E<IFIELD>
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8dc: WORD 'WE8DE' codep=0x224c parp=0xe8de
// ================================================

void WE8DE() // WE8DE
{
  WE85A(); // WE85A
  IOPEN(); // IOPEN
  Push(0x0019);
  Push(0x001c);
  IFIND(); // IFIND
  IFIRST(); // IFIRST
  Push(0x0019);
  Push(0x001e);
  IFIND(); // IFIND
  Push(Pop() | Pop()); // OR
  Push(!Pop()); //  NOT
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe902: WORD 'WE904' codep=0x224c parp=0xe904
// ================================================

void WE904() // WE904
{
  WE85A(); // WE85A
  IOPEN(); // IOPEN
  Push(0x0019);
  Push(0x001d);
  IFIND(); // IFIND
  Push(!Pop()); //  NOT
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe91a: WORD 'WE91C' codep=0x224c parp=0xe91c params=2 returns=1
// ================================================

void WE91C() // WE91C
{
  Push(Read16(Pop())&0xFF); //  C@
  SWAP(); // SWAP
  Push(Read16(Pop())&0xFF); //  C@
  _gt_FLAG(); // >FLAG
  SWAP(); // SWAP
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe92c: WORD 'WE92E' codep=0x224c parp=0xe92e params=1 returns=0
// ================================================

void WE92E() // WE92E
{
  Push(1);
  SWAP(); // SWAP
  C_ex__2(); // C!_2
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xe938: WORD 'WE93A' codep=0x224c parp=0xe93a params=1 returns=1
// ================================================

void WE93A() // WE93A
{
  Push(Read16(Pop())&0xFF); //  C@
}


// ================================================
// 0xe93e: WORD 'WE940' codep=0x224c parp=0xe940
// ================================================

void WE940() // WE940
{
  WUP(); // WUP
  Push(0xbe45); // '.HUFF'
  MODULE(); // MODULE
  Push(0xbe96); // 'CPAUS'
  MODULE(); // MODULE
}


// ================================================
// 0xe950: WORD 'EXPOS' codep=0x1d29 parp=0xe95a
// ================================================
// 0xe95a: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 '        '

// ================================================
// 0xe962: WORD 'WE964' codep=0x1d29 parp=0xe964
// ================================================
// 0xe964: db 0x00 0x00 0x00 0x00 '    '

// ================================================
// 0xe968: WORD 'WE96A' codep=0x1d29 parp=0xe96a
// ================================================
// 0xe96a: db 0x00 0x00 0x00 0x00 '    '

// ================================================
// 0xe96e: WORD 'WE970' codep=0x224c parp=0xe970 params=0 returns=1
// ================================================
// orphan

void WE970() // WE970
{
  Push(Read16(pp_EXPOS + 7)&0xFF); // EXPOS 7 + C@
}


// ================================================
// 0xe97c: WORD 'STAGESE' codep=0x1d29 parp=0xe988
// ================================================
// 0xe988: db 0x00 0x00 0x00 0x00 0x00 0x00 '      '

// ================================================
// 0xe98e: WORD 'WE990' codep=0x224c parp=0xe990 params=0 returns=0
// ================================================

void WE990() // WE990
{
  Push(pp_EXPOS); // EXPOS
  Push(8);
  Push(0);
  FILL_2(); // FILL_2
  Push(pp_STAGESE); // STAGESE
  Push(6);
  Push(0);
  FILL_2(); // FILL_2
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xe9a8: WORD 'WE9AA' codep=0x224c parp=0xe9aa params=0 returns=1
// ================================================

void WE9AA() // WE9AA
{
  Push(pp_STAGESE); // STAGESE
}


// ================================================
// 0xe9ae: WORD 'WE9B0' codep=0x224c parp=0xe9b0 params=0 returns=1
// ================================================

void WE9B0() // WE9B0
{
  Push(pp_STAGESE + 1); // STAGESE 1+
}


// ================================================
// 0xe9b6: WORD 'WE9B8' codep=0x224c parp=0xe9b8 params=0 returns=1
// ================================================

void WE9B8() // WE9B8
{
  Push(pp_STAGESE + 2); // STAGESE 2 +
}


// ================================================
// 0xe9c0: WORD 'WE9C2' codep=0x224c parp=0xe9c2 params=0 returns=1
// ================================================

void WE9C2() // WE9C2
{
  Push(pp_STAGESE + 3); // STAGESE 3 +
}


// ================================================
// 0xe9ca: WORD 'WE9CC' codep=0x224c parp=0xe9cc params=0 returns=1
// ================================================

void WE9CC() // WE9CC
{
  Push(pp_STAGESE + 4); // STAGESE 4 +
}


// ================================================
// 0xe9d4: WORD 'WE9D6' codep=0x224c parp=0xe9d6 params=0 returns=1
// ================================================

void WE9D6() // WE9D6
{
  Push(pp_STAGESE + 5); // STAGESE 5 +
}


// ================================================
// 0xe9de: WORD 'WE9E0' codep=0x224c parp=0xe9e0 params=0 returns=2
// ================================================

void WE9E0() // WE9E0
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xe9ea: WORD 'WE9EC' codep=0x224c parp=0xe9ec
// ================================================

void WE9EC() // WE9EC
{
  WE85A(); // WE85A
  IOPEN(); // IOPEN
  Push(0x0019);
  Push(0x001d);
  IFIND(); // IFIND
  Pop(); // DROP
  WE9E0(); // WE9E0
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xea04: WORD 'WEA06' codep=0x224c parp=0xea06 params=0 returns=2
// ================================================

void WEA06() // WEA06
{
  WE862(); // WE862
  WE9E0(); // WE9E0
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea0e: WORD 'WEA10' codep=0x224c parp=0xea10 params=0 returns=3
// ================================================

void WEA10() // WEA10
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  Push(0x00ff);
  Push(0x65e1+WE80A.offset); // WE80A<IFIELD>
  C_ex__2(); // C!_2
  Push(0);
  Push(0x65e1+WE80F.offset); // WE80F<IFIELD>
  C_ex__2(); // C!_2
  CI(); // CI
  ICLOSE(); // ICLOSE
  Push(pp_TERMINA); // TERMINA
  _099(); // 099
  Push(pp_WE806); // WE806
  _099(); // 099
  SAVE_dash_OV(); // SAVE-OV
  Push(1);
  Push(0xbed7); // 'OVINIT-_2'
  MODULE(); // MODULE
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp__n_ETIME); // #ETIME
  StoreD(); // D!
}


// ================================================
// 0xea42: WORD 'WEA44' codep=0x224c parp=0xea44 params=2 returns=2
// ================================================

void WEA44() // WEA44
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
// 0xea54: WORD 'WEA56' codep=0x224c parp=0xea56 params=2 returns=2
// ================================================

void WEA56() // WEA56
{
  unsigned short int a;
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push2Words("0.");
    return;
  }
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
// 0xea90: WORD 'WEA92' codep=0x224c parp=0xea92 params=4 returns=1
// ================================================

void WEA92() // WEA92
{
  unsigned short int a;
  ROT(); // ROT
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  a = Pop(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0);
  Push(a); // R>
  Push(0);
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xeaae: WORD 'WEAB0' codep=0x1d29 parp=0xeab0
// ================================================
// 0xeab0: db 0x56 0x3a 0x20 0x64 'V: d'

// ================================================
// 0xeab4: WORD 'WEAB6' codep=0x1d29 parp=0xeab6
// ================================================
// 0xeab6: db 0x56 0x3a 0x20 0x73 'V: s'

// ================================================
// 0xeaba: WORD 'WEABC' codep=0x1d29 parp=0xeabc
// ================================================
// 0xeabc: db 0x56 0x3a 0x20 0x2d 'V: -'

// ================================================
// 0xeac0: WORD 'WEAC2' codep=0x1d29 parp=0xeac2
// ================================================
// 0xeac2: db 0x56 0x3a 0x20 0x65 'V: e'

// ================================================
// 0xeac6: WORD 'WEAC8' codep=0x1d29 parp=0xeac8
// ================================================
// 0xeac8: db 0x56 0x3a 0x20 0x73 'V: s'

// ================================================
// 0xeacc: WORD 'WEACE' codep=0x224c parp=0xeace params=2 returns=2
// ================================================
// orphan

void WEACE() // WEACE
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0);
  SWAP(); // SWAP
  Push(1);
  Push(a); // R>
  M_star__slash_(); // M*/
}


// ================================================
// 0xeadc: WORD 'WEADE' codep=0x224c parp=0xeade params=0 returns=0
// ================================================

void WEADE() // WEADE
{
  Push(pp_WEAB6); // WEAB6
  _2_at_(); // 2@
  Push(pp_WEAC2); // WEAC2
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_WEAB6); // WEAB6
  StoreD(); // D!
  Push(pp_WEABC); // WEABC
  _2_at_(); // 2@
  Push(pp_WEAC8); // WEAC8
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_WEABC); // WEABC
  StoreD(); // D!
}


// ================================================
// 0xeafc: WORD 'WEAFE' codep=0x224c parp=0xeafe
// ================================================

void WEAFE() // WEAFE
{
  unsigned short int a, b;
  WE862(); // WE862
  WE9E0(); // WE9E0
  Push(pp_WEAB6); // WEAB6
  Store_2(); // !_2
  Push(pp_WEABC); // WEABC
  Store_2(); // !_2
  WE9EC(); // WE9EC
  Push(Pop() + 1); //  1+
  a = Pop(); // >R
  Push((Pop() + 1) - Read16(pp_WEABC)); //  1+ WEABC @ -
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  Push(a - Read16(pp_WEAB6)); // R> WEAB6 @ -
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  ROT(); // ROT
  MAX(); // MAX
  b = Pop(); // >R
  Push(Read16(b)); // R@
  WEACE(); // WEACE
  Push(pp_WEAC2); // WEAC2
  StoreD(); // D!
  Push(b); // R>
  WEACE(); // WEACE
  Push(pp_WEAC8); // WEAC8
  StoreD(); // D!
  Push(0x8000);
  Push(Read16(regsp)); // DUP
  Push(pp_WEABC + 2); // WEABC 2+
  Store_2(); // !_2
  Push(pp_WEAB6 + 2); // WEAB6 2+
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb54: WORD 'WEB56' codep=0x224c parp=0xeb56 params=0 returns=2
// ================================================

void WEB56() // WEB56
{
  Push(Read16(pp_WEABC)); // WEABC @
  Push(Read16(pp_WEAB6)); // WEAB6 @
}


// ================================================
// 0xeb60: WORD 'WEB62' codep=0x224c parp=0xeb62
// ================================================

void WEB62() // WEB62
{
  WE862(); // WE862
  WE9E0(); // WE9E0
  ICLOSE(); // ICLOSE
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  _gt_MAINVI(); // >MAINVI
  WLD_gt_SCR(); // WLD>SCR
  LXPLOT(); // LXPLOT
  WEAFE(); // WEAFE
  while(1)
  {
    WEB56(); // WEB56
    Push(pp_WEAB0); // WEAB0
    StoreD(); // D!
    WEB56(); // WEB56
    WE9EC(); // WE9EC
    Push(Pop() + 1); //  1+
    SWAP(); // SWAP
    Push(Pop() + 1); //  1+
    SWAP(); // SWAP
    D_eq_(); // D=
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    Push(pp_WEAB0); // WEAB0
    _2_at_(); // 2@
    WLD_gt_SCR(); // WLD>SCR
    LXPLOT(); // LXPLOT
    WEADE(); // WEADE
    WEB56(); // WEB56
    WLD_gt_SCR(); // WLD>SCR
    LXPLOT(); // LXPLOT
    V_gt_DISPL(); // V>DISPL
    Push(0x01f4);
    MS(); // MS
  }
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xebae: WORD 'WEBB0' codep=0x224c parp=0xebb0
// ================================================

void WEBB0() // WEBB0
{
  Push(0x1388);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  StoreD(); // D!
  ORGLIST(); // ORGLIST
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  DrawLOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xebc8: WORD 'WEBCA' codep=0x1d29 parp=0xebca
// ================================================
// 0xebca: db 0x3a 0x20 ': '

// ================================================
// 0xebcc: WORD 'WEBCE' codep=0x1d29 parp=0xebce
// ================================================
// 0xebce: db 0x56 0x3a 0x20 0x20 'V:  '

// ================================================
// 0xebd2: WORD 'WEBD4' codep=0x224c parp=0xebd4
// ================================================
// orphan

void WEBD4() // WEBD4
{
  Push(0x7530);
  WE9EC(); // WE9EC
  WEA06(); // WEA06
  WEA92(); // WEA92
  _slash_(); // /
  Push(Pop() * 2); //  2*
  Push(pp_WEBCA); // WEBCA
  Store_2(); // !_2
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_WEBCE); // WEBCE
  StoreD(); // D!
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xebf2: WORD 'WEBF4' codep=0x224c parp=0xebf4 params=0 returns=1
// ================================================

void WEBF4() // WEBF4
{
  Push(pp_WEBCE); // WEBCE
  _2_at_(); // 2@
  Push(Read16(pp_WEBCA)); // WEBCA @
  Push(0);
  D_plus_(); // D+
  TIME(); // TIME
  _2_at_(); // 2@
  D_st_(); // D<
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_WEBCE); // WEBCE
  StoreD(); // D!
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xec18: WORD 'WEC1A' codep=0x224c parp=0xec1a
// ================================================

void WEC1A() // WEC1A
{
  Push(0x0019);
  Push(0x001d);
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  Push(Read16(pp_XABS) - 0x000c); // XABS @ 0x000c -
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
  Push(Read16(pp_YABS) - 0x000c); // YABS @ 0x000c -
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
  Push(0xba55); // 'ICON-'
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
  ICLOSE(); // ICLOSE
  Push(0xec78); // 'WEC78'
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  StoreD(); // D!
  ORGLIST(); // ORGLIST
  Push(pp__ro_ENCOUN); // (ENCOUN
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  Push(1);
  Push(pp__n_VESS); // #VESS
  _plus__ex__2(); // +!_2
  Push(0xc7ce); // 'CSCALE'
  MODULE(); // MODULE
  WEBB0(); // WEBB0
  WEA10(); // WEA10
  Push(pp_IsUF); // ?UF
  ON_2(); // ON_2
}


// ================================================
// 0xec76: WORD 'WEC78' codep=0x224c parp=0xec78
// ================================================

void WEC78() // WEC78
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("AAARRGH! ");
  DrawTTY(); // .TTY
  Push(0x1388);
  MS(); // MS
  Push(0x6733); Push(0x0002);
  WEA44(); // WEA44
  DrawTTY(); // .TTY
  KEY_2(); // KEY_2
  Pop(); // DROP
  BYE_2(); // BYE_2
}


// ================================================
// 0xeca0: WORD 'WECA2' codep=0x224c parp=0xeca2
// ================================================

void WECA2() // WECA2
{
  WE9B0(); // WE9B0
  WE9B8(); // WE9B8
  WE91C(); // WE91C
  WE9CC(); // WE9CC
  WE93A(); // WE93A
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  WE9EC(); // WE9EC
  WEA06(); // WEA06
  D_eq_(); // D=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  WEC78(); // WEC78
}


// ================================================
// 0xecc0: WORD 'TPIC' codep=0x2214 parp=0xecc9
// ================================================
// 0xecc9: dw 0xeccc
// 0xeccb: db 0x00 0x65 0x6e 0x64 0x74 0x6f 0x70 0x2e 0x65 0x67 0x61 0x00 ' endtop.ega '

// ================================================
// 0xecd7: WORD 'BPIC' codep=0x2214 parp=0xece0
// ================================================
// 0xece0: dw 0xece3
// 0xece2: db 0x00 0x65 0x6e 0x64 0x62 0x6f 0x74 0x2e 0x65 0x67 0x61 0x00 ' endbot.ega '

// ================================================
// 0xecee: WORD 'VPIC' codep=0x2214 parp=0xecf7
// ================================================
// 0xecf7: dw 0xecfa
// 0xecf9: db 0x00 0x65 0x6e 0x64 0x70 0x69 0x63 0x2e 0x76 0x67 0x61 0x00 ' endpic.vga '

// ================================================
// 0xed05: WORD 'WED07' codep=0x224c parp=0xed07
// ================================================

void WED07() // WED07
{
  IsVGA(); // ?VGA
  if (Pop() != 0)
  {
    Push(Read16(cc_VPIC)); // VPIC
  } else
  {
    Push(Read16(cc_BPIC)); // BPIC
    Push(Read16(cc_TPIC)); // TPIC
  }
  Push(0x001d);
}


// ================================================
// 0xed1d: WORD 'WED1F' codep=0x224c parp=0xed1f
// ================================================

void WED1F() // WED1F
{
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    _gt_HIDDEN(); // >HIDDEN
    return;
  }
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xed31: WORD 'WED33' codep=0x224c parp=0xed33
// ================================================

void WED33() // WED33
{
  unsigned short int a;
  WED07(); // WED07
  a = Pop(); // >R
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  _ro_LDS_rc_(); // (LDS)
  MOUNTB(); // MOUNTB
  Push(0xb9f9); // 'SETBLT'
  MODULE(); // MODULE
  Push(a); // R>
  BMPAL(); // BMPAL
  C_ex__2(); // C!_2
  DARK(); // DARK
  WED1F(); // WED1F
  DARK(); // DARK
  Push(0);
  Push(0x00c7);
  DrawRAW(); // .RAW
  IsVGA(); // ?VGA
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
    _ro_LDS_rc_(); // (LDS)
    MOUNTB(); // MOUNTB
    Push(0xb9f9); // 'SETBLT'
    MODULE(); // MODULE
    WED1F(); // WED1F
    Push(0);
    Push(0x0064);
    DrawRAW(); // .RAW
  }
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    SCR_dash_RES(); // SCR-RES
  }
  Push(0x1388);
  MS(); // MS
}


// ================================================
// 0xed8b: WORD 'WED8D' codep=0x224c parp=0xed8d params=0 returns=0
// ================================================

void WED8D() // WED8D
{
  unsigned short int i, imax, j, jmax;
  Push(0x012c * Read16(cc_MPS)); // 0x012c MPS *
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x0032);
    Push(0x05dc);
    RRND(); // RRND
    TONE(); // TONE
    Push(Read16(cc_MPS)); // MPS
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      NOP(); // NOP
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xedb7: WORD 'WEDB9' codep=0x224c parp=0xedb9 params=1 returns=0
// ================================================

void WEDB9() // WEDB9
{
  unsigned short int i, imax;
  BEEPON_2(); // BEEPON_2
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    WED8D(); // WED8D
    i++;
  } while(i<imax); // (LOOP)

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xedc9: WORD 'WEDCB' codep=0x224c parp=0xedcb
// ================================================

void WEDCB() // WEDCB
{
  CTINIT(); // CTINIT
  Push(0x00d8);
  WE83C(); // WE83C
  Push(0x2710); Push(0x0000);
  WE940(); // WE940
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xede1: WORD 'WEDE3' codep=0x224c parp=0xede3 params=0 returns=0
// ================================================

void WEDE3() // WEDE3
{
  WE9B8(); // WE9B8
  WE9C2(); // WE9C2
  WE91C(); // WE91C
  if (Pop() == 0) return;
  WE9C2(); // WE9C2
  WE92E(); // WE92E
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_WE964); // WE964
  StoreD(); // D!
}


// ================================================
// 0xedfb: WORD 'WEDFD' codep=0x224c parp=0xedfd
// ================================================

void WEDFD() // WEDFD
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+WE82B.offset)&0xFF | 0x0080); // WE82B<IFIELD> C@ 0x0080 OR
  Push(0x65e1+WE82B.offset); // WE82B<IFIELD>
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
  CTINIT(); // CTINIT
  Push(0x00d1);
  WE83C(); // WE83C
  Push(0x0bb8); Push(0x0000);
  WE940(); // WE940
  Push(3);
  _star_CLOSE(); // *CLOSE
  Push(0x0035);
  Push(0xb76b); // 'OV?ART'
  MODULE(); // MODULE
  if (Pop() == 0) return;
  Push(0x49a8); // 'NULL'
  Push(0xa50f); // ''F9'
  Store_2(); // !_2
  WEDCB(); // WEDCB
}


// ================================================
// 0xee41: WORD 'WEE43' codep=0x224c parp=0xee43
// ================================================

void WEE43() // WEE43
{
  unsigned short int a;
  BEEP(); // BEEP
  WEA06(); // WEA06
  WE9EC(); // WE9EC
  WEA56(); // WEA56
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(a); // R>
  WE862(); // WE862
  _2DUP(); // 2DUP
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
  CI(); // CI
  ICLOSE(); // ICLOSE
  IsICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_I(); // POINT>I
  StoreIY(); // !IY
  StoreIX(); // !IX
  WEBB0(); // WEBB0
}


// ================================================
// 0xee73: WORD 'WEE75' codep=0x224c parp=0xee75 params=0 returns=0
// ================================================

void WEE75() // WEE75
{
  WEBF4(); // WEBF4
  if (Pop() == 0) return;
  WEE43(); // WEE43
}


// ================================================
// 0xee7f: WORD 'WEE81' codep=0x224c parp=0xee81
// ================================================

void WEE81() // WEE81
{
  Push(0);
  Push(4);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    _gt_MAINVI(); // >MAINVI
    RNDCLR(); // RNDCLR
    BFILL(); // BFILL
    DrawLOCAL_dash_(); // .LOCAL-
    V_gt_DISPL(); // V>DISPL
    BEEPON_2(); // BEEPON_2
    WED8D(); // WED8D
    BEEPOFF(); // BEEPOFF
    WEBB0(); // WEBB0
    Push(0);
    Push(2);
    RRND(); // RRND
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      Push(0x000a);
      Push(0xc6ca); // 'CREWD'
      MODULE(); // MODULE
    }
  }
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xeeb9: WORD 'WEEBB' codep=0x224c parp=0xeebb params=0 returns=0
// ================================================

void WEEBB() // WEEBB
{
  WE9CC(); // WE9CC
  WE9D6(); // WE9D6
  WE91C(); // WE91C
  Push(Pop() & Read16(pp_WE806)); //  WE806 @ AND
  if (Pop() == 0) return;
  WEE81(); // WEE81
}


// ================================================
// 0xeecf: WORD 'WEED1' codep=0x224c parp=0xeed1 params=0 returns=0
// ================================================

void WEED1() // WEED1
{
  Push(Read16(pp_TERMINA)); // TERMINA @
  Push(Read16(pp_WE806)); // WE806 @
  _gt_(); // >
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp__n_ETIME); // #ETIME
  _2_at_(); // 2@
  Push(0x5f90); Push(0x0001);
  D_plus_(); // D+
  D_gt_(); // D>
  Push(Pop() & (Read16(pp_WE806)==0?1:0)); //  WE806 @ 0= AND
  Push(Pop() | Pop()); // OR
  WE9B0(); // WE9B0
  WE93A(); // WE93A
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    WE9CC(); // WE9CC
    WE93A(); // WE93A
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      WEBD4(); // WEBD4
      WEDFD(); // WEDFD
    } else
    {
      Push2Words("*SHIP");
      _gt_C_plus_S(); // >C+S
      Push((Read16(0x65e1+WE82B.offset)&0xFF) & 0x007f); // WE82B<IFIELD> C@ 0x007f AND
      Push(0x65e1+WE82B.offset); // WE82B<IFIELD>
      C_ex__2(); // C!_2
      ICLOSE(); // ICLOSE
      CTINIT(); // CTINIT
      Push(0x6757); Push(0x0002);
      WEA44(); // WEA44
      DrawTTY(); // .TTY
    }
    Push(pp_WE806); // WE806
    ON_2(); // ON_2
    SAVE_dash_OV(); // SAVE-OV
  }
  WE9B0(); // WE9B0
  WE9B8(); // WE9B8
  WE91C(); // WE91C
  Push(Pop() & Read16(pp_WE806)); //  WE806 @ AND
  if (Pop() == 0) return;
  WEE75(); // WEE75
}


// ================================================
// 0xef4d: WORD 'WEF4F' codep=0x224c parp=0xef4f params=0 returns=1
// ================================================

void WEF4F() // WEF4F
{
  Push(pp_LSCAN); // LSCAN
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  Push(Pop() + Pop()); // +
  Push(Pop() + 1); //  1+
}


// ================================================
// 0xef5b: WORD 'WEF5D' codep=0x224c parp=0xef5d params=2 returns=0
// ================================================

void WEF5D() // WEF5D
{
  unsigned short int i, imax, a;
  Push(pp_LSCAN); // LSCAN
  _099(); // 099
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_DICT)); // DICT @
    Push(i); // I
    Push(0x65e1+PHRASE.offset); // PHRASE<IFIELD>
    _plus__at_(); // +@
    Push(Pop() + 3); //  3+
    GetDS(); // @DS
    WEF4F(); // WEF4F
    _2OVER(); // 2OVER
    Push(Pop() - 1); //  1-
    LC_at_(); // LC@
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    LCMOVE(); // LCMOVE
    Push(a + (Read16(pp_LSCAN)&0xFF)); // R> LSCAN C@ +
    Push(pp_LSCAN); // LSCAN
    C_ex__2(); // C!_2
    Push(Read16(cc_BL)); // BL
    WEF4F(); // WEF4F
    C_ex__2(); // C!_2
    Push(1 + (Read16(pp_LSCAN)&0xFF)); // 1 LSCAN C@ +
    Push(pp_LSCAN); // LSCAN
    C_ex__2(); // C!_2
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); // DROP
}


// ================================================
// 0xefa9: WORD 'WEFAB' codep=0x224c parp=0xefab
// ================================================

void WEFAB() // WEFAB
{
  Push(1);
  Push(pp_LINE_dash_CO); // LINE-CO
  Store_2(); // !_2
  GetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_2(); // !_2
  WUP(); // WUP
  Push(0x65e1+PHRASE_do_.offset); // PHRASE$<IFIELD>
  COUNT(); // COUNT
  WEF5D(); // WEF5D
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  Push(0xbf6f); // 'P>CT'
  MODULE(); // MODULE
  INEXT(); // INEXT
  Push(0x4e20); Push(0x0000);
  Push(0xbe96); // 'CPAUS'
  MODULE(); // MODULE
}


// ================================================
// 0xefd9: WORD 'WEFDB' codep=0x224c parp=0xefdb
// ================================================

void WEFDB() // WEFDB
{
  unsigned short int i, imax;
  Push(0x1388);
  MS(); // MS
  Push(0x00cd);
  WE83C(); // WE83C
  WEFAB(); // WEFAB
  Push(3);
  _star_CLOSE(); // *CLOSE
  Push(0x000d);
  Push(0xb9c8); // '@.HYBR'
  MODULE(); // MODULE
  Push(0x00cd);
  WE83C(); // WE83C
  INEXT(); // INEXT
  Push(4);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    WEFAB(); // WEFAB
    i++;
  } while(i<imax); // (LOOP)

  KEY_2(); // KEY_2
  Pop(); // DROP
  WED33(); // WED33
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  Pop(); // DROP
  BYE_2(); // BYE_2
}


// ================================================
// 0xf01d: WORD 'WF01F' codep=0x224c parp=0xf01f
// ================================================

void WF01F() // WF01F
{
  WE904(); // WE904
  WE9CC(); // WE9CC
  WE93A(); // WE93A
  Push(Pop() & Pop()); // AND
  Push(Pop() | Read16(pp_WIN)); //  WIN @ OR
  if (Pop() == 0) return;
  WE904(); // WE904
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    WE85A(); // WE85A
    IOPEN(); // IOPEN
    Push(0x0019);
    Push(0x001d);
    IFIND(); // IFIND
    WE86A(); // WE86A
    _dash_ICON(); // -ICON
    WEBB0(); // WEBB0
    ICLOSE(); // ICLOSE
    Push(0x07d0);
    MS(); // MS
  }
  WEFDB(); // WEFDB
}


// ================================================
// 0xf059: WORD 'WF05B' codep=0x224c parp=0xf05b params=0 returns=1
// ================================================

void WF05B() // WF05B
{
  Push(Read16(pp_FONTSEG) + 0x0091); // FONTSEG @ 0x0091 +
}


// ================================================
// 0xf067: WORD 'WF069' codep=0x224c parp=0xf069
// ================================================
// orphan

void WF069() // WF069
{
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(0);
  Push(pp_DTA_1); // DTA_1
  StoreD(); // D!
  DOS_dash_DTA(); // DOS-DTA
}


// ================================================
// 0xf077: WORD 'WF079' codep=0x224c parp=0xf079
// ================================================

void WF079() // WF079
{
  Push(2);
  WEDB9(); // WEDB9
  CTINIT(); // CTINIT
  Push(0x00ca);
  WE83C(); // WE83C
  Push(0x2710); Push(0x0000);
  WE940(); // WE940
  Push(3);
  _star_CLOSE(); // *CLOSE
  Push(2);
  WEDB9(); // WEDB9
}


// ================================================
// 0xf097: WORD 'WF099' codep=0x224c parp=0xf099
// ================================================

void WF099() // WF099
{
  WE86A(); // WE86A
  CTINIT(); // CTINIT
  Push(0x00ca);
  WE83C(); // WE83C
  INEXT(); // INEXT
  Push(0x2710); Push(0x0000);
  WE940(); // WE940
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf0b3: WORD 'ANIM' codep=0x2214 parp=0xf0bc
// ================================================
// 0xf0bc: dw 0xf0bf
// 0xf0be: db 0x00 0x61 0x6e 0x69 0x6d 0x2e 0x72 0x61 0x77 0x00 ' anim.raw '

// ================================================
// 0xf0c8: WORD 'WF0CA' codep=0x224c parp=0xf0ca params=1 returns=1
// ================================================

void WF0CA() // WF0CA
{
  Push(Pop() * 0x001f + Read16(pp_SSYSEG)); //  0x001f * SSYSEG @ +
}


// ================================================
// 0xf0d8: WORD 'WF0DA' codep=0x224c parp=0xf0da params=1 returns=0
// ================================================

void WF0DA() // WF0DA
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0xb9f9); // 'SETBLT'
  MODULE(); // MODULE
  Push2Words("NULL");
  BMWIDE(); // BMWIDE
  Push(Pop() + 2); //  2+
  StoreD(); // D!
  Push(0x000e);
  BMOFF(); // BMOFF
  Store_2(); // !_2
  Push(Read16(a)); // R@
  BMSEG(); // BMSEG
  Store_2(); // !_2
  Push(pp_BMAP + 0x000c); // BMAP 0x000c +
  _099(); // 099
  GetDS(); // @DS
  Push(pp_BMAP); // BMAP
  Push(Read16(a)); // R@
  Push(0);
  Push(0x000e);
  LCMOVE(); // LCMOVE
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    WF05B(); // WF05B
    Push(2);
  } else
  {
    Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
    Push(0x000d);
  }
  Push(a); // R>
  Push(0x000e);
  Push(0x01e0);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xf136: WORD 'WF138' codep=0x224c parp=0xf138 params=1 returns=0
// ================================================

void WF138() // WF138
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(Read16(a)); // R@
  Push(Pop() * 0x018d); //  0x018d *
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(0);
  Push(0x018d);
  LCMOVE(); // LCMOVE
  Push(a); // R>
  WF0CA(); // WF0CA
  WF0DA(); // WF0DA
}


// ================================================
// 0xf15a: WORD 'WF15C' codep=0x224c parp=0xf15c
// ================================================

void WF15C() // WF15C
{
  unsigned short int i, imax;
  TIME(); // TIME
  _2_at_(); // 2@
  SAVE_dash_BU(); // SAVE-BU
  Push(Read16(cc_ANIM)); // ANIM
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  _ro_LDS_rc_(); // (LDS)
  TIME(); // TIME
  StoreD(); // D!
  MOUNTB(); // MOUNTB
  Push(0x000a);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    WF138(); // WF138
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf182: WORD 'WF184' codep=0x224c parp=0xf184
// ================================================

void WF184() // WF184
{
  WF0CA(); // WF0CA
  Push(0);
  GetDS(); // @DS
  Push(pp_BMAP); // BMAP
  Push(0x000e);
  LCMOVE(); // LCMOVE
  Push(Read16(pp_XBLT)); // XBLT @
  Push(Read16(pp_YBLT)); // YBLT @
  DrawRAW(); // .RAW
}


// ================================================
// 0xf19e: WORD 'WF1A0' codep=0x224c parp=0xf1a0 params=1 returns=1
// ================================================

void WF1A0() // WF1A0
{
  Push(-2);
  Push(3);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf1aa: WORD 'WF1AC' codep=0x224c parp=0xf1ac
// ================================================

void WF1AC() // WF1AC
{
  Push(0x0021);
  WF1A0(); // WF1A0
  Push(0x0045);
  WF1A0(); // WF1A0
  POS_dot_(); // POS.
  Push(8);
  WF184(); // WF184
}


// ================================================
// 0xf1c0: WORD 'WF1C2' codep=0x224c parp=0xf1c2
// ================================================

void WF1C2() // WF1C2
{
  Push(0x002a);
  WF1A0(); // WF1A0
  Push(0x0057);
  WF1A0(); // WF1A0
  POS_dot_(); // POS.
  Push(9);
  WF184(); // WF184
}


// ================================================
// 0xf1d6: WORD 'WF1D8' codep=0x224c parp=0xf1d8 params=0 returns=0
// ================================================

void WF1D8() // WF1D8
{
  WE9AA(); // WE9AA
  WE93A(); // WE93A
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  WE990(); // WE990
  WE9AA(); // WE9AA
  WE92E(); // WE92E
  Push(pp_WE806); // WE806
  _099(); // 099
  Push(5);
  Push(0xc5da); // 'DO-CLOU'
  MODULE(); // MODULE
  Push(pp_IsAF); // ?AF
  _099(); // 099
  Push(pp_IsUF); // ?UF
  _099(); // 099
  Push(pp_WIN); // WIN
  _099(); // 099
  Push2Words("NULL");
  _2DUP(); // 2DUP
  Push(pp_WE96A); // WE96A
  StoreD(); // D!
  Push(pp_WE964); // WE964
  StoreD(); // D!
}


// ================================================
// 0xf20e: WORD 'WF210' codep=0x224c parp=0xf210
// ================================================

void WF210() // WF210
{
  WE8DE(); // WE8DE
  WE9B0(); // WE9B0
  WE93A(); // WE93A
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  WUP(); // WUP
  WF079(); // WF079
  WE9B0(); // WE9B0
  WE92E(); // WE92E
  WEC1A(); // WEC1A
  WEBB0(); // WEBB0
  WF099(); // WF099
  Push(pp_FORCEPT); // FORCEPT
  _099(); // 099
  Push(0x00cb);
  WE83C(); // WE83C
  Push(0x1388); Push(0x0000);
  WE940(); // WE940
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf244: WORD 'WF246' codep=0x224c parp=0xf246
// ================================================

void WF246() // WF246
{
  WF1AC(); // WF1AC
  WF1C2(); // WF1C2
}


// ================================================
// 0xf24c: WORD 'WF24E' codep=0x224c parp=0xf24e
// ================================================

void WF24E() // WF24E
{
  Push(0x0026);
  Push(0x004d);
  POS_dot_(); // POS.
  Push(0);
  Push(4);
  RRND(); // RRND
  WF184(); // WF184
}


// ================================================
// 0xf262: WORD 'WF264' codep=0x224c parp=0xf264
// ================================================

void WF264() // WF264
{
  unsigned short int i, imax, j, jmax;
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  WF24E(); // WF24E
  V_gt_DISPL(); // V>DISPL
  BEEPON_2(); // BEEPON_2
  Push(4);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    WED8D(); // WED8D
    i++;
  } while(i<imax); // (LOOP)

  Push(9);
  Push(4);

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
    _gt_MAINVI(); // >MAINVI
    DARK(); // DARK
    WF1AC(); // WF1AC
    Push(!(j==8?1:0)); // I 8 = NOT
    if (Pop() != 0)
    {
      Push(0x002c);
      Push(0x0057);
      POS_dot_(); // POS.
      Push(j); // I
      WF184(); // WF184
    }
    V_gt_DISPL(); // V>DISPL
    WED8D(); // WED8D
    j++;
  } while(j<jmax); // (LOOP)

  Push(3);
  WEDB9(); // WEDB9
}


// ================================================
// 0xf2ae: WORD 'WF2B0' codep=0x224c parp=0xf2b0 params=0 returns=1
// ================================================

void WF2B0() // WF2B0
{
  unsigned short int i, imax;
  BEEPON_2(); // BEEPON_2
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_WE964); // WE964
  _2_at_(); // 2@
  D_dash_(); // D-
  Pop(); // DROP
  Push(0x7530);
  SWAP(); // SWAP
  _dash_(); // -
  ABS(); // ABS
  Push(0x0014);
  _slash_(); // /
  Push(Read16(regsp)); // DUP
  Push(Pop() + 0x0064); //  0x0064 +
  RRND(); // RRND
  Push(0x03e8 * Read16(cc_MPS)); // 0x03e8 MPS *
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x0032);
    OVER(); // OVER
    RRND(); // RRND
    TONE(); // TONE
    i++;
  } while(i<imax); // (LOOP)

  BEEPOFF(); // BEEPOFF
  Pop(); // DROP
}


// ================================================
// 0xf2f8: WORD 'WF2FA' codep=0x224c parp=0xf2fa
// ================================================

void WF2FA() // WF2FA
{
  unsigned short int i, imax;
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  Push(0);
  Push(6);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(0);
    Push(4);
    RRND(); // RRND
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      WF24E(); // WF24E
      V_gt_DISPL(); // V>DISPL
      DARK(); // DARK
      Push(Read16(pp_Get_co_0_star_1_sc_)); // @,0*1; @
      if (Pop() != 0)
      {
        WF2B0(); // WF2B0
      }
      Push(0x000f);
      MS(); // MS
      i++;
    } while(i<imax); // (LOOP)

  }
  WF246(); // WF246
  Push(0x000a);
  MS(); // MS
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xf33c: WORD 'WF33E' codep=0x224c parp=0xf33e params=0 returns=0
// ================================================

void WF33E() // WF33E
{
  unsigned short int i, imax;
  WE970(); // WE970
  Push(!Pop()); //  NOT
  Push(pp_WE964); // WE964
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(Pop() & Read16(pp_IsUF)); //  ?UF @ AND
  WE9B8(); // WE9B8
  WE93A(); // WE93A
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0x00ce);
  WE83C(); // WE83C
  ILAST(); // ILAST
  Push(8);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    WF2FA(); // WF2FA
    Push(i + pp_EXPOS); // I EXPOS +
    Push(0x0fa0);
    Push(i); // I
    M_star_(); // M*
    Push(pp_WE964); // WE964
    _2_at_(); // 2@
    D_plus_(); // D+
    TIME(); // TIME
    _2_at_(); // 2@
    D_st_(); // D<
    OVER(); // OVER
    WE93A(); // WE93A
    Push(!Pop()); //  NOT
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      WE92E(); // WE92E
      CTINIT(); // CTINIT
      WUP(); // WUP
      Push(0xbe45); // '.HUFF'
      MODULE(); // MODULE
    } else
    {
      Pop(); // DROP
    }
    IPREV(); // IPREV
    i++;
  } while(i<imax); // (LOOP)

  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf3b2: WORD 'WF3B4' codep=0x224c parp=0xf3b4
// ================================================

void WF3B4() // WF3B4
{
  WF264(); // WF264
  WEA10(); // WEA10
  Push(0x00cc);
  WE83C(); // WE83C
  Push(0x2710); Push(0x0000);
  WE940(); // WE940
  Push(3);
  _star_CLOSE(); // *CLOSE
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_WE96A); // WE96A
  StoreD(); // D!
  WE85A(); // WE85A
  IOPEN(); // IOPEN
  Push(0x0019);
  Push(0x001d);
  IFIND(); // IFIND
  Pop(); // DROP
  Push(-1);
  LoadData(WE823); // from 'VESSEL'
  Store_2(); // !_2
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf3ee: WORD 'WF3F0' codep=0x224c parp=0xf3f0 params=0 returns=0
// ================================================

void WF3F0() // WF3F0
{
  WE970(); // WE970
  WE9CC(); // WE9CC
  WE93A(); // WE93A
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  WE9CC(); // WE9CC
  WE92E(); // WE92E
  WF3B4(); // WF3B4
  Push(-1);
  Push(pp_IsAF); // ?AF
  Store_2(); // !_2
}


// ================================================
// 0xf40c: WORD 'BOLT' codep=0x224c parp=0xf415
// ================================================
// entry

void BOLT() // BOLT
{
  WE9B0(); // WE9B0
  WE93A(); // WE93A
  if (Pop() != 0)
  {
    WE9B0(); // WE9B0
    WE9B8(); // WE9B8
    WE91C(); // WE91C
    if (Pop() != 0)
    {
      WE9B8(); // WE9B8
      WE92E(); // WE92E
      WF15C(); // WF15C
      CTINIT(); // CTINIT
      Push(0x6776); Push(0x0002);
      WEA44(); // WEA44
      BEEP(); // BEEP
      DrawTTY(); // .TTY
      WEB62(); // WEB62
      Push(pp_IsAF); // ?AF
      ON_2(); // ON_2
      Push(0x67a0); Push(0x0002);
      WEA44(); // WEA44
      DrawTTY(); // .TTY
      Push(0x07d0);
      MS(); // MS
      Push(0x0064);
      Push(0xbf4a); // 'OV+!EDL'
      MODULE(); // MODULE
    }
    SAVE_dash_OV(); // SAVE-OV
    return;
  }
  CTINIT(); // CTINIT
  Push(0x00d0);
  WE83C(); // WE83C
  Push(0x4e20); Push(0x0000);
  WE940(); // WE940
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf477: WORD 'WF479' codep=0x224c parp=0xf479
// ================================================

void WF479() // WF479
{
  Push(0x00ff);
  WE83C(); // WE83C
  ILAST(); // ILAST
  do
  {
    _gt_TVCT(); // >TVCT
    CTINIT(); // CTINIT
    Push(0x9c40); Push(0x0000);
    WE940(); // WE940
    IPREV(); // IPREV
    IsLAST(); // ?LAST
    WUP(); // WUP
  } while(Pop() == 0);
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf49d: WORD 'WF49F' codep=0x224c parp=0xf49f
// ================================================

void WF49F() // WF49F
{
  Push(0x001c);
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  LoadData(ART_dash_VOL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  _gt_BOX(); // >BOX
  Push(0xb6ec); // '=CARGO'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4c5: WORD 'WF4C7' codep=0x224c parp=0xf4c7 params=1 returns=0
// ================================================

void WF4C7() // WF4C7
{
  Push(Read16(regsp)); // DUP
  Push(0xb76b); // 'OV?ART'
  MODULE(); // MODULE
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    WF49F(); // WF49F
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf4df: WORD 'WF4E1' codep=0x224c parp=0xf4e1 params=0 returns=0
// ================================================

void WF4E1() // WF4E1
{
  Push(0x0036);
  WF4C7(); // WF4C7
}


// ================================================
// 0xf4e9: WORD 'WF4EB' codep=0x224c parp=0xf4eb params=0 returns=0
// ================================================

void WF4EB() // WF4EB
{
  Push(0x0037);
  WF4C7(); // WF4C7
}


// ================================================
// 0xf4f3: WORD 'WF4F5' codep=0x224c parp=0xf4f5
// ================================================

void WF4F5() // WF4F5
{
  WF1D8(); // WF1D8
  WF210(); // WF210
  WEED1(); // WEED1
  WEDE3(); // WEDE3
  WF33E(); // WF33E
  WF3F0(); // WF3F0
  WECA2(); // WECA2
  WF01F(); // WF01F
  WEEBB(); // WEEBB
}


// ================================================
// 0xf509: WORD 'DO-HALLS' codep=0x224c parp=0xf516
// ================================================
// entry

void DO_dash_HALLS() // DO-HALLS
{
  Push(0x000c);
  Push(0xb9c8); // '@.HYBR'
  MODULE(); // MODULE
  WF479(); // WF479
  WF4E1(); // WF4E1
  WF4EB(); // WF4EB
  Push(pp_PIC_n_); // PIC#
  _099(); // 099
}


// ================================================
// 0xf52c: WORD '!INIT' codep=0x224c parp=0xf536 params=0 returns=0
// ================================================
// entry

void StoreINIT() // !INIT
{
  WE990(); // WE990
  WF1D8(); // WF1D8
}


// ================================================
// 0xf53c: WORD 'DUHL' codep=0x224c parp=0xf545
// ================================================
// entry

void DUHL() // DUHL
{
  WF4F5(); // WF4F5
  SAVE_dash_OV(); // SAVE-OV
}

// 0xf54b: db 0x45 0x4e 0x44 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'END-_________________ '

