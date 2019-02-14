// ====== OVERLAY 'BEHAV-OV' ======
// store offset = 0xe070
// overlay size   = 0x14f0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WE086  codep:0x224c wordp:0xe086 size:0x000c C-string:'WE086'
//           WE094  codep:0x224c wordp:0xe094 size:0x0006 C-string:'WE094'
//           WE09C  codep:0x224c wordp:0xe09c size:0x000a C-string:'WE09C'
//           WE0A8  codep:0x224c wordp:0xe0a8 size:0x000c C-string:'WE0A8'
//           WE0B6  codep:0x224c wordp:0xe0b6 size:0x0016 C-string:'WE0B6'
//           WE0CE  codep:0x224c wordp:0xe0ce size:0x0008 C-string:'WE0CE'
//           WE0D8  codep:0x224c wordp:0xe0d8 size:0x000a C-string:'WE0D8'
//           WE0E4  codep:0x224c wordp:0xe0e4 size:0x0006 C-string:'WE0E4'
//           WE0EC  codep:0x224c wordp:0xe0ec size:0x0012 C-string:'WE0EC'
//           WE100  codep:0x224c wordp:0xe100 size:0x000a C-string:'WE100'
//           WE10C  codep:0x224c wordp:0xe10c size:0x0006 C-string:'WE10C'
//           WE114  codep:0x224c wordp:0xe114 size:0x002a C-string:'WE114'
//           WE140  codep:0x73ea wordp:0xe140 size:0x0006 C-string:'WE140'
//           WE148  codep:0x73ea wordp:0xe148 size:0x0006 C-string:'WE148'
//           WE150  codep:0x73ea wordp:0xe150 size:0x0006 C-string:'WE150'
//      STUN.EFFEC  codep:0x73ea wordp:0xe165 size:0x0006 C-string:'STUN_dot_EFFEC'
//           WE16D  codep:0x73ea wordp:0xe16d size:0x0006 C-string:'WE16D'
//           WE175  codep:0x73ea wordp:0xe175 size:0x0006 C-string:'WE175'
//            HITS  codep:0x744d wordp:0xe184 size:0x0003 C-string:'HITS'
//           STUNS  codep:0x744d wordp:0xe191 size:0x0003 C-string:'STUNS'
//      HIT.POINTS  codep:0x73ea wordp:0xe1a3 size:0x0006 C-string:'HIT_dot_POINTS'
//           WE1AB  codep:0x744d wordp:0xe1ab size:0x0003 C-string:'WE1AB'
//           WE1B0  codep:0x744d wordp:0xe1b0 size:0x0003 C-string:'WE1B0'
//           WE1B5  codep:0x744d wordp:0xe1b5 size:0x0003 C-string:'WE1B5'
//           WE1BA  codep:0x744d wordp:0xe1ba size:0x0003 C-string:'WE1BA'
//          BEHAVE  codep:0x744d wordp:0xe1c8 size:0x0003 C-string:'BEHAVE'
//           WE1CD  codep:0x73ea wordp:0xe1cd size:0x0006 C-string:'WE1CD'
//       TV-WEAPON  codep:0x744d wordp:0xe1e1 size:0x0003 C-string:'TV_dash_WEAPON'
//           WE1E6  codep:0x744d wordp:0xe1e6 size:0x0003 C-string:'WE1E6'
//      ATMO.ACTIV  codep:0x73ea wordp:0xe1f8 size:0x0006 C-string:'ATMO_dot_ACTIV'
//      ?PLAYER-FI  codep:0x224c wordp:0xe20d size:0x0016 C-string:'IsPLAYER_dash_FI'
//      ?ALIEN-CLO  codep:0x224c wordp:0xe232 size:0x0024 C-string:'IsALIEN_dash_CLO'
//      ?ALIEN-SMA  codep:0x224c wordp:0xe265 size:0x000c C-string:'IsALIEN_dash_SMA'
//           WE273  codep:0x224c wordp:0xe273 size:0x000a C-string:'WE273'
//      ?RANDOM-SC  codep:0x224c wordp:0xe28c size:0x000a C-string:'IsRANDOM_dash_SC'
// ?ALIEN-HIT-WITH-LASER  codep:0x224c wordp:0xe2a5 size:0x002e C-string:'IsALIEN_dash_HIT_dash_WITH_dash_LASER'
//           WE2D5  codep:0x224c wordp:0xe2d5 size:0x000a C-string:'WE2D5'
// ?ALIEN-HIT-WITH-STUNNER  codep:0x224c wordp:0xe2ee size:0x0018 C-string:'IsALIEN_dash_HIT_dash_WITH_dash_STUNNER'
//           WE308  codep:0x224c wordp:0xe308 size:0x0008 C-string:'WE308'
//      ?NOTICE-PL  codep:0x224c wordp:0xe31f size:0x003a C-string:'IsNOTICE_dash_PL'
//      ?NEXT-TO-P  codep:0x224c wordp:0xe368 size:0x001e C-string:'IsNEXT_dash_TO_dash_P'
//           WE388  codep:0x224c wordp:0xe388 size:0x000e C-string:'WE388'
//           WE398  codep:0x224c wordp:0xe398 size:0x000c C-string:'WE398'
//           WE3A6  codep:0x224c wordp:0xe3a6 size:0x0012 C-string:'WE3A6'
//           WE3BA  codep:0x224c wordp:0xe3ba size:0x0018 C-string:'WE3BA'
//           WE3D4  codep:0x224c wordp:0xe3d4 size:0x0006 C-string:'WE3D4'
//           WE3DC  codep:0x224c wordp:0xe3dc size:0x0012 C-string:'WE3DC'
//           WE3F0  codep:0x224c wordp:0xe3f0 size:0x000c C-string:'WE3F0'
//           WE3FE  codep:0x224c wordp:0xe3fe size:0x000e C-string:'WE3FE'
//           WE40E  codep:0x224c wordp:0xe40e size:0x000a C-string:'WE40E'
//           WE41A  codep:0x224c wordp:0xe41a size:0x0004 C-string:'WE41A'
//           WE420  codep:0x224c wordp:0xe420 size:0x000c C-string:'WE420'
//           WE42E  codep:0x224c wordp:0xe42e size:0x0008 C-string:'WE42E'
//           WE438  codep:0x224c wordp:0xe438 size:0x0014 C-string:'WE438'
//           WE44E  codep:0x224c wordp:0xe44e size:0x000c C-string:'WE44E'
//      ?STUNS<STU  codep:0x224c wordp:0xe469 size:0x000c C-string:'IsSTUNS_st_STU'
//        ?STUNNED  codep:0x224c wordp:0xe482 size:0x0004 C-string:'IsSTUNNED'
//           WE488  codep:0x224c wordp:0xe488 size:0x0008 C-string:'WE488'
//           WE492  codep:0x224c wordp:0xe492 size:0x000e C-string:'WE492'
//           WE4A2  codep:0x224c wordp:0xe4a2 size:0x0008 C-string:'WE4A2'
//           WE4AC  codep:0x224c wordp:0xe4ac size:0x000e C-string:'WE4AC'
//           WE4BC  codep:0x224c wordp:0xe4bc size:0x000e C-string:'WE4BC'
//   ?WANTS-TO-FLY  codep:0x224c wordp:0xe4d9 size:0x000a C-string:'IsWANTS_dash_TO_dash_FLY'
// ?WANTS-TO-FLOAT  codep:0x224c wordp:0xe4f2 size:0x0004 C-string:'IsWANTS_dash_TO_dash_FLOAT'
//           WE4F8  codep:0x224c wordp:0xe4f8 size:0x000e C-string:'WE4F8'
//           WE508  codep:0x224c wordp:0xe508 size:0x000c C-string:'WE508'
//           WE516  codep:0x224c wordp:0xe516 size:0x0022 C-string:'WE516'
//           WE53A  codep:0x224c wordp:0xe53a size:0x000c C-string:'WE53A'
//           WE548  codep:0x224c wordp:0xe548 size:0x000c C-string:'WE548'
//           WE556  codep:0x224c wordp:0xe556 size:0x000c C-string:'WE556'
//           WE564  codep:0x224c wordp:0xe564 size:0x003c C-string:'WE564'
//           WE5A2  codep:0x224c wordp:0xe5a2 size:0x0010 C-string:'WE5A2'
//           WE5B4  codep:0x224c wordp:0xe5b4 size:0x0012 C-string:'WE5B4'
//           WE5C8  codep:0x224c wordp:0xe5c8 size:0x0032 C-string:'WE5C8'
//           WE5FC  codep:0x224c wordp:0xe5fc size:0x000e C-string:'WE5FC'
//           WE60C  codep:0x224c wordp:0xe60c size:0x0014 C-string:'WE60C'
//           WE622  codep:0x224c wordp:0xe622 size:0x0018 C-string:'WE622'
//      REDUCE-AGG  codep:0x224c wordp:0xe649 size:0x0018 C-string:'REDUCE_dash_AGG'
//      INCREASES-  codep:0x224c wordp:0xe670 size:0x001a C-string:'INCREASES_dash_'
//           WE68C  codep:0x224c wordp:0xe68c size:0x0016 C-string:'WE68C'
//           WE6A4  codep:0x224c wordp:0xe6a4 size:0x000a C-string:'WE6A4'
//           WE6B0  codep:0x224c wordp:0xe6b0 size:0x000a C-string:'WE6B0'
//           WE6BC  codep:0x224c wordp:0xe6bc size:0x0012 C-string:'WE6BC'
//           WE6D0  codep:0x224c wordp:0xe6d0 size:0x0048 C-string:'WE6D0'
// ERASE-LIFEFORM-FROM-ARRAY  codep:0x224c wordp:0xe727 size:0x0008 C-string:'ERASE_dash_LIFEFORM_dash_FROM_dash_ARRAY'
//      REDUCE-HIT  codep:0x224c wordp:0xe73e size:0x001c C-string:'REDUCE_dash_HIT'
//           WE75C  codep:0x224c wordp:0xe75c size:0x000e C-string:'WE75C'
//      REDUCE-STU  codep:0x224c wordp:0xe779 size:0x0016 C-string:'REDUCE_dash_STU'
//      STUN-EFFEC  codep:0x224c wordp:0xe79e size:0x0020 C-string:'STUN_dash_EFFEC'
//           WE7C0  codep:0x224c wordp:0xe7c0 size:0x0002 C-string:'WE7C0'
//      INCREMENT-  codep:0x224c wordp:0xe7d1 size:0x0014 C-string:'INCREMENT_dash_'
//           WE7E7  codep:0x73ea wordp:0xe7e7 size:0x0006 C-string:'WE7E7'
//           WE7EF  codep:0x224c wordp:0xe7ef size:0x000c C-string:'WE7EF'
//           WE7FD  codep:0x224c wordp:0xe7fd size:0x000c C-string:'WE7FD'
//           WE80B  codep:0x224c wordp:0xe80b size:0x000c C-string:'WE80B'
//             DIE  codep:0x224c wordp:0xe81f size:0x001a C-string:'DIE'
//           WE83B  codep:0x224c wordp:0xe83b size:0x000e C-string:'WE83B'
//           WE84B  codep:0x224c wordp:0xe84b size:0x0008 C-string:'WE84B'
//           WE855  codep:0x224c wordp:0xe855 size:0x000e C-string:'WE855'
//           WE865  codep:0x744d wordp:0xe865 size:0x0003 C-string:'WE865'
//           WE86A  codep:0x744d wordp:0xe86a size:0x0003 C-string:'WE86A'
//           WE86F  codep:0x224c wordp:0xe86f size:0x002a C-string:'WE86F'
//           WE89B  codep:0x224c wordp:0xe89b size:0x0018 C-string:'WE89B'
//           WE8B5  codep:0x744d wordp:0xe8b5 size:0x0003 C-string:'WE8B5'
//           WE8BA  codep:0x73ea wordp:0xe8ba size:0x0006 C-string:'WE8BA'
//           WE8C2  codep:0x224c wordp:0xe8c2 size:0x0020 C-string:'WE8C2'
//           WE8E4  codep:0x224c wordp:0xe8e4 size:0x0012 C-string:'WE8E4'
//           WE8F8  codep:0x224c wordp:0xe8f8 size:0x0020 C-string:'WE8F8'
//           WE91A  codep:0x224c wordp:0xe91a size:0x002a C-string:'WE91A'
//           WE946  codep:0x224c wordp:0xe946 size:0x006c C-string:'WE946'
//           WE9B4  codep:0x224c wordp:0xe9b4 size:0x0077 C-string:'WE9B4'
//      AGGR-MODIF  codep:0xb869 wordp:0xea3a size:0x0038 C-string:'AGGR_dash_MODIF'
//       VS.PLAYER  codep:0xb869 wordp:0xea80 size:0x0037 C-string:'VS_dot_PLAYER'
//        LIFE-SIM  codep:0xb869 wordp:0xeac4 size:0x0014 C-string:'LIFE_dash_SIM'
//      ERASE-LIFE  codep:0xb869 wordp:0xeae7 size:0x0011 C-string:'ERASE_dash_LIFE'
//      ?REDUCE-PO  codep:0xb869 wordp:0xeb07 size:0x0022 C-string:'IsREDUCE_dash_PO'
//           WEB2B  codep:0x224c wordp:0xeb2b size:0x0010 C-string:'WEB2B'
//      EFFECT-LIF  codep:0xb869 wordp:0xeb4a size:0x001d C-string:'EFFECT_dash_LIF'
//           WEB69  codep:0x224c wordp:0xeb69 size:0x000e C-string:'WEB69'
//      GROUND>AIR  codep:0xb869 wordp:0xeb86 size:0x0070 C-string:'GROUND_gt_AIR'
//           WEBF8  codep:0x224c wordp:0xebf8 size:0x0056 C-string:'WEBF8'
//        SIMULATE  codep:0x224c wordp:0xec5b size:0x005a C-string:'SIMULATE'
//           WECB7  codep:0x224c wordp:0xecb7 size:0x0076 C-string:'WECB7'
//          %STORM  codep:0x1d29 wordp:0xed38 size:0x000a C-string:'_pe_STORM'
//         ?.STORM  codep:0x224c wordp:0xed4e size:0x001c C-string:'Is_dot_STORM'
//          ?STORM  codep:0x224c wordp:0xed75 size:0x0096 C-string:'IsSTORM'
//      angle>text  codep:0x224c wordp:0xee0d size:0x00e4 C-string:'angle_gt_text'
//           WEEF3  codep:0x224c wordp:0xeef3 size:0x0014 C-string:'WEEF3'
//         ?EMBARK  codep:0x224c wordp:0xef13 size:0x000e C-string:'IsEMBARK'
//           WEF23  codep:0x224c wordp:0xef23 size:0x0012 C-string:'WEF23'
//           WEF37  codep:0x224c wordp:0xef37 size:0x0026 C-string:'WEF37'
//       FUNCTIONS  codep:0x1d29 wordp:0xef6b size:0x001d C-string:'FUNCTIONS'
//           WEF8A  codep:0x224c wordp:0xef8a size:0x000a C-string:'WEF8A'
//           WEF96  codep:0x224c wordp:0xef96 size:0x0006 C-string:'WEF96'
//           WEF9E  codep:0x1d29 wordp:0xef9e size:0x0002 C-string:'WEF9E'
//            MAPS  codep:0x224c wordp:0xefa9 size:0x0008 C-string:'MAPS'
//       WALK&TALK  codep:0x224c wordp:0xefbf size:0x0008 C-string:'WALK_and_TALK'
//          TVMOVE  codep:0x224c wordp:0xefd2 size:0x000c C-string:'TVMOVE'
//      DO.WEAPONS  codep:0x224c wordp:0xefed size:0x0018 C-string:'DO_dot_WEAPONS'
//          /ITEMS  codep:0x224c wordp:0xf010 size:0x0008 C-string:'_slash_ITEMS'
//           ICONS  codep:0x224c wordp:0xf022 size:0x001a C-string:'ICONS'
//        >BUTTONS  codep:0x4a4f wordp:0xf049 size:0x0020 C-string:'_gt_BUTTONS'
//           WF06B  codep:0x224c wordp:0xf06b size:0x000a C-string:'WF06B'
//           WF077  codep:0x224c wordp:0xf077 size:0x0068 C-string:'WF077'
//           NAVIG  codep:0x744d wordp:0xf0e9 size:0x0003 C-string:'NAVIG'
//            ^NAV  codep:0x744d wordp:0xf0f5 size:0x0003 C-string:'_h_NAV'
//          -STORM  codep:0x224c wordp:0xf103 size:0x0016 C-string:'_dash_STORM'
//            ?NAV  codep:0x224c wordp:0xf122 size:0x0018 C-string:'IsNAV'
//       .DISTANCE  codep:0x224c wordp:0xf148 size:0x006c C-string:'DrawDISTANCE'
//          .CARGO  codep:0x224c wordp:0xf1bf size:0x003b C-string:'DrawCARGO'
//           WF1FC  codep:0x224c wordp:0xf1fc size:0x001a C-string:'WF1FC'
//         .ENERGY  codep:0x224c wordp:0xf222 size:0x00a9 C-string:'DrawENERGY'
//           WF2CD  codep:0x224c wordp:0xf2cd size:0x0026 C-string:'WF2CD'
//           WF2F5  codep:0x224c wordp:0xf2f5 size:0x0022 C-string:'WF2F5'
//           WF319  codep:0x224c wordp:0xf319 size:0x0022 C-string:'WF319'
//          .WHERE  codep:0x224c wordp:0xf346 size:0x0048 C-string:'DrawWHERE'
//          .STATS  codep:0x224c wordp:0xf399 size:0x001a C-string:'DrawSTATS'
//           WF3B5  codep:0x224c wordp:0xf3b5 size:0x000e C-string:'WF3B5'
//        TV-TASKS  codep:0x224c wordp:0xf3d0 size:0x0064 C-string:'TV_dash_TASKS'
//           WF436  codep:0x224c wordp:0xf436 size:0x0062 C-string:'WF436'
//           WF49A  codep:0x224c wordp:0xf49a size:0x000a C-string:'WF49A'
//           WF4A6  codep:0x224c wordp:0xf4a6 size:0x0008 C-string:'WF4A6'
//           WF4B0  codep:0x224c wordp:0xf4b0 size:0x002e C-string:'WF4B0'
//              TV  codep:0x224c wordp:0xf4e5 size:0x0000 C-string:'TV'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_DEAD_dash_IC; // DEAD-IC
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp_IsCRITIC; // ?CRITIC
extern const unsigned short int pp__i_INJURE; // 'INJURE
extern const unsigned short int pp_ATMO; // ATMO
extern const unsigned short int pp_LCOLOR; // LCOLOR
extern const unsigned short int pp_OLDHR; // OLDHR
extern const unsigned short int pp__i_THROW_dash_AWAY; // 'THROW-AWAY
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_IsNEW; // ?NEW
extern const unsigned short int pp_FORCED; // FORCED
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_XCON; // XCON
extern const unsigned short int pp_YCON; // YCON
extern const unsigned short int pp_YVIS; // YVIS
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp__pe_EFF; // %EFF
extern const unsigned short int pp_STORM; // STORM
extern const unsigned short int pp__i_STORM; // 'STORM
extern const unsigned short int pp_E_slash_M; // E/M
extern const unsigned short int pp__n_STORM; // #STORM
extern const unsigned short int pp_IsHEAL; // ?HEAL
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WBOTTOM; // WBOTTOM
extern const unsigned short int pp_WRIGHT; // WRIGHT
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp_TIME_dash_PASSING; // TIME-PASSING
extern const unsigned short int pp__i_DEATH; // 'DEATH
extern const unsigned short int pp__i_ENDING; // 'ENDING
extern const unsigned short int pp__i__dot_VITAL; // '.VITAL
extern const unsigned short int pp__i__dot_DATE; // '.DATE
extern const unsigned short int pp__i__dot_VEHICLE_dash_STATUS; // '.VEHICLE-STATUS
extern const unsigned short int pp__i_VEHICLE_dash_CYCLE; // 'VEHICLE-CYCLE
extern const unsigned short int pp__i_CREW_dash_C; // 'CREW-C
extern const unsigned short int pp__i_EXTERNAL_dash_EVENTS; // 'EXTERNAL-EVENTS
extern const unsigned short int pp__i_REPAIR; // 'REPAIR
extern const unsigned short int pp__i_TREATM; // 'TREATM
extern const unsigned short int pp_WEAPON_dash_; // WEAPON-
extern const unsigned short int pp__h_CRIT; // ^CRIT
extern const unsigned short int pp_IsFLAT; // ?FLAT
extern const unsigned short int pp_WEAPXY; // WEAPXY
extern const unsigned short int pp_BOX_dash_IADDR; // BOX-IADDR
extern const unsigned short int pp_ANCHOR_dash_CONTOUR; // ANCHOR-CONTOUR
extern const unsigned short int pp_TVEHICLE; // TVEHICLE
extern const unsigned short int pp_TV_dash_HOLD; // TV-HOLD
extern const unsigned short int pp__ro_PLANET_rc_; // (PLANET)
extern const unsigned short int pp_LASTAP; // LASTAP
extern LoadDataType SHAPE; // SHAPE
extern LoadDataType RESEMBLES; // RESEMBLES
extern Color BLACK; // BLACK
extern Color PINK; // PINK
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
extern IFieldType PHR_dash_CNT; // PHR-CNT
extern IFieldType PHRASE_dash_MEM; // PHRASE-MEM
void _star__slash_(); // */
void ABS(); // ABS
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void ALLOT(); // ALLOT
void HERE(); // HERE
void DrawR(); // .R
void MS(); // MS
void NOP(); // NOP
void _2OVER(); // 2OVER
void D_eq_(); // D=
void WITHIN(); // WITHIN
void _3_star_(); // 3*
void RRND(); // RRND
void SQRT(); // SQRT
void ACELLADDR(); // ACELLADDR
void A_at_(); // A@
void SETLARRAY(); // SETLARRAY
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _1_dot_5_ex_(); // 1.5!
void _2_ex_(); // 2!
void ON_3(); // ON_3
void OFF(); // OFF
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIRST(); // IFIRST
void IFIND(); // IFIND
void IDELETE(); // IDELETE
void StoreCOLOR(); // !COLOR
void VCLIPSET(); // VCLIPSET
void DCLIPSET(); // DCLIPSET
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void GetIX(); // @IX
void GetIY(); // @IY
void GetID(); // @ID
void GetIL(); // @IL
void GetIH(); // @IH
void StoreIX(); // !IX
void StoreIY(); // !IY
void StoreID(); // !ID
void StoreIC(); // !IC
void DrawBACKGROUND(); // .BACKGROUND
void POINT_gt_ICON(); // POINT>ICON
void DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
void IsICON_dash_IADDR(); // ?ICON-IADDR
void _dash_ICON(); // -ICON
void _plus_ICON(); // +ICON
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void CLICK(); // CLICK
void BEEPON(); // BEEPON
void _do__dot_(); // $.
void POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
void WINDOW(); // WINDOW
void IsTRIG(); // ?TRIG
void SET_dash_CRS(); // SET-CRS
void DISTRACT(); // DISTRACT
void DrawVIT(); // .VIT
void HEAVEHO(); // HEAVEHO
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
void U_star_(); // U*
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void GetEXECUTE(); // @EXECUTE
void ON_2(); // ON_2
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void _st_D_ex__gt_(); // <D!>
void CI(); // CI
void V_gt_DISPLAY(); // V>DISPLAY
void _ro_XYSCAN_rc_(); // (XYSCAN)


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp__pe_STORM = 0xed38; // %STORM size: 10
// {0x00, 0x00, 0x14, 0x00, 0x28, 0x00, 0x3c, 0x00, 0x55, 0x00}

const unsigned short int pp_FUNCTIONS = 0xef6b; // FUNCTIONS size: 29
// {0x06, 0x0c, 0x03, 0x0c, 0x13, 0x0c, 0x17, 0x0c, 0x13, 0x0c, 0x2b, 0x0c, 0x17, 0x0c, 0x43, 0x0c, 0x13, 0x0c, 0x57, 0x0c, 0x13, 0x0c, 0x6b, 0x0c, 0x1b, 0x0c, 0x87, 0x0c, 0x16}

const unsigned short int pp_WEF9E = 0xef9e; // WEF9E size: 2
// {0x99, 0xf3}




// 0xe082: db 0x49 0x01 'I '

// ================================================
// 0xe084: WORD 'WE086' codep=0x224c wordp=0xe086 params=2 returns=2
// ================================================
// orphan

void WE086() // WE086
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xe092: WORD 'WE094' codep=0x224c wordp=0xe094
// ================================================
// orphan

void WE094() // WE094
{
  _2DUP(); // 2DUP
  IFIND(); // IFIND
}


// ================================================
// 0xe09a: WORD 'WE09C' codep=0x224c wordp=0xe09c params=2 returns=0
// ================================================
// orphan

void WE09C() // WE09C
{
  HERE(); // HERE
  Push(3);
  ALLOT(); // ALLOT
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xe0a6: WORD 'WE0A8' codep=0x224c wordp=0xe0a8 params=0 returns=0
// ================================================
// orphan

void WE0A8() // WE0A8
{
  Push(pp_BOX_dash_IADDR); // BOX-IADDR
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  IFIRST(); // IFIRST
}


// ================================================
// 0xe0b4: WORD 'WE0B6' codep=0x224c wordp=0xe0b6 params=0 returns=0
// ================================================

void WE0B6() // WE0B6
{
  Push(0x0040);
  Push(3);
  Push(7);
  Push(0x0026);
  WINDOW(); // WINDOW
  Push(-1);
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe0cc: WORD 'WE0CE' codep=0x224c wordp=0xe0ce params=0 returns=1
// ================================================
// orphan

void WE0CE() // WE0CE
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xe0d6: WORD 'WE0D8' codep=0x224c wordp=0xe0d8 params=0 returns=1
// ================================================

void WE0D8() // WE0D8
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xe0e2: WORD 'WE0E4' codep=0x224c wordp=0xe0e4 params=1 returns=1
// ================================================

void WE0E4() // WE0E4
{
  Push((Pop()==0?1:0)==0?1:0); //  0= 0=
}


// ================================================
// 0xe0ea: WORD 'WE0EC' codep=0x224c wordp=0xe0ec params=0 returns=2
// ================================================

void WE0EC() // WE0EC
{
  Push(pp_TVEHICLE); // TVEHICLE
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe0fe: WORD 'WE100' codep=0x224c wordp=0xe100 params=0 returns=2
// ================================================

void WE100() // WE100
{
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xe10a: WORD 'WE10C' codep=0x224c wordp=0xe10c
// ================================================

void WE10C() // WE10C
{
  GetIX(); // @IX
  GetIY(); // @IY
}


// ================================================
// 0xe112: WORD 'WE114' codep=0x224c wordp=0xe114
// ================================================

void WE114() // WE114
{
  Push(0x6ac1); // 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  Push(Read16(0x63ef+INST_dash_X.offset) - (Read16(pp_XCON) + 1)); // INST-X<IFIELD> @ XCON @ 1+ -
  Push((Read16(0x63ef+INST_dash_Y.offset) - Read16(pp_YCON)) + 1); // INST-Y<IFIELD> @ YCON @ - 1+
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(0x0020);
  _st_(); // <
}


// ================================================
// 0xe13e: WORD 'WE140' codep=0x73ea wordp=0xe140
// ================================================
LoadDataType WE140 = {CREATUREIDX, 0x36, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe146: WORD 'WE148' codep=0x73ea wordp=0xe148
// ================================================
LoadDataType WE148 = {CREATUREIDX, 0x37, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe14e: WORD 'WE150' codep=0x73ea wordp=0xe150
// ================================================
LoadDataType WE150 = {CREATUREIDX, 0x30, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe156: WORD 'STUN.EFFEC' codep=0x73ea wordp=0xe165
// ================================================
LoadDataType STUN_dot_EFFEC = {CREATUREIDX, 0x33, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe16b: WORD 'WE16D' codep=0x73ea wordp=0xe16d
// ================================================
LoadDataType WE16D = {CREATUREIDX, 0x0c, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe173: WORD 'WE175' codep=0x73ea wordp=0xe175
// ================================================
LoadDataType WE175 = {CREATUREIDX, 0x29, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe17b: WORD 'HITS' codep=0x744d wordp=0xe184
// ================================================
IFieldType HITS = {CREATUREIDX, 0x11, 0x01};

// ================================================
// 0xe187: WORD 'STUNS' codep=0x744d wordp=0xe191
// ================================================
IFieldType STUNS = {CREATUREIDX, 0x12, 0x01};

// ================================================
// 0xe194: WORD 'HIT.POINTS' codep=0x73ea wordp=0xe1a3
// ================================================
LoadDataType HIT_dot_POINTS = {CREATUREIDX, 0x34, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe1a9: WORD 'WE1AB' codep=0x744d wordp=0xe1ab
// ================================================
// orphan
IFieldType WE1AB = {CREATUREIDX, 0x18, 0x03};

// ================================================
// 0xe1ae: WORD 'WE1B0' codep=0x744d wordp=0xe1b0
// ================================================
// orphan
IFieldType WE1B0 = {CREATUREIDX, 0x17, 0x01};

// ================================================
// 0xe1b3: WORD 'WE1B5' codep=0x744d wordp=0xe1b5
// ================================================
IFieldType WE1B5 = {CREATUREIDX, 0x15, 0x01};

// ================================================
// 0xe1b8: WORD 'WE1BA' codep=0x744d wordp=0xe1ba
// ================================================
IFieldType WE1BA = {CREATUREIDX, 0x13, 0x01};

// ================================================
// 0xe1bd: WORD 'BEHAVE' codep=0x744d wordp=0xe1c8
// ================================================
IFieldType BEHAVE = {CREATUREIDX, 0x1b, 0x01};

// ================================================
// 0xe1cb: WORD 'WE1CD' codep=0x73ea wordp=0xe1cd
// ================================================
// orphan
LoadDataType WE1CD = {CREATUREIDX, 0x0b, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe1d3: WORD 'TV-WEAPON' codep=0x744d wordp=0xe1e1
// ================================================
IFieldType TV_dash_WEAPON = {TVEHICLEIDX, 0x11, 0x01};

// ================================================
// 0xe1e4: WORD 'WE1E6' codep=0x744d wordp=0xe1e6
// ================================================
IFieldType WE1E6 = {BOXIDX, 0x11, 0x02};

// ================================================
// 0xe1e9: WORD 'ATMO.ACTIV' codep=0x73ea wordp=0xe1f8
// ================================================
LoadDataType ATMO_dot_ACTIV = {PLANETIDX, 0x11, 0x01, 0x16, 0x658f};

// ================================================
// 0xe1fe: WORD '?PLAYER-FI' codep=0x224c wordp=0xe20d params=0 returns=1
// ================================================

void IsPLAYER_dash_FI() // ?PLAYER-FI
{
  Push(Read16(pp_WEAPON_dash_)); // WEAPON- @
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push((Read16(0x63ef+TV_dash_WEAPON.offset)&0xFF)==1?1:0); // TV-WEAPON<IFIELD> C@ 1 =
  ICLOSE(); // ICLOSE
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe223: WORD '?ALIEN-CLO' codep=0x224c wordp=0xe232
// ================================================

void IsALIEN_dash_CLO() // ?ALIEN-CLO
{
  unsigned short int a;
  WE10C(); // WE10C
  Push(Pop() - Read16(pp_WEAPXY)); //  WEAPXY @ -
  ABS(); // ABS
  Push(6);
  _st_(); // <
  a = Pop(); // >R
  Push(Pop() - Read16(pp_WEAPXY + 2)); //  WEAPXY 2+ @ -
  ABS(); // ABS
  Push(6);
  _st_(); // <
  Push(Pop() & a); //  R> AND
}


// ================================================
// 0xe256: WORD '?ALIEN-SMA' codep=0x224c wordp=0xe265
// ================================================

void IsALIEN_dash_SMA() // ?ALIEN-SMA
{
  LoadData(WE140); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x0045);
  _gt_(); // >
}


// ================================================
// 0xe271: WORD 'WE273' codep=0x224c wordp=0xe273 params=0 returns=1
// ================================================

void WE273() // WE273
{
  Push(0x63ef+WE1BA.offset); // WE1BA<IFIELD>
  Push(0x004f);
  _gt_(); // >
}


// ================================================
// 0xe27d: WORD '?RANDOM-SC' codep=0x224c wordp=0xe28c params=0 returns=1
// ================================================

void IsRANDOM_dash_SC() // ?RANDOM-SC
{
  WE0D8(); // WE0D8
  Push(0x000a);
  _st_(); // <
}


// ================================================
// 0xe296: WORD '?ALIEN-HIT-WITH-LASER' codep=0x224c wordp=0xe2a5
// ================================================

void IsALIEN_dash_HIT_dash_WITH_dash_LASER() // ?ALIEN-HIT-WITH-LASER
{
  WE10C(); // WE10C
  Push(pp_WEAPXY); // WEAPXY
  _2_at_(); // 2@
  D_eq_(); // D=
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push((Read16(0x63ef+TV_dash_WEAPON.offset)&0xFF)==1?1:0); // TV-WEAPON<IFIELD> C@ 1 =
  ICLOSE(); // ICLOSE
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(0x0020 | Read16(0x63ef+BEHAVE.offset)&0xFF); // 0x0020 BEHAVE<IFIELD> C@ OR
  Push(0x63ef+BEHAVE.offset); // BEHAVE<IFIELD>
  C_ex_(); // C!
}


// ================================================
// 0xe2d3: WORD 'WE2D5' codep=0x224c wordp=0xe2d5 params=0 returns=1
// ================================================

void WE2D5() // WE2D5
{
  WE0D8(); // WE0D8
  Push(0x000a);
  _st_(); // <
}


// ================================================
// 0xe2df: WORD '?ALIEN-HIT-WITH-STUNNER' codep=0x224c wordp=0xe2ee
// ================================================

void IsALIEN_dash_HIT_dash_WITH_dash_STUNNER() // ?ALIEN-HIT-WITH-STUNNER
{
  WE10C(); // WE10C
  Push(pp_WEAPXY); // WEAPXY
  _2_at_(); // 2@
  D_eq_(); // D=
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push((Read16(0x63ef+TV_dash_WEAPON.offset)&0xFF)==0?1:0); // TV-WEAPON<IFIELD> C@ 0=
  ICLOSE(); // ICLOSE
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe306: WORD 'WE308' codep=0x224c wordp=0xe308
// ================================================

void WE308() // WE308
{
  LoadData(WE150); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  WE0E4(); // WE0E4
}


// ================================================
// 0xe310: WORD '?NOTICE-PL' codep=0x224c wordp=0xe31f params=0 returns=1
// ================================================

void IsNOTICE_dash_PL() // ?NOTICE-PL
{
  Push(((Read16(0x63ef+BEHAVE.offset)&0xFF) & 0x0040)==0?1:0); // BEHAVE<IFIELD> C@ 0x0040 AND 0=
  if (Pop() != 0)
  {
    WE0D8(); // WE0D8
    Push(0x000a);
    _st_(); // <
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+BEHAVE.offset)&0xFF | 0x0040); // BEHAVE<IFIELD> C@ 0x0040 OR
      Push(0x63ef+BEHAVE.offset); // BEHAVE<IFIELD>
      C_ex_(); // C!
      Push(1);
    } else
    {
      Push(0);
    }
    return;
  }
  Push(1);
}


// ================================================
// 0xe359: WORD '?NEXT-TO-P' codep=0x224c wordp=0xe368
// ================================================

void IsNEXT_dash_TO_dash_P() // ?NEXT-TO-P
{
  unsigned short int a;
  WE0EC(); // WE0EC
  WE10C(); // WE10C
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
// 0xe386: WORD 'WE388' codep=0x224c wordp=0xe388 params=0 returns=1
// ================================================

void WE388() // WE388
{
  Push(Read16(0x63ef+HITS.offset)&0xFF | Read16(0x63ef+STUNS.offset)&0xFF); // HITS<IFIELD> C@ STUNS<IFIELD> C@ OR
  WE0E4(); // WE0E4
}


// ================================================
// 0xe396: WORD 'WE398' codep=0x224c wordp=0xe398
// ================================================

void WE398() // WE398
{
  LoadData(WE16D); // from 'CREATURE'
  Push((Read16(Pop())&0xFF) & 8); //  C@ 8 AND
  WE0E4(); // WE0E4
}


// ================================================
// 0xe3a4: WORD 'WE3A6' codep=0x224c wordp=0xe3a6
// ================================================

void WE3A6() // WE3A6
{
  LoadData(WE16D); // from 'CREATURE'
  Push((Read16(Pop())&0xFF) & 4); //  C@ 4 AND
  WE0E4(); // WE0E4
  WE398(); // WE398
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe3b8: WORD 'WE3BA' codep=0x224c wordp=0xe3ba
// ================================================

void WE3BA() // WE3BA
{
  LoadData(WE16D); // from 'CREATURE'
  Push((Read16(Pop())&0xFF) & 2); //  C@ 2 AND
  WE0E4(); // WE0E4
  WE3A6(); // WE3A6
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  WE398(); // WE398
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe3d2: WORD 'WE3D4' codep=0x224c wordp=0xe3d4 params=0 returns=0
// ================================================
// orphan

void WE3D4() // WE3D4
{
  Push(0x63ef+WE1AB.offset); // WE1AB<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe3da: WORD 'WE3DC' codep=0x224c wordp=0xe3dc
// ================================================
// orphan

void WE3DC() // WE3DC
{
  LoadData(WE1CD); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  WE3D4(); // WE3D4
  LoadData(WE1CD); // from 'CREATURE'
  ICLOSE(); // ICLOSE
  _dash_(); // -
  Push(1);
  _gt_(); // >
}


// ================================================
// 0xe3ee: WORD 'WE3F0' codep=0x224c wordp=0xe3f0 params=0 returns=1
// ================================================
// orphan

void WE3F0() // WE3F0
{
  Push(Read16(0x63ef+WE1BA.offset)&0xFF); // WE1BA<IFIELD> C@
  Push(0x0027);
  _gt_(); // >
}


// ================================================
// 0xe3fc: WORD 'WE3FE' codep=0x224c wordp=0xe3fe params=0 returns=1
// ================================================
// orphan

void WE3FE() // WE3FE
{
  Push((Read16(0x63ef+BEHAVE.offset)&0xFF) & 0x0080); // BEHAVE<IFIELD> C@ 0x0080 AND
  WE0E4(); // WE0E4
}


// ================================================
// 0xe40c: WORD 'WE40E' codep=0x224c wordp=0xe40e params=0 returns=1
// ================================================

void WE40E() // WE40E
{
  Push((Read16(0x63ef+BEHAVE.offset)&0xFF) & 1); // BEHAVE<IFIELD> C@ 1 AND
}


// ================================================
// 0xe418: WORD 'WE41A' codep=0x224c wordp=0xe41a params=0 returns=1
// ================================================

void WE41A() // WE41A
{
  Push(Read16(cc_FALSE)); // FALSE
}


// ================================================
// 0xe41e: WORD 'WE420' codep=0x224c wordp=0xe420 params=0 returns=1
// ================================================
// orphan

void WE420() // WE420
{
  Push((Read16(0x63ef+BEHAVE.offset)&0xFF) & 8); // BEHAVE<IFIELD> C@ 8 AND
  WE0E4(); // WE0E4
}


// ================================================
// 0xe42c: WORD 'WE42E' codep=0x224c wordp=0xe42e params=0 returns=1
// ================================================

void WE42E() // WE42E
{
  Push(Read16(0x63ef+HITS.offset)&0xFF); // HITS<IFIELD> C@
  _0_gt_(); // 0>
}


// ================================================
// 0xe436: WORD 'WE438' codep=0x224c wordp=0xe438 params=0 returns=1
// ================================================

void WE438() // WE438
{
  Push(Read16(0x63ef+STUNS.offset)&0xFF); // STUNS<IFIELD> C@
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push(0x0080);
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe44c: WORD 'WE44E' codep=0x224c wordp=0xe44e params=0 returns=1
// ================================================

void WE44E() // WE44E
{
  Push(Read16(0x63ef+STUNS.offset)&0xFF); // STUNS<IFIELD> C@
  Push(0x0080);
  _gt_(); // >
}


// ================================================
// 0xe45a: WORD '?STUNS<STU' codep=0x224c wordp=0xe469
// ================================================

void IsSTUNS_st_STU() // ?STUNS<STU
{
  Push(Read16(0x63ef+STUNS.offset)&0xFF); // STUNS<IFIELD> C@
  LoadData(STUN_dot_EFFEC); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  _st_(); // <
}


// ================================================
// 0xe475: WORD '?STUNNED' codep=0x224c wordp=0xe482
// ================================================

void IsSTUNNED() // ?STUNNED
{
  IsSTUNS_st_STU(); // ?STUNS<STU
}


// ================================================
// 0xe486: WORD 'WE488' codep=0x224c wordp=0xe488 params=0 returns=1
// ================================================

void WE488() // WE488
{
  Push((Read16(0x63ef+HITS.offset)&0xFF)==0?1:0); // HITS<IFIELD> C@ 0=
}


// ================================================
// 0xe490: WORD 'WE492' codep=0x224c wordp=0xe492 params=0 returns=1
// ================================================

void WE492() // WE492
{
  Push((Read16(0x63ef+BEHAVE.offset)&0xFF) & 0x0010); // BEHAVE<IFIELD> C@ 0x0010 AND
  WE0E4(); // WE0E4
}


// ================================================
// 0xe4a0: WORD 'WE4A2' codep=0x224c wordp=0xe4a2 params=0 returns=1
// ================================================

void WE4A2() // WE4A2
{
  Push((Read16(0x63ef+WE1B5.offset)&0xFF)==0?1:0); // WE1B5<IFIELD> C@ 0=
}


// ================================================
// 0xe4aa: WORD 'WE4AC' codep=0x224c wordp=0xe4ac
// ================================================

void WE4AC() // WE4AC
{
  LoadData(WE175); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  Push(0xe1e8); Push(0x0001); // 'FLYING'
  D_eq_(); // D=
}


// ================================================
// 0xe4ba: WORD 'WE4BC' codep=0x224c wordp=0xe4bc
// ================================================

void WE4BC() // WE4BC
{
  LoadData(WE175); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  Push(0xe1fb); Push(0x0001); // 'FLOATING'
  D_eq_(); // D=
}


// ================================================
// 0xe4ca: WORD '?WANTS-TO-FLY' codep=0x224c wordp=0xe4d9 params=0 returns=1
// ================================================

void IsWANTS_dash_TO_dash_FLY() // ?WANTS-TO-FLY
{
  WE0D8(); // WE0D8
  Push(0x0046);
  _st_(); // <
}


// ================================================
// 0xe4e3: WORD '?WANTS-TO-FLOAT' codep=0x224c wordp=0xe4f2 params=0 returns=1
// ================================================

void IsWANTS_dash_TO_dash_FLOAT() // ?WANTS-TO-FLOAT
{
  IsWANTS_dash_TO_dash_FLY(); // ?WANTS-TO-FLY
}


// ================================================
// 0xe4f6: WORD 'WE4F8' codep=0x224c wordp=0xe4f8 params=0 returns=1
// ================================================

void WE4F8() // WE4F8
{
  WE0D8(); // WE0D8
  Push(0x001e);
  _st_(); // <
  WE40E(); // WE40E
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe506: WORD 'WE508' codep=0x224c wordp=0xe508 params=0 returns=1
// ================================================

void WE508() // WE508
{
  Push((Read16(0x63ef+BEHAVE.offset)&0xFF) & 2); // BEHAVE<IFIELD> C@ 2 AND
  WE0E4(); // WE0E4
}


// ================================================
// 0xe514: WORD 'WE516' codep=0x224c wordp=0xe516
// ================================================

void WE516() // WE516
{
  Push(0x6ac1); // 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  WE100(); // WE100
  Push(Pop() - Read16(pp_XCON)); //  XCON @ -
  SWAP(); // SWAP
  Push(Pop() - Read16(pp_YCON)); //  YCON @ -
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(0x0010);
  _gt_(); // >
}


// ================================================
// 0xe538: WORD 'WE53A' codep=0x224c wordp=0xe53a
// ================================================
// orphan

void WE53A() // WE53A
{
  LoadData(WE140); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x0023);
  _st_(); // <
}


// ================================================
// 0xe546: WORD 'WE548' codep=0x224c wordp=0xe548 params=0 returns=1
// ================================================

void WE548() // WE548
{
  Push(Read16(0x63ef+WE1BA.offset)&0xFF); // WE1BA<IFIELD> C@
  Push(0x0041);
  _gt_(); // >
}


// ================================================
// 0xe554: WORD 'WE556' codep=0x224c wordp=0xe556 params=0 returns=1
// ================================================

void WE556() // WE556
{
  Push(Read16(0x63ef+WE1BA.offset)&0xFF); // WE1BA<IFIELD> C@
  Push(0x0032);
  _st_(); // <
}


// ================================================
// 0xe562: WORD 'WE564' codep=0x224c wordp=0xe564 params=2 returns=2
// ================================================

void WE564() // WE564
{
  unsigned short int a;
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(-1);
    Push(-1);
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
// 0xe5a0: WORD 'WE5A2' codep=0x224c wordp=0xe5a2 params=0 returns=0
// ================================================

void WE5A2() // WE5A2
{
  Push(Read16(0x63ef+BEHAVE.offset)&0xFF | 0x0010); // BEHAVE<IFIELD> C@ 0x0010 OR
  Push(0x63ef+BEHAVE.offset); // BEHAVE<IFIELD>
  C_ex_(); // C!
}


// ================================================
// 0xe5b2: WORD 'WE5B4' codep=0x224c wordp=0xe5b4 params=0 returns=0
// ================================================

void WE5B4() // WE5B4
{
  Push(Read16(0x63ef+BEHAVE.offset)&0xFF | -0x0010); // BEHAVE<IFIELD> C@ 0x0010 NEGATE OR
  Push(0x63ef+BEHAVE.offset); // BEHAVE<IFIELD>
  C_ex_(); // C!
}


// ================================================
// 0xe5c6: WORD 'WE5C8' codep=0x224c wordp=0xe5c8
// ================================================

void WE5C8() // WE5C8
{
  Push(Read16(pp_XORMODE)); // XORMODE @
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  CI(); // CI
  IsICON_dash_IADDR(); // ?ICON-IADDR
  if (Pop() != 0)
  {
    POINT_gt_ICON(); // POINT>ICON
    Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
    Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
    StoreIY(); // !IY
    StoreIX(); // !IX
  }
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  DrawBACKGROUND(); // .BACKGROUND
  DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
  Push(pp_XORMODE); // XORMODE
  Store_3(); // !_3
}


// ================================================
// 0xe5fa: WORD 'WE5FC' codep=0x224c wordp=0xe5fc params=0 returns=0
// ================================================

void WE5FC() // WE5FC
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  _2_ex_(); // 2!
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe60a: WORD 'WE60C' codep=0x224c wordp=0xe60c
// ================================================

void WE60C() // WE60C
{
  WE564(); // WE564
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
  Push(Pop() + Pop()); // +
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
  WE5C8(); // WE5C8
}


// ================================================
// 0xe620: WORD 'WE622' codep=0x224c wordp=0xe622
// ================================================

void WE622() // WE622
{
  WE564(); // WE564
  Push(-Pop()); //  NEGATE
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
  Push(-Pop()); //  NEGATE
  Push(Pop() + Pop()); // +
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
  WE5C8(); // WE5C8
}


// ================================================
// 0xe63a: WORD 'REDUCE-AGG' codep=0x224c wordp=0xe649
// ================================================

void REDUCE_dash_AGG() // REDUCE-AGG
{
  LoadData(WE148); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(1);
  Push(0x0033);
  RRND(); // RRND
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  LoadData(WE148); // from 'CREATURE'
  C_ex_(); // C!
}


// ================================================
// 0xe661: WORD 'INCREASES-' codep=0x224c wordp=0xe670
// ================================================

void INCREASES_dash_() // INCREASES-
{
  LoadData(WE148); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(1);
  Push(0x0015);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(0x0064);
  MIN(); // MIN
  LoadData(WE148); // from 'CREATURE'
  C_ex_(); // C!
}


// ================================================
// 0xe68a: WORD 'WE68C' codep=0x224c wordp=0xe68c
// ================================================

void WE68C() // WE68C
{
  Push(Read16(0x63ef+BEHAVE.offset)&0xFF | 1); // BEHAVE<IFIELD> C@ 1 OR
  Push(0x63ef+BEHAVE.offset); // BEHAVE<IFIELD>
  C_ex_(); // C!
  WE100(); // WE100
  WE0EC(); // WE0EC
  WE60C(); // WE60C
  WE5A2(); // WE5A2
}


// ================================================
// 0xe6a2: WORD 'WE6A4' codep=0x224c wordp=0xe6a4
// ================================================

void WE6A4() // WE6A4
{
  WE100(); // WE100
  WE0EC(); // WE0EC
  WE622(); // WE622
  WE5A2(); // WE5A2
}


// ================================================
// 0xe6ae: WORD 'WE6B0' codep=0x224c wordp=0xe6b0 params=0 returns=1
// ================================================

void WE6B0() // WE6B0
{
  CI(); // CI
  IsICON_dash_IADDR(); // ?ICON-IADDR
  Pop(); // DROP
  POINT_gt_ICON(); // POINT>ICON
}


// ================================================
// 0xe6ba: WORD 'WE6BC' codep=0x224c wordp=0xe6bc params=0 returns=0
// ================================================

void WE6BC() // WE6BC
{
  Push((Read16(0x63ef+HITS.offset)&0xFF)==0?1:0); // HITS<IFIELD> C@ 0=
  if (Pop() == 0) return;
  WE6B0(); // WE6B0
  Push(Read16(cc_DEAD_dash_IC)); // DEAD-IC
  StoreIC(); // !IC
}


// ================================================
// 0xe6ce: WORD 'WE6D0' codep=0x224c wordp=0xe6d0
// ================================================

void WE6D0() // WE6D0
{
  Push((Read16(0x63ef+BEHAVE.offset)&0xFF | 2) & 0x00fe); // BEHAVE<IFIELD> C@ 2 OR 0x00fe AND
  Push(0x63ef+BEHAVE.offset); // BEHAVE<IFIELD>
  C_ex_(); // C!
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  Push(-1);
  Push(2);
  RRND(); // RRND
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  _plus__ex__2(); // +!_2
  Push(-1);
  Push(2);
  RRND(); // RRND
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  _plus__ex__2(); // +!_2
  WE114(); // WE114
  if (Pop() != 0)
  {
    Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
    Store_3(); // !_3
    Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
    Store_3(); // !_3
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  WE5C8(); // WE5C8
  WE5A2(); // WE5A2
}


// ================================================
// 0xe718: WORD 'ERASE-LIFEFORM-FROM-ARRAY' codep=0x224c wordp=0xe727
// ================================================

void ERASE_dash_LIFEFORM_dash_FROM_dash_ARRAY() // ERASE-LIFEFORM-FROM-ARRAY
{
  _dash_ICON(); // -ICON
  IDELETE(); // IDELETE
  WE5FC(); // WE5FC
}


// ================================================
// 0xe72f: WORD 'REDUCE-HIT' codep=0x224c wordp=0xe73e params=0 returns=0
// ================================================

void REDUCE_dash_HIT() // REDUCE-HIT
{
  Push(Read16(0x63ef+HITS.offset)&0xFF); // HITS<IFIELD> C@
  Push(0x000a);
  Push(0x0033);
  RRND(); // RRND
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(0x63ef+HITS.offset); // HITS<IFIELD>
  C_ex_(); // C!
  WE6BC(); // WE6BC
}


// ================================================
// 0xe75a: WORD 'WE75C' codep=0x224c wordp=0xe75c
// ================================================

void WE75C() // WE75C
{
  _dash_ICON(); // -ICON
  Push(0xc437); // 'ICON-PARM'
  MODULE(); // MODULE
  _plus_ICON(); // +ICON
  WE5FC(); // WE5FC
}


// ================================================
// 0xe76a: WORD 'REDUCE-STU' codep=0x224c wordp=0xe779 params=0 returns=0
// ================================================

void REDUCE_dash_STU() // REDUCE-STU
{
  Push(Read16(0x63ef+STUNS.offset)&0xFF); // STUNS<IFIELD> C@
  Push(0x000a);
  Push(0x001f);
  RRND(); // RRND
  _dash_(); // -
  Push(0x63ef+STUNS.offset); // STUNS<IFIELD>
  C_ex_(); // C!
}


// ================================================
// 0xe78f: WORD 'STUN-EFFEC' codep=0x224c wordp=0xe79e params=0 returns=0
// ================================================

void STUN_dash_EFFEC() // STUN-EFFEC
{
  Push((Read16(0x63ef+HITS.offset)&0xFF) - (0x0100 - (Read16(0x63ef+STUNS.offset)&0xFF))); // HITS<IFIELD> C@ 0x0100 STUNS<IFIELD> C@ - -
  Push(0);
  MAX(); // MAX
  Push(0x63ef+HITS.offset); // HITS<IFIELD>
  C_ex_(); // C!
  Push(0);
  Push(0x63ef+STUNS.offset); // STUNS<IFIELD>
  C_ex_(); // C!
}


// ================================================
// 0xe7be: WORD 'WE7C0' codep=0x224c wordp=0xe7c0 params=0 returns=0
// ================================================

void WE7C0() // WE7C0
{
}


// ================================================
// 0xe7c2: WORD 'INCREMENT-' codep=0x224c wordp=0xe7d1
// ================================================

void INCREMENT_dash_() // INCREMENT-
{
  Push(1 + (Read16(0x63ef+STUNS.offset)&0xFF)); // 1 STUNS<IFIELD> C@ +
  LoadData(STUN_dot_EFFEC); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  MIN(); // MIN
  Push(0x63ef+STUNS.offset); // STUNS<IFIELD>
  C_ex_(); // C!
}


// ================================================
// 0xe7e5: WORD 'WE7E7' codep=0x73ea wordp=0xe7e7
// ================================================
LoadDataType WE7E7 = {CREATUREIDX, 0x90, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe7ed: WORD 'WE7EF' codep=0x224c wordp=0xe7ef
// ================================================

void WE7EF() // WE7EF
{
  Push(1);
  Push(0x63ef+WE1B5.offset); // WE1B5<IFIELD>
  C_ex_(); // C!
  WE75C(); // WE75C
  WE5C8(); // WE5C8
}


// ================================================
// 0xe7fb: WORD 'WE7FD' codep=0x224c wordp=0xe7fd
// ================================================

void WE7FD() // WE7FD
{
  Push(2);
  Push(0x63ef+WE1B5.offset); // WE1B5<IFIELD>
  C_ex_(); // C!
  WE75C(); // WE75C
  WE5C8(); // WE5C8
}


// ================================================
// 0xe809: WORD 'WE80B' codep=0x224c wordp=0xe80b
// ================================================

void WE80B() // WE80B
{
  Push(0);
  Push(0x63ef+WE1B5.offset); // WE1B5<IFIELD>
  C_ex_(); // C!
  WE75C(); // WE75C
  WE5C8(); // WE5C8
}


// ================================================
// 0xe817: WORD 'DIE' codep=0x224c wordp=0xe81f
// ================================================

void DIE() // DIE
{
  WE5B4(); // WE5B4
  Push2Words("0.");
  Push(0x63ef+HITS.offset); // HITS<IFIELD>
  C_ex_(); // C!
  Push(0x63ef+STUNS.offset); // STUNS<IFIELD>
  C_ex_(); // C!
  WE6B0(); // WE6B0
  LoadData(WE7E7); // from 'CREATURE'
  Push(Read16(Pop())); //  @
  StoreID(); // !ID
  WE80B(); // WE80B
  WE6BC(); // WE6BC
}


// ================================================
// 0xe839: WORD 'WE83B' codep=0x224c wordp=0xe83b
// ================================================

void WE83B() // WE83B
{
  Push(Read16(pp__h_CRIT)); // ^CRIT @
  POINT_gt_ICON(); // POINT>ICON
  GetIL(); // @IL
  GetIH(); // @IH
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe849: WORD 'WE84B' codep=0x224c wordp=0xe84b params=0 returns=0
// ================================================

void WE84B() // WE84B
{
  Push(0);
  Push(pp__h_CRIT); // ^CRIT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe853: WORD 'WE855' codep=0x224c wordp=0xe855 params=0 returns=2
// ================================================

void WE855() // WE855
{
  Push2Words("*SHIP");
  IsICON_dash_IADDR(); // ?ICON-IADDR
  Pop(); // DROP
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  _st_(); // <
}


// ================================================
// 0xe863: WORD 'WE865' codep=0x744d wordp=0xe865
// ================================================
IFieldType WE865 = {ASSIGN_CREWIDX, 0x11, 0x03};

// ================================================
// 0xe868: WORD 'WE86A' codep=0x744d wordp=0xe86a
// ================================================
IFieldType WE86A = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xe86d: WORD 'WE86F' codep=0x224c wordp=0xe86f params=0 returns=1
// ================================================

void WE86F() // WE86F
{
  WE0D8(); // WE0D8
  Push(Read16(regsp)); // DUP
  Push(0x0047);
  _st_(); // <
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(1);
    return;
  }
  Push(0x005f);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(2);
    return;
  }
  Push(3);
}


// ================================================
// 0xe899: WORD 'WE89B' codep=0x224c wordp=0xe89b params=0 returns=2
// ================================================

void WE89B() // WE89B
{
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WE865.offset); // WE865<IFIELD>
  Push(0);
  Push(6);
  RRND(); // RRND
  Push(Pop() * 3); //  3 *
  Push(Pop() + Pop()); // +
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8b3: WORD 'WE8B5' codep=0x744d wordp=0xe8b5
// ================================================
IFieldType WE8B5 = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xe8b8: WORD 'WE8BA' codep=0x73ea wordp=0xe8ba
// ================================================
LoadDataType WE8BA = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6489};

// ================================================
// 0xe8c0: WORD 'WE8C2' codep=0x224c wordp=0xe8c2
// ================================================

void WE8C2() // WE8C2
{
  WE0D8(); // WE0D8
  Push(Read16(pp_IsFLAT)); // ?FLAT @
  if (Pop() != 0)
  {
    Push(Pop() * 0x000a); //  0x000a *
  }
  Push(Read16(0x63ef+WE1BA.offset)&0xFF); // WE1BA<IFIELD> C@
  LoadData(WE140); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Pop() + Pop()); // +
  Push(Pop() >> 1); //  2/
  _st_(); // <
}


// ================================================
// 0xe8e2: WORD 'WE8E4' codep=0x224c wordp=0xe8e4
// ================================================

void WE8E4() // WE8E4
{
  Push(Read16(0x63ef+WE1BA.offset)&0xFF); // WE1BA<IFIELD> C@
  LoadData(HIT_dot_POINTS); // from 'CREATURE'
  Push((Read16(Pop())&0xFF) * 2); //  C@ 2*
  Push(Pop() + Pop()); // +
  Push(3);
  _slash_(); // /
}


// ================================================
// 0xe8f6: WORD 'WE8F8' codep=0x224c wordp=0xe8f8 params=0 returns=0
// ================================================

void WE8F8() // WE8F8
{
  Push(Read16(pp_COLOR)); // COLOR @
  Push(Read16(pp_WTOP)); // WTOP @
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WBOTTOM) - 1); // WBOTTOM @ 1-
  Push(Read16(pp_WRIGHT) + 1); // WRIGHT @ 1+
  GetColor(BLACK);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe918: WORD 'WE91A' codep=0x224c wordp=0xe91a params=0 returns=0
// ================================================

void WE91A() // WE91A
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
// 0xe944: WORD 'WE946' codep=0x224c wordp=0xe946
// ================================================

void WE946() // WE946
{
  WE0B6(); // WE0B6
  WE8F8(); // WE8F8
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WTOP) - 4); // WTOP @ 4 -
  POS_dot_(); // POS.
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  PRINT("THE ", 4); // (.")
  LoadData(RESEMBLES); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    LoadData(SHAPE); // from 'CREATURE'
    _1_dot_5_at_(); // 1.5@
  }
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+PHRASE_dash_MEM.offset); // PHRASE-MEM<IFIELD>
  Push(Read16(0x63ef+PHR_dash_CNT.offset)&0xFF); // PHR-CNT<IFIELD> C@
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  PRINT(" LIFEFORM ATTACKS ", 18); // (.")
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WTOP) - 0x000a); // WTOP @ 0x000a -
  POS_dot_(); // POS.
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WE8B5.offset); // WE8B5<IFIELD>
  _do__dot_(); // $.
}


// ================================================
// 0xe9b2: WORD 'WE9B4' codep=0x224c wordp=0xe9b4
// ================================================

void WE9B4() // WE9B4
{
  unsigned short int i, imax;
  Push(Read16(0x63ef+BEHAVE.offset)&0xFF | 1); // BEHAVE<IFIELD> C@ 1 OR
  Push(0x63ef+BEHAVE.offset); // BEHAVE<IFIELD>
  C_ex_(); // C!
  WE80B(); // WE80B
  WE86F(); // WE86F

  i = 1;
  imax = Pop();
  do // (DO)
  {
    CI(); // CI
    WE8C2(); // WE8C2
    WE8E4(); // WE8E4
    WE89B(); // WE89B
    WE946(); // WE946
    SWAP(); // SWAP
    if (Pop() != 0)
    {
      LoadData(WE8BA); // from 'CREWMEMBER'
      Push(Read16(Pop())&0xFF); //  C@
      _slash_(); // /
      Push(Read16(0x63ef+WE86A.offset)&0xFF); // WE86A<IFIELD> C@
      SWAP(); // SWAP
      _dash_(); // -
      Push(0);
      MAX(); // MAX
      Push(0x0064);
      MIN(); // MIN
      Push(0x63ef+WE86A.offset); // WE86A<IFIELD>
      C_ex_(); // C!
      Push(pp_IsHEAL); // ?HEAL
      ON_3(); // ON_3
    } else
    {
      Pop(); // DROP
      PRINT(", BUT MISSES", 12); // (.")
    }
    PRINT(".", 1); // (.")
    ICLOSE(); // ICLOSE
    _gt_C_plus_S(); // >C+S
    Push(0x01f4);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

  WE5B4(); // WE5B4
  Push(pp__i_DEATH); // 'DEATH
  GetEXECUTE(); // @EXECUTE
  Push(pp__i__dot_VITAL); // '.VITAL
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xea2b: WORD 'AGGR-MODIF' codep=0xb869 wordp=0xea3a
// ================================================

void AGGR_dash_MODIF() // AGGR-MODIF rule
{
  int b;

  b = 1;
  IsPLAYER_dash_FI(); // ?PLAYER-FI
  b = b && Pop();
  IsALIEN_dash_CLO(); // ?ALIEN-CLO
  b = b && Pop();
  IsALIEN_dash_SMA(); // ?ALIEN-SMA
  b = b && Pop();
  WE273(); // WE273
  b = b && !Pop();
  IsRANDOM_dash_SC(); // ?RANDOM-SC
  b = b && Pop();
  if (b)
  {
    REDUCE_dash_AGG(); // REDUCE-AGG
  }

  b = 1;
  IsALIEN_dash_HIT_dash_WITH_dash_LASER(); // ?ALIEN-HIT-WITH-LASER
  b = b && Pop();
  WE273(); // WE273
  b = b && Pop();
  WE2D5(); // WE2D5
  b = b && Pop();
  if (b)
  {
    INCREASES_dash_(); // INCREASES-
  }

  b = 1;
  IsALIEN_dash_HIT_dash_WITH_dash_STUNNER(); // ?ALIEN-HIT-WITH-STUNNER
  b = b && Pop();
  WE273(); // WE273
  b = b && Pop();
  WE2D5(); // WE2D5
  b = b && Pop();
  if (b)
  {
    INCREASES_dash_(); // INCREASES-
  }
}

// 0xea53: db 0xae 0x0b '  '
// 0xea5d: db 0x20 ' '

// ================================================
// 0xea72: WORD 'VS.PLAYER' codep=0xb869 wordp=0xea80
// ================================================

void VS_dot_PLAYER() // VS.PLAYER rule
{
  int b;

  b = 1;
  WE308(); // WE308
  b = b && Pop();
  WE388(); // WE388
  b = b && Pop();
  IsSTUNNED(); // ?STUNNED
  b = b && !Pop();
  IsNOTICE_dash_PL(); // ?NOTICE-PL
  b = b && Pop();
  WE548(); // WE548
  b = b && Pop();
  IsNEXT_dash_TO_dash_P(); // ?NEXT-TO-P
  b = b && !Pop();
  if (b)
  {
    WE68C(); // WE68C
  }

  b = 1;
  WE388(); // WE388
  b = b && Pop();
  IsSTUNNED(); // ?STUNNED
  b = b && !Pop();
  IsNOTICE_dash_PL(); // ?NOTICE-PL
  b = b && Pop();
  WE548(); // WE548
  b = b && Pop();
  IsNEXT_dash_TO_dash_P(); // ?NEXT-TO-P
  b = b && Pop();
  if (b)
  {
    WE9B4(); // WE9B4
  }

  b = 1;
  WE308(); // WE308
  b = b && Pop();
  IsNOTICE_dash_PL(); // ?NOTICE-PL
  b = b && Pop();
  WE388(); // WE388
  b = b && Pop();
  IsSTUNNED(); // ?STUNNED
  b = b && !Pop();
  WE556(); // WE556
  b = b && Pop();
  if (b)
  {
    WE6A4(); // WE6A4
  }
}


// ================================================
// 0xeab7: WORD 'LIFE-SIM' codep=0xb869 wordp=0xeac4
// ================================================

void LIFE_dash_SIM() // LIFE-SIM rule
{
  int b;

  b = 1;
  WE388(); // WE388
  b = b && Pop();
  IsSTUNNED(); // ?STUNNED
  b = b && !Pop();
  WE308(); // WE308
  b = b && Pop();
  if (b)
  {
    WE6D0(); // WE6D0
  }
}


// ================================================
// 0xead8: WORD 'ERASE-LIFE' codep=0xb869 wordp=0xeae7
// ================================================

void ERASE_dash_LIFE() // ERASE-LIFE rule
{
  int b;

  b = 1;
  WE41A(); // WE41A
  b = b && Pop();
  if (b)
  {
    ERASE_dash_LIFEFORM_dash_FROM_dash_ARRAY(); // ERASE-LIFEFORM-FROM-ARRAY
  }
}

// 0xeaec: db 0x5b 0xae '[ '
// 0xeaf0: db 0x0f 0xdd '  '
// 0xeaf3: db 0xae ' '

// ================================================
// 0xeaf8: WORD '?REDUCE-PO' codep=0xb869 wordp=0xeb07
// ================================================

void IsREDUCE_dash_PO() // ?REDUCE-PO rule
{
  int b;

  b = 1;
  IsALIEN_dash_HIT_dash_WITH_dash_LASER(); // ?ALIEN-HIT-WITH-LASER
  b = b && Pop();
  WE42E(); // WE42E
  b = b && Pop();
  if (b)
  {
    REDUCE_dash_HIT(); // REDUCE-HIT
  }

  b = 1;
  IsALIEN_dash_HIT_dash_WITH_dash_STUNNER(); // ?ALIEN-HIT-WITH-STUNNER
  b = b && Pop();
  WE438(); // WE438
  b = b && Pop();
  if (b)
  {
    REDUCE_dash_STU(); // REDUCE-STU
  }
}

// 0xeb0e: db 0x52 0x52 'RR'
// 0xeb18: db 0x31 0x38 '18'
// 0xeb1e: db 0x3b ';'

// ================================================
// 0xeb29: WORD 'WEB2B' codep=0x224c wordp=0xeb2b params=0 returns=0
// ================================================

void WEB2B() // WEB2B
{
  WE44E(); // WE44E
  if (Pop() == 0) return;
  STUN_dash_EFFEC(); // STUN-EFFEC
  Push(1);
  Push(0x63ef+STUNS.offset); // STUNS<IFIELD>
  C_ex_(); // C!
}


// ================================================
// 0xeb3b: WORD 'EFFECT-LIF' codep=0xb869 wordp=0xeb4a
// ================================================

void EFFECT_dash_LIF() // EFFECT-LIF rule
{
  int b;

  b = 1;
  WE488(); // WE488
  b = b && Pop();
  WE388(); // WE388
  b = b && Pop();
  if (b)
  {
    DIE(); // DIE
  }

  b = 1;
  WE438(); // WE438
  b = b && !Pop();
  IsSTUNNED(); // ?STUNNED
  b = b && !Pop();
  if (b)
  {
    WE7C0(); // WE7C0
  }
}


// ================================================
// 0xeb67: WORD 'WEB69' codep=0x224c wordp=0xeb69
// ================================================

void WEB69() // WEB69
{
  WE388(); // WE388
  IsSTUNS_st_STU(); // ?STUNS<STU
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  INCREMENT_dash_(); // INCREMENT-
}


// ================================================
// 0xeb77: WORD 'GROUND>AIR' codep=0xb869 wordp=0xeb86
// ================================================

void GROUND_gt_AIR() // GROUND>AIR rule
{
  int b;

  b = 1;
  WE492(); // WE492
  b = b && Pop();
  WE4A2(); // WE4A2
  b = b && Pop();
  WE4AC(); // WE4AC
  b = b && Pop();
  WE388(); // WE388
  b = b && Pop();
  IsSTUNNED(); // ?STUNNED
  b = b && !Pop();
  IsWANTS_dash_TO_dash_FLY(); // ?WANTS-TO-FLY
  b = b && Pop();
  if (b)
  {
    WE7EF(); // WE7EF
  }

  b = 1;
  WE492(); // WE492
  b = b && Pop();
  WE4A2(); // WE4A2
  b = b && Pop();
  WE4BC(); // WE4BC
  b = b && Pop();
  WE388(); // WE388
  b = b && Pop();
  IsSTUNNED(); // ?STUNNED
  b = b && !Pop();
  WE3BA(); // WE3BA
  b = b && Pop();
  if (b)
  {
    WE7FD(); // WE7FD
  }

  b = 1;
  WE492(); // WE492
  b = b && Pop();
  WE4A2(); // WE4A2
  b = b && Pop();
  WE4BC(); // WE4BC
  b = b && Pop();
  WE3BA(); // WE3BA
  b = b && !Pop();
  IsWANTS_dash_TO_dash_FLOAT(); // ?WANTS-TO-FLOAT
  b = b && Pop();
  WE388(); // WE388
  b = b && Pop();
  IsSTUNNED(); // ?STUNNED
  b = b && !Pop();
  if (b)
  {
    WE7FD(); // WE7FD
  }

  b = 1;
  WE388(); // WE388
  b = b && !Pop();
  WE4A2(); // WE4A2
  b = b && !Pop();
  WE516(); // WE516
  b = b && Pop();
  if (b)
  {
    WE80B(); // WE80B
  }

  b = 1;
  IsSTUNNED(); // ?STUNNED
  b = b && Pop();
  WE4A2(); // WE4A2
  b = b && !Pop();
  WE516(); // WE516
  b = b && Pop();
  if (b)
  {
    WE80B(); // WE80B
  }

  b = 1;
  WE4A2(); // WE4A2
  b = b && !Pop();
  WE508(); // WE508
  b = b && Pop();
  WE4F8(); // WE4F8
  b = b && Pop();
  WE516(); // WE516
  b = b && Pop();
  if (b)
  {
    WE80B(); // WE80B
  }

  b = 1;
  WE4A2(); // WE4A2
  b = b && !Pop();
  WE40E(); // WE40E
  b = b && Pop();
  WE516(); // WE516
  b = b && Pop();
  if (b)
  {
    WE80B(); // WE80B
  }
}

// 0xebb1: db 0xb6 0x4f ' O'
// 0xebc0: db 0x0f ' '

// ================================================
// 0xebf6: WORD 'WEBF8' codep=0x224c wordp=0xebf8
// ================================================

void WEBF8() // WEBF8
{
  Push(Read16(pp_WEAPON_dash_)); // WEAPON- @
  if (Pop() != 0)
  {
    Push(0xeb07); // '?REDUCE-PO'
    DISTRACT(); // DISTRACT
    IsREDUCE_dash_PO(); // ?REDUCE-PO rule
    Pop(); // DROP
  }
  Push(Read16(0x63ef+HITS.offset)&0xFF); // HITS<IFIELD> C@
  if (Pop() != 0)
  {
    Push(0xea3a); // 'AGGR-MODIF'
    DISTRACT(); // DISTRACT
    AGGR_dash_MODIF(); // AGGR-MODIF rule
    Pop(); // DROP
  }
  Push(0xea80); // 'VS.PLAYER'
  DISTRACT(); // DISTRACT
  VS_dot_PLAYER(); // VS.PLAYER rule
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(0xeac4); // 'LIFE-SIM'
    DISTRACT(); // DISTRACT
    LIFE_dash_SIM(); // LIFE-SIM rule
    Pop(); // DROP
  }
  WEB2B(); // WEB2B
  Push(0xeb4a); // 'EFFECT-LIF'
  DISTRACT(); // DISTRACT
  EFFECT_dash_LIF(); // EFFECT-LIF rule
  Pop(); // DROP
  WEB69(); // WEB69
  Push(0xeb86); // 'GROUND>AIR'
  DISTRACT(); // DISTRACT
  GROUND_gt_AIR(); // GROUND>AIR rule
  Pop(); // DROP
}


// ================================================
// 0xec4e: WORD 'SIMULATE' codep=0x224c wordp=0xec5b params=0 returns=1
// ================================================
// entry

void SIMULATE() // SIMULATE
{
  Push(Read16(pp_IsNEW)); // ?NEW @
  if (Pop() != 0)
  {
    WE84B(); // WE84B
    Push(pp_IsNEW); // ?NEW
    OFF_2(); // OFF_2
  }
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  Push(1);
  WE855(); // WE855
  Push(Pop() + Pop()); // +
  _gt_(); // >
  if (Pop() == 0) return;
  WE83B(); // WE83B
  GetID(); // @ID
  Push(0x0013);
  _st_(); // <
  if (Pop() != 0)
  {
    WEBF8(); // WEBF8
    Push(pp_WEAPON_dash_); // WEAPON-
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop())); //  @
    if (Pop() != 0)
    {
      Push(-1);
      SWAP(); // SWAP
      _st__plus__ex__gt_(); // <+!>
    } else
    {
      Pop(); // DROP
    }
  }
  ICLOSE(); // ICLOSE
  Push(Read16(pp__h_CRIT) + 1); // ^CRIT @ 1+
  Push(Read16(pp_ILOCAL) - 1); // ILOCAL @ 1-
  MOD(); // MOD
  Push(pp__h_CRIT); // ^CRIT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xecb5: WORD 'WECB7' codep=0x224c wordp=0xecb7 params=0 returns=0
// ================================================

void WECB7() // WECB7
{
  Push(Read16(pp_XORMODE)); // XORMODE @
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0x0074);
  Push(0x00b2);
  POS_dot_(); // POS.
  Push(0x000a);
  GetColor(BLACK);
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_STARDATE)); // STARDATE @
  Push(0x012c);
  _slash_MOD(); // /MOD
  Push(Pop() + 0x120c); //  0x120c +
  SWAP(); // SWAP
  Push(0x001e);
  _slash_MOD(); // /MOD
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  Push(Read16(regsp)); // DUP
  Push(0x000a);
  _st_(); // <
  if (Pop() != 0)
  {
    PRINT("0", 1); // (.")
  }
  Push(0);
  DrawR(); // .R
  PRINT("-", 1); // (.")
  Push(Read16(regsp)); // DUP
  Push(0x000a);
  _st_(); // <
  if (Pop() != 0)
  {
    PRINT("0", 1); // (.")
  }
  Push(0);
  DrawR(); // .R
  PRINT("-", 1); // (.")
  Push(0);
  DrawR(); // .R
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xed2d: WORD '%STORM' codep=0x1d29 wordp=0xed38
// ================================================
// 0xed38: db 0x00 0x00 0x14 0x00 0x28 0x00 0x3c 0x00 0x55 0x00 '    ( < U '

// ================================================
// 0xed42: WORD '?.STORM' codep=0x224c wordp=0xed4e params=0 returns=0
// ================================================

void Is_dot_STORM() // ?.STORM
{
  Push(Read16(pp__n_STORM)); // #STORM @
  Push(3);
  _gt_(); // >
  Push(Read16(pp_STORM)); // STORM @
  WE0E4(); // WE0E4
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0xcdd8); // '.STOR'
  MODULE(); // MODULE
}


// ================================================
// 0xed6a: WORD '?STORM' codep=0x224c wordp=0xed75 params=0 returns=0
// ================================================

void IsSTORM() // ?STORM
{
  Push(Read16(pp_ATMO)); // ATMO @
  if (Pop() != 0)
  {
    Push(Read16(pp_STORM)); // STORM @
    if (Pop() != 0)
    {
      Push(-1);
      Push(pp_STORM); // STORM
      _plus__ex__2(); // +!_2
      Is_dot_STORM(); // ?.STORM
    } else
    {
      Push(pp__ro_PLANET_rc_); // (PLANET)
      Get_gt_C_plus_S(); // @>C+S
      LoadData(ATMO_dot_ACTIV); // from 'PLANET'
      Push(Read16(Pop())); //  @
      Push(pp__pe_STORM); // %STORM
      OVER(); // OVER
      Push(Pop() + Pop()); // +
      Push(Pop() + Pop()); // +
      Push(Read16(Pop())); //  @
      Push(1);
      Push(0x0064);
      RRND(); // RRND
      _gt_(); // >
      if (Pop() != 0)
      {
        Push(Read16(pp__i_STORM)); // 'STORM @
        MODULE(); // MODULE
      } else
      {
        Push(1);
        Push(4);
        RRND(); // RRND
        Push(pp__n_STORM); // #STORM
        Store_3(); // !_3
        Push(0xcdd8); // '.STOR'
        MODULE(); // MODULE
        Push(1);
        LoadData(ATMO_dot_ACTIV); // from 'PLANET'
        Push(Read16(Pop())); //  @
        Push(5);
        SWAP(); // SWAP
        _dash_(); // -
        _3_star_(); // 3*
        RRND(); // RRND
        Push(0x000c);
        MIN(); // MIN
        Push(0);
        MAX(); // MAX
        Push(pp_STORM); // STORM
        Store_3(); // !_3
        Push(0x0064);
        Push(pp__pe_EFF); // %EFF
        _st__ex__gt_(); // <!>
      }
      ICLOSE(); // ICLOSE
    }
    WE91A(); // WE91A
    return;
  }
  Push(pp__n_STORM); // #STORM
  OFF(); // OFF
  Push(pp_STORM); // STORM
  OFF(); // OFF
  Push(0x0064);
  Push(pp__pe_EFF); // %EFF
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xee0b: WORD 'angle>text' codep=0x224c wordp=0xee0d params=2 returns=0
// ================================================

void angle_gt_text() // angle>text
{
  Push(0);
  Push(1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("NORTH", 5); // (.")
    return;
  }
  Push(1);
  Push(1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("NORTHEAST", 9); // (.")
    return;
  }
  Push(1);
  Push(0);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("EAST", 4); // (.")
    return;
  }
  Push(1);
  Push(-1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("SOUTHEAST", 9); // (.")
    return;
  }
  Push(0);
  Push(-1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("SOUTH", 5); // (.")
    return;
  }
  Push(-1);
  Push(-1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("SOUTHWEST", 9); // (.")
    return;
  }
  Push(-1);
  Push(0);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("WEST", 4); // (.")
    return;
  }
  Push(-1);
  Push(1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("NORTHWEST", 9); // (.")
    return;
  }
  Pop(); // DROP
  Pop(); // DROP
}


// ================================================
// 0xeef1: WORD 'WEEF3' codep=0x224c wordp=0xeef3
// ================================================

void WEEF3() // WEEF3
{
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  DrawBACKGROUND(); // .BACKGROUND
  DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
}


// ================================================
// 0xef07: WORD '?EMBARK' codep=0x224c wordp=0xef13 params=0 returns=1
// ================================================

void IsEMBARK() // ?EMBARK
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  WE100(); // WE100
  ICLOSE(); // ICLOSE
  WE0EC(); // WE0EC
  D_eq_(); // D=
}


// ================================================
// 0xef21: WORD 'WEF23' codep=0x224c wordp=0xef23 params=0 returns=2
// ================================================

void WEF23() // WEF23
{
  Push(0x1388);
  TONE(); // TONE
  BEEPON(); // BEEPON
  Push(0x003c);
  MS(); // MS
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xef35: WORD 'WEF37' codep=0x224c wordp=0xef37 params=0 returns=1
// ================================================

void WEF37() // WEF37
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  WE0EC(); // WE0EC
  Push(Pop() - Read16(0x63ef+INST_dash_Y.offset)); //  INST-Y<IFIELD> @ -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  ROT(); // ROT
  Push(Pop() - Read16(0x63ef+INST_dash_X.offset)); //  INST-X<IFIELD> @ -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xef5d: WORD 'FUNCTIONS' codep=0x1d29 wordp=0xef6b
// ================================================
// 0xef6b: db 0x06 0x0c 0x03 0x0c 0x13 0x0c 0x17 0x0c 0x13 0x0c 0x2b 0x0c 0x17 0x0c 0x43 0x0c 0x13 0x0c 0x57 0x0c 0x13 0x0c 0x6b 0x0c 0x1b 0x0c 0x87 0x0c 0x16 '          +   C   W   k      '

// ================================================
// 0xef88: WORD 'WEF8A' codep=0x224c wordp=0xef8a params=0 returns=0
// ================================================

void WEF8A() // WEF8A
{
  WE0B6(); // WE0B6
  Push(pp_FUNCTIONS); // FUNCTIONS
  SET_dash_CRS(); // SET-CRS
  Pop(); // DROP
}


// ================================================
// 0xef94: WORD 'WEF96' codep=0x224c wordp=0xef96 params=0 returns=0
// ================================================
// orphan

void WEF96() // WEF96
{
  CLICK(); // CLICK
  HEAVEHO(); // HEAVEHO
}


// ================================================
// 0xef9c: WORD 'WEF9E' codep=0x1d29 wordp=0xef9e
// ================================================
// 0xef9e: db 0x99 0xf3 '  '

// ================================================
// 0xefa0: WORD 'MAPS' codep=0x224c wordp=0xefa9 params=0 returns=0
// ================================================

void MAPS() // MAPS
{
  Push(0xcdc8); // 'MAPS'
  MODULE(); // MODULE
}


// ================================================
// 0xefb1: WORD 'WALK&TALK' codep=0x224c wordp=0xefbf params=0 returns=0
// ================================================

void WALK_and_TALK() // WALK&TALK
{
  Push(0xd05c); // '(TALK)'
  MODULE(); // MODULE
}


// ================================================
// 0xefc7: WORD 'TVMOVE' codep=0x224c wordp=0xefd2 params=0 returns=0
// ================================================

void TVMOVE() // TVMOVE
{
  Push(0xcf50); // 'TVMOVE'
  MODULE(); // MODULE
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_3(); // ON_3
}


// ================================================
// 0xefde: WORD 'DO.WEAPONS' codep=0x224c wordp=0xefed params=0 returns=0
// ================================================

void DO_dot_WEAPONS() // DO.WEAPONS
{
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
  if (Pop() == 0) return;
  Push(0xd04b); // '(WEAPONS)'
  MODULE(); // MODULE
}


// ================================================
// 0xf005: WORD '/ITEMS' codep=0x224c wordp=0xf010 params=0 returns=0
// ================================================

void _slash_ITEMS() // /ITEMS
{
  Push(0xcefe); // '/ITEMS'
  MODULE(); // MODULE
}


// ================================================
// 0xf018: WORD 'ICONS' codep=0x224c wordp=0xf022
// ================================================

void ICONS() // ICONS
{
  Push(0xcec0); // 'ICONS'
  MODULE(); // MODULE
  Push(0xd013); // '(TVSET)'
  MODULE(); // MODULE
  WECB7(); // WECB7
  Push(pp_WEF9E); // WEF9E
  GetEXECUTE(); // @EXECUTE
  Push(Read16(pp__i__dot_VITAL)); // '.VITAL @
  MODULE(); // MODULE
}


// ================================================
// 0xf03c: WORD '>BUTTONS' codep=0x4a4f wordp=0xf049
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
    WALK_and_TALK(); // WALK&TALK
    break;
  case 5:
    DO_dot_WEAPONS(); // DO.WEAPONS
    break;
  case 6:
    ICONS(); // ICONS
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf069: WORD 'WF06B' codep=0x224c wordp=0xf06b params=1 returns=0
// ================================================

void WF06B() // WF06B
{
  CLICK(); // CLICK
  Push(pp_NCRS); // NCRS
  _plus__ex__2(); // +!_2
  WEF8A(); // WEF8A
}


// ================================================
// 0xf075: WORD 'WF077' codep=0x224c wordp=0xf077
// ================================================

void WF077() // WF077
{
  _ro_XYSCAN_rc_(); // (XYSCAN) case
  Push(0);
  Push(1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(1);
    WF06B(); // WF06B
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
      WF06B(); // WF06B
    } else
    {
      Pop(); // DROP
      IsTRIG(); // ?TRIG
      if (Pop() != 0)
      {
        WEF23(); // WEF23
        Push(Read16(pp_NCRS)); // NCRS @
        _gt_BUTTONS(); // >BUTTONS case
        WEEF3(); // WEEF3
      }
      Pop(); // DROP
    }
  }
  IsEMBARK(); // ?EMBARK
  if (Pop() == 0) return;
  Push(Pop()==0?1:0); //  0=
  Push(-1);
  Push(Read16(regsp)); // DUP
  Push(pp_YVIS); // YVIS
  _st__plus__ex__gt_(); // <+!>
  Push(pp_YABS); // YABS
  _st__plus__ex__gt_(); // <+!>
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  OFF(); // OFF
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(-1);
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0df: WORD 'NAVIG' codep=0x744d wordp=0xf0e9
// ================================================
IFieldType NAVIG = {ASSIGN_CREWIDX, 0x17, 0x03};

// ================================================
// 0xf0ec: WORD '^NAV' codep=0x744d wordp=0xf0f5
// ================================================
IFieldType _h_NAV = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xf0f8: WORD '-STORM' codep=0x224c wordp=0xf103 params=0 returns=1
// ================================================

void _dash_STORM() // -STORM
{
  Push(Read16(pp__n_STORM)); // #STORM @
  Push(Read16(regsp)); // DUP
  Push(4);
  _st_(); // <
  SWAP(); // SWAP
  Push(0x000b);
  _gt_(); // >
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf119: WORD '?NAV' codep=0x224c wordp=0xf122 params=0 returns=1
// ================================================

void IsNAV() // ?NAV
{
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+NAVIG.offset); // NAVIG<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+_h_NAV.offset)&0xFF); // ^NAV<IFIELD> C@
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0x00c7);
  _gt_(); // >
}


// ================================================
// 0xf13a: WORD '.DISTANCE' codep=0x224c wordp=0xf148 params=0 returns=0
// ================================================

void DrawDISTANCE() // .DISTANCE
{
  Push(0x0074);
  Push(0x0096);
  POS_dot_(); // POS.
  Push(8);
  GetColor(BLACK);
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  _dash_STORM(); // -STORM
  IsNAV(); // ?NAV
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    WEF37(); // WEF37
    Push(5);
    DrawR(); // .R
    PRINT("KM.", 3); // (.")
  } else
  {
    PRINT("LOST!", 5); // (.")
  }
  Push(0x0074);
  Push(0x008f);
  POS_dot_(); // POS.
  Push(9);
  GetColor(BLACK);
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  _dash_STORM(); // -STORM
  IsNAV(); // ?NAV
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  WE0EC(); // WE0EC
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
  WE564(); // WE564
  _2SWAP(); // 2SWAP
  Pop(); Pop(); // 2DROP
  angle_gt_text(); // angle>text
}


// ================================================
// 0xf1b4: WORD '.CARGO' codep=0x224c wordp=0xf1bf params=0 returns=0
// ================================================

void DrawCARGO() // .CARGO
{
  Push(0x0074);
  Push(0x009d);
  POS_dot_(); // POS.
  Push(3);
  GetColor(BLACK);
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+WE1E6.offset)); // WE1E6<IFIELD> @
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(5);
    MAX(); // MAX
    Push(5);
    _slash_(); // /
  }
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(3);
  DrawR(); // .R
  PRINT("% FULL", 6); // (.")
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1fa: WORD 'WF1FC' codep=0x224c wordp=0xf1fc params=0 returns=1
// ================================================

void WF1FC() // WF1FC
{
  Push(Read16(pp_OLDHR) - Read16(pp_STAR_dash_HR)); // OLDHR @ STAR-HR @ -
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(Read16(pp_STAR_dash_HR)); // STAR-HR @
  Push(pp_OLDHR); // OLDHR
  Store_3(); // !_3
}


// ================================================
// 0xf216: WORD '.ENERGY' codep=0x224c wordp=0xf222 params=0 returns=0
// ================================================

void DrawENERGY() // .ENERGY
{
  Push(0x0074);
  Push(0x00ab);
  POS_dot_(); // POS.
  Push(7);
  GetColor(BLACK);
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Pop(); // DROP
    GetColor(YELLOW);
    StoreCOLOR(); // !COLOR
    PRINT("NONE", 4); // (.")
    return;
  }
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(Pop() - 0x07d0); //  0x07d0 -
  Push(0x0064);
  Push(0x782f);
  _star__slash_(); // */
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(Read16(pp_COLOR)); // COLOR @
    GetColor(PINK);
    StoreCOLOR(); // !COLOR
    PRINT("RESERVE", 7); // (.")
    StoreCOLOR(); // !COLOR
  } else
  {
    Push(3);
    DrawR(); // .R
    PRINT("%", 1); // (.")
  }
  Push(0x0074);
  Push(0x00a4);
  POS_dot_(); // POS.
  Push(3);
  GetColor(BLACK);
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  Push(Read16(pp__pe_EFF)); // %EFF @
  Push(0x0064);
  Push(-(Read16(pp_E_slash_M) * 4)); // E/M @ 4 * NEGATE
  _star__slash_(); // */
  Push(0x0063);
  MIN(); // MIN
  Push(3);
  DrawR(); // .R
  PRINT("%", 1); // (.")
}


// ================================================
// 0xf2cb: WORD 'WF2CD' codep=0x224c wordp=0xf2cd params=2 returns=2
// ================================================

void WF2CD() // WF2CD
{
  Push(Pop() - 0x01e0); //  0x01e0 -
  Push(0x000a);
  Push(0x0035);
  _star__slash_(); // */
  SWAP(); // SWAP
  Push(Pop() - 0x0480); //  0x0480 -
  Push(0x000a);
  Push(0x0040);
  _star__slash_(); // */
  SWAP(); // SWAP
}


// ================================================
// 0xf2f3: WORD 'WF2F5' codep=0x224c wordp=0xf2f5 params=1 returns=0
// ================================================

void WF2F5() // WF2F5
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      PRINT("W", 1); // (.")
    } else
    {
      PRINT("E", 1); // (.")
    }
    return;
  }
  PRINT(" ", 1); // (.")
}


// ================================================
// 0xf317: WORD 'WF319' codep=0x224c wordp=0xf319 params=1 returns=0
// ================================================

void WF319() // WF319
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      PRINT("S", 1); // (.")
    } else
    {
      PRINT("N", 1); // (.")
    }
    return;
  }
  PRINT(" ", 1); // (.")
}


// ================================================
// 0xf33b: WORD '.WHERE' codep=0x224c wordp=0xf346 params=0 returns=0
// ================================================

void DrawWHERE() // .WHERE
{
  _dash_STORM(); // -STORM
  IsNAV(); // ?NAV
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WE0EC(); // WE0EC
  WF2CD(); // WF2CD
  Push(0x0010);
  Push(0x00c5);
  POS_dot_(); // POS.
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); //  NEGATE
  }
  Push(4);
  DrawR(); // .R
  WF319(); // WF319
  PRINT(" * ", 3); // (.")
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); //  NEGATE
  }
  Push(0);
  DrawR(); // .R
  WF2F5(); // WF2F5
}


// ================================================
// 0xf38e: WORD '.STATS' codep=0x224c wordp=0xf399 params=0 returns=0
// ================================================

void DrawSTATS() // .STATS
{
  unsigned short int a;
  Push(Read16(pp_XORMODE)); // XORMODE @
  a = Pop(); // >R
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  DrawWHERE(); // .WHERE
  DrawENERGY(); // .ENERGY
  DrawCARGO(); // .CARGO
  DrawDISTANCE(); // .DISTANCE
  Push(a); // R>
  Push(pp_XORMODE); // XORMODE
  Store_3(); // !_3
}


// ================================================
// 0xf3b3: WORD 'WF3B5' codep=0x224c wordp=0xf3b5 params=0 returns=1
// ================================================

void WF3B5() // WF3B5
{
  WF1FC(); // WF1FC
  Push(Pop() | Read16(pp_FORCED)); //  FORCED @ OR
  Push(pp_FORCED); // FORCED
  OFF(); // OFF
}


// ================================================
// 0xf3c3: WORD 'TV-TASKS' codep=0x224c wordp=0xf3d0 params=0 returns=0
// ================================================
// entry

void TV_dash_TASKS() // TV-TASKS
{
  Push(0xf3b5); // 'WF3B5'
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  _st__ex__gt_(); // <!>
  Push(0xed75); // '?STORM'
  Push(pp__i_REPAIR); // 'REPAIR
  _st__ex__gt_(); // <!>
  Push(0xf399); // '.STATS'
  Push(pp__i__dot_VEHICLE_dash_STATUS); // '.VEHICLE-STATUS
  _st__ex__gt_(); // <!>
  Push(0xc04e); // 'OBIT'
  Push(pp__i_DEATH); // 'DEATH
  _st__ex__gt_(); // <!>
  Push(0xec5b); // 'SIMULATE'
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  _st__ex__gt_(); // <!>
  Push(0x3a6e); // 'UNRAVEL'
  Push(pp__i_ENDING); // 'ENDING
  _st__ex__gt_(); // <!>
  Push(0xc081); // '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  _st__ex__gt_(); // <!>
  Push2Words("0.");
  Push(pp_LASTAP); // LASTAP
  _st_D_ex__gt_(); // <D!>
  Push(0xc070); // '.VIT'
  Push(pp__i__dot_VITAL); // '.VITAL
  _st__ex__gt_(); // <!>
  Push(0xc05f); // 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  _st__ex__gt_(); // <!>
  Push(0xecb7); // 'WECB7'
  Push(pp__i__dot_DATE); // '.DATE
  _st__ex__gt_(); // <!>
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_2(); // ON_2
  Push(0xd06e); // 'HEAVEHO'
  Push(pp__i_THROW_dash_AWAY); // 'THROW-AWAY
  Store_3(); // !_3
}


// ================================================
// 0xf434: WORD 'WF436' codep=0x224c wordp=0xf436 params=0 returns=0
// ================================================

void WF436() // WF436
{
  Push(0xbf98); // '?VCYCLE'
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  _st__ex__gt_(); // <!>
  Push(0xc136); // 'MREPAIR'
  Push(pp__i_REPAIR); // 'REPAIR
  _st__ex__gt_(); // <!>
  Push(0xbf68); // '.SORD'
  Push(pp__i__dot_VEHICLE_dash_STATUS); // '.VEHICLE-STATUS
  _st__ex__gt_(); // <!>
  Push(0xc04e); // 'OBIT'
  Push(pp__i_DEATH); // 'DEATH
  _st__ex__gt_(); // <!>
  Push(0x3a48); // 'NOP'
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  _st__ex__gt_(); // <!>
  Push(0xc081); // '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  _st__ex__gt_(); // <!>
  Push(0x3a48); // 'NOP'
  Push(pp__i__dot_VITAL); // '.VITAL
  _st__ex__gt_(); // <!>
  Push(0xc05f); // 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  _st__ex__gt_(); // <!>
  Push(0xbf56); // '/STARDATE'
  Push(pp__i__dot_DATE); // '.DATE
  _st__ex__gt_(); // <!>
  Push(Read16(pp_IsCRITIC)); // ?CRITIC @
  if (Pop() != 0)
  {
    Push(0xd06e); // 'HEAVEHO'
  } else
  {
    Push(0x3a48); // 'NOP'
  }
  Push(pp__i_THROW_dash_AWAY); // 'THROW-AWAY
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf498: WORD 'WF49A' codep=0x224c wordp=0xf49a params=0 returns=0
// ================================================

void WF49A() // WF49A
{
  Push(0xd025); // '(CLEAN)'
  MODULE(); // MODULE
  WF436(); // WF436
}


// ================================================
// 0xf4a4: WORD 'WF4A6' codep=0x224c wordp=0xf4a6 params=0 returns=0
// ================================================

void WF4A6() // WF4A6
{
  Push(0xc03f); // '(ROL'
  MODULE(); // MODULE
}


// ================================================
// 0xf4ae: WORD 'WF4B0' codep=0x224c wordp=0xf4b0 params=0 returns=0
// ================================================

void WF4B0() // WF4B0
{
  Push(pp_WEAPON_dash_); // WEAPON-
  OFF(); // OFF
  Push(pp_STORM); // STORM
  OFF(); // OFF
  Push(0xd06e); // 'HEAVEHO'
  Push(pp__i_THROW_dash_AWAY); // 'THROW-AWAY
  Store_3(); // !_3
  Push(0xd001); // 'TV-DISP'
  MODULE(); // MODULE
  WECB7(); // WECB7
  WF4A6(); // WF4A6
  Push(0xcf71); // '!E/M'
  MODULE(); // MODULE
  DrawSTATS(); // .STATS
  DrawVIT(); // .VIT
  TV_dash_TASKS(); // TV-TASKS
  GetColor(BLACK);
  Push(pp_LCOLOR); // LCOLOR
  Store_3(); // !_3
}


// ================================================
// 0xf4de: WORD 'TV' codep=0x224c wordp=0xf4e5
// ================================================
// entry

void TV() // TV
{
  Push(0xf49a); // 'WF49A'
  Push(0xf077); // 'WF077'
  Push(0xf4b0); // 'WF4B0'
  DOTASKS(WF4B0, WF4B0, WF4B0);
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_3(); // ON_3
}

// 0xf4f9: db 0x42 0x45 0x48 0x41 0x56 0x49 0x4f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x52 0x41 0x47 0x45 0x20 0x46 0x4f 0x52 0x20 0x46 0x55 0x4e 0x43 0x54 0x49 0x4f 0x4e 0x31 0x32 0x32 0x33 0x32 0x39 0xb3 0xe0 0x90 0x16 0x49 0x54 0x45 0x4d 0x53 0x31 0x36 0x37 0x32 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'BEHAVIO______________________________________RAGE FOR FUNCTION122329    ITEMS1672______________________ '

