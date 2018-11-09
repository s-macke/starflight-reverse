// ====== OVERLAY 'DAMAGE-OV' ======
// store offset = 0xeaa0
// overlay size   = 0x0ac0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//            'OVS  codep:0x1d29 wordp:0xeabd size:0x0002 C-string:'_i_OVS'
//           WEAC1  codep:0x224c wordp:0xeac1 size:0x0006 C-string:'WEAC1'
//           WEAC9  codep:0x224c wordp:0xeac9 size:0x000a C-string:'WEAC9'
//           WEAD5  codep:0x224c wordp:0xead5 size:0x000a C-string:'WEAD5'
//           WEAE1  codep:0x224c wordp:0xeae1 size:0x0006 C-string:'WEAE1'
//           WEAE9  codep:0x224c wordp:0xeae9 size:0x000a C-string:'WEAE9'
//           WEAF5  codep:0x224c wordp:0xeaf5 size:0x0006 C-string:'WEAF5'
//           WEAFD  codep:0x2214 wordp:0xeafd size:0x0002 C-string:'WEAFD'
//           WEB01  codep:0x73ea wordp:0xeb01 size:0x0006 C-string:'WEB01'
//           WEB09  codep:0x73ea wordp:0xeb09 size:0x0006 C-string:'WEB09'
//           WEB11  codep:0x73ea wordp:0xeb11 size:0x0006 C-string:'WEB11'
//           WEB19  codep:0x73ea wordp:0xeb19 size:0x0006 C-string:'WEB19'
//           WEB21  codep:0x73ea wordp:0xeb21 size:0x0006 C-string:'WEB21'
//           WEB29  codep:0x73ea wordp:0xeb29 size:0x0006 C-string:'WEB29'
//           WEB31  codep:0x744d wordp:0xeb31 size:0x0003 C-string:'WEB31'
//           WEB36  codep:0x744d wordp:0xeb36 size:0x0003 C-string:'WEB36'
//           WEB3B  codep:0x744d wordp:0xeb3b size:0x0003 C-string:'WEB3B'
//           WEB40  codep:0x744d wordp:0xeb40 size:0x0003 C-string:'WEB40'
//           WEB45  codep:0x744d wordp:0xeb45 size:0x0003 C-string:'WEB45'
//           WEB4A  codep:0x744d wordp:0xeb4a size:0x0003 C-string:'WEB4A'
//           WEB4F  codep:0x2214 wordp:0xeb4f size:0x0002 C-string:'WEB4F'
//           WEB53  codep:0x744d wordp:0xeb53 size:0x0003 C-string:'WEB53'
//           WEB58  codep:0x744d wordp:0xeb58 size:0x0003 C-string:'WEB58'
//           WEB5D  codep:0x744d wordp:0xeb5d size:0x0003 C-string:'WEB5D'
//           WEB62  codep:0x744d wordp:0xeb62 size:0x0003 C-string:'WEB62'
//           WEB67  codep:0x744d wordp:0xeb67 size:0x0003 C-string:'WEB67'
//           WEB6C  codep:0x744d wordp:0xeb6c size:0x0003 C-string:'WEB6C'
//           WEB71  codep:0x744d wordp:0xeb71 size:0x0003 C-string:'WEB71'
//           WEB76  codep:0x744d wordp:0xeb76 size:0x0003 C-string:'WEB76'
//           WEB7B  codep:0x744d wordp:0xeb7b size:0x0003 C-string:'WEB7B'
//           WEB80  codep:0x744d wordp:0xeb80 size:0x0003 C-string:'WEB80'
//           WEB85  codep:0x744d wordp:0xeb85 size:0x0003 C-string:'WEB85'
//           WEB8A  codep:0x744d wordp:0xeb8a size:0x0003 C-string:'WEB8A'
//           WEB8F  codep:0x744d wordp:0xeb8f size:0x0003 C-string:'WEB8F'
//           WEB94  codep:0x744d wordp:0xeb94 size:0x0003 C-string:'WEB94'
//           WEB99  codep:0x744d wordp:0xeb99 size:0x0003 C-string:'WEB99'
//           WEB9E  codep:0x744d wordp:0xeb9e size:0x0003 C-string:'WEB9E'
//           WEBA3  codep:0x744d wordp:0xeba3 size:0x0003 C-string:'WEBA3'
//           WEBA8  codep:0x744d wordp:0xeba8 size:0x0003 C-string:'WEBA8'
//           WEBAD  codep:0x744d wordp:0xebad size:0x0003 C-string:'WEBAD'
//           WEBB2  codep:0x744d wordp:0xebb2 size:0x0003 C-string:'WEBB2'
//           WEBB7  codep:0x73ea wordp:0xebb7 size:0x0006 C-string:'WEBB7'
//           WEBBF  codep:0x744d wordp:0xebbf size:0x0003 C-string:'WEBBF'
//            RSRC  codep:0x1d29 wordp:0xebcb size:0x0009 C-string:'RSRC'
//           WEBD6  codep:0x1d29 wordp:0xebd6 size:0x0002 C-string:'WEBD6'
//           WEBDA  codep:0x1d29 wordp:0xebda size:0x0002 C-string:'WEBDA'
//           WEBDE  codep:0x1d29 wordp:0xebde size:0x0004 C-string:'WEBDE'
//           WEBE4  codep:0x224c wordp:0xebe4 size:0x000c C-string:'WEBE4'
//           WEBF2  codep:0x224c wordp:0xebf2 size:0x0008 C-string:'WEBF2'
//           WEBFC  codep:0x224c wordp:0xebfc size:0x000c C-string:'WEBFC'
//           WEC0A  codep:0x224c wordp:0xec0a size:0x0006 C-string:'WEC0A'
//           WEC12  codep:0x224c wordp:0xec12 size:0x001c C-string:'WEC12'
//           WEC30  codep:0x224c wordp:0xec30 size:0x0014 C-string:'WEC30'
//           WEC46  codep:0x224c wordp:0xec46 size:0x0022 C-string:'WEC46'
//           WEC6A  codep:0x224c wordp:0xec6a size:0x001e C-string:'WEC6A'
//           WEC8A  codep:0x224c wordp:0xec8a size:0x0014 C-string:'WEC8A'
//           WECA0  codep:0x224c wordp:0xeca0 size:0x001a C-string:'WECA0'
//           WECBC  codep:0x224c wordp:0xecbc size:0x001a C-string:'WECBC'
//           WECD8  codep:0x224c wordp:0xecd8 size:0x0018 C-string:'WECD8'
//           WECF2  codep:0x224c wordp:0xecf2 size:0x0006 C-string:'WECF2'
//         LDAMAGE  codep:0x1d29 wordp:0xed04 size:0x000c C-string:'LDAMAGE'
//           WED12  codep:0x224c wordp:0xed12 size:0x0022 C-string:'WED12'
//           WED36  codep:0x224c wordp:0xed36 size:0x0016 C-string:'WED36'
//           WED4E  codep:0x224c wordp:0xed4e size:0x000a C-string:'WED4E'
//           WED5A  codep:0x1d29 wordp:0xed5a size:0x0002 C-string:'WED5A'
//           WED5E  codep:0x224c wordp:0xed5e size:0x000a C-string:'WED5E'
//           WED6A  codep:0x224c wordp:0xed6a size:0x001c C-string:'WED6A'
//         WOUNDED  codep:0x1d29 wordp:0xed92 size:0x0006 C-string:'WOUNDED'
//           WED9A  codep:0x1d29 wordp:0xed9a size:0x0002 C-string:'WED9A'
//           WED9E  codep:0x224c wordp:0xed9e size:0x0040 C-string:'WED9E'
//           WEDE0  codep:0x224c wordp:0xede0 size:0x0010 C-string:'WEDE0'
//           WEDF2  codep:0x224c wordp:0xedf2 size:0x0010 C-string:'WEDF2'
//           WEE04  codep:0x224c wordp:0xee04 size:0x0021 C-string:'WEE04'
//           WEE27  codep:0x224c wordp:0xee27 size:0x001d C-string:'WEE27'
//           WEE46  codep:0x224c wordp:0xee46 size:0x001d C-string:'WEE46'
//           WEE65  codep:0x224c wordp:0xee65 size:0x0027 C-string:'WEE65'
//           WEE8E  codep:0x224c wordp:0xee8e size:0x0010 C-string:'WEE8E'
//         ENGINE-  codep:0xee6d wordp:0xeeaa size:0x0004 C-string:'ENGINE_dash_'
//         SENSOR-  codep:0xee6d wordp:0xeeba size:0x0004 C-string:'SENSOR_dash_'
//         COMM-CH  codep:0xee6d wordp:0xeeca size:0x0004 C-string:'COMM_dash_CH'
//         MISS-CH  codep:0xee6d wordp:0xeeda size:0x0004 C-string:'MISS_dash_CH'
//         LASER-C  codep:0xee6d wordp:0xeeea size:0x0004 C-string:'LASER_dash_C'
//         SHIELD-  codep:0xee6d wordp:0xeefa size:0x0004 C-string:'SHIELD_dash_'
//           WEF00  codep:0x224c wordp:0xef00 size:0x000a C-string:'WEF00'
//         #>?FIEL  codep:0x4a4f wordp:0xef16 size:0x0024 C-string:'_n__gt__ask_FIEL'
//           WEF3C  codep:0x224c wordp:0xef3c size:0x0038 C-string:'WEF3C'
//           WEF76  codep:0x224c wordp:0xef76 size:0x0016 C-string:'WEF76'
//           WEF8E  codep:0x224c wordp:0xef8e size:0x009e C-string:'WEF8E'
//           WF02E  codep:0x224c wordp:0xf02e size:0x0051 C-string:'WF02E'
//           WF081  codep:0x1d29 wordp:0xf081 size:0x0007 C-string:'WF081'
//           WF08A  codep:0x224c wordp:0xf08a size:0x0054 C-string:'WF08A'
//           WF0E0  codep:0x224c wordp:0xf0e0 size:0x0054 C-string:'WF0E0'
//           WF136  codep:0x224c wordp:0xf136 size:0x002a C-string:'WF136'
//           WF162  codep:0x224c wordp:0xf162 size:0x0036 C-string:'WF162'
//           WF19A  codep:0x224c wordp:0xf19a size:0x0050 C-string:'WF19A'
//           WF1EC  codep:0x224c wordp:0xf1ec size:0x0032 C-string:'WF1EC'
//         MDAMAGE  codep:0x1d29 wordp:0xf22a size:0x000e C-string:'MDAMAGE'
//           WF23A  codep:0x224c wordp:0xf23a size:0x000c C-string:'WF23A'
//           WF248  codep:0x224c wordp:0xf248 size:0x0020 C-string:'WF248'
//           WF26A  codep:0x224c wordp:0xf26a size:0x0036 C-string:'WF26A'
//           WF2A2  codep:0x224c wordp:0xf2a2 size:0x0008 C-string:'WF2A2'
//           WF2AC  codep:0x224c wordp:0xf2ac size:0x003a C-string:'WF2AC'
//           WF2E8  codep:0x224c wordp:0xf2e8 size:0x0008 C-string:'WF2E8'
//           WF2F2  codep:0x224c wordp:0xf2f2 size:0x0008 C-string:'WF2F2'
//           WF2FC  codep:0x224c wordp:0xf2fc size:0x0008 C-string:'WF2FC'
//           WF306  codep:0x224c wordp:0xf306 size:0x0016 C-string:'WF306'
//           WF31E  codep:0x224c wordp:0xf31e size:0x0008 C-string:'WF31E'
//         #>DAMAG  codep:0x4a4f wordp:0xf332 size:0x0024 C-string:'_n__gt_DAMAG'
//           WF358  codep:0x224c wordp:0xf358 size:0x001e C-string:'WF358'
//           WF378  codep:0x224c wordp:0xf378 size:0x002a C-string:'WF378'
//           WF3A4  codep:0x224c wordp:0xf3a4 size:0x0044 C-string:'WF3A4'
//           WF3EA  codep:0x224c wordp:0xf3ea size:0x000c C-string:'WF3EA'
//           WF3F8  codep:0x224c wordp:0xf3f8 size:0x000a C-string:'WF3F8'
//           WF404  codep:0x224c wordp:0xf404 size:0x0036 C-string:'WF404'
//           WF43C  codep:0x224c wordp:0xf43c size:0x0041 C-string:'WF43C'
//           WF47F  codep:0x224c wordp:0xf47f size:0x0064 C-string:'WF47F'
//           WF4E5  codep:0x224c wordp:0xf4e5 size:0x0010 C-string:'WF4E5'
//           WF4F7  codep:0x224c wordp:0xf4f7 size:0x000e C-string:'WF4F7'
//           WF507  codep:0x224c wordp:0xf507 size:0x000e C-string:'WF507'
//         DO-DAMA  codep:0x224c wordp:0xf521 size:0x0000 C-string:'DO_dash_DAMA'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_IsA_dash_SHIE; // ?A-SHIE
extern const unsigned short int cc_MPS; // MPS
extern const unsigned short int pp_IsSOUND; // ?SOUND
extern const unsigned short int pp_A_dash_STRENGTH; // A-STRENGTH
extern const unsigned short int pp_IsAUTO; // ?AUTO
extern const unsigned short int pp__n_VESS; // #VESS
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_IsHEAL; // ?HEAL
extern const unsigned short int pp_IsROD; // ?ROD
extern const unsigned short int pp_IsNEB; // ?NEB
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_XWLD_c_XPIX; // XWLD:XPIX
extern const unsigned short int pp__ro_ENCOUNTER_rc_; // (ENCOUNTER)
extern const unsigned short int pp_ROSTER; // ROSTER
extern Color RED; // RED
extern Color LT_dash_BLUE; // LT-BLUE
extern Color YELLOW; // YELLOW
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void COUNT(); // COUNT
void _star__slash_(); // */
void MAX(); // MAX
void MIN(); // MIN
void _co_(); // ,
void _dash_TRAILING(); // -TRAILING
void Draw(); // .
void WITHIN(); // WITHIN
void KEY_2(); // KEY_2
void _3_star_(); // 3*
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void CMOVE(); // CMOVE
void FILL_1(); // FILL_1
void StoreINST_dash_SPECIES(); // !INST-SPECIES
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IFLD_at_(); // IFLD@
void IFLD_ex_(); // IFLD!
void StoreCOLOR(); // !COLOR
void VCLIPSET(); // VCLIPSET
void DCLIPSET(); // DCLIPSET
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void BYE(); // BYE
void DrawCIRCLE(); // .CIRCLE
void GetIX(); // @IX
void GetIY(); // @IY
void GetIL(); // @IL
void GetIH(); // @IH
void StoreID(); // !ID
void POINT_gt_ICON(); // POINT>ICON
void IsICONS_dash_AT(); // ?ICONS-AT
void CTERASE(); // CTERASE
void BEEPON(); // BEEPON
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _st_(); // <
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void _1_dot_5_at_(); // 1.5@
void _st_C_ex__gt_(); // <C!>
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void V_gt_DISPLAY(); // V>DISPLAY
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
const unsigned short int pp__i_OVS = 0xeabd; // 'OVS size: 2
// {0x4e, 0xcb}

const unsigned short int pp_RSRC = 0xebcb; // RSRC size: 9
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x41, 0x53}

const unsigned short int pp_WEBD6 = 0xebd6; // WEBD6 size: 2
// {0x00, 0x00}

const unsigned short int pp_WEBDA = 0xebda; // WEBDA size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEBDE = 0xebde; // WEBDE size: 4
// {0x56, 0x3a, 0x20, 0x53}

const unsigned short int pp_LDAMAGE = 0xed04; // LDAMAGE size: 12
// {0x00, 0x00, 0x5a, 0x00, 0xd2, 0x00, 0x68, 0x01, 0xfe, 0x01, 0x94, 0x02}

const unsigned short int pp_WED5A = 0xed5a; // WED5A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WOUNDED = 0xed92; // WOUNDED size: 6
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54}

const unsigned short int pp_WED9A = 0xed9a; // WED9A size: 2
// {0x00, 0x00}

const unsigned short int pp_WF081 = 0xf081; // WF081 size: 7
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f}

const unsigned short int pp_MDAMAGE = 0xf22a; // MDAMAGE size: 14
// {0x00, 0x00, 0xc8, 0x00, 0x90, 0x01, 0xbc, 0x02, 0xe8, 0x03, 0xdc, 0x05, 0xa0, 0x0f}


const unsigned short int cc_WEAFD = 0xeafd; // WEAFD
const unsigned short int cc_WEB4F = 0xeb4f; // WEB4F


// 0xeab2: db 0xa9 0x00 '  '

// ================================================
// 0xeab4: WORD ''OVS' codep=0x1d29 wordp=0xeabd
// ================================================
// 0xeabd: db 0x4e 0xcb 'N '

// ================================================
// 0xeabf: WORD 'WEAC1' codep=0x224c wordp=0xeac1 params=1 returns=1
// ================================================

void WEAC1() // WEAC1
{
  Push((Pop()==0?1:0)==0?1:0); //  0= 0=
}


// ================================================
// 0xeac7: WORD 'WEAC9' codep=0x224c wordp=0xeac9 params=0 returns=1
// ================================================

void WEAC9() // WEAC9
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xead3: WORD 'WEAD5' codep=0x224c wordp=0xead5 params=0 returns=2
// ================================================

void WEAD5() // WEAD5
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
}


// ================================================
// 0xeadf: WORD 'WEAE1' codep=0x224c wordp=0xeae1
// ================================================
// orphan

void WEAE1() // WEAE1
{
  GetIX(); // @IX
  GetIY(); // @IY
}


// ================================================
// 0xeae7: WORD 'WEAE9' codep=0x224c wordp=0xeae9 params=0 returns=2
// ================================================

void WEAE9() // WEAE9
{
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xeaf3: WORD 'WEAF5' codep=0x224c wordp=0xeaf5 params=0 returns=0
// ================================================

void WEAF5() // WEAF5
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xeafb: WORD 'WEAFD' codep=0x2214 wordp=0xeafd
// ================================================
// orphan
// 0xeafd: dw 0x0019

// ================================================
// 0xeaff: WORD 'WEB01' codep=0x73ea wordp=0xeb01
// ================================================
LoadDataType WEB01 = {VESSELIDX, 0x0c, 0x04, 0x49, 0x6491};

// ================================================
// 0xeb07: WORD 'WEB09' codep=0x73ea wordp=0xeb09
// ================================================
LoadDataType WEB09 = {VESSELIDX, 0x05, 0x01, 0x49, 0x6491};

// ================================================
// 0xeb0f: WORD 'WEB11' codep=0x73ea wordp=0xeb11
// ================================================
// orphan
LoadDataType WEB11 = {VESSELIDX, 0x13, 0x01, 0x49, 0x6491};

// ================================================
// 0xeb17: WORD 'WEB19' codep=0x73ea wordp=0xeb19
// ================================================
// orphan
LoadDataType WEB19 = {VESSELIDX, 0x12, 0x01, 0x49, 0x6491};

// ================================================
// 0xeb1f: WORD 'WEB21' codep=0x73ea wordp=0xeb21
// ================================================
LoadDataType WEB21 = {VESSELIDX, 0x15, 0x07, 0x49, 0x6491};

// ================================================
// 0xeb27: WORD 'WEB29' codep=0x73ea wordp=0xeb29
// ================================================
LoadDataType WEB29 = {VESSELIDX, 0x10, 0x01, 0x49, 0x6491};

// ================================================
// 0xeb2f: WORD 'WEB31' codep=0x744d wordp=0xeb31
// ================================================
IFieldType WEB31 = {VESSELIDX, 0x0c, 0x01};

// ================================================
// 0xeb34: WORD 'WEB36' codep=0x744d wordp=0xeb36
// ================================================
// orphan
IFieldType WEB36 = {VESSELIDX, 0x17, 0x04};

// ================================================
// 0xeb39: WORD 'WEB3B' codep=0x744d wordp=0xeb3b
// ================================================
IFieldType WEB3B = {VESSELIDX, 0x12, 0x02};

// ================================================
// 0xeb3e: WORD 'WEB40' codep=0x744d wordp=0xeb40
// ================================================
IFieldType WEB40 = {VESSELIDX, 0x14, 0x02};

// ================================================
// 0xeb43: WORD 'WEB45' codep=0x744d wordp=0xeb45
// ================================================
IFieldType WEB45 = {VESSELIDX, 0x0b, 0x01};

// ================================================
// 0xeb48: WORD 'WEB4A' codep=0x744d wordp=0xeb4a
// ================================================
IFieldType WEB4A = {VESSELIDX, 0x12, 0x07};

// ================================================
// 0xeb4d: WORD 'WEB4F' codep=0x2214 wordp=0xeb4f
// ================================================
// orphan
// 0xeb4f: dw 0x0014

// ================================================
// 0xeb51: WORD 'WEB53' codep=0x744d wordp=0xeb53
// ================================================
IFieldType WEB53 = {SHIPIDX, 0x11, 0x01};

// ================================================
// 0xeb56: WORD 'WEB58' codep=0x744d wordp=0xeb58
// ================================================
IFieldType WEB58 = {SHIPIDX, 0x12, 0x01};

// ================================================
// 0xeb5b: WORD 'WEB5D' codep=0x744d wordp=0xeb5d
// ================================================
// orphan
IFieldType WEB5D = {SHIPIDX, 0x13, 0x01};

// ================================================
// 0xeb60: WORD 'WEB62' codep=0x744d wordp=0xeb62
// ================================================
// orphan
IFieldType WEB62 = {SHIPIDX, 0x14, 0x01};

// ================================================
// 0xeb65: WORD 'WEB67' codep=0x744d wordp=0xeb67
// ================================================
// orphan
IFieldType WEB67 = {SHIPIDX, 0x15, 0x01};

// ================================================
// 0xeb6a: WORD 'WEB6C' codep=0x744d wordp=0xeb6c
// ================================================
// orphan
IFieldType WEB6C = {SHIPIDX, 0x16, 0x01};

// ================================================
// 0xeb6f: WORD 'WEB71' codep=0x744d wordp=0xeb71
// ================================================
// orphan
IFieldType WEB71 = {SHIPIDX, 0x17, 0x01};

// ================================================
// 0xeb74: WORD 'WEB76' codep=0x744d wordp=0xeb76
// ================================================
// orphan
IFieldType WEB76 = {SHIPIDX, 0x18, 0x01};

// ================================================
// 0xeb79: WORD 'WEB7B' codep=0x744d wordp=0xeb7b
// ================================================
// orphan
IFieldType WEB7B = {SHIPIDX, 0x19, 0x01};

// ================================================
// 0xeb7e: WORD 'WEB80' codep=0x744d wordp=0xeb80
// ================================================
IFieldType WEB80 = {SHIPIDX, 0x1a, 0x01};

// ================================================
// 0xeb83: WORD 'WEB85' codep=0x744d wordp=0xeb85
// ================================================
// orphan
IFieldType WEB85 = {SHIPIDX, 0x1b, 0x01};

// ================================================
// 0xeb88: WORD 'WEB8A' codep=0x744d wordp=0xeb8a
// ================================================
// orphan
IFieldType WEB8A = {SHIPIDX, 0x1c, 0x01};

// ================================================
// 0xeb8d: WORD 'WEB8F' codep=0x744d wordp=0xeb8f
// ================================================
// orphan
IFieldType WEB8F = {SHIPIDX, 0x1d, 0x01};

// ================================================
// 0xeb92: WORD 'WEB94' codep=0x744d wordp=0xeb94
// ================================================
// orphan
IFieldType WEB94 = {SHIPIDX, 0x1e, 0x01};

// ================================================
// 0xeb97: WORD 'WEB99' codep=0x744d wordp=0xeb99
// ================================================
IFieldType WEB99 = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xeb9c: WORD 'WEB9E' codep=0x744d wordp=0xeb9e
// ================================================
IFieldType WEB9E = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xeba1: WORD 'WEBA3' codep=0x744d wordp=0xeba3
// ================================================
IFieldType WEBA3 = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xeba6: WORD 'WEBA8' codep=0x744d wordp=0xeba8
// ================================================
// orphan
IFieldType WEBA8 = {SHIPIDX, 0x49, 0x01};

// ================================================
// 0xebab: WORD 'WEBAD' codep=0x744d wordp=0xebad
// ================================================
IFieldType WEBAD = {ENCOUNTERIDX, 0x14, 0x01};

// ================================================
// 0xebb0: WORD 'WEBB2' codep=0x744d wordp=0xebb2
// ================================================
IFieldType WEBB2 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xebb5: WORD 'WEBB7' codep=0x73ea wordp=0xebb7
// ================================================
LoadDataType WEBB7 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6489};

// ================================================
// 0xebbd: WORD 'WEBBF' codep=0x744d wordp=0xebbf
// ================================================
IFieldType WEBBF = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xebc2: WORD 'RSRC' codep=0x1d29 wordp=0xebcb
// ================================================
// 0xebcb: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x41 0x53 ' ALLOT AS'

// ================================================
// 0xebd4: WORD 'WEBD6' codep=0x1d29 wordp=0xebd6
// ================================================
// 0xebd6: db 0x00 0x00 '  '

// ================================================
// 0xebd8: WORD 'WEBDA' codep=0x1d29 wordp=0xebda
// ================================================
// 0xebda: db 0x3a 0x20 ': '

// ================================================
// 0xebdc: WORD 'WEBDE' codep=0x1d29 wordp=0xebde
// ================================================
// 0xebde: db 0x56 0x3a 0x20 0x53 'V: S'

// ================================================
// 0xebe2: WORD 'WEBE4' codep=0x224c wordp=0xebe4 params=0 returns=1
// ================================================
// orphan

void WEBE4() // WEBE4
{
  Push((Read16(pp_WEBDA)&0xFF) & 0x000f); // WEBDA C@ 0x000f AND
}


// ================================================
// 0xebf0: WORD 'WEBF2' codep=0x224c wordp=0xebf2 params=1 returns=1
// ================================================

void WEBF2() // WEBF2
{
  Push((Read16(Pop())&0xFF) & 7); //  C@ 7 AND
}


// ================================================
// 0xebfa: WORD 'WEBFC' codep=0x224c wordp=0xebfc params=0 returns=1
// ================================================

void WEBFC() // WEBFC
{
  Push((Read16(0x63ef+WEB9E.offset)&0xFF) & 8); // WEB9E<IFIELD> C@ 8 AND
  WEAC1(); // WEAC1
}


// ================================================
// 0xec08: WORD 'WEC0A' codep=0x224c wordp=0xec0a params=0 returns=2
// ================================================

void WEC0A() // WEC0A
{
  Push(pp_WEBDE); // WEBDE
  _2_at_(); // 2@
}


// ================================================
// 0xec10: WORD 'WEC12' codep=0x224c wordp=0xec12 params=4 returns=1
// ================================================

void WEC12() // WEC12
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
// 0xec2e: WORD 'WEC30' codep=0x224c wordp=0xec30
// ================================================

void WEC30() // WEC30
{
  unsigned short int a;
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
// 0xec44: WORD 'WEC46' codep=0x224c wordp=0xec46
// ================================================

void WEC46() // WEC46
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
// 0xec68: WORD 'WEC6A' codep=0x224c wordp=0xec6a params=0 returns=0
// ================================================

void WEC6A() // WEC6A
{
  Push(pp__ro_ENCOUNTER_rc_); // (ENCOUNTER)
  Get_gt_C_plus_S(); // @>C+S
  Push(1);
  Push(0x63ef+WEBAD.offset); // WEBAD<IFIELD>
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  Push(-1);
  Push(pp__n_VESS); // #VESS
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xec88: WORD 'WEC8A' codep=0x224c wordp=0xec8a params=0 returns=1
// ================================================

void WEC8A() // WEC8A
{
  Push(Read16(0x63ef+WEB99.offset)); // WEB99<IFIELD> @
  WEAC1(); // WEAC1
  WEBFC(); // WEBFC
  Push(Pop() & Pop()); // AND
  Push(Pop() & (Read16(pp_IsNEB)==0?1:0)); //  ?NEB @ 0= AND
}


// ================================================
// 0xec9e: WORD 'WECA0' codep=0x224c wordp=0xeca0 params=0 returns=1
// ================================================

void WECA0() // WECA0
{
  Push(Read16(pp__n_AUX)==1?1:0); // #AUX @ 1 =
  if (Pop() != 0)
  {
    Push(0xbf05); // 'OV/STXT'
    return;
  }
  Push(0xbef3); // 'OV/STATUS'
}


// ================================================
// 0xecba: WORD 'WECBC' codep=0x224c wordp=0xecbc params=0 returns=1
// ================================================

void WECBC() // WECBC
{
  Push(Read16(pp__n_AUX)==3?1:0); // #AUX @ 3 =
  if (Pop() != 0)
  {
    Push(0xbe4b); // 'OVDBA'
    return;
  }
  Push(0xbe2b); // 'OV/DA'
}


// ================================================
// 0xecd6: WORD 'WECD8' codep=0x224c wordp=0xecd8 params=0 returns=1
// ================================================

void WECD8() // WECD8
{
  Push(Read16(0x63ef+WEBA3.offset)); // WEBA3<IFIELD> @
  WEAC1(); // WEAC1
  WEC8A(); // WEC8A
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    WECA0(); // WECA0
    return;
  }
  WECBC(); // WECBC
}


// ================================================
// 0xecf0: WORD 'WECF2' codep=0x224c wordp=0xecf2 params=0 returns=0
// ================================================

void WECF2() // WECF2
{
  WECD8(); // WECD8
  MODULE(); // MODULE
}


// ================================================
// 0xecf8: WORD 'LDAMAGE' codep=0x1d29 wordp=0xed04
// ================================================
// 0xed04: db 0x00 0x00 0x5a 0x00 0xd2 0x00 0x68 0x01 0xfe 0x01 0x94 0x02 '  Z   h     '

// ================================================
// 0xed10: WORD 'WED12' codep=0x224c wordp=0xed12
// ================================================

void WED12() // WED12
{
  unsigned short int a;
  a = Pop(); // >R
  WEAD5(); // WEAD5
  WEC12(); // WEC12
  Push(0x000a);
  SWAP(); // SWAP
  _dash_(); // -
  Push(a); // R>
  IFLD_at_(); // IFLD@
  Push(Read16(Pop() * 2 + pp_LDAMAGE)); //  2* LDAMAGE + @
  Push(0x000a);
  _star__slash_(); // */
}


// ================================================
// 0xed34: WORD 'WED36' codep=0x224c wordp=0xed36
// ================================================

void WED36() // WED36
{
  WEAE9(); // WEAE9
  Push(0xeb19); // 'WEB19'
  WED12(); // WED12
  Push(Read16(pp_IsROD)); // ?ROD @
  if (Pop() == 0) return;
  Push(4);
  _slash_(); // /
}


// ================================================
// 0xed4c: WORD 'WED4E' codep=0x224c wordp=0xed4e
// ================================================

void WED4E() // WED4E
{
  _2DUP(); // 2DUP
  Push(0xeb94); // 'WEB94'
  WED12(); // WED12
}


// ================================================
// 0xed58: WORD 'WED5A' codep=0x1d29 wordp=0xed5a
// ================================================
// 0xed5a: db 0x3a 0x20 ': '

// ================================================
// 0xed5c: WORD 'WED5E' codep=0x224c wordp=0xed5e params=0 returns=1
// ================================================

void WED5E() // WED5E
{
  WEAC9(); // WEAC9
  Push(0x0046);
  _st_(); // <
}


// ================================================
// 0xed68: WORD 'WED6A' codep=0x224c wordp=0xed6a
// ================================================

void WED6A() // WED6A
{
  Push(1);
  Push(Read16(pp_WED5A) + 1); // WED5A @ 1+
  RRND(); // RRND
  LoadData(WEBB7); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  _slash_(); // /
  Push(0x000a);
  _slash_(); // /
  Push(5);
  MAX(); // MAX
}


// ================================================
// 0xed86: WORD 'WOUNDED' codep=0x1d29 wordp=0xed92
// ================================================
// 0xed92: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 ' ALLOT'

// ================================================
// 0xed98: WORD 'WED9A' codep=0x1d29 wordp=0xed9a
// ================================================
// 0xed9a: db 0x00 0x00 '  '

// ================================================
// 0xed9c: WORD 'WED9E' codep=0x224c wordp=0xed9e params=1 returns=1
// ================================================

void WED9E() // WED9E
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
        C_ex_(); // C!
        Push(1);
        Push(pp_WED9A); // WED9A
        _st__plus__ex__gt_(); // <+!>
        imax = i; // LEAVE
      }
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xedde: WORD 'WEDE0' codep=0x224c wordp=0xede0 params=0 returns=0
// ================================================

void WEDE0() // WEDE0
{
  Push(pp_WOUNDED); // WOUNDED
  Push(6);
  Push(0x00ff);
  FILL_1(); // FILL_1
  Push(pp_WED9A); // WED9A
  OFF(); // OFF
}


// ================================================
// 0xedf0: WORD 'WEDF2' codep=0x224c wordp=0xedf2 params=0 returns=0
// ================================================

void WEDF2() // WEDF2
{
  GetColor(YELLOW);
  Push(0x4f0c); // 'BLACK'
  Store_3(); // !_3
  CTERASE(); // CTERASE
  Push(0);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xee02: WORD 'WEE04' codep=0x224c wordp=0xee04
// ================================================

void WEE04() // WEE04
{
  SET_STR_AS_PARAM("**  GAME  OVER  **");
  DrawTTY(); // .TTY
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  BYE(); // BYE
}


// ================================================
// 0xee25: WORD 'WEE27' codep=0x224c wordp=0xee27
// ================================================

void WEE27() // WEE27
{
  WEDF2(); // WEDF2
  SET_STR_AS_PARAM("!!HULL DESTROYED!!");
  DrawTTY(); // .TTY
  WEE04(); // WEE04
}


// ================================================
// 0xee44: WORD 'WEE46' codep=0x224c wordp=0xee46
// ================================================

void WEE46() // WEE46
{
  WEDF2(); // WEDF2
  SET_STR_AS_PARAM("!!CREW  DECEASED!!");
  DrawTTY(); // .TTY
  WEE04(); // WEE04
}


// ================================================
// 0xee63: WORD 'WEE65' codep=0x224c wordp=0xee65
// ================================================
// orphan

void WEE65() // WEE65
{
  unsigned short int a;
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  _co_(); // ,
  _co_(); // ,
  CODE(); // (;CODE) inlined assembler code
// 0xee6d: call   1649
  _2_at_(); // 2@
  IFLD_at_(); // IFLD@
  Push(Pop() & 7); //  7 AND
  WEAC1(); // WEAC1
  a = Pop(); // >R
  IFLD_at_(); // IFLD@
  Push(Pop() & 0x007f); //  0x007f AND
  WEAC1(); // WEAC1
  Push(Pop() & a); //  R> AND
}


// ================================================
// 0xee8c: WORD 'WEE8E' codep=0x224c wordp=0xee8e params=0 returns=1
// ================================================

void WEE8E() // WEE8E
{
  Push(0xeb53); // 'WEB53'
  Push((Read16(Pop())&0xFF) & 0x007f); //  C@ 0x007f AND
  WEAC1(); // WEAC1
}


// ================================================
// 0xee9e: WORD 'ENGINE-' codep=0xee6d wordp=0xeeaa
// ================================================
// 0xeeaa: db 0x62 0xeb 0x5d 0xeb 'b ] '

// ================================================
// 0xeeae: WORD 'SENSOR-' codep=0xee6d wordp=0xeeba
// ================================================
// 0xeeba: db 0x6c 0xeb 0x67 0xeb 'l g '

// ================================================
// 0xeebe: WORD 'COMM-CH' codep=0xee6d wordp=0xeeca
// ================================================
// 0xeeca: db 0x76 0xeb 0x71 0xeb 'v q '

// ================================================
// 0xeece: WORD 'MISS-CH' codep=0xee6d wordp=0xeeda
// ================================================
// 0xeeda: db 0x8a 0xeb 0x85 0xeb '    '

// ================================================
// 0xeede: WORD 'LASER-C' codep=0xee6d wordp=0xeeea
// ================================================
// 0xeeea: db 0x94 0xeb 0x8f 0xeb '    '

// ================================================
// 0xeeee: WORD 'SHIELD-' codep=0xee6d wordp=0xeefa
// ================================================
// 0xeefa: db 0x80 0xeb 0x7b 0xeb '  { '

// ================================================
// 0xeefe: WORD 'WEF00' codep=0x224c wordp=0xef00 params=0 returns=1
// ================================================

void WEF00() // WEF00
{
  Push(pp_ROSTER); // ROSTER
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  WEAC1(); // WEAC1
}


// ================================================
// 0xef0a: WORD '#>?FIEL' codep=0x4a4f wordp=0xef16
// ================================================

void _n__gt__ask_FIEL() // #>?FIEL
{
  switch(Pop()) // #>?FIEL
  {
  case 1:
    WEE8E(); // WEE8E
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
    WEF00(); // WEF00
    break;
  case 8:
    SHIELD_dash_(); // SHIELD-
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // 0=
    break;

  }
}

// ================================================
// 0xef3a: WORD 'WEF3C' codep=0x224c wordp=0xef3c
// ================================================

void WEF3C() // WEF3C
{
  unsigned short int i, imax;
  Push(pp_RSRC); // RSRC
  Push(9);
  Push(0);
  FILL_1(); // FILL_1
  Push(pp_WEBD6); // WEBD6
  OFF(); // OFF
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
      Push(Read16(pp_WEBD6) + pp_RSRC); // WEBD6 @ RSRC +
      _st_C_ex__gt_(); // <C!>
      Push(1);
      Push(pp_WEBD6); // WEBD6
      _st__plus__ex__gt_(); // <+!>
    }
    Push(Pop() | Pop()); // OR
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xef74: WORD 'WEF76' codep=0x224c wordp=0xef76
// ================================================

void WEF76() // WEF76
{
  WEF3C(); // WEF3C
  if (Pop() == 0) return;
  Push(0);
  Push(Read16(pp_WEBD6)); // WEBD6 @
  RRND(); // RRND
  Push(Read16(Pop() + pp_RSRC)&0xFF); //  RSRC + C@
}


// ================================================
// 0xef8c: WORD 'WEF8E' codep=0x224c wordp=0xef8e params=0 returns=0
// ================================================

void WEF8E() // WEF8E
{
  unsigned short int a;
  Push(Read16(0x63ef+WEBB2.offset)&0xFF); // WEBB2<IFIELD> C@
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
// 0xf02c: WORD 'WF02E' codep=0x224c wordp=0xf02e params=0 returns=0
// ================================================

void WF02E() // WF02E
{
  unsigned short int i, imax;
  Push(Read16(pp_WED9A)); // WED9A @
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
        Push(0x63ef+WEBBF.offset); // WEBBF<IFIELD>
        COUNT(); // COUNT
        _dash_TRAILING(); // -TRAILING
        DrawTTY(); // .TTY
        PRINT(" IS ", 4); // (.")
        WEF8E(); // WEF8E
        ICLOSE(); // ICLOSE
      } else
      {
        Pop(); Pop(); // 2DROP
      }
      i++;
    } while(i<imax); // (LOOP)

    Push(pp_IsHEAL); // ?HEAL
    ON_3(); // ON_3
  }
  Push(pp_WED9A); // WED9A
  OFF(); // OFF
}


// ================================================
// 0xf07f: WORD 'WF081' codep=0x1d29 wordp=0xf081
// ================================================
// 0xf081: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f ':  ALLO'

// ================================================
// 0xf088: WORD 'WF08A' codep=0x224c wordp=0xf08a
// ================================================

void WF08A() // WF08A
{
  Push(0x002b);
  StoreID(); // !ID
  Push(8);
  Push(0x63ef+WEB45.offset); // WEB45<IFIELD>
  C_ex_(); // C!
  CTINIT(); // CTINIT
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
  SET_STR_AS_PARAM("ALIEN SHIP DESTROYED ");
  DrawTTY(); // .TTY
  Push(0);
  Push(0x63ef+WEB31.offset); // WEB31<IFIELD>
  C_ex_(); // C!
  LoadData(WEB21); // from 'VESSEL'
  Push(pp_WF081); // WF081
  Push(7);
  CMOVE(); // CMOVE
  Push(0x0018);
  StoreINST_dash_SPECIES(); // !INST-SPECIES
  SET_dash_CURRENT(); // SET-CURRENT
  Push(pp_WF081); // WF081
  Push(0x63ef+WEB4A.offset); // WEB4A<IFIELD>
  Push(7);
  CMOVE(); // CMOVE
  WEC6A(); // WEC6A
  Push(0xc27d); // 'DA-STR'
  MODULE(); // MODULE
}


// ================================================
// 0xf0de: WORD 'WF0E0' codep=0x224c wordp=0xf0e0
// ================================================

void WF0E0() // WF0E0
{
  unsigned short int i, imax;
  Push(pp_WED5A); // WED5A
  _st__ex__gt_(); // <!>
  WEDE0(); // WEDE0
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
      WED5E(); // WED5E
      if (Pop() != 0)
      {
        _gt_C_plus_S(); // >C+S
        WED6A(); // WED6A
        Push(0xebb2); // 'WEBB2'
        WEC30(); // WEC30
        ICLOSE(); // ICLOSE
        Push(i - pp_ROSTER); // I ROSTER -
        Push(3);
        _slash_(); // /
        WED9E(); // WED9E
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
// 0xf134: WORD 'WF136' codep=0x224c wordp=0xf136
// ================================================

void WF136() // WF136
{
  LoadData(WEB09); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  Push(-Pop()); //  NEGATE
  Push(pp_A_dash_STRENGTH); // A-STRENGTH
  _plus__ex__2(); // +!_2
  Push(0x63ef+WEB3B.offset); // WEB3B<IFIELD>
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  LoadData(WEB01); // from 'VESSEL'
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  _star__slash_(); // */
  Push(Pop() + Read16(pp_A_dash_STRENGTH)); //  A-STRENGTH @ +
  Push(0);
  MAX(); // MAX
  Push(pp_A_dash_STRENGTH); // A-STRENGTH
  Store_3(); // !_3
}


// ================================================
// 0xf160: WORD 'WF162' codep=0x224c wordp=0xf162
// ================================================

void WF162() // WF162
{
  Push(((Read16(0x63ef+WEB40.offset)==0?1:0) | (Read16(cc_IsA_dash_SHIE)==0?1:0)) | Read16(pp_IsNEB)); // WEB40<IFIELD> @ 0= ?A-SHIE 0= OR ?NEB @ OR
  if (Pop() != 0)
  {
    Push(0xeb3b); // 'WEB3B'
    WEC30(); // WEC30
  } else
  {
    Push(0xeb40); // 'WEB40'
    WEC30(); // WEC30
  }
  WF136(); // WF136
  Push(Read16(0x63ef+WEB3B.offset)==0?1:0); // WEB3B<IFIELD> @ 0=
  if (Pop() == 0) return;
  WF08A(); // WF08A
}


// ================================================
// 0xf198: WORD 'WF19A' codep=0x224c wordp=0xf19a params=1 returns=0
// ================================================

void WF19A() // WF19A
{
  unsigned short int i, imax;
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==0x0018?1:0); //  0x0018 =
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x0014?1:0); //  0x0014 =
  Push(Pop() | Pop()); // OR
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(Read16(pp_IsSOUND)); // ?SOUND @
    if (Pop() != 0)
    {
      BEEPON(); // BEEPON
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
    WF162(); // WF162
  } else
  {
    Pop(); // DROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1ea: WORD 'WF1EC' codep=0x224c wordp=0xf1ec
// ================================================

void WF1EC() // WF1EC
{
  unsigned short int a, i, imax;
  WED4E(); // WED4E
  a = Pop(); // >R
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash_AT(); // ?ICONS-AT
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
      POINT_gt_ICON(); // POINT>ICON
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      WF19A(); // WF19A
      i++;
    } while(i<imax); // (LOOP)

    Pop(); // DROP
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf21e: WORD 'MDAMAGE' codep=0x1d29 wordp=0xf22a
// ================================================
// 0xf22a: db 0x00 0x00 0xc8 0x00 0x90 0x01 0xbc 0x02 0xe8 0x03 0xdc 0x05 0xa0 0x0f '              '

// ================================================
// 0xf238: WORD 'WF23A' codep=0x224c wordp=0xf23a params=0 returns=1
// ================================================

void WF23A() // WF23A
{
  WEBE4(); // WEBE4
  Push(Read16(Pop() * 2 + pp_MDAMAGE)); //  2* MDAMAGE + @
}


// ================================================
// 0xf246: WORD 'WF248' codep=0x224c wordp=0xf248 params=1 returns=1
// ================================================

void WF248() // WF248
{
  Push(Read16(0x63ef+WEB99.offset)); // WEB99<IFIELD> @
  SWAP(); // SWAP
  Push(6);
  Push(0x63ef+WEB80.offset); // WEB80<IFIELD>
  WEBF2(); // WEBF2
  _dash_(); // -
  Push(Pop() * Pop()); // *
  Push(5);
  _slash_(); // /
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(0x63ef+WEB99.offset); // WEB99<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xf268: WORD 'WF26A' codep=0x224c wordp=0xf26a params=1 returns=1
// ================================================

void WF26A() // WF26A
{
  Push(Read16(0x63ef+WEBA3.offset)); // WEBA3<IFIELD> @
  SWAP(); // SWAP
  Push(6);
  Push(0x63ef+WEB58.offset); // WEB58<IFIELD>
  WEBF2(); // WEBF2
  _dash_(); // -
  Push(Pop() * Pop()); // *
  Push(5);
  _slash_(); // /
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(0x63ef+WEBA3.offset); // WEBA3<IFIELD>
  Store_3(); // !_3
  Push(Read16(0x63ef+WEBA3.offset)==0?1:0); // WEBA3<IFIELD> @ 0=
  if (Pop() == 0) return;
  Push(0xbe2b); // 'OV/DA'
  MODULE(); // MODULE
  Push(3);
  Push(pp__n_AUX); // #AUX
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf2a0: WORD 'WF2A2' codep=0x224c wordp=0xf2a2
// ================================================

void WF2A2() // WF2A2
{
  Push(0xeb53); // 'WEB53'
  WEC46(); // WEC46
}


// ================================================
// 0xf2aa: WORD 'WF2AC' codep=0x224c wordp=0xf2ac
// ================================================

void WF2AC() // WF2AC
{
  Push(0xeb5d); // 'WEB5D'
  WEC46(); // WEC46
  ENGINE_dash_(); // ENGINE-
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(!Read16(pp_IsAUTO)); // ?AUTO @ NOT
  if (Pop() != 0)
  {
    Push(5);
    Push(0xbdef); // 'OV?.EQUIP-OK'
    MODULE(); // MODULE
    Pop(); // DROP
  }
  Push(0xeb62); // 'WEB62'
  IFLD_at_(); // IFLD@
  Push(Pop() | 0x0080); //  0x0080 OR
  Push(0xeb62); // 'WEB62'
  IFLD_ex_(); // IFLD!
  Push(pp_IsAUTO); // ?AUTO
  ON_3(); // ON_3
}


// ================================================
// 0xf2e6: WORD 'WF2E8' codep=0x224c wordp=0xf2e8
// ================================================

void WF2E8() // WF2E8
{
  Push(0xeb67); // 'WEB67'
  WEC46(); // WEC46
}


// ================================================
// 0xf2f0: WORD 'WF2F2' codep=0x224c wordp=0xf2f2
// ================================================

void WF2F2() // WF2F2
{
  Push(0xeb71); // 'WEB71'
  WEC46(); // WEC46
}


// ================================================
// 0xf2fa: WORD 'WF2FC' codep=0x224c wordp=0xf2fc
// ================================================

void WF2FC() // WF2FC
{
  Push(0xeb85); // 'WEB85'
  WEC46(); // WEC46
}


// ================================================
// 0xf304: WORD 'WF306' codep=0x224c wordp=0xf306
// ================================================

void WF306() // WF306
{
  Push(0xeb7b); // 'WEB7B'
  WEC46(); // WEC46
  SHIELD_dash_(); // SHIELD-
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(Read16(pp__i_OVS)); // 'OVS @
  MODULE(); // MODULE
}


// ================================================
// 0xf31c: WORD 'WF31E' codep=0x224c wordp=0xf31e
// ================================================

void WF31E() // WF31E
{
  Push(0xeb8f); // 'WEB8F'
  WEC46(); // WEC46
}


// ================================================
// 0xf326: WORD '#>DAMAG' codep=0x4a4f wordp=0xf332
// ================================================

void _n__gt_DAMAG() // #>DAMAG
{
  switch(Pop()) // #>DAMAG
  {
  case 1:
    WF2A2(); // WF2A2
    break;
  case 2:
    WF2AC(); // WF2AC
    break;
  case 3:
    WF2E8(); // WF2E8
    break;
  case 4:
    WF2F2(); // WF2F2
    break;
  case 5:
    WF2FC(); // WF2FC
    break;
  case 6:
    WF31E(); // WF31E
    break;
  case 7:
    WF0E0(); // WF0E0
    break;
  case 8:
    WF306(); // WF306
    break;
  default:
    Pop(); // DROP
    break;

  }
}

// ================================================
// 0xf356: WORD 'WF358' codep=0x224c wordp=0xf358 params=1 returns=2
// ================================================

void WF358() // WF358
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
// 0xf376: WORD 'WF378' codep=0x224c wordp=0xf378
// ================================================

void WF378() // WF378
{
  WEC8A(); // WEC8A
  if (Pop() != 0)
  {
    WF248(); // WF248
    return;
  }
  Push(Read16(0x63ef+WEBA3.offset)); // WEBA3<IFIELD> @
  if (Pop() != 0)
  {
    WF26A(); // WF26A
    return;
  }
  Push(0x000a);
  Push(Read16(0x63ef+WEB53.offset)&0xFF); // WEB53<IFIELD> C@
  _star__slash_(); // */
  WEF76(); // WEF76
  _n__gt_DAMAG(); // #>DAMAG case
}


// ================================================
// 0xf3a2: WORD 'WF3A4' codep=0x224c wordp=0xf3a4
// ================================================

void WF3A4() // WF3A4
{
  while(1)
  {
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    Push(!(Pop()==0?1:0)); //  0= NOT
    if (Pop() == 0) break;

    WF358(); // WF358
    WF378(); // WF378
  }
  Push(Read16(pp_WED9A)); // WED9A @
  if (Pop() != 0)
  {
    WF02E(); // WF02E
    Push(0xc012); // '(OBI'
    MODULE(); // MODULE
    Push(0xc03f); // '(ROL'
    MODULE(); // MODULE
  }
  WECF2(); // WECF2
  Push(0xeb53); // 'WEB53'
  IFLD_at_(); // IFLD@
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    WEE27(); // WEE27
  }
  WEF00(); // WEF00
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  WEE46(); // WEE46
}


// ================================================
// 0xf3e8: WORD 'WF3EA' codep=0x224c wordp=0xf3ea
// ================================================

void WF3EA() // WF3EA
{
  WED36(); // WED36
  Push(Pop() * 2); //  2*
  WEAF5(); // WEAF5
  WF3A4(); // WF3A4
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3f6: WORD 'WF3F8' codep=0x224c wordp=0xf3f8 params=3 returns=0
// ================================================

void WF3F8() // WF3F8
{
  Push(pp_WEBDA); // WEBDA
  C_ex_(); // C!
  Push(pp_WEBDE); // WEBDE
  StoreD(); // D!
}


// ================================================
// 0xf402: WORD 'WF404' codep=0x224c wordp=0xf404
// ================================================

void WF404() // WF404
{
  unsigned short int i, imax;
  _gt_MAINVIEW(); // >MAINVIEW
  StoreCOLOR(); // !COLOR
  VCLIPSET(); // VCLIPSET
  WEC0A(); // WEC0A
  WLD_gt_SCR(); // WLD>SCR
  SCR_gt_BLT(); // SCR>BLT
  SWAP(); // SWAP
  Push(Pop() + 3); //  3 +
  SWAP(); // SWAP
  Push(Pop() - 3); //  3 -
  Push(Read16(pp_XWLD_c_XPIX)); // XWLD:XPIX @
  Push(6);
  MIN(); // MIN
  Push(2);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    _2DUP(); // 2DUP
    Push(i); // I
    DrawCIRCLE(); // .CIRCLE
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); Pop(); // 2DROP
  V_gt_DISPLAY(); // V>DISPLAY
}


// ================================================
// 0xf43a: WORD 'WF43C' codep=0x224c wordp=0xf43c
// ================================================

void WF43C() // WF43C
{
  WF404(); // WF404
  CTINIT(); // CTINIT
  DCLIPSET(); // DCLIPSET
  _gt_DISPLAY(); // >DISPLAY
  WEBE4(); // WEBE4
  Push(Read16(regsp)); // DUP
  Push(Pop()==6?1:0); //  6 =
  if (Pop() != 0)
  {
    Pop(); // DROP
    SET_STR_AS_PARAM("PLASMA BOLT");
    DrawTTY(); // .TTY
    return;
  }
  SET_STR_AS_PARAM("MISSILE CLASS ");
  DrawTTY(); // .TTY
  Draw(); // .
}


// ================================================
// 0xf47d: WORD 'WF47F' codep=0x224c wordp=0xf47f
// ================================================

void WF47F() // WF47F
{
  unsigned short int a, i, imax;
  WF3F8(); // WF3F8
  WEAF5(); // WEAF5
  GetColor(LT_dash_BLUE);
  WF404(); // WF404
  WEC0A(); // WEC0A
  WF23A(); // WF23A
  a = Pop(); // >R
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash_AT(); // ?ICONS-AT
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
      POINT_gt_ICON(); // POINT>ICON
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      GetINST_dash_CLASS(); // @INST-CLASS
      Push(!(Pop()==0x0014?1:0)); //  0x0014 = NOT
      if (Pop() != 0)
      {
        LoadData(WEB29); // from 'VESSEL'
        Push(Read16(Pop())&0xFF); //  C@
        if (Pop() != 0)
        {
          WF19A(); // WF19A
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
// 0xf4e3: WORD 'WF4E5' codep=0x224c wordp=0xf4e5
// ================================================

void WF4E5() // WF4E5
{
  WF3F8(); // WF3F8
  GetColor(RED);
  WF43C(); // WF43C
  WF23A(); // WF23A
  WEAF5(); // WEAF5
  WF3A4(); // WF3A4
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4f5: WORD 'WF4F7' codep=0x224c wordp=0xf4f7
// ================================================

void WF4F7() // WF4F7
{
  if (Pop() != 0)
  {
    WF47F(); // WF47F
    return;
  }
  WF4E5(); // WF4E5
}


// ================================================
// 0xf505: WORD 'WF507' codep=0x224c wordp=0xf507
// ================================================

void WF507() // WF507
{
  if (Pop() != 0)
  {
    WF1EC(); // WF1EC
    return;
  }
  WF3EA(); // WF3EA
}


// ================================================
// 0xf515: WORD 'DO-DAMA' codep=0x224c wordp=0xf521
// ================================================
// entry

void DO_dash_DAMA() // DO-DAMA
{
  if (Pop() != 0)
  {
    WF4F7(); // WF4F7
    return;
  }
  WF507(); // WF507
}

// 0xf52f: db 0x44 0x41 0x4d 0x41 0x47 0x45 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'DAMAGE-_________________________----------------- '

