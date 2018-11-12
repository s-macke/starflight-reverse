// ====== OVERLAY 'DAMAGE-OV' ======
// store offset = 0xe6c0
// overlay size   = 0x0ea0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WE6D6  codep:0x224c wordp:0xe6d6 size:0x0008 C-string:'WE6D6'
//           WE6E0  codep:0x224c wordp:0xe6e0 size:0x0044 C-string:'WE6E0'
//           WE726  codep:0x224c wordp:0xe726 size:0x0006 C-string:'WE726'
//           WE72E  codep:0x224c wordp:0xe72e size:0x000a C-string:'WE72E'
//           WE73A  codep:0x224c wordp:0xe73a size:0x000a C-string:'WE73A'
//           WE746  codep:0x224c wordp:0xe746 size:0x0006 C-string:'WE746'
//           WE74E  codep:0x224c wordp:0xe74e size:0x000a C-string:'WE74E'
//           WE75A  codep:0x224c wordp:0xe75a size:0x0006 C-string:'WE75A'
//           WE762  codep:0x2214 wordp:0xe762 size:0x0002 C-string:'WE762'
//           WE766  codep:0x7394 wordp:0xe766 size:0x0006 C-string:'WE766'
//           WE76E  codep:0x7394 wordp:0xe76e size:0x0006 C-string:'WE76E'
//           WE776  codep:0x7394 wordp:0xe776 size:0x0006 C-string:'WE776'
//           WE77E  codep:0x7394 wordp:0xe77e size:0x0006 C-string:'WE77E'
//           WE786  codep:0x7394 wordp:0xe786 size:0x0006 C-string:'WE786'
//           WE78E  codep:0x7394 wordp:0xe78e size:0x0006 C-string:'WE78E'
//           WE796  codep:0x7420 wordp:0xe796 size:0x0003 C-string:'WE796'
//           WE79B  codep:0x7420 wordp:0xe79b size:0x0003 C-string:'WE79B'
//           WE7A0  codep:0x7420 wordp:0xe7a0 size:0x0003 C-string:'WE7A0'
//           WE7A5  codep:0x7420 wordp:0xe7a5 size:0x0003 C-string:'WE7A5'
//           WE7AA  codep:0x7420 wordp:0xe7aa size:0x0003 C-string:'WE7AA'
//           WE7AF  codep:0x7420 wordp:0xe7af size:0x0003 C-string:'WE7AF'
//           WE7B4  codep:0x2214 wordp:0xe7b4 size:0x0002 C-string:'WE7B4'
//           WE7B8  codep:0x7420 wordp:0xe7b8 size:0x0003 C-string:'WE7B8'
//           WE7BD  codep:0x7420 wordp:0xe7bd size:0x0003 C-string:'WE7BD'
//           WE7C2  codep:0x7420 wordp:0xe7c2 size:0x0003 C-string:'WE7C2'
//           WE7C7  codep:0x7420 wordp:0xe7c7 size:0x0003 C-string:'WE7C7'
//           WE7CC  codep:0x7420 wordp:0xe7cc size:0x0003 C-string:'WE7CC'
//           WE7D1  codep:0x7420 wordp:0xe7d1 size:0x0003 C-string:'WE7D1'
//           WE7D6  codep:0x7420 wordp:0xe7d6 size:0x0003 C-string:'WE7D6'
//           WE7DB  codep:0x7420 wordp:0xe7db size:0x0003 C-string:'WE7DB'
//           WE7E0  codep:0x7420 wordp:0xe7e0 size:0x0003 C-string:'WE7E0'
//           WE7E5  codep:0x7420 wordp:0xe7e5 size:0x0003 C-string:'WE7E5'
//           WE7EA  codep:0x7420 wordp:0xe7ea size:0x0003 C-string:'WE7EA'
//           WE7EF  codep:0x7420 wordp:0xe7ef size:0x0003 C-string:'WE7EF'
//           WE7F4  codep:0x7420 wordp:0xe7f4 size:0x0003 C-string:'WE7F4'
//           WE7F9  codep:0x7420 wordp:0xe7f9 size:0x0003 C-string:'WE7F9'
//           WE7FE  codep:0x7420 wordp:0xe7fe size:0x0003 C-string:'WE7FE'
//           WE803  codep:0x7420 wordp:0xe803 size:0x0003 C-string:'WE803'
//           WE808  codep:0x7420 wordp:0xe808 size:0x0003 C-string:'WE808'
//           WE80D  codep:0x7420 wordp:0xe80d size:0x0003 C-string:'WE80D'
//           WE812  codep:0x7420 wordp:0xe812 size:0x0003 C-string:'WE812'
//           WE817  codep:0x7420 wordp:0xe817 size:0x0003 C-string:'WE817'
//           WE81C  codep:0x7420 wordp:0xe81c size:0x0003 C-string:'WE81C'
//           WE821  codep:0x7420 wordp:0xe821 size:0x0003 C-string:'WE821'
//           WE826  codep:0x7394 wordp:0xe826 size:0x0006 C-string:'WE826'
//           WE82E  codep:0x7420 wordp:0xe82e size:0x0003 C-string:'WE82E'
//           WE833  codep:0x1d29 wordp:0xe833 size:0x0009 C-string:'WE833'
//           WE83E  codep:0x1d29 wordp:0xe83e size:0x0002 C-string:'WE83E'
//           WE842  codep:0x1d29 wordp:0xe842 size:0x0002 C-string:'WE842'
//           WE846  codep:0x1d29 wordp:0xe846 size:0x0004 C-string:'WE846'
//           WE84C  codep:0x224c wordp:0xe84c size:0x000c C-string:'WE84C'
//           WE85A  codep:0x224c wordp:0xe85a size:0x0008 C-string:'WE85A'
//           WE864  codep:0x224c wordp:0xe864 size:0x0018 C-string:'WE864'
//           WE87E  codep:0x224c wordp:0xe87e size:0x0006 C-string:'WE87E'
//           WE886  codep:0x224c wordp:0xe886 size:0x001c C-string:'WE886'
//           WE8A4  codep:0x224c wordp:0xe8a4 size:0x0046 C-string:'WE8A4'
//           WE8EC  codep:0x224c wordp:0xe8ec size:0x0022 C-string:'WE8EC'
//           WE910  codep:0x224c wordp:0xe910 size:0x001e C-string:'WE910'
//           WE930  codep:0x224c wordp:0xe930 size:0x0020 C-string:'WE930'
//           WE952  codep:0x224c wordp:0xe952 size:0x001a C-string:'WE952'
//           WE96E  codep:0x224c wordp:0xe96e size:0x001a C-string:'WE96E'
//           WE98A  codep:0x224c wordp:0xe98a size:0x0018 C-string:'WE98A'
//         LDAMAGE  codep:0x1d29 wordp:0xe9ae size:0x001a C-string:'LDAMAGE'
//           WE9CA  codep:0x224c wordp:0xe9ca size:0x0026 C-string:'WE9CA'
//           WE9F2  codep:0x224c wordp:0xe9f2 size:0x000a C-string:'WE9F2'
//           WE9FE  codep:0x224c wordp:0xe9fe size:0x000a C-string:'WE9FE'
//         REFRESH  codep:0x224c wordp:0xea14 size:0x0006 C-string:'REFRESH'
//           WEA1C  codep:0x1d29 wordp:0xea1c size:0x0002 C-string:'WEA1C'
//           WEA20  codep:0x224c wordp:0xea20 size:0x000a C-string:'WEA20'
//           WEA2C  codep:0x224c wordp:0xea2c size:0x001c C-string:'WEA2C'
//           WEA4A  codep:0x224c wordp:0xea4a size:0x0014 C-string:'WEA4A'
//         WOUNDED  codep:0x1d29 wordp:0xea6a size:0x0006 C-string:'WOUNDED'
//         #WOUNDE  codep:0x1d29 wordp:0xea7c size:0x0002 C-string:'_n_WOUNDE'
//           WEA80  codep:0x224c wordp:0xea80 size:0x0010 C-string:'WEA80'
//           WEA92  codep:0x224c wordp:0xea92 size:0x0040 C-string:'WEA92'
//           WEAD4  codep:0x224c wordp:0xead4 size:0x000c C-string:'WEAD4'
//           WEAE2  codep:0x224c wordp:0xeae2 size:0x0010 C-string:'WEAE2'
//           WEAF4  codep:0x224c wordp:0xeaf4 size:0x0021 C-string:'WEAF4'
//           WEB17  codep:0x224c wordp:0xeb17 size:0x001d C-string:'WEB17'
//           WEB36  codep:0x224c wordp:0xeb36 size:0x001d C-string:'WEB36'
//           WEB55  codep:0x224c wordp:0xeb55 size:0x0028 C-string:'WEB55'
//           WEB7F  codep:0x224c wordp:0xeb7f size:0x0027 C-string:'WEB7F'
//           WEBA8  codep:0x224c wordp:0xeba8 size:0x0010 C-string:'WEBA8'
//         ENGINE-  codep:0xeb87 wordp:0xebc4 size:0x0004 C-string:'ENGINE_dash_'
//         SENSOR-  codep:0xeb87 wordp:0xebd4 size:0x0004 C-string:'SENSOR_dash_'
//         COMM-CH  codep:0xeb87 wordp:0xebe4 size:0x0004 C-string:'COMM_dash_CH'
//         MISS-CH  codep:0xeb87 wordp:0xebf4 size:0x0004 C-string:'MISS_dash_CH'
//         LASER-C  codep:0xeb87 wordp:0xec04 size:0x0004 C-string:'LASER_dash_C'
//         SHIELD-  codep:0xeb87 wordp:0xec14 size:0x0004 C-string:'SHIELD_dash_'
//           WEC1A  codep:0x224c wordp:0xec1a size:0x000a C-string:'WEC1A'
//         #>?FIEL  codep:0x4b3b wordp:0xec30 size:0x0024 C-string:'_n__gt__ask_FIEL'
//           WEC56  codep:0x224c wordp:0xec56 size:0x0038 C-string:'WEC56'
//           WEC90  codep:0x224c wordp:0xec90 size:0x0036 C-string:'WEC90'
//           WECC8  codep:0x224c wordp:0xecc8 size:0x009e C-string:'WECC8'
//           WED68  codep:0x224c wordp:0xed68 size:0x0051 C-string:'WED68'
//           WEDBB  codep:0x1d29 wordp:0xedbb size:0x0007 C-string:'WEDBB'
//           WEDC4  codep:0x224c wordp:0xedc4 size:0x004b C-string:'WEDC4'
//           WEE11  codep:0x224c wordp:0xee11 size:0x0054 C-string:'WEE11'
//           WEE67  codep:0x224c wordp:0xee67 size:0x006c C-string:'WEE67'
//           WEED5  codep:0x224c wordp:0xeed5 size:0x0048 C-string:'WEED5'
//           WEF1F  codep:0x224c wordp:0xef1f size:0x0052 C-string:'WEF1F'
//           WEF73  codep:0x224c wordp:0xef73 size:0x0056 C-string:'WEF73'
//         MDAMAGE  codep:0x1d29 wordp:0xefd5 size:0x001a C-string:'MDAMAGE'
//           WEFF1  codep:0x224c wordp:0xeff1 size:0x000c C-string:'WEFF1'
//           WEFFF  codep:0x224c wordp:0xefff size:0x0012 C-string:'WEFFF'
//           WF013  codep:0x224c wordp:0xf013 size:0x0028 C-string:'WF013'
//           WF03D  codep:0x224c wordp:0xf03d size:0x0010 C-string:'WF03D'
//           WF04F  codep:0x224c wordp:0xf04f size:0x0008 C-string:'WF04F'
//           WF059  codep:0x224c wordp:0xf059 size:0x003a C-string:'WF059'
//           WF095  codep:0x224c wordp:0xf095 size:0x0008 C-string:'WF095'
//           WF09F  codep:0x224c wordp:0xf09f size:0x0008 C-string:'WF09F'
//           WF0A9  codep:0x224c wordp:0xf0a9 size:0x0008 C-string:'WF0A9'
//           WF0B3  codep:0x224c wordp:0xf0b3 size:0x0016 C-string:'WF0B3'
//           WF0CB  codep:0x224c wordp:0xf0cb size:0x0008 C-string:'WF0CB'
//         #>DAMAG  codep:0x4b3b wordp:0xf0df size:0x0024 C-string:'_n__gt_DAMAG'
//           WF105  codep:0x224c wordp:0xf105 size:0x001e C-string:'WF105'
//           WF125  codep:0x224c wordp:0xf125 size:0x0020 C-string:'WF125'
//         DO-ADAM  codep:0x224c wordp:0xf151 size:0x0048 C-string:'DO_dash_ADAM'
//           WF19B  codep:0x224c wordp:0xf19b size:0x000c C-string:'WF19B'
//           WF1A9  codep:0x224c wordp:0xf1a9 size:0x000a C-string:'WF1A9'
//           WF1B5  codep:0x224c wordp:0xf1b5 size:0x0046 C-string:'WF1B5'
//           WF1FD  codep:0x224c wordp:0xf1fd size:0x0012 C-string:'WF1FD'
//           WF211  codep:0x224c wordp:0xf211 size:0x001e C-string:'WF211'
//           WF231  codep:0x224c wordp:0xf231 size:0x0015 C-string:'WF231'
//          #>DISP  codep:0x4b3b wordp:0xf251 size:0x000c C-string:'_n__gt_DISP'
//           WF25F  codep:0x224c wordp:0xf25f size:0x0022 C-string:'WF25F'
//           WF283  codep:0x224c wordp:0xf283 size:0x0064 C-string:'WF283'
//            CDAM  codep:0x224c wordp:0xf2f0 size:0x0024 C-string:'CDAM'
//           WF316  codep:0x224c wordp:0xf316 size:0x0018 C-string:'WF316'
//           WF330  codep:0x224c wordp:0xf330 size:0x0006 C-string:'WF330'
//           WF338  codep:0x224c wordp:0xf338 size:0x0006 C-string:'WF338'
//           WF340  codep:0x224c wordp:0xf340 size:0x001a C-string:'WF340'
//           WF35C  codep:0x224c wordp:0xf35c size:0x001f C-string:'WF35C'
//           WF37D  codep:0x224c wordp:0xf37d size:0x0016 C-string:'WF37D'
//             .EX  codep:0x4b3b wordp:0xf39b size:0x000c C-string:'DrawEX'
//           WF3A9  codep:0x224c wordp:0xf3a9 size:0x008c C-string:'WF3A9'
//           WF437  codep:0x224c wordp:0xf437 size:0x0070 C-string:'WF437'
//           WF4A9  codep:0x224c wordp:0xf4a9 size:0x0040 C-string:'WF4A9'
//           WF4EB  codep:0x224c wordp:0xf4eb size:0x000e C-string:'WF4EB'
//           WF4FB  codep:0x224c wordp:0xf4fb size:0x000e C-string:'WF4FB'
//         DO-DAMA  codep:0x224c wordp:0xf515 size:0x000e C-string:'DO_dash_DAMA'
//         DOBLAST  codep:0x224c wordp:0xf52f size:0x0000 C-string:'DOBLAST'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_IsA_dash_SHIE; // ?A-SHIE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int cc_MPS; // MPS
extern const unsigned short int pp_Get_co_0_star_1_sc_; // @,0*1;
extern const unsigned short int pp_TRACE; // TRACE
extern const unsigned short int pp_A_dash_STREN; // A-STREN
extern const unsigned short int pp_IsAUTO; // ?AUTO
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp__n_VESS; // #VESS
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_IsHEAL; // ?HEAL
extern const unsigned short int pp_IsNEB; // ?NEB
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_IsCOMBAT; // ?COMBAT
extern const unsigned short int pp_IsSUP; // ?SUP
extern const unsigned short int pp_NLR; // NLR
extern const unsigned short int pp_Is10; // ?10
extern const unsigned short int pp__10_star_CARG; // 10*CARG
extern const unsigned short int pp__10_star_END; // 10*END
extern const unsigned short int pp_XWLD_c_XP; // XWLD:XP
extern const unsigned short int pp__ro_ENCOUN; // (ENCOUN
extern const unsigned short int pp__ro_AORIGI; // (AORIGI
extern const unsigned short int pp_ROSTER; // ROSTER
extern Color RED; // RED
extern Color LT_dash_BLUE; // LT-BLUE
extern Color PINK; // PINK
extern Color YELLOW; // YELLOW
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void COUNT(); // COUNT
void _star__slash_(); // */
void ABS(); // ABS
void M_star_(); // M*
void MAX(); // MAX
void MIN(); // MIN
void D_st_(); // D<
void _co_(); // ,
void BEEP(); // BEEP
void _dash_TRAILING(); // -TRAILING
void Draw(); // .
void Is(); // ?
void NOP(); // NOP
void PICK(); // PICK
void ROLL(); // ROLL
void D_dash_(); // D-
void D0_eq_(); // D0=
void WITHIN(); // WITHIN
void DMIN(); // DMIN
void DMAX(); // DMAX
void KEY_2(); // KEY_2
void _3_star_(); // 3*
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void FILL_2(); // FILL_2
void StoreINST_dash_S(); // !INST-S
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFLD_at_(); // IFLD@
void IFLD_ex_(); // IFLD!
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void DrawCIRCLE_1(); // .CIRCLE_1
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void BYE_2(); // BYE_2
void GetIX(); // @IX
void GetIY(); // @IY
void GetIL(); // @IL
void GetIH(); // @IH
void StoreID(); // !ID
void POINT_gt_I(); // POINT>I
void IsICONS_dash__2(); // ?ICONS-_2
void CTERASE(); // CTERASE
void BEEPON_2(); // BEEPON_2
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void DrawSORD(); // .SORD
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void _1_dot_5_at_(); // 1.5@
void _st_C_ex__gt_(); // <C!>
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void WLD_gt_SCR(); // WLD>SCR
void SCR_gt_BLT(); // SCR>BLT
void ENGINE_dash_(); // ENGINE-
void SENSOR_dash_(); // SENSOR-
void COMM_dash_CH(); // COMM-CH
void MISS_dash_CH(); // MISS-CH
void LASER_dash_C(); // LASER-C
void SHIELD_dash_(); // SHIELD-


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WE833 = 0xe833; // WE833 size: 9
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20}

const unsigned short int pp_WE83E = 0xe83e; // WE83E size: 2
// {0x00, 0x00}

const unsigned short int pp_WE842 = 0xe842; // WE842 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE846 = 0xe846; // WE846 size: 4
// {0x56, 0x3a, 0x20, 0x16}

const unsigned short int pp_LDAMAGE = 0xe9ae; // LDAMAGE size: 26
// {0x00, 0x00, 0x5a, 0x00, 0xd2, 0x00, 0x68, 0x01, 0xfe, 0x01, 0x94, 0x02, 0xbc, 0x02, 0xbc, 0x02, 0xbc, 0x02, 0xbc, 0x02, 0xe8, 0x03, 0x4c, 0x04, 0xb0, 0x04}

const unsigned short int pp_WEA1C = 0xea1c; // WEA1C size: 2
// {0x3a, 0x20}

const unsigned short int pp_WOUNDED = 0xea6a; // WOUNDED size: 6
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54}

const unsigned short int pp__n_WOUNDE = 0xea7c; // #WOUNDE size: 2
// {0x00, 0x00}

const unsigned short int pp_WEDBB = 0xedbb; // WEDBB size: 7
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f}

const unsigned short int pp_MDAMAGE = 0xefd5; // MDAMAGE size: 26
// {0x00, 0x00, 0xc8, 0x00, 0x90, 0x01, 0xbc, 0x02, 0xe8, 0x03, 0xdc, 0x05, 0xa0, 0x0f, 0xf4, 0x01, 0x58, 0x02, 0xbc, 0x02, 0xd0, 0x07, 0x84, 0x03, 0xe8, 0x03}


const unsigned short int cc_WE762 = 0xe762; // WE762
const unsigned short int cc_WE7B4 = 0xe7b4; // WE7B4


// 0xe6d2: db 0xea 0x00 '  '

// ================================================
// 0xe6d4: WORD 'WE6D6' codep=0x224c wordp=0xe6d6 params=3 returns=1
// ================================================

void WE6D6() // WE6D6
{
  Push(Pop() + 1); //  1+
  WITHIN(); // WITHIN
  Push(!Pop()); //  NOT
}


// ================================================
// 0xe6de: WORD 'WE6E0' codep=0x224c wordp=0xe6e0 params=0 returns=1
// ================================================

void WE6E0() // WE6E0
{
  unsigned short int a;
  Push(Read16(pp_IsNEB)); // ?NEB @
  if (Pop() != 0)
  {
    GetINST_dash_S(); // @INST-S
    a = Pop(); // >R
    Push(Read16(a)); // R@
    Push(2);
    Push(4);
    WITHIN(); // WITHIN
    Push(Read16(a)); // R@
    Push(0x000e);
    Push(0x0014);
    WITHIN(); // WITHIN
    Push(Pop() | Pop()); // OR
    Push(Read16(a)); // R@
    Push(0x0017);
    Push(0x001f);
    WITHIN(); // WITHIN
    Push(Pop() | Pop()); // OR
    Push(!(Pop() | (a==0x0020?1:0))); //  R> 0x0020 = OR NOT
    return;
  }
  Push(Read16(cc_FALSE)); // FALSE
}


// ================================================
// 0xe724: WORD 'WE726' codep=0x224c wordp=0xe726 params=1 returns=1
// ================================================

void WE726() // WE726
{
  Push((Pop()==0?1:0)==0?1:0); //  0= 0=
}


// ================================================
// 0xe72c: WORD 'WE72E' codep=0x224c wordp=0xe72e params=0 returns=1
// ================================================

void WE72E() // WE72E
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xe738: WORD 'WE73A' codep=0x224c wordp=0xe73a params=0 returns=2
// ================================================

void WE73A() // WE73A
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
}


// ================================================
// 0xe744: WORD 'WE746' codep=0x224c wordp=0xe746
// ================================================
// orphan

void WE746() // WE746
{
  GetIX(); // @IX
  GetIY(); // @IY
}


// ================================================
// 0xe74c: WORD 'WE74E' codep=0x224c wordp=0xe74e params=0 returns=2
// ================================================

void WE74E() // WE74E
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xe758: WORD 'WE75A' codep=0x224c wordp=0xe75a params=0 returns=0
// ================================================

void WE75A() // WE75A
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe760: WORD 'WE762' codep=0x2214 wordp=0xe762
// ================================================
// orphan
// 0xe762: dw 0x0019

// ================================================
// 0xe764: WORD 'WE766' codep=0x7394 wordp=0xe766
// ================================================
// orphan
LoadDataType WE766 = {VESSELIDX, 0x05, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xe76c: WORD 'WE76E' codep=0x7394 wordp=0xe76e
// ================================================
// orphan
LoadDataType WE76E = {VESSELIDX, 0x0c, 0x04, 0x24, 0x6b5d};

// ================================================
// 0xe774: WORD 'WE776' codep=0x7394 wordp=0xe776
// ================================================
LoadDataType WE776 = {VESSELIDX, 0x10, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xe77c: WORD 'WE77E' codep=0x7394 wordp=0xe77e
// ================================================
// orphan
LoadDataType WE77E = {VESSELIDX, 0x12, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xe784: WORD 'WE786' codep=0x7394 wordp=0xe786
// ================================================
// orphan
LoadDataType WE786 = {VESSELIDX, 0x13, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xe78c: WORD 'WE78E' codep=0x7394 wordp=0xe78e
// ================================================
LoadDataType WE78E = {VESSELIDX, 0x15, 0x07, 0x24, 0x6b5d};

// ================================================
// 0xe794: WORD 'WE796' codep=0x7420 wordp=0xe796
// ================================================
IFieldType WE796 = {VESSELIDX, 0x0c, 0x01};

// ================================================
// 0xe799: WORD 'WE79B' codep=0x7420 wordp=0xe79b
// ================================================
IFieldType WE79B = {VESSELIDX, 0x12, 0x02};

// ================================================
// 0xe79e: WORD 'WE7A0' codep=0x7420 wordp=0xe7a0
// ================================================
IFieldType WE7A0 = {VESSELIDX, 0x14, 0x02};

// ================================================
// 0xe7a3: WORD 'WE7A5' codep=0x7420 wordp=0xe7a5
// ================================================
IFieldType WE7A5 = {VESSELIDX, 0x0b, 0x01};

// ================================================
// 0xe7a8: WORD 'WE7AA' codep=0x7420 wordp=0xe7aa
// ================================================
IFieldType WE7AA = {VESSELIDX, 0x12, 0x07};

// ================================================
// 0xe7ad: WORD 'WE7AF' codep=0x7420 wordp=0xe7af
// ================================================
IFieldType WE7AF = {ORIGINATORIDX, 0x0d, 0x01};

// ================================================
// 0xe7b2: WORD 'WE7B4' codep=0x2214 wordp=0xe7b4
// ================================================
// orphan
// 0xe7b4: dw 0x0014

// ================================================
// 0xe7b6: WORD 'WE7B8' codep=0x7420 wordp=0xe7b8
// ================================================
// orphan
IFieldType WE7B8 = {SHIPIDX, 0x11, 0x01};

// ================================================
// 0xe7bb: WORD 'WE7BD' codep=0x7420 wordp=0xe7bd
// ================================================
// orphan
IFieldType WE7BD = {SHIPIDX, 0x12, 0x01};

// ================================================
// 0xe7c0: WORD 'WE7C2' codep=0x7420 wordp=0xe7c2
// ================================================
// orphan
IFieldType WE7C2 = {SHIPIDX, 0x13, 0x01};

// ================================================
// 0xe7c5: WORD 'WE7C7' codep=0x7420 wordp=0xe7c7
// ================================================
// orphan
IFieldType WE7C7 = {SHIPIDX, 0x14, 0x01};

// ================================================
// 0xe7ca: WORD 'WE7CC' codep=0x7420 wordp=0xe7cc
// ================================================
// orphan
IFieldType WE7CC = {SHIPIDX, 0x15, 0x01};

// ================================================
// 0xe7cf: WORD 'WE7D1' codep=0x7420 wordp=0xe7d1
// ================================================
// orphan
IFieldType WE7D1 = {SHIPIDX, 0x16, 0x01};

// ================================================
// 0xe7d4: WORD 'WE7D6' codep=0x7420 wordp=0xe7d6
// ================================================
// orphan
IFieldType WE7D6 = {SHIPIDX, 0x17, 0x01};

// ================================================
// 0xe7d9: WORD 'WE7DB' codep=0x7420 wordp=0xe7db
// ================================================
// orphan
IFieldType WE7DB = {SHIPIDX, 0x18, 0x01};

// ================================================
// 0xe7de: WORD 'WE7E0' codep=0x7420 wordp=0xe7e0
// ================================================
// orphan
IFieldType WE7E0 = {SHIPIDX, 0x19, 0x01};

// ================================================
// 0xe7e3: WORD 'WE7E5' codep=0x7420 wordp=0xe7e5
// ================================================
IFieldType WE7E5 = {SHIPIDX, 0x1a, 0x01};

// ================================================
// 0xe7e8: WORD 'WE7EA' codep=0x7420 wordp=0xe7ea
// ================================================
// orphan
IFieldType WE7EA = {SHIPIDX, 0x1b, 0x01};

// ================================================
// 0xe7ed: WORD 'WE7EF' codep=0x7420 wordp=0xe7ef
// ================================================
// orphan
IFieldType WE7EF = {SHIPIDX, 0x1c, 0x01};

// ================================================
// 0xe7f2: WORD 'WE7F4' codep=0x7420 wordp=0xe7f4
// ================================================
// orphan
IFieldType WE7F4 = {SHIPIDX, 0x1d, 0x01};

// ================================================
// 0xe7f7: WORD 'WE7F9' codep=0x7420 wordp=0xe7f9
// ================================================
// orphan
IFieldType WE7F9 = {SHIPIDX, 0x1e, 0x01};

// ================================================
// 0xe7fc: WORD 'WE7FE' codep=0x7420 wordp=0xe7fe
// ================================================
IFieldType WE7FE = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xe801: WORD 'WE803' codep=0x7420 wordp=0xe803
// ================================================
// orphan
IFieldType WE803 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xe806: WORD 'WE808' codep=0x7420 wordp=0xe808
// ================================================
IFieldType WE808 = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xe80b: WORD 'WE80D' codep=0x7420 wordp=0xe80d
// ================================================
// orphan
IFieldType WE80D = {SHIPIDX, 0x49, 0x01};

// ================================================
// 0xe810: WORD 'WE812' codep=0x7420 wordp=0xe812
// ================================================
IFieldType WE812 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xe815: WORD 'WE817' codep=0x7420 wordp=0xe817
// ================================================
IFieldType WE817 = {ENCOUNTERIDX, 0x14, 0x01};

// ================================================
// 0xe81a: WORD 'WE81C' codep=0x7420 wordp=0xe81c
// ================================================
IFieldType WE81C = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xe81f: WORD 'WE821' codep=0x7420 wordp=0xe821
// ================================================
IFieldType WE821 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xe824: WORD 'WE826' codep=0x7394 wordp=0xe826
// ================================================
LoadDataType WE826 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xe82c: WORD 'WE82E' codep=0x7420 wordp=0xe82e
// ================================================
IFieldType WE82E = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xe831: WORD 'WE833' codep=0x1d29 wordp=0xe833
// ================================================
// 0xe833: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 ':  ALLOT '

// ================================================
// 0xe83c: WORD 'WE83E' codep=0x1d29 wordp=0xe83e
// ================================================
// 0xe83e: db 0x00 0x00 '  '

// ================================================
// 0xe840: WORD 'WE842' codep=0x1d29 wordp=0xe842
// ================================================
// 0xe842: db 0x3a 0x20 ': '

// ================================================
// 0xe844: WORD 'WE846' codep=0x1d29 wordp=0xe846
// ================================================
// 0xe846: db 0x56 0x3a 0x20 0x16 'V:  '

// ================================================
// 0xe84a: WORD 'WE84C' codep=0x224c wordp=0xe84c params=0 returns=1
// ================================================
// orphan

void WE84C() // WE84C
{
  Push((Read16(pp_WE842)&0xFF) & 0x000f); // WE842 C@ 0x000f AND
}


// ================================================
// 0xe858: WORD 'WE85A' codep=0x224c wordp=0xe85a params=1 returns=1
// ================================================

void WE85A() // WE85A
{
  Push((Read16(Pop())&0xFF) & 7); //  C@ 7 AND
}


// ================================================
// 0xe862: WORD 'WE864' codep=0x224c wordp=0xe864 params=0 returns=1
// ================================================
// orphan

void WE864() // WE864
{
  Push((Read16(0x65e1+WE803.offset)&0xFF) & 8); // WE803<IFIELD> C@ 8 AND
  WE726(); // WE726
  Push(Pop() & !(Read16(pp_NLR)==-1?1:0)); //  NLR @ -1 = NOT AND
}


// ================================================
// 0xe87c: WORD 'WE87E' codep=0x224c wordp=0xe87e params=0 returns=2
// ================================================

void WE87E() // WE87E
{
  Push(pp_WE846); // WE846
  _2_at_(); // 2@
}


// ================================================
// 0xe884: WORD 'WE886' codep=0x224c wordp=0xe886 params=4 returns=1
// ================================================

void WE886() // WE886
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
// 0xe8a2: WORD 'WE8A4' codep=0x224c wordp=0xe8a4
// ================================================

void WE8A4() // WE8A4
{
  unsigned short int a;
  Push(Read16(pp_TRACE)); // TRACE @
  Push(0);
  _eq_SPECIE(); // =SPECIE
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x0019?1:0); //  0x0019 =
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    SET_STR_AS_PARAM(" ");
    DrawTTY(); // .TTY
    OVER(); // OVER
    Draw(); // .
    Push(0x65e1+WE7A0.offset); // WE7A0<IFIELD>
    Is(); // ?
    Push(0x65e1+WE79B.offset); // WE79B<IFIELD>
    Is(); // ?
    Push(pp_A_dash_STREN); // A-STREN
    Is(); // ?
  }
  a = Pop(); // >R
  Push(Read16(a)); // R@
  IFLD_at_(); // IFLD@
  SWAP(); // SWAP
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(a); // R>
  IFLD_ex_(); // IFLD!
}


// ================================================
// 0xe8ea: WORD 'WE8EC' codep=0x224c wordp=0xe8ec
// ================================================

void WE8EC() // WE8EC
{
  unsigned short int a, b;
  a = Pop(); // >R
  Push(Read16(a)); // R@
  IFLD_at_(); // IFLD@
  Push(Read16(regsp)); // DUP
  Push(Pop() & 0x0080); //  0x0080 AND
  b = Pop(); // >R
  SWAP(); // SWAP
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(Pop() | b); //  R> OR
  Push(a); // R>
  IFLD_ex_(); // IFLD!
}


// ================================================
// 0xe90e: WORD 'WE910' codep=0x224c wordp=0xe910 params=0 returns=0
// ================================================

void WE910() // WE910
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  Get_gt_C_plus_S(); // @>C+S
  Push(-1);
  Push(pp__n_VESS); // #VESS
  _plus__ex__2(); // +!_2
  Push(1);
  Push(0x65e1+WE817.offset); // WE817<IFIELD>
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe92e: WORD 'WE930' codep=0x224c wordp=0xe930 params=0 returns=1
// ================================================

void WE930() // WE930
{
  Push(Read16(0x65e1+WE7FE.offset)); // WE7FE<IFIELD> @
  WE726(); // WE726
  Push(Pop() & Read16(pp_IsSUP)); //  ?SUP @ AND
  Push(!Read16(pp_IsNEB)); // ?NEB @ NOT
  Push(0x65e1+WE7E5.offset); // WE7E5<IFIELD>
  WE85A(); // WE85A
  Push(Pop()==7?1:0); //  7 =
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe950: WORD 'WE952' codep=0x224c wordp=0xe952 params=0 returns=1
// ================================================

void WE952() // WE952
{
  Push(Read16(pp__n_AUX)==1?1:0); // #AUX @ 1 =
  if (Pop() != 0)
  {
    Push(0xc0a1); // 'OV/STX'
    return;
  }
  Push(0xc090); // 'OV/STA'
}


// ================================================
// 0xe96c: WORD 'WE96E' codep=0x224c wordp=0xe96e params=0 returns=1
// ================================================

void WE96E() // WE96E
{
  Push(Read16(pp__n_AUX)==3?1:0); // #AUX @ 3 =
  if (Pop() != 0)
  {
    Push(0xbcb8); // 'OVDBA'
    return;
  }
  Push(0xbc98); // 'OV/DA'
}


// ================================================
// 0xe988: WORD 'WE98A' codep=0x224c wordp=0xe98a params=0 returns=1
// ================================================

void WE98A() // WE98A
{
  Push(Read16(0x65e1+WE808.offset)); // WE808<IFIELD> @
  WE726(); // WE726
  WE930(); // WE930
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    WE952(); // WE952
    return;
  }
  WE96E(); // WE96E
}


// ================================================
// 0xe9a2: WORD 'LDAMAGE' codep=0x1d29 wordp=0xe9ae
// ================================================
// 0xe9ae: db 0x00 0x00 0x5a 0x00 0xd2 0x00 0x68 0x01 0xfe 0x01 0x94 0x02 0xbc 0x02 0xbc 0x02 0xbc 0x02 0xbc 0x02 0xe8 0x03 0x4c 0x04 0xb0 0x04 '  Z   h               L   '

// ================================================
// 0xe9c8: WORD 'WE9CA' codep=0x224c wordp=0xe9ca
// ================================================

void WE9CA() // WE9CA
{
  unsigned short int a;
  a = Pop(); // >R
  WE73A(); // WE73A
  WE886(); // WE886
  Push(0x000a);
  SWAP(); // SWAP
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(a); // R>
  IFLD_at_(); // IFLD@
  Push(Read16(Pop() * 2 + pp_LDAMAGE)); //  2* LDAMAGE + @
  Push(0x000a);
  _star__slash_(); // */
}


// ================================================
// 0xe9f0: WORD 'WE9F2' codep=0x224c wordp=0xe9f2
// ================================================

void WE9F2() // WE9F2
{
  WE74E(); // WE74E
  Push(0xe77e); // 'WE77E'
  WE9CA(); // WE9CA
}


// ================================================
// 0xe9fc: WORD 'WE9FE' codep=0x224c wordp=0xe9fe
// ================================================

void WE9FE() // WE9FE
{
  _2DUP(); // 2DUP
  Push(0xe7f9); // 'WE7F9'
  WE9CA(); // WE9CA
}


// ================================================
// 0xea08: WORD 'REFRESH' codep=0x224c wordp=0xea14 params=0 returns=0
// ================================================
// entry

void REFRESH() // REFRESH
{
  WE98A(); // WE98A
  MODULE(); // MODULE
}


// ================================================
// 0xea1a: WORD 'WEA1C' codep=0x1d29 wordp=0xea1c
// ================================================
// 0xea1c: db 0x3a 0x20 ': '

// ================================================
// 0xea1e: WORD 'WEA20' codep=0x224c wordp=0xea20 params=0 returns=1
// ================================================

void WEA20() // WEA20
{
  WE72E(); // WE72E
  Push(0x0046);
  _st_(); // <
}


// ================================================
// 0xea2a: WORD 'WEA2C' codep=0x224c wordp=0xea2c
// ================================================

void WEA2C() // WEA2C
{
  Push(1);
  Push(Read16(pp_WEA1C) + 1); // WEA1C @ 1+
  RRND(); // RRND
  LoadData(WE826); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  _slash_(); // /
  Push(0x000a);
  _slash_(); // /
  Push(5);
  MAX(); // MAX
}


// ================================================
// 0xea48: WORD 'WEA4A' codep=0x224c wordp=0xea4a params=0 returns=0
// ================================================

void WEA4A() // WEA4A
{
  GetINST_dash_S(); // @INST-S
  Push(4);
  Push(6);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Push(1);
  Push(pp_Is10); // ?10
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xea5e: WORD 'WOUNDED' codep=0x1d29 wordp=0xea6a
// ================================================
// 0xea6a: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 ' ALLOT'

// ================================================
// 0xea70: WORD '#WOUNDE' codep=0x1d29 wordp=0xea7c
// ================================================
// entry
// 0xea7c: db 0x00 0x00 '  '

// ================================================
// 0xea7e: WORD 'WEA80' codep=0x224c wordp=0xea80 params=0 returns=0
// ================================================

void WEA80() // WEA80
{
  Push(pp_WOUNDED); // WOUNDED
  Push(6);
  Push(0x00ff);
  FILL_2(); // FILL_2
  Push(pp__n_WOUNDE); // #WOUNDE
  _099(); // 099
}


// ================================================
// 0xea90: WORD 'WEA92' codep=0x224c wordp=0xea92 params=1 returns=1
// ================================================

void WEA92() // WEA92
{
  unsigned short int i, imax;
  Push(pp_WOUNDED); // WOUNDED
  Push(Read16(regsp)); // DUP
  Push(Pop() + 6); //  6 +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(i)&0xFF); // I C@
    OVER(); // OVER
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Pop(); // DROP
      imax = i; // LEAVE
    } else
    {
      Push((Read16(i)&0xFF)==0x00ff?1:0); // I C@ 0x00ff =
      if (Pop() != 0)
      {
        Push(i); // I
        C_ex__2(); // C!_2
        Push(1);
        Push(pp__n_WOUNDE); // #WOUNDE
        _st__plus__ex__gt_(); // <+!>
        imax = i; // LEAVE
      }
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xead2: WORD 'WEAD4' codep=0x224c wordp=0xead4 params=0 returns=1
// ================================================

void WEAD4() // WEAD4
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+WE7AF.offset)&0xFF); // WE7AF<IFIELD> C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeae0: WORD 'WEAE2' codep=0x224c wordp=0xeae2
// ================================================

void WEAE2() // WEAE2
{
  GetColor(YELLOW);
  Push(0x4fa9); // 'BLACK'
  Store_2(); // !_2
  CTERASE(); // CTERASE
  Push(0);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xeaf2: WORD 'WEAF4' codep=0x224c wordp=0xeaf4
// ================================================

void WEAF4() // WEAF4
{
  SET_STR_AS_PARAM("**  GAME  OVER  **");
  DrawTTY(); // .TTY
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  BYE_2(); // BYE_2
}


// ================================================
// 0xeb15: WORD 'WEB17' codep=0x224c wordp=0xeb17
// ================================================

void WEB17() // WEB17
{
  WEAE2(); // WEAE2
  SET_STR_AS_PARAM("!!HULL DESTROYED!!");
  DrawTTY(); // .TTY
  WEAF4(); // WEAF4
}


// ================================================
// 0xeb34: WORD 'WEB36' codep=0x224c wordp=0xeb36
// ================================================

void WEB36() // WEB36
{
  WEAE2(); // WEAE2
  SET_STR_AS_PARAM("!!CREW  DECEASED!!");
  DrawTTY(); // .TTY
  WEAF4(); // WEAF4
}


// ================================================
// 0xeb53: WORD 'WEB55' codep=0x224c wordp=0xeb55 params=0 returns=0
// ================================================

void WEB55() // WEB55
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  Get_gt_C_plus_S(); // @>C+S
  Push(0x0012);
  _eq_SPECIE(); // =SPECIE
  Push(0x0018);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
  Push(0x0013);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(0);
    Push(0x65e1+WE81C.offset); // WE81C<IFIELD>
    C_ex__2(); // C!_2
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb7d: WORD 'WEB7F' codep=0x224c wordp=0xeb7f
// ================================================
// orphan

void WEB7F() // WEB7F
{
  unsigned short int a;
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  _co_(); // ,
  _co_(); // ,
  CODE(); // (;CODE) inlined assembler code
// 0xeb87: call   1649
  _2_at_(); // 2@
  IFLD_at_(); // IFLD@
  Push(Pop() & 7); //  7 AND
  WE726(); // WE726
  a = Pop(); // >R
  IFLD_at_(); // IFLD@
  Push(Pop() & 0x007f); //  0x007f AND
  WE726(); // WE726
  Push(Pop() & a); //  R> AND
}


// ================================================
// 0xeba6: WORD 'WEBA8' codep=0x224c wordp=0xeba8 params=0 returns=1
// ================================================

void WEBA8() // WEBA8
{
  Push(0xe7b8); // 'WE7B8'
  Push((Read16(Pop())&0xFF) & 0x007f); //  C@ 0x007f AND
  WE726(); // WE726
}


// ================================================
// 0xebb8: WORD 'ENGINE-' codep=0xeb87 wordp=0xebc4
// ================================================
// 0xebc4: db 0xc7 0xe7 0xc2 0xe7 '    '

// ================================================
// 0xebc8: WORD 'SENSOR-' codep=0xeb87 wordp=0xebd4
// ================================================
// 0xebd4: db 0xd1 0xe7 0xcc 0xe7 '    '

// ================================================
// 0xebd8: WORD 'COMM-CH' codep=0xeb87 wordp=0xebe4
// ================================================
// 0xebe4: db 0xdb 0xe7 0xd6 0xe7 '    '

// ================================================
// 0xebe8: WORD 'MISS-CH' codep=0xeb87 wordp=0xebf4
// ================================================
// 0xebf4: db 0xef 0xe7 0xea 0xe7 '    '

// ================================================
// 0xebf8: WORD 'LASER-C' codep=0xeb87 wordp=0xec04
// ================================================
// 0xec04: db 0xf9 0xe7 0xf4 0xe7 '    '

// ================================================
// 0xec08: WORD 'SHIELD-' codep=0xeb87 wordp=0xec14
// ================================================
// 0xec14: db 0xe5 0xe7 0xe0 0xe7 '    '

// ================================================
// 0xec18: WORD 'WEC1A' codep=0x224c wordp=0xec1a params=0 returns=1
// ================================================

void WEC1A() // WEC1A
{
  Push(pp_ROSTER); // ROSTER
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  WE726(); // WE726
}


// ================================================
// 0xec24: WORD '#>?FIEL' codep=0x4b3b wordp=0xec30
// ================================================

void _n__gt__ask_FIEL() // #>?FIEL
{
  switch(Pop()) // #>?FIEL
  {
  case 1:
    WEBA8(); // WEBA8
    break;
  case 2:
    ENGINE_dash_(); // ENGINE-
    break;
  case 3:
    SENSOR_dash_(); // SENSOR-
    break;
  case 4:
    COMM_dash_CH(); // COMM-CH
    break;
  case 5:
    MISS_dash_CH(); // MISS-CH
    break;
  case 6:
    LASER_dash_C(); // LASER-C
    break;
  case 7:
    SHIELD_dash_(); // SHIELD-
    break;
  case 8:
    WEC1A(); // WEC1A
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // 0=
    break;

  }
}

// ================================================
// 0xec54: WORD 'WEC56' codep=0x224c wordp=0xec56
// ================================================

void WEC56() // WEC56
{
  unsigned short int i, imax;
  Push(pp_WE833); // WE833
  Push(9);
  Push(0);
  FILL_2(); // FILL_2
  Push(pp_WE83E); // WE83E
  _099(); // 099
  Push(0);

  i = 1;
  imax = 9;
  do // (DO)
  {
    Push(i); // I
    _n__gt__ask_FIEL(); // #>?FIEL case
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(i); // I
      Push(Read16(pp_WE83E) + pp_WE833); // WE83E @ WE833 +
      _st_C_ex__gt_(); // <C!>
      Push(1);
      Push(pp_WE83E); // WE83E
      _st__plus__ex__gt_(); // <+!>
    }
    Push(Pop() | Pop()); // OR
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xec8e: WORD 'WEC90' codep=0x224c wordp=0xec90
// ================================================

void WEC90() // WEC90
{
  WEC56(); // WEC56
  if (Pop() == 0) return;
  do
  {
    Push(0);
    Push(Read16(pp_WE83E)); // WE83E @
    RRND(); // RRND
    Push(Read16(Pop() + pp_WE833)&0xFF); //  WE833 + C@
    Push(Read16(pp_IsCOMBAT)); // ?COMBAT @
    WE726(); // WE726
    OVER(); // OVER
    Push(!(Pop()==8?1:0)); //  8 = NOT
    Push(Pop() | Pop()); // OR
    Push(Read16(regsp)); // DUP
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      SWAP(); // SWAP
      Pop(); // DROP
    }
  } while(Pop() == 0);
}


// ================================================
// 0xecc6: WORD 'WECC8' codep=0x224c wordp=0xecc8 params=0 returns=0
// ================================================

void WECC8() // WECC8
{
  unsigned short int a;
  Push(Read16(0x65e1+WE821.offset)&0xFF); // WE821<IFIELD> C@
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("KILLED");
  } else
  {
    Push(Read16(a)); // R@
    Push(1);
    Push(0x0015);
    WITHIN(); // WITHIN
    if (Pop() != 0)
    {
      SET_STR_AS_PARAM("CRITICALLY ");
    } else
    {
      Push(Read16(a)); // R@
      Push(0x0015);
      Push(0x0033);
      WITHIN(); // WITHIN
      if (Pop() != 0)
      {
        SET_STR_AS_PARAM("HEAVILIY ");
      } else
      {
        Push(Read16(a)); // R@
        Push(0x0033);
        Push(0x0051);
        WITHIN(); // WITHIN
        if (Pop() != 0)
        {
          SET_STR_AS_PARAM("MODERATELY ");
        } else
        {
          SET_STR_AS_PARAM("SLIGHTLY ");
        }
      }
    }
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    SET_STR_AS_PARAM("WOUNDED ");
  }
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xed66: WORD 'WED68' codep=0x224c wordp=0xed68 params=0 returns=0
// ================================================

void WED68() // WED68
{
  unsigned short int i, imax;
  Push(Read16(pp__n_WOUNDE)); // #WOUNDE @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT

    i = 0;
    imax = Pop();
    do // (DO)
    {
      Push(Read16(i + pp_WOUNDED)&0xFF); // I WOUNDED + C@
      _3_star_(); // 3*
      Push(Pop() + pp_ROSTER); //  ROSTER +
      _1_dot_5_at_(); // 1.5@
      _2DUP(); // 2DUP
      Push(Pop() | Pop()); // OR
      if (Pop() != 0)
      {
        _gt_C_plus_S(); // >C+S
        Push(0x65e1+WE82E.offset); // WE82E<IFIELD>
        COUNT(); // COUNT
        _dash_TRAILING(); // -TRAILING
        DrawTTY(); // .TTY
        PRINT(" IS ", 4); // (.")
        WECC8(); // WECC8
        ICLOSE(); // ICLOSE
      } else
      {
        Pop(); Pop(); // 2DROP
      }
      i++;
    } while(i<imax); // (LOOP)

    Push(pp_IsHEAL); // ?HEAL
    ON_2(); // ON_2
  }
  Push(pp__n_WOUNDE); // #WOUNDE
  _099(); // 099
}


// ================================================
// 0xedb9: WORD 'WEDBB' codep=0x1d29 wordp=0xedbb
// ================================================
// 0xedbb: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f ':  ALLO'

// ================================================
// 0xedc2: WORD 'WEDC4' codep=0x224c wordp=0xedc4
// ================================================

void WEDC4() // WEDC4
{
  Push(0x002b);
  StoreID(); // !ID
  Push(8);
  Push(0x65e1+WE7A5.offset); // WE7A5<IFIELD>
  C_ex__2(); // C!_2
  CTINIT(); // CTINIT
  _gt_DISPLA(); // >DISPLA
  SET_STR_AS_PARAM("ALIEN SHIP DESTROYED");
  DrawTTY(); // .TTY
  Push(0);
  Push(0x65e1+WE796.offset); // WE796<IFIELD>
  C_ex__2(); // C!_2
  WEA4A(); // WEA4A
  WEB55(); // WEB55
  LoadData(WE78E); // from 'VESSEL'
  Push(pp_WEDBB); // WEDBB
  Push(7);
  CMOVE_2(); // CMOVE_2
  Push(0);
  StoreINST_dash_S(); // !INST-S
  Push(pp_WEDBB); // WEDBB
  Push(0x65e1+WE7AA.offset); // WE7AA<IFIELD>
  Push(7);
  CMOVE_2(); // CMOVE_2
  WE910(); // WE910
}


// ================================================
// 0xee0f: WORD 'WEE11' codep=0x224c wordp=0xee11
// ================================================

void WEE11() // WEE11
{
  unsigned short int i, imax;
  Push(pp_WEA1C); // WEA1C
  _st__ex__gt_(); // <!>
  WEA80(); // WEA80
  Push(pp_ROSTER); // ROSTER
  Push(Read16(regsp)); // DUP
  Push(Pop() + 0x0012); //  0x0012 +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    _1_dot_5_at_(); // 1.5@
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      WEA20(); // WEA20
      if (Pop() != 0)
      {
        _gt_C_plus_S(); // >C+S
        WEA2C(); // WEA2C
        Push(0xe821); // 'WE821'
        WE8A4(); // WE8A4
        ICLOSE(); // ICLOSE
        Push(i - pp_ROSTER); // I ROSTER -
        Push(3);
        _slash_(); // /
        WEA92(); // WEA92
      } else
      {
        Pop(); Pop(); // 2DROP
      }
    } else
    {
      Pop(); Pop(); // 2DROP
      imax = i; // LEAVE
    }
    Push(3);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xee65: WORD 'WEE67' codep=0x224c wordp=0xee67
// ================================================

void WEE67() // WEE67
{
  unsigned short int a;
  Push((Read16(0x65e1+WE7A0.offset)==0?1:0) | !Read16(cc_IsA_dash_SHIE)); // WE7A0<IFIELD> @ 0= ?A-SHIE NOT OR
  WE6E0(); // WE6E0
  Push(Pop() | Pop()); // OR
  Push(Pop() | (Read16(pp_NLR)==1?1:0)); //  NLR @ 1 = OR
  if (Pop() != 0)
  {
    Push(0xe79b); // 'WE79B'
    WE8A4(); // WE8A4
  } else
  {
    Push(Read16(0x65e1+WE7A0.offset)); // WE7A0<IFIELD> @
    OVER(); // OVER
    _dash_(); // -
    a = Pop(); // >R
    Push(0xe7a0); // 'WE7A0'
    WE8A4(); // WE8A4
    Push(a); // R>
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      ABS(); // ABS
      Push(0xe79b); // 'WE79B'
      WE8A4(); // WE8A4
    } else
    {
      Pop(); // DROP
    }
  }
  WEAD4(); // WEAD4
  if (Pop() != 0)
  {
    Push(0xbfc8); // 'DA-STR'
    MODULE(); // MODULE
  }
  Push(Read16(0x65e1+WE79B.offset)); // WE79B<IFIELD> @
  _0_gt_(); // 0>
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  WEDC4(); // WEDC4
}


// ================================================
// 0xeed3: WORD 'WEED5' codep=0x224c wordp=0xeed5 params=0 returns=0
// ================================================

void WEED5() // WEED5
{
  unsigned short int i, imax, j, jmax;
  Push(Read16(pp_Get_co_0_star_1_sc_)); // @,0*1; @
  if (Pop() == 0) return;
  BEEPON_2(); // BEEPON_2
  Push(0x0082 * Read16(cc_MPS)); // 0x0082 MPS *
  Push(0x01f4);
  MAX(); // MAX
  Push(0x03e8);
  MIN(); // MIN

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(i + 0x03e8); // I 0x03e8 +
    RRND(); // RRND
    TONE(); // TONE

    j = 0;
    jmax = 5 * Read16(cc_MPS); // 5 MPS *
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
// 0xef1d: WORD 'WEF1F' codep=0x224c wordp=0xef1f params=1 returns=0
// ================================================

void WEF1F() // WEF1F
{
  unsigned short int i, imax;
  Push(0);
  _eq_SPECIE(); // =SPECIE
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x0014?1:0); //  0x0014 =
  Push(Pop() | Pop()); // OR
  Push(!Pop()); //  NOT
  OVER(); // OVER
  WE726(); // WE726
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(Read16(pp_Get_co_0_star_1_sc_)); // @,0*1; @
    if (Pop() != 0)
    {
      BEEPON_2(); // BEEPON_2
      Push(0x0514 * (Read16(cc_MPS) - 1)); // 0x0514 MPS 1- *
      Push(0x01f4);
      MAX(); // MAX

      i = 0;
      imax = Pop();
      do // (DO)
      {
        Push(0);
        Push(i); // I
        RRND(); // RRND
        TONE(); // TONE
        i++;
      } while(i<imax); // (LOOP)

      BEEPOFF(); // BEEPOFF
    }
    WEE67(); // WEE67
  } else
  {
    Pop(); // DROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef71: WORD 'WEF73' codep=0x224c wordp=0xef73
// ================================================

void WEF73() // WEF73
{
  unsigned short int a, i, imax;
  WE9FE(); // WE9FE
  a = Pop(); // >R
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash__2(); // ?ICONS-_2
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(a)); // R@
    SWAP(); // SWAP

    i = 0;
    imax = Pop();
    do // (DO)
    {
      Push(Read16(regsp)); // DUP
      ROT(); // ROT
      POINT_gt_I(); // POINT>I
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      GetINST_dash_C(); // @INST-C
      Push(!(Pop()==0x0014?1:0)); //  0x0014 = NOT
      if (Pop() != 0)
      {
        LoadData(WE776); // from 'VESSEL'
        Push((Read16(Pop() + 1)&0xFF)==0?1:0); //  1+ C@ 0=
        if (Pop() != 0)
        {
          Pop(); // DROP
          Push(0);
        }
        WEF1F(); // WEF1F
      } else
      {
        ICLOSE(); // ICLOSE
      }
      i++;
    } while(i<imax); // (LOOP)

    Pop(); // DROP
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xefc9: WORD 'MDAMAGE' codep=0x1d29 wordp=0xefd5
// ================================================
// 0xefd5: db 0x00 0x00 0xc8 0x00 0x90 0x01 0xbc 0x02 0xe8 0x03 0xdc 0x05 0xa0 0x0f 0xf4 0x01 0x58 0x02 0xbc 0x02 0xd0 0x07 0x84 0x03 0xe8 0x03 '                X         '

// ================================================
// 0xefef: WORD 'WEFF1' codep=0x224c wordp=0xeff1 params=0 returns=1
// ================================================

void WEFF1() // WEFF1
{
  WE84C(); // WE84C
  Push(Read16(Pop() * 2 + pp_MDAMAGE)); //  2* MDAMAGE + @
}


// ================================================
// 0xeffd: WORD 'WEFFF' codep=0x224c wordp=0xefff params=1 returns=0
// ================================================

void WEFFF() // WEFFF
{
  Push(Read16(0x65e1+WE7FE.offset)); // WE7FE<IFIELD> @
  SWAP(); // SWAP
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(0x65e1+WE7FE.offset); // WE7FE<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf011: WORD 'WF013' codep=0x224c wordp=0xf013 params=1 returns=0
// ================================================

void WF013() // WF013
{
  Push(Read16(0x65e1+WE808.offset)); // WE808<IFIELD> @
  SWAP(); // SWAP
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(0x65e1+WE808.offset); // WE808<IFIELD>
  Store_2(); // !_2
  Push(Read16(0x65e1+WE808.offset)==0?1:0); // WE808<IFIELD> @ 0=
  if (Pop() == 0) return;
  Push(0xbc98); // 'OV/DA'
  MODULE(); // MODULE
  Push(3);
  Push(pp__n_AUX); // #AUX
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf03b: WORD 'WF03D' codep=0x224c wordp=0xf03d params=0 returns=0
// ================================================
// orphan

void WF03D() // WF03D
{
  Push((Read16(0x65e1+WE803.offset)&0xFF) & 0x00f7); // WE803<IFIELD> C@ 0x00f7 AND
  Push(0x65e1+WE803.offset); // WE803<IFIELD>
  C_ex__2(); // C!_2
}


// ================================================
// 0xf04d: WORD 'WF04F' codep=0x224c wordp=0xf04f
// ================================================

void WF04F() // WF04F
{
  Push(0xe7b8); // 'WE7B8'
  WE8EC(); // WE8EC
}


// ================================================
// 0xf057: WORD 'WF059' codep=0x224c wordp=0xf059
// ================================================

void WF059() // WF059
{
  Push(0xe7c2); // 'WE7C2'
  WE8EC(); // WE8EC
  ENGINE_dash_(); // ENGINE-
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(Read16(pp_IsAUTO)==0?1:0); // ?AUTO @ 0=
  if (Pop() != 0)
  {
    Push(5);
    Push(0xb77c); // 'OV?.EQ'
    MODULE(); // MODULE
    Pop(); // DROP
  }
  Push(0xe7c7); // 'WE7C7'
  IFLD_at_(); // IFLD@
  Push(Pop() | 0x0080); //  0x0080 OR
  Push(0xe7c7); // 'WE7C7'
  IFLD_ex_(); // IFLD!
  Push(pp_IsAUTO); // ?AUTO
  ON_2(); // ON_2
}


// ================================================
// 0xf093: WORD 'WF095' codep=0x224c wordp=0xf095
// ================================================

void WF095() // WF095
{
  Push(0xe7cc); // 'WE7CC'
  WE8EC(); // WE8EC
}


// ================================================
// 0xf09d: WORD 'WF09F' codep=0x224c wordp=0xf09f
// ================================================

void WF09F() // WF09F
{
  Push(0xe7d6); // 'WE7D6'
  WE8EC(); // WE8EC
}


// ================================================
// 0xf0a7: WORD 'WF0A9' codep=0x224c wordp=0xf0a9
// ================================================

void WF0A9() // WF0A9
{
  Push(0xe7ea); // 'WE7EA'
  WE8EC(); // WE8EC
}


// ================================================
// 0xf0b1: WORD 'WF0B3' codep=0x224c wordp=0xf0b3
// ================================================

void WF0B3() // WF0B3
{
  Push(0xe7e0); // 'WE7E0'
  WE8EC(); // WE8EC
  SHIELD_dash_(); // SHIELD-
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(0xc636); // 'OV-SH'
  MODULE(); // MODULE
}


// ================================================
// 0xf0c9: WORD 'WF0CB' codep=0x224c wordp=0xf0cb
// ================================================

void WF0CB() // WF0CB
{
  Push(0xe7f4); // 'WE7F4'
  WE8EC(); // WE8EC
}


// ================================================
// 0xf0d3: WORD '#>DAMAG' codep=0x4b3b wordp=0xf0df
// ================================================

void _n__gt_DAMAG() // #>DAMAG
{
  switch(Pop()) // #>DAMAG
  {
  case 1:
    WF04F(); // WF04F
    break;
  case 2:
    WF059(); // WF059
    break;
  case 3:
    WF095(); // WF095
    break;
  case 4:
    WF09F(); // WF09F
    break;
  case 5:
    WF0A9(); // WF0A9
    break;
  case 6:
    WF0CB(); // WF0CB
    break;
  case 7:
    WF0B3(); // WF0B3
    break;
  case 8:
    WEE11(); // WEE11
    break;
  default:
    Pop(); // DROP
    break;

  }
}

// ================================================
// 0xf103: WORD 'WF105' codep=0x224c wordp=0xf105 params=1 returns=2
// ================================================

void WF105() // WF105
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  Push(1);
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  RRND(); // RRND
  Push(0x000a);
  MAX(); // MAX
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(a); // R>
}


// ================================================
// 0xf123: WORD 'WF125' codep=0x224c wordp=0xf125
// ================================================

void WF125() // WF125
{
  WE930(); // WE930
  if (Pop() != 0)
  {
    WEFFF(); // WEFFF
    return;
  }
  Push(Read16(0x65e1+WE808.offset)); // WE808<IFIELD> @
  if (Pop() != 0)
  {
    WF013(); // WF013
    return;
  }
  WEC90(); // WEC90
  _n__gt_DAMAG(); // #>DAMAG case
}


// ================================================
// 0xf145: WORD 'DO-ADAM' codep=0x224c wordp=0xf151
// ================================================
// entry

void DO_dash_ADAM() // DO-ADAM
{
  WEED5(); // WEED5
  WEA80(); // WEA80
  while(1)
  {
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    Push(!(Pop()==0?1:0)); //  0= NOT
    if (Pop() == 0) break;

    WF105(); // WF105
    WF125(); // WF125
  }
  Push(Read16(pp__n_WOUNDE)); // #WOUNDE @
  if (Pop() != 0)
  {
    WED68(); // WED68
    Push(0xc18b); // '(OBI'
    MODULE(); // MODULE
    Push(0xc1b8); // '(ROL'
    MODULE(); // MODULE
  }
  REFRESH(); // REFRESH
  Push(0xe7b8); // 'WE7B8'
  IFLD_at_(); // IFLD@
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    WEB17(); // WEB17
  }
  WEC1A(); // WEC1A
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  WEB36(); // WEB36
}


// ================================================
// 0xf199: WORD 'WF19B' codep=0x224c wordp=0xf19b
// ================================================

void WF19B() // WF19B
{
  WE9F2(); // WE9F2
  Push(Pop() * 2); //  2*
  WE75A(); // WE75A
  DO_dash_ADAM(); // DO-ADAM
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1a7: WORD 'WF1A9' codep=0x224c wordp=0xf1a9 params=3 returns=0
// ================================================

void WF1A9() // WF1A9
{
  Push(pp_WE842); // WE842
  C_ex__2(); // C!_2
  Push(pp_WE846); // WE846
  StoreD(); // D!
}


// ================================================
// 0xf1b3: WORD 'WF1B5' codep=0x224c wordp=0xf1b5 params=1 returns=0
// ================================================

void WF1B5() // WF1B5
{
  unsigned short int i, imax;
  WE84C(); // WE84C
  Push(!(Pop()==7?1:0)); //  7 = NOT
  if (Pop() != 0)
  {
    _gt_MAINVI(); // >MAINVI
    StoreCOLOR(); // !COLOR
    WE87E(); // WE87E
    WLD_gt_SCR(); // WLD>SCR
    SCR_gt_BLT(); // SCR>BLT
    SWAP(); // SWAP
    Push(Pop() + 3); //  3 +
    SWAP(); // SWAP
    Push(Pop() - 3); //  3 -
    Push(Read16(pp_XWLD_c_XP)); // XWLD:XP @
    Push(6);
    MIN(); // MIN

    i = 2;
    imax = Pop();
    do // (DO)
    {
      _2DUP(); // 2DUP
      Push(i); // I
      DrawCIRCLE_1(); // .CIRCLE_1
      Push(2);
      int step = Pop();
      i += step;
      if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
    } while(1); // (+LOOP)

    Pop(); Pop(); // 2DROP
    V_gt_DISPL(); // V>DISPL
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf1fb: WORD 'WF1FD' codep=0x224c wordp=0xf1fd
// ================================================

void WF1FD() // WF1FD
{
  SET_STR_AS_PARAM("PLASMA BOLT");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf20f: WORD 'WF211' codep=0x224c wordp=0xf211 params=0 returns=0
// ================================================

void WF211() // WF211
{
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  SET_STR_AS_PARAM("ENERGY LOSS");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf22f: WORD 'WF231' codep=0x224c wordp=0xf231
// ================================================

void WF231() // WF231
{
  SET_STR_AS_PARAM("MISSILE CLASS ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf246: WORD '#>DISP' codep=0x4b3b wordp=0xf251
// ================================================

void _n__gt_DISP() // #>DISP
{
  switch(Pop()) // #>DISP
  {
  case 6:
    WF1FD(); // WF1FD
    break;
  case 7:
    WF211(); // WF211
    break;
  default:
    WF231(); // WF231
    break;

  }
}

// ================================================
// 0xf25d: WORD 'WF25F' codep=0x224c wordp=0xf25f
// ================================================

void WF25F() // WF25F
{
  WF1B5(); // WF1B5
  CTINIT(); // CTINIT
  _gt_DISPLA(); // >DISPLA
  WE84C(); // WE84C
  Push(Read16(regsp)); // DUP
  _n__gt_DISP(); // #>DISP case
  Push(Read16(regsp)); // DUP
  Push(6);
  Push(7);
  WE6D6(); // WE6D6
  if (Pop() != 0)
  {
    Draw(); // .
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf281: WORD 'WF283' codep=0x224c wordp=0xf283
// ================================================

void WF283() // WF283
{
  unsigned short int a, i, imax;
  WF1A9(); // WF1A9
  WE75A(); // WE75A
  GetColor(LT_dash_BLUE);
  WF1B5(); // WF1B5
  WE87E(); // WE87E
  WEFF1(); // WEFF1
  a = Pop(); // >R
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash__2(); // ?ICONS-_2
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(a)); // R@
    SWAP(); // SWAP

    i = 0;
    imax = Pop();
    do // (DO)
    {
      Push(Read16(regsp)); // DUP
      ROT(); // ROT
      POINT_gt_I(); // POINT>I
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      GetINST_dash_C(); // @INST-C
      Push(!(Pop()==0x0014?1:0)); //  0x0014 = NOT
      if (Pop() != 0)
      {
        LoadData(WE776); // from 'VESSEL'
        Push(Read16(Pop())&0xFF); //  C@
        if (Pop() != 0)
        {
          WEF1F(); // WEF1F
        } else
        {
          Pop(); // DROP
          ICLOSE(); // ICLOSE
        }
      } else
      {
        Pop(); // DROP
        ICLOSE(); // ICLOSE
      }
      i++;
    } while(i<imax); // (LOOP)

    Pop(); // DROP
  }
  Push(a); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2e7: WORD 'CDAM' codep=0x224c wordp=0xf2f0
// ================================================
// entry

void CDAM() // CDAM
{
  WEE11(); // WEE11
  Push(Read16(pp__n_WOUNDE)); // #WOUNDE @
  if (Pop() != 0)
  {
    WED68(); // WED68
    Push(0xc18b); // '(OBI'
    MODULE(); // MODULE
    Push(0xc1b8); // '(ROL'
    MODULE(); // MODULE
  }
  WEC1A(); // WEC1A
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  WEB36(); // WEB36
}


// ================================================
// 0xf314: WORD 'WF316' codep=0x224c wordp=0xf316 params=6 returns=1
// ================================================

void WF316() // WF316
{
  unsigned short int a;
  Push(6);
  PICK(); // PICK
  Push(6);
  PICK(); // PICK
  _2SWAP(); // 2SWAP
  D_st_(); // D<
  a = Pop(); // >R
  D_st_(); // D<
  Push(!Pop() & a); //  NOT R> AND
}


// ================================================
// 0xf32e: WORD 'WF330' codep=0x224c wordp=0xf330
// ================================================

void WF330() // WF330
{
  StoreCOLOR(); // !COLOR
  BEEP(); // BEEP
}


// ================================================
// 0xf336: WORD 'WF338' codep=0x224c wordp=0xf338
// ================================================

void WF338() // WF338
{
  DrawTTY(); // .TTY
  DrawSORD(); // .SORD
}


// ================================================
// 0xf33e: WORD 'WF340' codep=0x224c wordp=0xf340
// ================================================

void WF340() // WF340
{
  GetColor(YELLOW);
  WF330(); // WF330
  PRINT("FUEL SUPPLY LOW", 15); // (.")
  WF338(); // WF338
}


// ================================================
// 0xf35a: WORD 'WF35C' codep=0x224c wordp=0xf35c
// ================================================

void WF35C() // WF35C
{
  GetColor(PINK);
  WF330(); // WF330
  SET_STR_AS_PARAM("FUEL SUPPLY CRITICAL");
  WF338(); // WF338
}


// ================================================
// 0xf37b: WORD 'WF37D' codep=0x224c wordp=0xf37d
// ================================================

void WF37D() // WF37D
{
  GetColor(RED);
  WF330(); // WF330
  SET_STR_AS_PARAM("OUT OF FUEL");
  WF338(); // WF338
}


// ================================================
// 0xf393: WORD '.EX' codep=0x4b3b wordp=0xf39b
// ================================================

void DrawEX() // .EX
{
  switch(Pop()) // .EX
  {
  case 2:
    WF35C(); // WF35C
    break;
  case 3:
    WF340(); // WF340
    break;
  default:
    WF37D(); // WF37D
    break;

  }
}

// ================================================
// 0xf3a7: WORD 'WF3A9' codep=0x224c wordp=0xf3a9 params=0 returns=0
// ================================================

void WF3A9() // WF3A9
{
  Push(pp__10_star_CARG); // 10*CARG
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(0);
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  DMIN(); // DMIN
  D_plus_(); // D+
  Push(pp__10_star_CARG); // 10*CARG
  StoreD(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(0);
  D_dash_(); // D-
  Push2Words("NULL");
  DMAX(); // DMAX
  Push(pp__10_star_END); // 10*END
  StoreD(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(Read16(regsp)); // DUP
  Push(0x0014);
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(5);
  ROLL(); // ROLL
  Push(0);
  D_plus_(); // D+
  WF316(); // WF316
  if (Pop() != 0)
  {
    Push(3);
    DrawEX(); // .EX case
    return;
  }
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(Read16(regsp)); // DUP
  Push(6);
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(5);
  ROLL(); // ROLL
  Push(0);
  D_plus_(); // D+
  WF316(); // WF316
  if (Pop() != 0)
  {
    Push(2);
    DrawEX(); // .EX case
    return;
  }
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) return;
  Push(pp_IsAUTO); // ?AUTO
  ON_2(); // ON_2
  Push(1);
  DrawEX(); // .EX case
}


// ================================================
// 0xf435: WORD 'WF437' codep=0x224c wordp=0xf437 params=1 returns=0
// ================================================

void WF437() // WF437
{
  unsigned short int a;
  a = Pop(); // >R
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(Read16(pp__dash_END)); // -END @
    Push(Read16(a)); // R@
    Push(pp__dash_END); // -END
    Store_2(); // !_2
    WF3A9(); // WF3A9
    Push(pp__dash_END); // -END
    Store_2(); // !_2
    Push2Words("*SHIP");
    _gt_C_plus_S(); // >C+S
    Push(0x000a);
    Push(0x65e1+WE812.offset); // WE812<IFIELD>
    _plus__ex__2(); // +!_2
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
      if (Pop() != 0)
      {
        Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
        Push(Read16(a)); // R@
        Push(0x000a);
        _slash_(); // /
        _dash_(); // -
        Push(0);
        MAX(); // MAX
        Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
        Store_2(); // !_2
      }
      CDROP(); // CDROP
    }
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf4a7: WORD 'WF4A9' codep=0x224c wordp=0xf4a9
// ================================================

void WF4A9() // WF4A9
{
  WF1A9(); // WF1A9
  GetColor(RED);
  WF25F(); // WF25F
  WE84C(); // WE84C
  Push(Pop()==7?1:0); //  7 =
  if (Pop() != 0)
  {
    Push(0x0064);
    WF437(); // WF437
    Push(!(Read16(pp__n_AUX)==1?1:0)); // #AUX @ 1 = NOT
    if (Pop() != 0)
    {
      Push(0xc090); // 'OV/STA'
    } else
    {
      Push(0xc0a1); // 'OV/STX'
    }
    MODULE(); // MODULE
    return;
  }
  WEFF1(); // WEFF1
  WE75A(); // WE75A
  DO_dash_ADAM(); // DO-ADAM
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4e9: WORD 'WF4EB' codep=0x224c wordp=0xf4eb
// ================================================

void WF4EB() // WF4EB
{
  if (Pop() != 0)
  {
    WF283(); // WF283
    return;
  }
  WF4A9(); // WF4A9
}


// ================================================
// 0xf4f9: WORD 'WF4FB' codep=0x224c wordp=0xf4fb
// ================================================

void WF4FB() // WF4FB
{
  if (Pop() != 0)
  {
    WEF73(); // WEF73
    return;
  }
  WF19B(); // WF19B
}


// ================================================
// 0xf509: WORD 'DO-DAMA' codep=0x224c wordp=0xf515
// ================================================
// entry

void DO_dash_DAMA() // DO-DAMA
{
  if (Pop() != 0)
  {
    WF4EB(); // WF4EB
    return;
  }
  WF4FB(); // WF4FB
}


// ================================================
// 0xf523: WORD 'DOBLAST' codep=0x224c wordp=0xf52f
// ================================================
// entry

void DOBLAST() // DOBLAST
{
  if (Pop() != 0)
  {
    DO_dash_ADAM(); // DO-ADAM
    return;
  }
  LoadData(WE776); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0);
  _eq_SPECIE(); // =SPECIE
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    WEE67(); // WEE67
    return;
  }
  Pop(); // DROP
}

// 0xf553: db 0x44 0x41 0x4d 0x41 0x47 0x45 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'DAMAGE-______ '

