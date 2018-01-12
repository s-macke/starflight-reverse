// ====== OVERLAY 'DAMAGE-OV' ======
// store offset = 0xe6c0
// overlay size   = 0x0ea0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe6d6  codep:0x224c parp:0xe6d6 size:0x0008 C-string:'UNK_0xe6d6'
//      UNK_0xe6e0  codep:0x224c parp:0xe6e0 size:0x0044 C-string:'UNK_0xe6e0'
//      UNK_0xe726  codep:0x224c parp:0xe726 size:0x0006 C-string:'UNK_0xe726'
//      UNK_0xe72e  codep:0x224c parp:0xe72e size:0x000a C-string:'UNK_0xe72e'
//      UNK_0xe73a  codep:0x224c parp:0xe73a size:0x000a C-string:'UNK_0xe73a'
//      UNK_0xe746  codep:0x224c parp:0xe746 size:0x0006 C-string:'UNK_0xe746'
//      UNK_0xe74e  codep:0x224c parp:0xe74e size:0x000a C-string:'UNK_0xe74e'
//      UNK_0xe75a  codep:0x224c parp:0xe75a size:0x0006 C-string:'UNK_0xe75a'
//      UNK_0xe762  codep:0x2214 parp:0xe762 size:0x0002 C-string:'UNK_0xe762'
//      UNK_0xe766  codep:0x7394 parp:0xe766 size:0x0006 C-string:'UNK_0xe766'
//      UNK_0xe76e  codep:0x7394 parp:0xe76e size:0x0006 C-string:'UNK_0xe76e'
//      UNK_0xe776  codep:0x7394 parp:0xe776 size:0x0006 C-string:'UNK_0xe776'
//      UNK_0xe77e  codep:0x7394 parp:0xe77e size:0x0006 C-string:'UNK_0xe77e'
//      UNK_0xe786  codep:0x7394 parp:0xe786 size:0x0006 C-string:'UNK_0xe786'
//      UNK_0xe78e  codep:0x7394 parp:0xe78e size:0x0006 C-string:'UNK_0xe78e'
//      UNK_0xe796  codep:0x7420 parp:0xe796 size:0x0003 C-string:'UNK_0xe796'
//      UNK_0xe79b  codep:0x7420 parp:0xe79b size:0x0003 C-string:'UNK_0xe79b'
//      UNK_0xe7a0  codep:0x7420 parp:0xe7a0 size:0x0003 C-string:'UNK_0xe7a0'
//      UNK_0xe7a5  codep:0x7420 parp:0xe7a5 size:0x0003 C-string:'UNK_0xe7a5'
//      UNK_0xe7aa  codep:0x7420 parp:0xe7aa size:0x0003 C-string:'UNK_0xe7aa'
//      UNK_0xe7af  codep:0x7420 parp:0xe7af size:0x0003 C-string:'UNK_0xe7af'
//      UNK_0xe7b4  codep:0x2214 parp:0xe7b4 size:0x0002 C-string:'UNK_0xe7b4'
//      UNK_0xe7b8  codep:0x7420 parp:0xe7b8 size:0x0003 C-string:'UNK_0xe7b8'
//      UNK_0xe7bd  codep:0x7420 parp:0xe7bd size:0x0003 C-string:'UNK_0xe7bd'
//      UNK_0xe7c2  codep:0x7420 parp:0xe7c2 size:0x0021 C-string:'UNK_0xe7c2'
//      UNK_0xe7e5  codep:0x7420 parp:0xe7e5 size:0x0003 C-string:'UNK_0xe7e5'
//      UNK_0xe7ea  codep:0x7420 parp:0xe7ea size:0x0003 C-string:'UNK_0xe7ea'
//      UNK_0xe7ef  codep:0x7420 parp:0xe7ef size:0x0003 C-string:'UNK_0xe7ef'
//      UNK_0xe7f4  codep:0x7420 parp:0xe7f4 size:0x0003 C-string:'UNK_0xe7f4'
//      UNK_0xe7f9  codep:0x7420 parp:0xe7f9 size:0x0003 C-string:'UNK_0xe7f9'
//      UNK_0xe7fe  codep:0x7420 parp:0xe7fe size:0x0003 C-string:'UNK_0xe7fe'
//      UNK_0xe803  codep:0x7420 parp:0xe803 size:0x0003 C-string:'UNK_0xe803'
//      UNK_0xe808  codep:0x7420 parp:0xe808 size:0x0003 C-string:'UNK_0xe808'
//      UNK_0xe80d  codep:0x7420 parp:0xe80d size:0x0003 C-string:'UNK_0xe80d'
//      UNK_0xe812  codep:0x7420 parp:0xe812 size:0x0003 C-string:'UNK_0xe812'
//      UNK_0xe817  codep:0x7420 parp:0xe817 size:0x0003 C-string:'UNK_0xe817'
//      UNK_0xe81c  codep:0x7420 parp:0xe81c size:0x0003 C-string:'UNK_0xe81c'
//      UNK_0xe821  codep:0x7420 parp:0xe821 size:0x0003 C-string:'UNK_0xe821'
//      UNK_0xe826  codep:0x7394 parp:0xe826 size:0x0006 C-string:'UNK_0xe826'
//      UNK_0xe82e  codep:0x7420 parp:0xe82e size:0x0003 C-string:'UNK_0xe82e'
//      UNK_0xe833  codep:0x1d29 parp:0xe833 size:0x0009 C-string:'UNK_0xe833'
//      UNK_0xe83e  codep:0x1d29 parp:0xe83e size:0x0002 C-string:'UNK_0xe83e'
//      UNK_0xe842  codep:0x1d29 parp:0xe842 size:0x0002 C-string:'UNK_0xe842'
//      UNK_0xe846  codep:0x1d29 parp:0xe846 size:0x0004 C-string:'UNK_0xe846'
//      UNK_0xe84c  codep:0x224c parp:0xe84c size:0x000c C-string:'UNK_0xe84c'
//      UNK_0xe85a  codep:0x224c parp:0xe85a size:0x0008 C-string:'UNK_0xe85a'
//      UNK_0xe864  codep:0x224c parp:0xe864 size:0x0018 C-string:'UNK_0xe864'
//      UNK_0xe87e  codep:0x224c parp:0xe87e size:0x0006 C-string:'UNK_0xe87e'
//      UNK_0xe886  codep:0x224c parp:0xe886 size:0x001c C-string:'UNK_0xe886'
//      UNK_0xe8a4  codep:0x224c parp:0xe8a4 size:0x0046 C-string:'UNK_0xe8a4'
//      UNK_0xe8ec  codep:0x224c parp:0xe8ec size:0x0022 C-string:'UNK_0xe8ec'
//      UNK_0xe910  codep:0x224c parp:0xe910 size:0x001e C-string:'UNK_0xe910'
//      UNK_0xe930  codep:0x224c parp:0xe930 size:0x0020 C-string:'UNK_0xe930'
//      UNK_0xe952  codep:0x224c parp:0xe952 size:0x001a C-string:'UNK_0xe952'
//      UNK_0xe96e  codep:0x224c parp:0xe96e size:0x001a C-string:'UNK_0xe96e'
//      UNK_0xe98a  codep:0x224c parp:0xe98a size:0x0018 C-string:'UNK_0xe98a'
//         LDAMAGE  codep:0x1d29 parp:0xe9ae size:0x001a C-string:'LDAMAGE'
//      UNK_0xe9ca  codep:0x224c parp:0xe9ca size:0x0026 C-string:'UNK_0xe9ca'
//      UNK_0xe9f2  codep:0x224c parp:0xe9f2 size:0x000a C-string:'UNK_0xe9f2'
//      UNK_0xe9fe  codep:0x224c parp:0xe9fe size:0x000a C-string:'UNK_0xe9fe'
//         REFRESH  codep:0x224c parp:0xea14 size:0x0006 C-string:'REFRESH'
//      UNK_0xea1c  codep:0x1d29 parp:0xea1c size:0x0002 C-string:'UNK_0xea1c'
//      UNK_0xea20  codep:0x224c parp:0xea20 size:0x000a C-string:'UNK_0xea20'
//      UNK_0xea2c  codep:0x224c parp:0xea2c size:0x001c C-string:'UNK_0xea2c'
//      UNK_0xea4a  codep:0x224c parp:0xea4a size:0x0014 C-string:'UNK_0xea4a'
//         WOUNDED  codep:0x1d29 parp:0xea6a size:0x0006 C-string:'WOUNDED'
//         #WOUNDE  codep:0x1d29 parp:0xea7c size:0x0002 C-string:'_n_WOUNDE'
//      UNK_0xea80  codep:0x224c parp:0xea80 size:0x0010 C-string:'UNK_0xea80'
//      UNK_0xea92  codep:0x224c parp:0xea92 size:0x0040 C-string:'UNK_0xea92'
//      UNK_0xead4  codep:0x224c parp:0xead4 size:0x000c C-string:'UNK_0xead4'
//      UNK_0xeae2  codep:0x224c parp:0xeae2 size:0x0010 C-string:'UNK_0xeae2'
//      UNK_0xeaf4  codep:0x224c parp:0xeaf4 size:0x0021 C-string:'UNK_0xeaf4'
//      UNK_0xeb17  codep:0x224c parp:0xeb17 size:0x001d C-string:'UNK_0xeb17'
//      UNK_0xeb36  codep:0x224c parp:0xeb36 size:0x001d C-string:'UNK_0xeb36'
//      UNK_0xeb55  codep:0x224c parp:0xeb55 size:0x0028 C-string:'UNK_0xeb55'
//      UNK_0xeb7f  codep:0x224c parp:0xeb7f size:0x0027 C-string:'UNK_0xeb7f'
//      UNK_0xeba8  codep:0x224c parp:0xeba8 size:0x0010 C-string:'UNK_0xeba8'
//         ENGINE-  codep:0xeb87 parp:0xebc4 size:0x0004 C-string:'ENGINE_dash_'
//         SENSOR-  codep:0xeb87 parp:0xebd4 size:0x0004 C-string:'SENSOR_dash_'
//         COMM-CH  codep:0xeb87 parp:0xebe4 size:0x0004 C-string:'COMM_dash_CH'
//         MISS-CH  codep:0xeb87 parp:0xebf4 size:0x0004 C-string:'MISS_dash_CH'
//         LASER-C  codep:0xeb87 parp:0xec04 size:0x0004 C-string:'LASER_dash_C'
//         SHIELD-  codep:0xeb87 parp:0xec14 size:0x0004 C-string:'SHIELD_dash_'
//      UNK_0xec1a  codep:0x224c parp:0xec1a size:0x000a C-string:'UNK_0xec1a'
//         #>?FIEL  codep:0x4b3b parp:0xec30 size:0x0024 C-string:'_n__gt__ask_FIEL'
//      UNK_0xec56  codep:0x224c parp:0xec56 size:0x0038 C-string:'UNK_0xec56'
//      UNK_0xec90  codep:0x224c parp:0xec90 size:0x0036 C-string:'UNK_0xec90'
//      UNK_0xecc8  codep:0x224c parp:0xecc8 size:0x009e C-string:'UNK_0xecc8'
//      UNK_0xed68  codep:0x224c parp:0xed68 size:0x0051 C-string:'UNK_0xed68'
//      UNK_0xedbb  codep:0x1d29 parp:0xedbb size:0x0007 C-string:'UNK_0xedbb'
//      UNK_0xedc4  codep:0x224c parp:0xedc4 size:0x004b C-string:'UNK_0xedc4'
//      UNK_0xee11  codep:0x224c parp:0xee11 size:0x0054 C-string:'UNK_0xee11'
//      UNK_0xee67  codep:0x224c parp:0xee67 size:0x006c C-string:'UNK_0xee67'
//      UNK_0xeed5  codep:0x224c parp:0xeed5 size:0x0048 C-string:'UNK_0xeed5'
//      UNK_0xef1f  codep:0x224c parp:0xef1f size:0x0052 C-string:'UNK_0xef1f'
//      UNK_0xef73  codep:0x224c parp:0xef73 size:0x0056 C-string:'UNK_0xef73'
//         MDAMAGE  codep:0x1d29 parp:0xefd5 size:0x001a C-string:'MDAMAGE'
//      UNK_0xeff1  codep:0x224c parp:0xeff1 size:0x000c C-string:'UNK_0xeff1'
//      UNK_0xefff  codep:0x224c parp:0xefff size:0x0012 C-string:'UNK_0xefff'
//      UNK_0xf013  codep:0x224c parp:0xf013 size:0x0028 C-string:'UNK_0xf013'
//      UNK_0xf03d  codep:0x224c parp:0xf03d size:0x0010 C-string:'UNK_0xf03d'
//      UNK_0xf04f  codep:0x224c parp:0xf04f size:0x0008 C-string:'UNK_0xf04f'
//      UNK_0xf059  codep:0x224c parp:0xf059 size:0x003a C-string:'UNK_0xf059'
//      UNK_0xf095  codep:0x224c parp:0xf095 size:0x0008 C-string:'UNK_0xf095'
//      UNK_0xf09f  codep:0x224c parp:0xf09f size:0x0008 C-string:'UNK_0xf09f'
//      UNK_0xf0a9  codep:0x224c parp:0xf0a9 size:0x0008 C-string:'UNK_0xf0a9'
//      UNK_0xf0b3  codep:0x224c parp:0xf0b3 size:0x0016 C-string:'UNK_0xf0b3'
//      UNK_0xf0cb  codep:0x224c parp:0xf0cb size:0x0008 C-string:'UNK_0xf0cb'
//         #>DAMAG  codep:0x4b3b parp:0xf0df size:0x0024 C-string:'_n__gt_DAMAG'
//      UNK_0xf105  codep:0x224c parp:0xf105 size:0x001e C-string:'UNK_0xf105'
//      UNK_0xf125  codep:0x224c parp:0xf125 size:0x0020 C-string:'UNK_0xf125'
//         DO-ADAM  codep:0x224c parp:0xf151 size:0x0048 C-string:'DO_dash_ADAM'
//      UNK_0xf19b  codep:0x224c parp:0xf19b size:0x000c C-string:'UNK_0xf19b'
//      UNK_0xf1a9  codep:0x224c parp:0xf1a9 size:0x000a C-string:'UNK_0xf1a9'
//      UNK_0xf1b5  codep:0x224c parp:0xf1b5 size:0x0046 C-string:'UNK_0xf1b5'
//      UNK_0xf1fd  codep:0x224c parp:0xf1fd size:0x0012 C-string:'UNK_0xf1fd'
//      UNK_0xf211  codep:0x224c parp:0xf211 size:0x001e C-string:'UNK_0xf211'
//      UNK_0xf231  codep:0x224c parp:0xf231 size:0x0015 C-string:'UNK_0xf231'
//          #>DISP  codep:0x4b3b parp:0xf251 size:0x000c C-string:'_n__gt_DISP'
//      UNK_0xf25f  codep:0x224c parp:0xf25f size:0x0022 C-string:'UNK_0xf25f'
//      UNK_0xf283  codep:0x224c parp:0xf283 size:0x0064 C-string:'UNK_0xf283'
//            CDAM  codep:0x224c parp:0xf2f0 size:0x0024 C-string:'CDAM'
//      UNK_0xf316  codep:0x224c parp:0xf316 size:0x0018 C-string:'UNK_0xf316'
//      UNK_0xf330  codep:0x224c parp:0xf330 size:0x0006 C-string:'UNK_0xf330'
//      UNK_0xf338  codep:0x224c parp:0xf338 size:0x0006 C-string:'UNK_0xf338'
//      UNK_0xf340  codep:0x224c parp:0xf340 size:0x001a C-string:'UNK_0xf340'
//      UNK_0xf35c  codep:0x224c parp:0xf35c size:0x001f C-string:'UNK_0xf35c'
//      UNK_0xf37d  codep:0x224c parp:0xf37d size:0x0016 C-string:'UNK_0xf37d'
//             .EX  codep:0x4b3b parp:0xf39b size:0x000c C-string:'DrawEX'
//      UNK_0xf3a9  codep:0x224c parp:0xf3a9 size:0x008c C-string:'UNK_0xf3a9'
//      UNK_0xf437  codep:0x224c parp:0xf437 size:0x0070 C-string:'UNK_0xf437'
//      UNK_0xf4a9  codep:0x224c parp:0xf4a9 size:0x0040 C-string:'UNK_0xf4a9'
//      UNK_0xf4eb  codep:0x224c parp:0xf4eb size:0x000e C-string:'UNK_0xf4eb'
//      UNK_0xf4fb  codep:0x224c parp:0xf4fb size:0x000e C-string:'UNK_0xf4fb'
//         DO-DAMA  codep:0x224c parp:0xf515 size:0x000e C-string:'DO_dash_DAMA'
//         DOBLAST  codep:0x224c parp:0xf52f size:0x0000 C-string:'DOBLAST'

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
const unsigned short int pp_UNK_0xe833 = 0xe833; // UNK_0xe833 size: 9
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20}

const unsigned short int pp_UNK_0xe83e = 0xe83e; // UNK_0xe83e size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xe842 = 0xe842; // UNK_0xe842 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe846 = 0xe846; // UNK_0xe846 size: 4
// {0x56, 0x3a, 0x20, 0x16}

const unsigned short int pp_LDAMAGE = 0xe9ae; // LDAMAGE size: 26
// {0x00, 0x00, 0x5a, 0x00, 0xd2, 0x00, 0x68, 0x01, 0xfe, 0x01, 0x94, 0x02, 0xbc, 0x02, 0xbc, 0x02, 0xbc, 0x02, 0xbc, 0x02, 0xe8, 0x03, 0x4c, 0x04, 0xb0, 0x04}

const unsigned short int pp_UNK_0xea1c = 0xea1c; // UNK_0xea1c size: 2
// {0x3a, 0x20}

const unsigned short int pp_WOUNDED = 0xea6a; // WOUNDED size: 6
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54}

const unsigned short int pp__n_WOUNDE = 0xea7c; // #WOUNDE size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xedbb = 0xedbb; // UNK_0xedbb size: 7
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f}

const unsigned short int pp_MDAMAGE = 0xefd5; // MDAMAGE size: 26
// {0x00, 0x00, 0xc8, 0x00, 0x90, 0x01, 0xbc, 0x02, 0xe8, 0x03, 0xdc, 0x05, 0xa0, 0x0f, 0xf4, 0x01, 0x58, 0x02, 0xbc, 0x02, 0xd0, 0x07, 0x84, 0x03, 0xe8, 0x03}


const unsigned short int cc_UNK_0xe762 = 0xe762; // UNK_0xe762
const unsigned short int cc_UNK_0xe7b4 = 0xe7b4; // UNK_0xe7b4


// 0xe6d2: db 0xea 0x00 '  '

// ================================================
// 0xe6d4: WORD 'UNK_0xe6d6' codep=0x224c parp=0xe6d6 params=3 returns=1
// ================================================

void UNK_0xe6d6() // UNK_0xe6d6
{
  Push(Pop() + 1); //  1+
  WITHIN(); // WITHIN
  Push(!Pop()); //  NOT
}


// ================================================
// 0xe6de: WORD 'UNK_0xe6e0' codep=0x224c parp=0xe6e0 params=0 returns=1
// ================================================

void UNK_0xe6e0() // UNK_0xe6e0
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
// 0xe724: WORD 'UNK_0xe726' codep=0x224c parp=0xe726 params=1 returns=1
// ================================================

void UNK_0xe726() // UNK_0xe726
{
  Push((Pop()==0?1:0)==0?1:0); //  0= 0=
}


// ================================================
// 0xe72c: WORD 'UNK_0xe72e' codep=0x224c parp=0xe72e params=0 returns=1
// ================================================

void UNK_0xe72e() // UNK_0xe72e
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xe738: WORD 'UNK_0xe73a' codep=0x224c parp=0xe73a params=0 returns=2
// ================================================

void UNK_0xe73a() // UNK_0xe73a
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
}


// ================================================
// 0xe744: WORD 'UNK_0xe746' codep=0x224c parp=0xe746 orphan
// ================================================

void UNK_0xe746() // UNK_0xe746
{
  GetIX(); // @IX
  GetIY(); // @IY
}


// ================================================
// 0xe74c: WORD 'UNK_0xe74e' codep=0x224c parp=0xe74e params=0 returns=2
// ================================================

void UNK_0xe74e() // UNK_0xe74e
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xe758: WORD 'UNK_0xe75a' codep=0x224c parp=0xe75a params=0 returns=0
// ================================================

void UNK_0xe75a() // UNK_0xe75a
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe760: WORD 'UNK_0xe762' codep=0x2214 parp=0xe762 orphan
// ================================================
// 0xe762: dw 0x0019

// ================================================
// 0xe764: WORD 'UNK_0xe766' codep=0x7394 parp=0xe766 orphan
// ================================================
LoadDataType UNK_0xe766 = {VESSELIDX, 0x05, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xe76c: WORD 'UNK_0xe76e' codep=0x7394 parp=0xe76e orphan
// ================================================
LoadDataType UNK_0xe76e = {VESSELIDX, 0x0c, 0x04, 0x24, 0x6b5d};

// ================================================
// 0xe774: WORD 'UNK_0xe776' codep=0x7394 parp=0xe776
// ================================================
LoadDataType UNK_0xe776 = {VESSELIDX, 0x10, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xe77c: WORD 'UNK_0xe77e' codep=0x7394 parp=0xe77e orphan
// ================================================
LoadDataType UNK_0xe77e = {VESSELIDX, 0x12, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xe784: WORD 'UNK_0xe786' codep=0x7394 parp=0xe786 orphan
// ================================================
LoadDataType UNK_0xe786 = {VESSELIDX, 0x13, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xe78c: WORD 'UNK_0xe78e' codep=0x7394 parp=0xe78e
// ================================================
LoadDataType UNK_0xe78e = {VESSELIDX, 0x15, 0x07, 0x24, 0x6b5d};

// ================================================
// 0xe794: WORD 'UNK_0xe796' codep=0x7420 parp=0xe796
// ================================================
IFieldType UNK_0xe796 = {VESSELIDX, 0x0c, 0x01};

// ================================================
// 0xe799: WORD 'UNK_0xe79b' codep=0x7420 parp=0xe79b
// ================================================
IFieldType UNK_0xe79b = {VESSELIDX, 0x12, 0x02};

// ================================================
// 0xe79e: WORD 'UNK_0xe7a0' codep=0x7420 parp=0xe7a0
// ================================================
IFieldType UNK_0xe7a0 = {VESSELIDX, 0x14, 0x02};

// ================================================
// 0xe7a3: WORD 'UNK_0xe7a5' codep=0x7420 parp=0xe7a5
// ================================================
IFieldType UNK_0xe7a5 = {VESSELIDX, 0x0b, 0x01};

// ================================================
// 0xe7a8: WORD 'UNK_0xe7aa' codep=0x7420 parp=0xe7aa
// ================================================
IFieldType UNK_0xe7aa = {VESSELIDX, 0x12, 0x07};

// ================================================
// 0xe7ad: WORD 'UNK_0xe7af' codep=0x7420 parp=0xe7af
// ================================================
IFieldType UNK_0xe7af = {ORIGINATORIDX, 0x0d, 0x01};

// ================================================
// 0xe7b2: WORD 'UNK_0xe7b4' codep=0x2214 parp=0xe7b4 orphan
// ================================================
// 0xe7b4: dw 0x0014

// ================================================
// 0xe7b6: WORD 'UNK_0xe7b8' codep=0x7420 parp=0xe7b8 orphan
// ================================================
IFieldType UNK_0xe7b8 = {SHIPIDX, 0x11, 0x01};

// ================================================
// 0xe7bb: WORD 'UNK_0xe7bd' codep=0x7420 parp=0xe7bd orphan
// ================================================
IFieldType UNK_0xe7bd = {SHIPIDX, 0x12, 0x01};

// ================================================
// 0xe7c0: WORD 'UNK_0xe7c2' codep=0x7420 parp=0xe7c2 orphan
// ================================================
IFieldType UNK_0xe7c2 = {SHIPIDX, 0x13, 0x01};
// 0xe7c5: db 0x20 0x74 0x14 0x14 0x01 0x20 0x74 0x14 0x15 0x01 0x20 0x74 0x14 0x16 0x01 0x20 0x74 0x14 0x17 0x01 0x20 0x74 0x14 0x18 0x01 0x20 0x74 0x14 0x19 0x01 ' t    t    t    t    t    t   '

// ================================================
// 0xe7e3: WORD 'UNK_0xe7e5' codep=0x7420 parp=0xe7e5
// ================================================
IFieldType UNK_0xe7e5 = {SHIPIDX, 0x1a, 0x01};

// ================================================
// 0xe7e8: WORD 'UNK_0xe7ea' codep=0x7420 parp=0xe7ea orphan
// ================================================
IFieldType UNK_0xe7ea = {SHIPIDX, 0x1b, 0x01};

// ================================================
// 0xe7ed: WORD 'UNK_0xe7ef' codep=0x7420 parp=0xe7ef orphan
// ================================================
IFieldType UNK_0xe7ef = {SHIPIDX, 0x1c, 0x01};

// ================================================
// 0xe7f2: WORD 'UNK_0xe7f4' codep=0x7420 parp=0xe7f4 orphan
// ================================================
IFieldType UNK_0xe7f4 = {SHIPIDX, 0x1d, 0x01};

// ================================================
// 0xe7f7: WORD 'UNK_0xe7f9' codep=0x7420 parp=0xe7f9 orphan
// ================================================
IFieldType UNK_0xe7f9 = {SHIPIDX, 0x1e, 0x01};

// ================================================
// 0xe7fc: WORD 'UNK_0xe7fe' codep=0x7420 parp=0xe7fe
// ================================================
IFieldType UNK_0xe7fe = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xe801: WORD 'UNK_0xe803' codep=0x7420 parp=0xe803 orphan
// ================================================
IFieldType UNK_0xe803 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xe806: WORD 'UNK_0xe808' codep=0x7420 parp=0xe808
// ================================================
IFieldType UNK_0xe808 = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xe80b: WORD 'UNK_0xe80d' codep=0x7420 parp=0xe80d orphan
// ================================================
IFieldType UNK_0xe80d = {SHIPIDX, 0x49, 0x01};

// ================================================
// 0xe810: WORD 'UNK_0xe812' codep=0x7420 parp=0xe812
// ================================================
IFieldType UNK_0xe812 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xe815: WORD 'UNK_0xe817' codep=0x7420 parp=0xe817
// ================================================
IFieldType UNK_0xe817 = {ENCOUNTERIDX, 0x14, 0x01};

// ================================================
// 0xe81a: WORD 'UNK_0xe81c' codep=0x7420 parp=0xe81c
// ================================================
IFieldType UNK_0xe81c = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xe81f: WORD 'UNK_0xe821' codep=0x7420 parp=0xe821
// ================================================
IFieldType UNK_0xe821 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xe824: WORD 'UNK_0xe826' codep=0x7394 parp=0xe826
// ================================================
LoadDataType UNK_0xe826 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xe82c: WORD 'UNK_0xe82e' codep=0x7420 parp=0xe82e
// ================================================
IFieldType UNK_0xe82e = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xe831: WORD 'UNK_0xe833' codep=0x1d29 parp=0xe833
// ================================================
// 0xe833: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 ':  ALLOT '

// ================================================
// 0xe83c: WORD 'UNK_0xe83e' codep=0x1d29 parp=0xe83e
// ================================================
// 0xe83e: db 0x00 0x00 '  '

// ================================================
// 0xe840: WORD 'UNK_0xe842' codep=0x1d29 parp=0xe842
// ================================================
// 0xe842: db 0x3a 0x20 ': '

// ================================================
// 0xe844: WORD 'UNK_0xe846' codep=0x1d29 parp=0xe846
// ================================================
// 0xe846: db 0x56 0x3a 0x20 0x16 'V:  '

// ================================================
// 0xe84a: WORD 'UNK_0xe84c' codep=0x224c parp=0xe84c params=0 returns=1
// ================================================

void UNK_0xe84c() // UNK_0xe84c
{
  Push((Read16(pp_UNK_0xe842)&0xFF) & 0x000f); // UNK_0xe842 C@ 0x000f AND
}


// ================================================
// 0xe858: WORD 'UNK_0xe85a' codep=0x224c parp=0xe85a params=1 returns=1
// ================================================

void UNK_0xe85a() // UNK_0xe85a
{
  Push((Read16(Pop())&0xFF) & 7); //  C@ 7 AND
}


// ================================================
// 0xe862: WORD 'UNK_0xe864' codep=0x224c parp=0xe864 orphan params=0 returns=1
// ================================================

void UNK_0xe864() // UNK_0xe864
{
  Push((Read16(0x65e1+UNK_0xe803.offset)&0xFF) & 8); // UNK_0xe803<IFIELD> C@ 8 AND
  UNK_0xe726(); // UNK_0xe726
  Push(Pop() & !(Read16(pp_NLR)==-1?1:0)); //  NLR @ -1 = NOT AND
}


// ================================================
// 0xe87c: WORD 'UNK_0xe87e' codep=0x224c parp=0xe87e params=0 returns=2
// ================================================

void UNK_0xe87e() // UNK_0xe87e
{
  Push(pp_UNK_0xe846); // UNK_0xe846
  _2_at_(); // 2@
}


// ================================================
// 0xe884: WORD 'UNK_0xe886' codep=0x224c parp=0xe886
// ================================================

void UNK_0xe886() // UNK_0xe886
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
// 0xe8a2: WORD 'UNK_0xe8a4' codep=0x224c parp=0xe8a4
// ================================================

void UNK_0xe8a4() // UNK_0xe8a4
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
    Push(0x65e1+UNK_0xe7a0.offset); // UNK_0xe7a0<IFIELD>
    Is(); // ?
    Push(0x65e1+UNK_0xe79b.offset); // UNK_0xe79b<IFIELD>
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
// 0xe8ea: WORD 'UNK_0xe8ec' codep=0x224c parp=0xe8ec
// ================================================

void UNK_0xe8ec() // UNK_0xe8ec
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
// 0xe90e: WORD 'UNK_0xe910' codep=0x224c parp=0xe910 params=0 returns=0
// ================================================

void UNK_0xe910() // UNK_0xe910
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  Get_gt_C_plus_S(); // @>C+S
  Push(-1);
  Push(pp__n_VESS); // #VESS
  _plus__ex__2(); // +!_2
  Push(1);
  Push(0x65e1+UNK_0xe817.offset); // UNK_0xe817<IFIELD>
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe92e: WORD 'UNK_0xe930' codep=0x224c parp=0xe930 params=0 returns=1
// ================================================

void UNK_0xe930() // UNK_0xe930
{
  Push(Read16(0x65e1+UNK_0xe7fe.offset)); // UNK_0xe7fe<IFIELD> @
  UNK_0xe726(); // UNK_0xe726
  Push(Pop() & Read16(pp_IsSUP)); //  ?SUP @ AND
  Push(!Read16(pp_IsNEB)); // ?NEB @ NOT
  Push(0x65e1+UNK_0xe7e5.offset); // UNK_0xe7e5<IFIELD>
  UNK_0xe85a(); // UNK_0xe85a
  Push(Pop()==7?1:0); //  7 =
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe950: WORD 'UNK_0xe952' codep=0x224c parp=0xe952 params=0 returns=1
// ================================================

void UNK_0xe952() // UNK_0xe952
{
  Push(Read16(pp__n_AUX)==1?1:0); // #AUX @ 1 =
  if (Pop() != 0)
  {
    Push(0xc0a1); // probable 'OV/STX'
    return;
  }
  Push(0xc090); // probable 'OV/STA'
}


// ================================================
// 0xe96c: WORD 'UNK_0xe96e' codep=0x224c parp=0xe96e params=0 returns=1
// ================================================

void UNK_0xe96e() // UNK_0xe96e
{
  Push(Read16(pp__n_AUX)==3?1:0); // #AUX @ 3 =
  if (Pop() != 0)
  {
    Push(0xbcb8); // probable 'OVDBA'
    return;
  }
  Push(0xbc98); // probable 'OV/DA'
}


// ================================================
// 0xe988: WORD 'UNK_0xe98a' codep=0x224c parp=0xe98a params=0 returns=1
// ================================================

void UNK_0xe98a() // UNK_0xe98a
{
  Push(Read16(0x65e1+UNK_0xe808.offset)); // UNK_0xe808<IFIELD> @
  UNK_0xe726(); // UNK_0xe726
  UNK_0xe930(); // UNK_0xe930
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    UNK_0xe952(); // UNK_0xe952
    return;
  }
  UNK_0xe96e(); // UNK_0xe96e
}


// ================================================
// 0xe9a2: WORD 'LDAMAGE' codep=0x1d29 parp=0xe9ae
// ================================================
// 0xe9ae: db 0x00 0x00 0x5a 0x00 0xd2 0x00 0x68 0x01 0xfe 0x01 0x94 0x02 0xbc 0x02 0xbc 0x02 0xbc 0x02 0xbc 0x02 0xe8 0x03 0x4c 0x04 0xb0 0x04 '  Z   h               L   '

// ================================================
// 0xe9c8: WORD 'UNK_0xe9ca' codep=0x224c parp=0xe9ca
// ================================================

void UNK_0xe9ca() // UNK_0xe9ca
{
  unsigned short int a;
  a = Pop(); // >R
  UNK_0xe73a(); // UNK_0xe73a
  UNK_0xe886(); // UNK_0xe886
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
// 0xe9f0: WORD 'UNK_0xe9f2' codep=0x224c parp=0xe9f2
// ================================================

void UNK_0xe9f2() // UNK_0xe9f2
{
  UNK_0xe74e(); // UNK_0xe74e
  Push(0xe77e); // probable 'UNK_0xe77e'
  UNK_0xe9ca(); // UNK_0xe9ca
}


// ================================================
// 0xe9fc: WORD 'UNK_0xe9fe' codep=0x224c parp=0xe9fe
// ================================================

void UNK_0xe9fe() // UNK_0xe9fe
{
  _2DUP(); // 2DUP
  Push(0xe7f9); // probable 'UNK_0xe7f9'
  UNK_0xe9ca(); // UNK_0xe9ca
}


// ================================================
// 0xea08: WORD 'REFRESH' codep=0x224c parp=0xea14 params=0 returns=0
// ================================================
// entry

void REFRESH() // REFRESH
{
  UNK_0xe98a(); // UNK_0xe98a
  MODULE(); // MODULE
}


// ================================================
// 0xea1a: WORD 'UNK_0xea1c' codep=0x1d29 parp=0xea1c
// ================================================
// 0xea1c: db 0x3a 0x20 ': '

// ================================================
// 0xea1e: WORD 'UNK_0xea20' codep=0x224c parp=0xea20 params=0 returns=1
// ================================================

void UNK_0xea20() // UNK_0xea20
{
  UNK_0xe72e(); // UNK_0xe72e
  Push(0x0046);
  _st_(); // <
}


// ================================================
// 0xea2a: WORD 'UNK_0xea2c' codep=0x224c parp=0xea2c
// ================================================

void UNK_0xea2c() // UNK_0xea2c
{
  Push(1);
  Push(Read16(pp_UNK_0xea1c) + 1); // UNK_0xea1c @ 1+
  RRND(); // RRND
  LoadData(UNK_0xe826); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  _slash_(); // /
  Push(0x000a);
  _slash_(); // /
  Push(5);
  MAX(); // MAX
}


// ================================================
// 0xea48: WORD 'UNK_0xea4a' codep=0x224c parp=0xea4a params=0 returns=0
// ================================================

void UNK_0xea4a() // UNK_0xea4a
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
// 0xea5e: WORD 'WOUNDED' codep=0x1d29 parp=0xea6a
// ================================================
// 0xea6a: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 ' ALLOT'

// ================================================
// 0xea70: WORD '#WOUNDE' codep=0x1d29 parp=0xea7c
// ================================================
// entry
// 0xea7c: db 0x00 0x00 '  '

// ================================================
// 0xea7e: WORD 'UNK_0xea80' codep=0x224c parp=0xea80 params=0 returns=0
// ================================================

void UNK_0xea80() // UNK_0xea80
{
  Push(pp_WOUNDED); // WOUNDED
  Push(6);
  Push(0x00ff);
  FILL_2(); // FILL_2
  Push(pp__n_WOUNDE); // #WOUNDE
  _099(); // 099
}


// ================================================
// 0xea90: WORD 'UNK_0xea92' codep=0x224c parp=0xea92 params=1 returns=1
// ================================================

void UNK_0xea92() // UNK_0xea92
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
// 0xead2: WORD 'UNK_0xead4' codep=0x224c parp=0xead4 params=0 returns=1
// ================================================

void UNK_0xead4() // UNK_0xead4
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+UNK_0xe7af.offset)&0xFF); // UNK_0xe7af<IFIELD> C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeae0: WORD 'UNK_0xeae2' codep=0x224c parp=0xeae2
// ================================================

void UNK_0xeae2() // UNK_0xeae2
{
  GetColor(YELLOW);
  Push(0x4fa9); // probable 'BLACK'
  Store_2(); // !_2
  CTERASE(); // CTERASE
  Push(0);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xeaf2: WORD 'UNK_0xeaf4' codep=0x224c parp=0xeaf4
// ================================================

void UNK_0xeaf4() // UNK_0xeaf4
{
  SET_STR_AS_PARAM("**  GAME  OVER  **");
  DrawTTY(); // .TTY
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  BYE_2(); // BYE_2
}


// ================================================
// 0xeb15: WORD 'UNK_0xeb17' codep=0x224c parp=0xeb17
// ================================================

void UNK_0xeb17() // UNK_0xeb17
{
  UNK_0xeae2(); // UNK_0xeae2
  SET_STR_AS_PARAM("!!HULL DESTROYED!!");
  DrawTTY(); // .TTY
  UNK_0xeaf4(); // UNK_0xeaf4
}


// ================================================
// 0xeb34: WORD 'UNK_0xeb36' codep=0x224c parp=0xeb36
// ================================================

void UNK_0xeb36() // UNK_0xeb36
{
  UNK_0xeae2(); // UNK_0xeae2
  SET_STR_AS_PARAM("!!CREW  DECEASED!!");
  DrawTTY(); // .TTY
  UNK_0xeaf4(); // UNK_0xeaf4
}


// ================================================
// 0xeb53: WORD 'UNK_0xeb55' codep=0x224c parp=0xeb55 params=0 returns=0
// ================================================

void UNK_0xeb55() // UNK_0xeb55
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
    Push(0x65e1+UNK_0xe81c.offset); // UNK_0xe81c<IFIELD>
    C_ex__2(); // C!_2
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb7d: WORD 'UNK_0xeb7f' codep=0x224c parp=0xeb7f orphan
// ================================================

void UNK_0xeb7f() // UNK_0xeb7f
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
  UNK_0xe726(); // UNK_0xe726
  a = Pop(); // >R
  IFLD_at_(); // IFLD@
  Push(Pop() & 0x007f); //  0x007f AND
  UNK_0xe726(); // UNK_0xe726
  Push(Pop() & a); //  R> AND
}


// ================================================
// 0xeba6: WORD 'UNK_0xeba8' codep=0x224c parp=0xeba8 params=0 returns=1
// ================================================

void UNK_0xeba8() // UNK_0xeba8
{
  Push(0xe7b8); // probable 'UNK_0xe7b8'
  Push((Read16(Pop())&0xFF) & 0x007f); //  C@ 0x007f AND
  UNK_0xe726(); // UNK_0xe726
}


// ================================================
// 0xebb8: WORD 'ENGINE-' codep=0xeb87 parp=0xebc4
// ================================================
// 0xebc4: db 0xc7 0xe7 0xc2 0xe7 '    '

// ================================================
// 0xebc8: WORD 'SENSOR-' codep=0xeb87 parp=0xebd4
// ================================================
// 0xebd4: db 0xd1 0xe7 0xcc 0xe7 '    '

// ================================================
// 0xebd8: WORD 'COMM-CH' codep=0xeb87 parp=0xebe4
// ================================================
// 0xebe4: db 0xdb 0xe7 0xd6 0xe7 '    '

// ================================================
// 0xebe8: WORD 'MISS-CH' codep=0xeb87 parp=0xebf4
// ================================================
// 0xebf4: db 0xef 0xe7 0xea 0xe7 '    '

// ================================================
// 0xebf8: WORD 'LASER-C' codep=0xeb87 parp=0xec04
// ================================================
// 0xec04: db 0xf9 0xe7 0xf4 0xe7 '    '

// ================================================
// 0xec08: WORD 'SHIELD-' codep=0xeb87 parp=0xec14
// ================================================
// 0xec14: db 0xe5 0xe7 0xe0 0xe7 '    '

// ================================================
// 0xec18: WORD 'UNK_0xec1a' codep=0x224c parp=0xec1a params=0 returns=1
// ================================================

void UNK_0xec1a() // UNK_0xec1a
{
  Push(pp_ROSTER); // ROSTER
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  UNK_0xe726(); // UNK_0xe726
}


// ================================================
// 0xec24: WORD '#>?FIEL' codep=0x4b3b parp=0xec30
// ================================================

void _n__gt__ask_FIEL() // #>?FIEL
{
  switch(Pop()) // #>?FIEL
  {
  case 1:
    UNK_0xeba8(); // UNK_0xeba8
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
    UNK_0xec1a(); // UNK_0xec1a
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // 0=
    break;

  }
}

// ================================================
// 0xec54: WORD 'UNK_0xec56' codep=0x224c parp=0xec56
// ================================================

void UNK_0xec56() // UNK_0xec56
{
  unsigned short int i, imax;
  Push(pp_UNK_0xe833); // UNK_0xe833
  Push(9);
  Push(0);
  FILL_2(); // FILL_2
  Push(pp_UNK_0xe83e); // UNK_0xe83e
  _099(); // 099
  Push(0);
  Push(9);
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    _n__gt__ask_FIEL(); // #>?FIEL case
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(i); // I
      Push(Read16(pp_UNK_0xe83e) + pp_UNK_0xe833); // UNK_0xe83e @ UNK_0xe833 +
      _st_C_ex__gt_(); // <C!>
      Push(1);
      Push(pp_UNK_0xe83e); // UNK_0xe83e
      _st__plus__ex__gt_(); // <+!>
    }
    Push(Pop() | Pop()); // OR
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xec8e: WORD 'UNK_0xec90' codep=0x224c parp=0xec90
// ================================================

void UNK_0xec90() // UNK_0xec90
{
  UNK_0xec56(); // UNK_0xec56
  if (Pop() == 0) return;
  do
  {
    Push(0);
    Push(Read16(pp_UNK_0xe83e)); // UNK_0xe83e @
    RRND(); // RRND
    Push(Read16(Pop() + pp_UNK_0xe833)&0xFF); //  UNK_0xe833 + C@
    Push(Read16(pp_IsCOMBAT)); // ?COMBAT @
    UNK_0xe726(); // UNK_0xe726
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
// 0xecc6: WORD 'UNK_0xecc8' codep=0x224c parp=0xecc8 params=0 returns=0
// ================================================

void UNK_0xecc8() // UNK_0xecc8
{
  unsigned short int a;
  Push(Read16(0x65e1+UNK_0xe821.offset)&0xFF); // UNK_0xe821<IFIELD> C@
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
// 0xed66: WORD 'UNK_0xed68' codep=0x224c parp=0xed68 params=0 returns=0
// ================================================

void UNK_0xed68() // UNK_0xed68
{
  unsigned short int i, imax;
  Push(Read16(pp__n_WOUNDE)); // #WOUNDE @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    Push(0);

    i = Pop();
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
        Push(0x65e1+UNK_0xe82e.offset); // UNK_0xe82e<IFIELD>
        COUNT(); // COUNT
        _dash_TRAILING(); // -TRAILING
        DrawTTY(); // .TTY
        PRINT(" IS ", 4); // (.")
        UNK_0xecc8(); // UNK_0xecc8
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
// 0xedb9: WORD 'UNK_0xedbb' codep=0x1d29 parp=0xedbb
// ================================================
// 0xedbb: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f ':  ALLO'

// ================================================
// 0xedc2: WORD 'UNK_0xedc4' codep=0x224c parp=0xedc4
// ================================================

void UNK_0xedc4() // UNK_0xedc4
{
  Push(0x002b);
  StoreID(); // !ID
  Push(8);
  Push(0x65e1+UNK_0xe7a5.offset); // UNK_0xe7a5<IFIELD>
  C_ex__2(); // C!_2
  CTINIT(); // CTINIT
  _gt_DISPLA(); // >DISPLA
  SET_STR_AS_PARAM("ALIEN SHIP DESTROYED");
  DrawTTY(); // .TTY
  Push(0);
  Push(0x65e1+UNK_0xe796.offset); // UNK_0xe796<IFIELD>
  C_ex__2(); // C!_2
  UNK_0xea4a(); // UNK_0xea4a
  UNK_0xeb55(); // UNK_0xeb55
  LoadData(UNK_0xe78e); // from 'VESSEL'
  Push(pp_UNK_0xedbb); // UNK_0xedbb
  Push(7);
  CMOVE_2(); // CMOVE_2
  Push(0);
  StoreINST_dash_S(); // !INST-S
  Push(pp_UNK_0xedbb); // UNK_0xedbb
  Push(0x65e1+UNK_0xe7aa.offset); // UNK_0xe7aa<IFIELD>
  Push(7);
  CMOVE_2(); // CMOVE_2
  UNK_0xe910(); // UNK_0xe910
}


// ================================================
// 0xee0f: WORD 'UNK_0xee11' codep=0x224c parp=0xee11
// ================================================

void UNK_0xee11() // UNK_0xee11
{
  unsigned short int i, imax;
  Push(pp_UNK_0xea1c); // UNK_0xea1c
  _st__ex__gt_(); // <!>
  UNK_0xea80(); // UNK_0xea80
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
      UNK_0xea20(); // UNK_0xea20
      if (Pop() != 0)
      {
        _gt_C_plus_S(); // >C+S
        UNK_0xea2c(); // UNK_0xea2c
        Push(0xe821); // probable 'UNK_0xe821'
        UNK_0xe8a4(); // UNK_0xe8a4
        ICLOSE(); // ICLOSE
        Push(i - pp_ROSTER); // I ROSTER -
        Push(3);
        _slash_(); // /
        UNK_0xea92(); // UNK_0xea92
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
// 0xee65: WORD 'UNK_0xee67' codep=0x224c parp=0xee67
// ================================================

void UNK_0xee67() // UNK_0xee67
{
  unsigned short int a;
  Push((Read16(0x65e1+UNK_0xe7a0.offset)==0?1:0) | !Read16(cc_IsA_dash_SHIE)); // UNK_0xe7a0<IFIELD> @ 0= ?A-SHIE NOT OR
  UNK_0xe6e0(); // UNK_0xe6e0
  Push(Pop() | Pop()); // OR
  Push(Pop() | (Read16(pp_NLR)==1?1:0)); //  NLR @ 1 = OR
  if (Pop() != 0)
  {
    Push(0xe79b); // probable 'UNK_0xe79b'
    UNK_0xe8a4(); // UNK_0xe8a4
  } else
  {
    Push(Read16(0x65e1+UNK_0xe7a0.offset)); // UNK_0xe7a0<IFIELD> @
    OVER(); // OVER
    _dash_(); // -
    a = Pop(); // >R
    Push(0xe7a0); // probable 'UNK_0xe7a0'
    UNK_0xe8a4(); // UNK_0xe8a4
    Push(a); // R>
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      ABS(); // ABS
      Push(0xe79b); // probable 'UNK_0xe79b'
      UNK_0xe8a4(); // UNK_0xe8a4
    } else
    {
      Pop(); // DROP
    }
  }
  UNK_0xead4(); // UNK_0xead4
  if (Pop() != 0)
  {
    Push(0xbfc8); // probable 'DA-STR'
    MODULE(); // MODULE
  }
  Push(Read16(0x65e1+UNK_0xe79b.offset)); // UNK_0xe79b<IFIELD> @
  _0_gt_(); // 0>
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  UNK_0xedc4(); // UNK_0xedc4
}


// ================================================
// 0xeed3: WORD 'UNK_0xeed5' codep=0x224c parp=0xeed5 params=0 returns=0
// ================================================

void UNK_0xeed5() // UNK_0xeed5
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
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(i + 0x03e8); // I 0x03e8 +
    RRND(); // RRND
    TONE(); // TONE
    Push(5 * Read16(cc_MPS)); // 5 MPS *
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
// 0xef1d: WORD 'UNK_0xef1f' codep=0x224c parp=0xef1f params=1 returns=0
// ================================================

void UNK_0xef1f() // UNK_0xef1f
{
  unsigned short int i, imax;
  Push(0);
  _eq_SPECIE(); // =SPECIE
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x0014?1:0); //  0x0014 =
  Push(Pop() | Pop()); // OR
  Push(!Pop()); //  NOT
  OVER(); // OVER
  UNK_0xe726(); // UNK_0xe726
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
      Push(0);

      i = Pop();
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
    UNK_0xee67(); // UNK_0xee67
  } else
  {
    Pop(); // DROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef71: WORD 'UNK_0xef73' codep=0x224c parp=0xef73
// ================================================

void UNK_0xef73() // UNK_0xef73
{
  unsigned short int a, i, imax;
  UNK_0xe9fe(); // UNK_0xe9fe
  a = Pop(); // >R
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash__2(); // ?ICONS-_2
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(a)); // R@
    SWAP(); // SWAP
    Push(0);

    i = Pop();
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
        LoadData(UNK_0xe776); // from 'VESSEL'
        Push((Read16(Pop() + 1)&0xFF)==0?1:0); //  1+ C@ 0=
        if (Pop() != 0)
        {
          Pop(); // DROP
          Push(0);
        }
        UNK_0xef1f(); // UNK_0xef1f
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
// 0xefc9: WORD 'MDAMAGE' codep=0x1d29 parp=0xefd5
// ================================================
// 0xefd5: db 0x00 0x00 0xc8 0x00 0x90 0x01 0xbc 0x02 0xe8 0x03 0xdc 0x05 0xa0 0x0f 0xf4 0x01 0x58 0x02 0xbc 0x02 0xd0 0x07 0x84 0x03 0xe8 0x03 '                X         '

// ================================================
// 0xefef: WORD 'UNK_0xeff1' codep=0x224c parp=0xeff1 params=0 returns=1
// ================================================

void UNK_0xeff1() // UNK_0xeff1
{
  UNK_0xe84c(); // UNK_0xe84c
  Push(Read16(Pop() * 2 + pp_MDAMAGE)); //  2* MDAMAGE + @
}


// ================================================
// 0xeffd: WORD 'UNK_0xefff' codep=0x224c parp=0xefff params=1 returns=0
// ================================================

void UNK_0xefff() // UNK_0xefff
{
  Push(Read16(0x65e1+UNK_0xe7fe.offset)); // UNK_0xe7fe<IFIELD> @
  SWAP(); // SWAP
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(0x65e1+UNK_0xe7fe.offset); // UNK_0xe7fe<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf011: WORD 'UNK_0xf013' codep=0x224c parp=0xf013 params=1 returns=0
// ================================================

void UNK_0xf013() // UNK_0xf013
{
  Push(Read16(0x65e1+UNK_0xe808.offset)); // UNK_0xe808<IFIELD> @
  SWAP(); // SWAP
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(0x65e1+UNK_0xe808.offset); // UNK_0xe808<IFIELD>
  Store_2(); // !_2
  Push(Read16(0x65e1+UNK_0xe808.offset)==0?1:0); // UNK_0xe808<IFIELD> @ 0=
  if (Pop() == 0) return;
  Push(0xbc98); // probable 'OV/DA'
  MODULE(); // MODULE
  Push(3);
  Push(pp__n_AUX); // #AUX
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf03b: WORD 'UNK_0xf03d' codep=0x224c parp=0xf03d orphan params=0 returns=0
// ================================================

void UNK_0xf03d() // UNK_0xf03d
{
  Push((Read16(0x65e1+UNK_0xe803.offset)&0xFF) & 0x00f7); // UNK_0xe803<IFIELD> C@ 0x00f7 AND
  Push(0x65e1+UNK_0xe803.offset); // UNK_0xe803<IFIELD>
  C_ex__2(); // C!_2
}


// ================================================
// 0xf04d: WORD 'UNK_0xf04f' codep=0x224c parp=0xf04f
// ================================================

void UNK_0xf04f() // UNK_0xf04f
{
  Push(0xe7b8); // probable 'UNK_0xe7b8'
  UNK_0xe8ec(); // UNK_0xe8ec
}


// ================================================
// 0xf057: WORD 'UNK_0xf059' codep=0x224c parp=0xf059
// ================================================

void UNK_0xf059() // UNK_0xf059
{
  Push(0xe7c2); // probable 'UNK_0xe7c2'
  UNK_0xe8ec(); // UNK_0xe8ec
  ENGINE_dash_(); // ENGINE-
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(Read16(pp_IsAUTO)==0?1:0); // ?AUTO @ 0=
  if (Pop() != 0)
  {
    Push(5);
    Push(0xb77c); // probable 'OV?.EQ'
    MODULE(); // MODULE
    Pop(); // DROP
  }
  Push(0xe7c7);
  IFLD_at_(); // IFLD@
  Push(Pop() | 0x0080); //  0x0080 OR
  Push(0xe7c7);
  IFLD_ex_(); // IFLD!
  Push(pp_IsAUTO); // ?AUTO
  ON_2(); // ON_2
}


// ================================================
// 0xf093: WORD 'UNK_0xf095' codep=0x224c parp=0xf095
// ================================================

void UNK_0xf095() // UNK_0xf095
{
  Push(0xe7cc);
  UNK_0xe8ec(); // UNK_0xe8ec
}


// ================================================
// 0xf09d: WORD 'UNK_0xf09f' codep=0x224c parp=0xf09f
// ================================================

void UNK_0xf09f() // UNK_0xf09f
{
  Push(0xe7d6);
  UNK_0xe8ec(); // UNK_0xe8ec
}


// ================================================
// 0xf0a7: WORD 'UNK_0xf0a9' codep=0x224c parp=0xf0a9
// ================================================

void UNK_0xf0a9() // UNK_0xf0a9
{
  Push(0xe7ea); // probable 'UNK_0xe7ea'
  UNK_0xe8ec(); // UNK_0xe8ec
}


// ================================================
// 0xf0b1: WORD 'UNK_0xf0b3' codep=0x224c parp=0xf0b3
// ================================================

void UNK_0xf0b3() // UNK_0xf0b3
{
  Push(0xe7e0);
  UNK_0xe8ec(); // UNK_0xe8ec
  SHIELD_dash_(); // SHIELD-
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(0xc636); // probable 'OV-SH'
  MODULE(); // MODULE
}


// ================================================
// 0xf0c9: WORD 'UNK_0xf0cb' codep=0x224c parp=0xf0cb
// ================================================

void UNK_0xf0cb() // UNK_0xf0cb
{
  Push(0xe7f4); // probable 'UNK_0xe7f4'
  UNK_0xe8ec(); // UNK_0xe8ec
}


// ================================================
// 0xf0d3: WORD '#>DAMAG' codep=0x4b3b parp=0xf0df
// ================================================

void _n__gt_DAMAG() // #>DAMAG
{
  switch(Pop()) // #>DAMAG
  {
  case 1:
    UNK_0xf04f(); // UNK_0xf04f
    break;
  case 2:
    UNK_0xf059(); // UNK_0xf059
    break;
  case 3:
    UNK_0xf095(); // UNK_0xf095
    break;
  case 4:
    UNK_0xf09f(); // UNK_0xf09f
    break;
  case 5:
    UNK_0xf0a9(); // UNK_0xf0a9
    break;
  case 6:
    UNK_0xf0cb(); // UNK_0xf0cb
    break;
  case 7:
    UNK_0xf0b3(); // UNK_0xf0b3
    break;
  case 8:
    UNK_0xee11(); // UNK_0xee11
    break;
  default:
    Pop(); // DROP
    break;

  }
}

// ================================================
// 0xf103: WORD 'UNK_0xf105' codep=0x224c parp=0xf105 params=1 returns=2
// ================================================

void UNK_0xf105() // UNK_0xf105
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
// 0xf123: WORD 'UNK_0xf125' codep=0x224c parp=0xf125
// ================================================

void UNK_0xf125() // UNK_0xf125
{
  UNK_0xe930(); // UNK_0xe930
  if (Pop() != 0)
  {
    UNK_0xefff(); // UNK_0xefff
    return;
  }
  Push(Read16(0x65e1+UNK_0xe808.offset)); // UNK_0xe808<IFIELD> @
  if (Pop() != 0)
  {
    UNK_0xf013(); // UNK_0xf013
    return;
  }
  UNK_0xec90(); // UNK_0xec90
  _n__gt_DAMAG(); // #>DAMAG case
}


// ================================================
// 0xf145: WORD 'DO-ADAM' codep=0x224c parp=0xf151
// ================================================
// entry

void DO_dash_ADAM() // DO-ADAM
{
  UNK_0xeed5(); // UNK_0xeed5
  UNK_0xea80(); // UNK_0xea80

  label2:
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(!(Pop()==0?1:0)); //  0= NOT
  if (Pop() == 0) goto label1;
  UNK_0xf105(); // UNK_0xf105
  UNK_0xf125(); // UNK_0xf125
  goto label2;

  label1:
  Push(Read16(pp__n_WOUNDE)); // #WOUNDE @
  if (Pop() != 0)
  {
    UNK_0xed68(); // UNK_0xed68
    Push(0xc18b); // probable '(OBI'
    MODULE(); // MODULE
    Push(0xc1b8); // probable '(ROL'
    MODULE(); // MODULE
  }
  REFRESH(); // REFRESH
  Push(0xe7b8); // probable 'UNK_0xe7b8'
  IFLD_at_(); // IFLD@
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    UNK_0xeb17(); // UNK_0xeb17
  }
  UNK_0xec1a(); // UNK_0xec1a
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  UNK_0xeb36(); // UNK_0xeb36
}


// ================================================
// 0xf199: WORD 'UNK_0xf19b' codep=0x224c parp=0xf19b
// ================================================

void UNK_0xf19b() // UNK_0xf19b
{
  UNK_0xe9f2(); // UNK_0xe9f2
  Push(Pop() * 2); //  2*
  UNK_0xe75a(); // UNK_0xe75a
  DO_dash_ADAM(); // DO-ADAM
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1a7: WORD 'UNK_0xf1a9' codep=0x224c parp=0xf1a9 params=3 returns=0
// ================================================

void UNK_0xf1a9() // UNK_0xf1a9
{
  Push(pp_UNK_0xe842); // UNK_0xe842
  C_ex__2(); // C!_2
  Push(pp_UNK_0xe846); // UNK_0xe846
  StoreD(); // D!
}


// ================================================
// 0xf1b3: WORD 'UNK_0xf1b5' codep=0x224c parp=0xf1b5 params=1 returns=0
// ================================================

void UNK_0xf1b5() // UNK_0xf1b5
{
  unsigned short int i, imax;
  UNK_0xe84c(); // UNK_0xe84c
  Push(!(Pop()==7?1:0)); //  7 = NOT
  if (Pop() != 0)
  {
    _gt_MAINVI(); // >MAINVI
    StoreCOLOR(); // !COLOR
    UNK_0xe87e(); // UNK_0xe87e
    WLD_gt_SCR(); // WLD>SCR
    SCR_gt_BLT(); // SCR>BLT
    SWAP(); // SWAP
    Push(Pop() + 3); //  3 +
    SWAP(); // SWAP
    Push(Pop() - 3); //  3 -
    Push(Read16(pp_XWLD_c_XP)); // XWLD:XP @
    Push(6);
    MIN(); // MIN
    Push(2);

    i = Pop();
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
// 0xf1fb: WORD 'UNK_0xf1fd' codep=0x224c parp=0xf1fd
// ================================================

void UNK_0xf1fd() // UNK_0xf1fd
{
  SET_STR_AS_PARAM("PLASMA BOLT");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf20f: WORD 'UNK_0xf211' codep=0x224c parp=0xf211 params=0 returns=0
// ================================================

void UNK_0xf211() // UNK_0xf211
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
// 0xf22f: WORD 'UNK_0xf231' codep=0x224c parp=0xf231
// ================================================

void UNK_0xf231() // UNK_0xf231
{
  SET_STR_AS_PARAM("MISSILE CLASS ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf246: WORD '#>DISP' codep=0x4b3b parp=0xf251
// ================================================

void _n__gt_DISP() // #>DISP
{
  switch(Pop()) // #>DISP
  {
  case 6:
    UNK_0xf1fd(); // UNK_0xf1fd
    break;
  case 7:
    UNK_0xf211(); // UNK_0xf211
    break;
  default:
    UNK_0xf231(); // UNK_0xf231
    break;

  }
}

// ================================================
// 0xf25d: WORD 'UNK_0xf25f' codep=0x224c parp=0xf25f
// ================================================

void UNK_0xf25f() // UNK_0xf25f
{
  UNK_0xf1b5(); // UNK_0xf1b5
  CTINIT(); // CTINIT
  _gt_DISPLA(); // >DISPLA
  UNK_0xe84c(); // UNK_0xe84c
  Push(Read16(regsp)); // DUP
  _n__gt_DISP(); // #>DISP case
  Push(Read16(regsp)); // DUP
  Push(6);
  Push(7);
  UNK_0xe6d6(); // UNK_0xe6d6
  if (Pop() != 0)
  {
    Draw(); // .
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf281: WORD 'UNK_0xf283' codep=0x224c parp=0xf283
// ================================================

void UNK_0xf283() // UNK_0xf283
{
  unsigned short int a, i, imax;
  UNK_0xf1a9(); // UNK_0xf1a9
  UNK_0xe75a(); // UNK_0xe75a
  GetColor(LT_dash_BLUE);
  UNK_0xf1b5(); // UNK_0xf1b5
  UNK_0xe87e(); // UNK_0xe87e
  UNK_0xeff1(); // UNK_0xeff1
  a = Pop(); // >R
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash__2(); // ?ICONS-_2
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(a)); // R@
    SWAP(); // SWAP
    Push(0);

    i = Pop();
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
        LoadData(UNK_0xe776); // from 'VESSEL'
        Push(Read16(Pop())&0xFF); //  C@
        if (Pop() != 0)
        {
          UNK_0xef1f(); // UNK_0xef1f
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
// 0xf2e7: WORD 'CDAM' codep=0x224c parp=0xf2f0
// ================================================
// entry

void CDAM() // CDAM
{
  UNK_0xee11(); // UNK_0xee11
  Push(Read16(pp__n_WOUNDE)); // #WOUNDE @
  if (Pop() != 0)
  {
    UNK_0xed68(); // UNK_0xed68
    Push(0xc18b); // probable '(OBI'
    MODULE(); // MODULE
    Push(0xc1b8); // probable '(ROL'
    MODULE(); // MODULE
  }
  UNK_0xec1a(); // UNK_0xec1a
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  UNK_0xeb36(); // UNK_0xeb36
}


// ================================================
// 0xf314: WORD 'UNK_0xf316' codep=0x224c parp=0xf316 params=6 returns=1
// ================================================

void UNK_0xf316() // UNK_0xf316
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
// 0xf32e: WORD 'UNK_0xf330' codep=0x224c parp=0xf330
// ================================================

void UNK_0xf330() // UNK_0xf330
{
  StoreCOLOR(); // !COLOR
  BEEP(); // BEEP
}


// ================================================
// 0xf336: WORD 'UNK_0xf338' codep=0x224c parp=0xf338
// ================================================

void UNK_0xf338() // UNK_0xf338
{
  DrawTTY(); // .TTY
  DrawSORD(); // .SORD
}


// ================================================
// 0xf33e: WORD 'UNK_0xf340' codep=0x224c parp=0xf340
// ================================================

void UNK_0xf340() // UNK_0xf340
{
  GetColor(YELLOW);
  UNK_0xf330(); // UNK_0xf330
  PRINT("FUEL SUPPLY LOW", 15); // (.")
  UNK_0xf338(); // UNK_0xf338
}


// ================================================
// 0xf35a: WORD 'UNK_0xf35c' codep=0x224c parp=0xf35c
// ================================================

void UNK_0xf35c() // UNK_0xf35c
{
  GetColor(PINK);
  UNK_0xf330(); // UNK_0xf330
  SET_STR_AS_PARAM("FUEL SUPPLY CRITICAL");
  UNK_0xf338(); // UNK_0xf338
}


// ================================================
// 0xf37b: WORD 'UNK_0xf37d' codep=0x224c parp=0xf37d
// ================================================

void UNK_0xf37d() // UNK_0xf37d
{
  GetColor(RED);
  UNK_0xf330(); // UNK_0xf330
  SET_STR_AS_PARAM("OUT OF FUEL");
  UNK_0xf338(); // UNK_0xf338
}


// ================================================
// 0xf393: WORD '.EX' codep=0x4b3b parp=0xf39b
// ================================================

void DrawEX() // .EX
{
  switch(Pop()) // .EX
  {
  case 2:
    UNK_0xf35c(); // UNK_0xf35c
    break;
  case 3:
    UNK_0xf340(); // UNK_0xf340
    break;
  default:
    UNK_0xf37d(); // UNK_0xf37d
    break;

  }
}

// ================================================
// 0xf3a7: WORD 'UNK_0xf3a9' codep=0x224c parp=0xf3a9 params=0 returns=0
// ================================================

void UNK_0xf3a9() // UNK_0xf3a9
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
  UNK_0xf316(); // UNK_0xf316
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
  UNK_0xf316(); // UNK_0xf316
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
// 0xf435: WORD 'UNK_0xf437' codep=0x224c parp=0xf437 params=1 returns=0
// ================================================

void UNK_0xf437() // UNK_0xf437
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
    UNK_0xf3a9(); // UNK_0xf3a9
    Push(pp__dash_END); // -END
    Store_2(); // !_2
    Push2Words("*SHIP");
    _gt_C_plus_S(); // >C+S
    Push(0x000a);
    Push(0x65e1+UNK_0xe812.offset); // UNK_0xe812<IFIELD>
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
// 0xf4a7: WORD 'UNK_0xf4a9' codep=0x224c parp=0xf4a9
// ================================================

void UNK_0xf4a9() // UNK_0xf4a9
{
  UNK_0xf1a9(); // UNK_0xf1a9
  GetColor(RED);
  UNK_0xf25f(); // UNK_0xf25f
  UNK_0xe84c(); // UNK_0xe84c
  Push(Pop()==7?1:0); //  7 =
  if (Pop() != 0)
  {
    Push(0x0064);
    UNK_0xf437(); // UNK_0xf437
    Push(!(Read16(pp__n_AUX)==1?1:0)); // #AUX @ 1 = NOT
    if (Pop() != 0)
    {
      Push(0xc090); // probable 'OV/STA'
    } else
    {
      Push(0xc0a1); // probable 'OV/STX'
    }
    MODULE(); // MODULE
    return;
  }
  UNK_0xeff1(); // UNK_0xeff1
  UNK_0xe75a(); // UNK_0xe75a
  DO_dash_ADAM(); // DO-ADAM
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4e9: WORD 'UNK_0xf4eb' codep=0x224c parp=0xf4eb
// ================================================

void UNK_0xf4eb() // UNK_0xf4eb
{
  if (Pop() != 0)
  {
    UNK_0xf283(); // UNK_0xf283
    return;
  }
  UNK_0xf4a9(); // UNK_0xf4a9
}


// ================================================
// 0xf4f9: WORD 'UNK_0xf4fb' codep=0x224c parp=0xf4fb
// ================================================

void UNK_0xf4fb() // UNK_0xf4fb
{
  if (Pop() != 0)
  {
    UNK_0xef73(); // UNK_0xef73
    return;
  }
  UNK_0xf19b(); // UNK_0xf19b
}


// ================================================
// 0xf509: WORD 'DO-DAMA' codep=0x224c parp=0xf515
// ================================================
// entry

void DO_dash_DAMA() // DO-DAMA
{
  if (Pop() != 0)
  {
    UNK_0xf4eb(); // UNK_0xf4eb
    return;
  }
  UNK_0xf4fb(); // UNK_0xf4fb
}


// ================================================
// 0xf523: WORD 'DOBLAST' codep=0x224c parp=0xf52f
// ================================================
// entry

void DOBLAST() // DOBLAST
{
  if (Pop() != 0)
  {
    DO_dash_ADAM(); // DO-ADAM
    return;
  }
  LoadData(UNK_0xe776); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0);
  _eq_SPECIE(); // =SPECIE
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    UNK_0xee67(); // UNK_0xee67
    return;
  }
  Pop(); // DROP
}

// 0xf553: db 0x44 0x41 0x4d 0x41 0x47 0x45 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'DAMAGE-______ '

