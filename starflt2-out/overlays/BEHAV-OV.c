// ====== OVERLAY 'BEHAV-OV' ======
// store offset = 0xe470
// overlay size   = 0x10f0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//      UNK_0xe4a8  codep:0x224c parp:0xe4a8 size:0x0008 C-string:'UNK_0xe4a8'
//      UNK_0xe4b2  codep:0x224c parp:0xe4b2 size:0x000a C-string:'UNK_0xe4b2'
//      UNK_0xe4be  codep:0x224c parp:0xe4be size:0x0006 C-string:'UNK_0xe4be'
//      UNK_0xe4c6  codep:0x224c parp:0xe4c6 size:0x000c C-string:'UNK_0xe4c6'
//      UNK_0xe4d4  codep:0x1d29 parp:0xe4d4 size:0x0002 C-string:'UNK_0xe4d4'
//      UNK_0xe4d8  codep:0x224c parp:0xe4d8 size:0x0012 C-string:'UNK_0xe4d8'
//      UNK_0xe4ec  codep:0x224c parp:0xe4ec size:0x000a C-string:'UNK_0xe4ec'
//      UNK_0xe4f8  codep:0x224c parp:0xe4f8 size:0x0006 C-string:'UNK_0xe4f8'
//      UNK_0xe500  codep:0x224c parp:0xe500 size:0x0012 C-string:'UNK_0xe500'
//      UNK_0xe514  codep:0x224c parp:0xe514 size:0x0006 C-string:'UNK_0xe514'
//      UNK_0xe51c  codep:0x224c parp:0xe51c size:0x002a C-string:'UNK_0xe51c'
//      UNK_0xe548  codep:0x224c parp:0xe548 size:0x0008 C-string:'UNK_0xe548'
//      UNK_0xe552  codep:0x224c parp:0xe552 size:0x0008 C-string:'UNK_0xe552'
//      UNK_0xe55c  codep:0x224c parp:0xe55c size:0x0008 C-string:'UNK_0xe55c'
//      UNK_0xe566  codep:0x224c parp:0xe566 size:0x0008 C-string:'UNK_0xe566'
//      UNK_0xe570  codep:0x7420 parp:0xe570 size:0x0003 C-string:'UNK_0xe570'
//      UNK_0xe575  codep:0x7394 parp:0xe575 size:0x0006 C-string:'UNK_0xe575'
//      UNK_0xe57d  codep:0x7420 parp:0xe57d size:0x0003 C-string:'UNK_0xe57d'
//      UNK_0xe582  codep:0x7420 parp:0xe582 size:0x0003 C-string:'UNK_0xe582'
//      UNK_0xe587  codep:0x7420 parp:0xe587 size:0x0003 C-string:'UNK_0xe587'
//      UNK_0xe58c  codep:0x7420 parp:0xe58c size:0x0003 C-string:'UNK_0xe58c'
//      UNK_0xe591  codep:0x7394 parp:0xe591 size:0x0006 C-string:'UNK_0xe591'
//      UNK_0xe599  codep:0x7420 parp:0xe599 size:0x0003 C-string:'UNK_0xe599'
//      UNK_0xe59e  codep:0x7394 parp:0xe59e size:0x0006 C-string:'UNK_0xe59e'
//      UNK_0xe5a6  codep:0x7394 parp:0xe5a6 size:0x0006 C-string:'UNK_0xe5a6'
//      UNK_0xe5ae  codep:0x7394 parp:0xe5ae size:0x0006 C-string:'UNK_0xe5ae'
//      UNK_0xe5b6  codep:0x7420 parp:0xe5b6 size:0x0003 C-string:'UNK_0xe5b6'
//      UNK_0xe5bb  codep:0x7420 parp:0xe5bb size:0x0003 C-string:'UNK_0xe5bb'
//      UNK_0xe5c0  codep:0x7420 parp:0xe5c0 size:0x0003 C-string:'UNK_0xe5c0'
//      UNK_0xe5c5  codep:0x7420 parp:0xe5c5 size:0x0003 C-string:'UNK_0xe5c5'
//      UNK_0xe5ca  codep:0x7420 parp:0xe5ca size:0x0003 C-string:'UNK_0xe5ca'
//      UNK_0xe5cf  codep:0x7394 parp:0xe5cf size:0x0006 C-string:'UNK_0xe5cf'
//      UNK_0xe5d7  codep:0x7394 parp:0xe5d7 size:0x0006 C-string:'UNK_0xe5d7'
//      UNK_0xe5df  codep:0x7420 parp:0xe5df size:0x0003 C-string:'UNK_0xe5df'
//      UNK_0xe5e4  codep:0x7420 parp:0xe5e4 size:0x0003 C-string:'UNK_0xe5e4'
//      UNK_0xe5e9  codep:0x7420 parp:0xe5e9 size:0x0003 C-string:'UNK_0xe5e9'
//      UNK_0xe5ee  codep:0x224c parp:0xe5ee size:0x000a C-string:'UNK_0xe5ee'
//      UNK_0xe5fa  codep:0x224c parp:0xe5fa size:0x000a C-string:'UNK_0xe5fa'
//      UNK_0xe606  codep:0x224c parp:0xe606 size:0x0010 C-string:'UNK_0xe606'
//      UNK_0xe618  codep:0x224c parp:0xe618 size:0x000c C-string:'UNK_0xe618'
//      UNK_0xe626  codep:0x224c parp:0xe626 size:0x001e C-string:'UNK_0xe626'
//      UNK_0xe646  codep:0x224c parp:0xe646 size:0x000c C-string:'UNK_0xe646'
//      UNK_0xe654  codep:0x224c parp:0xe654 size:0x000a C-string:'UNK_0xe654'
//      UNK_0xe660  codep:0x224c parp:0xe660 size:0x0008 C-string:'UNK_0xe660'
//      UNK_0xe66a  codep:0x224c parp:0xe66a size:0x0008 C-string:'UNK_0xe66a'
//      UNK_0xe674  codep:0x224c parp:0xe674 size:0x0008 C-string:'UNK_0xe674'
//      UNK_0xe67e  codep:0x224c parp:0xe67e size:0x0008 C-string:'UNK_0xe67e'
//      UNK_0xe688  codep:0x224c parp:0xe688 size:0x0008 C-string:'UNK_0xe688'
//      UNK_0xe692  codep:0x224c parp:0xe692 size:0x0008 C-string:'UNK_0xe692'
//      UNK_0xe69c  codep:0x224c parp:0xe69c size:0x0008 C-string:'UNK_0xe69c'
//      UNK_0xe6a6  codep:0x224c parp:0xe6a6 size:0x0006 C-string:'UNK_0xe6a6'
//      UNK_0xe6ae  codep:0x224c parp:0xe6ae size:0x000a C-string:'UNK_0xe6ae'
//      UNK_0xe6ba  codep:0x224c parp:0xe6ba size:0x0010 C-string:'UNK_0xe6ba'
//      UNK_0xe6cc  codep:0x224c parp:0xe6cc size:0x003c C-string:'UNK_0xe6cc'
//      UNK_0xe70a  codep:0x224c parp:0xe70a size:0x0022 C-string:'UNK_0xe70a'
//      UNK_0xe72e  codep:0x224c parp:0xe72e size:0x000e C-string:'UNK_0xe72e'
//      UNK_0xe73e  codep:0x224c parp:0xe73e size:0x000a C-string:'UNK_0xe73e'
//      UNK_0xe74a  codep:0x224c parp:0xe74a size:0x000c C-string:'UNK_0xe74a'
//      UNK_0xe758  codep:0x224c parp:0xe758 size:0x0008 C-string:'UNK_0xe758'
//      UNK_0xe762  codep:0x224c parp:0xe762 size:0x0014 C-string:'UNK_0xe762'
//      UNK_0xe778  codep:0x224c parp:0xe778 size:0x000c C-string:'UNK_0xe778'
//      UNK_0xe786  codep:0x224c parp:0xe786 size:0x0012 C-string:'UNK_0xe786'
//      UNK_0xe79a  codep:0x224c parp:0xe79a size:0x001a C-string:'UNK_0xe79a'
//      UNK_0xe7b6  codep:0x224c parp:0xe7b6 size:0x0008 C-string:'UNK_0xe7b6'
//      UNK_0xe7c0  codep:0x224c parp:0xe7c0 size:0x0016 C-string:'UNK_0xe7c0'
//      UNK_0xe7d8  codep:0x224c parp:0xe7d8 size:0x001f C-string:'UNK_0xe7d8'
//      UNK_0xe7f9  codep:0x224c parp:0xe7f9 size:0x0026 C-string:'UNK_0xe7f9'
//      UNK_0xe821  codep:0x224c parp:0xe821 size:0x0020 C-string:'UNK_0xe821'
//           >WEAP  codep:0x4b3b parp:0xe84b size:0x0014 C-string:'_gt_WEAP'
//      UNK_0xe861  codep:0x224c parp:0xe861 size:0x000c C-string:'UNK_0xe861'
//      UNK_0xe86f  codep:0x224c parp:0xe86f size:0x000c C-string:'UNK_0xe86f'
//      UNK_0xe87d  codep:0x224c parp:0xe87d size:0x0014 C-string:'UNK_0xe87d'
//      UNK_0xe893  codep:0x224c parp:0xe893 size:0x0034 C-string:'UNK_0xe893'
//      UNK_0xe8c9  codep:0x224c parp:0xe8c9 size:0x0018 C-string:'UNK_0xe8c9'
//      UNK_0xe8e3  codep:0x224c parp:0xe8e3 size:0x0016 C-string:'UNK_0xe8e3'
//      UNK_0xe8fb  codep:0x224c parp:0xe8fb size:0x002a C-string:'UNK_0xe8fb'
//      UNK_0xe927  codep:0x224c parp:0xe927 size:0x0012 C-string:'UNK_0xe927'
//      UNK_0xe93b  codep:0x224c parp:0xe93b size:0x000a C-string:'UNK_0xe93b'
//      UNK_0xe947  codep:0x224c parp:0xe947 size:0x0026 C-string:'UNK_0xe947'
//      UNK_0xe96f  codep:0x224c parp:0xe96f size:0x001e C-string:'UNK_0xe96f'
//      UNK_0xe98f  codep:0x224c parp:0xe98f size:0x0008 C-string:'UNK_0xe98f'
//      UNK_0xe999  codep:0x224c parp:0xe999 size:0x0030 C-string:'UNK_0xe999'
//      UNK_0xe9cb  codep:0x224c parp:0xe9cb size:0x002a C-string:'UNK_0xe9cb'
//      UNK_0xe9f7  codep:0x224c parp:0xe9f7 size:0x0008 C-string:'UNK_0xe9f7'
//      UNK_0xea01  codep:0x224c parp:0xea01 size:0x0028 C-string:'UNK_0xea01'
//      UNK_0xea2b  codep:0x224c parp:0xea2b size:0x0018 C-string:'UNK_0xea2b'
//      UNK_0xea45  codep:0x224c parp:0xea45 size:0x003f C-string:'UNK_0xea45'
//      UNK_0xea86  codep:0x224c parp:0xea86 size:0x002e C-string:'UNK_0xea86'
//      UNK_0xeab6  codep:0x224c parp:0xeab6 size:0x000c C-string:'UNK_0xeab6'
//      UNK_0xeac4  codep:0x224c parp:0xeac4 size:0x001a C-string:'UNK_0xeac4'
//      UNK_0xeae0  codep:0x224c parp:0xeae0 size:0x0051 C-string:'UNK_0xeae0'
//      UNK_0xeb33  codep:0x224c parp:0xeb33 size:0x0018 C-string:'UNK_0xeb33'
//      UNK_0xeb4d  codep:0x224c parp:0xeb4d size:0x0008 C-string:'UNK_0xeb4d'
//      UNK_0xeb57  codep:0x224c parp:0xeb57 size:0x0006 C-string:'UNK_0xeb57'
//      UNK_0xeb5f  codep:0x224c parp:0xeb5f size:0x0030 C-string:'UNK_0xeb5f'
//          SENT2P  codep:0xaccc parp:0xeb9a size:0x0031 C-string:'SENT2P'
//          P2SENT  codep:0xaccc parp:0xebd6 size:0x0036 C-string:'P2SENT'
//          CRIT2P  codep:0xaccc parp:0xec17 size:0x0045 C-string:'CRIT2P'
//          P2CRIT  codep:0xaccc parp:0xec67 size:0x003b C-string:'P2CRIT'
//      UNK_0xeca4  codep:0x224c parp:0xeca4 size:0x003a C-string:'UNK_0xeca4'
//      UNK_0xece0  codep:0x224c parp:0xece0 size:0x005e C-string:'UNK_0xece0'
//      UNK_0xed40  codep:0x224c parp:0xed40 size:0x001a C-string:'UNK_0xed40'
//      UNK_0xed5c  codep:0x224c parp:0xed5c size:0x0008 C-string:'UNK_0xed5c'
//      UNK_0xed66  codep:0x224c parp:0xed66 size:0x0006 C-string:'UNK_0xed66'
//         CIRCLES  codep:0x224c parp:0xed78 size:0x00b0 C-string:'CIRCLES'
//      UNK_0xee2a  codep:0x224c parp:0xee2a size:0x0020 C-string:'UNK_0xee2a'
//      UNK_0xee4c  codep:0x224c parp:0xee4c size:0x0016 C-string:'UNK_0xee4c'
//      UNK_0xee64  codep:0x224c parp:0xee64 size:0x000e C-string:'UNK_0xee64'
//      UNK_0xee74  codep:0x224c parp:0xee74 size:0x0008 C-string:'UNK_0xee74'
//        ?ANYBODY  codep:0x224c parp:0xee89 size:0x0004 C-string:'IsANYBODY'
//      UNK_0xee8f  codep:0x224c parp:0xee8f size:0x0012 C-string:'UNK_0xee8f'
//      UNK_0xeea3  codep:0x224c parp:0xeea3 size:0x0014 C-string:'UNK_0xeea3'
//      (SIMULATE)  codep:0x4b3b parp:0xeec6 size:0x000c C-string:'_ro_SIMULATE_rc_'
//       1SIMULATE  codep:0x224c parp:0xeee0 size:0x0042 C-string:'_1SIMULATE'
//      UNK_0xef24  codep:0x224c parp:0xef24 size:0x0012 C-string:'UNK_0xef24'
//      UNK_0xef38  codep:0x224c parp:0xef38 size:0x0012 C-string:'UNK_0xef38'
//      UNK_0xef4c  codep:0x224c parp:0xef4c size:0x004c C-string:'UNK_0xef4c'
//      UNK_0xef9a  codep:0x224c parp:0xef9a size:0x0034 C-string:'UNK_0xef9a'
//      UNK_0xefd0  codep:0x224c parp:0xefd0 size:0x0030 C-string:'UNK_0xefd0'
//      UNK_0xf002  codep:0x224c parp:0xf002 size:0x000e C-string:'UNK_0xf002'
//      UNK_0xf012  codep:0x224c parp:0xf012 size:0x0012 C-string:'UNK_0xf012'
//      UNK_0xf026  codep:0x224c parp:0xf026 size:0x001e C-string:'UNK_0xf026'
//       FUNCTIONS  codep:0x1d29 parp:0xf052 size:0x0019 C-string:'FUNCTIONS'
//      UNK_0xf06d  codep:0x224c parp:0xf06d size:0x000a C-string:'UNK_0xf06d'
//      UNK_0xf079  codep:0x224c parp:0xf079 size:0x000a C-string:'UNK_0xf079'
//            MAPS  codep:0x224c parp:0xf08c size:0x0008 C-string:'MAPS'
//       WALK&TALK  codep:0x224c parp:0xf0a2 size:0x0008 C-string:'WALK_and_TALK'
//          TVMOVE  codep:0x224c parp:0xf0b5 size:0x0010 C-string:'TVMOVE'
//      DO.WEAPONS  codep:0x224c parp:0xf0d4 size:0x0018 C-string:'DO_dot_WEAPONS'
//          /ITEMS  codep:0x224c parp:0xf0f7 size:0x0008 C-string:'_slash_ITEMS'
//           ICONS  codep:0x224c parp:0xf109 size:0x000a C-string:'ICONS'
//        >BUTTONS  codep:0x4b3b parp:0xf120 size:0x001c C-string:'_gt_BUTTONS'
//           ?FUNC  codep:0x224c parp:0xf146 size:0x0052 C-string:'IsFUNC'
//      UNK_0xf19a  codep:0x224c parp:0xf19a size:0x005a C-string:'UNK_0xf19a'
//          TV-KEY  codep:0x224c parp:0xf1ff size:0x0074 C-string:'TV_dash_KEY'
//      UNK_0xf275  codep:0x224c parp:0xf275 size:0x0012 C-string:'UNK_0xf275'
//      UNK_0xf289  codep:0x224c parp:0xf289 size:0x004a C-string:'UNK_0xf289'
//      UNK_0xf2d5  codep:0x224c parp:0xf2d5 size:0x003b C-string:'UNK_0xf2d5'
//      UNK_0xf312  codep:0x224c parp:0xf312 size:0x0040 C-string:'UNK_0xf312'
//      UNK_0xf354  codep:0x224c parp:0xf354 size:0x0074 C-string:'UNK_0xf354'
//      UNK_0xf3ca  codep:0x224c parp:0xf3ca size:0x001a C-string:'UNK_0xf3ca'
//      UNK_0xf3e6  codep:0x224c parp:0xf3e6 size:0x000e C-string:'UNK_0xf3e6'
//      GNUNK-CHEC  codep:0x224c parp:0xf403 size:0x0028 C-string:'GNUNK_dash_CHEC'
//        TV-TASKS  codep:0x224c parp:0xf438 size:0x0054 C-string:'TV_dash_TASKS'
//      UNK_0xf48e  codep:0x224c parp:0xf48e size:0x0062 C-string:'UNK_0xf48e'
//      UNK_0xf4f2  codep:0x224c parp:0xf4f2 size:0x000c C-string:'UNK_0xf4f2'
//      UNK_0xf500  codep:0x224c parp:0xf500 size:0x003c C-string:'UNK_0xf500'
//              TV  codep:0x224c parp:0xf543 size:0x0000 C-string:'TV'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int cc_MPS; // MPS
extern const unsigned short int pp_IsCRITIC; // ?CRITIC
extern const unsigned short int pp__i_INJURE; // 'INJURE
extern const unsigned short int pp_LCOLOR; // LCOLOR
extern const unsigned short int pp_OLDHR; // OLDHR
extern const unsigned short int pp__i_THROW_dash_; // 'THROW-
extern const unsigned short int pp_IsNEW; // ?NEW
extern const unsigned short int pp_FORCED; // FORCED
extern const unsigned short int pp_Is3; // ?3
extern const unsigned short int pp_MOVED; // MOVED
extern const unsigned short int pp_ICON_h_; // ICON^
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_XCON; // XCON
extern const unsigned short int pp_YCON; // YCON
extern const unsigned short int pp_YVIS; // YVIS
extern const unsigned short int pp__i__dot_BACKG; // '.BACKG
extern const unsigned short int pp_IGLOBAL; // IGLOBAL
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_STORM; // STORM
extern const unsigned short int pp__n_STORM; // #STORM
extern const unsigned short int pp_IsHEAL; // ?HEAL
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_OCRS; // OCRS
extern const unsigned short int pp_IsON_dash_PLA; // ?ON-PLA
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp_Is5_c__ro_; // ?5:(
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_TIME_dash_PA; // TIME-PA
extern const unsigned short int pp__i__dot_VITAL; // '.VITAL
extern const unsigned short int pp__i__dot_DATE; // '.DATE
extern const unsigned short int pp__i__dot_VEHIC; // '.VEHIC
extern const unsigned short int pp__i_VEHICL; // 'VEHICL
extern const unsigned short int pp__i_CREW_dash_C; // 'CREW-C
extern const unsigned short int pp__i_EXTERN; // 'EXTERN
extern const unsigned short int pp__i_REPAIR; // 'REPAIR
extern const unsigned short int pp__i_TREATM; // 'TREATM
extern const unsigned short int pp_WEAPON_dash_; // WEAPON-
extern const unsigned short int pp__h_CRIT; // ^CRIT
extern const unsigned short int pp_IsFLAT; // ?FLAT
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp_FSTUN; // FSTUN
extern const unsigned short int pp_EYEXY; // EYEXY
extern const unsigned short int pp_WEAPXY; // WEAPXY
extern const unsigned short int pp_XWLD_c_XP; // XWLD:XP
extern const unsigned short int pp_ANCHOR; // ANCHOR
extern const unsigned short int pp_TVEHICL; // TVEHICL
extern const unsigned short int pp__ro_TRADER; // (TRADER
extern const unsigned short int pp_SMART; // SMART
extern const unsigned short int pp_LASTAP; // LASTAP
extern Color BLACK; // BLACK
extern Color RED; // RED
extern Color LT_dash_BLUE; // LT-BLUE
extern Color PINK; // PINK
extern Color WHITE; // WHITE
extern IFieldType INST_dash_SI; // INST-SI
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void IsENOUGH(); // ?ENOUGH
void DEPTH(); // DEPTH
void ABS(); // ABS
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void BEEP(); // BEEP
void MS(); // MS
void NOP(); // NOP
void _2OVER(); // 2OVER
void D_eq_(); // D=
void WITHIN(); // WITHIN
void RRND(); // RRND
void ACELLAD(); // ACELLAD
void A_at_(); // A@
void SETLARR(); // SETLARR
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _2_ex__2(); // 2!_2
void ON_2(); // ON_2
void _099(); // 099
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFLD_at_(); // IFLD@
void IFLD_ex_(); // IFLD!
void IFIND(); // IFIND
void _1PIX(); // 1PIX
void _2PIX(); // 2PIX
void StoreCOLOR(); // !COLOR
void GetCOLOR(); // @COLOR
void RNDCLR(); // RNDCLR
void LLINE(); // LLINE
void DrawCIRCLE_1(); // .CIRCLE_1
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void GetIX(); // @IX
void GetIY(); // @IY
void GetID(); // @ID
void GetIL(); // @IL
void GetIH(); // @IH
void StoreIX(); // !IX
void StoreIY(); // !IY
void DrawBACKGR(); // .BACKGR
void POINT_gt_I(); // POINT>I
void DrawLOCAL_dash_(); // .LOCAL-
void IsICONS_dash__1(); // ?ICONS-_1
void IsICON_eq_I(); // ?ICON=I
void _dash_ICON(); // -ICON
void _plus_ICON_2(); // +ICON_2
void ORGLIST(); // ORGLIST
void _gt_SSCT(); // >SSCT
void _gt_TVCT(); // >TVCT
void CTPOS_dot_(); // CTPOS.
void CTERASE(); // CTERASE
void CLICK(); // CLICK
void BEEPON_2(); // BEEPON_2
void _do__dot_(); // $.
void GCR(); // GCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void IsTRIG(); // ?TRIG
void Y_slash_N(); // Y/N
void SET_dash_CRS(); // SET-CRS
void _dash_XTRAIL(); // -XTRAIL
void DISTRAC(); // DISTRAC
void DrawVIT(); // .VIT
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void _gt_(); // >
void _st_(); // <
void _0_gt_(); // 0>
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void LC_ex_(); // LC!
void GetEXECUTE(); // @EXECUTE
void ON_1(); // ON_1
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void _st_D_ex__gt_(); // <D!>
void CI(); // CI
void IsINVIS(); // ?INVIS
void WLD_gt_SCR(); // WLD>SCR
void _ro_XYSCAN(); // (XYSCAN


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xe4d4 = 0xe4d4; // UNK_0xe4d4 size: 2
// {0x3a, 0x20}

const unsigned short int pp_FUNCTIONS = 0xf052; // FUNCTIONS size: 25
// {0x05, 0x0c, 0x03, 0x0c, 0x13, 0x0c, 0x17, 0x0c, 0x13, 0x0c, 0x2b, 0x0c, 0x17, 0x0c, 0x43, 0x0c, 0x27, 0x0c, 0x6b, 0x0c, 0x1b, 0x0c, 0x87, 0x0c, 0x16}




// 0xe482: db 0x0f 0x01 0x4c 0x22 0xf0 0x0d 0x3e 0x13 0xfa 0x15 0x04 0x00 0xf0 0x0d 0x90 0x16 0x4c 0x22 0xf0 0x0d 0x4c 0x7e 0x90 0x16 0x4c 0x22 0xed 0x22 0x7f 0x3b 0x8c 0x21 0x32 0x6d 0x90 0x16 '  L"  >         L"  L~  L" "; !2m  '

// ================================================
// 0xe4a6: WORD 'UNK_0xe4a8' codep=0x224c parp=0xe4a8 params=0 returns=1
// ================================================

void UNK_0xe4a8() // UNK_0xe4a8
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xe4b0: WORD 'UNK_0xe4b2' codep=0x224c parp=0xe4b2 params=0 returns=1
// ================================================

void UNK_0xe4b2() // UNK_0xe4b2
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xe4bc: WORD 'UNK_0xe4be' codep=0x224c parp=0xe4be params=1 returns=1
// ================================================

void UNK_0xe4be() // UNK_0xe4be
{
  Push((Pop()==0?1:0)==0?1:0); //  0= 0=
}


// ================================================
// 0xe4c4: WORD 'UNK_0xe4c6' codep=0x224c parp=0xe4c6
// ================================================

void UNK_0xe4c6() // UNK_0xe4c6
{
  Push(0);
  Push(0);
  CTPOS_dot_(); // CTPOS.
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe4d2: WORD 'UNK_0xe4d4' codep=0x1d29 parp=0xe4d4
// ================================================
// 0xe4d4: db 0x3a 0x20 ': '

// ================================================
// 0xe4d6: WORD 'UNK_0xe4d8' codep=0x224c parp=0xe4d8 params=0 returns=2
// ================================================

void UNK_0xe4d8() // UNK_0xe4d8
{
  Push(pp_TVEHICL); // TVEHICL
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe4ea: WORD 'UNK_0xe4ec' codep=0x224c parp=0xe4ec params=0 returns=2
// ================================================

void UNK_0xe4ec() // UNK_0xe4ec
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xe4f6: WORD 'UNK_0xe4f8' codep=0x224c parp=0xe4f8
// ================================================
// orphan

void UNK_0xe4f8() // UNK_0xe4f8
{
  GetIX(); // @IX
  GetIY(); // @IY
}


// ================================================
// 0xe4fe: WORD 'UNK_0xe500' codep=0x224c parp=0xe500 params=1 returns=1
// ================================================

void UNK_0xe500() // UNK_0xe500
{
  Push(1);
  UNK_0xe4a8(); // UNK_0xe4a8
  if (Pop() != 0)
  {
    _dash_(); // -
    return;
  }
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe512: WORD 'UNK_0xe514' codep=0x224c parp=0xe514 params=0 returns=0
// ================================================

void UNK_0xe514() // UNK_0xe514
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe51a: WORD 'UNK_0xe51c' codep=0x224c parp=0xe51c
// ================================================
// orphan

void UNK_0xe51c() // UNK_0xe51c
{
  Push(0x6a82); // probable 'CONTOUR'
  SETLARR(); // SETLARR
  Push(Read16(0x65e1+INST_dash_X.offset) - (Read16(pp_XCON) + 1)); // INST-X<IFIELD> @ XCON @ 1+ -
  Push((Read16(0x65e1+INST_dash_Y.offset) - Read16(pp_YCON)) + 1); // INST-Y<IFIELD> @ YCON @ - 1+
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(0x0020);
  _st_(); // <
}


// ================================================
// 0xe546: WORD 'UNK_0xe548' codep=0x224c parp=0xe548 params=0 returns=0
// ================================================
// orphan

void UNK_0xe548() // UNK_0xe548
{
  Push(0xcf71); // probable '.DI'
  MODULE(); // MODULE
}


// ================================================
// 0xe550: WORD 'UNK_0xe552' codep=0x224c parp=0xe552 params=0 returns=0
// ================================================

void UNK_0xe552() // UNK_0xe552
{
  Push(0xcf2b); // probable '.ST'
  MODULE(); // MODULE
}


// ================================================
// 0xe55a: WORD 'UNK_0xe55c' codep=0x224c parp=0xe55c params=0 returns=0
// ================================================

void UNK_0xe55c() // UNK_0xe55c
{
  Push(0xcf47); // probable '.DA'
  MODULE(); // MODULE
}


// ================================================
// 0xe564: WORD 'UNK_0xe566' codep=0x224c parp=0xe566 params=0 returns=0
// ================================================

void UNK_0xe566() // UNK_0xe566
{
  Push(0xc1b8); // probable '(ROL'
  MODULE(); // MODULE
}


// ================================================
// 0xe56e: WORD 'UNK_0xe570' codep=0x7420 parp=0xe570
// ================================================
IFieldType UNK_0xe570 = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xe573: WORD 'UNK_0xe575' codep=0x7394 parp=0xe575
// ================================================
// orphan
LoadDataType UNK_0xe575 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xe57b: WORD 'UNK_0xe57d' codep=0x7420 parp=0xe57d
// ================================================
IFieldType UNK_0xe57d = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xe580: WORD 'UNK_0xe582' codep=0x7420 parp=0xe582
// ================================================
IFieldType UNK_0xe582 = {CREWMEMBERIDX, 0x20, 0x01};

// ================================================
// 0xe585: WORD 'UNK_0xe587' codep=0x7420 parp=0xe587
// ================================================
IFieldType UNK_0xe587 = {TVEHICLEIDX, 0x11, 0x01};

// ================================================
// 0xe58a: WORD 'UNK_0xe58c' codep=0x7420 parp=0xe58c
// ================================================
// orphan
IFieldType UNK_0xe58c = {BOXIDX, 0x11, 0x02};

// ================================================
// 0xe58f: WORD 'UNK_0xe591' codep=0x7394 parp=0xe591
// ================================================
// orphan
LoadDataType UNK_0xe591 = {PLANETIDX, 0x11, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe597: WORD 'UNK_0xe599' codep=0x7420 parp=0xe599
// ================================================
IFieldType UNK_0xe599 = {ASSIGN_CREWIDX, 0x11, 0x03};

// ================================================
// 0xe59c: WORD 'UNK_0xe59e' codep=0x7394 parp=0xe59e
// ================================================
LoadDataType UNK_0xe59e = {TRADERSIDX, 0x00, 0x10, 0x32, 0x6ad1};

// ================================================
// 0xe5a4: WORD 'UNK_0xe5a6' codep=0x7394 parp=0xe5a6
// ================================================
LoadDataType UNK_0xe5a6 = {CREATUREIDX, 0x1b, 0x01, 0x22, 0x6f07};

// ================================================
// 0xe5ac: WORD 'UNK_0xe5ae' codep=0x7394 parp=0xe5ae
// ================================================
// orphan
LoadDataType UNK_0xe5ae = {CREATUREIDX, 0x1d, 0x02, 0x22, 0x6f07};

// ================================================
// 0xe5b4: WORD 'UNK_0xe5b6' codep=0x7420 parp=0xe5b6
// ================================================
IFieldType UNK_0xe5b6 = {CREATUREIDX, 0x15, 0x01};

// ================================================
// 0xe5b9: WORD 'UNK_0xe5bb' codep=0x7420 parp=0xe5bb
// ================================================
IFieldType UNK_0xe5bb = {CREATUREIDX, 0x16, 0x01};

// ================================================
// 0xe5be: WORD 'UNK_0xe5c0' codep=0x7420 parp=0xe5c0
// ================================================
IFieldType UNK_0xe5c0 = {CREATUREIDX, 0x17, 0x01};

// ================================================
// 0xe5c3: WORD 'UNK_0xe5c5' codep=0x7420 parp=0xe5c5
// ================================================
IFieldType UNK_0xe5c5 = {CREATUREIDX, 0x18, 0x01};

// ================================================
// 0xe5c8: WORD 'UNK_0xe5ca' codep=0x7420 parp=0xe5ca
// ================================================
IFieldType UNK_0xe5ca = {CREATUREIDX, 0x19, 0x01};

// ================================================
// 0xe5cd: WORD 'UNK_0xe5cf' codep=0x7394 parp=0xe5cf
// ================================================
// orphan
LoadDataType UNK_0xe5cf = {TRADERSIDX, 0x2a, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe5d5: WORD 'UNK_0xe5d7' codep=0x7394 parp=0xe5d7
// ================================================
LoadDataType UNK_0xe5d7 = {TRADERSIDX, 0x13, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe5dd: WORD 'UNK_0xe5df' codep=0x7420 parp=0xe5df
// ================================================
IFieldType UNK_0xe5df = {TRADERSIDX, 0x0b, 0x01};

// ================================================
// 0xe5e2: WORD 'UNK_0xe5e4' codep=0x7420 parp=0xe5e4
// ================================================
IFieldType UNK_0xe5e4 = {TRADERSIDX, 0x0c, 0x01};

// ================================================
// 0xe5e7: WORD 'UNK_0xe5e9' codep=0x7420 parp=0xe5e9
// ================================================
// orphan
IFieldType UNK_0xe5e9 = {TRADERSIDX, 0x11, 0x03};

// ================================================
// 0xe5ec: WORD 'UNK_0xe5ee' codep=0x224c parp=0xe5ee params=0 returns=1
// ================================================

void UNK_0xe5ee() // UNK_0xe5ee
{
  UNK_0xe4ec(); // UNK_0xe4ec
  Push(pp_WEAPXY); // WEAPXY
  _2_at_(); // 2@
  D_eq_(); // D=
}


// ================================================
// 0xe5f8: WORD 'UNK_0xe5fa' codep=0x224c parp=0xe5fa params=0 returns=1
// ================================================

void UNK_0xe5fa() // UNK_0xe5fa
{
  UNK_0xe4ec(); // UNK_0xe4ec
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  D_eq_(); // D=
}


// ================================================
// 0xe604: WORD 'UNK_0xe606' codep=0x224c parp=0xe606 params=0 returns=1
// ================================================

void UNK_0xe606() // UNK_0xe606
{
  Push(pp_TVEHICL); // TVEHICL
  Get_gt_C_plus_S(); // @>C+S
  Push((Read16(0x65e1+UNK_0xe587.offset)&0xFF)==1?1:0); // UNK_0xe587<IFIELD> C@ 1 =
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe616: WORD 'UNK_0xe618' codep=0x224c parp=0xe618
// ================================================

void UNK_0xe618() // UNK_0xe618
{
  LoadData(UNK_0xe5a6); // from 'CREATURE'
  Push((Read16(Pop())&0xFF) & 2); //  C@ 2 AND
  UNK_0xe4be(); // UNK_0xe4be
}


// ================================================
// 0xe624: WORD 'UNK_0xe626' codep=0x224c parp=0xe626 params=0 returns=1
// ================================================

void UNK_0xe626() // UNK_0xe626
{
  unsigned short int a;
  UNK_0xe4d8(); // UNK_0xe4d8
  UNK_0xe4ec(); // UNK_0xe4ec
  ROT(); // ROT
  _dash_(); // -
  ABS(); // ABS
  Push(2);
  _st_(); // <
  a = Pop(); // >R
  _dash_(); // -
  ABS(); // ABS
  Push(2);
  _st_(); // <
  Push(Pop() & a); //  R> AND
}


// ================================================
// 0xe644: WORD 'UNK_0xe646' codep=0x224c parp=0xe646
// ================================================

void UNK_0xe646() // UNK_0xe646
{
  UNK_0xe514(); // UNK_0xe514
  Push(0xe5cf); // probable 'UNK_0xe5cf'
  IFLD_at_(); // IFLD@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe652: WORD 'UNK_0xe654' codep=0x224c parp=0xe654
// ================================================

void UNK_0xe654() // UNK_0xe654
{
  LoadData(UNK_0xe5a6); // from 'CREATURE'
  Push((Read16(Pop())&0xFF) & 1); //  C@ 1 AND
}


// ================================================
// 0xe65e: WORD 'UNK_0xe660' codep=0x224c parp=0xe660
// ================================================

void UNK_0xe660() // UNK_0xe660
{
  UNK_0xe646(); // UNK_0xe646
  Push(9);
  _gt_(); // >
}


// ================================================
// 0xe668: WORD 'UNK_0xe66a' codep=0x224c parp=0xe66a params=0 returns=1
// ================================================

void UNK_0xe66a() // UNK_0xe66a
{
  Push(Read16(0x65e1+UNK_0xe5ca.offset)&0xFF); // UNK_0xe5ca<IFIELD> C@
  UNK_0xe4be(); // UNK_0xe4be
}


// ================================================
// 0xe672: WORD 'UNK_0xe674' codep=0x224c parp=0xe674 params=0 returns=1
// ================================================

void UNK_0xe674() // UNK_0xe674
{
  Push(Read16(0x65e1+UNK_0xe5e4.offset)&0xFF); // UNK_0xe5e4<IFIELD> C@
  UNK_0xe4be(); // UNK_0xe4be
}


// ================================================
// 0xe67c: WORD 'UNK_0xe67e' codep=0x224c parp=0xe67e params=0 returns=1
// ================================================

void UNK_0xe67e() // UNK_0xe67e
{
  Push(Read16(0x65e1+UNK_0xe5c0.offset)&0xFF); // UNK_0xe5c0<IFIELD> C@
  UNK_0xe4be(); // UNK_0xe4be
}


// ================================================
// 0xe686: WORD 'UNK_0xe688' codep=0x224c parp=0xe688 params=0 returns=1
// ================================================

void UNK_0xe688() // UNK_0xe688
{
  Push(Read16(0x65e1+UNK_0xe5c5.offset)&0xFF); // UNK_0xe5c5<IFIELD> C@
  UNK_0xe4be(); // UNK_0xe4be
}


// ================================================
// 0xe690: WORD 'UNK_0xe692' codep=0x224c parp=0xe692 params=0 returns=1
// ================================================

void UNK_0xe692() // UNK_0xe692
{
  Push(Read16(0x65e1+UNK_0xe5df.offset)&0xFF); // UNK_0xe5df<IFIELD> C@
  UNK_0xe4be(); // UNK_0xe4be
}


// ================================================
// 0xe69a: WORD 'UNK_0xe69c' codep=0x224c parp=0xe69c params=0 returns=1
// ================================================

void UNK_0xe69c() // UNK_0xe69c
{
  Push(Read16(pp_WEAPON_dash_)); // WEAPON- @
  UNK_0xe4be(); // UNK_0xe4be
}


// ================================================
// 0xe6a4: WORD 'UNK_0xe6a6' codep=0x224c parp=0xe6a6
// ================================================

void UNK_0xe6a6() // UNK_0xe6a6
{
  UNK_0xe4ec(); // UNK_0xe4ec
  IsINVIS(); // ?INVIS
}


// ================================================
// 0xe6ac: WORD 'UNK_0xe6ae' codep=0x224c parp=0xe6ae params=0 returns=1
// ================================================

void UNK_0xe6ae() // UNK_0xe6ae
{
  Push(Read16(pp_XWLD_c_XP)==8?1:0); // XWLD:XP @ 8 =
}


// ================================================
// 0xe6b8: WORD 'UNK_0xe6ba' codep=0x224c parp=0xe6ba
// ================================================

void UNK_0xe6ba() // UNK_0xe6ba
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
// 0xe6ca: WORD 'UNK_0xe6cc' codep=0x224c parp=0xe6cc params=2 returns=2
// ================================================

void UNK_0xe6cc() // UNK_0xe6cc
{
  unsigned short int a;
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(0);
    Push(0);
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
// 0xe708: WORD 'UNK_0xe70a' codep=0x224c parp=0xe70a
// ================================================

void UNK_0xe70a() // UNK_0xe70a
{
  Push(Read16(pp_XORMODE)); // XORMODE @
  CI(); // CI
  IsICON_eq_I(); // ?ICON=I
  if (Pop() != 0)
  {
    POINT_gt_I(); // POINT>I
    Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
    Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
    StoreIY(); // !IY
    StoreIX(); // !IX
  }
  UNK_0xe6ba(); // UNK_0xe6ba
  Push(pp_XORMODE); // XORMODE
  Store_2(); // !_2
}


// ================================================
// 0xe72c: WORD 'UNK_0xe72e' codep=0x224c parp=0xe72e params=0 returns=0
// ================================================

void UNK_0xe72e() // UNK_0xe72e
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  _2_ex__2(); // 2!_2
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe73c: WORD 'UNK_0xe73e' codep=0x224c parp=0xe73e params=0 returns=1
// ================================================
// orphan

void UNK_0xe73e() // UNK_0xe73e
{
  CI(); // CI
  IsICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_I(); // POINT>I
}


// ================================================
// 0xe748: WORD 'UNK_0xe74a' codep=0x224c parp=0xe74a
// ================================================

void UNK_0xe74a() // UNK_0xe74a
{
  _dash_ICON(); // -ICON
  Push(0xba55); // probable 'ICON-'
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
}


// ================================================
// 0xe756: WORD 'UNK_0xe758' codep=0x224c parp=0xe758
// ================================================

void UNK_0xe758() // UNK_0xe758
{
  UNK_0xe74a(); // UNK_0xe74a
  UNK_0xe72e(); // UNK_0xe72e
  UNK_0xe6ba(); // UNK_0xe6ba
}


// ================================================
// 0xe760: WORD 'UNK_0xe762' codep=0x224c parp=0xe762
// ================================================

void UNK_0xe762() // UNK_0xe762
{
  UNK_0xe6cc(); // UNK_0xe6cc
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
  Push(Pop() + Pop()); // +
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
  UNK_0xe70a(); // UNK_0xe70a
}


// ================================================
// 0xe776: WORD 'UNK_0xe778' codep=0x224c parp=0xe778
// ================================================
// orphan

void UNK_0xe778() // UNK_0xe778
{
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  _plus__ex__2(); // +!_2
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  _plus__ex__2(); // +!_2
  UNK_0xe70a(); // UNK_0xe70a
}


// ================================================
// 0xe784: WORD 'UNK_0xe786' codep=0x224c parp=0xe786
// ================================================

void UNK_0xe786() // UNK_0xe786
{
  unsigned short int a;
  a = Pop(); // >R
  UNK_0xe4ec(); // UNK_0xe4ec
  Push(a); // R>
  IFLD_at_(); // IFLD@
  _gt_C_plus_S(); // >C+S
  UNK_0xe4ec(); // UNK_0xe4ec
  ICLOSE(); // ICLOSE
  UNK_0xe762(); // UNK_0xe762
}


// ================================================
// 0xe798: WORD 'UNK_0xe79a' codep=0x224c parp=0xe79a
// ================================================

void UNK_0xe79a() // UNK_0xe79a
{
  UNK_0xe660(); // UNK_0xe660
  if (Pop() != 0)
  {
    UNK_0xe4ec(); // UNK_0xe4ec
    UNK_0xe4d8(); // UNK_0xe4d8
    UNK_0xe762(); // UNK_0xe762
  } else
  {
    Push(0xe5e9); // probable 'UNK_0xe5e9'
    UNK_0xe786(); // UNK_0xe786
  }
  UNK_0xe758(); // UNK_0xe758
}


// ================================================
// 0xe7b4: WORD 'UNK_0xe7b6' codep=0x224c parp=0xe7b6
// ================================================

void UNK_0xe7b6() // UNK_0xe7b6
{
  UNK_0xe4ec(); // UNK_0xe4ec
  UNK_0xe4d8(); // UNK_0xe4d8
  UNK_0xe762(); // UNK_0xe762
}


// ================================================
// 0xe7be: WORD 'UNK_0xe7c0' codep=0x224c parp=0xe7c0 params=0 returns=2
// ================================================

void UNK_0xe7c0() // UNK_0xe7c0
{
  SET_STR_AS_PARAM("STONES AND STICKS");
}


// ================================================
// 0xe7d6: WORD 'UNK_0xe7d8' codep=0x224c parp=0xe7d8 params=0 returns=2
// ================================================

void UNK_0xe7d8() // UNK_0xe7d8
{
  SET_STR_AS_PARAM("METAL WEAPONS OF SOME SORT");
}


// ================================================
// 0xe7f7: WORD 'UNK_0xe7f9' codep=0x224c parp=0xe7f9 params=0 returns=2
// ================================================

void UNK_0xe7f9() // UNK_0xe7f9
{
  SET_STR_AS_PARAM("CHEMICAL PROJECTILES OF SOME SORT");
}


// ================================================
// 0xe81f: WORD 'UNK_0xe821' codep=0x224c parp=0xe821 params=0 returns=2
// ================================================

void UNK_0xe821() // UNK_0xe821
{
  SET_STR_AS_PARAM("ENERGY WEAPONS OF SOME SORT");
}


// ================================================
// 0xe841: WORD '>WEAP' codep=0x4b3b parp=0xe84b
// ================================================

void _gt_WEAP() // >WEAP
{
  switch(Pop()) // >WEAP
  {
  case 1:
    UNK_0xe7c0(); // UNK_0xe7c0
    break;
  case 2:
    UNK_0xe7d8(); // UNK_0xe7d8
    break;
  case 3:
    UNK_0xe7f9(); // UNK_0xe7f9
    break;
  case 4:
    UNK_0xe821(); // UNK_0xe821
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe85f: WORD 'UNK_0xe861' codep=0x224c parp=0xe861
// ================================================

void UNK_0xe861() // UNK_0xe861
{
  Push(0);
  Push(0xe5e4); // probable 'UNK_0xe5e4'
  IFLD_ex_(); // IFLD!
  UNK_0xe758(); // UNK_0xe758
}


// ================================================
// 0xe86d: WORD 'UNK_0xe86f' codep=0x224c parp=0xe86f
// ================================================

void UNK_0xe86f() // UNK_0xe86f
{
  Push(0);
  Push(0xe5ca); // probable 'UNK_0xe5ca'
  IFLD_ex_(); // IFLD!
  UNK_0xe758(); // UNK_0xe758
}


// ================================================
// 0xe87b: WORD 'UNK_0xe87d' codep=0x224c parp=0xe87d params=1 returns=1
// ================================================

void UNK_0xe87d() // UNK_0xe87d
{
  Push(Read16(regsp)); // DUP
  Push(0x007f);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(Pop() - 0x0100); //  0x0100 -
}


// ================================================
// 0xe891: WORD 'UNK_0xe893' codep=0x224c parp=0xe893
// ================================================

void UNK_0xe893() // UNK_0xe893
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  Push(Read16(0x65e1+UNK_0xe5b6.offset)&0xFF); // UNK_0xe5b6<IFIELD> C@
  UNK_0xe87d(); // UNK_0xe87d
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  _plus__ex__2(); // +!_2
  Push(Read16(0x65e1+UNK_0xe5bb.offset)&0xFF); // UNK_0xe5bb<IFIELD> C@
  UNK_0xe87d(); // UNK_0xe87d
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  _plus__ex__2(); // +!_2
  Push(0);
  if (Pop() != 0)
  {
    Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
    Store_2(); // !_2
    Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
    Store_2(); // !_2
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  UNK_0xe70a(); // UNK_0xe70a
}


// ================================================
// 0xe8c7: WORD 'UNK_0xe8c9' codep=0x224c parp=0xe8c9
// ================================================

void UNK_0xe8c9() // UNK_0xe8c9
{
  GetID(); // @ID
  Push(!(Pop()==0x0011?1:0)); //  0x0011 = NOT
  if (Pop() == 0) return;
  Push(0);
  Push(0xe5c0); // probable 'UNK_0xe5c0'
  IFLD_ex_(); // IFLD!
}


// ================================================
// 0xe8e1: WORD 'UNK_0xe8e3' codep=0x224c parp=0xe8e3 params=0 returns=2
// ================================================

void UNK_0xe8e3() // UNK_0xe8e3
{
  Push(1);
  Push(5);
  RRND(); // RRND
  Push(Pop() * Read16(cc_MPS)); //  MPS *
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  _slash_(); // /
  Push(1);
  MAX(); // MAX
}


// ================================================
// 0xe8f9: WORD 'UNK_0xe8fb' codep=0x224c parp=0xe8fb
// ================================================

void UNK_0xe8fb() // UNK_0xe8fb
{
  UNK_0xe4b2(); // UNK_0xe4b2
  Push(0x000a);
  _st_(); // <
  if (Pop() != 0)
  {
    UNK_0xe8c9(); // UNK_0xe8c9
  } else
  {
    GetID(); // @ID
    Push(!(Pop()==0x0011?1:0)); //  0x0011 = NOT
    if (Pop() != 0)
    {
      UNK_0xe8e3(); // UNK_0xe8e3
      Push(0x65e1+UNK_0xe5c5.offset); // UNK_0xe5c5<IFIELD>
      C_ex__2(); // C!_2
    }
  }
  UNK_0xe74a(); // UNK_0xe74a
}


// ================================================
// 0xe925: WORD 'UNK_0xe927' codep=0x224c parp=0xe927
// ================================================

void UNK_0xe927() // UNK_0xe927
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  IFLD_at_(); // IFLD@
  Push(Pop() - 1); //  1-
  Push(0);
  MAX(); // MAX
  Push(a); // R>
  IFLD_ex_(); // IFLD!
}


// ================================================
// 0xe939: WORD 'UNK_0xe93b' codep=0x224c parp=0xe93b
// ================================================

void UNK_0xe93b() // UNK_0xe93b
{
  Push(0xe5c5); // probable 'UNK_0xe5c5'
  UNK_0xe927(); // UNK_0xe927
  UNK_0xe758(); // UNK_0xe758
}


// ================================================
// 0xe945: WORD 'UNK_0xe947' codep=0x224c parp=0xe947
// ================================================

void UNK_0xe947() // UNK_0xe947
{
  GetINST_dash_S(); // @INST-S
  Push(0x0015);
  Push(0x0019);
  WITHIN(); // WITHIN
  Push(!Pop()); //  NOT
  Push(0xe5df); // probable 'UNK_0xe5df'
  SWAP(); // SWAP
  if (Pop() != 0)
  {
    Push(0);
    SWAP(); // SWAP
    IFLD_ex_(); // IFLD!
    return;
  }
  UNK_0xe927(); // UNK_0xe927
}


// ================================================
// 0xe96d: WORD 'UNK_0xe96f' codep=0x224c parp=0xe96f params=0 returns=1
// ================================================

void UNK_0xe96f() // UNK_0xe96f
{
  UNK_0xe4b2(); // UNK_0xe4b2
  Push(0x004b);
  _st_(); // <
  Push(Read16(pp_IsFLAT)); // ?FLAT @
  if (Pop() == 0) return;
  Push(0);
  Push(0x000a);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe98d: WORD 'UNK_0xe98f' codep=0x224c parp=0xe98f
// ================================================

void UNK_0xe98f() // UNK_0xe98f
{
  Push(0xe5ae); // probable 'UNK_0xe5ae'
  IFLD_at_(); // IFLD@
}


// ================================================
// 0xe997: WORD 'UNK_0xe999' codep=0x224c parp=0xe999
// ================================================

void UNK_0xe999() // UNK_0xe999
{
  Push(0xe575); // probable 'UNK_0xe575'
  IFLD_at_(); // IFLD@
  _slash_(); // /
  Push(0xe57d); // probable 'UNK_0xe57d'
  IFLD_at_(); // IFLD@
  SWAP(); // SWAP
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(0x0064);
  MIN(); // MIN
  Push(0xe57d); // probable 'UNK_0xe57d'
  IFLD_ex_(); // IFLD!
  Push(0xc18b); // probable '(OBI'
  MODULE(); // MODULE
  UNK_0xe566(); // UNK_0xe566
  Push(pp_IsHEAL); // ?HEAL
  ON_2(); // ON_2
}


// ================================================
// 0xe9c9: WORD 'UNK_0xe9cb' codep=0x224c parp=0xe9cb params=0 returns=0
// ================================================
// orphan

void UNK_0xe9cb() // UNK_0xe9cb
{
  Push(Read16(pp__n_STORM)); // #STORM @
  Push(6);
  Push(0x000b);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Push(1);
  Push(0x0064);
  RRND(); // RRND
  Push(0x001e);
  _st_(); // <
  if (Pop() == 0) return;
  Push(Read16(pp__i_INJURE)); // 'INJURE @
  MODULE(); // MODULE
}


// ================================================
// 0xe9f5: WORD 'UNK_0xe9f7' codep=0x224c parp=0xe9f7
// ================================================

void UNK_0xe9f7() // UNK_0xe9f7
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  UNK_0xe4c6(); // UNK_0xe4c6
}


// ================================================
// 0xe9ff: WORD 'UNK_0xea01' codep=0x224c parp=0xea01
// ================================================

void UNK_0xea01() // UNK_0xea01
{
  UNK_0xe9f7(); // UNK_0xe9f7
  PRINT("THE ", 4); // (.")
  PRINT(" LIFEFORM ATTACKS ", 18); // (.")
  GCR(); // GCR
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xe570.offset); // UNK_0xe570<IFIELD>
  _do__dot_(); // $.
}


// ================================================
// 0xea29: WORD 'UNK_0xea2b' codep=0x224c parp=0xea2b params=0 returns=2
// ================================================

void UNK_0xea2b() // UNK_0xea2b
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xe599.offset); // UNK_0xe599<IFIELD>
  Push(0);
  Push(6);
  RRND(); // RRND
  Push(Pop() * 3); //  3 *
  Push(Pop() + Pop()); // +
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea43: WORD 'UNK_0xea45' codep=0x224c parp=0xea45
// ================================================

void UNK_0xea45() // UNK_0xea45
{
  UNK_0xe96f(); // UNK_0xe96f
  UNK_0xe98f(); // UNK_0xe98f
  UNK_0xea2b(); // UNK_0xea2b
  UNK_0xea01(); // UNK_0xea01
  SWAP(); // SWAP
  if (Pop() != 0)
  {
    UNK_0xe999(); // UNK_0xe999
  } else
  {
    Pop(); // DROP
    PRINT(", BUT MISSES", 12); // (.")
  }
  PRINT(".", 1); // (.")
  ICLOSE(); // ICLOSE
  Push(0x03e8);
  MS(); // MS
  Push(0xc18b); // probable '(OBI'
  MODULE(); // MODULE
  UNK_0xe566(); // UNK_0xe566
  Push(pp__i__dot_VITAL); // '.VITAL
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xea84: WORD 'UNK_0xea86' codep=0x224c parp=0xea86 params=0 returns=0
// ================================================

void UNK_0xea86() // UNK_0xea86
{
  unsigned short int i, imax, j, jmax;
  Push(0x03e8);
  Push(0x0064);

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

    i++;
  } while(i<imax); // (LOOP)

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xeab4: WORD 'UNK_0xeab6' codep=0x224c parp=0xeab6
// ================================================

void UNK_0xeab6() // UNK_0xeab6
{
  WLD_gt_SCR(); // WLD>SCR
  SWAP(); // SWAP
  Push(Pop() + 2); //  2+
  SWAP(); // SWAP
  Push(Pop() + 2); //  2+
}


// ================================================
// 0xeac2: WORD 'UNK_0xeac4' codep=0x224c parp=0xeac4
// ================================================

void UNK_0xeac4() // UNK_0xeac4
{
  _gt_MAINVI(); // >MAINVI
  UNK_0xeab6(); // UNK_0xeab6
  UNK_0xe4ec(); // UNK_0xe4ec
  UNK_0xeab6(); // UNK_0xeab6
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  _1PIX(); // 1PIX
  LLINE(); // LLINE
  V_gt_DISPL(); // V>DISPL
  UNK_0xea86(); // UNK_0xea86
  _2PIX(); // 2PIX
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xeade: WORD 'UNK_0xeae0' codep=0x224c parp=0xeae0
// ================================================

void UNK_0xeae0() // UNK_0xeae0
{
  PRINT("COMMANDER, WE HAVE BEEN HIT WITH", 32); // (.")
  GCR(); // GCR
  UNK_0xe514(); // UNK_0xe514
  LoadData(UNK_0xe5d7); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  _gt_WEAP(); // >WEAP case
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  GCR(); // GCR
  PRINT("BY THE ", 7); // (.")
  UNK_0xe514(); // UNK_0xe514
  LoadData(UNK_0xe59e); // from 'TRADERS'
  Push(0x0010);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb31: WORD 'UNK_0xeb33' codep=0x224c parp=0xeb33
// ================================================

void UNK_0xeb33() // UNK_0xeb33
{
  UNK_0xe514(); // UNK_0xe514
  LoadData(UNK_0xe5d7); // from 'TRADERS'
  Push((Read16(Pop())&0xFF) * 0x0019); //  C@ 0x0019 *
  ICLOSE(); // ICLOSE
  UNK_0xea2b(); // UNK_0xea2b
  _gt_C_plus_S(); // >C+S
  UNK_0xe999(); // UNK_0xe999
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb4b: WORD 'UNK_0xeb4d' codep=0x224c parp=0xeb4d params=0 returns=1
// ================================================

void UNK_0xeb4d() // UNK_0xeb4d
{
  Push(Read16(pp_FSTUN)); // FSTUN @
  UNK_0xe4be(); // UNK_0xe4be
}


// ================================================
// 0xeb55: WORD 'UNK_0xeb57' codep=0x224c parp=0xeb57
// ================================================

void UNK_0xeb57() // UNK_0xeb57
{
  UNK_0xe9f7(); // UNK_0xe9f7
  UNK_0xeae0(); // UNK_0xeae0
}


// ================================================
// 0xeb5d: WORD 'UNK_0xeb5f' codep=0x224c parp=0xeb5f
// ================================================

void UNK_0xeb5f() // UNK_0xeb5f
{
  unsigned short int a;
  UNK_0xe4d8(); // UNK_0xe4d8
  UNK_0xe4a8(); // UNK_0xe4a8
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  if (Pop() != 0)
  {
    UNK_0xe500(); // UNK_0xe500
    SWAP(); // SWAP
    UNK_0xe500(); // UNK_0xe500
    SWAP(); // SWAP
  }
  UNK_0xeac4(); // UNK_0xeac4
  Push(a==0?1:0); // R> 0=
  if (Pop() != 0)
  {
    UNK_0xeb57(); // UNK_0xeb57
    UNK_0xeb33(); // UNK_0xeb33
    Push(0xc18b); // probable '(OBI'
    MODULE(); // MODULE
    UNK_0xe566(); // UNK_0xe566
    DrawVIT(); // .VIT
  }
  UNK_0xe6ba(); // UNK_0xe6ba
}


// ================================================
// 0xeb8f: WORD 'SENT2P' codep=0xaccc parp=0xeb9a
// ================================================

void SENT2P() // SENT2P rule
{
  int b;

  b = 1;
  UNK_0xe674(); // UNK_0xe674
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  UNK_0xeb4d(); // UNK_0xeb4d
  b = b && Pop();
  if (b)
  {
    UNK_0xe758(); // UNK_0xe758
  }

  b = 1;
  UNK_0xe660(); // UNK_0xe660
  b = b && !Pop();
  if (b)
  {
    UNK_0xe79a(); // UNK_0xe79a
  }

  b = 1;
  UNK_0xe6a6(); // UNK_0xe6a6
  b = b && !Pop();
  if (b)
  {
    UNK_0xe79a(); // UNK_0xe79a
  }

  b = 1;
  UNK_0xe6a6(); // UNK_0xe6a6
  b = b && Pop();
  UNK_0xe6ae(); // UNK_0xe6ae
  b = b && Pop();
  if (b)
  {
    UNK_0xeb5f(); // UNK_0xeb5f
  }
}


// ================================================
// 0xebcb: WORD 'P2SENT' codep=0xaccc parp=0xebd6
// ================================================

void P2SENT() // P2SENT rule
{
  int b;

  b = 1;
  UNK_0xe674(); // UNK_0xe674
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  UNK_0xe692(); // UNK_0xe692
  b = b && !Pop();
  if (b)
  {
    UNK_0xe861(); // UNK_0xe861
  }

  b = 1;
  UNK_0xe69c(); // UNK_0xe69c
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  UNK_0xe5fa(); // UNK_0xe5fa
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  UNK_0xe606(); // UNK_0xe606
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  UNK_0xe606(); // UNK_0xe606
  b = b && Pop();
  if (b)
  {
    UNK_0xe947(); // UNK_0xe947
  }
}


// ================================================
// 0xec0c: WORD 'CRIT2P' codep=0xaccc parp=0xec17
// ================================================

void CRIT2P() // CRIT2P rule
{
  int b;

  b = 1;
  UNK_0xe66a(); // UNK_0xe66a
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  UNK_0xe688(); // UNK_0xe688
  b = b && Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  UNK_0xe618(); // UNK_0xe618
  b = b && !Pop();
  UNK_0xe654(); // UNK_0xe654
  b = b && Pop();
  UNK_0xe626(); // UNK_0xe626
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  UNK_0xe618(); // UNK_0xe618
  b = b && !Pop();
  UNK_0xe654(); // UNK_0xe654
  b = b && Pop();
  UNK_0xe626(); // UNK_0xe626
  b = b && Pop();
  if (b)
  {
    UNK_0xea45(); // UNK_0xea45
  }

  b = 1;
  UNK_0xe618(); // UNK_0xe618
  b = b && Pop();
  UNK_0xe654(); // UNK_0xe654
  b = b && !Pop();
  if (b)
  {
    UNK_0xe893(); // UNK_0xe893
  }

  b = 1;
  UNK_0xe618(); // UNK_0xe618
  b = b && Pop();
  UNK_0xe654(); // UNK_0xe654
  b = b && Pop();
  UNK_0xe626(); // UNK_0xe626
  b = b && !Pop();
  if (b)
  {
    UNK_0xe7b6(); // UNK_0xe7b6
  }

  b = 1;
  UNK_0xe618(); // UNK_0xe618
  b = b && Pop();
  UNK_0xe654(); // UNK_0xe654
  b = b && Pop();
  UNK_0xe626(); // UNK_0xe626
  b = b && Pop();
  if (b)
  {
    UNK_0xea45(); // UNK_0xea45
  }
}


// ================================================
// 0xec5c: WORD 'P2CRIT' codep=0xaccc parp=0xec67
// ================================================

void P2CRIT() // P2CRIT rule
{
  int b;

  b = 1;
  UNK_0xe66a(); // UNK_0xe66a
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  UNK_0xe67e(); // UNK_0xe67e
  b = b && !Pop();
  if (b)
  {
    UNK_0xe86f(); // UNK_0xe86f
  }

  b = 1;
  UNK_0xe688(); // UNK_0xe688
  b = b && Pop();
  if (b)
  {
    UNK_0xe93b(); // UNK_0xe93b
  }

  b = 1;
  UNK_0xe69c(); // UNK_0xe69c
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  UNK_0xe5ee(); // UNK_0xe5ee
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  UNK_0xe606(); // UNK_0xe606
  b = b && Pop();
  if (b)
  {
    UNK_0xe8c9(); // UNK_0xe8c9
  }
}

// 0xec76: db 0xea 0x90 '  '

// ================================================
// 0xeca2: WORD 'UNK_0xeca4' codep=0x224c parp=0xeca4
// ================================================

void UNK_0xeca4() // UNK_0xeca4
{
  unsigned short int i, imax;
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  Push(0x00fa);
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash__1(); // ?ICONS-_1
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    POINT_gt_I(); // POINT>I
    GetIL(); // @IL
    GetIH(); // @IH
    _gt_C_plus_S(); // >C+S
    GetINST_dash_C(); // @INST-C
    Push(Pop()==0x0015?1:0); //  0x0015 =
    if (Pop() != 0)
    {
      UNK_0xe758(); // UNK_0xe758
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xecde: WORD 'UNK_0xece0' codep=0x224c parp=0xece0
// ================================================

void UNK_0xece0() // UNK_0xece0
{
  unsigned short int i, imax;
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  Push(0x001e);
  Push(Read16(pp_IGLOBAL)); // IGLOBAL @
  IsICONS_dash__1(); // ?ICONS-_1
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      POINT_gt_I(); // POINT>I
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      GetINST_dash_C(); // @INST-C
      Push(Read16(regsp)); // DUP
      Push(Pop()==0x0044?1:0); //  0x0044 =
      if (Pop() != 0)
      {
        Pop(); // DROP
        Push(0x002a);
        _eq_SPECIE(); // =SPECIE
        Push(!Pop()); //  NOT
        if (Pop() != 0)
        {
          UNK_0xe8fb(); // UNK_0xe8fb
        }
      } else
      {
        Push(Pop()==0x0015?1:0); //  0x0015 =
        if (Pop() != 0)
        {
          UNK_0xe758(); // UNK_0xe758
        }
      }
      ICLOSE(); // ICLOSE
      i++;
    } while(i<imax); // (LOOP)

  }
  UNK_0xe72e(); // UNK_0xe72e
  UNK_0xe6ba(); // UNK_0xe6ba
}


// ================================================
// 0xed3e: WORD 'UNK_0xed40' codep=0x224c parp=0xed40 params=0 returns=0
// ================================================

void UNK_0xed40() // UNK_0xed40
{
  Push(pp_TVEHICL); // TVEHICL
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+INST_dash_QT.offset) - 0x0bb8); // INST-QT<IFIELD> @ 0x0bb8 -
  Push(0);
  MAX(); // MAX
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed5a: WORD 'UNK_0xed5c' codep=0x224c parp=0xed5c params=0 returns=1
// ================================================

void UNK_0xed5c() // UNK_0xed5c
{
  UNK_0xe8e3(); // UNK_0xe8e3
  Push(pp_FSTUN); // FSTUN
  Store_2(); // !_2
}


// ================================================
// 0xed64: WORD 'UNK_0xed66' codep=0x224c parp=0xed66
// ================================================

void UNK_0xed66() // UNK_0xed66
{
  UNK_0xed5c(); // UNK_0xed5c
  UNK_0xece0(); // UNK_0xece0
}


// ================================================
// 0xed6c: WORD 'CIRCLES' codep=0x224c parp=0xed78 params=0 returns=2
// ================================================
// entry

void CIRCLES() // CIRCLES
{
  unsigned short int a, i, imax;
  Push(0x000b);
  Push(0xb78d); // probable 'TV?ART'
  MODULE(); // MODULE
  if (Pop() != 0)
  {
    Push(Read16(pp_IsON_dash_PLA)); // ?ON-PLA @
    if (Pop() != 0)
    {
      Push(pp_XORMODE); // XORMODE
      Push(Read16(regsp)); // DUP
      Push(Read16(Pop())); //  @
      a = Pop(); // >R
      _099(); // 099
      BEEPON_2(); // BEEPON_2
      _gt_MAINVI(); // >MAINVI
      UNK_0xe6ba(); // UNK_0xe6ba
      Push(0x0064);
      Push(0);

      i = Pop();
      imax = Pop();
      do // (DO)
      {
        RNDCLR(); // RNDCLR
        _gt_MAINVI(); // >MAINVI
        Push(0x0023);
        Push(0x0040);
        Push(i); // I
        DrawCIRCLE_1(); // .CIRCLE_1
        V_gt_DISPL(); // V>DISPL
        GetCOLOR(); // @COLOR
        Push(Pop() * 0x000a + i * 0x000a); //  0x000a * I 0x000a * +
        TONE(); // TONE
        Push(5);
        int step = Pop();
        i += step;
        if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
      } while(1); // (+LOOP)

      BEEPOFF(); // BEEPOFF
      UNK_0xed66(); // UNK_0xed66
      UNK_0xed40(); // UNK_0xed40
      UNK_0xe72e(); // UNK_0xe72e
      UNK_0xe6ba(); // UNK_0xe6ba
      Push(0xcf55); // probable '.EN'
      MODULE(); // MODULE
      _gt_DISPLA(); // >DISPLA
      Push(a); // R>
      Push(pp_XORMODE); // XORMODE
      Store_2(); // !_2
    } else
    {
      Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
      Push(5);
      _st_(); // <
      if (Pop() != 0)
      {
        SET_STR_AS_PARAM("STUNNER WORKS ON PLANETSIDE");
        DrawTTY(); // .TTY
      }
    }
  } else
  {
    Push(0xb7e7); // probable '.NOFUN'
    MODULE(); // MODULE
  }
  Push2Words("NULL");
}


// ================================================
// 0xee28: WORD 'UNK_0xee2a' codep=0x224c parp=0xee2a params=0 returns=0
// ================================================

void UNK_0xee2a() // UNK_0xee2a
{
  Push(!Read16(pp_FSTUN)); // FSTUN @ NOT
  if (Pop() == 0) return;
  Push(0xebd6); // probable 'P2SENT'
  DISTRAC(); // DISTRAC
  P2SENT(); // P2SENT rule
  Pop(); // DROP
  Push(0xeb9a); // probable 'SENT2P'
  DISTRAC(); // DISTRAC
  SENT2P(); // SENT2P rule
  Pop(); // DROP
}


// ================================================
// 0xee4a: WORD 'UNK_0xee4c' codep=0x224c parp=0xee4c
// ================================================

void UNK_0xee4c() // UNK_0xee4c
{
  Push(0xec67); // probable 'P2CRIT'
  DISTRAC(); // DISTRAC
  P2CRIT(); // P2CRIT rule
  Pop(); // DROP
  Push(0xec17); // probable 'CRIT2P'
  DISTRAC(); // DISTRAC
  CRIT2P(); // CRIT2P rule
  Pop(); // DROP
}


// ================================================
// 0xee62: WORD 'UNK_0xee64' codep=0x224c parp=0xee64
// ================================================

void UNK_0xee64() // UNK_0xee64
{
  Push(Read16(pp__h_CRIT)); // ^CRIT @
  POINT_gt_I(); // POINT>I
  GetIL(); // @IL
  GetIH(); // @IH
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xee72: WORD 'UNK_0xee74' codep=0x224c parp=0xee74 params=0 returns=0
// ================================================

void UNK_0xee74() // UNK_0xee74
{
  Push(0);
  Push(pp__h_CRIT); // ^CRIT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xee7c: WORD '?ANYBODY' codep=0x224c parp=0xee89 params=0 returns=1
// ================================================

void IsANYBODY() // ?ANYBODY
{
  Push(1);
}


// ================================================
// 0xee8d: WORD 'UNK_0xee8f' codep=0x224c parp=0xee8f params=0 returns=0
// ================================================

void UNK_0xee8f() // UNK_0xee8f
{
  Push(Read16(pp_WEAPON_dash_)); // WEAPON- @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(Pop() - 1); //  1-
  Push(pp_WEAPON_dash_); // WEAPON-
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xeea1: WORD 'UNK_0xeea3' codep=0x224c parp=0xeea3 params=0 returns=0
// ================================================

void UNK_0xeea3() // UNK_0xeea3
{
  Push(Read16(pp__h_CRIT) + 1); // ^CRIT @ 1+
  Push(Read16(pp_ILOCAL) - 1); // ILOCAL @ 1-
  MOD(); // MOD
  Push(pp__h_CRIT); // ^CRIT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xeeb7: WORD '(SIMULATE)' codep=0x4b3b parp=0xeec6
// ================================================

void _ro_SIMULATE_rc_() // (SIMULATE)
{
  switch(Pop()) // (SIMULATE)
  {
  case 68:
    UNK_0xee4c(); // UNK_0xee4c
    break;
  case 21:
    UNK_0xee2a(); // UNK_0xee2a
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xeed2: WORD '1SIMULATE' codep=0x224c parp=0xeee0 params=0 returns=0
// ================================================
// entry

void _1SIMULATE() // 1SIMULATE
{
  Push(Read16(pp_FSTUN)); // FSTUN @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Pop() - 1); //  1-
    Push(Read16(regsp)); // DUP
    Push(pp_FSTUN); // FSTUN
    _st__ex__gt_(); // <!>
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      UNK_0xeca4(); // UNK_0xeca4
    }
  }
  Push(Read16(pp_IsNEW)); // ?NEW @
  if (Pop() != 0)
  {
    UNK_0xee74(); // UNK_0xee74
    Push(pp_IsNEW); // ?NEW
    OFF_2(); // OFF_2
  }
  IsANYBODY(); // ?ANYBODY
  if (Pop() == 0) return;
  UNK_0xee64(); // UNK_0xee64
  Push(1);
  if (Pop() != 0)
  {
    GetINST_dash_C(); // @INST-C
    _ro_SIMULATE_rc_(); // (SIMULATE) case
  }
  ICLOSE(); // ICLOSE
  UNK_0xee8f(); // UNK_0xee8f
  UNK_0xeea3(); // UNK_0xeea3
}


// ================================================
// 0xef22: WORD 'UNK_0xef24' codep=0x224c parp=0xef24 params=0 returns=0
// ================================================

void UNK_0xef24() // UNK_0xef24
{
  Push(0xd0f9); // probable '(TVSE'
  MODULE(); // MODULE
  UNK_0xe55c(); // UNK_0xe55c
  UNK_0xe552(); // UNK_0xe552
  Push(Read16(pp__i__dot_VITAL)); // '.VITAL @
  MODULE(); // MODULE
}


// ================================================
// 0xef36: WORD 'UNK_0xef38' codep=0x224c parp=0xef38
// ================================================

void UNK_0xef38() // UNK_0xef38
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  Push(1);
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash__1(); // ?ICONS-_1
}


// ================================================
// 0xef4a: WORD 'UNK_0xef4c' codep=0x224c parp=0xef4c params=0 returns=1
// ================================================

void UNK_0xef4c() // UNK_0xef4c
{
  unsigned short int i, imax;
  Push(Read16(pp_UNK_0xe4d4)==0?1:0); // UNK_0xe4d4 @ 0=
  if (Pop() != 0)
  {
    UNK_0xef38(); // UNK_0xef38
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(Read16(regsp)); // DUP
      Push(Pop()==1?1:0); //  1 =
      if (Pop() != 0)
      {
        Pop(); Pop(); // 2DROP
        Push(0);
      } else
      {
        Push(0);
        SWAP(); // SWAP
        Push(0);

        i = Pop();
        imax = Pop();
        do // (DO)
        {
          SWAP(); // SWAP
          POINT_gt_I(); // POINT>I
          GetID(); // @ID
          Push(Pop()==0x002e?1:0); //  0x002e =
          if (Pop() != 0)
          {
            Pop(); // DROP
            Push(1);
          }
          i++;
        } while(i<imax); // (LOOP)

      }
    }
    return;
  }
  Push(Read16(cc_FALSE)); // FALSE
}


// ================================================
// 0xef98: WORD 'UNK_0xef9a' codep=0x224c parp=0xef9a
// ================================================

void UNK_0xef9a() // UNK_0xef9a
{
  UNK_0xe9f7(); // UNK_0xe9f7
  PRINT("DO YOU WANT TO TRADE\?   [ NO YES ] ", 35); // (.")
  Y_slash_N(); // Y/N
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  Push(pp_UNK_0xe4d4); // UNK_0xe4d4
  Store_2(); // !_2
}


// ================================================
// 0xefce: WORD 'UNK_0xefd0' codep=0x224c parp=0xefd0
// ================================================

void UNK_0xefd0() // UNK_0xefd0
{
  unsigned short int a, b, c;
  DEPTH(); // DEPTH
  a = Pop(); // >R
  Push(Read16(pp_NCRS)); // NCRS @
  b = Pop(); // >R
  Push(Read16(pp_OCRS)); // OCRS @
  c = Pop(); // >R
  Push(0xc4ac); // probable 'TRADE'
  MODULE(); // MODULE
  Push(pp_UNK_0xe4d4); // UNK_0xe4d4
  ON_2(); // ON_2
  Push(c); // R>
  Push(pp_OCRS); // OCRS
  Store_2(); // !_2
  Push(b); // R>
  Push(pp_NCRS); // NCRS
  Store_2(); // !_2
  Push(a); // R>
  IsENOUGH(); // ?ENOUGH
  UNK_0xef24(); // UNK_0xef24
  UNK_0xe6ba(); // UNK_0xe6ba
}


// ================================================
// 0xf000: WORD 'UNK_0xf002' codep=0x224c parp=0xf002 params=0 returns=1
// ================================================

void UNK_0xf002() // UNK_0xf002
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xe4ec(); // UNK_0xe4ec
  ICLOSE(); // ICLOSE
  UNK_0xe4d8(); // UNK_0xe4d8
  D_eq_(); // D=
}


// ================================================
// 0xf010: WORD 'UNK_0xf012' codep=0x224c parp=0xf012 params=0 returns=2
// ================================================

void UNK_0xf012() // UNK_0xf012
{
  Push(0x1388);
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2
  Push(0x003c);
  MS(); // MS
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf024: WORD 'UNK_0xf026' codep=0x224c parp=0xf026 params=0 returns=0
// ================================================

void UNK_0xf026() // UNK_0xf026
{
  Push(-1);
  Push(Read16(regsp)); // DUP
  Push(pp_YVIS); // YVIS
  _st__plus__ex__gt_(); // <+!>
  Push(pp_YABS); // YABS
  _st__plus__ex__gt_(); // <+!>
  Push(pp_TIME_dash_PA); // TIME-PA
  _099(); // 099
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(-1);
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf044: WORD 'FUNCTIONS' codep=0x1d29 parp=0xf052
// ================================================
// 0xf052: db 0x05 0x0c 0x03 0x0c 0x13 0x0c 0x17 0x0c 0x13 0x0c 0x2b 0x0c 0x17 0x0c 0x43 0x0c 0x27 0x0c 0x6b 0x0c 0x1b 0x0c 0x87 0x0c 0x16 '          +   C ' k      '

// ================================================
// 0xf06b: WORD 'UNK_0xf06d' codep=0x224c parp=0xf06d params=0 returns=0
// ================================================

void UNK_0xf06d() // UNK_0xf06d
{
  _gt_TVCT(); // >TVCT
  Push(pp_FUNCTIONS); // FUNCTIONS
  SET_dash_CRS(); // SET-CRS
  Pop(); // DROP
}


// ================================================
// 0xf077: WORD 'UNK_0xf079' codep=0x224c parp=0xf079 params=1 returns=0
// ================================================

void UNK_0xf079() // UNK_0xf079
{
  CLICK(); // CLICK
  Push(pp_NCRS); // NCRS
  _plus__ex__2(); // +!_2
  UNK_0xf06d(); // UNK_0xf06d
}


// ================================================
// 0xf083: WORD 'MAPS' codep=0x224c parp=0xf08c params=0 returns=0
// ================================================

void MAPS() // MAPS
{
  Push(0xcdb0); // probable 'MAPS'
  MODULE(); // MODULE
}


// ================================================
// 0xf094: WORD 'WALK&TALK' codep=0x224c parp=0xf0a2 params=0 returns=0
// ================================================

void WALK_and_TALK() // WALK&TALK
{
  Push(0xd139); // probable '(TALK'
  MODULE(); // MODULE
}


// ================================================
// 0xf0aa: WORD 'TVMOVE' codep=0x224c parp=0xf0b5 params=0 returns=0
// ================================================

void TVMOVE() // TVMOVE
{
  Push(pp_UNK_0xe4d4); // UNK_0xe4d4
  _099(); // 099
  Push(0xd072); // probable 'TVMO'
  MODULE(); // MODULE
  Push(pp_TIME_dash_PA); // TIME-PA
  ON_2(); // ON_2
}


// ================================================
// 0xf0c5: WORD 'DO.WEAPONS' codep=0x224c parp=0xf0d4 params=0 returns=0
// ================================================

void DO_dot_WEAPONS() // DO.WEAPONS
{
  Push(pp_TVEHICL); // TVEHICL
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
  if (Pop() == 0) return;
  Push(0xd129); // probable '(WEAP'
  MODULE(); // MODULE
}


// ================================================
// 0xf0ec: WORD '/ITEMS' codep=0x224c parp=0xf0f7 params=0 returns=0
// ================================================

void _slash_ITEMS() // /ITEMS
{
  Push(0xcfe6); // probable '/ITEMS'
  MODULE(); // MODULE
}


// ================================================
// 0xf0ff: WORD 'ICONS' codep=0x224c parp=0xf109 params=0 returns=0
// ================================================

void ICONS() // ICONS
{
  Push(0xd034); // probable 'ICONS'
  MODULE(); // MODULE
  UNK_0xef24(); // UNK_0xef24
}


// ================================================
// 0xf113: WORD '>BUTTONS' codep=0x4b3b parp=0xf120
// ================================================

void _gt_BUTTONS() // >BUTTONS
{
  switch(Pop()) // >BUTTONS
  {
  case 0:
    MAPS(); // MAPS
    break;
  case 1:
    TVMOVE(); // TVMOVE
    break;
  case 2:
    _slash_ITEMS(); // /ITEMS
    break;
  case 3:
    WALK_and_TALK(); // WALK&TALK
    break;
  case 4:
    DO_dot_WEAPONS(); // DO.WEAPONS
    break;
  case 5:
    ICONS(); // ICONS
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf13c: WORD '?FUNC' codep=0x224c parp=0xf146 params=0 returns=1
// ================================================

void IsFUNC() // ?FUNC
{
  Push(Read16(pp_LKEY)); // LKEY @
  Push(0x013e);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    CIRCLES(); // CIRCLES
    Push(1);
    return;
  }
  Push(0x013b);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    BEEP(); // BEEP
    Push(1);
    return;
  }
  Push(0x013d);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(0xd0ae); // probable 'TELE_2'
    MODULE(); // MODULE
    Push(1);
    return;
  }
  Push(0);
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf198: WORD 'UNK_0xf19a' codep=0x224c parp=0xf19a params=0 returns=1
// ================================================

void UNK_0xf19a() // UNK_0xf19a
{
  unsigned short int i, imax;
  Push((Read16(pp_PAST) & (Read16(pp_UNK_0xe4d4)==0?1:0)) & (Read16(pp_Is3)==0?1:0)); // PAST @ UNK_0xe4d4 @ 0= AND ?3 @ 0= AND
  if (Pop() != 0)
  {
    UNK_0xef38(); // UNK_0xef38
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(Read16(regsp)); // DUP
      Push(Pop()==1?1:0); //  1 =
      if (Pop() != 0)
      {
        Pop(); Pop(); // 2DROP
        Push(0);
      } else
      {
        Push(0);
        SWAP(); // SWAP
        Push(0);

        i = Pop();
        imax = Pop();
        do // (DO)
        {
          SWAP(); // SWAP
          POINT_gt_I(); // POINT>I
          GetID(); // @ID
          Push(Pop()==0x0031?1:0); //  0x0031 =
          if (Pop() != 0)
          {
            Pop(); // DROP
            Push(1);
          }
          i++;
        } while(i<imax); // (LOOP)

      }
    }
    return;
  }
  Push(Read16(cc_FALSE)); // FALSE
}


// ================================================
// 0xf1f4: WORD 'TV-KEY' codep=0x224c parp=0xf1ff
// ================================================

void TV_dash_KEY() // TV-KEY
{
  _ro_XYSCAN(); // (XYSCAN case
  Push(0);
  Push(1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(1);
    UNK_0xf079(); // UNK_0xf079
  } else
  {
    Push(0);
    Push(-1);
    _2OVER(); // 2OVER
    D_eq_(); // D=
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
      Push(-1);
      UNK_0xf079(); // UNK_0xf079
    } else
    {
      Pop(); // DROP
      IsTRIG(); // ?TRIG
      if (Pop() != 0)
      {
        UNK_0xf012(); // UNK_0xf012
        Push(Read16(pp_NCRS)); // NCRS @
        _gt_BUTTONS(); // >BUTTONS case
        UNK_0xe6ba(); // UNK_0xe6ba
      }
      _1SIMULATE(); // 1SIMULATE
      Pop(); // DROP
    }
  }
  UNK_0xef4c(); // UNK_0xef4c
  if (Pop() != 0)
  {
    UNK_0xef9a(); // UNK_0xef9a
    if (Pop() != 0)
    {
      UNK_0xefd0(); // UNK_0xefd0
    }
    UNK_0xe9f7(); // UNK_0xe9f7
  }
  UNK_0xf19a(); // UNK_0xf19a
  if (Pop() != 0)
  {
    Push(0xc8b4); // probable 'HALL'
    MODULE(); // MODULE
    Push(pp_UNK_0xe4d4); // UNK_0xe4d4
    ON_2(); // ON_2
    UNK_0xe6ba(); // UNK_0xe6ba
    UNK_0xe9f7(); // UNK_0xe9f7
  }
  UNK_0xf002(); // UNK_0xf002
  if (Pop() == 0) return;
  Push(Pop()==0?1:0); //  0=
  UNK_0xf026(); // UNK_0xf026
}


// ================================================
// 0xf273: WORD 'UNK_0xf275' codep=0x224c parp=0xf275 params=2 returns=0
// ================================================

void UNK_0xf275() // UNK_0xf275
{
  Push(0x001a * 0x0012 + 9); // 0x001a 0x0012 * 9 +
  LC_ex_(); // LC!
}


// ================================================
// 0xf287: WORD 'UNK_0xf289' codep=0x224c parp=0xf289
// ================================================

void UNK_0xf289() // UNK_0xf289
{
  unsigned short int a;
  Push(Read16(pp_IsFLAT)); // ?FLAT @
  if (Pop() != 0)
  {
    GetColor(PINK);
  } else
  {
    GetColor(LT_dash_BLUE);
  }
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(Read16(pp_ICON_h_)); // ICON^ @
  UNK_0xf275(); // UNK_0xf275
  Push(Read16(a)); // R@
  Push(Read16(pp_ICON_h_) + 0x0043); // ICON^ @ 0x0043 +
  UNK_0xf275(); // UNK_0xf275
  Push(a); // R>
  Push(Read16(pp_ICON_h_) + 0x0086); // ICON^ @ 0x0086 +
  UNK_0xf275(); // UNK_0xf275
  Push(pp_TVEHICL); // TVEHICL
  Get_gt_C_plus_S(); // @>C+S
  _dash_ICON(); // -ICON
  Push(0xba55); // probable 'ICON-'
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
  ICLOSE(); // ICLOSE
  UNK_0xe72e(); // UNK_0xe72e
}


// ================================================
// 0xf2d3: WORD 'UNK_0xf2d5' codep=0x224c parp=0xf2d5
// ================================================

void UNK_0xf2d5() // UNK_0xf2d5
{
  Push(Read16(pp_IsFLAT)); // ?FLAT @
  if (Pop() != 0)
  {
    _gt_TVCT(); // >TVCT
    SET_STR_AS_PARAM("THE T.V. LIFEFORM SHIELD IS ACTIVE");
    DrawTTY(); // .TTY
    Push(0x07d0);
    MS(); // MS
  }
  UNK_0xf289(); // UNK_0xf289
}


// ================================================
// 0xf310: WORD 'UNK_0xf312' codep=0x224c parp=0xf312 params=0 returns=2
// ================================================

void UNK_0xf312() // UNK_0xf312
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
// 0xf352: WORD 'UNK_0xf354' codep=0x224c parp=0xf354
// ================================================

void UNK_0xf354() // UNK_0xf354
{
  unsigned short int a;
  _gt_C_plus_S(); // >C+S
  Push2Words("*PLIST");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x007d);
  IFIND(); // IFIND
  Pop(); // DROP
  CI(); // CI
  _2DUP(); // 2DUP
  Push(2);
  _star_CLOSE(); // *CLOSE
  GetCOLOR(); // @COLOR
  a = Pop(); // >R
  GetColor(PINK);
  StoreCOLOR(); // !COLOR
  Push(0xbe55); // probable '.AHUF'
  MODULE(); // MODULE
  Push(0x1f40); Push(0x0000);
  Push(0xbe96); // probable 'CPAUS'
  MODULE(); // MODULE
  Push(0x0010);
  Push(0x65e1+UNK_0xe582.offset); // UNK_0xe582<IFIELD>
  Store_2(); // !_2
  Push(0);
  Push(0x65e1+UNK_0xe57d.offset); // UNK_0xe57d<IFIELD>
  C_ex__2(); // C!_2
  Push(0xc18b); // probable '(OBI'
  MODULE(); // MODULE
  Push(0xc1b8); // probable '(ROL'
  MODULE(); // MODULE
  DrawVIT(); // .VIT
  CTINIT(); // CTINIT
  Push(0);
  Push(0x65e1+UNK_0xe582.offset); // UNK_0xe582<IFIELD>
  Store_2(); // !_2
  Push(0xbe55); // probable '.AHUF'
  MODULE(); // MODULE
  Push(0x1f40); Push(0x0000);
  Push(0xbe96); // probable 'CPAUS'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  Push(a); // R>
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf3c8: WORD 'UNK_0xf3ca' codep=0x224c parp=0xf3ca params=0 returns=1
// ================================================
// orphan

void UNK_0xf3ca() // UNK_0xf3ca
{
  Push(Read16(pp_OLDHR) - Read16(pp_STAR_dash_HR)); // OLDHR @ STAR-HR @ -
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(Read16(pp_STAR_dash_HR)); // STAR-HR @
  Push(pp_OLDHR); // OLDHR
  Store_2(); // !_2
}


// ================================================
// 0xf3e4: WORD 'UNK_0xf3e6' codep=0x224c parp=0xf3e6 params=0 returns=1
// ================================================
// orphan

void UNK_0xf3e6() // UNK_0xf3e6
{
  UNK_0xf3ca(); // UNK_0xf3ca
  Push(Pop() | Read16(pp_FORCED)); //  FORCED @ OR
  Push(pp_FORCED); // FORCED
  _099(); // 099
}


// ================================================
// 0xf3f4: WORD 'GNUNK-CHEC' codep=0x224c parp=0xf403 params=0 returns=0
// ================================================

void GNUNK_dash_CHEC() // GNUNK-CHEC
{
  UNK_0xf312(); // UNK_0xf312
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(Read16(pp_Is5_c__ro_)); // ?5:( @
    Push(4);
    _gt_(); // >
    if (Pop() != 0)
    {
      _gt_TVCT(); // >TVCT
      UNK_0xf354(); // UNK_0xf354
    } else
    {
      Pop(); Pop(); // 2DROP
    }
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf42b: WORD 'TV-TASKS' codep=0x224c parp=0xf438
// ================================================
// entry

void TV_dash_TASKS() // TV-TASKS
{
  Push(0xf3e6); // probable 'UNK_0xf3e6'
  Push(pp__i_VEHICL); // 'VEHICL
  _st__ex__gt_(); // <!>
  Push(0xcf1b); // probable 'DO-STORM'
  Push(pp__i_REPAIR); // 'REPAIR
  _st__ex__gt_(); // <!>
  Push(0xe552); // probable 'UNK_0xe552'
  Push(pp__i__dot_VEHIC); // '.VEHIC
  _st__ex__gt_(); // <!>
  Push(0xeee0); // probable '1SIMULATE'
  Push(pp__i_EXTERN); // 'EXTERN
  _st__ex__gt_(); // <!>
  Push(0xc1f8); // probable '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  _st__ex__gt_(); // <!>
  Push2Words("0.");
  Push(pp_LASTAP); // LASTAP
  _st_D_ex__gt_(); // <D!>
  Push(0xc1d8); // probable '.VIT'
  Push(pp__i__dot_VITAL); // '.VITAL
  _st__ex__gt_(); // <!>
  Push(0xc1c7); // probable 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  _st__ex__gt_(); // <!>
  Push(0xe55c); // probable 'UNK_0xe55c'
  Push(pp__i__dot_DATE); // '.DATE
  _st__ex__gt_(); // <!>
  Push(pp_TIME_dash_PA); // TIME-PA
  ON_1(); // ON_1
  Push(0xce24); // probable '8X8CO'
  Push(pp__i__dot_BACKG); // '.BACKG
  Store_2(); // !_2
}


// ================================================
// 0xf48c: WORD 'UNK_0xf48e' codep=0x224c parp=0xf48e params=0 returns=0
// ================================================

void UNK_0xf48e() // UNK_0xf48e
{
  Push(0xb033); // probable '?VCYCLE'
  Push(pp__i_VEHICL); // 'VEHICL
  _st__ex__gt_(); // <!>
  Push(0xc3cf); // probable 'MREPAIR'
  Push(pp__i_REPAIR); // 'REPAIR
  _st__ex__gt_(); // <!>
  Push(0xc0f9); // probable '.SORD'
  Push(pp__i__dot_VEHIC); // '.VEHIC
  _st__ex__gt_(); // <!>
  Push(0x3a48); // probable 'NOP'
  Push(pp__i_EXTERN); // 'EXTERN
  _st__ex__gt_(); // <!>
  Push(0xc1f8); // probable '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  _st__ex__gt_(); // <!>
  Push(0x3a48); // probable 'NOP'
  Push(pp__i__dot_VITAL); // '.VITAL
  _st__ex__gt_(); // <!>
  Push(0xc1c7); // probable 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  _st__ex__gt_(); // <!>
  Push(0xc0e7); // probable '/STARD'
  Push(pp__i__dot_DATE); // '.DATE
  _st__ex__gt_(); // <!>
  Push(Read16(pp_IsCRITIC)); // ?CRITIC @
  if (Pop() != 0)
  {
    Push(0xd149); // probable 'HEAVE'
  } else
  {
    Push(0x3a48); // probable 'NOP'
  }
  Push(pp__i_THROW_dash_); // 'THROW-
  _st__ex__gt_(); // <!>
  Push(pp_WEAPON_dash_); // WEAPON-
  _099(); // 099
  Push(pp_MOVED); // MOVED
  _099(); // 099
}


// ================================================
// 0xf4f0: WORD 'UNK_0xf4f2' codep=0x224c parp=0xf4f2 params=0 returns=0
// ================================================

void UNK_0xf4f2() // UNK_0xf4f2
{
  Push(0xd109); // probable '(CLEA'
  MODULE(); // MODULE
  UNK_0xf48e(); // UNK_0xf48e
  _gt_SSCT(); // >SSCT
}


// ================================================
// 0xf4fe: WORD 'UNK_0xf500' codep=0x224c parp=0xf500
// ================================================

void UNK_0xf500() // UNK_0xf500
{
  Push(pp_WEAPON_dash_); // WEAPON-
  _099(); // 099
  Push(pp_STORM); // STORM
  _099(); // 099
  Push(pp_FSTUN); // FSTUN
  _099(); // 099
  Push(pp_SMART); // SMART
  _099(); // 099
  Push(0xd149); // probable 'HEAVE'
  Push(pp__i_THROW_dash_); // 'THROW-
  Store_2(); // !_2
  Push(0xd0e9); // probable 'TV-DI'
  MODULE(); // MODULE
  UNK_0xe55c(); // UNK_0xe55c
  UNK_0xe566(); // UNK_0xe566
  Push(0xd090); // probable '!E/M'
  MODULE(); // MODULE
  UNK_0xe552(); // UNK_0xe552
  DrawVIT(); // .VIT
  TV_dash_TASKS(); // TV-TASKS
  GetColor(BLACK);
  Push(pp_LCOLOR); // LCOLOR
  Store_2(); // !_2
  UNK_0xf2d5(); // UNK_0xf2d5
  UNK_0xe6ba(); // UNK_0xe6ba
  GNUNK_dash_CHEC(); // GNUNK-CHEC
}


// ================================================
// 0xf53c: WORD 'TV' codep=0x224c parp=0xf543
// ================================================
// entry

void TV() // TV
{
  Push(0xf4f2); // probable 'UNK_0xf4f2'
  Push(0xf1ff); // probable 'TV-KEY'
  Push(0xf500); // probable 'UNK_0xf500'
  DOTASKS(UNK_0xf500, UNK_0xf500, UNK_0xf500);
  Push(pp_TIME_dash_PA); // TIME-PA
  ON_2(); // ON_2
}

// 0xf557: db 0x42 0x45 0x48 0x41 0x56 0x49 0x4f 0x5f 0x5f 0x00 'BEHAVIO__ '

