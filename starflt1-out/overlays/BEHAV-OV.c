// ====== OVERLAY 'BEHAV-OV' ======
// store offset = 0xe070
// overlay size   = 0x14f0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe0b6  codep:0x224c parp:0xe0b6 size:0x0016 C-string:'UNK_0xe0b6'
//      UNK_0xe0ce  codep:0x224c parp:0xe0ce size:0x0008 C-string:'UNK_0xe0ce'
//      UNK_0xe0d8  codep:0x224c parp:0xe0d8 size:0x000a C-string:'UNK_0xe0d8'
//      UNK_0xe0e4  codep:0x224c parp:0xe0e4 size:0x0006 C-string:'UNK_0xe0e4'
//      UNK_0xe0ec  codep:0x224c parp:0xe0ec size:0x0012 C-string:'UNK_0xe0ec'
//      UNK_0xe100  codep:0x224c parp:0xe100 size:0x000a C-string:'UNK_0xe100'
//      UNK_0xe10c  codep:0x224c parp:0xe10c size:0x0006 C-string:'UNK_0xe10c'
//      UNK_0xe114  codep:0x224c parp:0xe114 size:0x002a C-string:'UNK_0xe114'
//      UNK_0xe140  codep:0x73ea parp:0xe140 size:0x0006 C-string:'UNK_0xe140'
//      UNK_0xe148  codep:0x73ea parp:0xe148 size:0x0006 C-string:'UNK_0xe148'
//      UNK_0xe150  codep:0x73ea parp:0xe150 size:0x0006 C-string:'UNK_0xe150'
//      STUN.EFFEC  codep:0x73ea parp:0xe165 size:0x0006 C-string:'STUN_dot_EFFEC'
//      UNK_0xe16d  codep:0x73ea parp:0xe16d size:0x0006 C-string:'UNK_0xe16d'
//      UNK_0xe175  codep:0x73ea parp:0xe175 size:0x0006 C-string:'UNK_0xe175'
//            HITS  codep:0x744d parp:0xe184 size:0x0003 C-string:'HITS'
//           STUNS  codep:0x744d parp:0xe191 size:0x0003 C-string:'STUNS'
//      HIT.POINTS  codep:0x73ea parp:0xe1a3 size:0x0006 C-string:'HIT_dot_POINTS'
//      UNK_0xe1ab  codep:0x744d parp:0xe1ab size:0x0003 C-string:'UNK_0xe1ab'
//      UNK_0xe1b0  codep:0x744d parp:0xe1b0 size:0x0003 C-string:'UNK_0xe1b0'
//      UNK_0xe1b5  codep:0x744d parp:0xe1b5 size:0x0003 C-string:'UNK_0xe1b5'
//      UNK_0xe1ba  codep:0x744d parp:0xe1ba size:0x0003 C-string:'UNK_0xe1ba'
//          BEHAVE  codep:0x744d parp:0xe1c8 size:0x0003 C-string:'BEHAVE'
//      UNK_0xe1cd  codep:0x73ea parp:0xe1cd size:0x0006 C-string:'UNK_0xe1cd'
//       TV-WEAPON  codep:0x744d parp:0xe1e1 size:0x0003 C-string:'TV_dash_WEAPON'
//      UNK_0xe1e6  codep:0x744d parp:0xe1e6 size:0x0003 C-string:'UNK_0xe1e6'
//      ATMO.ACTIV  codep:0x73ea parp:0xe1f8 size:0x0006 C-string:'ATMO_dot_ACTIV'
//      ?PLAYER-FI  codep:0x224c parp:0xe20d size:0x0016 C-string:'IsPLAYER_dash_FI'
//      ?ALIEN-CLO  codep:0x224c parp:0xe232 size:0x0024 C-string:'IsALIEN_dash_CLO'
//      ?ALIEN-SMA  codep:0x224c parp:0xe265 size:0x000c C-string:'IsALIEN_dash_SMA'
//      UNK_0xe273  codep:0x224c parp:0xe273 size:0x000a C-string:'UNK_0xe273'
//      ?RANDOM-SC  codep:0x224c parp:0xe28c size:0x000a C-string:'IsRANDOM_dash_SC'
// ?ALIEN-HIT-WITH-LASER  codep:0x224c parp:0xe2a5 size:0x002e C-string:'IsALIEN_dash_HIT_dash_WITH_dash_LASER'
//      UNK_0xe2d5  codep:0x224c parp:0xe2d5 size:0x000a C-string:'UNK_0xe2d5'
// ?ALIEN-HIT-WITH-STUNNER  codep:0x224c parp:0xe2ee size:0x0018 C-string:'IsALIEN_dash_HIT_dash_WITH_dash_STUNNER'
//      UNK_0xe308  codep:0x224c parp:0xe308 size:0x0008 C-string:'UNK_0xe308'
//      ?NOTICE-PL  codep:0x224c parp:0xe31f size:0x003a C-string:'IsNOTICE_dash_PL'
//      ?NEXT-TO-P  codep:0x224c parp:0xe368 size:0x001e C-string:'IsNEXT_dash_TO_dash_P'
//      UNK_0xe388  codep:0x224c parp:0xe388 size:0x000e C-string:'UNK_0xe388'
//      UNK_0xe398  codep:0x224c parp:0xe398 size:0x000c C-string:'UNK_0xe398'
//      UNK_0xe3a6  codep:0x224c parp:0xe3a6 size:0x0012 C-string:'UNK_0xe3a6'
//      UNK_0xe3ba  codep:0x224c parp:0xe3ba size:0x0018 C-string:'UNK_0xe3ba'
//      UNK_0xe3d4  codep:0x224c parp:0xe3d4 size:0x0006 C-string:'UNK_0xe3d4'
//      UNK_0xe3dc  codep:0x224c parp:0xe3dc size:0x0012 C-string:'UNK_0xe3dc'
//      UNK_0xe3f0  codep:0x224c parp:0xe3f0 size:0x000c C-string:'UNK_0xe3f0'
//      UNK_0xe3fe  codep:0x224c parp:0xe3fe size:0x000e C-string:'UNK_0xe3fe'
//      UNK_0xe40e  codep:0x224c parp:0xe40e size:0x000a C-string:'UNK_0xe40e'
//      UNK_0xe41a  codep:0x224c parp:0xe41a size:0x0004 C-string:'UNK_0xe41a'
//      UNK_0xe420  codep:0x224c parp:0xe420 size:0x000c C-string:'UNK_0xe420'
//      UNK_0xe42e  codep:0x224c parp:0xe42e size:0x0008 C-string:'UNK_0xe42e'
//      UNK_0xe438  codep:0x224c parp:0xe438 size:0x0014 C-string:'UNK_0xe438'
//      UNK_0xe44e  codep:0x224c parp:0xe44e size:0x000c C-string:'UNK_0xe44e'
//      ?STUNS<STU  codep:0x224c parp:0xe469 size:0x000c C-string:'IsSTUNS_st_STU'
//        ?STUNNED  codep:0x224c parp:0xe482 size:0x0004 C-string:'IsSTUNNED'
//      UNK_0xe488  codep:0x224c parp:0xe488 size:0x0008 C-string:'UNK_0xe488'
//      UNK_0xe492  codep:0x224c parp:0xe492 size:0x000e C-string:'UNK_0xe492'
//      UNK_0xe4a2  codep:0x224c parp:0xe4a2 size:0x0008 C-string:'UNK_0xe4a2'
//      UNK_0xe4ac  codep:0x224c parp:0xe4ac size:0x000e C-string:'UNK_0xe4ac'
//      UNK_0xe4bc  codep:0x224c parp:0xe4bc size:0x000e C-string:'UNK_0xe4bc'
//   ?WANTS-TO-FLY  codep:0x224c parp:0xe4d9 size:0x000a C-string:'IsWANTS_dash_TO_dash_FLY'
// ?WANTS-TO-FLOAT  codep:0x224c parp:0xe4f2 size:0x0004 C-string:'IsWANTS_dash_TO_dash_FLOAT'
//      UNK_0xe4f8  codep:0x224c parp:0xe4f8 size:0x000e C-string:'UNK_0xe4f8'
//      UNK_0xe508  codep:0x224c parp:0xe508 size:0x000c C-string:'UNK_0xe508'
//      UNK_0xe516  codep:0x224c parp:0xe516 size:0x0022 C-string:'UNK_0xe516'
//      UNK_0xe53a  codep:0x224c parp:0xe53a size:0x000c C-string:'UNK_0xe53a'
//      UNK_0xe548  codep:0x224c parp:0xe548 size:0x000c C-string:'UNK_0xe548'
//      UNK_0xe556  codep:0x224c parp:0xe556 size:0x000c C-string:'UNK_0xe556'
//      UNK_0xe564  codep:0x224c parp:0xe564 size:0x003c C-string:'UNK_0xe564'
//      UNK_0xe5a2  codep:0x224c parp:0xe5a2 size:0x0010 C-string:'UNK_0xe5a2'
//      UNK_0xe5b4  codep:0x224c parp:0xe5b4 size:0x0012 C-string:'UNK_0xe5b4'
//      UNK_0xe5c8  codep:0x224c parp:0xe5c8 size:0x0032 C-string:'UNK_0xe5c8'
//      UNK_0xe5fc  codep:0x224c parp:0xe5fc size:0x000e C-string:'UNK_0xe5fc'
//      UNK_0xe60c  codep:0x224c parp:0xe60c size:0x0014 C-string:'UNK_0xe60c'
//      UNK_0xe622  codep:0x224c parp:0xe622 size:0x0018 C-string:'UNK_0xe622'
//      REDUCE-AGG  codep:0x224c parp:0xe649 size:0x0018 C-string:'REDUCE_dash_AGG'
//      INCREASES-  codep:0x224c parp:0xe670 size:0x001a C-string:'INCREASES_dash_'
//      UNK_0xe68c  codep:0x224c parp:0xe68c size:0x0016 C-string:'UNK_0xe68c'
//      UNK_0xe6a4  codep:0x224c parp:0xe6a4 size:0x000a C-string:'UNK_0xe6a4'
//      UNK_0xe6b0  codep:0x224c parp:0xe6b0 size:0x000a C-string:'UNK_0xe6b0'
//      UNK_0xe6bc  codep:0x224c parp:0xe6bc size:0x0012 C-string:'UNK_0xe6bc'
//      UNK_0xe6d0  codep:0x224c parp:0xe6d0 size:0x0048 C-string:'UNK_0xe6d0'
// ERASE-LIFEFORM-FROM-ARRAY  codep:0x224c parp:0xe727 size:0x0008 C-string:'ERASE_dash_LIFEFORM_dash_FROM_dash_ARRAY'
//      REDUCE-HIT  codep:0x224c parp:0xe73e size:0x001c C-string:'REDUCE_dash_HIT'
//      UNK_0xe75c  codep:0x224c parp:0xe75c size:0x000e C-string:'UNK_0xe75c'
//      REDUCE-STU  codep:0x224c parp:0xe779 size:0x0016 C-string:'REDUCE_dash_STU'
//      STUN-EFFEC  codep:0x224c parp:0xe79e size:0x0020 C-string:'STUN_dash_EFFEC'
//      UNK_0xe7c0  codep:0x224c parp:0xe7c0 size:0x0002 C-string:'UNK_0xe7c0'
//      INCREMENT-  codep:0x224c parp:0xe7d1 size:0x0014 C-string:'INCREMENT_dash_'
//      UNK_0xe7e7  codep:0x73ea parp:0xe7e7 size:0x0006 C-string:'UNK_0xe7e7'
//      UNK_0xe7ef  codep:0x224c parp:0xe7ef size:0x000c C-string:'UNK_0xe7ef'
//      UNK_0xe7fd  codep:0x224c parp:0xe7fd size:0x000c C-string:'UNK_0xe7fd'
//      UNK_0xe80b  codep:0x224c parp:0xe80b size:0x000c C-string:'UNK_0xe80b'
//             DIE  codep:0x224c parp:0xe81f size:0x001a C-string:'DIE'
//      UNK_0xe83b  codep:0x224c parp:0xe83b size:0x000e C-string:'UNK_0xe83b'
//      UNK_0xe84b  codep:0x224c parp:0xe84b size:0x0008 C-string:'UNK_0xe84b'
//      UNK_0xe855  codep:0x224c parp:0xe855 size:0x000e C-string:'UNK_0xe855'
//      UNK_0xe865  codep:0x744d parp:0xe865 size:0x0003 C-string:'UNK_0xe865'
//      UNK_0xe86a  codep:0x744d parp:0xe86a size:0x0003 C-string:'UNK_0xe86a'
//      UNK_0xe86f  codep:0x224c parp:0xe86f size:0x002a C-string:'UNK_0xe86f'
//      UNK_0xe89b  codep:0x224c parp:0xe89b size:0x0018 C-string:'UNK_0xe89b'
//      UNK_0xe8b5  codep:0x744d parp:0xe8b5 size:0x0003 C-string:'UNK_0xe8b5'
//      UNK_0xe8ba  codep:0x73ea parp:0xe8ba size:0x0006 C-string:'UNK_0xe8ba'
//      UNK_0xe8c2  codep:0x224c parp:0xe8c2 size:0x0020 C-string:'UNK_0xe8c2'
//      UNK_0xe8e4  codep:0x224c parp:0xe8e4 size:0x0012 C-string:'UNK_0xe8e4'
//      UNK_0xe8f8  codep:0x224c parp:0xe8f8 size:0x0020 C-string:'UNK_0xe8f8'
//      UNK_0xe91a  codep:0x224c parp:0xe91a size:0x002a C-string:'UNK_0xe91a'
//      UNK_0xe946  codep:0x224c parp:0xe946 size:0x006c C-string:'UNK_0xe946'
//      UNK_0xe9b4  codep:0x224c parp:0xe9b4 size:0x0077 C-string:'UNK_0xe9b4'
//      AGGR-MODIF  codep:0xb869 parp:0xea3a size:0x0038 C-string:'AGGR_dash_MODIF'
//       VS.PLAYER  codep:0xb869 parp:0xea80 size:0x0037 C-string:'VS_dot_PLAYER'
//        LIFE-SIM  codep:0xb869 parp:0xeac4 size:0x0014 C-string:'LIFE_dash_SIM'
//      ERASE-LIFE  codep:0xb869 parp:0xeae7 size:0x0011 C-string:'ERASE_dash_LIFE'
//      ?REDUCE-PO  codep:0xb869 parp:0xeb07 size:0x0022 C-string:'IsREDUCE_dash_PO'
//      UNK_0xeb2b  codep:0x224c parp:0xeb2b size:0x0010 C-string:'UNK_0xeb2b'
//      EFFECT-LIF  codep:0xb869 parp:0xeb4a size:0x001d C-string:'EFFECT_dash_LIF'
//      UNK_0xeb69  codep:0x224c parp:0xeb69 size:0x000e C-string:'UNK_0xeb69'
//      GROUND>AIR  codep:0xb869 parp:0xeb86 size:0x0070 C-string:'GROUND_gt_AIR'
//      UNK_0xebf8  codep:0x224c parp:0xebf8 size:0x0056 C-string:'UNK_0xebf8'
//        SIMULATE  codep:0x224c parp:0xec5b size:0x005a C-string:'SIMULATE'
//      UNK_0xecb7  codep:0x224c parp:0xecb7 size:0x0076 C-string:'UNK_0xecb7'
//          %STORM  codep:0x1d29 parp:0xed38 size:0x000a C-string:'_pe_STORM'
//         ?.STORM  codep:0x224c parp:0xed4e size:0x001c C-string:'Is_dot_STORM'
//          ?STORM  codep:0x224c parp:0xed75 size:0x0096 C-string:'IsSTORM'
//      angle>text  codep:0x224c parp:0xee0d size:0x00e4 C-string:'angle_gt_text'
//      UNK_0xeef3  codep:0x224c parp:0xeef3 size:0x0014 C-string:'UNK_0xeef3'
//         ?EMBARK  codep:0x224c parp:0xef13 size:0x000e C-string:'IsEMBARK'
//      UNK_0xef23  codep:0x224c parp:0xef23 size:0x0012 C-string:'UNK_0xef23'
//      UNK_0xef37  codep:0x224c parp:0xef37 size:0x0026 C-string:'UNK_0xef37'
//       FUNCTIONS  codep:0x1d29 parp:0xef6b size:0x001d C-string:'FUNCTIONS'
//      UNK_0xef8a  codep:0x224c parp:0xef8a size:0x000a C-string:'UNK_0xef8a'
//      UNK_0xef96  codep:0x224c parp:0xef96 size:0x0006 C-string:'UNK_0xef96'
//      UNK_0xef9e  codep:0x1d29 parp:0xef9e size:0x0002 C-string:'UNK_0xef9e'
//            MAPS  codep:0x224c parp:0xefa9 size:0x0008 C-string:'MAPS'
//       WALK&TALK  codep:0x224c parp:0xefbf size:0x0008 C-string:'WALK_and_TALK'
//          TVMOVE  codep:0x224c parp:0xefd2 size:0x000c C-string:'TVMOVE'
//      DO.WEAPONS  codep:0x224c parp:0xefed size:0x0018 C-string:'DO_dot_WEAPONS'
//          /ITEMS  codep:0x224c parp:0xf010 size:0x0008 C-string:'_slash_ITEMS'
//           ICONS  codep:0x224c parp:0xf022 size:0x001a C-string:'ICONS'
//        >BUTTONS  codep:0x4a4f parp:0xf049 size:0x0020 C-string:'_gt_BUTTONS'
//      UNK_0xf06b  codep:0x224c parp:0xf06b size:0x000a C-string:'UNK_0xf06b'
//      UNK_0xf077  codep:0x224c parp:0xf077 size:0x0068 C-string:'UNK_0xf077'
//           NAVIG  codep:0x744d parp:0xf0e9 size:0x0003 C-string:'NAVIG'
//            ^NAV  codep:0x744d parp:0xf0f5 size:0x0003 C-string:'_h_NAV'
//          -STORM  codep:0x224c parp:0xf103 size:0x0016 C-string:'_dash_STORM'
//            ?NAV  codep:0x224c parp:0xf122 size:0x0018 C-string:'IsNAV'
//       .DISTANCE  codep:0x224c parp:0xf148 size:0x006c C-string:'DrawDISTANCE'
//          .CARGO  codep:0x224c parp:0xf1bf size:0x003b C-string:'DrawCARGO'
//      UNK_0xf1fc  codep:0x224c parp:0xf1fc size:0x001a C-string:'UNK_0xf1fc'
//         .ENERGY  codep:0x224c parp:0xf222 size:0x00a9 C-string:'DrawENERGY'
//      UNK_0xf2cd  codep:0x224c parp:0xf2cd size:0x0026 C-string:'UNK_0xf2cd'
//      UNK_0xf2f5  codep:0x224c parp:0xf2f5 size:0x0022 C-string:'UNK_0xf2f5'
//      UNK_0xf319  codep:0x224c parp:0xf319 size:0x0022 C-string:'UNK_0xf319'
//          .WHERE  codep:0x224c parp:0xf346 size:0x0048 C-string:'DrawWHERE'
//          .STATS  codep:0x224c parp:0xf399 size:0x001a C-string:'DrawSTATS'
//      UNK_0xf3b5  codep:0x224c parp:0xf3b5 size:0x000e C-string:'UNK_0xf3b5'
//        TV-TASKS  codep:0x224c parp:0xf3d0 size:0x0064 C-string:'TV_dash_TASKS'
//      UNK_0xf436  codep:0x224c parp:0xf436 size:0x0062 C-string:'UNK_0xf436'
//      UNK_0xf49a  codep:0x224c parp:0xf49a size:0x000a C-string:'UNK_0xf49a'
//      UNK_0xf4a6  codep:0x224c parp:0xf4a6 size:0x0008 C-string:'UNK_0xf4a6'
//      UNK_0xf4b0  codep:0x224c parp:0xf4b0 size:0x002e C-string:'UNK_0xf4b0'
//              TV  codep:0x224c parp:0xf4e5 size:0x0000 C-string:'TV'

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
extern const unsigned short int pp__i_THROW_dash_; // 'THROW-
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
extern const unsigned short int pp_ANCHOR_dash_CONTOUR; // ANCHOR-CONTOUR
extern const unsigned short int pp_TVEHICLE; // TVEHICLE
extern const unsigned short int pp_TV_dash_HOLD; // TV-HOLD
extern const unsigned short int pp__ro_PLANET; // (PLANET
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
void _2_ex_(); // 2!
void ON_3(); // ON_3
void OFF(); // OFF
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
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
void DrawBACKGR(); // .BACKGR
void POINT_gt_ICON(); // POINT>ICON
void DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
void IsICON_eq_I(); // ?ICON=I
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
void _ro_XYSCAN(); // (XYSCAN


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp__pe_STORM = 0xed38; // %STORM size: 10
// {0x00, 0x00, 0x14, 0x00, 0x28, 0x00, 0x3c, 0x00, 0x55, 0x00}

const unsigned short int pp_FUNCTIONS = 0xef6b; // FUNCTIONS size: 29
// {0x06, 0x0c, 0x03, 0x0c, 0x13, 0x0c, 0x17, 0x0c, 0x13, 0x0c, 0x2b, 0x0c, 0x17, 0x0c, 0x43, 0x0c, 0x13, 0x0c, 0x57, 0x0c, 0x13, 0x0c, 0x6b, 0x0c, 0x1b, 0x0c, 0x87, 0x0c, 0x16}

const unsigned short int pp_UNK_0xef9e = 0xef9e; // UNK_0xef9e size: 2
// {0x99, 0xf3}




// 0xe082: db 0x49 0x01 0x4c 0x22 0xf0 0x0d 0x3e 0x13 0xfa 0x15 0x04 0x00 0xf0 0x0d 0x90 0x16 0x4c 0x22 0xf0 0x0d 0x12 0x7e 0x90 0x16 0x4c 0x22 0xed 0x22 0x73 0x3b 0x8c 0x21 0x92 0x6d 0x90 0x16 0x4c 0x22 0xd0 0x61 0x95 0x49 0xf2 0x79 0x12 0x7a 0xb5 0x7a 0x90 0x16 'I L"  >         L"   ~  L" "s; ! m  L" a I y z z  '

// ================================================
// 0xe0b4: WORD 'UNK_0xe0b6' codep=0x224c parp=0xe0b6 params=0 returns=0
// ================================================

void UNK_0xe0b6() // UNK_0xe0b6
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
// 0xe0cc: WORD 'UNK_0xe0ce' codep=0x224c parp=0xe0ce orphan params=0 returns=1
// ================================================

void UNK_0xe0ce() // UNK_0xe0ce
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xe0d6: WORD 'UNK_0xe0d8' codep=0x224c parp=0xe0d8 params=0 returns=1
// ================================================

void UNK_0xe0d8() // UNK_0xe0d8
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xe0e2: WORD 'UNK_0xe0e4' codep=0x224c parp=0xe0e4 params=1 returns=1
// ================================================

void UNK_0xe0e4() // UNK_0xe0e4
{
  Push((Pop()==0?1:0)==0?1:0); //  0= 0=
}


// ================================================
// 0xe0ea: WORD 'UNK_0xe0ec' codep=0x224c parp=0xe0ec params=0 returns=2
// ================================================

void UNK_0xe0ec() // UNK_0xe0ec
{
  Push(pp_TVEHICLE); // TVEHICLE
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe0fe: WORD 'UNK_0xe100' codep=0x224c parp=0xe100 params=0 returns=2
// ================================================

void UNK_0xe100() // UNK_0xe100
{
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xe10a: WORD 'UNK_0xe10c' codep=0x224c parp=0xe10c
// ================================================

void UNK_0xe10c() // UNK_0xe10c
{
  GetIX(); // @IX
  GetIY(); // @IY
}


// ================================================
// 0xe112: WORD 'UNK_0xe114' codep=0x224c parp=0xe114
// ================================================

void UNK_0xe114() // UNK_0xe114
{
  Push(0x6ac1); // probable 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  Push(Read16(0x63ef+INST_dash_X.offset) - (Read16(pp_XCON) + 1)); // INST-X<IFIELD> @ XCON @ 1+ -
  Push((Read16(0x63ef+INST_dash_Y.offset) - Read16(pp_YCON)) + 1); // INST-Y<IFIELD> @ YCON @ - 1+
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(0x0020);
  _st_(); // <
}


// ================================================
// 0xe13e: WORD 'UNK_0xe140' codep=0x73ea parp=0xe140
// ================================================
LoadDataType UNK_0xe140 = {CREATUREIDX, 0x36, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe146: WORD 'UNK_0xe148' codep=0x73ea parp=0xe148
// ================================================
LoadDataType UNK_0xe148 = {CREATUREIDX, 0x37, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe14e: WORD 'UNK_0xe150' codep=0x73ea parp=0xe150
// ================================================
LoadDataType UNK_0xe150 = {CREATUREIDX, 0x30, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe156: WORD 'STUN.EFFEC' codep=0x73ea parp=0xe165
// ================================================
LoadDataType STUN_dot_EFFEC = {CREATUREIDX, 0x33, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe16b: WORD 'UNK_0xe16d' codep=0x73ea parp=0xe16d
// ================================================
LoadDataType UNK_0xe16d = {CREATUREIDX, 0x0c, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe173: WORD 'UNK_0xe175' codep=0x73ea parp=0xe175
// ================================================
LoadDataType UNK_0xe175 = {CREATUREIDX, 0x29, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe17b: WORD 'HITS' codep=0x744d parp=0xe184
// ================================================
IFieldType HITS = {CREATUREIDX, 0x11, 0x01};

// ================================================
// 0xe187: WORD 'STUNS' codep=0x744d parp=0xe191
// ================================================
IFieldType STUNS = {CREATUREIDX, 0x12, 0x01};

// ================================================
// 0xe194: WORD 'HIT.POINTS' codep=0x73ea parp=0xe1a3
// ================================================
LoadDataType HIT_dot_POINTS = {CREATUREIDX, 0x34, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe1a9: WORD 'UNK_0xe1ab' codep=0x744d parp=0xe1ab orphan
// ================================================
IFieldType UNK_0xe1ab = {CREATUREIDX, 0x18, 0x03};

// ================================================
// 0xe1ae: WORD 'UNK_0xe1b0' codep=0x744d parp=0xe1b0 orphan
// ================================================
IFieldType UNK_0xe1b0 = {CREATUREIDX, 0x17, 0x01};

// ================================================
// 0xe1b3: WORD 'UNK_0xe1b5' codep=0x744d parp=0xe1b5
// ================================================
IFieldType UNK_0xe1b5 = {CREATUREIDX, 0x15, 0x01};

// ================================================
// 0xe1b8: WORD 'UNK_0xe1ba' codep=0x744d parp=0xe1ba
// ================================================
IFieldType UNK_0xe1ba = {CREATUREIDX, 0x13, 0x01};

// ================================================
// 0xe1bd: WORD 'BEHAVE' codep=0x744d parp=0xe1c8
// ================================================
IFieldType BEHAVE = {CREATUREIDX, 0x1b, 0x01};

// ================================================
// 0xe1cb: WORD 'UNK_0xe1cd' codep=0x73ea parp=0xe1cd orphan
// ================================================
LoadDataType UNK_0xe1cd = {CREATUREIDX, 0x0b, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe1d3: WORD 'TV-WEAPON' codep=0x744d parp=0xe1e1
// ================================================
IFieldType TV_dash_WEAPON = {TVEHICLEIDX, 0x11, 0x01};

// ================================================
// 0xe1e4: WORD 'UNK_0xe1e6' codep=0x744d parp=0xe1e6
// ================================================
IFieldType UNK_0xe1e6 = {BOXIDX, 0x11, 0x02};

// ================================================
// 0xe1e9: WORD 'ATMO.ACTIV' codep=0x73ea parp=0xe1f8
// ================================================
LoadDataType ATMO_dot_ACTIV = {PLANETIDX, 0x11, 0x01, 0x16, 0x658f};

// ================================================
// 0xe1fe: WORD '?PLAYER-FI' codep=0x224c parp=0xe20d params=0 returns=1
// ================================================

void IsPLAYER_dash_FI() // ?PLAYER-FI
{
  Push(Read16(pp_WEAPON_dash_)); // WEAPON- @
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+TV_dash_WEAPON.offset)&0xFF); // TV-WEAPON<IFIELD> C@
  Push((Read16(0x63ef+TV_dash_WEAPON.offset)&0xFF)==1?1:0); // TV-WEAPON<IFIELD> C@ 1 =
  ICLOSE(); // ICLOSE
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe223: WORD '?ALIEN-CLO' codep=0x224c parp=0xe232
// ================================================

void IsALIEN_dash_CLO() // ?ALIEN-CLO
{
  unsigned short int a;
  UNK_0xe10c(); // UNK_0xe10c
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
// 0xe256: WORD '?ALIEN-SMA' codep=0x224c parp=0xe265
// ================================================

void IsALIEN_dash_SMA() // ?ALIEN-SMA
{
  LoadData(UNK_0xe140); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x0045);
  _gt_(); // >
}


// ================================================
// 0xe271: WORD 'UNK_0xe273' codep=0x224c parp=0xe273 params=0 returns=1
// ================================================

void UNK_0xe273() // UNK_0xe273
{
  Push(0x63ef+UNK_0xe1ba.offset); // UNK_0xe1ba<IFIELD>
  Push(0x004f);
  _gt_(); // >
}


// ================================================
// 0xe27d: WORD '?RANDOM-SC' codep=0x224c parp=0xe28c params=0 returns=1
// ================================================

void IsRANDOM_dash_SC() // ?RANDOM-SC
{
  UNK_0xe0d8(); // UNK_0xe0d8
  Push(0x000a);
  _st_(); // <
}


// ================================================
// 0xe296: WORD '?ALIEN-HIT-WITH-LASER' codep=0x224c parp=0xe2a5
// ================================================

void IsALIEN_dash_HIT_dash_WITH_dash_LASER() // ?ALIEN-HIT-WITH-LASER
{
  UNK_0xe10c(); // UNK_0xe10c
  Push(pp_WEAPXY); // WEAPXY
  _2_at_(); // 2@
  D_eq_(); // D=
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+TV_dash_WEAPON.offset)&0xFF); // TV-WEAPON<IFIELD> C@
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
// 0xe2d3: WORD 'UNK_0xe2d5' codep=0x224c parp=0xe2d5 params=0 returns=1
// ================================================

void UNK_0xe2d5() // UNK_0xe2d5
{
  UNK_0xe0d8(); // UNK_0xe0d8
  Push(0x000a);
  _st_(); // <
}


// ================================================
// 0xe2df: WORD '?ALIEN-HIT-WITH-STUNNER' codep=0x224c parp=0xe2ee
// ================================================

void IsALIEN_dash_HIT_dash_WITH_dash_STUNNER() // ?ALIEN-HIT-WITH-STUNNER
{
  UNK_0xe10c(); // UNK_0xe10c
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
// 0xe306: WORD 'UNK_0xe308' codep=0x224c parp=0xe308
// ================================================

void UNK_0xe308() // UNK_0xe308
{
  LoadData(UNK_0xe150); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  UNK_0xe0e4(); // UNK_0xe0e4
}


// ================================================
// 0xe310: WORD '?NOTICE-PL' codep=0x224c parp=0xe31f params=0 returns=1
// ================================================

void IsNOTICE_dash_PL() // ?NOTICE-PL
{
  Push(((Read16(0x63ef+BEHAVE.offset)&0xFF) & 0x0040)==0?1:0); // BEHAVE<IFIELD> C@ 0x0040 AND 0=
  if (Pop() != 0)
  {
    UNK_0xe0d8(); // UNK_0xe0d8
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
// 0xe359: WORD '?NEXT-TO-P' codep=0x224c parp=0xe368
// ================================================

void IsNEXT_dash_TO_dash_P() // ?NEXT-TO-P
{
  unsigned short int a;
  UNK_0xe0ec(); // UNK_0xe0ec
  UNK_0xe10c(); // UNK_0xe10c
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
// 0xe386: WORD 'UNK_0xe388' codep=0x224c parp=0xe388 params=0 returns=1
// ================================================

void UNK_0xe388() // UNK_0xe388
{
  Push(Read16(0x63ef+HITS.offset)&0xFF | Read16(0x63ef+STUNS.offset)&0xFF); // HITS<IFIELD> C@ STUNS<IFIELD> C@ OR
  UNK_0xe0e4(); // UNK_0xe0e4
}


// ================================================
// 0xe396: WORD 'UNK_0xe398' codep=0x224c parp=0xe398
// ================================================

void UNK_0xe398() // UNK_0xe398
{
  LoadData(UNK_0xe16d); // from 'CREATURE'
  Push((Read16(Pop())&0xFF) & 8); //  C@ 8 AND
  UNK_0xe0e4(); // UNK_0xe0e4
}


// ================================================
// 0xe3a4: WORD 'UNK_0xe3a6' codep=0x224c parp=0xe3a6
// ================================================

void UNK_0xe3a6() // UNK_0xe3a6
{
  LoadData(UNK_0xe16d); // from 'CREATURE'
  Push((Read16(Pop())&0xFF) & 4); //  C@ 4 AND
  UNK_0xe0e4(); // UNK_0xe0e4
  UNK_0xe398(); // UNK_0xe398
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe3b8: WORD 'UNK_0xe3ba' codep=0x224c parp=0xe3ba
// ================================================

void UNK_0xe3ba() // UNK_0xe3ba
{
  LoadData(UNK_0xe16d); // from 'CREATURE'
  Push((Read16(Pop())&0xFF) & 2); //  C@ 2 AND
  UNK_0xe0e4(); // UNK_0xe0e4
  UNK_0xe3a6(); // UNK_0xe3a6
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  UNK_0xe398(); // UNK_0xe398
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe3d2: WORD 'UNK_0xe3d4' codep=0x224c parp=0xe3d4 orphan params=0 returns=0
// ================================================

void UNK_0xe3d4() // UNK_0xe3d4
{
  Push(0x63ef+UNK_0xe1ab.offset); // UNK_0xe1ab<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe3da: WORD 'UNK_0xe3dc' codep=0x224c parp=0xe3dc orphan
// ================================================

void UNK_0xe3dc() // UNK_0xe3dc
{
  LoadData(UNK_0xe1cd); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  UNK_0xe3d4(); // UNK_0xe3d4
  LoadData(UNK_0xe1cd); // from 'CREATURE'
  ICLOSE(); // ICLOSE
  _dash_(); // -
  Push(1);
  _gt_(); // >
}


// ================================================
// 0xe3ee: WORD 'UNK_0xe3f0' codep=0x224c parp=0xe3f0 orphan params=0 returns=1
// ================================================

void UNK_0xe3f0() // UNK_0xe3f0
{
  Push(Read16(0x63ef+UNK_0xe1ba.offset)&0xFF); // UNK_0xe1ba<IFIELD> C@
  Push(0x0027);
  _gt_(); // >
}


// ================================================
// 0xe3fc: WORD 'UNK_0xe3fe' codep=0x224c parp=0xe3fe orphan params=0 returns=1
// ================================================

void UNK_0xe3fe() // UNK_0xe3fe
{
  Push((Read16(0x63ef+BEHAVE.offset)&0xFF) & 0x0080); // BEHAVE<IFIELD> C@ 0x0080 AND
  UNK_0xe0e4(); // UNK_0xe0e4
}


// ================================================
// 0xe40c: WORD 'UNK_0xe40e' codep=0x224c parp=0xe40e params=0 returns=1
// ================================================

void UNK_0xe40e() // UNK_0xe40e
{
  Push((Read16(0x63ef+BEHAVE.offset)&0xFF) & 1); // BEHAVE<IFIELD> C@ 1 AND
}


// ================================================
// 0xe418: WORD 'UNK_0xe41a' codep=0x224c parp=0xe41a params=0 returns=1
// ================================================

void UNK_0xe41a() // UNK_0xe41a
{
  Push(Read16(cc_FALSE)); // FALSE
}


// ================================================
// 0xe41e: WORD 'UNK_0xe420' codep=0x224c parp=0xe420 orphan params=0 returns=1
// ================================================

void UNK_0xe420() // UNK_0xe420
{
  Push((Read16(0x63ef+BEHAVE.offset)&0xFF) & 8); // BEHAVE<IFIELD> C@ 8 AND
  UNK_0xe0e4(); // UNK_0xe0e4
}


// ================================================
// 0xe42c: WORD 'UNK_0xe42e' codep=0x224c parp=0xe42e params=0 returns=1
// ================================================

void UNK_0xe42e() // UNK_0xe42e
{
  Push(Read16(0x63ef+HITS.offset)&0xFF); // HITS<IFIELD> C@
  _0_gt_(); // 0>
}


// ================================================
// 0xe436: WORD 'UNK_0xe438' codep=0x224c parp=0xe438 params=0 returns=1
// ================================================

void UNK_0xe438() // UNK_0xe438
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
// 0xe44c: WORD 'UNK_0xe44e' codep=0x224c parp=0xe44e params=0 returns=1
// ================================================

void UNK_0xe44e() // UNK_0xe44e
{
  Push(Read16(0x63ef+STUNS.offset)&0xFF); // STUNS<IFIELD> C@
  Push(0x0080);
  _gt_(); // >
}


// ================================================
// 0xe45a: WORD '?STUNS<STU' codep=0x224c parp=0xe469
// ================================================

void IsSTUNS_st_STU() // ?STUNS<STU
{
  Push(Read16(0x63ef+STUNS.offset)&0xFF); // STUNS<IFIELD> C@
  LoadData(STUN_dot_EFFEC); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  _st_(); // <
}


// ================================================
// 0xe475: WORD '?STUNNED' codep=0x224c parp=0xe482
// ================================================

void IsSTUNNED() // ?STUNNED
{
  IsSTUNS_st_STU(); // ?STUNS<STU
}


// ================================================
// 0xe486: WORD 'UNK_0xe488' codep=0x224c parp=0xe488 params=0 returns=1
// ================================================

void UNK_0xe488() // UNK_0xe488
{
  Push((Read16(0x63ef+HITS.offset)&0xFF)==0?1:0); // HITS<IFIELD> C@ 0=
}


// ================================================
// 0xe490: WORD 'UNK_0xe492' codep=0x224c parp=0xe492 params=0 returns=1
// ================================================

void UNK_0xe492() // UNK_0xe492
{
  Push((Read16(0x63ef+BEHAVE.offset)&0xFF) & 0x0010); // BEHAVE<IFIELD> C@ 0x0010 AND
  UNK_0xe0e4(); // UNK_0xe0e4
}


// ================================================
// 0xe4a0: WORD 'UNK_0xe4a2' codep=0x224c parp=0xe4a2 params=0 returns=1
// ================================================

void UNK_0xe4a2() // UNK_0xe4a2
{
  Push((Read16(0x63ef+UNK_0xe1b5.offset)&0xFF)==0?1:0); // UNK_0xe1b5<IFIELD> C@ 0=
}


// ================================================
// 0xe4aa: WORD 'UNK_0xe4ac' codep=0x224c parp=0xe4ac
// ================================================

void UNK_0xe4ac() // UNK_0xe4ac
{
  LoadData(UNK_0xe175); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  Push(0xe1e8); Push(0x0001);
  D_eq_(); // D=
}


// ================================================
// 0xe4ba: WORD 'UNK_0xe4bc' codep=0x224c parp=0xe4bc
// ================================================

void UNK_0xe4bc() // UNK_0xe4bc
{
  LoadData(UNK_0xe175); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  Push(0xe1fb); Push(0x0001);
  D_eq_(); // D=
}


// ================================================
// 0xe4ca: WORD '?WANTS-TO-FLY' codep=0x224c parp=0xe4d9 params=0 returns=1
// ================================================

void IsWANTS_dash_TO_dash_FLY() // ?WANTS-TO-FLY
{
  UNK_0xe0d8(); // UNK_0xe0d8
  Push(0x0046);
  _st_(); // <
}


// ================================================
// 0xe4e3: WORD '?WANTS-TO-FLOAT' codep=0x224c parp=0xe4f2 params=0 returns=1
// ================================================

void IsWANTS_dash_TO_dash_FLOAT() // ?WANTS-TO-FLOAT
{
  IsWANTS_dash_TO_dash_FLY(); // ?WANTS-TO-FLY
}


// ================================================
// 0xe4f6: WORD 'UNK_0xe4f8' codep=0x224c parp=0xe4f8 params=0 returns=1
// ================================================

void UNK_0xe4f8() // UNK_0xe4f8
{
  UNK_0xe0d8(); // UNK_0xe0d8
  Push(0x001e);
  _st_(); // <
  UNK_0xe40e(); // UNK_0xe40e
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe506: WORD 'UNK_0xe508' codep=0x224c parp=0xe508 params=0 returns=1
// ================================================

void UNK_0xe508() // UNK_0xe508
{
  Push((Read16(0x63ef+BEHAVE.offset)&0xFF) & 2); // BEHAVE<IFIELD> C@ 2 AND
  UNK_0xe0e4(); // UNK_0xe0e4
}


// ================================================
// 0xe514: WORD 'UNK_0xe516' codep=0x224c parp=0xe516
// ================================================

void UNK_0xe516() // UNK_0xe516
{
  Push(0x6ac1); // probable 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  UNK_0xe100(); // UNK_0xe100
  Push(Pop() - Read16(pp_XCON)); //  XCON @ -
  SWAP(); // SWAP
  Push(Pop() - Read16(pp_YCON)); //  YCON @ -
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(0x0010);
  _gt_(); // >
}


// ================================================
// 0xe538: WORD 'UNK_0xe53a' codep=0x224c parp=0xe53a orphan
// ================================================

void UNK_0xe53a() // UNK_0xe53a
{
  LoadData(UNK_0xe140); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x0023);
  _st_(); // <
}


// ================================================
// 0xe546: WORD 'UNK_0xe548' codep=0x224c parp=0xe548 params=0 returns=1
// ================================================

void UNK_0xe548() // UNK_0xe548
{
  Push(Read16(0x63ef+UNK_0xe1ba.offset)&0xFF); // UNK_0xe1ba<IFIELD> C@
  Push(0x0041);
  _gt_(); // >
}


// ================================================
// 0xe554: WORD 'UNK_0xe556' codep=0x224c parp=0xe556 params=0 returns=1
// ================================================

void UNK_0xe556() // UNK_0xe556
{
  Push(Read16(0x63ef+UNK_0xe1ba.offset)&0xFF); // UNK_0xe1ba<IFIELD> C@
  Push(0x0032);
  _st_(); // <
}


// ================================================
// 0xe562: WORD 'UNK_0xe564' codep=0x224c parp=0xe564 params=2 returns=2
// ================================================

void UNK_0xe564() // UNK_0xe564
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
// 0xe5a0: WORD 'UNK_0xe5a2' codep=0x224c parp=0xe5a2 params=0 returns=0
// ================================================

void UNK_0xe5a2() // UNK_0xe5a2
{
  Push(Read16(0x63ef+BEHAVE.offset)&0xFF | 0x0010); // BEHAVE<IFIELD> C@ 0x0010 OR
  Push(0x63ef+BEHAVE.offset); // BEHAVE<IFIELD>
  C_ex_(); // C!
}


// ================================================
// 0xe5b2: WORD 'UNK_0xe5b4' codep=0x224c parp=0xe5b4 params=0 returns=0
// ================================================

void UNK_0xe5b4() // UNK_0xe5b4
{
  Push(Read16(0x63ef+BEHAVE.offset)&0xFF | -0x0010); // BEHAVE<IFIELD> C@ 0x0010 NEGATE OR
  Push(0x63ef+BEHAVE.offset); // BEHAVE<IFIELD>
  C_ex_(); // C!
}


// ================================================
// 0xe5c6: WORD 'UNK_0xe5c8' codep=0x224c parp=0xe5c8
// ================================================

void UNK_0xe5c8() // UNK_0xe5c8
{
  Push(Read16(pp_XORMODE)); // XORMODE @
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  CI(); // CI
  IsICON_eq_I(); // ?ICON=I
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
  DrawBACKGR(); // .BACKGR
  DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
  Push(pp_XORMODE); // XORMODE
  Store_3(); // !_3
}


// ================================================
// 0xe5fa: WORD 'UNK_0xe5fc' codep=0x224c parp=0xe5fc params=0 returns=0
// ================================================

void UNK_0xe5fc() // UNK_0xe5fc
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  _2_ex_(); // 2!
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe60a: WORD 'UNK_0xe60c' codep=0x224c parp=0xe60c
// ================================================

void UNK_0xe60c() // UNK_0xe60c
{
  UNK_0xe564(); // UNK_0xe564
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
  Push(Pop() + Pop()); // +
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
  UNK_0xe5c8(); // UNK_0xe5c8
}


// ================================================
// 0xe620: WORD 'UNK_0xe622' codep=0x224c parp=0xe622
// ================================================

void UNK_0xe622() // UNK_0xe622
{
  UNK_0xe564(); // UNK_0xe564
  Push(-Pop()); //  NEGATE
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
  Push(-Pop()); //  NEGATE
  Push(Pop() + Pop()); // +
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
  UNK_0xe5c8(); // UNK_0xe5c8
}


// ================================================
// 0xe63a: WORD 'REDUCE-AGG' codep=0x224c parp=0xe649
// ================================================

void REDUCE_dash_AGG() // REDUCE-AGG
{
  LoadData(UNK_0xe148); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(1);
  Push(0x0033);
  RRND(); // RRND
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  LoadData(UNK_0xe148); // from 'CREATURE'
  C_ex_(); // C!
}


// ================================================
// 0xe661: WORD 'INCREASES-' codep=0x224c parp=0xe670
// ================================================

void INCREASES_dash_() // INCREASES-
{
  LoadData(UNK_0xe148); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(1);
  Push(0x0015);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(0x0064);
  MIN(); // MIN
  LoadData(UNK_0xe148); // from 'CREATURE'
  C_ex_(); // C!
}


// ================================================
// 0xe68a: WORD 'UNK_0xe68c' codep=0x224c parp=0xe68c
// ================================================

void UNK_0xe68c() // UNK_0xe68c
{
  Push(Read16(0x63ef+BEHAVE.offset)&0xFF | 1); // BEHAVE<IFIELD> C@ 1 OR
  Push(0x63ef+BEHAVE.offset); // BEHAVE<IFIELD>
  C_ex_(); // C!
  UNK_0xe100(); // UNK_0xe100
  UNK_0xe0ec(); // UNK_0xe0ec
  UNK_0xe60c(); // UNK_0xe60c
  UNK_0xe5a2(); // UNK_0xe5a2
}


// ================================================
// 0xe6a2: WORD 'UNK_0xe6a4' codep=0x224c parp=0xe6a4
// ================================================

void UNK_0xe6a4() // UNK_0xe6a4
{
  UNK_0xe100(); // UNK_0xe100
  UNK_0xe0ec(); // UNK_0xe0ec
  UNK_0xe622(); // UNK_0xe622
  UNK_0xe5a2(); // UNK_0xe5a2
}


// ================================================
// 0xe6ae: WORD 'UNK_0xe6b0' codep=0x224c parp=0xe6b0 params=0 returns=1
// ================================================

void UNK_0xe6b0() // UNK_0xe6b0
{
  CI(); // CI
  IsICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_ICON(); // POINT>ICON
}


// ================================================
// 0xe6ba: WORD 'UNK_0xe6bc' codep=0x224c parp=0xe6bc params=0 returns=0
// ================================================

void UNK_0xe6bc() // UNK_0xe6bc
{
  Push((Read16(0x63ef+HITS.offset)&0xFF)==0?1:0); // HITS<IFIELD> C@ 0=
  if (Pop() == 0) return;
  UNK_0xe6b0(); // UNK_0xe6b0
  Push(Read16(cc_DEAD_dash_IC)); // DEAD-IC
  StoreIC(); // !IC
}


// ================================================
// 0xe6ce: WORD 'UNK_0xe6d0' codep=0x224c parp=0xe6d0
// ================================================

void UNK_0xe6d0() // UNK_0xe6d0
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
  UNK_0xe114(); // UNK_0xe114
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
  UNK_0xe5c8(); // UNK_0xe5c8
  UNK_0xe5a2(); // UNK_0xe5a2
}


// ================================================
// 0xe718: WORD 'ERASE-LIFEFORM-FROM-ARRAY' codep=0x224c parp=0xe727
// ================================================

void ERASE_dash_LIFEFORM_dash_FROM_dash_ARRAY() // ERASE-LIFEFORM-FROM-ARRAY
{
  _dash_ICON(); // -ICON
  IDELETE(); // IDELETE
  UNK_0xe5fc(); // UNK_0xe5fc
}


// ================================================
// 0xe72f: WORD 'REDUCE-HIT' codep=0x224c parp=0xe73e params=0 returns=0
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
  UNK_0xe6bc(); // UNK_0xe6bc
}


// ================================================
// 0xe75a: WORD 'UNK_0xe75c' codep=0x224c parp=0xe75c
// ================================================

void UNK_0xe75c() // UNK_0xe75c
{
  _dash_ICON(); // -ICON
  Push(0xc437); // probable 'ICON-PARM'
  MODULE(); // MODULE
  _plus_ICON(); // +ICON
  UNK_0xe5fc(); // UNK_0xe5fc
}


// ================================================
// 0xe76a: WORD 'REDUCE-STU' codep=0x224c parp=0xe779 params=0 returns=0
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
// 0xe78f: WORD 'STUN-EFFEC' codep=0x224c parp=0xe79e params=0 returns=0
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
// 0xe7be: WORD 'UNK_0xe7c0' codep=0x224c parp=0xe7c0 params=0 returns=0
// ================================================

void UNK_0xe7c0() // UNK_0xe7c0
{
}


// ================================================
// 0xe7c2: WORD 'INCREMENT-' codep=0x224c parp=0xe7d1
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
// 0xe7e5: WORD 'UNK_0xe7e7' codep=0x73ea parp=0xe7e7
// ================================================
LoadDataType UNK_0xe7e7 = {CREATUREIDX, 0x90, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe7ed: WORD 'UNK_0xe7ef' codep=0x224c parp=0xe7ef
// ================================================

void UNK_0xe7ef() // UNK_0xe7ef
{
  Push(1);
  Push(0x63ef+UNK_0xe1b5.offset); // UNK_0xe1b5<IFIELD>
  C_ex_(); // C!
  UNK_0xe75c(); // UNK_0xe75c
  UNK_0xe5c8(); // UNK_0xe5c8
}


// ================================================
// 0xe7fb: WORD 'UNK_0xe7fd' codep=0x224c parp=0xe7fd
// ================================================

void UNK_0xe7fd() // UNK_0xe7fd
{
  Push(2);
  Push(0x63ef+UNK_0xe1b5.offset); // UNK_0xe1b5<IFIELD>
  C_ex_(); // C!
  UNK_0xe75c(); // UNK_0xe75c
  UNK_0xe5c8(); // UNK_0xe5c8
}


// ================================================
// 0xe809: WORD 'UNK_0xe80b' codep=0x224c parp=0xe80b
// ================================================

void UNK_0xe80b() // UNK_0xe80b
{
  Push(0);
  Push(0x63ef+UNK_0xe1b5.offset); // UNK_0xe1b5<IFIELD>
  C_ex_(); // C!
  UNK_0xe75c(); // UNK_0xe75c
  UNK_0xe5c8(); // UNK_0xe5c8
}


// ================================================
// 0xe817: WORD 'DIE' codep=0x224c parp=0xe81f
// ================================================

void DIE() // DIE
{
  UNK_0xe5b4(); // UNK_0xe5b4
  Push2Words("0.");
  Push(0x63ef+HITS.offset); // HITS<IFIELD>
  C_ex_(); // C!
  Push(0x63ef+STUNS.offset); // STUNS<IFIELD>
  C_ex_(); // C!
  UNK_0xe6b0(); // UNK_0xe6b0
  LoadData(UNK_0xe7e7); // from 'CREATURE'
  Push(Read16(Pop())); //  @
  StoreID(); // !ID
  UNK_0xe80b(); // UNK_0xe80b
  UNK_0xe6bc(); // UNK_0xe6bc
}


// ================================================
// 0xe839: WORD 'UNK_0xe83b' codep=0x224c parp=0xe83b
// ================================================

void UNK_0xe83b() // UNK_0xe83b
{
  Push(Read16(pp__h_CRIT)); // ^CRIT @
  POINT_gt_ICON(); // POINT>ICON
  GetIL(); // @IL
  GetIH(); // @IH
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe849: WORD 'UNK_0xe84b' codep=0x224c parp=0xe84b params=0 returns=0
// ================================================

void UNK_0xe84b() // UNK_0xe84b
{
  Push(0);
  Push(pp__h_CRIT); // ^CRIT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe853: WORD 'UNK_0xe855' codep=0x224c parp=0xe855 params=0 returns=2
// ================================================

void UNK_0xe855() // UNK_0xe855
{
  Push2Words("*SHIP");
  IsICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  _st_(); // <
}


// ================================================
// 0xe863: WORD 'UNK_0xe865' codep=0x744d parp=0xe865
// ================================================
IFieldType UNK_0xe865 = {ASSIGN_CREWIDX, 0x11, 0x03};

// ================================================
// 0xe868: WORD 'UNK_0xe86a' codep=0x744d parp=0xe86a
// ================================================
IFieldType UNK_0xe86a = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xe86d: WORD 'UNK_0xe86f' codep=0x224c parp=0xe86f params=0 returns=1
// ================================================

void UNK_0xe86f() // UNK_0xe86f
{
  UNK_0xe0d8(); // UNK_0xe0d8
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
// 0xe899: WORD 'UNK_0xe89b' codep=0x224c parp=0xe89b params=0 returns=2
// ================================================

void UNK_0xe89b() // UNK_0xe89b
{
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+UNK_0xe865.offset); // UNK_0xe865<IFIELD>
  Push(0);
  Push(6);
  RRND(); // RRND
  Push(Pop() * 3); //  3 *
  Push(Pop() + Pop()); // +
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8b3: WORD 'UNK_0xe8b5' codep=0x744d parp=0xe8b5
// ================================================
IFieldType UNK_0xe8b5 = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xe8b8: WORD 'UNK_0xe8ba' codep=0x73ea parp=0xe8ba
// ================================================
LoadDataType UNK_0xe8ba = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6489};

// ================================================
// 0xe8c0: WORD 'UNK_0xe8c2' codep=0x224c parp=0xe8c2
// ================================================

void UNK_0xe8c2() // UNK_0xe8c2
{
  UNK_0xe0d8(); // UNK_0xe0d8
  Push(Read16(pp_IsFLAT)); // ?FLAT @
  if (Pop() != 0)
  {
    Push(Pop() * 0x000a); //  0x000a *
  }
  Push(Read16(0x63ef+UNK_0xe1ba.offset)&0xFF); // UNK_0xe1ba<IFIELD> C@
  LoadData(UNK_0xe140); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Pop() + Pop()); // +
  Push(Pop() >> 1); //  2/
  _st_(); // <
}


// ================================================
// 0xe8e2: WORD 'UNK_0xe8e4' codep=0x224c parp=0xe8e4
// ================================================

void UNK_0xe8e4() // UNK_0xe8e4
{
  Push(Read16(0x63ef+UNK_0xe1ba.offset)&0xFF); // UNK_0xe1ba<IFIELD> C@
  LoadData(HIT_dot_POINTS); // from 'CREATURE'
  Push((Read16(Pop())&0xFF) * 2); //  C@ 2*
  Push(Pop() + Pop()); // +
  Push(3);
  _slash_(); // /
}


// ================================================
// 0xe8f6: WORD 'UNK_0xe8f8' codep=0x224c parp=0xe8f8
// ================================================

void UNK_0xe8f8() // UNK_0xe8f8
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
// 0xe918: WORD 'UNK_0xe91a' codep=0x224c parp=0xe91a params=0 returns=0
// ================================================

void UNK_0xe91a() // UNK_0xe91a
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
// 0xe944: WORD 'UNK_0xe946' codep=0x224c parp=0xe946
// ================================================

void UNK_0xe946() // UNK_0xe946
{
  UNK_0xe0b6(); // UNK_0xe0b6
  UNK_0xe8f8(); // UNK_0xe8f8
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
  Push(0x63ef+UNK_0xe8b5.offset); // UNK_0xe8b5<IFIELD>
  _do__dot_(); // $.
}


// ================================================
// 0xe9b2: WORD 'UNK_0xe9b4' codep=0x224c parp=0xe9b4
// ================================================

void UNK_0xe9b4() // UNK_0xe9b4
{
  unsigned short int i, imax;
  Push(Read16(0x63ef+BEHAVE.offset)&0xFF | 1); // BEHAVE<IFIELD> C@ 1 OR
  Push(0x63ef+BEHAVE.offset); // BEHAVE<IFIELD>
  C_ex_(); // C!
  UNK_0xe80b(); // UNK_0xe80b
  UNK_0xe86f(); // UNK_0xe86f
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    CI(); // CI
    UNK_0xe8c2(); // UNK_0xe8c2
    UNK_0xe8e4(); // UNK_0xe8e4
    UNK_0xe89b(); // UNK_0xe89b
    UNK_0xe946(); // UNK_0xe946
    SWAP(); // SWAP
    if (Pop() != 0)
    {
      LoadData(UNK_0xe8ba); // from 'CREWMEMBER'
      Push(Read16(Pop())&0xFF); //  C@
      _slash_(); // /
      Push(Read16(0x63ef+UNK_0xe86a.offset)&0xFF); // UNK_0xe86a<IFIELD> C@
      SWAP(); // SWAP
      _dash_(); // -
      Push(0);
      MAX(); // MAX
      Push(0x0064);
      MIN(); // MIN
      Push(0x63ef+UNK_0xe86a.offset); // UNK_0xe86a<IFIELD>
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

  UNK_0xe5b4(); // UNK_0xe5b4
  Push(pp__i_DEATH); // 'DEATH
  GetEXECUTE(); // @EXECUTE
  Push(pp__i__dot_VITAL); // '.VITAL
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xea2b: WORD 'AGGR-MODIF' codep=0xb869 parp=0xea3a
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
  UNK_0xe273(); // UNK_0xe273
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
  UNK_0xe273(); // UNK_0xe273
  b = b && Pop();
  UNK_0xe2d5(); // UNK_0xe2d5
  b = b && Pop();
  if (b)
  {
    INCREASES_dash_(); // INCREASES-
  }

  b = 1;
  IsALIEN_dash_HIT_dash_WITH_dash_STUNNER(); // ?ALIEN-HIT-WITH-STUNNER
  b = b && Pop();
  UNK_0xe273(); // UNK_0xe273
  b = b && Pop();
  UNK_0xe2d5(); // UNK_0xe2d5
  b = b && Pop();
  if (b)
  {
    INCREASES_dash_(); // INCREASES-
  }
}

// 0xea53: db 0xae 0x0b '  '
// 0xea5d: db 0x20 ' '

// ================================================
// 0xea72: WORD 'VS.PLAYER' codep=0xb869 parp=0xea80
// ================================================

void VS_dot_PLAYER() // VS.PLAYER rule
{
  int b;

  b = 1;
  UNK_0xe308(); // UNK_0xe308
  b = b && Pop();
  UNK_0xe388(); // UNK_0xe388
  b = b && Pop();
  IsSTUNNED(); // ?STUNNED
  b = b && !Pop();
  IsNOTICE_dash_PL(); // ?NOTICE-PL
  b = b && Pop();
  UNK_0xe548(); // UNK_0xe548
  b = b && Pop();
  IsNEXT_dash_TO_dash_P(); // ?NEXT-TO-P
  b = b && !Pop();
  if (b)
  {
    UNK_0xe68c(); // UNK_0xe68c
  }

  b = 1;
  UNK_0xe388(); // UNK_0xe388
  b = b && Pop();
  IsSTUNNED(); // ?STUNNED
  b = b && !Pop();
  IsNOTICE_dash_PL(); // ?NOTICE-PL
  b = b && Pop();
  UNK_0xe548(); // UNK_0xe548
  b = b && Pop();
  IsNEXT_dash_TO_dash_P(); // ?NEXT-TO-P
  b = b && Pop();
  if (b)
  {
    UNK_0xe9b4(); // UNK_0xe9b4
  }

  b = 1;
  UNK_0xe308(); // UNK_0xe308
  b = b && Pop();
  IsNOTICE_dash_PL(); // ?NOTICE-PL
  b = b && Pop();
  UNK_0xe388(); // UNK_0xe388
  b = b && Pop();
  IsSTUNNED(); // ?STUNNED
  b = b && !Pop();
  UNK_0xe556(); // UNK_0xe556
  b = b && Pop();
  if (b)
  {
    UNK_0xe6a4(); // UNK_0xe6a4
  }
}


// ================================================
// 0xeab7: WORD 'LIFE-SIM' codep=0xb869 parp=0xeac4
// ================================================

void LIFE_dash_SIM() // LIFE-SIM rule
{
  int b;

  b = 1;
  UNK_0xe388(); // UNK_0xe388
  b = b && Pop();
  IsSTUNNED(); // ?STUNNED
  b = b && !Pop();
  UNK_0xe308(); // UNK_0xe308
  b = b && Pop();
  if (b)
  {
    UNK_0xe6d0(); // UNK_0xe6d0
  }
}


// ================================================
// 0xead8: WORD 'ERASE-LIFE' codep=0xb869 parp=0xeae7
// ================================================

void ERASE_dash_LIFE() // ERASE-LIFE rule
{
  int b;

  b = 1;
  UNK_0xe41a(); // UNK_0xe41a
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
// 0xeaf8: WORD '?REDUCE-PO' codep=0xb869 parp=0xeb07
// ================================================

void IsREDUCE_dash_PO() // ?REDUCE-PO rule
{
  int b;

  b = 1;
  IsALIEN_dash_HIT_dash_WITH_dash_LASER(); // ?ALIEN-HIT-WITH-LASER
  b = b && Pop();
  UNK_0xe42e(); // UNK_0xe42e
  b = b && Pop();
  if (b)
  {
    REDUCE_dash_HIT(); // REDUCE-HIT
  }

  b = 1;
  IsALIEN_dash_HIT_dash_WITH_dash_STUNNER(); // ?ALIEN-HIT-WITH-STUNNER
  b = b && Pop();
  UNK_0xe438(); // UNK_0xe438
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
// 0xeb29: WORD 'UNK_0xeb2b' codep=0x224c parp=0xeb2b params=0 returns=0
// ================================================

void UNK_0xeb2b() // UNK_0xeb2b
{
  UNK_0xe44e(); // UNK_0xe44e
  if (Pop() == 0) return;
  STUN_dash_EFFEC(); // STUN-EFFEC
  Push(1);
  Push(0x63ef+STUNS.offset); // STUNS<IFIELD>
  C_ex_(); // C!
}


// ================================================
// 0xeb3b: WORD 'EFFECT-LIF' codep=0xb869 parp=0xeb4a
// ================================================

void EFFECT_dash_LIF() // EFFECT-LIF rule
{
  int b;

  b = 1;
  UNK_0xe488(); // UNK_0xe488
  b = b && Pop();
  UNK_0xe388(); // UNK_0xe388
  b = b && Pop();
  if (b)
  {
    DIE(); // DIE
  }

  b = 1;
  UNK_0xe438(); // UNK_0xe438
  b = b && !Pop();
  IsSTUNNED(); // ?STUNNED
  b = b && !Pop();
  if (b)
  {
    UNK_0xe7c0(); // UNK_0xe7c0
  }
}


// ================================================
// 0xeb67: WORD 'UNK_0xeb69' codep=0x224c parp=0xeb69
// ================================================

void UNK_0xeb69() // UNK_0xeb69
{
  UNK_0xe388(); // UNK_0xe388
  IsSTUNS_st_STU(); // ?STUNS<STU
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  INCREMENT_dash_(); // INCREMENT-
}


// ================================================
// 0xeb77: WORD 'GROUND>AIR' codep=0xb869 parp=0xeb86
// ================================================

void GROUND_gt_AIR() // GROUND>AIR rule
{
  int b;

  b = 1;
  UNK_0xe492(); // UNK_0xe492
  b = b && Pop();
  UNK_0xe4a2(); // UNK_0xe4a2
  b = b && Pop();
  UNK_0xe4ac(); // UNK_0xe4ac
  b = b && Pop();
  UNK_0xe388(); // UNK_0xe388
  b = b && Pop();
  IsSTUNNED(); // ?STUNNED
  b = b && !Pop();
  IsWANTS_dash_TO_dash_FLY(); // ?WANTS-TO-FLY
  b = b && Pop();
  if (b)
  {
    UNK_0xe7ef(); // UNK_0xe7ef
  }

  b = 1;
  UNK_0xe492(); // UNK_0xe492
  b = b && Pop();
  UNK_0xe4a2(); // UNK_0xe4a2
  b = b && Pop();
  UNK_0xe4bc(); // UNK_0xe4bc
  b = b && Pop();
  UNK_0xe388(); // UNK_0xe388
  b = b && Pop();
  IsSTUNNED(); // ?STUNNED
  b = b && !Pop();
  UNK_0xe3ba(); // UNK_0xe3ba
  b = b && Pop();
  if (b)
  {
    UNK_0xe7fd(); // UNK_0xe7fd
  }

  b = 1;
  UNK_0xe492(); // UNK_0xe492
  b = b && Pop();
  UNK_0xe4a2(); // UNK_0xe4a2
  b = b && Pop();
  UNK_0xe4bc(); // UNK_0xe4bc
  b = b && Pop();
  UNK_0xe3ba(); // UNK_0xe3ba
  b = b && !Pop();
  IsWANTS_dash_TO_dash_FLOAT(); // ?WANTS-TO-FLOAT
  b = b && Pop();
  UNK_0xe388(); // UNK_0xe388
  b = b && Pop();
  IsSTUNNED(); // ?STUNNED
  b = b && !Pop();
  if (b)
  {
    UNK_0xe7fd(); // UNK_0xe7fd
  }

  b = 1;
  UNK_0xe388(); // UNK_0xe388
  b = b && !Pop();
  UNK_0xe4a2(); // UNK_0xe4a2
  b = b && !Pop();
  UNK_0xe516(); // UNK_0xe516
  b = b && Pop();
  if (b)
  {
    UNK_0xe80b(); // UNK_0xe80b
  }

  b = 1;
  IsSTUNNED(); // ?STUNNED
  b = b && Pop();
  UNK_0xe4a2(); // UNK_0xe4a2
  b = b && !Pop();
  UNK_0xe516(); // UNK_0xe516
  b = b && Pop();
  if (b)
  {
    UNK_0xe80b(); // UNK_0xe80b
  }

  b = 1;
  UNK_0xe4a2(); // UNK_0xe4a2
  b = b && !Pop();
  UNK_0xe508(); // UNK_0xe508
  b = b && Pop();
  UNK_0xe4f8(); // UNK_0xe4f8
  b = b && Pop();
  UNK_0xe516(); // UNK_0xe516
  b = b && Pop();
  if (b)
  {
    UNK_0xe80b(); // UNK_0xe80b
  }

  b = 1;
  UNK_0xe4a2(); // UNK_0xe4a2
  b = b && !Pop();
  UNK_0xe40e(); // UNK_0xe40e
  b = b && Pop();
  UNK_0xe516(); // UNK_0xe516
  b = b && Pop();
  if (b)
  {
    UNK_0xe80b(); // UNK_0xe80b
  }
}

// 0xebb1: db 0xb6 0x4f ' O'
// 0xebc0: db 0x0f ' '

// ================================================
// 0xebf6: WORD 'UNK_0xebf8' codep=0x224c parp=0xebf8
// ================================================

void UNK_0xebf8() // UNK_0xebf8
{
  Push(Read16(pp_WEAPON_dash_)); // WEAPON- @
  if (Pop() != 0)
  {
    Push(0xeb07); // probable '?REDUCE-PO'
    DISTRACT(); // DISTRACT
    IsREDUCE_dash_PO(); // ?REDUCE-PO rule
    Pop(); // DROP
  }
  Push(Read16(0x63ef+HITS.offset)&0xFF); // HITS<IFIELD> C@
  if (Pop() != 0)
  {
    Push(0xea3a); // probable 'AGGR-MODIF'
    DISTRACT(); // DISTRACT
    AGGR_dash_MODIF(); // AGGR-MODIF rule
    Pop(); // DROP
  }
  Push(0xea80); // probable 'VS.PLAYER'
  DISTRACT(); // DISTRACT
  VS_dot_PLAYER(); // VS.PLAYER rule
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(0xeac4); // probable 'LIFE-SIM'
    DISTRACT(); // DISTRACT
    LIFE_dash_SIM(); // LIFE-SIM rule
    Pop(); // DROP
  }
  UNK_0xeb2b(); // UNK_0xeb2b
  Push(0xeb4a); // probable 'EFFECT-LIF'
  DISTRACT(); // DISTRACT
  EFFECT_dash_LIF(); // EFFECT-LIF rule
  Pop(); // DROP
  UNK_0xeb69(); // UNK_0xeb69
  Push(0xeb86); // probable 'GROUND>AIR'
  DISTRACT(); // DISTRACT
  GROUND_gt_AIR(); // GROUND>AIR rule
  Pop(); // DROP
}


// ================================================
// 0xec4e: WORD 'SIMULATE' codep=0x224c parp=0xec5b params=0 returns=1
// ================================================
// entry

void SIMULATE() // SIMULATE
{
  Push(Read16(pp_IsNEW)); // ?NEW @
  if (Pop() != 0)
  {
    UNK_0xe84b(); // UNK_0xe84b
    Push(pp_IsNEW); // ?NEW
    OFF_2(); // OFF_2
  }
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  Push(1);
  UNK_0xe855(); // UNK_0xe855
  Push(Pop() + Pop()); // +
  _gt_(); // >
  if (Pop() == 0) return;
  UNK_0xe83b(); // UNK_0xe83b
  GetID(); // @ID
  Push(0x0013);
  _st_(); // <
  if (Pop() != 0)
  {
    UNK_0xebf8(); // UNK_0xebf8
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
// 0xecb5: WORD 'UNK_0xecb7' codep=0x224c parp=0xecb7
// ================================================

void UNK_0xecb7() // UNK_0xecb7
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
// 0xed2d: WORD '%STORM' codep=0x1d29 parp=0xed38
// ================================================
// 0xed38: db 0x00 0x00 0x14 0x00 0x28 0x00 0x3c 0x00 0x55 0x00 '    ( < U '

// ================================================
// 0xed42: WORD '?.STORM' codep=0x224c parp=0xed4e params=0 returns=0
// ================================================

void Is_dot_STORM() // ?.STORM
{
  Push(Read16(pp__n_STORM)); // #STORM @
  Push(3);
  _gt_(); // >
  Push(Read16(pp_STORM)); // STORM @
  UNK_0xe0e4(); // UNK_0xe0e4
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0xcdd8); // probable '.STOR'
  MODULE(); // MODULE
}


// ================================================
// 0xed6a: WORD '?STORM' codep=0x224c parp=0xed75 params=0 returns=0
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
      Push(pp__ro_PLANET); // (PLANET
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
        Push(0xcdd8); // probable '.STOR'
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
    UNK_0xe91a(); // UNK_0xe91a
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
// 0xee0b: WORD 'angle>text' codep=0x224c parp=0xee0d params=2 returns=0
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
// 0xeef1: WORD 'UNK_0xeef3' codep=0x224c parp=0xeef3
// ================================================

void UNK_0xeef3() // UNK_0xeef3
{
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  DrawBACKGR(); // .BACKGR
  DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
}


// ================================================
// 0xef07: WORD '?EMBARK' codep=0x224c parp=0xef13 params=0 returns=1
// ================================================

void IsEMBARK() // ?EMBARK
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xe100(); // UNK_0xe100
  ICLOSE(); // ICLOSE
  UNK_0xe0ec(); // UNK_0xe0ec
  D_eq_(); // D=
}


// ================================================
// 0xef21: WORD 'UNK_0xef23' codep=0x224c parp=0xef23 params=0 returns=2
// ================================================

void UNK_0xef23() // UNK_0xef23
{
  Push(0x1388);
  TONE(); // TONE
  BEEPON(); // BEEPON
  Push(0x003c);
  MS(); // MS
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xef35: WORD 'UNK_0xef37' codep=0x224c parp=0xef37
// ================================================

void UNK_0xef37() // UNK_0xef37
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xe0ec(); // UNK_0xe0ec
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
// 0xef5d: WORD 'FUNCTIONS' codep=0x1d29 parp=0xef6b
// ================================================
// 0xef6b: db 0x06 0x0c 0x03 0x0c 0x13 0x0c 0x17 0x0c 0x13 0x0c 0x2b 0x0c 0x17 0x0c 0x43 0x0c 0x13 0x0c 0x57 0x0c 0x13 0x0c 0x6b 0x0c 0x1b 0x0c 0x87 0x0c 0x16 '          +   C   W   k      '

// ================================================
// 0xef88: WORD 'UNK_0xef8a' codep=0x224c parp=0xef8a params=0 returns=0
// ================================================

void UNK_0xef8a() // UNK_0xef8a
{
  UNK_0xe0b6(); // UNK_0xe0b6
  Push(pp_FUNCTIONS); // FUNCTIONS
  SET_dash_CRS(); // SET-CRS
  Pop(); // DROP
}


// ================================================
// 0xef94: WORD 'UNK_0xef96' codep=0x224c parp=0xef96 orphan params=0 returns=0
// ================================================

void UNK_0xef96() // UNK_0xef96
{
  CLICK(); // CLICK
  HEAVEHO(); // HEAVEHO
}


// ================================================
// 0xef9c: WORD 'UNK_0xef9e' codep=0x1d29 parp=0xef9e
// ================================================
// 0xef9e: db 0x99 0xf3 '  '

// ================================================
// 0xefa0: WORD 'MAPS' codep=0x224c parp=0xefa9 params=0 returns=0
// ================================================

void MAPS() // MAPS
{
  Push(0xcdc8); // probable 'MAPS'
  MODULE(); // MODULE
}


// ================================================
// 0xefb1: WORD 'WALK&TALK' codep=0x224c parp=0xefbf params=0 returns=0
// ================================================

void WALK_and_TALK() // WALK&TALK
{
  Push(0xd05c); // probable '(TALK)'
  MODULE(); // MODULE
}


// ================================================
// 0xefc7: WORD 'TVMOVE' codep=0x224c parp=0xefd2 params=0 returns=0
// ================================================

void TVMOVE() // TVMOVE
{
  Push(0xcf50); // probable 'TVMOVE'
  MODULE(); // MODULE
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_3(); // ON_3
}


// ================================================
// 0xefde: WORD 'DO.WEAPONS' codep=0x224c parp=0xefed params=0 returns=0
// ================================================

void DO_dot_WEAPONS() // DO.WEAPONS
{
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
  if (Pop() == 0) return;
  Push(0xd04b); // probable '(WEAPONS)'
  MODULE(); // MODULE
}


// ================================================
// 0xf005: WORD '/ITEMS' codep=0x224c parp=0xf010 params=0 returns=0
// ================================================

void _slash_ITEMS() // /ITEMS
{
  Push(0xcefe); // probable '/ITEMS'
  MODULE(); // MODULE
}


// ================================================
// 0xf018: WORD 'ICONS' codep=0x224c parp=0xf022
// ================================================

void ICONS() // ICONS
{
  Push(0xcec0); // probable 'ICONS'
  MODULE(); // MODULE
  Push(0xd013); // probable '(TVSET)'
  MODULE(); // MODULE
  UNK_0xecb7(); // UNK_0xecb7
  Push(pp_UNK_0xef9e); // UNK_0xef9e
  GetEXECUTE(); // @EXECUTE
  Push(Read16(pp__i__dot_VITAL)); // '.VITAL @
  MODULE(); // MODULE
}


// ================================================
// 0xf03c: WORD '>BUTTONS' codep=0x4a4f parp=0xf049
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
// 0xf069: WORD 'UNK_0xf06b' codep=0x224c parp=0xf06b params=1 returns=0
// ================================================

void UNK_0xf06b() // UNK_0xf06b
{
  CLICK(); // CLICK
  Push(pp_NCRS); // NCRS
  _plus__ex__2(); // +!_2
  UNK_0xef8a(); // UNK_0xef8a
}


// ================================================
// 0xf075: WORD 'UNK_0xf077' codep=0x224c parp=0xf077
// ================================================

void UNK_0xf077() // UNK_0xf077
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
    UNK_0xf06b(); // UNK_0xf06b
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
      UNK_0xf06b(); // UNK_0xf06b
    } else
    {
      Pop(); // DROP
      IsTRIG(); // ?TRIG
      if (Pop() != 0)
      {
        UNK_0xef23(); // UNK_0xef23
        Push(Read16(pp_NCRS)); // NCRS @
        _gt_BUTTONS(); // >BUTTONS case
        UNK_0xeef3(); // UNK_0xeef3
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
// 0xf0df: WORD 'NAVIG' codep=0x744d parp=0xf0e9
// ================================================
IFieldType NAVIG = {ASSIGN_CREWIDX, 0x17, 0x03};

// ================================================
// 0xf0ec: WORD '^NAV' codep=0x744d parp=0xf0f5
// ================================================
IFieldType _h_NAV = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xf0f8: WORD '-STORM' codep=0x224c parp=0xf103 params=0 returns=1
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
// 0xf119: WORD '?NAV' codep=0x224c parp=0xf122 params=0 returns=1
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
// 0xf13a: WORD '.DISTANCE' codep=0x224c parp=0xf148
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
    UNK_0xef37(); // UNK_0xef37
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
  UNK_0xe0ec(); // UNK_0xe0ec
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
  UNK_0xe564(); // UNK_0xe564
  _2SWAP(); // 2SWAP
  Pop(); Pop(); // 2DROP
  angle_gt_text(); // angle>text
}


// ================================================
// 0xf1b4: WORD '.CARGO' codep=0x224c parp=0xf1bf
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
  Push(Read16(0x63ef+UNK_0xe1e6.offset)); // UNK_0xe1e6<IFIELD> @
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
// 0xf1fa: WORD 'UNK_0xf1fc' codep=0x224c parp=0xf1fc orphan params=0 returns=1
// ================================================

void UNK_0xf1fc() // UNK_0xf1fc
{
  Push(Read16(pp_OLDHR) - Read16(pp_STAR_dash_HR)); // OLDHR @ STAR-HR @ -
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(Read16(pp_STAR_dash_HR)); // STAR-HR @
  Push(pp_OLDHR); // OLDHR
  Store_3(); // !_3
}


// ================================================
// 0xf216: WORD '.ENERGY' codep=0x224c parp=0xf222
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
  Push(-Read16(pp_E_slash_M) * 4); // E/M @ 4 * NEGATE
  _star__slash_(); // */
  Push(0x0063);
  MIN(); // MIN
  Push(3);
  DrawR(); // .R
  PRINT("%", 1); // (.")
}


// ================================================
// 0xf2cb: WORD 'UNK_0xf2cd' codep=0x224c parp=0xf2cd params=2 returns=2
// ================================================

void UNK_0xf2cd() // UNK_0xf2cd
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
// 0xf2f3: WORD 'UNK_0xf2f5' codep=0x224c parp=0xf2f5 params=1 returns=0
// ================================================

void UNK_0xf2f5() // UNK_0xf2f5
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
// 0xf317: WORD 'UNK_0xf319' codep=0x224c parp=0xf319 params=1 returns=0
// ================================================

void UNK_0xf319() // UNK_0xf319
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
// 0xf33b: WORD '.WHERE' codep=0x224c parp=0xf346 params=0 returns=0
// ================================================

void DrawWHERE() // .WHERE
{
  _dash_STORM(); // -STORM
  IsNAV(); // ?NAV
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  UNK_0xe0ec(); // UNK_0xe0ec
  UNK_0xf2cd(); // UNK_0xf2cd
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
  UNK_0xf319(); // UNK_0xf319
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
  UNK_0xf2f5(); // UNK_0xf2f5
}


// ================================================
// 0xf38e: WORD '.STATS' codep=0x224c parp=0xf399
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
// 0xf3b3: WORD 'UNK_0xf3b5' codep=0x224c parp=0xf3b5 orphan params=0 returns=1
// ================================================

void UNK_0xf3b5() // UNK_0xf3b5
{
  UNK_0xf1fc(); // UNK_0xf1fc
  Push(Pop() | Read16(pp_FORCED)); //  FORCED @ OR
  Push(pp_FORCED); // FORCED
  OFF(); // OFF
}


// ================================================
// 0xf3c3: WORD 'TV-TASKS' codep=0x224c parp=0xf3d0 params=0 returns=0
// ================================================
// entry

void TV_dash_TASKS() // TV-TASKS
{
  Push(0xf3b5); // probable 'UNK_0xf3b5'
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  _st__ex__gt_(); // <!>
  Push(0xed75); // probable '?STORM'
  Push(pp__i_REPAIR); // 'REPAIR
  _st__ex__gt_(); // <!>
  Push(0xf399); // probable '.STATS'
  Push(pp__i__dot_VEHICLE_dash_STATUS); // '.VEHICLE-STATUS
  _st__ex__gt_(); // <!>
  Push(0xc04e); // probable 'OBIT'
  Push(pp__i_DEATH); // 'DEATH
  _st__ex__gt_(); // <!>
  Push(0xec5b); // probable 'SIMULATE'
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  _st__ex__gt_(); // <!>
  Push(0x3a6e); // probable 'UNRAVEL'
  Push(pp__i_ENDING); // 'ENDING
  _st__ex__gt_(); // <!>
  Push(0xc081); // probable '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  _st__ex__gt_(); // <!>
  Push2Words("0.");
  Push(pp_LASTAP); // LASTAP
  _st_D_ex__gt_(); // <D!>
  Push(0xc070); // probable '.VIT'
  Push(pp__i__dot_VITAL); // '.VITAL
  _st__ex__gt_(); // <!>
  Push(0xc05f); // probable 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  _st__ex__gt_(); // <!>
  Push(0xecb7); // probable 'UNK_0xecb7'
  Push(pp__i__dot_DATE); // '.DATE
  _st__ex__gt_(); // <!>
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_2(); // ON_2
  Push(0xd06e); // probable 'HEAVEHO'
  Push(pp__i_THROW_dash_); // 'THROW-
  Store_3(); // !_3
}


// ================================================
// 0xf434: WORD 'UNK_0xf436' codep=0x224c parp=0xf436 params=0 returns=0
// ================================================

void UNK_0xf436() // UNK_0xf436
{
  Push(0xbf98); // probable '?VCYCLE'
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  _st__ex__gt_(); // <!>
  Push(0xc136); // probable 'MREPAIR'
  Push(pp__i_REPAIR); // 'REPAIR
  _st__ex__gt_(); // <!>
  Push(0xbf68); // probable '.SORD'
  Push(pp__i__dot_VEHICLE_dash_STATUS); // '.VEHICLE-STATUS
  _st__ex__gt_(); // <!>
  Push(0xc04e); // probable 'OBIT'
  Push(pp__i_DEATH); // 'DEATH
  _st__ex__gt_(); // <!>
  Push(0x3a48); // probable 'NOP'
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  _st__ex__gt_(); // <!>
  Push(0xc081); // probable '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  _st__ex__gt_(); // <!>
  Push(0x3a48); // probable 'NOP'
  Push(pp__i__dot_VITAL); // '.VITAL
  _st__ex__gt_(); // <!>
  Push(0xc05f); // probable 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  _st__ex__gt_(); // <!>
  Push(0xbf56); // probable '/STARDATE'
  Push(pp__i__dot_DATE); // '.DATE
  _st__ex__gt_(); // <!>
  Push(Read16(pp_IsCRITIC)); // ?CRITIC @
  if (Pop() != 0)
  {
    Push(0xd06e); // probable 'HEAVEHO'
  } else
  {
    Push(0x3a48); // probable 'NOP'
  }
  Push(pp__i_THROW_dash_); // 'THROW-
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf498: WORD 'UNK_0xf49a' codep=0x224c parp=0xf49a params=0 returns=0
// ================================================

void UNK_0xf49a() // UNK_0xf49a
{
  Push(0xd025); // probable '(CLEAN)'
  MODULE(); // MODULE
  UNK_0xf436(); // UNK_0xf436
}


// ================================================
// 0xf4a4: WORD 'UNK_0xf4a6' codep=0x224c parp=0xf4a6 params=0 returns=0
// ================================================

void UNK_0xf4a6() // UNK_0xf4a6
{
  Push(0xc03f); // probable '(ROL'
  MODULE(); // MODULE
}


// ================================================
// 0xf4ae: WORD 'UNK_0xf4b0' codep=0x224c parp=0xf4b0
// ================================================

void UNK_0xf4b0() // UNK_0xf4b0
{
  Push(pp_WEAPON_dash_); // WEAPON-
  OFF(); // OFF
  Push(pp_STORM); // STORM
  OFF(); // OFF
  Push(0xd06e); // probable 'HEAVEHO'
  Push(pp__i_THROW_dash_); // 'THROW-
  Store_3(); // !_3
  Push(0xd001); // probable 'TV-DISP'
  MODULE(); // MODULE
  UNK_0xecb7(); // UNK_0xecb7
  UNK_0xf4a6(); // UNK_0xf4a6
  Push(0xcf71); // probable '!E/M'
  MODULE(); // MODULE
  DrawSTATS(); // .STATS
  DrawVIT(); // .VIT
  TV_dash_TASKS(); // TV-TASKS
  GetColor(BLACK);
  Push(pp_LCOLOR); // LCOLOR
  Store_3(); // !_3
}


// ================================================
// 0xf4de: WORD 'TV' codep=0x224c parp=0xf4e5
// ================================================
// entry

void TV() // TV
{
  Push(0xf49a); // probable 'UNK_0xf49a'
  Push(0xf077); // probable 'UNK_0xf077'
  Push(0xf4b0); // probable 'UNK_0xf4b0'
  DOTASKS(UNK_0xf4b0, UNK_0xf4b0, UNK_0xf4b0);
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_3(); // ON_3
}

// 0xf4f9: db 0x42 0x45 0x48 0x41 0x56 0x49 0x4f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x52 0x41 0x47 0x45 0x20 0x46 0x4f 0x52 0x20 0x46 0x55 0x4e 0x43 0x54 0x49 0x4f 0x4e 0x31 0x32 0x32 0x33 0x32 0x39 0xb3 0xe0 0x90 0x16 0x49 0x54 0x45 0x4d 0x53 0x31 0x36 0x37 0x32 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'BEHAVIO______________________________________RAGE FOR FUNCTION122329    ITEMS1672______________________ '

