// ====== OVERLAY 'COMMSPEC-OV' ======
// store offset = 0xe540
// overlay size   = 0x1020

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//      UNK_0xe556  codep:0x224c parp:0xe556 size:0x0008 C-string:'UNK_0xe556'
//      UNK_0xe560  codep:0x224c parp:0xe560 size:0x000a C-string:'UNK_0xe560'
//      UNK_0xe56c  codep:0x224c parp:0xe56c size:0x0008 C-string:'UNK_0xe56c'
//      UNK_0xe576  codep:0x224c parp:0xe576 size:0x0008 C-string:'UNK_0xe576'
//      UNK_0xe580  codep:0x224c parp:0xe580 size:0x0008 C-string:'UNK_0xe580'
//      UNK_0xe58a  codep:0x224c parp:0xe58a size:0x0012 C-string:'UNK_0xe58a'
//      UNK_0xe59e  codep:0x224c parp:0xe59e size:0x0042 C-string:'UNK_0xe59e'
//      UNK_0xe5e2  codep:0x224c parp:0xe5e2 size:0x0010 C-string:'UNK_0xe5e2'
//      UNK_0xe5f4  codep:0x224c parp:0xe5f4 size:0x0008 C-string:'UNK_0xe5f4'
//      UNK_0xe5fe  codep:0x224c parp:0xe5fe size:0x0016 C-string:'UNK_0xe5fe'
//      UNK_0xe616  codep:0x7420 parp:0xe616 size:0x0003 C-string:'UNK_0xe616'
//      UNK_0xe61b  codep:0x7420 parp:0xe61b size:0x0003 C-string:'UNK_0xe61b'
//      UNK_0xe620  codep:0x7420 parp:0xe620 size:0x0003 C-string:'UNK_0xe620'
//      UNK_0xe625  codep:0x7420 parp:0xe625 size:0x0003 C-string:'UNK_0xe625'
//      UNK_0xe62a  codep:0x7420 parp:0xe62a size:0x0003 C-string:'UNK_0xe62a'
//      UNK_0xe62f  codep:0x7420 parp:0xe62f size:0x0003 C-string:'UNK_0xe62f'
//      UNK_0xe634  codep:0x7420 parp:0xe634 size:0x0003 C-string:'UNK_0xe634'
//      UNK_0xe639  codep:0x7420 parp:0xe639 size:0x0003 C-string:'UNK_0xe639'
//      UNK_0xe63e  codep:0x1d29 parp:0xe63e size:0x0002 C-string:'UNK_0xe63e'
//      UNK_0xe642  codep:0x224c parp:0xe642 size:0x0014 C-string:'UNK_0xe642'
//      UNK_0xe658  codep:0x224c parp:0xe658 size:0x0041 C-string:'UNK_0xe658'
//      UNK_0xe69b  codep:0x224c parp:0xe69b size:0x001d C-string:'UNK_0xe69b'
//      UNK_0xe6ba  codep:0x224c parp:0xe6ba size:0x0010 C-string:'UNK_0xe6ba'
//      UNK_0xe6cc  codep:0x224c parp:0xe6cc size:0x000e C-string:'UNK_0xe6cc'
//          ?VOWEL  codep:0x4b3b parp:0xe6e5 size:0x0018 C-string:'IsVOWEL'
//      UNK_0xe6ff  codep:0x224c parp:0xe6ff size:0x0006 C-string:'UNK_0xe6ff'
//      UNK_0xe707  codep:0x224c parp:0xe707 size:0x000c C-string:'UNK_0xe707'
//      UNK_0xe715  codep:0x224c parp:0xe715 size:0x0008 C-string:'UNK_0xe715'
//      UNK_0xe71f  codep:0x224c parp:0xe71f size:0x0012 C-string:'UNK_0xe71f'
//      UNK_0xe733  codep:0x224c parp:0xe733 size:0x0036 C-string:'UNK_0xe733'
//      UNK_0xe76b  codep:0x224c parp:0xe76b size:0x0010 C-string:'UNK_0xe76b'
//      UNK_0xe77d  codep:0x224c parp:0xe77d size:0x000e C-string:'UNK_0xe77d'
//      UNK_0xe78d  codep:0x224c parp:0xe78d size:0x0012 C-string:'UNK_0xe78d'
//      UNK_0xe7a1  codep:0x224c parp:0xe7a1 size:0x0016 C-string:'UNK_0xe7a1'
//      UNK_0xe7b9  codep:0x224c parp:0xe7b9 size:0x001e C-string:'UNK_0xe7b9'
//      UNK_0xe7d9  codep:0x224c parp:0xe7d9 size:0x001e C-string:'UNK_0xe7d9'
//      UNK_0xe7f9  codep:0x224c parp:0xe7f9 size:0x000e C-string:'UNK_0xe7f9'
//      UNK_0xe809  codep:0x224c parp:0xe809 size:0x000a C-string:'UNK_0xe809'
//      UNK_0xe815  codep:0x224c parp:0xe815 size:0x002a C-string:'UNK_0xe815'
//      UNK_0xe841  codep:0x224c parp:0xe841 size:0x000c C-string:'UNK_0xe841'
//      UNK_0xe84f  codep:0x224c parp:0xe84f size:0x006e C-string:'UNK_0xe84f'
//      UNK_0xe8bf  codep:0x224c parp:0xe8bf size:0x0016 C-string:'UNK_0xe8bf'
//      UNK_0xe8d7  codep:0x224c parp:0xe8d7 size:0x0018 C-string:'UNK_0xe8d7'
//      UNK_0xe8f1  codep:0x224c parp:0xe8f1 size:0x0008 C-string:'UNK_0xe8f1'
//      UNK_0xe8fb  codep:0x224c parp:0xe8fb size:0x0022 C-string:'UNK_0xe8fb'
//      UNK_0xe91f  codep:0x224c parp:0xe91f size:0x0014 C-string:'UNK_0xe91f'
//      UNK_0xe935  codep:0x224c parp:0xe935 size:0x0022 C-string:'UNK_0xe935'
//      UNK_0xe959  codep:0x224c parp:0xe959 size:0x0058 C-string:'UNK_0xe959'
//      UNK_0xe9b3  codep:0x224c parp:0xe9b3 size:0x000e C-string:'UNK_0xe9b3'
//      UNK_0xe9c3  codep:0x224c parp:0xe9c3 size:0x005c C-string:'UNK_0xe9c3'
//      UNK_0xea21  codep:0x224c parp:0xea21 size:0x000a C-string:'UNK_0xea21'
//      UNK_0xea2d  codep:0x224c parp:0xea2d size:0x0014 C-string:'UNK_0xea2d'
//      UNK_0xea43  codep:0x224c parp:0xea43 size:0x000c C-string:'UNK_0xea43'
//      UNK_0xea51  codep:0x224c parp:0xea51 size:0x0010 C-string:'UNK_0xea51'
//      UNK_0xea63  codep:0x224c parp:0xea63 size:0x0032 C-string:'UNK_0xea63'
//      UNK_0xea97  codep:0x7420 parp:0xea97 size:0x0003 C-string:'UNK_0xea97'
//      UNK_0xea9c  codep:0x7420 parp:0xea9c size:0x0003 C-string:'UNK_0xea9c'
//      UNK_0xeaa1  codep:0x224c parp:0xeaa1 size:0x00b4 C-string:'UNK_0xeaa1'
//      GORZEK>UHL  codep:0x224c parp:0xeb64 size:0x0090 C-string:'GORZEK_gt_UHL'
//      UNK_0xebf6  codep:0x224c parp:0xebf6 size:0x003e C-string:'UNK_0xebf6'
//      UNK_0xec36  codep:0x224c parp:0xec36 size:0x0038 C-string:'UNK_0xec36'
//      UNK_0xec70  codep:0x224c parp:0xec70 size:0x0012 C-string:'UNK_0xec70'
//      UNK_0xec84  codep:0x224c parp:0xec84 size:0x0012 C-string:'UNK_0xec84'
//          NPCREW  codep:0x4b3b parp:0xeca1 size:0x000c C-string:'NPCREW'
//      UNK_0xecaf  codep:0x224c parp:0xecaf size:0x002c C-string:'UNK_0xecaf'
//      UNK_0xecdd  codep:0x224c parp:0xecdd size:0x007a C-string:'UNK_0xecdd'
//      UNK_0xed59  codep:0x224c parp:0xed59 size:0x0016 C-string:'UNK_0xed59'
//      UNK_0xed71  codep:0x224c parp:0xed71 size:0x002c C-string:'UNK_0xed71'
//      UNK_0xed9f  codep:0x224c parp:0xed9f size:0x0014 C-string:'UNK_0xed9f'
//      UNK_0xedb5  codep:0x224c parp:0xedb5 size:0x000c C-string:'UNK_0xedb5'
//      UNK_0xedc3  codep:0x224c parp:0xedc3 size:0x000c C-string:'UNK_0xedc3'
//      UNK_0xedd1  codep:0x224c parp:0xedd1 size:0x0036 C-string:'UNK_0xedd1'
//      UNK_0xee09  codep:0x224c parp:0xee09 size:0x000c C-string:'UNK_0xee09'
//      UNK_0xee17  codep:0x224c parp:0xee17 size:0x0042 C-string:'UNK_0xee17'
//      UNK_0xee5b  codep:0x224c parp:0xee5b size:0x001e C-string:'UNK_0xee5b'
//      UNK_0xee7b  codep:0x224c parp:0xee7b size:0x000e C-string:'UNK_0xee7b'
//      UNK_0xee8b  codep:0x224c parp:0xee8b size:0x000c C-string:'UNK_0xee8b'
//      UNK_0xee99  codep:0x224c parp:0xee99 size:0x0022 C-string:'UNK_0xee99'
//      UNK_0xeebd  codep:0x224c parp:0xeebd size:0x0022 C-string:'UNK_0xeebd'
//      UNK_0xeee1  codep:0x224c parp:0xeee1 size:0x000a C-string:'UNK_0xeee1'
//      UNK_0xeeed  codep:0x224c parp:0xeeed size:0x0008 C-string:'UNK_0xeeed'
//      UNK_0xeef7  codep:0x224c parp:0xeef7 size:0x000c C-string:'UNK_0xeef7'
//      UNK_0xef05  codep:0x224c parp:0xef05 size:0x0032 C-string:'UNK_0xef05'
//      UNK_0xef39  codep:0x224c parp:0xef39 size:0x0014 C-string:'UNK_0xef39'
//      UNK_0xef4f  codep:0x224c parp:0xef4f size:0x0098 C-string:'UNK_0xef4f'
//      UNK_0xefe9  codep:0x224c parp:0xefe9 size:0x0016 C-string:'UNK_0xefe9'
//      UNK_0xf001  codep:0x224c parp:0xf001 size:0x0033 C-string:'UNK_0xf001'
//      UNK_0xf036  codep:0x224c parp:0xf036 size:0x002a C-string:'UNK_0xf036'
//      UNK_0xf062  codep:0x224c parp:0xf062 size:0x0012 C-string:'UNK_0xf062'
//      UNK_0xf076  codep:0x224c parp:0xf076 size:0x0010 C-string:'UNK_0xf076'
//      UNK_0xf088  codep:0x224c parp:0xf088 size:0x005c C-string:'UNK_0xf088'
//      UNK_0xf0e6  codep:0x224c parp:0xf0e6 size:0x0032 C-string:'UNK_0xf0e6'
//      UNK_0xf11a  codep:0x224c parp:0xf11a size:0x001e C-string:'UNK_0xf11a'
//      UNK_0xf13a  codep:0x224c parp:0xf13a size:0x0054 C-string:'UNK_0xf13a'
//      UNK_0xf190  codep:0x224c parp:0xf190 size:0x0040 C-string:'UNK_0xf190'
//      UNK_0xf1d2  codep:0x224c parp:0xf1d2 size:0x0022 C-string:'UNK_0xf1d2'
//      UNK_0xf1f6  codep:0x224c parp:0xf1f6 size:0x000c C-string:'UNK_0xf1f6'
//      UNK_0xf204  codep:0x224c parp:0xf204 size:0x0024 C-string:'UNK_0xf204'
//      UNK_0xf22a  codep:0x224c parp:0xf22a size:0x0010 C-string:'UNK_0xf22a'
//      UNK_0xf23c  codep:0x224c parp:0xf23c size:0x0006 C-string:'UNK_0xf23c'
//       #>PROTEST  codep:0x4b3b parp:0xf250 size:0x0010 C-string:'_n__gt_PROTEST'
//           #>PRO  codep:0x224c parp:0xf26a size:0x0012 C-string:'_n__gt_PRO'
//      UNK_0xf27e  codep:0x224c parp:0xf27e size:0x000a C-string:'UNK_0xf27e'
//      UNK_0xf28a  codep:0x224c parp:0xf28a size:0x0052 C-string:'UNK_0xf28a'
//      UNK_0xf2de  codep:0x224c parp:0xf2de size:0x000a C-string:'UNK_0xf2de'
//      UNK_0xf2ea  codep:0x224c parp:0xf2ea size:0x000a C-string:'UNK_0xf2ea'
//      UNK_0xf2f6  codep:0x224c parp:0xf2f6 size:0x003a C-string:'UNK_0xf2f6'
//      UNK_0xf332  codep:0x224c parp:0xf332 size:0x000a C-string:'UNK_0xf332'
//      UNK_0xf33e  codep:0x224c parp:0xf33e size:0x002a C-string:'UNK_0xf33e'
//      UNK_0xf36a  codep:0x224c parp:0xf36a size:0x0028 C-string:'UNK_0xf36a'
//      UNK_0xf394  codep:0x224c parp:0xf394 size:0x0056 C-string:'UNK_0xf394'
//      UNK_0xf3ec  codep:0x224c parp:0xf3ec size:0x0018 C-string:'UNK_0xf3ec'
//      UNK_0xf406  codep:0x1d29 parp:0xf406 size:0x006a C-string:'UNK_0xf406'
//      UNK_0xf472  codep:0x1d29 parp:0xf472 size:0x0003 C-string:'UNK_0xf472'
//      UNK_0xf477  codep:0x1d29 parp:0xf477 size:0x0005 C-string:'UNK_0xf477'
//      UNK_0xf47e  codep:0x1d29 parp:0xf47e size:0x0005 C-string:'UNK_0xf47e'
//      UNK_0xf485  codep:0x1d29 parp:0xf485 size:0x0007 C-string:'UNK_0xf485'
//      UNK_0xf48e  codep:0x1d29 parp:0xf48e size:0x0005 C-string:'UNK_0xf48e'
//      UNK_0xf495  codep:0x1d29 parp:0xf495 size:0x0005 C-string:'UNK_0xf495'
//      UNK_0xf49c  codep:0x1d29 parp:0xf49c size:0x0005 C-string:'UNK_0xf49c'
//      UNK_0xf4a3  codep:0x1d29 parp:0xf4a3 size:0x0003 C-string:'UNK_0xf4a3'
//      UNK_0xf4a8  codep:0x1d29 parp:0xf4a8 size:0x0003 C-string:'UNK_0xf4a8'
//      UNK_0xf4ad  codep:0x224c parp:0xf4ad size:0x0036 C-string:'UNK_0xf4ad'
//         SA-CASE  codep:0x4b3b parp:0xf4ef size:0x002c C-string:'SA_dash_CASE'
//      UNK_0xf51d  codep:0x224c parp:0xf51d size:0x0014 C-string:'UNK_0xf51d'
//         (XCOMM)  codep:0x224c parp:0xf53d size:0x0000 C-string:'_ro_XCOMM_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int cc_MPS; // MPS
extern const unsigned short int pp_Get_co_0_star_1_sc_; // @,0*1;
extern const unsigned short int pp_IsNID; // ?NID
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
const unsigned short int pp_UNK_0xe63e = 0xe63e; // UNK_0xe63e size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf406 = 0xf406; // UNK_0xf406 size: 106
// {0x00, 0x00, 0x4c, 0x22, 0x04, 0xf4, 0xae, 0x0b, 0x07, 0x13, 0xe3, 0x51, 0xae, 0x0b, 0x89, 0x12, 0xf5, 0x12, 0xfa, 0x15, 0x26, 0x00, 0x5d, 0x17, 0xc9, 0x00, 0x88, 0xe5, 0x3f, 0x7a, 0xea, 0xf3, 0xea, 0xf3, 0xea, 0xf3, 0x7f, 0x3b, 0x0a, 0x7a, 0xb9, 0x5f, 0x57, 0x6d, 0x18, 0x5c, 0x57, 0x6d, 0x3c, 0xe6, 0x57, 0x6d, 0x04, 0xf4, 0x57, 0x6d, 0x8d, 0x83, 0x90, 0x16, 0x4c, 0x22, 0x5d, 0x17, 0xd7, 0x00, 0x88, 0xe5, 0x3f, 0x7a, 0xea, 0xf3, 0x7f, 0x3b, 0x0a, 0x7a, 0x20, 0x0f, 0x5d, 0x17, 0x64, 0x00, 0x4d, 0xe8, 0xfa, 0x15, 0x06, 0x00, 0x74, 0x51, 0x57, 0x6d, 0xb9, 0x5f, 0x57, 0x6d, 0x18, 0x5c, 0x57, 0x6d, 0x3c, 0xe6, 0x57, 0x6d, 0x90, 0x16}

const unsigned short int pp_UNK_0xf472 = 0xf472; // UNK_0xf472 size: 3
// {0x01, 0xc3, 0xe9}

const unsigned short int pp_UNK_0xf477 = 0xf477; // UNK_0xf477 size: 5
// {0x02, 0x4f, 0xef, 0x88, 0xf0}

const unsigned short int pp_UNK_0xf47e = 0xf47e; // UNK_0xf47e size: 5
// {0x02, 0x0a, 0xf4, 0x44, 0xf4}

const unsigned short int pp_UNK_0xf485 = 0xf485; // UNK_0xf485 size: 7
// {0x03, 0x1a, 0xf1, 0x64, 0xeb, 0xe6, 0xf0}

const unsigned short int pp_UNK_0xf48e = 0xf48e; // UNK_0xf48e size: 5
// {0x02, 0x59, 0xe9, 0xd1, 0xed}

const unsigned short int pp_UNK_0xf495 = 0xf495; // UNK_0xf495 size: 5
// {0x02, 0x59, 0xe9, 0xd1, 0xed}

const unsigned short int pp_UNK_0xf49c = 0xf49c; // UNK_0xf49c size: 5
// {0x02, 0xf6, 0xf2, 0x8a, 0xf2}

const unsigned short int pp_UNK_0xf4a3 = 0xf4a3; // UNK_0xf4a3 size: 3
// {0x01, 0x3a, 0xf1}

const unsigned short int pp_UNK_0xf4a8 = 0xf4a8; // UNK_0xf4a8 size: 3
// {0x01, 0x94, 0xf3}




// 0xe552: db 0x01 0x01 '  '

// ================================================
// 0xe554: WORD 'UNK_0xe556' codep=0x224c parp=0xe556 params=0 returns=0
// ================================================

void UNK_0xe556() // UNK_0xe556
{
  Push(0xb76b); // probable 'OV?ART'
  MODULE(); // MODULE
}


// ================================================
// 0xe55e: WORD 'UNK_0xe560' codep=0x224c parp=0xe560 params=0 returns=0
// ================================================
// orphan

void UNK_0xe560() // UNK_0xe560
{
  Push(Read16(pp_E_dash_USE)); // E-USE @
  Push(pp__dash_END); // -END
  Store_2(); // !_2
}


// ================================================
// 0xe56a: WORD 'UNK_0xe56c' codep=0x224c parp=0xe56c params=0 returns=0
// ================================================
// orphan

void UNK_0xe56c() // UNK_0xe56c
{
  Push(0xbf16); // probable 'A>O'
  MODULE(); // MODULE
}


// ================================================
// 0xe574: WORD 'UNK_0xe576' codep=0x224c parp=0xe576 params=0 returns=0
// ================================================
// orphan

void UNK_0xe576() // UNK_0xe576
{
  Push(0xbf26); // probable 'O>C'
  MODULE(); // MODULE
}


// ================================================
// 0xe57e: WORD 'UNK_0xe580' codep=0x224c parp=0xe580 params=0 returns=0
// ================================================

void UNK_0xe580() // UNK_0xe580
{
  Push(0xbf4a); // probable 'OV+!EDL'
  MODULE(); // MODULE
}


// ================================================
// 0xe588: WORD 'UNK_0xe58a' codep=0x224c parp=0xe58a
// ================================================

void UNK_0xe58a() // UNK_0xe58a
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
// 0xe59c: WORD 'UNK_0xe59e' codep=0x224c parp=0xe59e params=0 returns=0
// ================================================

void UNK_0xe59e() // UNK_0xe59e
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
// 0xe5e0: WORD 'UNK_0xe5e2' codep=0x224c parp=0xe5e2 params=2 returns=2
// ================================================

void UNK_0xe5e2() // UNK_0xe5e2
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
// 0xe5f2: WORD 'UNK_0xe5f4' codep=0x224c parp=0xe5f4 params=0 returns=0
// ================================================

void UNK_0xe5f4() // UNK_0xe5f4
{
  Push(0xbe96); // probable 'CPAUS'
  MODULE(); // MODULE
}


// ================================================
// 0xe5fc: WORD 'UNK_0xe5fe' codep=0x224c parp=0xe5fe
// ================================================
// orphan

void UNK_0xe5fe() // UNK_0xe5fe
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
// 0xe614: WORD 'UNK_0xe616' codep=0x7420 parp=0xe616
// ================================================
// orphan
IFieldType UNK_0xe616 = {ORIGINATORIDX, 0x12, 0x01};

// ================================================
// 0xe619: WORD 'UNK_0xe61b' codep=0x7420 parp=0xe61b
// ================================================
IFieldType UNK_0xe61b = {ORIGINATORIDX, 0x13, 0x01};

// ================================================
// 0xe61e: WORD 'UNK_0xe620' codep=0x7420 parp=0xe620
// ================================================
IFieldType UNK_0xe620 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xe623: WORD 'UNK_0xe625' codep=0x7420 parp=0xe625
// ================================================
IFieldType UNK_0xe625 = {ORIGINATORIDX, 0x14, 0x01};

// ================================================
// 0xe628: WORD 'UNK_0xe62a' codep=0x7420 parp=0xe62a
// ================================================
IFieldType UNK_0xe62a = {ORIGINATORIDX, 0x0b, 0x01};

// ================================================
// 0xe62d: WORD 'UNK_0xe62f' codep=0x7420 parp=0xe62f
// ================================================
// orphan
IFieldType UNK_0xe62f = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xe632: WORD 'UNK_0xe634' codep=0x7420 parp=0xe634
// ================================================
IFieldType UNK_0xe634 = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xe637: WORD 'UNK_0xe639' codep=0x7420 parp=0xe639
// ================================================
IFieldType UNK_0xe639 = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xe63c: WORD 'UNK_0xe63e' codep=0x1d29 parp=0xe63e
// ================================================
// 0xe63e: db 0x3a 0x20 ': '

// ================================================
// 0xe640: WORD 'UNK_0xe642' codep=0x224c parp=0xe642
// ================================================

void UNK_0xe642() // UNK_0xe642
{
  CTINIT(); // CTINIT
  Push(0x5bbc); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  DrawTTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
}


// ================================================
// 0xe656: WORD 'UNK_0xe658' codep=0x224c parp=0xe658
// ================================================

void UNK_0xe658() // UNK_0xe658
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
    UNK_0xe642(); // UNK_0xe642
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
// 0xe699: WORD 'UNK_0xe69b' codep=0x224c parp=0xe69b
// ================================================
// orphan

void UNK_0xe69b() // UNK_0xe69b
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
// 0xe6b8: WORD 'UNK_0xe6ba' codep=0x224c parp=0xe6ba
// ================================================
// orphan

void UNK_0xe6ba() // UNK_0xe6ba
{
  UNK_0xe69b(); // UNK_0xe69b
  UNK_0xe56c(); // UNK_0xe56c
  UNK_0xe576(); // UNK_0xe576
  Push(0xbf6f); // probable 'P>CT'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe6ca: WORD 'UNK_0xe6cc' codep=0x224c parp=0xe6cc
// ================================================

void UNK_0xe6cc() // UNK_0xe6cc
{
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  NEW_dash_BUT(); // NEW-BUT
}


// ================================================
// 0xe6da: WORD '?VOWEL' codep=0x4b3b parp=0xe6e5
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
// 0xe6fd: WORD 'UNK_0xe6ff' codep=0x224c parp=0xe6ff
// ================================================
// orphan

void UNK_0xe6ff() // UNK_0xe6ff
{
  Push(Read16(Pop())&0xFF); //  C@
  IsVOWEL(); // ?VOWEL case
}


// ================================================
// 0xe705: WORD 'UNK_0xe707' codep=0x224c parp=0xe707 params=0 returns=1
// ================================================
// orphan

void UNK_0xe707() // UNK_0xe707
{
  Push(pp__ro_STOP_dash_C); // (STOP-C
  ON_2(); // ON_2
  Push(0x0064);
  UNK_0xe580(); // UNK_0xe580
}


// ================================================
// 0xe713: WORD 'UNK_0xe715' codep=0x224c parp=0xe715 params=0 returns=0
// ================================================
// orphan

void UNK_0xe715() // UNK_0xe715
{
  Push(0xb6ec); // probable '=CARGO'
  MODULE(); // MODULE
}


// ================================================
// 0xe71d: WORD 'UNK_0xe71f' codep=0x224c parp=0xe71f
// ================================================
// orphan

void UNK_0xe71f() // UNK_0xe71f
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
}


// ================================================
// 0xe731: WORD 'UNK_0xe733' codep=0x224c parp=0xe733
// ================================================
// orphan

void UNK_0xe733() // UNK_0xe733
{
  UNK_0xe71f(); // UNK_0xe71f
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
// 0xe769: WORD 'UNK_0xe76b' codep=0x224c parp=0xe76b
// ================================================
// orphan

void UNK_0xe76b() // UNK_0xe76b
{
  UNK_0xe71f(); // UNK_0xe71f
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xe77b: WORD 'UNK_0xe77d' codep=0x224c parp=0xe77d params=0 returns=1
// ================================================
// orphan

void UNK_0xe77d() // UNK_0xe77d
{
  Push(0);
  Push(0x65e1+UNK_0xe616.offset); // UNK_0xe616<IFIELD>
  C_ex__2(); // C!_2
  Push(0xff9c);
  UNK_0xe580(); // UNK_0xe580
}


// ================================================
// 0xe78b: WORD 'UNK_0xe78d' codep=0x224c parp=0xe78d params=0 returns=0
// ================================================
// orphan

void UNK_0xe78d() // UNK_0xe78d
{
  Push(0x0014);
  Push(Read16(regsp)); // DUP
  Push(0x65e1+UNK_0xe625.offset); // UNK_0xe625<IFIELD>
  C_ex__2(); // C!_2
  Push((0x65e1+UNK_0xe625.offset) + 1); // UNK_0xe625<IFIELD> 1+
  C_ex__2(); // C!_2
}


// ================================================
// 0xe79f: WORD 'UNK_0xe7a1' codep=0x224c parp=0xe7a1 params=0 returns=0
// ================================================
// orphan

void UNK_0xe7a1() // UNK_0xe7a1
{

  label2:
  CI(); // CI
  Push2Words("*STARSH");
  D_eq_(); // D=
  Push(!Pop()); //  NOT
  if (Pop() == 0) goto label1;
  CDROP(); // CDROP
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe7b7: WORD 'UNK_0xe7b9' codep=0x224c parp=0xe7b9
// ================================================
// orphan

void UNK_0xe7b9() // UNK_0xe7b9
{
  UNK_0xe76b(); // UNK_0xe76b
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
  UNK_0xe7a1(); // UNK_0xe7a1
  UNK_0xe715(); // UNK_0xe715
  DrawSORD(); // .SORD
}


// ================================================
// 0xe7d7: WORD 'UNK_0xe7d9' codep=0x224c parp=0xe7d9
// ================================================
// orphan

void UNK_0xe7d9() // UNK_0xe7d9
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
  UNK_0xe715(); // UNK_0xe715
  DrawSORD(); // .SORD
}


// ================================================
// 0xe7f7: WORD 'UNK_0xe7f9' codep=0x224c parp=0xe7f9 params=1 returns=1
// ================================================
// orphan

void UNK_0xe7f9() // UNK_0xe7f9
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+UNK_0xe620.offset)); // UNK_0xe620<IFIELD> @
  MIN(); // MIN
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe807: WORD 'UNK_0xe809' codep=0x224c parp=0xe809
// ================================================
// orphan

void UNK_0xe809() // UNK_0xe809
{
  ORGIA(); // ORGIA
  Get_gt_C_plus_S(); // @>C+S
  UNK_0xe78d(); // UNK_0xe78d
  UNK_0xe77d(); // UNK_0xe77d
}


// ================================================
// 0xe813: WORD 'UNK_0xe815' codep=0x224c parp=0xe815
// ================================================
// orphan

void UNK_0xe815() // UNK_0xe815
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  OVER(); // OVER
  Push(0xb976); // probable 'CLASS>B'
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
// 0xe83f: WORD 'UNK_0xe841' codep=0x224c parp=0xe841
// ================================================
// orphan

void UNK_0xe841() // UNK_0xe841
{
  Push(0x5c00); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  UNK_0xe6ba(); // UNK_0xe6ba
}


// ================================================
// 0xe84d: WORD 'UNK_0xe84f' codep=0x224c parp=0xe84f
// ================================================

void UNK_0xe84f() // UNK_0xe84f
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
    UNK_0xe6cc(); // UNK_0xe6cc
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
    UNK_0xe580(); // UNK_0xe580
    Push(1);
  } else
  {
    UNK_0xe580(); // UNK_0xe580
    Pop(); // DROP
    Push(0);
  }
  Push(Read16(regsp)); // DUP
  UNK_0xe658(); // UNK_0xe658
  Push(9);
  DrawBTN_dash_TE(); // .BTN-TE
}


// ================================================
// 0xe8bd: WORD 'UNK_0xe8bf' codep=0x224c parp=0xe8bf
// ================================================
// orphan

void UNK_0xe8bf() // UNK_0xe8bf
{
  Push(0x01f4);
  Push(0x03e8);
  RRND(); // RRND
  UNK_0xe7f9(); // UNK_0xe7f9
  Push(6);
  UNK_0xe7d9(); // UNK_0xe7d9
  Push(pp_IsNID); // ?NID
  ON_2(); // ON_2
}


// ================================================
// 0xe8d5: WORD 'UNK_0xe8d7' codep=0x224c parp=0xe8d7 params=2 returns=0
// ================================================
// orphan

void UNK_0xe8d7() // UNK_0xe8d7
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
// 0xe8ef: WORD 'UNK_0xe8f1' codep=0x224c parp=0xe8f1 params=0 returns=2
// ================================================
// orphan

void UNK_0xe8f1() // UNK_0xe8f1
{
  Push(0x05dc);
  MS(); // MS
}


// ================================================
// 0xe8f9: WORD 'UNK_0xe8fb' codep=0x224c parp=0xe8fb
// ================================================
// orphan

void UNK_0xe8fb() // UNK_0xe8fb
{
  CTERASE(); // CTERASE
  Push(0x5c70); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  DrawTTY(); // .TTY
  Push(0x65e1+UNK_0xe62f.offset); // UNK_0xe62f<IFIELD>
  COUNT(); // COUNT
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" REPORTING.", 11); // (.")
}


// ================================================
// 0xe91d: WORD 'UNK_0xe91f' codep=0x224c parp=0xe91f
// ================================================
// orphan

void UNK_0xe91f() // UNK_0xe91f
{
  Push(1);
  UNK_0xe809(); // UNK_0xe809
  Push(1);
  UNK_0xe809(); // UNK_0xe809
  Push(0x0012);
  UNK_0xe809(); // UNK_0xe809
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe933: WORD 'UNK_0xe935' codep=0x224c parp=0xe935
// ================================================

void UNK_0xe935() // UNK_0xe935
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+UNK_0xe62a.offset)&0xFF); // UNK_0xe62a<IFIELD> C@
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
// 0xe957: WORD 'UNK_0xe959' codep=0x224c parp=0xe959
// ================================================
// orphan

void UNK_0xe959() // UNK_0xe959
{
  Push(0x0044);
  Push(0x0028);
  UNK_0xe815(); // UNK_0xe815
  if (Pop() != 0)
  {
    UNK_0xe935(); // UNK_0xe935
    UNK_0xe841(); // UNK_0xe841
    Push(0xff9c);
    Push(0);
    UNK_0xe84f(); // UNK_0xe84f
    if (Pop() != 0)
    {
      UNK_0xe8d7(); // UNK_0xe8d7
      UNK_0xe8bf(); // UNK_0xe8bf
      UNK_0xe59e(); // UNK_0xe59e
      Push(0xb6ec); // probable '=CARGO'
      MODULE(); // MODULE
      UNK_0xe56c(); // UNK_0xe56c
      UNK_0xe576(); // UNK_0xe576
      UNK_0xe77d(); // UNK_0xe77d
      ICLOSE(); // ICLOSE
      Push(0x00d9);
      UNK_0xe58a(); // UNK_0xe58a
      IOPEN(); // IOPEN
      UNK_0xe935(); // UNK_0xe935
      Push(0xbe45); // probable '.HUFF'
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
// 0xe9b1: WORD 'UNK_0xe9b3' codep=0x224c parp=0xe9b3
// ================================================
// orphan

void UNK_0xe9b3() // UNK_0xe9b3
{
  UNK_0xe935(); // UNK_0xe935
  Push(0x5c8c); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  UNK_0xe6ba(); // UNK_0xe6ba
}


// ================================================
// 0xe9c1: WORD 'UNK_0xe9c3' codep=0x224c parp=0xe9c3 params=0 returns=0
// ================================================
// orphan

void UNK_0xe9c3() // UNK_0xe9c3
{
  UNK_0xe56c(); // UNK_0xe56c
  UNK_0xe576(); // UNK_0xe576
  Push(0x002d);
  UNK_0xe556(); // UNK_0xe556
  if (Pop() != 0)
  {
    UNK_0xe9b3(); // UNK_0xe9b3
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
    UNK_0xe84f(); // UNK_0xe84f
    if (Pop() != 0)
    {
      UNK_0xe8d7(); // UNK_0xe8d7
      Push(0xb6ec); // probable '=CARGO'
      MODULE(); // MODULE
      Push(pp_IsMVT); // ?MVT
      ON_2(); // ON_2
      UNK_0xe59e(); // UNK_0xe59e
      UNK_0xe91f(); // UNK_0xe91f
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
// 0xea1f: WORD 'UNK_0xea21' codep=0x224c parp=0xea21 params=0 returns=1
// ================================================
// orphan

void UNK_0xea21() // UNK_0xea21
{
  Push(Read16(pp_Is5)); // ?5 @
  Push(5);
  _gt_(); // >
}


// ================================================
// 0xea2b: WORD 'UNK_0xea2d' codep=0x224c parp=0xea2d
// ================================================
// orphan

void UNK_0xea2d() // UNK_0xea2d
{
  ORGIA(); // ORGIA
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+UNK_0xe616.offset)&0xFF); // UNK_0xe616<IFIELD> C@
  Push(Read16(0x65e1+UNK_0xe625.offset)&0xFF); // UNK_0xe625<IFIELD> C@
  Push(0x0065);
  WITHIN(); // WITHIN
}


// ================================================
// 0xea41: WORD 'UNK_0xea43' codep=0x224c parp=0xea43 params=0 returns=1
// ================================================
// orphan

void UNK_0xea43() // UNK_0xea43
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+UNK_0xe620.offset)); // UNK_0xe620<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea4f: WORD 'UNK_0xea51' codep=0x224c parp=0xea51
// ================================================

void UNK_0xea51() // UNK_0xea51
{
  UNK_0xe935(); // UNK_0xe935
  INEXT(); // INEXT
  Push(0xbe45); // probable '.HUFF'
  MODULE(); // MODULE
  UNK_0xe5f4(); // UNK_0xe5f4
  WUP(); // WUP
}


// ================================================
// 0xea61: WORD 'UNK_0xea63' codep=0x224c parp=0xea63
// ================================================

void UNK_0xea63() // UNK_0xea63
{
  Push(6);
  Push(0x003a);
  Push(1);
  GetRECORD(); // @RECORD
  Push(Pop() + 0x0048); //  0x0048 +
  C_ex__2(); // C!_2
  UPDATE(); // UPDATE
  SAVE_dash_BU(); // SAVE-BU
  Push(0x5d19); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  Push(0x001c);
  Push(0x0036);
  GetRECORD(); // @RECORD
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  UPDATE(); // UPDATE
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xea95: WORD 'UNK_0xea97' codep=0x7420 parp=0xea97
// ================================================
// orphan
IFieldType UNK_0xea97 = {CREWMEMBERIDX, 0x1a, 0x01};

// ================================================
// 0xea9a: WORD 'UNK_0xea9c' codep=0x7420 parp=0xea9c
// ================================================
IFieldType UNK_0xea9c = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xea9f: WORD 'UNK_0xeaa1' codep=0x224c parp=0xeaa1
// ================================================
// orphan

void UNK_0xeaa1() // UNK_0xeaa1
{
  CTINIT(); // CTINIT
  Push(0x5d3e); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("SCIENCE: ");
  DrawTTY(); // .TTY
  Push(Read16(0x65e1+UNK_0xea97.offset)&0xFF); // UNK_0xea97<IFIELD> C@
  UNK_0xe5fe(); // UNK_0xe5fe
  Push(0x65e1+UNK_0xea97.offset); // UNK_0xea97<IFIELD>
  C_ex__2(); // C!_2
  SET_STR_AS_PARAM("NAVIGATING: ");
  DrawTTY(); // .TTY
  Push(Read16((0x65e1+UNK_0xea97.offset) + 1)&0xFF); // UNK_0xea97<IFIELD> 1+ C@
  UNK_0xe5fe(); // UNK_0xe5fe
  Push((0x65e1+UNK_0xea97.offset) + 1); // UNK_0xea97<IFIELD> 1+
  C_ex__2(); // C!_2
  Push(0x5d60); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  DrawTTY(); // .TTY
  Push(Read16((0x65e1+UNK_0xea97.offset) + 2)&0xFF); // UNK_0xea97<IFIELD> 2+ C@
  UNK_0xe5fe(); // UNK_0xe5fe
  Push((0x65e1+UNK_0xea97.offset) + 2); // UNK_0xea97<IFIELD> 2+
  C_ex__2(); // C!_2
  Push(0x5d7a); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  DrawTTY(); // .TTY
  Push(Read16((0x65e1+UNK_0xea97.offset) + 3)&0xFF); // UNK_0xea97<IFIELD> 3+ C@
  UNK_0xe5fe(); // UNK_0xe5fe
  Push((0x65e1+UNK_0xea97.offset) + 3); // UNK_0xea97<IFIELD> 3+
  C_ex__2(); // C!_2
  SET_STR_AS_PARAM("MEDICINE: ");
  DrawTTY(); // .TTY
  Push(Read16((0x65e1+UNK_0xea97.offset) + 4)&0xFF); // UNK_0xea97<IFIELD> 4 + C@
  UNK_0xe5fe(); // UNK_0xe5fe
  Push((0x65e1+UNK_0xea97.offset) + 4); // UNK_0xea97<IFIELD> 4 +
  C_ex__2(); // C!_2
  Push(0x0064);
  Push(0x65e1+UNK_0xea9c.offset); // UNK_0xea9c<IFIELD>
  C_ex__2(); // C!_2
  Push((Read16(0x65e1+UNK_0xe634.offset)&0xFF) & 0x00eb); // UNK_0xe634<IFIELD> C@ 0x00eb AND
  Push(0x65e1+UNK_0xe634.offset); // UNK_0xe634<IFIELD>
  C_ex__2(); // C!_2
  Push(0x2ee0); Push(0x0000);
  UNK_0xe5f4(); // UNK_0xe5f4
}


// ================================================
// 0xeb55: WORD 'GORZEK>UHL' codep=0x224c parp=0xeb64 params=0 returns=0
// ================================================

void GORZEK_gt_UHL() // GORZEK>UHL
{
  Push(0x0036);
  UNK_0xe556(); // UNK_0xe556
  if (Pop() == 0) return;
  Push(0x0064);
  UNK_0xe58a(); // UNK_0xe58a
  IOPEN(); // IOPEN
  UNK_0xe935(); // UNK_0xe935
  Push(0xbe45); // probable '.HUFF'
  MODULE(); // MODULE
  Push(0x5d96); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  DrawTTY(); // .TTY
  Push(0);
  Push(0);
  UNK_0xe84f(); // UNK_0xe84f
  if (Pop() != 0)
  {
    Push(0x2710); Push(0x0000);
    UNK_0xea51(); // UNK_0xea51
    UNK_0xe59e(); // UNK_0xe59e
    Push(0x2710); Push(0x0000);
    UNK_0xea51(); // UNK_0xea51
    Push(0x2710); Push(0x0000);
    UNK_0xea51(); // UNK_0xea51
    Push(pp__ro_ENCOUN); // (ENCOUN
    Get_gt_C_plus_S(); // @>C+S
    Push(0);
    Push(0x65e1+UNK_0xe639.offset); // UNK_0xe639<IFIELD>
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
    UNK_0xea63(); // UNK_0xea63
    Push(pp_UNK_0xe63e); // UNK_0xe63e
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
// 0xebf4: WORD 'UNK_0xebf6' codep=0x224c parp=0xebf6 params=0 returns=0
// ================================================
// orphan

void UNK_0xebf6() // UNK_0xebf6
{
  unsigned short int i, imax, a;
  Push(0x65e1+UNK_0xe62f.offset); // UNK_0xe62f<IFIELD>
  _099(); // 099
  Push((0x65e1+UNK_0xe62f.offset) + 1); // UNK_0xe62f<IFIELD> 1+
  Push(0x000e);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  Push(2);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0xbf8f); // probable '1SYL'
    MODULE(); // MODULE
    PAD(); // PAD
    COUNT(); // COUNT
    a = Pop(); // >R
    Push(0x65e1+UNK_0xe62f.offset); // UNK_0xe62f<IFIELD>
    COUNT(); // COUNT
    Push(Pop() + Pop()); // +
    Push(a); // I
    CMOVE_2(); // CMOVE_2
    Push((Read16(0x65e1+UNK_0xe62f.offset)&0xFF) + a); // UNK_0xe62f<IFIELD> C@ R> +
    Push(0x65e1+UNK_0xe62f.offset); // UNK_0xe62f<IFIELD>
    C_ex__2(); // C!_2
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xec34: WORD 'UNK_0xec36' codep=0x224c parp=0xec36
// ================================================
// orphan

void UNK_0xec36() // UNK_0xec36
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
  UNK_0xea43(); // UNK_0xea43
  _gt_(); // >
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push2Words("*STARSH");
    _gt_C_plus_S(); // >C+S
    _gt_BOX(); // >BOX
    UNK_0xe715(); // UNK_0xe715
    ICLOSE(); // ICLOSE
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xec6e: WORD 'UNK_0xec70' codep=0x224c parp=0xec70 params=0 returns=1
// ================================================

void UNK_0xec70() // UNK_0xec70
{
  do
  {
    INEXT(); // INEXT
    Push((Read16(0x65e1+UNK_0xe634.offset)&0xFF) & 8); // UNK_0xe634<IFIELD> C@ 8 AND
  } while(Pop() == 0);
  Push(1);
}


// ================================================
// 0xec82: WORD 'UNK_0xec84' codep=0x224c parp=0xec84 params=0 returns=1
// ================================================

void UNK_0xec84() // UNK_0xec84
{
  do
  {
    IPREV(); // IPREV
    Push((Read16(0x65e1+UNK_0xe634.offset)&0xFF) & 8); // UNK_0xe634<IFIELD> C@ 8 AND
  } while(Pop() == 0);
  Push(1);
}


// ================================================
// 0xec96: WORD 'NPCREW' codep=0x4b3b parp=0xeca1
// ================================================

void NPCREW() // NPCREW
{
  switch(Pop()) // NPCREW
  {
  case 1:
    UNK_0xec70(); // UNK_0xec70
    break;
  case 65535:
    UNK_0xec84(); // UNK_0xec84
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xecad: WORD 'UNK_0xecaf' codep=0x224c parp=0xecaf params=0 returns=0
// ================================================
// orphan

void UNK_0xecaf() // UNK_0xecaf
{
  Push(Read16(0x65e1+UNK_0xe634.offset)&0xFF); // UNK_0xe634<IFIELD> C@
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
    Push(0x65e1+UNK_0xe634.offset); // UNK_0xe634<IFIELD>
    C_ex__2(); // C!_2
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xecdb: WORD 'UNK_0xecdd' codep=0x224c parp=0xecdd
// ================================================
// orphan

void UNK_0xecdd() // UNK_0xecdd
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN

  label2:
  Push(!((Read16(0x65e1+UNK_0xe634.offset)&0xFF) & 8)); // UNK_0xe634<IFIELD> C@ 8 AND NOT
  if (Pop() == 0) goto label1;
  INEXT(); // INEXT
  goto label2;

  label1:
  Push(1);
  Push(0x0015);
  CMESS(); // CMESS
  Push(0x5dab); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  StoreCRS(); // !CRS
  Push(2);
  Push(0x0012);
  CMESS(); // CMESS
  Push(0x5dcc); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  StoreCRS(); // !CRS
  Push(0x000b);
  Push(2);
  CTPOS_dot_(); // CTPOS.
  Push(0x65e1+UNK_0xe62f.offset); // UNK_0xe62f<IFIELD>
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
      Push(0x65e1+UNK_0xe62f.offset); // UNK_0xe62f<IFIELD>
      _do__dot_(); // $.
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  UNK_0xecaf(); // UNK_0xecaf
}


// ================================================
// 0xed57: WORD 'UNK_0xed59' codep=0x224c parp=0xed59
// ================================================
// orphan

void UNK_0xed59() // UNK_0xed59
{
  Push(0x00fc);
  UNK_0xe58a(); // UNK_0xe58a
  IOPEN(); // IOPEN
  UNK_0xe935(); // UNK_0xe935
  Push(0xbe45); // probable '.HUFF'
  MODULE(); // MODULE
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xed6f: WORD 'UNK_0xed71' codep=0x224c parp=0xed71
// ================================================
// orphan

void UNK_0xed71() // UNK_0xed71
{
  unsigned short int i, imax;
  Push(0x00fe);
  UNK_0xe58a(); // UNK_0xe58a
  IOPEN(); // IOPEN
  ILAST(); // ILAST
  Push(4);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    UNK_0xe935(); // UNK_0xe935
    Push(0xbe45); // probable '.HUFF'
    MODULE(); // MODULE
    IPREV(); // IPREV
    Push(0x4e20); Push(0x0000);
    UNK_0xe5f4(); // UNK_0xe5f4
    i++;
  } while(i<imax); // (LOOP)

  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xed9d: WORD 'UNK_0xed9f' codep=0x224c parp=0xed9f params=3 returns=1
// ================================================
// orphan

void UNK_0xed9f() // UNK_0xed9f
{
  Push(0x65e1+UNK_0xe61b.offset); // UNK_0xe61b<IFIELD>
  C_ex__2(); // C!_2
  Push(0x65e1+UNK_0xe625.offset); // UNK_0xe625<IFIELD>
  C_ex__2(); // C!_2
  Push((0x65e1+UNK_0xe625.offset) + 1); // UNK_0xe625<IFIELD> 1+
  C_ex__2(); // C!_2
  Push(0);
  UNK_0xe580(); // UNK_0xe580
}


// ================================================
// 0xedb3: WORD 'UNK_0xedb5' codep=0x224c parp=0xedb5 params=0 returns=1
// ================================================
// orphan

void UNK_0xedb5() // UNK_0xedb5
{
  Push(0x000c);
  Push(1);
  Push(1);
  UNK_0xed9f(); // UNK_0xed9f
}


// ================================================
// 0xedc1: WORD 'UNK_0xedc3' codep=0x224c parp=0xedc3 params=0 returns=1
// ================================================
// orphan

void UNK_0xedc3() // UNK_0xedc3
{
  Push(0x0019);
  Push(1);
  Push(0);
  UNK_0xed9f(); // UNK_0xed9f
}


// ================================================
// 0xedcf: WORD 'UNK_0xedd1' codep=0x224c parp=0xedd1 params=0 returns=0
// ================================================
// orphan

void UNK_0xedd1() // UNK_0xedd1
{
  UNK_0xe56c(); // UNK_0xe56c
  UNK_0xe576(); // UNK_0xe576
  UNK_0xea21(); // UNK_0xea21
  if (Pop() != 0)
  {
    UNK_0xed59(); // UNK_0xed59
    Push(0);
    Push(0);
    UNK_0xe84f(); // UNK_0xe84f
    if (Pop() != 0)
    {
      UNK_0xe8f1(); // UNK_0xe8f1
      UNK_0xecdd(); // UNK_0xecdd
      Push(5);
      StoreINST_dash_S(); // !INST-S
      UNK_0xe59e(); // UNK_0xe59e
      UNK_0xe8f1(); // UNK_0xe8f1
      UNK_0xebf6(); // UNK_0xebf6
      UNK_0xe8fb(); // UNK_0xe8fb
      UNK_0xeaa1(); // UNK_0xeaa1
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
// 0xee07: WORD 'UNK_0xee09' codep=0x224c parp=0xee09 params=0 returns=1
// ================================================
// orphan

void UNK_0xee09() // UNK_0xee09
{
  Push(Read16(pp_Is10)); // ?10 @
  Push(0x0013);
  _gt_(); // >
}


// ================================================
// 0xee15: WORD 'UNK_0xee17' codep=0x224c parp=0xee17 params=0 returns=1
// ================================================

void UNK_0xee17() // UNK_0xee17
{
  unsigned short int i, imax;
  Push(Read16(cc_TRUE)); // TRUE
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push((0x65e1+INST_dash_SI.offset) + 0x0011); // INST-SI<IFIELD> 0x0011 +
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    _3_star_(); // 3*
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    Push(6);
    _eq_SPECIE(); // =SPECIE
    Push(Read16(0x65e1+UNK_0xea9c.offset)&0xFF); // UNK_0xea9c<IFIELD> C@
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
// 0xee59: WORD 'UNK_0xee5b' codep=0x224c parp=0xee5b
// ================================================
// orphan

void UNK_0xee5b() // UNK_0xee5b
{
  Push(0x00fe);
  UNK_0xe58a(); // UNK_0xe58a
  IOPEN(); // IOPEN
  UNK_0xe935(); // UNK_0xe935
  Push(0xbe45); // probable '.HUFF'
  MODULE(); // MODULE
  Push(0x4e20); Push(0x0000);
  UNK_0xe5f4(); // UNK_0xe5f4
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xee79: WORD 'UNK_0xee7b' codep=0x224c parp=0xee7b
// ================================================
// orphan

void UNK_0xee7b() // UNK_0xee7b
{
  Pop(); // DROP
  Push(0x5deb); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  UNK_0xe6ba(); // UNK_0xe6ba
}


// ================================================
// 0xee89: WORD 'UNK_0xee8b' codep=0x224c parp=0xee8b
// ================================================
// orphan

void UNK_0xee8b() // UNK_0xee8b
{
  Push(0x5e01); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  DrawTTY(); // .TTY
}


// ================================================
// 0xee97: WORD 'UNK_0xee99' codep=0x224c parp=0xee99
// ================================================
// orphan

void UNK_0xee99() // UNK_0xee99
{
  SET_STR_AS_PARAM("FOR X0,000 SHYNEUM PENNIES\?");
  DrawTTY(); // .TTY
}


// ================================================
// 0xeebb: WORD 'UNK_0xeebd' codep=0x224c parp=0xeebd
// ================================================
// orphan

void UNK_0xeebd() // UNK_0xeebd
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
// 0xeedf: WORD 'UNK_0xeee1' codep=0x224c parp=0xeee1 params=0 returns=2
// ================================================
// orphan

void UNK_0xeee1() // UNK_0xeee1
{
  Push(0x5e34); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
}


// ================================================
// 0xeeeb: WORD 'UNK_0xeeed' codep=0x224c parp=0xeeed params=0 returns=1
// ================================================
// orphan

void UNK_0xeeed() // UNK_0xeeed
{
  Push(0);
  Push(6);
  RRND(); // RRND
}


// ================================================
// 0xeef5: WORD 'UNK_0xeef7' codep=0x224c parp=0xeef7 params=0 returns=1
// ================================================
// orphan

void UNK_0xeef7() // UNK_0xeef7
{
  Push(0x000a);
  Push(0x0014);
  RRND(); // RRND
}


// ================================================
// 0xef03: WORD 'UNK_0xef05' codep=0x224c parp=0xef05 params=2 returns=1
// ================================================
// orphan

void UNK_0xef05() // UNK_0xef05
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
// 0xef37: WORD 'UNK_0xef39' codep=0x224c parp=0xef39
// ================================================
// orphan

void UNK_0xef39() // UNK_0xef39
{
  UNK_0xe69b(); // UNK_0xe69b
  UNK_0xe935(); // UNK_0xe935
  Push(0xee99); // probable 'UNK_0xee99'
  UNK_0xef05(); // UNK_0xef05
  UNK_0xee8b(); // UNK_0xee8b
  OVER(); // OVER
  UNK_0xeebd(); // UNK_0xeebd
  UNK_0xee99(); // UNK_0xee99
}


// ================================================
// 0xef4d: WORD 'UNK_0xef4f' codep=0x224c parp=0xef4f params=0 returns=0
// ================================================
// orphan

void UNK_0xef4f() // UNK_0xef4f
{
  UNK_0xe56c(); // UNK_0xe56c
  UNK_0xe576(); // UNK_0xe576
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
    UNK_0xeeed(); // UNK_0xeeed
    UNK_0xeef7(); // UNK_0xeef7
    UNK_0xef39(); // UNK_0xef39
    Push(0);
    Push(0);
    UNK_0xe84f(); // UNK_0xe84f
    if (Pop() != 0)
    {
      S_dash__gt_D(); // S->D
      _2DUP(); // 2DUP
      Push(0xc2a9); // probable 'OV?BALA'
      MODULE(); // MODULE
      if (Pop() != 0)
      {
        DNEGATE(); // DNEGATE
        Push(0xc2ed); // probable 'T+BALAN'
        MODULE(); // MODULE
        Push(7);
        Push(0xc273); // probable 'OVTRANS'
        MODULE(); // MODULE
        UNK_0xe59e(); // UNK_0xe59e
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
        UNK_0xe715(); // UNK_0xe715
      } else
      {
        Pop(); Pop(); // 2DROP
        Pop(); // DROP
        UNK_0xeee1(); // UNK_0xeee1
        UNK_0xe6ba(); // UNK_0xe6ba
        Push(5);
        UNK_0xe580(); // UNK_0xe580
      }
    } else
    {
      Pop(); // DROP
      UNK_0xee7b(); // UNK_0xee7b
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefe7: WORD 'UNK_0xefe9' codep=0x224c parp=0xefe9
// ================================================
// orphan

void UNK_0xefe9() // UNK_0xefe9
{
  Push(0x5e72); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  DrawTTY(); // .TTY
  Push(0x5ea4); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  DrawTTY(); // .TTY
}


// ================================================
// 0xefff: WORD 'UNK_0xf001' codep=0x224c parp=0xf001
// ================================================
// orphan

void UNK_0xf001() // UNK_0xf001
{
  SET_STR_AS_PARAM("OF, SAY XX UNITS OF SHYNEUM MIGHT ");
  DrawTTY(); // .TTY
  Push(0x5ed7); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  DrawTTY(); // .TTY
}


// ================================================
// 0xf034: WORD 'UNK_0xf036' codep=0x224c parp=0xf036 params=2 returns=0
// ================================================
// orphan

void UNK_0xf036() // UNK_0xf036
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
// 0xf060: WORD 'UNK_0xf062' codep=0x224c parp=0xf062
// ================================================
// orphan

void UNK_0xf062() // UNK_0xf062
{
  UNK_0xe69b(); // UNK_0xe69b
  UNK_0xe935(); // UNK_0xe935
  Push(0xf001); // probable 'UNK_0xf001'
  UNK_0xf036(); // UNK_0xf036
  UNK_0xefe9(); // UNK_0xefe9
  UNK_0xf001(); // UNK_0xf001
  TTY_dash_SCR(); // TTY-SCR
}


// ================================================
// 0xf074: WORD 'UNK_0xf076' codep=0x224c parp=0xf076 params=0 returns=0
// ================================================
// orphan

void UNK_0xf076() // UNK_0xf076
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
// 0xf086: WORD 'UNK_0xf088' codep=0x224c parp=0xf088 params=0 returns=0
// ================================================
// orphan

void UNK_0xf088() // UNK_0xf088
{
  UNK_0xe56c(); // UNK_0xe56c
  UNK_0xe576(); // UNK_0xe576
  Push(Read16(pp_A_dash_POSTU)==4?1:0); // A-POSTU @ 4 =
  Push(0);
  Push(0x0014);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    UNK_0xeef7(); // UNK_0xeef7
    Push(Read16(regsp)); // DUP
    UNK_0xf062(); // UNK_0xf062
    Push(0xfff1);
    Push(0);
    UNK_0xe84f(); // UNK_0xe84f
    if (Pop() != 0)
    {
      Push(Pop() * 0x000a); //  0x000a *
      Push(Read16(regsp)); // DUP
      Push(6);
      UNK_0xe733(); // UNK_0xe733
      if (Pop() != 0)
      {
        Push(6);
        UNK_0xe7b9(); // UNK_0xe7b9
        UNK_0xe59e(); // UNK_0xe59e
      } else
      {
        Pop(); // DROP
        UNK_0xeee1(); // UNK_0xeee1
        UNK_0xe6ba(); // UNK_0xe6ba
        Push(5);
        UNK_0xe580(); // UNK_0xe580
      }
    } else
    {
      UNK_0xee7b(); // UNK_0xee7b
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0e4: WORD 'UNK_0xf0e6' codep=0x224c parp=0xf0e6
// ================================================
// orphan

void UNK_0xf0e6() // UNK_0xf0e6
{
  UNK_0xe56c(); // UNK_0xe56c
  UNK_0xe576(); // UNK_0xe576
  Push(1);
  UNK_0xea2d(); // UNK_0xea2d
  Push(2);
  UNK_0xea2d(); // UNK_0xea2d
  Push(Pop() | Pop()); // OR
  Push(2);
  _star_CLOSE(); // *CLOSE
  if (Pop() != 0)
  {
    Push((Read16(0x65e1+UNK_0xe625.offset)&0xFF) + (Read16((0x65e1+UNK_0xe625.offset) + 1)&0xFF) >> 1); // UNK_0xe625<IFIELD> C@ UNK_0xe625<IFIELD> 1+ C@ + 2/
    Push(Read16(regsp)); // DUP
    Push(0x65e1+UNK_0xe616.offset); // UNK_0xe616<IFIELD>
    C_ex__2(); // C!_2
    Push(pp_EDL); // EDL
    Store_2(); // !_2
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf118: WORD 'UNK_0xf11a' codep=0x224c parp=0xf11a params=0 returns=0
// ================================================
// orphan

void UNK_0xf11a() // UNK_0xf11a
{
  Push(0x002d);
  UNK_0xe556(); // UNK_0xe556
  if (Pop() == 0) return;
  Push(0x5f08); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  UNK_0xe6ba(); // UNK_0xe6ba
  Push(0x2710); Push(0x0000);
  UNK_0xe5f4(); // UNK_0xe5f4
}


// ================================================
// 0xf138: WORD 'UNK_0xf13a' codep=0x224c parp=0xf13a params=0 returns=0
// ================================================
// orphan

void UNK_0xf13a() // UNK_0xf13a
{
  Push(Read16(pp_A_dash_POSTU)==4?1:0); // A-POSTU @ 4 =
  UNK_0xee17(); // UNK_0xee17
  Push(Pop() & Pop()); // AND
  Push(0);
  Push(2);
  RRND(); // RRND
  Push(Pop() & Pop()); // AND
  UNK_0xe56c(); // UNK_0xe56c
  UNK_0xe576(); // UNK_0xe576
  if (Pop() != 0)
  {
    UNK_0xed71(); // UNK_0xed71
    Push(0);
    Push(0);
    UNK_0xe84f(); // UNK_0xe84f
    if (Pop() != 0)
    {
      UNK_0xedb5(); // UNK_0xedb5
      UNK_0xe8f1(); // UNK_0xe8f1
      UNK_0xecdd(); // UNK_0xecdd
      Push(6);
      StoreINST_dash_S(); // !INST-S
      UNK_0xe59e(); // UNK_0xe59e
      UNK_0xe8f1(); // UNK_0xe8f1
      UNK_0xebf6(); // UNK_0xebf6
      UNK_0xe8fb(); // UNK_0xe8fb
      UNK_0xeaa1(); // UNK_0xeaa1
      UNK_0xec36(); // UNK_0xec36
      UNK_0xee5b(); // UNK_0xee5b
      Push(2);
      _star_CLOSE(); // *CLOSE
    }
  } else
  {
    UNK_0xee17(); // UNK_0xee17
    if (Pop() != 0)
    {
      UNK_0xedc3(); // UNK_0xedc3
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf18e: WORD 'UNK_0xf190' codep=0x224c parp=0xf190 params=0 returns=2
// ================================================

void UNK_0xf190() // UNK_0xf190
{
  unsigned short int i, imax, a;
  Push2Words("NULL");
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push((0x65e1+INST_dash_SI.offset) + 0x0011); // INST-SI<IFIELD> 0x0011 +
  Push(0x0012);
  Push(0);

  i = Pop();
  imax = Pop();
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
// 0xf1d0: WORD 'UNK_0xf1d2' codep=0x224c parp=0xf1d2
// ================================================

void UNK_0xf1d2() // UNK_0xf1d2
{
  UNK_0xe58a(); // UNK_0xe58a
  UNK_0xf190(); // UNK_0xf190
  WUP(); // WUP
  CI(); // CI
  _2SWAP(); // 2SWAP
  _gt_C_plus_S(); // >C+S
  Push(0xbe55); // probable '.AHUF'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  Push(0x1f40); Push(0x0000);
  UNK_0xe5f4(); // UNK_0xe5f4
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf1f4: WORD 'UNK_0xf1f6' codep=0x224c parp=0xf1f6
// ================================================

void UNK_0xf1f6() // UNK_0xf1f6
{
  GetColor(PINK);
  Push(Read16(regsp)); // DUP
  StoreCOLOR(); // !COLOR
  Push(pp_CTCOLOR); // CTCOLOR
  Store_2(); // !_2
}


// ================================================
// 0xf202: WORD 'UNK_0xf204' codep=0x224c parp=0xf204
// ================================================

void UNK_0xf204() // UNK_0xf204
{
  UNK_0xf1f6(); // UNK_0xf1f6
  Push(0x0063);
  UNK_0xf1d2(); // UNK_0xf1d2
  UNK_0xf190(); // UNK_0xf190
  _gt_C_plus_S(); // >C+S
  Push(0xc1e9); // probable 'KILL'
  MODULE(); // MODULE
  Push(0xc1b8); // probable '(ROL'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  CTINIT(); // CTINIT
  Push(0x0063);
  UNK_0xf1d2(); // UNK_0xf1d2
}


// ================================================
// 0xf228: WORD 'UNK_0xf22a' codep=0x224c parp=0xf22a
// ================================================

void UNK_0xf22a() // UNK_0xf22a
{
  UNK_0xf1f6(); // UNK_0xf1f6
  Push(0x0062);
  UNK_0xf1d2(); // UNK_0xf1d2
  Push(1);
  Push(pp_Is5_c__ro_); // ?5:(
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf23a: WORD 'UNK_0xf23c' codep=0x224c parp=0xf23c params=0 returns=0
// ================================================

void UNK_0xf23c() // UNK_0xf23c
{
  Push(pp_Is5_c__ro_); // ?5:(
  _099(); // 099
}


// ================================================
// 0xf242: WORD '#>PROTEST' codep=0x4b3b parp=0xf250
// ================================================

void _n__gt_PROTEST() // #>PROTEST
{
  switch(Pop()) // #>PROTEST
  {
  case 1:
    UNK_0xf204(); // UNK_0xf204
    break;
  case 2:
    UNK_0xf22a(); // UNK_0xf22a
    break;
  case 4:
    NOP(); // NOP
    break;
  default:
    UNK_0xf23c(); // UNK_0xf23c
    break;

  }
}

// ================================================
// 0xf260: WORD '#>PRO' codep=0x224c parp=0xf26a params=1 returns=0
// ================================================
// entry

void _n__gt_PRO() // #>PRO
{
  UNK_0xee17(); // UNK_0xee17
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    _n__gt_PROTEST(); // #>PROTEST case
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf27c: WORD 'UNK_0xf27e' codep=0x224c parp=0xf27e params=0 returns=2
// ================================================
// orphan

void UNK_0xf27e() // UNK_0xf27e
{
  Push(0x6000); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
}


// ================================================
// 0xf288: WORD 'UNK_0xf28a' codep=0x224c parp=0xf28a
// ================================================
// orphan

void UNK_0xf28a() // UNK_0xf28a
{
  UNK_0xe56c(); // UNK_0xe56c
  UNK_0xe576(); // UNK_0xe576
  UNK_0xf27e(); // UNK_0xf27e
  UNK_0xe6ba(); // UNK_0xe6ba
  Push(0);
  Push(0x0064);
  UNK_0xe84f(); // UNK_0xe84f
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    GetColor(BLACK);
    StoreCOLOR(); // !COLOR
    GetColor(YELLOW);
    Push(0x4fa9); // probable 'BLACK'
    Store_2(); // !_2
    CTERASE(); // CTERASE
    Push(0x60d8); Push(0x0002);
    UNK_0xe5e2(); // UNK_0xe5e2
    DrawTTY(); // .TTY
    Push(0x60f2); Push(0x0002);
    UNK_0xe5e2(); // UNK_0xe5e2
    DrawTTY(); // .TTY
    _i_KEY(); // 'KEY
    Pop(); // DROP
    KEY_2(); // KEY_2
    Pop(); // DROP
    BYE_2(); // BYE_2
  } else
  {
    UNK_0xf076(); // UNK_0xf076
  }
  Push(pp_UNK_0xe63e); // UNK_0xe63e
  ON_2(); // ON_2
  UNK_0xe707(); // UNK_0xe707
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2dc: WORD 'UNK_0xf2de' codep=0x224c parp=0xf2de params=0 returns=2
// ================================================
// orphan

void UNK_0xf2de() // UNK_0xf2de
{
  Push(0x6108); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
}


// ================================================
// 0xf2e8: WORD 'UNK_0xf2ea' codep=0x224c parp=0xf2ea params=0 returns=2
// ================================================
// orphan

void UNK_0xf2ea() // UNK_0xf2ea
{
  Push(0x613f); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
}


// ================================================
// 0xf2f4: WORD 'UNK_0xf2f6' codep=0x224c parp=0xf2f6
// ================================================
// orphan

void UNK_0xf2f6() // UNK_0xf2f6
{
  UNK_0xe56c(); // UNK_0xe56c
  UNK_0xe576(); // UNK_0xe576
  UNK_0xf2de(); // UNK_0xf2de
  UNK_0xe6ba(); // UNK_0xe6ba
  Push(0x09c4);
  MS(); // MS
  Push(Read16(pp__i_RSIDE)); // 'RSIDE @
  MODULE(); // MODULE
  Push(!Read16(pp_IsSECURE)); // ?SECURE @ NOT
  if (Pop() != 0)
  {
    Push(pp_ESC_dash_EN); // ESC-EN
    ON_2(); // ON_2
    UNK_0xf2ea(); // UNK_0xf2ea
    UNK_0xe6ba(); // UNK_0xe6ba
    Push(0x09c4);
    MS(); // MS
    Push(pp_UNK_0xe63e); // UNK_0xe63e
    ON_2(); // ON_2
    Push(pp__ro_STOP_dash_C); // (STOP-C
    ON_2(); // ON_2
    UNK_0xe77d(); // UNK_0xe77d
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf330: WORD 'UNK_0xf332' codep=0x224c parp=0xf332 params=0 returns=2
// ================================================
// orphan

void UNK_0xf332() // UNK_0xf332
{
  Push(0x61a7); Push(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
}


// ================================================
// 0xf33c: WORD 'UNK_0xf33e' codep=0x224c parp=0xf33e params=0 returns=2
// ================================================
// orphan

void UNK_0xf33e() // UNK_0xf33e
{
  SET_STR_AS_PARAM("OF 1/X OF YOUR SHYNEUM. DO YOU AGREE\?");
}


// ================================================
// 0xf368: WORD 'UNK_0xf36a' codep=0x224c parp=0xf36a params=0 returns=1
// ================================================
// orphan

void UNK_0xf36a() // UNK_0xf36a
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
  UNK_0xf33e(); // UNK_0xf33e
  Pop(); // DROP
  Push(Pop() + 5); //  5 +
  C_ex__2(); // C!_2
}


// ================================================
// 0xf392: WORD 'UNK_0xf394' codep=0x224c parp=0xf394 params=0 returns=0
// ================================================
// orphan

void UNK_0xf394() // UNK_0xf394
{
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(2);
  _gt_(); // >
  if (Pop() == 0) return;
  UNK_0xf36a(); // UNK_0xf36a
  UNK_0xf332(); // UNK_0xf332
  UNK_0xe6ba(); // UNK_0xe6ba
  UNK_0xf33e(); // UNK_0xf33e
  DrawTTY(); // .TTY
  Push(0);
  Push(0x0064);
  UNK_0xe84f(); // UNK_0xe84f
  if (Pop() != 0)
  {
    Push(6);
    UNK_0xe76b(); // UNK_0xe76b
    Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
    Push(3);
    _star_CLOSE(); // *CLOSE
    SWAP(); // SWAP
    _slash_(); // /
    Push(6);
    UNK_0xe7b9(); // UNK_0xe7b9
    UNK_0xe59e(); // UNK_0xe59e
    CTINIT(); // CTINIT
    Push(0x621e); Push(0x0002);
    UNK_0xe5e2(); // UNK_0xe5e2
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
// 0xf3ea: WORD 'UNK_0xf3ec' codep=0x224c parp=0xf3ec
// ================================================
// orphan

void UNK_0xf3ec() // UNK_0xf3ec
{
  GetColor(YELLOW);
  StoreCOLOR(); // !COLOR
  WUP(); // WUP
  Push(0xbe45); // probable '.HUFF'
  MODULE(); // MODULE
  Push(0x4e20); Push(0x0000);
  UNK_0xe5f4(); // UNK_0xe5f4
  INEXT(); // INEXT
}


// ================================================
// 0xf404: WORD 'UNK_0xf406' codep=0x1d29 parp=0xf406
// ================================================
// orphan
// 0xf406: db 0x00 0x00 0x4c 0x22 0x04 0xf4 0xae 0x0b 0x07 0x13 0xe3 0x51 0xae 0x0b 0x89 0x12 0xf5 0x12 0xfa 0x15 0x26 0x00 0x5d 0x17 0xc9 0x00 0x88 0xe5 0x3f 0x7a 0xea 0xf3 0xea 0xf3 0xea 0xf3 0x7f 0x3b 0x0a 0x7a 0xb9 0x5f 0x57 0x6d 0x18 0x5c 0x57 0x6d 0x3c 0xe6 0x57 0x6d 0x04 0xf4 0x57 0x6d 0x8d 0x83 0x90 0x16 0x4c 0x22 0x5d 0x17 0xd7 0x00 0x88 0xe5 0x3f 0x7a 0xea 0xf3 0x7f 0x3b 0x0a 0x7a 0x20 0x0f 0x5d 0x17 0x64 0x00 0x4d 0xe8 0xfa 0x15 0x06 0x00 0x74 0x51 0x57 0x6d 0xb9 0x5f 0x57 0x6d 0x18 0x5c 0x57 0x6d 0x3c 0xe6 0x57 0x6d 0x90 0x16 '  L"       Q        & ]     ?z      ; z _Wm \Wm< Wm  Wm    L"]     ?z  ; z  ] d M     tQWm _Wm \Wm< Wm  '

// ================================================
// 0xf470: WORD 'UNK_0xf472' codep=0x1d29 parp=0xf472
// ================================================
// 0xf472: db 0x01 0xc3 0xe9 '   '

// ================================================
// 0xf475: WORD 'UNK_0xf477' codep=0x1d29 parp=0xf477
// ================================================
// 0xf477: db 0x02 0x4f 0xef 0x88 0xf0 ' O   '

// ================================================
// 0xf47c: WORD 'UNK_0xf47e' codep=0x1d29 parp=0xf47e
// ================================================
// 0xf47e: db 0x02 0x0a 0xf4 0x44 0xf4 '   D '

// ================================================
// 0xf483: WORD 'UNK_0xf485' codep=0x1d29 parp=0xf485
// ================================================
// 0xf485: db 0x03 0x1a 0xf1 0x64 0xeb 0xe6 0xf0 '   d   '

// ================================================
// 0xf48c: WORD 'UNK_0xf48e' codep=0x1d29 parp=0xf48e
// ================================================
// 0xf48e: db 0x02 0x59 0xe9 0xd1 0xed ' Y   '

// ================================================
// 0xf493: WORD 'UNK_0xf495' codep=0x1d29 parp=0xf495
// ================================================
// 0xf495: db 0x02 0x59 0xe9 0xd1 0xed ' Y   '

// ================================================
// 0xf49a: WORD 'UNK_0xf49c' codep=0x1d29 parp=0xf49c
// ================================================
// 0xf49c: db 0x02 0xf6 0xf2 0x8a 0xf2 '     '

// ================================================
// 0xf4a1: WORD 'UNK_0xf4a3' codep=0x1d29 parp=0xf4a3
// ================================================
// 0xf4a3: db 0x01 0x3a 0xf1 ' : '

// ================================================
// 0xf4a6: WORD 'UNK_0xf4a8' codep=0x1d29 parp=0xf4a8
// ================================================
// 0xf4a8: db 0x01 0x94 0xf3 '   '

// ================================================
// 0xf4ab: WORD 'UNK_0xf4ad' codep=0x224c parp=0xf4ad params=1 returns=0
// ================================================

void UNK_0xf4ad() // UNK_0xf4ad
{
  unsigned short int i, imax;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(pp_UNK_0xe63e); // UNK_0xe63e
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
    Push(Read16(pp_UNK_0xe63e)); // UNK_0xe63e @
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
// 0xf4e3: WORD 'SA-CASE' codep=0x4b3b parp=0xf4ef
// ================================================

void SA_dash_CASE() // SA-CASE
{
  switch(Pop()) // SA-CASE
  {
  case 1:
    Push(pp_UNK_0xf472); // UNK_0xf472
    break;
  case 2:
    Push(pp_UNK_0xf472); // UNK_0xf472
    break;
  case 7:
    Push(pp_UNK_0xf477); // UNK_0xf477
    break;
  case 6:
    Push(pp_UNK_0xf4a8); // UNK_0xf4a8
    break;
  case 8:
    Push(pp_UNK_0xf48e); // UNK_0xf48e
    break;
  case 11:
    Push(pp_UNK_0xf495); // UNK_0xf495
    break;
  case 10:
    Push(pp_UNK_0xf4a3); // UNK_0xf4a3
    break;
  case 21:
    Push(pp_UNK_0xf49c); // UNK_0xf49c
    break;
  case 22:
    Push(pp_UNK_0xf47e); // UNK_0xf47e
    break;
  case 18:
    Push(pp_UNK_0xf485); // UNK_0xf485
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xf51b: WORD 'UNK_0xf51d' codep=0x224c parp=0xf51d
// ================================================

void UNK_0xf51d() // UNK_0xf51d
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
// 0xf531: WORD '(XCOMM)' codep=0x224c parp=0xf53d
// ================================================
// entry

void _ro_XCOMM_rc_() // (XCOMM)
{
  UNK_0xf51d(); // UNK_0xf51d
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  SA_dash_CASE(); // SA-CASE case
  UNK_0xf4ad(); // UNK_0xf4ad
  UNK_0xf51d(); // UNK_0xf51d
}

// 0xf54f: db 0x58 0x43 0x4f 0x4d 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'XCOM-VOC_________ '

