// ====== OVERLAY 'HYPERMSG-OV' ======
// store offset = 0xe650
// overlay size   = 0x0f10

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe666  codep:0x224c parp:0xe666 size:0x0006 C-string:'UNK_0xe666'
//      UNK_0xe66e  codep:0x224c parp:0xe66e size:0x000c C-string:'UNK_0xe66e'
//      UNK_0xe67c  codep:0x2214 parp:0xe67c size:0x0002 C-string:'UNK_0xe67c'
//      UNK_0xe680  codep:0x2214 parp:0xe680 size:0x0002 C-string:'UNK_0xe680'
//      UNK_0xe684  codep:0x2214 parp:0xe684 size:0x0002 C-string:'UNK_0xe684'
//      UNK_0xe688  codep:0x2214 parp:0xe688 size:0x0002 C-string:'UNK_0xe688'
//      UNK_0xe68c  codep:0x224c parp:0xe68c size:0x000e C-string:'UNK_0xe68c'
//      UNK_0xe69c  codep:0x7420 parp:0xe69c size:0x0003 C-string:'UNK_0xe69c'
//      UNK_0xe6a1  codep:0x7394 parp:0xe6a1 size:0x0006 C-string:'UNK_0xe6a1'
//      UNK_0xe6a9  codep:0x7420 parp:0xe6a9 size:0x0003 C-string:'UNK_0xe6a9'
//      UNK_0xe6ae  codep:0x7394 parp:0xe6ae size:0x0006 C-string:'UNK_0xe6ae'
//      UNK_0xe6b6  codep:0x7394 parp:0xe6b6 size:0x0006 C-string:'UNK_0xe6b6'
//      UNK_0xe6be  codep:0x7420 parp:0xe6be size:0x0003 C-string:'UNK_0xe6be'
//      UNK_0xe6c3  codep:0x7420 parp:0xe6c3 size:0x0003 C-string:'UNK_0xe6c3'
//      UNK_0xe6c8  codep:0x7420 parp:0xe6c8 size:0x0003 C-string:'UNK_0xe6c8'
//      UNK_0xe6cd  codep:0x7420 parp:0xe6cd size:0x0003 C-string:'UNK_0xe6cd'
//      UNK_0xe6d2  codep:0x7420 parp:0xe6d2 size:0x0003 C-string:'UNK_0xe6d2'
//      UNK_0xe6d7  codep:0x7420 parp:0xe6d7 size:0x0003 C-string:'UNK_0xe6d7'
//      UNK_0xe6dc  codep:0x7420 parp:0xe6dc size:0x0003 C-string:'UNK_0xe6dc'
//      UNK_0xe6e1  codep:0x7420 parp:0xe6e1 size:0x0003 C-string:'UNK_0xe6e1'
//      UNK_0xe6e6  codep:0x7420 parp:0xe6e6 size:0x0003 C-string:'UNK_0xe6e6'
//      UNK_0xe6eb  codep:0x7420 parp:0xe6eb size:0x0003 C-string:'UNK_0xe6eb'
//      UNK_0xe6f0  codep:0x7420 parp:0xe6f0 size:0x0003 C-string:'UNK_0xe6f0'
//      UNK_0xe6f5  codep:0x7420 parp:0xe6f5 size:0x0003 C-string:'UNK_0xe6f5'
//         GET-VES  codep:0x4b3b parp:0xe704 size:0x0010 C-string:'GET_dash_VES'
//      UNK_0xe716  codep:0x224c parp:0xe716 size:0x0070 C-string:'UNK_0xe716'
//      UNK_0xe788  codep:0x224c parp:0xe788 size:0x0012 C-string:'UNK_0xe788'
//      UNK_0xe79c  codep:0x224c parp:0xe79c size:0x002e C-string:'UNK_0xe79c'
//      UNK_0xe7cc  codep:0x224c parp:0xe7cc size:0x0022 C-string:'UNK_0xe7cc'
//      UNK_0xe7f0  codep:0x224c parp:0xe7f0 size:0x0056 C-string:'UNK_0xe7f0'
//         ?LIQUID  codep:0x224c parp:0xe852 size:0x0096 C-string:'_ask_LIQUID'
//      UNK_0xe8ea  codep:0x224c parp:0xe8ea size:0x001e C-string:'UNK_0xe8ea'
//      UNK_0xe90a  codep:0x224c parp:0xe90a size:0x0010 C-string:'UNK_0xe90a'
//      UNK_0xe91c  codep:0x224c parp:0xe91c size:0x001c C-string:'UNK_0xe91c'
//      UNK_0xe93a  codep:0x224c parp:0xe93a size:0x0024 C-string:'UNK_0xe93a'
//      UNK_0xe960  codep:0x224c parp:0xe960 size:0x0014 C-string:'UNK_0xe960'
//      UNK_0xe976  codep:0x224c parp:0xe976 size:0x0012 C-string:'UNK_0xe976'
//      UNK_0xe98a  codep:0x224c parp:0xe98a size:0x0016 C-string:'UNK_0xe98a'
//      UNK_0xe9a2  codep:0x224c parp:0xe9a2 size:0x001a C-string:'UNK_0xe9a2'
//      DISP-SETUP  codep:0x4b3b parp:0xe9cb size:0x0018 C-string:'DISP_dash_SETUP'
//      UNK_0xe9e5  codep:0x1d29 parp:0xe9e5 size:0x0002 C-string:'UNK_0xe9e5'
//      UNK_0xe9e9  codep:0x224c parp:0xe9e9 size:0x002e C-string:'UNK_0xe9e9'
//      UNK_0xea19  codep:0x224c parp:0xea19 size:0x002c C-string:'UNK_0xea19'
//      UNK_0xea47  codep:0x224c parp:0xea47 size:0x000e C-string:'UNK_0xea47'
//      UNK_0xea57  codep:0x224c parp:0xea57 size:0x0021 C-string:'UNK_0xea57'
//      UNK_0xea7a  codep:0x224c parp:0xea7a size:0x000a C-string:'UNK_0xea7a'
//      UNK_0xea86  codep:0x224c parp:0xea86 size:0x000b C-string:'UNK_0xea86'
//      UNK_0xea93  codep:0x224c parp:0xea93 size:0x000d C-string:'UNK_0xea93'
//      UNK_0xeaa2  codep:0x224c parp:0xeaa2 size:0x000e C-string:'UNK_0xeaa2'
//      UNK_0xeab2  codep:0x224c parp:0xeab2 size:0x0016 C-string:'UNK_0xeab2'
//      UNK_0xeaca  codep:0x224c parp:0xeaca size:0x0015 C-string:'UNK_0xeaca'
//      UNK_0xeae1  codep:0x224c parp:0xeae1 size:0x002c C-string:'UNK_0xeae1'
//      UNK_0xeb0f  codep:0x224c parp:0xeb0f size:0x001c C-string:'UNK_0xeb0f'
//      UNK_0xeb2d  codep:0x224c parp:0xeb2d size:0x0023 C-string:'UNK_0xeb2d'
//      UNK_0xeb52  codep:0x224c parp:0xeb52 size:0x0021 C-string:'UNK_0xeb52'
//      UNK_0xeb75  codep:0x224c parp:0xeb75 size:0x0017 C-string:'UNK_0xeb75'
//      UNK_0xeb8e  codep:0x224c parp:0xeb8e size:0x0020 C-string:'UNK_0xeb8e'
//            NF-M  codep:0x4b3b parp:0xebb7 size:0x0018 C-string:'NF_dash_M'
//         NF-MESS  codep:0x224c parp:0xebdb size:0x0006 C-string:'NF_dash_MESS'
//      UNK_0xebe3  codep:0x224c parp:0xebe3 size:0x002c C-string:'UNK_0xebe3'
//      UNK_0xec11  codep:0x224c parp:0xec11 size:0x0027 C-string:'UNK_0xec11'
//      UNK_0xec3a  codep:0x224c parp:0xec3a size:0x0028 C-string:'UNK_0xec3a'
//      UNK_0xec64  codep:0x224c parp:0xec64 size:0x0026 C-string:'UNK_0xec64'
//      UNK_0xec8c  codep:0x224c parp:0xec8c size:0x0045 C-string:'UNK_0xec8c'
//            NS-M  codep:0x4b3b parp:0xecda size:0x0018 C-string:'NS_dash_M'
//         NS-MESS  codep:0x224c parp:0xecfe size:0x0006 C-string:'NS_dash_MESS'
//      UNK_0xed06  codep:0x7394 parp:0xed06 size:0x0006 C-string:'UNK_0xed06'
//         P-LSEED  codep:0x7394 parp:0xed18 size:0x0006 C-string:'P_dash_LSEED'
//      UNK_0xed20  codep:0x7394 parp:0xed20 size:0x0006 C-string:'UNK_0xed20'
//      UNK_0xed28  codep:0x7420 parp:0xed28 size:0x0003 C-string:'UNK_0xed28'
//      UNK_0xed2d  codep:0x7420 parp:0xed2d size:0x0003 C-string:'UNK_0xed2d'
//      UNK_0xed32  codep:0x224c parp:0xed32 size:0x0012 C-string:'UNK_0xed32'
//            S>CM  codep:0x4b3b parp:0xed4d size:0x0010 C-string:'S_gt_CM'
//      UNK_0xed5f  codep:0x224c parp:0xed5f size:0x0008 C-string:'UNK_0xed5f'
//            OSET  codep:0x224c parp:0xed70 size:0x0058 C-string:'OSET'
//      UNK_0xedca  codep:0x224c parp:0xedca size:0x0006 C-string:'UNK_0xedca'
//      UNK_0xedd2  codep:0x224c parp:0xedd2 size:0x0014 C-string:'UNK_0xedd2'
//      UNK_0xede8  codep:0x224c parp:0xede8 size:0x001f C-string:'UNK_0xede8'
//      UNK_0xee09  codep:0x224c parp:0xee09 size:0x0072 C-string:'UNK_0xee09'
//      UNK_0xee7d  codep:0x224c parp:0xee7d size:0x0028 C-string:'UNK_0xee7d'
//            UF-M  codep:0x4b3b parp:0xeeae size:0x0018 C-string:'UF_dash_M'
//         UF-MESS  codep:0x224c parp:0xeed2 size:0x0006 C-string:'UF_dash_MESS'
//      UNK_0xeeda  codep:0x224c parp:0xeeda size:0x0017 C-string:'UNK_0xeeda'
//      UNK_0xeef3  codep:0x224c parp:0xeef3 size:0x0006 C-string:'UNK_0xeef3'
//      UNK_0xeefb  codep:0x224c parp:0xeefb size:0x0006 C-string:'UNK_0xeefb'
//      UNK_0xef03  codep:0x224c parp:0xef03 size:0x0006 C-string:'UNK_0xef03'
//      UNK_0xef0b  codep:0x224c parp:0xef0b size:0x0006 C-string:'UNK_0xef0b'
//            US-M  codep:0x4b3b parp:0xef1a size:0x0014 C-string:'US_dash_M'
//         US-MESS  codep:0x224c parp:0xef3a size:0x0006 C-string:'US_dash_MESS'
//      UNK_0xef42  codep:0x224c parp:0xef42 size:0x0006 C-string:'UNK_0xef42'
//      UNK_0xef4a  codep:0x224c parp:0xef4a size:0x0006 C-string:'UNK_0xef4a'
//      UNK_0xef52  codep:0x224c parp:0xef52 size:0x001a C-string:'UNK_0xef52'
//      UNK_0xef6e  codep:0x224c parp:0xef6e size:0x001f C-string:'UNK_0xef6e'
//      UNK_0xef8f  codep:0x224c parp:0xef8f size:0x0016 C-string:'UNK_0xef8f'
//             .EX  codep:0x4b3b parp:0xefad size:0x000c C-string:'_dot_EX'
//      UNK_0xefbb  codep:0x224c parp:0xefbb size:0x0018 C-string:'UNK_0xefbb'
//      UNK_0xefd5  codep:0x7420 parp:0xefd5 size:0x0003 C-string:'UNK_0xefd5'
//      UNK_0xefda  codep:0x1d29 parp:0xefda size:0x0002 C-string:'UNK_0xefda'
//            DMSG  codep:0x224c parp:0xefe5 size:0x0066 C-string:'DMSG'
//      UNK_0xf04d  codep:0x224c parp:0xf04d size:0x0006 C-string:'UNK_0xf04d'
//      UNK_0xf055  codep:0x224c parp:0xf055 size:0x0012 C-string:'UNK_0xf055'
//      UNK_0xf069  codep:0x224c parp:0xf069 size:0x0006 C-string:'UNK_0xf069'
//      UNK_0xf071  codep:0x224c parp:0xf071 size:0x0006 C-string:'UNK_0xf071'
//      UNK_0xf079  codep:0x224c parp:0xf079 size:0x0014 C-string:'UNK_0xf079'
//      UNK_0xf08f  codep:0x224c parp:0xf08f size:0x0022 C-string:'UNK_0xf08f'
//          (CTXT)  codep:0x4b3b parp:0xf0bc size:0x0018 C-string:'_ro_CTXT_rc_'
//      UNK_0xf0d6  codep:0x1d29 parp:0xf0d6 size:0x0002 C-string:'UNK_0xf0d6'
//      UNK_0xf0da  codep:0x1d29 parp:0xf0da size:0x0002 C-string:'UNK_0xf0da'
//      UNK_0xf0de  codep:0x1d29 parp:0xf0de size:0x0002 C-string:'UNK_0xf0de'
//      UNK_0xf0e2  codep:0x1d29 parp:0xf0e2 size:0x0002 C-string:'UNK_0xf0e2'
//      UNK_0xf0e6  codep:0x224c parp:0xf0e6 size:0x007f C-string:'UNK_0xf0e6'
//      UNK_0xf167  codep:0x7420 parp:0xf167 size:0x0003 C-string:'UNK_0xf167'
//      UNK_0xf16c  codep:0x7420 parp:0xf16c size:0x0003 C-string:'UNK_0xf16c'
//      UNK_0xf171  codep:0x7420 parp:0xf171 size:0x0003 C-string:'UNK_0xf171'
//      UNK_0xf176  codep:0x224c parp:0xf176 size:0x0016 C-string:'UNK_0xf176'
//      UNK_0xf18e  codep:0x224c parp:0xf18e size:0x0070 C-string:'UNK_0xf18e'
//      UNK_0xf200  codep:0x224c parp:0xf200 size:0x0046 C-string:'UNK_0xf200'
//      UNK_0xf248  codep:0x224c parp:0xf248 size:0x002e C-string:'UNK_0xf248'
//      UNK_0xf278  codep:0x224c parp:0xf278 size:0x0016 C-string:'UNK_0xf278'
//      UNK_0xf290  codep:0x1d29 parp:0xf290 size:0x0002 C-string:'UNK_0xf290'
//          TRAK-E  codep:0x224c parp:0xf29d size:0x0092 C-string:'TRAK_dash_E'
//      UNK_0xf331  codep:0x224c parp:0xf331 size:0x0006 C-string:'UNK_0xf331'
//      UNK_0xf339  codep:0x2214 parp:0xf339 size:0x0002 C-string:'UNK_0xf339'
//      UNK_0xf33d  codep:0x224c parp:0xf33d size:0x0006 C-string:'UNK_0xf33d'
//           @'EXT  codep:0x4b3b parp:0xf34d size:0x0010 C-string:'_at__i_EXT'
//         (!'EXT)  codep:0x224c parp:0xf369 size:0x000c C-string:'_ro__ex__i_EXT_rc_'
//         +A-VESS  codep:0x224c parp:0xf381 size:0x007e C-string:'_plus_A_dash_VESS'
//      UNK_0xf401  codep:0x224c parp:0xf401 size:0x0028 C-string:'UNK_0xf401'
//      UNK_0xf42b  codep:0x7420 parp:0xf42b size:0x0003 C-string:'UNK_0xf42b'
//      UNK_0xf430  codep:0x1d29 parp:0xf430 size:0x0002 C-string:'UNK_0xf430'
//      UNK_0xf434  codep:0x1d29 parp:0xf434 size:0x007c C-string:'UNK_0xf434'
//      UNK_0xf4b2  codep:0x224c parp:0xf4b2 size:0x0028 C-string:'UNK_0xf4b2'
//         >ORBITS  codep:0x224c parp:0xf4e6 size:0x001e C-string:'_gt_ORBITS'
//      UNK_0xf506  codep:0x224c parp:0xf506 size:0x001e C-string:'UNK_0xf506'
//         ORBITS>  codep:0x224c parp:0xf530 size:0x0000 C-string:'ORBITS_gt_'

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
extern const unsigned short int pp__ask_AUTO; // ?AUTO
extern const unsigned short int pp_AVCNT; // AVCNT
extern const unsigned short int pp__i_FLY; // 'FLY
extern const unsigned short int pp__n_VESS; // #VESS
extern const unsigned short int pp_LOCRADI; // LOCRADI
extern const unsigned short int pp__ask_FUEL_dash_D; // ?FUEL-D
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
extern const unsigned short int pp__ask_CALLIN; // ?CALLIN
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
void _star__slash_(); // */
void MAX(); // MAX
void MIN(); // MIN
void BEEP(); // BEEP
void _dot_(); // .
void MS(); // MS
void NOP(); // NOP
void UNRAVEL(); // UNRAVEL
void _2OVER(); // 2OVER
void D0_eq_(); // D0=
void D_eq_(); // D=
void WITHIN(); // WITHIN
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void ACELLAD(); // ACELLAD
void A_at_(); // A@
void SETLARR(); // SETLARR
void FULLARR(); // FULLARR
void SETREGI(); // SETREGI
void C_ex__2(); // C!_2
void _ex__2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void D_ex_(); // D!
void ON_2(); // ON_2
void _099(); // 099
void _at_INST_dash_C(); // @INST-C
void _at_INST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void CDROP(); // CDROP
void CI_i_(); // CI'
void _ask__dash_NULL(); // ?-NULL
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void _at__gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void _ask_LAST(); // ?LAST
void _ask_FIRST(); // ?FIRST
void INEXT(); // INEXT
void IPREV(); // IPREV
void _st_INSERT(); // <INSERT
void IEXTRAC(); // IEXTRAC
void IFIND(); // IFIND
void MAKE1ST(); // MAKE1ST
void IDELETE(); // IDELETE
void ALL(); // ALL
void EACH(); // EACH
void _star_CREATE(); // *CREATE
void _ex_COLOR(); // !COLOR
void _at_IX(); // @IX
void _at_IY(); // @IY
void _at_ID(); // @ID
void _at_IL(); // @IL
void _at_IH(); // @IH
void _ex_IX(); // !IX
void _ex_IY(); // !IY
void INIT_dash_IC(); // INIT-IC
void POINT_gt_I(); // POINT>I
void _ask_ICONS_dash__2(); // ?ICONS-_2
void _plus_ICON_2(); // +ICON_2
void _plus_ICONBO(); // +ICONBO
void ORGLIST(); // ORGLIST
void CTPOS_dot_(); // CTPOS.
void _gt_SND(); // >SND
void CTINIT(); // CTINIT
void _dot_TTY(); // .TTY
void _i_KEY(); // 'KEY
void MROTA(); // MROTA
void _dot_SORD(); // .SORD
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
const unsigned short int pp_UNK_0xe9e5 = 0xe9e5; // UNK_0xe9e5 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xefda = 0xefda; // UNK_0xefda size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf0d6 = 0xf0d6; // UNK_0xf0d6 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf0da = 0xf0da; // UNK_0xf0da size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf0de = 0xf0de; // UNK_0xf0de size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf0e2 = 0xf0e2; // UNK_0xf0e2 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf290 = 0xf290; // UNK_0xf290 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf430 = 0xf430; // UNK_0xf430 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf434 = 0xf434; // UNK_0xf434 size: 124
// {0x3a, 0x20, 0x4c, 0x22, 0xaf, 0x3b, 0x2e, 0xf4, 0xae, 0x0b, 0xe7, 0x0f, 0xb8, 0x15, 0x50, 0x0e, 0x13, 0x4a, 0x32, 0xf4, 0xae, 0x0b, 0xf5, 0x12, 0xfa, 0x15, 0x0a, 0x00, 0x50, 0x0e, 0x2e, 0xf4, 0x16, 0x6d, 0x4a, 0x17, 0xd0, 0x15, 0xe8, 0xff, 0x2e, 0xf4, 0xae, 0x0b, 0x90, 0x16, 0x4c, 0x22, 0x22, 0x75, 0x5d, 0x17, 0x20, 0x00, 0x5f, 0x12, 0xfa, 0x15, 0x08, 0x00, 0x36, 0xf4, 0x60, 0x16, 0x04, 0x00, 0x20, 0x0f, 0x5d, 0x17, 0x0b, 0x00, 0x87, 0x3b, 0xa9, 0x81, 0x2d, 0x7c, 0xdb, 0x3f, 0xa9, 0x7b, 0x07, 0x76, 0xfa, 0x15, 0x0c, 0x00, 0xb5, 0x75, 0xa9, 0x7b, 0xe2, 0x7a, 0x60, 0x16, 0x16, 0x00, 0x8b, 0x75, 0xf1, 0x7b, 0x8d, 0x7a, 0xfa, 0x15, 0x0a, 0x00, 0xc9, 0x7a, 0x9e, 0x7e, 0x60, 0x16, 0x04, 0x00, 0xc9, 0x7a, 0xad, 0x74, 0x16, 0x6d, 0x90, 0x16}


const unsigned short int cc_UNK_0xe67c = 0xe67c; // UNK_0xe67c
const unsigned short int cc_UNK_0xe680 = 0xe680; // UNK_0xe680
const unsigned short int cc_UNK_0xe684 = 0xe684; // UNK_0xe684
const unsigned short int cc_UNK_0xe688 = 0xe688; // UNK_0xe688
const unsigned short int cc_UNK_0xf339 = 0xf339; // UNK_0xf339


// 0xe662: db 0xf0 0x00 '  '

// ================================================
// 0xe664: WORD 'UNK_0xe666' codep=0x224c parp=0xe666
// ================================================

void UNK_0xe666() // UNK_0xe666
{
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe66c: WORD 'UNK_0xe66e' codep=0x224c parp=0xe66e
// ================================================

void UNK_0xe66e() // UNK_0xe66e
{
  Push(pp_TCLR); // TCLR
  Push(Read16(Pop())); // @
  _ex_COLOR(); // !COLOR
}

// 0xe676: db 0x14 0x22 0x00 0x00 ' "  '

// ================================================
// 0xe67a: WORD 'UNK_0xe67c' codep=0x2214 parp=0xe67c
// ================================================
// 0xe67c: db 0x4b 0x00 'K '

// ================================================
// 0xe67e: WORD 'UNK_0xe680' codep=0x2214 parp=0xe680
// ================================================
// 0xe680: db 0x00 0x00 '  '

// ================================================
// 0xe682: WORD 'UNK_0xe684' codep=0x2214 parp=0xe684
// ================================================
// 0xe684: db 0x16 0x00 '  '

// ================================================
// 0xe686: WORD 'UNK_0xe688' codep=0x2214 parp=0xe688
// ================================================
// 0xe688: db 0x90 0x01 '  '

// ================================================
// 0xe68a: WORD 'UNK_0xe68c' codep=0x224c parp=0xe68c
// ================================================

void UNK_0xe68c() // UNK_0xe68c
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push2Words("NULL");
  Push(0x65ee); // IFIELD(INST-X)
  D_ex_(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe69a: WORD 'UNK_0xe69c' codep=0x7420 parp=0xe69c
// ================================================
// 0xe69c: db 0x19 0x0b 0x01 '   '

// ================================================
// 0xe69f: WORD 'UNK_0xe6a1' codep=0x7394 parp=0xe6a1
// ================================================
// 0xe6a1: db 0x19 0x05 0x01 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xe6a7: WORD 'UNK_0xe6a9' codep=0x7420 parp=0xe6a9
// ================================================
// 0xe6a9: db 0x19 0x0c 0x01 '   '

// ================================================
// 0xe6ac: WORD 'UNK_0xe6ae' codep=0x7394 parp=0xe6ae
// ================================================
// 0xe6ae: db 0x19 0x06 0x01 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xe6b4: WORD 'UNK_0xe6b6' codep=0x7394 parp=0xe6b6
// ================================================
// 0xe6b6: db 0x19 0x0c 0x04 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xe6bc: WORD 'UNK_0xe6be' codep=0x7420 parp=0xe6be
// ================================================
// 0xe6be: db 0x19 0x12 0x04 '   '

// ================================================
// 0xe6c1: WORD 'UNK_0xe6c3' codep=0x7420 parp=0xe6c3
// ================================================
// 0xe6c3: db 0x3d 0x15 0x01 '=  '

// ================================================
// 0xe6c6: WORD 'UNK_0xe6c8' codep=0x7420 parp=0xe6c8
// ================================================
// 0xe6c8: db 0x3d 0x16 0x01 '=  '

// ================================================
// 0xe6cb: WORD 'UNK_0xe6cd' codep=0x7420 parp=0xe6cd
// ================================================
// 0xe6cd: db 0x3d 0x17 0x01 '=  '

// ================================================
// 0xe6d0: WORD 'UNK_0xe6d2' codep=0x7420 parp=0xe6d2
// ================================================
// 0xe6d2: db 0x3d 0x18 0x01 '=  '

// ================================================
// 0xe6d5: WORD 'UNK_0xe6d7' codep=0x7420 parp=0xe6d7
// ================================================
// 0xe6d7: db 0x3d 0x19 0x01 '=  '

// ================================================
// 0xe6da: WORD 'UNK_0xe6dc' codep=0x7420 parp=0xe6dc
// ================================================
// 0xe6dc: db 0x3d 0x13 0x01 '=  '

// ================================================
// 0xe6df: WORD 'UNK_0xe6e1' codep=0x7420 parp=0xe6e1
// ================================================
// 0xe6e1: db 0x3d 0x14 0x01 '=  '

// ================================================
// 0xe6e4: WORD 'UNK_0xe6e6' codep=0x7420 parp=0xe6e6
// ================================================
// 0xe6e6: db 0x3d 0x1c 0x01 '=  '

// ================================================
// 0xe6e9: WORD 'UNK_0xe6eb' codep=0x7420 parp=0xe6eb
// ================================================
// 0xe6eb: db 0x3d 0x1d 0x01 '=  '

// ================================================
// 0xe6ee: WORD 'UNK_0xe6f0' codep=0x7420 parp=0xe6f0
// ================================================
// 0xe6f0: db 0x3d 0x1a 0x01 '=  '

// ================================================
// 0xe6f3: WORD 'UNK_0xe6f5' codep=0x7420 parp=0xe6f5
// ================================================
// 0xe6f5: db 0x3d 0x1b 0x01 '=  '

// ================================================
// 0xe6f8: WORD 'GET-VES' codep=0x4b3b parp=0xe704
// ================================================

void GET_dash_VES() // GET-VES
{
  switch(Pop()) // GET-VES
  {
  case 0:
    Push(0x65fa); // IFIELD(UNK_0xe6d7)
    break;
  case 1:
    Push(0x65f9); // IFIELD(UNK_0xe6d2)
    break;
  case 2:
    Push(0x65f8); // IFIELD(UNK_0xe6cd)
    break;
  default:
    Push(0x65f7); // IFIELD(UNK_0xe6c8)
    break;

  }
}

// ================================================
// 0xe714: WORD 'UNK_0xe716' codep=0x224c parp=0xe716
// ================================================

void UNK_0xe716() // UNK_0xe716
{
  unsigned short int a, b;
  Push(Read16(cc_UNK_0xe684)); // UNK_0xe684
  Push(pp__ask_CALLIN); // ?CALLIN
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    Push(7);
    _dash_(); // -
    Push(Read16(regsp)); // DUP
    Push(0);
    Push(2);
    RRND(); // RRND
    Push(Pop()*2); // 2*
    Push(Pop()-1); // 1-
    Push(Pop() * Pop()); // *
    SWAP(); // SWAP
    Push(Read16(regsp)); // DUP
    Push(-Pop()); // NEGATE
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
    Push(-Pop()); // NEGATE
    SWAP(); // SWAP
    Push(Pop()+1); // 1+
    _2DUP(); // 2DUP
    RRND(); // RRND
    b = Pop(); // >R
    RRND(); // RRND
    Push(b); // R>
  }
  Push(pp__ask_CALLIN); // ?CALLIN
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  LoadData("UNK_0xe6a1"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_A_dash_STREN); // A-STREN
  _plus__ex__2(); // +!_2
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(a); // R>
}


// ================================================
// 0xe786: WORD 'UNK_0xe788' codep=0x224c parp=0xe788
// ================================================

void UNK_0xe788() // UNK_0xe788
{
  Push(pp__ask_CALLIN); // ?CALLIN
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0xba55); // probable 'ICON-'
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
}


// ================================================
// 0xe79a: WORD 'UNK_0xe79c' codep=0x224c parp=0xe79c
// ================================================

void UNK_0xe79c() // UNK_0xe79c
{
  IOPEN(); // IOPEN
  Push(1);
  _star_CREATE(); // *CREATE
  UNK_0xe716(); // UNK_0xe716
  SWAP(); // SWAP
  Push(0x65ee); // IFIELD(INST-X)
  D_ex_(); // D!
  Push(0);
  Push(7);
  RRND(); // RRND
  Push(0x65ec); // IFIELD(UNK_0xe69c)
  C_ex__2(); // C!_2
  LoadData("UNK_0xe6ae"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x65ed); // IFIELD(UNK_0xe6a9)
  C_ex__2(); // C!_2
  LoadData("UNK_0xe6b6"); // from 'VESSEL      '
  _2_at_(); // 2@
  Push(0x65f3); // IFIELD(UNK_0xe6be)
  D_ex_(); // D!
  UNK_0xe788(); // UNK_0xe788
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe7ca: WORD 'UNK_0xe7cc' codep=0x224c parp=0xe7cc
// ================================================

void UNK_0xe7cc() // UNK_0xe7cc
{
  Push(0x0016);
  _eq_SPECIE(); // =SPECIE
  if (Pop() != 0)
  {
    Push(0xc900); // probable 'IUHL'
    MODULE(); // MODULE
    Push(pp__i_ENDING); // 'ENDING
    Push(Read16(Pop())); // @
  } else
  {
    Push(0x3a48); // probable 'NOP'
  }
  Push(pp__i_UHL); // 'UHL
  _ex__2(); // !_2
}


// ================================================
// 0xe7ee: WORD 'UNK_0xe7f0' codep=0x224c parp=0xe7f0
// ================================================

void UNK_0xe7f0() // UNK_0xe7f0
{
  unsigned short int i, imax, j, jmax;
  Push(0x6a5a); // probable 'MERCATO'
  SETLARR(); // SETLARR
  FULLARR(); // FULLARR
  SETREGI(); // SETREGI
  Push(0);
  Push(pp_YUR); // YUR
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_YLL); // YLL
  Push(Read16(Pop())); // @

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(pp_XUR); // XUR
    Push(Read16(Pop())); // @
    Push(Pop()+1); // 1+
    Push(pp_XLL); // XLL
    Push(Read16(Pop())); // @

    j = Pop();
    jmax = Pop();
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

// 0xe83a: db 0x4c 0x22 0x41 0x0e 0xf8 0x74 0x1f 0x56 0x16 0x6d 0x90 0x16 'L"A  t V m  '

// ================================================
// 0xe846: WORD '?LIQUID' codep=0x224c parp=0xe852
// ================================================

void _ask_LIQUID() // ?LIQUID
{
  UNK_0xe7f0(); // UNK_0xe7f0
  Push(0x0064);
  Push(0x0480);
  _star__slash_(); // */
  Push(0x001f);
  _st_(); // <
}

// 0xe866: db 0x4c 0x22 0x22 0x75 0x5d 0x17 0x20 0x00 0x5f 0x12 0x34 0x75 0x8f 0x3b 0x5d 0x17 0x0d 0x00 0x25 0x40 0xf5 0x12 0x90 0x16 0x4c 0x22 0x8b 0x75 0xaf 0x64 0x32 0x6d 0x8b 0x75 0x32 0x0e 0x5d 0x17 0xa2 0xba 0xd9 0x84 0x50 0xe8 0xfa 0x15 0x1a 0x00 0x34 0x75 0x8f 0x3b 0xaf 0x3b 0x25 0x40 0xfa 0x15 0x0a 0x00 0x34 0x75 0x87 0x3b 0x72 0x0f 0x3a 0xe8 0x60 0x16 0x18 0x00 0x34 0x75 0xaf 0x3b 0x5d 0x17 0x0d 0x00 0x25 0x40 0xfa 0x15 0x0a 0x00 0x34 0x75 0x87 0x3b 0x92 0x0f 0x3a 0xe8 0x90 0x16 0x4c 0x22 0x22 0x75 0x5d 0x17 0x0b 0x00 0x5f 0x12 0xfa 0x15 0x14 0x00 0x8b 0x75 0x9f 0x64 0x32 0x6d 0x3f 0x7a 0x66 0xe8 0xfa 0x15 0x04 0x00 0x7e 0xe8 0xdf 0x79 0x90 0x16 'L""u]   _ 4u ;]   %@    L" u d2m u2 ]     P     4u ; ;%@    4u ;r : `   4u ;]   %@    4u ;  :   L""u]   _      u d2m?zf     ~  y  '

// ================================================
// 0xe8e8: WORD 'UNK_0xe8ea' codep=0x224c parp=0xe8ea
// ================================================

void UNK_0xe8ea() // UNK_0xe8ea
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0xe8c8);
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
// 0xe908: WORD 'UNK_0xe90a' codep=0x224c parp=0xe90a
// ================================================

void UNK_0xe90a() // UNK_0xe90a
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  D_ex_(); // D!
  Push(pp_LOCRADI); // LOCRADI
  _ex__2(); // !_2
}


// ================================================
// 0xe91a: WORD 'UNK_0xe91c' codep=0x224c parp=0xe91c
// ================================================

void UNK_0xe91c() // UNK_0xe91c
{
  UNK_0xe68c(); // UNK_0xe68c
  Push(pp_XABS); // XABS
  _099(); // 099
  Push(pp_YABS); // YABS
  _099(); // 099
  INIT_dash_IC(); // INIT-IC
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  _plus_ICONBO(); // +ICONBO
  UNK_0xe666(); // UNK_0xe666
  Push(Read16(cc_UNK_0xe680)); // UNK_0xe680
  UNK_0xe90a(); // UNK_0xe90a
}


// ================================================
// 0xe938: WORD 'UNK_0xe93a' codep=0x224c parp=0xe93a
// ================================================

void UNK_0xe93a() // UNK_0xe93a
{
  Push(pp_XABS); // XABS
  _099(); // 099
  Push(pp_YABS); // YABS
  _099(); // 099
  UNK_0xe68c(); // UNK_0xe68c
  INIT_dash_IC(); // INIT-IC
  Push(pp__ro_ENCOUN); // (ENCOUN
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  _plus_ICONBO(); // +ICONBO
  UNK_0xe666(); // UNK_0xe666
  Push(Read16(cc_UNK_0xe684)); // UNK_0xe684
  UNK_0xe90a(); // UNK_0xe90a
  ORGLIST(); // ORGLIST
  Push(0xc7ce); // probable 'CSCALE'
  MODULE(); // MODULE
}


// ================================================
// 0xe95e: WORD 'UNK_0xe960' codep=0x224c parp=0xe960
// ================================================

void UNK_0xe960() // UNK_0xe960
{
  INIT_dash_IC(); // INIT-IC
  UNK_0xe8ea(); // UNK_0xe8ea
  Push(pp__ro_SYSTEM); // (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  _plus_ICONBO(); // +ICONBO
  UNK_0xe666(); // UNK_0xe666
  Push(Read16(cc_UNK_0xe688)); // UNK_0xe688
  UNK_0xe90a(); // UNK_0xe90a
}


// ================================================
// 0xe974: WORD 'UNK_0xe976' codep=0x224c parp=0xe976
// ================================================

void UNK_0xe976() // UNK_0xe976
{
  INIT_dash_IC(); // INIT-IC
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0xba55); // probable 'ICON-'
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe988: WORD 'UNK_0xe98a' codep=0x224c parp=0xe98a
// ================================================

void UNK_0xe98a() // UNK_0xe98a
{
  CI(); // CI
  Push2Words("*ARTH");
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Push(pp_PAST); // PAST
    Push(Read16(Pop())); // @
    return;
  }
  Push(1);
}


// ================================================
// 0xe9a0: WORD 'UNK_0xe9a2' codep=0x224c parp=0xe9a2
// ================================================

void UNK_0xe9a2() // UNK_0xe9a2
{
  Push2Words("*SECS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  INIT_dash_IC(); // INIT-IC
  _plus_ICONBO(); // +ICONBO
  Push(pp_IGLOBAL); // IGLOBAL
  Push(Read16(Pop())); // @
  Push(pp__star_GLOBAL); // *GLOBAL
  _ex__2(); // !_2
  UNK_0xe666(); // UNK_0xe666
  Push(Read16(cc_UNK_0xe67c)); // UNK_0xe67c
  UNK_0xe90a(); // UNK_0xe90a
}


// ================================================
// 0xe9bc: WORD 'DISP-SETUP' codep=0x4b3b parp=0xe9cb
// ================================================
// entry

void DISP_dash_SETUP() // DISP-SETUP
{
  switch(Pop()) // DISP-SETUP
  {
  case 1:
    UNK_0xe91c(); // UNK_0xe91c
    break;
  case 2:
    UNK_0xe960(); // UNK_0xe960
    break;
  case 3:
    UNK_0xe9a2(); // UNK_0xe9a2
    break;
  case 4:
    UNK_0xe93a(); // UNK_0xe93a
    break;
  case 5:
    UNK_0xe976(); // UNK_0xe976
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe9e3: WORD 'UNK_0xe9e5' codep=0x1d29 parp=0xe9e5
// ================================================
// 0xe9e5: db 0x00 0x00 '  '

// ================================================
// 0xe9e7: WORD 'UNK_0xe9e9' codep=0x224c parp=0xe9e9
// ================================================

void UNK_0xe9e9() // UNK_0xe9e9
{
  Push(0x03e8);
  MS(); // MS
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp_UNK_0xe9e5); // UNK_0xe9e5
  _099(); // 099
  Push(0);
  Push(Read16(cc__i_ANSYS)); // 'ANSYS
  MODULE(); // MODULE
}

// 0xea03: db 0x4c 0x22 0x5d 0x17 0x0a 0x00 0x3b 0x5a 0xae 0x0b 0x5d 0x17 0x0b 0x00 0x92 0x0f 0x7b 0x9a 0x90 0x16 'L"]   ;Z  ]     {   '

// ================================================
// 0xea17: WORD 'UNK_0xea19' codep=0x224c parp=0xea19
// ================================================

void UNK_0xea19() // UNK_0xea19
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
  Push(0xbe45); // probable '.HUFF'
  MODULE(); // MODULE
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xea45: WORD 'UNK_0xea47' codep=0x224c parp=0xea47
// ================================================

void UNK_0xea47() // UNK_0xea47
{
  PRINT(" COMPLETE", 9); // (.")
}


// ================================================
// 0xea55: WORD 'UNK_0xea57' codep=0x224c parp=0xea57
// ================================================

void UNK_0xea57() // UNK_0xea57
{
  UNK_0x3f09("...COMMENCING ");
  _dot_TTY(); // .TTY
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" TRAVEL", 7); // (.")
}


// ================================================
// 0xea78: WORD 'UNK_0xea7a' codep=0x224c parp=0xea7a
// ================================================

void UNK_0xea7a() // UNK_0xea7a
{
  UNK_0x3f09("ORBIT");
}


// ================================================
// 0xea84: WORD 'UNK_0xea86' codep=0x224c parp=0xea86
// ================================================

void UNK_0xea86() // UNK_0xea86
{
  UNK_0x3f09("SYSTEM");
}


// ================================================
// 0xea91: WORD 'UNK_0xea93' codep=0x224c parp=0xea93
// ================================================

void UNK_0xea93() // UNK_0xea93
{
  UNK_0x3f09("STARPORT");
}


// ================================================
// 0xeaa0: WORD 'UNK_0xeaa2' codep=0x224c parp=0xeaa2
// ================================================

void UNK_0xeaa2() // UNK_0xeaa2
{
  UNK_0x3f09("ENCOUNTER");
}


// ================================================
// 0xeab0: WORD 'UNK_0xeab2' codep=0x224c parp=0xeab2
// ================================================

void UNK_0xeab2() // UNK_0xeab2
{
  UNK_0x3f09("STANDING BY TO ");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xeac8: WORD 'UNK_0xeaca' codep=0x224c parp=0xeaca
// ================================================

void UNK_0xeaca() // UNK_0xeaca
{
  UNK_0xeab2(); // UNK_0xeab2
  PRINT("DOCK WITH ", 10); // (.")
  UNK_0xea93(); // UNK_0xea93
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xeadf: WORD 'UNK_0xeae1' codep=0x224c parp=0xeae1
// ================================================

void UNK_0xeae1() // UNK_0xeae1
{
  UNK_0xeab2(); // UNK_0xeab2
  UNK_0xea7a(); // UNK_0xea7a
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_ENC_dash_TIM); // ENC-TIM
  D_ex_(); // D!
  UNK_0x3f09("PRESS SPACEBAR TO ORBIT");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xeb0d: WORD 'UNK_0xeb0f' codep=0x224c parp=0xeb0f
// ================================================

void UNK_0xeb0f() // UNK_0xeb0f
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xe98a(); // UNK_0xe98a
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    UNK_0xeaca(); // UNK_0xeaca
  } else
  {
    UNK_0xeae1(); // UNK_0xeae1
  }
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xeb2b: WORD 'UNK_0xeb2d' codep=0x224c parp=0xeb2d
// ================================================

void UNK_0xeb2d() // UNK_0xeb2d
{
  UNK_0x3f09("...");
  _dot_TTY(); // .TTY
  UNK_0xea7a(); // UNK_0xea7a
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" ESTABLISHED", 12); // (.")
  Push(pp__ask_FUEL_dash_D); // ?FUEL-D
  _099(); // 099
  UNK_0xea19(); // UNK_0xea19
}


// ================================================
// 0xeb50: WORD 'UNK_0xeb52' codep=0x224c parp=0xeb52
// ================================================

void UNK_0xeb52() // UNK_0xeb52
{
  UNK_0x3f09("...");
  _dot_TTY(); // .TTY
  UNK_0xea86(); // UNK_0xea86
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" ENTRY", 6); // (.")
  UNK_0xea47(); // UNK_0xea47
  Push(pp__i_ASYS); // 'ASYS
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  UNK_0xe9e9(); // UNK_0xe9e9
}


// ================================================
// 0xeb73: WORD 'UNK_0xeb75' codep=0x224c parp=0xeb75
// ================================================

void UNK_0xeb75() // UNK_0xeb75
{
  UNK_0x3f09("...DOCKING");
  _dot_TTY(); // .TTY
  UNK_0xea47(); // UNK_0xea47
  Push(Read16(cc__i_OVBACK)); // 'OVBACK
  MODULE(); // MODULE
}


// ================================================
// 0xeb8c: WORD 'UNK_0xeb8e' codep=0x224c parp=0xeb8e
// ================================================

void UNK_0xeb8e() // UNK_0xeb8e
{
  TIME(); // TIME
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  Push(0x03e8); Push(0x0000);
  D_plus_(); // D+
  Push(pp_KEYTIME); // KEYTIME
  D_ex_(); // D!
  Push(0x0fa0); Push(0x0000);
  D_plus_(); // D+
  Push(pp_ATIME); // ATIME
  D_ex_(); // D!
}


// ================================================
// 0xebae: WORD 'NF-M' codep=0x4b3b parp=0xebb7
// ================================================

void NF_dash_M() // NF-M
{
  switch(Pop()) // NF-M
  {
  case 1:
    UNK_0xeb0f(); // UNK_0xeb0f
    break;
  case 2:
    UNK_0xeb52(); // UNK_0xeb52
    break;
  case 4:
    UNK_0xeb8e(); // UNK_0xeb8e
    break;
  case 5:
    UNK_0xeb75(); // UNK_0xeb75
    break;
  case 6:
    UNK_0xeb2d(); // UNK_0xeb2d
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xebcf: WORD 'NF-MESS' codep=0x224c parp=0xebdb
// ================================================
// entry

void NF_dash_MESS() // NF-MESS
{
  UNK_0xe66e(); // UNK_0xe66e
  NF_dash_M(); // NF-M case
}


// ================================================
// 0xebe1: WORD 'UNK_0xebe3' codep=0x224c parp=0xebe3
// ================================================

void UNK_0xebe3() // UNK_0xebe3
{
  UNK_0x3f09("COMPUTING SUB-");
  _dot_TTY(); // .TTY
  UNK_0xea7a(); // UNK_0xea7a
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("AL TRAJECTORY...", 16); // (.")
}


// ================================================
// 0xec0f: WORD 'UNK_0xec11' codep=0x224c parp=0xec11
// ================================================

void UNK_0xec11() // UNK_0xec11
{
  UNK_0x3f09("INITIATING ");
  _dot_TTY(); // .TTY
  UNK_0xea7a(); // UNK_0xea7a
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("AL MANEUVER...", 14); // (.")
}


// ================================================
// 0xec38: WORD 'UNK_0xec3a' codep=0x224c parp=0xec3a
// ================================================

void UNK_0xec3a() // UNK_0xec3a
{
  UNK_0x3f09("COMMENCING ");
  _dot_TTY(); // .TTY
  UNK_0xea86(); // UNK_0xea86
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" PENETRATION...", 15); // (.")
}


// ================================================
// 0xec62: WORD 'UNK_0xec64' codep=0x224c parp=0xec64
// ================================================

void UNK_0xec64() // UNK_0xec64
{
  UNK_0x3f09("INITIATING DOCKING PROCEDURE...");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xec8a: WORD 'UNK_0xec8c' codep=0x224c parp=0xec8c
// ================================================

void UNK_0xec8c() // UNK_0xec8c
{
  UNK_0x3f09("SCANNERS INDICATE UNIDENTIFIED OBJECT!");
  _dot_TTY(); // .TTY
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
// 0xecd1: WORD 'NS-M' codep=0x4b3b parp=0xecda
// ================================================

void NS_dash_M() // NS-M
{
  switch(Pop()) // NS-M
  {
  case 0:
    UNK_0xebe3(); // UNK_0xebe3
    break;
  case 2:
    UNK_0xec3a(); // UNK_0xec3a
    break;
  case 4:
    UNK_0xec8c(); // UNK_0xec8c
    break;
  case 5:
    UNK_0xec64(); // UNK_0xec64
    break;
  case 6:
    UNK_0xec11(); // UNK_0xec11
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xecf2: WORD 'NS-MESS' codep=0x224c parp=0xecfe
// ================================================
// entry

void NS_dash_MESS() // NS-MESS
{
  UNK_0xe66e(); // UNK_0xe66e
  NS_dash_M(); // NS-M case
}


// ================================================
// 0xed04: WORD 'UNK_0xed06' codep=0x7394 parp=0xed06
// ================================================
// 0xed06: db 0x20 0x07 0x02 0x17 0x49 0x6c '    Il'

// ================================================
// 0xed0c: WORD 'P-LSEED' codep=0x7394 parp=0xed18
// ================================================
// 0xed18: db 0x20 0x04 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xed1e: WORD 'UNK_0xed20' codep=0x7394 parp=0xed20
// ================================================
// 0xed20: db 0x20 0x01 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xed26: WORD 'UNK_0xed28' codep=0x7420 parp=0xed28
// ================================================
// 0xed28: db 0x10 0x1a 0x01 '   '

// ================================================
// 0xed2b: WORD 'UNK_0xed2d' codep=0x7420 parp=0xed2d
// ================================================
// 0xed2d: db 0x11 0x14 0x03 '   '

// ================================================
// 0xed30: WORD 'UNK_0xed32' codep=0x224c parp=0xed32
// ================================================

void UNK_0xed32() // UNK_0xed32
{
  LoadData("P-LSEED"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() != 0)
  {
    Push(1);
    return;
  }
  Push(2);
}


// ================================================
// 0xed44: WORD 'S>CM' codep=0x4b3b parp=0xed4d
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
    UNK_0xed32(); // UNK_0xed32
    break;

  }
}

// ================================================
// 0xed5d: WORD 'UNK_0xed5f' codep=0x224c parp=0xed5f
// ================================================

void UNK_0xed5f() // UNK_0xed5f
{
  LoadData("UNK_0xed20"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  S_gt_CM(); // S>CM case
}


// ================================================
// 0xed67: WORD 'OSET' codep=0x224c parp=0xed70
// ================================================
// entry

void OSET() // OSET
{
  Push(6);
  NS_dash_MESS(); // NS-MESS
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  Push(pp_UNK_0xe9e5); // UNK_0xe9e5
  ON_2(); // ON_2
  UNK_0xed5f(); // UNK_0xed5f
  _at_INST_dash_S(); // @INST-S
  Push(0);
  Push(0x0012);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    CI(); // CI
    Pop(); // DROP
  } else
  {
    LoadData("UNK_0xed06"); // from 'PLANET      '
    Push(Read16(Pop())); // @
  }
  Push(Read16(regsp)); // DUP
  Push(pp_GLOBALS); // GLOBALS
  _ex__2(); // !_2
  Push(0xbcf9); // probable 'SET-PLAN'
  MODULE(); // MODULE
  Push(0xbd33); // probable 'INIT-'
  MODULE(); // MODULE
  MROTA(); // MROTA
  Push(0xbd9b); // probable 'MROTA'
  Push(pp__i_EXTERN); // 'EXTERN
  _ex__2(); // !_2
  Push(-1);
  Push(pp_PLHI); // PLHI
  _ex__2(); // !_2
  Push(0xc014); // probable 'BLDLI_2'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  Push(6);
  NF_dash_MESS(); // NF-MESS
}


// ================================================
// 0xedc8: WORD 'UNK_0xedca' codep=0x224c parp=0xedca
// ================================================

void UNK_0xedca() // UNK_0xedca
{
  UNK_0xea86(); // UNK_0xea86
  UNK_0xea57(); // UNK_0xea57
}


// ================================================
// 0xedd0: WORD 'UNK_0xedd2' codep=0x224c parp=0xedd2
// ================================================

void UNK_0xedd2() // UNK_0xedd2
{
  UNK_0x3f09("INTER-STELLAR");
  UNK_0xea57(); // UNK_0xea57
}


// ================================================
// 0xede6: WORD 'UNK_0xede8' codep=0x224c parp=0xede8
// ================================================

void UNK_0xede8() // UNK_0xede8
{
  Push(0xc548); // probable 'OVFLU'
  MODULE(); // MODULE
  CTINIT(); // CTINIT
  UNK_0x3f09("...");
  _dot_TTY(); // .TTY
  UNK_0xea93(); // UNK_0xea93
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" CLEAR", 6); // (.")
}


// ================================================
// 0xee07: WORD 'UNK_0xee09' codep=0x224c parp=0xee09
// ================================================

void UNK_0xee09() // UNK_0xee09
{
  UNK_0x3f09("...");
  _dot_TTY(); // .TTY
  UNK_0xeaa2(); // UNK_0xeaa2
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" TERMINATED", 11); // (.")
  Push(0xc090); // probable 'OV/STA'
  MODULE(); // MODULE
  Push(pp_SKIP2NE); // SKIP2NE
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    OSET(); // OSET
    Push(pp__ro_ENCOUN); // (ENCOUN
    _at__gt_C_plus_S(); // @>C+S
    Push(0x65fc); // IFIELD(UNK_0xe6f5)
    Push(Read8(Pop())&0xFF); // C@
    ICLOSE(); // ICLOSE
    Push(pp__ask_AUTO); // ?AUTO
    Push(Read16(Pop())); // @
    if (Pop() == 0) Push(1); else Push(0); // 0=
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(0);
    }
    Push(pp_FORCEPT); // FORCEPT
    _099(); // 099
    Push(pp__ask_AUTO); // ?AUTO
    ON_2(); // ON_2
  }
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
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
  D_ex_(); // D!
}


// ================================================
// 0xee7b: WORD 'UNK_0xee7d' codep=0x224c parp=0xee7d
// ================================================

void UNK_0xee7d() // UNK_0xee7d
{
  UNK_0x3f09("OUTSIDE ");
  _dot_TTY(); // .TTY
  UNK_0xea7a(); // UNK_0xea7a
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("AL RANGE", 8); // (.")
  Push(pp_UNK_0xe9e5); // UNK_0xe9e5
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  UNK_0xe9e9(); // UNK_0xe9e9
}


// ================================================
// 0xeea5: WORD 'UF-M' codep=0x4b3b parp=0xeeae
// ================================================

void UF_dash_M() // UF-M
{
  switch(Pop()) // UF-M
  {
  case 6:
    UNK_0xedca(); // UNK_0xedca
    break;
  case 2:
    UNK_0xedd2(); // UNK_0xedd2
    break;
  case 4:
    UNK_0xee09(); // UNK_0xee09
    break;
  case 5:
    UNK_0xede8(); // UNK_0xede8
    break;
  case 1:
    UNK_0xee7d(); // UNK_0xee7d
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xeec6: WORD 'UF-MESS' codep=0x224c parp=0xeed2
// ================================================
// entry

void UF_dash_MESS() // UF-MESS
{
  UNK_0xe66e(); // UNK_0xe66e
  UF_dash_M(); // UF-M case
}


// ================================================
// 0xeed8: WORD 'UNK_0xeeda' codep=0x224c parp=0xeeda
// ================================================

void UNK_0xeeda() // UNK_0xeeda
{
  UNK_0x3f09("LEAVING ");
  _dot_TTY(); // .TTY
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("...", 3); // (.")
}


// ================================================
// 0xeef1: WORD 'UNK_0xeef3' codep=0x224c parp=0xeef3
// ================================================

void UNK_0xeef3() // UNK_0xeef3
{
  UNK_0xea86(); // UNK_0xea86
  UNK_0xeeda(); // UNK_0xeeda
}


// ================================================
// 0xeef9: WORD 'UNK_0xeefb' codep=0x224c parp=0xeefb
// ================================================

void UNK_0xeefb() // UNK_0xeefb
{
  UNK_0xea93(); // UNK_0xea93
  UNK_0xeeda(); // UNK_0xeeda
}


// ================================================
// 0xef01: WORD 'UNK_0xef03' codep=0x224c parp=0xef03
// ================================================

void UNK_0xef03() // UNK_0xef03
{
  UNK_0xeaa2(); // UNK_0xeaa2
  UNK_0xeeda(); // UNK_0xeeda
}


// ================================================
// 0xef09: WORD 'UNK_0xef0b' codep=0x224c parp=0xef0b
// ================================================

void UNK_0xef0b() // UNK_0xef0b
{
  UNK_0xea7a(); // UNK_0xea7a
  UNK_0xeeda(); // UNK_0xeeda
}


// ================================================
// 0xef11: WORD 'US-M' codep=0x4b3b parp=0xef1a
// ================================================

void US_dash_M() // US-M
{
  switch(Pop()) // US-M
  {
  case 6:
    UNK_0xef0b(); // UNK_0xef0b
    break;
  case 2:
    UNK_0xeef3(); // UNK_0xeef3
    break;
  case 4:
    UNK_0xef03(); // UNK_0xef03
    break;
  case 5:
    UNK_0xeefb(); // UNK_0xeefb
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xef2e: WORD 'US-MESS' codep=0x224c parp=0xef3a
// ================================================
// entry

void US_dash_MESS() // US-MESS
{
  UNK_0xe66e(); // UNK_0xe66e
  US_dash_M(); // US-M case
}


// ================================================
// 0xef40: WORD 'UNK_0xef42' codep=0x224c parp=0xef42
// ================================================

void UNK_0xef42() // UNK_0xef42
{
  _ex_COLOR(); // !COLOR
  BEEP(); // BEEP
}


// ================================================
// 0xef48: WORD 'UNK_0xef4a' codep=0x224c parp=0xef4a
// ================================================

void UNK_0xef4a() // UNK_0xef4a
{
  _dot_TTY(); // .TTY
  _dot_SORD(); // .SORD
}


// ================================================
// 0xef50: WORD 'UNK_0xef52' codep=0x224c parp=0xef52
// ================================================

void UNK_0xef52() // UNK_0xef52
{
  SetColor("YELLOW");
  UNK_0xef42(); // UNK_0xef42
  UNK_0x3f09("FUEL SUPPLY LOW");
  UNK_0xef4a(); // UNK_0xef4a
}


// ================================================
// 0xef6c: WORD 'UNK_0xef6e' codep=0x224c parp=0xef6e
// ================================================

void UNK_0xef6e() // UNK_0xef6e
{
  SetColor("PINK");
  UNK_0xef42(); // UNK_0xef42
  UNK_0x3f09("FUEL SUPPLY CRITICAL");
  UNK_0xef4a(); // UNK_0xef4a
}


// ================================================
// 0xef8d: WORD 'UNK_0xef8f' codep=0x224c parp=0xef8f
// ================================================

void UNK_0xef8f() // UNK_0xef8f
{
  SetColor("RED");
  UNK_0xef42(); // UNK_0xef42
  UNK_0x3f09("OUT OF FUEL");
  UNK_0xef4a(); // UNK_0xef4a
}


// ================================================
// 0xefa5: WORD '.EX' codep=0x4b3b parp=0xefad
// ================================================
// entry

void _dot_EX() // .EX
{
  switch(Pop()) // .EX
  {
  case 2:
    UNK_0xef6e(); // UNK_0xef6e
    break;
  case 3:
    UNK_0xef52(); // UNK_0xef52
    break;
  default:
    UNK_0xef8f(); // UNK_0xef8f
    break;

  }
}

// ================================================
// 0xefb9: WORD 'UNK_0xefbb' codep=0x224c parp=0xefbb
// ================================================

void UNK_0xefbb() // UNK_0xefbb
{
  Push(0x65fb); // IFIELD(UNK_0xe6f0)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) return;
  CI(); // CI
  Push(Pop() | Pop()); // OR
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xefd3: WORD 'UNK_0xefd5' codep=0x7420 parp=0xefd5
// ================================================
// 0xefd5: db 0x19 0x15 0x04 '   '

// ================================================
// 0xefd8: WORD 'UNK_0xefda' codep=0x1d29 parp=0xefda
// ================================================
// 0xefda: db 0x3a 0x20 ': '

// ================================================
// 0xefdc: WORD 'DMSG' codep=0x224c parp=0xefe5
// ================================================
// entry

void DMSG() // DMSG
{
  unsigned short int i, imax;
  Push(pp_UNK_0xefda); // UNK_0xefda
  _099(); // 099
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash__2(); // ?ICONS-_2
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    POINT_gt_I(); // POINT>I
    _at_ID(); // @ID
    Push(0x002b);
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      _at_IL(); // @IL
      _at_IH(); // @IH
      _gt_C_plus_S(); // >C+S
      Push(0x65f6); // IFIELD(UNK_0xefd5)
      _2_at_(); // 2@
      Push(Pop() | Pop()); // OR
      ICLOSE(); // ICLOSE
      if (Pop() != 0)
      {
        Push(pp_UNK_0xefda); // UNK_0xefda
        ON_2(); // ON_2
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(pp_UNK_0xefda); // UNK_0xefda
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  UNK_0x3f09("READY TO PICK UP DEBRIS");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf04b: WORD 'UNK_0xf04d' codep=0x224c parp=0xf04d
// ================================================

void UNK_0xf04d() // UNK_0xf04d
{
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0xf053: WORD 'UNK_0xf055' codep=0x224c parp=0xf055
// ================================================

void UNK_0xf055() // UNK_0xf055
{
  Push(4);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(1);
    return;
  }
  Push(3);
}


// ================================================
// 0xf067: WORD 'UNK_0xf069' codep=0x224c parp=0xf069
// ================================================

void UNK_0xf069() // UNK_0xf069
{
  Pop(); // DROP
  Push(2);
}


// ================================================
// 0xf06f: WORD 'UNK_0xf071' codep=0x224c parp=0xf071
// ================================================

void UNK_0xf071() // UNK_0xf071
{
  Pop(); // DROP
  Push(4);
}


// ================================================
// 0xf077: WORD 'UNK_0xf079' codep=0x224c parp=0xf079
// ================================================

void UNK_0xf079() // UNK_0xf079
{
  Pop(); // DROP
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    Push(3);
    return;
  }
  Push(5);
}


// ================================================
// 0xf08d: WORD 'UNK_0xf08f' codep=0x224c parp=0xf08f
// ================================================

void UNK_0xf08f() // UNK_0xf08f
{
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  _gt_FLAG(); // >FLAG
  Push(0x65fd); // IFIELD(UNK_0xe6e6)
  Push(Read8(Pop())&0xFF); // C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(0x65fe); // IFIELD(UNK_0xe6eb)
  Push(Read8(Pop())&0xFF); // C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  UNK_0xefbb(); // UNK_0xefbb
}


// ================================================
// 0xf0b1: WORD '(CTXT)' codep=0x4b3b parp=0xf0bc
// ================================================
// entry

void _ro_CTXT_rc_() // (CTXT)
{
  switch(Pop()) // (CTXT)
  {
  case 32:
    UNK_0xf04d(); // UNK_0xf04d
    break;
  case 11:
    UNK_0xf055(); // UNK_0xf055
    break;
  case 23:
    UNK_0xf069(); // UNK_0xf069
    break;
  case 61:
    UNK_0xf071(); // UNK_0xf071
    break;
  case 18:
    UNK_0xf079(); // UNK_0xf079
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf0d4: WORD 'UNK_0xf0d6' codep=0x1d29 parp=0xf0d6
// ================================================
// 0xf0d6: db 0x3a 0x20 ': '

// ================================================
// 0xf0d8: WORD 'UNK_0xf0da' codep=0x1d29 parp=0xf0da
// ================================================
// 0xf0da: db 0x3a 0x20 ': '

// ================================================
// 0xf0dc: WORD 'UNK_0xf0de' codep=0x1d29 parp=0xf0de
// ================================================
// 0xf0de: db 0x3a 0x20 ': '

// ================================================
// 0xf0e0: WORD 'UNK_0xf0e2' codep=0x1d29 parp=0xf0e2
// ================================================
// 0xf0e2: db 0x3a 0x20 ': '

// ================================================
// 0xf0e4: WORD 'UNK_0xf0e6' codep=0x224c parp=0xf0e6
// ================================================

void UNK_0xf0e6() // UNK_0xf0e6
{
  Push(pp_UNK_0xf0d6); // UNK_0xf0d6
  Push(Read16(Pop())); // @
  Push(0x0096);
  _gt_(); // >
  Push(pp_UNK_0xf0de); // UNK_0xf0de
  Push(Read16(Pop())); // @
  Push(8);
  _slash_(); // /
  Push(8);
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xf0e2); // UNK_0xf0e2
  Push(Read16(Pop())); // @
  Push(8);
  _slash_(); // /
  Push(8);
  Push(Pop() * Pop()); // *
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(pp_UNK_0xf0da); // UNK_0xf0da
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    UNK_0x3f09("MOTION DETECTED AT");
    _dot_TTY(); // .TTY
    Push(pp_UNK_0xf0da); // UNK_0xf0da
    _099(); // 099
  }
  UNK_0x3f09(" X:");
  _dot_TTY(); // .TTY
  Push(pp_UNK_0xf0de); // UNK_0xf0de
  Push(Read16(Pop())); // @
  Push(0xfff8);
  _slash_(); // /
  _dot_(); // .
  Push(7);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  PRINT(" Y:", 3); // (.")
  Push(pp_UNK_0xf0e2); // UNK_0xf0e2
  Push(Read16(Pop())); // @
  Push(0xfff8);
  _slash_(); // /
  _dot_(); // .
}


// ================================================
// 0xf165: WORD 'UNK_0xf167' codep=0x7420 parp=0xf167
// ================================================
// 0xf167: db 0x3d 0x11 0x01 '=  '

// ================================================
// 0xf16a: WORD 'UNK_0xf16c' codep=0x7420 parp=0xf16c
// ================================================
// 0xf16c: db 0x3d 0x12 0x01 '=  '

// ================================================
// 0xf16f: WORD 'UNK_0xf171' codep=0x7420 parp=0xf171
// ================================================
// 0xf171: db 0x3d 0x1b 0x01 '=  '

// ================================================
// 0xf174: WORD 'UNK_0xf176' codep=0x224c parp=0xf176
// ================================================

void UNK_0xf176() // UNK_0xf176
{
  _star__slash_(); // */
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  Push(Pop() * Pop()); // *
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf18c: WORD 'UNK_0xf18e' codep=0x224c parp=0xf18e
// ================================================

void UNK_0xf18e() // UNK_0xf18e
{
  unsigned short int a, b;
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  Push(2);
  Push((Pop()==Pop())?1:0); // =
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
  Push(0x65ee); // IFIELD(INST-X)
  _2_at_(); // 2@
  SWAP(); // SWAP
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(b); // I
    Push(a); // I'
    UNK_0xf176(); // UNK_0xf176
  }
  Push(pp_UNK_0xf0e2); // UNK_0xf0e2
  _ex__2(); // !_2
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(b); // I
    Push(a); // I'
    UNK_0xf176(); // UNK_0xf176
  }
  Push(pp_UNK_0xf0de); // UNK_0xf0de
  _ex__2(); // !_2
  ICLOSE(); // ICLOSE
  Push(b); // R>
  Push(a); // R>
  Pop(); Pop();// 2DROP
  UNK_0xf0e6(); // UNK_0xf0e6
}


// ================================================
// 0xf1fe: WORD 'UNK_0xf200' codep=0x224c parp=0xf200
// ================================================

void UNK_0xf200() // UNK_0xf200
{
  _at_INST_dash_C(); // @INST-C
  Push(0x003d);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(0x65f2); // IFIELD(UNK_0xf167)
    _plus__dash__at_(); // +-@
    Push(0xffc1);
    Push(0x0040);
    WITHIN(); // WITHIN
    Push(0x65f3); // IFIELD(UNK_0xf16c)
    _plus__dash__at_(); // +-@
    Push(0xffc0);
    Push(0x0040);
    WITHIN(); // WITHIN
    Push(Pop() & Pop()); // AND
    Push(pp_CONTEXT_3); // CONTEXT_3
    Push(Read16(Pop())); // @
    Push(2);
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() | Pop()); // OR
    Push(0x65fc); // IFIELD(UNK_0xf171)
    Push(Read8(Pop())&0xFF); // C@
    Push(Pop() & Pop()); // AND
    UNK_0xf08f(); // UNK_0xf08f
    Push(Pop() & Pop()); // AND
    return;
  }
  Push(0);
}


// ================================================
// 0xf246: WORD 'UNK_0xf248' codep=0x224c parp=0xf248
// ================================================

void UNK_0xf248() // UNK_0xf248
{
  Push(0x65f2); // IFIELD(UNK_0xf167)
  _plus__dash__at_(); // +-@
  Push(pp_UNK_0xf0de); // UNK_0xf0de
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x65f2); // IFIELD(UNK_0xf167)
  C_ex__2(); // C!_2
  Push(0x65f3); // IFIELD(UNK_0xf16c)
  _plus__dash__at_(); // +-@
  Push(pp_UNK_0xf0e2); // UNK_0xf0e2
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x65f3); // IFIELD(UNK_0xf16c)
  C_ex__2(); // C!_2
  Push(pp_UNK_0xf0de); // UNK_0xf0de
  Push(Read16(Pop())); // @
  Push(0x65ee); // IFIELD(INST-X)
  _plus__ex__2(); // +!_2
  Push(pp_UNK_0xf0e2); // UNK_0xf0e2
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf276: WORD 'UNK_0xf278' codep=0x224c parp=0xf278
// ================================================

void UNK_0xf278() // UNK_0xf278
{
  _at_IX(); // @IX
  Push(pp_UNK_0xf0de); // UNK_0xf0de
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  _ex_IX(); // !IX
  _at_IY(); // @IY
  Push(pp_UNK_0xf0e2); // UNK_0xf0e2
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  _ex_IY(); // !IY
}


// ================================================
// 0xf28e: WORD 'UNK_0xf290' codep=0x1d29 parp=0xf290
// ================================================
// 0xf290: db 0x3a 0x20 ': '

// ================================================
// 0xf292: WORD 'TRAK-E' codep=0x224c parp=0xf29d
// ================================================
// entry

void TRAK_dash_E() // TRAK-E
{
  unsigned short int i, imax;
  Push(pp_UNK_0xf290); // UNK_0xf290
  _099(); // 099
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65f5); // IFIELD(UNK_0xed2d)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65fb); // IFIELD(UNK_0xed28)
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xf0d6); // UNK_0xf0d6
  _ex__2(); // !_2
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xf0da); // UNK_0xf0da
  ON_2(); // ON_2
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  Push(2);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(pp_IGLOBAL); // IGLOBAL
  } else
  {
    Push(pp_ILOCAL); // ILOCAL
  }
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    POINT_gt_I(); // POINT>I
    _at_ID(); // @ID
    Push(0x00fe);
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      _at_IL(); // @IL
      _at_IH(); // @IH
      _gt_C_plus_S(); // >C+S
      UNK_0xf200(); // UNK_0xf200
      if (Pop() != 0)
      {
        UNK_0xf18e(); // UNK_0xf18e
        UNK_0xf278(); // UNK_0xf278
        UNK_0xf248(); // UNK_0xf248
      }
      Push(0x65ee); // IFIELD(INST-X)
      Push(Read16(Pop())); // @
      Push(0x65f0); // IFIELD(INST-Y)
      Push(Read16(Pop())); // @
      ICLOSE(); // ICLOSE
      Push(pp_XABS); // XABS
      Push(Read16(Pop())); // @
      Push(pp_YABS); // YABS
      Push(Read16(Pop())); // @
      D_eq_(); // D=
      if (Pop() != 0)
      {
        Push(pp_UNK_0xf290); // UNK_0xf290
        ON_2(); // ON_2
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(pp_STAR_dash_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(pp_TRAK_dash_HR); // TRAK-HR
  _ex__2(); // !_2
  Push(pp_UNK_0xf290); // UNK_0xf290
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(pp__i_FLY); // 'FLY
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}


// ================================================
// 0xf32f: WORD 'UNK_0xf331' codep=0x224c parp=0xf331
// ================================================

void UNK_0xf331() // UNK_0xf331
{
  Push(pp__i_TRAK); // 'TRAK
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf337: WORD 'UNK_0xf339' codep=0x2214 parp=0xf339
// ================================================
// 0xf339: db 0x48 0x3a 'H:'

// ================================================
// 0xf33b: WORD 'UNK_0xf33d' codep=0x224c parp=0xf33d
// ================================================

void UNK_0xf33d() // UNK_0xf33d
{
  Push(0xae81); // probable 'CEX+WAX'
}


// ================================================
// 0xf343: WORD '@'EXT' codep=0x4b3b parp=0xf34d
// ================================================

void _at__i_EXT() // @'EXT
{
  switch(Pop()) // @'EXT
  {
  case 2:
    UNK_0xf331(); // UNK_0xf331
    break;
  case 3:
    UNK_0xf331(); // UNK_0xf331
    break;
  case 4:
    UNK_0xf33d(); // UNK_0xf33d
    break;
  default:
    Push(Read16(cc_UNK_0xf339)); // UNK_0xf339
    break;

  }
}

// ================================================
// 0xf35d: WORD '(!'EXT)' codep=0x224c parp=0xf369
// ================================================
// entry

void _ro__ex__i_EXT_rc_() // (!'EXT)
{
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  _at__i_EXT(); // @'EXT case
  Push(pp__i_EXTERN); // 'EXTERN
  _ex__2(); // !_2
}


// ================================================
// 0xf375: WORD '+A-VESS' codep=0x224c parp=0xf381
// ================================================
// entry

void _plus_A_dash_VESS() // +A-VESS
{
  unsigned short int i, imax;
  Push(pp__ro_ENCOUN); // (ENCOUN
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65f6); // IFIELD(UNK_0xe6c3)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(Pop()-2); // 2-
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  RRND(); // RRND
  Push(1);
  MAX(); // MAX
  Push(0x65f4); // IFIELD(UNK_0xe6dc)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(0x65f5); // IFIELD(UNK_0xe6e1)
  Push(Read8(Pop())&0xFF); // C@
  ROT(); // ROT
  Push(0x00ff);
  _st_(); // <
  Push(Pop() * Pop()); // *
  _dash_(); // -
  MIN(); // MIN
  Push(0x0014);
  Push(pp_AVCNT); // AVCNT
  Push(Read16(Pop())); // @
  _dash_(); // -
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_AVCNT); // AVCNT
  _plus__ex__2(); // +!_2
  Push(Read16(regsp)); // DUP
  Push(pp__n_VESS); // #VESS
  _plus__ex__2(); // +!_2
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x0019);

    label1:
    Push(0);
    Push(4);
    RRND(); // RRND
    GET_dash_VES(); // GET-VES case
    Push(Read8(Pop())&0xFF); // C@
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() == 0) goto label1;
    UNK_0xe79c(); // UNK_0xe79c
    i++;
  } while(i<imax); // (LOOP)

  UNK_0xe7cc(); // UNK_0xe7cc
  ICLOSE(); // ICLOSE
  Push(pp__ask_CALLIN); // ?CALLIN
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  D_ex_(); // D!
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xf3ff: WORD 'UNK_0xf401' codep=0x224c parp=0xf401
// ================================================

void UNK_0xf401() // UNK_0xf401
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
}

// 0xf407: db 0x4c 0x22 0xf2 0x0e 0xbb 0x74 0x4c 0x6d 0x90 0x16 0x4c 0x22 0x22 0x75 0x41 0x0e 0x5d 0x17 0x18 0x00 0x5f 0x12 0xf2 0x0e 0x5d 0x17 0x20 0x00 0x5f 0x12 0x3e 0x13 0x90 0x16 'L"   tLm  L""uA ]   _   ]   _ >   '

// ================================================
// 0xf429: WORD 'UNK_0xf42b' codep=0x7420 parp=0xf42b
// ================================================
// 0xf42b: db 0x17 0x11 0x01 '   '

// ================================================
// 0xf42e: WORD 'UNK_0xf430' codep=0x1d29 parp=0xf430
// ================================================
// 0xf430: db 0x3a 0x20 ': '

// ================================================
// 0xf432: WORD 'UNK_0xf434' codep=0x1d29 parp=0xf434
// ================================================
// 0xf434: db 0x3a 0x20 0x4c 0x22 0xaf 0x3b 0x2e 0xf4 0xae 0x0b 0xe7 0x0f 0xb8 0x15 0x50 0x0e 0x13 0x4a 0x32 0xf4 0xae 0x0b 0xf5 0x12 0xfa 0x15 0x0a 0x00 0x50 0x0e 0x2e 0xf4 0x16 0x6d 0x4a 0x17 0xd0 0x15 0xe8 0xff 0x2e 0xf4 0xae 0x0b 0x90 0x16 0x4c 0x22 0x22 0x75 0x5d 0x17 0x20 0x00 0x5f 0x12 0xfa 0x15 0x08 0x00 0x36 0xf4 0x60 0x16 0x04 0x00 0x20 0x0f 0x5d 0x17 0x0b 0x00 0x87 0x3b 0xa9 0x81 0x2d 0x7c 0xdb 0x3f 0xa9 0x7b 0x07 0x76 0xfa 0x15 0x0c 0x00 0xb5 0x75 0xa9 0x7b 0xe2 0x7a 0x60 0x16 0x16 0x00 0x8b 0x75 0xf1 0x7b 0x8d 0x7a 0xfa 0x15 0x0a 0x00 0xc9 0x7a 0x9e 0x7e 0x60 0x16 0x04 0x00 0xc9 0x7a 0xad 0x74 0x16 0x6d 0x90 0x16 ': L" ;.       P  J2         P .  mJ     .     L""u]   _     6 `     ]    ;  -| ? { v     u { z`    u { z     z ~`    z t m  '

// ================================================
// 0xf4b0: WORD 'UNK_0xf4b2' codep=0x224c parp=0xf4b2
// ================================================

void UNK_0xf4b2() // UNK_0xf4b2
{
  IOPEN(); // IOPEN

  label3:
  _ask__dash_NULL(); // ?-NULL
  if (Pop() == 0) goto label1;
  IEXTRAC(); // IEXTRAC
  CI_i_(); // CI'
  _st_INSERT(); // <INSERT
  ICLOSE(); // ICLOSE
  _ask_FIRST(); // ?FIRST
  if (Pop() != 0)
  {
    IPREV(); // IPREV
    MAKE1ST(); // MAKE1ST
    INEXT(); // INEXT
  }
  IOPEN(); // IOPEN
  goto label3;

  label1:
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
}


// ================================================
// 0xf4da: WORD '>ORBITS' codep=0x224c parp=0xf4e6
// ================================================
// entry

void _gt_ORBITS() // >ORBITS
{
  Push(pp_UNK_0xf430); // UNK_0xf430
  _099(); // 099
  UNK_0xf401(); // UNK_0xf401
  Push(0x65f2); // IFIELD(UNK_0xf42b)
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xf434); // UNK_0xf434
  _ex__2(); // !_2
  IOPEN(); // IOPEN
  Push(0xf413);
  Push(0xf464);
  EACH(); // EACH
  UNK_0xe666(); // UNK_0xe666
}


// ================================================
// 0xf504: WORD 'UNK_0xf506' codep=0x224c parp=0xf506
// ================================================

void UNK_0xf506() // UNK_0xf506
{
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  Push((Pop()==Pop())?1:0); // =
  _at_INST_dash_S(); // @INST-S
  Push(4);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    UNK_0xf4b2(); // UNK_0xf4b2
    return;
  }
  INEXT(); // INEXT
}


// ================================================
// 0xf524: WORD 'ORBITS>' codep=0x224c parp=0xf530
// ================================================
// entry

void ORBITS_gt_() // ORBITS>
{
  UNK_0xf401(); // UNK_0xf401
  IOPEN(); // IOPEN

  label2:
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf506(); // UNK_0xf506
  goto label2;

  label1:
  _ask__dash_NULL(); // ?-NULL
  if (Pop() != 0)
  {
    UNK_0xf506(); // UNK_0xf506
  }
  UNK_0xe666(); // UNK_0xe666
}

// 0xf54e: db 0x48 0x4d 0x49 0x53 0x43 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'HMISC-VOC_________ '
  