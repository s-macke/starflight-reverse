// ====== OVERLAY 'COMMSPEC-OV' ======
// store offset = 0xe540
// overlay size   = 0x1020

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WE556  codep:0x224c wordp:0xe556 size:0x0008 C-string:'WE556'
//           WE560  codep:0x224c wordp:0xe560 size:0x000a C-string:'WE560'
//           WE56C  codep:0x224c wordp:0xe56c size:0x0008 C-string:'WE56C'
//           WE576  codep:0x224c wordp:0xe576 size:0x0008 C-string:'WE576'
//           WE580  codep:0x224c wordp:0xe580 size:0x0008 C-string:'WE580'
//           WE58A  codep:0x224c wordp:0xe58a size:0x0012 C-string:'WE58A'
//           WE59E  codep:0x224c wordp:0xe59e size:0x0042 C-string:'WE59E'
//           WE5E2  codep:0x224c wordp:0xe5e2 size:0x0010 C-string:'WE5E2'
//           WE5F4  codep:0x224c wordp:0xe5f4 size:0x0008 C-string:'WE5F4'
//           WE5FE  codep:0x224c wordp:0xe5fe size:0x0016 C-string:'WE5FE'
//           WE616  codep:0x7420 wordp:0xe616 size:0x0003 C-string:'WE616'
//           WE61B  codep:0x7420 wordp:0xe61b size:0x0003 C-string:'WE61B'
//           WE620  codep:0x7420 wordp:0xe620 size:0x0003 C-string:'WE620'
//           WE625  codep:0x7420 wordp:0xe625 size:0x0003 C-string:'WE625'
//           WE62A  codep:0x7420 wordp:0xe62a size:0x0003 C-string:'WE62A'
//           WE62F  codep:0x7420 wordp:0xe62f size:0x0003 C-string:'WE62F'
//           WE634  codep:0x7420 wordp:0xe634 size:0x0003 C-string:'WE634'
//           WE639  codep:0x7420 wordp:0xe639 size:0x0003 C-string:'WE639'
//           WE63E  codep:0x1d29 wordp:0xe63e size:0x0002 C-string:'WE63E'
//           WE642  codep:0x224c wordp:0xe642 size:0x0014 C-string:'WE642'
//           WE658  codep:0x224c wordp:0xe658 size:0x0041 C-string:'WE658'
//           WE69B  codep:0x224c wordp:0xe69b size:0x001d C-string:'WE69B'
//           WE6BA  codep:0x224c wordp:0xe6ba size:0x0010 C-string:'WE6BA'
//           WE6CC  codep:0x224c wordp:0xe6cc size:0x000e C-string:'WE6CC'
//          ?VOWEL  codep:0x4b3b wordp:0xe6e5 size:0x0018 C-string:'IsVOWEL'
//           WE6FF  codep:0x224c wordp:0xe6ff size:0x0006 C-string:'WE6FF'
//           WE707  codep:0x224c wordp:0xe707 size:0x000c C-string:'WE707'
//           WE715  codep:0x224c wordp:0xe715 size:0x0008 C-string:'WE715'
//           WE71F  codep:0x224c wordp:0xe71f size:0x0012 C-string:'WE71F'
//           WE733  codep:0x224c wordp:0xe733 size:0x0036 C-string:'WE733'
//           WE76B  codep:0x224c wordp:0xe76b size:0x0010 C-string:'WE76B'
//           WE77D  codep:0x224c wordp:0xe77d size:0x000e C-string:'WE77D'
//           WE78D  codep:0x224c wordp:0xe78d size:0x0012 C-string:'WE78D'
//           WE7A1  codep:0x224c wordp:0xe7a1 size:0x0016 C-string:'WE7A1'
//           WE7B9  codep:0x224c wordp:0xe7b9 size:0x001e C-string:'WE7B9'
//           WE7D9  codep:0x224c wordp:0xe7d9 size:0x001e C-string:'WE7D9'
//           WE7F9  codep:0x224c wordp:0xe7f9 size:0x000e C-string:'WE7F9'
//           WE809  codep:0x224c wordp:0xe809 size:0x000a C-string:'WE809'
//           WE815  codep:0x224c wordp:0xe815 size:0x002a C-string:'WE815'
//           WE841  codep:0x224c wordp:0xe841 size:0x000c C-string:'WE841'
//           WE84F  codep:0x224c wordp:0xe84f size:0x006e C-string:'WE84F'
//           WE8BF  codep:0x224c wordp:0xe8bf size:0x0016 C-string:'WE8BF'
//           WE8D7  codep:0x224c wordp:0xe8d7 size:0x0018 C-string:'WE8D7'
//           WE8F1  codep:0x224c wordp:0xe8f1 size:0x0008 C-string:'WE8F1'
//           WE8FB  codep:0x224c wordp:0xe8fb size:0x0022 C-string:'WE8FB'
//           WE91F  codep:0x224c wordp:0xe91f size:0x0014 C-string:'WE91F'
//           WE935  codep:0x224c wordp:0xe935 size:0x0022 C-string:'WE935'
//           WE959  codep:0x224c wordp:0xe959 size:0x0058 C-string:'WE959'
//           WE9B3  codep:0x224c wordp:0xe9b3 size:0x000e C-string:'WE9B3'
//           WE9C3  codep:0x224c wordp:0xe9c3 size:0x005c C-string:'WE9C3'
//           WEA21  codep:0x224c wordp:0xea21 size:0x000a C-string:'WEA21'
//           WEA2D  codep:0x224c wordp:0xea2d size:0x0014 C-string:'WEA2D'
//           WEA43  codep:0x224c wordp:0xea43 size:0x000c C-string:'WEA43'
//           WEA51  codep:0x224c wordp:0xea51 size:0x0010 C-string:'WEA51'
//           WEA63  codep:0x224c wordp:0xea63 size:0x0032 C-string:'WEA63'
//           WEA97  codep:0x7420 wordp:0xea97 size:0x0003 C-string:'WEA97'
//           WEA9C  codep:0x7420 wordp:0xea9c size:0x0003 C-string:'WEA9C'
//           WEAA1  codep:0x224c wordp:0xeaa1 size:0x00b4 C-string:'WEAA1'
//      GORZEK>UHL  codep:0x224c wordp:0xeb64 size:0x0090 C-string:'GORZEK_gt_UHL'
//           WEBF6  codep:0x224c wordp:0xebf6 size:0x003e C-string:'WEBF6'
//           WEC36  codep:0x224c wordp:0xec36 size:0x0038 C-string:'WEC36'
//           WEC70  codep:0x224c wordp:0xec70 size:0x0012 C-string:'WEC70'
//           WEC84  codep:0x224c wordp:0xec84 size:0x0012 C-string:'WEC84'
//          NPCREW  codep:0x4b3b wordp:0xeca1 size:0x000c C-string:'NPCREW'
//           WECAF  codep:0x224c wordp:0xecaf size:0x002c C-string:'WECAF'
//           WECDD  codep:0x224c wordp:0xecdd size:0x007a C-string:'WECDD'
//           WED59  codep:0x224c wordp:0xed59 size:0x0016 C-string:'WED59'
//           WED71  codep:0x224c wordp:0xed71 size:0x002c C-string:'WED71'
//           WED9F  codep:0x224c wordp:0xed9f size:0x0014 C-string:'WED9F'
//           WEDB5  codep:0x224c wordp:0xedb5 size:0x000c C-string:'WEDB5'
//           WEDC3  codep:0x224c wordp:0xedc3 size:0x000c C-string:'WEDC3'
//           WEDD1  codep:0x224c wordp:0xedd1 size:0x0036 C-string:'WEDD1'
//           WEE09  codep:0x224c wordp:0xee09 size:0x000c C-string:'WEE09'
//           WEE17  codep:0x224c wordp:0xee17 size:0x0042 C-string:'WEE17'
//           WEE5B  codep:0x224c wordp:0xee5b size:0x001e C-string:'WEE5B'
//           WEE7B  codep:0x224c wordp:0xee7b size:0x000e C-string:'WEE7B'
//           WEE8B  codep:0x224c wordp:0xee8b size:0x000c C-string:'WEE8B'
//           WEE99  codep:0x224c wordp:0xee99 size:0x0022 C-string:'WEE99'
//           WEEBD  codep:0x224c wordp:0xeebd size:0x0022 C-string:'WEEBD'
//           WEEE1  codep:0x224c wordp:0xeee1 size:0x000a C-string:'WEEE1'
//           WEEED  codep:0x224c wordp:0xeeed size:0x0008 C-string:'WEEED'
//           WEEF7  codep:0x224c wordp:0xeef7 size:0x000c C-string:'WEEF7'
//           WEF05  codep:0x224c wordp:0xef05 size:0x0032 C-string:'WEF05'
//           WEF39  codep:0x224c wordp:0xef39 size:0x0014 C-string:'WEF39'
//           WEF4F  codep:0x224c wordp:0xef4f size:0x0098 C-string:'WEF4F'
//           WEFE9  codep:0x224c wordp:0xefe9 size:0x0016 C-string:'WEFE9'
//           WF001  codep:0x224c wordp:0xf001 size:0x0033 C-string:'WF001'
//           WF036  codep:0x224c wordp:0xf036 size:0x002a C-string:'WF036'
//           WF062  codep:0x224c wordp:0xf062 size:0x0012 C-string:'WF062'
//           WF076  codep:0x224c wordp:0xf076 size:0x0010 C-string:'WF076'
//           WF088  codep:0x224c wordp:0xf088 size:0x005c C-string:'WF088'
//           WF0E6  codep:0x224c wordp:0xf0e6 size:0x0032 C-string:'WF0E6'
//           WF11A  codep:0x224c wordp:0xf11a size:0x001e C-string:'WF11A'
//           WF13A  codep:0x224c wordp:0xf13a size:0x0054 C-string:'WF13A'
//           WF190  codep:0x224c wordp:0xf190 size:0x0040 C-string:'WF190'
//           WF1D2  codep:0x224c wordp:0xf1d2 size:0x0022 C-string:'WF1D2'
//           WF1F6  codep:0x224c wordp:0xf1f6 size:0x000c C-string:'WF1F6'
//           WF204  codep:0x224c wordp:0xf204 size:0x0024 C-string:'WF204'
//           WF22A  codep:0x224c wordp:0xf22a size:0x0010 C-string:'WF22A'
//           WF23C  codep:0x224c wordp:0xf23c size:0x0006 C-string:'WF23C'
//       #>PROTEST  codep:0x4b3b wordp:0xf250 size:0x0010 C-string:'_n__gt_PROTEST'
//           #>PRO  codep:0x224c wordp:0xf26a size:0x0012 C-string:'_n__gt_PRO'
//           WF27E  codep:0x224c wordp:0xf27e size:0x000a C-string:'WF27E'
//           WF28A  codep:0x224c wordp:0xf28a size:0x0052 C-string:'WF28A'
//           WF2DE  codep:0x224c wordp:0xf2de size:0x000a C-string:'WF2DE'
//           WF2EA  codep:0x224c wordp:0xf2ea size:0x000a C-string:'WF2EA'
//           WF2F6  codep:0x224c wordp:0xf2f6 size:0x003a C-string:'WF2F6'
//           WF332  codep:0x224c wordp:0xf332 size:0x000a C-string:'WF332'
//           WF33E  codep:0x224c wordp:0xf33e size:0x002a C-string:'WF33E'
//           WF36A  codep:0x224c wordp:0xf36a size:0x0028 C-string:'WF36A'
//           WF394  codep:0x224c wordp:0xf394 size:0x0056 C-string:'WF394'
//           WF3EC  codep:0x224c wordp:0xf3ec size:0x0018 C-string:'WF3EC'
//           WF406  codep:0x1d29 wordp:0xf406 size:0x0002 C-string:'WF406'
//           WF40A  codep:0x224c wordp:0xf40a size:0x0038 C-string:'WF40A'
//           WF444  codep:0x224c wordp:0xf444 size:0x002c C-string:'WF444'
//           WF472  codep:0x1d29 wordp:0xf472 size:0x0003 C-string:'WF472'
//           WF477  codep:0x1d29 wordp:0xf477 size:0x0005 C-string:'WF477'
//           WF47E  codep:0x1d29 wordp:0xf47e size:0x0005 C-string:'WF47E'
//           WF485  codep:0x1d29 wordp:0xf485 size:0x0007 C-string:'WF485'
//           WF48E  codep:0x1d29 wordp:0xf48e size:0x0005 C-string:'WF48E'
//           WF495  codep:0x1d29 wordp:0xf495 size:0x0005 C-string:'WF495'
//           WF49C  codep:0x1d29 wordp:0xf49c size:0x0005 C-string:'WF49C'
//           WF4A3  codep:0x1d29 wordp:0xf4a3 size:0x0003 C-string:'WF4A3'
//           WF4A8  codep:0x1d29 wordp:0xf4a8 size:0x0003 C-string:'WF4A8'
//           WF4AD  codep:0x224c wordp:0xf4ad size:0x0036 C-string:'WF4AD'
//         SA-CASE  codep:0x4b3b wordp:0xf4ef size:0x002c C-string:'SA_dash_CASE'
//           WF51D  codep:0x224c wordp:0xf51d size:0x0014 C-string:'WF51D'
//         (XCOMM)  codep:0x224c wordp:0xf53d size:0x0000 C-string:'_ro_XCOMM_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int cc_MPS; // MPS
extern const unsigned short int pp_Get_co_0_star_1_sc_; // @,0*1;
extern const unsigned short int pp_IsNID; // ?NID
extern const unsigned short int pp_WIN; // WIN
extern const unsigned short int pp_IsAF; // ?AF
extern const unsigned short int pp_P_dash_POSTU; // P-POSTU
extern const unsigned short int pp_ELEM_dash_AM; // ELEM-AM
extern const unsigned short int pp_EDL; // EDL
extern const unsigned short int pp_A_dash_POSTU; // A-POSTU
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp_CTCOLOR; // CTCOLOR
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp__ro_STOP_dash_C; // (STOP-C
extern const unsigned short int pp_THIS_dash_BU; // THIS-BU
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_LINE_dash_CO; // LINE-CO
extern const unsigned short int pp_Is5_c__ro_; // ?5:(
extern const unsigned short int pp_TERMINA; // TERMINA
extern const unsigned short int pp_IsMVT; // ?MVT
extern const unsigned short int pp_E_dash_USE; // E-USE
extern const unsigned short int pp_IsSECURE; // ?SECURE
extern const unsigned short int pp__i_RSIDE; // 'RSIDE
extern const unsigned short int pp_Is10; // ?10
extern const unsigned short int pp_Is5; // ?5
extern const unsigned short int pp_TIRED_dash_T; // TIRED-T
extern const unsigned short int pp_OK_dash_TALK; // OK-TALK
extern const unsigned short int pp__ro_ENCOUN; // (ENCOUN
extern const unsigned short int pp__ro_AORIGI; // (AORIGI
extern const unsigned short int pp_LSCAN; // LSCAN
extern LoadDataType ART_dash_VOL; // ART-VOL
extern Color BLACK; // BLACK
extern Color BLUE; // BLUE
extern Color PINK; // PINK
extern Color YELLOW; // YELLOW
extern IFieldType INST_dash_SI; // INST-SI
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType PHRASE_do_; // PHRASE$
void COUNT(); // COUNT
void MAX(); // MAX
void MIN(); // MIN
void PAD(); // PAD
void _dash_TRAILING(); // -TRAILING
void Draw(); // .
void MS(); // MS
void UPDATE(); // UPDATE
void NOP(); // NOP
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void KEY_2(); // KEY_2
void _3_star_(); // 3*
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void I_gt_C(); // I>C
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void FILL_2(); // FILL_2
void GetRECORD(); // @RECORD
void StoreINST_dash_S(); // !INST-S
void GetINST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void CDROP(); // CDROP
void IsNULL(); // ?NULL
void SET_dash_CUR(); // SET-CUR
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void INEXT(); // INEXT
void IPREV(); // IPREV
void ILAST(); // ILAST
void SAVE_dash_BU(); // SAVE-BU
void IFIND(); // IFIND
void _gt_INACTI(); // >INACTI
void IDELETE(); // IDELETE
void ICREATE(); // ICREATE
void SAVE_dash_OV(); // SAVE-OV
void IsCGA(); // ?CGA
void StoreCOLOR(); // !COLOR
void BYE_2(); // BYE_2
void INIT_dash_IC(); // INIT-IC
void _dash_ICON(); // -ICON
void _plus_ICONBO(); // +ICONBO
void CTPOS_dot_(); // CTPOS.
void CTERASE(); // CTERASE
void BEEPON_2(); // BEEPON_2
void StoreCRS(); // !CRS
void _do__dot_(); // $.
void POLY_dash_ER(); // POLY-ER
void WUP(); // WUP
void TTY_dash_SCR(); // TTY-SCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void DrawON(); // .ON
void INIT_dash_BU(); // INIT-BU
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void DrawBTN_dash_TE(); // .BTN-TE
void NEW_dash_BUT(); // NEW-BUT
void _do__ex_(); // $!
void CMESS(); // CMESS
void ORGIA(); // ORGIA
void _gt_BOX(); // >BOX
void _ro_BOX_gt__rc_(); // (BOX>)
void DrawSORD(); // .SORD
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
void DNEGATE(); // DNEGATE
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void S_dash__gt_D(); // S->D
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void GetEXECUTE(); // @EXECUTE
void C_gt_(); // C>
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WE63E = 0xe63e; // WE63E size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF406 = 0xf406; // WF406 size: 2
// {0x00, 0x00}

const unsigned short int pp_WF472 = 0xf472; // WF472 size: 3
// {0x01, 0xc3, 0xe9}

const unsigned short int pp_WF477 = 0xf477; // WF477 size: 5
// {0x02, 0x4f, 0xef, 0x88, 0xf0}

const unsigned short int pp_WF47E = 0xf47e; // WF47E size: 5
// {0x02, 0x0a, 0xf4, 0x44, 0xf4}

const unsigned short int pp_WF485 = 0xf485; // WF485 size: 7
// {0x03, 0x1a, 0xf1, 0x64, 0xeb, 0xe6, 0xf0}

const unsigned short int pp_WF48E = 0xf48e; // WF48E size: 5
// {0x02, 0x59, 0xe9, 0xd1, 0xed}

const unsigned short int pp_WF495 = 0xf495; // WF495 size: 5
// {0x02, 0x59, 0xe9, 0xd1, 0xed}

const unsigned short int pp_WF49C = 0xf49c; // WF49C size: 5
// {0x02, 0xf6, 0xf2, 0x8a, 0xf2}

const unsigned short int pp_WF4A3 = 0xf4a3; // WF4A3 size: 3
// {0x01, 0x3a, 0xf1}

const unsigned short int pp_WF4A8 = 0xf4a8; // WF4A8 size: 3
// {0x01, 0x94, 0xf3}




// 0xe552: db 0x01 0x01 '  '

// ================================================
// 0xe554: WORD 'WE556' codep=0x224c wordp=0xe556 params=0 returns=0
// ================================================

void WE556() // WE556
{
  Push(0xb76b); // 'OV?ART'
  MODULE(); // MODULE
}


// ================================================
// 0xe55e: WORD 'WE560' codep=0x224c wordp=0xe560 params=0 returns=0
// ================================================
// orphan

void WE560() // WE560
{
  Push(Read16(pp_E_dash_USE)); // E-USE @
  Push(pp__dash_END); // -END
  Store_2(); // !_2
}


// ================================================
// 0xe56a: WORD 'WE56C' codep=0x224c wordp=0xe56c params=0 returns=0
// ================================================
// orphan

void WE56C() // WE56C
{
  Push(0xbf16); // 'A>O'
  MODULE(); // MODULE
}


// ================================================
// 0xe574: WORD 'WE576' codep=0x224c wordp=0xe576 params=0 returns=0
// ================================================
// orphan

void WE576() // WE576
{
  Push(0xbf26); // 'O>C'
  MODULE(); // MODULE
}


// ================================================
// 0xe57e: WORD 'WE580' codep=0x224c wordp=0xe580 params=0 returns=0
// ================================================

void WE580() // WE580
{
  Push(0xbf4a); // 'OV+!EDL'
  MODULE(); // MODULE
}


// ================================================
// 0xe588: WORD 'WE58A' codep=0x224c wordp=0xe58a
// ================================================

void WE58A() // WE58A
{
  Push2Words("*PLIST");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xe59c: WORD 'WE59E' codep=0x224c wordp=0xe59e params=0 returns=0
// ================================================

void WE59E() // WE59E
{
  unsigned short int i, imax, j, jmax;
  Push(Read16(pp_Get_co_0_star_1_sc_)); // @,0*1; @
  if (Pop() == 0) return;
  BEEPON_2(); // BEEPON_2
  Push(0x00c8 * (Read16(cc_MPS) - 1)); // 0x00c8 MPS 1- *
  Push(0x01f4);
  MAX(); // MAX
  Push(0x05dc);
  MIN(); // MIN

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    TONE(); // TONE

    j = 0;
    jmax = 0x000a * Read16(cc_MPS); // 0x000a MPS *
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
// 0xe5e0: WORD 'WE5E2' codep=0x224c wordp=0xe5e2 params=2 returns=2
// ================================================

void WE5E2() // WE5E2
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
// 0xe5f2: WORD 'WE5F4' codep=0x224c wordp=0xe5f4 params=0 returns=0
// ================================================

void WE5F4() // WE5F4
{
  Push(0xbe96); // 'CPAUS'
  MODULE(); // MODULE
}


// ================================================
// 0xe5fc: WORD 'WE5FE' codep=0x224c wordp=0xe5fe
// ================================================
// orphan

void WE5FE() // WE5FE
{
  Push(1);
  Push(0x000b);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(0x00fa);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Draw(); // .
}


// ================================================
// 0xe614: WORD 'WE616' codep=0x7420 wordp=0xe616
// ================================================
// orphan
IFieldType WE616 = {ORIGINATORIDX, 0x12, 0x01};

// ================================================
// 0xe619: WORD 'WE61B' codep=0x7420 wordp=0xe61b
// ================================================
IFieldType WE61B = {ORIGINATORIDX, 0x13, 0x01};

// ================================================
// 0xe61e: WORD 'WE620' codep=0x7420 wordp=0xe620
// ================================================
IFieldType WE620 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xe623: WORD 'WE625' codep=0x7420 wordp=0xe625
// ================================================
IFieldType WE625 = {ORIGINATORIDX, 0x14, 0x01};

// ================================================
// 0xe628: WORD 'WE62A' codep=0x7420 wordp=0xe62a
// ================================================
IFieldType WE62A = {ORIGINATORIDX, 0x0b, 0x01};

// ================================================
// 0xe62d: WORD 'WE62F' codep=0x7420 wordp=0xe62f
// ================================================
// orphan
IFieldType WE62F = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xe632: WORD 'WE634' codep=0x7420 wordp=0xe634
// ================================================
IFieldType WE634 = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xe637: WORD 'WE639' codep=0x7420 wordp=0xe639
// ================================================
IFieldType WE639 = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xe63c: WORD 'WE63E' codep=0x1d29 wordp=0xe63e
// ================================================
// 0xe63e: db 0x3a 0x20 ': '

// ================================================
// 0xe640: WORD 'WE642' codep=0x224c wordp=0xe642
// ================================================

void WE642() // WE642
{
  CTINIT(); // CTINIT
  Push(0x5bbc); Push(0x0002); // 'TRANSMITTING:'
  WE5E2(); // WE5E2
  DrawTTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
}


// ================================================
// 0xe656: WORD 'WE658' codep=0x224c wordp=0xe658
// ================================================

void WE658() // WE658
{
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  Push(2);
  _st_(); // <
  if (Pop() != 0)
  {
    GetColor(BLUE);
    Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
    DrawON(); // .ON
    CTINIT(); // CTINIT
    WE642(); // WE642
    if (Pop() != 0)
    {
      SET_STR_AS_PARAM("YES.");
    } else
    {
      SET_STR_AS_PARAM("NO.");
    }
    DrawTTY(); // .TTY
    TTY_dash_SCR(); // TTY-SCR
  } else
  {
    Pop(); // DROP
  }
  GetColor(BLACK);
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  DrawON(); // .ON
}


// ================================================
// 0xe699: WORD 'WE69B' codep=0x224c wordp=0xe69b
// ================================================
// orphan

void WE69B() // WE69B
{
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("RECEIVING:");
  DrawTTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
}


// ================================================
// 0xe6b8: WORD 'WE6BA' codep=0x224c wordp=0xe6ba
// ================================================
// orphan

void WE6BA() // WE6BA
{
  WE69B(); // WE69B
  WE56C(); // WE56C
  WE576(); // WE576
  Push(0xbf6f); // 'P>CT'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe6ca: WORD 'WE6CC' codep=0x224c wordp=0xe6cc
// ================================================

void WE6CC() // WE6CC
{
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  NEW_dash_BUT(); // NEW-BUT
}


// ================================================
// 0xe6da: WORD '?VOWEL' codep=0x4b3b wordp=0xe6e5
// ================================================

void IsVOWEL() // ?VOWEL
{
  switch(Pop()) // ?VOWEL
  {
  case 65:
    Push(1);
    break;
  case 69:
    Push(1);
    break;
  case 73:
    Push(1);
    break;
  case 79:
    Push(1);
    break;
  case 85:
    Push(1);
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xe6fd: WORD 'WE6FF' codep=0x224c wordp=0xe6ff
// ================================================
// orphan

void WE6FF() // WE6FF
{
  Push(Read16(Pop())&0xFF); //  C@
  IsVOWEL(); // ?VOWEL case
}


// ================================================
// 0xe705: WORD 'WE707' codep=0x224c wordp=0xe707 params=0 returns=1
// ================================================
// orphan

void WE707() // WE707
{
  Push(pp__ro_STOP_dash_C); // (STOP-C
  ON_2(); // ON_2
  Push(0x0064);
  WE580(); // WE580
}


// ================================================
// 0xe713: WORD 'WE715' codep=0x224c wordp=0xe715 params=0 returns=0
// ================================================
// orphan

void WE715() // WE715
{
  Push(0xb6ec); // '=CARGO'
  MODULE(); // MODULE
}


// ================================================
// 0xe71d: WORD 'WE71F' codep=0x224c wordp=0xe71f
// ================================================
// orphan

void WE71F() // WE71F
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
}


// ================================================
// 0xe731: WORD 'WE733' codep=0x224c wordp=0xe733
// ================================================
// orphan

void WE733() // WE733
{
  WE71F(); // WE71F
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0);
    SWAP(); // SWAP
    IFIND(); // IFIND
    if (Pop() != 0)
    {
      Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
      SWAP(); // SWAP
      _dash_(); // -
      _0_st_(); // 0<
      Push(!Pop()); //  NOT
    } else
    {
      Pop(); // DROP
      Push(0);
    }
    ICLOSE(); // ICLOSE
  } else
  {
    Pop(); Pop(); // 2DROP
    Push(0);
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe769: WORD 'WE76B' codep=0x224c wordp=0xe76b
// ================================================
// orphan

void WE76B() // WE76B
{
  WE71F(); // WE71F
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xe77b: WORD 'WE77D' codep=0x224c wordp=0xe77d params=0 returns=1
// ================================================
// orphan

void WE77D() // WE77D
{
  Push(0);
  Push(0x65e1+WE616.offset); // WE616<IFIELD>
  C_ex__2(); // C!_2
  Push(0xff9c);
  WE580(); // WE580
}


// ================================================
// 0xe78b: WORD 'WE78D' codep=0x224c wordp=0xe78d params=0 returns=0
// ================================================
// orphan

void WE78D() // WE78D
{
  Push(0x0014);
  Push(Read16(regsp)); // DUP
  Push(0x65e1+WE625.offset); // WE625<IFIELD>
  C_ex__2(); // C!_2
  Push((0x65e1+WE625.offset) + 1); // WE625<IFIELD> 1+
  C_ex__2(); // C!_2
}


// ================================================
// 0xe79f: WORD 'WE7A1' codep=0x224c wordp=0xe7a1 params=0 returns=0
// ================================================
// orphan

void WE7A1() // WE7A1
{
  while(1)
  {
    CI(); // CI
    Push2Words("*STARSH");
    D_eq_(); // D=
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    CDROP(); // CDROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe7b7: WORD 'WE7B9' codep=0x224c wordp=0xe7b9
// ================================================
// orphan

void WE7B9() // WE7B9
{
  WE76B(); // WE76B
  Push(-Pop()); //  NEGATE
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  _plus__ex__2(); // +!_2
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  _0_gt_(); // 0>
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
  }
  WE7A1(); // WE7A1
  WE715(); // WE715
  DrawSORD(); // .SORD
}


// ================================================
// 0xe7d7: WORD 'WE7D9' codep=0x224c wordp=0xe7d9
// ================================================
// orphan

void WE7D9() // WE7D9
{
  Push(0x001a);
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  C_gt_(); // C>
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
  WE715(); // WE715
  DrawSORD(); // .SORD
}


// ================================================
// 0xe7f7: WORD 'WE7F9' codep=0x224c wordp=0xe7f9 params=1 returns=1
// ================================================
// orphan

void WE7F9() // WE7F9
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+WE620.offset)); // WE620<IFIELD> @
  MIN(); // MIN
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe807: WORD 'WE809' codep=0x224c wordp=0xe809
// ================================================
// orphan

void WE809() // WE809
{
  ORGIA(); // ORGIA
  Get_gt_C_plus_S(); // @>C+S
  WE78D(); // WE78D
  WE77D(); // WE77D
}


// ================================================
// 0xe813: WORD 'WE815' codep=0x224c wordp=0xe815
// ================================================
// orphan

void WE815() // WE815
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  OVER(); // OVER
  Push(0xb976); // 'CLASS>B'
  MODULE(); // MODULE
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    IFIND(); // IFIND
    return;
  }
  Pop(); Pop(); // 2DROP
  Push(Read16(cc_FALSE)); // FALSE
  IOPEN(); // IOPEN
}


// ================================================
// 0xe83f: WORD 'WE841' codep=0x224c wordp=0xe841
// ================================================
// orphan

void WE841() // WE841
{
  Push(0x5c00); Push(0x0002); // 'WE PERCEIVE THAT YOU HAVE SOME NID BERRY BUSHES. WOULD YOU PLEASE BE SO KIND AS TO GIVE THEM TO US?'
  WE5E2(); // WE5E2
  WE6BA(); // WE6BA
}


// ================================================
// 0xe84d: WORD 'WE84F' codep=0x224c wordp=0xe84f
// ================================================

void WE84F() // WE84F
{
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Push(0x000a);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0xea60); Push(0x0000);
  D_plus_(); // D+
  Push(pp_TIRED_dash_T); // TIRED-T
  StoreD(); // D!
  do
  {
    WE6CC(); // WE6CC
    Push(Read16(pp_FTRIG)); // FTRIG @
    TIME(); // TIME
    _2_at_(); // 2@
    Push(pp_TIRED_dash_T); // TIRED-T
    _2_at_(); // 2@
    D_gt_(); // D>
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  Push(Read16(regsp)); // DUP
  Push((Pop()==2?1:0) * Read16(pp_FTRIG)); //  2 = FTRIG @ *
  Push(pp__ro_STOP_dash_C); // (STOP-C
  Store_2(); // !_2
  IsTRIG(); // ?TRIG
  Push((Pop()==0?1:0) * 2); //  0= 2*
  Push(Pop() + Pop()); // +
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Pop(); // DROP
    WE580(); // WE580
    Push(1);
  } else
  {
    WE580(); // WE580
    Pop(); // DROP
    Push(0);
  }
  Push(Read16(regsp)); // DUP
  WE658(); // WE658
  Push(9);
  DrawBTN_dash_TE(); // .BTN-TE
}


// ================================================
// 0xe8bd: WORD 'WE8BF' codep=0x224c wordp=0xe8bf
// ================================================
// orphan

void WE8BF() // WE8BF
{
  Push(0x01f4);
  Push(0x03e8);
  RRND(); // RRND
  WE7F9(); // WE7F9
  Push(6);
  WE7D9(); // WE7D9
  Push(pp_IsNID); // ?NID
  ON_2(); // ON_2
}


// ================================================
// 0xe8d5: WORD 'WE8D7' codep=0x224c wordp=0xe8d7 params=2 returns=0
// ================================================
// orphan

void WE8D7() // WE8D7
{
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Store_2(); // !_2
  _ro_BOX_gt__rc_(); // (BOX>)
  _gt_INACTI(); // >INACTI
  IsNULL(); // ?NULL
  ICLOSE(); // ICLOSE
  if (Pop() == 0) return;
  IDELETE(); // IDELETE
}


// ================================================
// 0xe8ef: WORD 'WE8F1' codep=0x224c wordp=0xe8f1 params=0 returns=2
// ================================================
// orphan

void WE8F1() // WE8F1
{
  Push(0x05dc);
  MS(); // MS
}


// ================================================
// 0xe8f9: WORD 'WE8FB' codep=0x224c wordp=0xe8fb
// ================================================
// orphan

void WE8FB() // WE8FB
{
  CTERASE(); // CTERASE
  Push(0x5c70); Push(0x0002); // 'NEW CREWMEMBER '
  WE5E2(); // WE5E2
  DrawTTY(); // .TTY
  Push(0x65e1+WE62F.offset); // WE62F<IFIELD>
  COUNT(); // COUNT
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" REPORTING.", 11); // (.")
}


// ================================================
// 0xe91d: WORD 'WE91F' codep=0x224c wordp=0xe91f
// ================================================
// orphan

void WE91F() // WE91F
{
  Push(1);
  WE809(); // WE809
  Push(1);
  WE809(); // WE809
  Push(0x0012);
  WE809(); // WE809
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe933: WORD 'WE935' codep=0x224c wordp=0xe935
// ================================================

void WE935() // WE935
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+WE62A.offset)&0xFF); // WE62A<IFIELD> C@
  I_gt_C(); // I>C
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    _gt_FLAG(); // >FLAG
  }
  Push(Read16(regsp)); // DUP
  StoreCOLOR(); // !COLOR
  Push(pp_CTCOLOR); // CTCOLOR
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe957: WORD 'WE959' codep=0x224c wordp=0xe959
// ================================================
// orphan

void WE959() // WE959
{
  Push(0x0044);
  Push(0x0028);
  WE815(); // WE815
  if (Pop() != 0)
  {
    WE935(); // WE935
    WE841(); // WE841
    Push(0xff9c);
    Push(0);
    WE84F(); // WE84F
    if (Pop() != 0)
    {
      WE8D7(); // WE8D7
      WE8BF(); // WE8BF
      WE59E(); // WE59E
      Push(0xb6ec); // '=CARGO'
      MODULE(); // MODULE
      WE56C(); // WE56C
      WE576(); // WE576
      WE77D(); // WE77D
      ICLOSE(); // ICLOSE
      Push(0x00d9);
      WE58A(); // WE58A
      IOPEN(); // IOPEN
      WE935(); // WE935
      Push(0xbe45); // '.HUFF'
      MODULE(); // MODULE
      Push(3);
      _star_CLOSE(); // *CLOSE
    } else
    {
      ICLOSE(); // ICLOSE
    }
  } else
  {
    ICLOSE(); // ICLOSE
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe9b1: WORD 'WE9B3' codep=0x224c wordp=0xe9b3
// ================================================
// orphan

void WE9B3() // WE9B3
{
  WE935(); // WE935
  Push(0x5c8c); Push(0x0002); // 'WE CAN TELL THAT YOU HAVE POSSESSION OF THE MOST VALUABLE THING. YOU MUST RETURN IT TO US IMMEDIATELY, OR FACE THE CONSEQUENCES.'
  WE5E2(); // WE5E2
  WE6BA(); // WE6BA
}


// ================================================
// 0xe9c1: WORD 'WE9C3' codep=0x224c wordp=0xe9c3 params=0 returns=0
// ================================================
// orphan

void WE9C3() // WE9C3
{
  WE56C(); // WE56C
  WE576(); // WE576
  Push(0x002d);
  WE556(); // WE556
  if (Pop() != 0)
  {
    WE9B3(); // WE9B3
    Push2Words("*STARSH");
    _gt_C_plus_S(); // >C+S
    IOPEN(); // IOPEN
    Push(0x000b);
    Push(0x000f);
    IFIND(); // IFIND
    Pop(); // DROP
    IOPEN(); // IOPEN
    Push(0x001c);
    Push(0x002d);
    IFIND(); // IFIND
    Pop(); // DROP
    Push(0xff9c);
    Push(0x0064);
    WE84F(); // WE84F
    if (Pop() != 0)
    {
      WE8D7(); // WE8D7
      Push(0xb6ec); // '=CARGO'
      MODULE(); // MODULE
      Push(pp_IsMVT); // ?MVT
      ON_2(); // ON_2
      WE59E(); // WE59E
      WE91F(); // WE91F
    } else
    {
      ICLOSE(); // ICLOSE
    }
    Push(2);
    _star_CLOSE(); // *CLOSE
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea1f: WORD 'WEA21' codep=0x224c wordp=0xea21 params=0 returns=1
// ================================================
// orphan

void WEA21() // WEA21
{
  Push(Read16(pp_Is5)); // ?5 @
  Push(5);
  _gt_(); // >
}


// ================================================
// 0xea2b: WORD 'WEA2D' codep=0x224c wordp=0xea2d
// ================================================
// orphan

void WEA2D() // WEA2D
{
  ORGIA(); // ORGIA
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+WE616.offset)&0xFF); // WE616<IFIELD> C@
  Push(Read16(0x65e1+WE625.offset)&0xFF); // WE625<IFIELD> C@
  Push(0x0065);
  WITHIN(); // WITHIN
}


// ================================================
// 0xea41: WORD 'WEA43' codep=0x224c wordp=0xea43 params=0 returns=1
// ================================================
// orphan

void WEA43() // WEA43
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+WE620.offset)); // WE620<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea4f: WORD 'WEA51' codep=0x224c wordp=0xea51
// ================================================

void WEA51() // WEA51
{
  WE935(); // WE935
  INEXT(); // INEXT
  Push(0xbe45); // '.HUFF'
  MODULE(); // MODULE
  WE5F4(); // WE5F4
  WUP(); // WUP
}


// ================================================
// 0xea61: WORD 'WEA63' codep=0x224c wordp=0xea63
// ================================================

void WEA63() // WEA63
{
  Push(6);
  Push(0x003a);
  Push(1);
  GetRECORD(); // @RECORD
  Push(Pop() + 0x0048); //  0x0048 +
  C_ex__2(); // C!_2
  UPDATE(); // UPDATE
  SAVE_dash_BU(); // SAVE-BU
  Push(0x5d19); Push(0x0002); // 'GORZEK UHL WEAPON.......'
  WE5E2(); // WE5E2
  Push(0x001c);
  Push(0x0036);
  GetRECORD(); // @RECORD
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  UPDATE(); // UPDATE
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xea95: WORD 'WEA97' codep=0x7420 wordp=0xea97
// ================================================
// orphan
IFieldType WEA97 = {CREWMEMBERIDX, 0x1a, 0x01};

// ================================================
// 0xea9a: WORD 'WEA9C' codep=0x7420 wordp=0xea9c
// ================================================
IFieldType WEA9C = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xea9f: WORD 'WEAA1' codep=0x224c wordp=0xeaa1
// ================================================
// orphan

void WEAA1() // WEAA1
{
  CTINIT(); // CTINIT
  Push(0x5d3e); Push(0x0002); // 'MY CAPABILITIES ARE: '
  WE5E2(); // WE5E2
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("SCIENCE: ");
  DrawTTY(); // .TTY
  Push(Read16(0x65e1+WEA97.offset)&0xFF); // WEA97<IFIELD> C@
  WE5FE(); // WE5FE
  Push(0x65e1+WEA97.offset); // WEA97<IFIELD>
  C_ex__2(); // C!_2
  SET_STR_AS_PARAM("NAVIGATING: ");
  DrawTTY(); // .TTY
  Push(Read16((0x65e1+WEA97.offset) + 1)&0xFF); // WEA97<IFIELD> 1+ C@
  WE5FE(); // WE5FE
  Push((0x65e1+WEA97.offset) + 1); // WEA97<IFIELD> 1+
  C_ex__2(); // C!_2
  Push(0x5d60); Push(0x0002); // 'ENGINEERING: '
  WE5E2(); // WE5E2
  DrawTTY(); // .TTY
  Push(Read16((0x65e1+WEA97.offset) + 2)&0xFF); // WEA97<IFIELD> 2+ C@
  WE5FE(); // WE5FE
  Push((0x65e1+WEA97.offset) + 2); // WEA97<IFIELD> 2+
  C_ex__2(); // C!_2
  Push(0x5d7a); Push(0x0002); // 'COMMUNICATING: '
  WE5E2(); // WE5E2
  DrawTTY(); // .TTY
  Push(Read16((0x65e1+WEA97.offset) + 3)&0xFF); // WEA97<IFIELD> 3+ C@
  WE5FE(); // WE5FE
  Push((0x65e1+WEA97.offset) + 3); // WEA97<IFIELD> 3+
  C_ex__2(); // C!_2
  SET_STR_AS_PARAM("MEDICINE: ");
  DrawTTY(); // .TTY
  Push(Read16((0x65e1+WEA97.offset) + 4)&0xFF); // WEA97<IFIELD> 4 + C@
  WE5FE(); // WE5FE
  Push((0x65e1+WEA97.offset) + 4); // WEA97<IFIELD> 4 +
  C_ex__2(); // C!_2
  Push(0x0064);
  Push(0x65e1+WEA9C.offset); // WEA9C<IFIELD>
  C_ex__2(); // C!_2
  Push((Read16(0x65e1+WE634.offset)&0xFF) & 0x00eb); // WE634<IFIELD> C@ 0x00eb AND
  Push(0x65e1+WE634.offset); // WE634<IFIELD>
  C_ex__2(); // C!_2
  Push(0x2ee0); Push(0x0000);
  WE5F4(); // WE5F4
}


// ================================================
// 0xeb55: WORD 'GORZEK>UHL' codep=0x224c wordp=0xeb64 params=0 returns=0
// ================================================

void GORZEK_gt_UHL() // GORZEK>UHL
{
  Push(0x0036);
  WE556(); // WE556
  if (Pop() == 0) return;
  Push(0x0064);
  WE58A(); // WE58A
  IOPEN(); // IOPEN
  WE935(); // WE935
  Push(0xbe45); // '.HUFF'
  MODULE(); // MODULE
  Push(0x5d96); Push(0x0002); // 'GRANTED?'
  WE5E2(); // WE5E2
  DrawTTY(); // .TTY
  Push(0);
  Push(0);
  WE84F(); // WE84F
  if (Pop() != 0)
  {
    Push(0x2710); Push(0x0000);
    WEA51(); // WEA51
    WE59E(); // WE59E
    Push(0x2710); Push(0x0000);
    WEA51(); // WEA51
    Push(0x2710); Push(0x0000);
    WEA51(); // WEA51
    Push(pp__ro_ENCOUN); // (ENCOUN
    Get_gt_C_plus_S(); // @>C+S
    Push(0);
    Push(0x65e1+WE639.offset); // WE639<IFIELD>
    C_ex__2(); // C!_2
    IOPEN(); // IOPEN
    Push(0x0019);
    Push(0x0014);
    IFIND(); // IFIND
    Pop(); // DROP
    _dash_ICON(); // -ICON
    Push(pp_TERMINA); // TERMINA
    ON_2(); // ON_2
    Push(pp__ro_STOP_dash_C); // (STOP-C
    ON_2(); // ON_2
    Push(2);
    _star_CLOSE(); // *CLOSE
    WEA63(); // WEA63
    Push(pp_WE63E); // WE63E
    ON_2(); // ON_2
  } else
  {
    SET_STR_AS_PARAM("CANCELLED");
    DrawTTY(); // .TTY
  }
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xebf4: WORD 'WEBF6' codep=0x224c wordp=0xebf6 params=0 returns=0
// ================================================
// orphan

void WEBF6() // WEBF6
{
  unsigned short int i, imax, a;
  Push(0x65e1+WE62F.offset); // WE62F<IFIELD>
  _099(); // 099
  Push((0x65e1+WE62F.offset) + 1); // WE62F<IFIELD> 1+
  Push(0x000e);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2

  i = 0;
  imax = 2;
  do // (DO)
  {
    Push(0xbf8f); // '1SYL'
    MODULE(); // MODULE
    PAD(); // PAD
    COUNT(); // COUNT
    a = Pop(); // >R
    Push(0x65e1+WE62F.offset); // WE62F<IFIELD>
    COUNT(); // COUNT
    Push(Pop() + Pop()); // +
    Push(a); // I
    CMOVE_2(); // CMOVE_2
    Push((Read16(0x65e1+WE62F.offset)&0xFF) + a); // WE62F<IFIELD> C@ R> +
    Push(0x65e1+WE62F.offset); // WE62F<IFIELD>
    C_ex__2(); // C!_2
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xec34: WORD 'WEC36' codep=0x224c wordp=0xec36
// ================================================
// orphan

void WEC36() // WEC36
{
  Push(0x001c);
  Push(0x000d);
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  LoadData(ART_dash_VOL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
  Push(Read16(regsp)); // DUP
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  CI(); // CI
  ICLOSE(); // ICLOSE
  ROT(); // ROT
  WEA43(); // WEA43
  _gt_(); // >
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push2Words("*STARSH");
    _gt_C_plus_S(); // >C+S
    _gt_BOX(); // >BOX
    WE715(); // WE715
    ICLOSE(); // ICLOSE
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xec6e: WORD 'WEC70' codep=0x224c wordp=0xec70 params=0 returns=1
// ================================================

void WEC70() // WEC70
{
  do
  {
    INEXT(); // INEXT
    Push((Read16(0x65e1+WE634.offset)&0xFF) & 8); // WE634<IFIELD> C@ 8 AND
  } while(Pop() == 0);
  Push(1);
}


// ================================================
// 0xec82: WORD 'WEC84' codep=0x224c wordp=0xec84 params=0 returns=1
// ================================================

void WEC84() // WEC84
{
  do
  {
    IPREV(); // IPREV
    Push((Read16(0x65e1+WE634.offset)&0xFF) & 8); // WE634<IFIELD> C@ 8 AND
  } while(Pop() == 0);
  Push(1);
}


// ================================================
// 0xec96: WORD 'NPCREW' codep=0x4b3b wordp=0xeca1
// ================================================

void NPCREW() // NPCREW
{
  switch(Pop()) // NPCREW
  {
  case 1:
    WEC70(); // WEC70
    break;
  case 65535:
    WEC84(); // WEC84
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xecad: WORD 'WECAF' codep=0x224c wordp=0xecaf params=0 returns=0
// ================================================
// orphan

void WECAF() // WECAF
{
  Push(Read16(0x65e1+WE634.offset)&0xFF); // WE634<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  Push(Pop() & 2); //  2 AND
  _gt_FLAG(); // >FLAG
  SWAP(); // SWAP
  Push(Pop() & 1); //  1 AND
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(Pop() & 0x00fc); //  0x00fc AND
    Push(0x65e1+WE634.offset); // WE634<IFIELD>
    C_ex__2(); // C!_2
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xecdb: WORD 'WECDD' codep=0x224c wordp=0xecdd
// ================================================
// orphan

void WECDD() // WECDD
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  while(1)
  {
    Push(!((Read16(0x65e1+WE634.offset)&0xFF) & 8)); // WE634<IFIELD> C@ 8 AND NOT
    if (Pop() == 0) break;

    INEXT(); // INEXT
  }
  Push(1);
  Push(0x0015);
  CMESS(); // CMESS
  Push(0x5dab); Push(0x0002); // 'CHOOSE CREWMEMBER ^\'
  WE5E2(); // WE5E2
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  StoreCRS(); // !CRS
  Push(2);
  Push(0x0012);
  CMESS(); // CMESS
  Push(0x5dcc); Push(0x0002); // 'AND PRESS SPACEBAR'
  WE5E2(); // WE5E2
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  StoreCRS(); // !CRS
  Push(0x000b);
  Push(2);
  CTPOS_dot_(); // CTPOS.
  Push(0x65e1+WE62F.offset); // WE62F<IFIELD>
  _do__dot_(); // $.
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); // DROP
    NPCREW(); // NPCREW case
    if (Pop() != 0)
    {
      Push(0x000b);
      Push(2);
      CTPOS_dot_(); // CTPOS.
      Push(0x000f);
      GetColor(BLACK);
      POLY_dash_ER(); // POLY-ER
      Push(0x65e1+WE62F.offset); // WE62F<IFIELD>
      _do__dot_(); // $.
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  WECAF(); // WECAF
}


// ================================================
// 0xed57: WORD 'WED59' codep=0x224c wordp=0xed59
// ================================================
// orphan

void WED59() // WED59
{
  Push(0x00fc);
  WE58A(); // WE58A
  IOPEN(); // IOPEN
  WE935(); // WE935
  Push(0xbe45); // '.HUFF'
  MODULE(); // MODULE
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xed6f: WORD 'WED71' codep=0x224c wordp=0xed71
// ================================================
// orphan

void WED71() // WED71
{
  unsigned short int i, imax;
  Push(0x00fe);
  WE58A(); // WE58A
  IOPEN(); // IOPEN
  ILAST(); // ILAST

  i = 0;
  imax = 4;
  do // (DO)
  {
    WE935(); // WE935
    Push(0xbe45); // '.HUFF'
    MODULE(); // MODULE
    IPREV(); // IPREV
    Push(0x4e20); Push(0x0000);
    WE5F4(); // WE5F4
    i++;
  } while(i<imax); // (LOOP)

  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xed9d: WORD 'WED9F' codep=0x224c wordp=0xed9f params=3 returns=1
// ================================================
// orphan

void WED9F() // WED9F
{
  Push(0x65e1+WE61B.offset); // WE61B<IFIELD>
  C_ex__2(); // C!_2
  Push(0x65e1+WE625.offset); // WE625<IFIELD>
  C_ex__2(); // C!_2
  Push((0x65e1+WE625.offset) + 1); // WE625<IFIELD> 1+
  C_ex__2(); // C!_2
  Push(0);
  WE580(); // WE580
}


// ================================================
// 0xedb3: WORD 'WEDB5' codep=0x224c wordp=0xedb5 params=0 returns=1
// ================================================
// orphan

void WEDB5() // WEDB5
{
  Push(0x000c);
  Push(1);
  Push(1);
  WED9F(); // WED9F
}


// ================================================
// 0xedc1: WORD 'WEDC3' codep=0x224c wordp=0xedc3 params=0 returns=1
// ================================================
// orphan

void WEDC3() // WEDC3
{
  Push(0x0019);
  Push(1);
  Push(0);
  WED9F(); // WED9F
}


// ================================================
// 0xedcf: WORD 'WEDD1' codep=0x224c wordp=0xedd1 params=0 returns=0
// ================================================
// orphan

void WEDD1() // WEDD1
{
  WE56C(); // WE56C
  WE576(); // WE576
  WEA21(); // WEA21
  if (Pop() != 0)
  {
    WED59(); // WED59
    Push(0);
    Push(0);
    WE84F(); // WE84F
    if (Pop() != 0)
    {
      WE8F1(); // WE8F1
      WECDD(); // WECDD
      Push(5);
      StoreINST_dash_S(); // !INST-S
      WE59E(); // WE59E
      WE8F1(); // WE8F1
      WEBF6(); // WEBF6
      WE8FB(); // WE8FB
      WEAA1(); // WEAA1
      Push(2);
      _star_CLOSE(); // *CLOSE
      Push(-1);
      Push(pp_Is5); // ?5
      Store_2(); // !_2
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee07: WORD 'WEE09' codep=0x224c wordp=0xee09 params=0 returns=1
// ================================================
// orphan

void WEE09() // WEE09
{
  Push(Read16(pp_Is10)); // ?10 @
  Push(0x0013);
  _gt_(); // >
}


// ================================================
// 0xee15: WORD 'WEE17' codep=0x224c wordp=0xee17 params=0 returns=1
// ================================================

void WEE17() // WEE17
{
  unsigned short int i, imax;
  Push(Read16(cc_TRUE)); // TRUE
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push((0x65e1+INST_dash_SI.offset) + 0x0011); // INST-SI<IFIELD> 0x0011 +

  i = 0;
  imax = 6;
  do // (DO)
  {
    Push(i); // I
    _3_star_(); // 3*
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    Push(6);
    _eq_SPECIE(); // =SPECIE
    Push(Read16(0x65e1+WEA9C.offset)&0xFF); // WEA9C<IFIELD> C@
    _gt_FLAG(); // >FLAG
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      SWAP(); // SWAP
      Push(!Pop()); //  NOT
      SWAP(); // SWAP
      imax = i; // LEAVE
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee59: WORD 'WEE5B' codep=0x224c wordp=0xee5b
// ================================================
// orphan

void WEE5B() // WEE5B
{
  Push(0x00fe);
  WE58A(); // WE58A
  IOPEN(); // IOPEN
  WE935(); // WE935
  Push(0xbe45); // '.HUFF'
  MODULE(); // MODULE
  Push(0x4e20); Push(0x0000);
  WE5F4(); // WE5F4
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xee79: WORD 'WEE7B' codep=0x224c wordp=0xee7b
// ================================================
// orphan

void WEE7B() // WEE7B
{
  Pop(); // DROP
  Push(0x5deb); Push(0x0002); // 'VERY WELL'
  WE5E2(); // WE5E2
  WE6BA(); // WE6BA
}


// ================================================
// 0xee89: WORD 'WEE8B' codep=0x224c wordp=0xee8b
// ================================================
// orphan

void WEE8B() // WEE8B
{
  Push(0x5e01); Push(0x0002); // 'WOULD YOU BE INTERESTED IN PURCHASING '
  WE5E2(); // WE5E2
  DrawTTY(); // .TTY
}


// ================================================
// 0xee97: WORD 'WEE99' codep=0x224c wordp=0xee99
// ================================================
// orphan

void WEE99() // WEE99
{
  SET_STR_AS_PARAM("FOR X0,000 SHYNEUM PENNIES\?");
  DrawTTY(); // .TTY
}


// ================================================
// 0xeebb: WORD 'WEEBD' codep=0x224c wordp=0xeebd
// ================================================
// orphan

void WEEBD() // WEEBD
{
  SET_STR_AS_PARAM("THE ");
  DrawTTY(); // .TTY
  Push(0x0028);
  SWAP(); // SWAP
  GetRECORD(); // @RECORD
  Push(0x0012);
  _dash_TRAILING(); // -TRAILING
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" MAP", 4); // (.")
}


// ================================================
// 0xeedf: WORD 'WEEE1' codep=0x224c wordp=0xeee1 params=0 returns=2
// ================================================
// orphan

void WEEE1() // WEEE1
{
  Push(0x5e34); Push(0x0002); // 'YOU DO NOT HAVE ENOUGH. DO NOT TRY TO DECEIVE US.'
  WE5E2(); // WE5E2
}


// ================================================
// 0xeeeb: WORD 'WEEED' codep=0x224c wordp=0xeeed params=0 returns=1
// ================================================
// orphan

void WEEED() // WEEED
{
  Push(0);
  Push(6);
  RRND(); // RRND
}


// ================================================
// 0xeef5: WORD 'WEEF7' codep=0x224c wordp=0xeef7 params=0 returns=1
// ================================================
// orphan

void WEEF7() // WEEF7
{
  Push(0x000a);
  Push(0x0014);
  RRND(); // RRND
}


// ================================================
// 0xef03: WORD 'WEF05' codep=0x224c wordp=0xef05 params=2 returns=1
// ================================================
// orphan

void WEF05() // WEF05
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Read16(regsp)); // DUP
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(Pop() + 0x0030); //  0x0030 +
  Push(Read16(a)); // R@
  Push(Pop() + 7); //  7 +
  C_ex__2(); // C!_2
  Push(Pop() + 0x0030); //  0x0030 +
  Push(a + 8); // R> 8 +
  C_ex__2(); // C!_2
  Push(Pop() * 0x03e8); //  0x03e8 *
}


// ================================================
// 0xef37: WORD 'WEF39' codep=0x224c wordp=0xef39
// ================================================
// orphan

void WEF39() // WEF39
{
  WE69B(); // WE69B
  WE935(); // WE935
  Push(0xee99); // 'WEE99'
  WEF05(); // WEF05
  WEE8B(); // WEE8B
  OVER(); // OVER
  WEEBD(); // WEEBD
  WEE99(); // WEE99
}


// ================================================
// 0xef4d: WORD 'WEF4F' codep=0x224c wordp=0xef4f params=0 returns=0
// ================================================
// orphan

void WEF4F() // WEF4F
{
  WE56C(); // WE56C
  WE576(); // WE576
  Push(Read16(pp_A_dash_POSTU)==2?1:0); // A-POSTU @ 2 =
  Push(0);
  Push(Read16(cc_MPS)); // MPS
  _3_star_(); // 3*
  Push(5);
  MAX(); // MAX
  Push(0x0012);
  MIN(); // MIN
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    WEEED(); // WEEED
    WEEF7(); // WEEF7
    WEF39(); // WEF39
    Push(0);
    Push(0);
    WE84F(); // WE84F
    if (Pop() != 0)
    {
      S_dash__gt_D(); // S->D
      _2DUP(); // 2DUP
      Push(0xc2a9); // 'OV?BALA'
      MODULE(); // MODULE
      if (Pop() != 0)
      {
        DNEGATE(); // DNEGATE
        Push(0xc2ed); // 'T+BALAN'
        MODULE(); // MODULE
        Push(7);
        Push(0xc273); // 'OVTRANS'
        MODULE(); // MODULE
        WE59E(); // WE59E
        Push(0x001c);
        SWAP(); // SWAP
        Push(Pop() + 0x002e); //  0x002e +
        ICREATE(); // ICREATE
        _gt_C_plus_S(); // >C+S
        LoadData(ART_dash_VOL); // from 'ARTIFACT'
        Push(Read16(Pop())); //  @
        Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
        Store_2(); // !_2
        CI(); // CI
        ICLOSE(); // ICLOSE
        Push2Words("*STARSH");
        _gt_C_plus_S(); // >C+S
        _gt_BOX(); // >BOX
        ICLOSE(); // ICLOSE
        WE715(); // WE715
      } else
      {
        Pop(); Pop(); // 2DROP
        Pop(); // DROP
        WEEE1(); // WEEE1
        WE6BA(); // WE6BA
        Push(5);
        WE580(); // WE580
      }
    } else
    {
      Pop(); // DROP
      WEE7B(); // WEE7B
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefe7: WORD 'WEFE9' codep=0x224c wordp=0xefe9
// ================================================
// orphan

void WEFE9() // WEFE9
{
  Push(0x5e72); Push(0x0002); // 'IT MIGHT BE SUGGESTED THAT AS FURTHER'
  WE5E2(); // WE5E2
  DrawTTY(); // .TTY
  Push(0x5ea4); Push(0x0002); // 'DEMONSTRATION OF GOODWILL ON YOUR PART'
  WE5E2(); // WE5E2
  DrawTTY(); // .TTY
}


// ================================================
// 0xefff: WORD 'WF001' codep=0x224c wordp=0xf001
// ================================================
// orphan

void WF001() // WF001
{
  SET_STR_AS_PARAM("OF, SAY XX UNITS OF SHYNEUM MIGHT ");
  DrawTTY(); // .TTY
  Push(0x5ed7); Push(0x0002); // 'CONSIDERABLY FACILITATE DISCUSSIONS.'
  WE5E2(); // WE5E2
  DrawTTY(); // .TTY
}


// ================================================
// 0xf034: WORD 'WF036' codep=0x224c wordp=0xf036 params=2 returns=0
// ================================================
// orphan

void WF036() // WF036
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(Pop() + 0x0030); //  0x0030 +
  Push(Read16(a)); // R@
  Push(Pop() + 0x000b); //  0x000b +
  C_ex__2(); // C!_2
  Push(Pop() + 0x0030); //  0x0030 +
  Push(a + 0x000c); // R> 0x000c +
  C_ex__2(); // C!_2
}


// ================================================
// 0xf060: WORD 'WF062' codep=0x224c wordp=0xf062
// ================================================
// orphan

void WF062() // WF062
{
  WE69B(); // WE69B
  WE935(); // WE935
  Push(0xf001); // 'WF001'
  WF036(); // WF036
  WEFE9(); // WEFE9
  WF001(); // WF001
  TTY_dash_SCR(); // TTY-SCR
}


// ================================================
// 0xf074: WORD 'WF076' codep=0x224c wordp=0xf076 params=0 returns=0
// ================================================
// orphan

void WF076() // WF076
{
  INIT_dash_IC(); // INIT-IC
  Push(pp__ro_ENCOUN); // (ENCOUN
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  _plus_ICONBO(); // +ICONBO
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf086: WORD 'WF088' codep=0x224c wordp=0xf088 params=0 returns=0
// ================================================
// orphan

void WF088() // WF088
{
  WE56C(); // WE56C
  WE576(); // WE576
  Push(Read16(pp_A_dash_POSTU)==4?1:0); // A-POSTU @ 4 =
  Push(0);
  Push(0x0014);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    WEEF7(); // WEEF7
    Push(Read16(regsp)); // DUP
    WF062(); // WF062
    Push(0xfff1);
    Push(0);
    WE84F(); // WE84F
    if (Pop() != 0)
    {
      Push(Pop() * 0x000a); //  0x000a *
      Push(Read16(regsp)); // DUP
      Push(6);
      WE733(); // WE733
      if (Pop() != 0)
      {
        Push(6);
        WE7B9(); // WE7B9
        WE59E(); // WE59E
      } else
      {
        Pop(); // DROP
        WEEE1(); // WEEE1
        WE6BA(); // WE6BA
        Push(5);
        WE580(); // WE580
      }
    } else
    {
      WEE7B(); // WEE7B
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0e4: WORD 'WF0E6' codep=0x224c wordp=0xf0e6
// ================================================
// orphan

void WF0E6() // WF0E6
{
  WE56C(); // WE56C
  WE576(); // WE576
  Push(1);
  WEA2D(); // WEA2D
  Push(2);
  WEA2D(); // WEA2D
  Push(Pop() | Pop()); // OR
  Push(2);
  _star_CLOSE(); // *CLOSE
  if (Pop() != 0)
  {
    Push((Read16(0x65e1+WE625.offset)&0xFF) + (Read16((0x65e1+WE625.offset) + 1)&0xFF) >> 1); // WE625<IFIELD> C@ WE625<IFIELD> 1+ C@ + 2/
    Push(Read16(regsp)); // DUP
    Push(0x65e1+WE616.offset); // WE616<IFIELD>
    C_ex__2(); // C!_2
    Push(pp_EDL); // EDL
    Store_2(); // !_2
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf118: WORD 'WF11A' codep=0x224c wordp=0xf11a params=0 returns=0
// ================================================
// orphan

void WF11A() // WF11A
{
  Push(0x002d);
  WE556(); // WE556
  if (Pop() == 0) return;
  Push(0x5f08); Push(0x0002); // 'GORZEK DETECTS PRESENCE OF MOST VALUABLE THING. SUGGEST THAT IT BE RETURNED TO TANDELOU IMMEDIATELY.'
  WE5E2(); // WE5E2
  WE6BA(); // WE6BA
  Push(0x2710); Push(0x0000);
  WE5F4(); // WE5F4
}


// ================================================
// 0xf138: WORD 'WF13A' codep=0x224c wordp=0xf13a params=0 returns=0
// ================================================
// orphan

void WF13A() // WF13A
{
  Push(Read16(pp_A_dash_POSTU)==4?1:0); // A-POSTU @ 4 =
  WEE17(); // WEE17
  Push(Pop() & Pop()); // AND
  Push(0);
  Push(2);
  RRND(); // RRND
  Push(Pop() & Pop()); // AND
  WE56C(); // WE56C
  WE576(); // WE576
  if (Pop() != 0)
  {
    WED71(); // WED71
    Push(0);
    Push(0);
    WE84F(); // WE84F
    if (Pop() != 0)
    {
      WEDB5(); // WEDB5
      WE8F1(); // WE8F1
      WECDD(); // WECDD
      Push(6);
      StoreINST_dash_S(); // !INST-S
      WE59E(); // WE59E
      WE8F1(); // WE8F1
      WEBF6(); // WEBF6
      WE8FB(); // WE8FB
      WEAA1(); // WEAA1
      WEC36(); // WEC36
      WEE5B(); // WEE5B
      Push(2);
      _star_CLOSE(); // *CLOSE
    }
  } else
  {
    WEE17(); // WEE17
    if (Pop() != 0)
    {
      WEDC3(); // WEDC3
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf18e: WORD 'WF190' codep=0x224c wordp=0xf190 params=0 returns=2
// ================================================

void WF190() // WF190
{
  unsigned short int i, imax, a;
  Push2Words("NULL");
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push((0x65e1+INST_dash_SI.offset) + 0x0011); // INST-SI<IFIELD> 0x0011 +

  i = 0;
  imax = 0x0012;
  do // (DO)
  {
    Push(i); // I
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    GetINST_dash_S(); // @INST-S
    Push(Pop()==6?1:0); //  6 =
    if (Pop() != 0)
    {
      a = Pop(); // >R
      Pop(); Pop(); // 2DROP
      CI(); // CI
      Push(a); // R>
      imax = i; // LEAVE
    }
    ICLOSE(); // ICLOSE
    Push(3);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1d0: WORD 'WF1D2' codep=0x224c wordp=0xf1d2
// ================================================

void WF1D2() // WF1D2
{
  WE58A(); // WE58A
  WF190(); // WF190
  WUP(); // WUP
  CI(); // CI
  _2SWAP(); // 2SWAP
  _gt_C_plus_S(); // >C+S
  Push(0xbe55); // '.AHUF'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  Push(0x1f40); Push(0x0000);
  WE5F4(); // WE5F4
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf1f4: WORD 'WF1F6' codep=0x224c wordp=0xf1f6
// ================================================

void WF1F6() // WF1F6
{
  GetColor(PINK);
  Push(Read16(regsp)); // DUP
  StoreCOLOR(); // !COLOR
  Push(pp_CTCOLOR); // CTCOLOR
  Store_2(); // !_2
}


// ================================================
// 0xf202: WORD 'WF204' codep=0x224c wordp=0xf204
// ================================================

void WF204() // WF204
{
  WF1F6(); // WF1F6
  Push(0x0063);
  WF1D2(); // WF1D2
  WF190(); // WF190
  _gt_C_plus_S(); // >C+S
  Push(0xc1e9); // 'KILL'
  MODULE(); // MODULE
  Push(0xc1b8); // '(ROL'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  CTINIT(); // CTINIT
  Push(0x0063);
  WF1D2(); // WF1D2
}


// ================================================
// 0xf228: WORD 'WF22A' codep=0x224c wordp=0xf22a
// ================================================

void WF22A() // WF22A
{
  WF1F6(); // WF1F6
  Push(0x0062);
  WF1D2(); // WF1D2
  Push(1);
  Push(pp_Is5_c__ro_); // ?5:(
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf23a: WORD 'WF23C' codep=0x224c wordp=0xf23c params=0 returns=0
// ================================================

void WF23C() // WF23C
{
  Push(pp_Is5_c__ro_); // ?5:(
  _099(); // 099
}


// ================================================
// 0xf242: WORD '#>PROTEST' codep=0x4b3b wordp=0xf250
// ================================================

void _n__gt_PROTEST() // #>PROTEST
{
  switch(Pop()) // #>PROTEST
  {
  case 1:
    WF204(); // WF204
    break;
  case 2:
    WF22A(); // WF22A
    break;
  case 4:
    NOP(); // NOP
    break;
  default:
    WF23C(); // WF23C
    break;

  }
}

// ================================================
// 0xf260: WORD '#>PRO' codep=0x224c wordp=0xf26a params=1 returns=0
// ================================================
// entry

void _n__gt_PRO() // #>PRO
{
  WEE17(); // WEE17
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    _n__gt_PROTEST(); // #>PROTEST case
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf27c: WORD 'WF27E' codep=0x224c wordp=0xf27e params=0 returns=2
// ================================================
// orphan

void WF27E() // WF27E
{
  Push(0x6000); Push(0x0002); // 'ALL YOUR ASSETS AT STARPORT HAVE BEEN SEIZED. YOUR SHIP WILL BE IMPOUNDED. WE HAVE REMOTELY DISABLED YOUR ENGINES. ANY ATTEMPT AT RESISTANCE WILL BE MET WITH FORCE. DO YOU AGREE TO COME ALONG PEACEFULLY?'
  WE5E2(); // WE5E2
}


// ================================================
// 0xf288: WORD 'WF28A' codep=0x224c wordp=0xf28a
// ================================================
// orphan

void WF28A() // WF28A
{
  WE56C(); // WE56C
  WE576(); // WE576
  WF27E(); // WF27E
  WE6BA(); // WE6BA
  Push(0);
  Push(0x0064);
  WE84F(); // WE84F
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    GetColor(BLACK);
    StoreCOLOR(); // !COLOR
    GetColor(YELLOW);
    Push(0x4fa9); // 'BLACK'
    Store_2(); // !_2
    CTERASE(); // CTERASE
    Push(0x60d8); Push(0x0002); // 'CREW ARRESTED'
    WE5E2(); // WE5E2
    DrawTTY(); // .TTY
    Push(0x60f2); Push(0x0002); // 'GAME OVER'
    WE5E2(); // WE5E2
    DrawTTY(); // .TTY
    _i_KEY(); // 'KEY
    Pop(); // DROP
    KEY_2(); // KEY_2
    Pop(); // DROP
    BYE_2(); // BYE_2
  } else
  {
    WF076(); // WF076
  }
  Push(pp_WE63E); // WE63E
  ON_2(); // ON_2
  WE707(); // WE707
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2dc: WORD 'WF2DE' codep=0x224c wordp=0xf2de params=0 returns=2
// ================================================
// orphan

void WF2DE() // WF2DE
{
  Push(0x6108); Push(0x0002); // 'OKAY, BUDDY. LET'S SEE YOUR SECURITY CODE.'
  WE5E2(); // WE5E2
}


// ================================================
// 0xf2e8: WORD 'WF2EA' codep=0x224c wordp=0xf2ea params=0 returns=2
// ================================================
// orphan

void WF2EA() // WF2EA
{
  Push(0x613f); Push(0x0002); // 'OUR APOLOGIES COMMANDER, THERE'S BEEN SOME KIND OF MISTAKE. YOU CAN GO. HAVE A SAFE VOYAGE.'
  WE5E2(); // WE5E2
}


// ================================================
// 0xf2f4: WORD 'WF2F6' codep=0x224c wordp=0xf2f6
// ================================================
// orphan

void WF2F6() // WF2F6
{
  WE56C(); // WE56C
  WE576(); // WE576
  WF2DE(); // WF2DE
  WE6BA(); // WE6BA
  Push(0x09c4);
  MS(); // MS
  Push(Read16(pp__i_RSIDE)); // 'RSIDE @
  MODULE(); // MODULE
  Push(!Read16(pp_IsSECURE)); // ?SECURE @ NOT
  if (Pop() != 0)
  {
    Push(pp_ESC_dash_EN); // ESC-EN
    ON_2(); // ON_2
    WF2EA(); // WF2EA
    WE6BA(); // WE6BA
    Push(0x09c4);
    MS(); // MS
    Push(pp_WE63E); // WE63E
    ON_2(); // ON_2
    Push(pp__ro_STOP_dash_C); // (STOP-C
    ON_2(); // ON_2
    WE77D(); // WE77D
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf330: WORD 'WF332' codep=0x224c wordp=0xf332 params=0 returns=2
// ================================================
// orphan

void WF332() // WF332
{
  Push(0x61a7); Push(0x0002); // 'TO HELP YOU OVERCOME YOUR GUILT FOR WRONGFULLY MISTREATING OUR GREAT SPEMIN ANCESTORS, WE DEMAND A PAYMENT'
  WE5E2(); // WE5E2
}


// ================================================
// 0xf33c: WORD 'WF33E' codep=0x224c wordp=0xf33e params=0 returns=2
// ================================================
// orphan

void WF33E() // WF33E
{
  SET_STR_AS_PARAM("OF 1/X OF YOUR SHYNEUM. DO YOU AGREE\?");
}


// ================================================
// 0xf368: WORD 'WF36A' codep=0x224c wordp=0xf36a params=0 returns=1
// ================================================
// orphan

void WF36A() // WF36A
{
  Push(0);
  Push(4);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(2);
  } else
  {
    Push(4);
  }
  Push(Read16(regsp)); // DUP
  Push(Pop() + 0x0030); //  0x0030 +
  WF33E(); // WF33E
  Pop(); // DROP
  Push(Pop() + 5); //  5 +
  C_ex__2(); // C!_2
}


// ================================================
// 0xf392: WORD 'WF394' codep=0x224c wordp=0xf394 params=0 returns=0
// ================================================
// orphan

void WF394() // WF394
{
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(2);
  _gt_(); // >
  if (Pop() == 0) return;
  WF36A(); // WF36A
  WF332(); // WF332
  WE6BA(); // WE6BA
  WF33E(); // WF33E
  DrawTTY(); // .TTY
  Push(0);
  Push(0x0064);
  WE84F(); // WE84F
  if (Pop() != 0)
  {
    Push(6);
    WE76B(); // WE76B
    Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
    Push(3);
    _star_CLOSE(); // *CLOSE
    SWAP(); // SWAP
    _slash_(); // /
    Push(6);
    WE7B9(); // WE7B9
    WE59E(); // WE59E
    CTINIT(); // CTINIT
    Push(0x621e); Push(0x0002); // 'SHYNEUM EXCHANGED'
    WE5E2(); // WE5E2
    DrawTTY(); // .TTY
    return;
  }
  Pop(); // DROP
  Push(pp__ro_STOP_dash_C); // (STOP-C
  ON_2(); // ON_2
  Push(8);
  Push(pp_P_dash_POSTU); // P-POSTU
  Store_2(); // !_2
}


// ================================================
// 0xf3ea: WORD 'WF3EC' codep=0x224c wordp=0xf3ec
// ================================================
// orphan

void WF3EC() // WF3EC
{
  GetColor(YELLOW);
  StoreCOLOR(); // !COLOR
  WUP(); // WUP
  Push(0xbe45); // '.HUFF'
  MODULE(); // MODULE
  Push(0x4e20); Push(0x0000);
  WE5F4(); // WE5F4
  INEXT(); // INEXT
}


// ================================================
// 0xf404: WORD 'WF406' codep=0x1d29 wordp=0xf406
// ================================================
// orphan
// 0xf406: db 0x00 0x00 '  '

// ================================================
// 0xf408: WORD 'WF40A' codep=0x224c wordp=0xf40a params=0 returns=0
// ================================================

void WF40A() // WF40A
{
  Push(!Read16(pp_WF406) & (Read16(pp_IsAF)==0?1:0)); // WF406 @ NOT ?AF @ 0= AND
  if (Pop() == 0) return;
  Push(0x00c9);
  WE58A(); // WE58A
  IOPEN(); // IOPEN
  WF3EC(); // WF3EC
  WF3EC(); // WF3EC
  WF3EC(); // WF3EC
  Push(3);
  _star_CLOSE(); // *CLOSE
  Push(pp_TERMINA); // TERMINA
  ON_2(); // ON_2
  Push(pp__ro_STOP_dash_C); // (STOP-C
  ON_2(); // ON_2
  Push(pp_WE63E); // WE63E
  ON_2(); // ON_2
  Push(pp_WF406); // WF406
  ON_2(); // ON_2
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xf442: WORD 'WF444' codep=0x224c wordp=0xf444
// ================================================
// orphan

void WF444() // WF444
{
  Push(0x00d7);
  WE58A(); // WE58A
  IOPEN(); // IOPEN
  WF3EC(); // WF3EC
  Push(3);
  _star_CLOSE(); // *CLOSE
  Push(0);
  Push(0x0064);
  WE84F(); // WE84F
  if (Pop() != 0)
  {
    Push(pp_WIN); // WIN
    ON_2(); // ON_2
  }
  Push(pp_TERMINA); // TERMINA
  ON_2(); // ON_2
  Push(pp__ro_STOP_dash_C); // (STOP-C
  ON_2(); // ON_2
  Push(pp_WE63E); // WE63E
  ON_2(); // ON_2
}


// ================================================
// 0xf470: WORD 'WF472' codep=0x1d29 wordp=0xf472
// ================================================
// 0xf472: db 0x01 0xc3 0xe9 '   '

// ================================================
// 0xf475: WORD 'WF477' codep=0x1d29 wordp=0xf477
// ================================================
// 0xf477: db 0x02 0x4f 0xef 0x88 0xf0 ' O   '

// ================================================
// 0xf47c: WORD 'WF47E' codep=0x1d29 wordp=0xf47e
// ================================================
// 0xf47e: db 0x02 0x0a 0xf4 0x44 0xf4 '   D '

// ================================================
// 0xf483: WORD 'WF485' codep=0x1d29 wordp=0xf485
// ================================================
// 0xf485: db 0x03 0x1a 0xf1 0x64 0xeb 0xe6 0xf0 '   d   '

// ================================================
// 0xf48c: WORD 'WF48E' codep=0x1d29 wordp=0xf48e
// ================================================
// 0xf48e: db 0x02 0x59 0xe9 0xd1 0xed ' Y   '

// ================================================
// 0xf493: WORD 'WF495' codep=0x1d29 wordp=0xf495
// ================================================
// 0xf495: db 0x02 0x59 0xe9 0xd1 0xed ' Y   '

// ================================================
// 0xf49a: WORD 'WF49C' codep=0x1d29 wordp=0xf49c
// ================================================
// 0xf49c: db 0x02 0xf6 0xf2 0x8a 0xf2 '     '

// ================================================
// 0xf4a1: WORD 'WF4A3' codep=0x1d29 wordp=0xf4a3
// ================================================
// 0xf4a3: db 0x01 0x3a 0xf1 ' : '

// ================================================
// 0xf4a6: WORD 'WF4A8' codep=0x1d29 wordp=0xf4a8
// ================================================
// 0xf4a8: db 0x01 0x94 0xf3 '   '

// ================================================
// 0xf4ab: WORD 'WF4AD' codep=0x224c wordp=0xf4ad params=1 returns=0
// ================================================

void WF4AD() // WF4AD
{
  unsigned short int i, imax;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(pp_WE63E); // WE63E
  _099(); // 099
  COUNT(); // COUNT
  Push(Pop() * 2); //  2*
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    GetEXECUTE(); // @EXECUTE
    Push(Read16(pp_WE63E)); // WE63E @
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    }
    DrawSORD(); // .SORD
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}

// 0xf4db: db 0x16 0x16 0x3c 0x62 0x02 0x00 0xe0 0xe5 '  <b    '

// ================================================
// 0xf4e3: WORD 'SA-CASE' codep=0x4b3b wordp=0xf4ef
// ================================================

void SA_dash_CASE() // SA-CASE
{
  switch(Pop()) // SA-CASE
  {
  case 1:
    Push(pp_WF472); // WF472
    break;
  case 2:
    Push(pp_WF472); // WF472
    break;
  case 7:
    Push(pp_WF477); // WF477
    break;
  case 6:
    Push(pp_WF4A8); // WF4A8
    break;
  case 8:
    Push(pp_WF48E); // WF48E
    break;
  case 11:
    Push(pp_WF495); // WF495
    break;
  case 10:
    Push(pp_WF4A3); // WF4A3
    break;
  case 21:
    Push(pp_WF49C); // WF49C
    break;
  case 22:
    Push(pp_WF47E); // WF47E
    break;
  case 18:
    Push(pp_WF485); // WF485
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xf51b: WORD 'WF51D' codep=0x224c wordp=0xf51d
// ================================================

void WF51D() // WF51D
{
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    Push(pp_OK_dash_TALK); // OK-TALK
    _2_at_(); // 2@
    D_gt_(); // D>
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
}


// ================================================
// 0xf531: WORD '(XCOMM)' codep=0x224c wordp=0xf53d
// ================================================
// entry

void _ro_XCOMM_rc_() // (XCOMM)
{
  WF51D(); // WF51D
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  SA_dash_CASE(); // SA-CASE case
  WF4AD(); // WF4AD
  WF51D(); // WF51D
}

// 0xf54f: db 0x58 0x43 0x4f 0x4d 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'XCOM-VOC_________ '

