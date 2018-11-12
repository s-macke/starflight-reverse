// ====== OVERLAY 'HYPERMSG-OV' ======
// store offset = 0xe650
// overlay size   = 0x0f10

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WE666  codep:0x224c wordp:0xe666 size:0x0006 C-string:'WE666'
//           WE66E  codep:0x224c wordp:0xe66e size:0x0008 C-string:'WE66E'
//           WE678  codep:0x2214 wordp:0xe678 size:0x0002 C-string:'WE678'
//           WE67C  codep:0x2214 wordp:0xe67c size:0x0002 C-string:'WE67C'
//           WE680  codep:0x2214 wordp:0xe680 size:0x0002 C-string:'WE680'
//           WE684  codep:0x2214 wordp:0xe684 size:0x0002 C-string:'WE684'
//           WE688  codep:0x2214 wordp:0xe688 size:0x0002 C-string:'WE688'
//           WE68C  codep:0x224c wordp:0xe68c size:0x000e C-string:'WE68C'
//           WE69C  codep:0x7420 wordp:0xe69c size:0x0003 C-string:'WE69C'
//           WE6A1  codep:0x7394 wordp:0xe6a1 size:0x0006 C-string:'WE6A1'
//           WE6A9  codep:0x7420 wordp:0xe6a9 size:0x0003 C-string:'WE6A9'
//           WE6AE  codep:0x7394 wordp:0xe6ae size:0x0006 C-string:'WE6AE'
//           WE6B6  codep:0x7394 wordp:0xe6b6 size:0x0006 C-string:'WE6B6'
//           WE6BE  codep:0x7420 wordp:0xe6be size:0x0003 C-string:'WE6BE'
//           WE6C3  codep:0x7420 wordp:0xe6c3 size:0x0003 C-string:'WE6C3'
//           WE6C8  codep:0x7420 wordp:0xe6c8 size:0x0003 C-string:'WE6C8'
//           WE6CD  codep:0x7420 wordp:0xe6cd size:0x0003 C-string:'WE6CD'
//           WE6D2  codep:0x7420 wordp:0xe6d2 size:0x0003 C-string:'WE6D2'
//           WE6D7  codep:0x7420 wordp:0xe6d7 size:0x0003 C-string:'WE6D7'
//           WE6DC  codep:0x7420 wordp:0xe6dc size:0x0003 C-string:'WE6DC'
//           WE6E1  codep:0x7420 wordp:0xe6e1 size:0x0003 C-string:'WE6E1'
//           WE6E6  codep:0x7420 wordp:0xe6e6 size:0x0003 C-string:'WE6E6'
//           WE6EB  codep:0x7420 wordp:0xe6eb size:0x0003 C-string:'WE6EB'
//           WE6F0  codep:0x7420 wordp:0xe6f0 size:0x0003 C-string:'WE6F0'
//           WE6F5  codep:0x7420 wordp:0xe6f5 size:0x0003 C-string:'WE6F5'
//         GET-VES  codep:0x4b3b wordp:0xe704 size:0x0010 C-string:'GET_dash_VES'
//           WE716  codep:0x224c wordp:0xe716 size:0x0070 C-string:'WE716'
//           WE788  codep:0x224c wordp:0xe788 size:0x0012 C-string:'WE788'
//           WE79C  codep:0x224c wordp:0xe79c size:0x002e C-string:'WE79C'
//           WE7CC  codep:0x224c wordp:0xe7cc size:0x0022 C-string:'WE7CC'
//           WE7F0  codep:0x224c wordp:0xe7f0 size:0x004a C-string:'WE7F0'
//           WE83C  codep:0x224c wordp:0xe83c size:0x000a C-string:'WE83C'
//         ?LIQUID  codep:0x224c wordp:0xe852 size:0x0014 C-string:'IsLIQUID'
//           WE868  codep:0x224c wordp:0xe868 size:0x0016 C-string:'WE868'
//           WE880  codep:0x224c wordp:0xe880 size:0x0046 C-string:'WE880'
//           WE8C8  codep:0x224c wordp:0xe8c8 size:0x0020 C-string:'WE8C8'
//           WE8EA  codep:0x224c wordp:0xe8ea size:0x001e C-string:'WE8EA'
//           WE90A  codep:0x224c wordp:0xe90a size:0x0010 C-string:'WE90A'
//           WE91C  codep:0x224c wordp:0xe91c size:0x001c C-string:'WE91C'
//           WE93A  codep:0x224c wordp:0xe93a size:0x0024 C-string:'WE93A'
//           WE960  codep:0x224c wordp:0xe960 size:0x0014 C-string:'WE960'
//           WE976  codep:0x224c wordp:0xe976 size:0x0012 C-string:'WE976'
//           WE98A  codep:0x224c wordp:0xe98a size:0x0016 C-string:'WE98A'
//           WE9A2  codep:0x224c wordp:0xe9a2 size:0x001a C-string:'WE9A2'
//      DISP-SETUP  codep:0x4b3b wordp:0xe9cb size:0x0018 C-string:'DISP_dash_SETUP'
//           WE9E5  codep:0x1d29 wordp:0xe9e5 size:0x0002 C-string:'WE9E5'
//           WE9E9  codep:0x224c wordp:0xe9e9 size:0x001a C-string:'WE9E9'
//           WEA05  codep:0x224c wordp:0xea05 size:0x0012 C-string:'WEA05'
//           WEA19  codep:0x224c wordp:0xea19 size:0x002c C-string:'WEA19'
//           WEA47  codep:0x224c wordp:0xea47 size:0x000e C-string:'WEA47'
//           WEA57  codep:0x224c wordp:0xea57 size:0x0021 C-string:'WEA57'
//           WEA7A  codep:0x224c wordp:0xea7a size:0x000a C-string:'WEA7A'
//           WEA86  codep:0x224c wordp:0xea86 size:0x000b C-string:'WEA86'
//           WEA93  codep:0x224c wordp:0xea93 size:0x000d C-string:'WEA93'
//           WEAA2  codep:0x224c wordp:0xeaa2 size:0x000e C-string:'WEAA2'
//           WEAB2  codep:0x224c wordp:0xeab2 size:0x0016 C-string:'WEAB2'
//           WEACA  codep:0x224c wordp:0xeaca size:0x0015 C-string:'WEACA'
//           WEAE1  codep:0x224c wordp:0xeae1 size:0x002c C-string:'WEAE1'
//           WEB0F  codep:0x224c wordp:0xeb0f size:0x001c C-string:'WEB0F'
//           WEB2D  codep:0x224c wordp:0xeb2d size:0x0023 C-string:'WEB2D'
//           WEB52  codep:0x224c wordp:0xeb52 size:0x0021 C-string:'WEB52'
//           WEB75  codep:0x224c wordp:0xeb75 size:0x0017 C-string:'WEB75'
//           WEB8E  codep:0x224c wordp:0xeb8e size:0x0020 C-string:'WEB8E'
//            NF-M  codep:0x4b3b wordp:0xebb7 size:0x0018 C-string:'NF_dash_M'
//         NF-MESS  codep:0x224c wordp:0xebdb size:0x0006 C-string:'NF_dash_MESS'
//           WEBE3  codep:0x224c wordp:0xebe3 size:0x002c C-string:'WEBE3'
//           WEC11  codep:0x224c wordp:0xec11 size:0x0027 C-string:'WEC11'
//           WEC3A  codep:0x224c wordp:0xec3a size:0x0028 C-string:'WEC3A'
//           WEC64  codep:0x224c wordp:0xec64 size:0x0026 C-string:'WEC64'
//           WEC8C  codep:0x224c wordp:0xec8c size:0x0045 C-string:'WEC8C'
//            NS-M  codep:0x4b3b wordp:0xecda size:0x0018 C-string:'NS_dash_M'
//         NS-MESS  codep:0x224c wordp:0xecfe size:0x0006 C-string:'NS_dash_MESS'
//           WED06  codep:0x7394 wordp:0xed06 size:0x0006 C-string:'WED06'
//         P-LSEED  codep:0x7394 wordp:0xed18 size:0x0006 C-string:'P_dash_LSEED'
//           WED20  codep:0x7394 wordp:0xed20 size:0x0006 C-string:'WED20'
//           WED28  codep:0x7420 wordp:0xed28 size:0x0003 C-string:'WED28'
//           WED2D  codep:0x7420 wordp:0xed2d size:0x0003 C-string:'WED2D'
//           WED32  codep:0x224c wordp:0xed32 size:0x0012 C-string:'WED32'
//            S>CM  codep:0x4b3b wordp:0xed4d size:0x0010 C-string:'S_gt_CM'
//           WED5F  codep:0x224c wordp:0xed5f size:0x0008 C-string:'WED5F'
//            OSET  codep:0x224c wordp:0xed70 size:0x0058 C-string:'OSET'
//           WEDCA  codep:0x224c wordp:0xedca size:0x0006 C-string:'WEDCA'
//           WEDD2  codep:0x224c wordp:0xedd2 size:0x0014 C-string:'WEDD2'
//           WEDE8  codep:0x224c wordp:0xede8 size:0x001f C-string:'WEDE8'
//           WEE09  codep:0x224c wordp:0xee09 size:0x0072 C-string:'WEE09'
//           WEE7D  codep:0x224c wordp:0xee7d size:0x0028 C-string:'WEE7D'
//            UF-M  codep:0x4b3b wordp:0xeeae size:0x0018 C-string:'UF_dash_M'
//         UF-MESS  codep:0x224c wordp:0xeed2 size:0x0006 C-string:'UF_dash_MESS'
//           WEEDA  codep:0x224c wordp:0xeeda size:0x0017 C-string:'WEEDA'
//           WEEF3  codep:0x224c wordp:0xeef3 size:0x0006 C-string:'WEEF3'
//           WEEFB  codep:0x224c wordp:0xeefb size:0x0006 C-string:'WEEFB'
//           WEF03  codep:0x224c wordp:0xef03 size:0x0006 C-string:'WEF03'
//           WEF0B  codep:0x224c wordp:0xef0b size:0x0006 C-string:'WEF0B'
//            US-M  codep:0x4b3b wordp:0xef1a size:0x0014 C-string:'US_dash_M'
//         US-MESS  codep:0x224c wordp:0xef3a size:0x0006 C-string:'US_dash_MESS'
//           WEF42  codep:0x224c wordp:0xef42 size:0x0006 C-string:'WEF42'
//           WEF4A  codep:0x224c wordp:0xef4a size:0x0006 C-string:'WEF4A'
//           WEF52  codep:0x224c wordp:0xef52 size:0x001a C-string:'WEF52'
//           WEF6E  codep:0x224c wordp:0xef6e size:0x001f C-string:'WEF6E'
//           WEF8F  codep:0x224c wordp:0xef8f size:0x0016 C-string:'WEF8F'
//             .EX  codep:0x4b3b wordp:0xefad size:0x000c C-string:'DrawEX'
//           WEFBB  codep:0x224c wordp:0xefbb size:0x0018 C-string:'WEFBB'
//           WEFD5  codep:0x7420 wordp:0xefd5 size:0x0003 C-string:'WEFD5'
//           WEFDA  codep:0x1d29 wordp:0xefda size:0x0002 C-string:'WEFDA'
//            DMSG  codep:0x224c wordp:0xefe5 size:0x0066 C-string:'DMSG'
//           WF04D  codep:0x224c wordp:0xf04d size:0x0006 C-string:'WF04D'
//           WF055  codep:0x224c wordp:0xf055 size:0x0012 C-string:'WF055'
//           WF069  codep:0x224c wordp:0xf069 size:0x0006 C-string:'WF069'
//           WF071  codep:0x224c wordp:0xf071 size:0x0006 C-string:'WF071'
//           WF079  codep:0x224c wordp:0xf079 size:0x0014 C-string:'WF079'
//           WF08F  codep:0x224c wordp:0xf08f size:0x0022 C-string:'WF08F'
//          (CTXT)  codep:0x4b3b wordp:0xf0bc size:0x0018 C-string:'_ro_CTXT_rc_'
//           WF0D6  codep:0x1d29 wordp:0xf0d6 size:0x0002 C-string:'WF0D6'
//           WF0DA  codep:0x1d29 wordp:0xf0da size:0x0002 C-string:'WF0DA'
//           WF0DE  codep:0x1d29 wordp:0xf0de size:0x0002 C-string:'WF0DE'
//           WF0E2  codep:0x1d29 wordp:0xf0e2 size:0x0002 C-string:'WF0E2'
//           WF0E6  codep:0x224c wordp:0xf0e6 size:0x007f C-string:'WF0E6'
//           WF167  codep:0x7420 wordp:0xf167 size:0x0003 C-string:'WF167'
//           WF16C  codep:0x7420 wordp:0xf16c size:0x0003 C-string:'WF16C'
//           WF171  codep:0x7420 wordp:0xf171 size:0x0003 C-string:'WF171'
//           WF176  codep:0x224c wordp:0xf176 size:0x0016 C-string:'WF176'
//           WF18E  codep:0x224c wordp:0xf18e size:0x0070 C-string:'WF18E'
//           WF200  codep:0x224c wordp:0xf200 size:0x0046 C-string:'WF200'
//           WF248  codep:0x224c wordp:0xf248 size:0x002e C-string:'WF248'
//           WF278  codep:0x224c wordp:0xf278 size:0x0016 C-string:'WF278'
//           WF290  codep:0x1d29 wordp:0xf290 size:0x0002 C-string:'WF290'
//          TRAK-E  codep:0x224c wordp:0xf29d size:0x0092 C-string:'TRAK_dash_E'
//           WF331  codep:0x224c wordp:0xf331 size:0x0006 C-string:'WF331'
//           WF339  codep:0x2214 wordp:0xf339 size:0x0002 C-string:'WF339'
//           WF33D  codep:0x224c wordp:0xf33d size:0x0006 C-string:'WF33D'
//           @'EXT  codep:0x4b3b wordp:0xf34d size:0x0010 C-string:'Get_i_EXT'
//         (!'EXT)  codep:0x224c wordp:0xf369 size:0x000c C-string:'_ro__ex__i_EXT_rc_'
//         +A-VESS  codep:0x224c wordp:0xf381 size:0x007e C-string:'_plus_A_dash_VESS'
//           WF401  codep:0x224c wordp:0xf401 size:0x0006 C-string:'WF401'
//           WF409  codep:0x224c wordp:0xf409 size:0x0008 C-string:'WF409'
//           WF413  codep:0x224c wordp:0xf413 size:0x0016 C-string:'WF413'
//           WF42B  codep:0x7420 wordp:0xf42b size:0x0003 C-string:'WF42B'
//           WF430  codep:0x1d29 wordp:0xf430 size:0x0002 C-string:'WF430'
//           WF434  codep:0x1d29 wordp:0xf434 size:0x0002 C-string:'WF434'
//           WF438  codep:0x224c wordp:0xf438 size:0x002a C-string:'WF438'
//           WF464  codep:0x224c wordp:0xf464 size:0x004c C-string:'WF464'
//           WF4B2  codep:0x224c wordp:0xf4b2 size:0x0028 C-string:'WF4B2'
//         >ORBITS  codep:0x224c wordp:0xf4e6 size:0x001e C-string:'_gt_ORBITS'
//           WF506  codep:0x224c wordp:0xf506 size:0x001e C-string:'WF506'
//         ORBITS>  codep:0x224c wordp:0xf530 size:0x0000 C-string:'ORBITS_gt_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__star_MAPSCA; // *MAPSCA
extern const unsigned short int cc__i_OVBACK; // 'OVBACK
extern const unsigned short int cc__i_ANSYS; // 'ANSYS
extern const unsigned short int pp_XLL; // XLL
extern const unsigned short int pp_YLL; // YLL
extern const unsigned short int pp_XUR; // XUR
extern const unsigned short int pp_YUR; // YUR
extern const unsigned short int pp__i_ASYS; // 'ASYS
extern const unsigned short int pp_TCLR; // TCLR
extern const unsigned short int pp__i_TRAK; // 'TRAK
extern const unsigned short int pp_TRAK_dash_HR; // TRAK-HR
extern const unsigned short int pp_A_dash_STREN; // A-STREN
extern const unsigned short int pp_IsAUTO; // ?AUTO
extern const unsigned short int pp_AVCNT; // AVCNT
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp__i_FLY; // 'FLY
extern const unsigned short int pp__n_VESS; // #VESS
extern const unsigned short int pp_LOCRADI; // LOCRADI
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_IsFUEL_dash_D; // ?FUEL-D
extern const unsigned short int pp_GLOBALS; // GLOBALS
extern const unsigned short int pp_IGLOBAL; // IGLOBAL
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp__star_GLOBAL; // *GLOBAL
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_FORCEPT; // FORCEPT
extern const unsigned short int pp_SKIP2NE; // SKIP2NE
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp__i_ENDING; // 'ENDING
extern const unsigned short int pp__i_EXTERN; // 'EXTERN
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp_IsCALLIN; // ?CALLIN
extern const unsigned short int pp_SENSE_dash_A; // SENSE-A
extern const unsigned short int pp_ENC_dash_TIM; // ENC-TIM
extern const unsigned short int pp_KEYTIME; // KEYTIME
extern const unsigned short int pp_ANCHOR; // ANCHOR
extern const unsigned short int pp__ro_SYSTEM; // (SYSTEM
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp__ro_ENCOUN; // (ENCOUN
extern const unsigned short int pp_ATIME; // ATIME
extern const unsigned short int pp__i_UHL; // 'UHL
extern Color RED; // RED
extern Color PINK; // PINK
extern Color YELLOW; // YELLOW
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void _star__slash_(); // */
void MAX(); // MAX
void MIN(); // MIN
void BEEP(); // BEEP
void Draw(); // .
void MS(); // MS
void NOP(); // NOP
void UNRAVEL(); // UNRAVEL
void _2OVER(); // 2OVER
void D0_eq_(); // D0=
void D_eq_(); // D=
void WITHIN(); // WITHIN
void BIT(); // BIT
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void ACELLAD(); // ACELLAD
void A_at_(); // A@
void SETLARR(); // SETLARR
void FULLARR(); // FULLARR
void SETREGI(); // SETREGI
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void StoreINST_dash_S(); // !INST-S
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void CDROP(); // CDROP
void CI_i_(); // CI'
void IsNULL(); // ?NULL
void Is_dash_NULL(); // ?-NULL
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IPREV(); // IPREV
void IFIRST(); // IFIRST
void IINSERT(); // IINSERT
void _st_INSERT(); // <INSERT
void IEXTRAC(); // IEXTRAC
void IFIND(); // IFIND
void MAKE1ST(); // MAKE1ST
void IDELETE(); // IDELETE
void ALL(); // ALL
void EACH(); // EACH
void ICREATE(); // ICREATE
void _star_CREATE(); // *CREATE
void StoreCOLOR(); // !COLOR
void GetIX(); // @IX
void GetIY(); // @IY
void GetID(); // @ID
void GetIL(); // @IL
void GetIH(); // @IH
void StoreIX(); // !IX
void StoreIY(); // !IY
void INIT_dash_IC(); // INIT-IC
void POINT_gt_I(); // POINT>I
void IsICONS_dash__2(); // ?ICONS-_2
void _plus_ICON_2(); // +ICON_2
void _plus_ICONBO(); // +ICONBO
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void CTPOS_dot_(); // CTPOS.
void _gt_SND(); // >SND
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void MROTA(); // MROTA
void DrawSORD(); // .SORD
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void TIME(); // TIME
void _1_dot_5_at_(); // 1.5@
void _plus__dash__at_(); // +-@
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WE9E5 = 0xe9e5; // WE9E5 size: 2
// {0x00, 0x00}

const unsigned short int pp_WEFDA = 0xefda; // WEFDA size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF0D6 = 0xf0d6; // WF0D6 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF0DA = 0xf0da; // WF0DA size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF0DE = 0xf0de; // WF0DE size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF0E2 = 0xf0e2; // WF0E2 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF290 = 0xf290; // WF290 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF430 = 0xf430; // WF430 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF434 = 0xf434; // WF434 size: 2
// {0x3a, 0x20}


const unsigned short int cc_WE678 = 0xe678; // WE678
const unsigned short int cc_WE67C = 0xe67c; // WE67C
const unsigned short int cc_WE680 = 0xe680; // WE680
const unsigned short int cc_WE684 = 0xe684; // WE684
const unsigned short int cc_WE688 = 0xe688; // WE688
const unsigned short int cc_WF339 = 0xf339; // WF339


// 0xe662: db 0xf0 0x00 '  '

// ================================================
// 0xe664: WORD 'WE666' codep=0x224c wordp=0xe666 params=0 returns=0
// ================================================

void WE666() // WE666
{
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe66c: WORD 'WE66E' codep=0x224c wordp=0xe66e
// ================================================

void WE66E() // WE66E
{
  Push(Read16(pp_TCLR)); // TCLR @
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe676: WORD 'WE678' codep=0x2214 wordp=0xe678
// ================================================
// orphan
// 0xe678: dw 0x0000

// ================================================
// 0xe67a: WORD 'WE67C' codep=0x2214 wordp=0xe67c
// ================================================
// 0xe67c: dw 0x004b

// ================================================
// 0xe67e: WORD 'WE680' codep=0x2214 wordp=0xe680
// ================================================
// 0xe680: dw 0x0000

// ================================================
// 0xe682: WORD 'WE684' codep=0x2214 wordp=0xe684
// ================================================
// 0xe684: dw 0x0016

// ================================================
// 0xe686: WORD 'WE688' codep=0x2214 wordp=0xe688
// ================================================
// 0xe688: dw 0x0190

// ================================================
// 0xe68a: WORD 'WE68C' codep=0x224c wordp=0xe68c params=0 returns=0
// ================================================

void WE68C() // WE68C
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push2Words("NULL");
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  StoreD(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe69a: WORD 'WE69C' codep=0x7420 wordp=0xe69c
// ================================================
IFieldType WE69C = {VESSELIDX, 0x0b, 0x01};

// ================================================
// 0xe69f: WORD 'WE6A1' codep=0x7394 wordp=0xe6a1
// ================================================
LoadDataType WE6A1 = {VESSELIDX, 0x05, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xe6a7: WORD 'WE6A9' codep=0x7420 wordp=0xe6a9
// ================================================
IFieldType WE6A9 = {VESSELIDX, 0x0c, 0x01};

// ================================================
// 0xe6ac: WORD 'WE6AE' codep=0x7394 wordp=0xe6ae
// ================================================
LoadDataType WE6AE = {VESSELIDX, 0x06, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xe6b4: WORD 'WE6B6' codep=0x7394 wordp=0xe6b6
// ================================================
LoadDataType WE6B6 = {VESSELIDX, 0x0c, 0x04, 0x24, 0x6b5d};

// ================================================
// 0xe6bc: WORD 'WE6BE' codep=0x7420 wordp=0xe6be
// ================================================
IFieldType WE6BE = {VESSELIDX, 0x12, 0x04};

// ================================================
// 0xe6c1: WORD 'WE6C3' codep=0x7420 wordp=0xe6c3
// ================================================
IFieldType WE6C3 = {ENCOUNTERIDX, 0x15, 0x01};

// ================================================
// 0xe6c6: WORD 'WE6C8' codep=0x7420 wordp=0xe6c8
// ================================================
IFieldType WE6C8 = {ENCOUNTERIDX, 0x16, 0x01};

// ================================================
// 0xe6cb: WORD 'WE6CD' codep=0x7420 wordp=0xe6cd
// ================================================
IFieldType WE6CD = {ENCOUNTERIDX, 0x17, 0x01};

// ================================================
// 0xe6d0: WORD 'WE6D2' codep=0x7420 wordp=0xe6d2
// ================================================
IFieldType WE6D2 = {ENCOUNTERIDX, 0x18, 0x01};

// ================================================
// 0xe6d5: WORD 'WE6D7' codep=0x7420 wordp=0xe6d7
// ================================================
IFieldType WE6D7 = {ENCOUNTERIDX, 0x19, 0x01};

// ================================================
// 0xe6da: WORD 'WE6DC' codep=0x7420 wordp=0xe6dc
// ================================================
IFieldType WE6DC = {ENCOUNTERIDX, 0x13, 0x01};

// ================================================
// 0xe6df: WORD 'WE6E1' codep=0x7420 wordp=0xe6e1
// ================================================
IFieldType WE6E1 = {ENCOUNTERIDX, 0x14, 0x01};

// ================================================
// 0xe6e4: WORD 'WE6E6' codep=0x7420 wordp=0xe6e6
// ================================================
IFieldType WE6E6 = {ENCOUNTERIDX, 0x1c, 0x01};

// ================================================
// 0xe6e9: WORD 'WE6EB' codep=0x7420 wordp=0xe6eb
// ================================================
IFieldType WE6EB = {ENCOUNTERIDX, 0x1d, 0x01};

// ================================================
// 0xe6ee: WORD 'WE6F0' codep=0x7420 wordp=0xe6f0
// ================================================
IFieldType WE6F0 = {ENCOUNTERIDX, 0x1a, 0x01};

// ================================================
// 0xe6f3: WORD 'WE6F5' codep=0x7420 wordp=0xe6f5
// ================================================
IFieldType WE6F5 = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xe6f8: WORD 'GET-VES' codep=0x4b3b wordp=0xe704
// ================================================

void GET_dash_VES() // GET-VES
{
  switch(Pop()) // GET-VES
  {
  case 0:
    Push(0x65e1+WE6D7.offset); // IFIELD
    break;
  case 1:
    Push(0x65e1+WE6D2.offset); // IFIELD
    break;
  case 2:
    Push(0x65e1+WE6CD.offset); // IFIELD
    break;
  default:
    Push(0x65e1+WE6C8.offset); // IFIELD
    break;

  }
}

// ================================================
// 0xe714: WORD 'WE716' codep=0x224c wordp=0xe716 params=0 returns=3
// ================================================

void WE716() // WE716
{
  unsigned short int a, b;
  Push(Read16(cc_WE684)); // WE684
  Push(Read16(pp_IsCALLIN)); // ?CALLIN @
  if (Pop() != 0)
  {
    Push(Pop() - 7); //  7 -
    Push(Read16(regsp)); // DUP
    Push(0);
    Push(2);
    RRND(); // RRND
    Push(Pop() * 2 - 1); //  2* 1-
    Push(Pop() * Pop()); // *
    SWAP(); // SWAP
    Push(Read16(regsp)); // DUP
    Push(-Pop()); //  NEGATE
    SWAP(); // SWAP
    RRND(); // RRND
    Push(0);
    Push(2);
    RRND(); // RRND
    if (Pop() != 0)
    {
      SWAP(); // SWAP
    }
  } else
  {
    Push(3);
    _slash_(); // /
    Push(Read16(regsp)); // DUP
    Push(-Pop()); //  NEGATE
    SWAP(); // SWAP
    Push(Pop() + 1); //  1+
    _2DUP(); // 2DUP
    RRND(); // RRND
    b = Pop(); // >R
    RRND(); // RRND
    Push(b); // R>
  }
  Push(Read16(pp_IsCALLIN)); // ?CALLIN @
  if (Pop() == 0) return;
  LoadData(WE6A1); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  Push(pp_A_dash_STREN); // A-STREN
  _plus__ex__2(); // +!_2
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(a); // R>
}


// ================================================
// 0xe786: WORD 'WE788' codep=0x224c wordp=0xe788 params=0 returns=0
// ================================================

void WE788() // WE788
{
  Push(Read16(pp_IsCALLIN)); // ?CALLIN @
  if (Pop() == 0) return;
  Push(0xba55); // 'ICON-'
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
}


// ================================================
// 0xe79a: WORD 'WE79C' codep=0x224c wordp=0xe79c
// ================================================

void WE79C() // WE79C
{
  IOPEN(); // IOPEN
  Push(1);
  _star_CREATE(); // *CREATE
  WE716(); // WE716
  SWAP(); // SWAP
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  StoreD(); // D!
  Push(0);
  Push(7);
  RRND(); // RRND
  Push(0x65e1+WE69C.offset); // WE69C<IFIELD>
  C_ex__2(); // C!_2
  LoadData(WE6AE); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x65e1+WE6A9.offset); // WE6A9<IFIELD>
  C_ex__2(); // C!_2
  LoadData(WE6B6); // from 'VESSEL'
  _2_at_(); // 2@
  Push(0x65e1+WE6BE.offset); // WE6BE<IFIELD>
  StoreD(); // D!
  WE788(); // WE788
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe7ca: WORD 'WE7CC' codep=0x224c wordp=0xe7cc params=0 returns=0
// ================================================

void WE7CC() // WE7CC
{
  Push(0x0016);
  _eq_SPECIE(); // =SPECIE
  if (Pop() != 0)
  {
    Push(0xc900); // 'IUHL'
    MODULE(); // MODULE
    Push(Read16(pp__i_ENDING)); // 'ENDING @
  } else
  {
    Push(0x3a48); // 'NOP'
  }
  Push(pp__i_UHL); // 'UHL
  Store_2(); // !_2
}


// ================================================
// 0xe7ee: WORD 'WE7F0' codep=0x224c wordp=0xe7f0
// ================================================

void WE7F0() // WE7F0
{
  unsigned short int i, imax, j, jmax;
  Push(0x6a5a); // 'MERCATO'
  SETLARR(); // SETLARR
  FULLARR(); // FULLARR
  SETREGI(); // SETREGI
  Push(0);

  i = Read16(pp_YLL); // YLL @
  imax = Read16(pp_YUR) + 1; // YUR @ 1+
  do // (DO)
  {

    j = Read16(pp_XLL); // XLL @
    jmax = Read16(pp_XUR) + 1; // XUR @ 1+
    do // (DO)
    {
      Push(j); // I
      Push(i); // J
      ACELLAD(); // ACELLAD
      A_at_(); // A@
      Push(0x001f);
      _gt_(); // >
      if (Pop() != 0)
      {
        Push(1);
      } else
      {
        Push(0);
      }
      Push(Pop() + Pop()); // +
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe83a: WORD 'WE83C' codep=0x224c wordp=0xe83c params=1 returns=0
// ================================================

void WE83C() // WE83C
{
  Push(Read16(regsp)); // DUP
  StoreINST_dash_S(); // !INST-S
  Push(pp_RECORD_n_); // RECORD#
  Store_2(); // !_2
}


// ================================================
// 0xe846: WORD '?LIQUID' codep=0x224c wordp=0xe852
// ================================================

void IsLIQUID() // ?LIQUID
{
  WE7F0(); // WE7F0
  Push(0x0064);
  Push(0x0480);
  _star__slash_(); // */
  Push(0x001f);
  _st_(); // <
}


// ================================================
// 0xe866: WORD 'WE868' codep=0x224c wordp=0xe868 params=0 returns=1
// ================================================

void WE868() // WE868
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x0020?1:0); //  0x0020 =
  GetINST_dash_S(); // @INST-S
  Push(5);
  Push(0x000d);
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe87e: WORD 'WE880' codep=0x224c wordp=0xe880
// ================================================

void WE880() // WE880
{
  CI(); // CI
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_ex__2(); // 1.5!_2
  CI(); // CI
  Pop(); // DROP
  Push(0xbaa2); // 'MERCA'
  MODULE(); // MODULE
  IsLIQUID(); // ?LIQUID
  if (Pop() != 0)
  {
    GetINST_dash_S(); // @INST-S
    Push(5);
    Push(9);
    WITHIN(); // WITHIN
    if (Pop() != 0)
    {
      GetINST_dash_S(); // @INST-S
      Push(Pop() + 4); //  4 +
      WE83C(); // WE83C
    }
    return;
  }
  GetINST_dash_S(); // @INST-S
  Push(9);
  Push(0x000d);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  GetINST_dash_S(); // @INST-S
  Push(Pop() - 4); //  4 -
  WE83C(); // WE83C
}


// ================================================
// 0xe8c6: WORD 'WE8C8' codep=0x224c wordp=0xe8c8 params=0 returns=0
// ================================================

void WE8C8() // WE8C8
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x000b?1:0); //  0x000b =
  if (Pop() == 0) return;
  CI(); // CI
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _1_dot_5_ex__2(); // 1.5!_2
  IOPEN(); // IOPEN
  WE868(); // WE868
  if (Pop() != 0)
  {
    WE880(); // WE880
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8e8: WORD 'WE8EA' codep=0x224c wordp=0xe8ea
// ================================================

void WE8EA() // WE8EA
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0xe8c8); // 'WE8C8'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push2Words("NULL");
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _1_dot_5_ex__2(); // 1.5!_2
  Push2Words("NULL");
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xe908: WORD 'WE90A' codep=0x224c wordp=0xe90a params=1 returns=0
// ================================================

void WE90A() // WE90A
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  StoreD(); // D!
  Push(pp_LOCRADI); // LOCRADI
  Store_2(); // !_2
}


// ================================================
// 0xe91a: WORD 'WE91C' codep=0x224c wordp=0xe91c params=0 returns=0
// ================================================

void WE91C() // WE91C
{
  WE68C(); // WE68C
  Push(pp_XABS); // XABS
  _099(); // 099
  Push(pp_YABS); // YABS
  _099(); // 099
  INIT_dash_IC(); // INIT-IC
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  _plus_ICONBO(); // +ICONBO
  WE666(); // WE666
  Push(Read16(cc_WE680)); // WE680
  WE90A(); // WE90A
}


// ================================================
// 0xe938: WORD 'WE93A' codep=0x224c wordp=0xe93a params=0 returns=0
// ================================================

void WE93A() // WE93A
{
  Push(pp_XABS); // XABS
  _099(); // 099
  Push(pp_YABS); // YABS
  _099(); // 099
  WE68C(); // WE68C
  INIT_dash_IC(); // INIT-IC
  Push(pp__ro_ENCOUN); // (ENCOUN
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  _plus_ICONBO(); // +ICONBO
  WE666(); // WE666
  Push(Read16(cc_WE684)); // WE684
  WE90A(); // WE90A
  ORGLIST(); // ORGLIST
  Push(0xc7ce); // 'CSCALE'
  MODULE(); // MODULE
}


// ================================================
// 0xe95e: WORD 'WE960' codep=0x224c wordp=0xe960
// ================================================

void WE960() // WE960
{
  INIT_dash_IC(); // INIT-IC
  WE8EA(); // WE8EA
  Push(pp__ro_SYSTEM); // (SYSTEM
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  _plus_ICONBO(); // +ICONBO
  WE666(); // WE666
  Push(Read16(cc_WE688)); // WE688
  WE90A(); // WE90A
}


// ================================================
// 0xe974: WORD 'WE976' codep=0x224c wordp=0xe976
// ================================================

void WE976() // WE976
{
  INIT_dash_IC(); // INIT-IC
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0xba55); // 'ICON-'
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe988: WORD 'WE98A' codep=0x224c wordp=0xe98a params=0 returns=1
// ================================================

void WE98A() // WE98A
{
  CI(); // CI
  Push2Words("*ARTH");
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Push(Read16(pp_PAST)); // PAST @
    return;
  }
  Push(1);
}


// ================================================
// 0xe9a0: WORD 'WE9A2' codep=0x224c wordp=0xe9a2 params=0 returns=0
// ================================================

void WE9A2() // WE9A2
{
  Push2Words("*SECS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  INIT_dash_IC(); // INIT-IC
  _plus_ICONBO(); // +ICONBO
  Push(Read16(pp_IGLOBAL)); // IGLOBAL @
  Push(pp__star_GLOBAL); // *GLOBAL
  Store_2(); // !_2
  WE666(); // WE666
  Push(Read16(cc_WE67C)); // WE67C
  WE90A(); // WE90A
}


// ================================================
// 0xe9bc: WORD 'DISP-SETUP' codep=0x4b3b wordp=0xe9cb
// ================================================
// entry

void DISP_dash_SETUP() // DISP-SETUP
{
  switch(Pop()) // DISP-SETUP
  {
  case 1:
    WE91C(); // WE91C
    break;
  case 2:
    WE960(); // WE960
    break;
  case 3:
    WE9A2(); // WE9A2
    break;
  case 4:
    WE93A(); // WE93A
    break;
  case 5:
    WE976(); // WE976
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe9e3: WORD 'WE9E5' codep=0x1d29 wordp=0xe9e5
// ================================================
// 0xe9e5: db 0x00 0x00 '  '

// ================================================
// 0xe9e7: WORD 'WE9E9' codep=0x224c wordp=0xe9e9 params=0 returns=3
// ================================================

void WE9E9() // WE9E9
{
  Push(0x03e8);
  MS(); // MS
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp_WE9E5); // WE9E5
  _099(); // 099
  Push(0);
  Push(Read16(cc__i_ANSYS)); // 'ANSYS
  MODULE(); // MODULE
}


// ================================================
// 0xea03: WORD 'WEA05' codep=0x224c wordp=0xea05 params=0 returns=0
// ================================================
// orphan

void WEA05() // WEA05
{
  Push(0x000a);
  Push(Read16(pp_YBLT) - 0x000b); // YBLT @ 0x000b -
  POS_dot_(); // POS.
}


// ================================================
// 0xea17: WORD 'WEA19' codep=0x224c wordp=0xea19 params=0 returns=0
// ================================================

void WEA19() // WEA19
{
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  Push2Words("*LH");
  D_eq_(); // D=
  if (Pop() == 0) return;
  Push2Words("*PLIST");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x00c8);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0xbe45); // '.HUFF'
  MODULE(); // MODULE
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xea45: WORD 'WEA47' codep=0x224c wordp=0xea47 params=0 returns=0
// ================================================

void WEA47() // WEA47
{
  PRINT(" COMPLETE", 9); // (.")
}


// ================================================
// 0xea55: WORD 'WEA57' codep=0x224c wordp=0xea57
// ================================================

void WEA57() // WEA57
{
  SET_STR_AS_PARAM("...COMMENCING ");
  DrawTTY(); // .TTY
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" TRAVEL", 7); // (.")
}


// ================================================
// 0xea78: WORD 'WEA7A' codep=0x224c wordp=0xea7a params=0 returns=2
// ================================================

void WEA7A() // WEA7A
{
  SET_STR_AS_PARAM("ORBIT");
}


// ================================================
// 0xea84: WORD 'WEA86' codep=0x224c wordp=0xea86 params=0 returns=2
// ================================================

void WEA86() // WEA86
{
  SET_STR_AS_PARAM("SYSTEM");
}


// ================================================
// 0xea91: WORD 'WEA93' codep=0x224c wordp=0xea93 params=0 returns=2
// ================================================

void WEA93() // WEA93
{
  SET_STR_AS_PARAM("STARPORT");
}


// ================================================
// 0xeaa0: WORD 'WEAA2' codep=0x224c wordp=0xeaa2 params=0 returns=2
// ================================================

void WEAA2() // WEAA2
{
  SET_STR_AS_PARAM("ENCOUNTER");
}


// ================================================
// 0xeab0: WORD 'WEAB2' codep=0x224c wordp=0xeab2
// ================================================

void WEAB2() // WEAB2
{
  SET_STR_AS_PARAM("STANDING BY TO ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xeac8: WORD 'WEACA' codep=0x224c wordp=0xeaca
// ================================================

void WEACA() // WEACA
{
  WEAB2(); // WEAB2
  PRINT("DOCK WITH ", 10); // (.")
  WEA93(); // WEA93
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xeadf: WORD 'WEAE1' codep=0x224c wordp=0xeae1
// ================================================

void WEAE1() // WEAE1
{
  WEAB2(); // WEAB2
  WEA7A(); // WEA7A
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_ENC_dash_TIM); // ENC-TIM
  StoreD(); // D!
  SET_STR_AS_PARAM("PRESS SPACEBAR TO ORBIT");
  DrawTTY(); // .TTY
}


// ================================================
// 0xeb0d: WORD 'WEB0F' codep=0x224c wordp=0xeb0f
// ================================================

void WEB0F() // WEB0F
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  WE98A(); // WE98A
  Push(!Pop()); //  NOT
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    WEACA(); // WEACA
  } else
  {
    WEAE1(); // WEAE1
  }
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xeb2b: WORD 'WEB2D' codep=0x224c wordp=0xeb2d
// ================================================

void WEB2D() // WEB2D
{
  SET_STR_AS_PARAM("...");
  DrawTTY(); // .TTY
  WEA7A(); // WEA7A
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" ESTABLISHED", 12); // (.")
  Push(pp_IsFUEL_dash_D); // ?FUEL-D
  _099(); // 099
  WEA19(); // WEA19
}


// ================================================
// 0xeb50: WORD 'WEB52' codep=0x224c wordp=0xeb52
// ================================================

void WEB52() // WEB52
{
  SET_STR_AS_PARAM("...");
  DrawTTY(); // .TTY
  WEA86(); // WEA86
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" ENTRY", 6); // (.")
  WEA47(); // WEA47
  Push(Read16(pp__i_ASYS)); // 'ASYS @
  MODULE(); // MODULE
  WE9E9(); // WE9E9
}


// ================================================
// 0xeb73: WORD 'WEB75' codep=0x224c wordp=0xeb75
// ================================================

void WEB75() // WEB75
{
  SET_STR_AS_PARAM("...DOCKING");
  DrawTTY(); // .TTY
  WEA47(); // WEA47
  Push(Read16(cc__i_OVBACK)); // 'OVBACK
  MODULE(); // MODULE
}


// ================================================
// 0xeb8c: WORD 'WEB8E' codep=0x224c wordp=0xeb8e params=0 returns=0
// ================================================

void WEB8E() // WEB8E
{
  TIME(); // TIME
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  Push(0x03e8); Push(0x0000);
  D_plus_(); // D+
  Push(pp_KEYTIME); // KEYTIME
  StoreD(); // D!
  Push(0x0fa0); Push(0x0000);
  D_plus_(); // D+
  Push(pp_ATIME); // ATIME
  StoreD(); // D!
}


// ================================================
// 0xebae: WORD 'NF-M' codep=0x4b3b wordp=0xebb7
// ================================================

void NF_dash_M() // NF-M
{
  switch(Pop()) // NF-M
  {
  case 1:
    WEB0F(); // WEB0F
    break;
  case 2:
    WEB52(); // WEB52
    break;
  case 4:
    WEB8E(); // WEB8E
    break;
  case 5:
    WEB75(); // WEB75
    break;
  case 6:
    WEB2D(); // WEB2D
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xebcf: WORD 'NF-MESS' codep=0x224c wordp=0xebdb
// ================================================
// entry

void NF_dash_MESS() // NF-MESS
{
  WE66E(); // WE66E
  NF_dash_M(); // NF-M case
}


// ================================================
// 0xebe1: WORD 'WEBE3' codep=0x224c wordp=0xebe3
// ================================================

void WEBE3() // WEBE3
{
  SET_STR_AS_PARAM("COMPUTING SUB-");
  DrawTTY(); // .TTY
  WEA7A(); // WEA7A
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("AL TRAJECTORY...", 16); // (.")
}


// ================================================
// 0xec0f: WORD 'WEC11' codep=0x224c wordp=0xec11
// ================================================

void WEC11() // WEC11
{
  SET_STR_AS_PARAM("INITIATING ");
  DrawTTY(); // .TTY
  WEA7A(); // WEA7A
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("AL MANEUVER...", 14); // (.")
}


// ================================================
// 0xec38: WORD 'WEC3A' codep=0x224c wordp=0xec3a
// ================================================

void WEC3A() // WEC3A
{
  SET_STR_AS_PARAM("COMMENCING ");
  DrawTTY(); // .TTY
  WEA86(); // WEA86
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" PENETRATION...", 15); // (.")
}


// ================================================
// 0xec62: WORD 'WEC64' codep=0x224c wordp=0xec64
// ================================================

void WEC64() // WEC64
{
  SET_STR_AS_PARAM("INITIATING DOCKING PROCEDURE...");
  DrawTTY(); // .TTY
}


// ================================================
// 0xec8a: WORD 'WEC8C' codep=0x224c wordp=0xec8c
// ================================================

void WEC8C() // WEC8C
{
  SET_STR_AS_PARAM("SCANNERS INDICATE UNIDENTIFIED OBJECT!");
  DrawTTY(); // .TTY
  Push(0x02bc);
  Push(0x1e78);
  Push(0x007d);
  Push(3);
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  Push(5);
  _gt_SND(); // >SND
}


// ================================================
// 0xecd1: WORD 'NS-M' codep=0x4b3b wordp=0xecda
// ================================================

void NS_dash_M() // NS-M
{
  switch(Pop()) // NS-M
  {
  case 0:
    WEBE3(); // WEBE3
    break;
  case 2:
    WEC3A(); // WEC3A
    break;
  case 4:
    WEC8C(); // WEC8C
    break;
  case 5:
    WEC64(); // WEC64
    break;
  case 6:
    WEC11(); // WEC11
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xecf2: WORD 'NS-MESS' codep=0x224c wordp=0xecfe
// ================================================
// entry

void NS_dash_MESS() // NS-MESS
{
  WE66E(); // WE66E
  NS_dash_M(); // NS-M case
}


// ================================================
// 0xed04: WORD 'WED06' codep=0x7394 wordp=0xed06
// ================================================
LoadDataType WED06 = {PLANETIDX, 0x07, 0x02, 0x17, 0x6c49};

// ================================================
// 0xed0c: WORD 'P-LSEED' codep=0x7394 wordp=0xed18
// ================================================
LoadDataType P_dash_LSEED = {PLANETIDX, 0x04, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed1e: WORD 'WED20' codep=0x7394 wordp=0xed20
// ================================================
LoadDataType WED20 = {PLANETIDX, 0x01, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed26: WORD 'WED28' codep=0x7420 wordp=0xed28
// ================================================
IFieldType WED28 = {CREWMEMBERIDX, 0x1a, 0x01};

// ================================================
// 0xed2b: WORD 'WED2D' codep=0x7420 wordp=0xed2d
// ================================================
IFieldType WED2D = {ASSIGN_CREWIDX, 0x14, 0x03};

// ================================================
// 0xed30: WORD 'WED32' codep=0x224c wordp=0xed32
// ================================================

void WED32() // WED32
{
  LoadData(P_dash_LSEED); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(1);
    return;
  }
  Push(2);
}


// ================================================
// 0xed44: WORD 'S>CM' codep=0x4b3b wordp=0xed4d
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
    WED32(); // WED32
    break;

  }
}

// ================================================
// 0xed5d: WORD 'WED5F' codep=0x224c wordp=0xed5f
// ================================================

void WED5F() // WED5F
{
  LoadData(WED20); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  S_gt_CM(); // S>CM case
}


// ================================================
// 0xed67: WORD 'OSET' codep=0x224c wordp=0xed70
// ================================================
// entry

void OSET() // OSET
{
  Push(6);
  NS_dash_MESS(); // NS-MESS
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  Push(pp_WE9E5); // WE9E5
  ON_2(); // ON_2
  WED5F(); // WED5F
  GetINST_dash_S(); // @INST-S
  Push(0);
  Push(0x0012);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    CI(); // CI
    Pop(); // DROP
  } else
  {
    LoadData(WED06); // from 'PLANET'
    Push(Read16(Pop())); //  @
  }
  Push(Read16(regsp)); // DUP
  Push(pp_GLOBALS); // GLOBALS
  Store_2(); // !_2
  Push(0xbcf9); // 'SET-PLAN'
  MODULE(); // MODULE
  Push(0xbd33); // 'INIT-'
  MODULE(); // MODULE
  MROTA(); // MROTA
  Push(0xbd9b); // 'MROTA'
  Push(pp__i_EXTERN); // 'EXTERN
  Store_2(); // !_2
  Push(-1);
  Push(pp_PLHI); // PLHI
  Store_2(); // !_2
  Push(0xc014); // 'BLDLI'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  Push(6);
  NF_dash_MESS(); // NF-MESS
}


// ================================================
// 0xedc8: WORD 'WEDCA' codep=0x224c wordp=0xedca
// ================================================

void WEDCA() // WEDCA
{
  WEA86(); // WEA86
  WEA57(); // WEA57
}


// ================================================
// 0xedd0: WORD 'WEDD2' codep=0x224c wordp=0xedd2
// ================================================

void WEDD2() // WEDD2
{
  SET_STR_AS_PARAM("INTER-STELLAR");
  WEA57(); // WEA57
}


// ================================================
// 0xede6: WORD 'WEDE8' codep=0x224c wordp=0xede8
// ================================================

void WEDE8() // WEDE8
{
  Push(0xc548); // 'OVFLU'
  MODULE(); // MODULE
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("...");
  DrawTTY(); // .TTY
  WEA93(); // WEA93
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" CLEAR", 6); // (.")
}


// ================================================
// 0xee07: WORD 'WEE09' codep=0x224c wordp=0xee09
// ================================================

void WEE09() // WEE09
{
  SET_STR_AS_PARAM("...");
  DrawTTY(); // .TTY
  WEAA2(); // WEAA2
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" TERMINATED", 11); // (.")
  Push(0xc090); // 'OV/STA'
  MODULE(); // MODULE
  Push(Read16(pp_SKIP2NE)); // SKIP2NE @
  if (Pop() != 0)
  {
    OSET(); // OSET
    Push(pp__ro_ENCOUN); // (ENCOUN
    Get_gt_C_plus_S(); // @>C+S
    Push(Read16(0x65e1+WE6F5.offset)&0xFF); // WE6F5<IFIELD> C@
    ICLOSE(); // ICLOSE
    Push(Pop() & (Read16(pp_IsAUTO)==0?1:0)); //  ?AUTO @ 0= AND
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(0);
    }
    Push(pp_FORCEPT); // FORCEPT
    _099(); // 099
    Push(pp_IsAUTO); // ?AUTO
    ON_2(); // ON_2
  }
  Push(!(Read16(pp_CONTEXT_3)==1?1:0)); // CONTEXT_3 @ 1 = NOT
  if (Pop() != 0)
  {
    Push(0xea60); Push(0x0000);
  } else
  {
    Push2Words("NULL");
  }
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_ENC_dash_TIM); // ENC-TIM
  StoreD(); // D!
}


// ================================================
// 0xee7b: WORD 'WEE7D' codep=0x224c wordp=0xee7d
// ================================================

void WEE7D() // WEE7D
{
  SET_STR_AS_PARAM("OUTSIDE ");
  DrawTTY(); // .TTY
  WEA7A(); // WEA7A
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("AL RANGE", 8); // (.")
  Push(Read16(pp_WE9E5)); // WE9E5 @
  if (Pop() == 0) return;
  WE9E9(); // WE9E9
}


// ================================================
// 0xeea5: WORD 'UF-M' codep=0x4b3b wordp=0xeeae
// ================================================

void UF_dash_M() // UF-M
{
  switch(Pop()) // UF-M
  {
  case 6:
    WEDCA(); // WEDCA
    break;
  case 2:
    WEDD2(); // WEDD2
    break;
  case 4:
    WEE09(); // WEE09
    break;
  case 5:
    WEDE8(); // WEDE8
    break;
  case 1:
    WEE7D(); // WEE7D
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xeec6: WORD 'UF-MESS' codep=0x224c wordp=0xeed2
// ================================================
// entry

void UF_dash_MESS() // UF-MESS
{
  WE66E(); // WE66E
  UF_dash_M(); // UF-M case
}


// ================================================
// 0xeed8: WORD 'WEEDA' codep=0x224c wordp=0xeeda
// ================================================

void WEEDA() // WEEDA
{
  SET_STR_AS_PARAM("LEAVING ");
  DrawTTY(); // .TTY
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("...", 3); // (.")
}


// ================================================
// 0xeef1: WORD 'WEEF3' codep=0x224c wordp=0xeef3
// ================================================

void WEEF3() // WEEF3
{
  WEA86(); // WEA86
  WEEDA(); // WEEDA
}


// ================================================
// 0xeef9: WORD 'WEEFB' codep=0x224c wordp=0xeefb
// ================================================

void WEEFB() // WEEFB
{
  WEA93(); // WEA93
  WEEDA(); // WEEDA
}


// ================================================
// 0xef01: WORD 'WEF03' codep=0x224c wordp=0xef03
// ================================================

void WEF03() // WEF03
{
  WEAA2(); // WEAA2
  WEEDA(); // WEEDA
}


// ================================================
// 0xef09: WORD 'WEF0B' codep=0x224c wordp=0xef0b
// ================================================

void WEF0B() // WEF0B
{
  WEA7A(); // WEA7A
  WEEDA(); // WEEDA
}


// ================================================
// 0xef11: WORD 'US-M' codep=0x4b3b wordp=0xef1a
// ================================================

void US_dash_M() // US-M
{
  switch(Pop()) // US-M
  {
  case 6:
    WEF0B(); // WEF0B
    break;
  case 2:
    WEEF3(); // WEEF3
    break;
  case 4:
    WEF03(); // WEF03
    break;
  case 5:
    WEEFB(); // WEEFB
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xef2e: WORD 'US-MESS' codep=0x224c wordp=0xef3a
// ================================================
// entry

void US_dash_MESS() // US-MESS
{
  WE66E(); // WE66E
  US_dash_M(); // US-M case
}


// ================================================
// 0xef40: WORD 'WEF42' codep=0x224c wordp=0xef42
// ================================================

void WEF42() // WEF42
{
  StoreCOLOR(); // !COLOR
  BEEP(); // BEEP
}


// ================================================
// 0xef48: WORD 'WEF4A' codep=0x224c wordp=0xef4a
// ================================================

void WEF4A() // WEF4A
{
  DrawTTY(); // .TTY
  DrawSORD(); // .SORD
}


// ================================================
// 0xef50: WORD 'WEF52' codep=0x224c wordp=0xef52
// ================================================

void WEF52() // WEF52
{
  GetColor(YELLOW);
  WEF42(); // WEF42
  SET_STR_AS_PARAM("FUEL SUPPLY LOW");
  WEF4A(); // WEF4A
}


// ================================================
// 0xef6c: WORD 'WEF6E' codep=0x224c wordp=0xef6e
// ================================================

void WEF6E() // WEF6E
{
  GetColor(PINK);
  WEF42(); // WEF42
  SET_STR_AS_PARAM("FUEL SUPPLY CRITICAL");
  WEF4A(); // WEF4A
}


// ================================================
// 0xef8d: WORD 'WEF8F' codep=0x224c wordp=0xef8f
// ================================================

void WEF8F() // WEF8F
{
  GetColor(RED);
  WEF42(); // WEF42
  SET_STR_AS_PARAM("OUT OF FUEL");
  WEF4A(); // WEF4A
}


// ================================================
// 0xefa5: WORD '.EX' codep=0x4b3b wordp=0xefad
// ================================================
// entry

void DrawEX() // .EX
{
  switch(Pop()) // .EX
  {
  case 2:
    WEF6E(); // WEF6E
    break;
  case 3:
    WEF52(); // WEF52
    break;
  default:
    WEF8F(); // WEF8F
    break;

  }
}

// ================================================
// 0xefb9: WORD 'WEFBB' codep=0x224c wordp=0xefbb params=0 returns=0
// ================================================

void WEFBB() // WEFBB
{
  Push(Read16(0x65e1+WE6F0.offset)&0xFF); // WE6F0<IFIELD> C@
  if (Pop() == 0) return;
  CI(); // CI
  Push(Pop() | Pop()); // OR
  Push(Pop() & Read16(pp_STARDAT)); //  STARDAT @ AND
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xefd3: WORD 'WEFD5' codep=0x7420 wordp=0xefd5
// ================================================
IFieldType WEFD5 = {VESSELIDX, 0x15, 0x04};

// ================================================
// 0xefd8: WORD 'WEFDA' codep=0x1d29 wordp=0xefda
// ================================================
// 0xefda: db 0x3a 0x20 ': '

// ================================================
// 0xefdc: WORD 'DMSG' codep=0x224c wordp=0xefe5
// ================================================
// entry

void DMSG() // DMSG
{
  unsigned short int i, imax;
  Push(pp_WEFDA); // WEFDA
  _099(); // 099
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash__2(); // ?ICONS-_2

  i = 0;
  imax = Pop();
  do // (DO)
  {
    POINT_gt_I(); // POINT>I
    GetID(); // @ID
    Push(Pop()==0x002b?1:0); //  0x002b =
    if (Pop() != 0)
    {
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      Push(0x65e1+WEFD5.offset); // WEFD5<IFIELD>
      _2_at_(); // 2@
      Push(Pop() | Pop()); // OR
      ICLOSE(); // ICLOSE
      if (Pop() != 0)
      {
        Push(pp_WEFDA); // WEFDA
        ON_2(); // ON_2
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_WEFDA)); // WEFDA @
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("READY TO PICK UP DEBRIS");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf04b: WORD 'WF04D' codep=0x224c wordp=0xf04d params=1 returns=1
// ================================================

void WF04D() // WF04D
{
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0xf053: WORD 'WF055' codep=0x224c wordp=0xf055 params=1 returns=1
// ================================================

void WF055() // WF055
{
  Push(Pop()==4?1:0); //  4 =
  if (Pop() != 0)
  {
    Push(1);
    return;
  }
  Push(3);
}


// ================================================
// 0xf067: WORD 'WF069' codep=0x224c wordp=0xf069 params=1 returns=1
// ================================================

void WF069() // WF069
{
  Pop(); // DROP
  Push(2);
}


// ================================================
// 0xf06f: WORD 'WF071' codep=0x224c wordp=0xf071 params=1 returns=1
// ================================================

void WF071() // WF071
{
  Pop(); // DROP
  Push(4);
}


// ================================================
// 0xf077: WORD 'WF079' codep=0x224c wordp=0xf079 params=1 returns=1
// ================================================

void WF079() // WF079
{
  Pop(); // DROP
  Push(Read16(pp_PAST)); // PAST @
  if (Pop() != 0)
  {
    Push(3);
    return;
  }
  Push(5);
}


// ================================================
// 0xf08d: WORD 'WF08F' codep=0x224c wordp=0xf08f params=0 returns=1
// ================================================

void WF08F() // WF08F
{
  Push(Read16(pp_PAST)); // PAST @
  _gt_FLAG(); // >FLAG
  Push(Read16(0x65e1+WE6E6.offset)&0xFF); // WE6E6<IFIELD> C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(!Read16(pp_PAST)); // PAST @ NOT
  Push(Read16(0x65e1+WE6EB.offset)&0xFF); // WE6EB<IFIELD> C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  WEFBB(); // WEFBB
}


// ================================================
// 0xf0b1: WORD '(CTXT)' codep=0x4b3b wordp=0xf0bc
// ================================================
// entry

void _ro_CTXT_rc_() // (CTXT)
{
  switch(Pop()) // (CTXT)
  {
  case 32:
    WF04D(); // WF04D
    break;
  case 11:
    WF055(); // WF055
    break;
  case 23:
    WF069(); // WF069
    break;
  case 61:
    WF071(); // WF071
    break;
  case 18:
    WF079(); // WF079
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf0d4: WORD 'WF0D6' codep=0x1d29 wordp=0xf0d6
// ================================================
// 0xf0d6: db 0x3a 0x20 ': '

// ================================================
// 0xf0d8: WORD 'WF0DA' codep=0x1d29 wordp=0xf0da
// ================================================
// 0xf0da: db 0x3a 0x20 ': '

// ================================================
// 0xf0dc: WORD 'WF0DE' codep=0x1d29 wordp=0xf0de
// ================================================
// 0xf0de: db 0x3a 0x20 ': '

// ================================================
// 0xf0e0: WORD 'WF0E2' codep=0x1d29 wordp=0xf0e2
// ================================================
// 0xf0e2: db 0x3a 0x20 ': '

// ================================================
// 0xf0e4: WORD 'WF0E6' codep=0x224c wordp=0xf0e6 params=0 returns=2
// ================================================

void WF0E6() // WF0E6
{
  Push(Read16(pp_WF0D6)); // WF0D6 @
  Push(0x0096);
  _gt_(); // >
  Push(Read16(pp_WF0DE)); // WF0DE @
  Push(8);
  _slash_(); // /
  Push(Pop() * 8); //  8 *
  Push(Read16(pp_WF0E2)); // WF0E2 @
  Push(8);
  _slash_(); // /
  Push(Pop() * 8); //  8 *
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(Read16(pp_WF0DA)); // WF0DA @
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    SET_STR_AS_PARAM("MOTION DETECTED AT");
    DrawTTY(); // .TTY
    Push(pp_WF0DA); // WF0DA
    _099(); // 099
  }
  SET_STR_AS_PARAM(" X:");
  DrawTTY(); // .TTY
  Push(Read16(pp_WF0DE)); // WF0DE @
  Push(0xfff8);
  _slash_(); // /
  Draw(); // .
  Push(7);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  PRINT(" Y:", 3); // (.")
  Push(Read16(pp_WF0E2)); // WF0E2 @
  Push(0xfff8);
  _slash_(); // /
  Draw(); // .
}


// ================================================
// 0xf165: WORD 'WF167' codep=0x7420 wordp=0xf167
// ================================================
IFieldType WF167 = {ENCOUNTERIDX, 0x11, 0x01};

// ================================================
// 0xf16a: WORD 'WF16C' codep=0x7420 wordp=0xf16c
// ================================================
IFieldType WF16C = {ENCOUNTERIDX, 0x12, 0x01};

// ================================================
// 0xf16f: WORD 'WF171' codep=0x7420 wordp=0xf171
// ================================================
IFieldType WF171 = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xf174: WORD 'WF176' codep=0x224c wordp=0xf176 params=3 returns=1
// ================================================

void WF176() // WF176
{
  _star__slash_(); // */
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Push(Pop() * Read16(cc__star_MAPSCA)); //  *MAPSCA *
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf18c: WORD 'WF18E' codep=0x224c wordp=0xf18e params=0 returns=2
// ================================================

void WF18E() // WF18E
{
  unsigned short int a, b;
  Push(Read16(pp_CONTEXT_3)==2?1:0); // CONTEXT_3 @ 2 =
  if (Pop() != 0)
  {
    Push(3);
    Push(4);
  } else
  {
    Push(1);
    Push(2);
  }
  Push(0);
  Push(Read16(regsp)); // DUP
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(Pop() + Pop()); // +
  b = Pop(); // >R
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  SWAP(); // SWAP
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(b); // I
    Push(a); // I'
    WF176(); // WF176
  }
  Push(pp_WF0E2); // WF0E2
  Store_2(); // !_2
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(b); // I
    Push(a); // I'
    WF176(); // WF176
  }
  Push(pp_WF0DE); // WF0DE
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
  Push(b); // R>
  Push(a); // R>
  Pop(); Pop(); // 2DROP
  WF0E6(); // WF0E6
}


// ================================================
// 0xf1fe: WORD 'WF200' codep=0x224c wordp=0xf200 params=0 returns=1
// ================================================

void WF200() // WF200
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x003d?1:0); //  0x003d =
  if (Pop() != 0)
  {
    Push(0x65e1+WF167.offset); // WF167<IFIELD>
    _plus__dash__at_(); // +-@
    Push(0xffc1);
    Push(0x0040);
    WITHIN(); // WITHIN
    Push(0x65e1+WF16C.offset); // WF16C<IFIELD>
    _plus__dash__at_(); // +-@
    Push(0xffc0);
    Push(0x0040);
    WITHIN(); // WITHIN
    Push(Pop() & Pop()); // AND
    Push((Pop() | (Read16(pp_CONTEXT_3)==2?1:0)) & (Read16(0x65e1+WF171.offset)&0xFF)); //  CONTEXT_3 @ 2 = OR WF171<IFIELD> C@ AND
    WF08F(); // WF08F
    Push(Pop() & Pop()); // AND
    return;
  }
  Push(0);
}


// ================================================
// 0xf246: WORD 'WF248' codep=0x224c wordp=0xf248 params=0 returns=0
// ================================================

void WF248() // WF248
{
  Push(0x65e1+WF167.offset); // WF167<IFIELD>
  _plus__dash__at_(); // +-@
  Push(Pop() + Read16(pp_WF0DE)); //  WF0DE @ +
  Push(0x65e1+WF167.offset); // WF167<IFIELD>
  C_ex__2(); // C!_2
  Push(0x65e1+WF16C.offset); // WF16C<IFIELD>
  _plus__dash__at_(); // +-@
  Push(Pop() + Read16(pp_WF0E2)); //  WF0E2 @ +
  Push(0x65e1+WF16C.offset); // WF16C<IFIELD>
  C_ex__2(); // C!_2
  Push(Read16(pp_WF0DE)); // WF0DE @
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  _plus__ex__2(); // +!_2
  Push(Read16(pp_WF0E2)); // WF0E2 @
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf276: WORD 'WF278' codep=0x224c wordp=0xf278
// ================================================

void WF278() // WF278
{
  GetIX(); // @IX
  Push(Pop() + Read16(pp_WF0DE)); //  WF0DE @ +
  StoreIX(); // !IX
  GetIY(); // @IY
  Push(Pop() + Read16(pp_WF0E2)); //  WF0E2 @ +
  StoreIY(); // !IY
}


// ================================================
// 0xf28e: WORD 'WF290' codep=0x1d29 wordp=0xf290
// ================================================
// 0xf290: db 0x3a 0x20 ': '

// ================================================
// 0xf292: WORD 'TRAK-E' codep=0x224c wordp=0xf29d
// ================================================
// entry

void TRAK_dash_E() // TRAK-E
{
  unsigned short int i, imax;
  Push(pp_WF290); // WF290
  _099(); // 099
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WED2D.offset); // WED2D<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+WED28.offset)&0xFF); // WED28<IFIELD> C@
  Push(pp_WF0D6); // WF0D6
  Store_2(); // !_2
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(pp_WF0DA); // WF0DA
  ON_2(); // ON_2
  Push(Read16(pp_CONTEXT_3)==2?1:0); // CONTEXT_3 @ 2 =
  if (Pop() != 0)
  {
    Push(pp_IGLOBAL); // IGLOBAL
  } else
  {
    Push(pp_ILOCAL); // ILOCAL
  }

  i = 0;
  imax = Read16(Pop()) - 1; //  @ 1-
  do // (DO)
  {
    Push(i); // I
    POINT_gt_I(); // POINT>I
    GetID(); // @ID
    Push(Pop()==0x00fe?1:0); //  0x00fe =
    if (Pop() != 0)
    {
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      WF200(); // WF200
      if (Pop() != 0)
      {
        WF18E(); // WF18E
        WF278(); // WF278
        WF248(); // WF248
      }
      Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
      Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
      ICLOSE(); // ICLOSE
      Push(Read16(pp_XABS)); // XABS @
      Push(Read16(pp_YABS)); // YABS @
      D_eq_(); // D=
      if (Pop() != 0)
      {
        Push(pp_WF290); // WF290
        ON_2(); // ON_2
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_STAR_dash_HR)); // STAR-HR @
  Push(pp_TRAK_dash_HR); // TRAK-HR
  Store_2(); // !_2
  Push(Read16(pp_WF290)); // WF290 @
  if (Pop() == 0) return;
  Push(Read16(pp__i_FLY)); // 'FLY @
  MODULE(); // MODULE
}


// ================================================
// 0xf32f: WORD 'WF331' codep=0x224c wordp=0xf331 params=0 returns=1
// ================================================

void WF331() // WF331
{
  Push(Read16(pp__i_TRAK)); // 'TRAK @
}


// ================================================
// 0xf337: WORD 'WF339' codep=0x2214 wordp=0xf339
// ================================================
// 0xf339: dw 0x3a48

// ================================================
// 0xf33b: WORD 'WF33D' codep=0x224c wordp=0xf33d params=0 returns=1
// ================================================

void WF33D() // WF33D
{
  Push(0xae81); // 'CEX+WAX'
}


// ================================================
// 0xf343: WORD '@'EXT' codep=0x4b3b wordp=0xf34d
// ================================================

void Get_i_EXT() // @'EXT
{
  switch(Pop()) // @'EXT
  {
  case 2:
    WF331(); // WF331
    break;
  case 3:
    WF331(); // WF331
    break;
  case 4:
    WF33D(); // WF33D
    break;
  default:
    Push(Read16(cc_WF339)); // WF339
    break;

  }
}

// ================================================
// 0xf35d: WORD '(!'EXT)' codep=0x224c wordp=0xf369
// ================================================
// entry

void _ro__ex__i_EXT_rc_() // (!'EXT)
{
  Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
  Get_i_EXT(); // @'EXT case
  Push(pp__i_EXTERN); // 'EXTERN
  Store_2(); // !_2
}


// ================================================
// 0xf375: WORD '+A-VESS' codep=0x224c wordp=0xf381
// ================================================
// entry

void _plus_A_dash_VESS() // +A-VESS
{
  unsigned short int i, imax;
  Push(pp__ro_ENCOUN); // (ENCOUN
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+WE6C3.offset)&0xFF); // WE6C3<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(Pop() - 2); //  2-
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  RRND(); // RRND
  Push(1);
  MAX(); // MAX
  Push(Read16(0x65e1+WE6DC.offset)&0xFF); // WE6DC<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(Read16(0x65e1+WE6E1.offset)&0xFF); // WE6E1<IFIELD> C@
  ROT(); // ROT
  Push(0x00ff);
  _st_(); // <
  Push(Pop() * Pop()); // *
  _dash_(); // -
  MIN(); // MIN
  Push(0x0014 - Read16(pp_AVCNT)); // 0x0014 AVCNT @ -
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_AVCNT); // AVCNT
  _plus__ex__2(); // +!_2
  Push(Read16(regsp)); // DUP
  Push(pp__n_VESS); // #VESS
  _plus__ex__2(); // +!_2

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(0x0019);
    do
    {
      Push(0);
      Push(4);
      RRND(); // RRND
      GET_dash_VES(); // GET-VES case
      Push(Read16(Pop())&0xFF); //  C@
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    } while(Pop() == 0);
    WE79C(); // WE79C
    i++;
  } while(i<imax); // (LOOP)

  WE7CC(); // WE7CC
  ICLOSE(); // ICLOSE
  Push(Read16(pp_IsCALLIN)); // ?CALLIN @
  if (Pop() == 0) return;
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  StoreD(); // D!
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xf3ff: WORD 'WF401' codep=0x224c wordp=0xf401 params=0 returns=0
// ================================================

void WF401() // WF401
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xf407: WORD 'WF409' codep=0x224c wordp=0xf409 params=2 returns=0
// ================================================
// orphan

void WF409() // WF409
{
  SWAP(); // SWAP
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  StoreD(); // D!
}


// ================================================
// 0xf411: WORD 'WF413' codep=0x224c wordp=0xf413 params=0 returns=1
// ================================================

void WF413() // WF413
{
  GetINST_dash_C(); // @INST-C
  Push(Read16(regsp)); // DUP
  Push(Pop()==0x0018?1:0); //  0x0018 =
  SWAP(); // SWAP
  Push(Pop()==0x0020?1:0); //  0x0020 =
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf429: WORD 'WF42B' codep=0x7420 wordp=0xf42b
// ================================================
IFieldType WF42B = {STARSYSTEMIDX, 0x11, 0x01};

// ================================================
// 0xf42e: WORD 'WF430' codep=0x1d29 wordp=0xf430
// ================================================
// 0xf430: db 0x3a 0x20 ': '

// ================================================
// 0xf432: WORD 'WF434' codep=0x1d29 wordp=0xf434
// ================================================
// 0xf434: db 0x3a 0x20 ': '

// ================================================
// 0xf436: WORD 'WF438' codep=0x224c wordp=0xf438 params=0 returns=1
// ================================================

void WF438() // WF438
{
  unsigned short int i, imax;

  i = Read16(pp_WF430) + 1; // WF430 @ 1+
  imax = 9;
  do // (DO)
  {
    Push(i); // I
    BIT(); // BIT
    Push(Pop() & Read16(pp_WF434)); //  WF434 @ AND
    if (Pop() != 0)
    {
      Push(i); // I
      Push(pp_WF430); // WF430
      Store_2(); // !_2
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_WF430)); // WF430 @
}


// ================================================
// 0xf462: WORD 'WF464' codep=0x224c wordp=0xf464
// ================================================

void WF464() // WF464
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x0020?1:0); //  0x0020 =
  if (Pop() != 0)
  {
    WF438(); // WF438
  } else
  {
    Push(0);
  }
  Push(0x000b);
  Push(4);
  ICREATE(); // ICREATE
  IEXTRAC(); // IEXTRAC
  _2OVER(); // 2OVER
  IINSERT(); // IINSERT
  IsNULL(); // ?NULL
  if (Pop() != 0)
  {
    CI_i_(); // CI'
    IINSERT(); // IINSERT
    IFIRST(); // IFIRST
  } else
  {
    CI(); // CI
    _st_INSERT(); // <INSERT
    IsFIRST(); // ?FIRST
    if (Pop() != 0)
    {
      IPREV(); // IPREV
      MAKE1ST(); // MAKE1ST
    } else
    {
      IPREV(); // IPREV
    }
  }
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf4b0: WORD 'WF4B2' codep=0x224c wordp=0xf4b2
// ================================================

void WF4B2() // WF4B2
{
  IOPEN(); // IOPEN
  while(1)
  {
    Is_dash_NULL(); // ?-NULL
    if (Pop() == 0) break;

    IEXTRAC(); // IEXTRAC
    CI_i_(); // CI'
    _st_INSERT(); // <INSERT
    ICLOSE(); // ICLOSE
    IsFIRST(); // ?FIRST
    if (Pop() != 0)
    {
      IPREV(); // IPREV
      MAKE1ST(); // MAKE1ST
      INEXT(); // INEXT
    }
    IOPEN(); // IOPEN
  }
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
}


// ================================================
// 0xf4da: WORD '>ORBITS' codep=0x224c wordp=0xf4e6
// ================================================
// entry

void _gt_ORBITS() // >ORBITS
{
  Push(pp_WF430); // WF430
  _099(); // 099
  WF401(); // WF401
  Push(Read16(0x65e1+WF42B.offset)&0xFF); // WF42B<IFIELD> C@
  Push(pp_WF434); // WF434
  Store_2(); // !_2
  IOPEN(); // IOPEN
  Push(0xf413); // 'WF413'
  Push(0xf464); // 'WF464'
  EACH(); // EACH
  WE666(); // WE666
}


// ================================================
// 0xf504: WORD 'WF506' codep=0x224c wordp=0xf506 params=0 returns=0
// ================================================

void WF506() // WF506
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x000b?1:0); //  0x000b =
  GetINST_dash_S(); // @INST-S
  Push(Pop()==4?1:0); //  4 =
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    WF4B2(); // WF4B2
    return;
  }
  INEXT(); // INEXT
}


// ================================================
// 0xf524: WORD 'ORBITS>' codep=0x224c wordp=0xf530 params=0 returns=0
// ================================================
// entry

void ORBITS_gt_() // ORBITS>
{
  WF401(); // WF401
  IOPEN(); // IOPEN
  while(1)
  {
    IsLAST(); // ?LAST
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    WF506(); // WF506
  }
  Is_dash_NULL(); // ?-NULL
  if (Pop() != 0)
  {
    WF506(); // WF506
  }
  WE666(); // WE666
}

// 0xf54e: db 0x48 0x4d 0x49 0x53 0x43 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'HMISC-VOC_________ '

