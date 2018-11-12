// ====== OVERLAY 'BEHAV-OV' ======
// store offset = 0xe470
// overlay size   = 0x10f0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WE486  codep:0x224c wordp:0xe486 size:0x000c C-string:'WE486'
//           WE494  codep:0x224c wordp:0xe494 size:0x0006 C-string:'WE494'
//           WE49C  codep:0x224c wordp:0xe49c size:0x000a C-string:'WE49C'
//           WE4A8  codep:0x224c wordp:0xe4a8 size:0x0008 C-string:'WE4A8'
//           WE4B2  codep:0x224c wordp:0xe4b2 size:0x000a C-string:'WE4B2'
//           WE4BE  codep:0x224c wordp:0xe4be size:0x0006 C-string:'WE4BE'
//           WE4C6  codep:0x224c wordp:0xe4c6 size:0x000c C-string:'WE4C6'
//           WE4D4  codep:0x1d29 wordp:0xe4d4 size:0x0002 C-string:'WE4D4'
//           WE4D8  codep:0x224c wordp:0xe4d8 size:0x0012 C-string:'WE4D8'
//           WE4EC  codep:0x224c wordp:0xe4ec size:0x000a C-string:'WE4EC'
//           WE4F8  codep:0x224c wordp:0xe4f8 size:0x0006 C-string:'WE4F8'
//           WE500  codep:0x224c wordp:0xe500 size:0x0012 C-string:'WE500'
//           WE514  codep:0x224c wordp:0xe514 size:0x0006 C-string:'WE514'
//           WE51C  codep:0x224c wordp:0xe51c size:0x002a C-string:'WE51C'
//           WE548  codep:0x224c wordp:0xe548 size:0x0008 C-string:'WE548'
//           WE552  codep:0x224c wordp:0xe552 size:0x0008 C-string:'WE552'
//           WE55C  codep:0x224c wordp:0xe55c size:0x0008 C-string:'WE55C'
//           WE566  codep:0x224c wordp:0xe566 size:0x0008 C-string:'WE566'
//           WE570  codep:0x7420 wordp:0xe570 size:0x0003 C-string:'WE570'
//           WE575  codep:0x7394 wordp:0xe575 size:0x0006 C-string:'WE575'
//           WE57D  codep:0x7420 wordp:0xe57d size:0x0003 C-string:'WE57D'
//           WE582  codep:0x7420 wordp:0xe582 size:0x0003 C-string:'WE582'
//           WE587  codep:0x7420 wordp:0xe587 size:0x0003 C-string:'WE587'
//           WE58C  codep:0x7420 wordp:0xe58c size:0x0003 C-string:'WE58C'
//           WE591  codep:0x7394 wordp:0xe591 size:0x0006 C-string:'WE591'
//           WE599  codep:0x7420 wordp:0xe599 size:0x0003 C-string:'WE599'
//           WE59E  codep:0x7394 wordp:0xe59e size:0x0006 C-string:'WE59E'
//           WE5A6  codep:0x7394 wordp:0xe5a6 size:0x0006 C-string:'WE5A6'
//           WE5AE  codep:0x7394 wordp:0xe5ae size:0x0006 C-string:'WE5AE'
//           WE5B6  codep:0x7420 wordp:0xe5b6 size:0x0003 C-string:'WE5B6'
//           WE5BB  codep:0x7420 wordp:0xe5bb size:0x0003 C-string:'WE5BB'
//           WE5C0  codep:0x7420 wordp:0xe5c0 size:0x0003 C-string:'WE5C0'
//           WE5C5  codep:0x7420 wordp:0xe5c5 size:0x0003 C-string:'WE5C5'
//           WE5CA  codep:0x7420 wordp:0xe5ca size:0x0003 C-string:'WE5CA'
//           WE5CF  codep:0x7394 wordp:0xe5cf size:0x0006 C-string:'WE5CF'
//           WE5D7  codep:0x7394 wordp:0xe5d7 size:0x0006 C-string:'WE5D7'
//           WE5DF  codep:0x7420 wordp:0xe5df size:0x0003 C-string:'WE5DF'
//           WE5E4  codep:0x7420 wordp:0xe5e4 size:0x0003 C-string:'WE5E4'
//           WE5E9  codep:0x7420 wordp:0xe5e9 size:0x0003 C-string:'WE5E9'
//           WE5EE  codep:0x224c wordp:0xe5ee size:0x000a C-string:'WE5EE'
//           WE5FA  codep:0x224c wordp:0xe5fa size:0x000a C-string:'WE5FA'
//           WE606  codep:0x224c wordp:0xe606 size:0x0010 C-string:'WE606'
//           WE618  codep:0x224c wordp:0xe618 size:0x000c C-string:'WE618'
//           WE626  codep:0x224c wordp:0xe626 size:0x001e C-string:'WE626'
//           WE646  codep:0x224c wordp:0xe646 size:0x000c C-string:'WE646'
//           WE654  codep:0x224c wordp:0xe654 size:0x000a C-string:'WE654'
//           WE660  codep:0x224c wordp:0xe660 size:0x0008 C-string:'WE660'
//           WE66A  codep:0x224c wordp:0xe66a size:0x0008 C-string:'WE66A'
//           WE674  codep:0x224c wordp:0xe674 size:0x0008 C-string:'WE674'
//           WE67E  codep:0x224c wordp:0xe67e size:0x0008 C-string:'WE67E'
//           WE688  codep:0x224c wordp:0xe688 size:0x0008 C-string:'WE688'
//           WE692  codep:0x224c wordp:0xe692 size:0x0008 C-string:'WE692'
//           WE69C  codep:0x224c wordp:0xe69c size:0x0008 C-string:'WE69C'
//           WE6A6  codep:0x224c wordp:0xe6a6 size:0x0006 C-string:'WE6A6'
//           WE6AE  codep:0x224c wordp:0xe6ae size:0x000a C-string:'WE6AE'
//           WE6BA  codep:0x224c wordp:0xe6ba size:0x0010 C-string:'WE6BA'
//           WE6CC  codep:0x224c wordp:0xe6cc size:0x003c C-string:'WE6CC'
//           WE70A  codep:0x224c wordp:0xe70a size:0x0022 C-string:'WE70A'
//           WE72E  codep:0x224c wordp:0xe72e size:0x000e C-string:'WE72E'
//           WE73E  codep:0x224c wordp:0xe73e size:0x000a C-string:'WE73E'
//           WE74A  codep:0x224c wordp:0xe74a size:0x000c C-string:'WE74A'
//           WE758  codep:0x224c wordp:0xe758 size:0x0008 C-string:'WE758'
//           WE762  codep:0x224c wordp:0xe762 size:0x0014 C-string:'WE762'
//           WE778  codep:0x224c wordp:0xe778 size:0x000c C-string:'WE778'
//           WE786  codep:0x224c wordp:0xe786 size:0x0012 C-string:'WE786'
//           WE79A  codep:0x224c wordp:0xe79a size:0x001a C-string:'WE79A'
//           WE7B6  codep:0x224c wordp:0xe7b6 size:0x0008 C-string:'WE7B6'
//           WE7C0  codep:0x224c wordp:0xe7c0 size:0x0016 C-string:'WE7C0'
//           WE7D8  codep:0x224c wordp:0xe7d8 size:0x001f C-string:'WE7D8'
//           WE7F9  codep:0x224c wordp:0xe7f9 size:0x0026 C-string:'WE7F9'
//           WE821  codep:0x224c wordp:0xe821 size:0x0020 C-string:'WE821'
//           >WEAP  codep:0x4b3b wordp:0xe84b size:0x0014 C-string:'_gt_WEAP'
//           WE861  codep:0x224c wordp:0xe861 size:0x000c C-string:'WE861'
//           WE86F  codep:0x224c wordp:0xe86f size:0x000c C-string:'WE86F'
//           WE87D  codep:0x224c wordp:0xe87d size:0x0014 C-string:'WE87D'
//           WE893  codep:0x224c wordp:0xe893 size:0x0034 C-string:'WE893'
//           WE8C9  codep:0x224c wordp:0xe8c9 size:0x0018 C-string:'WE8C9'
//           WE8E3  codep:0x224c wordp:0xe8e3 size:0x0016 C-string:'WE8E3'
//           WE8FB  codep:0x224c wordp:0xe8fb size:0x002a C-string:'WE8FB'
//           WE927  codep:0x224c wordp:0xe927 size:0x0012 C-string:'WE927'
//           WE93B  codep:0x224c wordp:0xe93b size:0x000a C-string:'WE93B'
//           WE947  codep:0x224c wordp:0xe947 size:0x0026 C-string:'WE947'
//           WE96F  codep:0x224c wordp:0xe96f size:0x001e C-string:'WE96F'
//           WE98F  codep:0x224c wordp:0xe98f size:0x0008 C-string:'WE98F'
//           WE999  codep:0x224c wordp:0xe999 size:0x0030 C-string:'WE999'
//           WE9CB  codep:0x224c wordp:0xe9cb size:0x002a C-string:'WE9CB'
//           WE9F7  codep:0x224c wordp:0xe9f7 size:0x0008 C-string:'WE9F7'
//           WEA01  codep:0x224c wordp:0xea01 size:0x0028 C-string:'WEA01'
//           WEA2B  codep:0x224c wordp:0xea2b size:0x0018 C-string:'WEA2B'
//           WEA45  codep:0x224c wordp:0xea45 size:0x003f C-string:'WEA45'
//           WEA86  codep:0x224c wordp:0xea86 size:0x002e C-string:'WEA86'
//           WEAB6  codep:0x224c wordp:0xeab6 size:0x000c C-string:'WEAB6'
//           WEAC4  codep:0x224c wordp:0xeac4 size:0x001a C-string:'WEAC4'
//           WEAE0  codep:0x224c wordp:0xeae0 size:0x0051 C-string:'WEAE0'
//           WEB33  codep:0x224c wordp:0xeb33 size:0x0018 C-string:'WEB33'
//           WEB4D  codep:0x224c wordp:0xeb4d size:0x0008 C-string:'WEB4D'
//           WEB57  codep:0x224c wordp:0xeb57 size:0x0006 C-string:'WEB57'
//           WEB5F  codep:0x224c wordp:0xeb5f size:0x0030 C-string:'WEB5F'
//          SENT2P  codep:0xaccc wordp:0xeb9a size:0x0031 C-string:'SENT2P'
//          P2SENT  codep:0xaccc wordp:0xebd6 size:0x0036 C-string:'P2SENT'
//          CRIT2P  codep:0xaccc wordp:0xec17 size:0x0045 C-string:'CRIT2P'
//          P2CRIT  codep:0xaccc wordp:0xec67 size:0x003b C-string:'P2CRIT'
//           WECA4  codep:0x224c wordp:0xeca4 size:0x003a C-string:'WECA4'
//           WECE0  codep:0x224c wordp:0xece0 size:0x005e C-string:'WECE0'
//           WED40  codep:0x224c wordp:0xed40 size:0x001a C-string:'WED40'
//           WED5C  codep:0x224c wordp:0xed5c size:0x0008 C-string:'WED5C'
//           WED66  codep:0x224c wordp:0xed66 size:0x0006 C-string:'WED66'
//         CIRCLES  codep:0x224c wordp:0xed78 size:0x00b0 C-string:'CIRCLES'
//           WEE2A  codep:0x224c wordp:0xee2a size:0x0020 C-string:'WEE2A'
//           WEE4C  codep:0x224c wordp:0xee4c size:0x0016 C-string:'WEE4C'
//           WEE64  codep:0x224c wordp:0xee64 size:0x000e C-string:'WEE64'
//           WEE74  codep:0x224c wordp:0xee74 size:0x0008 C-string:'WEE74'
//        ?ANYBODY  codep:0x224c wordp:0xee89 size:0x0004 C-string:'IsANYBODY'
//           WEE8F  codep:0x224c wordp:0xee8f size:0x0012 C-string:'WEE8F'
//           WEEA3  codep:0x224c wordp:0xeea3 size:0x0014 C-string:'WEEA3'
//      (SIMULATE)  codep:0x4b3b wordp:0xeec6 size:0x000c C-string:'_ro_SIMULATE_rc_'
//       1SIMULATE  codep:0x224c wordp:0xeee0 size:0x0042 C-string:'_1SIMULATE'
//           WEF24  codep:0x224c wordp:0xef24 size:0x0012 C-string:'WEF24'
//           WEF38  codep:0x224c wordp:0xef38 size:0x0012 C-string:'WEF38'
//           WEF4C  codep:0x224c wordp:0xef4c size:0x004c C-string:'WEF4C'
//           WEF9A  codep:0x224c wordp:0xef9a size:0x0034 C-string:'WEF9A'
//           WEFD0  codep:0x224c wordp:0xefd0 size:0x0030 C-string:'WEFD0'
//           WF002  codep:0x224c wordp:0xf002 size:0x000e C-string:'WF002'
//           WF012  codep:0x224c wordp:0xf012 size:0x0012 C-string:'WF012'
//           WF026  codep:0x224c wordp:0xf026 size:0x001e C-string:'WF026'
//       FUNCTIONS  codep:0x1d29 wordp:0xf052 size:0x0019 C-string:'FUNCTIONS'
//           WF06D  codep:0x224c wordp:0xf06d size:0x000a C-string:'WF06D'
//           WF079  codep:0x224c wordp:0xf079 size:0x000a C-string:'WF079'
//            MAPS  codep:0x224c wordp:0xf08c size:0x0008 C-string:'MAPS'
//       WALK&TALK  codep:0x224c wordp:0xf0a2 size:0x0008 C-string:'WALK_and_TALK'
//          TVMOVE  codep:0x224c wordp:0xf0b5 size:0x0010 C-string:'TVMOVE'
//      DO.WEAPONS  codep:0x224c wordp:0xf0d4 size:0x0018 C-string:'DO_dot_WEAPONS'
//          /ITEMS  codep:0x224c wordp:0xf0f7 size:0x0008 C-string:'_slash_ITEMS'
//           ICONS  codep:0x224c wordp:0xf109 size:0x000a C-string:'ICONS'
//        >BUTTONS  codep:0x4b3b wordp:0xf120 size:0x001c C-string:'_gt_BUTTONS'
//           ?FUNC  codep:0x224c wordp:0xf146 size:0x0052 C-string:'IsFUNC'
//           WF19A  codep:0x224c wordp:0xf19a size:0x005a C-string:'WF19A'
//          TV-KEY  codep:0x224c wordp:0xf1ff size:0x0074 C-string:'TV_dash_KEY'
//           WF275  codep:0x224c wordp:0xf275 size:0x0012 C-string:'WF275'
//           WF289  codep:0x224c wordp:0xf289 size:0x004a C-string:'WF289'
//           WF2D5  codep:0x224c wordp:0xf2d5 size:0x003b C-string:'WF2D5'
//           WF312  codep:0x224c wordp:0xf312 size:0x0040 C-string:'WF312'
//           WF354  codep:0x224c wordp:0xf354 size:0x0074 C-string:'WF354'
//           WF3CA  codep:0x224c wordp:0xf3ca size:0x001a C-string:'WF3CA'
//           WF3E6  codep:0x224c wordp:0xf3e6 size:0x000e C-string:'WF3E6'
//      GNUNK-CHEC  codep:0x224c wordp:0xf403 size:0x0028 C-string:'GNUNK_dash_CHEC'
//        TV-TASKS  codep:0x224c wordp:0xf438 size:0x0054 C-string:'TV_dash_TASKS'
//           WF48E  codep:0x224c wordp:0xf48e size:0x0062 C-string:'WF48E'
//           WF4F2  codep:0x224c wordp:0xf4f2 size:0x000c C-string:'WF4F2'
//           WF500  codep:0x224c wordp:0xf500 size:0x003c C-string:'WF500'
//              TV  codep:0x224c wordp:0xf543 size:0x0000 C-string:'TV'

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
void ALLOT(); // ALLOT
void HERE(); // HERE
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
void _1_dot_5_ex__2(); // 1.5!_2
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
const unsigned short int pp_WE4D4 = 0xe4d4; // WE4D4 size: 2
// {0x3a, 0x20}

const unsigned short int pp_FUNCTIONS = 0xf052; // FUNCTIONS size: 25
// {0x05, 0x0c, 0x03, 0x0c, 0x13, 0x0c, 0x17, 0x0c, 0x13, 0x0c, 0x2b, 0x0c, 0x17, 0x0c, 0x43, 0x0c, 0x27, 0x0c, 0x6b, 0x0c, 0x1b, 0x0c, 0x87, 0x0c, 0x16}




// 0xe482: db 0x0f 0x01 '  '

// ================================================
// 0xe484: WORD 'WE486' codep=0x224c wordp=0xe486 params=2 returns=2
// ================================================
// orphan

void WE486() // WE486
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xe492: WORD 'WE494' codep=0x224c wordp=0xe494
// ================================================
// orphan

void WE494() // WE494
{
  _2DUP(); // 2DUP
  IFIND(); // IFIND
}


// ================================================
// 0xe49a: WORD 'WE49C' codep=0x224c wordp=0xe49c params=2 returns=0
// ================================================
// orphan

void WE49C() // WE49C
{
  HERE(); // HERE
  Push(3);
  ALLOT(); // ALLOT
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xe4a6: WORD 'WE4A8' codep=0x224c wordp=0xe4a8 params=0 returns=1
// ================================================

void WE4A8() // WE4A8
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xe4b0: WORD 'WE4B2' codep=0x224c wordp=0xe4b2 params=0 returns=1
// ================================================

void WE4B2() // WE4B2
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xe4bc: WORD 'WE4BE' codep=0x224c wordp=0xe4be params=1 returns=1
// ================================================

void WE4BE() // WE4BE
{
  Push((Pop()==0?1:0)==0?1:0); //  0= 0=
}


// ================================================
// 0xe4c4: WORD 'WE4C6' codep=0x224c wordp=0xe4c6
// ================================================

void WE4C6() // WE4C6
{
  Push(0);
  Push(0);
  CTPOS_dot_(); // CTPOS.
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe4d2: WORD 'WE4D4' codep=0x1d29 wordp=0xe4d4
// ================================================
// 0xe4d4: db 0x3a 0x20 ': '

// ================================================
// 0xe4d6: WORD 'WE4D8' codep=0x224c wordp=0xe4d8 params=0 returns=2
// ================================================

void WE4D8() // WE4D8
{
  Push(pp_TVEHICL); // TVEHICL
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe4ea: WORD 'WE4EC' codep=0x224c wordp=0xe4ec params=0 returns=2
// ================================================

void WE4EC() // WE4EC
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xe4f6: WORD 'WE4F8' codep=0x224c wordp=0xe4f8
// ================================================
// orphan

void WE4F8() // WE4F8
{
  GetIX(); // @IX
  GetIY(); // @IY
}


// ================================================
// 0xe4fe: WORD 'WE500' codep=0x224c wordp=0xe500 params=1 returns=1
// ================================================

void WE500() // WE500
{
  Push(1);
  WE4A8(); // WE4A8
  if (Pop() != 0)
  {
    _dash_(); // -
    return;
  }
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe512: WORD 'WE514' codep=0x224c wordp=0xe514 params=0 returns=0
// ================================================

void WE514() // WE514
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe51a: WORD 'WE51C' codep=0x224c wordp=0xe51c
// ================================================
// orphan

void WE51C() // WE51C
{
  Push(0x6a82); // 'CONTOUR'
  SETLARR(); // SETLARR
  Push(Read16(0x65e1+INST_dash_X.offset) - (Read16(pp_XCON) + 1)); // INST-X<IFIELD> @ XCON @ 1+ -
  Push((Read16(0x65e1+INST_dash_Y.offset) - Read16(pp_YCON)) + 1); // INST-Y<IFIELD> @ YCON @ - 1+
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(0x0020);
  _st_(); // <
}


// ================================================
// 0xe546: WORD 'WE548' codep=0x224c wordp=0xe548 params=0 returns=0
// ================================================
// orphan

void WE548() // WE548
{
  Push(0xcf71); // '.DI'
  MODULE(); // MODULE
}


// ================================================
// 0xe550: WORD 'WE552' codep=0x224c wordp=0xe552 params=0 returns=0
// ================================================

void WE552() // WE552
{
  Push(0xcf2b); // '.ST'
  MODULE(); // MODULE
}


// ================================================
// 0xe55a: WORD 'WE55C' codep=0x224c wordp=0xe55c params=0 returns=0
// ================================================

void WE55C() // WE55C
{
  Push(0xcf47); // '.DA'
  MODULE(); // MODULE
}


// ================================================
// 0xe564: WORD 'WE566' codep=0x224c wordp=0xe566 params=0 returns=0
// ================================================

void WE566() // WE566
{
  Push(0xc1b8); // '(ROL'
  MODULE(); // MODULE
}


// ================================================
// 0xe56e: WORD 'WE570' codep=0x7420 wordp=0xe570
// ================================================
IFieldType WE570 = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xe573: WORD 'WE575' codep=0x7394 wordp=0xe575
// ================================================
// orphan
LoadDataType WE575 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xe57b: WORD 'WE57D' codep=0x7420 wordp=0xe57d
// ================================================
IFieldType WE57D = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xe580: WORD 'WE582' codep=0x7420 wordp=0xe582
// ================================================
IFieldType WE582 = {CREWMEMBERIDX, 0x20, 0x01};

// ================================================
// 0xe585: WORD 'WE587' codep=0x7420 wordp=0xe587
// ================================================
IFieldType WE587 = {TVEHICLEIDX, 0x11, 0x01};

// ================================================
// 0xe58a: WORD 'WE58C' codep=0x7420 wordp=0xe58c
// ================================================
// orphan
IFieldType WE58C = {BOXIDX, 0x11, 0x02};

// ================================================
// 0xe58f: WORD 'WE591' codep=0x7394 wordp=0xe591
// ================================================
// orphan
LoadDataType WE591 = {PLANETIDX, 0x11, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe597: WORD 'WE599' codep=0x7420 wordp=0xe599
// ================================================
IFieldType WE599 = {ASSIGN_CREWIDX, 0x11, 0x03};

// ================================================
// 0xe59c: WORD 'WE59E' codep=0x7394 wordp=0xe59e
// ================================================
LoadDataType WE59E = {TRADERSIDX, 0x00, 0x10, 0x32, 0x6ad1};

// ================================================
// 0xe5a4: WORD 'WE5A6' codep=0x7394 wordp=0xe5a6
// ================================================
LoadDataType WE5A6 = {CREATUREIDX, 0x1b, 0x01, 0x22, 0x6f07};

// ================================================
// 0xe5ac: WORD 'WE5AE' codep=0x7394 wordp=0xe5ae
// ================================================
// orphan
LoadDataType WE5AE = {CREATUREIDX, 0x1d, 0x02, 0x22, 0x6f07};

// ================================================
// 0xe5b4: WORD 'WE5B6' codep=0x7420 wordp=0xe5b6
// ================================================
IFieldType WE5B6 = {CREATUREIDX, 0x15, 0x01};

// ================================================
// 0xe5b9: WORD 'WE5BB' codep=0x7420 wordp=0xe5bb
// ================================================
IFieldType WE5BB = {CREATUREIDX, 0x16, 0x01};

// ================================================
// 0xe5be: WORD 'WE5C0' codep=0x7420 wordp=0xe5c0
// ================================================
IFieldType WE5C0 = {CREATUREIDX, 0x17, 0x01};

// ================================================
// 0xe5c3: WORD 'WE5C5' codep=0x7420 wordp=0xe5c5
// ================================================
IFieldType WE5C5 = {CREATUREIDX, 0x18, 0x01};

// ================================================
// 0xe5c8: WORD 'WE5CA' codep=0x7420 wordp=0xe5ca
// ================================================
IFieldType WE5CA = {CREATUREIDX, 0x19, 0x01};

// ================================================
// 0xe5cd: WORD 'WE5CF' codep=0x7394 wordp=0xe5cf
// ================================================
// orphan
LoadDataType WE5CF = {TRADERSIDX, 0x2a, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe5d5: WORD 'WE5D7' codep=0x7394 wordp=0xe5d7
// ================================================
LoadDataType WE5D7 = {TRADERSIDX, 0x13, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe5dd: WORD 'WE5DF' codep=0x7420 wordp=0xe5df
// ================================================
IFieldType WE5DF = {TRADERSIDX, 0x0b, 0x01};

// ================================================
// 0xe5e2: WORD 'WE5E4' codep=0x7420 wordp=0xe5e4
// ================================================
IFieldType WE5E4 = {TRADERSIDX, 0x0c, 0x01};

// ================================================
// 0xe5e7: WORD 'WE5E9' codep=0x7420 wordp=0xe5e9
// ================================================
// orphan
IFieldType WE5E9 = {TRADERSIDX, 0x11, 0x03};

// ================================================
// 0xe5ec: WORD 'WE5EE' codep=0x224c wordp=0xe5ee params=0 returns=1
// ================================================

void WE5EE() // WE5EE
{
  WE4EC(); // WE4EC
  Push(pp_WEAPXY); // WEAPXY
  _2_at_(); // 2@
  D_eq_(); // D=
}


// ================================================
// 0xe5f8: WORD 'WE5FA' codep=0x224c wordp=0xe5fa params=0 returns=1
// ================================================

void WE5FA() // WE5FA
{
  WE4EC(); // WE4EC
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  D_eq_(); // D=
}


// ================================================
// 0xe604: WORD 'WE606' codep=0x224c wordp=0xe606 params=0 returns=1
// ================================================

void WE606() // WE606
{
  Push(pp_TVEHICL); // TVEHICL
  Get_gt_C_plus_S(); // @>C+S
  Push((Read16(0x65e1+WE587.offset)&0xFF)==1?1:0); // WE587<IFIELD> C@ 1 =
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe616: WORD 'WE618' codep=0x224c wordp=0xe618
// ================================================

void WE618() // WE618
{
  LoadData(WE5A6); // from 'CREATURE'
  Push((Read16(Pop())&0xFF) & 2); //  C@ 2 AND
  WE4BE(); // WE4BE
}


// ================================================
// 0xe624: WORD 'WE626' codep=0x224c wordp=0xe626 params=0 returns=1
// ================================================

void WE626() // WE626
{
  unsigned short int a;
  WE4D8(); // WE4D8
  WE4EC(); // WE4EC
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
// 0xe644: WORD 'WE646' codep=0x224c wordp=0xe646
// ================================================

void WE646() // WE646
{
  WE514(); // WE514
  Push(0xe5cf); // 'WE5CF'
  IFLD_at_(); // IFLD@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe652: WORD 'WE654' codep=0x224c wordp=0xe654
// ================================================

void WE654() // WE654
{
  LoadData(WE5A6); // from 'CREATURE'
  Push((Read16(Pop())&0xFF) & 1); //  C@ 1 AND
}


// ================================================
// 0xe65e: WORD 'WE660' codep=0x224c wordp=0xe660
// ================================================

void WE660() // WE660
{
  WE646(); // WE646
  Push(9);
  _gt_(); // >
}


// ================================================
// 0xe668: WORD 'WE66A' codep=0x224c wordp=0xe66a params=0 returns=1
// ================================================

void WE66A() // WE66A
{
  Push(Read16(0x65e1+WE5CA.offset)&0xFF); // WE5CA<IFIELD> C@
  WE4BE(); // WE4BE
}


// ================================================
// 0xe672: WORD 'WE674' codep=0x224c wordp=0xe674 params=0 returns=1
// ================================================

void WE674() // WE674
{
  Push(Read16(0x65e1+WE5E4.offset)&0xFF); // WE5E4<IFIELD> C@
  WE4BE(); // WE4BE
}


// ================================================
// 0xe67c: WORD 'WE67E' codep=0x224c wordp=0xe67e params=0 returns=1
// ================================================

void WE67E() // WE67E
{
  Push(Read16(0x65e1+WE5C0.offset)&0xFF); // WE5C0<IFIELD> C@
  WE4BE(); // WE4BE
}


// ================================================
// 0xe686: WORD 'WE688' codep=0x224c wordp=0xe688 params=0 returns=1
// ================================================

void WE688() // WE688
{
  Push(Read16(0x65e1+WE5C5.offset)&0xFF); // WE5C5<IFIELD> C@
  WE4BE(); // WE4BE
}


// ================================================
// 0xe690: WORD 'WE692' codep=0x224c wordp=0xe692 params=0 returns=1
// ================================================

void WE692() // WE692
{
  Push(Read16(0x65e1+WE5DF.offset)&0xFF); // WE5DF<IFIELD> C@
  WE4BE(); // WE4BE
}


// ================================================
// 0xe69a: WORD 'WE69C' codep=0x224c wordp=0xe69c params=0 returns=1
// ================================================

void WE69C() // WE69C
{
  Push(Read16(pp_WEAPON_dash_)); // WEAPON- @
  WE4BE(); // WE4BE
}


// ================================================
// 0xe6a4: WORD 'WE6A6' codep=0x224c wordp=0xe6a6
// ================================================

void WE6A6() // WE6A6
{
  WE4EC(); // WE4EC
  IsINVIS(); // ?INVIS
}


// ================================================
// 0xe6ac: WORD 'WE6AE' codep=0x224c wordp=0xe6ae params=0 returns=1
// ================================================

void WE6AE() // WE6AE
{
  Push(Read16(pp_XWLD_c_XP)==8?1:0); // XWLD:XP @ 8 =
}


// ================================================
// 0xe6b8: WORD 'WE6BA' codep=0x224c wordp=0xe6ba
// ================================================

void WE6BA() // WE6BA
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
// 0xe6ca: WORD 'WE6CC' codep=0x224c wordp=0xe6cc params=2 returns=2
// ================================================

void WE6CC() // WE6CC
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
// 0xe708: WORD 'WE70A' codep=0x224c wordp=0xe70a
// ================================================

void WE70A() // WE70A
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
  WE6BA(); // WE6BA
  Push(pp_XORMODE); // XORMODE
  Store_2(); // !_2
}


// ================================================
// 0xe72c: WORD 'WE72E' codep=0x224c wordp=0xe72e params=0 returns=0
// ================================================

void WE72E() // WE72E
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  _2_ex__2(); // 2!_2
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe73c: WORD 'WE73E' codep=0x224c wordp=0xe73e params=0 returns=1
// ================================================
// orphan

void WE73E() // WE73E
{
  CI(); // CI
  IsICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_I(); // POINT>I
}


// ================================================
// 0xe748: WORD 'WE74A' codep=0x224c wordp=0xe74a
// ================================================

void WE74A() // WE74A
{
  _dash_ICON(); // -ICON
  Push(0xba55); // 'ICON-'
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
}


// ================================================
// 0xe756: WORD 'WE758' codep=0x224c wordp=0xe758
// ================================================

void WE758() // WE758
{
  WE74A(); // WE74A
  WE72E(); // WE72E
  WE6BA(); // WE6BA
}


// ================================================
// 0xe760: WORD 'WE762' codep=0x224c wordp=0xe762
// ================================================

void WE762() // WE762
{
  WE6CC(); // WE6CC
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
  Push(Pop() + Pop()); // +
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
  WE70A(); // WE70A
}


// ================================================
// 0xe776: WORD 'WE778' codep=0x224c wordp=0xe778
// ================================================
// orphan

void WE778() // WE778
{
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  _plus__ex__2(); // +!_2
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  _plus__ex__2(); // +!_2
  WE70A(); // WE70A
}


// ================================================
// 0xe784: WORD 'WE786' codep=0x224c wordp=0xe786
// ================================================

void WE786() // WE786
{
  unsigned short int a;
  a = Pop(); // >R
  WE4EC(); // WE4EC
  Push(a); // R>
  IFLD_at_(); // IFLD@
  _gt_C_plus_S(); // >C+S
  WE4EC(); // WE4EC
  ICLOSE(); // ICLOSE
  WE762(); // WE762
}


// ================================================
// 0xe798: WORD 'WE79A' codep=0x224c wordp=0xe79a
// ================================================

void WE79A() // WE79A
{
  WE660(); // WE660
  if (Pop() != 0)
  {
    WE4EC(); // WE4EC
    WE4D8(); // WE4D8
    WE762(); // WE762
  } else
  {
    Push(0xe5e9); // 'WE5E9'
    WE786(); // WE786
  }
  WE758(); // WE758
}


// ================================================
// 0xe7b4: WORD 'WE7B6' codep=0x224c wordp=0xe7b6
// ================================================

void WE7B6() // WE7B6
{
  WE4EC(); // WE4EC
  WE4D8(); // WE4D8
  WE762(); // WE762
}


// ================================================
// 0xe7be: WORD 'WE7C0' codep=0x224c wordp=0xe7c0 params=0 returns=2
// ================================================

void WE7C0() // WE7C0
{
  SET_STR_AS_PARAM("STONES AND STICKS");
}


// ================================================
// 0xe7d6: WORD 'WE7D8' codep=0x224c wordp=0xe7d8 params=0 returns=2
// ================================================

void WE7D8() // WE7D8
{
  SET_STR_AS_PARAM("METAL WEAPONS OF SOME SORT");
}


// ================================================
// 0xe7f7: WORD 'WE7F9' codep=0x224c wordp=0xe7f9 params=0 returns=2
// ================================================

void WE7F9() // WE7F9
{
  SET_STR_AS_PARAM("CHEMICAL PROJECTILES OF SOME SORT");
}


// ================================================
// 0xe81f: WORD 'WE821' codep=0x224c wordp=0xe821 params=0 returns=2
// ================================================

void WE821() // WE821
{
  SET_STR_AS_PARAM("ENERGY WEAPONS OF SOME SORT");
}


// ================================================
// 0xe841: WORD '>WEAP' codep=0x4b3b wordp=0xe84b
// ================================================

void _gt_WEAP() // >WEAP
{
  switch(Pop()) // >WEAP
  {
  case 1:
    WE7C0(); // WE7C0
    break;
  case 2:
    WE7D8(); // WE7D8
    break;
  case 3:
    WE7F9(); // WE7F9
    break;
  case 4:
    WE821(); // WE821
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe85f: WORD 'WE861' codep=0x224c wordp=0xe861
// ================================================

void WE861() // WE861
{
  Push(0);
  Push(0xe5e4); // 'WE5E4'
  IFLD_ex_(); // IFLD!
  WE758(); // WE758
}


// ================================================
// 0xe86d: WORD 'WE86F' codep=0x224c wordp=0xe86f
// ================================================

void WE86F() // WE86F
{
  Push(0);
  Push(0xe5ca); // 'WE5CA'
  IFLD_ex_(); // IFLD!
  WE758(); // WE758
}


// ================================================
// 0xe87b: WORD 'WE87D' codep=0x224c wordp=0xe87d params=1 returns=1
// ================================================

void WE87D() // WE87D
{
  Push(Read16(regsp)); // DUP
  Push(0x007f);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(Pop() - 0x0100); //  0x0100 -
}


// ================================================
// 0xe891: WORD 'WE893' codep=0x224c wordp=0xe893
// ================================================

void WE893() // WE893
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  Push(Read16(0x65e1+WE5B6.offset)&0xFF); // WE5B6<IFIELD> C@
  WE87D(); // WE87D
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  _plus__ex__2(); // +!_2
  Push(Read16(0x65e1+WE5BB.offset)&0xFF); // WE5BB<IFIELD> C@
  WE87D(); // WE87D
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
  WE70A(); // WE70A
}


// ================================================
// 0xe8c7: WORD 'WE8C9' codep=0x224c wordp=0xe8c9
// ================================================

void WE8C9() // WE8C9
{
  GetID(); // @ID
  Push(!(Pop()==0x0011?1:0)); //  0x0011 = NOT
  if (Pop() == 0) return;
  Push(0);
  Push(0xe5c0); // 'WE5C0'
  IFLD_ex_(); // IFLD!
}


// ================================================
// 0xe8e1: WORD 'WE8E3' codep=0x224c wordp=0xe8e3 params=0 returns=2
// ================================================

void WE8E3() // WE8E3
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
// 0xe8f9: WORD 'WE8FB' codep=0x224c wordp=0xe8fb
// ================================================

void WE8FB() // WE8FB
{
  WE4B2(); // WE4B2
  Push(0x000a);
  _st_(); // <
  if (Pop() != 0)
  {
    WE8C9(); // WE8C9
  } else
  {
    GetID(); // @ID
    Push(!(Pop()==0x0011?1:0)); //  0x0011 = NOT
    if (Pop() != 0)
    {
      WE8E3(); // WE8E3
      Push(0x65e1+WE5C5.offset); // WE5C5<IFIELD>
      C_ex__2(); // C!_2
    }
  }
  WE74A(); // WE74A
}


// ================================================
// 0xe925: WORD 'WE927' codep=0x224c wordp=0xe927
// ================================================

void WE927() // WE927
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
// 0xe939: WORD 'WE93B' codep=0x224c wordp=0xe93b
// ================================================

void WE93B() // WE93B
{
  Push(0xe5c5); // 'WE5C5'
  WE927(); // WE927
  WE758(); // WE758
}


// ================================================
// 0xe945: WORD 'WE947' codep=0x224c wordp=0xe947
// ================================================

void WE947() // WE947
{
  GetINST_dash_S(); // @INST-S
  Push(0x0015);
  Push(0x0019);
  WITHIN(); // WITHIN
  Push(!Pop()); //  NOT
  Push(0xe5df); // 'WE5DF'
  SWAP(); // SWAP
  if (Pop() != 0)
  {
    Push(0);
    SWAP(); // SWAP
    IFLD_ex_(); // IFLD!
    return;
  }
  WE927(); // WE927
}


// ================================================
// 0xe96d: WORD 'WE96F' codep=0x224c wordp=0xe96f params=0 returns=1
// ================================================

void WE96F() // WE96F
{
  WE4B2(); // WE4B2
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
// 0xe98d: WORD 'WE98F' codep=0x224c wordp=0xe98f
// ================================================

void WE98F() // WE98F
{
  Push(0xe5ae); // 'WE5AE'
  IFLD_at_(); // IFLD@
}


// ================================================
// 0xe997: WORD 'WE999' codep=0x224c wordp=0xe999
// ================================================

void WE999() // WE999
{
  Push(0xe575); // 'WE575'
  IFLD_at_(); // IFLD@
  _slash_(); // /
  Push(0xe57d); // 'WE57D'
  IFLD_at_(); // IFLD@
  SWAP(); // SWAP
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(0x0064);
  MIN(); // MIN
  Push(0xe57d); // 'WE57D'
  IFLD_ex_(); // IFLD!
  Push(0xc18b); // '(OBI'
  MODULE(); // MODULE
  WE566(); // WE566
  Push(pp_IsHEAL); // ?HEAL
  ON_2(); // ON_2
}


// ================================================
// 0xe9c9: WORD 'WE9CB' codep=0x224c wordp=0xe9cb params=0 returns=0
// ================================================
// orphan

void WE9CB() // WE9CB
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
// 0xe9f5: WORD 'WE9F7' codep=0x224c wordp=0xe9f7
// ================================================

void WE9F7() // WE9F7
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  WE4C6(); // WE4C6
}


// ================================================
// 0xe9ff: WORD 'WEA01' codep=0x224c wordp=0xea01
// ================================================

void WEA01() // WEA01
{
  WE9F7(); // WE9F7
  PRINT("THE ", 4); // (.")
  PRINT(" LIFEFORM ATTACKS ", 18); // (.")
  GCR(); // GCR
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WE570.offset); // WE570<IFIELD>
  _do__dot_(); // $.
}


// ================================================
// 0xea29: WORD 'WEA2B' codep=0x224c wordp=0xea2b params=0 returns=2
// ================================================

void WEA2B() // WEA2B
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WE599.offset); // WE599<IFIELD>
  Push(0);
  Push(6);
  RRND(); // RRND
  Push(Pop() * 3); //  3 *
  Push(Pop() + Pop()); // +
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea43: WORD 'WEA45' codep=0x224c wordp=0xea45
// ================================================

void WEA45() // WEA45
{
  WE96F(); // WE96F
  WE98F(); // WE98F
  WEA2B(); // WEA2B
  WEA01(); // WEA01
  SWAP(); // SWAP
  if (Pop() != 0)
  {
    WE999(); // WE999
  } else
  {
    Pop(); // DROP
    PRINT(", BUT MISSES", 12); // (.")
  }
  PRINT(".", 1); // (.")
  ICLOSE(); // ICLOSE
  Push(0x03e8);
  MS(); // MS
  Push(0xc18b); // '(OBI'
  MODULE(); // MODULE
  WE566(); // WE566
  Push(pp__i__dot_VITAL); // '.VITAL
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xea84: WORD 'WEA86' codep=0x224c wordp=0xea86 params=0 returns=0
// ================================================

void WEA86() // WEA86
{
  unsigned short int i, imax, j, jmax;

  i = 0x0064;
  imax = 0x03e8;
  do // (DO)
  {
    BEEPON_2(); // BEEPON_2
    Push(i); // I
    Push(i * 2); // I 2*
    RRND(); // RRND
    TONE(); // TONE

    j = 0;
    jmax = 3 * Read16(cc_MPS); // 3 MPS *
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
// 0xeab4: WORD 'WEAB6' codep=0x224c wordp=0xeab6
// ================================================

void WEAB6() // WEAB6
{
  WLD_gt_SCR(); // WLD>SCR
  SWAP(); // SWAP
  Push(Pop() + 2); //  2+
  SWAP(); // SWAP
  Push(Pop() + 2); //  2+
}


// ================================================
// 0xeac2: WORD 'WEAC4' codep=0x224c wordp=0xeac4
// ================================================

void WEAC4() // WEAC4
{
  _gt_MAINVI(); // >MAINVI
  WEAB6(); // WEAB6
  WE4EC(); // WE4EC
  WEAB6(); // WEAB6
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  _1PIX(); // 1PIX
  LLINE(); // LLINE
  V_gt_DISPL(); // V>DISPL
  WEA86(); // WEA86
  _2PIX(); // 2PIX
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xeade: WORD 'WEAE0' codep=0x224c wordp=0xeae0
// ================================================

void WEAE0() // WEAE0
{
  PRINT("COMMANDER, WE HAVE BEEN HIT WITH", 32); // (.")
  GCR(); // GCR
  WE514(); // WE514
  LoadData(WE5D7); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  _gt_WEAP(); // >WEAP case
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  GCR(); // GCR
  PRINT("BY THE ", 7); // (.")
  WE514(); // WE514
  LoadData(WE59E); // from 'TRADERS'
  Push(0x0010);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb31: WORD 'WEB33' codep=0x224c wordp=0xeb33
// ================================================

void WEB33() // WEB33
{
  WE514(); // WE514
  LoadData(WE5D7); // from 'TRADERS'
  Push((Read16(Pop())&0xFF) * 0x0019); //  C@ 0x0019 *
  ICLOSE(); // ICLOSE
  WEA2B(); // WEA2B
  _gt_C_plus_S(); // >C+S
  WE999(); // WE999
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb4b: WORD 'WEB4D' codep=0x224c wordp=0xeb4d params=0 returns=1
// ================================================

void WEB4D() // WEB4D
{
  Push(Read16(pp_FSTUN)); // FSTUN @
  WE4BE(); // WE4BE
}


// ================================================
// 0xeb55: WORD 'WEB57' codep=0x224c wordp=0xeb57
// ================================================

void WEB57() // WEB57
{
  WE9F7(); // WE9F7
  WEAE0(); // WEAE0
}


// ================================================
// 0xeb5d: WORD 'WEB5F' codep=0x224c wordp=0xeb5f
// ================================================

void WEB5F() // WEB5F
{
  unsigned short int a;
  WE4D8(); // WE4D8
  WE4A8(); // WE4A8
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  if (Pop() != 0)
  {
    WE500(); // WE500
    SWAP(); // SWAP
    WE500(); // WE500
    SWAP(); // SWAP
  }
  WEAC4(); // WEAC4
  Push(a==0?1:0); // R> 0=
  if (Pop() != 0)
  {
    WEB57(); // WEB57
    WEB33(); // WEB33
    Push(0xc18b); // '(OBI'
    MODULE(); // MODULE
    WE566(); // WE566
    DrawVIT(); // .VIT
  }
  WE6BA(); // WE6BA
}


// ================================================
// 0xeb8f: WORD 'SENT2P' codep=0xaccc wordp=0xeb9a
// ================================================

void SENT2P() // SENT2P rule
{
  int b;

  b = 1;
  WE674(); // WE674
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  WEB4D(); // WEB4D
  b = b && Pop();
  if (b)
  {
    WE758(); // WE758
  }

  b = 1;
  WE660(); // WE660
  b = b && !Pop();
  if (b)
  {
    WE79A(); // WE79A
  }

  b = 1;
  WE6A6(); // WE6A6
  b = b && !Pop();
  if (b)
  {
    WE79A(); // WE79A
  }

  b = 1;
  WE6A6(); // WE6A6
  b = b && Pop();
  WE6AE(); // WE6AE
  b = b && Pop();
  if (b)
  {
    WEB5F(); // WEB5F
  }
}


// ================================================
// 0xebcb: WORD 'P2SENT' codep=0xaccc wordp=0xebd6
// ================================================

void P2SENT() // P2SENT rule
{
  int b;

  b = 1;
  WE674(); // WE674
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  WE692(); // WE692
  b = b && !Pop();
  if (b)
  {
    WE861(); // WE861
  }

  b = 1;
  WE69C(); // WE69C
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  WE5FA(); // WE5FA
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  WE606(); // WE606
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  WE606(); // WE606
  b = b && Pop();
  if (b)
  {
    WE947(); // WE947
  }
}


// ================================================
// 0xec0c: WORD 'CRIT2P' codep=0xaccc wordp=0xec17
// ================================================

void CRIT2P() // CRIT2P rule
{
  int b;

  b = 1;
  WE66A(); // WE66A
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  WE688(); // WE688
  b = b && Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  WE618(); // WE618
  b = b && !Pop();
  WE654(); // WE654
  b = b && Pop();
  WE626(); // WE626
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  WE618(); // WE618
  b = b && !Pop();
  WE654(); // WE654
  b = b && Pop();
  WE626(); // WE626
  b = b && Pop();
  if (b)
  {
    WEA45(); // WEA45
  }

  b = 1;
  WE618(); // WE618
  b = b && Pop();
  WE654(); // WE654
  b = b && !Pop();
  if (b)
  {
    WE893(); // WE893
  }

  b = 1;
  WE618(); // WE618
  b = b && Pop();
  WE654(); // WE654
  b = b && Pop();
  WE626(); // WE626
  b = b && !Pop();
  if (b)
  {
    WE7B6(); // WE7B6
  }

  b = 1;
  WE618(); // WE618
  b = b && Pop();
  WE654(); // WE654
  b = b && Pop();
  WE626(); // WE626
  b = b && Pop();
  if (b)
  {
    WEA45(); // WEA45
  }
}


// ================================================
// 0xec5c: WORD 'P2CRIT' codep=0xaccc wordp=0xec67
// ================================================

void P2CRIT() // P2CRIT rule
{
  int b;

  b = 1;
  WE66A(); // WE66A
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  WE67E(); // WE67E
  b = b && !Pop();
  if (b)
  {
    WE86F(); // WE86F
  }

  b = 1;
  WE688(); // WE688
  b = b && Pop();
  if (b)
  {
    WE93B(); // WE93B
  }

  b = 1;
  WE69C(); // WE69C
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  WE5EE(); // WE5EE
  b = b && !Pop();
  if (b)
  {
    NOP(); // NOP
  }

  b = 1;
  WE606(); // WE606
  b = b && Pop();
  if (b)
  {
    WE8C9(); // WE8C9
  }
}

// 0xec76: db 0xea 0x90 '  '

// ================================================
// 0xeca2: WORD 'WECA4' codep=0x224c wordp=0xeca4
// ================================================

void WECA4() // WECA4
{
  unsigned short int i, imax;
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  Push(0x00fa);
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash__1(); // ?ICONS-_1
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;

  i = 0;
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
      WE758(); // WE758
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xecde: WORD 'WECE0' codep=0x224c wordp=0xece0
// ================================================

void WECE0() // WECE0
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

    i = 0;
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
          WE8FB(); // WE8FB
        }
      } else
      {
        Push(Pop()==0x0015?1:0); //  0x0015 =
        if (Pop() != 0)
        {
          WE758(); // WE758
        }
      }
      ICLOSE(); // ICLOSE
      i++;
    } while(i<imax); // (LOOP)

  }
  WE72E(); // WE72E
  WE6BA(); // WE6BA
}


// ================================================
// 0xed3e: WORD 'WED40' codep=0x224c wordp=0xed40 params=0 returns=0
// ================================================

void WED40() // WED40
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
// 0xed5a: WORD 'WED5C' codep=0x224c wordp=0xed5c params=0 returns=1
// ================================================

void WED5C() // WED5C
{
  WE8E3(); // WE8E3
  Push(pp_FSTUN); // FSTUN
  Store_2(); // !_2
}


// ================================================
// 0xed64: WORD 'WED66' codep=0x224c wordp=0xed66
// ================================================

void WED66() // WED66
{
  WED5C(); // WED5C
  WECE0(); // WECE0
}


// ================================================
// 0xed6c: WORD 'CIRCLES' codep=0x224c wordp=0xed78 params=0 returns=2
// ================================================
// entry

void CIRCLES() // CIRCLES
{
  unsigned short int a, i, imax;
  Push(0x000b);
  Push(0xb78d); // 'TV?ART'
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
      WE6BA(); // WE6BA

      i = 0;
      imax = 0x0064;
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
      WED66(); // WED66
      WED40(); // WED40
      WE72E(); // WE72E
      WE6BA(); // WE6BA
      Push(0xcf55); // '.EN'
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
    Push(0xb7e7); // '.NOFUN'
    MODULE(); // MODULE
  }
  Push2Words("NULL");
}


// ================================================
// 0xee28: WORD 'WEE2A' codep=0x224c wordp=0xee2a params=0 returns=0
// ================================================

void WEE2A() // WEE2A
{
  Push(!Read16(pp_FSTUN)); // FSTUN @ NOT
  if (Pop() == 0) return;
  Push(0xebd6); // 'P2SENT'
  DISTRAC(); // DISTRAC
  P2SENT(); // P2SENT rule
  Pop(); // DROP
  Push(0xeb9a); // 'SENT2P'
  DISTRAC(); // DISTRAC
  SENT2P(); // SENT2P rule
  Pop(); // DROP
}


// ================================================
// 0xee4a: WORD 'WEE4C' codep=0x224c wordp=0xee4c
// ================================================

void WEE4C() // WEE4C
{
  Push(0xec67); // 'P2CRIT'
  DISTRAC(); // DISTRAC
  P2CRIT(); // P2CRIT rule
  Pop(); // DROP
  Push(0xec17); // 'CRIT2P'
  DISTRAC(); // DISTRAC
  CRIT2P(); // CRIT2P rule
  Pop(); // DROP
}


// ================================================
// 0xee62: WORD 'WEE64' codep=0x224c wordp=0xee64
// ================================================

void WEE64() // WEE64
{
  Push(Read16(pp__h_CRIT)); // ^CRIT @
  POINT_gt_I(); // POINT>I
  GetIL(); // @IL
  GetIH(); // @IH
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xee72: WORD 'WEE74' codep=0x224c wordp=0xee74 params=0 returns=0
// ================================================

void WEE74() // WEE74
{
  Push(0);
  Push(pp__h_CRIT); // ^CRIT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xee7c: WORD '?ANYBODY' codep=0x224c wordp=0xee89 params=0 returns=1
// ================================================

void IsANYBODY() // ?ANYBODY
{
  Push(1);
}


// ================================================
// 0xee8d: WORD 'WEE8F' codep=0x224c wordp=0xee8f params=0 returns=0
// ================================================

void WEE8F() // WEE8F
{
  Push(Read16(pp_WEAPON_dash_)); // WEAPON- @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(Pop() - 1); //  1-
  Push(pp_WEAPON_dash_); // WEAPON-
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xeea1: WORD 'WEEA3' codep=0x224c wordp=0xeea3 params=0 returns=0
// ================================================

void WEEA3() // WEEA3
{
  Push(Read16(pp__h_CRIT) + 1); // ^CRIT @ 1+
  Push(Read16(pp_ILOCAL) - 1); // ILOCAL @ 1-
  MOD(); // MOD
  Push(pp__h_CRIT); // ^CRIT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xeeb7: WORD '(SIMULATE)' codep=0x4b3b wordp=0xeec6
// ================================================

void _ro_SIMULATE_rc_() // (SIMULATE)
{
  switch(Pop()) // (SIMULATE)
  {
  case 68:
    WEE4C(); // WEE4C
    break;
  case 21:
    WEE2A(); // WEE2A
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xeed2: WORD '1SIMULATE' codep=0x224c wordp=0xeee0 params=0 returns=0
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
      WECA4(); // WECA4
    }
  }
  Push(Read16(pp_IsNEW)); // ?NEW @
  if (Pop() != 0)
  {
    WEE74(); // WEE74
    Push(pp_IsNEW); // ?NEW
    OFF_2(); // OFF_2
  }
  IsANYBODY(); // ?ANYBODY
  if (Pop() == 0) return;
  WEE64(); // WEE64
  Push(1);
  if (Pop() != 0)
  {
    GetINST_dash_C(); // @INST-C
    _ro_SIMULATE_rc_(); // (SIMULATE) case
  }
  ICLOSE(); // ICLOSE
  WEE8F(); // WEE8F
  WEEA3(); // WEEA3
}


// ================================================
// 0xef22: WORD 'WEF24' codep=0x224c wordp=0xef24 params=0 returns=0
// ================================================

void WEF24() // WEF24
{
  Push(0xd0f9); // '(TVSE'
  MODULE(); // MODULE
  WE55C(); // WE55C
  WE552(); // WE552
  Push(Read16(pp__i__dot_VITAL)); // '.VITAL @
  MODULE(); // MODULE
}


// ================================================
// 0xef36: WORD 'WEF38' codep=0x224c wordp=0xef38
// ================================================

void WEF38() // WEF38
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  Push(1);
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash__1(); // ?ICONS-_1
}


// ================================================
// 0xef4a: WORD 'WEF4C' codep=0x224c wordp=0xef4c params=0 returns=1
// ================================================

void WEF4C() // WEF4C
{
  unsigned short int i, imax;
  Push(Read16(pp_WE4D4)==0?1:0); // WE4D4 @ 0=
  if (Pop() != 0)
  {
    WEF38(); // WEF38
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

        i = 0;
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
// 0xef98: WORD 'WEF9A' codep=0x224c wordp=0xef9a
// ================================================

void WEF9A() // WEF9A
{
  WE9F7(); // WE9F7
  PRINT("DO YOU WANT TO TRADE\?   [ NO YES ] ", 35); // (.")
  Y_slash_N(); // Y/N
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  Push(pp_WE4D4); // WE4D4
  Store_2(); // !_2
}


// ================================================
// 0xefce: WORD 'WEFD0' codep=0x224c wordp=0xefd0
// ================================================

void WEFD0() // WEFD0
{
  unsigned short int a, b, c;
  DEPTH(); // DEPTH
  a = Pop(); // >R
  Push(Read16(pp_NCRS)); // NCRS @
  b = Pop(); // >R
  Push(Read16(pp_OCRS)); // OCRS @
  c = Pop(); // >R
  Push(0xc4ac); // 'TRADE'
  MODULE(); // MODULE
  Push(pp_WE4D4); // WE4D4
  ON_2(); // ON_2
  Push(c); // R>
  Push(pp_OCRS); // OCRS
  Store_2(); // !_2
  Push(b); // R>
  Push(pp_NCRS); // NCRS
  Store_2(); // !_2
  Push(a); // R>
  IsENOUGH(); // ?ENOUGH
  WEF24(); // WEF24
  WE6BA(); // WE6BA
}


// ================================================
// 0xf000: WORD 'WF002' codep=0x224c wordp=0xf002 params=0 returns=1
// ================================================

void WF002() // WF002
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  WE4EC(); // WE4EC
  ICLOSE(); // ICLOSE
  WE4D8(); // WE4D8
  D_eq_(); // D=
}


// ================================================
// 0xf010: WORD 'WF012' codep=0x224c wordp=0xf012 params=0 returns=2
// ================================================

void WF012() // WF012
{
  Push(0x1388);
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2
  Push(0x003c);
  MS(); // MS
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf024: WORD 'WF026' codep=0x224c wordp=0xf026 params=0 returns=0
// ================================================

void WF026() // WF026
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
// 0xf044: WORD 'FUNCTIONS' codep=0x1d29 wordp=0xf052
// ================================================
// 0xf052: db 0x05 0x0c 0x03 0x0c 0x13 0x0c 0x17 0x0c 0x13 0x0c 0x2b 0x0c 0x17 0x0c 0x43 0x0c 0x27 0x0c 0x6b 0x0c 0x1b 0x0c 0x87 0x0c 0x16 '          +   C ' k      '

// ================================================
// 0xf06b: WORD 'WF06D' codep=0x224c wordp=0xf06d params=0 returns=0
// ================================================

void WF06D() // WF06D
{
  _gt_TVCT(); // >TVCT
  Push(pp_FUNCTIONS); // FUNCTIONS
  SET_dash_CRS(); // SET-CRS
  Pop(); // DROP
}


// ================================================
// 0xf077: WORD 'WF079' codep=0x224c wordp=0xf079 params=1 returns=0
// ================================================

void WF079() // WF079
{
  CLICK(); // CLICK
  Push(pp_NCRS); // NCRS
  _plus__ex__2(); // +!_2
  WF06D(); // WF06D
}


// ================================================
// 0xf083: WORD 'MAPS' codep=0x224c wordp=0xf08c params=0 returns=0
// ================================================

void MAPS() // MAPS
{
  Push(0xcdb0); // 'MAPS'
  MODULE(); // MODULE
}


// ================================================
// 0xf094: WORD 'WALK&TALK' codep=0x224c wordp=0xf0a2 params=0 returns=0
// ================================================

void WALK_and_TALK() // WALK&TALK
{
  Push(0xd139); // '(TALK'
  MODULE(); // MODULE
}


// ================================================
// 0xf0aa: WORD 'TVMOVE' codep=0x224c wordp=0xf0b5 params=0 returns=0
// ================================================

void TVMOVE() // TVMOVE
{
  Push(pp_WE4D4); // WE4D4
  _099(); // 099
  Push(0xd072); // 'TVMO'
  MODULE(); // MODULE
  Push(pp_TIME_dash_PA); // TIME-PA
  ON_2(); // ON_2
}


// ================================================
// 0xf0c5: WORD 'DO.WEAPONS' codep=0x224c wordp=0xf0d4 params=0 returns=0
// ================================================

void DO_dot_WEAPONS() // DO.WEAPONS
{
  Push(pp_TVEHICL); // TVEHICL
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
  if (Pop() == 0) return;
  Push(0xd129); // '(WEAP'
  MODULE(); // MODULE
}


// ================================================
// 0xf0ec: WORD '/ITEMS' codep=0x224c wordp=0xf0f7 params=0 returns=0
// ================================================

void _slash_ITEMS() // /ITEMS
{
  Push(0xcfe6); // '/ITEMS'
  MODULE(); // MODULE
}


// ================================================
// 0xf0ff: WORD 'ICONS' codep=0x224c wordp=0xf109 params=0 returns=0
// ================================================

void ICONS() // ICONS
{
  Push(0xd034); // 'ICONS'
  MODULE(); // MODULE
  WEF24(); // WEF24
}


// ================================================
// 0xf113: WORD '>BUTTONS' codep=0x4b3b wordp=0xf120
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
// 0xf13c: WORD '?FUNC' codep=0x224c wordp=0xf146 params=0 returns=1
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
    Push(0xd0ae); // 'TELE_2'
    MODULE(); // MODULE
    Push(1);
    return;
  }
  Push(0);
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf198: WORD 'WF19A' codep=0x224c wordp=0xf19a params=0 returns=1
// ================================================

void WF19A() // WF19A
{
  unsigned short int i, imax;
  Push((Read16(pp_PAST) & (Read16(pp_WE4D4)==0?1:0)) & (Read16(pp_Is3)==0?1:0)); // PAST @ WE4D4 @ 0= AND ?3 @ 0= AND
  if (Pop() != 0)
  {
    WEF38(); // WEF38
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

        i = 0;
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
// 0xf1f4: WORD 'TV-KEY' codep=0x224c wordp=0xf1ff
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
    WF079(); // WF079
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
      WF079(); // WF079
    } else
    {
      Pop(); // DROP
      IsTRIG(); // ?TRIG
      if (Pop() != 0)
      {
        WF012(); // WF012
        Push(Read16(pp_NCRS)); // NCRS @
        _gt_BUTTONS(); // >BUTTONS case
        WE6BA(); // WE6BA
      }
      _1SIMULATE(); // 1SIMULATE
      Pop(); // DROP
    }
  }
  WEF4C(); // WEF4C
  if (Pop() != 0)
  {
    WEF9A(); // WEF9A
    if (Pop() != 0)
    {
      WEFD0(); // WEFD0
    }
    WE9F7(); // WE9F7
  }
  WF19A(); // WF19A
  if (Pop() != 0)
  {
    Push(0xc8b4); // 'HALL'
    MODULE(); // MODULE
    Push(pp_WE4D4); // WE4D4
    ON_2(); // ON_2
    WE6BA(); // WE6BA
    WE9F7(); // WE9F7
  }
  WF002(); // WF002
  if (Pop() == 0) return;
  Push(Pop()==0?1:0); //  0=
  WF026(); // WF026
}


// ================================================
// 0xf273: WORD 'WF275' codep=0x224c wordp=0xf275 params=2 returns=0
// ================================================

void WF275() // WF275
{
  Push(0x001a * 0x0012 + 9); // 0x001a 0x0012 * 9 +
  LC_ex_(); // LC!
}


// ================================================
// 0xf287: WORD 'WF289' codep=0x224c wordp=0xf289
// ================================================

void WF289() // WF289
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
  WF275(); // WF275
  Push(Read16(a)); // R@
  Push(Read16(pp_ICON_h_) + 0x0043); // ICON^ @ 0x0043 +
  WF275(); // WF275
  Push(a); // R>
  Push(Read16(pp_ICON_h_) + 0x0086); // ICON^ @ 0x0086 +
  WF275(); // WF275
  Push(pp_TVEHICL); // TVEHICL
  Get_gt_C_plus_S(); // @>C+S
  _dash_ICON(); // -ICON
  Push(0xba55); // 'ICON-'
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
  ICLOSE(); // ICLOSE
  WE72E(); // WE72E
}


// ================================================
// 0xf2d3: WORD 'WF2D5' codep=0x224c wordp=0xf2d5
// ================================================

void WF2D5() // WF2D5
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
  WF289(); // WF289
}


// ================================================
// 0xf310: WORD 'WF312' codep=0x224c wordp=0xf312 params=0 returns=2
// ================================================

void WF312() // WF312
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
// 0xf352: WORD 'WF354' codep=0x224c wordp=0xf354
// ================================================

void WF354() // WF354
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
  Push(0xbe55); // '.AHUF'
  MODULE(); // MODULE
  Push(0x1f40); Push(0x0000);
  Push(0xbe96); // 'CPAUS'
  MODULE(); // MODULE
  Push(0x0010);
  Push(0x65e1+WE582.offset); // WE582<IFIELD>
  Store_2(); // !_2
  Push(0);
  Push(0x65e1+WE57D.offset); // WE57D<IFIELD>
  C_ex__2(); // C!_2
  Push(0xc18b); // '(OBI'
  MODULE(); // MODULE
  Push(0xc1b8); // '(ROL'
  MODULE(); // MODULE
  DrawVIT(); // .VIT
  CTINIT(); // CTINIT
  Push(0);
  Push(0x65e1+WE582.offset); // WE582<IFIELD>
  Store_2(); // !_2
  Push(0xbe55); // '.AHUF'
  MODULE(); // MODULE
  Push(0x1f40); Push(0x0000);
  Push(0xbe96); // 'CPAUS'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  Push(a); // R>
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf3c8: WORD 'WF3CA' codep=0x224c wordp=0xf3ca params=0 returns=1
// ================================================

void WF3CA() // WF3CA
{
  Push(Read16(pp_OLDHR) - Read16(pp_STAR_dash_HR)); // OLDHR @ STAR-HR @ -
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(Read16(pp_STAR_dash_HR)); // STAR-HR @
  Push(pp_OLDHR); // OLDHR
  Store_2(); // !_2
}


// ================================================
// 0xf3e4: WORD 'WF3E6' codep=0x224c wordp=0xf3e6 params=0 returns=1
// ================================================

void WF3E6() // WF3E6
{
  WF3CA(); // WF3CA
  Push(Pop() | Read16(pp_FORCED)); //  FORCED @ OR
  Push(pp_FORCED); // FORCED
  _099(); // 099
}


// ================================================
// 0xf3f4: WORD 'GNUNK-CHEC' codep=0x224c wordp=0xf403 params=0 returns=0
// ================================================

void GNUNK_dash_CHEC() // GNUNK-CHEC
{
  WF312(); // WF312
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
      WF354(); // WF354
    } else
    {
      Pop(); Pop(); // 2DROP
    }
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf42b: WORD 'TV-TASKS' codep=0x224c wordp=0xf438
// ================================================
// entry

void TV_dash_TASKS() // TV-TASKS
{
  Push(0xf3e6); // 'WF3E6'
  Push(pp__i_VEHICL); // 'VEHICL
  _st__ex__gt_(); // <!>
  Push(0xcf1b); // 'DO-STORM'
  Push(pp__i_REPAIR); // 'REPAIR
  _st__ex__gt_(); // <!>
  Push(0xe552); // 'WE552'
  Push(pp__i__dot_VEHIC); // '.VEHIC
  _st__ex__gt_(); // <!>
  Push(0xeee0); // '1SIMULATE'
  Push(pp__i_EXTERN); // 'EXTERN
  _st__ex__gt_(); // <!>
  Push(0xc1f8); // '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  _st__ex__gt_(); // <!>
  Push2Words("0.");
  Push(pp_LASTAP); // LASTAP
  _st_D_ex__gt_(); // <D!>
  Push(0xc1d8); // '.VIT'
  Push(pp__i__dot_VITAL); // '.VITAL
  _st__ex__gt_(); // <!>
  Push(0xc1c7); // 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  _st__ex__gt_(); // <!>
  Push(0xe55c); // 'WE55C'
  Push(pp__i__dot_DATE); // '.DATE
  _st__ex__gt_(); // <!>
  Push(pp_TIME_dash_PA); // TIME-PA
  ON_1(); // ON_1
  Push(0xce24); // '8X8CO'
  Push(pp__i__dot_BACKG); // '.BACKG
  Store_2(); // !_2
}


// ================================================
// 0xf48c: WORD 'WF48E' codep=0x224c wordp=0xf48e params=0 returns=0
// ================================================

void WF48E() // WF48E
{
  Push(0xb033); // '?VCYCLE'
  Push(pp__i_VEHICL); // 'VEHICL
  _st__ex__gt_(); // <!>
  Push(0xc3cf); // 'MREPAIR'
  Push(pp__i_REPAIR); // 'REPAIR
  _st__ex__gt_(); // <!>
  Push(0xc0f9); // '.SORD'
  Push(pp__i__dot_VEHIC); // '.VEHIC
  _st__ex__gt_(); // <!>
  Push(0x3a48); // 'NOP'
  Push(pp__i_EXTERN); // 'EXTERN
  _st__ex__gt_(); // <!>
  Push(0xc1f8); // '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  _st__ex__gt_(); // <!>
  Push(0x3a48); // 'NOP'
  Push(pp__i__dot_VITAL); // '.VITAL
  _st__ex__gt_(); // <!>
  Push(0xc1c7); // 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  _st__ex__gt_(); // <!>
  Push(0xc0e7); // '/STARD'
  Push(pp__i__dot_DATE); // '.DATE
  _st__ex__gt_(); // <!>
  Push(Read16(pp_IsCRITIC)); // ?CRITIC @
  if (Pop() != 0)
  {
    Push(0xd149); // 'HEAVE'
  } else
  {
    Push(0x3a48); // 'NOP'
  }
  Push(pp__i_THROW_dash_); // 'THROW-
  _st__ex__gt_(); // <!>
  Push(pp_WEAPON_dash_); // WEAPON-
  _099(); // 099
  Push(pp_MOVED); // MOVED
  _099(); // 099
}


// ================================================
// 0xf4f0: WORD 'WF4F2' codep=0x224c wordp=0xf4f2 params=0 returns=0
// ================================================

void WF4F2() // WF4F2
{
  Push(0xd109); // '(CLEA'
  MODULE(); // MODULE
  WF48E(); // WF48E
  _gt_SSCT(); // >SSCT
}


// ================================================
// 0xf4fe: WORD 'WF500' codep=0x224c wordp=0xf500
// ================================================

void WF500() // WF500
{
  Push(pp_WEAPON_dash_); // WEAPON-
  _099(); // 099
  Push(pp_STORM); // STORM
  _099(); // 099
  Push(pp_FSTUN); // FSTUN
  _099(); // 099
  Push(pp_SMART); // SMART
  _099(); // 099
  Push(0xd149); // 'HEAVE'
  Push(pp__i_THROW_dash_); // 'THROW-
  Store_2(); // !_2
  Push(0xd0e9); // 'TV-DI'
  MODULE(); // MODULE
  WE55C(); // WE55C
  WE566(); // WE566
  Push(0xd090); // '!E/M'
  MODULE(); // MODULE
  WE552(); // WE552
  DrawVIT(); // .VIT
  TV_dash_TASKS(); // TV-TASKS
  GetColor(BLACK);
  Push(pp_LCOLOR); // LCOLOR
  Store_2(); // !_2
  WF2D5(); // WF2D5
  WE6BA(); // WE6BA
  GNUNK_dash_CHEC(); // GNUNK-CHEC
}


// ================================================
// 0xf53c: WORD 'TV' codep=0x224c wordp=0xf543
// ================================================
// entry

void TV() // TV
{
  Push(0xf4f2); // 'WF4F2'
  Push(0xf1ff); // 'TV-KEY'
  Push(0xf500); // 'WF500'
  DOTASKS(WF500, WF500, WF500);
  Push(pp_TIME_dash_PA); // TIME-PA
  ON_2(); // ON_2
}

// 0xf557: db 0x42 0x45 0x48 0x41 0x56 0x49 0x4f 0x5f 0x5f 0x00 'BEHAVIO__ '

