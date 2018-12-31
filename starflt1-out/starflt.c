
#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"

#include"../overlays/DPART-OV.h"
#include"../overlays/CHKFLIGHT-OV.h"
#include"../overlays/FRACT-OV.h"
#include"../overlays/ICONP-OV.h"
#include"../overlays/SITE-OV.h"
#include"../overlays/HYPERMSG-OV.h"
#include"../overlays/BLT-OV.h"
#include"../overlays/MISC-OV.h"
#include"../overlays/BANK-OV.h"
#include"../overlays/ASSCREW-OV.h"
#include"../overlays/PERSONNEL-OV.h"
#include"../overlays/SHIPGRPH-OV.h"
#include"../overlays/CONFIG-OV.h"
#include"../overlays/TDEPOT-OV.h"
#include"../overlays/PORTMENU-OV.h"
#include"../overlays/VITA-OV.h"
#include"../overlays/HP-OV.h"
#include"../overlays/LP-OV.h"
#include"../overlays/SENT-OV.h"
#include"../overlays/TV-OV.h"
#include"../overlays/COMM-OV.h"
#include"../overlays/COMMSPEC-OV.h"
#include"../overlays/SEED-OV.h"
#include"../overlays/LISTICONS.h"
#include"../overlays/MOVE-OV.h"
#include"../overlays/ENGINEER.h"
#include"../overlays/DOCTOR.h"
#include"../overlays/ORBIT-OV.h"
#include"../overlays/CAPTAIN.h"
#include"../overlays/SCIENCE.h"
#include"../overlays/NAVIGATR.h"
#include"../overlays/SHIPBUTTONS.h"
#include"../overlays/MAP-OV.h"
#include"../overlays/HYPER-OV.h"
#include"../overlays/ANALYZE-OV.h"
#include"../overlays/LAUNCH-OV.h"
#include"../overlays/FLUX-EFFECT.h"
#include"../overlays/OP-OV.h"
#include"../overlays/ITEMS-OV.h"
#include"../overlays/BEHAV-OV.h"
#include"../overlays/HEAL-OV.h"
#include"../overlays/REPAIR-OV.h"
#include"../overlays/GAME-OV.h"
#include"../overlays/PLSET-OV.h"
#include"../overlays/MAPS-OV.h"
#include"../overlays/STORM-OV.h"
#include"../overlays/IT-OV.h"
#include"../overlays/COMBAT-OV.h"
#include"../overlays/DAMAGE-OV.h"
#include"../overlays/LAND-OV.h"
#include"../overlays/MUSIC.h"
#include"../overlays/STP-OV.h"

// =================================
// =========== Dictionary ==========
// =================================
//          (!SET)  codep:0x0138 wordp:0x0138 size:0x001d C-string:'_ro__ex_SET_rc_'
//          (!OLD)  codep:0x0160 wordp:0x0160 size:0x001d C-string:'_ro__ex_OLD_rc_'
//          (TIME)  codep:0x1d29 wordp:0x0188 size:0x0068 C-string:'_ro_TIME_rc_'
//           SET0/  codep:0x01fa wordp:0x01fa size:0x001a C-string:'SET0_slash_'
//       (RESTORE)  codep:0x224c wordp:0x0222 size:0x0048 C-string:'_ro_RESTORE_rc_'
//      AUTO-CACHE  codep:0x224c wordp:0x0279 size:0x003a C-string:'AUTO_dash_CACHE'
//      AUTO-LIMIT  codep:0x224c wordp:0x02c2 size:0x0024 C-string:'AUTO_dash_LIMIT'
//     AUTO-SCREEN  codep:0x224c wordp:0x02f6 size:0x003a C-string:'AUTO_dash_SCREEN'
//            COLD  codep:0x224c wordp:0x0339 size:0x0008 C-string:'COLD'
//           W0343  codep:0x224c wordp:0x0343 size:0x007e C-string:'W0343'
//           W03C3  codep:0x224c wordp:0x03c3 size:0x0008 C-string:'W03C3'
//     SET-BUFFERS  codep:0x224c wordp:0x03db size:0x002a C-string:'SET_dash_BUFFERS'
//             SP0  codep:0x1792 wordp:0x040d size:0x0002 C-string:'SP0'
//              R0  codep:0x1792 wordp:0x0416 size:0x0002 C-string:'R0'
//              DP  codep:0x1792 wordp:0x041f size:0x0002 C-string:'DP'
//           FENCE  codep:0x1792 wordp:0x042b size:0x0002 C-string:'FENCE'
//          (INTO)  codep:0x1792 wordp:0x0438 size:0x0002 C-string:'_ro_INTO_rc_'
//        MSGFLAGS  codep:0x1792 wordp:0x0447 size:0x0002 C-string:'MSGFLAGS'
//        VOC-LINK  codep:0x1792 wordp:0x0456 size:0x0002 C-string:'VOC_dash_LINK'
//        USERSIZE  codep:0x1792 wordp:0x0465 size:0x0002 C-string:'USERSIZE'
//        USERNEXT  codep:0x1792 wordp:0x0474 size:0x0002 C-string:'USERNEXT'
//             >IN  codep:0x1792 wordp:0x047e size:0x0002 C-string:'_gt_IN'
//             TIB  codep:0x1792 wordp:0x0488 size:0x0002 C-string:'TIB'
//       VIDEOPORT  codep:0x1792 wordp:0x0498 size:0x0002 C-string:'VIDEOPORT'
//        VIDEOMEM  codep:0x1792 wordp:0x04a7 size:0x0002 C-string:'VIDEOMEM'
//       CURSORLOC  codep:0x1792 wordp:0x04b7 size:0x0002 C-string:'CURSORLOC'
//             ROW  codep:0x1792 wordp:0x04c1 size:0x0002 C-string:'ROW'
//             COL  codep:0x1792 wordp:0x04cb size:0x0002 C-string:'COL'
//          ROWMIN  codep:0x1792 wordp:0x04d8 size:0x0002 C-string:'ROWMIN'
//          COLMIN  codep:0x1792 wordp:0x04e5 size:0x0002 C-string:'COLMIN'
//          ROWMAX  codep:0x1792 wordp:0x04f2 size:0x0002 C-string:'ROWMAX'
//          COLMAX  codep:0x1792 wordp:0x04ff size:0x0002 C-string:'COLMAX'
//       ATTRIBUTE  codep:0x1792 wordp:0x050f size:0x0002 C-string:'ATTRIBUTE'
//         DOFFSET  codep:0x1792 wordp:0x051d size:0x0002 C-string:'DOFFSET'
//      SERIALPORT  codep:0x1792 wordp:0x052e size:0x0002 C-string:'SERIALPORT'
//    PARALLELPORT  codep:0x1792 wordp:0x0541 size:0x0002 C-string:'PARALLELPORT'
//            BASE  codep:0x1792 wordp:0x054c size:0x0002 C-string:'BASE'
//             BLK  codep:0x1792 wordp:0x0556 size:0x0002 C-string:'BLK'
//             DPL  codep:0x1792 wordp:0x0560 size:0x0002 C-string:'DPL'
//             FLD  codep:0x1792 wordp:0x056a size:0x0002 C-string:'FLD'
//             HLD  codep:0x1792 wordp:0x0574 size:0x0002 C-string:'HLD'
//              R#  codep:0x1792 wordp:0x057d size:0x0002 C-string:'R_n_'
//             SCR  codep:0x1792 wordp:0x0587 size:0x0002 C-string:'SCR'
//            SSCR  codep:0x1792 wordp:0x0592 size:0x0002 C-string:'SSCR'
//           STATE  codep:0x1792 wordp:0x059e size:0x0002 C-string:'STATE'
//         CONTEXT  codep:0x1792 wordp:0x05ac size:0x0002 C-string:'CONTEXT'
//             CSP  codep:0x1792 wordp:0x05b6 size:0x0002 C-string:'CSP'
//         CURRENT  codep:0x1792 wordp:0x05c4 size:0x0002 C-string:'CURRENT'
//          LFALEN  codep:0x1792 wordp:0x05d1 size:0x0002 C-string:'LFALEN'
//       LOWERCASE  codep:0x1792 wordp:0x05e1 size:0x0002 C-string:'LOWERCASE'
//     SEARCHORDER  codep:0x1792 wordp:0x05f3 size:0x0002 C-string:'SEARCHORDER'
//           WIDTH  codep:0x1792 wordp:0x05ff size:0x0002 C-string:'WIDTH'
//           -FIND  codep:0x17b7 wordp:0x060b size:0x0002 C-string:'_dash_FIND'
//       ?TERMINAL  codep:0x17b7 wordp:0x061b size:0x0002 C-string:'IsTERMINAL'
//           ABORT  codep:0x17b7 wordp:0x0627 size:0x0002 C-string:'ABORT'
//            BELL  codep:0x17b7 wordp:0x0632 size:0x0002 C-string:'BELL'
//              BS  codep:0x17b7 wordp:0x063b size:0x0002 C-string:'BS'
//              CR  codep:0x17b7 wordp:0x0644 size:0x0002 C-string:'CR'
//          CREATE  codep:0x17b7 wordp:0x0651 size:0x0002 C-string:'CREATE'
//      DISKERROR?  codep:0x17b7 wordp:0x0662 size:0x0002 C-string:'DISKERROR_ask_'
//            EMIT  codep:0x17b7 wordp:0x066d size:0x0002 C-string:'EMIT'
//          EXPECT  codep:0x17b7 wordp:0x067a size:0x0002 C-string:'EXPECT'
//       INTERPRET  codep:0x17b7 wordp:0x068a size:0x0002 C-string:'INTERPRET'
//          LINKS>  codep:0x17b7 wordp:0x0697 size:0x0002 C-string:'LINKS_gt_'
//          LOAD_2  codep:0x17b7 wordp:0x06a2 size:0x0002 C-string:'LOAD_2'
//           KEY_1  codep:0x17b7 wordp:0x06ac size:0x0002 C-string:'KEY_1'
//          NUMBER  codep:0x17b7 wordp:0x06b9 size:0x0002 C-string:'NUMBER'
//            PAGE  codep:0x17b7 wordp:0x06c4 size:0x0002 C-string:'PAGE'
//        POSITION  codep:0x17b7 wordp:0x06d3 size:0x0002 C-string:'POSITION'
//             R/W  codep:0x17b7 wordp:0x06dd size:0x0002 C-string:'R_slash_W'
//            TYPE  codep:0x17b7 wordp:0x06e8 size:0x0002 C-string:'TYPE'
//           WHERE  codep:0x17b7 wordp:0x06f4 size:0x0002 C-string:'WHERE'
//            WORD  codep:0x17b7 wordp:0x06ff size:0x0080 C-string:'WORD'
//        OPERATOR  codep:0x1d29 wordp:0x078c size:0x0084 C-string:'OPERATOR'
//           FORTH  codep:0x1ab5 wordp:0x081a size:0x000e C-string:'FORTH'
//          FREEZE  codep:0x224c wordp:0x0833 size:0x0022 C-string:'FREEZE'
//           BYE_2  codep:0x224c wordp:0x085d size:0x000a C-string:'BYE_2'
//          CHANGE  codep:0x224c wordp:0x0872 size:0x005f C-string:'CHANGE'
//         (SETUP)  codep:0x224c wordp:0x08dd size:0x005a C-string:'_ro_SETUP_rc_'
//           W0939  codep:0x224c wordp:0x0939 size:0x005a C-string:'W0939'
//              BL  codep:0x2214 wordp:0x099a size:0x0002 C-string:'BL'
//             C/L  codep:0x2214 wordp:0x09a4 size:0x0002 C-string:'C_slash_L'
//      INIT-FORTH  codep:0x2214 wordp:0x09b5 size:0x0002 C-string:'INIT_dash_FORTH'
//       INIT-USER  codep:0x2214 wordp:0x09c5 size:0x0002 C-string:'INIT_dash_USER'
//     INITIAL-DPB  codep:0x2214 wordp:0x09d6 size:0x0002 C-string:'INITIAL_dash_DPB'
//           LIMIT  codep:0x2214 wordp:0x09e2 size:0x0002 C-string:'LIMIT'
//          #CACHE  codep:0x1d29 wordp:0x09ef size:0x0002 C-string:'_n_CACHE'
//        #BUFFERS  codep:0x1d29 wordp:0x09fe size:0x0002 C-string:'_n_BUFFERS'
//          #SPACE  codep:0x1d29 wordp:0x0a0b size:0x0002 C-string:'_n_SPACE'
//       'RESTORE+  codep:0x1d29 wordp:0x0a1b size:0x0002 C-string:'_i_RESTORE_plus_'
//         'SETUP+  codep:0x1d29 wordp:0x0a29 size:0x0002 C-string:'_i_SETUP_plus_'
//          ?SOUND  codep:0x1d29 wordp:0x0a36 size:0x0002 C-string:'IsSOUND'
//          >BREAK  codep:0x1d29 wordp:0x0a43 size:0x0002 C-string:'_gt_BREAK'
//       BOOT-HOOK  codep:0x1d29 wordp:0x0a53 size:0x0002 C-string:'BOOT_dash_HOOK'
//       BOOT-LOAD  codep:0x1d29 wordp:0x0a63 size:0x0002 C-string:'BOOT_dash_LOAD'
//    BUFFER-BEGIN  codep:0x1d29 wordp:0x0a76 size:0x0002 C-string:'BUFFER_dash_BEGIN'
//     BUFFER-HEAD  codep:0x1d29 wordp:0x0a88 size:0x0002 C-string:'BUFFER_dash_HEAD'
//     CACHE-BEGIN  codep:0x1d29 wordp:0x0a9a size:0x0002 C-string:'CACHE_dash_BEGIN'
//      CACHE-HEAD  codep:0x1d29 wordp:0x0aab size:0x0002 C-string:'CACHE_dash_HEAD'
//          'FORTH  codep:0x224c wordp:0x0ab8 size:0x0012 C-string:'_i_FORTH'
//              ME  codep:0x0ad1 wordp:0x0ad1 size:0x0006 C-string:'ME'
//           W0AD9  codep:0x224c wordp:0x0ad9 size:0x0037 C-string:'W0AD9'
//           W0B12  codep:0x224c wordp:0x0b12 size:0x001c C-string:'W0B12'
//           W0B30  codep:0x224c wordp:0x0b30 size:0x002b C-string:'W0B30'
//           W0B5D  codep:0x224c wordp:0x0b5d size:0x0013 C-string:'W0B5D'
//         ?ENOUGH  codep:0x224c wordp:0x0b7c size:0x002e C-string:'IsENOUGH'
//               @  codep:0x0bb0 wordp:0x0bb0 size:0x0008 C-string:'Get'
//              @L  codep:0x0bbf wordp:0x0bbf size:0x001c C-string:'GetL'
//               !  codep:0x0be1 wordp:0x0be1 size:0x0009 C-string:'Store'
//              !L  codep:0x0bf1 wordp:0x0bf1 size:0x001c C-string:'StoreL'
//           (CS?)  codep:0x0c17 wordp:0x0c17 size:0x0006 C-string:'_ro_CS_ask__rc_'
//            2!_2  codep:0x0c24 wordp:0x0c24 size:0x000f C-string:'_2_ex__2'
//              2@  codep:0x0c3a wordp:0x0c3a size:0x000f C-string:'_2_at_'
//           BLANK  codep:0x224c wordp:0x0c53 size:0x0006 C-string:'BLANK'
//            C!_2  codep:0x0c60 wordp:0x0c60 size:0x0009 C-string:'C_ex__2'
//             C!L  codep:0x0c71 wordp:0x0c71 size:0x001c C-string:'C_ex_L'
//              C@  codep:0x0c94 wordp:0x0c94 size:0x000b C-string:'C_at_'
//             C@L  codep:0x0ca7 wordp:0x0ca7 size:0x001e C-string:'C_at_L'
//           COUNT  codep:0x224c wordp:0x0ccf size:0x000a C-string:'COUNT'
//          CMOVE>  codep:0x0ce4 wordp:0x0ce4 size:0x0022 C-string:'CMOVE_gt_'
//         CMOVE_2  codep:0x0d10 wordp:0x0d10 size:0x001c C-string:'CMOVE_2'
//          FILL_2  codep:0x0d35 wordp:0x0d35 size:0x001a C-string:'FILL_2'
//              P!  codep:0x0d56 wordp:0x0d56 size:0x0008 C-string:'P_ex_'
//              P@  codep:0x0d65 wordp:0x0d65 size:0x000a C-string:'P_at_'
//        SEG>ADDR  codep:0x0d7c wordp:0x0d7c size:0x0013 C-string:'SEG_gt_ADDR'
//        ADDR>SEG  codep:0x0d9c wordp:0x0d9c size:0x0013 C-string:'ADDR_gt_SEG'
//              >R  codep:0x0db6 wordp:0x0db6 size:0x000b C-string:'_gt_R'
//            ?DUP  codep:0x0dca wordp:0x0dca size:0x000c C-string:'IsDUP'
//           2DROP  codep:0x0de0 wordp:0x0de0 size:0x0009 C-string:'_2DROP'
//            2DUP  codep:0x0df2 wordp:0x0df2 size:0x000c C-string:'_2DUP'
//           2SWAP  codep:0x0e08 wordp:0x0e08 size:0x000d C-string:'_2SWAP'
//           DEPTH  codep:0x224c wordp:0x0e1f size:0x000c C-string:'DEPTH'
//            DROP  codep:0x0e34 wordp:0x0e34 size:0x0007 C-string:'DROP'
//             DUP  codep:0x0e43 wordp:0x0e43 size:0x0009 C-string:'DUP'
//               I  codep:0x0e52 wordp:0x0e52 size:0x0009 C-string:'I'
//              I'  codep:0x0e62 wordp:0x0e62 size:0x0008 C-string:'I_i_'
//               J  codep:0x0e70 wordp:0x0e70 size:0x0008 C-string:'J'
//            OVER  codep:0x0e81 wordp:0x0e81 size:0x000a C-string:'OVER'
//              R>  codep:0x0e92 wordp:0x0e92 size:0x000b C-string:'R_gt_'
//              R@  codep:0x0ea4 wordp:0x0ea4 size:0x0009 C-string:'R_at_'
//             ROT  codep:0x0eb5 wordp:0x0eb5 size:0x000b C-string:'ROT'
//             RP!  codep:0x0ec8 wordp:0x0ec8 size:0x0008 C-string:'RP_ex_'
//             RP@  codep:0x0ed8 wordp:0x0ed8 size:0x0006 C-string:'RP_at_'
//              S0  codep:0x224c wordp:0x0ee5 size:0x0006 C-string:'S0'
//            SWAP  codep:0x0ef4 wordp:0x0ef4 size:0x0009 C-string:'SWAP'
//             SP!  codep:0x0f05 wordp:0x0f05 size:0x0007 C-string:'SP_ex_'
//             SP@  codep:0x0f14 wordp:0x0f14 size:0x0008 C-string:'SP_at_'
//               0  codep:0x0f22 wordp:0x0f22 size:0x0008 C-string:'_0'
//               1  codep:0x0f30 wordp:0x0f30 size:0x0009 C-string:'_1'
//               2  codep:0x0f3f wordp:0x0f3f size:0x0009 C-string:'_2'
//               /  codep:0x0f4e wordp:0x0f4e size:0x000b C-string:'_slash_'
//            /MOD  codep:0x0f62 wordp:0x0f62 size:0x000c C-string:'_slash_MOD'
//               +  codep:0x0f74 wordp:0x0f74 size:0x000a C-string:'_plus_'
//              +!  codep:0x0f85 wordp:0x0f85 size:0x0009 C-string:'_plus__ex_'
//               -  codep:0x0f94 wordp:0x0f94 size:0x000a C-string:'_dash_'
//              +-  codep:0x224c wordp:0x0fa5 size:0x000a C-string:'_plus__dash_'
//               *  codep:0x0fb5 wordp:0x0fb5 size:0x000a C-string:'_star_'
//              */  codep:0x224c wordp:0x0fc6 size:0x0008 C-string:'_star__slash_'
//           */MOD  codep:0x224c wordp:0x0fd8 size:0x000a C-string:'_star__slash_MOD'
//              1+  codep:0x0fe9 wordp:0x0fe9 size:0x0008 C-string:'_1_plus_'
//              1-  codep:0x0ff8 wordp:0x0ff8 size:0x0008 C-string:'_1_dash_'
//              2*  codep:0x1007 wordp:0x1007 size:0x0009 C-string:'_2_star_'
//              2+  codep:0x1017 wordp:0x1017 size:0x0009 C-string:'_2_plus_'
//              2-  codep:0x1027 wordp:0x1027 size:0x0009 C-string:'_2_dash_'
//              2/  codep:0x1037 wordp:0x1037 size:0x0009 C-string:'_2_slash_'
//              4*  codep:0x1047 wordp:0x1047 size:0x000b C-string:'_4_star_'
//             ABS  codep:0x224c wordp:0x105a size:0x0006 C-string:'ABS'
//              D+  codep:0x1067 wordp:0x1067 size:0x000f C-string:'D_plus_'
//             D+-  codep:0x224c wordp:0x107e size:0x000a C-string:'D_plus__dash_'
//         DECIMAL  codep:0x224c wordp:0x1094 size:0x000a C-string:'DECIMAL'
//            DABS  codep:0x224c wordp:0x10a7 size:0x0006 C-string:'DABS'
//         DNEGATE  codep:0x10b9 wordp:0x10b9 size:0x000f C-string:'DNEGATE'
//              M*  codep:0x224c wordp:0x10cf size:0x0014 C-string:'M_star_'
//             M*/  codep:0x224c wordp:0x10eb size:0x0044 C-string:'M_star__slash_'
//              M+  codep:0x224c wordp:0x1136 size:0x0006 C-string:'M_plus_'
//              M/  codep:0x224c wordp:0x1143 size:0x0022 C-string:'M_slash_'
//           M/MOD  codep:0x224c wordp:0x116f size:0x0014 C-string:'M_slash_MOD'
//             MAX  codep:0x224c wordp:0x118b size:0x000e C-string:'MAX'
//             MOD  codep:0x224c wordp:0x11a1 size:0x0006 C-string:'MOD'
//             MIN  codep:0x224c wordp:0x11af size:0x000e C-string:'MIN'
//          NEGATE  codep:0x11c8 wordp:0x11c8 size:0x0009 C-string:'NEGATE'
//              U*  codep:0x11d8 wordp:0x11d8 size:0x000b C-string:'U_star_'
//           U/MOD  codep:0x11ed wordp:0x11ed size:0x000c C-string:'U_slash_MOD'
//            UMAX  codep:0x224c wordp:0x1202 size:0x000e C-string:'UMAX'
//            UMIN  codep:0x224c wordp:0x1219 size:0x0010 C-string:'UMIN'
//               >  codep:0x122f wordp:0x122f size:0x0013 C-string:'_gt_'
//               <  codep:0x1248 wordp:0x1248 size:0x0013 C-string:'_st_'
//               =  codep:0x1261 wordp:0x1261 size:0x0012 C-string:'_eq_'
//              0<  codep:0x127a wordp:0x127a size:0x000a C-string:'_0_st_'
//              0=  codep:0x128b wordp:0x128b size:0x000f C-string:'_0_eq_'
//              0>  codep:0x12a1 wordp:0x12a1 size:0x000c C-string:'_0_gt_'
//              D<  codep:0x224c wordp:0x12b4 size:0x0026 C-string:'D_st_'
//              U<  codep:0x12e1 wordp:0x12e1 size:0x000e C-string:'U_st_'
//             AND  codep:0x12f7 wordp:0x12f7 size:0x000a C-string:'AND'
//             NOT  codep:0x1309 wordp:0x1309 size:0x000f C-string:'NOT'
//           OFF_1  codep:0x224c wordp:0x1320 size:0x0008 C-string:'OFF_1'
//              ON  codep:0x224c wordp:0x132f size:0x000a C-string:'ON'
//              OR  codep:0x1340 wordp:0x1340 size:0x000a C-string:'OR'
//          TOGGLE  codep:0x1355 wordp:0x1355 size:0x0009 C-string:'TOGGLE'
//             XOR  codep:0x1366 wordp:0x1366 size:0x000a C-string:'XOR'
//               #  codep:0x224c wordp:0x1376 size:0x0024 C-string:'_n_'
//              #>  codep:0x224c wordp:0x13a1 size:0x000e C-string:'_n__gt_'
//              #S  codep:0x224c wordp:0x13b6 size:0x000e C-string:'_n_S'
//        (NUMBER)  codep:0x224c wordp:0x13d1 size:0x005a C-string:'_ro_NUMBER_rc_'
//      >UPPERCASE  codep:0x143a wordp:0x143a size:0x001e C-string:'_gt_UPPERCASE'
//              <#  codep:0x224c wordp:0x145f size:0x0008 C-string:'_st__n_'
//         CONVERT  codep:0x224c wordp:0x1473 size:0x0040 C-string:'CONVERT'
//           DIGIT  codep:0x14bd wordp:0x14bd size:0x0029 C-string:'DIGIT'
//            HOLD  codep:0x224c wordp:0x14ef size:0x0010 C-string:'HOLD'
//            S->D  codep:0x1508 wordp:0x1508 size:0x000b C-string:'S_dash__gt_D'
//            SIGN  codep:0x224c wordp:0x151c size:0x000e C-string:'SIGN'
//         (>CODE)  codep:0x1536 wordp:0x1536 size:0x0007 C-string:'_ro__gt_CODE_rc_'
//          (;VIA)  codep:0x1548 wordp:0x1548 size:0x000a C-string:'_ro__sc_VIA_rc_'
//         (+LOOP)  codep:0x155e wordp:0x155e size:0x0029 C-string:'_ro__plus_LOOP_rc_'
//         (/LOOP)  codep:0x1593 wordp:0x1593 size:0x001e C-string:'_ro__slash_LOOP_rc_'
//            (DO)  codep:0x15ba wordp:0x15ba size:0x000d C-string:'_ro_DO_rc_'
//          (LOOP)  codep:0x15d2 wordp:0x15d2 size:0x001e C-string:'_ro_LOOP_rc_'
//         0BRANCH  codep:0x15fc wordp:0x15fc size:0x0013 C-string:'_0BRANCH'
//            2LIT  codep:0x1618 wordp:0x1618 size:0x0009 C-string:'_2LIT'
//        ABORT-IT  codep:0x224c wordp:0x162e size:0x0029 C-string:'ABORT_dash_IT'
//          BRANCH  codep:0x1662 wordp:0x1662 size:0x0007 C-string:'BRANCH'
//         CFAEXEC  codep:0x1675 wordp:0x1675 size:0x0003 C-string:'CFAEXEC'
//         EXECUTE  codep:0x1684 wordp:0x1684 size:0x0005 C-string:'EXECUTE'
//            EXIT  codep:0x1692 wordp:0x1692 size:0x000a C-string:'EXIT'
//              GO  codep:0x16a3 wordp:0x16a3 size:0x0003 C-string:'GO'
//       REGISTERS  codep:0x1d29 wordp:0x16b4 size:0x0017 C-string:'REGISTERS'
//       INTERRUPT  codep:0x16d9 wordp:0x16d9 size:0x0069 C-string:'INTERRUPT'
//           LEAVE  codep:0x174c wordp:0x174c size:0x000b C-string:'LEAVE'
//             LIT  codep:0x175f wordp:0x175f size:0x0007 C-string:'LIT'
//         SYSCALL  codep:0x1772 wordp:0x1772 size:0x000f C-string:'SYSCALL'
//            USER  codep:0x224c wordp:0x178a size:0x0014 C-string:'USER'
//    USEREXECUTOR  codep:0x224c wordp:0x17af size:0x0012 C-string:'USEREXECUTOR'
//           +FIND  codep:0x224c wordp:0x17cb size:0x000a C-string:'_plus_FIND'
//         (-FIND)  codep:0x224c wordp:0x17e1 size:0x002c C-string:'_ro__dash_FIND_rc_'
//          (FIND)  codep:0x1818 wordp:0x1818 size:0x0049 C-string:'_ro_FIND_rc_'
//        (FORGET)  codep:0x224c wordp:0x186e size:0x00a0 C-string:'_ro_FORGET_rc_'
//         (LINKS)  codep:0x224c wordp:0x191a size:0x001a C-string:'_ro_LINKS_rc_'
//          <NAME>  codep:0x224c wordp:0x193f size:0x0018 C-string:'_st_NAME_gt_'
//           ?FIND  codep:0x224c wordp:0x1961 size:0x0016 C-string:'IsFIND'
//          ?[PTR]  codep:0x224c wordp:0x1982 size:0x000a C-string:'Is_bo_PTR_bc_'
//     DEFINITIONS  codep:0x224c wordp:0x199c size:0x000a C-string:'DEFINITIONS'
//           EMPTY  codep:0x224c wordp:0x19b0 size:0x001a C-string:'EMPTY'
//            FIND  codep:0x224c wordp:0x19d3 size:0x0014 C-string:'FIND'
//          FORGET  codep:0x224c wordp:0x19f2 size:0x0068 C-string:'FORGET'
//           W1A5C  codep:0x224c wordp:0x1a5c size:0x0008 C-string:'W1A5C'
//           W1A66  codep:0x224c wordp:0x1a66 size:0x0006 C-string:'W1A66'
//           W1A6E  codep:0x224c wordp:0x1a6e size:0x000c C-string:'W1A6E'
//      VOCABULARY  codep:0x224c wordp:0x1a89 size:0x0035 C-string:'VOCABULARY'
//           W1AC0  codep:0x1ac0 wordp:0x1ac0 size:0x0014 C-string:'W1AC0'
//         WITHIN?  codep:0x224c wordp:0x1ae0 size:0x0020 C-string:'WITHIN_ask_'
//         [-FIND]  codep:0x224c wordp:0x1b0c size:0x001c C-string:'_bo__dash_FIND_bc_'
//        [-FINDS]  codep:0x224c wordp:0x1b35 size:0x0042 C-string:'_bo__dash_FINDS_bc_'
//             '_2  codep:0x224c wordp:0x1b7d size:0x0006 C-string:'_i__2'
//         'STREAM  codep:0x224c wordp:0x1b8f size:0x001c C-string:'_i_STREAM'
//               (  codep:0x224c wordp:0x1bb1 size:0x0024 C-string:'_ro_'
//            (.")  codep:0x224c wordp:0x1bde size:0x0012 C-string:'_ro__dot__qm__rc_'
//         (;CODE)  codep:0x224c wordp:0x1bfc size:0x000c C-string:'_ro__sc_CODE_rc_'
//        (ABORT")  codep:0x224c wordp:0x1c15 size:0x0024 C-string:'_ro_ABORT_qm__rc_'
//         (ABORT)  codep:0x224c wordp:0x1c45 size:0x000a C-string:'_ro_ABORT_rc_'
//              ."  codep:0x224c wordp:0x1c56 size:0x0058 C-string:'Draw_qm_'
//        (CREATE)  codep:0x224c wordp:0x1cbb size:0x0076 C-string:'_ro_CREATE_rc_'
//        (EXPECT)  codep:0x224c wordp:0x1d3e size:0x008a C-string:'_ro_EXPECT_rc_'
//     (INTERPRET)  codep:0x224c wordp:0x1dd8 size:0x0040 C-string:'_ro_INTERPRET_rc_'
//          (LOAD)  codep:0x224c wordp:0x1e23 size:0x0039 C-string:'_ro_LOAD_rc_'
//         (WHERE)  codep:0x224c wordp:0x1e68 size:0x0093 C-string:'_ro_WHERE_rc_'
//          (WORD)  codep:0x224c wordp:0x1f06 size:0x006d C-string:'_ro_WORD_rc_'
//           +LOOP  codep:0x224c wordp:0x1f7d size:0x0012 C-string:'_plus_LOOP'
//               ,  codep:0x224c wordp:0x1f95 size:0x000e C-string:'_co_'
//           /LOOP  codep:0x224c wordp:0x1fad size:0x0012 C-string:'_slash_LOOP'
//               ;  codep:0x224c wordp:0x1fc5 size:0x000c C-string:'_sc_'
//           ?COMP  codep:0x224c wordp:0x1fdb size:0x0017 C-string:'IsCOMP'
//           W1FF4  codep:0x224c wordp:0x1ff4 size:0x0034 C-string:'W1FF4'
//            ?CSP  codep:0x224c wordp:0x2031 size:0x0024 C-string:'IsCSP'
//           W2057  codep:0x224c wordp:0x2057 size:0x0020 C-string:'W2057'
//        ?LOADING  codep:0x224c wordp:0x2084 size:0x0017 C-string:'IsLOADING'
//          ?PAIRS  codep:0x224c wordp:0x20a6 size:0x001e C-string:'IsPAIRS'
//           W20C6  codep:0x224c wordp:0x20c6 size:0x0055 C-string:'W20C6'
//          ABORT"  codep:0x224c wordp:0x2126 size:0x0044 C-string:'ABORT_qm_'
//           AGAIN  codep:0x224c wordp:0x2174 size:0x0010 C-string:'AGAIN'
//           ALLOT  codep:0x224c wordp:0x218e size:0x000a C-string:'ALLOT'
//           BEGIN  codep:0x224c wordp:0x21a2 size:0x0008 C-string:'BEGIN'
//              C,  codep:0x224c wordp:0x21b1 size:0x000a C-string:'C_co_'
//             CFA  codep:0x224c wordp:0x21c3 size:0x0004 C-string:'CFA'
//           W21C9  codep:0x21c9 wordp:0x21c9 size:0x001c C-string:'W21C9'
//         COMPILE  codep:0x224c wordp:0x21f1 size:0x0010 C-string:'COMPILE'
//        CONSTANT  codep:0x224c wordp:0x220e size:0x000f C-string:'CONSTANT'
//              DO  codep:0x224c wordp:0x2224 size:0x000c C-string:'DO'
//               :  codep:0x224c wordp:0x2236 size:0x0024 C-string:'_c_'
//           DOES>  codep:0x224c wordp:0x2264 size:0x001a C-string:'DOES_gt_'
//            ELSE  codep:0x224c wordp:0x2287 size:0x0018 C-string:'ELSE'
//         ENCLOSE  codep:0x22ab wordp:0x22ab size:0x003b C-string:'ENCLOSE'
//            HERE  codep:0x224c wordp:0x22ef size:0x0006 C-string:'HERE'
//             HEX  codep:0x224c wordp:0x22fd size:0x000a C-string:'HEX'
//              IF  codep:0x224c wordp:0x230e size:0x000e C-string:'IF'
//       IMMEDIATE  codep:0x224c wordp:0x232a size:0x000a C-string:'IMMEDIATE'
//          LATEST  codep:0x224c wordp:0x233f size:0x000e C-string:'LATEST'
//             LFA  codep:0x224c wordp:0x2355 size:0x0006 C-string:'LFA'
//         LITERAL  codep:0x224c wordp:0x2367 size:0x0016 C-string:'LITERAL'
//            LOOP  codep:0x224c wordp:0x2386 size:0x0012 C-string:'LOOP'
//        2LITERAL  codep:0x224c wordp:0x23a5 size:0x001a C-string:'_2LITERAL'
//             NFA  codep:0x224c wordp:0x23c7 size:0x000e C-string:'NFA'
//             PAD  codep:0x224c wordp:0x23dd size:0x000a C-string:'PAD'
//             PFA  codep:0x224c wordp:0x23ef size:0x000c C-string:'PFA'
//           QUERY  codep:0x224c wordp:0x2405 size:0x0012 C-string:'QUERY'
//            QUIT  codep:0x224c wordp:0x2420 size:0x003c C-string:'QUIT'
//          REPEAT  codep:0x224c wordp:0x2467 size:0x0010 C-string:'REPEAT'
//          SMUDGE  codep:0x224c wordp:0x2482 size:0x000a C-string:'SMUDGE'
//            TEXT  codep:0x224c wordp:0x2495 size:0x0022 C-string:'TEXT'
//            THEN  codep:0x224c wordp:0x24c0 size:0x0012 C-string:'THEN'
//        TRAVERSE  codep:0x224c wordp:0x24df size:0x001a C-string:'TRAVERSE'
//           UNTIL  codep:0x224c wordp:0x2503 size:0x0010 C-string:'UNTIL'
//        VARIABLE  codep:0x224c wordp:0x2520 size:0x0008 C-string:'VARIABLE'
//           WHILE  codep:0x224c wordp:0x2532 size:0x0006 C-string:'WHILE'
//                 codep:0x224c wordp:0x253e size:0x0014 C-string:''
//               [  codep:0x224c wordp:0x2558 size:0x0008 C-string:'_bo_'
//       [COMPILE]  codep:0x224c wordp:0x256e size:0x000a C-string:'_bo_COMPILE_bc_'
//               \  codep:0x224c wordp:0x257e size:0x001e C-string:'_bs_'
//               ]  codep:0x224c wordp:0x25a2 size:0x000a C-string:'_bc_'
//     (?TERMINAL)  codep:0x25bc wordp:0x25bc size:0x0011 C-string:'_ro__ask_TERMINAL_rc_'
//           (KEY)  codep:0x25d7 wordp:0x25d7 size:0x001c C-string:'_ro_KEY_rc_'
//          BEEPMS  codep:0x1d29 wordp:0x25fe size:0x0002 C-string:'BEEPMS'
//        BEEPTONE  codep:0x1d29 wordp:0x260d size:0x0002 C-string:'BEEPTONE'
//            TONE  codep:0x2618 wordp:0x2618 size:0x0015 C-string:'TONE'
//        BEEPON_2  codep:0x2638 wordp:0x2638 size:0x000f C-string:'BEEPON_2'
//         BEEPOFF  codep:0x2653 wordp:0x2653 size:0x000f C-string:'BEEPOFF'
//            BEEP  codep:0x224c wordp:0x266b size:0x001a C-string:'BEEP'
//          (TYPE)  codep:0x224c wordp:0x2690 size:0x0036 C-string:'_ro_TYPE_rc_'
//            (BS)  codep:0x224c wordp:0x26cf size:0x0016 C-string:'_ro_BS_rc_'
//            (CR)  codep:0x224c wordp:0x26ee size:0x0038 C-string:'_ro_CR_rc_'
//          (EMIT)  codep:0x224c wordp:0x2731 size:0x0010 C-string:'_ro_EMIT_rc_'
//          (PAGE)  codep:0x224c wordp:0x274c size:0x000c C-string:'_ro_PAGE_rc_'
//      (POSITION)  codep:0x2767 wordp:0x2767 size:0x001b C-string:'_ro_POSITION_rc_'
//       -TRAILING  codep:0x224c wordp:0x2790 size:0x0024 C-string:'_dash_TRAILING'
//               .  codep:0x224c wordp:0x27ba size:0x0006 C-string:'Draw'
//           .LINE  codep:0x224c wordp:0x27ca size:0x0012 C-string:'DrawLINE'
//              .R  codep:0x224c wordp:0x27e3 size:0x000a C-string:'DrawR'
//          >VMOVE  codep:0x27f8 wordp:0x27f8 size:0x0024 C-string:'_gt_VMOVE'
//               ?  codep:0x224c wordp:0x2822 size:0x0006 C-string:'Is'
//       ?POSITION  codep:0x2836 wordp:0x2836 size:0x000f C-string:'IsPOSITION'
//        CUR>ADDR  codep:0x2852 wordp:0x2852 size:0x000b C-string:'CUR_gt_ADDR'
//          CURFWD  codep:0x224c wordp:0x2868 size:0x0026 C-string:'CURFWD'
//              D.  codep:0x224c wordp:0x2895 size:0x0008 C-string:'D_dot_'
//             D.R  codep:0x224c wordp:0x28a5 size:0x0026 C-string:'D_dot_R'
//             ID.  codep:0x224c wordp:0x28d3 size:0x004c C-string:'ID_dot_'
//            LIST  codep:0x224c wordp:0x2928 size:0x003e C-string:'LIST'
//        SCROLLUP  codep:0x2973 wordp:0x2973 size:0x0019 C-string:'SCROLLUP'
//           SPACE  codep:0x224c wordp:0x2996 size:0x0006 C-string:'SPACE'
//          SPACES  codep:0x224c wordp:0x29a7 size:0x0016 C-string:'SPACES'
//              U.  codep:0x224c wordp:0x29c4 size:0x0006 C-string:'U_dot_'
//             U.R  codep:0x224c wordp:0x29d2 size:0x0008 C-string:'U_dot_R'
//              V@  codep:0x29e1 wordp:0x29e1 size:0x0014 C-string:'V_at_'
//              V!  codep:0x29fc wordp:0x29fc size:0x0012 C-string:'V_ex_'
//           VFILL  codep:0x2a18 wordp:0x2a18 size:0x0014 C-string:'VFILL'
//           VMOVE  codep:0x2a36 wordp:0x2a36 size:0x001e C-string:'VMOVE'
//          VMOVE-  codep:0x2a5f wordp:0x2a5f size:0x0007 C-string:'VMOVE_dash_'
//         MS/TICK  codep:0x2214 wordp:0x2a72 size:0x0002 C-string:'MS_slash_TICK'
//       TICKS/ADJ  codep:0x2214 wordp:0x2a82 size:0x0002 C-string:'TICKS_slash_ADJ'
//          MS/ADJ  codep:0x2214 wordp:0x2a8f size:0x0002 C-string:'MS_slash_ADJ'
//            TIME  codep:0x2a9a wordp:0x2a9a size:0x0050 C-string:'TIME'
//              MS  codep:0x224c wordp:0x2af1 size:0x0024 C-string:'MS'
//         #DRIVES  codep:0x2214 wordp:0x2b21 size:0x0002 C-string:'_n_DRIVES'
//           #FCBS  codep:0x2214 wordp:0x2b2d size:0x0002 C-string:'_n_FCBS'
//          #FILES  codep:0x2214 wordp:0x2b3a size:0x0002 C-string:'_n_FILES'
//        #SEC/TRK  codep:0x2214 wordp:0x2b49 size:0x0002 C-string:'_n_SEC_slash_TRK'
//        DOS-FILE  codep:0x2214 wordp:0x2b58 size:0x0002 C-string:'DOS_dash_FILE'
//         RETRIES  codep:0x2214 wordp:0x2b66 size:0x0002 C-string:'RETRIES'
//       SECORIGIN  codep:0x2214 wordp:0x2b76 size:0x0002 C-string:'SECORIGIN'
//          'SVBUF  codep:0x1d29 wordp:0x2b83 size:0x0002 C-string:'_i_SVBUF'
//          'MTBUF  codep:0x1d29 wordp:0x2b90 size:0x0002 C-string:'_i_MTBUF'
//           #SECS  codep:0x1d29 wordp:0x2b9c size:0x0002 C-string:'_n_SECS'
//            'FCB  codep:0x1d29 wordp:0x2ba7 size:0x0002 C-string:'_i_FCB'
//          'CACHE  codep:0x1d29 wordp:0x2bb4 size:0x0002 C-string:'_i_CACHE'
//       'DOSMOUNT  codep:0x1d29 wordp:0x2bc4 size:0x0002 C-string:'_i_DOSMOUNT'
//     'DOSUNMOUNT  codep:0x1d29 wordp:0x2bd6 size:0x0002 C-string:'_i_DOSUNMOUNT'
//          REUSEC  codep:0x1d29 wordp:0x2be3 size:0x0002 C-string:'REUSEC'
//     1STCACHEBUF  codep:0x1d29 wordp:0x2bf5 size:0x0002 C-string:'_1STCACHEBUF'
//        BLKCACHE  codep:0x1d29 wordp:0x2c04 size:0x0002 C-string:'BLKCACHE'
//      DEFAULTDRV  codep:0x1d29 wordp:0x2c15 size:0x0002 C-string:'DEFAULTDRV'
//      DISK-ERROR  codep:0x1d29 wordp:0x2c26 size:0x0002 C-string:'DISK_dash_ERROR'
//           DRIVE  codep:0x1d29 wordp:0x2c32 size:0x0002 C-string:'DRIVE'
//             DTA  codep:0x1d29 wordp:0x2c3c size:0x0004 C-string:'DTA'
//            FILE  codep:0x1d29 wordp:0x2c49 size:0x0002 C-string:'FILE'
//           FRESH  codep:0x1d29 wordp:0x2c55 size:0x0002 C-string:'FRESH'
//            HEAD  codep:0x1d29 wordp:0x2c60 size:0x0002 C-string:'HEAD'
//           LPREV  codep:0x1d29 wordp:0x2c6c size:0x0002 C-string:'LPREV'
//          OFFSET  codep:0x1d29 wordp:0x2c79 size:0x0002 C-string:'OFFSET'
//            PREV  codep:0x1d29 wordp:0x2c84 size:0x0002 C-string:'PREV'
//             SEC  codep:0x1d29 wordp:0x2c8e size:0x0002 C-string:'SEC'
//        SEGCACHE  codep:0x1d29 wordp:0x2c9d size:0x0002 C-string:'SEGCACHE'
//            SYSK  codep:0x1d29 wordp:0x2ca8 size:0x0002 C-string:'SYSK'
//           TRACK  codep:0x1d29 wordp:0x2cb4 size:0x0002 C-string:'TRACK'
//             USE  codep:0x1d29 wordp:0x2cbe size:0x0002 C-string:'USE'
//     =DRIVESIZES  codep:0x1d29 wordp:0x2cd0 size:0x0006 C-string:'_eq_DRIVESIZES'
//      DRIVESIZES  codep:0x224c wordp:0x2ce5 size:0x000a C-string:'DRIVESIZES'
//          BARRAY  codep:0x224c wordp:0x2cfa size:0x0004 C-string:'BARRAY'
//          WARRAY  codep:0x224c wordp:0x2d09 size:0x0008 C-string:'WARRAY'
//   =DRIVENUMBERS  codep:0x1d29 wordp:0x2d23 size:0x0004 C-string:'_eq_DRIVENUMBERS'
//        =FCBPFAS  codep:0x1d29 wordp:0x2d34 size:0x0008 C-string:'_eq_FCBPFAS'
//     =FILEBLOCKS  codep:0x1d29 wordp:0x2d4c size:0x0008 C-string:'_eq_FILEBLOCKS'
//      =FILETYPES  codep:0x1d29 wordp:0x2d63 size:0x0004 C-string:'_eq_FILETYPES'
//        =OFFSETS  codep:0x1d29 wordp:0x2d74 size:0x0008 C-string:'_eq_OFFSETS'
//          =R/W'S  codep:0x1d29 wordp:0x2d87 size:0x0008 C-string:'_eq_R_slash_W_i_S'
//             FCB  codep:0x1d29 wordp:0x2d97 size:0x0058 C-string:'FCB'
//       FILENAMES  codep:0x1d29 wordp:0x2dfd size:0x002c C-string:'FILENAMES'
//    DRIVENUMBERS  codep:0x224c wordp:0x2e3a size:0x0006 C-string:'DRIVENUMBERS'
//         FCBPFAS  codep:0x224c wordp:0x2e4c size:0x0006 C-string:'FCBPFAS'
//      FILEBLOCKS  codep:0x224c wordp:0x2e61 size:0x0006 C-string:'FILEBLOCKS'
//       FILETYPES  codep:0x224c wordp:0x2e75 size:0x0006 C-string:'FILETYPES'
//         OFFSETS  codep:0x224c wordp:0x2e87 size:0x0006 C-string:'OFFSETS'
//           R/W'S  codep:0x224c wordp:0x2e97 size:0x0006 C-string:'R_slash_W_i_S'
//              L@  codep:0x2ea4 wordp:0x2ea4 size:0x000d C-string:'L_at_'
//              L!  codep:0x2eb8 wordp:0x2eb8 size:0x000d C-string:'L_ex_'
//             LC@  codep:0x2ecd wordp:0x2ecd size:0x0010 C-string:'LC_at_'
//             LC!  codep:0x2ee5 wordp:0x2ee5 size:0x000e C-string:'LC_ex_'
//          LCMOVE  codep:0x2efe wordp:0x2efe size:0x002c C-string:'LCMOVE'
//         {LXCHG}  codep:0x1d29 wordp:0x2f36 size:0x0010 C-string:'_co_LXCHG_cc_'
//          LWSCAN  codep:0x2f51 wordp:0x2f51 size:0x0029 C-string:'LWSCAN'
//      [SEGCACHE]  codep:0x224c wordp:0x2f89 size:0x000e C-string:'_bo_SEGCACHE_bc_'
//      [BLKCACHE]  codep:0x224c wordp:0x2fa6 size:0x000e C-string:'_bo_BLKCACHE_bc_'
//          UPDATE  codep:0x224c wordp:0x2fbf size:0x000e C-string:'UPDATE'
//         REFRESH  codep:0x224c wordp:0x2fd9 size:0x0006 C-string:'REFRESH'
//           MTBUF  codep:0x224c wordp:0x2fe9 size:0x0036 C-string:'MTBUF'
//       MTBUFFERS  codep:0x224c wordp:0x302d size:0x000e C-string:'MTBUFFERS'
//        (BUFFER)  codep:0x3048 wordp:0x3048 size:0x0054 C-string:'_ro_BUFFER_rc_'
//     ADVANCE>DEF  codep:0x30a8 wordp:0x30a8 size:0x0021 C-string:'ADVANCE_gt_DEF'
//         MTCACHE  codep:0x224c wordp:0x30d5 size:0x0032 C-string:'MTCACHE'
//       INITCACHE  codep:0x224c wordp:0x3115 size:0x0056 C-string:'INITCACHE'
//         (CACHE)  codep:0x224c wordp:0x3177 size:0x0036 C-string:'_ro_CACHE_rc_'
//       CACHE>USE  codep:0x224c wordp:0x31bb size:0x001c C-string:'CACHE_gt_USE'
//       ?INBCACHE  codep:0x224c wordp:0x31e5 size:0x0026 C-string:'IsINBCACHE'
//     [BUF>CACHE]  codep:0x224c wordp:0x321b size:0x001c C-string:'_bo_BUF_gt_CACHE_bc_'
//       BUF>CACHE  codep:0x224c wordp:0x3245 size:0x001a C-string:'BUF_gt_CACHE'
//         SEC-I/O  codep:0x224c wordp:0x326b size:0x005e C-string:'SEC_dash_I_slash_O'
//         T&SCALC  codep:0x224c wordp:0x32d5 size:0x001e C-string:'T_and_SCALC'
//           [R/W]  codep:0x224c wordp:0x32fd size:0x003a C-string:'_bo_R_slash_W_bc_'
//        [DIRECT]  codep:0x224c wordp:0x3344 size:0x0048 C-string:'_bo_DIRECT_bc_'
//         <MOUNT>  codep:0x224c wordp:0x3398 size:0x0064 C-string:'_st_MOUNT_gt_'
//         DIRNAME  codep:0x1d29 wordp:0x3408 size:0x000b C-string:'DIRNAME'
//             DR0  codep:0x224c wordp:0x341b size:0x0016 C-string:'DR0'
//             DR1  codep:0x224c wordp:0x3439 size:0x0018 C-string:'DR1'
//       <UNMOUNT>  codep:0x224c wordp:0x345f size:0x005e C-string:'_st_UNMOUNT_gt_'
//         UNMOUNT  codep:0x224c wordp:0x34c9 size:0x0017 C-string:'UNMOUNT'
//         NOFILES  codep:0x224c wordp:0x34ec size:0x0014 C-string:'NOFILES'
//        NODRIVES  codep:0x224c wordp:0x350d size:0x0004 C-string:'NODRIVES'
//           EMITS  codep:0x224c wordp:0x351b size:0x0016 C-string:'EMITS'
//           FILES  codep:0x224c wordp:0x353b size:0x00ed C-string:'FILES'
//          DRIVES  codep:0x224c wordp:0x3633 size:0x0004 C-string:'DRIVES'
//    (DISKERROR?)  codep:0x224c wordp:0x3648 size:0x0028 C-string:'_ro_DISKERROR_ask__rc_'
//           W3672  codep:0x3672 wordp:0x3672 size:0x000b C-string:'W3672'
//           W367F  codep:0x367f wordp:0x367f size:0x003a C-string:'W367F'
//           W36BB  codep:0x36bb wordp:0x36bb size:0x001a C-string:'W36BB'
//           W36D7  codep:0x224c wordp:0x36d7 size:0x003c C-string:'W36D7'
//           W3715  codep:0x224c wordp:0x3715 size:0x003c C-string:'W3715'
//           W3753  codep:0x224c wordp:0x3753 size:0x002e C-string:'W3753'
//           W3783  codep:0x224c wordp:0x3783 size:0x002a C-string:'W3783'
//           W37AF  codep:0x224c wordp:0x37af size:0x0022 C-string:'W37AF'
//           W37D3  codep:0x224c wordp:0x37d3 size:0x004e C-string:'W37D3'
//           W3823  codep:0x224c wordp:0x3823 size:0x0024 C-string:'W3823'
//           W3849  codep:0x224c wordp:0x3849 size:0x000c C-string:'W3849'
//         BLOCK_1  codep:0x224c wordp:0x385f size:0x0016 C-string:'BLOCK_1'
//        LBLOCK_1  codep:0x224c wordp:0x3880 size:0x001c C-string:'LBLOCK_1'
//   SAVE-BUFFERS2  codep:0x224c wordp:0x38ad size:0x003e C-string:'SAVE_dash_BUFFERS2'
//   EMPTY-BUFFERS  codep:0x224c wordp:0x38fd size:0x000c C-string:'EMPTY_dash_BUFFERS'
//           FLUSH  codep:0x224c wordp:0x3913 size:0x0006 C-string:'FLUSH'
//            COPY  codep:0x224c wordp:0x3922 size:0x0012 C-string:'COPY'
//          BLOCKS  codep:0x224c wordp:0x393f size:0x004a C-string:'BLOCKS'
//             PSW  codep:0x2214 wordp:0x3991 size:0x0002 C-string:'PSW'
//              AX  codep:0x2214 wordp:0x399a size:0x0002 C-string:'AX'
//              BX  codep:0x2214 wordp:0x39a3 size:0x0002 C-string:'BX'
//              CX  codep:0x2214 wordp:0x39ac size:0x0002 C-string:'CX'
//              DX  codep:0x2214 wordp:0x39b5 size:0x0002 C-string:'DX'
//              BP  codep:0x2214 wordp:0x39be size:0x0002 C-string:'BP'
//              DI  codep:0x2214 wordp:0x39c7 size:0x0002 C-string:'DI'
//              SI  codep:0x2214 wordp:0x39d0 size:0x0002 C-string:'SI'
//              DS  codep:0x2214 wordp:0x39d9 size:0x0002 C-string:'DS'
//              ES  codep:0x2214 wordp:0x39e2 size:0x0002 C-string:'ES'
//           MATCH  codep:0x39ee wordp:0x39ee size:0x003e C-string:'MATCH'
//        @EXECUTE  codep:0x3a39 wordp:0x3a39 size:0x0007 C-string:'GetEXECUTE'
//             NOP  codep:0x224c wordp:0x3a48 size:0x0002 C-string:'NOP'
//              **  codep:0x224c wordp:0x3a51 size:0x0002 C-string:'_star__star_'
//        'UNRAVEL  codep:0x1d29 wordp:0x3a60 size:0x0002 C-string:'_i_UNRAVEL'
//         UNRAVEL  codep:0x224c wordp:0x3a6e size:0x0038 C-string:'UNRAVEL'
//        ?UNRAVEL  codep:0x224c wordp:0x3ab3 size:0x0008 C-string:'IsUNRAVEL'
//             SYN  codep:0x224c wordp:0x3ac3 size:0x0042 C-string:'SYN'
//           TRACE  codep:0x1d29 wordp:0x3b0f size:0x0002 C-string:'TRACE'
//          [TRACE  codep:0x1d29 wordp:0x3b1c size:0x0002 C-string:'_bo_TRACE'
//          TRACE]  codep:0x1d29 wordp:0x3b29 size:0x0002 C-string:'TRACE_bc_'
//              D@  codep:0x3aec wordp:0x3b32 size:0x0002 C-string:'GetD'
//              V=  codep:0x3aec wordp:0x3b3b size:0x0002 C-string:'V_eq_'
//              C=  codep:0x3aec wordp:0x3b44 size:0x0002 C-string:'C_eq_'
//             2V=  codep:0x224c wordp:0x3b4e size:0x000a C-string:'_2V_eq_'
//             2C=  codep:0x224c wordp:0x3b60 size:0x000f C-string:'_2C_eq_'
//               3  codep:0x2214 wordp:0x3b75 size:0x0002 C-string:'_3'
//               4  codep:0x2214 wordp:0x3b7d size:0x0002 C-string:'_4'
//               5  codep:0x2214 wordp:0x3b85 size:0x0002 C-string:'_5'
//               6  codep:0x2214 wordp:0x3b8d size:0x0002 C-string:'_6'
//               7  codep:0x2214 wordp:0x3b95 size:0x0002 C-string:'_7'
//               8  codep:0x2214 wordp:0x3b9d size:0x0002 C-string:'_8'
//               9  codep:0x2214 wordp:0x3ba5 size:0x0002 C-string:'_9'
//              -1  codep:0x2214 wordp:0x3bae size:0x0002 C-string:'_dash_1'
//              -2  codep:0x2214 wordp:0x3bb7 size:0x0002 C-string:'_dash_2'
//          THRU_1  codep:0x224c wordp:0x3bc2 size:0x0020 C-string:'THRU_1'
//         (TRACE)  codep:0x224c wordp:0x3bee size:0x0002 C-string:'_ro_TRACE_rc_'
//             OVA  codep:0x1d29 wordp:0x3bf8 size:0x0002 C-string:'OVA'
//            T-DP  codep:0x1d29 wordp:0x3c03 size:0x0006 C-string:'T_dash_DP'
//     TRANS-ALLOT  codep:0x224c wordp:0x3c19 size:0x000e C-string:'TRANS_dash_ALLOT'
//         NEWT-DP  codep:0x224c wordp:0x3c33 size:0x000e C-string:'NEWT_dash_DP'
//       TRANSIENT  codep:0x224c wordp:0x3c4f size:0x0016 C-string:'TRANSIENT'
//        RESIDENT  codep:0x224c wordp:0x3c72 size:0x0016 C-string:'RESIDENT'
//           HEAD:  codep:0x224c wordp:0x3c92 size:0x0027 C-string:'HEAD_c_'
//              T:  codep:0x224c wordp:0x3cc0 size:0x0018 C-string:'T_c_'
//              T;  codep:0x224c wordp:0x3cdf size:0x000a C-string:'T_sc_'
//           W3CEB  codep:0x224c wordp:0x3ceb size:0x004c C-string:'W3CEB'
//           W3D39  codep:0x224c wordp:0x3d39 size:0x004a C-string:'W3D39'
//         DISPOSE  codep:0x224c wordp:0x3d8f size:0x0062 C-string:'DISPOSE'
//             '_1  codep:0x224c wordp:0x3df7 size:0x0020 C-string:'_i__1'
//           (2V:)  codep:0x1d29 wordp:0x3e21 size:0x0004 C-string:'_ro_2V_c__rc_'
//            (C:)  codep:0x2214 wordp:0x3e2e size:0x0002 C-string:'_ro_C_c__rc_'
//           (2C:)  codep:0x3b68 wordp:0x3e3a size:0x0004 C-string:'_ro_2C_c__rc_'
//              V:  codep:0x224c wordp:0x3e45 size:0x000e C-string:'V_c_'
//             2V:  codep:0x224c wordp:0x3e5b size:0x000e C-string:'_2V_c_'
//              C:  codep:0x224c wordp:0x3e70 size:0x000c C-string:'C_c_'
//             2C:  codep:0x224c wordp:0x3e84 size:0x000e C-string:'_2C_c_'
//             TAB  codep:0x224c wordp:0x3e9a size:0x0018 C-string:'TAB'
//           ROOM?  codep:0x224c wordp:0x3ebc size:0x0014 C-string:'ROOM_ask_'
//        EXECUTES  codep:0x224c wordp:0x3edd size:0x000a C-string:'EXECUTES'
//          BINARY  codep:0x224c wordp:0x3ef2 size:0x0008 C-string:'BINARY'
//              H.  codep:0x224c wordp:0x3f01 size:0x0010 C-string:'H_dot_'
//           RANGE  codep:0x224c wordp:0x3f1b size:0x0008 C-string:'RANGE'
//           ASCII  codep:0x224c wordp:0x3f2d size:0x000c C-string:'ASCII'
// SET_STR_AS_PARAM  codep:0x224c wordp:0x3f3b size:0x0010 C-string:'SET_STR_AS_PARAM'
//               "  codep:0x224c wordp:0x3f51 size:0x0036 C-string:'_qm_'
//             DU<  codep:0x224c wordp:0x3f8f size:0x0018 C-string:'DU_st_'
//            PICK  codep:0x224c wordp:0x3fb0 size:0x0016 C-string:'PICK'
//            ROLL  codep:0x224c wordp:0x3fcf size:0x0036 C-string:'ROLL'
//           2OVER  codep:0x224c wordp:0x400f size:0x000a C-string:'_2OVER'
//              D-  codep:0x224c wordp:0x4020 size:0x0006 C-string:'D_dash_'
//             D0=  codep:0x224c wordp:0x402e size:0x0006 C-string:'D0_eq_'
//              D=  codep:0x224c wordp:0x403b size:0x0006 C-string:'D_eq_'
//              D>  codep:0x224c wordp:0x4048 size:0x0006 C-string:'D_gt_'
//          WITHIN  codep:0x224c wordp:0x4059 size:0x0014 C-string:'WITHIN'
//            DMIN  codep:0x224c wordp:0x4076 size:0x0010 C-string:'DMIN'
//            DMAX  codep:0x224c wordp:0x408f size:0x0010 C-string:'DMAX'
//          MYSELF  codep:0x224c wordp:0x40aa size:0x001c C-string:'MYSELF'
//            >TIB  codep:0x224c wordp:0x40cf size:0x0014 C-string:'_gt_TIB'
//         DOSPARM  codep:0x224c wordp:0x40ef size:0x000c C-string:'DOSPARM'
//            XFCB  codep:0x224c wordp:0x4104 size:0x000a C-string:'XFCB'
//             DRV  codep:0x224c wordp:0x4116 size:0x0006 C-string:'DRV'
//             NAM  codep:0x224c wordp:0x4124 size:0x0008 C-string:'NAM'
//             TYP  codep:0x224c wordp:0x4134 size:0x000c C-string:'TYP'
//          CURBLK  codep:0x224c wordp:0x414b size:0x000c C-string:'CURBLK'
//         RECSIZE  codep:0x224c wordp:0x4163 size:0x000c C-string:'RECSIZE'
//        FILESIZE  codep:0x224c wordp:0x417c size:0x000c C-string:'FILESIZE'
//          CURREC  codep:0x224c wordp:0x4193 size:0x000c C-string:'CURREC'
//          RELREC  codep:0x224c wordp:0x41aa size:0x000c C-string:'RELREC'
//          CLRFCB  codep:0x224c wordp:0x41c1 size:0x001c C-string:'CLRFCB'
//          SYSTEM  codep:0x224c wordp:0x41e8 size:0x000e C-string:'SYSTEM'
//         SYSUTIL  codep:0x224c wordp:0x4202 size:0x0010 C-string:'SYSUTIL'
//         DOSCALL  codep:0x224c wordp:0x421e size:0x000e C-string:'DOSCALL'
//          SELDSK  codep:0x224c wordp:0x4237 size:0x0014 C-string:'SELDSK'
//             A::  codep:0x224c wordp:0x4253 size:0x0006 C-string:'A_c__c_'
//             B::  codep:0x224c wordp:0x4261 size:0x0006 C-string:'B_c__c_'
//             C::  codep:0x224c wordp:0x426f size:0x0006 C-string:'C_c__c_'
//          SETFCB  codep:0x224c wordp:0x4280 size:0x0046 C-string:'SETFCB'
//            INIT  codep:0x224c wordp:0x42cf size:0x0008 C-string:'INIT'
//         FCBCALL  codep:0x224c wordp:0x42e3 size:0x0016 C-string:'FCBCALL'
//            OPEN  codep:0x224c wordp:0x4302 size:0x0008 C-string:'OPEN'
//           CLOSE  codep:0x224c wordp:0x4314 size:0x0008 C-string:'CLOSE'
//       SEARCH1ST  codep:0x224c wordp:0x432a size:0x0008 C-string:'SEARCH1ST'
//        READNEXT  codep:0x224c wordp:0x433f size:0x0008 C-string:'READNEXT'
//       WRITENEXT  codep:0x224c wordp:0x4355 size:0x0008 C-string:'WRITENEXT'
//            MAKE  codep:0x224c wordp:0x4366 size:0x0008 C-string:'MAKE'
//         DOS-DTA  codep:0x224c wordp:0x437a size:0x0014 C-string:'DOS_dash_DTA'
//     READ-RANDOM  codep:0x224c wordp:0x439e size:0x0008 C-string:'READ_dash_RANDOM'
//    WRITE-RANDOM  codep:0x224c wordp:0x43b7 size:0x0008 C-string:'WRITE_dash_RANDOM'
//           W43C1  codep:0x224c wordp:0x43c1 size:0x000d C-string:'W43C1'
//      MAKE<NAME>  codep:0x224c wordp:0x43dd size:0x0018 C-string:'MAKE_st_NAME_gt_'
//      OPEN<NAME>  codep:0x224c wordp:0x4404 size:0x0016 C-string:'OPEN_st_NAME_gt_'
//          [FILE]  codep:0x224c wordp:0x4425 size:0x0026 C-string:'_bo_FILE_bc_'
//          SYSGEN  codep:0x224c wordp:0x4456 size:0x0030 C-string:'SYSGEN'
//         4TH>DOS  codep:0x224c wordp:0x4492 size:0x002e C-string:'_4TH_gt_DOS'
//           W44C2  codep:0x224c wordp:0x44c2 size:0x0056 C-string:'W44C2'
//           W451A  codep:0x224c wordp:0x451a size:0x001a C-string:'W451A'
//           W4536  codep:0x224c wordp:0x4536 size:0x0016 C-string:'W4536'
//           W454E  codep:0x224c wordp:0x454e size:0x000e C-string:'W454E'
//          MAXDRV  codep:0x1d29 wordp:0x4567 size:0x0002 C-string:'MAXDRV'
//       SETMAXDRV  codep:0x224c wordp:0x4577 size:0x004c C-string:'SETMAXDRV'
//           W45C5  codep:0x224c wordp:0x45c5 size:0x0012 C-string:'W45C5'
//           W45D9  codep:0x224c wordp:0x45d9 size:0x0014 C-string:'W45D9'
//       SMARTOPEN  codep:0x224c wordp:0x45fb size:0x0050 C-string:'SMARTOPEN'
//        ASKMOUNT  codep:0x1d29 wordp:0x4658 size:0x0002 C-string:'ASKMOUNT'
//      <ASKMOUNT>  codep:0x224c wordp:0x4669 size:0x008f C-string:'_st_ASKMOUNT_gt_'
//        DOSMOUNT  codep:0x224c wordp:0x4705 size:0x0052 C-string:'DOSMOUNT'
//      DOSUNMOUNT  codep:0x224c wordp:0x4766 size:0x0010 C-string:'DOSUNMOUNT'
//             DR2  codep:0x224c wordp:0x477e size:0x001e C-string:'DR2'
//             DR3  codep:0x224c wordp:0x47a4 size:0x0020 C-string:'DR3'
//           USING  codep:0x224c wordp:0x47ce size:0x000e C-string:'USING'
//           W47DE  codep:0x224c wordp:0x47de size:0x0032 C-string:'W47DE'
//         SETSYSK  codep:0x224c wordp:0x481c size:0x0048 C-string:'SETSYSK'
//           W4866  codep:0x224c wordp:0x4866 size:0x0006 C-string:'W4866'
//            ON_2  codep:0x4873 wordp:0x4873 size:0x000b C-string:'ON_2'
//           OFF_2  codep:0x4886 wordp:0x4886 size:0x000a C-string:'OFF_2'
//          CAPSON  codep:0x4892 wordp:0x4892 size:0x0011 C-string:'CAPSON'
//           KEY_2  codep:0x224c wordp:0x48ab size:0x0006 C-string:'KEY_2'
//            NULL  codep:0x3b68 wordp:0x48ba size:0x0004 C-string:'NULL'
//             ZZZ  codep:0x1d29 wordp:0x48c6 size:0x000a C-string:'ZZZ'
//         <LCMOVE  codep:0x48dc wordp:0x48dc size:0x002c C-string:'_st_LCMOVE'
//             2^N  codep:0x4910 wordp:0x4910 size:0x000f C-string:'_2_h_N'
//             BIT  codep:0x224c wordp:0x4927 size:0x0006 C-string:'BIT'
//             16/  codep:0x4935 wordp:0x4935 size:0x000c C-string:'_16_slash_'
//             16*  codep:0x4949 wordp:0x4949 size:0x000c C-string:'_16_star_'
//            D16*  codep:0x495e wordp:0x495e size:0x0012 C-string:'D16_star_'
//              3*  codep:0x224c wordp:0x4977 size:0x0006 C-string:'_3_star_'
//              3+  codep:0x4984 wordp:0x4984 size:0x000a C-string:'_3_plus_'
//            1.5@  codep:0x4997 wordp:0x4997 size:0x000e C-string:'_1_dot_5_at_'
//          1.5!_2  codep:0x49ae wordp:0x49ae size:0x000c C-string:'_1_dot_5_ex__2'
//             @DS  codep:0x49c2 wordp:0x49c2 size:0x0006 C-string:'GetDS'
//           W49CA  codep:0x1d29 wordp:0x49ca size:0x0010 C-string:'W49CA'
//              +@  codep:0x224c wordp:0x49e1 size:0x0006 C-string:'_plus__at_'
//            L+-@  codep:0x49f0 wordp:0x49f0 size:0x0011 C-string:'L_plus__dash__at_'
//          PRTSCR  codep:0x4a0c wordp:0x4a0c size:0x0007 C-string:'PRTSCR'
//           W4A15  codep:0x4a15 wordp:0x4a15 size:0x0023 C-string:'W4A15'
//            CASE  codep:0x224c wordp:0x4a41 size:0x0017 C-string:'CASE'
//              IS  codep:0x224c wordp:0x4a5f size:0x000a C-string:'IS'
//          OTHERS  codep:0x224c wordp:0x4a74 size:0x0010 C-string:'OTHERS'
//           CASE:  codep:0x224c wordp:0x4a8e size:0x0019 C-string:'CASE_c_'
//            SEED  codep:0x1d29 wordp:0x4ab0 size:0x0002 C-string:'SEED'
//            FRND  codep:0x4abb wordp:0x4abb size:0x0016 C-string:'FRND'
//            RRND  codep:0x224c wordp:0x4ada size:0x0010 C-string:'RRND'
//            +BIT  codep:0x4af3 wordp:0x4af3 size:0x0013 C-string:'_plus_BIT'
//             D2*  codep:0x4b08 wordp:0x4b08 size:0x000d C-string:'D2_star_'
//       EASY-BITS  codep:0x4b17 wordp:0x4b17 size:0x0025 C-string:'EASY_dash_BITS'
//         2'S-BIT  codep:0x224c wordp:0x4b3e size:0x0038 C-string:'_2_i_S_dash_BIT'
//         1'S-BIT  codep:0x224c wordp:0x4b78 size:0x0026 C-string:'_1_i_S_dash_BIT'
//            SQRT  codep:0x224c wordp:0x4ba7 size:0x0016 C-string:'SQRT'
//             +-@  codep:0x4bc5 wordp:0x4bc5 size:0x000a C-string:'_plus__dash__at_'
//           L1.5@  codep:0x4bd9 wordp:0x4bd9 size:0x0015 C-string:'L1_dot_5_at_'
//            <C!>  codep:0x0c60 wordp:0x4bf7 size:0x0000 C-string:'_st_C_ex__gt_'
//             <!>  codep:0x0be1 wordp:0x4bff size:0x0000 C-string:'_st__ex__gt_'
//          <1.5!>  codep:0x49ae wordp:0x4c0a size:0x0000 C-string:'_st_1_dot_5_ex__gt_'
//            <+!>  codep:0x0f85 wordp:0x4c13 size:0x0000 C-string:'_st__plus__ex__gt_'
//            <D!>  codep:0x0c24 wordp:0x4c1c size:0x0000 C-string:'_st_D_ex__gt_'
//           <OFF>  codep:0x3aec wordp:0x4c26 size:0x0002 C-string:'_st_OFF_gt_'
//            <ON>  codep:0x3aec wordp:0x4c31 size:0x0002 C-string:'_st_ON_gt_'
//         <BLOCK>  codep:0x3aec wordp:0x4c3f size:0x0002 C-string:'_st_BLOCK_gt_'
//          FILTER  codep:0x1d29 wordp:0x4c4c size:0x0002 C-string:'FILTER'
//            PEAK  codep:0x1d29 wordp:0x4c57 size:0x0002 C-string:'PEAK'
//           CURVE  codep:0x1d29 wordp:0x4c5b size:0x0020 C-string:'CURVE'
//       (SLIPPER)  codep:0x4c87 wordp:0x4c87 size:0x0037 C-string:'_ro_SLIPPER_rc_'
//      SPHEREWRAP  codep:0x1d29 wordp:0x4cca size:0x0002 C-string:'SPHEREWRAP'
//      SIGNEXTEND  codep:0x1d29 wordp:0x4cd8 size:0x0002 C-string:'SIGNEXTEND'
//           W4CDC  codep:0x1d29 wordp:0x4cdc size:0x0002 C-string:'W4CDC'
//           W4CE0  codep:0x1d29 wordp:0x4ce0 size:0x0002 C-string:'W4CE0'
//           W4CE4  codep:0x1d29 wordp:0x4ce4 size:0x0002 C-string:'W4CE4'
//          'ARRAY  codep:0x1d29 wordp:0x4cf1 size:0x0002 C-string:'_i_ARRAY'
//         ARRAYSE  codep:0x224c wordp:0x4cff size:0x000a C-string:'ARRAYSE'
//          #BYTES  codep:0x224c wordp:0x4d14 size:0x000a C-string:'_n_BYTES'
//           #COLZ  codep:0x224c wordp:0x4d28 size:0x0008 C-string:'_n_COLZ'
//           #ROWZ  codep:0x224c wordp:0x4d3a size:0x000a C-string:'_n_ROWZ'
//       ACELLADDR  codep:0x224c wordp:0x4d50 size:0x000a C-string:'ACELLADDR'
//           W4D5C  codep:0x4d5c wordp:0x4d5c size:0x0022 C-string:'W4D5C'
//              A!  codep:0x224c wordp:0x4d85 size:0x0006 C-string:'A_ex_'
//              A@  codep:0x224c wordp:0x4d92 size:0x0006 C-string:'A_at_'
//        !OFFSETS  codep:0x4da4 wordp:0x4da4 size:0x002c C-string:'StoreOFFSETS'
//           ARRAY  codep:0x224c wordp:0x4dda size:0x002d C-string:'ARRAY'
//       SETLARRAY  codep:0x224c wordp:0x4e13 size:0x002e C-string:'SETLARRAY'
//             XLL  codep:0x1d29 wordp:0x4e49 size:0x0002 C-string:'XLL'
//             YLL  codep:0x1d29 wordp:0x4e53 size:0x0002 C-string:'YLL'
//             XUR  codep:0x1d29 wordp:0x4e5d size:0x0002 C-string:'XUR'
//             YUR  codep:0x1d29 wordp:0x4e67 size:0x0002 C-string:'YUR'
//       FULLARRAY  codep:0x224c wordp:0x4e75 size:0x000e C-string:'FULLARRAY'
//       SETREGION  codep:0x224c wordp:0x4e8f size:0x0012 C-string:'SETREGION'
//      FILLREGION  codep:0x224c wordp:0x4ead size:0x002e C-string:'FILLREGION'
//           W4EDD  codep:0x1d29 wordp:0x4edd size:0x0010 C-string:'W4EDD'
//           W4EEF  codep:0x224c wordp:0x4eef size:0x0013 C-string:'W4EEF'
//           BLACK  codep:0x4ef5 wordp:0x4f0c size:0x0001 C-string:'BLACK'
//         DK-BLUE  codep:0x4ef5 wordp:0x4f19 size:0x0001 C-string:'DK_dash_BLUE'
//        DK-GREEN  codep:0x4ef5 wordp:0x4f26 size:0x0001 C-string:'DK_dash_GREEN'
//           GREEN  codep:0x4ef5 wordp:0x4f31 size:0x0001 C-string:'GREEN'
//             RED  codep:0x4ef5 wordp:0x4f3a size:0x0001 C-string:'RED'
//          VIOLET  codep:0x4ef5 wordp:0x4f46 size:0x0001 C-string:'VIOLET'
//           BROWN  codep:0x4ef5 wordp:0x4f51 size:0x0001 C-string:'BROWN'
//           GREY1  codep:0x4ef5 wordp:0x4f5c size:0x0001 C-string:'GREY1'
//           GREY2  codep:0x4ef5 wordp:0x4f67 size:0x0001 C-string:'GREY2'
//            BLUE  codep:0x4ef5 wordp:0x4f71 size:0x0001 C-string:'BLUE'
//        LT-GREEN  codep:0x4ef5 wordp:0x4f7e size:0x0001 C-string:'LT_dash_GREEN'
//         LT-BLUE  codep:0x4ef5 wordp:0x4f8b size:0x0001 C-string:'LT_dash_BLUE'
//            PINK  codep:0x4ef5 wordp:0x4f95 size:0x0001 C-string:'PINK'
//          ORANGE  codep:0x4ef5 wordp:0x4fa1 size:0x0001 C-string:'ORANGE'
//          YELLOW  codep:0x4ef5 wordp:0x4fad size:0x0001 C-string:'YELLOW'
//           WHITE  codep:0x4ef5 wordp:0x4fb8 size:0x0001 C-string:'WHITE'
//           W4FBB  codep:0x1d29 wordp:0x4fbb size:0x0010 C-string:'W4FBB'
//           W4FCD  codep:0x1d29 wordp:0x4fcd size:0x0022 C-string:'W4FCD'
//        IHEADLEN  codep:0x2214 wordp:0x4ffb size:0x0002 C-string:'IHEADLEN'
//          END-CX  codep:0x2214 wordp:0x4fff size:0x0002 C-string:'END_dash_CX'
//           END-V  codep:0x2214 wordp:0x5003 size:0x0002 C-string:'END_dash_V'
//              EM  codep:0x2214 wordp:0x5007 size:0x0002 C-string:'EM'
//       *MAPSCALE  codep:0x2214 wordp:0x5015 size:0x0002 C-string:'_star_MAPSCALE'
//          SIGBLK  codep:0x2214 wordp:0x5022 size:0x0002 C-string:'SIGBLK'
//          ALOVSA  codep:0x2214 wordp:0x502f size:0x0002 C-string:'ALOVSA'
//          AHIVSA  codep:0x2214 wordp:0x503c size:0x0002 C-string:'AHIVSA'
//          BLOVSA  codep:0x2214 wordp:0x5049 size:0x0002 C-string:'BLOVSA'
//          BHIVSA  codep:0x2214 wordp:0x5056 size:0x0002 C-string:'BHIVSA'
//         'OVBACK  codep:0x2214 wordp:0x5064 size:0x0002 C-string:'_i_OVBACK'
//          MUSSEG  codep:0x2214 wordp:0x5071 size:0x0002 C-string:'MUSSEG'
//         #REMOTE  codep:0x2214 wordp:0x507f size:0x0002 C-string:'_n_REMOTE'
//            #HRS  codep:0x2214 wordp:0x508a size:0x0002 C-string:'_n_HRS'
//         ?FIRED-  codep:0x2214 wordp:0x5098 size:0x0002 C-string:'IsFIRED_dash_'
//         ?A-SHIE  codep:0x2214 wordp:0x50a6 size:0x0002 C-string:'IsA_dash_SHIE'
//         ?A-WEAP  codep:0x2214 wordp:0x50b4 size:0x0002 C-string:'IsA_dash_WEAP'
//       DBUF-SIZE  codep:0x2214 wordp:0x50c2 size:0x0002 C-string:'DBUF_dash_SIZE'
//       NULL-ICON  codep:0x2214 wordp:0x50d0 size:0x0002 C-string:'NULL_dash_ICON'
//         SYS-ICO  codep:0x2214 wordp:0x50de size:0x0002 C-string:'SYS_dash_ICO'
//         INVIS-I  codep:0x2214 wordp:0x50ec size:0x0002 C-string:'INVIS_dash_I'
//         FLUX-IC  codep:0x2214 wordp:0x50fa size:0x0002 C-string:'FLUX_dash_IC'
//         DEAD-IC  codep:0x2214 wordp:0x5108 size:0x0002 C-string:'DEAD_dash_IC'
//         DEFAULT  codep:0x2214 wordp:0x5116 size:0x0002 C-string:'DEFAULT'
//         TEXTC/L  codep:0x2214 wordp:0x5124 size:0x0002 C-string:'TEXTC_slash_L'
//          ILIMIT  codep:0x2214 wordp:0x5128 size:0x0002 C-string:'ILIMIT'
//         FUEL/SE  codep:0x2214 wordp:0x5136 size:0x0002 C-string:'FUEL_slash_SE'
//         POLYSEG  codep:0x2214 wordp:0x5144 size:0x0002 C-string:'POLYSEG'
//          'ANSYS  codep:0x2214 wordp:0x5151 size:0x0002 C-string:'_i_ANSYS'
//              0.  codep:0x3b68 wordp:0x515a size:0x0004 C-string:'_0_dot_'
//      VANEWSPACE  codep:0x3b68 wordp:0x516a size:0x0004 C-string:'VANEWSPACE'
//           IROOT  codep:0x3b68 wordp:0x5178 size:0x0004 C-string:'IROOT'
//        INACTIVE  codep:0x3b68 wordp:0x5188 size:0x0004 C-string:'INACTIVE'
//        FRAGMENT  codep:0x3b68 wordp:0x5198 size:0x0004 C-string:'FRAGMENT'
//           *SECS  codep:0x3b68 wordp:0x51a6 size:0x0004 C-string:'_star_SECS'
//    *ASSIGN-CREW  codep:0x3b68 wordp:0x51b6 size:0x0004 C-string:'_star_ASSIGN_dash_CREW'
//           *SHIP  codep:0x3b68 wordp:0x51c4 size:0x0004 C-string:'_star_SHIP'
//           *ASYS  codep:0x3b68 wordp:0x51d2 size:0x0004 C-string:'_star_ASYS'
//           *ARTH  codep:0x3b68 wordp:0x51e0 size:0x0004 C-string:'_star_ARTH'
//           *ELAN  codep:0x3b68 wordp:0x51ee size:0x0004 C-string:'_star_ELAN'
//          *BRAIN  codep:0x3b68 wordp:0x51fd size:0x0004 C-string:'_star_BRAIN'
//         *HEAVEN  codep:0x3b68 wordp:0x520d size:0x0004 C-string:'_star_HEAVEN'
//         *ARREST  codep:0x3b68 wordp:0x521d size:0x0004 C-string:'_star_ARREST'
//         *SPHEXI  codep:0x3b68 wordp:0x522d size:0x0004 C-string:'_star_SPHEXI'
//             *SP  codep:0x3b68 wordp:0x5239 size:0x0004 C-string:'_star_SP'
//             MPS  codep:0x2214 wordp:0x5245 size:0x0002 C-string:'MPS'
//      CLIP-TABLE  codep:0x1d29 wordp:0x5253 size:0x0014 C-string:'CLIP_dash_TABLE'
//           TABLE  codep:0x224c wordp:0x5271 size:0x0011 C-string:'TABLE'
//             16K  codep:0x2214 wordp:0x528a size:0x0002 C-string:'_16K'
//         FONTSEG  codep:0x1d29 wordp:0x5298 size:0x0002 C-string:'FONTSEG'
//          REMSEG  codep:0x1d29 wordp:0x52a5 size:0x0002 C-string:'REMSEG'
//         XBUF-SE  codep:0x1d29 wordp:0x52b3 size:0x0002 C-string:'XBUF_dash_SE'
//            ?ALL  codep:0x1d29 wordp:0x52be size:0x0002 C-string:'IsALL'
//            ?YOK  codep:0x1d29 wordp:0x52c9 size:0x0002 C-string:'IsYOK'
//           W52CD  codep:0x2214 wordp:0x52cd size:0x0002 C-string:'W52CD'
//           W52D1  codep:0x2214 wordp:0x52d1 size:0x0002 C-string:'W52D1'
//           7CHAR  codep:0x2214 wordp:0x52d5 size:0x0002 C-string:'_7CHAR'
//        7SPACING  codep:0x2214 wordp:0x52d9 size:0x0002 C-string:'_7SPACING'
//           9CHAR  codep:0x2214 wordp:0x52dd size:0x0002 C-string:'_9CHAR'
//           1LOGO  codep:0x1d29 wordp:0x52e1 size:0x000e C-string:'_1LOGO'
//          BUTTON  codep:0x1d29 wordp:0x52f1 size:0x000a C-string:'BUTTON'
// HIGHLIGHT-BUTTON  codep:0x1d29 wordp:0x52fd size:0x0006 C-string:'HIGHLIGHT_dash_BUTTON'
//       BUTTON-ON  codep:0x1d29 wordp:0x5305 size:0x0002 C-string:'BUTTON_dash_ON'
//          'XCOMM  codep:0x1d29 wordp:0x5312 size:0x0002 C-string:'_i_XCOMM'
//            TCLR  codep:0x1d29 wordp:0x531d size:0x0002 C-string:'TCLR'
//           'HEAT  codep:0x1d29 wordp:0x5329 size:0x0002 C-string:'_i_HEAT'
//           'TRAK  codep:0x1d29 wordp:0x5335 size:0x0002 C-string:'_i_TRAK'
//         TRAK-HR  codep:0x1d29 wordp:0x5343 size:0x0002 C-string:'TRAK_dash_HR'
//      A-STRENGTH  codep:0x1d29 wordp:0x5351 size:0x0002 C-string:'A_dash_STRENGTH'
//          DIRBLK  codep:0x1d29 wordp:0x535e size:0x0002 C-string:'DIRBLK'
//       TIMESTAMP  codep:0x1d29 wordp:0x536c size:0x0002 C-string:'TIMESTAMP'
//       RELAXTIME  codep:0x1d29 wordp:0x537a size:0x0002 C-string:'RELAXTIME'
//         VERSION  codep:0x1d29 wordp:0x5388 size:0x0004 C-string:'VERSION'
//         ICONFON  codep:0x1d29 wordp:0x5398 size:0x0002 C-string:'ICONFON'
//          LFRAME  codep:0x1d29 wordp:0x53a5 size:0x0002 C-string:'LFRAME'
//           ?AUTO  codep:0x1d29 wordp:0x53b1 size:0x0002 C-string:'IsAUTO'
//         ?CRITIC  codep:0x1d29 wordp:0x53bf size:0x0002 C-string:'IsCRITIC'
//         ELEM-AM  codep:0x1d29 wordp:0x53cd size:0x0002 C-string:'ELEM_dash_AM'
//         'INJURE  codep:0x1d29 wordp:0x53db size:0x0002 C-string:'_i_INJURE'
//         P-COLOR  codep:0x1d29 wordp:0x53e9 size:0x0003 C-string:'P_dash_COLOR'
//         P-PHRAS  codep:0x1d29 wordp:0x53f8 size:0x0003 C-string:'P_dash_PHRAS'
//          P-CARP  codep:0x1d29 wordp:0x5406 size:0x0003 C-string:'P_dash_CARP'
//         O-COLOR  codep:0x1d29 wordp:0x5415 size:0x0003 C-string:'O_dash_COLOR'
//           HYDRO  codep:0x1d29 wordp:0x5422 size:0x0002 C-string:'HYDRO'
//            ATMO  codep:0x1d29 wordp:0x542d size:0x0002 C-string:'ATMO'
//          LCOLOR  codep:0x1d29 wordp:0x543a size:0x0002 C-string:'LCOLOR'
//          'FLARE  codep:0x1d29 wordp:0x5447 size:0x0002 C-string:'_i_FLARE'
//         (FLARE)  codep:0x1d29 wordp:0x5455 size:0x0002 C-string:'_ro_FLARE_rc_'
//             ?TV  codep:0x1d29 wordp:0x545f size:0x0002 C-string:'IsTV'
//           OLDHR  codep:0x1d29 wordp:0x546b size:0x0002 C-string:'OLDHR'
//           AVCNT  codep:0x1d29 wordp:0x5477 size:0x0002 C-string:'AVCNT'
//          LFILE#  codep:0x1d29 wordp:0x547b size:0x0002 C-string:'LFILE_n_'
//        LRECORD#  codep:0x1d29 wordp:0x547f size:0x0002 C-string:'LRECORD_n_'
//        LRECORD#  codep:0x1d29 wordp:0x5483 size:0x0002 C-string:'LRECORD_n_'
//           FILE#  codep:0x1d29 wordp:0x548f size:0x0002 C-string:'FILE_n_'
//         RECORD#  codep:0x1d29 wordp:0x549d size:0x0002 C-string:'RECORD_n_'
//         1BUFADR  codep:0x1d29 wordp:0x54a1 size:0x0002 C-string:'_1BUFADR'
//         2BUFADR  codep:0x1d29 wordp:0x54a5 size:0x0002 C-string:'_2BUFADR'
//            CXSP  codep:0x1d29 wordp:0x54b0 size:0x0002 C-string:'CXSP'
//             VSP  codep:0x1d29 wordp:0x54b4 size:0x0002 C-string:'VSP'
//           W54B8  codep:0x1d29 wordp:0x54b8 size:0x0002 C-string:'W54B8'
//             EDL  codep:0x1d29 wordp:0x54c2 size:0x0002 C-string:'EDL'
//         A-POSTU  codep:0x1d29 wordp:0x54d0 size:0x0002 C-string:'A_dash_POSTU'
//           W54D4  codep:0x1d29 wordp:0x54d4 size:0x0002 C-string:'W54D4'
//           #CIRC  codep:0x1d29 wordp:0x54d8 size:0x0002 C-string:'_n_CIRC'
//         P-RACES  codep:0x1d29 wordp:0x54e6 size:0x0002 C-string:'P_dash_RACES'
//          LOISEG  codep:0x1d29 wordp:0x54ea size:0x0002 C-string:'LOISEG'
//          HIISEG  codep:0x1d29 wordp:0x54ee size:0x0002 C-string:'HIISEG'
//          LOCSEC  codep:0x1d29 wordp:0x54f2 size:0x0002 C-string:'LOCSEC'
//            $SEG  codep:0x1d29 wordp:0x54f6 size:0x0002 C-string:'_do_SEG'
//           W54FA  codep:0x1d29 wordp:0x54fa size:0x0002 C-string:'W54FA'
//     'THROW-AWAY  codep:0x1d29 wordp:0x5508 size:0x0002 C-string:'_i_THROW_dash_AWAY'
//            'MAP  codep:0x1d29 wordp:0x5513 size:0x0002 C-string:'_i_MAP'
//        'TRAVERS  codep:0x1d29 wordp:0x5521 size:0x0002 C-string:'_i_TRAVERS'
//          '?EXIT  codep:0x1d29 wordp:0x552e size:0x0002 C-string:'_i__ask_EXIT'
//        '?CHOICE  codep:0x1d29 wordp:0x5532 size:0x0002 C-string:'_i__ask_CHOICE'
//     '.FLUX-ICON  codep:0x1d29 wordp:0x5540 size:0x0002 C-string:'_i__dot_FLUX_dash_ICON'
//           ???IT  codep:0x1d29 wordp:0x554c size:0x0002 C-string:'Is_ask__ask_IT'
//             ?TD  codep:0x1d29 wordp:0x5556 size:0x0002 C-string:'IsTD'
//           ?BOMB  codep:0x1d29 wordp:0x5562 size:0x0002 C-string:'IsBOMB'
//         ?LANDED  codep:0x1d29 wordp:0x5570 size:0x0002 C-string:'IsLANDED'
//           W5574  codep:0x1d29 wordp:0x5574 size:0x0002 C-string:'W5574'
//         QTYINST  codep:0x1d29 wordp:0x5578 size:0x0002 C-string:'QTYINST'
//            $MAX  codep:0x1d29 wordp:0x557c size:0x0002 C-string:'_do_MAX'
//           $FREE  codep:0x1d29 wordp:0x5580 size:0x0002 C-string:'_do_FREE'
//            $OLD  codep:0x1d29 wordp:0x5584 size:0x0002 C-string:'_do_OLD'
//            $NEW  codep:0x1d29 wordp:0x5588 size:0x0002 C-string:'_do_NEW'
//          [IOFF]  codep:0x1d29 wordp:0x558c size:0x0002 C-string:'_bo_IOFF_bc_'
//         LENINST  codep:0x1d29 wordp:0x5590 size:0x0002 C-string:'LENINST'
//            -END  codep:0x1d29 wordp:0x559b size:0x0002 C-string:'_dash_END'
//             OV#  codep:0x1d29 wordp:0x55a5 size:0x0002 C-string:'OV_n_'
//            ^VES  codep:0x1d29 wordp:0x55b0 size:0x0002 C-string:'_h_VES'
//         REPAIRT  codep:0x1d29 wordp:0x55be size:0x0002 C-string:'REPAIRT'
//           ?ELAN  codep:0x1d29 wordp:0x55ca size:0x0002 C-string:'IsELAN'
//        HBUF-SEG  codep:0x1d29 wordp:0x55d8 size:0x0002 C-string:'HBUF_dash_SEG'
//        DBUF-SEG  codep:0x1d29 wordp:0x55e6 size:0x0002 C-string:'DBUF_dash_SEG'
//           COLOR  codep:0x1d29 wordp:0x55f2 size:0x0002 C-string:'COLOR'
//          DCOLOR  codep:0x1d29 wordp:0x55ff size:0x0002 C-string:'DCOLOR'
//            YTAB  codep:0x1d29 wordp:0x560a size:0x0002 C-string:'YTAB'
//              Y1  codep:0x1d29 wordp:0x5613 size:0x0002 C-string:'Y1'
//              X1  codep:0x1d29 wordp:0x561c size:0x0002 C-string:'X1'
//              Y2  codep:0x1d29 wordp:0x5625 size:0x0002 C-string:'Y2'
//              X2  codep:0x1d29 wordp:0x562e size:0x0002 C-string:'X2'
//           YTABL  codep:0x1d29 wordp:0x563a size:0x0002 C-string:'YTABL'
//         BUF-SEG  codep:0x1d29 wordp:0x5648 size:0x0002 C-string:'BUF_dash_SEG'
//         BUF-CNT  codep:0x1d29 wordp:0x5656 size:0x0002 C-string:'BUF_dash_CNT'
//          RETURN  codep:0x1d29 wordp:0x5663 size:0x0002 C-string:'RETURN'
//         ?SPHEXI  codep:0x1d29 wordp:0x5671 size:0x0002 C-string:'IsSPHEXI'
//            ?WIN  codep:0x1d29 wordp:0x567c size:0x0002 C-string:'IsWIN'
//             #IN  codep:0x1d29 wordp:0x5686 size:0x0002 C-string:'_n_IN'
//            #OUT  codep:0x1d29 wordp:0x5691 size:0x0002 C-string:'_n_OUT'
//             VIN  codep:0x1d29 wordp:0x569b size:0x0002 C-string:'VIN'
//            VOUT  codep:0x1d29 wordp:0x56a6 size:0x0002 C-string:'VOUT'
//             OIN  codep:0x1d29 wordp:0x56b0 size:0x0002 C-string:'OIN'
//            OOUT  codep:0x1d29 wordp:0x56bb size:0x0002 C-string:'OOUT'
//           W56BF  codep:0x1d29 wordp:0x56bf size:0x0002 C-string:'W56BF'
//           W56C3  codep:0x1d29 wordp:0x56c3 size:0x0002 C-string:'W56C3'
//           W56C7  codep:0x1d29 wordp:0x56c7 size:0x0002 C-string:'W56C7'
//           W56CB  codep:0x1d29 wordp:0x56cb size:0x0002 C-string:'W56CB'
//           W56CF  codep:0x1d29 wordp:0x56cf size:0x0002 C-string:'W56CF'
//          TACCPT  codep:0x1d29 wordp:0x56dc size:0x0002 C-string:'TACCPT'
//           TRJCT  codep:0x1d29 wordp:0x56e8 size:0x0002 C-string:'TRJCT'
//           ?OPEN  codep:0x1d29 wordp:0x56f4 size:0x0002 C-string:'IsOPEN'
//           ?EVAL  codep:0x1d29 wordp:0x5700 size:0x0002 C-string:'IsEVAL'
//           W5704  codep:0x1d29 wordp:0x5704 size:0x0002 C-string:'W5704'
//           W5708  codep:0x1d29 wordp:0x5708 size:0x0002 C-string:'W5708'
//           W570C  codep:0x1d29 wordp:0x570c size:0x0002 C-string:'W570C'
//           W5710  codep:0x1d29 wordp:0x5710 size:0x0002 C-string:'W5710'
//           W5714  codep:0x1d29 wordp:0x5714 size:0x0002 C-string:'W5714'
//           W5718  codep:0x1d29 wordp:0x5718 size:0x0002 C-string:'W5718'
//           W571C  codep:0x1d29 wordp:0x571c size:0x0002 C-string:'W571C'
//           W5720  codep:0x1d29 wordp:0x5720 size:0x0002 C-string:'W5720'
//           W5724  codep:0x1d29 wordp:0x5724 size:0x0002 C-string:'W5724'
//           W5728  codep:0x1d29 wordp:0x5728 size:0x0002 C-string:'W5728'
//           W572C  codep:0x1d29 wordp:0x572c size:0x0002 C-string:'W572C'
//           ILEFT  codep:0x1d29 wordp:0x5738 size:0x0002 C-string:'ILEFT'
//          IRIGHT  codep:0x1d29 wordp:0x5745 size:0x0002 C-string:'IRIGHT'
//          IBELOW  codep:0x1d29 wordp:0x5752 size:0x0002 C-string:'IBELOW'
//          IABOVE  codep:0x1d29 wordp:0x575f size:0x0002 C-string:'IABOVE'
//            'FLY  codep:0x1d29 wordp:0x576a size:0x0002 C-string:'_i_FLY'
//         'UNNEST  codep:0x1d29 wordp:0x5778 size:0x0002 C-string:'_i_UNNEST'
//            ?NEW  codep:0x1d29 wordp:0x5783 size:0x0002 C-string:'IsNEW'
//          FORCED  codep:0x1d29 wordp:0x5790 size:0x0002 C-string:'FORCED'
//           #VESS  codep:0x1d29 wordp:0x579c size:0x0002 C-string:'_n_VESS'
//         CTCOLOR  codep:0x1d29 wordp:0x57aa size:0x0002 C-string:'CTCOLOR'
//          XSTART  codep:0x1d29 wordp:0x57b7 size:0x0002 C-string:'XSTART'
//            XEND  codep:0x1d29 wordp:0x57c2 size:0x0002 C-string:'XEND'
//           YLINE  codep:0x1d29 wordp:0x57ce size:0x0002 C-string:'YLINE'
//            SCAN  codep:0x1d29 wordp:0x57d9 size:0x0002 C-string:'SCAN'
//         ELEMENT  codep:0x1d29 wordp:0x57dd size:0x0002 C-string:'ELEMENT'
//           SCAN+  codep:0x1d29 wordp:0x57e1 size:0x0002 C-string:'SCAN_plus_'
//            YMIN  codep:0x1d29 wordp:0x57ec size:0x0002 C-string:'YMIN'
//            YMAX  codep:0x1d29 wordp:0x57f7 size:0x0002 C-string:'YMAX'
//          #HORIZ  codep:0x1d29 wordp:0x57fb size:0x0002 C-string:'_n_HORIZ'
//           MOVED  codep:0x1d29 wordp:0x5807 size:0x0002 C-string:'MOVED'
//          PLANTS  codep:0x1d29 wordp:0x5814 size:0x0002 C-string:'PLANTS'
//         ANIMALS  codep:0x1d29 wordp:0x5822 size:0x0002 C-string:'ANIMALS'
//          MEMSEG  codep:0x1d29 wordp:0x582f size:0x0002 C-string:'MEMSEG'
//          MEMOFF  codep:0x1d29 wordp:0x583c size:0x0002 C-string:'MEMOFF'
//         MONITOR  codep:0x1d29 wordp:0x584a size:0x0002 C-string:'MONITOR'
//       LOCRADIUS  codep:0x1d29 wordp:0x5858 size:0x0002 C-string:'LOCRADIUS'
//            YBLT  codep:0x1d29 wordp:0x5863 size:0x0002 C-string:'YBLT'
//            XBLT  codep:0x1d29 wordp:0x586e size:0x0002 C-string:'XBLT'
//         XORMODE  codep:0x1d29 wordp:0x587c size:0x0002 C-string:'XORMODE'
//            LBLT  codep:0x1d29 wordp:0x5887 size:0x0002 C-string:'LBLT'
//            WBLT  codep:0x1d29 wordp:0x5892 size:0x0002 C-string:'WBLT'
//            ABLT  codep:0x1d29 wordp:0x589d size:0x0002 C-string:'ABLT'
//          BLTSEG  codep:0x1d29 wordp:0x58aa size:0x0002 C-string:'BLTSEG'
//            BLT>  codep:0x1d29 wordp:0x58b5 size:0x0002 C-string:'BLT_gt_'
//             LPX  codep:0x1d29 wordp:0x58bf size:0x0002 C-string:'LPX'
//        TILE-PTR  codep:0x1d29 wordp:0x58cd size:0x0002 C-string:'TILE_dash_PTR'
//       ?FUEL-DIE  codep:0x1d29 wordp:0x58db size:0x0002 C-string:'IsFUEL_dash_DIE'
//        ?G-AWARE  codep:0x1d29 wordp:0x58e9 size:0x0002 C-string:'IsG_dash_AWARE'
//             GWF  codep:0x1d29 wordp:0x58f3 size:0x0002 C-string:'GWF'
//           DXVIS  codep:0x1d29 wordp:0x58ff size:0x0002 C-string:'DXVIS'
//           DYVIS  codep:0x1d29 wordp:0x590b size:0x0002 C-string:'DYVIS'
//            XCON  codep:0x1d29 wordp:0x5916 size:0x0002 C-string:'XCON'
//            YCON  codep:0x1d29 wordp:0x5921 size:0x0002 C-string:'YCON'
//           DXCON  codep:0x1d29 wordp:0x592d size:0x0002 C-string:'DXCON'
//           DYCON  codep:0x1d29 wordp:0x5939 size:0x0002 C-string:'DYCON'
//            XVIS  codep:0x1d29 wordp:0x5944 size:0x0002 C-string:'XVIS'
//            YVIS  codep:0x1d29 wordp:0x594f size:0x0002 C-string:'YVIS'
//         XLLDEST  codep:0x1d29 wordp:0x595d size:0x0002 C-string:'XLLDEST'
//         YLLDEST  codep:0x1d29 wordp:0x596b size:0x0002 C-string:'YLLDEST'
//      GLOBALSEED  codep:0x1d29 wordp:0x5979 size:0x0002 C-string:'GLOBALSEED'
//          '.CELL  codep:0x1d29 wordp:0x5986 size:0x0002 C-string:'_i__dot_CELL'
//         '.BACKG  codep:0x1d29 wordp:0x5994 size:0x0002 C-string:'_i__dot_BACKG'
//         'ICON-P  codep:0x1d29 wordp:0x59a2 size:0x0002 C-string:'_i_ICON_dash_P'
//         'ICONBO  codep:0x1d29 wordp:0x59b0 size:0x0002 C-string:'_i_ICONBO'
//             'CC  codep:0x1d29 wordp:0x59ba size:0x0002 C-string:'_i_CC'
//           IXSEG  codep:0x1d29 wordp:0x59be size:0x0002 C-string:'IXSEG'
//           IYSEG  codep:0x1d29 wordp:0x59c2 size:0x0002 C-string:'IYSEG'
//           IDSEG  codep:0x1d29 wordp:0x59c6 size:0x0002 C-string:'IDSEG'
//           ICSEG  codep:0x1d29 wordp:0x59ca size:0x0002 C-string:'ICSEG'
//           ILSEG  codep:0x1d29 wordp:0x59ce size:0x0002 C-string:'ILSEG'
//           IHSEG  codep:0x1d29 wordp:0x59da size:0x0002 C-string:'IHSEG'
//         IGLOBAL  codep:0x1d29 wordp:0x59e8 size:0x0002 C-string:'IGLOBAL'
//          ILOCAL  codep:0x1d29 wordp:0x59f5 size:0x0002 C-string:'ILOCAL'
//          IINDEX  codep:0x1d29 wordp:0x5a02 size:0x0002 C-string:'IINDEX'
//            XWLL  codep:0x1d29 wordp:0x5a0d size:0x0002 C-string:'XWLL'
//            YWLL  codep:0x1d29 wordp:0x5a18 size:0x0002 C-string:'YWLL'
//            XWUR  codep:0x1d29 wordp:0x5a23 size:0x0002 C-string:'XWUR'
//            YWUR  codep:0x1d29 wordp:0x5a2e size:0x0002 C-string:'YWUR'
//         *GLOBAL  codep:0x1d29 wordp:0x5a3c size:0x0002 C-string:'_star_GLOBAL'
//     (STOP-COMM)  codep:0x1d29 wordp:0x5a4a size:0x0002 C-string:'_ro_STOP_dash_COMM_rc_'
//    CENTERADJUST  codep:0x1d29 wordp:0x5a4e size:0x0002 C-string:'CENTERADJUST'
//     CONTEXT-ID#  codep:0x1d29 wordp:0x5a5c size:0x0002 C-string:'CONTEXT_dash_ID_n_'
//              EX  codep:0x1d29 wordp:0x5a65 size:0x0002 C-string:'EX'
//              EY  codep:0x1d29 wordp:0x5a6e size:0x0002 C-string:'EY'
//            ERAD  codep:0x1d29 wordp:0x5a79 size:0x0002 C-string:'ERAD'
//          XNUMER  codep:0x1d29 wordp:0x5a86 size:0x0002 C-string:'XNUMER'
//          XDENOM  codep:0x1d29 wordp:0x5a93 size:0x0002 C-string:'XDENOM'
//          <ARC1>  codep:0x1d29 wordp:0x5aa0 size:0x0002 C-string:'_st_ARC1_gt_'
//            %EFF  codep:0x1d29 wordp:0x5aab size:0x0002 C-string:'_pe_EFF'
//           STORM  codep:0x1d29 wordp:0x5ab7 size:0x0002 C-string:'STORM'
//            'TVT  codep:0x1d29 wordp:0x5ac2 size:0x0002 C-string:'_i_TVT'
//          'STORM  codep:0x1d29 wordp:0x5acf size:0x0002 C-string:'_i_STORM'
//             E/M  codep:0x1d29 wordp:0x5ad9 size:0x0002 C-string:'E_slash_M'
//      FORCEPTASK  codep:0x1d29 wordp:0x5ae7 size:0x0002 C-string:'FORCEPTASK'
//          #STORM  codep:0x1d29 wordp:0x5af4 size:0x0002 C-string:'_n_STORM'
//           W5AF8  codep:0x1d29 wordp:0x5af8 size:0x0002 C-string:'W5AF8'
//           W5AFC  codep:0x1d29 wordp:0x5afc size:0x0002 C-string:'W5AFC'
//           W5B00  codep:0x1d29 wordp:0x5b00 size:0x0002 C-string:'W5B00'
//           BICON  codep:0x1d29 wordp:0x5b04 size:0x0002 C-string:'BICON'
//         PORTDAT  codep:0x1d29 wordp:0x5b12 size:0x0002 C-string:'PORTDAT'
//           ?PORT  codep:0x1d29 wordp:0x5b1e size:0x0002 C-string:'IsPORT'
//           W5B22  codep:0x1d29 wordp:0x5b22 size:0x0002 C-string:'W5B22'
//           W5B26  codep:0x1d29 wordp:0x5b26 size:0x0002 C-string:'W5B26'
//            BVIS  codep:0x1d29 wordp:0x5b31 size:0x0002 C-string:'BVIS'
//            LVIS  codep:0x1d29 wordp:0x5b3c size:0x0002 C-string:'LVIS'
//           LFSEG  codep:0x1d29 wordp:0x5b48 size:0x0002 C-string:'LFSEG'
//          LSYSEG  codep:0x1d29 wordp:0x5b55 size:0x0002 C-string:'LSYSEG'
//          MSYSEG  codep:0x1d29 wordp:0x5b62 size:0x0002 C-string:'MSYSEG'
//          SSYSEG  codep:0x1d29 wordp:0x5b6f size:0x0002 C-string:'SSYSEG'
//         ?REPAIR  codep:0x1d29 wordp:0x5b7d size:0x0002 C-string:'IsREPAIR'
//           ?HEAL  codep:0x1d29 wordp:0x5b89 size:0x0002 C-string:'IsHEAL'
//           MXNEB  codep:0x1d29 wordp:0x5b95 size:0x0002 C-string:'MXNEB'
//         THIS-BU  codep:0x1d29 wordp:0x5ba3 size:0x0002 C-string:'THIS_dash_BU'
//            NCRS  codep:0x1d29 wordp:0x5bae size:0x0002 C-string:'NCRS'
//            OCRS  codep:0x1d29 wordp:0x5bb9 size:0x0002 C-string:'OCRS'
//            WTOP  codep:0x1d29 wordp:0x5bc4 size:0x0002 C-string:'WTOP'
//         WBOTTOM  codep:0x1d29 wordp:0x5bd2 size:0x0002 C-string:'WBOTTOM'
//          WRIGHT  codep:0x1d29 wordp:0x5bdf size:0x0002 C-string:'WRIGHT'
//           WLEFT  codep:0x1d29 wordp:0x5beb size:0x0002 C-string:'WLEFT'
//          WLINES  codep:0x1d29 wordp:0x5bf8 size:0x0002 C-string:'WLINES'
//          WCHARS  codep:0x1d29 wordp:0x5c05 size:0x0002 C-string:'WCHARS'
//       SKIP2NEST  codep:0x1d29 wordp:0x5c13 size:0x0002 C-string:'SKIP2NEST'
//            -AIN  codep:0x1d29 wordp:0x5c1e size:0x0002 C-string:'_dash_AIN'
//         'LAUNCH  codep:0x1d29 wordp:0x5c2c size:0x0002 C-string:'_i_LAUNCH'
//         ?ON-PLA  codep:0x1d29 wordp:0x5c3a size:0x0002 C-string:'IsON_dash_PLA'
//         ?RECALL  codep:0x1d29 wordp:0x5c48 size:0x0002 C-string:'IsRECALL'
//            WMSG  codep:0x1d29 wordp:0x5c53 size:0x0002 C-string:'WMSG'
//            ?ROD  codep:0x1d29 wordp:0x5c5e size:0x0002 C-string:'IsROD'
//             CTX  codep:0x1d29 wordp:0x5c68 size:0x0002 C-string:'CTX'
//             CTY  codep:0x1d29 wordp:0x5c72 size:0x0002 C-string:'CTY'
//           FTRIG  codep:0x1d29 wordp:0x5c7e size:0x0002 C-string:'FTRIG'
//           FQUIT  codep:0x1d29 wordp:0x5c8a size:0x0002 C-string:'FQUIT'
//            LKEY  codep:0x1d29 wordp:0x5c95 size:0x0002 C-string:'LKEY'
//         'BUTTON  codep:0x1d29 wordp:0x5ca3 size:0x0002 C-string:'_i_BUTTON'
//         BTN-REC  codep:0x1d29 wordp:0x5cb1 size:0x0002 C-string:'BTN_dash_REC'
//         CRSCOLO  codep:0x1d29 wordp:0x5cbf size:0x0002 C-string:'CRSCOLO'
//       (SRDEPTH)  codep:0x1d29 wordp:0x5cc3 size:0x0002 C-string:'_ro_SRDEPTH_rc_'
//            ?>OP  codep:0x1d29 wordp:0x5cce size:0x0002 C-string:'Is_gt_OP'
//           'YANK  codep:0x1d29 wordp:0x5cda size:0x0002 C-string:'_i_YANK'
//             ?12  codep:0x1d29 wordp:0x5ce4 size:0x0002 C-string:'Is12'
//          '+VESS  codep:0x1d29 wordp:0x5cf1 size:0x0002 C-string:'_i__plus_VESS'
//            ?NEB  codep:0x1d29 wordp:0x5cfc size:0x0002 C-string:'IsNEB'
//        FORCEKEY  codep:0x1d29 wordp:0x5d0a size:0x0002 C-string:'FORCEKEY'
//            %VAL  codep:0x1d29 wordp:0x5d15 size:0x0002 C-string:'_pe_VAL'
//         SCROLL-  codep:0x1d29 wordp:0x5d23 size:0x0002 C-string:'SCROLL_dash_'
//        [#CACHE]  codep:0x1d29 wordp:0x5d31 size:0x0002 C-string:'_bo__n_CACHE_bc_'
//          ESC-EN  codep:0x1d29 wordp:0x5d3e size:0x0002 C-string:'ESC_dash_EN'
//         ESC-PFA  codep:0x1d29 wordp:0x5d4c size:0x0002 C-string:'ESC_dash_PFA'
//      LINE-COUNT  codep:0x1d29 wordp:0x5d5a size:0x0002 C-string:'LINE_dash_COUNT'
//          PM-PTR  codep:0x1d29 wordp:0x5d67 size:0x0002 C-string:'PM_dash_PTR'
//          ?REUSE  codep:0x1d29 wordp:0x5d6b size:0x0002 C-string:'IsREUSE'
//            SKEY  codep:0x1d29 wordp:0x5d76 size:0x0002 C-string:'SKEY'
//            #AUX  codep:0x1d29 wordp:0x5d81 size:0x0002 C-string:'_n_AUX'
//           WADDR  codep:0x1d29 wordp:0x5d8d size:0x0002 C-string:'WADDR'
//            MASK  codep:0x1d29 wordp:0x5d98 size:0x0002 C-string:'MASK'
//            ?EGA  codep:0x1d29 wordp:0x5da3 size:0x0002 C-string:'IsEGA'
//            XABS  codep:0x1d29 wordp:0x5dae size:0x0002 C-string:'XABS'
//            YABS  codep:0x1d29 wordp:0x5db9 size:0x0002 C-string:'YABS'
//         HEADING  codep:0x1d29 wordp:0x5dc7 size:0x0002 C-string:'HEADING'
//           3DSEG  codep:0x1d29 wordp:0x5dd3 size:0x0002 C-string:'_3DSEG'
//            VIN'  codep:0x1d29 wordp:0x5dde size:0x0002 C-string:'VIN_i_'
//         YSCREEN  codep:0x1d29 wordp:0x5dec size:0x0002 C-string:'YSCREEN'
//         XSCREEN  codep:0x1d29 wordp:0x5dfa size:0x0002 C-string:'XSCREEN'
//         'COMBAT  codep:0x1d29 wordp:0x5e08 size:0x0002 C-string:'_i_COMBAT'
//           'CEX+  codep:0x1d29 wordp:0x5e14 size:0x0002 C-string:'_i_CEX_plus_'
//            'CEX  codep:0x1d29 wordp:0x5e1f size:0x0002 C-string:'_i_CEX'
//            'WAX  codep:0x1d29 wordp:0x5e2a size:0x0002 C-string:'_i_WAX'
//         TERMINA  codep:0x1d29 wordp:0x5e38 size:0x0002 C-string:'TERMINA'
//         ?COMBAT  codep:0x1d29 wordp:0x5e46 size:0x0002 C-string:'IsCOMBAT'
//         ?ATTACK  codep:0x1d29 wordp:0x5e54 size:0x0002 C-string:'IsATTACK'
//       ?RECYCLED  codep:0x1d29 wordp:0x5e58 size:0x0002 C-string:'IsRECYCLED'
//         STAR-HR  codep:0x1d29 wordp:0x5e66 size:0x0002 C-string:'STAR_dash_HR'
//        STARDATE  codep:0x1d29 wordp:0x5e74 size:0x0002 C-string:'STARDATE'
//    TIME-PASSING  codep:0x1d29 wordp:0x5e82 size:0x0002 C-string:'TIME_dash_PASSING'
//         #CLRMAP  codep:0x1d29 wordp:0x5e90 size:0x0002 C-string:'_n_CLRMAP'
//            PLHI  codep:0x1d29 wordp:0x5e9b size:0x0002 C-string:'PLHI'
//         'PROCES  codep:0x1d29 wordp:0x5ea9 size:0x0002 C-string:'_i_PROCES'
//          CURSEG  codep:0x1d29 wordp:0x5eb6 size:0x0002 C-string:'CURSEG'
//         'SIMULA  codep:0x1d29 wordp:0x5ec4 size:0x0002 C-string:'_i_SIMULA'
//          'DEATH  codep:0x1d29 wordp:0x5ed1 size:0x0002 C-string:'_i_DEATH'
//         'ENDING  codep:0x1d29 wordp:0x5edf size:0x0002 C-string:'_i_ENDING'
//        [KEYINT]  codep:0x1d29 wordp:0x5eed size:0x0002 C-string:'_bo_KEYINT_bc_'
//         'CLEANU  codep:0x1d29 wordp:0x5efb size:0x0002 C-string:'_i_CLEANU'
//         'KEY-CA  codep:0x1d29 wordp:0x5f09 size:0x0002 C-string:'_i_KEY_dash_CA'
//         '.VITAL  codep:0x1d29 wordp:0x5f17 size:0x0002 C-string:'_i__dot_VITAL'
//          '.DATE  codep:0x1d29 wordp:0x5f24 size:0x0002 C-string:'_i__dot_DATE'
// '.VEHICLE-STATUS  codep:0x1d29 wordp:0x5f32 size:0x0002 C-string:'_i__dot_VEHICLE_dash_STATUS'
//  'VEHICLE-CYCLE  codep:0x1d29 wordp:0x5f40 size:0x0002 C-string:'_i_VEHICLE_dash_CYCLE'
//         'CREW-C  codep:0x1d29 wordp:0x5f4e size:0x0002 C-string:'_i_CREW_dash_C'
// 'EXTERNAL-EVENTS  codep:0x1d29 wordp:0x5f5c size:0x0002 C-string:'_i_EXTERNAL_dash_EVENTS'
//         'REPAIR  codep:0x1d29 wordp:0x5f6a size:0x0002 C-string:'_i_REPAIR'
//         'TREATM  codep:0x1d29 wordp:0x5f78 size:0x0002 C-string:'_i_TREATM'
//         WEAPON-  codep:0x1d29 wordp:0x5f86 size:0x0002 C-string:'WEAPON_dash_'
//           ^CRIT  codep:0x1d29 wordp:0x5f92 size:0x0002 C-string:'_h_CRIT'
//           ?FLAT  codep:0x1d29 wordp:0x5f9e size:0x0002 C-string:'IsFLAT'
//            ?SUP  codep:0x1d29 wordp:0x5fa9 size:0x0002 C-string:'IsSUP'
//           E-USE  codep:0x1d29 wordp:0x5fb5 size:0x0002 C-string:'E_dash_USE'
//         'ENERGY  codep:0x1d29 wordp:0x5fc3 size:0x0002 C-string:'_i_ENERGY'
//         ?SECURE  codep:0x1d29 wordp:0x5fd1 size:0x0002 C-string:'IsSECURE'
//            'STP  codep:0x1d29 wordp:0x5fdc size:0x0002 C-string:'_i_STP'
//          'RSIDE  codep:0x1d29 wordp:0x5fe9 size:0x0002 C-string:'_i_RSIDE'
//          DERROR  codep:0x1d29 wordp:0x5ff6 size:0x0002 C-string:'DERROR'
//             OVT  codep:0x5275 wordp:0x6000 size:0x0016 C-string:'OVT'
//            BITS  codep:0x1d29 wordp:0x601f size:0x0002 C-string:'BITS'
//           #BITS  codep:0x1d29 wordp:0x602b size:0x0002 C-string:'_n_BITS'
//           W602F  codep:0x224c wordp:0x602f size:0x000a C-string:'W602F'
//           W603B  codep:0x224c wordp:0x603b size:0x0006 C-string:'W603B'
//           W6043  codep:0x224c wordp:0x6043 size:0x0006 C-string:'W6043'
//           CCASE  codep:0x4a96 wordp:0x6053 size:0x0010 C-string:'CCASE'
//         COLORCA  codep:0x224c wordp:0x606f size:0x0010 C-string:'COLORCA'
//         TIRED-T  codep:0x1d29 wordp:0x608b size:0x0004 C-string:'TIRED_dash_T'
//         LASTREP  codep:0x1d29 wordp:0x609b size:0x0004 C-string:'LASTREP'
//         TALKCOU  codep:0x1d29 wordp:0x60ab size:0x0004 C-string:'TALKCOU'
//          VSTIME  codep:0x1d29 wordp:0x60ba size:0x0004 C-string:'VSTIME'
//        10*CARGO  codep:0x1d29 wordp:0x60ca size:0x0004 C-string:'_10_star_CARGO'
//      SENSE-ADDR  codep:0x1d29 wordp:0x60da size:0x0004 C-string:'SENSE_dash_ADDR'
//           EYEXY  codep:0x1d29 wordp:0x60e8 size:0x0004 C-string:'EYEXY'
//          WEAPXY  codep:0x1d29 wordp:0x60f7 size:0x0004 C-string:'WEAPXY'
//          10*END  codep:0x1d29 wordp:0x6106 size:0x0004 C-string:'_10_star_END'
//         TOWFINE  codep:0x1d29 wordp:0x6116 size:0x0004 C-string:'TOWFINE'
//        ENC-TIME  codep:0x1d29 wordp:0x6126 size:0x0004 C-string:'ENC_dash_TIME'
//        NAV-TIME  codep:0x1d29 wordp:0x6136 size:0x0004 C-string:'NAV_dash_TIME'
//           W613C  codep:0x1d29 wordp:0x613c size:0x0004 C-string:'W613C'
//           STIME  codep:0x1d29 wordp:0x614a size:0x0004 C-string:'STIME'
//           W6150  codep:0x1d29 wordp:0x6150 size:0x0004 C-string:'W6150'
//           W6156  codep:0x1d29 wordp:0x6156 size:0x0004 C-string:'W6156'
//           IADDR  codep:0x1d29 wordp:0x615c size:0x0004 C-string:'IADDR'
//           W6162  codep:0x1d29 wordp:0x6162 size:0x0004 C-string:'W6162'
//         KEYTIME  codep:0x1d29 wordp:0x6172 size:0x0004 C-string:'KEYTIME'
//         LKEYTIM  codep:0x1d29 wordp:0x6182 size:0x0004 C-string:'LKEYTIM'
//    (SCROLL-BOX)  codep:0x1d29 wordp:0x6192 size:0x0004 C-string:'_ro_SCROLL_dash_BOX_rc_'
//    (ORIGINATOR)  codep:0x1d29 wordp:0x61a2 size:0x0004 C-string:'_ro_ORIGINATOR_rc_'
//   (SCROLL-CONT)  codep:0x1d29 wordp:0x61b2 size:0x0004 C-string:'_ro_SCROLL_dash_CONT_rc_'
//         (AWARD)  codep:0x1d29 wordp:0x61c2 size:0x0004 C-string:'_ro_AWARD_rc_'
//       BOX-IADDR  codep:0x1d29 wordp:0x61d2 size:0x0004 C-string:'BOX_dash_IADDR'
//          (BOMB)  codep:0x1d29 wordp:0x61e1 size:0x0004 C-string:'_ro_BOMB_rc_'
//         REAL-MS  codep:0x1d29 wordp:0x61f1 size:0x0004 C-string:'REAL_dash_MS'
//     LAST-UPDATE  codep:0x1d29 wordp:0x6201 size:0x0004 C-string:'LAST_dash_UPDATE'
//       XWLD:XPIX  codep:0x1d29 wordp:0x6211 size:0x0004 C-string:'XWLD_c_XPIX'
//       YWLD:YPIX  codep:0x1d29 wordp:0x6221 size:0x0004 C-string:'YWLD_c_YPIX'
//  ANCHOR-CONTOUR  codep:0x1d29 wordp:0x6230 size:0x0004 C-string:'ANCHOR_dash_CONTOUR'
//         OK-TALK  codep:0x1d29 wordp:0x6240 size:0x0004 C-string:'OK_dash_TALK'
//         (STARPO  codep:0x1d29 wordp:0x6250 size:0x0004 C-string:'_ro_STARPO'
//          (SHIP)  codep:0x1d29 wordp:0x625f size:0x0004 C-string:'_ro_SHIP_rc_'
//        TVEHICLE  codep:0x1d29 wordp:0x626f size:0x0004 C-string:'TVEHICLE'
//         TV-HOLD  codep:0x1d29 wordp:0x627f size:0x0004 C-string:'TV_dash_HOLD'
//       SUPER-BOX  codep:0x1d29 wordp:0x628f size:0x0004 C-string:'SUPER_dash_BOX'
//        (SYSTEM)  codep:0x1d29 wordp:0x629f size:0x0004 C-string:'_ro_SYSTEM_rc_'
//         (ORBIT)  codep:0x1d29 wordp:0x62af size:0x0004 C-string:'_ro_ORBIT_rc_'
//        (PLANET)  codep:0x1d29 wordp:0x62bf size:0x0004 C-string:'_ro_PLANET_rc_'
//       (SURFACE)  codep:0x1d29 wordp:0x62cf size:0x0004 C-string:'_ro_SURFACE_rc_'
//     (ENCOUNTER)  codep:0x1d29 wordp:0x62df size:0x0004 C-string:'_ro_ENCOUNTER_rc_'
//       (SHIPBOX)  codep:0x1d29 wordp:0x62ef size:0x0004 C-string:'_ro_SHIPBOX_rc_'
//   (AORIGINATOR)  codep:0x1d29 wordp:0x62ff size:0x0004 C-string:'_ro_AORIGINATOR_rc_'
//     THIS-REGION  codep:0x1d29 wordp:0x630f size:0x0004 C-string:'THIS_dash_REGION'
//     (THIS-ITEM)  codep:0x1d29 wordp:0x631f size:0x0004 C-string:'_ro_THIS_dash_ITEM_rc_'
//      KEYINTADDR  codep:0x1d29 wordp:0x6325 size:0x0002 C-string:'KEYINTADDR'
//             CXS  codep:0x1d29 wordp:0x6329 size:0x0078 C-string:'CXS'
//            VSTK  codep:0x1d29 wordp:0x63a3 size:0x0040 C-string:'VSTK'
//            IBFR  codep:0x1d29 wordp:0x63ec size:0x0111 C-string:'IBFR'
//          YTABLE  codep:0x1d29 wordp:0x6508 size:0x0190 C-string:'YTABLE'
//         VYTABLE  codep:0x1d29 wordp:0x66a4 size:0x00f0 C-string:'VYTABLE'
//           LSCAN  codep:0x1d29 wordp:0x679e size:0x0190 C-string:'LSCAN'
//       NEB-TABLE  codep:0x1d29 wordp:0x6930 size:0x0040 C-string:'NEB_dash_TABLE'
//            NEB2  codep:0x1d29 wordp:0x6972 size:0x0040 C-string:'NEB2'
//              V1  codep:0x1d29 wordp:0x69b4 size:0x0040 C-string:'V1'
//              V2  codep:0x1d29 wordp:0x69f6 size:0x0040 C-string:'V2'
//            CMAP  codep:0x1d29 wordp:0x6a3f size:0x0040 C-string:'CMAP'
//           LRTRN  codep:0x1d29 wordp:0x6a89 size:0x0004 C-string:'LRTRN'
//        MERCATOR  codep:0x4e00 wordp:0x6a99 size:0x0008 C-string:'MERCATOR'
//       CONANCHOR  codep:0x4e00 wordp:0x6aad size:0x0008 C-string:'CONANCHOR'
//         CONTOUR  codep:0x4e00 wordp:0x6ac1 size:0x0008 C-string:'CONTOUR'
//         ICONIMA  codep:0x4e00 wordp:0x6ad5 size:0x0008 C-string:'ICONIMA'
//          VERTEX  codep:0x4e00 wordp:0x6ae8 size:0x0008 C-string:'VERTEX'
//           FACET  codep:0x4e00 wordp:0x6afa size:0x0008 C-string:'FACET'
//            FACE  codep:0x4e00 wordp:0x6b0b size:0x0008 C-string:'FACE'
//           PPOLY  codep:0x4e00 wordp:0x6b1d size:0x0008 C-string:'PPOLY'
// GVERTEX>GRIDCOLOR  codep:0x4e00 wordp:0x6b31 size:0x0008 C-string:'GVERTEX_gt_GRIDCOLOR'
//           GPOLY  codep:0x4e00 wordp:0x6b43 size:0x0008 C-string:'GPOLY'
//       GRIDCOLOR  codep:0x4e00 wordp:0x6b57 size:0x0008 C-string:'GRIDCOLOR'
//          G1VERT  codep:0x4e00 wordp:0x6b6a size:0x0008 C-string:'G1VERT'
//       9X9COARSE  codep:0x4e00 wordp:0x6b7e size:0x0008 C-string:'_9X9COARSE'
// 9X9FINE>GVERTEX  codep:0x4e00 wordp:0x6b92 size:0x0008 C-string:'_9X9FINE_gt_GVERTEX'
//       XFORMVERT  codep:0x4e00 wordp:0x6ba6 size:0x0008 C-string:'XFORMVERT'
//         IARRAYS  codep:0x5275 wordp:0x6bba size:0x001e C-string:'IARRAYS'
//         *STARPO  codep:0x3b68 wordp:0x6be4 size:0x0004 C-string:'_star_STARPO'
//         *PERSON  codep:0x3b68 wordp:0x6bf4 size:0x0004 C-string:'_star_PERSON'
//    *SHIP-CONFIG  codep:0x3b68 wordp:0x6c04 size:0x0004 C-string:'_star_SHIP_dash_CONFIG'
//         *TRADE-  codep:0x3b68 wordp:0x6c14 size:0x0004 C-string:'_star_TRADE_dash_'
//         *ITEMS-  codep:0x3b68 wordp:0x6c24 size:0x0004 C-string:'_star_ITEMS_dash_'
//         *OPERAT  codep:0x3b68 wordp:0x6c34 size:0x0004 C-string:'_star_OPERAT'
//           *BANK  codep:0x3b68 wordp:0x6c42 size:0x0004 C-string:'_star_BANK'
//  *STARSHIP-HOLD  codep:0x3b68 wordp:0x6c52 size:0x0004 C-string:'_star_STARSHIP_dash_HOLD'
//     'VERSIONERR  codep:0x1d29 wordp:0x6c62 size:0x0002 C-string:'_i_VERSIONERR'
//           CTTOP  codep:0x1d29 wordp:0x6c6e size:0x0002 C-string:'CTTOP'
//           CTBOT  codep:0x1d29 wordp:0x6c7a size:0x0002 C-string:'CTBOT'
//           C>EGA  codep:0x6c86 wordp:0x6c86 size:0x0030 C-string:'C_gt_EGA'
//           ?>EGA  codep:0x224c wordp:0x6cc0 size:0x000c C-string:'Is_gt_EGA'
//           E>CGA  codep:0x6cd6 wordp:0x6cd6 size:0x0030 C-string:'E_gt_CGA'
//         ?UPDATE  codep:0x6d12 wordp:0x6d12 size:0x0053 C-string:'IsUPDATE'
//              C!  codep:0x224c wordp:0x6d6c size:0x0006 C-string:'C_ex_'
//             !_3  codep:0x224c wordp:0x6d78 size:0x0006 C-string:'Store_3'
//            +!_2  codep:0x224c wordp:0x6d85 size:0x0006 C-string:'_plus__ex__2'
//            1.5!  codep:0x224c wordp:0x6d94 size:0x0006 C-string:'_1_dot_5_ex_'
//              2!  codep:0x224c wordp:0x6da1 size:0x0006 C-string:'_2_ex_'
//              D!  codep:0x224c wordp:0x6dae size:0x0004 C-string:'StoreD'
//            ON_3  codep:0x224c wordp:0x6db9 size:0x0006 C-string:'ON_3'
//             OFF  codep:0x224c wordp:0x6dc7 size:0x0006 C-string:'OFF'
//            2OFF  codep:0x224c wordp:0x6dd6 size:0x000c C-string:'_2OFF'
//           CMOVE  codep:0x224c wordp:0x6dec size:0x000a C-string:'CMOVE'
//          FILL_1  codep:0x224c wordp:0x6dff size:0x000c C-string:'FILL_1'
//           W6E0D  codep:0x224c wordp:0x6e0d size:0x000a C-string:'W6E0D'
//         BLOCK_2  codep:0x224c wordp:0x6e21 size:0x0006 C-string:'BLOCK_2'
//        LBLOCK_2  codep:0x224c wordp:0x6e32 size:0x0006 C-string:'LBLOCK_2'
//          LOAD_1  codep:0x224c wordp:0x6e41 size:0x0006 C-string:'LOAD_1'
//           -TEXT  codep:0x224c wordp:0x6e51 size:0x0036 C-string:'_dash_TEXT'
//              $=  codep:0x224c wordp:0x6e8e size:0x0022 C-string:'_do__eq_'
//          SIGFLD  codep:0x224c wordp:0x6ebb size:0x0013 C-string:'SIGFLD'
//      :SIGNATURE  codep:0x6ec1 wordp:0x6eda size:0x0002 C-string:'_c_SIGNATURE'
//      :TIMESTAMP  codep:0x6ec1 wordp:0x6ee8 size:0x0002 C-string:'_c_TIMESTAMP'
//          :CKSUM  codep:0x6ec1 wordp:0x6ef5 size:0x0002 C-string:'_c_CKSUM'
//           :SAVE  codep:0x6ec1 wordp:0x6f01 size:0x0002 C-string:'_c_SAVE'
//        :VERSION  codep:0x6ec1 wordp:0x6f0f size:0x0002 C-string:'_c_VERSION'
//          THRU_2  codep:0x224c wordp:0x6f1a size:0x0024 C-string:'THRU_2'
//          VA>BLK  codep:0x6f49 wordp:0x6f49 size:0x0019 C-string:'VA_gt_BLK'
//          VA>BUF  codep:0x224c wordp:0x6f6d size:0x0008 C-string:'VA_gt_BUF'
//           W6F77  codep:0x224c wordp:0x6f77 size:0x0008 C-string:'W6F77'
//          ?AFILE  codep:0x224c wordp:0x6f81 size:0x000c C-string:'IsAFILE'
//           W6F8F  codep:0x224c wordp:0x6f8f size:0x0012 C-string:'W6F8F'
//           W6FA3  codep:0x224c wordp:0x6fa3 size:0x000c C-string:'W6FA3'
//           W6FB1  codep:0x224c wordp:0x6fb1 size:0x0006 C-string:'W6FB1'
//           W6FB9  codep:0x1d29 wordp:0x6fb9 size:0x0002 C-string:'W6FB9'
//           W6FBD  codep:0x224c wordp:0x6fbd size:0x001c C-string:'W6FBD'
//           W6FDB  codep:0x224c wordp:0x6fdb size:0x000a C-string:'W6FDB'
//           W6FE7  codep:0x224c wordp:0x6fe7 size:0x000a C-string:'W6FE7'
//          MOUNTA  codep:0x224c wordp:0x6ffc size:0x0018 C-string:'MOUNTA'
//          MOUNTB  codep:0x224c wordp:0x701f size:0x0018 C-string:'MOUNTB'
//           W7039  codep:0x224c wordp:0x7039 size:0x0010 C-string:'W7039'
//           W704B  codep:0x224c wordp:0x704b size:0x0016 C-string:'W704B'
//       MOUNT-VSA  codep:0x224c wordp:0x7063 size:0x0010 C-string:'MOUNT_dash_VSA'
//           W7075  codep:0x224c wordp:0x7075 size:0x0054 C-string:'W7075'
//          VSA>VA  codep:0x224c wordp:0x70cb size:0x000c C-string:'VSA_gt_VA'
//           W70D9  codep:0x224c wordp:0x70d9 size:0x008e C-string:'W70D9'
//         MEM>DSK  codep:0x224c wordp:0x7173 size:0x0006 C-string:'MEM_gt_DSK'
//         MEM<DSK  codep:0x224c wordp:0x7185 size:0x0006 C-string:'MEM_st_DSK'
//          RECADD  codep:0x718d wordp:0x718d size:0x004e C-string:'RECADD'
//         DOFFBLK  codep:0x71dd wordp:0x71dd size:0x0042 C-string:'DOFFBLK'
//          DFIELD  codep:0x224c wordp:0x7221 size:0x0017 C-string:'DFIELD'
//       FILE-NAME  codep:0x7227 wordp:0x7244 size:0x0001 C-string:'FILE_dash_NAME'
//       FILE-TYPE  codep:0x7227 wordp:0x7251 size:0x0001 C-string:'FILE_dash_TYPE'
//      FILE-START  codep:0x7227 wordp:0x725e size:0x0001 C-string:'FILE_dash_START'
//        FILE-END  codep:0x7227 wordp:0x726b size:0x0001 C-string:'FILE_dash_END'
//       FILE-#REC  codep:0x7227 wordp:0x7278 size:0x0001 C-string:'FILE_dash__n_REC'
//       FILE-RLEN  codep:0x7227 wordp:0x7285 size:0x0001 C-string:'FILE_dash_RLEN'
//       FILE-SLEN  codep:0x7227 wordp:0x7292 size:0x0001 C-string:'FILE_dash_SLEN'
//     BVSA>OFFBLK  codep:0x7295 wordp:0x7295 size:0x001a C-string:'BVSA_gt_OFFBLK'
//           FILE:  codep:0x224c wordp:0x72b9 size:0x005c C-string:'FILE_c_'
//           >FILE  codep:0x224c wordp:0x731f size:0x0010 C-string:'_gt_FILE'
//           FILE<  codep:0x224c wordp:0x7339 size:0x0010 C-string:'FILE_st_'
//         ?BMOUNT  codep:0x224c wordp:0x734b size:0x000a C-string:'IsBMOUNT'
//            |REC  codep:0x224c wordp:0x7357 size:0x0020 C-string:'_v_REC'
//      ?-RECINBUF  codep:0x224c wordp:0x7379 size:0x0016 C-string:'Is_dash_RECINBUF'
//         @RECORD  codep:0x224c wordp:0x739b size:0x0022 C-string:'GetRECORD'
//          AFIELD  codep:0x224c wordp:0x73c8 size:0x005b C-string:'AFIELD'
//         IFLDADR  codep:0x7425 wordp:0x7425 size:0x000f C-string:'IFLDADR'
//          IFIELD  codep:0x224c wordp:0x743f size:0x0015 C-string:'IFIELD'
//        INST-SIB  codep:0x744d wordp:0x7460 size:0x0003 C-string:'INST_dash_SIB'
//       INST-PREV  codep:0x744d wordp:0x746f size:0x0003 C-string:'INST_dash_PREV'
//        INST-OFF  codep:0x744d wordp:0x747e size:0x0003 C-string:'INST_dash_OFF'
//      INST-CLASS  codep:0x744d wordp:0x748d size:0x0003 C-string:'INST_dash_CLASS'
//    INST-SPECIES  codep:0x744d wordp:0x749c size:0x0003 C-string:'INST_dash_SPECIES'
//        INST-QTY  codep:0x744d wordp:0x74ab size:0x0003 C-string:'INST_dash_QTY'
//          INST-X  codep:0x744d wordp:0x74b9 size:0x0003 C-string:'INST_dash_X'
//          INST-Y  codep:0x744d wordp:0x74c7 size:0x0003 C-string:'INST_dash_Y'
//       !INST-SIB  codep:0x224c wordp:0x74cc size:0x0006 C-string:'StoreINST_dash_SIB'
//      !INST-PREV  codep:0x224c wordp:0x74d4 size:0x0006 C-string:'StoreINST_dash_PREV'
//       !INST-OFF  codep:0x224c wordp:0x74dc size:0x0006 C-string:'StoreINST_dash_OFF'
//     !INST-CLASS  codep:0x224c wordp:0x74e4 size:0x0006 C-string:'StoreINST_dash_CLASS'
//   !INST-SPECIES  codep:0x224c wordp:0x74f6 size:0x0006 C-string:'StoreINST_dash_SPECIES'
//       @INST-SIB  codep:0x224c wordp:0x74fe size:0x0006 C-string:'GetINST_dash_SIB'
//      @INST-PREV  codep:0x224c wordp:0x7506 size:0x0006 C-string:'GetINST_dash_PREV'
//       @INST-OFF  codep:0x224c wordp:0x750e size:0x0006 C-string:'GetINST_dash_OFF'
//     @INST-CLASS  codep:0x224c wordp:0x7520 size:0x0006 C-string:'GetINST_dash_CLASS'
//   @INST-SPECIES  codep:0x224c wordp:0x7532 size:0x0006 C-string:'GetINST_dash_SPECIES'
//              >C  codep:0x753f wordp:0x753f size:0x0014 C-string:'_gt_C'
//              C>  codep:0x755a wordp:0x755a size:0x0016 C-string:'C_gt_'
//              CI  codep:0x7577 wordp:0x7577 size:0x0012 C-string:'CI'
//           CDROP  codep:0x224c wordp:0x7593 size:0x0006 C-string:'CDROP'
//             CI'  codep:0x224c wordp:0x75a1 size:0x000a C-string:'CI_i_'
//              CJ  codep:0x224c wordp:0x75b2 size:0x000a C-string:'CJ'
//           COVER  codep:0x224c wordp:0x75c6 size:0x0006 C-string:'COVER'
//          CDEPTH  codep:0x75d7 wordp:0x75d7 size:0x0012 C-string:'CDEPTH'
//           ?NULL  codep:0x224c wordp:0x75f3 size:0x0006 C-string:'IsNULL'
//          ?-NULL  codep:0x224c wordp:0x7604 size:0x0006 C-string:'Is_dash_NULL'
//          ?CHILD  codep:0x224c wordp:0x7615 size:0x0008 C-string:'IsCHILD'
//           ?ONLY  codep:0x224c wordp:0x761f size:0x0008 C-string:'IsONLY'
//          !IADDR  codep:0x224c wordp:0x7632 size:0x0006 C-string:'StoreIADDR'
//         @[IOFF]  codep:0x763a wordp:0x763a size:0x000a C-string:'Get_bo_IOFF_bc_'
//     IBFR>ICACHE  codep:0x224c wordp:0x7646 size:0x0014 C-string:'IBFR_gt_ICACHE'
//     ICACHE>IBFR  codep:0x224c wordp:0x765c size:0x0014 C-string:'ICACHE_gt_IBFR'
//         BVA>BUF  codep:0x224c wordp:0x7672 size:0x0006 C-string:'BVA_gt_BUF'
//      PRIORITIZE  codep:0x7684 wordp:0x7684 size:0x0032 C-string:'PRIORITIZE'
//           ITLEN  codep:0x224c wordp:0x76b8 size:0x0032 C-string:'ITLEN'
//         POINT>I  codep:0x224c wordp:0x76ec size:0x0032 C-string:'POINT_gt_I'
//           W7720  codep:0x224c wordp:0x7720 size:0x0066 C-string:'W7720'
//        ?UPDINST  codep:0x224c wordp:0x7788 size:0x0006 C-string:'IsUPDINST'
//         ?IN$LOC  codep:0x224c wordp:0x7790 size:0x0012 C-string:'IsIN_do_LOC'
//   ?UPDATE>CACHE  codep:0x224c wordp:0x77a4 size:0x001a C-string:'IsUPDATE_gt_CACHE'
//       ?UPD>DISK  codep:0x224c wordp:0x77c0 size:0x003e C-string:'IsUPD_gt_DISK'
//          -LINST  codep:0x224c wordp:0x7800 size:0x007a C-string:'_dash_LINST'
//       ?$COLLECT  codep:0x224c wordp:0x787c size:0x001c C-string:'Is_do_COLLECT'
//            1BTN  codep:0x73ea wordp:0x78a1 size:0x0006 C-string:'_1BTN'
//         AFIELD:  codep:0x224c wordp:0x78b3 size:0x0028 C-string:'AFIELD_c_'
//         IFIELD:  codep:0x224c wordp:0x78e7 size:0x0014 C-string:'IFIELD_c_'
//            #BTN  codep:0x73ea wordp:0x7904 size:0x0006 C-string:'_n_BTN'
//       DISK>IBFR  codep:0x224c wordp:0x790c size:0x0074 C-string:'DISK_gt_IBFR'
//     SET-CURRENT  codep:0x224c wordp:0x798c size:0x0034 C-string:'SET_dash_CURRENT'
//          ICLOSE  codep:0x224c wordp:0x79cb size:0x0020 C-string:'ICLOSE'
//            >C+S  codep:0x224c wordp:0x79f4 size:0x0006 C-string:'_gt_C_plus_S'
//           @>C+S  codep:0x224c wordp:0x7a04 size:0x0006 C-string:'Get_gt_C_plus_S'
//           IOPEN  codep:0x224c wordp:0x7a14 size:0x000c C-string:'IOPEN'
//            CCLR  codep:0x224c wordp:0x7a29 size:0x0014 C-string:'CCLR'
//        1STCHILD  codep:0x224c wordp:0x7a3f size:0x0006 C-string:'_1STCHILD'
//           ?LAST  codep:0x224c wordp:0x7a4f size:0x0008 C-string:'IsLAST'
//          ?FIRST  codep:0x224c wordp:0x7a62 size:0x0008 C-string:'IsFIRST'
//             >C+  codep:0x224c wordp:0x7a72 size:0x000a C-string:'_gt_C_plus_'
//           INEXT  codep:0x224c wordp:0x7a86 size:0x000e C-string:'INEXT'
//           IPREV  codep:0x224c wordp:0x7a9e size:0x000e C-string:'IPREV'
//          IFIRST  codep:0x224c wordp:0x7ab7 size:0x0008 C-string:'IFIRST'
//           ILAST  codep:0x224c wordp:0x7ac9 size:0x0006 C-string:'ILAST'
//            VCLR  codep:0x224c wordp:0x7ad8 size:0x0008 C-string:'VCLR'
//              >V  codep:0x7ae7 wordp:0x7ae7 size:0x0010 C-string:'_gt_V'
//              V>  codep:0x7afe wordp:0x7afe size:0x0010 C-string:'V_gt_'
//              VI  codep:0x7b15 wordp:0x7b15 size:0x000c C-string:'VI'
//          IC>DSK  codep:0x224c wordp:0x7b23 size:0x0020 C-string:'IC_gt_DSK'
//    SAVE-BUFFERS  codep:0x224c wordp:0x7b4f size:0x0006 C-string:'SAVE_dash_BUFFERS'
//         FLUSH_2  codep:0x224c wordp:0x7b5f size:0x0006 C-string:'FLUSH_2'
//         IINSERT  codep:0x224c wordp:0x7b71 size:0x003c C-string:'IINSERT'
//         <INSERT  codep:0x224c wordp:0x7bb9 size:0x001a C-string:'_st_INSERT'
//         >INSERT  codep:0x224c wordp:0x7bdf size:0x000a C-string:'_gt_INSERT'
//        IEXTRACT  codep:0x224c wordp:0x7bf5 size:0x0040 C-string:'IEXTRACT'
//        NEWSPACE  codep:0x224c wordp:0x7c37 size:0x0006 C-string:'NEWSPACE'
//       @NEWSPACE  codep:0x224c wordp:0x7c49 size:0x0006 C-string:'GetNEWSPACE'
//       !NEWSPACE  codep:0x224c wordp:0x7c5b size:0x0006 C-string:'StoreNEWSPACE'
//      +!NEWSPACE  codep:0x224c wordp:0x7c63 size:0x000a C-string:'_plus__ex_NEWSPACE'
//        MAXSPACE  codep:0x224c wordp:0x7c79 size:0x000e C-string:'MAXSPACE'
//        BLKSPACE  codep:0x224c wordp:0x7c89 size:0x0010 C-string:'BLKSPACE'
//            FLD@  codep:0x4a4f wordp:0x7ca2 size:0x0010 C-string:'FLD_at_'
//            FLD!  codep:0x4a4f wordp:0x7cbb size:0x0010 C-string:'FLD_ex_'
//           IFLD@  codep:0x224c wordp:0x7cd5 size:0x0010 C-string:'IFLD_at_'
//           IFLD!  codep:0x224c wordp:0x7cef size:0x0010 C-string:'IFLD_ex_'
//           ?FLD=  codep:0x224c wordp:0x7d01 size:0x000a C-string:'IsFLD_eq_'
//  ?CLASS/SPECIES  codep:0x224c wordp:0x7d17 size:0x0020 C-string:'IsCLASS_slash_SPECIES'
//         ?CHOICE  codep:0x224c wordp:0x7d39 size:0x0006 C-string:'IsCHOICE'
//           ?EXIT  codep:0x224c wordp:0x7d41 size:0x0006 C-string:'IsEXIT'
//         TRAVERS  codep:0x224c wordp:0x7d49 size:0x0006 C-string:'TRAVERS'
//             MAP  codep:0x224c wordp:0x7d57 size:0x0006 C-string:'MAP'
//         DUP@>V!  codep:0x224c wordp:0x7d5f size:0x000a C-string:'DUP_at__gt_V_ex_'
//         V>SWAP!  codep:0x224c wordp:0x7d6b size:0x0008 C-string:'V_gt_SWAP_ex_'
//          SELECT  codep:0x224c wordp:0x7d7e size:0x0028 C-string:'SELECT'
//         ?>FIRST  codep:0x224c wordp:0x7db2 size:0x000c C-string:'Is_gt_FIRST'
//    SELECT-2DROP  codep:0x224c wordp:0x7dca size:0x002a C-string:'SELECT_dash_2DROP'
//     3SELECTDROP  codep:0x224c wordp:0x7df6 size:0x000a C-string:'_3SELECTDROP'
//           =FIND  codep:0x224c wordp:0x7e02 size:0x0008 C-string:'_eq_FIND'
//           IFIND  codep:0x224c wordp:0x7e14 size:0x0008 C-string:'IFIND'
//        MAP>ROOT  codep:0x224c wordp:0x7e1e size:0x0018 C-string:'MAP_gt_ROOT'
//        MAP>LEAF  codep:0x224c wordp:0x7e38 size:0x0018 C-string:'MAP_gt_LEAF'
//         MAKE1ST  codep:0x224c wordp:0x7e5c size:0x0012 C-string:'MAKE1ST'
// EXTRACTED>INACTIVE  codep:0x224c wordp:0x7e70 size:0x0032 C-string:'EXTRACTED_gt_INACTIVE'
//       >INACTIVE  codep:0x224c wordp:0x7eae size:0x001a C-string:'_gt_INACTIVE'
//       (IDELETE)  codep:0x224c wordp:0x7eca size:0x0006 C-string:'_ro_IDELETE_rc_'
//         IDELETE  codep:0x224c wordp:0x7edc size:0x002a C-string:'IDELETE'
//      SELECT-MAP  codep:0x224c wordp:0x7f08 size:0x003a C-string:'SELECT_dash_MAP'
//             ALL  codep:0x224c wordp:0x7f4a size:0x0014 C-string:'ALL'
//            EACH  codep:0x224c wordp:0x7f67 size:0x0010 C-string:'EACH'
//      THROW-AWAY  codep:0x224c wordp:0x7f79 size:0x0006 C-string:'THROW_dash_AWAY'
//    NULLPOINTERS  codep:0x224c wordp:0x7f8b size:0x000e C-string:'NULLPOINTERS'
//    CHILDEXTRACT  codep:0x224c wordp:0x7f9b size:0x0014 C-string:'CHILDEXTRACT'
//    TRY-INACTIVE  codep:0x224c wordp:0x7fb1 size:0x0034 C-string:'TRY_dash_INACTIVE'
//     NEWFRAGMENT  codep:0x224c wordp:0x7fe7 size:0x0040 C-string:'NEWFRAGMENT'
//         ?>MAXSP  codep:0x224c wordp:0x8033 size:0x0014 C-string:'Is_gt_MAXSP'
//    TRY-NEWSPACE  codep:0x224c wordp:0x8049 size:0x0038 C-string:'TRY_dash_NEWSPACE'
// GET-NEW-INSTANCE  codep:0x224c wordp:0x8083 size:0x0042 C-string:'GET_dash_NEW_dash_INSTANCE'
//       SET?REUSE  codep:0x4a4f wordp:0x80d1 size:0x0038 C-string:'SET_ask_REUSE'
//         VICREAT  codep:0x224c wordp:0x8115 size:0x003a C-string:'VICREAT'
//         ICREATE  codep:0x224c wordp:0x815b size:0x0048 C-string:'ICREATE'
//         *CREATE  codep:0x224c wordp:0x81af size:0x0026 C-string:'_star_CREATE'
//            .DRJ  codep:0x224c wordp:0x81d7 size:0x000a C-string:'DrawDRJ'
//            .INM  codep:0x224c wordp:0x81e3 size:0x002b C-string:'DrawINM'
//              .C  codep:0x224c wordp:0x8215 size:0x0033 C-string:'DrawC'
//      INDENT.INM  codep:0x224c wordp:0x824a size:0x0016 C-string:'INDENT_dot_INM'
//           .TREE  codep:0x224c wordp:0x826a size:0x0028 C-string:'DrawTREE'
//            OVA@  codep:0x224c wordp:0x8294 size:0x0006 C-string:'OVA_at_'
//       OV-CANCEL  codep:0x224c wordp:0x82a6 size:0x003a C-string:'OV_dash_CANCEL'
//      VSA>BUFADR  codep:0x224c wordp:0x82e2 size:0x000a C-string:'VSA_gt_BUFADR'
//      ?ROOMERROR  codep:0x224c wordp:0x82ee size:0x0019 C-string:'IsROOMERROR'
//       OV-VERIFY  codep:0x224c wordp:0x8309 size:0x0027 C-string:'OV_dash_VERIFY'
//    LOAD-OVERLAY  codep:0x224c wordp:0x8332 size:0x006c C-string:'LOAD_dash_OVERLAY'
//    SAVE-OVERLAY  codep:0x224c wordp:0x83aa size:0x0034 C-string:'SAVE_dash_OVERLAY'
//         OVERLAY  codep:0x224c wordp:0x83ea size:0x0017 C-string:'OVERLAY'
//       DP-SWITCH  codep:0x224c wordp:0x8403 size:0x0018 C-string:'DP_dash_SWITCH'
//    OPEN-OVERLAY  codep:0x224c wordp:0x8427 size:0x0052 C-string:'OPEN_dash_OVERLAY'
//          .CVSAS  codep:0x224c wordp:0x847b size:0x0032 C-string:'DrawCVSAS'
//   CLOSE-OVERLAY  codep:0x224c wordp:0x84b9 size:0x000c C-string:'CLOSE_dash_OVERLAY'
//          MODULE  codep:0x224c wordp:0x84d0 size:0x0010 C-string:'MODULE'
//         ?TANDRG  codep:0x1d29 wordp:0x84ec size:0x0002 C-string:'IsTANDRG'
//         MSET-CO  codep:0x224c wordp:0x84fa size:0x0014 C-string:'MSET_dash_CO'
//          !COLOR  codep:0x224c wordp:0x8519 size:0x000c C-string:'StoreCOLOR'
//          @COLOR  codep:0x224c wordp:0x8530 size:0x0006 C-string:'GetCOLOR'
// TREJECT/TACCEPT  codep:0x1d29 wordp:0x8538 size:0x005c C-string:'TREJECT_slash_TACCEPT'
//           INT/O  codep:0x1d29 wordp:0x8596 size:0x006d C-string:'INT_slash_O'
//            CLIP  codep:0x1d29 wordp:0x8605 size:0x0172 C-string:'CLIP'
//         CLIPPER  codep:0x8783 wordp:0x8783 size:0x005c C-string:'CLIPPER'
//         SCANCON  codep:0x1d29 wordp:0x87e1 size:0x00a4 C-string:'SCANCON'
//        SCANPOLY  codep:0x8891 wordp:0x8891 size:0x0104 C-string:'SCANPOLY'
//   SETCLIPWINDOW  codep:0x224c wordp:0x89a1 size:0x003e C-string:'SETCLIPWINDOW'
//        VCLIPSET  codep:0x224c wordp:0x89eb size:0x0010 C-string:'VCLIPSET'
//        DCLIPSET  codep:0x224c wordp:0x8a07 size:0x0010 C-string:'DCLIPSET'
//           W8A19  codep:0x224c wordp:0x8a19 size:0x0012 C-string:'W8A19'
//           W8A2D  codep:0x8a2d wordp:0x8a2d size:0x0025 C-string:'W8A2D'
//           W8A54  codep:0x224c wordp:0x8a54 size:0x0036 C-string:'W8A54'
//       ?HERCULES  codep:0x224c wordp:0x8a96 size:0x000a C-string:'IsHERCULES'
//  YTABLE.ADDRESS  codep:0x224c wordp:0x8aa2 size:0x0008 C-string:'YTABLE_dot_ADDRESS'
//         BLD-DIS  codep:0x224c wordp:0x8ab6 size:0x0042 C-string:'BLD_dash_DIS'
//          BLD-MV  codep:0x224c wordp:0x8b03 size:0x0058 C-string:'BLD_dash_MV'
//         HID-DIS  codep:0x224c wordp:0x8b5d size:0x002e C-string:'HID_dash_DIS'
//        ?HID-DIS  codep:0x224c wordp:0x8b8d size:0x000a C-string:'IsHID_dash_DIS'
//       >MAINVIEW  codep:0x224c wordp:0x8ba3 size:0x0022 C-string:'_gt_MAINVIEW'
//        >DISPLAY  codep:0x224c wordp:0x8bd1 size:0x001e C-string:'_gt_DISPLAY'
//         >HIDDEN  codep:0x224c wordp:0x8bfb size:0x003a C-string:'_gt_HIDDEN'
//         SET6845  codep:0x1d29 wordp:0x8c41 size:0x0012 C-string:'SET6845'
//            GIBM  codep:0x1d29 wordp:0x8c5c size:0x000e C-string:'GIBM'
//           GHERC  codep:0x1d29 wordp:0x8c74 size:0x000e C-string:'GHERC'
//           THERC  codep:0x1d29 wordp:0x8c8c size:0x000e C-string:'THERC'
//         >HGRAPH  codep:0x1d29 wordp:0x8ca6 size:0x001c C-string:'_gt_HGRAPH'
//          >HTEXT  codep:0x1d29 wordp:0x8ccd size:0x001c C-string:'_gt_HTEXT'
//           W8CEB  codep:0x1d29 wordp:0x8ceb size:0x0012 C-string:'W8CEB'
//    DISPLAY-WAIT  codep:0x8d09 wordp:0x8d09 size:0x0034 C-string:'DISPLAY_dash_WAIT'
//          >TANDY  codep:0x1d29 wordp:0x8d48 size:0x001c C-string:'_gt_TANDY'
//           W8D66  codep:0x8d66 wordp:0x8d66 size:0x0011 C-string:'W8D66'
//           >MONO  codep:0x224c wordp:0x8d81 size:0x0008 C-string:'_gt_MONO'
//          >LORES  codep:0x8d8b wordp:0x8d8b size:0x0063 C-string:'_gt_LORES'
//      >ALPHACODE  codep:0x8df0 wordp:0x8df0 size:0x001c C-string:'_gt_ALPHACODE'
//          >ALPHA  codep:0x224c wordp:0x8e17 size:0x0004 C-string:'_gt_ALPHA'
//              >A  codep:0x224c wordp:0x8e22 size:0x0004 C-string:'_gt_A'
//         COPYLIN  codep:0x1d29 wordp:0x8e32 size:0x001b C-string:'COPYLIN'
//           W8E4F  codep:0x8e4f wordp:0x8e4f size:0x001f C-string:'W8E4F'
//        SCANLINE  codep:0x224c wordp:0x8e70 size:0x000c C-string:'SCANLINE'
//        |DISPLAY  codep:0x224c wordp:0x8e88 size:0x0054 C-string:'_v_DISPLAY'
//        >LORES_2  codep:0x224c wordp:0x8ee7 size:0x000c C-string:'_gt_LORES_2'
//        SAVE-SCR  codep:0x224c wordp:0x8eff size:0x000a C-string:'SAVE_dash_SCR'
//         SCR-RES  codep:0x224c wordp:0x8f15 size:0x0026 C-string:'SCR_dash_RES'
//           W8F3D  codep:0x1d29 wordp:0x8f3d size:0x0044 C-string:'W8F3D'
//           BFILL  codep:0x8f8b wordp:0x8f8b size:0x002d C-string:'BFILL'
//            DARK  codep:0x224c wordp:0x8fc1 size:0x0010 C-string:'DARK'
//             BYE  codep:0x224c wordp:0x8fd9 size:0x0014 C-string:'BYE'
//           DUMMY  codep:0x1d29 wordp:0x8ff7 size:0x0001 C-string:'DUMMY'
//           LPLOT  codep:0x9002 wordp:0x9002 size:0x000a C-string:'LPLOT'
//          LXPLOT  codep:0x9017 wordp:0x9017 size:0x000a C-string:'LXPLOT'
//           {BLT}  codep:0x902b wordp:0x902b size:0x000a C-string:'_co_BLT_cc_'
//           LLINE  codep:0x903f wordp:0x903f size:0x000a C-string:'LLINE'
//       LFILLPOLY  codep:0x9055 wordp:0x9055 size:0x000a C-string:'LFILLPOLY'
//        LCOPYBLK  codep:0x906b wordp:0x906b size:0x000a C-string:'LCOPYBLK'
//        TILEFILL  codep:0x9081 wordp:0x9081 size:0x000a C-string:'TILEFILL'
//         SQLPLOT  codep:0x9097 wordp:0x9097 size:0x000a C-string:'SQLPLOT'
//       V>DISPLAY  codep:0x90ad wordp:0x90ad size:0x000a C-string:'V_gt_DISPLAY'
//         EEXTENT  codep:0x90c3 wordp:0x90c3 size:0x000a C-string:'EEXTENT'
//        {.ELLIP}  codep:0x1d29 wordp:0x90d9 size:0x0006 C-string:'_co__dot_ELLIP_cc_'
//    .{SCANELLIP}  codep:0x1d29 wordp:0x90eb size:0x0006 C-string:'Draw_co_SCANELLIP_cc_'
//             ARC  codep:0x90f9 wordp:0x90f9 size:0x000a C-string:'ARC'
//         L@PIXEL  codep:0x910f wordp:0x910f size:0x000a C-string:'L_at_PIXEL'
//         (FVLINE  codep:0x1d29 wordp:0x9125 size:0x0006 C-string:'_ro_FVLINE'
//         EGA-OFF  codep:0x1d29 wordp:0x9137 size:0x001e C-string:'EGA_dash_OFF'
//         CGA-OFF  codep:0x1d29 wordp:0x9161 size:0x001e C-string:'CGA_dash_OFF'
//         DEF-SEG  codep:0x224c wordp:0x918b size:0x005e C-string:'DEF_dash_SEG'
//           W91EB  codep:0x224c wordp:0x91eb size:0x005e C-string:'W91EB'
//         DEF-OFF  codep:0x224c wordp:0x9255 size:0x0014 C-string:'DEF_dash_OFF'
//         DO-PATC  codep:0x224c wordp:0x9275 size:0x0020 C-string:'DO_dash_PATC'
//         LOAD-CO  codep:0x224c wordp:0x92a1 size:0x0022 C-string:'LOAD_dash_CO'
//         EGA-BIT  codep:0x1d29 wordp:0x92cf size:0x0008 C-string:'EGA_dash_BIT'
//         CGA-BIT  codep:0x1d29 wordp:0x92e3 size:0x0002 C-string:'CGA_dash_BIT'
//           S/RON  codep:0x92ef wordp:0x92ef size:0x0011 C-string:'S_slash_RON'
//          (PLOT)  codep:0x1d29 wordp:0x930b size:0x0053 C-string:'_ro_PLOT_rc_'
//            PLOT  codep:0x9367 wordp:0x9367 size:0x0008 C-string:'PLOT'
//         SETCOLO  codep:0x937b wordp:0x937b size:0x0013 C-string:'SETCOLO'
//        ?EXTENTX  codep:0x9390 wordp:0x9390 size:0x001f C-string:'IsEXTENTX'
//         BEXTENT  codep:0x93b1 wordp:0x93b1 size:0x0021 C-string:'BEXTENT'
//             BLT  codep:0x224c wordp:0x93da size:0x001e C-string:'BLT'
//         {1FONT}  codep:0x224c wordp:0x93fa size:0x0064 C-string:'_co_1FONT_cc_'
//         {GTYPE}  codep:0x224c wordp:0x9460 size:0x0018 C-string:'_co_GTYPE_cc_'
//          >1FONT  codep:0x224c wordp:0x9483 size:0x0016 C-string:'_gt_1FONT'
//          >0FONT  codep:0x224c wordp:0x94a4 size:0x0020 C-string:'_gt_0FONT'
//         {2FONT}  codep:0x224c wordp:0x94d0 size:0x004c C-string:'_co_2FONT_cc_'
//          >2FONT  codep:0x224c wordp:0x9527 size:0x0016 C-string:'_gt_2FONT'
//         {3FONT}  codep:0x224c wordp:0x953f size:0x0052 C-string:'_co_3FONT_cc_'
//          >3FONT  codep:0x224c wordp:0x959c size:0x0016 C-string:'_gt_3FONT'
//         SHL-BIT  codep:0x95be wordp:0x95be size:0x000c C-string:'SHL_dash_BIT'
//      BLK>BUFFER  codep:0x224c wordp:0x95d6 size:0x002c C-string:'BLK_gt_BUFFER'
//         !EPARMS  codep:0x224c wordp:0x9604 size:0x0022 C-string:'StoreEPARMS'
//        .ELLIPSE  codep:0x224c wordp:0x9632 size:0x0020 C-string:'DrawELLIPSE'
//         .CIRCLE  codep:0x224c wordp:0x965e size:0x000a C-string:'DrawCIRCLE'
//       FILLELLIP  codep:0x224c wordp:0x9674 size:0x004a C-string:'FILLELLIP'
//        FILLCIRC  codep:0x224c wordp:0x96ca size:0x000a C-string:'FILLCIRC'
//        FRAMELEN  codep:0x224c wordp:0x96d6 size:0x001c C-string:'FRAMELEN'
//        .PACKBLT  codep:0x224c wordp:0x96fe size:0x006e C-string:'DrawPACKBLT'
//    SET-COLORMAP  codep:0x224c wordp:0x9778 size:0x0048 C-string:'SET_dash_COLORMAP'
//        COLORMAP  codep:0x97cc wordp:0x97cc size:0x002d C-string:'COLORMAP'
//       CELLCOLOR  codep:0x224c wordp:0x9805 size:0x0008 C-string:'CELLCOLOR'
//         !XYSEED  codep:0x224c wordp:0x9819 size:0x001c C-string:'StoreXYSEED'
//        BUFFERXY  codep:0x9841 wordp:0x9841 size:0x002b C-string:'BUFFERXY'
//           .CELL  codep:0x224c wordp:0x986e size:0x0006 C-string:'DrawCELL'
//        .1X2CELL  codep:0x224c wordp:0x9880 size:0x000e C-string:'Draw1X2CELL'
//        .2X2CELL  codep:0x224c wordp:0x989a size:0x0018 C-string:'Draw2X2CELL'
//        .4X4CELL  codep:0x224c wordp:0x98be size:0x0012 C-string:'Draw4X4CELL'
//        .8X8CELL  codep:0x224c wordp:0x98dc size:0x0012 C-string:'Draw8X8CELL'
//        .REGION+  codep:0x224c wordp:0x98fa size:0x0028 C-string:'DrawREGION_plus_'
//          ?INVIS  codep:0x992d wordp:0x992d size:0x0037 C-string:'IsINVIS'
//         WLD>SCR  codep:0x9970 wordp:0x9970 size:0x0038 C-string:'WLD_gt_SCR'
//         SCR>BLT  codep:0x99b4 wordp:0x99b4 size:0x0014 C-string:'SCR_gt_BLT'
//      !VISWINDOW  codep:0x224c wordp:0x99d4 size:0x0012 C-string:'StoreVISWINDOW'
//  FILE>ICONIMAGE  codep:0x224c wordp:0x99e8 size:0x0024 C-string:'FILE_gt_ICONIMAGE'
//      >1ICONFONT  codep:0x224c wordp:0x9a18 size:0x0012 C-string:'_gt_1ICONFONT'
//         >2ICONF  codep:0x224c wordp:0x9a36 size:0x0014 C-string:'_gt_2ICONF'
//      >3ICONFONT  codep:0x224c wordp:0x9a56 size:0x0014 C-string:'_gt_3ICONFONT'
//             @IW  codep:0x9a6c wordp:0x9a6c size:0x0014 C-string:'GetIW'
//           W9A82  codep:0x9a82 wordp:0x9a82 size:0x0014 C-string:'W9A82'
//             !IW  codep:0x9a9e wordp:0x9a9e size:0x0014 C-string:'StoreIW'
//             !IB  codep:0x9aba wordp:0x9aba size:0x0012 C-string:'StoreIB'
//             @IX  codep:0x224c wordp:0x9ad4 size:0x0008 C-string:'GetIX'
//             @IY  codep:0x224c wordp:0x9ae4 size:0x0008 C-string:'GetIY'
//             @ID  codep:0x224c wordp:0x9af4 size:0x0008 C-string:'GetID'
//             @IC  codep:0x224c wordp:0x9b04 size:0x0008 C-string:'GetIC'
//             @IL  codep:0x224c wordp:0x9b14 size:0x0008 C-string:'GetIL'
//             @IH  codep:0x224c wordp:0x9b24 size:0x0008 C-string:'GetIH'
//             !IX  codep:0x224c wordp:0x9b34 size:0x0008 C-string:'StoreIX'
//             !IY  codep:0x224c wordp:0x9b44 size:0x0008 C-string:'StoreIY'
//             !ID  codep:0x224c wordp:0x9b54 size:0x0008 C-string:'StoreID'
//             !IC  codep:0x224c wordp:0x9b64 size:0x0008 C-string:'StoreIC'
//             !IL  codep:0x224c wordp:0x9b74 size:0x0008 C-string:'StoreIL'
//             !IH  codep:0x224c wordp:0x9b84 size:0x0008 C-string:'StoreIH'
//   INIT-ICONLIST  codep:0x224c wordp:0x9b98 size:0x000a C-string:'INIT_dash_ICONLIST'
//     .BACKGROUND  codep:0x224c wordp:0x9bae size:0x0006 C-string:'DrawBACKGROUND'
//       {8X8ICON}  codep:0x224c wordp:0x9bb6 size:0x0036 C-string:'_co_8X8ICON_cc_'
//        .8X8ICON  codep:0x224c wordp:0x9bee size:0x0032 C-string:'Draw8X8ICON'
//      .FLUX-ICON  codep:0x224c wordp:0x9c22 size:0x0006 C-string:'DrawFLUX_dash_ICON'
//     .CIRCLEICON  codep:0x224c wordp:0x9c34 size:0x0020 C-string:'DrawCIRCLEICON'
//         SYSCASE  codep:0x4a4f wordp:0x9c60 size:0x0014 C-string:'SYSCASE'
//        .STARSYS  codep:0x224c wordp:0x9c76 size:0x0010 C-string:'DrawSTARSYS'
//      .ICONCASES  codep:0x4a4f wordp:0x9c92 size:0x0014 C-string:'DrawICONCASES'
//           .ICON  codep:0x224c wordp:0x9cb0 size:0x002e C-string:'DrawICON'
//      POINT>ICON  codep:0x224c wordp:0x9cea size:0x0006 C-string:'POINT_gt_ICON'
//    .LOCAL-ICONS  codep:0x224c wordp:0x9cfc size:0x001a C-string:'DrawLOCAL_dash_ICONS'
//         ?ILOCUS  codep:0x9d18 wordp:0x9d18 size:0x005e C-string:'IsILOCUS'
//    ?ICONS-LOCUS  codep:0x224c wordp:0x9d82 size:0x0008 C-string:'IsICONS_dash_LOCUS'
//       ?ICONS-AT  codep:0x224c wordp:0x9d96 size:0x0008 C-string:'IsICONS_dash_AT'
//     ?ICON-IADDR  codep:0x224c wordp:0x9daa size:0x0068 C-string:'IsICON_dash_IADDR'
//        XCHGICON  codep:0x9e14 wordp:0x9e14 size:0x003d C-string:'XCHGICON'
//       PERCOLATE  codep:0x224c wordp:0x9e53 size:0x001e C-string:'PERCOLATE'
//           -ICON  codep:0x224c wordp:0x9e7b size:0x0034 C-string:'_dash_ICON'
//            ?IID  codep:0x9eb1 wordp:0x9eb1 size:0x0041 C-string:'IsIID'
//         ?ICONSI  codep:0x224c wordp:0x9efe size:0x0008 C-string:'IsICONSI'
//           +ICON  codep:0x224c wordp:0x9f10 size:0x0026 C-string:'_plus_ICON'
//        +ICONBOX  codep:0x224c wordp:0x9f42 size:0x0008 C-string:'_plus_ICONBOX'
//         ORGLIST  codep:0x224c wordp:0x9f56 size:0x00ce C-string:'ORGLIST'
//            POS.  codep:0x224c wordp:0xa02d size:0x000a C-string:'POS_dot_'
//          .1LOGO  codep:0x224c wordp:0xa042 size:0x002c C-string:'Draw1LOGO'
// INIT-VIEWSCREEN-POLY  codep:0x224c wordp:0xa070 size:0x001a C-string:'INIT_dash_VIEWSCREEN_dash_POLY'
// POLY-WINDOW-BOUND  codep:0x224c wordp:0xa08c size:0x0058 C-string:'POLY_dash_WINDOW_dash_BOUND'
// POLY-WINDOW-FILL  codep:0x224c wordp:0xa0f0 size:0x0008 C-string:'POLY_dash_WINDOW_dash_FILL'
//           SFILL  codep:0x224c wordp:0xa102 size:0x0010 C-string:'SFILL'
//           >SSCT  codep:0x224c wordp:0xa11c size:0x0010 C-string:'_gt_SSCT'
//           >TVCT  codep:0x224c wordp:0xa136 size:0x0012 C-string:'_gt_TVCT'
//          CTPOS.  codep:0x224c wordp:0xa153 size:0x0024 C-string:'CTPOS_dot_'
//         CTERASE  codep:0x224c wordp:0xa183 size:0x001c C-string:'CTERASE'
//           @BEEP  codep:0x224c wordp:0xa1a9 size:0x000a C-string:'GetBEEP'
//           !BEEP  codep:0x224c wordp:0xa1bd size:0x000a C-string:'StoreBEEP'
//           CLICK  codep:0x224c wordp:0xa1d1 size:0x0018 C-string:'CLICK'
//            >SND  codep:0x224c wordp:0xa1f2 size:0x002a C-string:'_gt_SND'
//          BEEPON  codep:0x224c wordp:0xa227 size:0x000c C-string:'BEEPON'
//      mussegswap  codep:0x224c wordp:0xa235 size:0x0006 C-string:'mussegswap'
//           WA23D  codep:0x224c wordp:0xa23d size:0x0006 C-string:'WA23D'
//           WA245  codep:0x224c wordp:0xa245 size:0x0006 C-string:'WA245'
//           WA24D  codep:0x224c wordp:0xa24d size:0x0006 C-string:'WA24D'
//           WA255  codep:0x224c wordp:0xa255 size:0x0006 C-string:'WA255'
//           muson  codep:0x224c wordp:0xa25d size:0x0008 C-string:'muson'
//          musoff  codep:0x224c wordp:0xa267 size:0x000a C-string:'musoff'
//            SONG  codep:0x224c wordp:0xa27a size:0x0044 C-string:'SONG'
//            @CRS  codep:0x224c wordp:0xa2c7 size:0x002e C-string:'GetCRS'
//            !CRS  codep:0x224c wordp:0xa2fe size:0x002e C-string:'StoreCRS'
//              $.  codep:0x224c wordp:0xa333 size:0x0006 C-string:'_do__dot_'
// POLY-ERASE-TEXT  codep:0x224c wordp:0xa345 size:0x0028 C-string:'POLY_dash_ERASE_dash_TEXT'
//         POS.PXT  codep:0x224c wordp:0xa379 size:0x001c C-string:'POS_dot_PXT'
//          WINDOW  codep:0x224c wordp:0xa3a0 size:0x0038 C-string:'WINDOW'
//           WA3DA  codep:0x224c wordp:0xa3da size:0x0020 C-string:'WA3DA'
//           WA3FC  codep:0x224c wordp:0xa3fc size:0x001c C-string:'WA3FC'
//        WLINE-UP  codep:0x224c wordp:0xa424 size:0x002c C-string:'WLINE_dash_UP'
//         WLINE-D  codep:0x224c wordp:0xa45c size:0x002a C-string:'WLINE_dash_D'
//             GCR  codep:0x224c wordp:0xa48e size:0x0012 C-string:'GCR'
//         WSHORTE  codep:0x224c wordp:0xa4ac size:0x0020 C-string:'WSHORTE'
//            CTCR  codep:0x224c wordp:0xa4d5 size:0x0010 C-string:'CTCR'
//         TTY-SCR  codep:0x224c wordp:0xa4f1 size:0x0020 C-string:'TTY_dash_SCR'
//           WA513  codep:0x224c wordp:0xa513 size:0x000c C-string:'WA513'
//          CTINIT  codep:0x224c wordp:0xa52a size:0x0016 C-string:'CTINIT'
//            .TTY  codep:0x224c wordp:0xa549 size:0x0006 C-string:'DrawTTY'
//         VIEWSCR  codep:0x224c wordp:0xa55b size:0x0092 C-string:'VIEWSCR'
//         TXT-WIN  codep:0x224c wordp:0xa5f9 size:0x005e C-string:'TXT_dash_WIN'
//           WA659  codep:0x224c wordp:0xa659 size:0x0054 C-string:'WA659'
//           WA6AF  codep:0x224c wordp:0xa6af size:0x0054 C-string:'WA6AF'
//           WA705  codep:0x224c wordp:0xa705 size:0x0048 C-string:'WA705'
//            ?MRC  codep:0x224c wordp:0xa756 size:0x0026 C-string:'IsMRC'
//           WA77E  codep:0x224c wordp:0xa77e size:0x001c C-string:'WA77E'
// ERASE-AUXILLARY  codep:0x224c wordp:0xa7a6 size:0x001c C-string:'ERASE_dash_AUXILLARY'
//         ERASE-T  codep:0x224c wordp:0xa7ce size:0x001e C-string:'ERASE_dash_T'
//           WA7EE  codep:0x224c wordp:0xa7ee size:0x0012 C-string:'WA7EE'
//           WA802  codep:0x224c wordp:0xa802 size:0x001c C-string:'WA802'
//         .HIGHLI  codep:0x224c wordp:0xa82a size:0x001e C-string:'DrawHIGHLI'
//           WA84A  codep:0x224c wordp:0xa84a size:0x002a C-string:'WA84A'
//             .ON  codep:0x224c wordp:0xa87c size:0x0016 C-string:'DrawON'
//         CLR-BUT  codep:0x224c wordp:0xa89e size:0x0016 C-string:'CLR_dash_BUT'
//         INIT-BU  codep:0x224c wordp:0xa8c0 size:0x000e C-string:'INIT_dash_BU'
//         (SHIP-C  codep:0x224c wordp:0xa8da size:0x002c C-string:'_ro_SHIP_dash_C'
//    SHIP-CONSOLE  codep:0x224c wordp:0xa912 size:0x0006 C-string:'SHIP_dash_CONSOLE'
//            'KEY  codep:0x224c wordp:0xa921 size:0x006a C-string:'_i_KEY'
//              UL  codep:0x224c wordp:0xa98d size:0x0006 C-string:'UL'
//              U0  codep:0x224c wordp:0xa995 size:0x0006 C-string:'U0'
//              0L  codep:0x224c wordp:0xa99d size:0x0006 C-string:'_0L'
//              UR  codep:0x224c wordp:0xa9a5 size:0x000a C-string:'UR'
//              0R  codep:0x224c wordp:0xa9b1 size:0x000a C-string:'_0R'
//              DL  codep:0x224c wordp:0xa9bd size:0x0006 C-string:'DL'
//              DZ  codep:0x224c wordp:0xa9c5 size:0x0006 C-string:'DZ'
//              DR  codep:0x224c wordp:0xa9cd size:0x0006 C-string:'DR'
//             XY0  codep:0x224c wordp:0xa9d5 size:0x0004 C-string:'XY0'
//            TRIG  codep:0x224c wordp:0xa9db size:0x0008 C-string:'TRIG'
//        (XYSCAN)  codep:0x4a4f wordp:0xa9ef size:0x0040 C-string:'_ro_XYSCAN_rc_'
//          XYSCAN  codep:0x224c wordp:0xaa3a size:0x000e C-string:'XYSCAN'
//           ?TRIG  codep:0x224c wordp:0xaa52 size:0x0010 C-string:'IsTRIG'
//           ?QUIT  codep:0x224c wordp:0xaa6c size:0x0010 C-string:'IsQUIT'
//             Y/N  codep:0x224c wordp:0xaa84 size:0x0012 C-string:'Y_slash_N'
//     NEXT-BUTTON  codep:0x224c wordp:0xaa98 size:0x0012 C-string:'NEXT_dash_BUTTON'
//      XEQ-BUTTON  codep:0x224c wordp:0xaaac size:0x0006 C-string:'XEQ_dash_BUTTON'
//           .ABTN  codep:0x224c wordp:0xaabc size:0x0054 C-string:'DrawABTN'
//         .BTN-TE  codep:0x224c wordp:0xab1c size:0x004e C-string:'DrawBTN_dash_TE'
//         NEW-BUT  codep:0x224c wordp:0xab76 size:0x0044 C-string:'NEW_dash_BUT'
//     CURSORSPACE  codep:0x224c wordp:0xabc6 size:0x000c C-string:'CURSORSPACE'
//         BLD-CRS  codep:0x224c wordp:0xabde size:0x0052 C-string:'BLD_dash_CRS'
//         SET-CRS  codep:0x224c wordp:0xac3c size:0x005a C-string:'SET_dash_CRS'
//              $!  codep:0x224c wordp:0xac9d size:0x000a C-string:'_do__ex_'
//         SUBROOT  codep:0x224c wordp:0xacb3 size:0x0008 C-string:'SUBROOT'
//         SRDEPTH  codep:0x224c wordp:0xacc7 size:0x000a C-string:'SRDEPTH'
//         >ASCEND  codep:0x224c wordp:0xacd3 size:0x0014 C-string:'_gt_ASCEND'
//       NEXT-NODE  codep:0x224c wordp:0xacf3 size:0x001c C-string:'NEXT_dash_NODE'
//        INST-VAL  codep:0x744d wordp:0xad1b size:0x0003 C-string:'INST_dash_VAL'
//           SHAPE  codep:0x73ea wordp:0xad28 size:0x0006 C-string:'SHAPE'
//       INST-DATE  codep:0x744d wordp:0xad3a size:0x0003 C-string:'INST_dash_DATE'
//       RESEMBLES  codep:0x73ea wordp:0xad49 size:0x0006 C-string:'RESEMBLES'
//        BOX-NAME  codep:0x73ea wordp:0xad5b size:0x0006 C-string:'BOX_dash_NAME'
//           %NAME  codep:0x744d wordp:0xad6b size:0x0003 C-string:'_pe_NAME'
//       ORIG-NAME  codep:0x73ea wordp:0xad7a size:0x0006 C-string:'ORIG_dash_NAME'
//       SPEC-NAME  codep:0x73ea wordp:0xad8c size:0x0006 C-string:'SPEC_dash_NAME'
//         BD-NAME  codep:0x73ea wordp:0xad9e size:0x0006 C-string:'BD_dash_NAME'
//       ELEM-NAME  codep:0x73ea wordp:0xadb0 size:0x0006 C-string:'ELEM_dash_NAME'
//        ELEM-VAL  codep:0x73ea wordp:0xadc2 size:0x0006 C-string:'ELEM_dash_VAL'
//        ART-NAME  codep:0x73ea wordp:0xadd4 size:0x0006 C-string:'ART_dash_NAME'
//         ART-VAL  codep:0x73ea wordp:0xade6 size:0x0006 C-string:'ART_dash_VAL'
//         ART-VOL  codep:0x73ea wordp:0xadf8 size:0x0006 C-string:'ART_dash_VOL'
//         PHR-CNT  codep:0x744d wordp:0xae0a size:0x0003 C-string:'PHR_dash_CNT'
//      PHRASE-MEM  codep:0x744d wordp:0xae18 size:0x0003 C-string:'PHRASE_dash_MEM'
//             U>$  codep:0x224c wordp:0xae23 size:0x000a C-string:'U_gt__do_'
//           WAE2F  codep:0x224c wordp:0xae2f size:0x0014 C-string:'WAE2F'
//           WAE45  codep:0x224c wordp:0xae45 size:0x0016 C-string:'WAE45'
// <CTVERSIONERROR>  codep:0x224c wordp:0xae67 size:0x0012 C-string:'_st_CTVERSIONERROR_gt_'
//    <CTASKMOUNT>  codep:0x224c wordp:0xae85 size:0x000a C-string:'_st_CTASKMOUNT_gt_'
//         TEXT-CO  codep:0x744d wordp:0xae9b size:0x0003 C-string:'TEXT_dash_CO'
//         TEXT-IN  codep:0x744d wordp:0xaeaa size:0x0003 C-string:'TEXT_dash_IN'
//         TEXT-TE  codep:0x744d wordp:0xaeb9 size:0x0003 C-string:'TEXT_dash_TE'
//         TEXT>PA  codep:0x224c wordp:0xaec8 size:0x0016 C-string:'TEXT_gt_PA'
//           CMESS  codep:0x224c wordp:0xaee8 size:0x002c C-string:'CMESS'
//          X0MESS  codep:0x224c wordp:0xaf1f size:0x002a C-string:'X0MESS'
//           0MESS  codep:0x224c wordp:0xaf53 size:0x0006 C-string:'_0MESS'
//           WAF5B  codep:0x2214 wordp:0xaf5b size:0x0002 C-string:'WAF5B'
//      -XTRAILING  codep:0x224c wordp:0xaf69 size:0x002e C-string:'_dash_XTRAILING'
//         CEX+WAX  codep:0x224c wordp:0xafa3 size:0x000a C-string:'CEX_plus_WAX'
//           WAFAF  codep:0x224c wordp:0xafaf size:0x001c C-string:'WAFAF'
//           WAFCD  codep:0x224c wordp:0xafcd size:0x0006 C-string:'WAFCD'
//           WAFD5  codep:0x224c wordp:0xafd5 size:0x0006 C-string:'WAFD5'
//           WAFDD  codep:0x224c wordp:0xafdd size:0x0006 C-string:'WAFDD'
//           WAFE5  codep:0x224c wordp:0xafe5 size:0x0006 C-string:'WAFE5'
//           WAFED  codep:0x224c wordp:0xafed size:0x000c C-string:'WAFED'
//           WAFFB  codep:0x224c wordp:0xaffb size:0x0006 C-string:'WAFFB'
//           WB003  codep:0x224c wordp:0xb003 size:0x0006 C-string:'WB003'
//           WB00B  codep:0x224c wordp:0xb00b size:0x0006 C-string:'WB00B'
//           WB013  codep:0x224c wordp:0xb013 size:0x000c C-string:'WB013'
//         ?NEW-HO  codep:0x224c wordp:0xb02b size:0x0014 C-string:'IsNEW_dash_HO'
//           WB041  codep:0x224c wordp:0xb041 size:0x0006 C-string:'WB041'
//           WB049  codep:0x224c wordp:0xb049 size:0x0068 C-string:'WB049'
//         PARALLE  codep:0x224c wordp:0xb0bd size:0x0012 C-string:'PARALLE'
//           WB0D1  codep:0x224c wordp:0xb0d1 size:0x000e C-string:'WB0D1'
//           WB0E1  codep:0x224c wordp:0xb0e1 size:0x000e C-string:'WB0E1'
//           WB0F1  codep:0x224c wordp:0xb0f1 size:0x0006 C-string:'WB0F1'
//         DOTASKS  codep:0x224c wordp:0xb103 size:0x0085 C-string:'DOTASKS'
//           WB18A  codep:0x224c wordp:0xb18a size:0x0018 C-string:'WB18A'
//    RESTOREINT24  codep:0x224c wordp:0xb1a4 size:0x000c C-string:'RESTOREINT24'
//         SETDBUF  codep:0x224c wordp:0xb1bc size:0x0054 C-string:'SETDBUF'
//            XOR!  codep:0x224c wordp:0xb219 size:0x0032 C-string:'XOR_ex_'
//           HEAD!  codep:0x224c wordp:0xb255 size:0x0074 C-string:'HEAD_ex_'
//         LFCLAIM  codep:0x224c wordp:0xb2cb size:0x0010 C-string:'LFCLAIM'
//        AINSTALL  codep:0x224c wordp:0xb2dd size:0x0020 C-string:'AINSTALL'
//        BINSTALL  codep:0x224c wordp:0xb2ff size:0x0008 C-string:'BINSTALL'
//       AINSTALLS  codep:0x224c wordp:0xb309 size:0x0024 C-string:'AINSTALLS'
//       BINSTALLS  codep:0x224c wordp:0xb32f size:0x007e C-string:'BINSTALLS'
//          ICINIT  codep:0x224c wordp:0xb3b8 size:0x002a C-string:'ICINIT'
//        INIT-CRS  codep:0x224c wordp:0xb3e4 size:0x001e C-string:'INIT_dash_CRS'
//         XKEYINT  codep:0xb40e wordp:0xb40e size:0x001f C-string:'XKEYINT'
//     INSTALLXKEY  codep:0x224c wordp:0xb439 size:0x0024 C-string:'INSTALLXKEY'
//       KILLBREAK  codep:0x224c wordp:0xb45f size:0x000e C-string:'KILLBREAK'
//            farb  codep:0x224c wordp:0xb46f size:0x000a C-string:'farb'
//      RESTOREKEY  codep:0x224c wordp:0xb485 size:0x0018 C-string:'RESTOREKEY'
//           FLIMP  codep:0x224c wordp:0xb49f size:0x0006 C-string:'FLIMP'
//      CFIGARRAYS  codep:0x224c wordp:0xb4b1 size:0x002e C-string:'CFIGARRAYS'
//         LDFONTS  codep:0x224c wordp:0xb4eb size:0x000c C-string:'LDFONTS'
// CONFIGURE-SYSTEM  codep:0x224c wordp:0xb503 size:0x0054 C-string:'CONFIGURE_dash_SYSTEM'
//         STARTER  codep:0x224c wordp:0xb563 size:0x0006 C-string:'STARTER'
//             DOS  codep:0x224c wordp:0xb571 size:0x0002 C-string:'DOS'
//           MUSIC  codep:0x1ab5 wordp:0xb57d size:0x0014 C-string:'MUSIC'
//        MUSIC-OV  codep:0x83f8 wordp:0xb59e size:0x0002 C-string:'MUSIC_dash_OV'
//           HIMUS  codep:0x224c wordp:0xb5aa size:0x0006 C-string:'HIMUS'
//       *CAPT-LOG  codep:0x3b68 wordp:0xb5be size:0x0004 C-string:'_star_CAPT_dash_LOG'
//             *OP  codep:0x3b68 wordp:0xb5ca size:0x0004 C-string:'_star_OP'
//       *COMM-OFF  codep:0x3b68 wordp:0xb5dc size:0x0004 C-string:'_star_COMM_dash_OFF'
//            *EOL  codep:0x3b68 wordp:0xb5e9 size:0x0004 C-string:'_star_EOL'
//          OTABLE  codep:0x1d29 wordp:0xb5f8 size:0x002a C-string:'OTABLE'
//            +ORG  codep:0x4a4f wordp:0xb62b size:0x0010 C-string:'_plus_ORG'
//        ORGIADDR  codep:0x224c wordp:0xb648 size:0x0018 C-string:'ORGIADDR'
//       XHBUF-SEG  codep:0x224c wordp:0xb66e size:0x0012 C-string:'XHBUF_dash_SEG'
//        COND-CNT  codep:0x1d29 wordp:0xb68d size:0x0002 C-string:'COND_dash_CNT'
//            TRUE  codep:0x2214 wordp:0xb698 size:0x0002 C-string:'TRUE'
//           FALSE  codep:0x2214 wordp:0xb6a4 size:0x0002 C-string:'FALSE'
//         UNKNOWN  codep:0x2214 wordp:0xb6b2 size:0x0002 C-string:'UNKNOWN'
//         RULELIM  codep:0x2214 wordp:0xb6c0 size:0x0002 C-string:'RULELIM'
//         CONDLIM  codep:0x2214 wordp:0xb6ce size:0x0002 C-string:'CONDLIM'
//         RULECNT  codep:0x2214 wordp:0xb6dc size:0x0002 C-string:'RULECNT'
//         RULEARR  codep:0x2214 wordp:0xb6ea size:0x0002 C-string:'RULEARR'
//         CONDARR  codep:0x2214 wordp:0xb6f8 size:0x0002 C-string:'CONDARR'
//         CFLGARR  codep:0x2214 wordp:0xb706 size:0x0002 C-string:'CFLGARR'
//             XC@  codep:0x224c wordp:0xb710 size:0x000a C-string:'XC_at_'
//             C+!  codep:0x224c wordp:0xb722 size:0x000e C-string:'C_plus__ex_'
//         >EXPERT  codep:0x224c wordp:0xb73c size:0x004c C-string:'_gt_EXPERT'
//        DISTRACT  codep:0x224c wordp:0xb795 size:0x000e C-string:'DISTRACT'
//    EXECUTE-RULE  codep:0x224c wordp:0xb7b4 size:0x0080 C-string:'EXECUTE_dash_RULE'
//          EXPERT  codep:0x224c wordp:0xb83f size:0x0087 C-string:'EXPERT'
//             -->  codep:0x224c wordp:0xb8ce size:0x0004 C-string:'_dash__dash__gt_'
//          ?INDEX  codep:0x224c wordp:0xb8dd size:0x0032 C-string:'IsINDEX'
//       CONDITION  codep:0x224c wordp:0xb91d size:0x0063 C-string:'CONDITION'
//           RULE:  codep:0x224c wordp:0xb98a size:0x0095 C-string:'RULE_c_'
//          IT-VOC  codep:0x1ab5 wordp:0xba2a size:0x0014 C-string:'IT_dash_VOC'
//           IT-OV  codep:0x83f8 wordp:0xba48 size:0x0002 C-string:'IT_dash_OV'
//           WBA4C  codep:0x224c wordp:0xba4c size:0x0008 C-string:'WBA4C'
//           WBA56  codep:0x224c wordp:0xba56 size:0x0008 C-string:'WBA56'
//           WBA60  codep:0x224c wordp:0xba60 size:0x0008 C-string:'WBA60'
//           WBA6A  codep:0x224c wordp:0xba6a size:0x0008 C-string:'WBA6A'
//           WBA74  codep:0x224c wordp:0xba74 size:0x0008 C-string:'WBA74'
//           WBA7E  codep:0x224c wordp:0xba7e size:0x0008 C-string:'WBA7E'
//           WBA88  codep:0x224c wordp:0xba88 size:0x0008 C-string:'WBA88'
//           WBA92  codep:0x224c wordp:0xba92 size:0x0008 C-string:'WBA92'
//           WBA9C  codep:0x224c wordp:0xba9c size:0x0008 C-string:'WBA9C'
//           WBAA6  codep:0x224c wordp:0xbaa6 size:0x0008 C-string:'WBAA6'
//           WBAB0  codep:0x224c wordp:0xbab0 size:0x0008 C-string:'WBAB0'
//       DATE$>ADR  codep:0x224c wordp:0xbac4 size:0x0008 C-string:'DATE_do__gt_ADR'
//         BOX>LIS  codep:0x224c wordp:0xbad8 size:0x0008 C-string:'BOX_gt_LIS'
//         GET-BOX  codep:0x224c wordp:0xbaec size:0x0008 C-string:'GET_dash_BOX'
//         MAKE-SC  codep:0x224c wordp:0xbb00 size:0x0008 C-string:'MAKE_dash_SC'
// delete-scroll-box  codep:0x224c wordp:0xbb14 size:0x0008 C-string:'delete_dash_scroll_dash_box'
//         BOX>TOC  codep:0x224c wordp:0xbb28 size:0x0008 C-string:'BOX_gt_TOC'
//            >BOX  codep:0x224c wordp:0xbb39 size:0x0008 C-string:'_gt_BOX'
//            BOX>  codep:0x224c wordp:0xbb4a size:0x0008 C-string:'BOX_gt_'
//          (BOX>)  codep:0x224c wordp:0xbb5d size:0x0008 C-string:'_ro_BOX_gt__rc_'
//         CLASS>B  codep:0x224c wordp:0xbb71 size:0x0008 C-string:'CLASS_gt_B'
//         ITEM>PA  codep:0x224c wordp:0xbb85 size:0x0008 C-string:'ITEM_gt_PA'
//          BTADDR  codep:0x1d29 wordp:0xbb98 size:0x0002 C-string:'BTADDR'
// HUFF_BT_POINTER  codep:0x1d29 wordp:0xbb9c size:0x0002 C-string:'HUFF_BT_POINTER'
// HUFF_ACTIVE_POINTER_BYTE  codep:0x1d29 wordp:0xbba0 size:0x0002 C-string:'HUFF_ACTIVE_POINTER_BYTE'
//           WBBA4  codep:0x1d29 wordp:0xbba4 size:0x0002 C-string:'WBBA4'
// HUFF_ACTIVE_POINTER_BIT  codep:0x1d29 wordp:0xbba8 size:0x0002 C-string:'HUFF_ACTIVE_POINTER_BIT'
// HUFF_PHRASE_ADDCHAR  codep:0x2214 wordp:0xbbac size:0x0002 C-string:'HUFF_PHRASE_ADDCHAR'
// HUFF_PHRASE_INIT  codep:0x2214 wordp:0xbbb0 size:0x0002 C-string:'HUFF_PHRASE_INIT'
// HUFF_PHRASE_FINISH  codep:0x2214 wordp:0xbbb4 size:0x0002 C-string:'HUFF_PHRASE_FINISH'
// HUFF_MOVE_ACTIVE_POINTER  codep:0x224c wordp:0xbbb8 size:0x0024 C-string:'HUFF_MOVE_ACTIVE_POINTER'
//           WBBDE  codep:0x224c wordp:0xbbde size:0x004e C-string:'WBBDE'
//           HUFF>  codep:0x224c wordp:0xbc36 size:0x0040 C-string:'HUFF_gt_'
//         PHRASE$  codep:0x744d wordp:0xbc82 size:0x0003 C-string:'PHRASE_do_'
// HUFF_LSCAN_INIT  codep:0x224c wordp:0xbc87 size:0x0006 C-string:'HUFF_LSCAN_INIT'
// HUFF_LSCAN_ADDCHAR  codep:0x224c wordp:0xbc8f size:0x0014 C-string:'HUFF_LSCAN_ADDCHAR'
// HUFF_LSCAN_FINISH  codep:0x224c wordp:0xbca5 size:0x0070 C-string:'HUFF_LSCAN_FINISH'
//        MISC-VOC  codep:0x1ab5 wordp:0xbd1f size:0x0014 C-string:'MISC_dash_VOC'
//         MISC-OV  codep:0x83f8 wordp:0xbd3d size:0x0002 C-string:'MISC_dash_OV'
//          =CARGO  codep:0x224c wordp:0xbd4a size:0x0006 C-string:'_eq_CARGO'
//          OV#IN$  codep:0x224c wordp:0xbd5b size:0x0006 C-string:'OV_n_IN_do_'
//      OVQUITMESS  codep:0x224c wordp:0xbd70 size:0x0006 C-string:'OVQUITMESS'
//         OV.0$$$  codep:0x224c wordp:0xbd82 size:0x0006 C-string:'OV_dot_0_do__do__do_'
//      OV0$$$MESS  codep:0x224c wordp:0xbd97 size:0x0006 C-string:'OV0_do__do__do_MESS'
//          OVTRIM  codep:0x224c wordp:0xbda8 size:0x0006 C-string:'OVTRIM'
//         OVTRIMS  codep:0x224c wordp:0xbdba size:0x000e C-string:'OVTRIMS'
//     OV?ARTIFACT  codep:0x224c wordp:0xbdd8 size:0x0006 C-string:'OV_ask_ARTIFACT'
//    OV?.EQUIP-OK  codep:0x224c wordp:0xbdef size:0x0006 C-string:'OV_ask__dot_EQUIP_dash_OK'
//         ENG-VOC  codep:0x1ab5 wordp:0xbe01 size:0x0014 C-string:'ENG_dash_VOC'
//           ENG-O  codep:0x83f8 wordp:0xbe1f size:0x0002 C-string:'ENG_dash_O'
//           OV/DA  codep:0x224c wordp:0xbe2b size:0x0006 C-string:'OV_slash_DA'
//           OV/RE  codep:0x224c wordp:0xbe3b size:0x0006 C-string:'OV_slash_RE'
//           OVDBA  codep:0x224c wordp:0xbe4b size:0x0006 C-string:'OVDBA'
//         BLT-VOC  codep:0x1ab5 wordp:0xbe5d size:0x0014 C-string:'BLT_dash_VOC'
//          BLT-OV  codep:0x83f8 wordp:0xbe7c size:0x0002 C-string:'BLT_dash_OV'
//         .RUNBIT  codep:0x224c wordp:0xbe8a size:0x0006 C-string:'DrawRUNBIT'
//        @.HYBRID  codep:0x224c wordp:0xbe9d size:0x0006 C-string:'Get_dot_HYBRID'
//      .EGARUNBIT  codep:0x224c wordp:0xbeb2 size:0x0006 C-string:'DrawEGARUNBIT'
//         SCI-VOC  codep:0x1ab5 wordp:0xbec4 size:0x0014 C-string:'SCI_dash_VOC'
//          SCI-OV  codep:0x83f8 wordp:0xbee3 size:0x0002 C-string:'SCI_dash_OV'
//       OV/STATUS  codep:0x224c wordp:0xbef3 size:0x0006 C-string:'OV_slash_STATUS'
//         OV/STXT  codep:0x224c wordp:0xbf05 size:0x0006 C-string:'OV_slash_STXT'
//      OVSTARDATE  codep:0x224c wordp:0xbf1a size:0x0008 C-string:'OVSTARDATE'
//      OV/SENSORS  codep:0x224c wordp:0xbf31 size:0x0006 C-string:'OV_slash_SENSORS'
//          ?HEAVY  codep:0x224c wordp:0xbf42 size:0x0006 C-string:'IsHEAVY'
//       /STARDATE  codep:0x224c wordp:0xbf56 size:0x0008 C-string:'_slash_STARDATE'
//           .SORD  codep:0x224c wordp:0xbf68 size:0x0024 C-string:'DrawSORD'
//         ?VCYCLE  codep:0x224c wordp:0xbf98 size:0x000c C-string:'IsVCYCLE'
//          HEALTI  codep:0x1d29 wordp:0xbfaf size:0x0002 C-string:'HEALTI'
//          LASTAP  codep:0x1d29 wordp:0xbfbc size:0x0004 C-string:'LASTAP'
//          ROSTER  codep:0x1d29 wordp:0xbfcb size:0x0012 C-string:'ROSTER'
//          HEALER  codep:0x1ab5 wordp:0xbfe8 size:0x0014 C-string:'HEALER'
//          HEAL-O  codep:0x83f8 wordp:0xc007 size:0x0002 C-string:'HEAL_dash_O'
//            (OBI  codep:0x224c wordp:0xc012 size:0x0006 C-string:'_ro_OBI'
//            (.VI  codep:0x224c wordp:0xc021 size:0x0006 C-string:'_ro__dot_VI'
//            (HEA  codep:0x224c wordp:0xc030 size:0x0006 C-string:'_ro_HEA'
//            (ROL  codep:0x224c wordp:0xc03f size:0x0006 C-string:'_ro_ROL'
//            OBIT  codep:0x224c wordp:0xc04e size:0x0008 C-string:'OBIT'
//            HEAL  codep:0x224c wordp:0xc05f size:0x0008 C-string:'HEAL'
//            .VIT  codep:0x224c wordp:0xc070 size:0x0008 C-string:'DrawVIT'
//            ?APP  codep:0x224c wordp:0xc081 size:0x002e C-string:'IsAPP'
//          REPAIR  codep:0x1ab5 wordp:0xc0ba size:0x0014 C-string:'REPAIR'
//         REPAIR-  codep:0x83f8 wordp:0xc0da size:0x0002 C-string:'REPAIR_dash_'
//         DO-REPA  codep:0x224c wordp:0xc0e8 size:0x0010 C-string:'DO_dash_REPA'
//    ?SHIP-REPAIR  codep:0x224c wordp:0xc104 size:0x0026 C-string:'IsSHIP_dash_REPAIR'
//         MREPAIR  codep:0x224c wordp:0xc136 size:0x0020 C-string:'MREPAIR'
//        COMM-VOC  codep:0x1ab5 wordp:0xc163 size:0x0014 C-string:'COMM_dash_VOC'
//         COMM-OV  codep:0x83f8 wordp:0xc183 size:0x0002 C-string:'COMM_dash_OV'
//     OVINIT-COMM  codep:0x224c wordp:0xc195 size:0x0008 C-string:'OVINIT_dash_COMM'
//          U-COMM  codep:0x224c wordp:0xc1a8 size:0x0008 C-string:'U_dash_COMM'
//    COMM-EXPERTS  codep:0x224c wordp:0xc1c1 size:0x0008 C-string:'COMM_dash_EXPERTS'
//             A>O  codep:0x224c wordp:0xc1d1 size:0x0008 C-string:'A_gt_O'
//             O>C  codep:0x224c wordp:0xc1e1 size:0x0008 C-string:'O_gt_C'
//           >HAIL  codep:0x224c wordp:0xc1f3 size:0x0006 C-string:'_gt_HAIL'
//         OV+!EDL  codep:0x224c wordp:0xc205 size:0x0008 C-string:'OV_plus__ex_EDL'
//            P>CT  codep:0x224c wordp:0xc216 size:0x0008 C-string:'P_gt_CT'
//            CTUP  codep:0x224c wordp:0xc227 size:0x0006 C-string:'CTUP'
//       OVEDL+AUX  codep:0x224c wordp:0xc23b size:0x0008 C-string:'OVEDL_plus_AUX'
//   MCOMM-EXPERTS  codep:0x224c wordp:0xc255 size:0x0008 C-string:'MCOMM_dash_EXPERTS'
//        MEDL+AUX  codep:0x224c wordp:0xc26a size:0x0008 C-string:'MEDL_plus_AUX'
//          DA-STR  codep:0x224c wordp:0xc27d size:0x0008 C-string:'DA_dash_STR'
//        XCOM-VOC  codep:0x1ab5 wordp:0xc292 size:0x0014 C-string:'XCOM_dash_VOC'
//         XCOM-OV  codep:0x83f8 wordp:0xc2b2 size:0x0002 C-string:'XCOM_dash_OV'
//           XCOMM  codep:0x224c wordp:0xc2be size:0x0006 C-string:'XCOMM'
//           FRACT  codep:0x1ab5 wordp:0xc2ce size:0x0014 C-string:'FRACT'
//        FRACT-OV  codep:0x83f8 wordp:0xc2ef size:0x0002 C-string:'FRACT_dash_OV'
//    MERCATOR-GEN  codep:0x224c wordp:0xc302 size:0x0006 C-string:'MERCATOR_dash_GEN'
//      NEWCONTOUR  codep:0x224c wordp:0xc317 size:0x0006 C-string:'NEWCONTOUR'
//      MAKE-GLOBE  codep:0x224c wordp:0xc32c size:0x0006 C-string:'MAKE_dash_GLOBE'
//         SCRLCON  codep:0x224c wordp:0xc33e size:0x0006 C-string:'SCRLCON'
//           ORBIT  codep:0x1ab5 wordp:0xc34e size:0x0014 C-string:'ORBIT'
//        ORBIT-OV  codep:0x83f8 wordp:0xc36f size:0x0002 C-string:'ORBIT_dash_OV'
//      INIT-ORBIT  codep:0x224c wordp:0xc380 size:0x0008 C-string:'INIT_dash_ORBIT'
//        SHOWSITE  codep:0x224c wordp:0xc395 size:0x0006 C-string:'SHOWSITE'
//         DESCEND  codep:0x224c wordp:0xc3a7 size:0x0008 C-string:'DESCEND'
//          ASCEND  codep:0x224c wordp:0xc3ba size:0x0008 C-string:'ASCEND'
//          ROTATE  codep:0x224c wordp:0xc3cd size:0x0008 C-string:'ROTATE'
//         SEEGRID  codep:0x224c wordp:0xc3e1 size:0x0006 C-string:'SEEGRID'
//         MROTATE  codep:0x224c wordp:0xc3f3 size:0x0008 C-string:'MROTATE'
//          VICONP  codep:0x1ab5 wordp:0xc406 size:0x0014 C-string:'VICONP'
//        ICONP-OV  codep:0x83f8 wordp:0xc427 size:0x0002 C-string:'ICONP_dash_OV'
//       ICON-PARM  codep:0x224c wordp:0xc437 size:0x0006 C-string:'ICON_dash_PARM'
//       +ICONBXOV  codep:0x224c wordp:0xc44b size:0x0006 C-string:'_plus_ICONBXOV'
//        SITE-VOC  codep:0x1ab5 wordp:0xc45e size:0x0014 C-string:'SITE_dash_VOC'
//         SITE-OV  codep:0x83f8 wordp:0xc47e size:0x0002 C-string:'SITE_dash_OV'
//         (.MERC)  codep:0x224c wordp:0xc48c size:0x0008 C-string:'_ro__dot_MERC_rc_'
//       (GETSITE)  codep:0x224c wordp:0xc4a2 size:0x000a C-string:'_ro_GETSITE_rc_'
//        FLUX-VOC  codep:0x1ab5 wordp:0xc4b9 size:0x0014 C-string:'FLUX_dash_VOC'
//         FLUX-OV  codep:0x83f8 wordp:0xc4d9 size:0x0002 C-string:'FLUX_dash_OV'
//   OVFLUX-EFFECT  codep:0x224c wordp:0xc4e5 size:0x0006 C-string:'OVFLUX_dash_EFFECT'
//        BANK-VOC  codep:0x1ab5 wordp:0xc4f8 size:0x0014 C-string:'BANK_dash_VOC'
//         BANK-OV  codep:0x83f8 wordp:0xc518 size:0x0002 C-string:'BANK_dash_OV'
//  OVINIT-BALANCE  codep:0x224c wordp:0xc52d size:0x0006 C-string:'OVINIT_dash_BALANCE'
//      OVTRANSACT  codep:0x224c wordp:0xc542 size:0x0006 C-string:'OVTRANSACT'
//     OVD@BALANCE  codep:0x224c wordp:0xc558 size:0x0006 C-string:'OVD_at_BALANCE'
//     OVD!BALANCE  codep:0x224c wordp:0xc56e size:0x0006 C-string:'OVD_ex_BALANCE'
//      OV?BALANCE  codep:0x224c wordp:0xc583 size:0x0006 C-string:'OV_ask_BALANCE'
//        OV!TFLAG  codep:0x224c wordp:0xc596 size:0x0006 C-string:'OV_ex_TFLAG'
//         I-TRANS  codep:0x224c wordp:0xc5a8 size:0x0006 C-string:'I_dash_TRANS'
//             U-B  codep:0x224c wordp:0xc5b6 size:0x0006 C-string:'U_dash_B'
//       T+BALANCE  codep:0x224c wordp:0xc5ca size:0x000c C-string:'T_plus_BALANCE'
//       ACREW-VOC  codep:0x1ab5 wordp:0xc5e4 size:0x0014 C-string:'ACREW_dash_VOC'
//        ACREW-OV  codep:0x83f8 wordp:0xc605 size:0x0002 C-string:'ACREW_dash_OV'
//            U-AC  codep:0x224c wordp:0xc610 size:0x0006 C-string:'U_dash_AC'
//       PFILE-VOC  codep:0x1ab5 wordp:0xc624 size:0x0014 C-string:'PFILE_dash_VOC'
//        PFILE-OV  codep:0x83f8 wordp:0xc645 size:0x0002 C-string:'PFILE_dash_OV'
//            U-PF  codep:0x224c wordp:0xc650 size:0x0006 C-string:'U_dash_PF'
//     SHIP-GR-VOC  codep:0x1ab5 wordp:0xc666 size:0x0014 C-string:'SHIP_dash_GR_dash_VOC'
//      SHIP-GR-OV  codep:0x83f8 wordp:0xc689 size:0x0002 C-string:'SHIP_dash_GR_dash_OV'
//         OV.MASS  codep:0x224c wordp:0xc697 size:0x0006 C-string:'OV_dot_MASS'
//          OV.ACC  codep:0x224c wordp:0xc6a8 size:0x0006 C-string:'OV_dot_ACC'
//         OV.PODS  codep:0x224c wordp:0xc6ba size:0x0006 C-string:'OV_dot_PODS'
//         OV.SHIP  codep:0x224c wordp:0xc6cc size:0x0006 C-string:'OV_dot_SHIP'
//   OVBALANCEMESS  codep:0x224c wordp:0xc6e4 size:0x0006 C-string:'OVBALANCEMESS'
//       OV.CONFIG  codep:0x224c wordp:0xc6f8 size:0x0006 C-string:'OV_dot_CONFIG'
//      CONFIG-VOC  codep:0x1ab5 wordp:0xc70d size:0x0014 C-string:'CONFIG_dash_VOC'
//       CONFIG-OV  codep:0x83f8 wordp:0xc72f size:0x0002 C-string:'CONFIG_dash_OV'
//            U-SC  codep:0x224c wordp:0xc73a size:0x0006 C-string:'U_dash_SC'
//          TD-VOC  codep:0x1ab5 wordp:0xc74b size:0x0014 C-string:'TD_dash_VOC'
//           TD-OV  codep:0x83f8 wordp:0xc769 size:0x0002 C-string:'TD_dash_OV'
//          <TDART  codep:0x224c wordp:0xc776 size:0x0006 C-string:'_st_TDART'
//            U-TD  codep:0x224c wordp:0xc785 size:0x0006 C-string:'U_dash_TD'
//            TOSS  codep:0x224c wordp:0xc794 size:0x0006 C-string:'TOSS'
//    KEY-ELEM-AMT  codep:0x224c wordp:0xc7ab size:0x0006 C-string:'KEY_dash_ELEM_dash_AMT'
//         ?FANLYZ  codep:0x1d29 wordp:0xc7bd size:0x0002 C-string:'IsFANLYZ'
//          OP-VOC  codep:0x1ab5 wordp:0xc7ca size:0x0014 C-string:'OP_dash_VOC'
//           OP-OV  codep:0x83f8 wordp:0xc7e8 size:0x0002 C-string:'OP_dash_OV'
//            U-OP  codep:0x224c wordp:0xc7f3 size:0x0006 C-string:'U_dash_OP'
//          SETTER  codep:0x1ab5 wordp:0xc804 size:0x0014 C-string:'SETTER'
//        PLSET-OV  codep:0x83f8 wordp:0xc825 size:0x0002 C-string:'PLSET_dash_OV'
//      SET-PLANET  codep:0x224c wordp:0xc834 size:0x0006 C-string:'SET_dash_PLANET'
//            SETC  codep:0x224c wordp:0xc843 size:0x0006 C-string:'SETC'
//       DPART-VOC  codep:0x1ab5 wordp:0xc857 size:0x0014 C-string:'DPART_dash_VOC'
//        DPART-OV  codep:0x83f8 wordp:0xc878 size:0x0002 C-string:'DPART_dash_OV'
//          DEPART  codep:0x224c wordp:0xc885 size:0x0006 C-string:'DEPART'
//        DAMAGE_1  codep:0x1ab5 wordp:0xc897 size:0x0014 C-string:'DAMAGE_1'
//        DAMAGE_2  codep:0x83f8 wordp:0xc8b7 size:0x0002 C-string:'DAMAGE_2'
//           DO-DA  codep:0x224c wordp:0xc8c3 size:0x0008 C-string:'DO_dash_DA'
//       COMBAT-VO  codep:0x1ab5 wordp:0xc8d9 size:0x0014 C-string:'COMBAT_dash_VO'
//        COMBAT-O  codep:0x83f8 wordp:0xc8fa size:0x0002 C-string:'COMBAT_dash_O'
//             (WA  codep:0x224c wordp:0xc904 size:0x0008 C-string:'_ro_WA'
//             (CO  codep:0x224c wordp:0xc914 size:0x000e C-string:'_ro_CO'
//             CSC  codep:0x224c wordp:0xc92a size:0x0006 C-string:'CSC'
//             C&C  codep:0x224c wordp:0xc938 size:0x0008 C-string:'C_and_C'
//             COM  codep:0x224c wordp:0xc948 size:0x0008 C-string:'COM'
//             WAR  codep:0x224c wordp:0xc958 size:0x0008 C-string:'WAR'
//        ?CALLING  codep:0x1d29 wordp:0xc96d size:0x0002 C-string:'IsCALLING'
//       HMISC-VOC  codep:0x1ab5 wordp:0xc97d size:0x0014 C-string:'HMISC_dash_VOC'
//        HMISC-OV  codep:0x83f8 wordp:0xc99e size:0x0002 C-string:'HMISC_dash_OV'
//             UFM  codep:0x224c wordp:0xc9a8 size:0x0006 C-string:'UFM'
//             USM  codep:0x224c wordp:0xc9b6 size:0x0006 C-string:'USM'
//             NFM  codep:0x224c wordp:0xc9c4 size:0x0006 C-string:'NFM'
//             NSM  codep:0x224c wordp:0xc9d2 size:0x0006 C-string:'NSM'
//             .EX  codep:0x224c wordp:0xc9e0 size:0x0006 C-string:'DrawEX'
//            DMSG  codep:0x224c wordp:0xc9ef size:0x0006 C-string:'DMSG'
//            D-UP  codep:0x224c wordp:0xc9fe size:0x0006 C-string:'D_dash_UP'
//        DO-FLARE  codep:0x224c wordp:0xca11 size:0x0006 C-string:'DO_dash_FLARE'
//            ?PRL  codep:0x224c wordp:0xca20 size:0x0006 C-string:'IsPRL'
//            OSET  codep:0x224c wordp:0xca2f size:0x0006 C-string:'OSET'
//           ORBUP  codep:0x224c wordp:0xca3f size:0x0008 C-string:'ORBUP'
//       TRAK-ENCS  codep:0x224c wordp:0xca55 size:0x001e C-string:'TRAK_dash_ENCS'
//            HEAT  codep:0x224c wordp:0xca7c size:0x0006 C-string:'HEAT'
//           !'EXT  codep:0x224c wordp:0xca8c size:0x0006 C-string:'Store_i_EXT'
//          (CTXT)  codep:0x224c wordp:0xca9d size:0x0006 C-string:'_ro_CTXT_rc_'
//   CONTEXT-CASES  codep:0x224c wordp:0xcab5 size:0x0008 C-string:'CONTEXT_dash_CASES'
//         +A-VESS  codep:0x224c wordp:0xcac9 size:0x0006 C-string:'_plus_A_dash_VESS'
//      MTRAK-ENCS  codep:0x224c wordp:0xcade size:0x0008 C-string:'MTRAK_dash_ENCS'
//           MHEAT  codep:0x224c wordp:0xcaf0 size:0x0008 C-string:'MHEAT'
//         NAV-VOC  codep:0x1ab5 wordp:0xcb04 size:0x0014 C-string:'NAV_dash_VOC'
//           NAV-O  codep:0x83f8 wordp:0xcb22 size:0x0002 C-string:'NAV_dash_O'
//           OV/(D  codep:0x224c wordp:0xcb2e size:0x0006 C-string:'OV_slash__ro_D'
//           OV/(U  codep:0x224c wordp:0xcb3e size:0x0006 C-string:'OV_slash__ro_U'
//           OV-SH  codep:0x224c wordp:0xcb4e size:0x000e C-string:'OV_dash_SH'
//           OV-AR  codep:0x224c wordp:0xcb66 size:0x000e C-string:'OV_dash_AR'
//      SHPMOV-VOC  codep:0x1ab5 wordp:0xcb80 size:0x0014 C-string:'SHPMOV_dash_VOC'
//       SHPMOV-OV  codep:0x83f8 wordp:0xcba0 size:0x0002 C-string:'SHPMOV_dash_OV'
//             FLY  codep:0x224c wordp:0xcbaa size:0x0008 C-string:'FLY'
//        MANEUVER  codep:0x224c wordp:0xcbbf size:0x0040 C-string:'MANEUVER'
//          UNNEST  codep:0x224c wordp:0xcc0a size:0x0006 C-string:'UNNEST'
//           >NEST  codep:0x224c wordp:0xcc1a size:0x0006 C-string:'_gt_NEST'
//        GET-HAUX  codep:0x224c wordp:0xcc2d size:0x0006 C-string:'GET_dash_HAUX'
//          OV.MVS  codep:0x224c wordp:0xcc3e size:0x0006 C-string:'OV_dot_MVS'
//          S>PORT  codep:0x224c wordp:0xcc4f size:0x0008 C-string:'S_gt_PORT'
//           USE-E  codep:0x224c wordp:0xcc61 size:0x0006 C-string:'USE_dash_E'
//          MUSE-E  codep:0x224c wordp:0xcc72 size:0x0008 C-string:'MUSE_dash_E'
//            VITA  codep:0x1ab5 wordp:0xcc83 size:0x0014 C-string:'VITA'
//         VITA-OV  codep:0x83f8 wordp:0xcca3 size:0x0002 C-string:'VITA_dash_OV'
//             DIO  codep:0x224c wordp:0xccad size:0x0006 C-string:'DIO'
//         HIPARMS  codep:0x1ab5 wordp:0xccbf size:0x0014 C-string:'HIPARMS'
//           HP-OV  codep:0x83f8 wordp:0xccdd size:0x0002 C-string:'HP_dash_OV'
//        C+OPARMS  codep:0x224c wordp:0xccec size:0x0006 C-string:'C_plus_OPARMS'
//             BIO  codep:0x224c wordp:0xccfa size:0x000c C-string:'BIO'
//         LOPARMS  codep:0x1ab5 wordp:0xcd12 size:0x0014 C-string:'LOPARMS'
//           LP-OV  codep:0x83f8 wordp:0xcd30 size:0x0002 C-string:'LP_dash_OV'
//       OTHER-PAR  codep:0x224c wordp:0xcd40 size:0x0006 C-string:'OTHER_dash_PAR'
//           SENTS  codep:0x1ab5 wordp:0xcd50 size:0x0014 C-string:'SENTS'
//         SENT-OV  codep:0x83f8 wordp:0xcd70 size:0x0002 C-string:'SENT_dash_OV'
//           ?TALK  codep:0x224c wordp:0xcd7c size:0x0006 C-string:'IsTALK'
//           SAYIT  codep:0x224c wordp:0xcd8c size:0x0006 C-string:'SAYIT'
//        MAPS-VOC  codep:0x1ab5 wordp:0xcd9f size:0x0014 C-string:'MAPS_dash_VOC'
//           MAPS-  codep:0x83f8 wordp:0xcdbd size:0x0002 C-string:'MAPS_dash_'
//            MAPS  codep:0x224c wordp:0xcdc8 size:0x0006 C-string:'MAPS'
//           .STOR  codep:0x224c wordp:0xcdd8 size:0x0006 C-string:'DrawSTOR'
//           (2X2)  codep:0x224c wordp:0xcde8 size:0x0006 C-string:'_ro_2X2_rc_'
//           2X2CO  codep:0x224c wordp:0xcdf8 size:0x0008 C-string:'_2X2CO'
//           (4X4)  codep:0x224c wordp:0xce0a size:0x0006 C-string:'_ro_4X4_rc_'
//           4X4CO  codep:0x224c wordp:0xce1a size:0x0008 C-string:'_4X4CO'
//           (8X8)  codep:0x224c wordp:0xce2c size:0x0006 C-string:'_ro_8X8_rc_'
//           8X8CO  codep:0x224c wordp:0xce3c size:0x0008 C-string:'_8X8CO'
//          SEEDER  codep:0x1ab5 wordp:0xce4f size:0x0014 C-string:'SEEDER'
//         SEED-OV  codep:0x83f8 wordp:0xce6f size:0x0002 C-string:'SEED_dash_OV'
//          POPULA  codep:0x224c wordp:0xce7c size:0x0006 C-string:'POPULA'
//        ICON-VOC  codep:0x1ab5 wordp:0xce8f size:0x0014 C-string:'ICON_dash_VOC'
//    LISTICONS-OV  codep:0x83f8 wordp:0xceb4 size:0x0002 C-string:'LISTICONS_dash_OV'
//           ICONS  codep:0x224c wordp:0xcec0 size:0x0006 C-string:'ICONS'
//           ITEMS  codep:0x1ab5 wordp:0xced0 size:0x0014 C-string:'ITEMS'
//        ITEMS-OV  codep:0x83f8 wordp:0xcef1 size:0x0002 C-string:'ITEMS_dash_OV'
//          /ITEMS  codep:0x224c wordp:0xcefe size:0x0006 C-string:'_slash_ITEMS'
//         >DEBRIS  codep:0x224c wordp:0xcf10 size:0x0006 C-string:'_gt_DEBRIS'
//        MOVE-VOC  codep:0x1ab5 wordp:0xcf23 size:0x0014 C-string:'MOVE_dash_VOC'
//         MOVE-OV  codep:0x83f8 wordp:0xcf43 size:0x0002 C-string:'MOVE_dash_OV'
//          TVMOVE  codep:0x224c wordp:0xcf50 size:0x0006 C-string:'TVMOVE'
//         ?POPULA  codep:0x224c wordp:0xcf62 size:0x0006 C-string:'IsPOPULA'
//            !E/M  codep:0x224c wordp:0xcf71 size:0x0006 C-string:'StoreE_slash_M'
//       STORM-VOC  codep:0x1ab5 wordp:0xcf85 size:0x0014 C-string:'STORM_dash_VOC'
//        STORM-OV  codep:0x83f8 wordp:0xcfa6 size:0x0002 C-string:'STORM_dash_OV'
//        DO.STORM  codep:0x224c wordp:0xcfb5 size:0x0006 C-string:'DO_dot_STORM'
//          INJURE  codep:0x224c wordp:0xcfc6 size:0x0006 C-string:'INJURE'
//            T.V.  codep:0x1ab5 wordp:0xcfd5 size:0x0014 C-string:'T_dot_V_dot_'
//           TV-OV  codep:0x83f8 wordp:0xcff3 size:0x0002 C-string:'TV_dash_OV'
//         TV-DISP  codep:0x224c wordp:0xd001 size:0x0006 C-string:'TV_dash_DISP'
//         (TVSET)  codep:0x224c wordp:0xd013 size:0x0006 C-string:'_ro_TVSET_rc_'
//         (CLEAN)  codep:0x224c wordp:0xd025 size:0x0006 C-string:'_ro_CLEAN_rc_'
//         (HEAVE)  codep:0x224c wordp:0xd037 size:0x0006 C-string:'_ro_HEAVE_rc_'
//       (WEAPONS)  codep:0x224c wordp:0xd04b size:0x0006 C-string:'_ro_WEAPONS_rc_'
//          (TALK)  codep:0x224c wordp:0xd05c size:0x0006 C-string:'_ro_TALK_rc_'
//         HEAVEHO  codep:0x224c wordp:0xd06e size:0x0008 C-string:'HEAVEHO'
//         BEHAVIO  codep:0x1ab5 wordp:0xd082 size:0x0014 C-string:'BEHAVIO'
//       BEHAVE-OV  codep:0x83f8 wordp:0xd0a4 size:0x0002 C-string:'BEHAVE_dash_OV'
//         TVTASKS  codep:0x224c wordp:0xd0b2 size:0x0006 C-string:'TVTASKS'
//              TV  codep:0x224c wordp:0xd0bf size:0x0006 C-string:'TV'
//        (SIMULA)  codep:0x224c wordp:0xd0d2 size:0x0006 C-string:'_ro_SIMULA_rc_'
//        SIMULATE  codep:0x224c wordp:0xd0e5 size:0x0008 C-string:'SIMULATE'
//         STP-VOC  codep:0x1ab5 wordp:0xd0f9 size:0x0014 C-string:'STP_dash_VOC'
//          STP-OV  codep:0x83f8 wordp:0xd118 size:0x0002 C-string:'STP_dash_OV'
//          SECURE  codep:0x224c wordp:0xd125 size:0x0006 C-string:'SECURE'
//          SIC'EM  codep:0x224c wordp:0xd136 size:0x0006 C-string:'SIC_i_EM'
//            2NDS  codep:0x224c wordp:0xd145 size:0x0006 C-string:'_2NDS'
//      LAUNCH-VOC  codep:0x1ab5 wordp:0xd15a size:0x0014 C-string:'LAUNCH_dash_VOC'
//           LAUNC  codep:0x83f8 wordp:0xd178 size:0x0002 C-string:'LAUNC'
//           OVCOU  codep:0x224c wordp:0xd184 size:0x0008 C-string:'OVCOU'
//           OVBAC  codep:0x224c wordp:0xd196 size:0x0008 C-string:'OVBAC'
//           .AIRL  codep:0x224c wordp:0xd1a8 size:0x0006 C-string:'DrawAIRL'
//         CAP-VOC  codep:0x1ab5 wordp:0xd1ba size:0x0014 C-string:'CAP_dash_VOC'
//           CAP-O  codep:0x83f8 wordp:0xd1d8 size:0x0002 C-string:'CAP_dash_O'
//           OV/IT  codep:0x224c wordp:0xd1e4 size:0x0006 C-string:'OV_slash_IT'
//           OV/CA  codep:0x224c wordp:0xd1f4 size:0x0006 C-string:'OV_slash_CA'
//           OV/LA  codep:0x224c wordp:0xd204 size:0x0006 C-string:'OV_slash_LA'
//           OV>DE  codep:0x224c wordp:0xd214 size:0x0006 C-string:'OV_gt_DE'
//           OV/LO  codep:0x224c wordp:0xd224 size:0x0006 C-string:'OV_slash_LO'
//         DOC-VOC  codep:0x1ab5 wordp:0xd236 size:0x0014 C-string:'DOC_dash_VOC'
//          DOC-OV  codep:0x83f8 wordp:0xd255 size:0x0002 C-string:'DOC_dash_OV'
//      OV/EXAMINE  codep:0x224c wordp:0xd266 size:0x0006 C-string:'OV_slash_EXAMINE'
//        OV/TREAT  codep:0x224c wordp:0xd279 size:0x0006 C-string:'OV_slash_TREAT'
//          AN-VOC  codep:0x1ab5 wordp:0xd28a size:0x0014 C-string:'AN_dash_VOC'
//           AN-OV  codep:0x83f8 wordp:0xd2a8 size:0x0002 C-string:'AN_dash_OV'
//     OV/ANALYSIS  codep:0x224c wordp:0xd2ba size:0x0006 C-string:'OV_slash_ANALYSIS'
//            *MAP  codep:0x1ab5 wordp:0xd2c9 size:0x0014 C-string:'_star_MAP'
//         *MAP-OV  codep:0x83f8 wordp:0xd2e9 size:0x0002 C-string:'_star_MAP_dash_OV'
//      OV/STARMAP  codep:0x224c wordp:0xd2fa size:0x000c C-string:'OV_slash_STARMAP'
//        LAND-VOC  codep:0x1ab5 wordp:0xd313 size:0x0014 C-string:'LAND_dash_VOC'
//         LAND-OV  codep:0x83f8 wordp:0xd333 size:0x0002 C-string:'LAND_dash_OV'
//        TRY-LAND  codep:0x224c wordp:0xd342 size:0x0006 C-string:'TRY_dash_LAND'
//      TRY-LAUNCH  codep:0x224c wordp:0xd357 size:0x0006 C-string:'TRY_dash_LAUNCH'
//         BTN-VOC  codep:0x1ab5 wordp:0xd369 size:0x0014 C-string:'BTN_dash_VOC'
//          BTN-OV  codep:0x83f8 wordp:0xd388 size:0x0002 C-string:'BTN_dash_OV'
//           OVFLT  codep:0x224c wordp:0xd394 size:0x0006 C-string:'OVFLT'
//      CHKFLT-VOC  codep:0x1ab5 wordp:0xd3a9 size:0x0014 C-string:'CHKFLT_dash_VOC'
//       CHKFLT-OV  codep:0x83f8 wordp:0xd3cb size:0x0002 C-string:'CHKFLT_dash_OV'
//      ?FLIGHT-OK  codep:0x224c wordp:0xd3dc size:0x0006 C-string:'IsFLIGHT_dash_OK'
//          PM-VOC  codep:0x1ab5 wordp:0xd3ed size:0x0014 C-string:'PM_dash_VOC'
//           PM-OV  codep:0x83f8 wordp:0xd40b size:0x0002 C-string:'PM_dash_OV'
//           PORTM  codep:0x224c wordp:0xd417 size:0x0006 C-string:'PORTM'
//            GAME  codep:0x1ab5 wordp:0xd426 size:0x0014 C-string:'GAME'
//         GAME-OV  codep:0x83f8 wordp:0xd445 size:0x0002 C-string:'GAME_dash_OV'
//       STARTGAME  codep:0x224c wordp:0xd452 size:0x0006 C-string:'STARTGAME'
//        GAMEOP_1  codep:0x224c wordp:0xd463 size:0x0008 C-string:'GAMEOP_1'
//        GAMEOP_2  codep:0x224c wordp:0xd476 size:0x0008 C-string:'GAMEOP_2'
// LET-THERE-BE-STARFLIGHT  codep:0x224c wordp:0xd489 size:0x0000 C-string:'LET_dash_THERE_dash_BE_dash_STARFLIGHT'

// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp__ro_TIME_rc_ = 0x0188; // (TIME) size: 104
// {0x00, 0x00, 0xbb, 0xfc, 0x01, 0x00, 0x2e, 0x81, 0x06, 0x8a, 0x01, 0x37, 0x00, 0x2e, 0x83, 0x16, 0x88, 0x01, 0x00, 0x2e, 0xc7, 0x06, 0x93, 0x01, 0x37, 0x00, 0x2e, 0xff, 0x0e, 0x8c, 0x01, 0x75, 0x0e, 0x2e, 0xc7, 0x06, 0x8c, 0x01, 0x0f, 0x00, 0x2e, 0xc7, 0x06, 0x93, 0x01, 0x36, 0x00, 0xcf, 0x00, 0x00, 0x00, 0x00, 0x53, 0xff, 0x00, 0xf0, 0xe8, 0x4e, 0x85, 0x01, 0x58, 0x40, 0x50, 0x29, 0xc0, 0x29, 0xd2, 0xcf, 0x31, 0xdb, 0xf7, 0xf3, 0xc3, 0x58, 0x8b, 0xc8, 0x81, 0xe8, 0xd0, 0x01, 0x75, 0x06, 0xb8, 0xc7, 0x01, 0xe9, 0x04, 0x00, 0xb8, 0xc4, 0x01, 0x41, 0x8c, 0xda, 0x31, 0xdb, 0x8e, 0xdb, 0x89, 0x07, 0x8e, 0xda, 0x51, 0xcf}

const unsigned short int pp_OPERATOR = 0x078c; // OPERATOR size: 132
// {0xf4, 0xf6, 0xd0, 0xf7, 0xa7, 0xd4, 0xe6, 0x39, 0x00, 0x00, 0x31, 0x00, 0x28, 0xd4, 0x84, 0x00, 0x74, 0x00, 0x0b, 0x00, 0xf4, 0xf6, 0xb4, 0x03, 0x00, 0xb0, 0x18, 0x00, 0x00, 0x00, 0x18, 0x4f, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x03, 0xbc, 0x03, 0x0a, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xe7, 0xd4, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1a, 0x08, 0xe6, 0xf6, 0x1a, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0xe1, 0x17, 0xbc, 0x25, 0x45, 0x1c, 0x6b, 0x26, 0xcf, 0x26, 0xee, 0x26, 0xbb, 0x1c, 0x48, 0x36, 0x31, 0x27, 0x3e, 0x1d, 0xd8, 0x1d, 0x5c, 0x1a, 0x23, 0x1e, 0xd7, 0x25, 0xd1, 0x13, 0x4c, 0x27, 0x67, 0x27, 0xd7, 0x36, 0x90, 0x26, 0x68, 0x1e, 0x06, 0x1f, 0xa9, 0x0f, 0x75, 0x95, 0xb1, 0x24, 0xa9, 0x7b, 0x07, 0xc0, 0xab, 0xbc, 0xb1, 0xad, 0xb4, 0x20}

const unsigned short int pp__n_CACHE = 0x09ef; // #CACHE size: 2
// {0xd0, 0x00}

const unsigned short int pp__n_BUFFERS = 0x09fe; // #BUFFERS size: 2
// {0x02, 0x00}

const unsigned short int pp__n_SPACE = 0x0a0b; // #SPACE size: 2
// {0x00, 0x01}

const unsigned short int pp__i_RESTORE_plus_ = 0x0a1b; // 'RESTORE+ size: 2
// {0x9f, 0xb4}

const unsigned short int pp__i_SETUP_plus_ = 0x0a29; // 'SETUP+ size: 2
// {0x6f, 0xb4}

const unsigned short int pp_IsSOUND = 0x0a36; // ?SOUND size: 2
// {0x01, 0x00}

const unsigned short int pp__gt_BREAK = 0x0a43; // >BREAK size: 2
// {0x2c, 0x16}

const unsigned short int pp_BOOT_dash_HOOK = 0x0a53; // BOOT-HOOK size: 2
// {0x89, 0xd4}

const unsigned short int pp_BOOT_dash_LOAD = 0x0a63; // BOOT-LOAD size: 2
// {0x00, 0x00}

const unsigned short int pp_BUFFER_dash_BEGIN = 0x0a76; // BUFFER-BEGIN size: 2
// {0x6e, 0x26}

const unsigned short int pp_BUFFER_dash_HEAD = 0x0a88; // BUFFER-HEAD size: 2
// {0x00, 0x00}

const unsigned short int pp_CACHE_dash_BEGIN = 0x0a9a; // CACHE-BEGIN size: 2
// {0x00, 0x00}

const unsigned short int pp_CACHE_dash_HEAD = 0x0aab; // CACHE-HEAD size: 2
// {0x00, 0x00}

const unsigned short int pp_REGISTERS = 0x16b4; // REGISTERS size: 23
// {0xd2, 0x02, 0x00, 0x15, 0x00, 0x80, 0x05, 0x00, 0xca, 0x2d, 0x38, 0xd3, 0xca, 0x2d, 0xa8, 0xd4, 0xf1, 0x16, 0xf1, 0x16, 0xcd, 0x21, 0xc3}

const unsigned short int pp_BEEPMS = 0x25fe; // BEEPMS size: 2
// {0x96, 0x00}

const unsigned short int pp_BEEPTONE = 0x260d; // BEEPTONE size: 2
// {0x33, 0x05}

const unsigned short int pp__i_SVBUF = 0x2b83; // 'SVBUF size: 2
// {0x23, 0x7b}

const unsigned short int pp__i_MTBUF = 0x2b90; // 'MTBUF size: 2
// {0xb8, 0xb3}

const unsigned short int pp__n_SECS = 0x2b9c; // #SECS size: 2
// {0x02, 0x00}

const unsigned short int pp__i_FCB = 0x2ba7; // 'FCB size: 2
// {0xca, 0x2d}

const unsigned short int pp__i_CACHE = 0x2bb4; // 'CACHE size: 2
// {0xcf, 0x00}

const unsigned short int pp__i_DOSMOUNT = 0x2bc4; // 'DOSMOUNT size: 2
// {0x05, 0x47}

const unsigned short int pp__i_DOSUNMOUNT = 0x2bd6; // 'DOSUNMOUNT size: 2
// {0x66, 0x47}

const unsigned short int pp_REUSEC = 0x2be3; // REUSEC size: 2
// {0xcf, 0x00}

const unsigned short int pp__1STCACHEBUF = 0x2bf5; // 1STCACHEBUF size: 2
// {0x27, 0x27}

const unsigned short int pp_BLKCACHE = 0x2c04; // BLKCACHE size: 2
// {0xf1, 0x26}

const unsigned short int pp_DEFAULTDRV = 0x2c15; // DEFAULTDRV size: 2
// {0x2c, 0x6f}

const unsigned short int pp_DISK_dash_ERROR = 0x2c26; // DISK-ERROR size: 2
// {0x00, 0x00}

const unsigned short int pp_DRIVE = 0x2c32; // DRIVE size: 2
// {0x03, 0x00}

const unsigned short int pp_DTA = 0x2c3c; // DTA size: 4
// {0x00, 0x01, 0xf1, 0x16}

const unsigned short int pp_FILE = 0x2c49; // FILE size: 2
// {0x02, 0x00}

const unsigned short int pp_FRESH = 0x2c55; // FRESH size: 2
// {0x4c, 0xc5}

const unsigned short int pp_HEAD = 0x2c60; // HEAD size: 2
// {0x00, 0x00}

const unsigned short int pp_LPREV = 0x2c6c; // LPREV size: 2
// {0xaf, 0x26}

const unsigned short int pp_OFFSET = 0x2c79; // OFFSET size: 2
// {0xd0, 0x02}

const unsigned short int pp_PREV = 0x2c84; // PREV size: 2
// {0xaf, 0x26}

const unsigned short int pp_SEC = 0x2c8e; // SEC size: 2
// {0x05, 0x00}

const unsigned short int pp_SEGCACHE = 0x2c9d; // SEGCACHE size: 2
// {0x0c, 0x27}

const unsigned short int pp_SYSK = 0x2ca8; // SYSK size: 2
// {0x5b, 0x02}

const unsigned short int pp_TRACK = 0x2cb4; // TRACK size: 2
// {0x00, 0x00}

const unsigned short int pp_USE = 0x2cbe; // USE size: 2
// {0x6e, 0x26}

const unsigned short int pp__eq_DRIVESIZES = 0x2cd0; // =DRIVESIZES size: 6
// {0x68, 0x01, 0x68, 0x01, 0x00, 0x50}

const unsigned short int pp__eq_DRIVENUMBERS = 0x2d23; // =DRIVENUMBERS size: 4
// {0x00, 0x00, 0x00, 0x00}

const unsigned short int pp__eq_FCBPFAS = 0x2d34; // =FCBPFAS size: 8
// {0x00, 0x27, 0x00, 0x00, 0x9e, 0x2d, 0xca, 0x2d}

const unsigned short int pp__eq_FILEBLOCKS = 0x2d4c; // =FILEBLOCKS size: 8
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}

const unsigned short int pp__eq_FILETYPES = 0x2d63; // =FILETYPES size: 4
// {0xff, 0xff, 0xff, 0xff}

const unsigned short int pp__eq_OFFSETS = 0x2d74; // =OFFSETS size: 8
// {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff}

const unsigned short int pp__eq_R_slash_W_i_S = 0x2d87; // =R/W'S size: 8
// {0x31, 0x36, 0x44, 0x33, 0x25, 0x44, 0x25, 0x44}

const unsigned short int pp_FCB = 0x2d97; // FCB size: 88
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x42, 0x4f, 0x56, 0x52, 0x20, 0x20, 0x20, 0x20, 0x43, 0x4d, 0x50, 0x02, 0x00, 0x00, 0x04, 0x01, 0x94, 0x21, 0x00, 0x24, 0x10, 0x7c, 0x85, 0x00, 0x03, 0x02, 0xa7, 0x07, 0x09, 0x4a, 0x04, 0x62, 0x62, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x53, 0x54, 0x41, 0x52, 0x46, 0x4c, 0x54, 0x20, 0x43, 0x4f, 0x4d, 0x00, 0x00, 0xa7, 0xd3, 0x00, 0x00, 0x00, 0x00, 0x24, 0x10, 0x9a, 0x85, 0x00, 0x03, 0x42, 0x00, 0x00, 0x7a, 0x3f, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00}

const unsigned short int pp_FILENAMES = 0x2dfd; // FILENAMES size: 44
// {0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20}

const unsigned short int pp__co_LXCHG_cc_ = 0x2f36; // {LXCHG} size: 16
// {0x51, 0x26, 0x8b, 0x0f, 0x87, 0xd8, 0x26, 0x87, 0x0f, 0x87, 0xd8, 0x26, 0x89, 0x0f, 0x59, 0xc3}

const unsigned short int pp_DIRNAME = 0x3408; // DIRNAME size: 11
// {0x2d, 0x2d, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x2d, 0x2d, 0x20}

const unsigned short int pp__i_UNRAVEL = 0x3a60; // 'UNRAVEL size: 2
// {0x48, 0x3a}

const unsigned short int pp_TRACE = 0x3b0f; // TRACE size: 2
// {0x00, 0x00}

const unsigned short int pp__bo_TRACE = 0x3b1c; // [TRACE size: 2
// {0x48, 0x3a}

const unsigned short int pp_TRACE_bc_ = 0x3b29; // TRACE] size: 2
// {0x48, 0x3a}

const unsigned short int pp_OVA = 0x3bf8; // OVA size: 2
// {0x40, 0xde}

const unsigned short int pp_T_dash_DP = 0x3c03; // T-DP size: 6
// {0xd4, 0xd6, 0x25, 0xf5, 0xd4, 0xd6}

const unsigned short int pp__ro_2V_c__rc_ = 0x3e21; // (2V:) size: 4
// {0x54, 0x20, 0x2d, 0x20}

const unsigned short int pp_MAXDRV = 0x4567; // MAXDRV size: 2
// {0x04, 0x00}

const unsigned short int pp_ASKMOUNT = 0x4658; // ASKMOUNT size: 2
// {0x69, 0x46}

const unsigned short int pp_ZZZ = 0x48c6; // ZZZ size: 10
// {0x36, 0x00, 0x19, 0x00, 0x4f, 0x54, 0x20, 0x20, 0x6d, 0x65}

const unsigned short int pp_W49CA = 0x49ca; // W49CA size: 16
// {0x51, 0x26, 0x8a, 0x0f, 0x87, 0xd8, 0x26, 0x86, 0x0f, 0x87, 0xd8, 0x26, 0x88, 0x0f, 0x59, 0xc3}

const unsigned short int pp_SEED = 0x4ab0; // SEED size: 2
// {0xe4, 0x39}

const unsigned short int pp_FILTER = 0x4c4c; // FILTER size: 2
// {0x53, 0x20}

const unsigned short int pp_PEAK = 0x4c57; // PEAK size: 2
// {0x54, 0x20}

const unsigned short int pp_CURVE = 0x4c5b; // CURVE size: 32
// {0x00, 0x08, 0x10, 0x88, 0x88, 0x89, 0x25, 0x55, 0x55, 0x57, 0x75, 0x77, 0x77, 0x7f, 0x7f, 0xff, 0xff, 0xfe, 0xf7, 0xee, 0xee, 0xae, 0xae, 0xaa, 0xa4, 0xa4, 0x91, 0x11, 0x11, 0x08, 0x10, 0x00}

const unsigned short int pp_SPHEREWRAP = 0x4cca; // SPHEREWRAP size: 2
// {0x50, 0x20}

const unsigned short int pp_SIGNEXTEND = 0x4cd8; // SIGNEXTEND size: 2
// {0x44, 0x20}

const unsigned short int pp_W4CDC = 0x4cdc; // W4CDC size: 2
// {0x3a, 0x20}

const unsigned short int pp_W4CE0 = 0x4ce0; // W4CE0 size: 2
// {0x3a, 0x20}

const unsigned short int pp_W4CE4 = 0x4ce4; // W4CE4 size: 2
// {0x3a, 0x20}

const unsigned short int pp__i_ARRAY = 0x4cf1; // 'ARRAY size: 2
// {0xc1, 0x6a}

const unsigned short int pp_XLL = 0x4e49; // XLL size: 2
// {0x41, 0x44}

const unsigned short int pp_YLL = 0x4e53; // YLL size: 2
// {0x72, 0x65}

const unsigned short int pp_XUR = 0x4e5d; // XUR size: 2
// {0x72, 0x65}

const unsigned short int pp_YUR = 0x4e67; // YUR size: 2
// {0x72, 0x65}

const unsigned short int pp_W4EDD = 0x4edd; // W4EDD size: 16
// {0x00, 0x22, 0x11, 0x99, 0x44, 0x66, 0x88, 0xaa, 0x55, 0x77, 0xbb, 0x33, 0xee, 0xcc, 0xdd, 0xff}

const unsigned short int pp_W4FBB = 0x4fbb; // W4FBB size: 16
// {0x00, 0x22, 0x11, 0x99, 0x44, 0x66, 0x88, 0xaa, 0x55, 0x77, 0xbb, 0x33, 0xee, 0xcc, 0xdd, 0xff}

const unsigned short int pp_W4FCD = 0x4fcd; // W4FCD size: 34
// {0x00, 0x01, 0x02, 0x0a, 0x04, 0x05, 0x06, 0x07, 0x08, 0x0b, 0x03, 0x09, 0x0c, 0x06, 0x0e, 0x0f, 0x29, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01}

const unsigned short int pp_CLIP_dash_TABLE = 0x5253; // CLIP-TABLE size: 20
// {0x08, 0x08, 0x01, 0xc7, 0x00, 0x02, 0x02, 0x00, 0x9f, 0x00, 0x04, 0x04, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00}

const unsigned short int pp_FONTSEG = 0x5298; // FONTSEG size: 2
// {0x1e, 0x8d}

const unsigned short int pp_REMSEG = 0x52a5; // REMSEG size: 2
// {0x16, 0x8c}

const unsigned short int pp_XBUF_dash_SE = 0x52b3; // XBUF-SE size: 2
// {0xf0, 0x90}

const unsigned short int pp_IsALL = 0x52be; // ?ALL size: 2
// {0x38, 0x37}

const unsigned short int pp_IsYOK = 0x52c9; // ?YOK size: 2
// {0x20, 0x20}

const unsigned short int pp__1LOGO = 0x52e1; // 1LOGO size: 14
// {0x1f, 0x3f, 0xdf, 0xee, 0x0c, 0x33, 0x0c, 0x03, 0xb7, 0xcf, 0x8f, 0x7f, 0x00, 0xc0}

const unsigned short int pp_BUTTON = 0x52f1; // BUTTON size: 10
// {0xc3, 0x7e, 0xa5, 0xbd, 0xa5, 0xa5, 0xc3, 0xbd, 0x00, 0x7e}

const unsigned short int pp_HIGHLIGHT_dash_BUTTON = 0x52fd; // HIGHLIGHT-BUTTON size: 6
// {0x18, 0x7a, 0x86, 0x61, 0x80, 0x17}

const unsigned short int pp_BUTTON_dash_ON = 0x5305; // BUTTON-ON size: 2
// {0x00, 0xfc}

const unsigned short int pp__i_XCOMM = 0x5312; // 'XCOMM size: 2
// {0xbe, 0xc2}

const unsigned short int pp_TCLR = 0x531d; // TCLR size: 2
// {0xff, 0x00}

const unsigned short int pp__i_HEAT = 0x5329; // 'HEAT size: 2
// {0xf0, 0xca}

const unsigned short int pp__i_TRAK = 0x5335; // 'TRAK size: 2
// {0xde, 0xca}

const unsigned short int pp_TRAK_dash_HR = 0x5343; // TRAK-HR size: 2
// {0x38, 0x37}

const unsigned short int pp_A_dash_STRENGTH = 0x5351; // A-STRENGTH size: 2
// {0x48, 0x20}

const unsigned short int pp_DIRBLK = 0x535e; // DIRBLK size: 2
// {0x00, 0x00}

const unsigned short int pp_TIMESTAMP = 0x536c; // TIMESTAMP size: 2
// {0x20, 0x20}

const unsigned short int pp_RELAXTIME = 0x537a; // RELAXTIME size: 2
// {0x20, 0x20}

const unsigned short int pp_VERSION = 0x5388; // VERSION size: 4
// {0xc9, 0x20, 0x01, 0x00}

const unsigned short int pp_ICONFON = 0x5398; // ICONFON size: 2
// {0x01, 0x00}

const unsigned short int pp_LFRAME = 0x53a5; // LFRAME size: 2
// {0xd4, 0x07}

const unsigned short int pp_IsAUTO = 0x53b1; // ?AUTO size: 2
// {0x20, 0x20}

const unsigned short int pp_IsCRITIC = 0x53bf; // ?CRITIC size: 2
// {0x20, 0x20}

const unsigned short int pp_ELEM_dash_AM = 0x53cd; // ELEM-AM size: 2
// {0x20, 0x2d}

const unsigned short int pp__i_INJURE = 0x53db; // 'INJURE size: 2
// {0xc6, 0xcf}

const unsigned short int pp_P_dash_COLOR = 0x53e9; // P-COLOR size: 3
// {0x41, 0x4e, 0x05}

const unsigned short int pp_P_dash_PHRAS = 0x53f8; // P-PHRAS size: 3
// {0x32, 0x35, 0x05}

const unsigned short int pp_P_dash_CARP = 0x5406; // P-CARP size: 3
// {0x61, 0x6e, 0x05}

const unsigned short int pp_O_dash_COLOR = 0x5415; // O-COLOR size: 3
// {0x20, 0x20, 0x05}

const unsigned short int pp_HYDRO = 0x5422; // HYDRO size: 2
// {0x20, 0x20}

const unsigned short int pp_ATMO = 0x542d; // ATMO size: 2
// {0x20, 0x20}

const unsigned short int pp_LCOLOR = 0x543a; // LCOLOR size: 2
// {0x20, 0x20}

const unsigned short int pp__i_FLARE = 0x5447; // 'FLARE size: 2
// {0x11, 0xca}

const unsigned short int pp__ro_FLARE_rc_ = 0x5455; // (FLARE) size: 2
// {0x2c, 0x01}

const unsigned short int pp_IsTV = 0x545f; // ?TV size: 2
// {0x20, 0x20}

const unsigned short int pp_OLDHR = 0x546b; // OLDHR size: 2
// {0x20, 0x20}

const unsigned short int pp_AVCNT = 0x5477; // AVCNT size: 2
// {0x41, 0x49}

const unsigned short int pp_LFILE_n_ = 0x547b; // LFILE# size: 2
// {0x00, 0x00}

const unsigned short int pp_LRECORD_n_ = 0x547f; // LRECORD# size: 2
// {0x00, 0x00}

const unsigned short int pp_LRECORD_n_ = 0x5483; // LRECORD# size: 2
// {0x76, 0xf9}

const unsigned short int pp_FILE_n_ = 0x548f; // FILE# size: 2
// {0x12, 0x00}

const unsigned short int pp_RECORD_n_ = 0x549d; // RECORD# size: 2
// {0x00, 0x00}

const unsigned short int pp__1BUFADR = 0x54a1; // 1BUFADR size: 2
// {0xd0, 0xf7}

const unsigned short int pp__2BUFADR = 0x54a5; // 2BUFADR size: 2
// {0xe0, 0xfb}

const unsigned short int pp_CXSP = 0x54b0; // CXSP size: 2
// {0x8c, 0x63}

const unsigned short int pp_VSP = 0x54b4; // VSP size: 2
// {0xdf, 0x63}

const unsigned short int pp_W54B8 = 0x54b8; // W54B8 size: 2
// {0x3a, 0x20}

const unsigned short int pp_EDL = 0x54c2; // EDL size: 2
// {0x6f, 0x72}

const unsigned short int pp_A_dash_POSTU = 0x54d0; // A-POSTU size: 2
// {0x20, 0x70}

const unsigned short int pp_W54D4 = 0x54d4; // W54D4 size: 2
// {0x50, 0x00}

const unsigned short int pp__n_CIRC = 0x54d8; // #CIRC size: 2
// {0x06, 0x00}

const unsigned short int pp_P_dash_RACES = 0x54e6; // P-RACES size: 2
// {0x20, 0x2d}

const unsigned short int pp_LOISEG = 0x54ea; // LOISEG size: 2
// {0x3e, 0x8f}

const unsigned short int pp_HIISEG = 0x54ee; // HIISEG size: 2
// {0x1f, 0x8f}

const unsigned short int pp_LOCSEC = 0x54f2; // LOCSEC size: 2
// {0x7c, 0x8f}

const unsigned short int pp__do_SEG = 0x54f6; // $SEG size: 2
// {0xba, 0x8f}

const unsigned short int pp_W54FA = 0x54fa; // W54FA size: 2
// {0x3a, 0x20}

const unsigned short int pp__i_THROW_dash_AWAY = 0x5508; // 'THROW-AWAY size: 2
// {0x6e, 0x3a}

const unsigned short int pp__i_MAP = 0x5513; // 'MAP size: 2
// {0x48, 0x3a}

const unsigned short int pp__i_TRAVERS = 0x5521; // 'TRAVERS size: 2
// {0x86, 0x7a}

const unsigned short int pp__i__ask_EXIT = 0x552e; // '?EXIT size: 2
// {0xb2, 0x7d}

const unsigned short int pp__i__ask_CHOICE = 0x5532; // '?CHOICE size: 2
// {0x3a, 0x20}

const unsigned short int pp__i__dot_FLUX_dash_ICON = 0x5540; // '.FLUX-ICON size: 2
// {0x42, 0xe4}

const unsigned short int pp_Is_ask__ask_IT = 0x554c; // ???IT size: 2
// {0x43, 0x4d}

const unsigned short int pp_IsTD = 0x5556; // ?TD size: 2
// {0x00, 0x00}

const unsigned short int pp_IsBOMB = 0x5562; // ?BOMB size: 2
// {0x00, 0x00}

const unsigned short int pp_IsLANDED = 0x5570; // ?LANDED size: 2
// {0x00, 0x00}

const unsigned short int pp_W5574 = 0x5574; // W5574 size: 2
// {0xf0, 0x01}

const unsigned short int pp_QTYINST = 0x5578; // QTYINST size: 2
// {0x00, 0x00}

const unsigned short int pp__do_MAX = 0x557c; // $MAX size: 2
// {0x60, 0x13}

const unsigned short int pp__do_FREE = 0x5580; // $FREE size: 2
// {0x00, 0x00}

const unsigned short int pp__do_OLD = 0x5584; // $OLD size: 2
// {0x27, 0x12}

const unsigned short int pp__do_NEW = 0x5588; // $NEW size: 2
// {0x4e, 0x12}

const unsigned short int pp__bo_IOFF_bc_ = 0x558c; // [IOFF] size: 2
// {0x00, 0x00}

const unsigned short int pp_LENINST = 0x5590; // LENINST size: 2
// {0x0e, 0x00}

const unsigned short int pp__dash_END = 0x559b; // -END size: 2
// {0x04, 0x00}

const unsigned short int pp_OV_n_ = 0x55a5; // OV# size: 2
// {0x00, 0x00}

const unsigned short int pp__h_VES = 0x55b0; // ^VES size: 2
// {0x00, 0x00}

const unsigned short int pp_REPAIRT = 0x55be; // REPAIRT size: 2
// {0xff, 0xff}

const unsigned short int pp_IsELAN = 0x55ca; // ?ELAN size: 2
// {0x01, 0x00}

const unsigned short int pp_HBUF_dash_SEG = 0x55d8; // HBUF-SEG size: 2
// {0xf0, 0x90}

const unsigned short int pp_DBUF_dash_SEG = 0x55e6; // DBUF-SEG size: 2
// {0x00, 0xb8}

const unsigned short int pp_COLOR = 0x55f2; // COLOR size: 2
// {0xff, 0x00}

const unsigned short int pp_DCOLOR = 0x55ff; // DCOLOR size: 2
// {0xff, 0x00}

const unsigned short int pp_YTAB = 0x560a; // YTAB size: 2
// {0x96, 0x66}

const unsigned short int pp_Y1 = 0x5613; // Y1 size: 2
// {0xff, 0xff}

const unsigned short int pp_X1 = 0x561c; // X1 size: 2
// {0x00, 0x00}

const unsigned short int pp_Y2 = 0x5625; // Y2 size: 2
// {0xa0, 0x00}

const unsigned short int pp_X2 = 0x562e; // X2 size: 2
// {0x03, 0x0f}

const unsigned short int pp_YTABL = 0x563a; // YTABL size: 2
// {0x08, 0x65}

const unsigned short int pp_BUF_dash_SEG = 0x5648; // BUF-SEG size: 2
// {0x00, 0xb8}

const unsigned short int pp_BUF_dash_CNT = 0x5656; // BUF-CNT size: 2
// {0x00, 0x40}

const unsigned short int pp_RETURN = 0x5663; // RETURN size: 2
// {0x11, 0x06}

const unsigned short int pp_IsSPHEXI = 0x5671; // ?SPHEXI size: 2
// {0x01, 0x00}

const unsigned short int pp_IsWIN = 0x567c; // ?WIN size: 2
// {0x00, 0x00}

const unsigned short int pp__n_IN = 0x5686; // #IN size: 2
// {0x02, 0x00}

const unsigned short int pp__n_OUT = 0x5691; // #OUT size: 2
// {0x41, 0x42}

const unsigned short int pp_VIN = 0x569b; // VIN size: 2
// {0xb4, 0x69}

const unsigned short int pp_VOUT = 0x56a6; // VOUT size: 2
// {0x72, 0x69}

const unsigned short int pp_OIN = 0x56b0; // OIN size: 2
// {0xf6, 0x69}

const unsigned short int pp_OOUT = 0x56bb; // OOUT size: 2
// {0xf6, 0x69}

const unsigned short int pp_W56BF = 0x56bf; // W56BF size: 2
// {0x3a, 0x20}

const unsigned short int pp_W56C3 = 0x56c3; // W56C3 size: 2
// {0x3a, 0x20}

const unsigned short int pp_W56C7 = 0x56c7; // W56C7 size: 2
// {0x3a, 0x20}

const unsigned short int pp_W56CB = 0x56cb; // W56CB size: 2
// {0x3a, 0x20}

const unsigned short int pp_W56CF = 0x56cf; // W56CF size: 2
// {0x3a, 0x20}

const unsigned short int pp_TACCPT = 0x56dc; // TACCPT size: 2
// {0x00, 0x00}

const unsigned short int pp_TRJCT = 0x56e8; // TRJCT size: 2
// {0x00, 0x00}

const unsigned short int pp_IsOPEN = 0x56f4; // ?OPEN size: 2
// {0x00, 0x00}

const unsigned short int pp_IsEVAL = 0x5700; // ?EVAL size: 2
// {0x00, 0x00}

const unsigned short int pp_W5704 = 0x5704; // W5704 size: 2
// {0x3c, 0x00}

const unsigned short int pp_W5708 = 0x5708; // W5708 size: 2
// {0xc2, 0x00}

const unsigned short int pp_W570C = 0x570c; // W570C size: 2
// {0x3a, 0x20}

const unsigned short int pp_W5710 = 0x5710; // W5710 size: 2
// {0x3c, 0x00}

const unsigned short int pp_W5714 = 0x5714; // W5714 size: 2
// {0xc6, 0x00}

const unsigned short int pp_W5718 = 0x5718; // W5718 size: 2
// {0x3a, 0x20}

const unsigned short int pp_W571C = 0x571c; // W571C size: 2
// {0x3a, 0x20}

const unsigned short int pp_W5720 = 0x5720; // W5720 size: 2
// {0x3a, 0x20}

const unsigned short int pp_W5724 = 0x5724; // W5724 size: 2
// {0x3a, 0x20}

const unsigned short int pp_W5728 = 0x5728; // W5728 size: 2
// {0x3a, 0x20}

const unsigned short int pp_W572C = 0x572c; // W572C size: 2
// {0x3a, 0x20}

const unsigned short int pp_ILEFT = 0x5738; // ILEFT size: 2
// {0x00, 0x00}

const unsigned short int pp_IRIGHT = 0x5745; // IRIGHT size: 2
// {0x9f, 0x00}

const unsigned short int pp_IBELOW = 0x5752; // IBELOW size: 2
// {0x00, 0x00}

const unsigned short int pp_IABOVE = 0x575f; // IABOVE size: 2
// {0xc7, 0x00}

const unsigned short int pp__i_FLY = 0x576a; // 'FLY size: 2
// {0xaa, 0xcb}

const unsigned short int pp__i_UNNEST = 0x5778; // 'UNNEST size: 2
// {0x0a, 0xcc}

const unsigned short int pp_IsNEW = 0x5783; // ?NEW size: 2
// {0x20, 0x20}

const unsigned short int pp_FORCED = 0x5790; // FORCED size: 2
// {0x20, 0x20}

const unsigned short int pp__n_VESS = 0x579c; // #VESS size: 2
// {0x00, 0x00}

const unsigned short int pp_CTCOLOR = 0x57aa; // CTCOLOR size: 2
// {0x20, 0x20}

const unsigned short int pp_XSTART = 0x57b7; // XSTART size: 2
// {0x20, 0x20}

const unsigned short int pp_XEND = 0x57c2; // XEND size: 2
// {0x20, 0x20}

const unsigned short int pp_YLINE = 0x57ce; // YLINE size: 2
// {0x20, 0x20}

const unsigned short int pp_SCAN = 0x57d9; // SCAN size: 2
// {0x9e, 0x67}

const unsigned short int pp_ELEMENT = 0x57dd; // ELEMENT size: 2
// {0x00, 0x00}

const unsigned short int pp_SCAN_plus_ = 0x57e1; // SCAN+ size: 2
// {0x9e, 0x67}

const unsigned short int pp_YMIN = 0x57ec; // YMIN size: 2
// {0xc2, 0x00}

const unsigned short int pp_YMAX = 0x57f7; // YMAX size: 2
// {0xc6, 0x00}

const unsigned short int pp__n_HORIZ = 0x57fb; // #HORIZ size: 2
// {0x02, 0x00}

const unsigned short int pp_MOVED = 0x5807; // MOVED size: 2
// {0x69, 0x7a}

const unsigned short int pp_PLANTS = 0x5814; // PLANTS size: 2
// {0x73, 0x65}

const unsigned short int pp_ANIMALS = 0x5822; // ANIMALS size: 2
// {0x20, 0x20}

const unsigned short int pp_MEMSEG = 0x582f; // MEMSEG size: 2
// {0xd5, 0x24}

const unsigned short int pp_MEMOFF = 0x583c; // MEMOFF size: 2
// {0x20, 0x17}

const unsigned short int pp_MONITOR = 0x584a; // MONITOR size: 2
// {0x03, 0x00}

const unsigned short int pp_LOCRADIUS = 0x5858; // LOCRADIUS size: 2
// {0x00, 0x00}

const unsigned short int pp_YBLT = 0x5863; // YBLT size: 2
// {0xc6, 0x00}

const unsigned short int pp_XBLT = 0x586e; // XBLT size: 2
// {0x3c, 0x00}

const unsigned short int pp_XORMODE = 0x587c; // XORMODE size: 2
// {0x00, 0x00}

const unsigned short int pp_LBLT = 0x5887; // LBLT size: 2
// {0x05, 0x00}

const unsigned short int pp_WBLT = 0x5892; // WBLT size: 2
// {0x03, 0x00}

const unsigned short int pp_ABLT = 0x589d; // ABLT size: 2
// {0x00, 0x00}

const unsigned short int pp_BLTSEG = 0x58aa; // BLTSEG size: 2
// {0xb2, 0x94}

const unsigned short int pp_BLT_gt_ = 0x58b5; // BLT> size: 2
// {0x02, 0x00}

const unsigned short int pp_LPX = 0x58bf; // LPX size: 2
// {0x3b, 0x00}

const unsigned short int pp_TILE_dash_PTR = 0x58cd; // TILE-PTR size: 2
// {0x3f, 0x6a}

const unsigned short int pp_IsFUEL_dash_DIE = 0x58db; // ?FUEL-DIE size: 2
// {0x00, 0x00}

const unsigned short int pp_IsG_dash_AWARE = 0x58e9; // ?G-AWARE size: 2
// {0x00, 0x00}

const unsigned short int pp_GWF = 0x58f3; // GWF size: 2
// {0x00, 0x00}

const unsigned short int pp_DXVIS = 0x58ff; // DXVIS size: 2
// {0x41, 0x53}

const unsigned short int pp_DYVIS = 0x590b; // DYVIS size: 2
// {0x45, 0x20}

const unsigned short int pp_XCON = 0x5916; // XCON size: 2
// {0x56, 0x20}

const unsigned short int pp_YCON = 0x5921; // YCON size: 2
// {0x65, 0x72}

const unsigned short int pp_DXCON = 0x592d; // DXCON size: 2
// {0x72, 0x20}

const unsigned short int pp_DYCON = 0x5939; // DYCON size: 2
// {0x6e, 0x20}

const unsigned short int pp_XVIS = 0x5944; // XVIS size: 2
// {0x69, 0x6e}

const unsigned short int pp_YVIS = 0x594f; // YVIS size: 2
// {0x65, 0x72}

const unsigned short int pp_XLLDEST = 0x595d; // XLLDEST size: 2
// {0x00, 0x00}

const unsigned short int pp_YLLDEST = 0x596b; // YLLDEST size: 2
// {0x00, 0x00}

const unsigned short int pp_GLOBALSEED = 0x5979; // GLOBALSEED size: 2
// {0x44, 0x20}

const unsigned short int pp__i__dot_CELL = 0x5986; // '.CELL size: 2
// {0x72, 0x72}

const unsigned short int pp__i__dot_BACKG = 0x5994; // '.BACKG size: 2
// {0x55, 0x4e}

const unsigned short int pp__i_ICON_dash_P = 0x59a2; // 'ICON-P size: 2
// {0x37, 0xc4}

const unsigned short int pp__i_ICONBO = 0x59b0; // 'ICONBO size: 2
// {0x4b, 0xc4}

const unsigned short int pp__i_CC = 0x59ba; // 'CC size: 2
// {0x38, 0xc9}

const unsigned short int pp_IXSEG = 0x59be; // IXSEG size: 2
// {0xc5, 0x8e}

const unsigned short int pp_IYSEG = 0x59c2; // IYSEG size: 2
// {0x6b, 0x8e}

const unsigned short int pp_IDSEG = 0x59c6; // IDSEG size: 2
// {0x3e, 0x8e}

const unsigned short int pp_ICSEG = 0x59ca; // ICSEG size: 2
// {0x11, 0x8e}

const unsigned short int pp_ILSEG = 0x59ce; // ILSEG size: 2
// {0xb7, 0x8d}

const unsigned short int pp_IHSEG = 0x59da; // IHSEG size: 2
// {0x8a, 0x8d}

const unsigned short int pp_IGLOBAL = 0x59e8; // IGLOBAL size: 2
// {0x00, 0x00}

const unsigned short int pp_ILOCAL = 0x59f5; // ILOCAL size: 2
// {0x00, 0x00}

const unsigned short int pp_IINDEX = 0x5a02; // IINDEX size: 2
// {0x00, 0x00}

const unsigned short int pp_XWLL = 0x5a0d; // XWLL size: 2
// {0x64, 0x65}

const unsigned short int pp_YWLL = 0x5a18; // YWLL size: 2
// {0x20, 0x74}

const unsigned short int pp_XWUR = 0x5a23; // XWUR size: 2
// {0x72, 0x64}

const unsigned short int pp_YWUR = 0x5a2e; // YWUR size: 2
// {0x20, 0x77}

const unsigned short int pp__star_GLOBAL = 0x5a3c; // *GLOBAL size: 2
// {0x46, 0x02}

const unsigned short int pp__ro_STOP_dash_COMM_rc_ = 0x5a4a; // (STOP-COMM) size: 2
// {0x4d, 0x29}

const unsigned short int pp_CENTERADJUST = 0x5a4e; // CENTERADJUST size: 2
// {0x00, 0x00}

const unsigned short int pp_CONTEXT_dash_ID_n_ = 0x5a5c; // CONTEXT-ID# size: 2
// {0x05, 0x00}

const unsigned short int pp_EX = 0x5a65; // EX size: 2
// {0xa0, 0xfb}

const unsigned short int pp_EY = 0x5a6e; // EY size: 2
// {0xec, 0xf8}

const unsigned short int pp_ERAD = 0x5a79; // ERAD size: 2
// {0x30, 0x00}

const unsigned short int pp_XNUMER = 0x5a86; // XNUMER size: 2
// {0x09, 0x00}

const unsigned short int pp_XDENOM = 0x5a93; // XDENOM size: 2
// {0x0f, 0x00}

const unsigned short int pp__st_ARC1_gt_ = 0x5aa0; // <ARC1> size: 2
// {0xcb, 0x08}

const unsigned short int pp__pe_EFF = 0x5aab; // %EFF size: 2
// {0x64, 0x00}

const unsigned short int pp_STORM = 0x5ab7; // STORM size: 2
// {0x00, 0x00}

const unsigned short int pp__i_TVT = 0x5ac2; // 'TVT size: 2
// {0xb2, 0xd0}

const unsigned short int pp__i_STORM = 0x5acf; // 'STORM size: 2
// {0xb5, 0xcf}

const unsigned short int pp_E_slash_M = 0x5ad9; // E/M size: 2
// {0x66, 0x6f}

const unsigned short int pp_FORCEPTASK = 0x5ae7; // FORCEPTASK size: 2
// {0x00, 0x00}

const unsigned short int pp__n_STORM = 0x5af4; // #STORM size: 2
// {0x00, 0x00}

const unsigned short int pp_W5AF8 = 0x5af8; // W5AF8 size: 2
// {0x8f, 0x01}

const unsigned short int pp_W5AFC = 0x5afc; // W5AFC size: 2
// {0x00, 0x00}

const unsigned short int pp_W5B00 = 0x5b00; // W5B00 size: 2
// {0x90, 0x01}

const unsigned short int pp_BICON = 0x5b04; // BICON size: 2
// {0x00, 0x00}

const unsigned short int pp_PORTDAT = 0x5b12; // PORTDAT size: 2
// {0x00, 0x00}

const unsigned short int pp_IsPORT = 0x5b1e; // ?PORT size: 2
// {0x01, 0x00}

const unsigned short int pp_W5B22 = 0x5b22; // W5B22 size: 2
// {0x40, 0x00}

const unsigned short int pp_W5B26 = 0x5b26; // W5B26 size: 2
// {0x3d, 0x00}

const unsigned short int pp_BVIS = 0x5b31; // BVIS size: 2
// {0xf7, 0xff}

const unsigned short int pp_LVIS = 0x5b3c; // LVIS size: 2
// {0xf7, 0xff}

const unsigned short int pp_LFSEG = 0x5b48; // LFSEG size: 2
// {0xe4, 0x8b}

const unsigned short int pp_LSYSEG = 0x5b55; // LSYSEG size: 2
// {0x5b, 0x8d}

const unsigned short int pp_MSYSEG = 0x5b62; // MSYSEG size: 2
// {0x02, 0x8d}

const unsigned short int pp_SSYSEG = 0x5b6f; // SSYSEG size: 2
// {0xf7, 0x8c}

const unsigned short int pp_IsREPAIR = 0x5b7d; // ?REPAIR size: 2
// {0x00, 0x00}

const unsigned short int pp_IsHEAL = 0x5b89; // ?HEAL size: 2
// {0x00, 0x00}

const unsigned short int pp_MXNEB = 0x5b95; // MXNEB size: 2
// {0x41, 0x53}

const unsigned short int pp_THIS_dash_BU = 0x5ba3; // THIS-BU size: 2
// {0x4f, 0x4e}

const unsigned short int pp_NCRS = 0x5bae; // NCRS size: 2
// {0x20, 0x62}

const unsigned short int pp_OCRS = 0x5bb9; // OCRS size: 2
// {0x73, 0x6f}

const unsigned short int pp_WTOP = 0x5bc4; // WTOP size: 2
// {0x40, 0x00}

const unsigned short int pp_WBOTTOM = 0x5bd2; // WBOTTOM size: 2
// {0x10, 0x00}

const unsigned short int pp_WRIGHT = 0x5bdf; // WRIGHT size: 2
// {0x9b, 0x00}

const unsigned short int pp_WLEFT = 0x5beb; // WLEFT size: 2
// {0x03, 0x00}

const unsigned short int pp_WLINES = 0x5bf8; // WLINES size: 2
// {0x07, 0x00}

const unsigned short int pp_WCHARS = 0x5c05; // WCHARS size: 2
// {0x26, 0x00}

const unsigned short int pp_SKIP2NEST = 0x5c13; // SKIP2NEST size: 2
// {0x00, 0x00}

const unsigned short int pp__dash_AIN = 0x5c1e; // -AIN size: 2
// {0x74, 0x20}

const unsigned short int pp__i_LAUNCH = 0x5c2c; // 'LAUNCH size: 2
// {0x57, 0xd3}

const unsigned short int pp_IsON_dash_PLA = 0x5c3a; // ?ON-PLA size: 2
// {0x00, 0x00}

const unsigned short int pp_IsRECALL = 0x5c48; // ?RECALL size: 2
// {0x00, 0x00}

const unsigned short int pp_WMSG = 0x5c53; // WMSG size: 2
// {0x00, 0x00}

const unsigned short int pp_IsROD = 0x5c5e; // ?ROD size: 2
// {0x45, 0x41}

const unsigned short int pp_CTX = 0x5c68; // CTX size: 2
// {0x00, 0x00}

const unsigned short int pp_CTY = 0x5c72; // CTY size: 2
// {0x06, 0x00}

const unsigned short int pp_FTRIG = 0x5c7e; // FTRIG size: 2
// {0x00, 0x00}

const unsigned short int pp_FQUIT = 0x5c8a; // FQUIT size: 2
// {0x74, 0x61}

const unsigned short int pp_LKEY = 0x5c95; // LKEY size: 2
// {0x73, 0x74}

const unsigned short int pp__i_BUTTON = 0x5ca3; // 'BUTTON size: 2
// {0x65, 0x20}

const unsigned short int pp_BTN_dash_REC = 0x5cb1; // BTN-REC size: 2
// {0x63, 0x74}

const unsigned short int pp_CRSCOLO = 0x5cbf; // CRSCOLO size: 2
// {0x6c, 0x65}

const unsigned short int pp__ro_SRDEPTH_rc_ = 0x5cc3; // (SRDEPTH) size: 2
// {0x3a, 0x20}

const unsigned short int pp_Is_gt_OP = 0x5cce; // ?>OP size: 2
// {0x00, 0x00}

const unsigned short int pp__i_YANK = 0x5cda; // 'YANK size: 2
// {0x4f, 0xcc}

const unsigned short int pp_Is12 = 0x5ce4; // ?12 size: 2
// {0x00, 0x00}

const unsigned short int pp__i__plus_VESS = 0x5cf1; // '+VESS size: 2
// {0xc9, 0xca}

const unsigned short int pp_IsNEB = 0x5cfc; // ?NEB size: 2
// {0x00, 0x00}

const unsigned short int pp_FORCEKEY = 0x5d0a; // FORCEKEY size: 2
// {0x00, 0x00}

const unsigned short int pp__pe_VAL = 0x5d15; // %VAL size: 2
// {0x78, 0x65}

const unsigned short int pp_SCROLL_dash_ = 0x5d23; // SCROLL- size: 2
// {0x4e, 0x20}

const unsigned short int pp__bo__n_CACHE_bc_ = 0x5d31; // [#CACHE] size: 2
// {0x87, 0x01}

const unsigned short int pp_ESC_dash_EN = 0x5d3e; // ESC-EN size: 2
// {0x01, 0x00}

const unsigned short int pp_ESC_dash_PFA = 0x5d4c; // ESC-PFA size: 2
// {0x76, 0xd4}

const unsigned short int pp_LINE_dash_COUNT = 0x5d5a; // LINE-COUNT size: 2
// {0x54, 0x20}

const unsigned short int pp_PM_dash_PTR = 0x5d67; // PM-PTR size: 2
// {0x6f, 0x75}

const unsigned short int pp_IsREUSE = 0x5d6b; // ?REUSE size: 2
// {0x01, 0x00}

const unsigned short int pp_SKEY = 0x5d76; // SKEY size: 2
// {0x63, 0x72}

const unsigned short int pp__n_AUX = 0x5d81; // #AUX size: 2
// {0x05, 0x00}

const unsigned short int pp_WADDR = 0x5d8d; // WADDR size: 2
// {0x20, 0x77}

const unsigned short int pp_MASK = 0x5d98; // MASK size: 2
// {0x73, 0x65}

const unsigned short int pp_IsEGA = 0x5da3; // ?EGA size: 2
// {0x00, 0x00}

const unsigned short int pp_XABS = 0x5dae; // XABS size: 2
// {0xff, 0xff}

const unsigned short int pp_YABS = 0x5db9; // YABS size: 2
// {0x00, 0x00}

const unsigned short int pp_HEADING = 0x5dc7; // HEADING size: 2
// {0x02, 0x00}

const unsigned short int pp__3DSEG = 0x5dd3; // 3DSEG size: 2
// {0x69, 0x70}

const unsigned short int pp_VIN_i_ = 0x5dde; // VIN' size: 2
// {0x67, 0x20}

const unsigned short int pp_YSCREEN = 0x5dec; // YSCREEN size: 2
// {0x20, 0x74}

const unsigned short int pp_XSCREEN = 0x5dfa; // XSCREEN size: 2
// {0x6f, 0x72}

const unsigned short int pp__i_COMBAT = 0x5e08; // 'COMBAT size: 2
// {0x58, 0xc9}

const unsigned short int pp__i_CEX_plus_ = 0x5e14; // 'CEX+ size: 2
// {0x55, 0xc2}

const unsigned short int pp__i_CEX = 0x5e1f; // 'CEX size: 2
// {0x6a, 0xc2}

const unsigned short int pp__i_WAX = 0x5e2a; // 'WAX size: 2
// {0x48, 0xc9}

const unsigned short int pp_TERMINA = 0x5e38; // TERMINA size: 2
// {0x44, 0x20}

const unsigned short int pp_IsCOMBAT = 0x5e46; // ?COMBAT size: 2
// {0x00, 0x00}

const unsigned short int pp_IsATTACK = 0x5e54; // ?ATTACK size: 2
// {0x74, 0x6f}

const unsigned short int pp_IsRECYCLED = 0x5e58; // ?RECYCLED size: 2
// {0x00, 0x00}

const unsigned short int pp_STAR_dash_HR = 0x5e66; // STAR-HR size: 2
// {0x00, 0x00}

const unsigned short int pp_STARDATE = 0x5e74; // STARDATE size: 2
// {0x00, 0x00}

const unsigned short int pp_TIME_dash_PASSING = 0x5e82; // TIME-PASSING size: 2
// {0x00, 0x00}

const unsigned short int pp__n_CLRMAP = 0x5e90; // #CLRMAP size: 2
// {0x67, 0x65}

const unsigned short int pp_PLHI = 0x5e9b; // PLHI size: 2
// {0xff, 0xff}

const unsigned short int pp__i_PROCES = 0x5ea9; // 'PROCES size: 2
// {0x75, 0x72}

const unsigned short int pp_CURSEG = 0x5eb6; // CURSEG size: 2
// {0x4e, 0x8d}

const unsigned short int pp__i_SIMULA = 0x5ec4; // 'SIMULA size: 2
// {0xe5, 0xd0}

const unsigned short int pp__i_DEATH = 0x5ed1; // 'DEATH size: 2
// {0x65, 0x63}

const unsigned short int pp__i_ENDING = 0x5edf; // 'ENDING size: 2
// {0x20, 0x63}

const unsigned short int pp__bo_KEYINT_bc_ = 0x5eed; // [KEYINT] size: 2
// {0x00, 0x00}

const unsigned short int pp__i_CLEANU = 0x5efb; // 'CLEANU size: 2
// {0x20, 0x2d}

const unsigned short int pp__i_KEY_dash_CA = 0x5f09; // 'KEY-CA size: 2
// {0x20, 0x6d}

const unsigned short int pp__i__dot_VITAL = 0x5f17; // '.VITAL size: 2
// {0x49, 0x47}

const unsigned short int pp__i__dot_DATE = 0x5f24; // '.DATE size: 2
// {0x69, 0x74}

const unsigned short int pp__i__dot_VEHICLE_dash_STATUS = 0x5f32; // '.VEHICLE-STATUS size: 2
// {0x2d, 0x53}

const unsigned short int pp__i_VEHICLE_dash_CYCLE = 0x5f40; // 'VEHICLE-CYCLE size: 2
// {0x43, 0x59}

const unsigned short int pp__i_CREW_dash_C = 0x5f4e; // 'CREW-C size: 2
// {0x4c, 0x45}

const unsigned short int pp__i_EXTERNAL_dash_EVENTS = 0x5f5c; // 'EXTERNAL-EVENTS size: 2
// {0x48, 0x3a}

const unsigned short int pp__i_REPAIR = 0x5f6a; // 'REPAIR size: 2
// {0x74, 0x65}

const unsigned short int pp__i_TREATM = 0x5f78; // 'TREATM size: 2
// {0x54, 0x20}

const unsigned short int pp_WEAPON_dash_ = 0x5f86; // WEAPON- size: 2
// {0x52, 0x45}

const unsigned short int pp__h_CRIT = 0x5f92; // ^CRIT size: 2
// {0x45, 0x20}

const unsigned short int pp_IsFLAT = 0x5f9e; // ?FLAT size: 2
// {0x74, 0x6f}

const unsigned short int pp_IsSUP = 0x5fa9; // ?SUP size: 2
// {0x00, 0x00}

const unsigned short int pp_E_dash_USE = 0x5fb5; // E-USE size: 2
// {0x4c, 0x45}

const unsigned short int pp__i_ENERGY = 0x5fc3; // 'ENERGY size: 2
// {0x72, 0xcc}

const unsigned short int pp_IsSECURE = 0x5fd1; // ?SECURE size: 2
// {0x00, 0x00}

const unsigned short int pp__i_STP = 0x5fdc; // 'STP size: 2
// {0x36, 0xd1}

const unsigned short int pp__i_RSIDE = 0x5fe9; // 'RSIDE size: 2
// {0x45, 0xd1}

const unsigned short int pp_DERROR = 0x5ff6; // DERROR size: 2
// {0x20, 0x20}

const unsigned short int pp_BITS = 0x601f; // BITS size: 2
// {0x20, 0x20}

const unsigned short int pp__n_BITS = 0x602b; // #BITS size: 2
// {0x20, 0x20}

const unsigned short int pp_TIRED_dash_T = 0x608b; // TIRED-T size: 4
// {0x79, 0xe9, 0x00, 0x56}

const unsigned short int pp_LASTREP = 0x609b; // LASTREP size: 4
// {0x00, 0x00, 0x00, 0x00}

const unsigned short int pp_TALKCOU = 0x60ab; // TALKCOU size: 4
// {0x20, 0x69, 0x74, 0x69}

const unsigned short int pp_VSTIME = 0x60ba; // VSTIME size: 4
// {0x00, 0x00, 0x00, 0x00}

const unsigned short int pp__10_star_CARGO = 0x60ca; // 10*CARGO size: 4
// {0x20, 0x61, 0x20, 0x76}

const unsigned short int pp_SENSE_dash_ADDR = 0x60da; // SENSE-ADDR size: 4
// {0x00, 0x00, 0x00, 0x29}

const unsigned short int pp_EYEXY = 0x60e8; // EYEXY size: 4
// {0x52, 0x20, 0x64, 0x64}

const unsigned short int pp_WEAPXY = 0x60f7; // WEAPXY size: 4
// {0x74, 0x20, 0x53, 0x45}

const unsigned short int pp__10_star_END = 0x6106; // 10*END size: 4
// {0x29, 0x20, 0x20, 0x20}

const unsigned short int pp_TOWFINE = 0x6116; // TOWFINE size: 4
// {0x20, 0x20, 0x20, 0x20}

const unsigned short int pp_ENC_dash_TIME = 0x6126; // ENC-TIME size: 4
// {0x20, 0x20, 0x20, 0x20}

const unsigned short int pp_NAV_dash_TIME = 0x6136; // NAV-TIME size: 4
// {0x20, 0x20, 0x20, 0x20}

const unsigned short int pp_W613C = 0x613c; // W613C size: 4
// {0xc4, 0x04, 0x22, 0x16}

const unsigned short int pp_STIME = 0x614a; // STIME size: 4
// {0x20, 0x20, 0x20, 0x20}

const unsigned short int pp_W6150 = 0x6150; // W6150 size: 4
// {0x05, 0x00, 0x30, 0x26}

const unsigned short int pp_W6156 = 0x6156; // W6156 size: 4
// {0x05, 0x00, 0x30, 0x26}

const unsigned short int pp_IADDR = 0x615c; // IADDR size: 4
// {0x00, 0x00, 0x00, 0x00}

const unsigned short int pp_W6162 = 0x6162; // W6162 size: 4
// {0x55, 0x16, 0x00, 0x72}

const unsigned short int pp_KEYTIME = 0x6172; // KEYTIME size: 4
// {0x74, 0x20, 0x6f, 0x66}

const unsigned short int pp_LKEYTIM = 0x6182; // LKEYTIM size: 4
// {0x69, 0x63, 0x68, 0x20}

const unsigned short int pp__ro_SCROLL_dash_BOX_rc_ = 0x6192; // (SCROLL-BOX) size: 4
// {0x4f, 0x58, 0x29, 0x20}

const unsigned short int pp__ro_ORIGINATOR_rc_ = 0x61a2; // (ORIGINATOR) size: 4
// {0x4f, 0x52, 0x29, 0x20}

const unsigned short int pp__ro_SCROLL_dash_CONT_rc_ = 0x61b2; // (SCROLL-CONT) size: 4
// {0x4f, 0x4e, 0x54, 0x29}

const unsigned short int pp__ro_AWARD_rc_ = 0x61c2; // (AWARD) size: 4
// {0x47, 0x75, 0x00, 0x20}

const unsigned short int pp_BOX_dash_IADDR = 0x61d2; // BOX-IADDR size: 4
// {0x3d, 0x10, 0x00, 0x10}

const unsigned short int pp__ro_BOMB_rc_ = 0x61e1; // (BOMB) size: 4
// {0x00, 0x00, 0x00, 0x20}

const unsigned short int pp_REAL_dash_MS = 0x61f1; // REAL-MS size: 4
// {0x00, 0x00, 0x10, 0x27}

const unsigned short int pp_LAST_dash_UPDATE = 0x6201; // LAST-UPDATE size: 4
// {0x00, 0x00, 0x00, 0x00}

const unsigned short int pp_XWLD_c_XPIX = 0x6211; // XWLD:XPIX size: 4
// {0x20, 0x00, 0x08, 0x00}

const unsigned short int pp_YWLD_c_YPIX = 0x6221; // YWLD:YPIX size: 4
// {0x30, 0x00, 0x08, 0x00}

const unsigned short int pp_ANCHOR_dash_CONTOUR = 0x6230; // ANCHOR-CONTOUR size: 4
// {0x78, 0xec, 0x78, 0xec}

const unsigned short int pp_OK_dash_TALK = 0x6240; // OK-TALK size: 4
// {0x50, 0xec, 0x00, 0x20}

const unsigned short int pp__ro_STARPO = 0x6250; // (STARPO size: 4
// {0xe5, 0x96, 0x00, 0x56}

const unsigned short int pp__ro_SHIP_rc_ = 0x625f; // (SHIP) size: 4
// {0xf0, 0x9a, 0x00, 0x72}

const unsigned short int pp_TVEHICLE = 0x626f; // TVEHICLE size: 4
// {0x46, 0x9b, 0x00, 0x73}

const unsigned short int pp_TV_dash_HOLD = 0x627f; // TV-HOLD size: 4
// {0x6b, 0x9b, 0x00, 0x61}

const unsigned short int pp_SUPER_dash_BOX = 0x628f; // SUPER-BOX size: 4
// {0x20, 0x72, 0x72, 0x61}

const unsigned short int pp__ro_SYSTEM_rc_ = 0x629f; // (SYSTEM) size: 4
// {0x21, 0x16, 0x00, 0x65}

const unsigned short int pp__ro_ORBIT_rc_ = 0x62af; // (ORBIT) size: 4
// {0x88, 0x1d, 0x02, 0x65}

const unsigned short int pp__ro_PLANET_rc_ = 0x62bf; // (PLANET) size: 4
// {0x55, 0x16, 0x00, 0x65}

const unsigned short int pp__ro_SURFACE_rc_ = 0x62cf; // (SURFACE) size: 4
// {0x20, 0x72, 0x72, 0x65}

const unsigned short int pp__ro_ENCOUNTER_rc_ = 0x62df; // (ENCOUNTER) size: 4
// {0x00, 0x00, 0x00, 0x00}

const unsigned short int pp__ro_SHIPBOX_rc_ = 0x62ef; // (SHIPBOX) size: 4
// {0xbc, 0x9a, 0x00, 0x65}

const unsigned short int pp__ro_AORIGINATOR_rc_ = 0x62ff; // (AORIGINATOR) size: 4
// {0x00, 0x00, 0x00, 0x00}

const unsigned short int pp_THIS_dash_REGION = 0x630f; // THIS-REGION size: 4
// {0x4f, 0x4e, 0x20, 0x6e}

const unsigned short int pp__ro_THIS_dash_ITEM_rc_ = 0x631f; // (THIS-ITEM) size: 4
// {0x4d, 0x29, 0x20, 0x68}

const unsigned short int pp_KEYINTADDR = 0x6325; // KEYINTADDR size: 2
// {0x29, 0xb4}

const unsigned short int pp_CXS = 0x6329; // CXS size: 120
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x10, 0x00, 0xbc, 0x9a, 0x00, 0x88, 0x1d, 0x02, 0xbc, 0x9a, 0x00, 0x88, 0x1d, 0x02, 0x21, 0x16, 0x00, 0x50, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}

const unsigned short int pp_VSTK = 0x63a3; // VSTK size: 64
// {0x01, 0x00, 0x3c, 0xca, 0x01, 0x00, 0x69, 0xca, 0x01, 0x00, 0x4b, 0xca, 0x01, 0x00, 0x87, 0xca, 0x01, 0x00, 0x01, 0x00, 0xc3, 0xca, 0x01, 0x00, 0x0e, 0xcb, 0x01, 0x00, 0x4a, 0xcb, 0x01, 0x00, 0x77, 0xcb, 0x01, 0x00, 0xa4, 0xcb, 0x01, 0x00, 0xfe, 0xcb, 0x01, 0x00, 0x49, 0xcc, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x86, 0x7a, 0xb2, 0x7d, 0x3a, 0x20, 0x08, 0x70, 0x47, 0x87, 0x20, 0x20}

const unsigned short int pp_IBFR = 0x63ec; // IBFR size: 273
// {0x0e, 0x00, 0x00, 0x00, 0x9a, 0x00, 0x99, 0x9a, 0x00, 0xf0, 0x9a, 0x00, 0x12, 0x00, 0x03, 0x00, 0xf5, 0xff, 0x90, 0x00, 0x20, 0x20, 0x47, 0x47, 0x4e, 0x47, 0x20, 0x4d, 0x41, 0x54, 0x45, 0x55, 0x43, 0x45, 0x52, 0x20, 0x4f, 0x52, 0x4e, 0x47, 0x20, 0x4c, 0x41, 0x56, 0x41, 0xfc, 0x97, 0xf3, 0x59, 0xef, 0xa4, 0xaf, 0x89, 0xa5, 0x0b, 0xfa, 0x1f, 0x94, 0x63, 0xe4, 0x0d, 0xe3, 0x6b, 0xee, 0x40, 0xbe, 0x92, 0x3f, 0xec, 0x8f, 0x07, 0x05, 0x19, 0x5e, 0x41, 0xa3, 0x25, 0x6d, 0x19, 0x5f, 0x5b, 0xfa, 0xf9, 0x9f, 0xb9, 0x38, 0x78, 0xcb, 0x0e, 0x3c, 0x0a, 0x85, 0x77, 0xa8, 0xae, 0x78, 0xb8, 0xfc, 0x9e, 0xf2, 0x45, 0xc7, 0x57, 0xee, 0x83, 0x93, 0xb7, 0x1b, 0x7a, 0x35, 0x91, 0x0a, 0xb7, 0xc7, 0x60, 0x66, 0x58, 0xbe, 0x85, 0x5a, 0x32, 0xc8, 0x84, 0x16, 0xd2, 0x30, 0x6d, 0xf1, 0x6b, 0xe0, 0x11, 0x54, 0x65, 0x6c, 0x9f, 0xb7, 0x0e, 0x80, 0x59, 0x5d, 0xf1, 0xde, 0x68, 0x89, 0xf5, 0xb4, 0x0f, 0x79, 0x65, 0xf1, 0x47, 0x10, 0x36, 0x20, 0x8e, 0x6c, 0x9e, 0x3b, 0xbc, 0xb5, 0xf4, 0x44, 0x45, 0x20, 0x4d, 0x45, 0x54, 0x20, 0x57, 0x49, 0x54, 0x48, 0x20, 0x46, 0x4f, 0x52, 0x43, 0x45, 0x2e, 0x20, 0x44, 0x4f, 0x20, 0x59, 0x4f, 0x55, 0x20, 0x41, 0x47, 0x52, 0x45, 0x45, 0x20, 0x54, 0x4f, 0x20, 0x43, 0x4f, 0x4d, 0x45, 0x20, 0x41, 0x4c, 0x4f, 0x4e, 0x47, 0x20, 0x50, 0x45, 0x41, 0x43, 0x45, 0x46, 0x55, 0x4c, 0x4c, 0x59, 0x3f, 0x20, 0x45, 0x44, 0x3f, 0x20, 0x4e, 0x4f, 0x57, 0x20, 0x41, 0x4e, 0x44, 0x20, 0x46, 0x4f, 0x52, 0x45, 0x56, 0x45, 0x52, 0x20, 0x4d, 0x4f, 0x52, 0x54, 0x41, 0x4c, 0x20, 0x45, 0x4e, 0x45, 0x4d, 0x49, 0x45, 0x53, 0x2e, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20}

const unsigned short int pp_YTABLE = 0x6508; // YTABLE size: 400
// {0xf0, 0x3e, 0xf0, 0x1e, 0xa0, 0x3e, 0xa0, 0x1e, 0x50, 0x3e, 0x50, 0x1e, 0x00, 0x3e, 0x00, 0x1e, 0xb0, 0x3d, 0xb0, 0x1d, 0x60, 0x3d, 0x60, 0x1d, 0x10, 0x3d, 0x10, 0x1d, 0xc0, 0x3c, 0xc0, 0x1c, 0x70, 0x3c, 0x70, 0x1c, 0x20, 0x3c, 0x20, 0x1c, 0xd0, 0x3b, 0xd0, 0x1b, 0x80, 0x3b, 0x80, 0x1b, 0x30, 0x3b, 0x30, 0x1b, 0xe0, 0x3a, 0xe0, 0x1a, 0x90, 0x3a, 0x90, 0x1a, 0x40, 0x3a, 0x40, 0x1a, 0xf0, 0x39, 0xf0, 0x19, 0xa0, 0x39, 0xa0, 0x19, 0x50, 0x39, 0x50, 0x19, 0x00, 0x39, 0x00, 0x19, 0xb0, 0x38, 0xb0, 0x18, 0x60, 0x38, 0x60, 0x18, 0x10, 0x38, 0x10, 0x18, 0xc0, 0x37, 0xc0, 0x17, 0x70, 0x37, 0x70, 0x17, 0x20, 0x37, 0x20, 0x17, 0xd0, 0x36, 0xd0, 0x16, 0x80, 0x36, 0x80, 0x16, 0x30, 0x36, 0x30, 0x16, 0xe0, 0x35, 0xe0, 0x15, 0x90, 0x35, 0x90, 0x15, 0x40, 0x35, 0x40, 0x15, 0xf0, 0x34, 0xf0, 0x14, 0xa0, 0x34, 0xa0, 0x14, 0x50, 0x34, 0x50, 0x14, 0x00, 0x34, 0x00, 0x14, 0xb0, 0x33, 0xb0, 0x13, 0x60, 0x33, 0x60, 0x13, 0x10, 0x33, 0x10, 0x13, 0xc0, 0x32, 0xc0, 0x12, 0x70, 0x32, 0x70, 0x12, 0x20, 0x32, 0x20, 0x12, 0xd0, 0x31, 0xd0, 0x11, 0x80, 0x31, 0x80, 0x11, 0x30, 0x31, 0x30, 0x11, 0xe0, 0x30, 0xe0, 0x10, 0x90, 0x30, 0x90, 0x10, 0x40, 0x30, 0x40, 0x10, 0xf0, 0x2f, 0xf0, 0x0f, 0xa0, 0x2f, 0xa0, 0x0f, 0x50, 0x2f, 0x50, 0x0f, 0x00, 0x2f, 0x00, 0x0f, 0xb0, 0x2e, 0xb0, 0x0e, 0x60, 0x2e, 0x60, 0x0e, 0x10, 0x2e, 0x10, 0x0e, 0xc0, 0x2d, 0xc0, 0x0d, 0x70, 0x2d, 0x70, 0x0d, 0x20, 0x2d, 0x20, 0x0d, 0xd0, 0x2c, 0xd0, 0x0c, 0x80, 0x2c, 0x80, 0x0c, 0x30, 0x2c, 0x30, 0x0c, 0xe0, 0x2b, 0xe0, 0x0b, 0x90, 0x2b, 0x90, 0x0b, 0x40, 0x2b, 0x40, 0x0b, 0xf0, 0x2a, 0xf0, 0x0a, 0xa0, 0x2a, 0xa0, 0x0a, 0x50, 0x2a, 0x50, 0x0a, 0x00, 0x2a, 0x00, 0x0a, 0xb0, 0x29, 0xb0, 0x09, 0x60, 0x29, 0x60, 0x09, 0x10, 0x29, 0x10, 0x09, 0xc0, 0x28, 0xc0, 0x08, 0x70, 0x28, 0x70, 0x08, 0x20, 0x28, 0x20, 0x08, 0xd0, 0x27, 0xd0, 0x07, 0x80, 0x27, 0x80, 0x07, 0x30, 0x27, 0x30, 0x07, 0xe0, 0x26, 0xe0, 0x06, 0x90, 0x26, 0x90, 0x06, 0x40, 0x26, 0x40, 0x06, 0xf0, 0x25, 0xf0, 0x05, 0xa0, 0x25, 0xa0, 0x05, 0x50, 0x25, 0x50, 0x05, 0x00, 0x25, 0x00, 0x05, 0xb0, 0x24, 0xb0, 0x04, 0x60, 0x24, 0x60, 0x04, 0x10, 0x24, 0x10, 0x04, 0xc0, 0x23, 0xc0, 0x03, 0x70, 0x23, 0x70, 0x03, 0x20, 0x23, 0x20, 0x03, 0xd0, 0x22, 0xd0, 0x02, 0x80, 0x22, 0x80, 0x02, 0x30, 0x22, 0x30, 0x02, 0xe0, 0x21, 0xe0, 0x01, 0x90, 0x21, 0x90, 0x01, 0x40, 0x21, 0x40, 0x01, 0xf0, 0x20, 0xf0, 0x00, 0xa0, 0x20, 0xa0, 0x00, 0x50, 0x20, 0x50, 0x00, 0x00, 0x20, 0x00, 0x00}

const unsigned short int pp_VYTABLE = 0x66a4; // VYTABLE size: 240
// {0x00, 0x00, 0x70, 0x08, 0x24, 0x00, 0x94, 0x08, 0x48, 0x00, 0xb8, 0x08, 0x6c, 0x00, 0xdc, 0x08, 0x90, 0x00, 0x00, 0x09, 0xb4, 0x00, 0x24, 0x09, 0xd8, 0x00, 0x48, 0x09, 0xfc, 0x00, 0x6c, 0x09, 0x20, 0x01, 0x90, 0x09, 0x44, 0x01, 0xb4, 0x09, 0x68, 0x01, 0xd8, 0x09, 0x8c, 0x01, 0xfc, 0x09, 0xb0, 0x01, 0x20, 0x0a, 0xd4, 0x01, 0x44, 0x0a, 0xf8, 0x01, 0x68, 0x0a, 0x1c, 0x02, 0x8c, 0x0a, 0x40, 0x02, 0xb0, 0x0a, 0x64, 0x02, 0xd4, 0x0a, 0x88, 0x02, 0xf8, 0x0a, 0xac, 0x02, 0x1c, 0x0b, 0xd0, 0x02, 0x40, 0x0b, 0xf4, 0x02, 0x64, 0x0b, 0x18, 0x03, 0x88, 0x0b, 0x3c, 0x03, 0xac, 0x0b, 0x60, 0x03, 0xd0, 0x0b, 0x84, 0x03, 0xf4, 0x0b, 0xa8, 0x03, 0x18, 0x0c, 0xcc, 0x03, 0x3c, 0x0c, 0xf0, 0x03, 0x60, 0x0c, 0x14, 0x04, 0x84, 0x0c, 0x38, 0x04, 0xa8, 0x0c, 0x5c, 0x04, 0xcc, 0x0c, 0x80, 0x04, 0xf0, 0x0c, 0xa4, 0x04, 0x14, 0x0d, 0xc8, 0x04, 0x38, 0x0d, 0xec, 0x04, 0x5c, 0x0d, 0x10, 0x05, 0x80, 0x0d, 0x34, 0x05, 0xa4, 0x0d, 0x58, 0x05, 0xc8, 0x0d, 0x7c, 0x05, 0xec, 0x0d, 0xa0, 0x05, 0x10, 0x0e, 0xc4, 0x05, 0x34, 0x0e, 0xe8, 0x05, 0x58, 0x0e, 0x0c, 0x06, 0x7c, 0x0e, 0x30, 0x06, 0xa0, 0x0e, 0x54, 0x06, 0xc4, 0x0e, 0x78, 0x06, 0xe8, 0x0e, 0x9c, 0x06, 0x0c, 0x0f, 0xc0, 0x06, 0x30, 0x0f, 0xe4, 0x06, 0x54, 0x0f, 0x08, 0x07, 0x78, 0x0f, 0x2c, 0x07, 0x9c, 0x0f, 0x50, 0x07, 0xc0, 0x0f, 0x74, 0x07, 0xe4, 0x0f, 0x98, 0x07, 0x08, 0x10, 0xbc, 0x07, 0x2c, 0x10, 0xe0, 0x07, 0x50, 0x10, 0x04, 0x08, 0x74, 0x10, 0x28, 0x08, 0x98, 0x10, 0x4c, 0x08, 0xbc, 0x10}

const unsigned short int pp_LSCAN = 0x679e; // LSCAN size: 400
// {0x53, 0x43, 0x52, 0x4f, 0x4c, 0x4c, 0x2d, 0x54, 0x45, 0x58, 0x54, 0x20, 0x72, 0x20, 0x74, 0x61, 0x62, 0x6c, 0x65, 0x29, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x20, 0x73, 0x65, 0x74, 0x20, 0x64, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0x20, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x20, 0x29, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5c, 0x20, 0x53, 0x45, 0x54, 0x55, 0x50, 0x20, 0x20, 0x20, 0x4b, 0x52, 0x4e, 0x20, 0x28, 0x20, 0x72, 0x66, 0x67, 0x32, 0x35, 0x73, 0x65, 0x70, 0x38, 0x37, 0x29, 0x20, 0x68, 0x65, 0x78, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3a, 0x20, 0x73, 0x65, 0x74, 0x64, 0x62, 0x75, 0x66, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x81, 0x81, 0x80, 0x82, 0x81, 0x81, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x77, 0x77, 0x76, 0x78, 0x77, 0x77, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x8c, 0x8c, 0x8b, 0x8d, 0x8c, 0x8c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x75, 0x75, 0x74, 0x76, 0x75, 0x75, 0x77, 0x79, 0x77, 0x79, 0x77, 0x79, 0x78, 0x78, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x78, 0x78, 0x77, 0x79, 0x78, 0x78, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x53, 0x9c, 0x30, 0x3c, 0x30, 0x3c, 0x30, 0x3c, 0x30, 0x3c, 0x30, 0x3c, 0x20, 0x20}

const unsigned short int pp_NEB_dash_TABLE = 0x6930; // NEB-TABLE size: 64
// {0xc2, 0x00, 0x3c, 0x00, 0xc2, 0x00, 0x30, 0x00, 0xc6, 0x00, 0x30, 0x00, 0xc6, 0x00, 0x3c, 0x00, 0x49, 0x41, 0x42, 0x4c, 0x45, 0x20, 0x2d, 0x20, 0x41, 0x52, 0x52, 0x41, 0x59, 0x20, 0x2d, 0x20, 0x53, 0x48, 0x5c, 0x20, 0x54, 0x52, 0x41, 0x4e, 0x53, 0x56, 0x41, 0x52, 0x4b, 0x52, 0x4e, 0x20, 0x28, 0x20, 0x72, 0x66, 0x67, 0x31, 0x39, 0x73, 0x65, 0x70, 0x38, 0x37, 0x29, 0x20, 0x20, 0x20}

const unsigned short int pp_NEB2 = 0x6972; // NEB2 size: 64
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x20, 0x62, 0x30, 0x30, 0x30, 0x20, 0x31, 0x36, 0x6b, 0x20, 0x32, 0x2a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20}

const unsigned short int pp_V1 = 0x69b4; // V1 size: 64
// {0xc6, 0x00, 0x3a, 0x00, 0xc2, 0x00, 0x38, 0x00, 0x20, 0x20, 0x62, 0x38, 0x30, 0x30, 0x20, 0x31, 0x36, 0x6b, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20}

const unsigned short int pp_V2 = 0x69f6; // V2 size: 64
// {0x00, 0x00, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20}

const unsigned short int pp_CMAP = 0x6a3f; // CMAP size: 64
// {0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff}

const unsigned short int pp_LRTRN = 0x6a89; // LRTRN size: 4
// {0x70, 0x90, 0xf1, 0x16}

const unsigned short int pp__i_VERSIONERR = 0x6c62; // 'VERSIONERR size: 2
// {0x75, 0x70}

const unsigned short int pp_CTTOP = 0x6c6e; // CTTOP size: 2
// {0x40, 0x00}

const unsigned short int pp_CTBOT = 0x6c7a; // CTBOT size: 2
// {0x10, 0x00}

const unsigned short int pp_W6FB9 = 0x6fb9; // W6FB9 size: 2
// {0xdb, 0x6f}

const unsigned short int pp_IsTANDRG = 0x84ec; // ?TANDRG size: 2
// {0x00, 0x00}

const unsigned short int pp_TREJECT_slash_TACCEPT = 0x8538; // TREJECT/TACCEPT size: 92
// {0x8c, 0xd8, 0x8e, 0xc0, 0x55, 0x57, 0x56, 0xb3, 0x0f, 0x32, 0xff, 0x8b, 0x36, 0x9b, 0x56, 0x8b, 0x3e, 0xb0, 0x56, 0x8b, 0x2e, 0x52, 0x57, 0x8b, 0x0e, 0x86, 0x56, 0x33, 0xd2, 0xad, 0x3b, 0xc5, 0x79, 0x03, 0x83, 0xca, 0x04, 0x3b, 0x06, 0x5f, 0x57, 0x7e, 0x03, 0x83, 0xca, 0x08, 0xad, 0x3b, 0x06, 0x38, 0x57, 0x79, 0x03, 0x83, 0xca, 0x01, 0x3b, 0x06, 0x45, 0x57, 0x7e, 0x03, 0x83, 0xca, 0x02, 0x8b, 0xc2, 0xaa, 0x22, 0xda, 0x0a, 0xfa, 0xe2, 0xd1, 0x33, 0xc0, 0x8a, 0xc3, 0x89, 0x06, 0xe8, 0x56, 0x8a, 0xc7, 0x89, 0x06, 0xdc, 0x56, 0x5e, 0x5f, 0x5d, 0xc3}

const unsigned short int pp_INT_slash_O = 0x8596; // INT/O size: 109
// {0x53, 0x55, 0x56, 0x57, 0x8b, 0x0e, 0x10, 0x57, 0x8b, 0x36, 0x14, 0x57, 0x8b, 0x2e, 0x04, 0x57, 0x8b, 0x3e, 0x08, 0x57, 0x83, 0x3e, 0xcf, 0x56, 0x01, 0x75, 0x04, 0x87, 0xf1, 0x87, 0xfd, 0x8b, 0x06, 0x2c, 0x57, 0x2b, 0xc1, 0x8b, 0xdf, 0x2b, 0xde, 0xf7, 0xeb, 0x8b, 0xdd, 0x2b, 0xd9, 0xf7, 0xfb, 0x03, 0xc6, 0x8b, 0xd0, 0x8b, 0x0e, 0x2c, 0x57, 0x83, 0x3e, 0xcf, 0x56, 0x01, 0x75, 0x02, 0x87, 0xd1, 0x2b, 0xc0, 0x3b, 0x0e, 0x38, 0x57, 0x79, 0x03, 0x0d, 0x01, 0x00, 0x3b, 0x0e, 0x45, 0x57, 0x7e, 0x03, 0x0d, 0x02, 0x00, 0x3b, 0x16, 0x52, 0x57, 0x79, 0x03, 0x0d, 0x04, 0x00, 0x3b, 0x16, 0x5f, 0x57, 0x7e, 0x03, 0x0d, 0x08, 0x00, 0x5f, 0x5e, 0x5d, 0x5b, 0xc3}

const unsigned short int pp_CLIP = 0x8605; // CLIP size: 370
// {0xc7, 0x06, 0x91, 0x56, 0x00, 0x00, 0x87, 0x36, 0xbf, 0x56, 0x87, 0x3e, 0xc3, 0x56, 0x87, 0x1e, 0xc7, 0x56, 0x87, 0x2e, 0xcb, 0x56, 0x8b, 0x36, 0x9b, 0x56, 0x8b, 0x3e, 0xa6, 0x56, 0x8b, 0x1e, 0xb0, 0x56, 0x8b, 0x2e, 0xbb, 0x56, 0x8b, 0x0e, 0x86, 0x56, 0x83, 0x3e, 0xf4, 0x56, 0x01, 0x75, 0x30, 0x8b, 0x04, 0x89, 0x06, 0x08, 0x57, 0x8b, 0x44, 0x02, 0x89, 0x06, 0x04, 0x57, 0x8a, 0x07, 0x88, 0x06, 0x0c, 0x57, 0x22, 0x06, 0x28, 0x57, 0x75, 0x10, 0xa5, 0xa5, 0x8a, 0x06, 0x0c, 0x57, 0x88, 0x46, 0x00, 0x45, 0xff, 0x06, 0x91, 0x56, 0xeb, 0x03, 0x83, 0xc6, 0x04, 0x49, 0x43, 0xeb, 0x23, 0x49, 0x03, 0xd9, 0x8a, 0x07, 0x88, 0x06, 0x0c, 0x57, 0x2b, 0xd9, 0x8b, 0xc1, 0xd1, 0xe0, 0xd1, 0xe0, 0x03, 0xf0, 0x8b, 0x14, 0x89, 0x16, 0x08, 0x57, 0x8b, 0x54, 0x02, 0x89, 0x16, 0x04, 0x57, 0x2b, 0xf0, 0x41, 0x8b, 0x04, 0x89, 0x06, 0x14, 0x57, 0x8b, 0x44, 0x02, 0x89, 0x06, 0x10, 0x57, 0x8a, 0x07, 0x88, 0x06, 0x18, 0x57, 0x43, 0x8b, 0x06, 0x28, 0x57, 0x22, 0x06, 0x18, 0x57, 0x22, 0x26, 0x0c, 0x57, 0x3a, 0xe0, 0x74, 0x5c, 0x51, 0x50, 0x33, 0xc9, 0x8b, 0x06, 0x2c, 0x57, 0x83, 0x3e, 0xcf, 0x56, 0x00, 0x75, 0x16, 0x3b, 0x06, 0x10, 0x57, 0x74, 0x01, 0x41, 0x3b, 0x06, 0x04, 0x57, 0x74, 0x05, 0x83, 0xe1, 0x01, 0xeb, 0x02, 0x33, 0xc9, 0xeb, 0x14, 0x3b, 0x06, 0x14, 0x57, 0x74, 0x01, 0x41, 0x3b, 0x06, 0x08, 0x57, 0x74, 0x05, 0x83, 0xe1, 0x01, 0xeb, 0x02, 0x33, 0xc9, 0x83, 0x3e, 0xf4, 0x56, 0x01, 0x75, 0x01, 0x41, 0x0b, 0xc9, 0x74, 0x15, 0xe8, 0xa1, 0xfe, 0x89, 0x15, 0x83, 0xc7, 0x02, 0x89, 0x0d, 0x83, 0xc7, 0x02, 0x89, 0x46, 0x00, 0x45, 0xff, 0x06, 0x91, 0x56, 0x58, 0x59, 0x0a, 0xc0, 0x75, 0x10, 0xa5, 0xa5, 0x8a, 0x16, 0x18, 0x57, 0x88, 0x56, 0x00, 0x45, 0xff, 0x06, 0x91, 0x56, 0xeb, 0x03, 0x83, 0xc6, 0x04, 0x8b, 0x06, 0x14, 0x57, 0x89, 0x06, 0x08, 0x57, 0x8b, 0x06, 0x10, 0x57, 0x89, 0x06, 0x04, 0x57, 0x8a, 0x06, 0x18, 0x57, 0x88, 0x06, 0x0c, 0x57, 0x49, 0x74, 0x03, 0xe9, 0x4b, 0xff, 0x8b, 0x06, 0x9b, 0x56, 0x8b, 0x0e, 0xa6, 0x56, 0x89, 0x06, 0xa6, 0x56, 0x89, 0x0e, 0x9b, 0x56, 0x8b, 0x06, 0xb0, 0x56, 0x8b, 0x0e, 0xbb, 0x56, 0x89, 0x06, 0xbb, 0x56, 0x89, 0x0e, 0xb0, 0x56, 0x8b, 0x06, 0x91, 0x56, 0x89, 0x06, 0x86, 0x56, 0x87, 0x36, 0xbf, 0x56, 0x87, 0x3e, 0xc3, 0x56, 0x87, 0x1e, 0xc7, 0x56, 0x87, 0x2e, 0xcb, 0x56, 0xc3}

const unsigned short int pp_SCANCON = 0x87e1; // SCANCON size: 164
// {0xff, 0x36, 0x10, 0x57, 0x8b, 0x06, 0x08, 0x57, 0x8b, 0x0e, 0x14, 0x57, 0x51, 0x3b, 0xc8, 0x79, 0x18, 0x89, 0x0e, 0x08, 0x57, 0x89, 0x06, 0x14, 0x57, 0x8b, 0x0e, 0x04, 0x57, 0x8b, 0x06, 0x10, 0x57, 0x89, 0x06, 0x04, 0x57, 0x89, 0x0e, 0x10, 0x57, 0xb3, 0xc3, 0x8b, 0x06, 0x10, 0x57, 0x2b, 0x06, 0x04, 0x57, 0x7d, 0x04, 0xb3, 0xcb, 0xf7, 0xd8, 0x8b, 0xc8, 0xb7, 0xc7, 0x8b, 0x06, 0x14, 0x57, 0x2b, 0x06, 0x08, 0x57, 0x8b, 0xd0, 0x3b, 0xd1, 0x7d, 0x04, 0x87, 0xca, 0x86, 0xdf, 0xbf, 0xe1, 0x87, 0x81, 0xc7, 0x87, 0x00, 0x88, 0x3d, 0x83, 0xc7, 0x03, 0x89, 0x0d, 0xd1, 0xe9, 0x83, 0xc7, 0x04, 0x89, 0x0d, 0x83, 0xc7, 0x06, 0x89, 0x15, 0x83, 0xc7, 0x03, 0x88, 0x1d, 0x8a, 0x1e, 0x04, 0x57, 0x8a, 0x3e, 0x08, 0x57, 0x33, 0xc9, 0x33, 0xc0, 0x8a, 0xc7, 0xd1, 0xe0, 0x03, 0x06, 0xe1, 0x57, 0x8b, 0xf8, 0x88, 0x1d, 0xfe, 0xc7, 0x81, 0xc1, 0x00, 0x00, 0x81, 0xf9, 0x00, 0x00, 0x7e, 0x06, 0x81, 0xe9, 0x04, 0x00, 0xfe, 0xc3, 0x4a, 0x7d, 0xdd, 0x8f, 0x06, 0x14, 0x57, 0x8f, 0x06, 0x10, 0x57, 0xc3}

const unsigned short int pp_SET6845 = 0x8c41; // SET6845 size: 18
// {0xb9, 0x0e, 0x00, 0x32, 0xe4, 0x8a, 0xc4, 0xee, 0x42, 0xac, 0xee, 0x80, 0xc4, 0x01, 0x4a, 0xe2, 0xf4, 0xc3}

const unsigned short int pp_GIBM = 0x8c5c; // GIBM size: 14
// {0x38, 0x28, 0x2d, 0x0a, 0x7f, 0x06, 0x64, 0x70, 0x02, 0x01, 0x08, 0x08, 0x00, 0x00}

const unsigned short int pp_GHERC = 0x8c74; // GHERC size: 14
// {0x35, 0x2d, 0x2e, 0x07, 0x5b, 0x02, 0x57, 0x57, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00}

const unsigned short int pp_THERC = 0x8c8c; // THERC size: 14
// {0x61, 0x50, 0x52, 0x0f, 0x19, 0x06, 0x19, 0x19, 0x02, 0x0d, 0x0b, 0x0c, 0x00, 0x00}

const unsigned short int pp__gt_HGRAPH = 0x8ca6; // >HGRAPH size: 28
// {0xba, 0xb8, 0x03, 0xb0, 0x02, 0xee, 0xb0, 0x01, 0xba, 0xbf, 0x03, 0xee, 0xba, 0xb4, 0x03, 0xbe, 0x74, 0x8c, 0xe8, 0x86, 0xff, 0xba, 0xb8, 0x03, 0xb0, 0x0a, 0xee, 0xc3}

const unsigned short int pp__gt_HTEXT = 0x8ccd; // >HTEXT size: 28
// {0xba, 0xb8, 0x03, 0xb0, 0x20, 0xee, 0xb0, 0x00, 0xba, 0xbf, 0x03, 0xee, 0xba, 0xb4, 0x03, 0xbe, 0x8c, 0x8c, 0xe8, 0x5f, 0xff, 0xba, 0xb8, 0x03, 0xb0, 0x28, 0xee, 0xc3}

const unsigned short int pp_W8CEB = 0x8ceb; // W8CEB size: 18
// {0xb8, 0x8d, 0x00, 0xcd, 0x10, 0xba, 0xce, 0x03, 0xb0, 0x01, 0xb4, 0x0f, 0xee, 0x42, 0x86, 0xc4, 0xee, 0xc3}

const unsigned short int pp__gt_TANDY = 0x8d48; // >TANDY size: 28
// {0xb0, 0x03, 0xba, 0xda, 0x03, 0xee, 0xb0, 0x10, 0xba, 0xde, 0x03, 0xee, 0xb0, 0x01, 0xba, 0xda, 0x03, 0xee, 0xb0, 0x0f, 0xba, 0xde, 0x03, 0xee, 0xbb, 0x27, 0x0a, 0xc3}

const unsigned short int pp_COPYLIN = 0x8e32; // COPYLIN size: 27
// {0xb0, 0x05, 0xb4, 0x01, 0xba, 0xce, 0x03, 0xee, 0x42, 0x86, 0xc4, 0xee, 0xf3, 0xa4, 0xb0, 0x05, 0xb4, 0x00, 0xba, 0xce, 0x03, 0xee, 0x42, 0x86, 0xc4, 0xee, 0xc3}

const unsigned short int pp_W8F3D = 0x8f3d; // W8F3D size: 68
// {0x06, 0x57, 0xb4, 0x0f, 0xba, 0xc4, 0x03, 0xb0, 0x02, 0xee, 0x42, 0x86, 0xc4, 0xee, 0xba, 0xce, 0x03, 0xb0, 0x01, 0xb4, 0x0f, 0xee, 0x42, 0x86, 0xc4, 0xee, 0xba, 0xce, 0x03, 0x8a, 0x26, 0xf2, 0x55, 0xb0, 0x00, 0xee, 0x42, 0x86, 0xc4, 0xee, 0x4a, 0xb4, 0xff, 0xb0, 0x08, 0xee, 0x42, 0x86, 0xc4, 0xee, 0x8b, 0x06, 0x48, 0x56, 0x8e, 0xc0, 0xbf, 0x00, 0x00, 0x8b, 0x0e, 0x56, 0x56, 0xf3, 0xaa, 0x5f, 0x07, 0xc3}

const unsigned short int pp_DUMMY = 0x8ff7; // DUMMY size: 1
// {0xcb}

const unsigned short int pp__co__dot_ELLIP_cc_ = 0x90d9; // {.ELLIP} size: 6
// {0x9a, 0xe5, 0x08, 0x16, 0x8c, 0xc3}

const unsigned short int pp_Draw_co_SCANELLIP_cc_ = 0x90eb; // .{SCANELLIP} size: 6
// {0x9a, 0xcb, 0x08, 0x16, 0x8c, 0xc3}

const unsigned short int pp__ro_FVLINE = 0x9125; // (FVLINE size: 6
// {0x9a, 0x20, 0x20, 0x16, 0x8c, 0xc3}

const unsigned short int pp_EGA_dash_OFF = 0x9137; // EGA-OFF size: 30
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x73, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5c, 0x20, 0x47, 0x52, 0x43, 0x4f}

const unsigned short int pp_CGA_dash_OFF = 0x9161; // CGA-OFF size: 30
// {0x9d, 0x02, 0xec, 0x02, 0x0d, 0x02, 0x36, 0x03, 0x1b, 0x04, 0xc1, 0x05, 0x35, 0x06, 0xaa, 0x06, 0x52, 0x00, 0xfe, 0x08, 0xe5, 0x08, 0xcb, 0x08, 0x89, 0x07, 0xf4, 0x00, 0x20, 0x20}

const unsigned short int pp_EGA_dash_BIT = 0x92cf; // EGA-BIT size: 8
// {0xc0, 0x00, 0x30, 0x00, 0x0c, 0x00, 0x03, 0x00}

const unsigned short int pp_CGA_dash_BIT = 0x92e3; // CGA-BIT size: 2
// {0xf0, 0x0f}

const unsigned short int pp__ro_PLOT_rc_ = 0x930b; // (PLOT) size: 83
// {0x8f, 0x06, 0x63, 0x56, 0x5a, 0x58, 0xd1, 0xe2, 0x03, 0x16, 0x3a, 0x56, 0x52, 0x50, 0x25, 0x03, 0x00, 0xd1, 0xe0, 0xbb, 0xcf, 0x92, 0x03, 0xd8, 0x8b, 0x17, 0x58, 0xd1, 0xe8, 0xd1, 0xe8, 0x5b, 0x03, 0x07, 0x8b, 0xd8, 0x06, 0x8b, 0x0e, 0x48, 0x56, 0x8e, 0xc1, 0x8b, 0xc2, 0x86, 0xc4, 0xba, 0xce, 0x03, 0xb0, 0x08, 0xee, 0x42, 0x86, 0xc4, 0xee, 0xba, 0xce, 0x03, 0x8a, 0x26, 0xf2, 0x55, 0xb0, 0x00, 0xee, 0x42, 0x86, 0xc4, 0xee, 0x26, 0x8a, 0x07, 0x26, 0x88, 0x07, 0x07, 0xff, 0x36, 0x63, 0x56, 0xc3}

const unsigned short int pp_OTABLE = 0xb5f8; // OTABLE size: 42
// {0x90, 0x60, 0x01, 0x88, 0xad, 0x01, 0x77, 0x12, 0x01, 0x96, 0xb8, 0x01, 0x55, 0xbc, 0x01, 0x7c, 0x30, 0x01, 0x72, 0x82, 0x01, 0xc0, 0xda, 0x00, 0xbf, 0x11, 0x01, 0xfb, 0x11, 0x01, 0x6e, 0xd6, 0x00, 0xdd, 0x11, 0x01, 0x41, 0xd4, 0x00, 0x55, 0xc1, 0x01}

const unsigned short int pp_COND_dash_CNT = 0xb68d; // COND-CNT size: 2
// {0x0d, 0x00}

const unsigned short int pp_BTADDR = 0xbb98; // BTADDR size: 2
// {0xb1, 0xbc}

const unsigned short int pp_HUFF_BT_POINTER = 0xbb9c; // HUFF_BT_POINTER size: 2
// {0x3a, 0x20}

const unsigned short int pp_HUFF_ACTIVE_POINTER_BYTE = 0xbba0; // HUFF_ACTIVE_POINTER_BYTE size: 2
// {0x3a, 0x20}

const unsigned short int pp_WBBA4 = 0xbba4; // WBBA4 size: 2
// {0x3a, 0x20}

const unsigned short int pp_HUFF_ACTIVE_POINTER_BIT = 0xbba8; // HUFF_ACTIVE_POINTER_BIT size: 2
// {0x3a, 0x20}

const unsigned short int pp_HEALTI = 0xbfaf; // HEALTI size: 2
// {0x20, 0x45}

const unsigned short int pp_LASTAP = 0xbfbc; // LASTAP size: 4
// {0x49, 0x4e, 0x54, 0x20}

const unsigned short int pp_ROSTER = 0xbfcb; // ROSTER size: 18
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}

const unsigned short int pp_IsFANLYZ = 0xc7bd; // ?FANLYZ size: 2
// {0x00, 0x00}

const unsigned short int pp_IsCALLING = 0xc96d; // ?CALLING size: 2
// {0x01, 0x00}


const unsigned short int cc_BL = 0x099a; // BL
const unsigned short int cc_C_slash_L = 0x09a4; // C/L
const unsigned short int cc_INIT_dash_FORTH = 0x09b5; // INIT-FORTH
const unsigned short int cc_INIT_dash_USER = 0x09c5; // INIT-USER
const unsigned short int cc_INITIAL_dash_DPB = 0x09d6; // INITIAL-DPB
const unsigned short int cc_LIMIT = 0x09e2; // LIMIT
const unsigned short int cc_MS_slash_TICK = 0x2a72; // MS/TICK
const unsigned short int cc_TICKS_slash_ADJ = 0x2a82; // TICKS/ADJ
const unsigned short int cc_MS_slash_ADJ = 0x2a8f; // MS/ADJ
const unsigned short int cc__n_DRIVES = 0x2b21; // #DRIVES
const unsigned short int cc__n_FCBS = 0x2b2d; // #FCBS
const unsigned short int cc__n_FILES = 0x2b3a; // #FILES
const unsigned short int cc__n_SEC_slash_TRK = 0x2b49; // #SEC/TRK
const unsigned short int cc_DOS_dash_FILE = 0x2b58; // DOS-FILE
const unsigned short int cc_RETRIES = 0x2b66; // RETRIES
const unsigned short int cc_SECORIGIN = 0x2b76; // SECORIGIN
const unsigned short int cc_PSW = 0x3991; // PSW
const unsigned short int cc_AX = 0x399a; // AX
const unsigned short int cc_BX = 0x39a3; // BX
const unsigned short int cc_CX = 0x39ac; // CX
const unsigned short int cc_DX = 0x39b5; // DX
const unsigned short int cc_BP = 0x39be; // BP
const unsigned short int cc_DI = 0x39c7; // DI
const unsigned short int cc_SI = 0x39d0; // SI
const unsigned short int cc_DS = 0x39d9; // DS
const unsigned short int cc_ES = 0x39e2; // ES
const unsigned short int cc__3 = 0x3b75; // 3
const unsigned short int cc__4 = 0x3b7d; // 4
const unsigned short int cc__5 = 0x3b85; // 5
const unsigned short int cc__6 = 0x3b8d; // 6
const unsigned short int cc__7 = 0x3b95; // 7
const unsigned short int cc__8 = 0x3b9d; // 8
const unsigned short int cc__9 = 0x3ba5; // 9
const unsigned short int cc__dash_1 = 0x3bae; // -1
const unsigned short int cc__dash_2 = 0x3bb7; // -2
const unsigned short int cc__ro_C_c__rc_ = 0x3e2e; // (C:)
const unsigned short int cc_IHEADLEN = 0x4ffb; // IHEADLEN
const unsigned short int cc_END_dash_CX = 0x4fff; // END-CX
const unsigned short int cc_END_dash_V = 0x5003; // END-V
const unsigned short int cc_EM = 0x5007; // EM
const unsigned short int cc__star_MAPSCALE = 0x5015; // *MAPSCALE
const unsigned short int cc_SIGBLK = 0x5022; // SIGBLK
const unsigned short int cc_ALOVSA = 0x502f; // ALOVSA
const unsigned short int cc_AHIVSA = 0x503c; // AHIVSA
const unsigned short int cc_BLOVSA = 0x5049; // BLOVSA
const unsigned short int cc_BHIVSA = 0x5056; // BHIVSA
const unsigned short int cc__i_OVBACK = 0x5064; // 'OVBACK
const unsigned short int cc_MUSSEG = 0x5071; // MUSSEG
const unsigned short int cc__n_REMOTE = 0x507f; // #REMOTE
const unsigned short int cc__n_HRS = 0x508a; // #HRS
const unsigned short int cc_IsFIRED_dash_ = 0x5098; // ?FIRED-
const unsigned short int cc_IsA_dash_SHIE = 0x50a6; // ?A-SHIE
const unsigned short int cc_IsA_dash_WEAP = 0x50b4; // ?A-WEAP
const unsigned short int cc_DBUF_dash_SIZE = 0x50c2; // DBUF-SIZE
const unsigned short int cc_NULL_dash_ICON = 0x50d0; // NULL-ICON
const unsigned short int cc_SYS_dash_ICO = 0x50de; // SYS-ICO
const unsigned short int cc_INVIS_dash_I = 0x50ec; // INVIS-I
const unsigned short int cc_FLUX_dash_IC = 0x50fa; // FLUX-IC
const unsigned short int cc_DEAD_dash_IC = 0x5108; // DEAD-IC
const unsigned short int cc_DEFAULT = 0x5116; // DEFAULT
const unsigned short int cc_TEXTC_slash_L = 0x5124; // TEXTC/L
const unsigned short int cc_ILIMIT = 0x5128; // ILIMIT
const unsigned short int cc_FUEL_slash_SE = 0x5136; // FUEL/SE
const unsigned short int cc_POLYSEG = 0x5144; // POLYSEG
const unsigned short int cc__i_ANSYS = 0x5151; // 'ANSYS
const unsigned short int cc_MPS = 0x5245; // MPS
const unsigned short int cc__16K = 0x528a; // 16K
const unsigned short int cc_W52CD = 0x52cd; // W52CD
const unsigned short int cc_W52D1 = 0x52d1; // W52D1
const unsigned short int cc__7CHAR = 0x52d5; // 7CHAR
const unsigned short int cc__7SPACING = 0x52d9; // 7SPACING
const unsigned short int cc__9CHAR = 0x52dd; // 9CHAR
const unsigned short int cc_WAF5B = 0xaf5b; // WAF5B
const unsigned short int cc_TRUE = 0xb698; // TRUE
const unsigned short int cc_FALSE = 0xb6a4; // FALSE
const unsigned short int cc_UNKNOWN = 0xb6b2; // UNKNOWN
const unsigned short int cc_RULELIM = 0xb6c0; // RULELIM
const unsigned short int cc_CONDLIM = 0xb6ce; // CONDLIM
const unsigned short int cc_RULECNT = 0xb6dc; // RULECNT
const unsigned short int cc_RULEARR = 0xb6ea; // RULEARR
const unsigned short int cc_CONDARR = 0xb6f8; // CONDARR
const unsigned short int cc_CFLGARR = 0xb706; // CFLGARR
const unsigned short int cc_HUFF_PHRASE_ADDCHAR = 0xbbac; // HUFF_PHRASE_ADDCHAR
const unsigned short int cc_HUFF_PHRASE_INIT = 0xbbb0; // HUFF_PHRASE_INIT
const unsigned short int cc_HUFF_PHRASE_FINISH = 0xbbb4; // HUFF_PHRASE_FINISH

const unsigned short int user_SP0 = 0x078c; // SP0
const unsigned short int user_R0 = 0x078e; // R0
const unsigned short int user_DP = 0x0790; // DP
const unsigned short int user_FENCE = 0x0792; // FENCE
const unsigned short int user__ro_INTO_rc_ = 0x0794; // (INTO)
const unsigned short int user_MSGFLAGS = 0x0796; // MSGFLAGS
const unsigned short int user_VOC_dash_LINK = 0x0798; // VOC-LINK
const unsigned short int user_USERSIZE = 0x079a; // USERSIZE
const unsigned short int user_USERNEXT = 0x079c; // USERNEXT
const unsigned short int user__gt_IN = 0x079e; // >IN
const unsigned short int user_TIB = 0x07a0; // TIB
const unsigned short int user_VIDEOPORT = 0x07a2; // VIDEOPORT
const unsigned short int user_VIDEOMEM = 0x07a4; // VIDEOMEM
const unsigned short int user_CURSORLOC = 0x07a6; // CURSORLOC
const unsigned short int user_ROW = 0x07a6; // ROW
const unsigned short int user_COL = 0x07a7; // COL
const unsigned short int user_ROWMIN = 0x07a8; // ROWMIN
const unsigned short int user_COLMIN = 0x07a9; // COLMIN
const unsigned short int user_ROWMAX = 0x07aa; // ROWMAX
const unsigned short int user_COLMAX = 0x07ab; // COLMAX
const unsigned short int user_ATTRIBUTE = 0x07ac; // ATTRIBUTE
const unsigned short int user_DOFFSET = 0x07ae; // DOFFSET
const unsigned short int user_SERIALPORT = 0x07b2; // SERIALPORT
const unsigned short int user_PARALLELPORT = 0x07b4; // PARALLELPORT
const unsigned short int user_BASE = 0x07b6; // BASE
const unsigned short int user_BLK = 0x07b8; // BLK
const unsigned short int user_DPL = 0x07ba; // DPL
const unsigned short int user_FLD = 0x07bc; // FLD
const unsigned short int user_HLD = 0x07be; // HLD
const unsigned short int user_R_n_ = 0x07c0; // R#
const unsigned short int user_SCR = 0x07c2; // SCR
const unsigned short int user_SSCR = 0x07c4; // SSCR
const unsigned short int user_STATE = 0x07c6; // STATE
const unsigned short int user_CONTEXT = 0x07c8; // CONTEXT
const unsigned short int user_CSP = 0x07ca; // CSP
const unsigned short int user_CURRENT = 0x07cc; // CURRENT
const unsigned short int user_LFALEN = 0x07ce; // LFALEN
const unsigned short int user_LOWERCASE = 0x07d0; // LOWERCASE
const unsigned short int user_SEARCHORDER = 0x07d2; // SEARCHORDER
const unsigned short int user_WIDTH = 0x07d4; // WIDTH

// 0x0100: cli    
// 0x0101: mov    ax,cs
// 0x0103: mov    ss,ax
// 0x0105: mov    es,ax
// 0x0107: mov    ds,ax
// 0x0109: mov    si,0129
// 0x010c: mov    di,[si+02]
// 0x010f: inc    di
// 0x0110: inc    di
// 0x0111: mov    bx,0705
// 0x0114: mov    bx,[bx]
// 0x0116: add    bx,0100
// 0x011a: mov    sp,bx
// 0x011c: add    bx,0080
// 0x0120: mov    bp,bx
// 0x0122: sti    
// 0x0123: cld    
// 0x0124: lodsw
// 0x0125: mov    bx,ax
// 0x0127: jmp    word ptr [bx]
// 0x0129: db 0x37 0x09 0x8a 0x07 '7   '

// ================================================
// 0x012d: WORD '(!SET)' codep=0x0138 wordp=0x0138 params=3 returns=0
// ================================================
// 0x0138: mov    dx,ds
// 0x013a: mov    ax,0000
// 0x013d: mov    ds,ax
// 0x013f: pop    bx
// 0x0140: add    bx,bx
// 0x0142: add    bx,bx
// 0x0144: cli    
// 0x0145: pop    ax
// 0x0146: mov    [bx],ax
// 0x0148: inc    bx
// 0x0149: inc    bx
// 0x014a: pop    ax
// 0x014b: mov    [bx],ax
// 0x014d: sti    
// 0x014e: mov    ds,dx
// 0x0150: lodsw
// 0x0151: mov    bx,ax
// 0x0153: jmp    word ptr [bx]

// ================================================
// 0x0155: WORD '(!OLD)' codep=0x0160 wordp=0x0160 params=1 returns=2
// ================================================
// 0x0160: mov    dx,ds
// 0x0162: mov    ax,0000
// 0x0165: mov    ds,ax
// 0x0167: pop    bx
// 0x0168: add    bx,bx
// 0x016a: add    bx,bx
// 0x016c: cli    
// 0x016d: mov    ax,[bx]
// 0x016f: inc    bx
// 0x0170: inc    bx
// 0x0171: mov    bx,[bx]
// 0x0173: sti    
// 0x0174: push   bx
// 0x0175: push   ax
// 0x0176: mov    ds,dx
// 0x0178: lodsw
// 0x0179: mov    bx,ax
// 0x017b: jmp    word ptr [bx]

// ================================================
// 0x017d: WORD '(TIME)' codep=0x1d29 wordp=0x0188
// ================================================
// 0x0188: db 0x00 0x00 0xbb 0xfc 0x01 0x00 0x2e 0x81 0x06 0x8a 0x01 0x37 0x00 0x2e 0x83 0x16 0x88 0x01 0x00 0x2e 0xc7 0x06 0x93 0x01 0x37 0x00 0x2e 0xff 0x0e 0x8c 0x01 0x75 0x0e 0x2e 0xc7 0x06 0x8c 0x01 0x0f 0x00 0x2e 0xc7 0x06 0x93 0x01 0x36 0x00 0xcf 0x00 0x00 0x00 0x00 0x53 0xff 0x00 0xf0 0xe8 0x4e 0x85 0x01 0x58 0x40 0x50 0x29 0xc0 0x29 0xd2 0xcf '      .    7 .     .    7 .    u .      .    6      S    N  X@P) )  '
// 0x01cc: xor    bx,bx
// 0x01ce: div    bx
// 0x01d0: ret    

// 0x01d1: pop    ax
// 0x01d2: mov    cx,ax
// 0x01d4: sub    ax,01D0
// 0x01d8: jnz    01E0
// 0x01da: mov    ax,01C7
// 0x01dd: jmp    01E4
// 0x01e0: mov    ax,01C4
// 0x01e3: inc    cx
// 0x01e4: mov    dx,ds
// 0x01e6: xor    bx,bx
// 0x01e8: mov    ds,bx
// 0x01ea: mov    [bx],ax
// 0x01ec: mov    ds,dx
// 0x01ee: push   cx
// 0x01ef: iret   

// ================================================
// 0x01f0: WORD 'SET0/' codep=0x01fa wordp=0x01fa
// ================================================
// 0x01fa: mov    ax,ds
// 0x01fc: xor    bx,bx
// 0x01fe: mov    ds,bx
// 0x0200: mov    word ptr [bx],01D1
// 0x0204: add    bx,0002
// 0x0208: mov    [bx],ax
// 0x020a: mov    ds,ax
// 0x020c: call   01CC
// 0x020f: lodsw
// 0x0210: mov    bx,ax
// 0x0212: jmp    word ptr [bx]

// ================================================
// 0x0214: WORD '(RESTORE)' codep=0x224c wordp=0x0222 params=0 returns=0
// ================================================

void _ro_RESTORE_rc_() // (RESTORE)
{
  Push(0x01b8);
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(0x01b8);
  _2_at_(); // 2@
  Push(0x001b);
  _ro__ex_SET_rc_(); // (!SET)
  Push(0x01bc);
  _2_at_(); // 2@
  Push(0x001c);
  _ro__ex_SET_rc_(); // (!SET)
  Push(0x01c0);
  _2_at_(); // 2@
  Push(0);
  _ro__ex_SET_rc_(); // (!SET)
  Push(0);
  Push(0);
  Push(0x01b8);
  _2_ex__2(); // 2!_2
  Push(Read16(pp__i_RESTORE_plus_)); // 'RESTORE+ @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  EXECUTE(); // EXECUTE
}


// ================================================
// 0x026a: WORD 'AUTO-CACHE' codep=0x224c wordp=0x0279 params=0 returns=0
// ================================================

void AUTO_dash_CACHE() // AUTO-CACHE
{
  Push(Read16(pp__n_CACHE)); // #CACHE @
  if (Pop() == 0) return;
  Push(Read16(pp_SYSK) * 0x0040); // SYSK @ 0x0040 *
  Push(Read16(cc_LIMIT)); // LIMIT
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Pop() + 1); //  1+
  Push(Read16(regsp)); // DUP
  Push(pp_BLKCACHE); // BLKCACHE
  Store(); // !
  _dash_(); // -
  Push(0);
  Push(0x0042);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  Push(Read16(pp__n_CACHE)); // #CACHE @
  UMIN(); // UMIN
  Push(pp__n_CACHE); // #CACHE
  Store(); // !
  INITCACHE(); // INITCACHE
}


// ================================================
// 0x02b3: WORD 'AUTO-LIMIT' codep=0x224c wordp=0x02c2 params=0 returns=0
// ================================================

void AUTO_dash_LIMIT() // AUTO-LIMIT
{
  Push(Read16(cc_LIMIT)); // LIMIT
  Push(-2);
  NOP(); // NOP
  OVER(); // OVER
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    UMIN(); // UMIN
  }
  Push(0x09e2); // 'LIMIT'
  Store(); // !
  Push(Pop() - Read16(cc_LIMIT)); //  LIMIT -
  if (Pop() == 0) return;
  CHANGE(); // CHANGE
}


// ================================================
// 0x02e6: WORD 'AUTO-SCREEN' codep=0x224c wordp=0x02f6 params=0 returns=0
// ================================================

void AUTO_dash_SCREEN() // AUTO-SCREEN
{
  Push(0x0f00);
  Push(Read16(cc_AX)); // AX
  Store(); // !
  Push(0x0010);
  INTERRUPT(); // INTERRUPT
  Push((Read16(Read16(cc_AX))&0xFF)==7?1:0); // AX C@ 7 =
  if (Pop() != 0)
  {
    Push(0x03b4);
    Push(0xb000);
  } else
  {
    Push(0x03d4);
    Push(0xb800);
  }
  Push(user_VIDEOMEM); // VIDEOMEM
  Store(); // !
  Push(user_VIDEOPORT); // VIDEOPORT
  Store(); // !
}


// ================================================
// 0x0330: WORD 'COLD' codep=0x224c wordp=0x0339 params=0 returns=0
// ================================================

void COLD() // COLD
{
  EMPTY(); // EMPTY
  Exec("CR"); // call of word 0x26ee '(CR)'
  W0939(); // W0939
}


// ================================================
// 0x0341: WORD 'W0343' codep=0x224c wordp=0x0343 params=0 returns=0
// ================================================

void W0343() // W0343
{
  PRINT("FORTHOUGHT (P) (C) Copyright ", 29); // (.")
  PRINT("Fantasia Systems Inc. 1982,1983,1984", 36); // (.")
  Exec("CR"); // call of word 0x26ee '(CR)'
  PRINT("Version 2.52 for Binary Systems for the IBM PC", 46); // (.")
  Exec("CR"); // call of word 0x26ee '(CR)'
}


// ================================================
// 0x03c1: WORD 'W03C3' codep=0x224c wordp=0x03c3 params=0 returns=0
// ================================================

void W03C3() // W03C3
{
  PRINT(" ok", 3); // (.")
}


// ================================================
// 0x03cb: WORD 'SET-BUFFERS' codep=0x224c wordp=0x03db params=0 returns=0
// ================================================

void SET_dash_BUFFERS() // SET-BUFFERS
{
  Push(Read16(cc_LIMIT) - 0x0820); // LIMIT 0x0820 -
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Read16(regsp)); // DUP
  Push(pp_USE); // USE
  Store(); // !
  Push(Read16(regsp)); // DUP
  Push(pp_BUFFER_dash_BEGIN); // BUFFER-BEGIN
  Store(); // !
  Push(Pop() + 0x0041); //  0x0041 +
  Push(Read16(regsp)); // DUP
  Push(pp_LPREV); // LPREV
  Store(); // !
  Push(pp_PREV); // PREV
  Store(); // !
  MTBUFFERS(); // MTBUFFERS
}


// ================================================
// 0x0405: WORD 'SP0' codep=0x1792 wordp=0x040d
// ================================================
// 0x040d: db 0x00 0x00 '  '

// ================================================
// 0x040f: WORD 'R0' codep=0x1792 wordp=0x0416
// ================================================
// 0x0416: db 0x02 0x00 '  '

// ================================================
// 0x0418: WORD 'DP' codep=0x1792 wordp=0x041f
// ================================================
// 0x041f: db 0x04 0x00 '  '

// ================================================
// 0x0421: WORD 'FENCE' codep=0x1792 wordp=0x042b
// ================================================
// 0x042b: db 0x06 0x00 '  '

// ================================================
// 0x042d: WORD '(INTO)' codep=0x1792 wordp=0x0438
// ================================================
// 0x0438: db 0x08 0x00 '  '

// ================================================
// 0x043a: WORD 'MSGFLAGS' codep=0x1792 wordp=0x0447
// ================================================
// 0x0447: db 0x0a 0x00 '  '

// ================================================
// 0x0449: WORD 'VOC-LINK' codep=0x1792 wordp=0x0456
// ================================================
// 0x0456: db 0x0c 0x00 '  '

// ================================================
// 0x0458: WORD 'USERSIZE' codep=0x1792 wordp=0x0465
// ================================================
// 0x0465: db 0x0e 0x00 '  '

// ================================================
// 0x0467: WORD 'USERNEXT' codep=0x1792 wordp=0x0474
// ================================================
// 0x0474: db 0x10 0x00 '  '

// ================================================
// 0x0476: WORD '>IN' codep=0x1792 wordp=0x047e
// ================================================
// 0x047e: db 0x12 0x00 '  '

// ================================================
// 0x0480: WORD 'TIB' codep=0x1792 wordp=0x0488
// ================================================
// 0x0488: db 0x14 0x00 '  '

// ================================================
// 0x048a: WORD 'VIDEOPORT' codep=0x1792 wordp=0x0498
// ================================================
// 0x0498: db 0x16 0x00 '  '

// ================================================
// 0x049a: WORD 'VIDEOMEM' codep=0x1792 wordp=0x04a7
// ================================================
// 0x04a7: db 0x18 0x00 '  '

// ================================================
// 0x04a9: WORD 'CURSORLOC' codep=0x1792 wordp=0x04b7
// ================================================
// 0x04b7: db 0x1a 0x00 '  '

// ================================================
// 0x04b9: WORD 'ROW' codep=0x1792 wordp=0x04c1
// ================================================
// 0x04c1: db 0x1a 0x00 '  '

// ================================================
// 0x04c3: WORD 'COL' codep=0x1792 wordp=0x04cb
// ================================================
// 0x04cb: db 0x1b 0x00 '  '

// ================================================
// 0x04cd: WORD 'ROWMIN' codep=0x1792 wordp=0x04d8
// ================================================
// 0x04d8: db 0x1c 0x00 '  '

// ================================================
// 0x04da: WORD 'COLMIN' codep=0x1792 wordp=0x04e5
// ================================================
// 0x04e5: db 0x1d 0x00 '  '

// ================================================
// 0x04e7: WORD 'ROWMAX' codep=0x1792 wordp=0x04f2
// ================================================
// 0x04f2: db 0x1e 0x00 '  '

// ================================================
// 0x04f4: WORD 'COLMAX' codep=0x1792 wordp=0x04ff
// ================================================
// 0x04ff: db 0x1f 0x00 '  '

// ================================================
// 0x0501: WORD 'ATTRIBUTE' codep=0x1792 wordp=0x050f
// ================================================
// 0x050f: db 0x20 0x00 '  '

// ================================================
// 0x0511: WORD 'DOFFSET' codep=0x1792 wordp=0x051d
// ================================================
// 0x051d: db 0x22 0x00 '" '

// ================================================
// 0x051f: WORD 'SERIALPORT' codep=0x1792 wordp=0x052e
// ================================================
// 0x052e: db 0x26 0x00 '& '

// ================================================
// 0x0530: WORD 'PARALLELPORT' codep=0x1792 wordp=0x0541
// ================================================
// 0x0541: db 0x28 0x00 '( '

// ================================================
// 0x0543: WORD 'BASE' codep=0x1792 wordp=0x054c
// ================================================
// 0x054c: db 0x2a 0x00 '* '

// ================================================
// 0x054e: WORD 'BLK' codep=0x1792 wordp=0x0556
// ================================================
// 0x0556: db 0x2c 0x00 ', '

// ================================================
// 0x0558: WORD 'DPL' codep=0x1792 wordp=0x0560
// ================================================
// 0x0560: db 0x2e 0x00 '. '

// ================================================
// 0x0562: WORD 'FLD' codep=0x1792 wordp=0x056a
// ================================================
// 0x056a: db 0x30 0x00 '0 '

// ================================================
// 0x056c: WORD 'HLD' codep=0x1792 wordp=0x0574
// ================================================
// 0x0574: db 0x32 0x00 '2 '

// ================================================
// 0x0576: WORD 'R#' codep=0x1792 wordp=0x057d
// ================================================
// 0x057d: db 0x34 0x00 '4 '

// ================================================
// 0x057f: WORD 'SCR' codep=0x1792 wordp=0x0587
// ================================================
// 0x0587: db 0x36 0x00 '6 '

// ================================================
// 0x0589: WORD 'SSCR' codep=0x1792 wordp=0x0592
// ================================================
// 0x0592: db 0x38 0x00 '8 '

// ================================================
// 0x0594: WORD 'STATE' codep=0x1792 wordp=0x059e
// ================================================
// 0x059e: db 0x3a 0x00 ': '

// ================================================
// 0x05a0: WORD 'CONTEXT' codep=0x1792 wordp=0x05ac
// ================================================
// 0x05ac: db 0x3c 0x00 '< '

// ================================================
// 0x05ae: WORD 'CSP' codep=0x1792 wordp=0x05b6
// ================================================
// 0x05b6: db 0x3e 0x00 '> '

// ================================================
// 0x05b8: WORD 'CURRENT' codep=0x1792 wordp=0x05c4
// ================================================
// 0x05c4: db 0x40 0x00 '@ '

// ================================================
// 0x05c6: WORD 'LFALEN' codep=0x1792 wordp=0x05d1
// ================================================
// 0x05d1: db 0x42 0x00 'B '

// ================================================
// 0x05d3: WORD 'LOWERCASE' codep=0x1792 wordp=0x05e1
// ================================================
// 0x05e1: db 0x44 0x00 'D '

// ================================================
// 0x05e3: WORD 'SEARCHORDER' codep=0x1792 wordp=0x05f3
// ================================================
// 0x05f3: db 0x46 0x00 'F '

// ================================================
// 0x05f5: WORD 'WIDTH' codep=0x1792 wordp=0x05ff
// ================================================
// 0x05ff: db 0x48 0x00 'H '

// ================================================
// 0x0601: WORD '-FIND' codep=0x17b7 wordp=0x060b
// ================================================
// 0x060b: dw 0x004a

// ================================================
// 0x060d: WORD '?TERMINAL' codep=0x17b7 wordp=0x061b
// ================================================
// 0x061b: dw 0x004c

// ================================================
// 0x061d: WORD 'ABORT' codep=0x17b7 wordp=0x0627
// ================================================
// 0x0627: dw 0x004e

// ================================================
// 0x0629: WORD 'BELL' codep=0x17b7 wordp=0x0632
// ================================================
// 0x0632: dw 0x0050

// ================================================
// 0x0634: WORD 'BS' codep=0x17b7 wordp=0x063b
// ================================================
// 0x063b: dw 0x0052

// ================================================
// 0x063d: WORD 'CR' codep=0x17b7 wordp=0x0644
// ================================================
// 0x0644: dw 0x0054

// ================================================
// 0x0646: WORD 'CREATE' codep=0x17b7 wordp=0x0651
// ================================================
// 0x0651: dw 0x0056

// ================================================
// 0x0653: WORD 'DISKERROR?' codep=0x17b7 wordp=0x0662
// ================================================
// 0x0662: dw 0x0058

// ================================================
// 0x0664: WORD 'EMIT' codep=0x17b7 wordp=0x066d
// ================================================
// 0x066d: dw 0x005a

// ================================================
// 0x066f: WORD 'EXPECT' codep=0x17b7 wordp=0x067a
// ================================================
// 0x067a: dw 0x005c

// ================================================
// 0x067c: WORD 'INTERPRET' codep=0x17b7 wordp=0x068a
// ================================================
// 0x068a: dw 0x005e

// ================================================
// 0x068c: WORD 'LINKS>' codep=0x17b7 wordp=0x0697
// ================================================
// 0x0697: dw 0x0060

// ================================================
// 0x0699: WORD 'LOAD_2' codep=0x17b7 wordp=0x06a2
// ================================================
// 0x06a2: dw 0x0062

// ================================================
// 0x06a4: WORD 'KEY_1' codep=0x17b7 wordp=0x06ac
// ================================================
// 0x06ac: dw 0x0064

// ================================================
// 0x06ae: WORD 'NUMBER' codep=0x17b7 wordp=0x06b9
// ================================================
// 0x06b9: dw 0x0066

// ================================================
// 0x06bb: WORD 'PAGE' codep=0x17b7 wordp=0x06c4
// ================================================
// 0x06c4: dw 0x0068

// ================================================
// 0x06c6: WORD 'POSITION' codep=0x17b7 wordp=0x06d3
// ================================================
// 0x06d3: dw 0x006a

// ================================================
// 0x06d5: WORD 'R/W' codep=0x17b7 wordp=0x06dd
// ================================================
// 0x06dd: dw 0x006c

// ================================================
// 0x06df: WORD 'TYPE' codep=0x17b7 wordp=0x06e8
// ================================================
// 0x06e8: dw 0x006e

// ================================================
// 0x06ea: WORD 'WHERE' codep=0x17b7 wordp=0x06f4
// ================================================
// 0x06f4: dw 0x0070

// ================================================
// 0x06f6: WORD 'WORD' codep=0x17b7 wordp=0x06ff
// ================================================
// 0x06ff: dw 0x0072
// 0x0701: db 0xf4 0xf6 0xd0 0xf7 0xa7 0xd4 0xe6 0x39 0x00 0x00 0x31 0x00 0x28 0xd4 0x84 0x00 0x74 0x00 0x00 0x00 0xf4 0xf6 0xb4 0x03 0x00 0xb0 0x18 0x00 0x00 0x00 0x18 0x4f 0x00 0x07 0xff 0xff 0xff 0xff 0xf8 0x03 0xbc 0x03 0x0a 0x00 0x00 0x00 0xff 0xff 0x00 0x00 0xe7 0xd4 0x00 0x00 0x00 0x00 0x03 0x00 0x00 0x00 0x1a 0x08 0xe6 0xf6 0x1a 0x08 0x02 0x00 0x00 0x00 0x00 0x00 0x1f 0x00 0xe1 0x17 0xbc 0x25 0x45 0x1c 0x6b 0x26 0xcf 0x26 0xee 0x26 0xbb 0x1c 0x48 0x36 0x31 0x27 0x3e 0x1d 0xd8 0x1d 0x5c 0x1a 0x23 0x1e 0xd7 0x25 0xd1 0x13 0x4c 0x27 0x67 0x27 0xd7 0x36 0x90 0x26 0x68 0x1e 0x06 0x1f 0x80 0xd4 0x0f 0xd4 0x80 0xd4 0x49 0xd4 0x6d 0xd4 '       9  1 (   t              O                                             %E k& & &  H61'>   \ #  %  L'g' 6 &h         I m '

// ================================================
// 0x077f: WORD 'OPERATOR' codep=0x1d29 wordp=0x078c
// ================================================
// 0x078c: db 0xf4 0xf6 0xd0 0xf7 0xa7 0xd4 0xe6 0x39 0x00 0x00 0x31 0x00 0x28 0xd4 0x84 0x00 0x74 0x00 0x0b 0x00 0xf4 0xf6 0xb4 0x03 0x00 0xb0 0x18 0x00 0x00 0x00 0x18 0x4f 0x00 0x07 0xff 0xff 0xff 0xff 0xf8 0x03 0xbc 0x03 0x0a 0x00 0x00 0x00 0xff 0xff 0x00 0x00 0xe7 0xd4 0x00 0x00 0x00 0x00 0x03 0x00 0x00 0x00 0x1a 0x08 0xe6 0xf6 0x1a 0x08 0x02 0x00 0x00 0x00 0x00 0x00 0x1f 0x00 0xe1 0x17 0xbc 0x25 0x45 0x1c 0x6b 0x26 0xcf 0x26 0xee 0x26 0xbb 0x1c 0x48 0x36 0x31 0x27 0x3e 0x1d 0xd8 0x1d 0x5c 0x1a 0x23 0x1e 0xd7 0x25 0xd1 0x13 0x4c 0x27 0x67 0x27 0xd7 0x36 0x90 0x26 0x68 0x1e 0x06 0x1f 0xa9 0x0f 0x75 0x95 0xb1 0x24 0xa9 0x7b 0x07 0xc0 0xab 0xbc 0xb1 0xad 0xb4 0x20 '       9  1 (   t              O                                             %E k& & &  H61'>   \ #  %  L'g' 6 &h     u  $ {        '

// ================================================
// 0x0810: WORD 'FORTH' codep=0x1ab5 wordp=0x081a
// ================================================
// 0x081a: db 0x00 0x00 0x00 0x00 0x80 0xd4 0x0f 0xd4 0x80 0xd4 0x49 0xd4 0x6d 0xd4 '          I m '

// ================================================
// 0x0828: WORD 'FREEZE' codep=0x224c wordp=0x0833 params=0 returns=0
// ================================================

void FREEZE() // FREEZE
{
  Push(pp_OPERATOR); // OPERATOR
  Push(0x0701);
  Push(0x0074);
  CMOVE_2(); // CMOVE_2
  Push(0x081a); // 'FORTH'
  Push(Pop() + 4); //  4 +
  Push(0x0775);
  Push(0x000a);
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0x0855: WORD 'BYE_2' codep=0x224c wordp=0x085d params=0 returns=0
// ================================================

void BYE_2() // BYE_2
{
  FREEZE(); // FREEZE
  _ro_RESTORE_rc_(); // (RESTORE)
  Push(0);
  GO(); // GO
}


// ================================================
// 0x0867: WORD 'CHANGE' codep=0x224c wordp=0x0872 params=0 returns=0
// ================================================

void CHANGE() // CHANGE
{
  FREEZE(); // FREEZE
  SET_dash_BUFFERS(); // SET-BUFFERS
  Push(Read16(pp_BUFFER_dash_BEGIN)); // BUFFER-BEGIN @
  SEG_gt_ADDR(); // SEG>ADDR
  Push(Read16(regsp)); // DUP
  Push(Pop() - 0x00dc); //  0x00dc -
  Push(Read16(regsp)); // DUP
  Push(0x0701);
  Store(); // !
  Push(0x0715);
  Store(); // !
  Push(0x0703);
  Store(); // !
  Push(0x0100);
  GO(); // GO
}

// 0x08a0: db 0xfa 0xb8 0x40 0x00 0x8e 0xd8 0xbb 0x71 0x00 0xc6 0x07 0x00 0xb0 0x20 0xe6 0x20 0x8c 0xc8 0x8e 0xd0 0x8e 0xc0 0x8e 0xd8 0xb8 0x8c 0x07 0x8b 0xf8 0xb8 0x43 0x0a 0x8b 0xf0 0x8b 0x26 0x01 0x07 0x8b 0x2e 0x03 0x07 0xfc 0xfb 0xad 0x8b 0xd8 0xff 0x27 '  @    q                      C    &   .        ''

// ================================================
// 0x08d1: WORD '(SETUP)' codep=0x224c wordp=0x08dd params=0 returns=0
// ================================================

void _ro_SETUP_rc_() // (SETUP)
{
  Push(0x01b8);
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(0x001b);
  _ro__ex_OLD_rc_(); // (!OLD)
  Push(0x01b8);
  _2_ex__2(); // 2!_2
  _ro_CS_ask__rc_(); // (CS?)
  Push(0x08a0);
  Push(0x001b);
  _ro__ex_SET_rc_(); // (!SET)
  Push(0x001c);
  _ro__ex_OLD_rc_(); // (!OLD)
  Push(0x01bc);
  _2_ex__2(); // 2!_2
  _ro_CS_ask__rc_(); // (CS?)
  Push(0x018e);
  Push(0x001c);
  _ro__ex_SET_rc_(); // (!SET)
  Push(0);
  _ro__ex_OLD_rc_(); // (!OLD)
  Push(0x01c0);
  _2_ex__2(); // 2!_2
  SET0_slash_(); // SET0/
  Push(Read16(pp__i_SETUP_plus_)); // 'SETUP+ @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  EXECUTE(); // EXECUTE
}


// ================================================
// 0x0937: WORD 'W0939' codep=0x224c wordp=0x0939 params=0 returns=0
// ================================================

void W0939() // W0939
{
  _ro_SETUP_rc_(); // (SETUP)
  _ro_CS_ask__rc_(); // (CS?)
  Push(Read16(cc_DS)); // DS
  Store(); // !
  Push(0xf2d2);
  Push(Read16(cc_PSW)); // PSW
  Store(); // !
  Push(0x0701);
  Push(pp_OPERATOR); // OPERATOR
  Push(0x0074);
  CMOVE_2(); // CMOVE_2
  Push(Read16(user_DP)); // DP @
  Push(Read16(cc_INITIAL_dash_DPB)); // INITIAL-DPB
  Store(); // !
  _i_FORTH(); // 'FORTH
  Push(user_CONTEXT); // CONTEXT
  Store(); // !
  DEFINITIONS(); // DEFINITIONS
  FREEZE(); // FREEZE
  AUTO_dash_LIMIT(); // AUTO-LIMIT
  AUTO_dash_CACHE(); // AUTO-CACHE
  SP_ex_(); // SP!
  RP_ex_(); // RP!
  SET_dash_BUFFERS(); // SET-BUFFERS
  AUTO_dash_SCREEN(); // AUTO-SCREEN
  W0343(); // W0343
  Push(Read16(pp_BOOT_dash_HOOK)); // BOOT-HOOK @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    EXECUTE(); // EXECUTE
  }
  Push(Read16(pp_BOOT_dash_LOAD)); // BOOT-LOAD @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Exec("LOAD_2"); // call of word 0x1e23 '(LOAD)'
  }
  W03C3(); // W03C3
  Exec("ABORT"); // call of word 0x1c45 '(ABORT)'
}


// ================================================
// 0x0993: WORD 'BL' codep=0x2214 wordp=0x099a
// ================================================
// 0x099a: dw 0x0020

// ================================================
// 0x099c: WORD 'C/L' codep=0x2214 wordp=0x09a4
// ================================================
// 0x09a4: dw 0x0040

// ================================================
// 0x09a6: WORD 'INIT-FORTH' codep=0x2214 wordp=0x09b5
// ================================================
// 0x09b5: dw 0x0775

// ================================================
// 0x09b7: WORD 'INIT-USER' codep=0x2214 wordp=0x09c5
// ================================================
// 0x09c5: dw 0x0701

// ================================================
// 0x09c7: WORD 'INITIAL-DPB' codep=0x2214 wordp=0x09d6
// ================================================
// 0x09d6: dw 0x0705

// ================================================
// 0x09d8: WORD 'LIMIT' codep=0x2214 wordp=0x09e2
// ================================================
// 0x09e2: dw 0xfffe

// ================================================
// 0x09e4: WORD '#CACHE' codep=0x1d29 wordp=0x09ef
// ================================================
// 0x09ef: db 0xd0 0x00 '  '

// ================================================
// 0x09f1: WORD '#BUFFERS' codep=0x1d29 wordp=0x09fe
// ================================================
// 0x09fe: db 0x02 0x00 '  '

// ================================================
// 0x0a00: WORD '#SPACE' codep=0x1d29 wordp=0x0a0b
// ================================================
// 0x0a0b: db 0x00 0x01 '  '

// ================================================
// 0x0a0d: WORD ''RESTORE+' codep=0x1d29 wordp=0x0a1b
// ================================================
// 0x0a1b: db 0x9f 0xb4 '  '

// ================================================
// 0x0a1d: WORD ''SETUP+' codep=0x1d29 wordp=0x0a29
// ================================================
// 0x0a29: db 0x6f 0xb4 'o '

// ================================================
// 0x0a2b: WORD '?SOUND' codep=0x1d29 wordp=0x0a36
// ================================================
// 0x0a36: db 0x01 0x00 '  '

// ================================================
// 0x0a38: WORD '>BREAK' codep=0x1d29 wordp=0x0a43
// ================================================
// 0x0a43: db 0x2c 0x16 ', '

// ================================================
// 0x0a45: WORD 'BOOT-HOOK' codep=0x1d29 wordp=0x0a53
// ================================================
// 0x0a53: db 0x89 0xd4 '  '

// ================================================
// 0x0a55: WORD 'BOOT-LOAD' codep=0x1d29 wordp=0x0a63
// ================================================
// 0x0a63: db 0x00 0x00 '  '

// ================================================
// 0x0a65: WORD 'BUFFER-BEGIN' codep=0x1d29 wordp=0x0a76
// ================================================
// 0x0a76: db 0x6e 0x26 'n&'

// ================================================
// 0x0a78: WORD 'BUFFER-HEAD' codep=0x1d29 wordp=0x0a88
// ================================================
// 0x0a88: db 0x00 0x00 '  '

// ================================================
// 0x0a8a: WORD 'CACHE-BEGIN' codep=0x1d29 wordp=0x0a9a
// ================================================
// 0x0a9a: db 0x00 0x00 '  '

// ================================================
// 0x0a9c: WORD 'CACHE-HEAD' codep=0x1d29 wordp=0x0aab
// ================================================
// 0x0aab: db 0x00 0x00 '  '

// ================================================
// 0x0aad: WORD ''FORTH' codep=0x224c wordp=0x0ab8 params=0 returns=1
// ================================================

void _i_FORTH() // 'FORTH
{
  Push(Read16(user_USERSIZE)); // USERSIZE @
  ME(); // ME
  Push(Pop() + Pop()); // +
  Push(Pop() + Read16(user_LFALEN)); //  LFALEN @ +
  PFA(); // PFA
}


// ================================================
// 0x0aca: WORD 'ME' codep=0x0ad1 wordp=0x0ad1 params=0 returns=1
// ================================================
// 0x0ad1: push   di
// 0x0ad2: lodsw
// 0x0ad3: mov    bx,ax
// 0x0ad5: jmp    word ptr [bx]

// ================================================
// 0x0ad7: WORD 'W0AD9' codep=0x224c wordp=0x0ad9 params=1 returns=0
// ================================================

void W0AD9() // W0AD9
{
  Push(0);
  Push(Read16(pp__n_SPACE)); // #SPACE @
  Push(0);
  D_plus_(); // D+
  HERE(); // HERE
  Push(0);
  D_plus_(); // D+
  SWAP(); // SWAP
  SP_at_(); // SP@
  SWAP(); // SWAP
  U_st_(); // U<
  Push(Pop() | Pop()); // OR
  ABORT("Dictionary or stack full", 24);// (ABORT")
}


// ================================================
// 0x0b10: WORD 'W0B12' codep=0x224c wordp=0x0b12 params=0 returns=0
// ================================================
// orphan

void W0B12() // W0B12
{
  SP_at_(); // SP@
  S0(); // S0
  SWAP(); // SWAP
  U_st_(); // U<
  ABORT("Empty stack", 11);// (ABORT")
  Push(0);
  W0AD9(); // W0AD9
}


// ================================================
// 0x0b2e: WORD 'W0B30' codep=0x224c wordp=0x0b30 params=1 returns=0
// ================================================

void W0B30() // W0B30
{
  Push(Pop() & (((Read16(user_MSGFLAGS) & 8)==0?1:0)==0?1:0)); //  MSGFLAGS @ 8 AND 0= 0= AND
  ABORT("Input stream exhausted", 22);// (ABORT")
}


// ================================================
// 0x0b5b: WORD 'W0B5D' codep=0x224c wordp=0x0b5d params=1 returns=0
// ================================================

void W0B5D() // W0B5D
{
  ABORT("Not recognized", 14);// (ABORT")
}


// ================================================
// 0x0b70: WORD '?ENOUGH' codep=0x224c wordp=0x0b7c params=1 returns=0
// ================================================

void IsENOUGH() // ?ENOUGH
{
  DEPTH(); // DEPTH
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    _st_(); // <
  }
  Push(Pop()==0?1:0); //  0=
  ABORT("Not enough items on the stack", 29);// (ABORT")
}


// ================================================
// 0x0baa: WORD '@' codep=0x0bb0 wordp=0x0bb0 params=1 returns=1
// ================================================
// 0x0bb0: pop    bx
// 0x0bb1: push   word ptr [bx]
// 0x0bb3: lodsw
// 0x0bb4: mov    bx,ax
// 0x0bb6: jmp    word ptr [bx]

// ================================================
// 0x0bb8: WORD '@L' codep=0x0bbf wordp=0x0bbf params=2 returns=1
// ================================================
// 0x0bbf: pop    ax
// 0x0bc0: mov    ah,al
// 0x0bc2: sub    al,al
// 0x0bc4: add    ah,ah
// 0x0bc6: add    ah,ah
// 0x0bc8: add    ah,ah
// 0x0bca: add    ah,ah
// 0x0bcc: mov    ds,ax
// 0x0bce: pop    bx
// 0x0bcf: mov    ax,[bx]
// 0x0bd1: push   ax
// 0x0bd2: mov    ax,cs
// 0x0bd4: mov    ds,ax
// 0x0bd6: lodsw
// 0x0bd7: mov    bx,ax
// 0x0bd9: jmp    word ptr [bx]

// ================================================
// 0x0bdb: WORD '!' codep=0x0be1 wordp=0x0be1 params=2 returns=0
// ================================================
// 0x0be1: pop    bx
// 0x0be2: pop    ax
// 0x0be3: mov    [bx],ax
// 0x0be5: lodsw
// 0x0be6: mov    bx,ax
// 0x0be8: jmp    word ptr [bx]

// ================================================
// 0x0bea: WORD '!L' codep=0x0bf1 wordp=0x0bf1 params=3 returns=0
// ================================================
// 0x0bf1: pop    ax
// 0x0bf2: mov    ah,al
// 0x0bf4: sub    al,al
// 0x0bf6: add    ah,ah
// 0x0bf8: add    ah,ah
// 0x0bfa: add    ah,ah
// 0x0bfc: add    ah,ah
// 0x0bfe: mov    ds,ax
// 0x0c00: pop    bx
// 0x0c01: pop    ax
// 0x0c02: mov    [bx],ax
// 0x0c04: mov    ax,cs
// 0x0c06: mov    ds,ax
// 0x0c08: lodsw
// 0x0c09: mov    bx,ax
// 0x0c0b: jmp    word ptr [bx]

// ================================================
// 0x0c0d: WORD '(CS?)' codep=0x0c17 wordp=0x0c17 params=0 returns=1
// ================================================
// 0x0c17: push   cs
// 0x0c18: lodsw
// 0x0c19: mov    bx,ax
// 0x0c1b: jmp    word ptr [bx]

// ================================================
// 0x0c1d: WORD '2!_2' codep=0x0c24 wordp=0x0c24 params=3 returns=0
// ================================================
// 0x0c24: pop    bx
// 0x0c25: pop    ax
// 0x0c26: pop    cx
// 0x0c27: cli    
// 0x0c28: mov    [bx],ax
// 0x0c2a: mov    [bx+02],cx
// 0x0c2d: sti    
// 0x0c2e: lodsw
// 0x0c2f: mov    bx,ax
// 0x0c31: jmp    word ptr [bx]

// ================================================
// 0x0c33: WORD '2@' codep=0x0c3a wordp=0x0c3a params=1 returns=2
// ================================================
// 0x0c3a: pop    bx
// 0x0c3b: cli    
// 0x0c3c: mov    ax,[bx]
// 0x0c3e: mov    dx,[bx+02]
// 0x0c41: sti    
// 0x0c42: push   dx
// 0x0c43: push   ax
// 0x0c44: lodsw
// 0x0c45: mov    bx,ax
// 0x0c47: jmp    word ptr [bx]

// ================================================
// 0x0c49: WORD 'BLANK' codep=0x224c wordp=0x0c53 params=2 returns=0
// ================================================

void BLANK() // BLANK
{
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
}


// ================================================
// 0x0c59: WORD 'C!_2' codep=0x0c60 wordp=0x0c60 params=2 returns=0
// ================================================
// 0x0c60: pop    bx
// 0x0c61: pop    ax
// 0x0c62: mov    [bx],al
// 0x0c64: lodsw
// 0x0c65: mov    bx,ax
// 0x0c67: jmp    word ptr [bx]

// ================================================
// 0x0c69: WORD 'C!L' codep=0x0c71 wordp=0x0c71 params=3 returns=0
// ================================================
// 0x0c71: pop    ax
// 0x0c72: mov    ah,al
// 0x0c74: sub    al,al
// 0x0c76: add    ah,ah
// 0x0c78: add    ah,ah
// 0x0c7a: add    ah,ah
// 0x0c7c: add    ah,ah
// 0x0c7e: mov    ds,ax
// 0x0c80: pop    bx
// 0x0c81: pop    ax
// 0x0c82: mov    [bx],al
// 0x0c84: mov    ax,cs
// 0x0c86: mov    ds,ax
// 0x0c88: lodsw
// 0x0c89: mov    bx,ax
// 0x0c8b: jmp    word ptr [bx]

// ================================================
// 0x0c8d: WORD 'C@' codep=0x0c94 wordp=0x0c94 params=1 returns=1
// ================================================
// 0x0c94: pop    bx
// 0x0c95: sub    ax,ax
// 0x0c97: mov    al,[bx]
// 0x0c99: push   ax
// 0x0c9a: lodsw
// 0x0c9b: mov    bx,ax
// 0x0c9d: jmp    word ptr [bx]

// ================================================
// 0x0c9f: WORD 'C@L' codep=0x0ca7 wordp=0x0ca7 params=2 returns=1
// ================================================
// 0x0ca7: pop    ax
// 0x0ca8: mov    ah,al
// 0x0caa: sub    al,al
// 0x0cac: add    ah,ah
// 0x0cae: add    ah,ah
// 0x0cb0: add    ah,ah
// 0x0cb2: add    ah,ah
// 0x0cb4: mov    ds,ax
// 0x0cb6: pop    bx
// 0x0cb7: mov    al,[bx]
// 0x0cb9: sub    ah,ah
// 0x0cbb: push   ax
// 0x0cbc: mov    ax,cs
// 0x0cbe: mov    ds,ax
// 0x0cc0: lodsw
// 0x0cc1: mov    bx,ax
// 0x0cc3: jmp    word ptr [bx]

// ================================================
// 0x0cc5: WORD 'COUNT' codep=0x224c wordp=0x0ccf params=1 returns=2
// ================================================

void COUNT() // COUNT
{
  Push(Read16(regsp)); // DUP
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
  Push(Read16(Pop())&0xFF); //  C@
}


// ================================================
// 0x0cd9: WORD 'CMOVE>' codep=0x0ce4 wordp=0x0ce4 params=3 returns=0
// ================================================
// 0x0ce4: mov    ax,ds
// 0x0ce6: mov    es,ax
// 0x0ce8: mov    dx,di
// 0x0cea: mov    bx,si
// 0x0cec: pop    cx
// 0x0ced: pop    di
// 0x0cee: pop    si
// 0x0cef: or     cx,cx
// 0x0cf1: jz     0CFD
// 0x0cf3: std    
// 0x0cf4: add    di,cx
// 0x0cf6: dec    di
// 0x0cf7: add    si,cx
// 0x0cf9: dec    si
// 0x0cfa: repz   
// 0x0cfb: movsb
// 0x0cfc: cld    
// 0x0cfd: mov    di,dx
// 0x0cff: mov    si,bx
// 0x0d01: lodsw
// 0x0d02: mov    bx,ax
// 0x0d04: jmp    word ptr [bx]

// ================================================
// 0x0d06: WORD 'CMOVE_2' codep=0x0d10 wordp=0x0d10 params=3 returns=0
// ================================================
// 0x0d10: mov    ax,ds
// 0x0d12: mov    es,ax
// 0x0d14: pop    cx
// 0x0d15: mov    dx,di
// 0x0d17: pop    di
// 0x0d18: mov    bx,si
// 0x0d1a: pop    si
// 0x0d1b: clc    
// 0x0d1c: rcr    cx,1
// 0x0d1e: jae    0D21
// 0x0d20: movsb
// 0x0d21: repz   
// 0x0d22: movsw
// 0x0d23: mov    si,bx
// 0x0d25: mov    di,dx
// 0x0d27: lodsw
// 0x0d28: mov    bx,ax
// 0x0d2a: jmp    word ptr [bx]

// ================================================
// 0x0d2c: WORD 'FILL_2' codep=0x0d35 wordp=0x0d35 params=3 returns=0
// ================================================
// 0x0d35: mov    ax,ds
// 0x0d37: mov    es,ax
// 0x0d39: pop    ax
// 0x0d3a: mov    ah,al
// 0x0d3c: pop    cx
// 0x0d3d: mov    dx,di
// 0x0d3f: pop    di
// 0x0d40: clc    
// 0x0d41: rcr    cx,1
// 0x0d43: jae    0D46
// 0x0d45: stosb
// 0x0d46: repz   
// 0x0d47: stosw
// 0x0d48: mov    di,dx
// 0x0d4a: lodsw
// 0x0d4b: mov    bx,ax
// 0x0d4d: jmp    word ptr [bx]

// ================================================
// 0x0d4f: WORD 'P!' codep=0x0d56 wordp=0x0d56 params=2 returns=0
// ================================================
// 0x0d56: pop    dx
// 0x0d57: pop    ax
// 0x0d58: out    dx,al
// 0x0d59: lodsw
// 0x0d5a: mov    bx,ax
// 0x0d5c: jmp    word ptr [bx]

// ================================================
// 0x0d5e: WORD 'P@' codep=0x0d65 wordp=0x0d65 params=1 returns=1
// ================================================
// 0x0d65: sub    ax,ax
// 0x0d67: pop    dx
// 0x0d68: in     al,dx
// 0x0d69: push   ax
// 0x0d6a: lodsw
// 0x0d6b: mov    bx,ax
// 0x0d6d: jmp    word ptr [bx]

// ================================================
// 0x0d6f: WORD 'SEG>ADDR' codep=0x0d7c wordp=0x0d7c params=1 returns=1
// ================================================
// 0x0d7c: pop    ax
// 0x0d7d: mov    bx,cs
// 0x0d7f: sub    ax,bx
// 0x0d81: shl    ax,1
// 0x0d83: shl    ax,1
// 0x0d85: shl    ax,1
// 0x0d87: shl    ax,1
// 0x0d89: push   ax
// 0x0d8a: lodsw
// 0x0d8b: mov    bx,ax
// 0x0d8d: jmp    word ptr [bx]

// ================================================
// 0x0d8f: WORD 'ADDR>SEG' codep=0x0d9c wordp=0x0d9c params=1 returns=1
// ================================================
// 0x0d9c: pop    ax
// 0x0d9d: shr    ax,1
// 0x0d9f: shr    ax,1
// 0x0da1: shr    ax,1
// 0x0da3: shr    ax,1
// 0x0da5: mov    cx,ds
// 0x0da7: add    ax,cx
// 0x0da9: push   ax
// 0x0daa: lodsw
// 0x0dab: mov    bx,ax
// 0x0dad: jmp    word ptr [bx]

// ================================================
// 0x0daf: WORD '>R' codep=0x0db6 wordp=0x0db6 params=1 returns=0
// ================================================
// 0x0db6: pop    bx
// 0x0db7: dec    bp
// 0x0db8: dec    bp
// 0x0db9: mov    [bp+00],bx
// 0x0dbc: lodsw
// 0x0dbd: mov    bx,ax
// 0x0dbf: jmp    word ptr [bx]

// ================================================
// 0x0dc1: WORD '?DUP' codep=0x0dca wordp=0x0dca params=1 returns=1
// ================================================
// 0x0dca: pop    ax
// 0x0dcb: or     ax,ax
// 0x0dcd: jz     0DD0
// 0x0dcf: push   ax
// 0x0dd0: push   ax
// 0x0dd1: lodsw
// 0x0dd2: mov    bx,ax
// 0x0dd4: jmp    word ptr [bx]

// ================================================
// 0x0dd6: WORD '2DROP' codep=0x0de0 wordp=0x0de0 params=2 returns=0
// ================================================
// 0x0de0: add    sp,0004
// 0x0de4: lodsw
// 0x0de5: mov    bx,ax
// 0x0de7: jmp    word ptr [bx]

// ================================================
// 0x0de9: WORD '2DUP' codep=0x0df2 wordp=0x0df2 params=2 returns=4
// ================================================
// 0x0df2: mov    bx,sp
// 0x0df4: push   word ptr [bx+02]
// 0x0df7: push   word ptr [bx]
// 0x0df9: lodsw
// 0x0dfa: mov    bx,ax
// 0x0dfc: jmp    word ptr [bx]

// ================================================
// 0x0dfe: WORD '2SWAP' codep=0x0e08 wordp=0x0e08 params=4 returns=4
// ================================================
// 0x0e08: pop    ax
// 0x0e09: pop    bx
// 0x0e0a: pop    cx
// 0x0e0b: pop    dx
// 0x0e0c: push   bx
// 0x0e0d: push   ax
// 0x0e0e: push   dx
// 0x0e0f: push   cx
// 0x0e10: lodsw
// 0x0e11: mov    bx,ax
// 0x0e13: jmp    word ptr [bx]

// ================================================
// 0x0e15: WORD 'DEPTH' codep=0x224c wordp=0x0e1f params=0 returns=1
// ================================================

void DEPTH() // DEPTH
{
  SP_at_(); // SP@
  S0(); // S0
  SWAP(); // SWAP
  _dash_(); // -
  Push(Pop() >> 1); //  2/
}


// ================================================
// 0x0e2b: WORD 'DROP' codep=0x0e34 wordp=0x0e34 params=1 returns=0
// ================================================
// 0x0e34: inc    sp
// 0x0e35: inc    sp
// 0x0e36: lodsw
// 0x0e37: mov    bx,ax
// 0x0e39: jmp    word ptr [bx]

// ================================================
// 0x0e3b: WORD 'DUP' codep=0x0e43 wordp=0x0e43 params=1 returns=2
// ================================================
// 0x0e43: mov    bx,sp
// 0x0e45: push   word ptr [bx]
// 0x0e47: lodsw
// 0x0e48: mov    bx,ax
// 0x0e4a: jmp    word ptr [bx]

// ================================================
// 0x0e4c: WORD 'I' codep=0x0e52 wordp=0x0e52 params=0 returns=1
// ================================================
// 0x0e52: mov    ax,[bp+00]
// 0x0e55: push   ax
// 0x0e56: lodsw
// 0x0e57: mov    bx,ax
// 0x0e59: jmp    word ptr [bx]

// ================================================
// 0x0e5b: WORD 'I'' codep=0x0e62 wordp=0x0e62 params=0 returns=1
// ================================================
// 0x0e62: push   word ptr [bp+02]
// 0x0e65: lodsw
// 0x0e66: mov    bx,ax
// 0x0e68: jmp    word ptr [bx]

// ================================================
// 0x0e6a: WORD 'J' codep=0x0e70 wordp=0x0e70 params=0 returns=1
// ================================================
// 0x0e70: push   word ptr [bp+04]
// 0x0e73: lodsw
// 0x0e74: mov    bx,ax
// 0x0e76: jmp    word ptr [bx]

// ================================================
// 0x0e78: WORD 'OVER' codep=0x0e81 wordp=0x0e81 params=2 returns=3
// ================================================
// 0x0e81: mov    bx,sp
// 0x0e83: push   word ptr [bx+02]
// 0x0e86: lodsw
// 0x0e87: mov    bx,ax
// 0x0e89: jmp    word ptr [bx]

// ================================================
// 0x0e8b: WORD 'R>' codep=0x0e92 wordp=0x0e92 params=0 returns=1
// ================================================
// 0x0e92: mov    ax,[bp+00]
// 0x0e95: inc    bp
// 0x0e96: inc    bp
// 0x0e97: push   ax
// 0x0e98: lodsw
// 0x0e99: mov    bx,ax
// 0x0e9b: jmp    word ptr [bx]

// ================================================
// 0x0e9d: WORD 'R@' codep=0x0ea4 wordp=0x0ea4 params=0 returns=1
// ================================================
// 0x0ea4: mov    ax,[bp+00]
// 0x0ea7: push   ax
// 0x0ea8: lodsw
// 0x0ea9: mov    bx,ax
// 0x0eab: jmp    word ptr [bx]

// ================================================
// 0x0ead: WORD 'ROT' codep=0x0eb5 wordp=0x0eb5 params=3 returns=3
// ================================================
// 0x0eb5: pop    dx
// 0x0eb6: pop    bx
// 0x0eb7: pop    ax
// 0x0eb8: push   bx
// 0x0eb9: push   dx
// 0x0eba: push   ax
// 0x0ebb: lodsw
// 0x0ebc: mov    bx,ax
// 0x0ebe: jmp    word ptr [bx]

// ================================================
// 0x0ec0: WORD 'RP!' codep=0x0ec8 wordp=0x0ec8 params=0 returns=0
// ================================================
// 0x0ec8: mov    bp,[di+02]
// 0x0ecb: lodsw
// 0x0ecc: mov    bx,ax
// 0x0ece: jmp    word ptr [bx]

// ================================================
// 0x0ed0: WORD 'RP@' codep=0x0ed8 wordp=0x0ed8 params=0 returns=1
// ================================================
// 0x0ed8: push   bp
// 0x0ed9: lodsw
// 0x0eda: mov    bx,ax
// 0x0edc: jmp    word ptr [bx]

// ================================================
// 0x0ede: WORD 'S0' codep=0x224c wordp=0x0ee5 params=0 returns=1
// ================================================

void S0() // S0
{
  Push(Read16(user_SP0)); // SP0 @
}


// ================================================
// 0x0eeb: WORD 'SWAP' codep=0x0ef4 wordp=0x0ef4 params=2 returns=2
// ================================================
// 0x0ef4: pop    dx
// 0x0ef5: pop    ax
// 0x0ef6: push   dx
// 0x0ef7: push   ax
// 0x0ef8: lodsw
// 0x0ef9: mov    bx,ax
// 0x0efb: jmp    word ptr [bx]

// ================================================
// 0x0efd: WORD 'SP!' codep=0x0f05 wordp=0x0f05 params=0 returns=0
// ================================================
// 0x0f05: mov    sp,[di]
// 0x0f07: lodsw
// 0x0f08: mov    bx,ax
// 0x0f0a: jmp    word ptr [bx]

// ================================================
// 0x0f0c: WORD 'SP@' codep=0x0f14 wordp=0x0f14 params=0 returns=1
// ================================================
// 0x0f14: mov    ax,sp
// 0x0f16: push   ax
// 0x0f17: lodsw
// 0x0f18: mov    bx,ax
// 0x0f1a: jmp    word ptr [bx]

// ================================================
// 0x0f1c: WORD '0' codep=0x0f22 wordp=0x0f22 params=0 returns=1
// ================================================
// 0x0f22: sub    ax,ax
// 0x0f24: push   ax
// 0x0f25: lodsw
// 0x0f26: mov    bx,ax
// 0x0f28: jmp    word ptr [bx]

// ================================================
// 0x0f2a: WORD '1' codep=0x0f30 wordp=0x0f30 params=0 returns=1
// ================================================
// 0x0f30: mov    ax,0001
// 0x0f33: push   ax
// 0x0f34: lodsw
// 0x0f35: mov    bx,ax
// 0x0f37: jmp    word ptr [bx]

// ================================================
// 0x0f39: WORD '2' codep=0x0f3f wordp=0x0f3f params=0 returns=1
// ================================================
// 0x0f3f: mov    ax,0002
// 0x0f42: push   ax
// 0x0f43: lodsw
// 0x0f44: mov    bx,ax
// 0x0f46: jmp    word ptr [bx]

// ================================================
// 0x0f48: WORD '/' codep=0x0f4e wordp=0x0f4e params=2 returns=2
// ================================================
// 0x0f4e: pop    bx
// 0x0f4f: pop    ax
// 0x0f50: cwd    
// 0x0f51: idiv   bx
// 0x0f53: push   ax
// 0x0f54: lodsw
// 0x0f55: mov    bx,ax
// 0x0f57: jmp    word ptr [bx]

// ================================================
// 0x0f59: WORD '/MOD' codep=0x0f62 wordp=0x0f62 params=2 returns=2
// ================================================
// 0x0f62: pop    bx
// 0x0f63: pop    ax
// 0x0f64: cwd    
// 0x0f65: idiv   bx
// 0x0f67: push   dx
// 0x0f68: push   ax
// 0x0f69: lodsw
// 0x0f6a: mov    bx,ax
// 0x0f6c: jmp    word ptr [bx]

// ================================================
// 0x0f6e: WORD '+' codep=0x0f74 wordp=0x0f74 params=2 returns=1
// ================================================
// 0x0f74: pop    ax
// 0x0f75: pop    bx
// 0x0f76: add    ax,bx
// 0x0f78: push   ax
// 0x0f79: lodsw
// 0x0f7a: mov    bx,ax
// 0x0f7c: jmp    word ptr [bx]

// ================================================
// 0x0f7e: WORD '+!' codep=0x0f85 wordp=0x0f85 params=2 returns=0
// ================================================
// 0x0f85: pop    bx
// 0x0f86: pop    ax
// 0x0f87: add    [bx],ax
// 0x0f89: lodsw
// 0x0f8a: mov    bx,ax
// 0x0f8c: jmp    word ptr [bx]

// ================================================
// 0x0f8e: WORD '-' codep=0x0f94 wordp=0x0f94 params=2 returns=1
// ================================================
// 0x0f94: pop    bx
// 0x0f95: pop    ax
// 0x0f96: sub    ax,bx
// 0x0f98: push   ax
// 0x0f99: lodsw
// 0x0f9a: mov    bx,ax
// 0x0f9c: jmp    word ptr [bx]

// ================================================
// 0x0f9e: WORD '+-' codep=0x224c wordp=0x0fa5 params=1 returns=0
// ================================================

void _plus__dash_() // +-
{
  _0_st_(); // 0<
  if (Pop() == 0) return;
  Push(-Pop()); //  NEGATE
}


// ================================================
// 0x0faf: WORD '*' codep=0x0fb5 wordp=0x0fb5 params=2 returns=1
// ================================================
// 0x0fb5: pop    ax
// 0x0fb6: pop    bx
// 0x0fb7: mul    bx
// 0x0fb9: push   ax
// 0x0fba: lodsw
// 0x0fbb: mov    bx,ax
// 0x0fbd: jmp    word ptr [bx]

// ================================================
// 0x0fbf: WORD '*/' codep=0x224c wordp=0x0fc6 params=3 returns=1
// ================================================

void _star__slash_() // */
{
  _star__slash_MOD(); // */MOD
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0x0fce: WORD '*/MOD' codep=0x224c wordp=0x0fd8 params=3 returns=2
// ================================================

void _star__slash_MOD() // */MOD
{
  unsigned short int a;
  a = Pop(); // >R
  M_star_(); // M*
  Push(a); // R>
  M_slash_(); // M/
}


// ================================================
// 0x0fe2: WORD '1+' codep=0x0fe9 wordp=0x0fe9 params=1 returns=1
// ================================================
// 0x0fe9: pop    ax
// 0x0fea: inc    ax
// 0x0feb: push   ax
// 0x0fec: lodsw
// 0x0fed: mov    bx,ax
// 0x0fef: jmp    word ptr [bx]

// ================================================
// 0x0ff1: WORD '1-' codep=0x0ff8 wordp=0x0ff8 params=1 returns=1
// ================================================
// 0x0ff8: pop    ax
// 0x0ff9: dec    ax
// 0x0ffa: push   ax
// 0x0ffb: lodsw
// 0x0ffc: mov    bx,ax
// 0x0ffe: jmp    word ptr [bx]

// ================================================
// 0x1000: WORD '2*' codep=0x1007 wordp=0x1007 params=1 returns=1
// ================================================
// 0x1007: pop    ax
// 0x1008: add    ax,ax
// 0x100a: push   ax
// 0x100b: lodsw
// 0x100c: mov    bx,ax
// 0x100e: jmp    word ptr [bx]

// ================================================
// 0x1010: WORD '2+' codep=0x1017 wordp=0x1017 params=1 returns=1
// ================================================
// 0x1017: pop    ax
// 0x1018: inc    ax
// 0x1019: inc    ax
// 0x101a: push   ax
// 0x101b: lodsw
// 0x101c: mov    bx,ax
// 0x101e: jmp    word ptr [bx]

// ================================================
// 0x1020: WORD '2-' codep=0x1027 wordp=0x1027 params=1 returns=1
// ================================================
// 0x1027: pop    ax
// 0x1028: dec    ax
// 0x1029: dec    ax
// 0x102a: push   ax
// 0x102b: lodsw
// 0x102c: mov    bx,ax
// 0x102e: jmp    word ptr [bx]

// ================================================
// 0x1030: WORD '2/' codep=0x1037 wordp=0x1037 params=1 returns=1
// ================================================
// 0x1037: pop    ax
// 0x1038: sar    ax,1
// 0x103a: push   ax
// 0x103b: lodsw
// 0x103c: mov    bx,ax
// 0x103e: jmp    word ptr [bx]

// ================================================
// 0x1040: WORD '4*' codep=0x1047 wordp=0x1047 params=1 returns=1
// ================================================
// 0x1047: pop    ax
// 0x1048: shl    ax,1
// 0x104a: shl    ax,1
// 0x104c: push   ax
// 0x104d: lodsw
// 0x104e: mov    bx,ax
// 0x1050: jmp    word ptr [bx]

// ================================================
// 0x1052: WORD 'ABS' codep=0x224c wordp=0x105a params=1 returns=1
// ================================================

void ABS() // ABS
{
  Push(Read16(regsp)); // DUP
  _plus__dash_(); // +-
}


// ================================================
// 0x1060: WORD 'D+' codep=0x1067 wordp=0x1067 params=4 returns=2
// ================================================
// 0x1067: pop    ax
// 0x1068: pop    dx
// 0x1069: pop    bx
// 0x106a: pop    cx
// 0x106b: add    dx,cx
// 0x106d: adc    ax,bx
// 0x106f: push   dx
// 0x1070: push   ax
// 0x1071: lodsw
// 0x1072: mov    bx,ax
// 0x1074: jmp    word ptr [bx]

// ================================================
// 0x1076: WORD 'D+-' codep=0x224c wordp=0x107e params=1 returns=0
// ================================================

void D_plus__dash_() // D+-
{
  _0_st_(); // 0<
  if (Pop() == 0) return;
  DNEGATE(); // DNEGATE
}


// ================================================
// 0x1088: WORD 'DECIMAL' codep=0x224c wordp=0x1094 params=0 returns=0
// ================================================

void DECIMAL() // DECIMAL
{
  Push(0x000a);
  Push(user_BASE); // BASE
  Store(); // !
}


// ================================================
// 0x109e: WORD 'DABS' codep=0x224c wordp=0x10a7 params=1 returns=1
// ================================================

void DABS() // DABS
{
  Push(Read16(regsp)); // DUP
  D_plus__dash_(); // D+-
}


// ================================================
// 0x10ad: WORD 'DNEGATE' codep=0x10b9 wordp=0x10b9 params=2 returns=2
// ================================================
// 0x10b9: sub    ax,ax
// 0x10bb: pop    cx
// 0x10bc: pop    dx
// 0x10bd: neg    dx
// 0x10bf: sbb    ax,cx
// 0x10c1: push   dx
// 0x10c2: push   ax
// 0x10c3: lodsw
// 0x10c4: mov    bx,ax
// 0x10c6: jmp    word ptr [bx]

// ================================================
// 0x10c8: WORD 'M*' codep=0x224c wordp=0x10cf params=2 returns=2
// ================================================

void M_star_() // M*
{
  unsigned short int a;
  _2DUP(); // 2DUP
  Push(Pop() ^ Pop()); // XOR
  a = Pop(); // >R
  ABS(); // ABS
  SWAP(); // SWAP
  ABS(); // ABS
  U_star_(); // U*
  Push(a); // R>
  D_plus__dash_(); // D+-
}


// ================================================
// 0x10e3: WORD 'M*/' codep=0x224c wordp=0x10eb params=4 returns=2
// ================================================

void M_star__slash_() // M*/
{
  unsigned short int a, b;
  _2DUP(); // 2DUP
  Push(Pop() ^ Pop()); // XOR
  SWAP(); // SWAP
  ABS(); // ABS
  a = Pop(); // >R
  SWAP(); // SWAP
  ABS(); // ABS
  b = Pop(); // >R
  OVER(); // OVER
  Push(Pop() ^ Pop()); // XOR
  ROT(); // ROT
  ROT(); // ROT
  DABS(); // DABS
  SWAP(); // SWAP
  Push(Read16(b)); // R@
  U_star_(); // U*
  ROT(); // ROT
  Push(b); // R>
  U_star_(); // U*
  ROT(); // ROT
  Push(0);
  D_plus_(); // D+
  Push(Read16(a)); // R@
  U_slash_MOD(); // U/MOD
  ROT(); // ROT
  ROT(); // ROT
  Push(a); // R>
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  SWAP(); // SWAP
  ROT(); // ROT
  D_plus__dash_(); // D+-
}


// ================================================
// 0x112f: WORD 'M+' codep=0x224c wordp=0x1136 params=3 returns=2
// ================================================

void M_plus_() // M+
{
  S_dash__gt_D(); // S->D
  D_plus_(); // D+
}


// ================================================
// 0x113c: WORD 'M/' codep=0x224c wordp=0x1143 params=3 returns=2
// ================================================

void M_slash_() // M/
{
  unsigned short int a, b;
  OVER(); // OVER
  a = Pop(); // >R
  b = Pop(); // >R
  Push(Read16(regsp)); // DUP
  D_plus__dash_(); // D+-
  Push(Read16(b)); // R@
  ABS(); // ABS
  U_slash_MOD(); // U/MOD
  Push(b); // R>
  Push(Read16(a)); // R@
  Push(Pop() ^ Pop()); // XOR
  _plus__dash_(); // +-
  SWAP(); // SWAP
  Push(a); // R>
  _plus__dash_(); // +-
  SWAP(); // SWAP
}


// ================================================
// 0x1165: WORD 'M/MOD' codep=0x224c wordp=0x116f params=3 returns=3
// ================================================

void M_slash_MOD() // M/MOD
{
  unsigned short int a, b;
  a = Pop(); // >R
  Push(0);
  Push(Read16(a)); // R@
  U_slash_MOD(); // U/MOD
  Push(a); // R>
  SWAP(); // SWAP
  b = Pop(); // >R
  U_slash_MOD(); // U/MOD
  Push(b); // R>
}


// ================================================
// 0x1183: WORD 'MAX' codep=0x224c wordp=0x118b params=2 returns=1
// ================================================

void MAX() // MAX
{
  _2DUP(); // 2DUP
  _st_(); // <
  if (Pop() != 0)
  {
    SWAP(); // SWAP
  }
  Pop(); // DROP
}


// ================================================
// 0x1199: WORD 'MOD' codep=0x224c wordp=0x11a1 params=2 returns=1
// ================================================

void MOD() // MOD
{
  _slash_MOD(); // /MOD
  Pop(); // DROP
}


// ================================================
// 0x11a7: WORD 'MIN' codep=0x224c wordp=0x11af params=2 returns=1
// ================================================

void MIN() // MIN
{
  _2DUP(); // 2DUP
  _gt_(); // >
  if (Pop() != 0)
  {
    SWAP(); // SWAP
  }
  Pop(); // DROP
}


// ================================================
// 0x11bd: WORD 'NEGATE' codep=0x11c8 wordp=0x11c8 params=1 returns=1
// ================================================
// 0x11c8: pop    ax
// 0x11c9: neg    ax
// 0x11cb: push   ax
// 0x11cc: lodsw
// 0x11cd: mov    bx,ax
// 0x11cf: jmp    word ptr [bx]

// ================================================
// 0x11d1: WORD 'U*' codep=0x11d8 wordp=0x11d8 params=2 returns=2
// ================================================
// 0x11d8: pop    ax
// 0x11d9: pop    bx
// 0x11da: mul    bx
// 0x11dc: push   ax
// 0x11dd: push   dx
// 0x11de: lodsw
// 0x11df: mov    bx,ax
// 0x11e1: jmp    word ptr [bx]

// ================================================
// 0x11e3: WORD 'U/MOD' codep=0x11ed wordp=0x11ed params=3 returns=2
// ================================================
// 0x11ed: pop    bx
// 0x11ee: pop    dx
// 0x11ef: pop    ax
// 0x11f0: div    bx
// 0x11f2: push   dx
// 0x11f3: push   ax
// 0x11f4: lodsw
// 0x11f5: mov    bx,ax
// 0x11f7: jmp    word ptr [bx]

// ================================================
// 0x11f9: WORD 'UMAX' codep=0x224c wordp=0x1202 params=2 returns=1
// ================================================

void UMAX() // UMAX
{
  _2DUP(); // 2DUP
  U_st_(); // U<
  if (Pop() != 0)
  {
    SWAP(); // SWAP
  }
  Pop(); // DROP
}


// ================================================
// 0x1210: WORD 'UMIN' codep=0x224c wordp=0x1219 params=2 returns=1
// ================================================

void UMIN() // UMIN
{
  _2DUP(); // 2DUP
  U_st_(); // U<
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    SWAP(); // SWAP
  }
  Pop(); // DROP
}


// ================================================
// 0x1229: WORD '>' codep=0x122f wordp=0x122f params=2 returns=1
// ================================================
// 0x122f: pop    ax
// 0x1230: mov    cx,8000
// 0x1233: add    ax,cx
// 0x1235: pop    dx
// 0x1236: add    dx,cx
// 0x1238: sub    ax,dx
// 0x123a: adc    cx,cx
// 0x123c: push   cx
// 0x123d: lodsw
// 0x123e: mov    bx,ax
// 0x1240: jmp    word ptr [bx]

// ================================================
// 0x1242: WORD '<' codep=0x1248 wordp=0x1248 params=2 returns=1
// ================================================
// 0x1248: pop    ax
// 0x1249: mov    cx,8000
// 0x124c: add    ax,cx
// 0x124e: pop    dx
// 0x124f: add    dx,cx
// 0x1251: sub    dx,ax
// 0x1253: adc    cx,cx
// 0x1255: push   cx
// 0x1256: lodsw
// 0x1257: mov    bx,ax
// 0x1259: jmp    word ptr [bx]

// ================================================
// 0x125b: WORD '=' codep=0x1261 wordp=0x1261 params=2 returns=1
// ================================================
// 0x1261: pop    ax
// 0x1262: pop    dx
// 0x1263: xor    cx,cx
// 0x1265: sub    ax,dx
// 0x1267: sub    ax,0001
// 0x126b: rcl    cx,1
// 0x126d: push   cx
// 0x126e: lodsw
// 0x126f: mov    bx,ax
// 0x1271: jmp    word ptr [bx]

// ================================================
// 0x1273: WORD '0<' codep=0x127a wordp=0x127a params=1 returns=1
// ================================================
// 0x127a: pop    ax
// 0x127b: cwd    
// 0x127c: neg    dx
// 0x127e: push   dx
// 0x127f: lodsw
// 0x1280: mov    bx,ax
// 0x1282: jmp    word ptr [bx]

// ================================================
// 0x1284: WORD '0=' codep=0x128b wordp=0x128b params=1 returns=1
// ================================================
// 0x128b: pop    ax
// 0x128c: xor    cx,cx
// 0x128e: sub    ax,0001
// 0x1292: rcl    cx,1
// 0x1294: push   cx
// 0x1295: lodsw
// 0x1296: mov    bx,ax
// 0x1298: jmp    word ptr [bx]

// ================================================
// 0x129a: WORD '0>' codep=0x12a1 wordp=0x12a1 params=1 returns=1
// ================================================
// 0x12a1: pop    ax
// 0x12a2: neg    ax
// 0x12a4: cwd    
// 0x12a5: neg    dx
// 0x12a7: push   dx
// 0x12a8: lodsw
// 0x12a9: mov    bx,ax
// 0x12ab: jmp    word ptr [bx]

// ================================================
// 0x12ad: WORD 'D<' codep=0x224c wordp=0x12b4 params=4 returns=1
// ================================================

void D_st_() // D<
{
  ROT(); // ROT
  _2DUP(); // 2DUP
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    ROT(); // ROT
    ROT(); // ROT
    DNEGATE(); // DNEGATE
    D_plus_(); // D+
    _0_st_(); // 0<
  } else
  {
    SWAP(); // SWAP
    _st_(); // <
    SWAP(); // SWAP
    Pop(); // DROP
  }
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0x12da: WORD 'U<' codep=0x12e1 wordp=0x12e1 params=2 returns=1
// ================================================
// 0x12e1: pop    ax
// 0x12e2: pop    dx
// 0x12e3: xor    cx,cx
// 0x12e5: sub    dx,ax
// 0x12e7: rcl    cx,1
// 0x12e9: push   cx
// 0x12ea: lodsw
// 0x12eb: mov    bx,ax
// 0x12ed: jmp    word ptr [bx]

// ================================================
// 0x12ef: WORD 'AND' codep=0x12f7 wordp=0x12f7 params=2 returns=1
// ================================================
// 0x12f7: pop    ax
// 0x12f8: pop    bx
// 0x12f9: and    ax,bx
// 0x12fb: push   ax
// 0x12fc: lodsw
// 0x12fd: mov    bx,ax
// 0x12ff: jmp    word ptr [bx]

// ================================================
// 0x1301: WORD 'NOT' codep=0x1309 wordp=0x1309 params=1 returns=1
// ================================================
// 0x1309: pop    ax
// 0x130a: xor    cx,cx
// 0x130c: sub    ax,0001
// 0x1310: rcl    cx,1
// 0x1312: push   cx
// 0x1313: lodsw
// 0x1314: mov    bx,ax
// 0x1316: jmp    word ptr [bx]

// ================================================
// 0x1318: WORD 'OFF_1' codep=0x224c wordp=0x1320 params=1 returns=0
// ================================================

void OFF_1() // OFF_1
{
  Push(0);
  SWAP(); // SWAP
  Store(); // !
}


// ================================================
// 0x1328: WORD 'ON' codep=0x224c wordp=0x132f params=1 returns=0
// ================================================

void ON() // ON
{
  Push(-1);
  SWAP(); // SWAP
  Store(); // !
}


// ================================================
// 0x1339: WORD 'OR' codep=0x1340 wordp=0x1340 params=2 returns=1
// ================================================
// 0x1340: pop    ax
// 0x1341: pop    bx
// 0x1342: or     ax,bx
// 0x1344: push   ax
// 0x1345: lodsw
// 0x1346: mov    bx,ax
// 0x1348: jmp    word ptr [bx]

// ================================================
// 0x134a: WORD 'TOGGLE' codep=0x1355 wordp=0x1355 params=2 returns=0
// ================================================
// 0x1355: pop    ax
// 0x1356: pop    bx
// 0x1357: xor    [bx],al
// 0x1359: lodsw
// 0x135a: mov    bx,ax
// 0x135c: jmp    word ptr [bx]

// ================================================
// 0x135e: WORD 'XOR' codep=0x1366 wordp=0x1366 params=2 returns=1
// ================================================
// 0x1366: pop    ax
// 0x1367: pop    bx
// 0x1368: xor    ax,bx
// 0x136a: push   ax
// 0x136b: lodsw
// 0x136c: mov    bx,ax
// 0x136e: jmp    word ptr [bx]

// ================================================
// 0x1370: WORD '#' codep=0x224c wordp=0x1376 params=2 returns=2
// ================================================

void _n_() // #
{
  Push(Read16(user_BASE)); // BASE @
  M_slash_MOD(); // M/MOD
  ROT(); // ROT
  Push(9);
  OVER(); // OVER
  _st_(); // <
  if (Pop() != 0)
  {
    Push(Pop() + 7); //  7 +
  }
  Push(Pop() + 0x0030); //  0x0030 +
  HOLD(); // HOLD
}


// ================================================
// 0x139a: WORD '#>' codep=0x224c wordp=0x13a1 params=2 returns=2
// ================================================

void _n__gt_() // #>
{
  Pop(); Pop(); // 2DROP
  Push(Read16(user_HLD)); // HLD @
  PAD(); // PAD
  OVER(); // OVER
  _dash_(); // -
}


// ================================================
// 0x13af: WORD '#S' codep=0x224c wordp=0x13b6 params=2 returns=2
// ================================================

void _n_S() // #S
{
  do
  {
    _n_(); // #
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    Push(!Pop()); //  NOT
  } while(Pop() == 0);
}


// ================================================
// 0x13c4: WORD '(NUMBER)' codep=0x224c wordp=0x13d1 params=1 returns=3
// ================================================

void _ro_NUMBER_rc_() // (NUMBER)
{
  unsigned short int a;
  Push(0);
  Push(0);
  ROT(); // ROT
  Push(Read16(regsp)); // DUP
  Push((Read16(Pop() + 1)&0xFF)==0x002d?1:0); //  1+ C@ 0x002d =
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(-1);
  Push(user_DPL); // DPL
  Store(); // !
  CONVERT(); // CONVERT
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(cc_BL)); // BL
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(!((Read16(Pop())&0xFF)==0x002e?1:0)); //  C@ 0x002e = NOT
    W0B5D(); // W0B5D
    Push(0);
    Push(user_DPL); // DPL
    Store(); // !
    CONVERT(); // CONVERT
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop())&0xFF); //  C@
    Push(Read16(cc_BL)); // BL
    _gt_(); // >
    W0B5D(); // W0B5D
  }
  Pop(); // DROP
  Push(a); // R>
  if (Pop() == 0) return;
  DNEGATE(); // DNEGATE
}


// ================================================
// 0x142b: WORD '>UPPERCASE' codep=0x143a wordp=0x143a params=2 returns=0
// ================================================
// 0x143a: pop    cx
// 0x143b: pop    bx
// 0x143c: jcxz   1453
// 0x143e: mov    dx,617A
// 0x1441: mov    al,[bx]
// 0x1443: cmp    al,dh
// 0x1445: jb     1450
// 0x1447: cmp    al,dl
// 0x1449: ja     1450
// 0x144b: and    al,DF
// 0x144e: mov    [bx],al
// 0x1450: inc    bx
// 0x1451: loop   1441
// 0x1453: lodsw
// 0x1454: mov    bx,ax
// 0x1456: jmp    word ptr [bx]

// ================================================
// 0x1458: WORD '<#' codep=0x224c wordp=0x145f params=0 returns=0
// ================================================

void _st__n_() // <#
{
  PAD(); // PAD
  Push(user_HLD); // HLD
  Store(); // !
}


// ================================================
// 0x1467: WORD 'CONVERT' codep=0x224c wordp=0x1473 params=1 returns=2
// ================================================

void CONVERT() // CONVERT
{
  unsigned short int a;
  while(1)
  {
    Push(Pop() + 1); //  1+
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    Push(Read16(Pop())&0xFF); //  C@
    Push(Read16(user_BASE)); // BASE @
    DIGIT(); // DIGIT
    if (Pop() == 0) break;

    SWAP(); // SWAP
    Push(Read16(user_BASE)); // BASE @
    U_star_(); // U*
    Pop(); // DROP
    ROT(); // ROT
    Push(Read16(user_BASE)); // BASE @
    U_star_(); // U*
    D_plus_(); // D+
    Push(Read16(user_DPL) + 1); // DPL @ 1+
    if (Pop() != 0)
    {
      Push(1);
      Push(user_DPL); // DPL
      _plus__ex_(); // +!
    }
    Push(a); // R>
  }
  Push(a); // R>
}


// ================================================
// 0x14b3: WORD 'DIGIT' codep=0x14bd wordp=0x14bd params=2 returns=2
// ================================================
// 0x14bd: pop    dx
// 0x14be: pop    ax
// 0x14bf: sub    al,30
// 0x14c2: jb     14DE
// 0x14c4: cmp    al,09
// 0x14c7: jbe    14D1
// 0x14c9: sub    al,07
// 0x14cc: cmp    al,0A
// 0x14cf: jb     14DE
// 0x14d1: cmp    al,dl
// 0x14d3: jae    14DE
// 0x14d5: sub    dx,dx
// 0x14d7: mov    dl,al
// 0x14d9: mov    al,01
// 0x14db: push   dx
// 0x14dc: jz     14E0
// 0x14de: sub    ax,ax
// 0x14e0: push   ax
// 0x14e1: lodsw
// 0x14e2: mov    bx,ax
// 0x14e4: jmp    word ptr [bx]

// ================================================
// 0x14e6: WORD 'HOLD' codep=0x224c wordp=0x14ef params=1 returns=0
// ================================================

void HOLD() // HOLD
{
  Push(-1);
  Push(user_HLD); // HLD
  _plus__ex_(); // +!
  Push(Read16(user_HLD)); // HLD @
  C_ex__2(); // C!_2
}


// ================================================
// 0x14ff: WORD 'S->D' codep=0x1508 wordp=0x1508 params=1 returns=2
// ================================================
// 0x1508: mov    bx,sp
// 0x150a: mov    ax,[bx]
// 0x150c: cwd    
// 0x150d: push   dx
// 0x150e: lodsw
// 0x150f: mov    bx,ax
// 0x1511: jmp    word ptr [bx]

// ================================================
// 0x1513: WORD 'SIGN' codep=0x224c wordp=0x151c params=1 returns=0
// ================================================

void SIGN() // SIGN
{
  _0_st_(); // 0<
  if (Pop() == 0) return;
  Push(0x002d);
  HOLD(); // HOLD
}


// ================================================
// 0x152a: WORD '(>CODE)' codep=0x1536 wordp=0x1536
// ================================================
// 0x1536: lodsw
// 0x1537: mov    bx,si
// 0x1539: add    si,ax
// 0x153b: jmp    bx

// ================================================
// 0x153d: WORD '(;VIA)' codep=0x1548 wordp=0x1548
// ================================================
// 0x1548: lodsw
// 0x1549: inc    ax
// 0x154a: inc    ax
// 0x154b: mov    si,ax
// 0x154d: lodsw
// 0x154e: mov    bx,ax
// 0x1550: jmp    word ptr [bx]

// ================================================
// 0x1552: WORD '(+LOOP)' codep=0x155e wordp=0x155e params=1 returns=0
// ================================================
// 0x155e: pop    bx
// 0x155f: mov    ax,[bp+00]
// 0x1562: add    ax,bx
// 0x1564: or     bx,bx
// 0x1566: js     1577
// 0x1568: cmp    ax,[bp+02]
// 0x156b: jge    157C
// 0x156d: mov    [bp+00],ax
// 0x1570: add    si,[si]
// 0x1572: lodsw
// 0x1573: mov    bx,ax
// 0x1575: jmp    word ptr [bx]
// 0x1577: cmp    ax,[bp+02]
// 0x157a: jge    156D
// 0x157c: add    bp,0004
// 0x1580: inc    si
// 0x1581: inc    si
// 0x1582: lodsw
// 0x1583: mov    bx,ax
// 0x1585: jmp    word ptr [bx]

// ================================================
// 0x1587: WORD '(/LOOP)' codep=0x1593 wordp=0x1593 params=1 returns=0
// ================================================
// 0x1593: pop    ax
// 0x1594: add    ax,[bp+00]
// 0x1597: cmp    ax,[bp+02]
// 0x159a: jae    15A6
// 0x159c: mov    [bp+00],ax
// 0x159f: add    si,[si]
// 0x15a1: lodsw
// 0x15a2: mov    bx,ax
// 0x15a4: jmp    word ptr [bx]
// 0x15a6: add    bp,0004
// 0x15aa: inc    si
// 0x15ab: inc    si
// 0x15ac: lodsw
// 0x15ad: mov    bx,ax
// 0x15af: jmp    word ptr [bx]

// ================================================
// 0x15b1: WORD '(DO)' codep=0x15ba wordp=0x15ba params=2 returns=0
// ================================================
// 0x15ba: pop    dx
// 0x15bb: pop    ax
// 0x15bc: xchg   sp,bp
// 0x15be: push   ax
// 0x15bf: push   dx
// 0x15c0: xchg   sp,bp
// 0x15c2: lodsw
// 0x15c3: mov    bx,ax
// 0x15c5: jmp    word ptr [bx]

// ================================================
// 0x15c7: WORD '(LOOP)' codep=0x15d2 wordp=0x15d2 params=0 returns=0
// ================================================
// 0x15d2: mov    ax,[bp+00]
// 0x15d5: inc    ax
// 0x15d6: cmp    ax,[bp+02]
// 0x15d9: jge    15E5
// 0x15db: mov    [bp+00],ax
// 0x15de: add    si,[si]
// 0x15e0: lodsw
// 0x15e1: mov    bx,ax
// 0x15e3: jmp    word ptr [bx]
// 0x15e5: add    bp,0004
// 0x15e9: inc    si
// 0x15ea: inc    si
// 0x15eb: lodsw
// 0x15ec: mov    bx,ax
// 0x15ee: jmp    word ptr [bx]

// ================================================
// 0x15f0: WORD '0BRANCH' codep=0x15fc wordp=0x15fc params=1 returns=0
// ================================================
// 0x15fc: pop    ax
// 0x15fd: or     ax,ax
// 0x15ff: jz     1608
// 0x1601: inc    si
// 0x1602: inc    si
// 0x1603: lodsw
// 0x1604: mov    bx,ax
// 0x1606: jmp    word ptr [bx]
// 0x1608: add    si,[si]
// 0x160a: lodsw
// 0x160b: mov    bx,ax
// 0x160d: jmp    word ptr [bx]

// ================================================
// 0x160f: WORD '2LIT' codep=0x1618 wordp=0x1618 params=0 returns=2
// ================================================
// 0x1618: lodsw
// 0x1619: push   ax
// 0x161a: lodsw
// 0x161b: push   ax
// 0x161c: lodsw
// 0x161d: mov    bx,ax
// 0x161f: jmp    word ptr [bx]

// ================================================
// 0x1621: WORD 'ABORT-IT' codep=0x224c wordp=0x162e params=0 returns=0
// ================================================

void ABORT_dash_IT() // ABORT-IT
{
  Push(1);
  ABORT("Aborting execution! ", 20);// (ABORT")
}

// 0x1649: inc    bx
// 0x164a: inc    bx
// 0x164b: dec    bp
// 0x164c: dec    bp
// 0x164d: mov    [bp+00],si
// 0x1650: pop    si
// 0x1651: push   bx
// 0x1652: lodsw
// 0x1653: mov    bx,ax
// 0x1655: jmp    word ptr [bx]

// ================================================
// 0x1657: WORD 'BRANCH' codep=0x1662 wordp=0x1662 params=0 returns=0
// ================================================
// 0x1662: add    si,[si]
// 0x1664: lodsw
// 0x1665: mov    bx,ax
// 0x1667: jmp    word ptr [bx]

// ================================================
// 0x1669: WORD 'CFAEXEC' codep=0x1675 wordp=0x1675
// ================================================
// 0x1675: pop    bx
// 0x1676: jmp    word ptr [bx]

// ================================================
// 0x1678: WORD 'EXECUTE' codep=0x1684 wordp=0x1684 params=1 returns=0
// ================================================
// 0x1684: pop    bx
// 0x1685: dec    bx
// 0x1686: dec    bx
// 0x1687: jmp    word ptr [bx]

// ================================================
// 0x1689: WORD 'EXIT' codep=0x1692 wordp=0x1692 params=0 returns=0
// ================================================
// 0x1692: mov    si,[bp+00]
// 0x1695: inc    bp
// 0x1696: inc    bp
// 0x1697: lodsw
// 0x1698: mov    bx,ax
// 0x169a: jmp    word ptr [bx]

// ================================================
// 0x169c: WORD 'GO' codep=0x16a3 wordp=0x16a3 params=1 returns=0
// ================================================
// 0x16a3: pop    bx
// 0x16a4: jmp    bx

// ================================================
// 0x16a6: WORD 'REGISTERS' codep=0x1d29 wordp=0x16b4
// ================================================
// 0x16b4: db 0xd2 0x02 0x00 0x15 0x00 0x80 0x05 0x00 0xca 0x2d 0x38 0xd3 0xca 0x2d 0xa8 0xd4 0xf1 0x16 0xf1 0x16 '         -8  -      '
// 0x16c8: int    21
// 0x16ca: ret    


// ================================================
// 0x16cb: WORD 'INTERRUPT' codep=0x16d9 wordp=0x16d9 params=1 returns=0
// ================================================
// 0x16d9: pop    ax
// 0x16da: mov    [16C9],al
// 0x16dd: push   bp
// 0x16de: push   di
// 0x16df: push   si
// 0x16e0: push   es
// 0x16e1: pushf  
// 0x16e2: mov    ax,[16B4] // REGISTERS
// 0x16e5: push   ax
// 0x16e6: popf   
// 0x16e7: mov    bx,[16B8]
// 0x16eb: mov    cx,[16BA]
// 0x16ef: mov    dx,[16BC]
// 0x16f3: mov    si,[16C2]
// 0x16f7: mov    di,[16C0]
// 0x16fb: mov    ax,[16C6]
// 0x16fe: mov    es,ax
// 0x1700: mov    ax,[16C4]
// 0x1703: mov    ds,ax
// 0x1705: cs:    
// 0x1706: mov    ax,[16B6] // REGISTERS
// 0x1709: call   16C8
// 0x170c: cs:    
// 0x170d: mov    [16B6],ax // REGISTERS
// 0x1710: mov    ax,ds
// 0x1712: cs:    
// 0x1713: mov    [16C4],ax
// 0x1716: mov    ax,cs
// 0x1718: mov    ds,ax
// 0x171a: pushf  
// 0x171b: pop    ax
// 0x171c: mov    [16B4],ax // REGISTERS
// 0x171f: mov    ax,bx
// 0x1721: mov    [16B8],ax
// 0x1724: mov    ax,cx
// 0x1726: mov    [16BA],ax
// 0x1729: mov    ax,dx
// 0x172b: mov    [16BC],ax
// 0x172e: mov    ax,di
// 0x1730: mov    [16C0],ax
// 0x1733: mov    ax,es
// 0x1735: mov    [16C6],ax
// 0x1738: popf   
// 0x1739: pop    es
// 0x173a: pop    si
// 0x173b: pop    di
// 0x173c: pop    bp
// 0x173d: lodsw
// 0x173e: mov    bx,ax
// 0x1740: jmp    word ptr [bx]

// ================================================
// 0x1742: WORD 'LEAVE' codep=0x174c wordp=0x174c
// ================================================
// 0x174c: mov    ax,[bp+00]
// 0x174f: mov    [bp+02],ax
// 0x1752: lodsw
// 0x1753: mov    bx,ax
// 0x1755: jmp    word ptr [bx]

// ================================================
// 0x1757: WORD 'LIT' codep=0x175f wordp=0x175f params=0 returns=1
// ================================================
// 0x175f: lodsw
// 0x1760: push   ax
// 0x1761: lodsw
// 0x1762: mov    bx,ax
// 0x1764: jmp    word ptr [bx]

// ================================================
// 0x1766: WORD 'SYSCALL' codep=0x1772 wordp=0x1772
// ================================================
// 0x1772: pop    dx
// 0x1773: pop    cx
// 0x1774: mov    ch,00
// 0x1776: call   0005
// 0x1779: mov    ah,00
// 0x177b: push   ax
// 0x177c: lodsw
// 0x177d: mov    bx,ax
// 0x177f: jmp    word ptr [bx]

// ================================================
// 0x1781: WORD 'USER' codep=0x224c wordp=0x178a
// ================================================

void USER() // USER
{
  OVER(); // OVER
  CONSTANT(); // CONSTANT
  Push(Pop() + Pop()); // +
  CODE(); // (;CODE) inlined assembler code
// 0x1792: inc    bx
// 0x1793: inc    bx
// 0x1794: mov    ax,[bx]
// 0x1796: add    ax,di
// 0x1798: push   ax
// 0x1799: lodsw
// 0x179a: mov    bx,ax
// 0x179c: jmp    word ptr [bx]
}


// ================================================
// 0x179e: WORD 'USEREXECUTOR' codep=0x224c wordp=0x17af
// ================================================

void USEREXECUTOR() // USEREXECUTOR
{
  Push(Read16(regsp)); // DUP
  CONSTANT(); // CONSTANT
  Push(Pop() + 2); //  2+
  CODE(); // (;CODE) inlined assembler code
// 0x17b7: inc    bx
// 0x17b8: inc    bx
// 0x17b9: mov    bx,[bx]
// 0x17bb: mov    bx,[bx+di]
// 0x17bd: dec    bx
// 0x17be: dec    bx
// 0x17bf: jmp    word ptr [bx]
}


// ================================================
// 0x17c1: WORD '+FIND' codep=0x224c wordp=0x17cb
// ================================================

void _plus_FIND() // +FIND
{
  HERE(); // HERE
  Push(Read16(user_CURRENT)); // CURRENT @
  _bo__dash_FIND_bc_(); // [-FIND]
}


// ================================================
// 0x17d5: WORD '(-FIND)' codep=0x224c wordp=0x17e1
// ================================================

void _ro__dash_FIND_rc_() // (-FIND)
{
  HERE(); // HERE
  Push(Read16(user_CONTEXT)); // CONTEXT @
  _bo__dash_FINDS_bc_(); // [-FINDS]
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(!(Read16(user_CONTEXT)==Read16(user_CURRENT)?1:0)); // CONTEXT @ CURRENT @ = NOT
  if (Pop() == 0) return;
  Pop(); // DROP
  HERE(); // HERE
  Push(Read16(user_CURRENT)); // CURRENT @
  _bo__dash_FINDS_bc_(); // [-FINDS]
}


// ================================================
// 0x180d: WORD '(FIND)' codep=0x1818 wordp=0x1818
// ================================================
// 0x1818: pop    bx
// 0x1819: pop    cx
// 0x181a: push   si
// 0x181b: push   di
// 0x181c: mov    dx,7F3F
// 0x181f: jmp    1826
// 0x1822: dec    bx
// 0x1823: dec    bx
// 0x1824: mov    bx,[bx]
// 0x1826: or     bx,bx
// 0x1828: jz     1859
// 0x182a: mov    si,cx
// 0x182c: mov    di,bx
// 0x182e: lodsb
// 0x182f: mov    ah,[di]
// 0x1831: and    ah,dl
// 0x1833: cmp    ah,al
// 0x1835: jnz    1822
// 0x1837: inc    di
// 0x1838: lodsb
// 0x1839: mov    ah,[di]
// 0x183b: xor    ah,al
// 0x183d: jz     1837
// 0x183f: and    ah,dh
// 0x1841: jnz    1822
// 0x1843: mov    ax,di
// 0x1845: pop    di
// 0x1846: pop    si
// 0x1847: inc    ax
// 0x1848: inc    ax
// 0x1849: inc    ax
// 0x184a: push   ax
// 0x184b: sub    ax,ax
// 0x184d: inc    ax
// 0x184e: mov    dl,[bx]
// 0x1850: mov    dh,ah
// 0x1852: push   dx
// 0x1853: push   ax
// 0x1854: lodsw
// 0x1855: mov    bx,ax
// 0x1857: jmp    word ptr [bx]
// 0x1859: pop    di
// 0x185a: pop    si
// 0x185b: push   bx
// 0x185c: lodsw
// 0x185d: mov    bx,ax
// 0x185f: jmp    word ptr [bx]

// ================================================
// 0x1861: WORD '(FORGET)' codep=0x224c wordp=0x186e params=1 returns=0
// ================================================

void _ro_FORGET_rc_() // (FORGET)
{
  unsigned short int i, imax;
  Push(Read16(regsp)); // DUP
  Push(Read16(user_CONTEXT)); // CONTEXT @
  U_st_(); // U<
  if (Pop() != 0)
  {
    _i_FORTH(); // 'FORTH
    Push(user_CONTEXT); // CONTEXT
    Store(); // !
  }
  Push(Read16(regsp)); // DUP
  Push(Read16(user_CURRENT)); // CURRENT @
  U_st_(); // U<
  if (Pop() != 0)
  {
    DEFINITIONS(); // DEFINITIONS
  }
  Push(Read16(user_VOC_dash_LINK)); // VOC-LINK @
  while(1)
  {
    _2DUP(); // 2DUP
    W1A6E(); // W1A6E
    if (Pop() == 0) break;

    Push(Read16(Pop())); //  @
  }
  Push(Read16(regsp)); // DUP
  Push(user_VOC_dash_LINK); // VOC-LINK
  Store(); // !
  while(1)
  {
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() == 0) break;

    Push(0);
    OVER(); // OVER
    Push(Pop() + 2); //  2+
    Store(); // !
    _2DUP(); // 2DUP
    Push(Pop() + 4); //  4 +
    Push(8);
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    SWAP(); // SWAP

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(Read16(i)); // I @
      while(1)
      {
        _2DUP(); // 2DUP
        Push(Pop() + 1); //  1+
        W1A6E(); // W1A6E
        if (Pop() == 0) break;

        Push(Read16(Pop() - 2)); //  2- @
      }
      Push(i); // I
      Store(); // !
      OVER(); // OVER
      Push(Pop() + 2); //  2+
      Push(Read16(regsp)); // DUP
      Push(Read16(Pop())); //  @
      Push(Read16(i)); // I @
      UMAX(); // UMAX
      SWAP(); // SWAP
      Store(); // !
      Push(2);
      i += Pop();
    } while(i<imax); // (/LOOP)

    Pop(); // DROP
    Push(Read16(Pop())); //  @
  }
  Push(Pop() - Read16(user_LFALEN)); //  LFALEN @ -
  Push(user_DP); // DP
  Store(); // !
}


// ================================================
// 0x190e: WORD '(LINKS)' codep=0x224c wordp=0x191a
// ================================================

void _ro_LINKS_rc_() // (LINKS)
{
  OVER(); // OVER
  Push(Read16(Pop())); //  @
  HERE(); // HERE
  SWAP(); // SWAP
  _co_(); // ,
  Push(-1);
  _co_(); // ,
  SWAP(); // SWAP
  _co_(); // ,
  SWAP(); // SWAP
  Store(); // !
}


// ================================================
// 0x1934: WORD '<NAME>' codep=0x224c wordp=0x193f params=0 returns=0
// ================================================

void _st_NAME_gt_() // <NAME>
{
  Push(Read16(cc_BL)); // BL
  Exec("WORD"); // call of word 0x1f06 '(WORD)'
  Push(Read16(user_LOWERCASE)); // LOWERCASE @
  if (Pop() != 0)
  {
    Pop(); // DROP
    return;
  }
  COUNT(); // COUNT
  _gt_UPPERCASE(); // >UPPERCASE
}


// ================================================
// 0x1957: WORD '?FIND' codep=0x224c wordp=0x1961
// ================================================

void IsFIND() // ?FIND
{
  _st_NAME_gt_(); // <NAME>
  Exec("_dash_FIND"); // call of word 0x17e1 '(-FIND)'
  Push(Pop()==0?1:0); //  0=
  ABORT("Not found", 9);// (ABORT")
  Pop(); // DROP
}


// ================================================
// 0x1977: WORD '?[PTR]' codep=0x224c wordp=0x1982 params=1 returns=1
// ================================================

void Is_bo_PTR_bc_() // ?[PTR]
{
  Push(Read16(Pop() + 2) + 1==0?1:0); //  2+ @ 1+ 0=
}


// ================================================
// 0x198c: WORD 'DEFINITIONS' codep=0x224c wordp=0x199c params=0 returns=0
// ================================================

void DEFINITIONS() // DEFINITIONS
{
  Push(Read16(user_CONTEXT)); // CONTEXT @
  Push(user_CURRENT); // CURRENT
  Store(); // !
}


// ================================================
// 0x19a6: WORD 'EMPTY' codep=0x224c wordp=0x19b0 params=0 returns=0
// ================================================

void EMPTY() // EMPTY
{
  Push(user_LFALEN); // LFALEN
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); //  @
  SWAP(); // SWAP
  Push(2);
  OVER(); // OVER
  Store(); // !
  Push(Read16(Read16(cc_INITIAL_dash_DPB)) + 2); // INITIAL-DPB @ 2+
  _ro_FORGET_rc_(); // (FORGET)
  Store(); // !
}


// ================================================
// 0x19ca: WORD 'FIND' codep=0x224c wordp=0x19d3
// ================================================

void FIND() // FIND
{
  _st_NAME_gt_(); // <NAME>
  Exec("_dash_FIND"); // call of word 0x17e1 '(-FIND)'
  if (Pop() != 0)
  {
    Pop(); // DROP
    CFA(); // CFA
    return;
  }
  Push(0);
}


// ================================================
// 0x19e7: WORD 'FORGET' codep=0x224c wordp=0x19f2
// ================================================

void FORGET() // FORGET
{
  _st_NAME_gt_(); // <NAME>
  Push(Read16(user_MSGFLAGS) & 0x0040); // MSGFLAGS @ 0x0040 AND
  if (Pop() != 0)
  {
    Exec("_dash_FIND"); // call of word 0x17e1 '(-FIND)'
    Push(Pop()==0?1:0); //  0=
    W0B5D(); // W0B5D
  } else
  {
    _plus_FIND(); // +FIND
    Push(Pop()==0?1:0); //  0=
    ABORT("Not in CURRENT vocabulary", 25);// (ABORT")
  }
  Pop(); // DROP
  NFA(); // NFA
  Push(Read16(regsp)); // DUP
  WITHIN_ask_(); // WITHIN?
  Push((Pop()==0?1:0)==0?1:0); //  0= 0=
  ABORT("Within protected dictionary", 27);// (ABORT")
  _ro_FORGET_rc_(); // (FORGET)
}


// ================================================
// 0x1a5a: WORD 'W1A5C' codep=0x224c wordp=0x1a5c
// ================================================

void W1A5C() // W1A5C
{
  Push(Read16(user_CURRENT)); // CURRENT @
  _ro_LINKS_rc_(); // (LINKS)
}


// ================================================
// 0x1a64: WORD 'W1A66' codep=0x224c wordp=0x1a66
// ================================================
// orphan

void W1A66() // W1A66
{
  _i_FORTH(); // 'FORTH
  _ro_LINKS_rc_(); // (LINKS)
}


// ================================================
// 0x1a6c: WORD 'W1A6E' codep=0x224c wordp=0x1a6e params=3 returns=2
// ================================================

void W1A6E() // W1A6E
{
  U_st_(); // U<
  OVER(); // OVER
  Push((Pop()==0?1:0) - 1); //  0= 1-
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0x1a7a: WORD 'VOCABULARY' codep=0x224c wordp=0x1a89
// ================================================

void VOCABULARY() // VOCABULARY
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  HERE(); // HERE
  Push(0);
  _co_(); // ,
  HERE(); // HERE
  Push(Read16(user_VOC_dash_LINK)); // VOC-LINK @
  _co_(); // ,
  Push(user_VOC_dash_LINK); // VOC-LINK
  Store(); // !
  Push(0);
  _co_(); // ,
  Push(0);
  _co_(); // ,
  Push(0);
  _co_(); // ,
  Push(0);
  _co_(); // ,
  Push(0);
  _co_(); // ,
  Exec("LINKS_gt_"); // call of word 0x1a5c 'W1A5C'
  CODE(); // (;CODE) inlined assembler code
// 0x1ab5: call   1649
  Push(user_CONTEXT); // CONTEXT
  Store(); // !
}


// ================================================
// 0x1abe: WORD 'W1AC0' codep=0x1ac0 wordp=0x1ac0
// ================================================
// 0x1ac0: pop    bx
// 0x1ac1: xor    ax,ax
// 0x1ac3: mov    al,[bx]
// 0x1ac5: inc    bx
// 0x1ac6: add    al,[bx]
// 0x1ac8: and    ax,0006
// 0x1acb: add    ax,0006
// 0x1ace: push   ax
// 0x1acf: lodsw
// 0x1ad0: mov    bx,ax
// 0x1ad2: jmp    word ptr [bx]

// ================================================
// 0x1ad4: WORD 'WITHIN?' codep=0x224c wordp=0x1ae0 params=1 returns=1
// ================================================

void WITHIN_ask_() // WITHIN?
{
  Push(Read16(user_FENCE) + 1); // FENCE @ 1+
  Push(Read16(Read16(cc_INITIAL_dash_DPB))); // INITIAL-DPB @
  UMAX(); // UMAX
  ME(); // ME
  UMAX(); // UMAX
  OVER(); // OVER
  SWAP(); // SWAP
  U_st_(); // U<
  SP_at_(); // SP@
  ROT(); // ROT
  U_st_(); // U<
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0x1b00: WORD '[-FIND]' codep=0x224c wordp=0x1b0c
// ================================================

void _bo__dash_FIND_bc_() // [-FIND]
{
  Push(Read16(regsp)); // DUP
  Is_bo_PTR_bc_(); // ?[PTR]
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(0);
    return;
  }
  OVER(); // OVER
  W1AC0(); // W1AC0
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); //  @
  _ro_FIND_rc_(); // (FIND)
}


// ================================================
// 0x1b28: WORD '[-FINDS]' codep=0x224c wordp=0x1b35
// ================================================

void _bo__dash_FINDS_bc_() // [-FINDS]
{
  unsigned short int a, b, c;
  SWAP(); // SWAP
  a = Pop(); // >R
  b = Pop(); // >R
  while(1)
  {
    Push(a); // I'
    Push(b); // I
    Push(Read16(regsp)); // DUP
    Is_bo_PTR_bc_(); // ?[PTR]
    if (Pop() != 0)
    {
      Push(Read16(Pop() + 4)); //  4 + @
    }
    _bo__dash_FIND_bc_(); // [-FIND]
    Push(Read16(regsp)); // DUP
    Push((Pop()==0?1:0) & !(Read16(b)==0?1:0)); //  0= I @ 0= NOT AND
    if (Pop() == 0) break;

    Pop(); // DROP
    Push(Read16(b)); // R> @
    c = Pop(); // >R
  }
  Push(b); // R>
  Push(a); // R>
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0x1b77: WORD ''_2' codep=0x224c wordp=0x1b7d
// ================================================

void _i__2() // '_2
{
  IsFIND(); // ?FIND
  LITERAL(); // LITERAL
}


// ================================================
// 0x1b83: WORD ''STREAM' codep=0x224c wordp=0x1b8f params=0 returns=1
// ================================================

void _i_STREAM() // 'STREAM
{
  Push(Read16(user_BLK)); // BLK @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    BLOCK_1(); // BLOCK_1
  } else
  {
    Push(Read16(user_TIB)); // TIB @
  }
  Push(Pop() + Read16(user__gt_IN)); //  >IN @ +
}


// ================================================
// 0x1bab: WORD '(' codep=0x224c wordp=0x1bb1 params=0 returns=0
// ================================================

void _ro_() // (
{
  Push(-1);
  Push(user__gt_IN); // >IN
  _plus__ex_(); // +!
  Push(0x0029);
  Exec("WORD"); // call of word 0x1f06 '(WORD)'
  Push((Read16(Pop())&0xFF) + 1); //  C@ 1+
  HERE(); // HERE
  Push(Pop() + Pop()); // +
  Push(!((Read16(Pop())&0xFF)==0x0029?1:0)); //  C@ 0x0029 = NOT
  W0B30(); // W0B30
}


// ================================================
// 0x1bd5: WORD '(.")' codep=0x224c wordp=0x1bde params=0 returns=0
// ================================================

void _ro__dot__qm__rc_() // (.")
{
  unsigned short int a;
  Push(Read16(callp0)); // R@
  COUNT(); // COUNT
  Push(Read16(regsp)); // DUP
  Push((Pop() + 1) + callp0); //  1+ R> +
  a = Pop(); // >R
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0x1bf0: WORD '(;CODE)' codep=0x224c wordp=0x1bfc params=0 returns=0
// ================================================

void _ro__sc_CODE_rc_() // (;CODE)
{
  Push(callp0); // R>
  LATEST(); // LATEST
  PFA(); // PFA
  CFA(); // CFA
  Store(); // !
}


// ================================================
// 0x1c08: WORD '(ABORT")' codep=0x224c wordp=0x1c15 params=1 returns=0
// ================================================

void _ro_ABORT_qm__rc_() // (ABORT")
{
  unsigned short int a;
  if (Pop() != 0)
  {
    Exec("WHERE"); // call of word 0x1e68 '(WHERE)'
    Exec("CR"); // call of word 0x26ee '(CR)'
    Push(Read16(callp0)); // R@
    COUNT(); // COUNT
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    SP_ex_(); // SP!
    QUIT(); // QUIT
    return;
  }
  Push(callp0); // R>
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  Push(Pop() + Pop()); // +
  Push(Pop() + 1); //  1+
  a = Pop(); // >R
}


// ================================================
// 0x1c39: WORD '(ABORT)' codep=0x224c wordp=0x1c45 params=0 returns=0
// ================================================

void _ro_ABORT_rc_() // (ABORT)
{
  SP_ex_(); // SP!
  Push(0);
  W0AD9(); // W0AD9
  QUIT(); // QUIT
}


// ================================================
// 0x1c4f: WORD '."' codep=0x224c wordp=0x1c56 params=0 returns=0
// ================================================

void Draw_qm_() // ."
{
  _i_STREAM(); // 'STREAM
  Push((Read16(Pop())&0xFF)==0x0022?1:0); //  C@ 0x0022 =
  if (Pop() != 0)
  {
    Push(1);
    Push(user__gt_IN); // >IN
    _plus__ex_(); // +!
    return;
  }
  Push(0x0022);
  Push(Read16(user_STATE)); // STATE @
  if (Pop() != 0)
  {
    COMPILE(0x1bdc); // compile?
  }
  Exec("WORD"); // call of word 0x1f06 '(WORD)'
  Push(Read16(regsp)); // DUP
  Push((Read16(Pop())&0xFF) + 1); //  C@ 1+
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  Push(!((Read16(Pop())&0xFF)==0x0022?1:0)); //  C@ 0x0022 = NOT
  W0B30(); // W0B30
  Push(Read16(user_STATE)); // STATE @
  if (Pop() != 0)
  {
    Push((Read16(Pop())&0xFF) + 1); //  C@ 1+
    ALLOT(); // ALLOT
    return;
  }
  COUNT(); // COUNT
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0x1cae: WORD '(CREATE)' codep=0x224c wordp=0x1cbb
// ================================================

void _ro_CREATE_rc_() // (CREATE)
{
  unsigned short int a;
  HERE(); // HERE
  Push(0);
  _co_(); // ,
  _st_NAME_gt_(); // <NAME>
  W1FF4(); // W1FF4
  W20C6(); // W20C6
  W2057(); // W2057
  HERE(); // HERE
  Push(Read16(regsp)); // DUP
  Push((Read16(Pop())&0xFF) & 0x001f); //  C@ 0x001f AND
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  C_ex__2(); // C!_2
  Push(Read16(user_WIDTH)); // WIDTH @
  MIN(); // MIN
  Push(1);
  MAX(); // MAX
  Push(Pop() + 1); //  1+
  ALLOT(); // ALLOT
  Push(Read16(regsp)); // DUP
  Push(0x0080);
  TOGGLE(); // TOGGLE
  HERE(); // HERE
  Push(Pop() - 1); //  1-
  Push(0x0080);
  TOGGLE(); // TOGGLE
  Push(2);
  ALLOT(); // ALLOT
  Push(Read16(regsp)); // DUP
  W1AC0(); // W1AC0
  Push(Read16(user_CURRENT)); // CURRENT @
  a = Pop(); // >R
  Push(Pop() + a); //  I +
  ROT(); // ROT
  OVER(); // OVER
  Push(Read16(Pop())); //  @
  SWAP(); // SWAP
  Store(); // !
  OVER(); // OVER
  SWAP(); // SWAP
  Store(); // !
  Push(a + 4); // R> 4 +
  Store(); // !
  CODE(); // (;CODE) inlined assembler code
// 0x1d29: inc    bx
// 0x1d2a: inc    bx
// 0x1d2b: push   bx
// 0x1d2c: lodsw
// 0x1d2d: mov    bx,ax
// 0x1d2f: jmp    word ptr [bx]
}


// ================================================
// 0x1d31: WORD '(EXPECT)' codep=0x224c wordp=0x1d3e params=2 returns=0
// ================================================

void _ro_EXPECT_rc_() // (EXPECT)
{
  unsigned short int i, imax, a;
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  OVER(); // OVER

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Exec("KEY_1"); // call of word 0x25d7 '(KEY)'
    Push(Pop() & 0x00ff); //  0x00ff AND
    Push(Read16(regsp)); // DUP
    Push(Pop()==8?1:0); //  8 =
    OVER(); // OVER
    Push(Pop()==0x007f?1:0); //  0x007f =
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(Read16(regsp)); // DUP
      Push(Pop()==i?1:0); //  I =
      Push(Read16(regsp)); // DUP
      Push(Pop() + (i - 1)); //  R> 1- +
      a = Pop(); // >R
      if (Pop() != 0)
      {
        Exec("BELL"); // call of word 0x266b 'BEEP'
      } else
      {
        Exec("BS"); // call of word 0x26cf '(BS)'
        SPACE(); // SPACE
        Exec("BS"); // call of word 0x26cf '(BS)'
      }
      Push(0);
      Push(0x0020);
    } else
    {
      Push(Read16(regsp)); // DUP
      Push(Pop()==0x000d?1:0); //  0x000d =
      if (Pop() != 0)
      {
        Pop(); // DROP
        Push(0);
        Push(Read16(cc_BL)); // BL
        imax = i; // LEAVE
      } else
      {
        Push(Read16(regsp)); // DUP
      }
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
      if (Pop() != 0)
      {
        Exec("EMIT"); // call of word 0x2731 '(EMIT)'
        Push(1);
        SWAP(); // SWAP
      } else
      {
        Push(Read16(regsp)); // DUP
      }
    }
    Push(a); // I
    Store(); // !
    a += Pop();
  } while(a<); // (/LOOP)

  Pop(); // DROP
}


// ================================================
// 0x1dc8: WORD '(INTERPRET)' codep=0x224c wordp=0x1dd8
// ================================================

void _ro_INTERPRET_rc_() // (INTERPRET)
{
  while(1)
  {
    _st_NAME_gt_(); // <NAME>
    Exec("_dash_FIND"); // call of word 0x17e1 '(-FIND)'
    if (Pop() != 0)
    {
      Push(Read16(user_STATE)); // STATE @
      U_st_(); // U<
      if (Pop() != 0)
      {
        Push(Pop() - 2); //  2-
        _co_(); // ,
      } else
      {
        EXECUTE(); // EXECUTE
        W21C9(); // W21C9
      }
    } else
    {
      HERE(); // HERE
      Exec("NUMBER"); // call of word 0x13d1 '(NUMBER)'
      Push(Read16(user_DPL) + 1); // DPL @ 1+
      if (Pop() != 0)
      {
        _2LITERAL(); // 2LITERAL
      } else
      {
        Pop(); // DROP
        LITERAL(); // LITERAL
      }
    }
  }
}


// ================================================
// 0x1e18: WORD '(LOAD)' codep=0x224c wordp=0x1e23
// ================================================

void _ro_LOAD_rc_() // (LOAD)
{
  unsigned short int a, b;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  ABORT("Not loadable", 12);// (ABORT")
  Push(Read16(user_BLK)); // BLK @
  a = Pop(); // >R
  Push(Read16(user__gt_IN)); // >IN @
  b = Pop(); // >R
  Push(0);
  Push(user__gt_IN); // >IN
  Store(); // !
  Push(user_BLK); // BLK
  Store(); // !
  Exec("INTERPRET"); // call of word 0x1dd8 '(INTERPRET)'
  Push(b); // R>
  Push(user__gt_IN); // >IN
  Store(); // !
  Push(a); // R>
  Push(user_BLK); // BLK
  Store(); // !
}


// ================================================
// 0x1e5c: WORD '(WHERE)' codep=0x224c wordp=0x1e68 params=0 returns=0
// ================================================

void _ro_WHERE_rc_() // (WHERE)
{
  unsigned short int a, i, imax;
  Push(Read16(user_BLK)); // BLK @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(user_SCR); // SCR
    Store(); // !
    Exec("CR"); // call of word 0x26ee '(CR)'
    Exec("CR"); // call of word 0x26ee '(CR)'
    PRINT("Scr# ", 5); // (.")
    Push(Read16(regsp)); // DUP
    Draw(); // .
    Push(Read16(user__gt_IN)); // >IN @
    Push(0x03ff);
    MIN(); // MIN
    Push(Read16(regsp)); // DUP
    Push(user_R_n_); // R#
    Store(); // !
    Push(Read16(cc_C_slash_L)); // C/L
    _slash_MOD(); // /MOD
    Push(Read16(regsp)); // DUP
    PRINT("LINE# ", 6); // (.")
    Draw(); // .
    ROT(); // ROT
    Exec("CR"); // call of word 0x26ee '(CR)'
    Exec("CR"); // call of word 0x26ee '(CR)'
    DrawLINE(); // .LINE
    Push(Read16(user__gt_IN)); // >IN @
    Push(0x03ff);
    _gt_(); // >
    Push(Pop() + Pop()); // +
  } else
  {
    Push(Read16(user__gt_IN)); // >IN @
  }
  Exec("CR"); // call of word 0x26ee '(CR)'
  HERE(); // HERE
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  _dash_(); // -
  HERE(); // HERE
  Push(Read16(a)); // R@
  Push(Pop() + Pop()); // +
  Push((Read16(Pop() + 1)&0xFF)==0x0020?1:0); //  1+ C@ 0x0020 =
  if (Pop() != 0)
  {
    Push(Pop() - 1); //  1-
  }
  SPACES(); // SPACES

  i = 0;
  imax = a; // R>
  do // (DO)
  {
    Push(0x005e);
    Exec("EMIT"); // call of word 0x2731 '(EMIT)'
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0x1efb: WORD '(WORD)' codep=0x224c wordp=0x1f06 params=1 returns=1
// ================================================

void _ro_WORD_rc_() // (WORD)
{
  unsigned short int a;
  _i_STREAM(); // 'STREAM
  SWAP(); // SWAP
  ENCLOSE(); // ENCLOSE
  _2DUP(); // 2DUP
  _gt_(); // >
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Pop(); Pop(); // 2DROP
    Push(0);
    HERE(); // HERE
    Store(); // !
  } else
  {
    Push(user__gt_IN); // >IN
    _plus__ex_(); // +!
    OVER(); // OVER
    _dash_(); // -
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    HERE(); // HERE
    C_ex__2(); // C!_2
    Push(Pop() + Pop()); // +
    HERE(); // HERE
    Push(Pop() + 1); //  1+
    Push(a); // R>
    Push(Read16(regsp)); // DUP
    Push(0x00ff);
    _gt_(); // >
    Push(Pop() & (((Read16(user_MSGFLAGS) & 4)==0?1:0)==0?1:0)); //  MSGFLAGS @ 4 AND 0= 0= AND
    ABORT("Input > 255 characters", 22);// (ABORT")
    Push(Pop() + 1); //  1+
    CMOVE_2(); // CMOVE_2
  }
  HERE(); // HERE
}


// ================================================
// 0x1f73: WORD '+LOOP' codep=0x224c wordp=0x1f7d
// ================================================

void _plus_LOOP() // +LOOP
{
  Push(3);
  IsPAIRS(); // ?PAIRS
  COMPILE(0x155c); // compile?
  HERE(); // HERE
  _dash_(); // -
  _co_(); // ,
}


// ================================================
// 0x1f8f: WORD ',' codep=0x224c wordp=0x1f95
// ================================================

void _co_() // ,
{
  HERE(); // HERE
  Store(); // !
  Push(2);
  Push(user_DP); // DP
  _plus__ex_(); // +!
  W21C9(); // W21C9
}


// ================================================
// 0x1fa3: WORD '/LOOP' codep=0x224c wordp=0x1fad
// ================================================

void _slash_LOOP() // /LOOP
{
  Push(3);
  IsPAIRS(); // ?PAIRS
  COMPILE(0x1591); // compile?
  HERE(); // HERE
  _dash_(); // -
  _co_(); // ,
}


// ================================================
// 0x1fbf: WORD ';' codep=0x224c wordp=0x1fc5
// ================================================

void _sc_() // ;
{
  IsCSP(); // ?CSP
  COMPILE(0x1690); // compile?
  SMUDGE(); // SMUDGE
  _bo_(); // [
}


// ================================================
// 0x1fd1: WORD '?COMP' codep=0x224c wordp=0x1fdb params=0 returns=0
// ================================================

void IsCOMP() // ?COMP
{
  Push(!Read16(user_STATE)); // STATE @ NOT
  ABORT("Compile only", 12);// (ABORT")
}


// ================================================
// 0x1ff2: WORD 'W1FF4' codep=0x224c wordp=0x1ff4 params=0 returns=0
// ================================================

void W1FF4() // W1FF4
{
  HERE(); // HERE
  Push(-((Read16(Pop())&0xFF)==0?1:0) & (Read16(user_MSGFLAGS) & 0x0010)); //  C@ 0= NEGATE MSGFLAGS @ 0x0010 AND AND
  ABORT("You can't redefine 'return'", 27);// (ABORT")
}


// ================================================
// 0x2028: WORD '?CSP' codep=0x224c wordp=0x2031 params=0 returns=0
// ================================================

void IsCSP() // ?CSP
{
  SP_at_(); // SP@
  Push(Pop() - Read16(user_CSP)); //  CSP @ -
  ABORT("Definition not finished", 23);// (ABORT")
}


// ================================================
// 0x2055: WORD 'W2057' codep=0x224c wordp=0x2057 params=0 returns=0
// ================================================

void W2057() // W2057
{
  Push(Read16(user_CURRENT)); // CURRENT @
  Is_bo_PTR_bc_(); // ?[PTR]
  ABORT("No current vocabulary", 21);// (ABORT")
}


// ================================================
// 0x2077: WORD '?LOADING' codep=0x224c wordp=0x2084 params=0 returns=0
// ================================================

void IsLOADING() // ?LOADING
{
  Push(!Read16(user_BLK)); // BLK @ NOT
  ABORT("Loading only", 12);// (ABORT")
}


// ================================================
// 0x209b: WORD '?PAIRS' codep=0x224c wordp=0x20a6 params=2 returns=0
// ================================================

void IsPAIRS() // ?PAIRS
{
  _dash_(); // -
  ABORT("Conditionals not paired", 23);// (ABORT")
}


// ================================================
// 0x20c4: WORD 'W20C6' codep=0x224c wordp=0x20c6 params=0 returns=0
// ================================================

void W20C6() // W20C6
{
  Push(Read16(user_MSGFLAGS) & (1 | 2)); // MSGFLAGS @ 1 2 OR AND
  if (Pop() == 0) return;
  _plus_FIND(); // +FIND
  if (Pop() != 0)
  {
    Push(1);
  } else
  {
    Push(Read16(user_MSGFLAGS) & 2); // MSGFLAGS @ 2 AND
    if (Pop() != 0)
    {
      Exec("_dash_FIND"); // call of word 0x17e1 '(-FIND)'
    } else
    {
      Push(0);
    }
  }
  if (Pop() == 0) return;
  Pop(); Pop(); // 2DROP
  HERE(); // HERE
  COUNT(); // COUNT
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" isn't unique ", 14); // (.")
}


// ================================================
// 0x211b: WORD 'ABORT"' codep=0x224c wordp=0x2126
// ================================================

void ABORT_qm_() // ABORT"
{
  IsCOMP(); // ?COMP
  COMPILE(0x1c13); // compile?
  _i_STREAM(); // 'STREAM
  Push((Read16(Pop())&0xFF)==0x0022?1:0); //  C@ 0x0022 =
  if (Pop() != 0)
  {
    Push(1);
    Push(user__gt_IN); // >IN
    _plus__ex_(); // +!
    Push(0);
    C_co_(); // C,
    return;
  }
  Push(0x0022);
  Exec("WORD"); // call of word 0x1f06 '(WORD)'
  Push(Read16(regsp)); // DUP
  Push((Read16(Pop())&0xFF) + 1); //  C@ 1+
  SWAP(); // SWAP
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  Push(!((Read16(Pop())&0xFF)==0x0022?1:0)); //  C@ 0x0022 = NOT
  W0B30(); // W0B30
  ALLOT(); // ALLOT
}


// ================================================
// 0x216a: WORD 'AGAIN' codep=0x224c wordp=0x2174
// ================================================

void AGAIN() // AGAIN
{
  Push(1);
  IsPAIRS(); // ?PAIRS
  COMPILE(0x1660); // compile?
  HERE(); // HERE
  _dash_(); // -
  _co_(); // ,
}


// ================================================
// 0x2184: WORD 'ALLOT' codep=0x224c wordp=0x218e params=1 returns=0
// ================================================

void ALLOT() // ALLOT
{
  Push(Read16(regsp)); // DUP
  W0AD9(); // W0AD9
  Push(user_DP); // DP
  _plus__ex_(); // +!
}


// ================================================
// 0x2198: WORD 'BEGIN' codep=0x224c wordp=0x21a2 params=0 returns=2
// ================================================

void BEGIN() // BEGIN
{
  IsCOMP(); // ?COMP
  HERE(); // HERE
  Push(1);
}


// ================================================
// 0x21aa: WORD 'C,' codep=0x224c wordp=0x21b1 params=1 returns=0
// ================================================

void C_co_() // C,
{
  HERE(); // HERE
  C_ex__2(); // C!_2
  Push(1);
  ALLOT(); // ALLOT
}


// ================================================
// 0x21bb: WORD 'CFA' codep=0x224c wordp=0x21c3 params=1 returns=1
// ================================================

void CFA() // CFA
{
  Push(Pop() - 2); //  2-
}


// ================================================
// 0x21c7: WORD 'W21C9' codep=0x21c9 wordp=0x21c9
// ================================================
// 0x21c9: mov    ax,[0A0B] // #SPACE
// 0x21cc: add    ax,[di+04]
// 0x21cf: jo     21E0
// 0x21d1: cmp    ax,sp
// 0x21d3: ja     21E0
// 0x21d5: mov    ax,[di]
// 0x21d7: cmp    ax,sp
// 0x21d9: jb     21E0
// 0x21db: lodsw
// 0x21dc: mov    bx,ax
// 0x21de: jmp    word ptr [bx]
// 0x21e0: mov    bx,0B10
// 0x21e3: jmp    word ptr [bx]

// ================================================
// 0x21e5: WORD 'COMPILE' codep=0x224c wordp=0x21f1
// ================================================

void COMPILE() // COMPILE
{
  unsigned short int a;
  IsCOMP(); // ?COMP
  Push(callp0); // R>
  Push(Read16(regsp)); // DUP
  Push(Pop() + 2); //  2+
  a = Pop(); // >R
  Push(Read16(Pop())); //  @
  _co_(); // ,
}


// ================================================
// 0x2201: WORD 'CONSTANT' codep=0x224c wordp=0x220e
// ================================================

void CONSTANT() // CONSTANT
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  _co_(); // ,
  CODE(); // (;CODE) inlined assembler code
// 0x2214: inc    bx
// 0x2215: inc    bx
// 0x2216: push   word ptr [bx]
// 0x2218: lodsw
// 0x2219: mov    bx,ax
// 0x221b: jmp    word ptr [bx]
}


// ================================================
// 0x221d: WORD 'DO' codep=0x224c wordp=0x2224
// ================================================

void DO() // DO
{
  COMPILE(0x15b8); // compile?
  HERE(); // HERE
  Push(3);
}


// ================================================
// 0x2230: WORD ':' codep=0x224c wordp=0x2236
// ================================================

void _c_() // :
{
  SP_at_(); // SP@
  Push(user_CSP); // CSP
  Store(); // !
  Push(Read16(user_CURRENT)); // CURRENT @
  Push(user_CONTEXT); // CONTEXT
  Store(); // !
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  SMUDGE(); // SMUDGE
  _bc_(); // ]
  CODE(); // (;CODE) inlined assembler code
// 0x224c: inc    bx
// 0x224d: inc    bx
// 0x224e: dec    bp
// 0x224f: dec    bp
// 0x2250: mov    [bp+00],si
// 0x2253: mov    si,bx
// 0x2255: lodsw
// 0x2256: mov    bx,ax
// 0x2258: jmp    word ptr [bx]
}


// ================================================
// 0x225a: WORD 'DOES>' codep=0x224c wordp=0x2264
// ================================================

void DOES_gt_() // DOES>
{
  IsCSP(); // ?CSP
  COMPILE(0x1bfa); // compile?
  Push(0x00e8);
  C_co_(); // C,
  Push(0x1649);
  HERE(); // HERE
  Push(Pop() + 2); //  2+
  _dash_(); // -
  _co_(); // ,
}


// ================================================
// 0x227e: WORD 'ELSE' codep=0x224c wordp=0x2287
// ================================================

void ELSE() // ELSE
{
  Push(2);
  IsPAIRS(); // ?PAIRS
  COMPILE(0x1660); // compile?
  HERE(); // HERE
  Push(0);
  _co_(); // ,
  SWAP(); // SWAP
  Push(2);
  THEN(); // THEN
  Push(2);
}


// ================================================
// 0x229f: WORD 'ENCLOSE' codep=0x22ab wordp=0x22ab params=2 returns=4
// ================================================
// 0x22ab: pop    ax
// 0x22ac: pop    bx
// 0x22ad: push   bx
// 0x22ae: sub    ah,ah
// 0x22b0: mov    dx,FFFF
// 0x22b3: dec    bx
// 0x22b4: inc    bx
// 0x22b5: inc    dx
// 0x22b6: cmp    al,[bx]
// 0x22b8: jz     22B4
// 0x22ba: push   dx
// 0x22bb: cmp    ah,[bx]
// 0x22bd: jnz    22C9
// 0x22bf: mov    ax,dx
// 0x22c1: inc    dx
// 0x22c2: push   dx
// 0x22c3: push   ax
// 0x22c4: lodsw
// 0x22c5: mov    bx,ax
// 0x22c7: jmp    word ptr [bx]
// 0x22c9: inc    bx
// 0x22ca: inc    dx
// 0x22cb: cmp    al,[bx]
// 0x22cd: jz     22DC
// 0x22cf: cmp    ah,[bx]
// 0x22d1: jnz    22C9
// 0x22d3: mov    ax,dx
// 0x22d5: push   dx
// 0x22d6: push   ax
// 0x22d7: lodsw
// 0x22d8: mov    bx,ax
// 0x22da: jmp    word ptr [bx]
// 0x22dc: mov    ax,dx
// 0x22de: inc    ax
// 0x22df: push   dx
// 0x22e0: push   ax
// 0x22e1: lodsw
// 0x22e2: mov    bx,ax
// 0x22e4: jmp    word ptr [bx]

// ================================================
// 0x22e6: WORD 'HERE' codep=0x224c wordp=0x22ef params=0 returns=1
// ================================================

void HERE() // HERE
{
  Push(Read16(user_DP)); // DP @
}


// ================================================
// 0x22f5: WORD 'HEX' codep=0x224c wordp=0x22fd params=0 returns=0
// ================================================

void HEX() // HEX
{
  Push(0x0010);
  Push(user_BASE); // BASE
  Store(); // !
}


// ================================================
// 0x2307: WORD 'IF' codep=0x224c wordp=0x230e
// ================================================

void IF() // IF
{
  COMPILE(0x15fa); // compile?
  HERE(); // HERE
  Push(0);
  _co_(); // ,
  Push(2);
}


// ================================================
// 0x231c: WORD 'IMMEDIATE' codep=0x224c wordp=0x232a params=0 returns=0
// ================================================

void IMMEDIATE() // IMMEDIATE
{
  LATEST(); // LATEST
  Push(0x0040);
  TOGGLE(); // TOGGLE
}


// ================================================
// 0x2334: WORD 'LATEST' codep=0x224c wordp=0x233f params=0 returns=1
// ================================================

void LATEST() // LATEST
{
  Push(Read16(Read16(user_CURRENT) + 4)); // CURRENT @ 4 + @
}


// ================================================
// 0x234d: WORD 'LFA' codep=0x224c wordp=0x2355 params=1 returns=1
// ================================================

void LFA() // LFA
{
  NFA(); // NFA
  Push(Pop() - 2); //  2-
}


// ================================================
// 0x235b: WORD 'LITERAL' codep=0x224c wordp=0x2367
// ================================================

void LITERAL() // LITERAL
{
  Push(Read16(user_STATE)); // STATE @
  if (Pop() != 0)
  {
    COMPILE(0x175d); // compile?
    _co_(); // ,
    return;
  }
  W21C9(); // W21C9
}


// ================================================
// 0x237d: WORD 'LOOP' codep=0x224c wordp=0x2386
// ================================================

void LOOP() // LOOP
{
  Push(3);
  IsPAIRS(); // ?PAIRS
  COMPILE(0x15d0); // compile?
  HERE(); // HERE
  _dash_(); // -
  _co_(); // ,
}


// ================================================
// 0x2398: WORD '2LITERAL' codep=0x224c wordp=0x23a5
// ================================================

void _2LITERAL() // 2LITERAL
{
  Push(Read16(user_STATE)); // STATE @
  if (Pop() != 0)
  {
    COMPILE(0x1616); // compile?
    SWAP(); // SWAP
    _co_(); // ,
    _co_(); // ,
    return;
  }
  W21C9(); // W21C9
}


// ================================================
// 0x23bf: WORD 'NFA' codep=0x224c wordp=0x23c7 params=1 returns=1
// ================================================

void NFA() // NFA
{
  Push(Pop() - 3); //  3 -
  Push(-1);
  TRAVERSE(); // TRAVERSE
}


// ================================================
// 0x23d5: WORD 'PAD' codep=0x224c wordp=0x23dd params=0 returns=1
// ================================================

void PAD() // PAD
{
  HERE(); // HERE
  Push(Pop() + 0x0044); //  0x0044 +
}


// ================================================
// 0x23e7: WORD 'PFA' codep=0x224c wordp=0x23ef params=1 returns=1
// ================================================

void PFA() // PFA
{
  Push(1);
  TRAVERSE(); // TRAVERSE
  Push(Pop() + 3); //  3 +
}


// ================================================
// 0x23fb: WORD 'QUERY' codep=0x224c wordp=0x2405 params=0 returns=0
// ================================================

void QUERY() // QUERY
{
  Push(Read16(user_TIB)); // TIB @
  Push(0x0050);
  Exec("EXPECT"); // call of word 0x1d3e '(EXPECT)'
  Push(0);
  Push(user__gt_IN); // >IN
  Store(); // !
}


// ================================================
// 0x2417: WORD 'QUIT' codep=0x224c wordp=0x2420 params=0 returns=0
// ================================================

void QUIT() // QUIT
{
  BYE(); // BYE
  Push(user_BLK); // BLK
  Store(); // !
  Push(Read16(user_STATE)); // STATE @
  _bo_(); // [
  if (Pop() != 0)
  {
    LATEST(); // LATEST
    Push((Read16(Pop())&0xFF) & 0x0020); //  C@ 0x0020 AND
    if (Pop() != 0)
    {
      LATEST(); // LATEST
      _ro_FORGET_rc_(); // (FORGET)
    }
  }
  while(1)
  {
    Exec("CR"); // call of word 0x26ee '(CR)'
    RP_ex_(); // RP!
    QUERY(); // QUERY
    Exec("INTERPRET"); // call of word 0x1dd8 '(INTERPRET)'
    Push(Read16(user_STATE)==0?1:0); // STATE @ 0=
    if (Pop() != 0)
    {
      W03C3(); // W03C3
    }
  }
}


// ================================================
// 0x245c: WORD 'REPEAT' codep=0x224c wordp=0x2467
// ================================================

void REPEAT() // REPEAT
{
  unsigned short int a, b;
  a = Pop(); // >R
  b = Pop(); // >R
  AGAIN(); // AGAIN
  Push(b); // R>
  Push(a - 2); // R> 2-
  THEN(); // THEN
}


// ================================================
// 0x2477: WORD 'SMUDGE' codep=0x224c wordp=0x2482 params=0 returns=0
// ================================================

void SMUDGE() // SMUDGE
{
  LATEST(); // LATEST
  Push(0x0020);
  TOGGLE(); // TOGGLE
}


// ================================================
// 0x248c: WORD 'TEXT' codep=0x224c wordp=0x2495 params=1 returns=0
// ================================================

void TEXT() // TEXT
{
  HERE(); // HERE
  Push(Read16(cc_C_slash_L) + 1); // C/L 1+
  BLANK(); // BLANK
  Exec("WORD"); // call of word 0x1f06 '(WORD)'
  Push(Read16(cc_BL)); // BL
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  Push(Pop() + Pop()); // +
  Push(Pop() + 1); //  1+
  C_ex__2(); // C!_2
  PAD(); // PAD
  Push(Read16(cc_C_slash_L) + 1); // C/L 1+
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0x24b7: WORD 'THEN' codep=0x224c wordp=0x24c0 params=2 returns=0
// ================================================

void THEN() // THEN
{
  IsCOMP(); // ?COMP
  Push(2);
  IsPAIRS(); // ?PAIRS
  HERE(); // HERE
  OVER(); // OVER
  _dash_(); // -
  SWAP(); // SWAP
  Store(); // !
}


// ================================================
// 0x24d2: WORD 'TRAVERSE' codep=0x224c wordp=0x24df params=2 returns=1
// ================================================

void TRAVERSE() // TRAVERSE
{
  SWAP(); // SWAP
  do
  {
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Push(0x007f);
    OVER(); // OVER
    Push(Read16(Pop())&0xFF); //  C@
    _st_(); // <
  } while(Pop() == 0);
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0x24f9: WORD 'UNTIL' codep=0x224c wordp=0x2503
// ================================================

void UNTIL() // UNTIL
{
  Push(1);
  IsPAIRS(); // ?PAIRS
  COMPILE(0x15fa); // compile?
  HERE(); // HERE
  _dash_(); // -
  _co_(); // ,
}


// ================================================
// 0x2513: WORD 'VARIABLE' codep=0x224c wordp=0x2520
// ================================================

void VARIABLE() // VARIABLE
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  Push(2);
  ALLOT(); // ALLOT
}


// ================================================
// 0x2528: WORD 'WHILE' codep=0x224c wordp=0x2532
// ================================================

void WHILE() // WHILE
{
  IF(); // IF
  Push(Pop() + 2); //  2+
}


// ================================================
// 0x2538: WORD '' codep=0x224c wordp=0x253e params=0 returns=0
// ================================================

void () // 
{
  Push(Read16(user_BLK)); // BLK @
  if (Pop() != 0)
  {
    Push(Read16(user_STATE)); // STATE @
    W0B30(); // W0B30
  }
  Push(callp0); // R>
  Pop(); // DROP
}


// ================================================
// 0x2552: WORD '[' codep=0x224c wordp=0x2558 params=0 returns=0
// ================================================

void _bo_() // [
{
  Push(0);
  Push(user_STATE); // STATE
  Store(); // !
}


// ================================================
// 0x2560: WORD '[COMPILE]' codep=0x224c wordp=0x256e
// ================================================

void _bo_COMPILE_bc_() // [COMPILE]
{
  IsCOMP(); // ?COMP
  IsFIND(); // ?FIND
  CFA(); // CFA
  _co_(); // ,
}


// ================================================
// 0x2578: WORD '\' codep=0x224c wordp=0x257e params=0 returns=0
// ================================================

void _bs_() // \
{
  Push(Read16(user__gt_IN)); // >IN @
  Push(0x0040);
  _slash_MOD(); // /MOD
  SWAP(); // SWAP
  if (Pop() != 0)
  {
    Push(Pop() + 1); //  1+
  }
  Push(Pop() * 0x0040); //  0x0040 *
  Push(user__gt_IN); // >IN
  Store(); // !
}


// ================================================
// 0x259c: WORD ']' codep=0x224c wordp=0x25a2 params=0 returns=0
// ================================================

void _bc_() // ]
{
  Push(0x00c0);
  Push(user_STATE); // STATE
  Store(); // !
}


// ================================================
// 0x25ac: WORD '(?TERMINAL)' codep=0x25bc wordp=0x25bc
// ================================================
// 0x25bc: mov    ah,01
// 0x25be: int    16
// 0x25c0: mov    ax,0001
// 0x25c3: jnz    25C7
// 0x25c5: sub    ax,ax
// 0x25c7: push   ax
// 0x25c8: lodsw
// 0x25c9: mov    bx,ax
// 0x25cb: jmp    word ptr [bx]

// ================================================
// 0x25cd: WORD '(KEY)' codep=0x25d7 wordp=0x25d7 params=0 returns=1
// ================================================
// 0x25d7: mov    ah,01
// 0x25d9: int    16
// 0x25db: jz     25D7
// 0x25dd: sub    ax,ax
// 0x25df: int    16
// 0x25e1: mov    cx,ax
// 0x25e3: sub    ah,ah
// 0x25e5: or     al,al
// 0x25e7: jnz    25ED
// 0x25e9: mov    al,ch
// 0x25eb: mov    ah,01
// 0x25ed: push   ax
// 0x25ee: lodsw
// 0x25ef: mov    bx,ax
// 0x25f1: jmp    word ptr [bx]

// ================================================
// 0x25f3: WORD 'BEEPMS' codep=0x1d29 wordp=0x25fe
// ================================================
// 0x25fe: db 0x96 0x00 '  '

// ================================================
// 0x2600: WORD 'BEEPTONE' codep=0x1d29 wordp=0x260d
// ================================================
// 0x260d: db 0x33 0x05 '3 '

// ================================================
// 0x260f: WORD 'TONE' codep=0x2618 wordp=0x2618 params=1 returns=0
// ================================================
// 0x2618: pop    cx
// 0x2619: mov    al,B6
// 0x261b: mov    dx,0043
// 0x261e: cli    
// 0x261f: out    dx,al
// 0x2620: dec    dx
// 0x2621: mov    al,cl
// 0x2623: out    dx,al
// 0x2624: mov    al,ch
// 0x2626: out    dx,al
// 0x2627: sti    
// 0x2628: lodsw
// 0x2629: mov    bx,ax
// 0x262b: jmp    word ptr [bx]

// ================================================
// 0x262d: WORD 'BEEPON_2' codep=0x2638 wordp=0x2638 params=0 returns=0
// ================================================
// 0x2638: cli    
// 0x2639: mov    dx,0061
// 0x263c: in     al,dx
// 0x263d: or     al,03
// 0x2640: out    dx,al
// 0x2641: sti    
// 0x2642: lodsw
// 0x2643: mov    bx,ax
// 0x2645: jmp    word ptr [bx]

// ================================================
// 0x2647: WORD 'BEEPOFF' codep=0x2653 wordp=0x2653 params=0 returns=0
// ================================================
// 0x2653: cli    
// 0x2654: mov    dx,0061
// 0x2657: in     al,dx
// 0x2658: and    al,FC
// 0x265b: out    dx,al
// 0x265c: sti    
// 0x265d: lodsw
// 0x265e: mov    bx,ax
// 0x2660: jmp    word ptr [bx]

// ================================================
// 0x2662: WORD 'BEEP' codep=0x224c wordp=0x266b params=0 returns=0
// ================================================

void BEEP() // BEEP
{
  Push(Read16(pp_IsSOUND)); // ?SOUND @
  if (Pop() == 0) return;
  Push(Read16(pp_BEEPTONE)); // BEEPTONE @
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2
  Push(Read16(pp_BEEPMS)); // BEEPMS @
  MS(); // MS
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0x2685: WORD '(TYPE)' codep=0x224c wordp=0x2690 params=2 returns=0
// ================================================

void _ro_TYPE_rc_() // (TYPE)
{
  unsigned short int a;
  while(1)
  {
    Push(Read16(regsp)); // DUP
    if (Pop() == 0) break;

    _2DUP(); // 2DUP
    Push(((Read16(user_COLMAX)&0xFF) - (Read16(user_COL)&0xFF)) + 1); // COLMAX C@ COL C@ - 1+
    UMIN(); // UMIN
    a = Pop(); // >R
    CUR_gt_ADDR(); // CUR>ADDR
    Push(Read16(a)); // R@
    _gt_VMOVE(); // >VMOVE
    Push(Read16(a)); // R@
    CURFWD(); // CURFWD
    Push(Read16(a)); // R@
    _dash_(); // -
    SWAP(); // SWAP
    Push(Pop() + a); //  R> +
    SWAP(); // SWAP
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0x26c6: WORD '(BS)' codep=0x224c wordp=0x26cf params=0 returns=0
// ================================================

void _ro_BS_rc_() // (BS)
{
  IsPOSITION(); // ?POSITION
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Pop() - 1); //  1-
    Exec("POSITION"); // call of word 0x2767 '(POSITION)'
    return;
  }
  Pop(); Pop(); // 2DROP
  BEEP(); // BEEP
}


// ================================================
// 0x26e5: WORD '(CR)' codep=0x224c wordp=0x26ee params=0 returns=0
// ================================================

void _ro_CR_rc_() // (CR)
{
  IsPOSITION(); // ?POSITION
  Pop(); // DROP
  Push(Read16(regsp)); // DUP
  Push(Pop()==(Read16(user_ROWMAX)&0xFF)?1:0); //  ROWMAX C@ =
  if (Pop() != 0)
  {
    Push(1);
    SCROLLUP(); // SCROLLUP
  } else
  {
    Push(Pop() + 1); //  1+
  }
  Push(0);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
}

// 0x270e: mov    bx,[di+1A]
// 0x2711: mov    al,[di+1C]
// 0x2714: add    al,bl
// 0x2716: mov    bl,50
// 0x2718: mul    bl
// 0x271a: mov    bl,bh
// 0x271c: mov    bh,[di+1D]
// 0x271f: add    bl,bh
// 0x2721: sub    bh,bh
// 0x2723: add    ax,bx
// 0x2725: ret    


// ================================================
// 0x2726: WORD '(EMIT)' codep=0x224c wordp=0x2731 params=1 returns=0
// ================================================

void _ro_EMIT_rc_() // (EMIT)
{
  Push(Pop() + Read16(user_ATTRIBUTE)); //  ATTRIBUTE @ +
  CUR_gt_ADDR(); // CUR>ADDR
  V_ex_(); // V!
  Push(1);
  CURFWD(); // CURFWD
}


// ================================================
// 0x2741: WORD '(PAGE)' codep=0x224c wordp=0x274c params=0 returns=0
// ================================================

void _ro_PAGE_rc_() // (PAGE)
{
  Push(0);
  SCROLLUP(); // SCROLLUP
  Push(0);
  Push(0);
  _ro_POSITION_rc_(); // (POSITION)
}


// ================================================
// 0x2758: WORD '(POSITION)' codep=0x2767 wordp=0x2767 params=2 returns=0
// ================================================
// 0x2767: pop    ax
// 0x2768: mov    [di+1B],al
// 0x276b: mov    dl,al
// 0x276d: pop    ax
// 0x276e: mov    [di+1A],al
// 0x2771: mov    dh,al
// 0x2773: sub    bx,bx
// 0x2775: mov    ah,02
// 0x2777: push   bp
// 0x2778: push   si
// 0x2779: int    10
// 0x277b: pop    si
// 0x277c: pop    bp
// 0x277d: lodsw
// 0x277e: mov    bx,ax
// 0x2780: jmp    word ptr [bx]

// ================================================
// 0x2782: WORD '-TRAILING' codep=0x224c wordp=0x2790 params=2 returns=2
// ================================================

void _dash_TRAILING() // -TRAILING
{
  unsigned short int i, imax;
  Push(Read16(regsp)); // DUP

  i = 0;
  imax = Pop();
  do // (DO)
  {
    _2DUP(); // 2DUP
    Push(Pop() + Pop()); // +
    Push((Read16(Pop() - 1)&0xFF) - Read16(cc_BL)); //  1- C@ BL -
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    } else
    {
      Push(Pop() - 1); //  1-
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0x27b4: WORD '.' codep=0x224c wordp=0x27ba params=1 returns=0
// ================================================

void Draw() // .
{
  S_dash__gt_D(); // S->D
  D_dot_(); // D.
}


// ================================================
// 0x27c0: WORD '.LINE' codep=0x224c wordp=0x27ca params=1 returns=0
// ================================================

void DrawLINE() // .LINE
{
  BLOCK_1(); // BLOCK_1
  SWAP(); // SWAP
  Push(Pop() * Read16(cc_C_slash_L)); //  C/L *
  Push(Pop() + Pop()); // +
  Push(Read16(cc_C_slash_L)); // C/L
  _dash_TRAILING(); // -TRAILING
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0x27dc: WORD '.R' codep=0x224c wordp=0x27e3 params=2 returns=0
// ================================================

void DrawR() // .R
{
  unsigned short int a;
  a = Pop(); // >R
  S_dash__gt_D(); // S->D
  Push(a); // R>
  D_dot_R(); // D.R
}


// ================================================
// 0x27ed: WORD '>VMOVE' codep=0x27f8 wordp=0x27f8
// ================================================
// 0x27f8: mov    ax,[di+18]
// 0x27fb: mov    es,ax
// 0x27fd: mov    ax,[di+20]
// 0x2800: mov    dx,di
// 0x2802: mov    bx,si
// 0x2804: pop    cx
// 0x2805: pop    di
// 0x2806: pop    si
// 0x2807: jcxz   2813
// 0x2809: mov    al,[si]
// 0x280b: es:    
// 0x280c: mov    [di],ax
// 0x280e: inc    si
// 0x280f: inc    di
// 0x2810: inc    di
// 0x2811: loop   2809
// 0x2813: mov    si,bx
// 0x2815: mov    di,dx
// 0x2817: lodsw
// 0x2818: mov    bx,ax
// 0x281a: jmp    word ptr [bx]

// ================================================
// 0x281c: WORD '?' codep=0x224c wordp=0x2822 params=1 returns=0
// ================================================

void Is() // ?
{
  Push(Read16(Pop())); //  @
  Draw(); // .
}


// ================================================
// 0x2828: WORD '?POSITION' codep=0x2836 wordp=0x2836 params=0 returns=2
// ================================================
// 0x2836: sub    ax,ax
// 0x2838: mov    al,[di+1A]
// 0x283b: push   ax
// 0x283c: mov    al,[di+1B]
// 0x283f: push   ax
// 0x2840: lodsw
// 0x2841: mov    bx,ax
// 0x2843: jmp    word ptr [bx]

// ================================================
// 0x2845: WORD 'CUR>ADDR' codep=0x2852 wordp=0x2852 params=0 returns=1
// ================================================
// 0x2852: call   270E
// 0x2855: shl    ax,1
// 0x2857: push   ax
// 0x2858: lodsw
// 0x2859: mov    bx,ax
// 0x285b: jmp    word ptr [bx]

// ================================================
// 0x285d: WORD 'CURFWD' codep=0x224c wordp=0x2868 params=1 returns=0
// ================================================

void CURFWD() // CURFWD
{
  unsigned short int i, imax;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    IsPOSITION(); // ?POSITION
    Push(Read16(regsp)); // DUP
    Push(Read16(user_COLMAX)); // COLMAX @
    _st_(); // <
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
      Exec("CR"); // call of word 0x26ee '(CR)'
    } else
    {
      Push(Pop() + 1); //  1+
      Exec("POSITION"); // call of word 0x2767 '(POSITION)'
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0x288e: WORD 'D.' codep=0x224c wordp=0x2895 params=2 returns=0
// ================================================

void D_dot_() // D.
{
  Push(0);
  D_dot_R(); // D.R
  SPACE(); // SPACE
}


// ================================================
// 0x289d: WORD 'D.R' codep=0x224c wordp=0x28a5 params=3 returns=0
// ================================================

void D_dot_R() // D.R
{
  unsigned short int a;
  Push(3);
  IsENOUGH(); // ?ENOUGH
  a = Pop(); // >R
  SWAP(); // SWAP
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  D_plus__dash_(); // D+-
  _st__n_(); // <#
  _n_S(); // #S
  ROT(); // ROT
  SIGN(); // SIGN
  _n__gt_(); // #>
  Push(a); // R>
  OVER(); // OVER
  _dash_(); // -
  SPACES(); // SPACES
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0x28cb: WORD 'ID.' codep=0x224c wordp=0x28d3 params=1 returns=0
// ================================================

void ID_dot_() // ID.
{
  unsigned short int i, imax;
  HERE(); // HERE
  Push(0x0020);
  Push(0x005f);
  FILL_2(); // FILL_2
  Push(Read16(regsp)); // DUP
  Push(1);
  TRAVERSE(); // TRAVERSE
  OVER(); // OVER
  _dash_(); // -
  OVER(); // OVER
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Push((Read16(Pop())&0xFF) & 0x007f); //  C@ 0x007f AND
    Push(i); // I
    HERE(); // HERE
    Push(Pop() + Pop()); // +
    C_ex__2(); // C!_2
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  HERE(); // HERE
  SWAP(); // SWAP
  Push((Read16(Pop())&0xFF) & 0x001f); //  C@ 0x001f AND
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0x291f: WORD 'LIST' codep=0x224c wordp=0x2928
// ================================================

void LIST() // LIST
{
  unsigned short int i, imax;
  Exec("CR"); // call of word 0x26ee '(CR)'
  Push(Read16(regsp)); // DUP
  Push(user_SCR); // SCR
  Store(); // !
  PRINT("Scr #", 5); // (.")
  Draw(); // .

  i = 0;
  imax = 0x0010;
  do // (DO)
  {
    Exec("CR"); // call of word 0x26ee '(CR)'
    Push(i); // I
    Push(3);
    DrawR(); // .R
    SPACE(); // SPACE
    Push(i); // I
    Push(Read16(user_SCR)); // SCR @
    DrawLINE(); // .LINE
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  Exec("CR"); // call of word 0x26ee '(CR)'
}


// ================================================
// 0x2966: WORD 'SCROLLUP' codep=0x2973 wordp=0x2973 params=1 returns=0
// ================================================
// 0x2973: pop    ax
// 0x2974: mov    ah,06
// 0x2976: sub    cx,cx
// 0x2978: mov    dh,[di+1E]
// 0x297b: mov    dl,[di+1F]
// 0x297e: mov    bx,[di+20]
// 0x2981: push   bp
// 0x2982: push   si
// 0x2983: int    10
// 0x2985: pop    si
// 0x2986: pop    bp
// 0x2987: lodsw
// 0x2988: mov    bx,ax
// 0x298a: jmp    word ptr [bx]

// ================================================
// 0x298c: WORD 'SPACE' codep=0x224c wordp=0x2996 params=0 returns=0
// ================================================

void SPACE() // SPACE
{
  Push(Read16(cc_BL)); // BL
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0x299c: WORD 'SPACES' codep=0x224c wordp=0x29a7 params=1 returns=0
// ================================================

void SPACES() // SPACES
{
  unsigned short int i, imax;
  Push(0);
  MAX(); // MAX
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    SPACE(); // SPACE
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0x29bd: WORD 'U.' codep=0x224c wordp=0x29c4 params=1 returns=0
// ================================================

void U_dot_() // U.
{
  Push(0);
  D_dot_(); // D.
}


// ================================================
// 0x29ca: WORD 'U.R' codep=0x224c wordp=0x29d2 params=2 returns=0
// ================================================

void U_dot_R() // U.R
{
  Push(0);
  SWAP(); // SWAP
  D_dot_R(); // D.R
}


// ================================================
// 0x29da: WORD 'V@' codep=0x29e1 wordp=0x29e1 params=1 returns=0
// ================================================
// 0x29e1: mov    cx,ds
// 0x29e3: mov    ax,[di+18]
// 0x29e6: mov    ds,ax
// 0x29e8: pop    bx
// 0x29e9: mov    ax,[bx]
// 0x29eb: mov    ah,00
// 0x29ed: push   ax
// 0x29ee: mov    ds,cx
// 0x29f0: lodsw
// 0x29f1: mov    bx,ax
// 0x29f3: jmp    word ptr [bx]

// ================================================
// 0x29f5: WORD 'V!' codep=0x29fc wordp=0x29fc params=2 returns=0
// ================================================
// 0x29fc: mov    cx,ds
// 0x29fe: mov    ax,[di+18]
// 0x2a01: mov    ds,ax
// 0x2a03: pop    bx
// 0x2a04: pop    ax
// 0x2a05: mov    [bx],ax
// 0x2a07: mov    ds,cx
// 0x2a09: lodsw
// 0x2a0a: mov    bx,ax
// 0x2a0c: jmp    word ptr [bx]

// ================================================
// 0x2a0e: WORD 'VFILL' codep=0x2a18 wordp=0x2a18 params=3 returns=0
// ================================================
// 0x2a18: mov    ax,[di+18]
// 0x2a1b: mov    dx,di
// 0x2a1d: mov    es,ax
// 0x2a1f: pop    ax
// 0x2a20: pop    cx
// 0x2a21: pop    di
// 0x2a22: cld    
// 0x2a23: repz   
// 0x2a24: stosw
// 0x2a25: mov    di,dx
// 0x2a27: lodsw
// 0x2a28: mov    bx,ax
// 0x2a2a: jmp    word ptr [bx]

// ================================================
// 0x2a2c: WORD 'VMOVE' codep=0x2a36 wordp=0x2a36 params=3 returns=0
// ================================================
// 0x2a36: mov    ax,[di+18]
// 0x2a39: mov    dx,di
// 0x2a3b: mov    es,ax
// 0x2a3d: mov    ds,ax
// 0x2a3f: pop    cx
// 0x2a40: pop    di
// 0x2a41: mov    bx,si
// 0x2a43: pop    si
// 0x2a44: repz   
// 0x2a45: movsw
// 0x2a46: mov    si,bx
// 0x2a48: mov    di,dx
// 0x2a4a: mov    ax,cs
// 0x2a4c: mov    ds,ax
// 0x2a4e: cld    
// 0x2a4f: lodsw
// 0x2a50: mov    bx,ax
// 0x2a52: jmp    word ptr [bx]

// ================================================
// 0x2a54: WORD 'VMOVE-' codep=0x2a5f wordp=0x2a5f
// ================================================
// 0x2a5f: mov    bx,[2A34]
// 0x2a63: std    
// 0x2a64: jmp    word ptr [bx]

// ================================================
// 0x2a66: WORD 'MS/TICK' codep=0x2214 wordp=0x2a72
// ================================================
// 0x2a72: dw 0x01a0

// ================================================
// 0x2a74: WORD 'TICKS/ADJ' codep=0x2214 wordp=0x2a82
// ================================================
// 0x2a82: dw 0x01ae

// ================================================
// 0x2a84: WORD 'MS/ADJ' codep=0x2214 wordp=0x2a8f
// ================================================
// 0x2a8f: dw 0x01b5

// ================================================
// 0x2a91: WORD 'TIME' codep=0x2a9a wordp=0x2a9a params=0 returns=1
// ================================================
// 0x2a9a: mov    dx,0043
// 0x2a9d: sub    ax,ax
// 0x2a9f: cli    
// 0x2aa0: out    dx,al
// 0x2aa1: mov    dx,0040
// 0x2aa4: in     al,dx
// 0x2aa5: mov    cl,al
// 0x2aa7: in     al,dx
// 0x2aa8: mov    ch,al
// 0x2aaa: neg    cx
// 0x2aac: mov    al,ch
// 0x2aae: shr    ax,1
// 0x2ab0: or     ax,ax
// 0x2ab2: rcr    ax,1
// 0x2ab4: adc    al,ah
// 0x2ab6: mov    cx,[0193]
// 0x2aba: cmp    ax,cx
// 0x2abc: jge    2AC0
// 0x2abe: mov    cx,ax
// 0x2ac0: mov    ax,[018A] // (TIME)
// 0x2ac3: add    ax,cx
// 0x2ac5: mov    [018A],ax // (TIME)
// 0x2ac8: jae    2AD4
// 0x2aca: mov    ax,[0188] // (TIME)
// 0x2acd: adc    ax,0000
// 0x2ad1: mov    [0188],ax // (TIME)
// 0x2ad4: mov    ax,[0193]
// 0x2ad7: sub    ax,cx
// 0x2ad9: jge    2ADD
// 0x2adb: sub    ax,ax
// 0x2add: mov    [0193],ax
// 0x2ae0: sti    
// 0x2ae1: mov    ax,0188
// 0x2ae4: push   ax
// 0x2ae5: lodsw
// 0x2ae6: mov    bx,ax
// 0x2ae8: jmp    word ptr [bx]

// ================================================
// 0x2aea: WORD 'MS' codep=0x224c wordp=0x2af1 params=0 returns=1
// ================================================

void MS() // MS
{
  Push(0);
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  DNEGATE(); // DNEGATE
  while(1)
  {
    _2DUP(); // 2DUP
    TIME(); // TIME
    _2_at_(); // 2@
    D_plus_(); // D+
    _0_st_(); // 0<
    if (Pop() == 0) break;

    Pop(); // DROP
  }
  Pop(); // DROP
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0x2b15: WORD '#DRIVES' codep=0x2214 wordp=0x2b21
// ================================================
// 0x2b21: dw 0x0003

// ================================================
// 0x2b23: WORD '#FCBS' codep=0x2214 wordp=0x2b2d
// ================================================
// 0x2b2d: dw 0x0002

// ================================================
// 0x2b2f: WORD '#FILES' codep=0x2214 wordp=0x2b3a
// ================================================
// 0x2b3a: dw 0x0004

// ================================================
// 0x2b3c: WORD '#SEC/TRK' codep=0x2214 wordp=0x2b49
// ================================================
// 0x2b49: dw 0x0009

// ================================================
// 0x2b4b: WORD 'DOS-FILE' codep=0x2214 wordp=0x2b58
// ================================================
// 0x2b58: dw 0x0002

// ================================================
// 0x2b5a: WORD 'RETRIES' codep=0x2214 wordp=0x2b66
// ================================================
// 0x2b66: dw 0x0008

// ================================================
// 0x2b68: WORD 'SECORIGIN' codep=0x2214 wordp=0x2b76
// ================================================
// 0x2b76: dw 0x0001

// ================================================
// 0x2b78: WORD ''SVBUF' codep=0x1d29 wordp=0x2b83
// ================================================
// 0x2b83: db 0x23 0x7b '#{'

// ================================================
// 0x2b85: WORD ''MTBUF' codep=0x1d29 wordp=0x2b90
// ================================================
// 0x2b90: db 0xb8 0xb3 '  '

// ================================================
// 0x2b92: WORD '#SECS' codep=0x1d29 wordp=0x2b9c
// ================================================
// 0x2b9c: db 0x02 0x00 '  '

// ================================================
// 0x2b9e: WORD ''FCB' codep=0x1d29 wordp=0x2ba7
// ================================================
// 0x2ba7: db 0xca 0x2d ' -'

// ================================================
// 0x2ba9: WORD ''CACHE' codep=0x1d29 wordp=0x2bb4
// ================================================
// 0x2bb4: db 0xcf 0x00 '  '

// ================================================
// 0x2bb6: WORD ''DOSMOUNT' codep=0x1d29 wordp=0x2bc4
// ================================================
// 0x2bc4: db 0x05 0x47 ' G'

// ================================================
// 0x2bc6: WORD ''DOSUNMOUNT' codep=0x1d29 wordp=0x2bd6
// ================================================
// 0x2bd6: db 0x66 0x47 'fG'

// ================================================
// 0x2bd8: WORD 'REUSEC' codep=0x1d29 wordp=0x2be3
// ================================================
// 0x2be3: db 0xcf 0x00 '  '

// ================================================
// 0x2be5: WORD '1STCACHEBUF' codep=0x1d29 wordp=0x2bf5
// ================================================
// 0x2bf5: db 0x27 0x27 ''''

// ================================================
// 0x2bf7: WORD 'BLKCACHE' codep=0x1d29 wordp=0x2c04
// ================================================
// 0x2c04: db 0xf1 0x26 ' &'

// ================================================
// 0x2c06: WORD 'DEFAULTDRV' codep=0x1d29 wordp=0x2c15
// ================================================
// 0x2c15: db 0x2c 0x6f ',o'

// ================================================
// 0x2c17: WORD 'DISK-ERROR' codep=0x1d29 wordp=0x2c26
// ================================================
// 0x2c26: db 0x00 0x00 '  '

// ================================================
// 0x2c28: WORD 'DRIVE' codep=0x1d29 wordp=0x2c32
// ================================================
// 0x2c32: db 0x03 0x00 '  '

// ================================================
// 0x2c34: WORD 'DTA' codep=0x1d29 wordp=0x2c3c
// ================================================
// 0x2c3c: db 0x00 0x01 0xf1 0x16 '    '

// ================================================
// 0x2c40: WORD 'FILE' codep=0x1d29 wordp=0x2c49
// ================================================
// 0x2c49: db 0x02 0x00 '  '

// ================================================
// 0x2c4b: WORD 'FRESH' codep=0x1d29 wordp=0x2c55
// ================================================
// 0x2c55: db 0x4c 0xc5 'L '

// ================================================
// 0x2c57: WORD 'HEAD' codep=0x1d29 wordp=0x2c60
// ================================================
// 0x2c60: db 0x00 0x00 '  '

// ================================================
// 0x2c62: WORD 'LPREV' codep=0x1d29 wordp=0x2c6c
// ================================================
// 0x2c6c: db 0xaf 0x26 ' &'

// ================================================
// 0x2c6e: WORD 'OFFSET' codep=0x1d29 wordp=0x2c79
// ================================================
// 0x2c79: db 0xd0 0x02 '  '

// ================================================
// 0x2c7b: WORD 'PREV' codep=0x1d29 wordp=0x2c84
// ================================================
// 0x2c84: db 0xaf 0x26 ' &'

// ================================================
// 0x2c86: WORD 'SEC' codep=0x1d29 wordp=0x2c8e
// ================================================
// 0x2c8e: db 0x05 0x00 '  '

// ================================================
// 0x2c90: WORD 'SEGCACHE' codep=0x1d29 wordp=0x2c9d
// ================================================
// 0x2c9d: db 0x0c 0x27 ' ''

// ================================================
// 0x2c9f: WORD 'SYSK' codep=0x1d29 wordp=0x2ca8
// ================================================
// 0x2ca8: db 0x5b 0x02 '[ '

// ================================================
// 0x2caa: WORD 'TRACK' codep=0x1d29 wordp=0x2cb4
// ================================================
// 0x2cb4: db 0x00 0x00 '  '

// ================================================
// 0x2cb6: WORD 'USE' codep=0x1d29 wordp=0x2cbe
// ================================================
// 0x2cbe: db 0x6e 0x26 'n&'

// ================================================
// 0x2cc0: WORD '=DRIVESIZES' codep=0x1d29 wordp=0x2cd0
// ================================================
// 0x2cd0: db 0x68 0x01 0x68 0x01 0x00 0x50 'h h  P'

// ================================================
// 0x2cd6: WORD 'DRIVESIZES' codep=0x224c wordp=0x2ce5 params=1 returns=1
// ================================================

void DRIVESIZES() // DRIVESIZES
{
  Push(Read16(Pop() * 2 + pp__eq_DRIVESIZES)); //  2* =DRIVESIZES + @
}


// ================================================
// 0x2cef: WORD 'BARRAY' codep=0x224c wordp=0x2cfa params=2 returns=1
// ================================================

void BARRAY() // BARRAY
{
  Push(Pop() + Pop()); // +
}


// ================================================
// 0x2cfe: WORD 'WARRAY' codep=0x224c wordp=0x2d09 params=2 returns=1
// ================================================

void WARRAY() // WARRAY
{
  SWAP(); // SWAP
  Push(Pop() * 2); //  2*
  Push(Pop() + Pop()); // +
}


// ================================================
// 0x2d11: WORD '=DRIVENUMBERS' codep=0x1d29 wordp=0x2d23
// ================================================
// 0x2d23: db 0x00 0x00 0x00 0x00 '    '

// ================================================
// 0x2d27: WORD '=FCBPFAS' codep=0x1d29 wordp=0x2d34
// ================================================
// 0x2d34: db 0x00 0x27 0x00 0x00 0x9e 0x2d 0xca 0x2d ' '   - -'

// ================================================
// 0x2d3c: WORD '=FILEBLOCKS' codep=0x1d29 wordp=0x2d4c
// ================================================
// 0x2d4c: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 '        '

// ================================================
// 0x2d54: WORD '=FILETYPES' codep=0x1d29 wordp=0x2d63
// ================================================
// 0x2d63: db 0xff 0xff 0xff 0xff '    '

// ================================================
// 0x2d67: WORD '=OFFSETS' codep=0x1d29 wordp=0x2d74
// ================================================
// 0x2d74: db 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff '        '

// ================================================
// 0x2d7c: WORD '=R/W'S' codep=0x1d29 wordp=0x2d87
// ================================================
// 0x2d87: db 0x31 0x36 0x44 0x33 0x25 0x44 0x25 0x44 '16D3%D%D'

// ================================================
// 0x2d8f: WORD 'FCB' codep=0x1d29 wordp=0x2d97
// ================================================
// 0x2d97: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x04 0x42 0x4f 0x56 0x52 0x20 0x20 0x20 0x20 0x43 0x4d 0x50 0x02 0x00 0x00 0x04 0x01 0x94 0x21 0x00 0x24 0x10 0x7c 0x85 0x00 0x03 0x02 0xa7 0x07 0x09 0x4a 0x04 0x62 0x62 0x01 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x04 0x53 0x54 0x41 0x52 0x46 0x4c 0x54 0x20 0x43 0x4f 0x4d 0x00 0x00 0xa7 0xd3 0x00 0x00 0x00 0x00 0x24 0x10 0x9a 0x85 0x00 0x03 0x42 0x00 0x00 0x7a 0x3f 0x0a 0x00 0x00 0x00 0x00 0x00 '        BOVR    CMP      ! $ |       J bb           STARFLT COM        $     B  z?      '

// ================================================
// 0x2def: WORD 'FILENAMES' codep=0x1d29 wordp=0x2dfd
// ================================================
// 0x2dfd: db 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 '                                            '

// ================================================
// 0x2e29: WORD 'DRIVENUMBERS' codep=0x224c wordp=0x2e3a params=1 returns=1
// ================================================

void DRIVENUMBERS() // DRIVENUMBERS
{
  Push(pp__eq_DRIVENUMBERS); // =DRIVENUMBERS
  BARRAY(); // BARRAY
}


// ================================================
// 0x2e40: WORD 'FCBPFAS' codep=0x224c wordp=0x2e4c params=1 returns=1
// ================================================

void FCBPFAS() // FCBPFAS
{
  Push(pp__eq_FCBPFAS); // =FCBPFAS
  WARRAY(); // WARRAY
}


// ================================================
// 0x2e52: WORD 'FILEBLOCKS' codep=0x224c wordp=0x2e61 params=1 returns=1
// ================================================

void FILEBLOCKS() // FILEBLOCKS
{
  Push(pp__eq_FILEBLOCKS); // =FILEBLOCKS
  WARRAY(); // WARRAY
}


// ================================================
// 0x2e67: WORD 'FILETYPES' codep=0x224c wordp=0x2e75 params=1 returns=1
// ================================================

void FILETYPES() // FILETYPES
{
  Push(pp__eq_FILETYPES); // =FILETYPES
  BARRAY(); // BARRAY
}


// ================================================
// 0x2e7b: WORD 'OFFSETS' codep=0x224c wordp=0x2e87 params=1 returns=1
// ================================================

void OFFSETS() // OFFSETS
{
  Push(pp__eq_OFFSETS); // =OFFSETS
  WARRAY(); // WARRAY
}


// ================================================
// 0x2e8d: WORD 'R/W'S' codep=0x224c wordp=0x2e97 params=1 returns=1
// ================================================

void R_slash_W_i_S() // R/W'S
{
  Push(pp__eq_R_slash_W_i_S); // =R/W'S
  WARRAY(); // WARRAY
}


// ================================================
// 0x2e9d: WORD 'L@' codep=0x2ea4 wordp=0x2ea4 params=2 returns=1
// ================================================
// 0x2ea4: mov    dx,ds
// 0x2ea6: pop    bx
// 0x2ea7: pop    ds
// 0x2ea8: push   word ptr [bx]
// 0x2eaa: mov    ds,dx
// 0x2eac: lodsw
// 0x2ead: mov    bx,ax
// 0x2eaf: jmp    word ptr [bx]

// ================================================
// 0x2eb1: WORD 'L!' codep=0x2eb8 wordp=0x2eb8 params=3 returns=0
// ================================================
// 0x2eb8: mov    dx,ds
// 0x2eba: pop    bx
// 0x2ebb: pop    ds
// 0x2ebc: pop    word ptr [bx]
// 0x2ebe: mov    ds,dx
// 0x2ec0: lodsw
// 0x2ec1: mov    bx,ax
// 0x2ec3: jmp    word ptr [bx]

// ================================================
// 0x2ec5: WORD 'LC@' codep=0x2ecd wordp=0x2ecd params=2 returns=1
// ================================================
// 0x2ecd: mov    dx,ds
// 0x2ecf: pop    bx
// 0x2ed0: pop    ds
// 0x2ed1: xor    ax,ax
// 0x2ed3: mov    al,[bx]
// 0x2ed5: push   ax
// 0x2ed6: mov    ds,dx
// 0x2ed8: lodsw
// 0x2ed9: mov    bx,ax
// 0x2edb: jmp    word ptr [bx]

// ================================================
// 0x2edd: WORD 'LC!' codep=0x2ee5 wordp=0x2ee5 params=3 returns=0
// ================================================
// 0x2ee5: mov    dx,ds
// 0x2ee7: pop    bx
// 0x2ee8: pop    ds
// 0x2ee9: pop    ax
// 0x2eea: mov    [bx],al
// 0x2eec: mov    ds,dx
// 0x2eee: lodsw
// 0x2eef: mov    bx,ax
// 0x2ef1: jmp    word ptr [bx]

// ================================================
// 0x2ef3: WORD 'LCMOVE' codep=0x2efe wordp=0x2efe params=5 returns=0
// ================================================
// 0x2efe: mov    [bp-02],di
// 0x2f01: mov    ax,es
// 0x2f03: mov    dx,ds
// 0x2f05: mov    bx,si
// 0x2f07: pop    cx
// 0x2f08: pop    di
// 0x2f09: pop    es
// 0x2f0a: pop    si
// 0x2f0b: pop    ds
// 0x2f0c: push   dx
// 0x2f0d: shr    cx,1
// 0x2f0f: rcl    dx,1
// 0x2f11: or     cx,cx
// 0x2f13: jz     2F17
// 0x2f15: repz   
// 0x2f16: movsw
// 0x2f17: and    dx,01
// 0x2f1a: jz     2F1D
// 0x2f1c: movsb
// 0x2f1d: mov    si,bx
// 0x2f1f: pop    ds
// 0x2f20: mov    es,ax
// 0x2f22: mov    di,[bp-02]
// 0x2f25: lodsw
// 0x2f26: mov    bx,ax
// 0x2f28: jmp    word ptr [bx]

// ================================================
// 0x2f2a: WORD '{LXCHG}' codep=0x1d29 wordp=0x2f36 params=0 returns=1
// ================================================
// 0x2f36: push   cx
// 0x2f37: es:    
// 0x2f38: mov    cx,[bx]
// 0x2f3a: xchg   ax,bx
// 0x2f3c: es:    
// 0x2f3d: xchg   [bx],cx
// 0x2f3f: xchg   ax,bx
// 0x2f41: es:    
// 0x2f42: mov    [bx],cx
// 0x2f44: pop    cx
// 0x2f45: ret    


// ================================================
// 0x2f46: WORD 'LWSCAN' codep=0x2f51 wordp=0x2f51 params=4 returns=2
// ================================================
// 0x2f51: pop    ax
// 0x2f52: pop    cx
// 0x2f53: or     cx,cx
// 0x2f55: jnz    2F5D
// 0x2f57: add    sp,04
// 0x2f5a: push   cx
// 0x2f5b: jmp    2F75
// 0x2f5d: mov    dx,es
// 0x2f5f: mov    bx,di
// 0x2f61: pop    di
// 0x2f62: pop    es
// 0x2f63: repnz  
// 0x2f64: scasw
// 0x2f65: dec    di
// 0x2f66: dec    di
// 0x2f67: es:    
// 0x2f68: cmp    ax,[di]
// 0x2f6a: jnz    2F70
// 0x2f6c: push   di
// 0x2f6d: mov    cx,0001
// 0x2f70: push   cx
// 0x2f71: mov    di,bx
// 0x2f73: mov    es,dx
// 0x2f75: lodsw
// 0x2f76: mov    bx,ax
// 0x2f78: jmp    word ptr [bx]

// ================================================
// 0x2f7a: WORD '[SEGCACHE]' codep=0x224c wordp=0x2f89 params=0 returns=2
// ================================================

void _bo_SEGCACHE_bc_() // [SEGCACHE]
{
  Push(Read16(pp__i_CACHE) * 2); // 'CACHE @ 2*
  Push(Read16(pp_SEGCACHE)); // SEGCACHE @
  SWAP(); // SWAP
}


// ================================================
// 0x2f97: WORD '[BLKCACHE]' codep=0x224c wordp=0x2fa6 params=0 returns=2
// ================================================

void _bo_BLKCACHE_bc_() // [BLKCACHE]
{
  Push(Read16(pp__i_CACHE) * 2); // 'CACHE @ 2*
  Push(Read16(pp_BLKCACHE)); // BLKCACHE @
  SWAP(); // SWAP
}


// ================================================
// 0x2fb4: WORD 'UPDATE' codep=0x224c wordp=0x2fbf params=0 returns=0
// ================================================

void UPDATE() // UPDATE
{
  Push(0x00ff);
  Push(Read16(pp_LPREV)); // LPREV @
  Push(2);
  LC_ex_(); // LC!
}


// ================================================
// 0x2fcd: WORD 'REFRESH' codep=0x224c wordp=0x2fd9 params=0 returns=0
// ================================================

void REFRESH() // REFRESH
{
  Push(pp_FRESH); // FRESH
  ON(); // ON
}


// ================================================
// 0x2fdf: WORD 'MTBUF' codep=0x224c wordp=0x2fe9 params=1 returns=0
// ================================================

void MTBUF() // MTBUF
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0);
  Push(a); // I
  Push(0);
  L_ex_(); // L!
  Push(0);
  Push(a); // I
  Push(2);
  LC_ex_(); // LC!
  Push(0x00ff);
  Push(a); // I
  Push(3);
  LC_ex_(); // LC!
  Push(-1);
  Push(a); // I
  Push(6);
  L_ex_(); // L!
  Push(0);
  Push(a); // R>
  Push(0x0408);
  L_ex_(); // L!
}


// ================================================
// 0x301f: WORD 'MTBUFFERS' codep=0x224c wordp=0x302d params=0 returns=0
// ================================================

void MTBUFFERS() // MTBUFFERS
{
  Push(Read16(pp_USE)); // USE @
  MTBUF(); // MTBUF
  Push(Read16(pp_PREV)); // PREV @
  MTBUF(); // MTBUF
}


// ================================================
// 0x303b: WORD '(BUFFER)' codep=0x3048 wordp=0x3048 params=1 returns=2
// ================================================
// 0x3048: pop    cx
// 0x3049: mov    dx,es
// 0x304b: xor    bx,bx
// 0x304d: xor    ax,ax
// 0x304f: push   word ptr [2C84] // PREV
// 0x3053: pop    es
// 0x3054: es:    
// 0x3055: cmp    [bx+06],cx
// 0x3058: jnz    3064
// 0x305a: es:    
// 0x305b: db     82
// 0x305c: jg     3061
// 0x305e: add    [di+01],dh
// 0x3061: inc    ax
// 0x3062: jmp    3084
// 0x3064: push   word ptr [2CBE] // USE
// 0x3068: pop    es
// 0x3069: es:    
// 0x306a: cmp    [bx+06],cx
// 0x306d: jnz    3084
// 0x306f: es:    
// 0x3070: db     82
// 0x3071: jg     3076
// 0x3073: add    [di+0E],dh
// 0x3076: inc    ax
// 0x3077: push   word ptr [2C84] // PREV
// 0x307b: push   es
// 0x307c: pop    word ptr [2C84] // PREV
// 0x3080: pop    word ptr [2CBE] // USE
// 0x3084: or     ax,ax
// 0x3086: jnz    308B
// 0x3088: push   cx
// 0x3089: jmp    3094
// 0x308b: push   es
// 0x308c: mov    cx,[2C84] // PREV
// 0x3090: mov    [2C6C],cx // LPREV
// 0x3094: push   ax
// 0x3095: mov    es,dx
// 0x3097: lodsw
// 0x3098: mov    bx,ax
// 0x309a: jmp    word ptr [bx]

// ================================================
// 0x309c: WORD 'ADVANCE>DEF' codep=0x30a8 wordp=0x30a8 params=1 returns=0
// ================================================
// 0x30a8: pop    ax
// 0x30a9: or     ax,ax
// 0x30ab: jz     30C4
// 0x30ad: mov    bx,ax
// 0x30af: sub    bx,02
// 0x30b2: push   es
// 0x30b3: push   word ptr [2C04] // BLKCACHE
// 0x30b7: pop    es
// 0x30b8: call   2F36
// 0x30bb: push   word ptr [2C9D] // SEGCACHE
// 0x30bf: pop    es
// 0x30c0: call   2F36
// 0x30c3: pop    es
// 0x30c4: lodsw
// 0x30c5: mov    bx,ax
// 0x30c7: jmp    word ptr [bx]

// ================================================
// 0x30c9: WORD 'MTCACHE' codep=0x224c wordp=0x30d5 params=0 returns=0
// ================================================

void MTCACHE() // MTCACHE
{
  unsigned short int i, imax;
  Push(Read16(pp__n_CACHE)); // #CACHE @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {

    i = 0;
    imax = Pop();
    do // (DO)
    {
      Push(i); // I
      Push(pp__i_CACHE); // 'CACHE
      Store(); // !
      _bo_SEGCACHE_bc_(); // [SEGCACHE]
      L_at_(); // L@
      MTBUF(); // MTBUF
      Push(-1);
      _bo_BLKCACHE_bc_(); // [BLKCACHE]
      L_ex_(); // L!
      i++;
    } while(i<imax); // (LOOP)

  }
  Push(Read16(pp__n_CACHE) - 1); // #CACHE @ 1-
  Push(pp_REUSEC); // REUSEC
  Store(); // !
}


// ================================================
// 0x3107: WORD 'INITCACHE' codep=0x224c wordp=0x3115 params=0 returns=0
// ================================================

void INITCACHE() // INITCACHE
{
  unsigned short int a, i, imax;
  Push(Read16(pp__n_CACHE)); // #CACHE @
  if (Pop() != 0)
  {
    Push(Read16(pp_BLKCACHE)); // BLKCACHE @
    Push(Read16(pp__n_CACHE) * 2); // #CACHE @ 2*
    Push(0x0010);
    _slash_(); // /
    Push(Pop() + 1); //  1+
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    Push(Pop() + Pop()); // +
    Push(Read16(regsp)); // DUP
    Push(pp_SEGCACHE); // SEGCACHE
    Store(); // !
    Push(Pop() + a); //  R> +
    Push(pp__1STCACHEBUF); // 1STCACHEBUF
    Store(); // !

    i = 0;
    imax = Read16(pp__n_CACHE); // #CACHE @
    do // (DO)
    {
      Push(i * 0x0041 + Read16(pp__1STCACHEBUF)); // I 0x0041 * 1STCACHEBUF @ +
      Push(i); // I
      Push(pp__i_CACHE); // 'CACHE
      Store(); // !
      _bo_SEGCACHE_bc_(); // [SEGCACHE]
      L_ex_(); // L!
      i++;
    } while(i<imax); // (LOOP)

  }
  MTCACHE(); // MTCACHE
}


// ================================================
// 0x316b: WORD '(CACHE)' codep=0x224c wordp=0x3177 params=1 returns=3
// ================================================

void _ro_CACHE_rc_() // (CACHE)
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Read16(pp_BLKCACHE)); // BLKCACHE @
  Push(0);
  Push(Read16(pp__n_CACHE)); // #CACHE @
  Push(a); // I
  LWSCAN(); // LWSCAN
  if (Pop() != 0)
  {
    Push(Read16(pp_SEGCACHE)); // SEGCACHE @
    OVER(); // OVER
    L_at_(); // L@
    SWAP(); // SWAP
    ADVANCE_gt_DEF(); // ADVANCE>DEF
    Push(Read16(regsp)); // DUP
    Push(pp_LPREV); // LPREV
    Store(); // !
    Push(1);
  } else
  {
    Push(a); // I
    Push(0);
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0x31ad: WORD 'CACHE>USE' codep=0x224c wordp=0x31bb params=1 returns=0
// ================================================

void CACHE_gt_USE() // CACHE>USE
{
  unsigned short int a;
  Push(Read16(pp_USE)); // USE @
  a = Pop(); // >R
  Push(0);
  Push(a); // I
  Push(0);
  Push(0x0410);
  LCMOVE(); // LCMOVE
  Push(0);
  Push(a); // R>
  Push(2);
  L_ex_(); // L!
}


// ================================================
// 0x31d7: WORD '?INBCACHE' codep=0x224c wordp=0x31e5 params=1 returns=1
// ================================================

void IsINBCACHE() // ?INBCACHE
{
  Push(Read16(regsp)); // DUP
  Push(0);
  L_at_(); // L@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(6);
    L_at_(); // L@
    SWAP(); // SWAP
    Push(6);
    L_at_(); // L@
    Push((Pop()==Pop())?1:0); // =
    return;
  }
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0x320b: WORD '[BUF>CACHE]' codep=0x224c wordp=0x321b params=1 returns=0
// ================================================

void _bo_BUF_gt_CACHE_bc_() // [BUF>CACHE]
{
  Push(Read16(regsp)); // DUP
  Push(0);
  OVER(); // OVER
  Push(0);
  L_at_(); // L@
  Push(0);
  Push(0x0410);
  LCMOVE(); // LCMOVE
  Push(0);
  SWAP(); // SWAP
  Push(2);
  LC_ex_(); // LC!
}


// ================================================
// 0x3237: WORD 'BUF>CACHE' codep=0x224c wordp=0x3245 params=1 returns=0
// ================================================

void BUF_gt_CACHE() // BUF>CACHE
{
  Push(Read16(regsp)); // DUP
  IsINBCACHE(); // ?INBCACHE
  OVER(); // OVER
  Push(2);
  LC_at_(); // LC@
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    _bo_BUF_gt_CACHE_bc_(); // [BUF>CACHE]
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0x325f: WORD 'SEC-I/O' codep=0x224c wordp=0x326b params=1 returns=1
// ================================================

void SEC_dash_I_slash_O() // SEC-I/O
{
  Push(Read16(pp__n_SECS)); // #SECS @
  Push(0x16b6);
  C_ex__2(); // C!_2
  Push(0x16b6 + 1); // 0x16b6 1+
  C_ex__2(); // C!_2
  Push(pp_DTA); // DTA
  _2_at_(); // 2@
  Push(0x16b8);
  Store(); // !
  Push(0x16c6);
  Store(); // !
  Push(Read16(pp_DRIVE)); // DRIVE @
  Push(0x16bc);
  C_ex__2(); // C!_2
  Push(Read16(pp_HEAD)); // HEAD @
  Push(0x16bc + 1); // 0x16bc 1+
  C_ex__2(); // C!_2
  Push(Read16(pp_TRACK)); // TRACK @
  Push(0x16ba + 1); // 0x16ba 1+
  C_ex__2(); // C!_2
  Push(Read16(pp_SEC)); // SEC @
  Push(0x16ba);
  C_ex__2(); // C!_2
  Push(0x0013);
  INTERRUPT(); // INTERRUPT
  Push(Read16(0x16b6 + 1)&0xFF); // 0x16b6 1+ C@
}


// ================================================
// 0x32c9: WORD 'T&SCALC' codep=0x224c wordp=0x32d5 params=1 returns=0
// ================================================

void T_and_SCALC() // T&SCALC
{
  Push(Pop() * 2); //  2*
  Push(Read16(cc__n_SEC_slash_TRK)); // #SEC/TRK
  _slash_MOD(); // /MOD
  Push(0x0028);
  _slash_MOD(); // /MOD
  Push(pp_HEAD); // HEAD
  Store(); // !
  Push(pp_TRACK); // TRACK
  Store(); // !
  Push(Pop() + Read16(cc_SECORIGIN)); //  SECORIGIN +
  Push(pp_SEC); // SEC
  Store(); // !
}


// ================================================
// 0x32f3: WORD '[R/W]' codep=0x224c wordp=0x32fd params=1 returns=1
// ================================================

void _bo_R_slash_W_bc_() // [R/W]
{
  unsigned short int a, b;
  Push(0);
  a = Pop(); // >R
  while(1)
  {
    Push(Read16(regsp)); // DUP
    SEC_dash_I_slash_O(); // SEC-I/O
    Push(Read16(regsp)); // DUP
    Push(Read16(cc_RETRIES)); // RETRIES
    Push(a); // R>
    Push(Read16(regsp)); // DUP
    Push(Pop() + 1); //  1+
    b = Pop(); // >R
    _gt_(); // >
    Push(-Pop()); //  NEGATE
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) break;

    Pop(); // DROP
    Push(0);
    SEC_dash_I_slash_O(); // SEC-I/O
    Pop(); // DROP
  }
  Push(Pop() + b * 0x0100); //  R> 0x0100 * +
  Push(pp_DISK_dash_ERROR); // DISK-ERROR
  Store(); // !
}


// ================================================
// 0x3337: WORD '[DIRECT]' codep=0x224c wordp=0x3344 params=2 returns=0
// ================================================

void _bo_DIRECT_bc_() // [DIRECT]
{
  SWAP(); // SWAP
  T_and_SCALC(); // T&SCALC
  Push(!Pop() + 2); //  NOT 2+
  Push(Read16(pp_SEC)==Read16(cc__n_SEC_slash_TRK)?1:0); // SEC @ #SEC/TRK =
  if (Pop() != 0)
  {
    Push(1);
  } else
  {
    Push(2);
  }
  Push(pp__n_SECS); // #SECS
  Store(); // !
  _bo_R_slash_W_bc_(); // [R/W]
  Push(Read16(pp__n_SECS)==1?1:0); // #SECS @ 1 =
  if (Pop() != 0)
  {
    Push(Read16(cc_SECORIGIN)); // SECORIGIN
    Push(pp_SEC); // SEC
    Store(); // !
    Push(1);
    Push(pp_TRACK); // TRACK
    _plus__ex_(); // +!
    Push(0x0200);
    Push(pp_DTA); // DTA
    _plus__ex_(); // +!
    _bo_R_slash_W_bc_(); // [R/W]
  }
  Pop(); // DROP
}


// ================================================
// 0x338c: WORD '<MOUNT>' codep=0x224c wordp=0x3398 params=7 returns=1
// ================================================

void _st_MOUNT_gt_() // <MOUNT>
{
  unsigned short int a, b;
  a = Pop(); // >R
  b = Pop(); // >R
  Push(b); // I
  Push(a); // I'
  FILETYPES(); // FILETYPES
  C_ex__2(); // C!_2
  Push(a); // I'
  DRIVENUMBERS(); // DRIVENUMBERS
  C_ex__2(); // C!_2
  Push(pp_FILENAMES + a * 0x000b); // FILENAMES I' 0x000b * +
  Push(0x000b);
  CMOVE_2(); // CMOVE_2
  Push(a); // I'
  FCBPFAS(); // FCBPFAS
  Store(); // !
  Push(a); // I'
  OFFSETS(); // OFFSETS
  Store(); // !
  Push(a); // I'
  R_slash_W_i_S(); // R/W'S
  Store(); // !
  Push(b==1?1:0); // R> 1 =
  if (Pop() != 0)
  {
    Push(a); // I
    Push(Read16(pp__i_DOSMOUNT)); // 'DOSMOUNT @
    EXECUTE(); // EXECUTE
  } else
  {
    Push(0);
    Push(a); // I
    DRIVESIZES(); // DRIVESIZES
  }
  Push(a); // I
  FILEBLOCKS(); // FILEBLOCKS
  Store(); // !
  Push(a); // R>
  OFFSETS(); // OFFSETS
  Push(Read16(Pop())); //  @
  Push(pp_OFFSET); // OFFSET
  Store(); // !
}


// ================================================
// 0x33fc: WORD 'DIRNAME' codep=0x1d29 wordp=0x3408
// ================================================
// 0x3408: db 0x2d 0x2d 0x64 0x69 0x72 0x65 0x63 0x74 0x2d 0x2d 0x20 '--direct-- '

// ================================================
// 0x3413: WORD 'DR0' codep=0x224c wordp=0x341b params=0 returns=0
// ================================================

void DR0() // DR0
{
  Push(0x3344); // '[DIRECT]'
  Push(0);
  Push(0);
  Push(pp_DIRNAME); // DIRNAME
  Push(1);
  Push(0);
  Push(0);
  _st_MOUNT_gt_(); // <MOUNT>
  Pop(); // DROP
}


// ================================================
// 0x3431: WORD 'DR1' codep=0x224c wordp=0x3439 params=0 returns=0
// ================================================

void DR1() // DR1
{
  Push(0x3344); // '[DIRECT]'
  Push(0x0168);
  Push(0);
  Push(pp_DIRNAME); // DIRNAME
  Push(2);
  Push(0);
  Push(1);
  _st_MOUNT_gt_(); // <MOUNT>
  Pop(); // DROP
}


// ================================================
// 0x3451: WORD '<UNMOUNT>' codep=0x224c wordp=0x345f params=1 returns=1
// ================================================

void _st_UNMOUNT_gt_() // <UNMOUNT>
{
  unsigned short int a;
  FLUSH(); // FLUSH
  a = Pop(); // >R
  Push(a); // I
  FILETYPES(); // FILETYPES
  Push((Read16(Pop())&0xFF)==1?1:0); //  C@ 1 =
  if (Pop() != 0)
  {
    Push(a); // I
    Push(Read16(pp__i_DOSUNMOUNT)); // 'DOSUNMOUNT @
    EXECUTE(); // EXECUTE
  } else
  {
    Push(0);
  }
  Push(0);
  Push(a); // I
  DRIVENUMBERS(); // DRIVENUMBERS
  C_ex__2(); // C!_2
  Push(-1);
  Push(a); // I
  OFFSETS(); // OFFSETS
  Store(); // !
  Push(0);
  Push(a); // I
  FILEBLOCKS(); // FILEBLOCKS
  Store(); // !
  Push(0x00ff);
  Push(a); // I
  FILETYPES(); // FILETYPES
  C_ex__2(); // C!_2
  Push(pp_FILENAMES + a * 0x000b); // FILENAMES I 0x000b * +
  Push(0x000b);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0x34bd: WORD 'UNMOUNT' codep=0x224c wordp=0x34c9 params=1 returns=0
// ================================================

void UNMOUNT() // UNMOUNT
{
  _st_UNMOUNT_gt_(); // <UNMOUNT>
  ABORT("Unable to close.", 16);// (ABORT")
}


// ================================================
// 0x34e0: WORD 'NOFILES' codep=0x224c wordp=0x34ec params=0 returns=0
// ================================================

void NOFILES() // NOFILES
{
  unsigned short int i, imax;
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS

  i = 0;
  imax = Read16(cc__n_FILES); // #FILES
  do // (DO)
  {
    Push(i); // I
    _st_UNMOUNT_gt_(); // <UNMOUNT>
    Pop(); // DROP
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0x3500: WORD 'NODRIVES' codep=0x224c wordp=0x350d params=0 returns=0
// ================================================

void NODRIVES() // NODRIVES
{
  NOFILES(); // NOFILES
}


// ================================================
// 0x3511: WORD 'EMITS' codep=0x224c wordp=0x351b params=2 returns=0
// ================================================

void EMITS() // EMITS
{
  unsigned short int i, imax;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {

    i = 0;
    imax = Pop();
    do // (DO)
    {
      Push(Read16(regsp)); // DUP
      Exec("EMIT"); // call of word 0x2731 '(EMIT)'
      i++;
    } while(i<imax); // (LOOP)

  }
  Pop(); // DROP
}


// ================================================
// 0x3531: WORD 'FILES' codep=0x224c wordp=0x353b params=0 returns=0
// ================================================

void FILES() // FILES
{
  unsigned short int i, imax;
  Exec("CR"); // call of word 0x26ee '(CR)'
  PRINT("File#    Name     Drv   #Blocks    At   ", 40); // (.")
  Exec("CR"); // call of word 0x26ee '(CR)'
  Push(0x002d);
  Push(0x002e);
  EMITS(); // EMITS

  i = 0;
  imax = Read16(cc__n_FILES); // #FILES
  do // (DO)
  {
    Exec("CR"); // call of word 0x26ee '(CR)'
    SPACE(); // SPACE
    Push(i); // I
    Push(2);
    DrawR(); // .R
    Push(3);
    SPACES(); // SPACES
    Push(i); // I
    FILETYPES(); // FILETYPES
    Push((Read16(Pop())&0xFF)==0x00ff?1:0); //  C@ 0x00ff =
    if (Pop() != 0)
    {
      PRINT("<unassigned>", 12); // (.")
    } else
    {
      Push(i * 0x000b + pp_FILENAMES); // I 0x000b * FILENAMES +
      Push(0x000b);
      Exec("TYPE"); // call of word 0x2690 '(TYPE)'
      SPACE(); // SPACE
      Push(i); // I
      DRIVENUMBERS(); // DRIVENUMBERS
      Push(((Read16(Pop())&0xFF) + 0x0041) - 1); //  C@ 0x0041 + 1-
      Exec("EMIT"); // call of word 0x2731 '(EMIT)'
      Push(0x003a);
      Exec("EMIT"); // call of word 0x2731 '(EMIT)'
      Push(4);
      SPACES(); // SPACES
      Push(i); // I
      FILEBLOCKS(); // FILEBLOCKS
      Push(Read16(Pop())); //  @
      Push(6);
      DrawR(); // .R
      Push(2);
      SPACES(); // SPACES
      Push(i); // I
      OFFSETS(); // OFFSETS
      Push(Read16(Pop())); //  @
      Push(Read16(regsp)); // DUP
      Push(6);
      DrawR(); // .R
      SPACE(); // SPACE
      Push(Pop()==Read16(pp_OFFSET)?1:0); //  OFFSET @ =
      if (Pop() != 0)
      {
        Push(0x001b);
        Exec("EMIT"); // call of word 0x2731 '(EMIT)'
        PRINT("OFFSET", 6); // (.")
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Exec("CR"); // call of word 0x26ee '(CR)'
  Push(0x002d);
  Push(0x002e);
  EMITS(); // EMITS
}


// ================================================
// 0x3628: WORD 'DRIVES' codep=0x224c wordp=0x3633 params=0 returns=0
// ================================================

void DRIVES() // DRIVES
{
  FILES(); // FILES
}


// ================================================
// 0x3637: WORD '(DISKERROR?)' codep=0x224c wordp=0x3648 params=0 returns=0
// ================================================

void _ro_DISKERROR_ask__rc_() // (DISKERROR?)
{
  Push(Read16(pp_DISK_dash_ERROR)&0xFF); // DISK-ERROR C@
  IsUNRAVEL(); // ?UNRAVEL
}

// 0x3650: db 0x82 0x2c 0xae 0x0b 0xe7 0x2f 0x30 0x06 0x42 0x06 0x20 0x0f 0x24 0x2c 0x5e 0x0c 0x13 0x1c 0x0b 0x44 0x69 0x73 0x6b 0x20 0x65 0x72 0x72 0x6f 0x72 0x21 0x90 0x16 ' ,   /0 B   $,^    Disk error!  '

// ================================================
// 0x3670: WORD 'W3672' codep=0x3672 wordp=0x3672 params=1 returns=1
// ================================================
// 0x3672: pop    ax
// 0x3673: add    ax,[2C79] // OFFSET
// 0x3677: push   ax
// 0x3678: lodsw
// 0x3679: mov    bx,ax
// 0x367b: jmp    word ptr [bx]

// ================================================
// 0x367d: WORD 'W367F' codep=0x367f wordp=0x367f
// ================================================
// 0x367f: pop    dx
// 0x3680: push   di
// 0x3681: push   si
// 0x3682: push   bp
// 0x3683: mov    cx,[2B3A] // #FILES
// 0x3687: mov    di,2D74
// 0x368a: xor    bx,bx
// 0x368c: mov    bp,cx
// 0x368e: dec    bp
// 0x368f: shl    bp,1
// 0x3691: mov    si,di
// 0x3693: add    si,bp
// 0x3695: mov    ax,dx
// 0x3697: sub    ax,[si]
// 0x3699: js     36A8
// 0x369b: mov    si,2D4C
// 0x369e: add    si,bp
// 0x36a0: cmp    [si],ax
// 0x36a2: js     36A8
// 0x36a4: inc    bx
// 0x36a5: mov    cx,0001
// 0x36a8: loop   368C
// 0x36aa: shr    bp,1
// 0x36ac: mov    cx,bp
// 0x36ae: pop    bp
// 0x36af: pop    si
// 0x36b0: pop    di
// 0x36b1: push   ax
// 0x36b2: push   cx
// 0x36b3: push   bx
// 0x36b4: lodsw
// 0x36b5: mov    bx,ax
// 0x36b7: jmp    word ptr [bx]

// ================================================
// 0x36b9: WORD 'W36BB' codep=0x36bb wordp=0x36bb
// ================================================
// 0x36bb: xchg   ax,si
// 0x36bc: xor    cx,cx
// 0x36be: pop    si
// 0x36bf: add    si,2D23
// 0x36c3: mov    cl,[si]
// 0x36c5: or     cx,cx
// 0x36c7: jnz    36CD
// 0x36c9: mov    cx,[2C15] // DEFAULTDRV
// 0x36cd: dec    cx
// 0x36ce: push   cx
// 0x36cf: xchg   ax,si
// 0x36d0: lodsw
// 0x36d1: mov    bx,ax
// 0x36d3: jmp    word ptr [bx]

// ================================================
// 0x36d5: WORD 'W36D7' codep=0x224c wordp=0x36d7
// ================================================

void W36D7() // W36D7
{
  unsigned short int a;
  SWAP(); // SWAP
  W367F(); // W367F
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(pp_FILE); // FILE
    Store(); // !
    Push(Read16(regsp)); // DUP
    W36BB(); // W36BB
    Push(pp_DRIVE); // DRIVE
    Store(); // !
    a = Pop(); // >R
    _2SWAP(); // 2SWAP
    Push(pp_DTA); // DTA
    _2_ex__2(); // 2!_2
    SWAP(); // SWAP
    Push(a); // R>
    R_slash_W_i_S(); // R/W'S
    Push(Read16(Pop())); //  @
    EXECUTE(); // EXECUTE
    return;
  }
  Pop(); Pop(); // 2DROP
  Pop(); Pop(); // 2DROP
  Pop(); // DROP
  Push(-1);
  Push(pp_DISK_dash_ERROR); // DISK-ERROR
  Store(); // !
}


// ================================================
// 0x3713: WORD 'W3715' codep=0x224c wordp=0x3715
// ================================================

void W3715() // W3715
{
  unsigned short int a, b;
  a = Pop(); // >R
  Push(Read16(pp_USE)); // USE @
  b = Pop(); // >R
  Push(b); // I
  Push(8);
  Push(a); // I'
  Push(1);
  Exec("R_slash_W"); // call of word 0x36d7 'W36D7'
  Push(b); // I
  Push(b); // I
  Push(6);
  L_ex_(); // L!
  Push(0);
  Push(b); // I
  Push(0);
  L_ex_(); // L!
  Push(0);
  Push(b); // I
  Push(2);
  L_ex_(); // L!
  Push(b); // R>
  Push(a); // R>
  SWAP(); // SWAP
  Push(6);
  L_ex_(); // L!
}


// ================================================
// 0x3751: WORD 'W3753' codep=0x224c wordp=0x3753 params=1 returns=0
// ================================================

void W3753() // W3753
{
  Push(Read16(regsp)); // DUP
  Push(2);
  LC_at_(); // LC@
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(Read16(regsp)); // DUP
    Push(6);
    L_at_(); // L@
    Push(8);
    SWAP(); // SWAP
    Push(0);
    Exec("R_slash_W"); // call of word 0x36d7 'W36D7'
    Push(0);
    SWAP(); // SWAP
    Push(2);
    LC_ex_(); // LC!
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0x3781: WORD 'W3783' codep=0x224c wordp=0x3783 params=0 returns=1
// ================================================

void W3783() // W3783
{
  Push(Read16(pp_REUSEC) + 1); // REUSEC @ 1+
  Push(Read16(regsp)); // DUP
  Push(Pop()==Read16(pp__n_CACHE)?1:0); //  #CACHE @ =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(0);
  }
  Push(Read16(regsp)); // DUP
  Push(pp_REUSEC); // REUSEC
  Store(); // !
  Push(Read16(regsp)); // DUP
  Push(pp__i_CACHE); // 'CACHE
  Store(); // !
  _bo_SEGCACHE_bc_(); // [SEGCACHE]
  L_at_(); // L@
  W3753(); // W3753
}


// ================================================
// 0x37ad: WORD 'W37AF' codep=0x224c wordp=0x37af params=2 returns=0
// ================================================

void W37AF() // W37AF
{
  unsigned short int a;
  Push(pp__i_CACHE); // 'CACHE
  Store(); // !
  a = Pop(); // >R
  _bo_SEGCACHE_bc_(); // [SEGCACHE]
  L_at_(); // L@
  Push(a); // I
  Push(0);
  L_ex_(); // L!
  Push(a); // I
  Push(6);
  L_at_(); // L@
  _bo_BLKCACHE_bc_(); // [BLKCACHE]
  L_ex_(); // L!
  Push(a); // R>
  _bo_BUF_gt_CACHE_bc_(); // [BUF>CACHE]
}


// ================================================
// 0x37d1: WORD 'W37D3' codep=0x224c wordp=0x37d3 params=0 returns=0
// ================================================

void W37D3() // W37D3
{
  unsigned short int a;
  Push(Read16(pp_USE)); // USE @
  a = Pop(); // >R
  Push(a); // I
  Push(3);
  LC_at_(); // LC@
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(Read16(pp__n_CACHE)); // #CACHE @
    if (Pop() != 0)
    {
      Push(a); // I
      IsINBCACHE(); // ?INBCACHE
      if (Pop() != 0)
      {
        Push(a); // I
        Push(2);
        LC_at_(); // LC@
        if (Pop() != 0)
        {
          Push(a); // I
          BUF_gt_CACHE(); // BUF>CACHE
        }
      } else
      {
        Push(a); // I
        W3783(); // W3783
        W37AF(); // W37AF
      }
    } else
    {
      Push(a); // I
      W3753(); // W3753
    }
    Push(a); // I
    MTBUF(); // MTBUF
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0x3821: WORD 'W3823' codep=0x224c wordp=0x3823 params=1 returns=3
// ================================================

void W3823() // W3823
{
  _ro_BUFFER_rc_(); // (BUFFER)
  if (Pop() != 0)
  {
    Push(1);
    return;
  }
  Push(Read16(regsp)); // DUP
  W37D3(); // W37D3
  _ro_CACHE_rc_(); // (CACHE)
  if (Pop() != 0)
  {
    CACHE_gt_USE(); // CACHE>USE
    _ro_BUFFER_rc_(); // (BUFFER)
    return;
  }
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0x3847: WORD 'W3849' codep=0x224c wordp=0x3849
// ================================================

void W3849() // W3849
{
  Push(Read16(regsp)); // DUP
  W3715(); // W3715
  _ro_BUFFER_rc_(); // (BUFFER)
  Pop(); // DROP
  Exec("DISKERROR_ask_"); // call of word 0x3648 '(DISKERROR?)'
}


// ================================================
// 0x3855: WORD 'BLOCK_1' codep=0x224c wordp=0x385f params=1 returns=2
// ================================================

void BLOCK_1() // BLOCK_1
{
  W3672(); // W3672
  W3823(); // W3823
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    W3849(); // W3849
  }
  SEG_gt_ADDR(); // SEG>ADDR
  Push(Pop() + 8); //  8 +
}


// ================================================
// 0x3875: WORD 'LBLOCK_1' codep=0x224c wordp=0x3880 params=1 returns=2
// ================================================

void LBLOCK_1() // LBLOCK_1
{
  W3672(); // W3672
  _ro_BUFFER_rc_(); // (BUFFER)
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    _ro_CACHE_rc_(); // (CACHE)
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      W37D3(); // W37D3
      W3849(); // W3849
    }
  }
  Push(8);
}


// ================================================
// 0x389c: WORD 'SAVE-BUFFERS2' codep=0x224c wordp=0x38ad params=0 returns=0
// ================================================

void SAVE_dash_BUFFERS2() // SAVE-BUFFERS2
{
  unsigned short int i, imax;
  Push(Read16(pp__i_SVBUF)); // 'SVBUF @
  EXECUTE(); // EXECUTE
  Push(Read16(pp__n_CACHE)); // #CACHE @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(pp_USE)); // USE @
    BUF_gt_CACHE(); // BUF>CACHE
    Push(Read16(pp_PREV)); // PREV @
    BUF_gt_CACHE(); // BUF>CACHE

    i = 0;
    imax = Pop();
    do // (DO)
    {
      Push(i); // I
      Push(pp__i_CACHE); // 'CACHE
      Store(); // !
      _bo_SEGCACHE_bc_(); // [SEGCACHE]
      L_at_(); // L@
      W3753(); // W3753
      i++;
    } while(i<imax); // (LOOP)

  }
  Push(Read16(pp_USE)); // USE @
  W3753(); // W3753
  Push(Read16(pp_PREV)); // PREV @
  W3753(); // W3753
}


// ================================================
// 0x38eb: WORD 'EMPTY-BUFFERS' codep=0x224c wordp=0x38fd params=0 returns=0
// ================================================

void EMPTY_dash_BUFFERS() // EMPTY-BUFFERS
{
  Push(Read16(pp__i_MTBUF)); // 'MTBUF @
  EXECUTE(); // EXECUTE
  MTBUFFERS(); // MTBUFFERS
  MTCACHE(); // MTCACHE
}


// ================================================
// 0x3909: WORD 'FLUSH' codep=0x224c wordp=0x3913 params=0 returns=0
// ================================================

void FLUSH() // FLUSH
{
  SAVE_dash_BUFFERS2(); // SAVE-BUFFERS2
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
}


// ================================================
// 0x3919: WORD 'COPY' codep=0x224c wordp=0x3922 params=2 returns=2
// ================================================

void COPY() // COPY
{
  SWAP(); // SWAP
  BLOCK_1(); // BLOCK_1
  SWAP(); // SWAP
  BLOCK_1(); // BLOCK_1
  Push(0x0400);
  CMOVE_2(); // CMOVE_2
  UPDATE(); // UPDATE
}


// ================================================
// 0x3934: WORD 'BLOCKS' codep=0x224c wordp=0x393f params=3 returns=2
// ================================================

void BLOCKS() // BLOCKS
{
  unsigned short int a, i, imax, j, jmax;
  a = Pop(); // >R
  _2DUP(); // 2DUP
  _gt_(); // >
  if (Pop() != 0)
  {

    i = 0;
    imax = a; // R>
    do // (DO)
    {
      OVER(); // OVER
      Push(Pop() + i); //  I +
      OVER(); // OVER
      Push(Pop() + i); //  I +
      COPY(); // COPY
      i++;
    } while(i<imax); // (LOOP)

  } else
  {

    j = a - 1; // R> 1-
    jmax = 0;
    do // (DO)
    {
      OVER(); // OVER
      Push(Pop() + j); //  I +
      OVER(); // OVER
      Push(Pop() + j); //  I +
      COPY(); // COPY
      Push(-1);
      int step = Pop();
      j += step;
      if (((step>=0) && (j>=jmax)) || ((step<0) && (j<=jmax))) break;
    } while(1); // (+LOOP)

  }
  Pop(); Pop(); // 2DROP
  SAVE_dash_BUFFERS2(); // SAVE-BUFFERS2
}


// ================================================
// 0x3989: WORD 'PSW' codep=0x2214 wordp=0x3991
// ================================================
// 0x3991: dw 0x16b4

// ================================================
// 0x3993: WORD 'AX' codep=0x2214 wordp=0x399a
// ================================================
// 0x399a: dw 0x16b6

// ================================================
// 0x399c: WORD 'BX' codep=0x2214 wordp=0x39a3
// ================================================
// 0x39a3: dw 0x16b8

// ================================================
// 0x39a5: WORD 'CX' codep=0x2214 wordp=0x39ac
// ================================================
// 0x39ac: dw 0x16ba

// ================================================
// 0x39ae: WORD 'DX' codep=0x2214 wordp=0x39b5
// ================================================
// 0x39b5: dw 0x16bc

// ================================================
// 0x39b7: WORD 'BP' codep=0x2214 wordp=0x39be
// ================================================
// 0x39be: dw 0x16be

// ================================================
// 0x39c0: WORD 'DI' codep=0x2214 wordp=0x39c7
// ================================================
// 0x39c7: dw 0x16c0

// ================================================
// 0x39c9: WORD 'SI' codep=0x2214 wordp=0x39d0
// ================================================
// 0x39d0: dw 0x16c2

// ================================================
// 0x39d2: WORD 'DS' codep=0x2214 wordp=0x39d9
// ================================================
// 0x39d9: dw 0x16c4

// ================================================
// 0x39db: WORD 'ES' codep=0x2214 wordp=0x39e2
// ================================================
// 0x39e2: dw 0x16c6

// ================================================
// 0x39e4: WORD 'MATCH' codep=0x39ee wordp=0x39ee
// ================================================
// 0x39ee: pop    dx
// 0x39ef: pop    bx
// 0x39f0: pop    ax
// 0x39f1: pop    cx
// 0x39f2: push   di
// 0x39f3: push   si
// 0x39f4: push   cx
// 0x39f5: mov    di,cx
// 0x39f7: mov    cx,cs
// 0x39f9: mov    es,cx
// 0x39fb: cmp    ax,dx
// 0x39fd: jb     3A14
// 0x39ff: mov    cx,dx
// 0x3a01: mov    si,bx
// 0x3a03: repz   
// 0x3a04: cmpsb
// 0x3a05: jz     3A11
// 0x3a07: sub    ax,dx
// 0x3a09: add    ax,cx
// 0x3a0b: jnz    39FB
// 0x3a0d: mov    cx,cs
// 0x3a0f: jz     3A14
// 0x3a11: mov    ax,FFFF
// 0x3a14: mov    bx,di
// 0x3a16: add    ax,bx
// 0x3a18: pop    bx
// 0x3a19: sub    ax,bx
// 0x3a1b: pop    si
// 0x3a1c: pop    di
// 0x3a1d: sub    cx,0001
// 0x3a21: sbb    cx,cx
// 0x3a23: neg    cx
// 0x3a25: push   cx
// 0x3a26: push   ax
// 0x3a27: lodsw
// 0x3a28: mov    bx,ax
// 0x3a2a: jmp    word ptr [bx]

// ================================================
// 0x3a2c: WORD '@EXECUTE' codep=0x3a39 wordp=0x3a39
// ================================================
// 0x3a39: pop    bx
// 0x3a3a: mov    bx,[bx]
// 0x3a3c: dec    bx
// 0x3a3d: dec    bx
// 0x3a3e: jmp    word ptr [bx]

// ================================================
// 0x3a40: WORD 'NOP' codep=0x224c wordp=0x3a48 params=0 returns=0
// ================================================

void NOP() // NOP
{
}


// ================================================
// 0x3a4a: WORD '**' codep=0x224c wordp=0x3a51 params=0 returns=0
// ================================================

void _star__star_() // **
{
}


// ================================================
// 0x3a53: WORD ''UNRAVEL' codep=0x1d29 wordp=0x3a60
// ================================================
// 0x3a60: db 0x48 0x3a 'H:'

// ================================================
// 0x3a62: WORD 'UNRAVEL' codep=0x224c wordp=0x3a6e params=0 returns=0
// ================================================

void UNRAVEL() // UNRAVEL
{
  GAMEOP_2(); // GAMEOP_2
  GetEXECUTE(); // @EXECUTE
  Push(callp0); // R>
  Pop(); // DROP
  do
  {
    Push(Read16(callp1 - 2)); // R> 2- @
    Exec("CR"); // call of word 0x26ee '(CR)'
    Push(Read16(regsp)); // DUP
    Push(0);
    Push(8);
    D_dot_R(); // D.R
    Push(3);
    SPACES(); // SPACES
    Push(Pop() + 2); //  2+
    NFA(); // NFA
    ID_dot_(); // ID.
    RP_at_(); // RP@
    Push(Read16(user_R0)); // R0 @
    U_st_(); // U<
    Push(!Pop()); //  NOT
  } while(Pop() == 0);
  QUIT(); // QUIT
}


// ================================================
// 0x3aa6: WORD '?UNRAVEL' codep=0x224c wordp=0x3ab3 params=1 returns=0
// ================================================

void IsUNRAVEL() // ?UNRAVEL
{
  if (Pop() == 0) return;
  UNRAVEL(); // UNRAVEL
}


// ================================================
// 0x3abb: WORD 'SYN' codep=0x224c wordp=0x3ac3
// ================================================

void SYN() // SYN
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  FIND(); // FIND
  Push(Read16(regsp)); // DUP
  _co_(); // ,
  IMMEDIATE(); // IMMEDIATE
  Push(Pop() + 2); //  2+
  NFA(); // NFA
  Push((Read16(Pop())&0xFF) & 0x0040); //  C@ 0x0040 AND
  if (Pop() != 0)
  {
    CODE(); // (;CODE) inlined assembler code
// 0x3adf: call   1649
    Push(Read16(Pop())); //  @
    CFAEXEC(); // CFAEXEC
    return;
  }
  CODE(); // (;CODE) inlined assembler code
// 0x3aec: call   1649
  Push(Read16(user_STATE)); // STATE @
  if (Pop() != 0)
  {
    Push(Read16(Pop())); //  @
    _co_(); // ,
    return;
  }
  Push(Read16(Pop())); //  @
  CFAEXEC(); // CFAEXEC
}


// ================================================
// 0x3b05: WORD 'TRACE' codep=0x1d29 wordp=0x3b0f
// ================================================
// 0x3b0f: db 0x00 0x00 '  '

// ================================================
// 0x3b11: WORD '[TRACE' codep=0x1d29 wordp=0x3b1c
// ================================================
// 0x3b1c: db 0x48 0x3a 'H:'

// ================================================
// 0x3b1e: WORD 'TRACE]' codep=0x1d29 wordp=0x3b29
// ================================================
// 0x3b29: db 0x48 0x3a 'H:'

// ================================================
// 0x3b2b: WORD 'D@' codep=0x3aec wordp=0x3b32
// ================================================
// 0x3b32: db 0x38 0x0c '8 '

// ================================================
// 0x3b34: WORD 'V=' codep=0x3aec wordp=0x3b3b
// ================================================
// 0x3b3b: db 0x1e 0x25 ' %'

// ================================================
// 0x3b3d: WORD 'C=' codep=0x3aec wordp=0x3b44
// ================================================
// 0x3b44: db 0x0c 0x22 ' "'

// ================================================
// 0x3b46: WORD '2V=' codep=0x224c wordp=0x3b4e
// ================================================

void _2V_eq_() // 2V=
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  Push(4);
  ALLOT(); // ALLOT
}


// ================================================
// 0x3b58: WORD '2C=' codep=0x224c wordp=0x3b60
// ================================================

void _2C_eq_() // 2C=
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  _co_(); // ,
  _co_(); // ,
  CODE(); // (;CODE) inlined assembler code
// 0x3b68: call   1649
  _2_at_(); // 2@
}


// ================================================
// 0x3b6f: WORD '3' codep=0x2214 wordp=0x3b75
// ================================================
// 0x3b75: dw 0x0003

// ================================================
// 0x3b77: WORD '4' codep=0x2214 wordp=0x3b7d
// ================================================
// 0x3b7d: dw 0x0004

// ================================================
// 0x3b7f: WORD '5' codep=0x2214 wordp=0x3b85
// ================================================
// 0x3b85: dw 0x0005

// ================================================
// 0x3b87: WORD '6' codep=0x2214 wordp=0x3b8d
// ================================================
// 0x3b8d: dw 0x0006

// ================================================
// 0x3b8f: WORD '7' codep=0x2214 wordp=0x3b95
// ================================================
// 0x3b95: dw 0x0007

// ================================================
// 0x3b97: WORD '8' codep=0x2214 wordp=0x3b9d
// ================================================
// 0x3b9d: dw 0x0008

// ================================================
// 0x3b9f: WORD '9' codep=0x2214 wordp=0x3ba5
// ================================================
// 0x3ba5: dw 0x0009

// ================================================
// 0x3ba7: WORD '-1' codep=0x2214 wordp=0x3bae
// ================================================
// 0x3bae: dw 0xffff

// ================================================
// 0x3bb0: WORD '-2' codep=0x2214 wordp=0x3bb7
// ================================================
// 0x3bb7: dw 0xfffe

// ================================================
// 0x3bb9: WORD 'THRU_1' codep=0x224c wordp=0x3bc2
// ================================================

void THRU_1() // THRU_1
{
  unsigned short int i, imax;
  _2DUP(); // 2DUP
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Exec("LOAD_2"); // call of word 0x1e23 '(LOAD)'
    return;
  }
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Exec("LOAD_2"); // call of word 0x1e23 '(LOAD)'
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0x3be2: WORD '(TRACE)' codep=0x224c wordp=0x3bee params=0 returns=0
// ================================================

void _ro_TRACE_rc_() // (TRACE)
{
}


// ================================================
// 0x3bf0: WORD 'OVA' codep=0x1d29 wordp=0x3bf8
// ================================================
// 0x3bf8: db 0x40 0xde '@ '

// ================================================
// 0x3bfa: WORD 'T-DP' codep=0x1d29 wordp=0x3c03
// ================================================
// 0x3c03: db 0xd4 0xd6 0x25 0xf5 0xd4 0xd6 '  %   '

// ================================================
// 0x3c09: WORD 'TRANS-ALLOT' codep=0x224c wordp=0x3c19 params=1 returns=0
// ================================================

void TRANS_dash_ALLOT() // TRANS-ALLOT
{
  Push(Read16(pp_OVA)); // OVA @
  SWAP(); // SWAP
  _dash_(); // -
  Push(pp_T_dash_DP); // T-DP
  Store(); // !
}


// ================================================
// 0x3c27: WORD 'NEWT-DP' codep=0x224c wordp=0x3c33 params=0 returns=0
// ================================================

void NEWT_dash_DP() // NEWT-DP
{
  Push(Read16(pp_T_dash_DP)); // T-DP @
  Push(pp_T_dash_DP + 4); // T-DP 4 +
  Store(); // !
}


// ================================================
// 0x3c41: WORD 'TRANSIENT' codep=0x224c wordp=0x3c4f params=0 returns=0
// ================================================

void TRANSIENT() // TRANSIENT
{
  HERE(); // HERE
  Push(pp_T_dash_DP + 2); // T-DP 2+
  Store(); // !
  Push(Read16(pp_T_dash_DP + 4)); // T-DP 4 + @
  Push(user_DP); // DP
  Store(); // !
}


// ================================================
// 0x3c65: WORD 'RESIDENT' codep=0x224c wordp=0x3c72 params=0 returns=0
// ================================================

void RESIDENT() // RESIDENT
{
  HERE(); // HERE
  Push(pp_T_dash_DP + 4); // T-DP 4 +
  Store(); // !
  Push(Read16(pp_T_dash_DP + 2)); // T-DP 2+ @
  Push(user_DP); // DP
  Store(); // !
}


// ================================================
// 0x3c88: WORD 'HEAD:' codep=0x224c wordp=0x3c92
// ================================================

void HEAD_c_() // HEAD:
{
  HERE(); // HERE
  TRANSIENT(); // TRANSIENT
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  _co_(); // ,
  IMMEDIATE(); // IMMEDIATE
  RESIDENT(); // RESIDENT
  CODE(); // (;CODE) inlined assembler code
// 0x3ca0: call   1649
  Push(Read16(Pop())); //  @
  Push(Read16(user_STATE)); // STATE @
  if (Pop() != 0)
  {
    _co_(); // ,
    return;
  }
  Push(Pop() + 2); //  2+
  EXECUTE(); // EXECUTE
}


// ================================================
// 0x3cb9: WORD 'T:' codep=0x224c wordp=0x3cc0
// ================================================

void T_c_() // T:
{
  Push(0x224c);
  _co_(); // ,
  SP_at_(); // SP@
  Push(user_CSP); // CSP
  Store(); // !
  Push(Read16(user_CURRENT)); // CURRENT @
  Push(user_CONTEXT); // CONTEXT
  Store(); // !
  _bc_(); // ]
}


// ================================================
// 0x3cd8: WORD 'T;' codep=0x224c wordp=0x3cdf
// ================================================

void T_sc_() // T;
{
  IsCSP(); // ?CSP
  COMPILE(0x1690); // compile?
  _bo_(); // [
}


// ================================================
// 0x3ce9: WORD 'W3CEB' codep=0x224c wordp=0x3ceb params=1 returns=0
// ================================================

void W3CEB() // W3CEB
{
  while(1)
  {
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop() - 2)); //  2- @
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() == 0) break;

    Push(Read16(regsp)); // DUP
    Push(Read16(pp_T_dash_DP)); // T-DP @
    U_st_(); // U<
    Push(!Pop()); //  NOT
    OVER(); // OVER
    Push(Read16(pp_OVA)); // OVA @
    U_st_(); // U<
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(Read16(pp_TRACE)); // TRACE @
      if (Pop() != 0)
      {
        Push(Read16(regsp)); // DUP
        ID_dot_(); // ID.
        SPACE(); // SPACE
      }
      Push(Read16(Pop() - 2)); //  2- @
      OVER(); // OVER
      Push(Pop() - 2); //  2-
      Store(); // !
    } else
    {
      SWAP(); // SWAP
      Pop(); // DROP
    }
  }
  Pop(); // DROP
}


// ================================================
// 0x3d37: WORD 'W3D39' codep=0x224c wordp=0x3d39 params=0 returns=0
// ================================================

void W3D39() // W3D39
{
  Push(user_VOC_dash_LINK); // VOC-LINK
  while(1)
  {
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop())); //  @
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() == 0) break;

    Push(Read16(regsp)); // DUP
    Push(Read16(pp_T_dash_DP)); // T-DP @
    U_st_(); // U<
    Push(!Pop()); //  NOT
    OVER(); // OVER
    Push(Read16(pp_OVA)); // OVA @
    U_st_(); // U<
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(Read16(pp_TRACE)); // TRACE @
      if (Pop() != 0)
      {
        Push(Read16(regsp)); // DUP
        Push(Pop() - 2); //  2-
        NFA(); // NFA
        ID_dot_(); // ID.
      }
      Push(Read16(Pop())); //  @
      OVER(); // OVER
      Store(); // !
    } else
    {
      SWAP(); // SWAP
      Pop(); // DROP
    }
  }
  Pop(); // DROP
}


// ================================================
// 0x3d83: WORD 'DISPOSE' codep=0x224c wordp=0x3d8f params=0 returns=0
// ================================================

void DISPOSE() // DISPOSE
{
  unsigned short int i, imax;
  Exec("CR"); // call of word 0x26ee '(CR)'
  Push(Read16(user_VOC_dash_LINK) - 4); // VOC-LINK @ 4 -
  NFA(); // NFA
  ID_dot_(); // ID.
  Push(Read16(pp_T_dash_DP + 4) - Read16(pp_T_dash_DP)); // T-DP 4 + @ T-DP @ -
  PRINT(" Transbytes= ", 13); // (.")
  Draw(); // .
  NEWT_dash_DP(); // NEWT-DP
  W3D39(); // W3D39
  Push(user_VOC_dash_LINK); // VOC-LINK
  while(1)
  {
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop())); //  @
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() == 0) break;


    i = 0;
    imax = 4;
    do // (DO)
    {
      Push(i * 2 + 6); // I 2* 6 +
      OVER(); // OVER
      Push(Pop() + Pop()); // +
      W3CEB(); // W3CEB
      i++;
    } while(i<imax); // (LOOP)

    Pop(); // DROP
    Push(Read16(Pop())); //  @
  }
  Pop(); // DROP
}


// ================================================
// 0x3df1: WORD ''_1' codep=0x224c wordp=0x3df7
// ================================================

void _i__1() // '_1
{
  IsFIND(); // ?FIND
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() - 2)); //  2- @
  Push(0x3c92); // 'HEAD:'
  Push(Pop() + 0x000e); //  0x000e +
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(Read16(Pop()) + 2); //  @ 2+
  }
  LITERAL(); // LITERAL
}


// ================================================
// 0x3e17: WORD '(2V:)' codep=0x1d29 wordp=0x3e21
// ================================================
// 0x3e21: db 0x54 0x20 0x2d 0x20 'T - '

// ================================================
// 0x3e25: WORD '(C:)' codep=0x2214 wordp=0x3e2e
// ================================================
// 0x3e2e: dw 0x0000

// ================================================
// 0x3e30: WORD '(2C:)' codep=0x3b68 wordp=0x3e3a
// ================================================
// 0x3e3a: dw 0x0000 0x0000

// ================================================
// 0x3e3e: WORD 'V:' codep=0x224c wordp=0x3e45
// ================================================

void V_c_() // V:
{
  HEAD_c_(); // HEAD:
  Push(0x1d29);
  _co_(); // ,
  Push(2);
  ALLOT(); // ALLOT
}


// ================================================
// 0x3e53: WORD '2V:' codep=0x224c wordp=0x3e5b
// ================================================

void _2V_c_() // 2V:
{
  HEAD_c_(); // HEAD:
  Push(0x1d29);
  _co_(); // ,
  Push(4);
  ALLOT(); // ALLOT
}


// ================================================
// 0x3e69: WORD 'C:' codep=0x224c wordp=0x3e70
// ================================================

void C_c_() // C:
{
  HEAD_c_(); // HEAD:
  Push(0x2214);
  _co_(); // ,
  _co_(); // ,
}


// ================================================
// 0x3e7c: WORD '2C:' codep=0x224c wordp=0x3e84
// ================================================

void _2C_c_() // 2C:
{
  HEAD_c_(); // HEAD:
  Push(0x3b68);
  _co_(); // ,
  _co_(); // ,
  _co_(); // ,
}


// ================================================
// 0x3e92: WORD 'TAB' codep=0x224c wordp=0x3e9a params=1 returns=1
// ================================================

void TAB() // TAB
{
  Push(Read16(user_COL)&0xFF); // COL C@
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  _slash_(); // /
  Push(Pop() * Pop()); // *
  Push(Read16(user_ROW)&0xFF); // ROW C@
  SWAP(); // SWAP
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
}


// ================================================
// 0x3eb2: WORD 'ROOM?' codep=0x224c wordp=0x3ebc params=1 returns=0
// ================================================

void ROOM_ask_() // ROOM?
{
  Push(Pop() + (Read16(user_COL)&0xFF)); //  COL C@ +
  Push(Read16(user_COLMAX)); // COLMAX @
  _gt_(); // >
  if (Pop() == 0) return;
  Exec("CR"); // call of word 0x26ee '(CR)'
}


// ================================================
// 0x3ed0: WORD 'EXECUTES' codep=0x224c wordp=0x3edd params=2 returns=0
// ================================================

void EXECUTES() // EXECUTES
{
  Push(Read16(Pop())); //  @
  ME(); // ME
  Push(Pop() + Pop()); // +
  Store(); // !
}


// ================================================
// 0x3ee7: WORD 'BINARY' codep=0x224c wordp=0x3ef2 params=0 returns=0
// ================================================

void BINARY() // BINARY
{
  Push(2);
  Push(user_BASE); // BASE
  Store(); // !
}


// ================================================
// 0x3efa: WORD 'H.' codep=0x224c wordp=0x3f01 params=1 returns=0
// ================================================

void H_dot_() // H.
{
  Push(Read16(user_BASE)); // BASE @
  SWAP(); // SWAP
  HEX(); // HEX
  U_dot_(); // U.
  Push(user_BASE); // BASE
  Store(); // !
}


// ================================================
// 0x3f11: WORD 'RANGE' codep=0x224c wordp=0x3f1b params=2 returns=2
// ================================================

void RANGE() // RANGE
{
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
}


// ================================================
// 0x3f23: WORD 'ASCII' codep=0x224c wordp=0x3f2d
// ================================================

void ASCII() // ASCII
{
  Push(Read16(cc_BL)); // BL
  Exec("WORD"); // call of word 0x1f06 '(WORD)'
  Push(Read16(Pop() + 1)&0xFF); //  1+ C@
  LITERAL(); // LITERAL
}


// ================================================
// 0x3f39: WORD 'SET_STR_AS_PARAM' codep=0x224c wordp=0x3f3b params=0 returns=2
// ================================================

void SET_STR_AS_PARAM() // SET_STR_AS_PARAM
{
  unsigned short int a;
  Push(Read16(callp0)); // R@
  COUNT(); // COUNT
  Push(Read16(regsp)); // DUP
  Push((Pop() + 1) + callp0); //  1+ R> +
  a = Pop(); // >R
}


// ================================================
// 0x3f4b: WORD '"' codep=0x224c wordp=0x3f51 params=0 returns=2
// ================================================

void _qm_() // "
{
  Push(Read16(user_STATE)); // STATE @
  if (Pop() != 0)
  {
    COMPILE(0x3f39); // compile?
  }
  Push(0x0022);
  Exec("WORD"); // call of word 0x1f06 '(WORD)'
  Push(Read16(user_STATE)); // STATE @
  if (Pop() != 0)
  {
    Push((Read16(Pop())&0xFF) + 1); //  C@ 1+
    ALLOT(); // ALLOT
    return;
  }
  Push(Read16(regsp)); // DUP
  Push((Read16(Pop())&0xFF) + 1); //  C@ 1+
  PAD(); // PAD
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  PAD(); // PAD
  COUNT(); // COUNT
}


// ================================================
// 0x3f87: WORD 'DU<' codep=0x224c wordp=0x3f8f params=4 returns=1
// ================================================

void DU_st_() // DU<
{
  unsigned short int a, b;
  a = Pop(); // >R
  b = Pop(); // >R
  Push(Pop() + 0x8000); //  0x8000 +
  Push(b); // R>
  Push(a + 0x8000); // R> 0x8000 +
  D_st_(); // D<
}


// ================================================
// 0x3fa7: WORD 'PICK' codep=0x224c wordp=0x3fb0 params=1 returns=1
// ================================================

void PICK() // PICK
{
  Push(Read16(regsp)); // DUP
  Push(1);
  _st_(); // <
  if (Pop() != 0)
  {
    UNRAVEL(); // UNRAVEL
  }
  Push(Pop() * 2); //  2*
  SP_at_(); // SP@
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); //  @
}


// ================================================
// 0x3fc6: WORD 'ROLL' codep=0x224c wordp=0x3fcf params=1 returns=0
// ================================================

void ROLL() // ROLL
{
  Push(Read16(regsp)); // DUP
  Push(1);
  _st_(); // <
  if (Pop() != 0)
  {
    UNRAVEL(); // UNRAVEL
  }
  Push(Pop() + 1); //  1+
  Push(Read16(regsp)); // DUP
  PICK(); // PICK
  SWAP(); // SWAP
  Push(Pop() * 2); //  2*
  SP_at_(); // SP@
  Push(Pop() + Pop()); // +
  do
  {
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop() - 2)); //  2- @
    OVER(); // OVER
    Store(); // !
    Push(Pop() - 2); //  2-
    SP_at_(); // SP@
    OVER(); // OVER
    U_st_(); // U<
    Push(!Pop()); //  NOT
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0x4005: WORD '2OVER' codep=0x224c wordp=0x400f params=0 returns=2
// ================================================

void _2OVER() // 2OVER
{
  Push(4);
  PICK(); // PICK
  Push(4);
  PICK(); // PICK
}


// ================================================
// 0x4019: WORD 'D-' codep=0x224c wordp=0x4020 params=4 returns=2
// ================================================

void D_dash_() // D-
{
  DNEGATE(); // DNEGATE
  D_plus_(); // D+
}


// ================================================
// 0x4026: WORD 'D0=' codep=0x224c wordp=0x402e params=2 returns=1
// ================================================

void D0_eq_() // D0=
{
  Push(Pop() | Pop()); // OR
  Push(Pop()==0?1:0); //  0=
}


// ================================================
// 0x4034: WORD 'D=' codep=0x224c wordp=0x403b params=4 returns=1
// ================================================

void D_eq_() // D=
{
  D_dash_(); // D-
  D0_eq_(); // D0=
}


// ================================================
// 0x4041: WORD 'D>' codep=0x224c wordp=0x4048 params=4 returns=1
// ================================================

void D_gt_() // D>
{
  _2SWAP(); // 2SWAP
  D_st_(); // D<
}


// ================================================
// 0x404e: WORD 'WITHIN' codep=0x224c wordp=0x4059 params=3 returns=1
// ================================================

void WITHIN() // WITHIN
{
  unsigned short int a;
  ROT(); // ROT
  a = Pop(); // >R
  Push(a); // I
  _gt_(); // >
  SWAP(); // SWAP
  Push(Pop() - 1); //  1-
  Push(a); // R>
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0x406d: WORD 'DMIN' codep=0x224c wordp=0x4076 params=2 returns=0
// ================================================

void DMIN() // DMIN
{
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_gt_(); // D>
  if (Pop() != 0)
  {
    _2SWAP(); // 2SWAP
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0x4086: WORD 'DMAX' codep=0x224c wordp=0x408f params=2 returns=0
// ================================================

void DMAX() // DMAX
{
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_st_(); // D<
  if (Pop() != 0)
  {
    _2SWAP(); // 2SWAP
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0x409f: WORD 'MYSELF' codep=0x224c wordp=0x40aa
// ================================================

void MYSELF() // MYSELF
{
  LATEST(); // LATEST
  PFA(); // PFA
  CFA(); // CFA
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())==0x3ca0?1:0); //  @ 0x3ca0 =
  if (Pop() != 0)
  {
    Push(Read16(Pop() + 2)); //  2+ @
  }
  _co_(); // ,
}


// ================================================
// 0x40c6: WORD '>TIB' codep=0x224c wordp=0x40cf params=2 returns=0
// ================================================

void _gt_TIB() // >TIB
{
  Push(Read16(user_TIB)); // TIB @
  _2DUP(); // 2DUP
  Push(Pop() + Pop()); // +
  OFF_1(); // OFF_1
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  Push(user__gt_IN); // >IN
  OFF_1(); // OFF_1
}


// ================================================
// 0x40e3: WORD 'DOSPARM' codep=0x224c wordp=0x40ef
// ================================================

void DOSPARM() // DOSPARM
{
  Push(0x0080);
  COUNT(); // COUNT
  _gt_TIB(); // >TIB
  Exec("INTERPRET"); // call of word 0x1dd8 '(INTERPRET)'
}


// ================================================
// 0x40fb: WORD 'XFCB' codep=0x224c wordp=0x4104 params=0 returns=1
// ================================================

void XFCB() // XFCB
{
  Push(Read16(pp__i_FCB) - 7); // 'FCB @ 7 -
}


// ================================================
// 0x410e: WORD 'DRV' codep=0x224c wordp=0x4116 params=0 returns=1
// ================================================

void DRV() // DRV
{
  Push(Read16(pp__i_FCB)); // 'FCB @
}


// ================================================
// 0x411c: WORD 'NAM' codep=0x224c wordp=0x4124 params=0 returns=1
// ================================================

void NAM() // NAM
{
  Push(Read16(pp__i_FCB) + 1); // 'FCB @ 1+
}


// ================================================
// 0x412c: WORD 'TYP' codep=0x224c wordp=0x4134 params=0 returns=1
// ================================================

void TYP() // TYP
{
  Push(Read16(pp__i_FCB) + 9); // 'FCB @ 9 +
}


// ================================================
// 0x4140: WORD 'CURBLK' codep=0x224c wordp=0x414b params=0 returns=1
// ================================================

void CURBLK() // CURBLK
{
  Push(Read16(pp__i_FCB) + 0x000c); // 'FCB @ 0x000c +
}


// ================================================
// 0x4157: WORD 'RECSIZE' codep=0x224c wordp=0x4163 params=0 returns=1
// ================================================

void RECSIZE() // RECSIZE
{
  Push(Read16(pp__i_FCB) + 0x000e); // 'FCB @ 0x000e +
}


// ================================================
// 0x416f: WORD 'FILESIZE' codep=0x224c wordp=0x417c params=0 returns=1
// ================================================

void FILESIZE() // FILESIZE
{
  Push(Read16(pp__i_FCB) + 0x0010); // 'FCB @ 0x0010 +
}


// ================================================
// 0x4188: WORD 'CURREC' codep=0x224c wordp=0x4193 params=0 returns=1
// ================================================

void CURREC() // CURREC
{
  Push(Read16(pp__i_FCB) + 0x0020); // 'FCB @ 0x0020 +
}


// ================================================
// 0x419f: WORD 'RELREC' codep=0x224c wordp=0x41aa params=0 returns=1
// ================================================

void RELREC() // RELREC
{
  Push(Read16(pp__i_FCB) + 0x0021); // 'FCB @ 0x0021 +
}


// ================================================
// 0x41b6: WORD 'CLRFCB' codep=0x224c wordp=0x41c1 params=0 returns=0
// ================================================

void CLRFCB() // CLRFCB
{
  XFCB(); // XFCB
  Push(0x002c);
  Push(0);
  FILL_2(); // FILL_2
  NAM(); // NAM
  Push(0x000b);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  Push(0);
  XFCB(); // XFCB
  C_ex__2(); // C!_2
}


// ================================================
// 0x41dd: WORD 'SYSTEM' codep=0x224c wordp=0x41e8 params=0 returns=0
// ================================================

void SYSTEM() // SYSTEM
{
  Push(0x2d97); // 'FCB'
  Push(Pop() + 7); //  7 +
  Push(pp__i_FCB); // 'FCB
  Store(); // !
}


// ================================================
// 0x41f6: WORD 'SYSUTIL' codep=0x224c wordp=0x4202 params=0 returns=0
// ================================================

void SYSUTIL() // SYSUTIL
{
  Push(0x2d97); // 'FCB'
  Push(Pop() + 0x0033); //  0x0033 +
  Push(pp__i_FCB); // 'FCB
  Store(); // !
}


// ================================================
// 0x4212: WORD 'DOSCALL' codep=0x224c wordp=0x421e params=1 returns=0
// ================================================

void DOSCALL() // DOSCALL
{
  Push(Read16(cc_AX) + 1); // AX 1+
  C_ex__2(); // C!_2
  Push(0x0021);
  INTERRUPT(); // INTERRUPT
}


// ================================================
// 0x422c: WORD 'SELDSK' codep=0x224c wordp=0x4237 params=1 returns=0
// ================================================

void SELDSK() // SELDSK
{
  Push(Read16(regsp)); // DUP
  Push(pp_DEFAULTDRV); // DEFAULTDRV
  Store(); // !
  Push(Pop() - 1); //  1-
  Push(Read16(cc_DX)); // DX
  Store(); // !
  Push(0x000e);
  DOSCALL(); // DOSCALL
}


// ================================================
// 0x424b: WORD 'A::' codep=0x224c wordp=0x4253 params=0 returns=0
// ================================================

void A_c__c_() // A::
{
  Push(1);
  SELDSK(); // SELDSK
}


// ================================================
// 0x4259: WORD 'B::' codep=0x224c wordp=0x4261 params=0 returns=0
// ================================================

void B_c__c_() // B::
{
  Push(2);
  SELDSK(); // SELDSK
}


// ================================================
// 0x4267: WORD 'C::' codep=0x224c wordp=0x426f params=0 returns=0
// ================================================

void C_c__c_() // C::
{
  Push(3);
  SELDSK(); // SELDSK
}


// ================================================
// 0x4275: WORD 'SETFCB' codep=0x224c wordp=0x4280 params=0 returns=1
// ================================================

void SETFCB() // SETFCB
{
  CLRFCB(); // CLRFCB
  Push(Read16(cc_BL)); // BL
  Exec("WORD"); // call of word 0x1f06 '(WORD)'
  Push(Pop() + 1); //  1+
  Push(Read16(cc_SI)); // SI
  Store(); // !
  Push(Read16(pp__i_FCB)); // 'FCB @
  Push(Read16(cc_DI)); // DI
  Store(); // !
  _ro_CS_ask__rc_(); // (CS?)
  Push(Read16(regsp)); // DUP
  Push(Read16(cc_DS)); // DS
  Store(); // !
  Push(Read16(cc_ES)); // ES
  Store(); // !
  Push(5);
  Push(Read16(cc_AX)); // AX
  Store(); // !
  Push(0x0029);
  DOSCALL(); // DOSCALL
  Push(((Read16(Read16(cc_AX))&0xFF)==0x00ff?1:0) | ((Read16(Read16(Read16(cc_DI)) + 1)&0xFF)==Read16(cc_BL)?1:0)); // AX C@ 0x00ff = DI @ 1+ C@ BL = OR
}


// ================================================
// 0x42c6: WORD 'INIT' codep=0x224c wordp=0x42cf params=0 returns=0
// ================================================

void INIT() // INIT
{
  Push(0x000d);
  DOSCALL(); // DOSCALL
}


// ================================================
// 0x42d7: WORD 'FCBCALL' codep=0x224c wordp=0x42e3 params=1 returns=1
// ================================================

void FCBCALL() // FCBCALL
{
  Push(Read16(pp__i_FCB)); // 'FCB @
  Push(Read16(cc_DX)); // DX
  Store(); // !
  _ro_CS_ask__rc_(); // (CS?)
  Push(Read16(cc_DS)); // DS
  Store(); // !
  DOSCALL(); // DOSCALL
  Push(Read16(Read16(cc_AX))&0xFF); // AX C@
}


// ================================================
// 0x42f9: WORD 'OPEN' codep=0x224c wordp=0x4302 params=0 returns=1
// ================================================

void OPEN() // OPEN
{
  Push(0x000f);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x430a: WORD 'CLOSE' codep=0x224c wordp=0x4314 params=0 returns=1
// ================================================

void CLOSE() // CLOSE
{
  Push(0x0010);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x431c: WORD 'SEARCH1ST' codep=0x224c wordp=0x432a params=0 returns=1
// ================================================

void SEARCH1ST() // SEARCH1ST
{
  Push(0x0011);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x4332: WORD 'READNEXT' codep=0x224c wordp=0x433f params=0 returns=1
// ================================================

void READNEXT() // READNEXT
{
  Push(0x0014);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x4347: WORD 'WRITENEXT' codep=0x224c wordp=0x4355 params=0 returns=1
// ================================================

void WRITENEXT() // WRITENEXT
{
  Push(0x0015);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x435d: WORD 'MAKE' codep=0x224c wordp=0x4366 params=0 returns=1
// ================================================

void MAKE() // MAKE
{
  Push(0x0016);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x436e: WORD 'DOS-DTA' codep=0x224c wordp=0x437a params=0 returns=0
// ================================================

void DOS_dash_DTA() // DOS-DTA
{
  Push(pp_DTA); // DTA
  _2_at_(); // 2@
  Push(Read16(cc_DX)); // DX
  Store(); // !
  Push(Read16(cc_DS)); // DS
  Store(); // !
  Push(0x001a);
  DOSCALL(); // DOSCALL
}


// ================================================
// 0x438e: WORD 'READ-RANDOM' codep=0x224c wordp=0x439e params=0 returns=1
// ================================================

void READ_dash_RANDOM() // READ-RANDOM
{
  Push(0x0021);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x43a6: WORD 'WRITE-RANDOM' codep=0x224c wordp=0x43b7 params=0 returns=1
// ================================================

void WRITE_dash_RANDOM() // WRITE-RANDOM
{
  Push(0x0022);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x43bf: WORD 'W43C1' codep=0x224c wordp=0x43c1 params=1 returns=0
// ================================================

void W43C1() // W43C1
{
  ABORT("Bad name", 8);// (ABORT")
}


// ================================================
// 0x43ce: WORD 'MAKE<NAME>' codep=0x224c wordp=0x43dd params=0 returns=0
// ================================================

void MAKE_st_NAME_gt_() // MAKE<NAME>
{
  SETFCB(); // SETFCB
  W43C1(); // W43C1
  MAKE(); // MAKE
  ABORT("Can't create.", 13);// (ABORT")
}


// ================================================
// 0x43f5: WORD 'OPEN<NAME>' codep=0x224c wordp=0x4404 params=0 returns=0
// ================================================

void OPEN_st_NAME_gt_() // OPEN<NAME>
{
  SETFCB(); // SETFCB
  W43C1(); // W43C1
  OPEN(); // OPEN
  ABORT("Can't open.", 11);// (ABORT")
}


// ================================================
// 0x441a: WORD '[FILE]' codep=0x224c wordp=0x4425 params=2 returns=0
// ================================================

void _bo_FILE_bc_() // [FILE]
{
  DOS_dash_DTA(); // DOS-DTA
  Push(Read16(pp_FILE)); // FILE @
  FCBPFAS(); // FCBPFAS
  Push(Read16(Pop())); //  @
  Push(pp__i_FCB); // 'FCB
  Store(); // !
  SWAP(); // SWAP
  RELREC(); // RELREC
  Store(); // !
  if (Pop() != 0)
  {
    READ_dash_RANDOM(); // READ-RANDOM
  } else
  {
    WRITE_dash_RANDOM(); // WRITE-RANDOM
  }
  Push(pp_DISK_dash_ERROR); // DISK-ERROR
  Store(); // !
}


// ================================================
// 0x444b: WORD 'SYSGEN' codep=0x224c wordp=0x4456 params=0 returns=0
// ================================================

void SYSGEN() // SYSGEN
{
  Exec("CR"); // call of word 0x26ee '(CR)'
  FREEZE(); // FREEZE
  _ro_RESTORE_rc_(); // (RESTORE)
  SYSUTIL(); // SYSUTIL
  INIT(); // INIT
  MAKE_st_NAME_gt_(); // MAKE<NAME>
  _ro_CS_ask__rc_(); // (CS?)
  Push(0x0100);
  Push(pp_DTA); // DTA
  _2_ex__2(); // 2!_2
  DOS_dash_DTA(); // DOS-DTA
  HERE(); // HERE
  Push(Pop() - 0x0100); //  0x0100 -
  RECSIZE(); // RECSIZE
  Store(); // !
  WRITENEXT(); // WRITENEXT
  _ro_SETUP_rc_(); // (SETUP)
  IsUNRAVEL(); // ?UNRAVEL
  CLOSE(); // CLOSE
  IsUNRAVEL(); // ?UNRAVEL
}


// ================================================
// 0x4486: WORD '4TH>DOS' codep=0x224c wordp=0x4492 params=2 returns=1
// ================================================

void _4TH_gt_DOS() // 4TH>DOS
{
  unsigned short int i, imax;
  SYSUTIL(); // SYSUTIL
  MAKE_st_NAME_gt_(); // MAKE<NAME>
  Push(0x0400);
  RECSIZE(); // RECSIZE
  Store(); // !
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    _ro_CS_ask__rc_(); // (CS?)
    Push(i); // I
    BLOCK_1(); // BLOCK_1
    Push(pp_DTA); // DTA
    _2_ex__2(); // 2!_2
    DOS_dash_DTA(); // DOS-DTA
    SYSUTIL(); // SYSUTIL
    WRITENEXT(); // WRITENEXT
    IsUNRAVEL(); // ?UNRAVEL
    i++;
  } while(i<imax); // (LOOP)

  CLOSE(); // CLOSE
  IsUNRAVEL(); // ?UNRAVEL
}


// ================================================
// 0x44c0: WORD 'W44C2' codep=0x224c wordp=0x44c2 params=0 returns=1
// ================================================

void W44C2() // W44C2
{
  unsigned short int a;
  Push(Read16(pp__i_FCB)); // 'FCB @
  a = Pop(); // >R
  Push(0);
  PAD(); // PAD
  C_ex__2(); // C!_2
  PAD(); // PAD
  Push(Pop() + 7); //  7 +
  Push(pp__i_FCB); // 'FCB
  Store(); // !
  CLRFCB(); // CLRFCB
  SET_STR_AS_PARAM("STARA   COM");
  NAM(); // NAM
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  _ro_CS_ask__rc_(); // (CS?)
  PAD(); // PAD
  Push(Pop() + 0x0032); //  0x0032 +
  Push(pp_DTA); // DTA
  _2_ex__2(); // 2!_2
  DOS_dash_DTA(); // DOS-DTA
  SEARCH1ST(); // SEARCH1ST
  Push(0x0042);
  NAM(); // NAM
  Push(Pop() + 4); //  4 +
  C_ex__2(); // C!_2
  SEARCH1ST(); // SEARCH1ST
  Push(Pop() | Pop()); // OR
  Push(a); // R>
  Push(pp__i_FCB); // 'FCB
  Store(); // !
}


// ================================================
// 0x4518: WORD 'W451A' codep=0x224c wordp=0x451a params=0 returns=2
// ================================================

void W451A() // W451A
{
  Push(0x0011);
  INTERRUPT(); // INTERRUPT
  Push(Read16(Read16(cc_AX)) & 0x00c0); // AX @ 0x00c0 AND
  Push(0x0040);
  _slash_(); // /
  Push(Pop() + 1); //  1+
}


// ================================================
// 0x4534: WORD 'W4536' codep=0x224c wordp=0x4536 params=1 returns=1
// ================================================

void W4536() // W4536
{
  Push(Read16(cc_DX)); // DX
  Store(); // !
  Push(0x0036);
  DOSCALL(); // DOSCALL
  Push(!(Read16(Read16(cc_AX))==-1?1:0)); // AX @ -1 = NOT
}


// ================================================
// 0x454c: WORD 'W454E' codep=0x224c wordp=0x454e params=0 returns=1
// ================================================

void W454E() // W454E
{
  Push(0x0019);
  DOSCALL(); // DOSCALL
  Push((Read16(Read16(cc_AX))&0xFF) + 1); // AX C@ 1+
}


// ================================================
// 0x455c: WORD 'MAXDRV' codep=0x1d29 wordp=0x4567
// ================================================
// 0x4567: db 0x04 0x00 '  '

// ================================================
// 0x4569: WORD 'SETMAXDRV' codep=0x224c wordp=0x4577 params=0 returns=1
// ================================================

void SETMAXDRV() // SETMAXDRV
{
  unsigned short int i, imax;
  W451A(); // W451A
  Push(2);
  MAX(); // MAX
  W454E(); // W454E
  MAX(); // MAX
  Push(pp_MAXDRV); // MAXDRV
  Store(); // !
  W44C2(); // W44C2
  if (Pop() == 0) return;

  i = Read16(pp_MAXDRV) + 1; // MAXDRV @ 1+
  imax = 7;
  do // (DO)
  {
    Push(i); // I
    W4536(); // W4536
    if (Pop() != 0)
    {
      Push(i); // I
      Push(pp_MAXDRV); // MAXDRV
      Store(); // !
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_MAXDRV)==2?1:0); // MAXDRV @ 2 =
  W451A(); // W451A
  Push(Pop()==1?1:0); //  1 =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(1);
  Push(pp_MAXDRV); // MAXDRV
  Store(); // !
}


// ================================================
// 0x45c3: WORD 'W45C5' codep=0x224c wordp=0x45c5 params=0 returns=0
// ================================================

void W45C5() // W45C5
{
  DRV(); // DRV
  Push((Read16(Pop())&0xFF)==0?1:0); //  C@ 0=
  if (Pop() == 0) return;
  W454E(); // W454E
  DRV(); // DRV
  C_ex__2(); // C!_2
}


// ================================================
// 0x45d7: WORD 'W45D9' codep=0x224c wordp=0x45d9 params=1 returns=1
// ================================================

void W45D9() // W45D9
{
  Push(Pop() + 1); //  1+
  Push(Read16(pp_MAXDRV)); // MAXDRV @
  OVER(); // OVER
  _st_(); // <
  if (Pop() == 0) return;
  Pop(); // DROP
  Push(1);
}


// ================================================
// 0x45ed: WORD 'SMARTOPEN' codep=0x224c wordp=0x45fb params=0 returns=1
// ================================================

void SMARTOPEN() // SMARTOPEN
{
  unsigned short int a, b;
  OPEN(); // OPEN
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  DRV(); // DRV
  Push((Read16(Pop())&0xFF)==0?1:0); //  C@ 0=
  if (Pop() == 0) return;
  a = Pop(); // >R
  W45C5(); // W45C5
  DRV(); // DRV
  Push(Read16(Pop())&0xFF); //  C@
  while(1)
  {
    DRV(); // DRV
    Push(Read16(Pop())&0xFF); //  C@
    W45D9(); // W45D9
    _2DUP(); // 2DUP
    Push((Pop()==Pop())?1:0); // =
    Push(!Pop() & a); //  NOT I AND
    if (Pop() == 0) break;

    DRV(); // DRV
    C_ex__2(); // C!_2
    OPEN(); // OPEN
    Push(a); // R>
    Pop(); // DROP
    b = Pop(); // >R
  }
  Pop(); Pop(); // 2DROP
  Push(a); // R>
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(0);
  DRV(); // DRV
  C_ex__2(); // C!_2
}


// ================================================
// 0x464b: WORD 'ASKMOUNT' codep=0x1d29 wordp=0x4658
// ================================================
// 0x4658: db 0x69 0x46 'iF'

// ================================================
// 0x465a: WORD '<ASKMOUNT>' codep=0x224c wordp=0x4669 params=0 returns=0
// ================================================

void _st_ASKMOUNT_gt_() // <ASKMOUNT>
{
  Exec("CR"); // call of word 0x26ee '(CR)'
  PRINT("Place disk containing file", 26); // (.")
  Exec("CR"); // call of word 0x26ee '(CR)'
  NAM(); // NAM
  Push(8);
  _dash_TRAILING(); // -TRAILING
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(".", 1); // (.")
  TYP(); // TYP
  Push(3);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" into ", 6); // (.")
  DRV(); // DRV
  Push(Read16(Pop())&0xFF); //  C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    PRINT("drive ", 6); // (.")
    Push(Pop() + 0x0040); //  0x0040 +
    Exec("EMIT"); // call of word 0x2731 '(EMIT)'
  } else
  {
    PRINT("any drive", 9); // (.")
  }
  Exec("CR"); // call of word 0x26ee '(CR)'
  PRINT("and press any key when ready.", 29); // (.")
  Exec("KEY_1"); // call of word 0x25d7 '(KEY)'
  Pop(); // DROP
}


// ================================================
// 0x46f8: WORD 'DOSMOUNT' codep=0x224c wordp=0x4705 params=1 returns=2
// ================================================

void DOSMOUNT() // DOSMOUNT
{
  unsigned short int a;
  a = Pop(); // >R
  INIT(); // INIT
  while(1)
  {
    Push(a); // I
    FCBPFAS(); // FCBPFAS
    Push(Read16(Pop())); //  @
    Push(pp__i_FCB); // 'FCB
    Store(); // !
    SMARTOPEN(); // SMARTOPEN
    Push(Read16(regsp)); // DUP
    if (Pop() == 0) break;

    Pop(); // DROP
    FLUSH(); // FLUSH
    INIT(); // INIT
    Push(a); // I
    FCBPFAS(); // FCBPFAS
    Push(Read16(Pop())); //  @
    Push(pp__i_FCB); // 'FCB
    Store(); // !
    Push(pp_ASKMOUNT); // ASKMOUNT
    GetEXECUTE(); // @EXECUTE
  }
  Push(0x0400);
  RECSIZE(); // RECSIZE
  Store(); // !
  FILESIZE(); // FILESIZE
  _2_at_(); // 2@
  SWAP(); // SWAP
  Push(0x0400);
  M_slash_(); // M/
  SWAP(); // SWAP
  Pop(); // DROP
  DRV(); // DRV
  Push(Read16(Pop())&0xFF); //  C@
  Push(a); // R>
  DRIVENUMBERS(); // DRIVENUMBERS
  C_ex__2(); // C!_2
}


// ================================================
// 0x4757: WORD 'DOSUNMOUNT' codep=0x224c wordp=0x4766 params=1 returns=1
// ================================================

void DOSUNMOUNT() // DOSUNMOUNT
{
  FCBPFAS(); // FCBPFAS
  Push(Read16(Pop())); //  @
  Push(pp__i_FCB); // 'FCB
  Store(); // !
  CLOSE(); // CLOSE
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0x4776: WORD 'DR2' codep=0x224c wordp=0x477e params=0 returns=0
// ================================================

void DR2() // DR2
{
  Push(0x4425); // '[FILE]'
  Push(0x02d0);
  SYSTEM(); // SYSTEM
  Push(Read16(pp__i_FCB)); // 'FCB @
  NAM(); // NAM
  DRV(); // DRV
  Push(Read16(Pop())&0xFF); //  C@
  Push(1);
  Push(Read16(cc_DOS_dash_FILE)); // DOS-FILE
  _st_MOUNT_gt_(); // <MOUNT>
  Pop(); // DROP
}


// ================================================
// 0x479c: WORD 'DR3' codep=0x224c wordp=0x47a4 params=0 returns=0
// ================================================

void DR3() // DR3
{
  Push(0x4425); // '[FILE]'
  Push(0x05dc);
  SYSUTIL(); // SYSUTIL
  Push(Read16(pp__i_FCB)); // 'FCB @
  NAM(); // NAM
  DRV(); // DRV
  Push(Read16(Pop())&0xFF); //  C@
  Push(1);
  Push(Read16(cc_DOS_dash_FILE) + 1); // DOS-FILE 1+
  _st_MOUNT_gt_(); // <MOUNT>
  Pop(); // DROP
}


// ================================================
// 0x47c4: WORD 'USING' codep=0x224c wordp=0x47ce params=0 returns=0
// ================================================

void USING() // USING
{
  Push(Read16(cc_DOS_dash_FILE)); // DOS-FILE
  UNMOUNT(); // UNMOUNT
  SYSTEM(); // SYSTEM
  SETFCB(); // SETFCB
  W43C1(); // W43C1
  DR2(); // DR2
}


// ================================================
// 0x47dc: WORD 'W47DE' codep=0x224c wordp=0x47de params=2 returns=2
// ================================================

void W47DE() // W47DE
{
  Push(Read16(cc_ES)); // ES
  Store(); // !
  Push(Read16(regsp)); // DUP
  Push(Read16(cc_BX)); // BX
  Store(); // !
  Push(0x004a);
  DOSCALL(); // DOSCALL
  Push(Read16(Read16(cc_PSW)) & 1); // PSW @ 1 AND
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(Read16(Read16(cc_BX))); // BX @
    Push(1);
  } else
  {
    Push(0);
  }
  _ro_CS_ask__rc_(); // (CS?)
  Push(Read16(cc_ES)); // ES
  Store(); // !
}


// ================================================
// 0x4810: WORD 'SETSYSK' codep=0x224c wordp=0x481c params=0 returns=0
// ================================================

void SETSYSK() // SETSYSK
{
  Push(0x8000);
  _ro_CS_ask__rc_(); // (CS?)
  W47DE(); // W47DE
  Pop(); // DROP
  Push(Read16(regsp)); // DUP
  _ro_CS_ask__rc_(); // (CS?)
  Push(Pop() + Pop()); // +
  Push(0);
  Push(0x0040);
  U_slash_MOD(); // U/MOD
  Push(pp_SYSK); // SYSK
  Store(); // !
  Pop(); // DROP
  _ro_CS_ask__rc_(); // (CS?)
  W47DE(); // W47DE
  Pop(); // DROP
  Push(0x2000);
  U_st_(); // U<
  if (Pop() == 0) return;
  PRINT("Out of memory", 13); // (.")
  Push(0x0bb8);
  MS(); // MS
  BYE_2(); // BYE_2
}


// ================================================
// 0x4864: WORD 'W4866' codep=0x224c wordp=0x4866
// ================================================
// orphan

void W4866() // W4866
{
  SETMAXDRV(); // SETMAXDRV
  DOSPARM(); // DOSPARM
}


// ================================================
// 0x486c: WORD 'ON_2' codep=0x4873 wordp=0x4873 params=1 returns=0
// ================================================
// 0x4873: pop    bx
// 0x4874: mov    ax,0001
// 0x4877: mov    [bx],ax
// 0x4879: lodsw
// 0x487a: mov    bx,ax
// 0x487c: jmp    word ptr [bx]

// ================================================
// 0x487e: WORD 'OFF_2' codep=0x4886 wordp=0x4886 params=1 returns=0
// ================================================
// 0x4886: pop    bx
// 0x4887: xor    ax,ax
// 0x4889: mov    [bx],ax
// 0x488b: lodsw
// 0x488c: mov    bx,ax
// 0x488e: jmp    word ptr [bx]

// ================================================
// 0x4890: WORD 'CAPSON' codep=0x4892 wordp=0x4892 params=0 returns=0
// ================================================
// 0x4892: push   ds
// 0x4893: mov    ax,0040
// 0x4896: mov    ds,ax
// 0x4898: mov    bx,0017
// 0x489b: mov    [bx],al
// 0x489d: pop    ds
// 0x489e: lodsw
// 0x489f: mov    bx,ax
// 0x48a1: jmp    word ptr [bx]

// ================================================
// 0x48a3: WORD 'KEY_2' codep=0x224c wordp=0x48ab params=0 returns=1
// ================================================

void KEY_2() // KEY_2
{
  CAPSON(); // CAPSON
  Exec("KEY_1"); // call of word 0x25d7 '(KEY)'
}


// ================================================
// 0x48b1: WORD 'NULL' codep=0x3b68 wordp=0x48ba
// ================================================
// 0x48ba: dw 0x0000 0x0000

// ================================================
// 0x48be: WORD 'ZZZ' codep=0x1d29 wordp=0x48c6
// ================================================
// 0x48c6: db 0x36 0x00 0x19 0x00 0x4f 0x54 0x20 0x20 0x6d 0x65 '6   OT  me'

// ================================================
// 0x48d0: WORD '<LCMOVE' codep=0x48dc wordp=0x48dc params=5 returns=0
// ================================================
// 0x48dc: mov    bx,di
// 0x48de: pop    cx
// 0x48df: mov    ax,es
// 0x48e1: mov    dx,ds
// 0x48e3: pop    di
// 0x48e4: pop    es
// 0x48e5: mov    [48C6],si // ZZZ
// 0x48e9: pop    si
// 0x48ea: pop    ds
// 0x48eb: or     cx,cx
// 0x48ed: jz     48F9
// 0x48ef: std    
// 0x48f0: add    di,cx
// 0x48f2: dec    di
// 0x48f3: add    si,cx
// 0x48f5: dec    si
// 0x48f6: repz   
// 0x48f7: movsb
// 0x48f8: cld    
// 0x48f9: mov    es,ax
// 0x48fb: mov    ds,dx
// 0x48fd: mov    si,[48C6] // ZZZ
// 0x4901: mov    di,bx
// 0x4903: lodsw
// 0x4904: mov    bx,ax
// 0x4906: jmp    word ptr [bx]

// ================================================
// 0x4908: WORD '2^N' codep=0x4910 wordp=0x4910 params=1 returns=1
// ================================================
// 0x4910: pop    cx
// 0x4911: xor    ax,ax
// 0x4913: stc    
// 0x4914: inc    cx
// 0x4915: jcxz   4919
// 0x4917: rcl    ax,cl
// 0x4919: push   ax
// 0x491a: lodsw
// 0x491b: mov    bx,ax
// 0x491d: jmp    word ptr [bx]

// ================================================
// 0x491f: WORD 'BIT' codep=0x224c wordp=0x4927 params=1 returns=1
// ================================================

void BIT() // BIT
{
  Push(Pop() - 1); //  1-
  _2_h_N(); // 2^N
}


// ================================================
// 0x492d: WORD '16/' codep=0x4935 wordp=0x4935 params=1 returns=1
// ================================================
// 0x4935: pop    ax
// 0x4936: mov    cx,0004
// 0x4939: shr    ax,cl
// 0x493b: push   ax
// 0x493c: lodsw
// 0x493d: mov    bx,ax
// 0x493f: jmp    word ptr [bx]

// ================================================
// 0x4941: WORD '16*' codep=0x4949 wordp=0x4949 params=1 returns=1
// ================================================
// 0x4949: pop    ax
// 0x494a: mov    cx,0004
// 0x494d: shl    ax,cl
// 0x494f: push   ax
// 0x4950: lodsw
// 0x4951: mov    bx,ax
// 0x4953: jmp    word ptr [bx]

// ================================================
// 0x4955: WORD 'D16*' codep=0x495e wordp=0x495e params=2 returns=2
// ================================================
// 0x495e: pop    ax
// 0x495f: pop    dx
// 0x4960: mov    cx,0004
// 0x4963: shl    dx,1
// 0x4965: rcl    ax,1
// 0x4967: loop   4963
// 0x4969: push   dx
// 0x496a: push   ax
// 0x496b: lodsw
// 0x496c: mov    bx,ax
// 0x496e: jmp    word ptr [bx]

// ================================================
// 0x4970: WORD '3*' codep=0x224c wordp=0x4977 params=1 returns=1
// ================================================

void _3_star_() // 3*
{
  Push(Pop() * 3); //  3 *
}


// ================================================
// 0x497d: WORD '3+' codep=0x4984 wordp=0x4984 params=1 returns=1
// ================================================
// 0x4984: pop    ax
// 0x4985: add    ax,0003
// 0x4988: push   ax
// 0x4989: lodsw
// 0x498a: mov    bx,ax
// 0x498c: jmp    word ptr [bx]

// ================================================
// 0x498e: WORD '1.5@' codep=0x4997 wordp=0x4997 params=1 returns=2
// ================================================
// 0x4997: pop    bx
// 0x4998: push   word ptr [bx]
// 0x499a: xor    ax,ax
// 0x499c: mov    al,[bx+02]
// 0x499f: push   ax
// 0x49a0: lodsw
// 0x49a1: mov    bx,ax
// 0x49a3: jmp    word ptr [bx]

// ================================================
// 0x49a5: WORD '1.5!_2' codep=0x49ae wordp=0x49ae params=3 returns=0
// ================================================
// 0x49ae: pop    bx
// 0x49af: pop    ax
// 0x49b0: mov    [bx+02],al
// 0x49b3: pop    word ptr [bx]
// 0x49b5: lodsw
// 0x49b6: mov    bx,ax
// 0x49b8: jmp    word ptr [bx]

// ================================================
// 0x49ba: WORD '@DS' codep=0x49c2 wordp=0x49c2 params=0 returns=1
// ================================================
// 0x49c2: push   ds
// 0x49c3: lodsw
// 0x49c4: mov    bx,ax
// 0x49c6: jmp    word ptr [bx]

// ================================================
// 0x49c8: WORD 'W49CA' codep=0x1d29 wordp=0x49ca params=0 returns=1
// ================================================
// 0x49ca: push   cx
// 0x49cb: es:    
// 0x49cc: mov    cl,[bx]
// 0x49ce: xchg   ax,bx
// 0x49d0: es:    
// 0x49d1: xchg   [bx],cl
// 0x49d3: xchg   ax,bx
// 0x49d5: es:    
// 0x49d6: mov    [bx],cl
// 0x49d8: pop    cx
// 0x49d9: ret    


// ================================================
// 0x49da: WORD '+@' codep=0x224c wordp=0x49e1 params=2 returns=1
// ================================================

void _plus__at_() // +@
{
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); //  @
}


// ================================================
// 0x49e7: WORD 'L+-@' codep=0x49f0 wordp=0x49f0 params=2 returns=1
// ================================================
// 0x49f0: mov    dx,ds
// 0x49f2: pop    bx
// 0x49f3: pop    ds
// 0x49f4: xor    ax,ax
// 0x49f6: mov    al,[bx]
// 0x49f8: cbw    
// 0x49f9: push   ax
// 0x49fa: mov    ds,dx
// 0x49fc: lodsw
// 0x49fd: mov    bx,ax
// 0x49ff: jmp    word ptr [bx]

// ================================================
// 0x4a01: WORD 'PRTSCR' codep=0x4a0c wordp=0x4a0c params=0 returns=0
// ================================================
// 0x4a0c: int    05
// 0x4a0e: lodsw
// 0x4a0f: mov    bx,ax
// 0x4a11: jmp    word ptr [bx]

// ================================================
// 0x4a13: WORD 'W4A15' codep=0x4a15 wordp=0x4a15
// ================================================
// 0x4a15: pop    bx
// 0x4a16: pop    ax
// 0x4a17: mov    cx,[bx]
// 0x4a19: add    bx,02
// 0x4a1c: mov    dx,[bx]
// 0x4a1e: add    bx,02
// 0x4a21: cmp    ax,[bx]
// 0x4a23: jnz    4A2D
// 0x4a25: add    bx,02
// 0x4a28: mov    dx,[bx]
// 0x4a2a: mov    cx,0001
// 0x4a2d: add    bx,04
// 0x4a30: loop   4A21
// 0x4a32: push   dx
// 0x4a33: lodsw
// 0x4a34: mov    bx,ax
// 0x4a36: jmp    word ptr [bx]

// ================================================
// 0x4a38: WORD 'CASE' codep=0x224c wordp=0x4a41
// ================================================

void CASE() // CASE
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  HERE(); // HERE
  Push2Words("NULL");
  _co_(); // ,
  _co_(); // ,
  Push(0);
  CODE(); // (;CODE) inlined assembler code
// 0x4a4f: call   1649
  W4A15(); // W4A15
  EXECUTE(); // EXECUTE
}


// ================================================
// 0x4a58: WORD 'IS' codep=0x224c wordp=0x4a5f
// ================================================

void IS() // IS
{
  _co_(); // ,
  _i__1(); // '_1
  _co_(); // ,
  Push(Pop() + 1); //  1+
}


// ================================================
// 0x4a69: WORD 'OTHERS' codep=0x224c wordp=0x4a74
// ================================================

void OTHERS() // OTHERS
{
  _i__1(); // '_1
  Push(3);
  PICK(); // PICK
  Push(Pop() + 2); //  2+
  Store(); // !
  SWAP(); // SWAP
  Store(); // !
}


// ================================================
// 0x4a84: WORD 'CASE:' codep=0x224c wordp=0x4a8e
// ================================================

void CASE_c_() // CASE:
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  SMUDGE(); // SMUDGE
  _bc_(); // ]
  CODE(); // (;CODE) inlined assembler code
// 0x4a96: call   1649
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); //  @
  CFAEXEC(); // CFAEXEC
}


// ================================================
// 0x4aa7: WORD 'SEED' codep=0x1d29 wordp=0x4ab0
// ================================================
// 0x4ab0: db 0xe4 0x39 ' 9'

// ================================================
// 0x4ab2: WORD 'FRND' codep=0x4abb wordp=0x4abb params=0 returns=1
// ================================================
// 0x4abb: mov    ax,[4AB0] // SEED
// 0x4abf: mov    cx,7ABD
// 0x4ac2: imul   cx
// 0x4ac4: add    ax,1B0F
// 0x4ac7: mov    [4AB0],ax // SEED
// 0x4acb: push   ax
// 0x4acc: lodsw
// 0x4acd: mov    bx,ax
// 0x4acf: jmp    word ptr [bx]

// ================================================
// 0x4ad1: WORD 'RRND' codep=0x224c wordp=0x4ada params=2 returns=1
// ================================================

void RRND() // RRND
{
  OVER(); // OVER
  _dash_(); // -
  FRND(); // FRND
  U_star_(); // U*
  SWAP(); // SWAP
  Pop(); // DROP
  Push(Pop() + Pop()); // +
}


// ================================================
// 0x4aea: WORD '+BIT' codep=0x4af3 wordp=0x4af3 params=1 returns=1
// ================================================
// 0x4af3: xor    dx,dx
// 0x4af5: pop    ax
// 0x4af6: mov    cx,0010
// 0x4af9: shr    ax,1
// 0x4afb: jae    4AFE
// 0x4afd: inc    dx
// 0x4afe: loop   4AF9
// 0x4b00: push   dx
// 0x4b01: lodsw
// 0x4b02: mov    bx,ax
// 0x4b04: jmp    word ptr [bx]

// ================================================
// 0x4b06: WORD 'D2*' codep=0x4b08 wordp=0x4b08 params=2 returns=2
// ================================================
// 0x4b08: pop    ax
// 0x4b09: pop    cx
// 0x4b0a: shl    cx,1
// 0x4b0c: rcl    ax,1
// 0x4b0e: push   cx
// 0x4b0f: push   ax
// 0x4b10: lodsw
// 0x4b11: mov    bx,ax
// 0x4b13: jmp    word ptr [bx]

// ================================================
// 0x4b15: WORD 'EASY-BITS' codep=0x4b17 wordp=0x4b17 params=4 returns=3
// ================================================
// 0x4b17: pop    cx
// 0x4b18: pop    ax
// 0x4b19: pop    dx
// 0x4b1a: pop    bx
// 0x4b1b: shl    bx,1
// 0x4b1d: rcl    dx,1
// 0x4b1f: shl    bx,1
// 0x4b21: rcl    dx,1
// 0x4b23: sub    dx,ax
// 0x4b25: jns    4B2E
// 0x4b27: add    dx,ax
// 0x4b29: shl    ax,1
// 0x4b2b: dec    ax
// 0x4b2c: jmp    4B32
// 0x4b2e: inc    ax
// 0x4b2f: shl    ax,1
// 0x4b31: inc    ax
// 0x4b32: loop   4B1B
// 0x4b34: push   bx
// 0x4b35: push   dx
// 0x4b36: push   ax
// 0x4b37: lodsw
// 0x4b38: mov    bx,ax
// 0x4b3a: jmp    word ptr [bx]

// ================================================
// 0x4b3c: WORD '2'S-BIT' codep=0x224c wordp=0x4b3e params=3 returns=3
// ================================================

void _2_i_S_dash_BIT() // 2'S-BIT
{
  unsigned short int a;
  a = Pop(); // >R
  D2_star_(); // D2*
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    D2_star_(); // D2*
    Push(Read16(a)); // R@
    _dash_(); // -
    Push(a + 1); // R> 1+
    return;
  }
  D2_star_(); // D2*
  Push(Read16(a)); // R@
  _2DUP(); // 2DUP
  U_st_(); // U<
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(a - 1); // R> 1-
    return;
  }
  _dash_(); // -
  Push(a + 1); // R> 1+
}


// ================================================
// 0x4b76: WORD '1'S-BIT' codep=0x224c wordp=0x4b78 params=3 returns=1
// ================================================

void _1_i_S_dash_BIT() // 1'S-BIT
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(a + 1); // R> 1+
    return;
  }
  D2_star_(); // D2*
  Push(0x8000);
  Push(Read16(a)); // R@
  DU_st_(); // DU<
  Push((Pop()==0?1:0) + a); //  0= R> +
}


// ================================================
// 0x4b9e: WORD 'SQRT' codep=0x224c wordp=0x4ba7 params=2 returns=1
// ================================================

void SQRT() // SQRT
{
  Push(0);
  Push(1);
  Push(8);
  EASY_dash_BITS(); // EASY-BITS
  ROT(); // ROT
  Pop(); // DROP
  Push(6);
  EASY_dash_BITS(); // EASY-BITS
  _2_i_S_dash_BIT(); // 2'S-BIT
  _1_i_S_dash_BIT(); // 1'S-BIT
}


// ================================================
// 0x4bbd: WORD '+-@' codep=0x4bc5 wordp=0x4bc5 params=1 returns=1
// ================================================
// 0x4bc5: pop    bx
// 0x4bc6: mov    al,[bx]
// 0x4bc8: cbw    
// 0x4bc9: push   ax
// 0x4bca: lodsw
// 0x4bcb: mov    bx,ax
// 0x4bcd: jmp    word ptr [bx]

// ================================================
// 0x4bcf: WORD 'L1.5@' codep=0x4bd9 wordp=0x4bd9 params=2 returns=2
// ================================================
// 0x4bd9: pop    bx
// 0x4bda: pop    cx
// 0x4bdb: mov    ax,ds
// 0x4bdd: mov    ds,cx
// 0x4bdf: push   word ptr [bx]
// 0x4be1: xor    cx,cx
// 0x4be3: mov    cl,[bx+02]
// 0x4be6: push   cx
// 0x4be7: mov    ds,ax
// 0x4be9: lodsw
// 0x4bea: mov    bx,ax
// 0x4bec: jmp    word ptr [bx]

// ================================================
// 0x4bee: WORD '<C!>' codep=0x0c60 wordp=0x4bf7
// ================================================

// ================================================
// 0x4bf7: WORD '<!>' codep=0x0be1 wordp=0x4bff
// ================================================

// ================================================
// 0x4bff: WORD '<1.5!>' codep=0x49ae wordp=0x4c0a
// ================================================

// ================================================
// 0x4c0a: WORD '<+!>' codep=0x0f85 wordp=0x4c13
// ================================================

// ================================================
// 0x4c13: WORD '<D!>' codep=0x0c24 wordp=0x4c1c
// ================================================

// ================================================
// 0x4c1c: WORD '<OFF>' codep=0x3aec wordp=0x4c26
// ================================================
// 0x4c26: db 0x84 0x48 ' H'

// ================================================
// 0x4c28: WORD '<ON>' codep=0x3aec wordp=0x4c31
// ================================================
// 0x4c31: db 0x71 0x48 'qH'

// ================================================
// 0x4c33: WORD '<BLOCK>' codep=0x3aec wordp=0x4c3f
// ================================================
// 0x4c3f: db 0x5d 0x38 ']8'

// ================================================
// 0x4c41: WORD 'FILTER' codep=0x1d29 wordp=0x4c4c
// ================================================
// 0x4c4c: db 0x53 0x20 'S '

// ================================================
// 0x4c4e: WORD 'PEAK' codep=0x1d29 wordp=0x4c57
// ================================================
// 0x4c57: db 0x54 0x20 'T '

// ================================================
// 0x4c59: WORD 'CURVE' codep=0x1d29 wordp=0x4c5b
// ================================================
// orphan
// 0x4c5b: db 0x00 0x08 0x10 0x88 0x88 0x89 0x25 0x55 0x55 0x57 0x75 0x77 0x77 0x7f 0x7f 0xff 0xff 0xfe 0xf7 0xee 0xee 0xae 0xae 0xaa 0xa4 0xa4 0x91 0x11 0x11 0x08 0x10 0x00 '      %UUWuww                 '

// ================================================
// 0x4c7b: WORD '(SLIPPER)' codep=0x4c87 wordp=0x4c87
// ================================================
// 0x4c87: pop    ax
// 0x4c88: mov    bx,ax
// 0x4c8a: mov    cx,[4C57] // PEAK
// 0x4c8e: sub    bx,cx
// 0x4c90: add    bx,0080
// 0x4c94: cmp    bh,00
// 0x4c97: jnz    4CB1
// 0x4c99: mov    dx,bx
// 0x4c9b: and    dx,0007
// 0x4c9f: mov    cl,03
// 0x4ca1: shr    bx,cl
// 0x4ca3: mov    cl,[bx+4C5B]
// 0x4ca7: mov    bx,[4C4C] // FILTER
// 0x4cab: xchg   dx,cx
// 0x4cad: shr    bx,cl
// 0x4caf: jmp    4CB3
// 0x4cb1: sub    bx,bx
// 0x4cb3: and    bx,dx
// 0x4cb5: jz     4CB8
// 0x4cb7: push   ax
// 0x4cb8: push   bx
// 0x4cb9: lodsw
// 0x4cba: mov    bx,ax
// 0x4cbc: jmp    word ptr [bx]

// ================================================
// 0x4cbe: WORD 'SPHEREWRAP' codep=0x1d29 wordp=0x4cca
// ================================================
// 0x4cca: db 0x50 0x20 'P '

// ================================================
// 0x4ccc: WORD 'SIGNEXTEND' codep=0x1d29 wordp=0x4cd8
// ================================================
// 0x4cd8: db 0x44 0x20 'D '

// ================================================
// 0x4cda: WORD 'W4CDC' codep=0x1d29 wordp=0x4cdc
// ================================================
// 0x4cdc: db 0x3a 0x20 ': '

// ================================================
// 0x4cde: WORD 'W4CE0' codep=0x1d29 wordp=0x4ce0
// ================================================
// 0x4ce0: db 0x3a 0x20 ': '

// ================================================
// 0x4ce2: WORD 'W4CE4' codep=0x1d29 wordp=0x4ce4
// ================================================
// 0x4ce4: db 0x3a 0x20 ': '

// ================================================
// 0x4ce6: WORD ''ARRAY' codep=0x1d29 wordp=0x4cf1
// ================================================
// 0x4cf1: db 0xc1 0x6a ' j'

// ================================================
// 0x4cf3: WORD 'ARRAYSE' codep=0x224c wordp=0x4cff params=0 returns=1
// ================================================

void ARRAYSE() // ARRAYSE
{
  Push(Read16(pp__i_ARRAY)); // 'ARRAY @
  Push(6);
  _plus__at_(); // +@
}


// ================================================
// 0x4d09: WORD '#BYTES' codep=0x224c wordp=0x4d14 params=0 returns=1
// ================================================

void _n_BYTES() // #BYTES
{
  Push(Read16(pp__i_ARRAY)); // 'ARRAY @
  Push(4);
  _plus__at_(); // +@
}


// ================================================
// 0x4d1e: WORD '#COLZ' codep=0x224c wordp=0x4d28 params=0 returns=1
// ================================================

void _n_COLZ() // #COLZ
{
  Push(Read16(Read16(pp__i_ARRAY))); // 'ARRAY @ @
}


// ================================================
// 0x4d30: WORD '#ROWZ' codep=0x224c wordp=0x4d3a params=0 returns=1
// ================================================

void _n_ROWZ() // #ROWZ
{
  Push(Read16(Read16(pp__i_ARRAY) + 2)); // 'ARRAY @ 2+ @
}


// ================================================
// 0x4d44: WORD 'ACELLADDR' codep=0x224c wordp=0x4d50
// ================================================

void ACELLADDR() // ACELLADDR
{
  Push(Read16(pp__i_ARRAY)); // 'ARRAY @
  Push(pp_W4CDC); // W4CDC
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x4d5a: WORD 'W4D5C' codep=0x4d5c wordp=0x4d5c
// ================================================
// 0x4d5c: pop    bx
// 0x4d5d: add    bx,06
// 0x4d60: mov    ax,[bx]
// 0x4d62: sub    bx,02
// 0x4d65: mov    cx,[bx]
// 0x4d67: mov    bx,cx
// 0x4d69: pop    cx
// 0x4d6a: shl    cx,1
// 0x4d6c: add    bx,cx
// 0x4d6e: push   ds
// 0x4d6f: mov    ds,ax
// 0x4d71: mov    cx,[bx]
// 0x4d73: pop    ds
// 0x4d74: pop    dx
// 0x4d75: add    cx,dx
// 0x4d77: push   ax
// 0x4d78: push   cx
// 0x4d79: lodsw
// 0x4d7a: mov    bx,ax
// 0x4d7c: jmp    word ptr [bx]

// ================================================
// 0x4d7e: WORD 'A!' codep=0x224c wordp=0x4d85
// ================================================

void A_ex_() // A!
{
  Push(pp_W4CE0); // W4CE0
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x4d8b: WORD 'A@' codep=0x224c wordp=0x4d92
// ================================================

void A_at_() // A@
{
  Push(pp_W4CE4); // W4CE4
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x4d98: WORD '!OFFSETS' codep=0x4da4 wordp=0x4da4 params=1 returns=0
// ================================================
// 0x4da4: pop    bx
// 0x4da5: push   si
// 0x4da6: push   di
// 0x4da7: push   bp
// 0x4da8: push   es
// 0x4da9: mov    si,[bx]
// 0x4dab: mov    cx,[bx+02]
// 0x4dae: mov    bp,[bx+04]
// 0x4db1: push   word ptr [bx+06]
// 0x4db4: pop    es
// 0x4db5: mov    di,cx
// 0x4db7: shl    di,1
// 0x4db9: add    di,bp
// 0x4dbb: std    
// 0x4dbc: mov    ax,si
// 0x4dbe: mul    cx
// 0x4dc0: stosw
// 0x4dc1: loop   4DBC
// 0x4dc3: xor    ax,ax
// 0x4dc5: stosw
// 0x4dc6: cld    
// 0x4dc7: pop    es
// 0x4dc8: pop    bp
// 0x4dc9: pop    di
// 0x4dca: pop    si
// 0x4dcb: lodsw
// 0x4dcc: mov    bx,ax
// 0x4dce: jmp    word ptr [bx]

// ================================================
// 0x4dd0: WORD 'ARRAY' codep=0x224c wordp=0x4dda
// ================================================

void ARRAY() // ARRAY
{
  unsigned short int a, b;
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  HERE(); // HERE
  a = Pop(); // >R
  b = Pop(); // >R
  SWAP(); // SWAP
  _co_(); // ,
  _co_(); // ,
  Push(Read16(a) * Read16(a + 2)); // I' @ I' 2+ @ *
  _co_(); // ,
  Push(b); // R>
  _co_(); // ,
  Push(a); // R>
  Pop(); // DROP
  CODE(); // (;CODE) inlined assembler code
// 0x4e00: call   1649
  W4D5C(); // W4D5C
}


// ================================================
// 0x4e07: WORD 'SETLARRAY' codep=0x224c wordp=0x4e13 params=1 returns=0
// ================================================

void SETLARRAY() // SETLARRAY
{
  Push(pp__i_ARRAY); // 'ARRAY
  Store(); // !
  Push(0x4d5c); // 'W4D5C'
  Push(pp_W4CDC); // W4CDC
  Store(); // !
  Push(0x2ee5); // 'LC!'
  Push(pp_W4CE0); // W4CE0
  Store(); // !
  Push(Read16(pp_SIGNEXTEND)); // SIGNEXTEND @
  if (Pop() != 0)
  {
    Push(0x49f0); // 'L+-@'
  } else
  {
    Push(0x2ecd); // 'LC@'
  }
  Push(pp_W4CE4); // W4CE4
  Store(); // !
}


// ================================================
// 0x4e41: WORD 'XLL' codep=0x1d29 wordp=0x4e49
// ================================================
// 0x4e49: db 0x41 0x44 'AD'

// ================================================
// 0x4e4b: WORD 'YLL' codep=0x1d29 wordp=0x4e53
// ================================================
// 0x4e53: db 0x72 0x65 're'

// ================================================
// 0x4e55: WORD 'XUR' codep=0x1d29 wordp=0x4e5d
// ================================================
// 0x4e5d: db 0x72 0x65 're'

// ================================================
// 0x4e5f: WORD 'YUR' codep=0x1d29 wordp=0x4e67
// ================================================
// 0x4e67: db 0x72 0x65 're'

// ================================================
// 0x4e69: WORD 'FULLARRAY' codep=0x224c wordp=0x4e75 params=0 returns=4
// ================================================

void FULLARRAY() // FULLARRAY
{
  Push(0);
  Push(0);
  _n_COLZ(); // #COLZ
  Push(Pop() - 1); //  1-
  _n_ROWZ(); // #ROWZ
  Push(Pop() - 1); //  1-
}


// ================================================
// 0x4e83: WORD 'SETREGION' codep=0x224c wordp=0x4e8f params=4 returns=0
// ================================================

void SETREGION() // SETREGION
{
  Push(pp_YUR); // YUR
  Store(); // !
  Push(pp_XUR); // XUR
  Store(); // !
  Push(pp_YLL); // YLL
  Store(); // !
  Push(pp_XLL); // XLL
  Store(); // !
}


// ================================================
// 0x4ea1: WORD 'FILLREGION' codep=0x224c wordp=0x4ead
// ================================================

void FILLREGION() // FILLREGION
{
  unsigned short int i, imax, j, jmax;

  i = Read16(pp_YLL); // YLL @
  imax = Read16(pp_YUR) + 1; // YUR @ 1+
  do // (DO)
  {

    j = Read16(pp_XLL); // XLL @
    jmax = Read16(pp_XUR) + 1; // XUR @ 1+
    do // (DO)
    {
      Push(Read16(regsp)); // DUP
      Push(j); // I
      Push(i); // J
      ACELLADDR(); // ACELLADDR
      A_ex_(); // A!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0x4edb: WORD 'W4EDD' codep=0x1d29 wordp=0x4edd
// ================================================
// orphan
// 0x4edd: db 0x00 0x22 0x11 0x99 0x44 0x66 0x88 0xaa 0x55 0x77 0xbb 0x33 0xee 0xcc 0xdd 0xff ' "  Df  Uw 3    '

// ================================================
// 0x4eed: WORD 'W4EEF' codep=0x224c wordp=0x4eef
// ================================================

void W4EEF() // W4EEF
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  C_co_(); // C,
  CODE(); // (;CODE) inlined assembler code
// 0x4ef5: call   1649
  Push(Read16((Read16(Pop())&0xFF) + pp_W4EDD)&0xFF); //  C@ W4EDD + C@
}


// ================================================
// 0x4f02: WORD 'BLACK' codep=0x4ef5 wordp=0x4f0c
// ================================================
Color BLACK = 0x00

// ================================================
// 0x4f0d: WORD 'DK-BLUE' codep=0x4ef5 wordp=0x4f19
// ================================================
Color DK_dash_BLUE = 0x01

// ================================================
// 0x4f1a: WORD 'DK-GREEN' codep=0x4ef5 wordp=0x4f26
// ================================================
Color DK_dash_GREEN = 0x02

// ================================================
// 0x4f27: WORD 'GREEN' codep=0x4ef5 wordp=0x4f31
// ================================================
Color GREEN = 0x03

// ================================================
// 0x4f32: WORD 'RED' codep=0x4ef5 wordp=0x4f3a
// ================================================
Color RED = 0x04

// ================================================
// 0x4f3b: WORD 'VIOLET' codep=0x4ef5 wordp=0x4f46
// ================================================
Color VIOLET = 0x05

// ================================================
// 0x4f47: WORD 'BROWN' codep=0x4ef5 wordp=0x4f51
// ================================================
Color BROWN = 0x06

// ================================================
// 0x4f52: WORD 'GREY1' codep=0x4ef5 wordp=0x4f5c
// ================================================
Color GREY1 = 0x07

// ================================================
// 0x4f5d: WORD 'GREY2' codep=0x4ef5 wordp=0x4f67
// ================================================
Color GREY2 = 0x08

// ================================================
// 0x4f68: WORD 'BLUE' codep=0x4ef5 wordp=0x4f71
// ================================================
Color BLUE = 0x09

// ================================================
// 0x4f72: WORD 'LT-GREEN' codep=0x4ef5 wordp=0x4f7e
// ================================================
Color LT_dash_GREEN = 0x0a

// ================================================
// 0x4f7f: WORD 'LT-BLUE' codep=0x4ef5 wordp=0x4f8b
// ================================================
Color LT_dash_BLUE = 0x0b

// ================================================
// 0x4f8c: WORD 'PINK' codep=0x4ef5 wordp=0x4f95
// ================================================
Color PINK = 0x0c

// ================================================
// 0x4f96: WORD 'ORANGE' codep=0x4ef5 wordp=0x4fa1
// ================================================
Color ORANGE = 0x0d

// ================================================
// 0x4fa2: WORD 'YELLOW' codep=0x4ef5 wordp=0x4fad
// ================================================
Color YELLOW = 0x0e

// ================================================
// 0x4fae: WORD 'WHITE' codep=0x4ef5 wordp=0x4fb8
// ================================================
Color WHITE = 0x0f

// ================================================
// 0x4fb9: WORD 'W4FBB' codep=0x1d29 wordp=0x4fbb
// ================================================
// orphan
// 0x4fbb: db 0x00 0x22 0x11 0x99 0x44 0x66 0x88 0xaa 0x55 0x77 0xbb 0x33 0xee 0xcc 0xdd 0xff ' "  Df  Uw 3    '

// ================================================
// 0x4fcb: WORD 'W4FCD' codep=0x1d29 wordp=0x4fcd
// ================================================
// 0x4fcd: db 0x00 0x01 0x02 0x0a 0x04 0x05 0x06 0x07 0x08 0x0b 0x03 0x09 0x0c 0x06 0x0e 0x0f 0x29 0x1d 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 '                )                 '

// ================================================
// 0x4fef: WORD 'IHEADLEN' codep=0x2214 wordp=0x4ffb
// ================================================
// 0x4ffb: dw 0x000b

// ================================================
// 0x4ffd: WORD 'END-CX' codep=0x2214 wordp=0x4fff
// ================================================
// 0x4fff: dw 0x6398

// ================================================
// 0x5001: WORD 'END-V' codep=0x2214 wordp=0x5003
// ================================================
// 0x5003: dw 0x63df

// ================================================
// 0x5005: WORD 'EM' codep=0x2214 wordp=0x5007
// ================================================
// 0x5007: dw 0xf560

// ================================================
// 0x5009: WORD '*MAPSCALE' codep=0x2214 wordp=0x5015
// ================================================
// 0x5015: dw 0x0008

// ================================================
// 0x5017: WORD 'SIGBLK' codep=0x2214 wordp=0x5022
// ================================================
// 0x5022: dw 0x0003

// ================================================
// 0x5024: WORD 'ALOVSA' codep=0x2214 wordp=0x502f
// ================================================
// 0x502f: dw 0x0000

// ================================================
// 0x5031: WORD 'AHIVSA' codep=0x2214 wordp=0x503c
// ================================================
// 0x503c: dw 0x3e7f

// ================================================
// 0x503e: WORD 'BLOVSA' codep=0x2214 wordp=0x5049
// ================================================
// 0x5049: dw 0x3e80

// ================================================
// 0x504b: WORD 'BHIVSA' codep=0x2214 wordp=0x5056
// ================================================
// 0x5056: dw 0x96ff

// ================================================
// 0x5058: WORD ''OVBACK' codep=0x2214 wordp=0x5064
// ================================================
// 0x5064: dw 0xd196

// ================================================
// 0x5066: WORD 'MUSSEG' codep=0x2214 wordp=0x5071
// ================================================
// 0x5071: dw 0x8be4

// ================================================
// 0x5073: WORD '#REMOTE' codep=0x2214 wordp=0x507f
// ================================================
// 0x507f: dw 0x00e1

// ================================================
// 0x5081: WORD '#HRS' codep=0x2214 wordp=0x508a
// ================================================
// 0x508a: dw 0x0001

// ================================================
// 0x508c: WORD '?FIRED-' codep=0x2214 wordp=0x5098
// ================================================
// 0x5098: dw 0x0000

// ================================================
// 0x509a: WORD '?A-SHIE' codep=0x2214 wordp=0x50a6
// ================================================
// 0x50a6: dw 0x0000

// ================================================
// 0x50a8: WORD '?A-WEAP' codep=0x2214 wordp=0x50b4
// ================================================
// 0x50b4: dw 0x0000

// ================================================
// 0x50b6: WORD 'DBUF-SIZE' codep=0x2214 wordp=0x50c2
// ================================================
// 0x50c2: dw 0x4000

// ================================================
// 0x50c4: WORD 'NULL-ICON' codep=0x2214 wordp=0x50d0
// ================================================
// 0x50d0: dw 0x0032

// ================================================
// 0x50d2: WORD 'SYS-ICO' codep=0x2214 wordp=0x50de
// ================================================
// 0x50de: dw 0x00fd

// ================================================
// 0x50e0: WORD 'INVIS-I' codep=0x2214 wordp=0x50ec
// ================================================
// 0x50ec: dw 0x00fe

// ================================================
// 0x50ee: WORD 'FLUX-IC' codep=0x2214 wordp=0x50fa
// ================================================
// 0x50fa: dw 0x00ff

// ================================================
// 0x50fc: WORD 'DEAD-IC' codep=0x2214 wordp=0x5108
// ================================================
// 0x5108: dw 0x0002

// ================================================
// 0x510a: WORD 'DEFAULT' codep=0x2214 wordp=0x5116
// ================================================
// 0x5116: dw 0x0001

// ================================================
// 0x5118: WORD 'TEXTC/L' codep=0x2214 wordp=0x5124
// ================================================
// 0x5124: dw 0x0026

// ================================================
// 0x5126: WORD 'ILIMIT' codep=0x2214 wordp=0x5128
// ================================================
// 0x5128: dw 0x02d0

// ================================================
// 0x512a: WORD 'FUEL/SE' codep=0x2214 wordp=0x5136
// ================================================
// 0x5136: dw 0x0005

// ================================================
// 0x5138: WORD 'POLYSEG' codep=0x2214 wordp=0x5144
// ================================================
// 0x5144: dw 0x9503

// ================================================
// 0x5146: WORD ''ANSYS' codep=0x2214 wordp=0x5151
// ================================================
// 0x5151: dw 0xd2ba

// ================================================
// 0x5153: WORD '0.' codep=0x3b68 wordp=0x515a
// ================================================
// 0x515a: dw 0x0000 0x0000

// ================================================
// 0x515e: WORD 'VANEWSPACE' codep=0x3b68 wordp=0x516a
// ================================================
// 0x516a: dw 0x0000 0x1000

// ================================================
// 0x516e: WORD 'IROOT' codep=0x3b68 wordp=0x5178
// ================================================
// 0x5178: dw 0x0000 0x1006

// ================================================
// 0x517c: WORD 'INACTIVE' codep=0x3b68 wordp=0x5188
// ================================================
// 0x5188: dw 0x0000 0x1032

// ================================================
// 0x518c: WORD 'FRAGMENT' codep=0x3b68 wordp=0x5198
// ================================================
// 0x5198: dw 0x0000 0x1027

// ================================================
// 0x519c: WORD '*SECS' codep=0x3b68 wordp=0x51a6
// ================================================
// 0x51a6: dw 0x0000 0x1050

// ================================================
// 0x51aa: WORD '*ASSIGN-CREW' codep=0x3b68 wordp=0x51b6
// ================================================
// 0x51b6: dw 0x0000 0x9a99

// ================================================
// 0x51ba: WORD '*SHIP' codep=0x3b68 wordp=0x51c4
// ================================================
// 0x51c4: dw 0x0000 0x9af0

// ================================================
// 0x51c8: WORD '*ASYS' codep=0x3b68 wordp=0x51d2
// ================================================
// 0x51d2: dw 0x0000 0x1621

// ================================================
// 0x51d6: WORD '*ARTH' codep=0x3b68 wordp=0x51e0
// ================================================
// 0x51e0: dw 0x0000 0x1655

// ================================================
// 0x51e4: WORD '*ELAN' codep=0x3b68 wordp=0x51ee
// ================================================
// 0x51ee: dw 0x0000 0x17da

// ================================================
// 0x51f2: WORD '*BRAIN' codep=0x3b68 wordp=0x51fd
// ================================================
// 0x51fd: dw 0x0000 0x194e

// ================================================
// 0x5201: WORD '*HEAVEN' codep=0x3b68 wordp=0x520d
// ================================================
// 0x520d: dw 0x0000 0x741c

// ================================================
// 0x5211: WORD '*ARREST' codep=0x3b68 wordp=0x521d
// ================================================
// 0x521d: dw 0x0000 0x7470

// ================================================
// 0x5221: WORD '*SPHEXI' codep=0x3b68 wordp=0x522d
// ================================================
// 0x522d: dw 0x0000 0x18ba

// ================================================
// 0x5231: WORD '*SP' codep=0x3b68 wordp=0x5239
// ================================================
// 0x5239: dw 0x0000 0x0000

// ================================================
// 0x523d: WORD 'MPS' codep=0x2214 wordp=0x5245
// ================================================
// 0x5245: dw 0x0001

// ================================================
// 0x5247: WORD 'CLIP-TABLE' codep=0x1d29 wordp=0x5253
// ================================================
// 0x5253: db 0x08 0x08 0x01 0xc7 0x00 0x02 0x02 0x00 0x9f 0x00 0x04 0x04 0x01 0x00 0x00 0x01 0x01 0x00 0x00 0x00 '                    '

// ================================================
// 0x5267: WORD 'TABLE' codep=0x224c wordp=0x5271
// ================================================

void TABLE() // TABLE
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  CODE(); // (;CODE) inlined assembler code
// 0x5275: call   1649
  SWAP(); // SWAP
  Push(Pop() * 2); //  2*
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); //  @
}


// ================================================
// 0x5282: WORD '16K' codep=0x2214 wordp=0x528a
// ================================================
// 0x528a: dw 0x4000

// ================================================
// 0x528c: WORD 'FONTSEG' codep=0x1d29 wordp=0x5298
// ================================================
// 0x5298: db 0x1e 0x8d '  '

// ================================================
// 0x529a: WORD 'REMSEG' codep=0x1d29 wordp=0x52a5
// ================================================
// 0x52a5: db 0x16 0x8c '  '

// ================================================
// 0x52a7: WORD 'XBUF-SE' codep=0x1d29 wordp=0x52b3
// ================================================
// 0x52b3: db 0xf0 0x90 '  '

// ================================================
// 0x52b5: WORD '?ALL' codep=0x1d29 wordp=0x52be
// ================================================
// 0x52be: db 0x38 0x37 '87'

// ================================================
// 0x52c0: WORD '?YOK' codep=0x1d29 wordp=0x52c9
// ================================================
// 0x52c9: db 0x20 0x20 '  '

// ================================================
// 0x52cb: WORD 'W52CD' codep=0x2214 wordp=0x52cd
// ================================================
// 0x52cd: dw 0x0000

// ================================================
// 0x52cf: WORD 'W52D1' codep=0x2214 wordp=0x52d1
// ================================================
// 0x52d1: dw 0x0076

// ================================================
// 0x52d3: WORD '7CHAR' codep=0x2214 wordp=0x52d5
// ================================================
// 0x52d5: dw 0x0086

// ================================================
// 0x52d7: WORD '7SPACING' codep=0x2214 wordp=0x52d9
// ================================================
// 0x52d9: dw 0x01e8

// ================================================
// 0x52db: WORD '9CHAR' codep=0x2214 wordp=0x52dd
// ================================================
// 0x52dd: dw 0x0223

// ================================================
// 0x52df: WORD '1LOGO' codep=0x1d29 wordp=0x52e1
// ================================================
// 0x52e1: db 0x1f 0x3f 0xdf 0xee 0x0c 0x33 0x0c 0x03 0xb7 0xcf 0x8f 0x7f 0x00 0xc0 ' ?   3       '

// ================================================
// 0x52ef: WORD 'BUTTON' codep=0x1d29 wordp=0x52f1
// ================================================
// 0x52f1: db 0xc3 0x7e 0xa5 0xbd 0xa5 0xa5 0xc3 0xbd 0x00 0x7e ' ~       ~'

// ================================================
// 0x52fb: WORD 'HIGHLIGHT-BUTTON' codep=0x1d29 wordp=0x52fd
// ================================================
// 0x52fd: db 0x18 0x7a 0x86 0x61 0x80 0x17 ' z a  '

// ================================================
// 0x5303: WORD 'BUTTON-ON' codep=0x1d29 wordp=0x5305
// ================================================
// 0x5305: db 0x00 0xfc '  '

// ================================================
// 0x5307: WORD ''XCOMM' codep=0x1d29 wordp=0x5312
// ================================================
// 0x5312: db 0xbe 0xc2 '  '

// ================================================
// 0x5314: WORD 'TCLR' codep=0x1d29 wordp=0x531d
// ================================================
// 0x531d: db 0xff 0x00 '  '

// ================================================
// 0x531f: WORD ''HEAT' codep=0x1d29 wordp=0x5329
// ================================================
// 0x5329: db 0xf0 0xca '  '

// ================================================
// 0x532b: WORD ''TRAK' codep=0x1d29 wordp=0x5335
// ================================================
// 0x5335: db 0xde 0xca '  '

// ================================================
// 0x5337: WORD 'TRAK-HR' codep=0x1d29 wordp=0x5343
// ================================================
// 0x5343: db 0x38 0x37 '87'

// ================================================
// 0x5345: WORD 'A-STRENGTH' codep=0x1d29 wordp=0x5351
// ================================================
// 0x5351: db 0x48 0x20 'H '

// ================================================
// 0x5353: WORD 'DIRBLK' codep=0x1d29 wordp=0x535e
// ================================================
// 0x535e: db 0x00 0x00 '  '

// ================================================
// 0x5360: WORD 'TIMESTAMP' codep=0x1d29 wordp=0x536c
// ================================================
// 0x536c: db 0x20 0x20 '  '

// ================================================
// 0x536e: WORD 'RELAXTIME' codep=0x1d29 wordp=0x537a
// ================================================
// 0x537a: db 0x20 0x20 '  '

// ================================================
// 0x537c: WORD 'VERSION' codep=0x1d29 wordp=0x5388
// ================================================
// 0x5388: db 0xc9 0x20 0x01 0x00 '    '

// ================================================
// 0x538c: WORD 'ICONFON' codep=0x1d29 wordp=0x5398
// ================================================
// 0x5398: db 0x01 0x00 '  '

// ================================================
// 0x539a: WORD 'LFRAME' codep=0x1d29 wordp=0x53a5
// ================================================
// 0x53a5: db 0xd4 0x07 '  '

// ================================================
// 0x53a7: WORD '?AUTO' codep=0x1d29 wordp=0x53b1
// ================================================
// 0x53b1: db 0x20 0x20 '  '

// ================================================
// 0x53b3: WORD '?CRITIC' codep=0x1d29 wordp=0x53bf
// ================================================
// 0x53bf: db 0x20 0x20 '  '

// ================================================
// 0x53c1: WORD 'ELEM-AM' codep=0x1d29 wordp=0x53cd
// ================================================
// 0x53cd: db 0x20 0x2d ' -'

// ================================================
// 0x53cf: WORD ''INJURE' codep=0x1d29 wordp=0x53db
// ================================================
// 0x53db: db 0xc6 0xcf '  '

// ================================================
// 0x53dd: WORD 'P-COLOR' codep=0x1d29 wordp=0x53e9
// ================================================
// 0x53e9: db 0x41 0x4e 0x05 'AN '

// ================================================
// 0x53ec: WORD 'P-PHRAS' codep=0x1d29 wordp=0x53f8
// ================================================
// 0x53f8: db 0x32 0x35 0x05 '25 '

// ================================================
// 0x53fb: WORD 'P-CARP' codep=0x1d29 wordp=0x5406
// ================================================
// 0x5406: db 0x61 0x6e 0x05 'an '

// ================================================
// 0x5409: WORD 'O-COLOR' codep=0x1d29 wordp=0x5415
// ================================================
// 0x5415: db 0x20 0x20 0x05 '   '

// ================================================
// 0x5418: WORD 'HYDRO' codep=0x1d29 wordp=0x5422
// ================================================
// 0x5422: db 0x20 0x20 '  '

// ================================================
// 0x5424: WORD 'ATMO' codep=0x1d29 wordp=0x542d
// ================================================
// 0x542d: db 0x20 0x20 '  '

// ================================================
// 0x542f: WORD 'LCOLOR' codep=0x1d29 wordp=0x543a
// ================================================
// 0x543a: db 0x20 0x20 '  '

// ================================================
// 0x543c: WORD ''FLARE' codep=0x1d29 wordp=0x5447
// ================================================
// 0x5447: db 0x11 0xca '  '

// ================================================
// 0x5449: WORD '(FLARE)' codep=0x1d29 wordp=0x5455
// ================================================
// 0x5455: db 0x2c 0x01 ', '

// ================================================
// 0x5457: WORD '?TV' codep=0x1d29 wordp=0x545f
// ================================================
// 0x545f: db 0x20 0x20 '  '

// ================================================
// 0x5461: WORD 'OLDHR' codep=0x1d29 wordp=0x546b
// ================================================
// 0x546b: db 0x20 0x20 '  '

// ================================================
// 0x546d: WORD 'AVCNT' codep=0x1d29 wordp=0x5477
// ================================================
// 0x5477: db 0x41 0x49 'AI'

// ================================================
// 0x5479: WORD 'LFILE#' codep=0x1d29 wordp=0x547b
// ================================================
// 0x547b: db 0x00 0x00 '  '

// ================================================
// 0x547d: WORD 'LRECORD#' codep=0x1d29 wordp=0x547f
// ================================================
// 0x547f: db 0x00 0x00 '  '

// ================================================
// 0x5481: WORD 'LRECORD#' codep=0x1d29 wordp=0x5483
// ================================================
// 0x5483: db 0x76 0xf9 'v '

// ================================================
// 0x5485: WORD 'FILE#' codep=0x1d29 wordp=0x548f
// ================================================
// 0x548f: db 0x12 0x00 '  '

// ================================================
// 0x5491: WORD 'RECORD#' codep=0x1d29 wordp=0x549d
// ================================================
// 0x549d: db 0x00 0x00 '  '

// ================================================
// 0x549f: WORD '1BUFADR' codep=0x1d29 wordp=0x54a1
// ================================================
// 0x54a1: db 0xd0 0xf7 '  '

// ================================================
// 0x54a3: WORD '2BUFADR' codep=0x1d29 wordp=0x54a5
// ================================================
// 0x54a5: db 0xe0 0xfb '  '

// ================================================
// 0x54a7: WORD 'CXSP' codep=0x1d29 wordp=0x54b0
// ================================================
// 0x54b0: db 0x8c 0x63 ' c'

// ================================================
// 0x54b2: WORD 'VSP' codep=0x1d29 wordp=0x54b4
// ================================================
// 0x54b4: db 0xdf 0x63 ' c'

// ================================================
// 0x54b6: WORD 'W54B8' codep=0x1d29 wordp=0x54b8
// ================================================
// orphan
// 0x54b8: db 0x3a 0x20 ': '

// ================================================
// 0x54ba: WORD 'EDL' codep=0x1d29 wordp=0x54c2
// ================================================
// 0x54c2: db 0x6f 0x72 'or'

// ================================================
// 0x54c4: WORD 'A-POSTU' codep=0x1d29 wordp=0x54d0
// ================================================
// 0x54d0: db 0x20 0x70 ' p'

// ================================================
// 0x54d2: WORD 'W54D4' codep=0x1d29 wordp=0x54d4
// ================================================
// 0x54d4: db 0x50 0x00 'P '

// ================================================
// 0x54d6: WORD '#CIRC' codep=0x1d29 wordp=0x54d8
// ================================================
// 0x54d8: db 0x06 0x00 '  '

// ================================================
// 0x54da: WORD 'P-RACES' codep=0x1d29 wordp=0x54e6
// ================================================
// 0x54e6: db 0x20 0x2d ' -'

// ================================================
// 0x54e8: WORD 'LOISEG' codep=0x1d29 wordp=0x54ea
// ================================================
// 0x54ea: db 0x3e 0x8f '> '

// ================================================
// 0x54ec: WORD 'HIISEG' codep=0x1d29 wordp=0x54ee
// ================================================
// 0x54ee: db 0x1f 0x8f '  '

// ================================================
// 0x54f0: WORD 'LOCSEC' codep=0x1d29 wordp=0x54f2
// ================================================
// 0x54f2: db 0x7c 0x8f '| '

// ================================================
// 0x54f4: WORD '$SEG' codep=0x1d29 wordp=0x54f6
// ================================================
// 0x54f6: db 0xba 0x8f '  '

// ================================================
// 0x54f8: WORD 'W54FA' codep=0x1d29 wordp=0x54fa
// ================================================
// orphan
// 0x54fa: db 0x3a 0x20 ': '

// ================================================
// 0x54fc: WORD ''THROW-AWAY' codep=0x1d29 wordp=0x5508
// ================================================
// 0x5508: db 0x6e 0x3a 'n:'

// ================================================
// 0x550a: WORD ''MAP' codep=0x1d29 wordp=0x5513
// ================================================
// 0x5513: db 0x48 0x3a 'H:'

// ================================================
// 0x5515: WORD ''TRAVERS' codep=0x1d29 wordp=0x5521
// ================================================
// 0x5521: db 0x86 0x7a ' z'

// ================================================
// 0x5523: WORD ''?EXIT' codep=0x1d29 wordp=0x552e
// ================================================
// 0x552e: db 0xb2 0x7d ' }'

// ================================================
// 0x5530: WORD ''?CHOICE' codep=0x1d29 wordp=0x5532
// ================================================
// 0x5532: db 0x3a 0x20 ': '

// ================================================
// 0x5534: WORD ''.FLUX-ICON' codep=0x1d29 wordp=0x5540
// ================================================
// 0x5540: db 0x42 0xe4 'B '

// ================================================
// 0x5542: WORD '???IT' codep=0x1d29 wordp=0x554c
// ================================================
// 0x554c: db 0x43 0x4d 'CM'

// ================================================
// 0x554e: WORD '?TD' codep=0x1d29 wordp=0x5556
// ================================================
// 0x5556: db 0x00 0x00 '  '

// ================================================
// 0x5558: WORD '?BOMB' codep=0x1d29 wordp=0x5562
// ================================================
// 0x5562: db 0x00 0x00 '  '

// ================================================
// 0x5564: WORD '?LANDED' codep=0x1d29 wordp=0x5570
// ================================================
// 0x5570: db 0x00 0x00 '  '

// ================================================
// 0x5572: WORD 'W5574' codep=0x1d29 wordp=0x5574
// ================================================
// 0x5574: db 0xf0 0x01 '  '

// ================================================
// 0x5576: WORD 'QTYINST' codep=0x1d29 wordp=0x5578
// ================================================
// 0x5578: db 0x00 0x00 '  '

// ================================================
// 0x557a: WORD '$MAX' codep=0x1d29 wordp=0x557c
// ================================================
// 0x557c: db 0x60 0x13 '` '

// ================================================
// 0x557e: WORD '$FREE' codep=0x1d29 wordp=0x5580
// ================================================
// 0x5580: db 0x00 0x00 '  '

// ================================================
// 0x5582: WORD '$OLD' codep=0x1d29 wordp=0x5584
// ================================================
// 0x5584: db 0x27 0x12 '' '

// ================================================
// 0x5586: WORD '$NEW' codep=0x1d29 wordp=0x5588
// ================================================
// 0x5588: db 0x4e 0x12 'N '

// ================================================
// 0x558a: WORD '[IOFF]' codep=0x1d29 wordp=0x558c
// ================================================
// 0x558c: db 0x00 0x00 '  '

// ================================================
// 0x558e: WORD 'LENINST' codep=0x1d29 wordp=0x5590
// ================================================
// 0x5590: db 0x0e 0x00 '  '

// ================================================
// 0x5592: WORD '-END' codep=0x1d29 wordp=0x559b
// ================================================
// 0x559b: db 0x04 0x00 '  '

// ================================================
// 0x559d: WORD 'OV#' codep=0x1d29 wordp=0x55a5
// ================================================
// 0x55a5: db 0x00 0x00 '  '

// ================================================
// 0x55a7: WORD '^VES' codep=0x1d29 wordp=0x55b0
// ================================================
// 0x55b0: db 0x00 0x00 '  '

// ================================================
// 0x55b2: WORD 'REPAIRT' codep=0x1d29 wordp=0x55be
// ================================================
// 0x55be: db 0xff 0xff '  '

// ================================================
// 0x55c0: WORD '?ELAN' codep=0x1d29 wordp=0x55ca
// ================================================
// 0x55ca: db 0x01 0x00 '  '

// ================================================
// 0x55cc: WORD 'HBUF-SEG' codep=0x1d29 wordp=0x55d8
// ================================================
// 0x55d8: db 0xf0 0x90 '  '

// ================================================
// 0x55da: WORD 'DBUF-SEG' codep=0x1d29 wordp=0x55e6
// ================================================
// 0x55e6: db 0x00 0xb8 '  '

// ================================================
// 0x55e8: WORD 'COLOR' codep=0x1d29 wordp=0x55f2
// ================================================
// 0x55f2: db 0xff 0x00 '  '

// ================================================
// 0x55f4: WORD 'DCOLOR' codep=0x1d29 wordp=0x55ff
// ================================================
// 0x55ff: db 0xff 0x00 '  '

// ================================================
// 0x5601: WORD 'YTAB' codep=0x1d29 wordp=0x560a
// ================================================
// 0x560a: db 0x96 0x66 ' f'

// ================================================
// 0x560c: WORD 'Y1' codep=0x1d29 wordp=0x5613
// ================================================
// 0x5613: db 0xff 0xff '  '

// ================================================
// 0x5615: WORD 'X1' codep=0x1d29 wordp=0x561c
// ================================================
// 0x561c: db 0x00 0x00 '  '

// ================================================
// 0x561e: WORD 'Y2' codep=0x1d29 wordp=0x5625
// ================================================
// 0x5625: db 0xa0 0x00 '  '

// ================================================
// 0x5627: WORD 'X2' codep=0x1d29 wordp=0x562e
// ================================================
// 0x562e: db 0x03 0x0f '  '

// ================================================
// 0x5630: WORD 'YTABL' codep=0x1d29 wordp=0x563a
// ================================================
// 0x563a: db 0x08 0x65 ' e'

// ================================================
// 0x563c: WORD 'BUF-SEG' codep=0x1d29 wordp=0x5648
// ================================================
// 0x5648: db 0x00 0xb8 '  '

// ================================================
// 0x564a: WORD 'BUF-CNT' codep=0x1d29 wordp=0x5656
// ================================================
// 0x5656: db 0x00 0x40 ' @'

// ================================================
// 0x5658: WORD 'RETURN' codep=0x1d29 wordp=0x5663
// ================================================
// 0x5663: db 0x11 0x06 '  '

// ================================================
// 0x5665: WORD '?SPHEXI' codep=0x1d29 wordp=0x5671
// ================================================
// 0x5671: db 0x01 0x00 '  '

// ================================================
// 0x5673: WORD '?WIN' codep=0x1d29 wordp=0x567c
// ================================================
// 0x567c: db 0x00 0x00 '  '

// ================================================
// 0x567e: WORD '#IN' codep=0x1d29 wordp=0x5686
// ================================================
// 0x5686: db 0x02 0x00 '  '

// ================================================
// 0x5688: WORD '#OUT' codep=0x1d29 wordp=0x5691
// ================================================
// 0x5691: db 0x41 0x42 'AB'

// ================================================
// 0x5693: WORD 'VIN' codep=0x1d29 wordp=0x569b
// ================================================
// 0x569b: db 0xb4 0x69 ' i'

// ================================================
// 0x569d: WORD 'VOUT' codep=0x1d29 wordp=0x56a6
// ================================================
// 0x56a6: db 0x72 0x69 'ri'

// ================================================
// 0x56a8: WORD 'OIN' codep=0x1d29 wordp=0x56b0
// ================================================
// 0x56b0: db 0xf6 0x69 ' i'

// ================================================
// 0x56b2: WORD 'OOUT' codep=0x1d29 wordp=0x56bb
// ================================================
// 0x56bb: db 0xf6 0x69 ' i'

// ================================================
// 0x56bd: WORD 'W56BF' codep=0x1d29 wordp=0x56bf
// ================================================
// orphan
// 0x56bf: db 0x3a 0x20 ': '

// ================================================
// 0x56c1: WORD 'W56C3' codep=0x1d29 wordp=0x56c3
// ================================================
// orphan
// 0x56c3: db 0x3a 0x20 ': '

// ================================================
// 0x56c5: WORD 'W56C7' codep=0x1d29 wordp=0x56c7
// ================================================
// orphan
// 0x56c7: db 0x3a 0x20 ': '

// ================================================
// 0x56c9: WORD 'W56CB' codep=0x1d29 wordp=0x56cb
// ================================================
// orphan
// 0x56cb: db 0x3a 0x20 ': '

// ================================================
// 0x56cd: WORD 'W56CF' codep=0x1d29 wordp=0x56cf
// ================================================
// orphan
// 0x56cf: db 0x3a 0x20 ': '

// ================================================
// 0x56d1: WORD 'TACCPT' codep=0x1d29 wordp=0x56dc
// ================================================
// 0x56dc: db 0x00 0x00 '  '

// ================================================
// 0x56de: WORD 'TRJCT' codep=0x1d29 wordp=0x56e8
// ================================================
// 0x56e8: db 0x00 0x00 '  '

// ================================================
// 0x56ea: WORD '?OPEN' codep=0x1d29 wordp=0x56f4
// ================================================
// 0x56f4: db 0x00 0x00 '  '

// ================================================
// 0x56f6: WORD '?EVAL' codep=0x1d29 wordp=0x5700
// ================================================
// 0x5700: db 0x00 0x00 '  '

// ================================================
// 0x5702: WORD 'W5704' codep=0x1d29 wordp=0x5704
// ================================================
// orphan
// 0x5704: db 0x3c 0x00 '< '

// ================================================
// 0x5706: WORD 'W5708' codep=0x1d29 wordp=0x5708
// ================================================
// orphan
// 0x5708: db 0xc2 0x00 '  '

// ================================================
// 0x570a: WORD 'W570C' codep=0x1d29 wordp=0x570c
// ================================================
// orphan
// 0x570c: db 0x3a 0x20 ': '

// ================================================
// 0x570e: WORD 'W5710' codep=0x1d29 wordp=0x5710
// ================================================
// orphan
// 0x5710: db 0x3c 0x00 '< '

// ================================================
// 0x5712: WORD 'W5714' codep=0x1d29 wordp=0x5714
// ================================================
// orphan
// 0x5714: db 0xc6 0x00 '  '

// ================================================
// 0x5716: WORD 'W5718' codep=0x1d29 wordp=0x5718
// ================================================
// orphan
// 0x5718: db 0x3a 0x20 ': '

// ================================================
// 0x571a: WORD 'W571C' codep=0x1d29 wordp=0x571c
// ================================================
// orphan
// 0x571c: db 0x3a 0x20 ': '

// ================================================
// 0x571e: WORD 'W5720' codep=0x1d29 wordp=0x5720
// ================================================
// orphan
// 0x5720: db 0x3a 0x20 ': '

// ================================================
// 0x5722: WORD 'W5724' codep=0x1d29 wordp=0x5724
// ================================================
// orphan
// 0x5724: db 0x3a 0x20 ': '

// ================================================
// 0x5726: WORD 'W5728' codep=0x1d29 wordp=0x5728
// ================================================
// orphan
// 0x5728: db 0x3a 0x20 ': '

// ================================================
// 0x572a: WORD 'W572C' codep=0x1d29 wordp=0x572c
// ================================================
// orphan
// 0x572c: db 0x3a 0x20 ': '

// ================================================
// 0x572e: WORD 'ILEFT' codep=0x1d29 wordp=0x5738
// ================================================
// 0x5738: db 0x00 0x00 '  '

// ================================================
// 0x573a: WORD 'IRIGHT' codep=0x1d29 wordp=0x5745
// ================================================
// 0x5745: db 0x9f 0x00 '  '

// ================================================
// 0x5747: WORD 'IBELOW' codep=0x1d29 wordp=0x5752
// ================================================
// 0x5752: db 0x00 0x00 '  '

// ================================================
// 0x5754: WORD 'IABOVE' codep=0x1d29 wordp=0x575f
// ================================================
// 0x575f: db 0xc7 0x00 '  '

// ================================================
// 0x5761: WORD ''FLY' codep=0x1d29 wordp=0x576a
// ================================================
// 0x576a: db 0xaa 0xcb '  '

// ================================================
// 0x576c: WORD ''UNNEST' codep=0x1d29 wordp=0x5778
// ================================================
// 0x5778: db 0x0a 0xcc '  '

// ================================================
// 0x577a: WORD '?NEW' codep=0x1d29 wordp=0x5783
// ================================================
// 0x5783: db 0x20 0x20 '  '

// ================================================
// 0x5785: WORD 'FORCED' codep=0x1d29 wordp=0x5790
// ================================================
// 0x5790: db 0x20 0x20 '  '

// ================================================
// 0x5792: WORD '#VESS' codep=0x1d29 wordp=0x579c
// ================================================
// 0x579c: db 0x00 0x00 '  '

// ================================================
// 0x579e: WORD 'CTCOLOR' codep=0x1d29 wordp=0x57aa
// ================================================
// 0x57aa: db 0x20 0x20 '  '

// ================================================
// 0x57ac: WORD 'XSTART' codep=0x1d29 wordp=0x57b7
// ================================================
// 0x57b7: db 0x20 0x20 '  '

// ================================================
// 0x57b9: WORD 'XEND' codep=0x1d29 wordp=0x57c2
// ================================================
// 0x57c2: db 0x20 0x20 '  '

// ================================================
// 0x57c4: WORD 'YLINE' codep=0x1d29 wordp=0x57ce
// ================================================
// 0x57ce: db 0x20 0x20 '  '

// ================================================
// 0x57d0: WORD 'SCAN' codep=0x1d29 wordp=0x57d9
// ================================================
// 0x57d9: db 0x9e 0x67 ' g'

// ================================================
// 0x57db: WORD 'ELEMENT' codep=0x1d29 wordp=0x57dd
// ================================================
// orphan
// 0x57dd: db 0x00 0x00 '  '

// ================================================
// 0x57df: WORD 'SCAN+' codep=0x1d29 wordp=0x57e1
// ================================================
// orphan
// 0x57e1: db 0x9e 0x67 ' g'

// ================================================
// 0x57e3: WORD 'YMIN' codep=0x1d29 wordp=0x57ec
// ================================================
// 0x57ec: db 0xc2 0x00 '  '

// ================================================
// 0x57ee: WORD 'YMAX' codep=0x1d29 wordp=0x57f7
// ================================================
// 0x57f7: db 0xc6 0x00 '  '

// ================================================
// 0x57f9: WORD '#HORIZ' codep=0x1d29 wordp=0x57fb
// ================================================
// orphan
// 0x57fb: db 0x02 0x00 '  '

// ================================================
// 0x57fd: WORD 'MOVED' codep=0x1d29 wordp=0x5807
// ================================================
// 0x5807: db 0x69 0x7a 'iz'

// ================================================
// 0x5809: WORD 'PLANTS' codep=0x1d29 wordp=0x5814
// ================================================
// 0x5814: db 0x73 0x65 'se'

// ================================================
// 0x5816: WORD 'ANIMALS' codep=0x1d29 wordp=0x5822
// ================================================
// 0x5822: db 0x20 0x20 '  '

// ================================================
// 0x5824: WORD 'MEMSEG' codep=0x1d29 wordp=0x582f
// ================================================
// 0x582f: db 0xd5 0x24 ' $'

// ================================================
// 0x5831: WORD 'MEMOFF' codep=0x1d29 wordp=0x583c
// ================================================
// 0x583c: db 0x20 0x17 '  '

// ================================================
// 0x583e: WORD 'MONITOR' codep=0x1d29 wordp=0x584a
// ================================================
// 0x584a: db 0x03 0x00 '  '

// ================================================
// 0x584c: WORD 'LOCRADIUS' codep=0x1d29 wordp=0x5858
// ================================================
// 0x5858: db 0x00 0x00 '  '

// ================================================
// 0x585a: WORD 'YBLT' codep=0x1d29 wordp=0x5863
// ================================================
// 0x5863: db 0xc6 0x00 '  '

// ================================================
// 0x5865: WORD 'XBLT' codep=0x1d29 wordp=0x586e
// ================================================
// 0x586e: db 0x3c 0x00 '< '

// ================================================
// 0x5870: WORD 'XORMODE' codep=0x1d29 wordp=0x587c
// ================================================
// 0x587c: db 0x00 0x00 '  '

// ================================================
// 0x587e: WORD 'LBLT' codep=0x1d29 wordp=0x5887
// ================================================
// 0x5887: db 0x05 0x00 '  '

// ================================================
// 0x5889: WORD 'WBLT' codep=0x1d29 wordp=0x5892
// ================================================
// 0x5892: db 0x03 0x00 '  '

// ================================================
// 0x5894: WORD 'ABLT' codep=0x1d29 wordp=0x589d
// ================================================
// 0x589d: db 0x00 0x00 '  '

// ================================================
// 0x589f: WORD 'BLTSEG' codep=0x1d29 wordp=0x58aa
// ================================================
// 0x58aa: db 0xb2 0x94 '  '

// ================================================
// 0x58ac: WORD 'BLT>' codep=0x1d29 wordp=0x58b5
// ================================================
// 0x58b5: db 0x02 0x00 '  '

// ================================================
// 0x58b7: WORD 'LPX' codep=0x1d29 wordp=0x58bf
// ================================================
// 0x58bf: db 0x3b 0x00 '; '

// ================================================
// 0x58c1: WORD 'TILE-PTR' codep=0x1d29 wordp=0x58cd
// ================================================
// 0x58cd: db 0x3f 0x6a '?j'

// ================================================
// 0x58cf: WORD '?FUEL-DIE' codep=0x1d29 wordp=0x58db
// ================================================
// 0x58db: db 0x00 0x00 '  '

// ================================================
// 0x58dd: WORD '?G-AWARE' codep=0x1d29 wordp=0x58e9
// ================================================
// 0x58e9: db 0x00 0x00 '  '

// ================================================
// 0x58eb: WORD 'GWF' codep=0x1d29 wordp=0x58f3
// ================================================
// 0x58f3: db 0x00 0x00 '  '

// ================================================
// 0x58f5: WORD 'DXVIS' codep=0x1d29 wordp=0x58ff
// ================================================
// 0x58ff: db 0x41 0x53 'AS'

// ================================================
// 0x5901: WORD 'DYVIS' codep=0x1d29 wordp=0x590b
// ================================================
// 0x590b: db 0x45 0x20 'E '

// ================================================
// 0x590d: WORD 'XCON' codep=0x1d29 wordp=0x5916
// ================================================
// 0x5916: db 0x56 0x20 'V '

// ================================================
// 0x5918: WORD 'YCON' codep=0x1d29 wordp=0x5921
// ================================================
// 0x5921: db 0x65 0x72 'er'

// ================================================
// 0x5923: WORD 'DXCON' codep=0x1d29 wordp=0x592d
// ================================================
// 0x592d: db 0x72 0x20 'r '

// ================================================
// 0x592f: WORD 'DYCON' codep=0x1d29 wordp=0x5939
// ================================================
// 0x5939: db 0x6e 0x20 'n '

// ================================================
// 0x593b: WORD 'XVIS' codep=0x1d29 wordp=0x5944
// ================================================
// 0x5944: db 0x69 0x6e 'in'

// ================================================
// 0x5946: WORD 'YVIS' codep=0x1d29 wordp=0x594f
// ================================================
// 0x594f: db 0x65 0x72 'er'

// ================================================
// 0x5951: WORD 'XLLDEST' codep=0x1d29 wordp=0x595d
// ================================================
// 0x595d: db 0x00 0x00 '  '

// ================================================
// 0x595f: WORD 'YLLDEST' codep=0x1d29 wordp=0x596b
// ================================================
// 0x596b: db 0x00 0x00 '  '

// ================================================
// 0x596d: WORD 'GLOBALSEED' codep=0x1d29 wordp=0x5979
// ================================================
// 0x5979: db 0x44 0x20 'D '

// ================================================
// 0x597b: WORD ''.CELL' codep=0x1d29 wordp=0x5986
// ================================================
// 0x5986: db 0x72 0x72 'rr'

// ================================================
// 0x5988: WORD ''.BACKG' codep=0x1d29 wordp=0x5994
// ================================================
// 0x5994: db 0x55 0x4e 'UN'

// ================================================
// 0x5996: WORD ''ICON-P' codep=0x1d29 wordp=0x59a2
// ================================================
// 0x59a2: db 0x37 0xc4 '7 '

// ================================================
// 0x59a4: WORD ''ICONBO' codep=0x1d29 wordp=0x59b0
// ================================================
// 0x59b0: db 0x4b 0xc4 'K '

// ================================================
// 0x59b2: WORD ''CC' codep=0x1d29 wordp=0x59ba
// ================================================
// 0x59ba: db 0x38 0xc9 '8 '

// ================================================
// 0x59bc: WORD 'IXSEG' codep=0x1d29 wordp=0x59be
// ================================================
// 0x59be: db 0xc5 0x8e '  '

// ================================================
// 0x59c0: WORD 'IYSEG' codep=0x1d29 wordp=0x59c2
// ================================================
// 0x59c2: db 0x6b 0x8e 'k '

// ================================================
// 0x59c4: WORD 'IDSEG' codep=0x1d29 wordp=0x59c6
// ================================================
// 0x59c6: db 0x3e 0x8e '> '

// ================================================
// 0x59c8: WORD 'ICSEG' codep=0x1d29 wordp=0x59ca
// ================================================
// 0x59ca: db 0x11 0x8e '  '

// ================================================
// 0x59cc: WORD 'ILSEG' codep=0x1d29 wordp=0x59ce
// ================================================
// 0x59ce: db 0xb7 0x8d '  '

// ================================================
// 0x59d0: WORD 'IHSEG' codep=0x1d29 wordp=0x59da
// ================================================
// 0x59da: db 0x8a 0x8d '  '

// ================================================
// 0x59dc: WORD 'IGLOBAL' codep=0x1d29 wordp=0x59e8
// ================================================
// 0x59e8: db 0x00 0x00 '  '

// ================================================
// 0x59ea: WORD 'ILOCAL' codep=0x1d29 wordp=0x59f5
// ================================================
// 0x59f5: db 0x00 0x00 '  '

// ================================================
// 0x59f7: WORD 'IINDEX' codep=0x1d29 wordp=0x5a02
// ================================================
// 0x5a02: db 0x00 0x00 '  '

// ================================================
// 0x5a04: WORD 'XWLL' codep=0x1d29 wordp=0x5a0d
// ================================================
// 0x5a0d: db 0x64 0x65 'de'

// ================================================
// 0x5a0f: WORD 'YWLL' codep=0x1d29 wordp=0x5a18
// ================================================
// 0x5a18: db 0x20 0x74 ' t'

// ================================================
// 0x5a1a: WORD 'XWUR' codep=0x1d29 wordp=0x5a23
// ================================================
// 0x5a23: db 0x72 0x64 'rd'

// ================================================
// 0x5a25: WORD 'YWUR' codep=0x1d29 wordp=0x5a2e
// ================================================
// 0x5a2e: db 0x20 0x77 ' w'

// ================================================
// 0x5a30: WORD '*GLOBAL' codep=0x1d29 wordp=0x5a3c
// ================================================
// 0x5a3c: db 0x46 0x02 'F '

// ================================================
// 0x5a3e: WORD '(STOP-COMM)' codep=0x1d29 wordp=0x5a4a
// ================================================
// 0x5a4a: db 0x4d 0x29 'M)'

// ================================================
// 0x5a4c: WORD 'CENTERADJUST' codep=0x1d29 wordp=0x5a4e
// ================================================
// 0x5a4e: db 0x00 0x00 '  '

// ================================================
// 0x5a50: WORD 'CONTEXT-ID#' codep=0x1d29 wordp=0x5a5c
// ================================================
// 0x5a5c: db 0x05 0x00 '  '

// ================================================
// 0x5a5e: WORD 'EX' codep=0x1d29 wordp=0x5a65
// ================================================
// 0x5a65: db 0xa0 0xfb '  '

// ================================================
// 0x5a67: WORD 'EY' codep=0x1d29 wordp=0x5a6e
// ================================================
// 0x5a6e: db 0xec 0xf8 '  '

// ================================================
// 0x5a70: WORD 'ERAD' codep=0x1d29 wordp=0x5a79
// ================================================
// 0x5a79: db 0x30 0x00 '0 '

// ================================================
// 0x5a7b: WORD 'XNUMER' codep=0x1d29 wordp=0x5a86
// ================================================
// 0x5a86: db 0x09 0x00 '  '

// ================================================
// 0x5a88: WORD 'XDENOM' codep=0x1d29 wordp=0x5a93
// ================================================
// 0x5a93: db 0x0f 0x00 '  '

// ================================================
// 0x5a95: WORD '<ARC1>' codep=0x1d29 wordp=0x5aa0
// ================================================
// 0x5aa0: db 0xcb 0x08 '  '

// ================================================
// 0x5aa2: WORD '%EFF' codep=0x1d29 wordp=0x5aab
// ================================================
// 0x5aab: db 0x64 0x00 'd '

// ================================================
// 0x5aad: WORD 'STORM' codep=0x1d29 wordp=0x5ab7
// ================================================
// 0x5ab7: db 0x00 0x00 '  '

// ================================================
// 0x5ab9: WORD ''TVT' codep=0x1d29 wordp=0x5ac2
// ================================================
// 0x5ac2: db 0xb2 0xd0 '  '

// ================================================
// 0x5ac4: WORD ''STORM' codep=0x1d29 wordp=0x5acf
// ================================================
// 0x5acf: db 0xb5 0xcf '  '

// ================================================
// 0x5ad1: WORD 'E/M' codep=0x1d29 wordp=0x5ad9
// ================================================
// 0x5ad9: db 0x66 0x6f 'fo'

// ================================================
// 0x5adb: WORD 'FORCEPTASK' codep=0x1d29 wordp=0x5ae7
// ================================================
// 0x5ae7: db 0x00 0x00 '  '

// ================================================
// 0x5ae9: WORD '#STORM' codep=0x1d29 wordp=0x5af4
// ================================================
// 0x5af4: db 0x00 0x00 '  '

// ================================================
// 0x5af6: WORD 'W5AF8' codep=0x1d29 wordp=0x5af8
// ================================================
// orphan
// 0x5af8: db 0x8f 0x01 '  '

// ================================================
// 0x5afa: WORD 'W5AFC' codep=0x1d29 wordp=0x5afc
// ================================================
// orphan
// 0x5afc: db 0x00 0x00 '  '

// ================================================
// 0x5afe: WORD 'W5B00' codep=0x1d29 wordp=0x5b00
// ================================================
// orphan
// 0x5b00: db 0x90 0x01 '  '

// ================================================
// 0x5b02: WORD 'BICON' codep=0x1d29 wordp=0x5b04
// ================================================
// 0x5b04: db 0x00 0x00 '  '

// ================================================
// 0x5b06: WORD 'PORTDAT' codep=0x1d29 wordp=0x5b12
// ================================================
// 0x5b12: db 0x00 0x00 '  '

// ================================================
// 0x5b14: WORD '?PORT' codep=0x1d29 wordp=0x5b1e
// ================================================
// 0x5b1e: db 0x01 0x00 '  '

// ================================================
// 0x5b20: WORD 'W5B22' codep=0x1d29 wordp=0x5b22
// ================================================
// 0x5b22: db 0x40 0x00 '@ '

// ================================================
// 0x5b24: WORD 'W5B26' codep=0x1d29 wordp=0x5b26
// ================================================
// 0x5b26: db 0x3d 0x00 '= '

// ================================================
// 0x5b28: WORD 'BVIS' codep=0x1d29 wordp=0x5b31
// ================================================
// 0x5b31: db 0xf7 0xff '  '

// ================================================
// 0x5b33: WORD 'LVIS' codep=0x1d29 wordp=0x5b3c
// ================================================
// 0x5b3c: db 0xf7 0xff '  '

// ================================================
// 0x5b3e: WORD 'LFSEG' codep=0x1d29 wordp=0x5b48
// ================================================
// 0x5b48: db 0xe4 0x8b '  '

// ================================================
// 0x5b4a: WORD 'LSYSEG' codep=0x1d29 wordp=0x5b55
// ================================================
// 0x5b55: db 0x5b 0x8d '[ '

// ================================================
// 0x5b57: WORD 'MSYSEG' codep=0x1d29 wordp=0x5b62
// ================================================
// 0x5b62: db 0x02 0x8d '  '

// ================================================
// 0x5b64: WORD 'SSYSEG' codep=0x1d29 wordp=0x5b6f
// ================================================
// 0x5b6f: db 0xf7 0x8c '  '

// ================================================
// 0x5b71: WORD '?REPAIR' codep=0x1d29 wordp=0x5b7d
// ================================================
// 0x5b7d: db 0x00 0x00 '  '

// ================================================
// 0x5b7f: WORD '?HEAL' codep=0x1d29 wordp=0x5b89
// ================================================
// 0x5b89: db 0x00 0x00 '  '

// ================================================
// 0x5b8b: WORD 'MXNEB' codep=0x1d29 wordp=0x5b95
// ================================================
// 0x5b95: db 0x41 0x53 'AS'

// ================================================
// 0x5b97: WORD 'THIS-BU' codep=0x1d29 wordp=0x5ba3
// ================================================
// 0x5ba3: db 0x4f 0x4e 'ON'

// ================================================
// 0x5ba5: WORD 'NCRS' codep=0x1d29 wordp=0x5bae
// ================================================
// 0x5bae: db 0x20 0x62 ' b'

// ================================================
// 0x5bb0: WORD 'OCRS' codep=0x1d29 wordp=0x5bb9
// ================================================
// 0x5bb9: db 0x73 0x6f 'so'

// ================================================
// 0x5bbb: WORD 'WTOP' codep=0x1d29 wordp=0x5bc4
// ================================================
// 0x5bc4: db 0x40 0x00 '@ '

// ================================================
// 0x5bc6: WORD 'WBOTTOM' codep=0x1d29 wordp=0x5bd2
// ================================================
// 0x5bd2: db 0x10 0x00 '  '

// ================================================
// 0x5bd4: WORD 'WRIGHT' codep=0x1d29 wordp=0x5bdf
// ================================================
// 0x5bdf: db 0x9b 0x00 '  '

// ================================================
// 0x5be1: WORD 'WLEFT' codep=0x1d29 wordp=0x5beb
// ================================================
// 0x5beb: db 0x03 0x00 '  '

// ================================================
// 0x5bed: WORD 'WLINES' codep=0x1d29 wordp=0x5bf8
// ================================================
// 0x5bf8: db 0x07 0x00 '  '

// ================================================
// 0x5bfa: WORD 'WCHARS' codep=0x1d29 wordp=0x5c05
// ================================================
// 0x5c05: db 0x26 0x00 '& '

// ================================================
// 0x5c07: WORD 'SKIP2NEST' codep=0x1d29 wordp=0x5c13
// ================================================
// 0x5c13: db 0x00 0x00 '  '

// ================================================
// 0x5c15: WORD '-AIN' codep=0x1d29 wordp=0x5c1e
// ================================================
// 0x5c1e: db 0x74 0x20 't '

// ================================================
// 0x5c20: WORD ''LAUNCH' codep=0x1d29 wordp=0x5c2c
// ================================================
// 0x5c2c: db 0x57 0xd3 'W '

// ================================================
// 0x5c2e: WORD '?ON-PLA' codep=0x1d29 wordp=0x5c3a
// ================================================
// 0x5c3a: db 0x00 0x00 '  '

// ================================================
// 0x5c3c: WORD '?RECALL' codep=0x1d29 wordp=0x5c48
// ================================================
// 0x5c48: db 0x00 0x00 '  '

// ================================================
// 0x5c4a: WORD 'WMSG' codep=0x1d29 wordp=0x5c53
// ================================================
// 0x5c53: db 0x00 0x00 '  '

// ================================================
// 0x5c55: WORD '?ROD' codep=0x1d29 wordp=0x5c5e
// ================================================
// 0x5c5e: db 0x45 0x41 'EA'

// ================================================
// 0x5c60: WORD 'CTX' codep=0x1d29 wordp=0x5c68
// ================================================
// 0x5c68: db 0x00 0x00 '  '

// ================================================
// 0x5c6a: WORD 'CTY' codep=0x1d29 wordp=0x5c72
// ================================================
// 0x5c72: db 0x06 0x00 '  '

// ================================================
// 0x5c74: WORD 'FTRIG' codep=0x1d29 wordp=0x5c7e
// ================================================
// 0x5c7e: db 0x00 0x00 '  '

// ================================================
// 0x5c80: WORD 'FQUIT' codep=0x1d29 wordp=0x5c8a
// ================================================
// 0x5c8a: db 0x74 0x61 'ta'

// ================================================
// 0x5c8c: WORD 'LKEY' codep=0x1d29 wordp=0x5c95
// ================================================
// 0x5c95: db 0x73 0x74 'st'

// ================================================
// 0x5c97: WORD ''BUTTON' codep=0x1d29 wordp=0x5ca3
// ================================================
// 0x5ca3: db 0x65 0x20 'e '

// ================================================
// 0x5ca5: WORD 'BTN-REC' codep=0x1d29 wordp=0x5cb1
// ================================================
// 0x5cb1: db 0x63 0x74 'ct'

// ================================================
// 0x5cb3: WORD 'CRSCOLO' codep=0x1d29 wordp=0x5cbf
// ================================================
// 0x5cbf: db 0x6c 0x65 'le'

// ================================================
// 0x5cc1: WORD '(SRDEPTH)' codep=0x1d29 wordp=0x5cc3
// ================================================
// 0x5cc3: db 0x3a 0x20 ': '

// ================================================
// 0x5cc5: WORD '?>OP' codep=0x1d29 wordp=0x5cce
// ================================================
// 0x5cce: db 0x00 0x00 '  '

// ================================================
// 0x5cd0: WORD ''YANK' codep=0x1d29 wordp=0x5cda
// ================================================
// 0x5cda: db 0x4f 0xcc 'O '

// ================================================
// 0x5cdc: WORD '?12' codep=0x1d29 wordp=0x5ce4
// ================================================
// 0x5ce4: db 0x00 0x00 '  '

// ================================================
// 0x5ce6: WORD ''+VESS' codep=0x1d29 wordp=0x5cf1
// ================================================
// 0x5cf1: db 0xc9 0xca '  '

// ================================================
// 0x5cf3: WORD '?NEB' codep=0x1d29 wordp=0x5cfc
// ================================================
// 0x5cfc: db 0x00 0x00 '  '

// ================================================
// 0x5cfe: WORD 'FORCEKEY' codep=0x1d29 wordp=0x5d0a
// ================================================
// 0x5d0a: db 0x00 0x00 '  '

// ================================================
// 0x5d0c: WORD '%VAL' codep=0x1d29 wordp=0x5d15
// ================================================
// 0x5d15: db 0x78 0x65 'xe'

// ================================================
// 0x5d17: WORD 'SCROLL-' codep=0x1d29 wordp=0x5d23
// ================================================
// 0x5d23: db 0x4e 0x20 'N '

// ================================================
// 0x5d25: WORD '[#CACHE]' codep=0x1d29 wordp=0x5d31
// ================================================
// 0x5d31: db 0x87 0x01 '  '

// ================================================
// 0x5d33: WORD 'ESC-EN' codep=0x1d29 wordp=0x5d3e
// ================================================
// 0x5d3e: db 0x01 0x00 '  '

// ================================================
// 0x5d40: WORD 'ESC-PFA' codep=0x1d29 wordp=0x5d4c
// ================================================
// 0x5d4c: db 0x76 0xd4 'v '

// ================================================
// 0x5d4e: WORD 'LINE-COUNT' codep=0x1d29 wordp=0x5d5a
// ================================================
// 0x5d5a: db 0x54 0x20 'T '

// ================================================
// 0x5d5c: WORD 'PM-PTR' codep=0x1d29 wordp=0x5d67
// ================================================
// 0x5d67: db 0x6f 0x75 'ou'

// ================================================
// 0x5d69: WORD '?REUSE' codep=0x1d29 wordp=0x5d6b
// ================================================
// 0x5d6b: db 0x01 0x00 '  '

// ================================================
// 0x5d6d: WORD 'SKEY' codep=0x1d29 wordp=0x5d76
// ================================================
// 0x5d76: db 0x63 0x72 'cr'

// ================================================
// 0x5d78: WORD '#AUX' codep=0x1d29 wordp=0x5d81
// ================================================
// 0x5d81: db 0x05 0x00 '  '

// ================================================
// 0x5d83: WORD 'WADDR' codep=0x1d29 wordp=0x5d8d
// ================================================
// 0x5d8d: db 0x20 0x77 ' w'

// ================================================
// 0x5d8f: WORD 'MASK' codep=0x1d29 wordp=0x5d98
// ================================================
// 0x5d98: db 0x73 0x65 'se'

// ================================================
// 0x5d9a: WORD '?EGA' codep=0x1d29 wordp=0x5da3
// ================================================
// 0x5da3: db 0x00 0x00 '  '

// ================================================
// 0x5da5: WORD 'XABS' codep=0x1d29 wordp=0x5dae
// ================================================
// 0x5dae: db 0xff 0xff '  '

// ================================================
// 0x5db0: WORD 'YABS' codep=0x1d29 wordp=0x5db9
// ================================================
// 0x5db9: db 0x00 0x00 '  '

// ================================================
// 0x5dbb: WORD 'HEADING' codep=0x1d29 wordp=0x5dc7
// ================================================
// 0x5dc7: db 0x02 0x00 '  '

// ================================================
// 0x5dc9: WORD '3DSEG' codep=0x1d29 wordp=0x5dd3
// ================================================
// 0x5dd3: db 0x69 0x70 'ip'

// ================================================
// 0x5dd5: WORD 'VIN'' codep=0x1d29 wordp=0x5dde
// ================================================
// 0x5dde: db 0x67 0x20 'g '

// ================================================
// 0x5de0: WORD 'YSCREEN' codep=0x1d29 wordp=0x5dec
// ================================================
// 0x5dec: db 0x20 0x74 ' t'

// ================================================
// 0x5dee: WORD 'XSCREEN' codep=0x1d29 wordp=0x5dfa
// ================================================
// 0x5dfa: db 0x6f 0x72 'or'

// ================================================
// 0x5dfc: WORD ''COMBAT' codep=0x1d29 wordp=0x5e08
// ================================================
// 0x5e08: db 0x58 0xc9 'X '

// ================================================
// 0x5e0a: WORD ''CEX+' codep=0x1d29 wordp=0x5e14
// ================================================
// 0x5e14: db 0x55 0xc2 'U '

// ================================================
// 0x5e16: WORD ''CEX' codep=0x1d29 wordp=0x5e1f
// ================================================
// 0x5e1f: db 0x6a 0xc2 'j '

// ================================================
// 0x5e21: WORD ''WAX' codep=0x1d29 wordp=0x5e2a
// ================================================
// 0x5e2a: db 0x48 0xc9 'H '

// ================================================
// 0x5e2c: WORD 'TERMINA' codep=0x1d29 wordp=0x5e38
// ================================================
// 0x5e38: db 0x44 0x20 'D '

// ================================================
// 0x5e3a: WORD '?COMBAT' codep=0x1d29 wordp=0x5e46
// ================================================
// 0x5e46: db 0x00 0x00 '  '

// ================================================
// 0x5e48: WORD '?ATTACK' codep=0x1d29 wordp=0x5e54
// ================================================
// 0x5e54: db 0x74 0x6f 'to'

// ================================================
// 0x5e56: WORD '?RECYCLED' codep=0x1d29 wordp=0x5e58
// ================================================
// 0x5e58: db 0x00 0x00 '  '

// ================================================
// 0x5e5a: WORD 'STAR-HR' codep=0x1d29 wordp=0x5e66
// ================================================
// 0x5e66: db 0x00 0x00 '  '

// ================================================
// 0x5e68: WORD 'STARDATE' codep=0x1d29 wordp=0x5e74
// ================================================
// 0x5e74: db 0x00 0x00 '  '

// ================================================
// 0x5e76: WORD 'TIME-PASSING' codep=0x1d29 wordp=0x5e82
// ================================================
// 0x5e82: db 0x00 0x00 '  '

// ================================================
// 0x5e84: WORD '#CLRMAP' codep=0x1d29 wordp=0x5e90
// ================================================
// 0x5e90: db 0x67 0x65 'ge'

// ================================================
// 0x5e92: WORD 'PLHI' codep=0x1d29 wordp=0x5e9b
// ================================================
// 0x5e9b: db 0xff 0xff '  '

// ================================================
// 0x5e9d: WORD ''PROCES' codep=0x1d29 wordp=0x5ea9
// ================================================
// 0x5ea9: db 0x75 0x72 'ur'

// ================================================
// 0x5eab: WORD 'CURSEG' codep=0x1d29 wordp=0x5eb6
// ================================================
// 0x5eb6: db 0x4e 0x8d 'N '

// ================================================
// 0x5eb8: WORD ''SIMULA' codep=0x1d29 wordp=0x5ec4
// ================================================
// 0x5ec4: db 0xe5 0xd0 '  '

// ================================================
// 0x5ec6: WORD ''DEATH' codep=0x1d29 wordp=0x5ed1
// ================================================
// 0x5ed1: db 0x65 0x63 'ec'

// ================================================
// 0x5ed3: WORD ''ENDING' codep=0x1d29 wordp=0x5edf
// ================================================
// 0x5edf: db 0x20 0x63 ' c'

// ================================================
// 0x5ee1: WORD '[KEYINT]' codep=0x1d29 wordp=0x5eed
// ================================================
// 0x5eed: db 0x00 0x00 '  '

// ================================================
// 0x5eef: WORD ''CLEANU' codep=0x1d29 wordp=0x5efb
// ================================================
// 0x5efb: db 0x20 0x2d ' -'

// ================================================
// 0x5efd: WORD ''KEY-CA' codep=0x1d29 wordp=0x5f09
// ================================================
// 0x5f09: db 0x20 0x6d ' m'

// ================================================
// 0x5f0b: WORD ''.VITAL' codep=0x1d29 wordp=0x5f17
// ================================================
// 0x5f17: db 0x49 0x47 'IG'

// ================================================
// 0x5f19: WORD ''.DATE' codep=0x1d29 wordp=0x5f24
// ================================================
// 0x5f24: db 0x69 0x74 'it'

// ================================================
// 0x5f26: WORD ''.VEHICLE-STATUS' codep=0x1d29 wordp=0x5f32
// ================================================
// 0x5f32: db 0x2d 0x53 '-S'

// ================================================
// 0x5f34: WORD ''VEHICLE-CYCLE' codep=0x1d29 wordp=0x5f40
// ================================================
// 0x5f40: db 0x43 0x59 'CY'

// ================================================
// 0x5f42: WORD ''CREW-C' codep=0x1d29 wordp=0x5f4e
// ================================================
// 0x5f4e: db 0x4c 0x45 'LE'

// ================================================
// 0x5f50: WORD ''EXTERNAL-EVENTS' codep=0x1d29 wordp=0x5f5c
// ================================================
// 0x5f5c: db 0x48 0x3a 'H:'

// ================================================
// 0x5f5e: WORD ''REPAIR' codep=0x1d29 wordp=0x5f6a
// ================================================
// 0x5f6a: db 0x74 0x65 'te'

// ================================================
// 0x5f6c: WORD ''TREATM' codep=0x1d29 wordp=0x5f78
// ================================================
// 0x5f78: db 0x54 0x20 'T '

// ================================================
// 0x5f7a: WORD 'WEAPON-' codep=0x1d29 wordp=0x5f86
// ================================================
// 0x5f86: db 0x52 0x45 'RE'

// ================================================
// 0x5f88: WORD '^CRIT' codep=0x1d29 wordp=0x5f92
// ================================================
// 0x5f92: db 0x45 0x20 'E '

// ================================================
// 0x5f94: WORD '?FLAT' codep=0x1d29 wordp=0x5f9e
// ================================================
// 0x5f9e: db 0x74 0x6f 'to'

// ================================================
// 0x5fa0: WORD '?SUP' codep=0x1d29 wordp=0x5fa9
// ================================================
// 0x5fa9: db 0x00 0x00 '  '

// ================================================
// 0x5fab: WORD 'E-USE' codep=0x1d29 wordp=0x5fb5
// ================================================
// 0x5fb5: db 0x4c 0x45 'LE'

// ================================================
// 0x5fb7: WORD ''ENERGY' codep=0x1d29 wordp=0x5fc3
// ================================================
// 0x5fc3: db 0x72 0xcc 'r '

// ================================================
// 0x5fc5: WORD '?SECURE' codep=0x1d29 wordp=0x5fd1
// ================================================
// 0x5fd1: db 0x00 0x00 '  '

// ================================================
// 0x5fd3: WORD ''STP' codep=0x1d29 wordp=0x5fdc
// ================================================
// 0x5fdc: db 0x36 0xd1 '6 '

// ================================================
// 0x5fde: WORD ''RSIDE' codep=0x1d29 wordp=0x5fe9
// ================================================
// 0x5fe9: db 0x45 0xd1 'E '

// ================================================
// 0x5feb: WORD 'DERROR' codep=0x1d29 wordp=0x5ff6
// ================================================
// 0x5ff6: db 0x20 0x20 '  '

// ================================================
// 0x5ff8: WORD 'OVT' codep=0x5275 wordp=0x6000
// ================================================
// 0x6000: db 0xe6 0x07 0xe0 0x07 0xfa 0x07 0xf2 0x55 0x6e 0x58 0x63 0x58 0x92 0x58 0x87 0x58 0x9d 0x58 0xaa 0x58 0x7c 0x58 '       UnXcX X X X X|X'

// ================================================
// 0x6016: WORD 'BITS' codep=0x1d29 wordp=0x601f
// ================================================
// 0x601f: db 0x20 0x20 '  '

// ================================================
// 0x6021: WORD '#BITS' codep=0x1d29 wordp=0x602b
// ================================================
// 0x602b: db 0x20 0x20 '  '

// ================================================
// 0x602d: WORD 'W602F' codep=0x224c wordp=0x602f params=1 returns=0
// ================================================
// orphan

void W602F() // W602F
{
  Push(pp_W4EDD); // W4EDD
  Push(0x0010);
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0x6039: WORD 'W603B' codep=0x224c wordp=0x603b params=0 returns=0
// ================================================
// orphan

void W603B() // W603B
{
  Push(pp_W4FBB); // W4FBB
  W602F(); // W602F
}


// ================================================
// 0x6041: WORD 'W6043' codep=0x224c wordp=0x6043 params=0 returns=0
// ================================================
// orphan

void W6043() // W6043
{
  Push(pp_W4FCD); // W4FCD
  W602F(); // W602F
}


// ================================================
// 0x6049: WORD 'CCASE' codep=0x4a96 wordp=0x6053
// ================================================
// 0x6053: db 0x39 0x60 0x39 0x60 0x39 0x60 0x39 0x60 0x39 0x60 0x41 0x60 0x6c 0x3a 0x90 0x16 '9`9`9`9`9`A`l:  '

// ================================================
// 0x6063: WORD 'COLORCA' codep=0x224c wordp=0x606f
// ================================================

void COLORCA() // COLORCA
{
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(5);
  }
  Func5("CCASE");
}


// ================================================
// 0x607f: WORD 'TIRED-T' codep=0x1d29 wordp=0x608b
// ================================================
// 0x608b: db 0x79 0xe9 0x00 0x56 'y  V'

// ================================================
// 0x608f: WORD 'LASTREP' codep=0x1d29 wordp=0x609b
// ================================================
// 0x609b: db 0x00 0x00 0x00 0x00 '    '

// ================================================
// 0x609f: WORD 'TALKCOU' codep=0x1d29 wordp=0x60ab
// ================================================
// 0x60ab: db 0x20 0x69 0x74 0x69 ' iti'

// ================================================
// 0x60af: WORD 'VSTIME' codep=0x1d29 wordp=0x60ba
// ================================================
// 0x60ba: db 0x00 0x00 0x00 0x00 '    '

// ================================================
// 0x60be: WORD '10*CARGO' codep=0x1d29 wordp=0x60ca
// ================================================
// 0x60ca: db 0x20 0x61 0x20 0x76 ' a v'

// ================================================
// 0x60ce: WORD 'SENSE-ADDR' codep=0x1d29 wordp=0x60da
// ================================================
// 0x60da: db 0x00 0x00 0x00 0x29 '   )'

// ================================================
// 0x60de: WORD 'EYEXY' codep=0x1d29 wordp=0x60e8
// ================================================
// 0x60e8: db 0x52 0x20 0x64 0x64 'R dd'

// ================================================
// 0x60ec: WORD 'WEAPXY' codep=0x1d29 wordp=0x60f7
// ================================================
// 0x60f7: db 0x74 0x20 0x53 0x45 't SE'

// ================================================
// 0x60fb: WORD '10*END' codep=0x1d29 wordp=0x6106
// ================================================
// 0x6106: db 0x29 0x20 0x20 0x20 ')   '

// ================================================
// 0x610a: WORD 'TOWFINE' codep=0x1d29 wordp=0x6116
// ================================================
// 0x6116: db 0x20 0x20 0x20 0x20 '    '

// ================================================
// 0x611a: WORD 'ENC-TIME' codep=0x1d29 wordp=0x6126
// ================================================
// 0x6126: db 0x20 0x20 0x20 0x20 '    '

// ================================================
// 0x612a: WORD 'NAV-TIME' codep=0x1d29 wordp=0x6136
// ================================================
// 0x6136: db 0x20 0x20 0x20 0x20 '    '

// ================================================
// 0x613a: WORD 'W613C' codep=0x1d29 wordp=0x613c
// ================================================
// 0x613c: db 0xc4 0x04 0x22 0x16 '  " '

// ================================================
// 0x6140: WORD 'STIME' codep=0x1d29 wordp=0x614a
// ================================================
// 0x614a: db 0x20 0x20 0x20 0x20 '    '

// ================================================
// 0x614e: WORD 'W6150' codep=0x1d29 wordp=0x6150
// ================================================
// 0x6150: db 0x05 0x00 0x30 0x26 '  0&'

// ================================================
// 0x6154: WORD 'W6156' codep=0x1d29 wordp=0x6156
// ================================================
// 0x6156: db 0x05 0x00 0x30 0x26 '  0&'

// ================================================
// 0x615a: WORD 'IADDR' codep=0x1d29 wordp=0x615c
// ================================================
// 0x615c: db 0x00 0x00 0x00 0x00 '    '

// ================================================
// 0x6160: WORD 'W6162' codep=0x1d29 wordp=0x6162
// ================================================
// 0x6162: db 0x55 0x16 0x00 0x72 'U  r'

// ================================================
// 0x6166: WORD 'KEYTIME' codep=0x1d29 wordp=0x6172
// ================================================
// 0x6172: db 0x74 0x20 0x6f 0x66 't of'

// ================================================
// 0x6176: WORD 'LKEYTIM' codep=0x1d29 wordp=0x6182
// ================================================
// 0x6182: db 0x69 0x63 0x68 0x20 'ich '

// ================================================
// 0x6186: WORD '(SCROLL-BOX)' codep=0x1d29 wordp=0x6192
// ================================================
// 0x6192: db 0x4f 0x58 0x29 0x20 'OX) '

// ================================================
// 0x6196: WORD '(ORIGINATOR)' codep=0x1d29 wordp=0x61a2
// ================================================
// 0x61a2: db 0x4f 0x52 0x29 0x20 'OR) '

// ================================================
// 0x61a6: WORD '(SCROLL-CONT)' codep=0x1d29 wordp=0x61b2
// ================================================
// 0x61b2: db 0x4f 0x4e 0x54 0x29 'ONT)'

// ================================================
// 0x61b6: WORD '(AWARD)' codep=0x1d29 wordp=0x61c2
// ================================================
// 0x61c2: db 0x47 0x75 0x00 0x20 'Gu  '

// ================================================
// 0x61c6: WORD 'BOX-IADDR' codep=0x1d29 wordp=0x61d2
// ================================================
// 0x61d2: db 0x3d 0x10 0x00 0x10 '=   '

// ================================================
// 0x61d6: WORD '(BOMB)' codep=0x1d29 wordp=0x61e1
// ================================================
// 0x61e1: db 0x00 0x00 0x00 0x20 '    '

// ================================================
// 0x61e5: WORD 'REAL-MS' codep=0x1d29 wordp=0x61f1
// ================================================
// 0x61f1: db 0x00 0x00 0x10 0x27 '   ''

// ================================================
// 0x61f5: WORD 'LAST-UPDATE' codep=0x1d29 wordp=0x6201
// ================================================
// 0x6201: db 0x00 0x00 0x00 0x00 '    '

// ================================================
// 0x6205: WORD 'XWLD:XPIX' codep=0x1d29 wordp=0x6211
// ================================================
// 0x6211: db 0x20 0x00 0x08 0x00 '    '

// ================================================
// 0x6215: WORD 'YWLD:YPIX' codep=0x1d29 wordp=0x6221
// ================================================
// 0x6221: db 0x30 0x00 0x08 0x00 '0   '

// ================================================
// 0x6225: WORD 'ANCHOR-CONTOUR' codep=0x1d29 wordp=0x6230
// ================================================
// 0x6230: db 0x78 0xec 0x78 0xec 'x x '

// ================================================
// 0x6234: WORD 'OK-TALK' codep=0x1d29 wordp=0x6240
// ================================================
// 0x6240: db 0x50 0xec 0x00 0x20 'P   '

// ================================================
// 0x6244: WORD '(STARPO' codep=0x1d29 wordp=0x6250
// ================================================
// 0x6250: db 0xe5 0x96 0x00 0x56 '   V'

// ================================================
// 0x6254: WORD '(SHIP)' codep=0x1d29 wordp=0x625f
// ================================================
// 0x625f: db 0xf0 0x9a 0x00 0x72 '   r'

// ================================================
// 0x6263: WORD 'TVEHICLE' codep=0x1d29 wordp=0x626f
// ================================================
// 0x626f: db 0x46 0x9b 0x00 0x73 'F  s'

// ================================================
// 0x6273: WORD 'TV-HOLD' codep=0x1d29 wordp=0x627f
// ================================================
// 0x627f: db 0x6b 0x9b 0x00 0x61 'k  a'

// ================================================
// 0x6283: WORD 'SUPER-BOX' codep=0x1d29 wordp=0x628f
// ================================================
// 0x628f: db 0x20 0x72 0x72 0x61 ' rra'

// ================================================
// 0x6293: WORD '(SYSTEM)' codep=0x1d29 wordp=0x629f
// ================================================
// 0x629f: db 0x21 0x16 0x00 0x65 '!  e'

// ================================================
// 0x62a3: WORD '(ORBIT)' codep=0x1d29 wordp=0x62af
// ================================================
// 0x62af: db 0x88 0x1d 0x02 0x65 '   e'

// ================================================
// 0x62b3: WORD '(PLANET)' codep=0x1d29 wordp=0x62bf
// ================================================
// 0x62bf: db 0x55 0x16 0x00 0x65 'U  e'

// ================================================
// 0x62c3: WORD '(SURFACE)' codep=0x1d29 wordp=0x62cf
// ================================================
// 0x62cf: db 0x20 0x72 0x72 0x65 ' rre'

// ================================================
// 0x62d3: WORD '(ENCOUNTER)' codep=0x1d29 wordp=0x62df
// ================================================
// 0x62df: db 0x00 0x00 0x00 0x00 '    '

// ================================================
// 0x62e3: WORD '(SHIPBOX)' codep=0x1d29 wordp=0x62ef
// ================================================
// 0x62ef: db 0xbc 0x9a 0x00 0x65 '   e'

// ================================================
// 0x62f3: WORD '(AORIGINATOR)' codep=0x1d29 wordp=0x62ff
// ================================================
// 0x62ff: db 0x00 0x00 0x00 0x00 '    '

// ================================================
// 0x6303: WORD 'THIS-REGION' codep=0x1d29 wordp=0x630f
// ================================================
// 0x630f: db 0x4f 0x4e 0x20 0x6e 'ON n'

// ================================================
// 0x6313: WORD '(THIS-ITEM)' codep=0x1d29 wordp=0x631f
// ================================================
// 0x631f: db 0x4d 0x29 0x20 0x68 'M) h'

// ================================================
// 0x6323: WORD 'KEYINTADDR' codep=0x1d29 wordp=0x6325
// ================================================
// 0x6325: db 0x29 0xb4 ') '

// ================================================
// 0x6327: WORD 'CXS' codep=0x1d29 wordp=0x6329
// ================================================
// 0x6329: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x32 0x10 0x00 0xbc 0x9a 0x00 0x88 0x1d 0x02 0xbc 0x9a 0x00 0x88 0x1d 0x02 0x21 0x16 0x00 0x50 0x10 0x00 0x00 0x00 0x00 0x00 0x00 0x00 '                                                                                             2              !  P        '

// ================================================
// 0x63a1: WORD 'VSTK' codep=0x1d29 wordp=0x63a3
// ================================================
// 0x63a3: db 0x01 0x00 0x3c 0xca 0x01 0x00 0x69 0xca 0x01 0x00 0x4b 0xca 0x01 0x00 0x87 0xca 0x01 0x00 0x01 0x00 0xc3 0xca 0x01 0x00 0x0e 0xcb 0x01 0x00 0x4a 0xcb 0x01 0x00 0x77 0xcb 0x01 0x00 0xa4 0xcb 0x01 0x00 0xfe 0xcb 0x01 0x00 0x49 0xcc 0x01 0x00 0x00 0x00 0x01 0x00 0x86 0x7a 0xb2 0x7d 0x3a 0x20 0x08 0x70 0x47 0x87 0x20 0x20 '  <   i   K                 J   w           I        z }:  pG   '

// ================================================
// 0x63e3: WORD 'IBFR' codep=0x1d29 wordp=0x63ec
// ================================================
// 0x63ec: db 0x0e 0x00 0x00 0x00 0x9a 0x00 0x99 0x9a 0x00 0xf0 0x9a 0x00 0x12 0x00 0x03 0x00 0xf5 0xff 0x90 0x00 0x20 0x20 0x47 0x47 0x4e 0x47 0x20 0x4d 0x41 0x54 0x45 0x55 0x43 0x45 0x52 0x20 0x4f 0x52 0x4e 0x47 0x20 0x4c 0x41 0x56 0x41 0xfc 0x97 0xf3 0x59 0xef 0xa4 0xaf 0x89 0xa5 0x0b 0xfa 0x1f 0x94 0x63 0xe4 0x0d 0xe3 0x6b 0xee 0x40 0xbe 0x92 0x3f 0xec 0x8f 0x07 0x05 0x19 0x5e 0x41 0xa3 0x25 0x6d 0x19 0x5f 0x5b 0xfa 0xf9 0x9f 0xb9 0x38 0x78 0xcb 0x0e 0x3c 0x0a 0x85 0x77 0xa8 0xae 0x78 0xb8 0xfc 0x9e 0xf2 0x45 0xc7 0x57 0xee 0x83 0x93 0xb7 0x1b 0x7a 0x35 0x91 0x0a 0xb7 0xc7 0x60 0x66 0x58 0xbe 0x85 0x5a 0x32 0xc8 0x84 0x16 0xd2 0x30 0x6d 0xf1 0x6b 0xe0 0x11 0x54 0x65 0x6c 0x9f 0xb7 0x0e 0x80 0x59 0x5d 0xf1 0xde 0x68 0x89 0xf5 0xb4 0x0f 0x79 0x65 0xf1 0x47 0x10 0x36 0x20 0x8e 0x6c 0x9e 0x3b 0xbc 0xb5 0xf4 0x44 0x45 0x20 0x4d 0x45 0x54 0x20 0x57 0x49 0x54 0x48 0x20 0x46 0x4f 0x52 0x43 0x45 0x2e 0x20 0x44 0x4f 0x20 0x59 0x4f 0x55 0x20 0x41 0x47 0x52 0x45 0x45 0x20 0x54 0x4f 0x20 0x43 0x4f 0x4d 0x45 0x20 0x41 0x4c 0x4f 0x4e 0x47 0x20 0x50 0x45 0x41 0x43 0x45 0x46 0x55 0x4c 0x4c 0x59 0x3f 0x20 0x45 0x44 0x3f 0x20 0x4e 0x4f 0x57 0x20 0x41 0x4e 0x44 0x20 0x46 0x4f 0x52 0x45 0x56 0x45 0x52 0x20 0x4d 0x4f 0x52 0x54 0x41 0x4c 0x20 0x45 0x4e 0x45 0x4d 0x49 0x45 0x53 0x2e 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 '                      GGNG MATEUCER ORNG LAVA   Y         c   k @  ?     ^A %m _[    8x  <  w  x    E W     z5    `fX  Z2    0m k  Tel    Y]  h    ye G 6  l ;   DE MET WITH FORCE. DO YOU AGREE TO COME ALONG PEACEFULLY? ED? NOW AND FOREVER MORTAL ENEMIES.                   '

// ================================================
// 0x64fd: WORD 'YTABLE' codep=0x1d29 wordp=0x6508
// ================================================
// 0x6508: db 0xf0 0x3e 0xf0 0x1e 0xa0 0x3e 0xa0 0x1e 0x50 0x3e 0x50 0x1e 0x00 0x3e 0x00 0x1e 0xb0 0x3d 0xb0 0x1d 0x60 0x3d 0x60 0x1d 0x10 0x3d 0x10 0x1d 0xc0 0x3c 0xc0 0x1c 0x70 0x3c 0x70 0x1c 0x20 0x3c 0x20 0x1c 0xd0 0x3b 0xd0 0x1b 0x80 0x3b 0x80 0x1b 0x30 0x3b 0x30 0x1b 0xe0 0x3a 0xe0 0x1a 0x90 0x3a 0x90 0x1a 0x40 0x3a 0x40 0x1a 0xf0 0x39 0xf0 0x19 0xa0 0x39 0xa0 0x19 0x50 0x39 0x50 0x19 0x00 0x39 0x00 0x19 0xb0 0x38 0xb0 0x18 0x60 0x38 0x60 0x18 0x10 0x38 0x10 0x18 0xc0 0x37 0xc0 0x17 0x70 0x37 0x70 0x17 0x20 0x37 0x20 0x17 0xd0 0x36 0xd0 0x16 0x80 0x36 0x80 0x16 0x30 0x36 0x30 0x16 0xe0 0x35 0xe0 0x15 0x90 0x35 0x90 0x15 0x40 0x35 0x40 0x15 0xf0 0x34 0xf0 0x14 0xa0 0x34 0xa0 0x14 0x50 0x34 0x50 0x14 0x00 0x34 0x00 0x14 0xb0 0x33 0xb0 0x13 0x60 0x33 0x60 0x13 0x10 0x33 0x10 0x13 0xc0 0x32 0xc0 0x12 0x70 0x32 0x70 0x12 0x20 0x32 0x20 0x12 0xd0 0x31 0xd0 0x11 0x80 0x31 0x80 0x11 0x30 0x31 0x30 0x11 0xe0 0x30 0xe0 0x10 0x90 0x30 0x90 0x10 0x40 0x30 0x40 0x10 0xf0 0x2f 0xf0 0x0f 0xa0 0x2f 0xa0 0x0f 0x50 0x2f 0x50 0x0f 0x00 0x2f 0x00 0x0f 0xb0 0x2e 0xb0 0x0e 0x60 0x2e 0x60 0x0e 0x10 0x2e 0x10 0x0e 0xc0 0x2d 0xc0 0x0d 0x70 0x2d 0x70 0x0d 0x20 0x2d 0x20 0x0d 0xd0 0x2c 0xd0 0x0c 0x80 0x2c 0x80 0x0c 0x30 0x2c 0x30 0x0c 0xe0 0x2b 0xe0 0x0b 0x90 0x2b 0x90 0x0b 0x40 0x2b 0x40 0x0b 0xf0 0x2a 0xf0 0x0a 0xa0 0x2a 0xa0 0x0a 0x50 0x2a 0x50 0x0a 0x00 0x2a 0x00 0x0a 0xb0 0x29 0xb0 0x09 0x60 0x29 0x60 0x09 0x10 0x29 0x10 0x09 0xc0 0x28 0xc0 0x08 0x70 0x28 0x70 0x08 0x20 0x28 0x20 0x08 0xd0 0x27 0xd0 0x07 0x80 0x27 0x80 0x07 0x30 0x27 0x30 0x07 0xe0 0x26 0xe0 0x06 0x90 0x26 0x90 0x06 0x40 0x26 0x40 0x06 0xf0 0x25 0xf0 0x05 0xa0 0x25 0xa0 0x05 0x50 0x25 0x50 0x05 0x00 0x25 0x00 0x05 0xb0 0x24 0xb0 0x04 0x60 0x24 0x60 0x04 0x10 0x24 0x10 0x04 0xc0 0x23 0xc0 0x03 0x70 0x23 0x70 0x03 0x20 0x23 0x20 0x03 0xd0 0x22 0xd0 0x02 0x80 0x22 0x80 0x02 0x30 0x22 0x30 0x02 0xe0 0x21 0xe0 0x01 0x90 0x21 0x90 0x01 0x40 0x21 0x40 0x01 0xf0 0x20 0xf0 0x00 0xa0 0x20 0xa0 0x00 0x50 0x20 0x50 0x00 0x00 0x20 0x00 0x00 ' >   >  P>P  >   =  `=`  =   <  p<p  <   ;   ;  0;0  :   :  @:@  9   9  P9P  9   8  `8`  8   7  p7p  7   6   6  060  5   5  @5@  4   4  P4P  4   3  `3`  3   2  p2p  2   1   1  010  0   0  @0@  /   /  P/P  /   .  `.`  .   -  p-p  -   ,   ,  0,0  +   +  @+@  *   *  P*P  *   )  `)`  )   (  p(p  (   '   '  0'0  &   &  @&@  %   %  P%P  %   $  `$`  $   #  p#p  #   "   "  0"0  !   !  @!@         P P     '

// ================================================
// 0x6698: WORD 'VYTABLE' codep=0x1d29 wordp=0x66a4
// ================================================
// 0x66a4: db 0x00 0x00 0x70 0x08 0x24 0x00 0x94 0x08 0x48 0x00 0xb8 0x08 0x6c 0x00 0xdc 0x08 0x90 0x00 0x00 0x09 0xb4 0x00 0x24 0x09 0xd8 0x00 0x48 0x09 0xfc 0x00 0x6c 0x09 0x20 0x01 0x90 0x09 0x44 0x01 0xb4 0x09 0x68 0x01 0xd8 0x09 0x8c 0x01 0xfc 0x09 0xb0 0x01 0x20 0x0a 0xd4 0x01 0x44 0x0a 0xf8 0x01 0x68 0x0a 0x1c 0x02 0x8c 0x0a 0x40 0x02 0xb0 0x0a 0x64 0x02 0xd4 0x0a 0x88 0x02 0xf8 0x0a 0xac 0x02 0x1c 0x0b 0xd0 0x02 0x40 0x0b 0xf4 0x02 0x64 0x0b 0x18 0x03 0x88 0x0b 0x3c 0x03 0xac 0x0b 0x60 0x03 0xd0 0x0b 0x84 0x03 0xf4 0x0b 0xa8 0x03 0x18 0x0c 0xcc 0x03 0x3c 0x0c 0xf0 0x03 0x60 0x0c 0x14 0x04 0x84 0x0c 0x38 0x04 0xa8 0x0c 0x5c 0x04 0xcc 0x0c 0x80 0x04 0xf0 0x0c 0xa4 0x04 0x14 0x0d 0xc8 0x04 0x38 0x0d 0xec 0x04 0x5c 0x0d 0x10 0x05 0x80 0x0d 0x34 0x05 0xa4 0x0d 0x58 0x05 0xc8 0x0d 0x7c 0x05 0xec 0x0d 0xa0 0x05 0x10 0x0e 0xc4 0x05 0x34 0x0e 0xe8 0x05 0x58 0x0e 0x0c 0x06 0x7c 0x0e 0x30 0x06 0xa0 0x0e 0x54 0x06 0xc4 0x0e 0x78 0x06 0xe8 0x0e 0x9c 0x06 0x0c 0x0f 0xc0 0x06 0x30 0x0f 0xe4 0x06 0x54 0x0f 0x08 0x07 0x78 0x0f 0x2c 0x07 0x9c 0x0f 0x50 0x07 0xc0 0x0f 0x74 0x07 0xe4 0x0f 0x98 0x07 0x08 0x10 0xbc 0x07 0x2c 0x10 0xe0 0x07 0x50 0x10 0x04 0x08 0x74 0x10 0x28 0x08 0x98 0x10 0x4c 0x08 0xbc 0x10 '  p $   H   l         $   H   l     D   h             D   h     @   d             @   d     <   `             <   `     8   \             8   \     4   X   |         4   X   | 0   T   x         0   T   x ,   P   t         ,   P   t (   L   '

// ================================================
// 0x6794: WORD 'LSCAN' codep=0x1d29 wordp=0x679e
// ================================================
// 0x679e: db 0x53 0x43 0x52 0x4f 0x4c 0x4c 0x2d 0x54 0x45 0x58 0x54 0x20 0x72 0x20 0x74 0x61 0x62 0x6c 0x65 0x29 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x28 0x20 0x73 0x65 0x74 0x20 0x64 0x69 0x73 0x70 0x6c 0x61 0x79 0x20 0x62 0x75 0x66 0x66 0x65 0x72 0x20 0x29 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x5c 0x20 0x53 0x45 0x54 0x55 0x50 0x20 0x20 0x20 0x4b 0x52 0x4e 0x20 0x28 0x20 0x72 0x66 0x67 0x32 0x35 0x73 0x65 0x70 0x38 0x37 0x29 0x20 0x68 0x65 0x78 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x3a 0x20 0x73 0x65 0x74 0x64 0x62 0x75 0x66 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x81 0x81 0x80 0x82 0x81 0x81 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x77 0x77 0x76 0x78 0x77 0x77 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x8c 0x8c 0x8b 0x8d 0x8c 0x8c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x75 0x75 0x74 0x76 0x75 0x75 0x77 0x79 0x77 0x79 0x77 0x79 0x78 0x78 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x78 0x78 0x77 0x79 0x78 0x78 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x30 0x3c 0x30 0x3c 0x30 0x3c 0x30 0x3c 0x30 0x3c 0x20 0x20 'SCROLL-TEXT r table)                                                              ( set display buffer )              \ SETUP   KRN ( rfg25sep87) hex                                                             : setdbuf                                 S S S S S S S       S S S S wwvxwwS S S       S S S S S S S S uutvuuwywywyxxS S S S S S S S xxwyxxS S S S S S S S S S S S S S S S S S S 0<0<0<0<0<  '

// ================================================
// 0x692e: WORD 'NEB-TABLE' codep=0x1d29 wordp=0x6930
// ================================================
// 0x6930: db 0xc2 0x00 0x3c 0x00 0xc2 0x00 0x30 0x00 0xc6 0x00 0x30 0x00 0xc6 0x00 0x3c 0x00 0x49 0x41 0x42 0x4c 0x45 0x20 0x2d 0x20 0x41 0x52 0x52 0x41 0x59 0x20 0x2d 0x20 0x53 0x48 0x5c 0x20 0x54 0x52 0x41 0x4e 0x53 0x56 0x41 0x52 0x4b 0x52 0x4e 0x20 0x28 0x20 0x72 0x66 0x67 0x31 0x39 0x73 0x65 0x70 0x38 0x37 0x29 0x20 0x20 0x20 '  <   0   0   < IABLE - ARRAY - SH\ TRANSVARKRN ( rfg19sep87)   '

// ================================================
// 0x6970: WORD 'NEB2' codep=0x1d29 wordp=0x6972
// ================================================
// 0x6972: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x20 0x62 0x30 0x30 0x30 0x20 0x31 0x36 0x6b 0x20 0x32 0x2a 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 ':  ALLOT  b000 16k 2*                                           '

// ================================================
// 0x69b2: WORD 'V1' codep=0x1d29 wordp=0x69b4
// ================================================
// 0x69b4: db 0xc6 0x00 0x3a 0x00 0xc2 0x00 0x38 0x00 0x20 0x20 0x62 0x38 0x30 0x30 0x20 0x31 0x36 0x6b 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 '  :   8   b800 16k                                              '

// ================================================
// 0x69f4: WORD 'V2' codep=0x1d29 wordp=0x69f6
// ================================================
// 0x69f6: db 0x00 0x00 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 '   ALLOT                                                        '

// ================================================
// 0x6a36: WORD 'CMAP' codep=0x1d29 wordp=0x6a3f
// ================================================
// 0x6a3f: db 0x22 0x22 0x22 0x22 0x22 0x22 0x22 0x22 0x11 0x11 0x11 0x11 0x11 0x11 0x11 0x11 0x99 0x99 0x99 0x99 0x99 0x99 0x99 0x99 0xdd 0xdd 0xdd 0xdd 0xdd 0xdd 0xdd 0xdd 0xcc 0xcc 0xcc 0xcc 0xcc 0xcc 0xcc 0xcc 0x88 0x88 0x88 0x88 0x88 0x88 0x88 0x88 0x55 0x55 0x55 0x55 0x55 0x55 0x55 0x55 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff '""""""""                                        UUUUUUUU        '

// ================================================
// 0x6a7f: WORD 'LRTRN' codep=0x1d29 wordp=0x6a89
// ================================================
// 0x6a89: db 0x70 0x90 0xf1 0x16 'p   '

// ================================================
// 0x6a8d: WORD 'MERCATOR' codep=0x4e00 wordp=0x6a99
// ================================================
ArrayType MERCATOR = {0x0030, 0x0018, 0x0480, 0x9391};

// ================================================
// 0x6aa1: WORD 'CONANCHOR' codep=0x4e00 wordp=0x6aad
// ================================================
ArrayType CONANCHOR = {0x0009, 0x0007, 0x003f, 0x938c};

// ================================================
// 0x6ab5: WORD 'CONTOUR' codep=0x4e00 wordp=0x6ac1
// ================================================
ArrayType CONTOUR = {0x003d, 0x0065, 0x1811, 0x91fe};

// ================================================
// 0x6ac9: WORD 'ICONIMA' codep=0x4e00 wordp=0x6ad5
// ================================================
ArrayType ICONIMA = {0x0012, 0x0040, 0x0480, 0x94b2};

// ================================================
// 0x6add: WORD 'VERTEX' codep=0x4e00 wordp=0x6ae8
// ================================================
ArrayType VERTEX = {0x0003, 0x0086, 0x0192, 0x9695};

// ================================================
// 0x6af0: WORD 'FACET' codep=0x4e00 wordp=0x6afa
// ================================================
ArrayType FACET = {0x0004, 0x0048, 0x0120, 0x9679};

// ================================================
// 0x6b02: WORD 'FACE' codep=0x4e00 wordp=0x6b0b
// ================================================
ArrayType FACE = {0x0003, 0x0048, 0x00d8, 0x9662};

// ================================================
// 0x6b13: WORD 'PPOLY' codep=0x4e00 wordp=0x6b1d
// ================================================
ArrayType PPOLY = {0x0005, 0x0320, 0x0fa0, 0x9503};

// ================================================
// 0x6b25: WORD 'GVERTEX>GRIDCOLOR' codep=0x4e00 wordp=0x6b31
// ================================================
ArrayType GVERTEX_gt_GRIDCOLOR = {0x0003, 0x0075, 0x015f, 0x948d};

// ================================================
// 0x6b39: WORD 'GPOLY' codep=0x4e00 wordp=0x6b43
// ================================================
ArrayType GPOLY = {0x0004, 0x0059, 0x0164, 0x946b};

// ================================================
// 0x6b4b: WORD 'GRIDCOLOR' codep=0x4e00 wordp=0x6b57
// ================================================
ArrayType GRIDCOLOR = {0x0002, 0x0059, 0x00b2, 0x9454};

// ================================================
// 0x6b5f: WORD 'G1VERT' codep=0x4e00 wordp=0x6b6a
// ================================================
ArrayType G1VERT = {0x0003, 0x0075, 0x015f, 0x942f};

// ================================================
// 0x6b72: WORD '9X9COARSE' codep=0x4e00 wordp=0x6b7e
// ================================================
ArrayType _9X9COARSE = {0x0009, 0x0009, 0x0051, 0x9428};

// ================================================
// 0x6b86: WORD '9X9FINE>GVERTEX' codep=0x4e00 wordp=0x6b92
// ================================================
ArrayType _9X9FINE_gt_GVERTEX = {0x0009, 0x0009, 0x0051, 0x9421};

// ================================================
// 0x6b9a: WORD 'XFORMVERT' codep=0x4e00 wordp=0x6ba6
// ================================================
ArrayType XFORMVERT = {0x0006, 0x0086, 0x0324, 0x93dd};

// ================================================
// 0x6bae: WORD 'IARRAYS' codep=0x5275 wordp=0x6bba
// ================================================
// 0x6bba: db 0xe8 0x6a 0xfa 0x6a 0x0b 0x6b 0x1d 0x6b 0xd5 0x6a 0x31 0x6b 0x43 0x6b 0x57 0x6b 0x6a 0x6b 0x7e 0x6b 0x92 0x6b 0xa6 0x6b 0x99 0x6a 0xad 0x6a 0xc1 0x6a ' j j k k j1kCkWkjk~k k k j j j'

// ================================================
// 0x6bd8: WORD '*STARPO' codep=0x3b68 wordp=0x6be4
// ================================================
// 0x6be4: dw 0x0000 0x96e5

// ================================================
// 0x6be8: WORD '*PERSON' codep=0x3b68 wordp=0x6bf4
// ================================================
// 0x6bf4: dw 0x0000 0x9704

// ================================================
// 0x6bf8: WORD '*SHIP-CONFIG' codep=0x3b68 wordp=0x6c04
// ================================================
// 0x6c04: dw 0x0000 0x9abc

// ================================================
// 0x6c08: WORD '*TRADE-' codep=0x3b68 wordp=0x6c14
// ================================================
// 0x6c14: dw 0x0000 0x9ac7

// ================================================
// 0x6c18: WORD '*ITEMS-' codep=0x3b68 wordp=0x6c24
// ================================================
// 0x6c24: dw 0x0000 0x9ad2

// ================================================
// 0x6c28: WORD '*OPERAT' codep=0x3b68 wordp=0x6c34
// ================================================
// 0x6c34: dw 0x0000 0x9ae5

// ================================================
// 0x6c38: WORD '*BANK' codep=0x3b68 wordp=0x6c42
// ================================================
// 0x6c42: dw 0x0000 0x96f0

// ================================================
// 0x6c46: WORD '*STARSHIP-HOLD' codep=0x3b68 wordp=0x6c52
// ================================================
// 0x6c52: dw 0x0000 0x9b58

// ================================================
// 0x6c56: WORD ''VERSIONERR' codep=0x1d29 wordp=0x6c62
// ================================================
// 0x6c62: db 0x75 0x70 'up'

// ================================================
// 0x6c64: WORD 'CTTOP' codep=0x1d29 wordp=0x6c6e
// ================================================
// 0x6c6e: db 0x40 0x00 '@ '

// ================================================
// 0x6c70: WORD 'CTBOT' codep=0x1d29 wordp=0x6c7a
// ================================================
// 0x6c7a: db 0x10 0x00 '  '

// ================================================
// 0x6c7c: WORD 'C>EGA' codep=0x6c86 wordp=0x6c86
// ================================================
// 0x6c86: pop    dx
// 0x6c87: and    dx,0F
// 0x6c8a: push   si
// 0x6c8b: xor    ax,ax
// 0x6c8d: push   ax
// 0x6c8e: mov    cx,0010
// 0x6c91: std    
// 0x6c92: mov    si,4FCA
// 0x6c95: lodsb
// 0x6c96: and    ax,000F
// 0x6c99: cmp    ax,dx
// 0x6c9b: jnz    6CA4
// 0x6c9d: pop    ax
// 0x6c9e: mov    ax,cx
// 0x6ca0: push   ax
// 0x6ca1: mov    cx,0001
// 0x6ca4: loop   6C95
// 0x6ca6: pop    ax
// 0x6ca7: mov    si,4FCD
// 0x6caa: add    si,ax
// 0x6cac: dec    si
// 0x6cad: lodsb
// 0x6cae: pop    si
// 0x6caf: cld    
// 0x6cb0: push   ax
// 0x6cb1: lodsw
// 0x6cb2: mov    bx,ax
// 0x6cb4: jmp    word ptr [bx]

// ================================================
// 0x6cb6: WORD '?>EGA' codep=0x224c wordp=0x6cc0 params=0 returns=0
// ================================================

void Is_gt_EGA() // ?>EGA
{
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() == 0) return;
  C_gt_EGA(); // C>EGA
}


// ================================================
// 0x6ccc: WORD 'E>CGA' codep=0x6cd6 wordp=0x6cd6
// ================================================
// 0x6cd6: pop    dx
// 0x6cd7: and    dx,0F
// 0x6cda: push   si
// 0x6cdb: xor    ax,ax
// 0x6cdd: push   ax
// 0x6cde: mov    cx,0010
// 0x6ce1: std    
// 0x6ce2: mov    si,4FDC
// 0x6ce5: lodsb
// 0x6ce6: and    ax,000F
// 0x6ce9: cmp    ax,dx
// 0x6ceb: jnz    6CF4
// 0x6ced: pop    ax
// 0x6cee: mov    ax,cx
// 0x6cf0: push   ax
// 0x6cf1: mov    cx,0001
// 0x6cf4: loop   6CE5
// 0x6cf6: pop    ax
// 0x6cf7: mov    si,4FBB
// 0x6cfa: add    si,ax
// 0x6cfc: dec    si
// 0x6cfd: lodsb
// 0x6cfe: pop    si
// 0x6cff: cld    
// 0x6d00: push   ax
// 0x6d01: lodsw
// 0x6d02: mov    bx,ax
// 0x6d04: jmp    word ptr [bx]

// ================================================
// 0x6d06: WORD '?UPDATE' codep=0x6d12 wordp=0x6d12 params=1 returns=1
// ================================================
// 0x6d12: pop    cx
// 0x6d13: or     cx,cx
// 0x6d15: jns    6D4D
// 0x6d17: mov    bx,[54A1] // 1BUFADR
// 0x6d1b: mov    dx,bx
// 0x6d1d: add    dx,07
// 0x6d20: cmp    cx,dx
// 0x6d22: jle    6D4B
// 0x6d24: add    dx,0401
// 0x6d28: cmp    dx,cx
// 0x6d2a: jle    6D32
// 0x6d2c: mov    byte ptr [bx+02],FF
// 0x6d30: jmp    6D4B
// 0x6d32: mov    bx,[54A5] // 2BUFADR
// 0x6d36: mov    dx,bx
// 0x6d38: add    dx,07
// 0x6d3b: cmp    cx,dx
// 0x6d3d: jle    6D4B
// 0x6d3f: add    dx,0401
// 0x6d43: cmp    dx,cx
// 0x6d45: jle    6D4B
// 0x6d47: mov    byte ptr [bx+02],FF
// 0x6d4b: jmp    6D5F
// 0x6d4d: cmp    cx,63EF
// 0x6d51: js     6D5F
// 0x6d53: cmp    cx,64FD
// 0x6d57: jns    6D5F
// 0x6d59: mov    bx,63EE
// 0x6d5c: mov    byte ptr [bx],FF
// 0x6d5f: push   cx
// 0x6d60: lodsw
// 0x6d61: mov    bx,ax
// 0x6d63: jmp    word ptr [bx]

// ================================================
// 0x6d65: WORD 'C!' codep=0x224c wordp=0x6d6c params=2 returns=0
// ================================================

void C_ex_() // C!
{
  IsUPDATE(); // ?UPDATE
  C_ex__2(); // C!_2
}


// ================================================
// 0x6d72: WORD '!_3' codep=0x224c wordp=0x6d78 params=2 returns=0
// ================================================

void Store_3() // !_3
{
  IsUPDATE(); // ?UPDATE
  Store(); // !
}


// ================================================
// 0x6d7e: WORD '+!_2' codep=0x224c wordp=0x6d85 params=2 returns=0
// ================================================

void _plus__ex__2() // +!_2
{
  IsUPDATE(); // ?UPDATE
  _plus__ex_(); // +!
}


// ================================================
// 0x6d8b: WORD '1.5!' codep=0x224c wordp=0x6d94 params=3 returns=0
// ================================================

void _1_dot_5_ex_() // 1.5!
{
  IsUPDATE(); // ?UPDATE
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0x6d9a: WORD '2!' codep=0x224c wordp=0x6da1 params=3 returns=0
// ================================================

void _2_ex_() // 2!
{
  IsUPDATE(); // ?UPDATE
  _2_ex__2(); // 2!_2
}


// ================================================
// 0x6da7: WORD 'D!' codep=0x224c wordp=0x6dae params=3 returns=0
// ================================================

void StoreD() // D!
{
  _2_ex_(); // 2!
}


// ================================================
// 0x6db2: WORD 'ON_3' codep=0x224c wordp=0x6db9 params=1 returns=0
// ================================================

void ON_3() // ON_3
{
  IsUPDATE(); // ?UPDATE
  ON_2(); // ON_2
}


// ================================================
// 0x6dbf: WORD 'OFF' codep=0x224c wordp=0x6dc7 params=1 returns=0
// ================================================

void OFF() // OFF
{
  IsUPDATE(); // ?UPDATE
  OFF_2(); // OFF_2
}


// ================================================
// 0x6dcd: WORD '2OFF' codep=0x224c wordp=0x6dd6 params=1 returns=0
// ================================================

void _2OFF() // 2OFF
{
  IsUPDATE(); // ?UPDATE
  Push(0);
  Push(0);
  ROT(); // ROT
  _2_ex_(); // 2!
}


// ================================================
// 0x6de2: WORD 'CMOVE' codep=0x224c wordp=0x6dec params=3 returns=0
// ================================================

void CMOVE() // CMOVE
{
  OVER(); // OVER
  IsUPDATE(); // ?UPDATE
  Pop(); // DROP
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0x6df6: WORD 'FILL_1' codep=0x224c wordp=0x6dff params=3 returns=0
// ================================================

void FILL_1() // FILL_1
{
  Push(3);
  PICK(); // PICK
  IsUPDATE(); // ?UPDATE
  Pop(); // DROP
  FILL_2(); // FILL_2
}


// ================================================
// 0x6e0b: WORD 'W6E0D' codep=0x224c wordp=0x6e0d params=0 returns=0
// ================================================

void W6E0D() // W6E0D
{
  Push(pp_LFILE_n_); // LFILE#
  OFF_2(); // OFF_2
  Push(pp_LRECORD_n_); // LRECORD#
  OFF_2(); // OFF_2
}


// ================================================
// 0x6e17: WORD 'BLOCK_2' codep=0x224c wordp=0x6e21 params=1 returns=2
// ================================================

void BLOCK_2() // BLOCK_2
{
  W6E0D(); // W6E0D
  BLOCK_1(); // BLOCK_1
}


// ================================================
// 0x6e27: WORD 'LBLOCK_2' codep=0x224c wordp=0x6e32 params=1 returns=2
// ================================================

void LBLOCK_2() // LBLOCK_2
{
  W6E0D(); // W6E0D
  LBLOCK_1(); // LBLOCK_1
}


// ================================================
// 0x6e38: WORD 'LOAD_1' codep=0x224c wordp=0x6e41
// ================================================

void LOAD_1() // LOAD_1
{
  W6E0D(); // W6E0D
  Exec("LOAD_2"); // call of word 0x1e23 '(LOAD)'
}


// ================================================
// 0x6e47: WORD '-TEXT' codep=0x224c wordp=0x6e51 params=3 returns=1
// ================================================

void _dash_TEXT() // -TEXT
{
  unsigned short int i, imax;
  Push(0);
  ROT(); // ROT

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Pop(); // DROP
    OVER(); // OVER
    Push(Read16(Pop() + i)&0xFF); //  I + C@
    OVER(); // OVER
    Push(Read16(Pop() + i)&0xFF); //  I + C@
    _dash_(); // -
    Push(Read16(regsp)); // DUP
    Push(!(Pop()==0?1:0)); //  0= NOT
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  SWAP(); // SWAP
  Pop(); // DROP
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0x6e87: WORD '$=' codep=0x224c wordp=0x6e8e params=2 returns=1
// ================================================

void _do__eq_() // $=
{
  _2DUP(); // 2DUP
  Push(Read16(Pop())&0xFF); //  C@
  SWAP(); // SWAP
  Push(Read16(Pop())&0xFF); //  C@
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    COUNT(); // COUNT
    ROT(); // ROT
    Push(Pop() + 1); //  1+
    _dash_TEXT(); // -TEXT
    Push(!Pop()); //  NOT
    return;
  }
  Pop(); Pop(); // 2DROP
  Push(0);
}


// ================================================
// 0x6eb0: WORD 'SIGFLD' codep=0x224c wordp=0x6ebb
// ================================================

void SIGFLD() // SIGFLD
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  _co_(); // ,
  CODE(); // (;CODE) inlined assembler code
// 0x6ec1: call   1649
  Push(Read16(Pop())); //  @
  Push(Read16(cc_SIGBLK)); // SIGBLK
  BLOCK_2(); // BLOCK_2
  Push(Pop() + Pop()); // +
}


// ================================================
// 0x6ece: WORD ':SIGNATURE' codep=0x6ec1 wordp=0x6eda
// ================================================
// 0x6eda: db 0xf0 0x03 '  '

// ================================================
// 0x6edc: WORD ':TIMESTAMP' codep=0x6ec1 wordp=0x6ee8
// ================================================
// 0x6ee8: db 0xf4 0x03 '  '

// ================================================
// 0x6eea: WORD ':CKSUM' codep=0x6ec1 wordp=0x6ef5
// ================================================
// 0x6ef5: db 0xf6 0x03 '  '

// ================================================
// 0x6ef7: WORD ':SAVE' codep=0x6ec1 wordp=0x6f01
// ================================================
// 0x6f01: db 0xf8 0x03 '  '

// ================================================
// 0x6f03: WORD ':VERSION' codep=0x6ec1 wordp=0x6f0f
// ================================================
// 0x6f0f: db 0xfa 0x03 '  '

// ================================================
// 0x6f11: WORD 'THRU_2' codep=0x224c wordp=0x6f1a
// ================================================

void THRU_2() // THRU_2
{
  unsigned short int i, imax;
  _2DUP(); // 2DUP
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    LOAD_1(); // LOAD_1
    return;
  }
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(Read16(regsp)); // DUP
    Draw(); // .
    LOAD_1(); // LOAD_1
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0x6f3e: WORD 'VA>BLK' codep=0x6f49 wordp=0x6f49 params=2 returns=2
// ================================================
// 0x6f49: pop    ax
// 0x6f4a: pop    dx
// 0x6f4b: mov    cx,000A
// 0x6f4e: shr    ax,1
// 0x6f50: rcr    dx,1
// 0x6f52: rcr    bx,1
// 0x6f54: loop   6F4E
// 0x6f56: mov    cx,0006
// 0x6f59: shr    bx,cl
// 0x6f5b: push   bx
// 0x6f5c: push   dx
// 0x6f5d: lodsw
// 0x6f5e: mov    bx,ax
// 0x6f60: jmp    word ptr [bx]

// ================================================
// 0x6f62: WORD 'VA>BUF' codep=0x224c wordp=0x6f6d params=2 returns=2
// ================================================

void VA_gt_BUF() // VA>BUF
{
  VA_gt_BLK(); // VA>BLK
  BLOCK_2(); // BLOCK_2
  Push(Pop() + Pop()); // +
}


// ================================================
// 0x6f75: WORD 'W6F77' codep=0x224c wordp=0x6f77 params=1 returns=2
// ================================================

void W6F77() // W6F77
{
  SIGFLD(":SIGNATURE");
  _2_at_(); // 2@
  SWAP(); // SWAP
}


// ================================================
// 0x6f7f: WORD '?AFILE' codep=0x224c wordp=0x6f81 params=0 returns=1
// ================================================

void IsAFILE() // ?AFILE
{
  Push(Read16(pp_OFFSET)==0x05dc?1:0); // OFFSET @ 0x05dc =
}


// ================================================
// 0x6f8d: WORD 'W6F8F' codep=0x224c wordp=0x6f8f params=1 returns=1
// ================================================

void W6F8F() // W6F8F
{
  SIGFLD(":TIMESTAMP");
  Push((Read16(Pop())==Read16(pp_TIMESTAMP)?1:0) | Read16(pp_RELAXTIME)); //  @ TIMESTAMP @ = RELAXTIME @ OR
}


// ================================================
// 0x6fa1: WORD 'W6FA3' codep=0x224c wordp=0x6fa3 params=1 returns=1
// ================================================
// orphan

void W6FA3() // W6FA3
{
  Push(Read16(pp_VERSION)); // VERSION @
  SIGFLD(":VERSION");
  Push(Read16(Pop())); //  @
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0x6faf: WORD 'W6FB1' codep=0x224c wordp=0x6fb1
// ================================================

void W6FB1() // W6FB1
{
  Push(pp__i_VERSIONERR); // 'VERSIONERR
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x6fb7: WORD 'W6FB9' codep=0x1d29 wordp=0x6fb9
// ================================================
// 0x6fb9: db 0xdb 0x6f ' o'

// ================================================
// 0x6fbb: WORD 'W6FBD' codep=0x224c wordp=0x6fbd
// ================================================

void W6FBD() // W6FBD
{
  while(1)
  {
    _2DUP(); // 2DUP
    _gt_TIB(); // >TIB
    Push(pp_W6FB9); // W6FB9
    GetEXECUTE(); // @EXECUTE
    W6F8F(); // W6F8F
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    _2DUP(); // 2DUP
    W6FB1(); // W6FB1
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0x6fd9: WORD 'W6FDB' codep=0x224c wordp=0x6fdb params=0 returns=0
// ================================================

void W6FDB() // W6FDB
{
  SYSUTIL(); // SYSUTIL
  SETFCB(); // SETFCB
  Pop(); // DROP
  DR3(); // DR3
}


// ================================================
// 0x6fe5: WORD 'W6FE7' codep=0x224c wordp=0x6fe7 params=0 returns=0
// ================================================

void W6FE7() // W6FE7
{
  SYSTEM(); // SYSTEM
  SETFCB(); // SETFCB
  Pop(); // DROP
  DR2(); // DR2
}


// ================================================
// 0x6ff1: WORD 'MOUNTA' codep=0x224c wordp=0x6ffc
// ================================================

void MOUNTA() // MOUNTA
{
  Push(0x6fdb); // 'W6FDB'
  Push(pp_W6FB9); // W6FB9
  Store_3(); // !_3
  SET_STR_AS_PARAM("STARA.COM");
  W6FBD(); // W6FBD
}


// ================================================
// 0x7014: WORD 'MOUNTB' codep=0x224c wordp=0x701f
// ================================================

void MOUNTB() // MOUNTB
{
  Push(0x6fe7); // 'W6FE7'
  Push(pp_W6FB9); // W6FB9
  Store_3(); // !_3
  SET_STR_AS_PARAM("STARB.COM");
  W6FBD(); // W6FBD
}


// ================================================
// 0x7037: WORD 'W7039' codep=0x224c wordp=0x7039
// ================================================

void W7039() // W7039
{
  IsAFILE(); // ?AFILE
  if (Pop() != 0)
  {
    MOUNTB(); // MOUNTB
    return;
  }
  MOUNTA(); // MOUNTA
}


// ================================================
// 0x7049: WORD 'W704B' codep=0x224c wordp=0x704b params=3 returns=1
// ================================================

void W704B() // W704B
{
  unsigned short int a;
  ROT(); // ROT
  a = Pop(); // >R
  Push(a); // I
  SWAP(); // SWAP
  U_st_(); // U<
  SWAP(); // SWAP
  Push(a + 1); // R> 1+
  U_st_(); // U<
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0x7061: WORD 'MOUNT-VSA' codep=0x224c wordp=0x7063 params=2 returns=0
// ================================================

void MOUNT_dash_VSA() // MOUNT-VSA
{
  W6F77(); // W6F77
  Push(Pop() + 1); //  1+
  W704B(); // W704B
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  W7039(); // W7039
}


// ================================================
// 0x7073: WORD 'W7075' codep=0x224c wordp=0x7075 params=2 returns=0
// ================================================

void W7075() // W7075
{
  Exec("CR"); // call of word 0x26ee '(CR)'
  PRINT("Place disk with the correct", 27); // (.")
  Exec("CR"); // call of word 0x26ee '(CR)'
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" file and press any", 19); // (.")
  Exec("CR"); // call of word 0x26ee '(CR)'
  PRINT("key when ready.", 15); // (.")
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0x70c9: WORD 'VSA>VA' codep=0x224c wordp=0x70cb params=2 returns=2
// ================================================

void VSA_gt_VA() // VSA>VA
{
  W6F77(); // W6F77
  Pop(); // DROP
  _dash_(); // -
  Push(0);
  D16_star_(); // D16*
}


// ================================================
// 0x70d7: WORD 'W70D9' codep=0x224c wordp=0x70d9 params=6 returns=1
// ================================================

void W70D9() // W70D9
{
  unsigned short int a, b, c;
  a = Pop(); // >R
  b = Pop(); // >R
  Push(Read16(regsp)); // DUP
  MOUNT_dash_VSA(); // MOUNT-VSA
  VSA_gt_VA(); // VSA>VA
  _2DUP(); // 2DUP
  Push(pp_W6156); // W6156
  _st_D_ex__gt_(); // <D!>
  Push(b >> 4); // R> 16*
  Push(0);
  D_plus_(); // D+
  Push(pp_W6150); // W6150
  _st_D_ex__gt_(); // <D!>
  Push(pp_MEMSEG); // MEMSEG
  _st__ex__gt_(); // <!>
  Push(pp_MEMOFF); // MEMOFF
  OFF_2(); // OFF_2
  do
  {
    Push(Read16(pp_MEMSEG)); // MEMSEG @
    Push(Read16(pp_MEMOFF)); // MEMOFF @
    Push(pp_W6156); // W6156
    _2_at_(); // 2@
    VA_gt_BLK(); // VA>BLK
    OVER(); // OVER
    Push(0x0400);
    SWAP(); // SWAP
    _dash_(); // -
    Push(0);
    Push(pp_W6150); // W6150
    _2_at_(); // 2@
    Push(pp_W6156); // W6156
    _2_at_(); // 2@
    D_dash_(); // D-
    DMIN(); // DMIN
    Pop(); // DROP
    c = Pop(); // >R
    BLOCK_2(); // BLOCK_2
    Push(Pop() + Pop()); // +
    GetDS(); // @DS
    SWAP(); // SWAP
    Push(a); // I'
    if (Pop() != 0)
    {
      UPDATE(); // UPDATE
    } else
    {
      _2SWAP(); // 2SWAP
    }
    Push(c); // I
    LCMOVE(); // LCMOVE
    Push(c); // I
    Push(pp_MEMOFF); // MEMOFF
    _st__plus__ex__gt_(); // <+!>
    Push(c); // R>
    Push(0);
    Push(pp_W6156); // W6156
    _2_at_(); // 2@
    D_plus_(); // D+
    _2DUP(); // 2DUP
    Push(pp_W6156); // W6156
    _st_D_ex__gt_(); // <D!>
    Push(pp_W6150); // W6150
    _2_at_(); // 2@
    D_eq_(); // D=
  } while(Pop() == 0);
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0x7167: WORD 'MEM>DSK' codep=0x224c wordp=0x7173 params=5 returns=1
// ================================================

void MEM_gt_DSK() // MEM>DSK
{
  Push(1);
  W70D9(); // W70D9
}


// ================================================
// 0x7179: WORD 'MEM<DSK' codep=0x224c wordp=0x7185 params=5 returns=1
// ================================================

void MEM_st_DSK() // MEM<DSK
{
  Push(0);
  W70D9(); // W70D9
}


// ================================================
// 0x718b: WORD 'RECADD' codep=0x718d wordp=0x718d
// ================================================
// 0x718d: mov    bx,sp
// 0x718f: mov    ax,0400
// 0x7192: sub    ax,[bx+02]
// 0x7195: xor    dx,dx
// 0x7197: mov    cx,[bx+04]
// 0x719a: div    cx
// 0x719c: cmp    ax,[bx+06]
// 0x719f: jle    71AB
// 0x71a1: mov    ax,[bx+06]
// 0x71a4: mul    cx
// 0x71a6: add    [bx+02],ax
// 0x71a9: jmp    71CF
// 0x71ab: sub    [bx+06],ax
// 0x71ae: inc    word ptr [bx]
// 0x71b0: mov    word ptr [bx+02],0000
// 0x71b5: mov    ax,0400
// 0x71b8: xor    dx,dx
// 0x71ba: div    cx
// 0x71bc: mov    cx,ax
// 0x71be: mov    ax,[bx+06]
// 0x71c1: xor    dx,dx
// 0x71c3: div    cx
// 0x71c5: add    [bx],ax
// 0x71c7: mov    ax,dx
// 0x71c9: mul    word ptr [bx+04]
// 0x71cc: mov    [bx+02],ax
// 0x71cf: pop    ax
// 0x71d0: pop    cx
// 0x71d1: add    sp,04
// 0x71d4: push   cx
// 0x71d5: push   ax
// 0x71d6: lodsw
// 0x71d7: mov    bx,ax
// 0x71d9: jmp    word ptr [bx]

// ================================================
// 0x71db: WORD 'DOFFBLK' codep=0x71dd wordp=0x71dd
// ================================================
// 0x71dd: pop    ax
// 0x71de: cmp    ax,0090
// 0x71e1: js     71EF
// 0x71e3: mov    bx,[535E] // DIRBLK
// 0x71e7: add    bx,03
// 0x71ea: sub    ax,0090
// 0x71ed: jmp    7213
// 0x71ef: cmp    ax,0060
// 0x71f2: js     7200
// 0x71f4: mov    bx,[535E] // DIRBLK
// 0x71f8: add    bx,02
// 0x71fb: sub    ax,0060
// 0x71fe: jmp    7213
// 0x7200: cmp    ax,0030
// 0x7203: js     720F
// 0x7205: mov    bx,[535E] // DIRBLK
// 0x7209: inc    bx
// 0x720a: sub    ax,0030
// 0x720d: jmp    7213
// 0x720f: mov    bx,[535E] // DIRBLK
// 0x7213: mov    cx,0015
// 0x7216: imul   cx
// 0x7218: push   ax
// 0x7219: push   bx
// 0x721a: lodsw
// 0x721b: mov    bx,ax
// 0x721d: jmp    word ptr [bx]

// ================================================
// 0x721f: WORD 'DFIELD' codep=0x224c wordp=0x7221
// ================================================

void DFIELD() // DFIELD
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  C_co_(); // C,
  CODE(); // (;CODE) inlined assembler code
// 0x7227: call   1649
  Push(Read16(Pop())&0xFF); //  C@
  SWAP(); // SWAP
  DOFFBLK(); // DOFFBLK
  BLOCK_2(); // BLOCK_2
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
}


// ================================================
// 0x7238: WORD 'FILE-NAME' codep=0x7227 wordp=0x7244
// ================================================
// 0x7244: db 0x00 ' '

// ================================================
// 0x7245: WORD 'FILE-TYPE' codep=0x7227 wordp=0x7251
// ================================================
// 0x7251: db 0x0c ' '

// ================================================
// 0x7252: WORD 'FILE-START' codep=0x7227 wordp=0x725e
// ================================================
// 0x725e: db 0x0d ' '

// ================================================
// 0x725f: WORD 'FILE-END' codep=0x7227 wordp=0x726b
// ================================================
// 0x726b: db 0x0f ' '

// ================================================
// 0x726c: WORD 'FILE-#REC' codep=0x7227 wordp=0x7278
// ================================================
// 0x7278: db 0x11 ' '

// ================================================
// 0x7279: WORD 'FILE-RLEN' codep=0x7227 wordp=0x7285
// ================================================
// 0x7285: db 0x13 ' '

// ================================================
// 0x7286: WORD 'FILE-SLEN' codep=0x7227 wordp=0x7292
// ================================================
// 0x7292: db 0x14 ' '

// ================================================
// 0x7293: WORD 'BVSA>OFFBLK' codep=0x7295 wordp=0x7295
// ================================================
// 0x7295: pop    ax
// 0x7296: sub    ax,3E80
// 0x7299: mov    cx,0006
// 0x729c: xor    dx,dx
// 0x729e: shr    ax,1
// 0x72a0: rcr    dl,1
// 0x72a2: loop   729E
// 0x72a4: shl    dx,1
// 0x72a6: shl    dx,1
// 0x72a8: push   dx
// 0x72a9: push   ax
// 0x72aa: lodsw
// 0x72ab: mov    bx,ax
// 0x72ad: jmp    word ptr [bx]

// ================================================
// 0x72af: WORD 'FILE:' codep=0x224c wordp=0x72b9
// ================================================

void FILE_c_() // FILE:
{
  unsigned short int a, b, i, imax;
  Push(pp_LSCAN); // LSCAN
  Push(0x000c);
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  Push(Read16(cc_BL)); // BL
  Exec("WORD"); // call of word 0x1f06 '(WORD)'
  COUNT(); // COUNT
  Push(pp_LSCAN); // LSCAN
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(Read16(user_BLK)); // BLK @
  a = Pop(); // >R
  Push(Read16(user__gt_IN)); // >IN @
  b = Pop(); // >R
  Push(-1);

  i = 0;
  imax = 0x00a3;
  do // (DO)
  {
    Push(pp_LSCAN); // LSCAN
    Push(0x000c);
    Push(i); // I
    Func6("FILE-NAME");
    _dash_TEXT(); // -TEXT
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(i); // I
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  IsUNRAVEL(); // ?UNRAVEL
  Push(b); // R>
  Push(user__gt_IN); // >IN
  _st__ex__gt_(); // <!>
  Push(a); // R>
  Push(user_BLK); // BLK
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x7315: WORD '>FILE' codep=0x224c wordp=0x731f
// ================================================

void _gt_FILE() // >FILE
{
  Func6("FILE-START");
  _2_at_(); // 2@
  SWAP(); // SWAP
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + 1); //  1+
  MEM_gt_DSK(); // MEM>DSK
}


// ================================================
// 0x732f: WORD 'FILE<' codep=0x224c wordp=0x7339
// ================================================

void FILE_st_() // FILE<
{
  Func6("FILE-START");
  _2_at_(); // 2@
  SWAP(); // SWAP
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + 1); //  1+
  MEM_st_DSK(); // MEM<DSK
}


// ================================================
// 0x7349: WORD '?BMOUNT' codep=0x224c wordp=0x734b params=0 returns=0
// ================================================

void IsBMOUNT() // ?BMOUNT
{
  IsAFILE(); // ?AFILE
  if (Pop() == 0) return;
  MOUNTB(); // MOUNTB
}


// ================================================
// 0x7355: WORD '|REC' codep=0x224c wordp=0x7357
// ================================================

void _v_REC() // |REC
{
  IsBMOUNT(); // ?BMOUNT
  BVSA_gt_OFFBLK(); // BVSA>OFFBLK
  Push(4);
  PICK(); // PICK
  Push(pp_LRECORD_n_); // LRECORD#
  _st__ex__gt_(); // <!>
  RECADD(); // RECADD
  BLOCK_1(); // BLOCK_1
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  Push(pp_LRECORD_n_); // LRECORD#
  _st__ex__gt_(); // <!>
  SWAP(); // SWAP
  Push(pp_LFILE_n_); // LFILE#
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x7377: WORD '?-RECINBUF' codep=0x224c wordp=0x7379 params=2 returns=3
// ================================================

void Is_dash_RECINBUF() // ?-RECINBUF
{
  OVER(); // OVER
  Push(Pop()==Read16(pp_LFILE_n_)?1:0); //  LFILE# @ =
  OVER(); // OVER
  Push(Pop()==Read16(pp_LRECORD_n_)?1:0); //  LRECORD# @ =
  Push(Pop() & Pop()); // AND
  Push(!Pop()); //  NOT
}


// ================================================
// 0x738f: WORD '@RECORD' codep=0x224c wordp=0x739b params=2 returns=1
// ================================================

void GetRECORD() // @RECORD
{
  Is_dash_RECINBUF(); // ?-RECINBUF
  if (Pop() != 0)
  {
    OVER(); // OVER
    Func6("FILE-RLEN");
    Push(Read16(Pop())&0xFF); //  C@
    Push(3);
    PICK(); // PICK
    Func6("FILE-START");
    Push(Read16(Pop())); //  @
    _v_REC(); // |REC
    return;
  }
  Pop(); Pop(); // 2DROP
  Push(Read16(pp_LRECORD_n_)); // LRECORD# @
}


// ================================================
// 0x73bd: WORD 'AFIELD' codep=0x224c wordp=0x73c8
// ================================================

void AFIELD() // AFIELD
{
  unsigned short int a, b;
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  ROT(); // ROT
  Push(Read16(regsp)); // DUP
  C_co_(); // C,
  a = Pop(); // >R
  SWAP(); // SWAP
  C_co_(); // C,
  C_co_(); // C,
  Push(a); // I
  Func6("FILE-RLEN");
  Push(Read16(Pop())&0xFF); //  C@
  C_co_(); // C,
  Push(a); // R>
  Func6("FILE-START");
  Push(Read16(Pop())); //  @
  _co_(); // ,
  CODE(); // (;CODE) inlined assembler code
// 0x73ea: call   1649
  b = Pop(); // >R
  Push(Read16(pp_FILE_n_)); // FILE# @
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  Is_dash_RECINBUF(); // ?-RECINBUF
  if (Pop() != 0)
  {
    Push(Read16(b + 3)&0xFF); // I 3 + C@
    Push(Read16(b + 4)); // I 4 + @
    _v_REC(); // |REC
  } else
  {
    Pop(); Pop(); // 2DROP
    Push(Read16(pp_LRECORD_n_)); // LRECORD# @
  }
  Push(Pop() + (Read16(b + 1)&0xFF)); //  R> 1+ C@ +
}


// ================================================
// 0x7423: WORD 'IFLDADR' codep=0x7425 wordp=0x7425
// ================================================
// 0x7425: pop    bx
// 0x7426: xor    ax,ax
// 0x7428: mov    al,[bx+01]
// 0x742b: add    ax,63EF
// 0x742e: push   ax
// 0x742f: lodsw
// 0x7430: mov    bx,ax
// 0x7432: jmp    word ptr [bx]

// ================================================
// 0x7434: WORD 'IFIELD' codep=0x224c wordp=0x743f
// ================================================

void IFIELD() // IFIELD
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  ROT(); // ROT
  C_co_(); // C,
  SWAP(); // SWAP
  C_co_(); // C,
  C_co_(); // C,
  CODE(); // (;CODE) inlined assembler code
// 0x744d: call   1649
  IFLDADR(); // IFLDADR
}


// ================================================
// 0x7454: WORD 'INST-SIB' codep=0x744d wordp=0x7460
// ================================================
IFieldType INST_dash_SIB = {DIRECTORYIDX, 0x00, 0x03};

// ================================================
// 0x7463: WORD 'INST-PREV' codep=0x744d wordp=0x746f
// ================================================
IFieldType INST_dash_PREV = {DIRECTORYIDX, 0x03, 0x03};

// ================================================
// 0x7472: WORD 'INST-OFF' codep=0x744d wordp=0x747e
// ================================================
IFieldType INST_dash_OFF = {DIRECTORYIDX, 0x06, 0x03};

// ================================================
// 0x7481: WORD 'INST-CLASS' codep=0x744d wordp=0x748d
// ================================================
IFieldType INST_dash_CLASS = {DIRECTORYIDX, 0x09, 0x01};

// ================================================
// 0x7490: WORD 'INST-SPECIES' codep=0x744d wordp=0x749c
// ================================================
IFieldType INST_dash_SPECIES = {DIRECTORYIDX, 0x0a, 0x01};

// ================================================
// 0x749f: WORD 'INST-QTY' codep=0x744d wordp=0x74ab
// ================================================
IFieldType INST_dash_QTY = {DIRECTORYIDX, 0x0b, 0x02};

// ================================================
// 0x74ae: WORD 'INST-X' codep=0x744d wordp=0x74b9
// ================================================
IFieldType INST_dash_X = {DIRECTORYIDX, 0x0d, 0x02};

// ================================================
// 0x74bc: WORD 'INST-Y' codep=0x744d wordp=0x74c7
// ================================================
IFieldType INST_dash_Y = {DIRECTORYIDX, 0x0f, 0x02};

// ================================================
// 0x74ca: WORD '!INST-SIB' codep=0x224c wordp=0x74cc params=2 returns=0
// ================================================

void StoreINST_dash_SIB() // !INST-SIB
{
  Push(0x63ef+INST_dash_SIB.offset); // INST-SIB<IFIELD>
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0x74d2: WORD '!INST-PREV' codep=0x224c wordp=0x74d4 params=2 returns=0
// ================================================

void StoreINST_dash_PREV() // !INST-PREV
{
  Push(0x63ef+INST_dash_PREV.offset); // INST-PREV<IFIELD>
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0x74da: WORD '!INST-OFF' codep=0x224c wordp=0x74dc params=2 returns=0
// ================================================

void StoreINST_dash_OFF() // !INST-OFF
{
  Push(0x63ef+INST_dash_OFF.offset); // INST-OFF<IFIELD>
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0x74e2: WORD '!INST-CLASS' codep=0x224c wordp=0x74e4 params=1 returns=0
// ================================================

void StoreINST_dash_CLASS() // !INST-CLASS
{
  Push(0x63ef+INST_dash_CLASS.offset); // INST-CLASS<IFIELD>
  C_ex_(); // C!
}


// ================================================
// 0x74ea: WORD '!INST-SPECIES' codep=0x224c wordp=0x74f6 params=1 returns=0
// ================================================

void StoreINST_dash_SPECIES() // !INST-SPECIES
{
  Push(0x63ef+INST_dash_SPECIES.offset); // INST-SPECIES<IFIELD>
  C_ex_(); // C!
}


// ================================================
// 0x74fc: WORD '@INST-SIB' codep=0x224c wordp=0x74fe params=0 returns=2
// ================================================

void GetINST_dash_SIB() // @INST-SIB
{
  Push(0x63ef+INST_dash_SIB.offset); // INST-SIB<IFIELD>
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0x7504: WORD '@INST-PREV' codep=0x224c wordp=0x7506 params=0 returns=2
// ================================================

void GetINST_dash_PREV() // @INST-PREV
{
  Push(0x63ef+INST_dash_PREV.offset); // INST-PREV<IFIELD>
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0x750c: WORD '@INST-OFF' codep=0x224c wordp=0x750e params=0 returns=2
// ================================================

void GetINST_dash_OFF() // @INST-OFF
{
  Push(0x63ef+INST_dash_OFF.offset); // INST-OFF<IFIELD>
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0x7514: WORD '@INST-CLASS' codep=0x224c wordp=0x7520 params=0 returns=1
// ================================================

void GetINST_dash_CLASS() // @INST-CLASS
{
  Push(Read16(0x63ef+INST_dash_CLASS.offset)&0xFF); // INST-CLASS<IFIELD> C@
}


// ================================================
// 0x7526: WORD '@INST-SPECIES' codep=0x224c wordp=0x7532 params=0 returns=1
// ================================================

void GetINST_dash_SPECIES() // @INST-SPECIES
{
  Push(Read16(0x63ef+INST_dash_SPECIES.offset)&0xFF); // INST-SPECIES<IFIELD> C@
}


// ================================================
// 0x7538: WORD '>C' codep=0x753f wordp=0x753f params=2 returns=0
// ================================================
// 0x753f: mov    bx,[54B0] // CXSP
// 0x7543: pop    ax
// 0x7544: mov    [bx+02],al
// 0x7547: pop    word ptr [bx]
// 0x7549: sub    word ptr [54B0],03 // CXSP
// 0x754e: lodsw
// 0x754f: mov    bx,ax
// 0x7551: jmp    word ptr [bx]

// ================================================
// 0x7553: WORD 'C>' codep=0x755a wordp=0x755a params=0 returns=2
// ================================================
// 0x755a: add    word ptr [54B0],03 // CXSP
// 0x755f: mov    bx,[54B0] // CXSP
// 0x7563: push   word ptr [bx]
// 0x7565: xor    ax,ax
// 0x7567: mov    al,[bx+02]
// 0x756a: push   ax
// 0x756b: lodsw
// 0x756c: mov    bx,ax
// 0x756e: jmp    word ptr [bx]

// ================================================
// 0x7570: WORD 'CI' codep=0x7577 wordp=0x7577 params=0 returns=2
// ================================================
// 0x7577: mov    bx,[54B0] // CXSP
// 0x757b: push   word ptr [bx+03]
// 0x757e: xor    ax,ax
// 0x7580: mov    al,[bx+05]
// 0x7583: push   ax
// 0x7584: lodsw
// 0x7585: mov    bx,ax
// 0x7587: jmp    word ptr [bx]

// ================================================
// 0x7589: WORD 'CDROP' codep=0x224c wordp=0x7593 params=0 returns=0
// ================================================

void CDROP() // CDROP
{
  C_gt_(); // C>
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0x7599: WORD 'CI'' codep=0x224c wordp=0x75a1 params=0 returns=2
// ================================================

void CI_i_() // CI'
{
  C_gt_(); // C>
  CI(); // CI
  _2SWAP(); // 2SWAP
  _gt_C(); // >C
}


// ================================================
// 0x75ab: WORD 'CJ' codep=0x224c wordp=0x75b2 params=0 returns=2
// ================================================

void CJ() // CJ
{
  C_gt_(); // C>
  CI_i_(); // CI'
  _2SWAP(); // 2SWAP
  _gt_C(); // >C
}


// ================================================
// 0x75bc: WORD 'COVER' codep=0x224c wordp=0x75c6 params=0 returns=0
// ================================================

void COVER() // COVER
{
  CI_i_(); // CI'
  _gt_C(); // >C
}


// ================================================
// 0x75cc: WORD 'CDEPTH' codep=0x75d7 wordp=0x75d7 params=0 returns=1
// ================================================
// 0x75d7: mov    ax,6398
// 0x75da: sub    ax,[54B0] // CXSP
// 0x75de: mov    cx,0003
// 0x75e1: div    cl
// 0x75e3: push   ax
// 0x75e4: lodsw
// 0x75e5: mov    bx,ax
// 0x75e7: jmp    word ptr [bx]

// ================================================
// 0x75e9: WORD '?NULL' codep=0x224c wordp=0x75f3 params=0 returns=1
// ================================================

void IsNULL() // ?NULL
{
  CI(); // CI
  D0_eq_(); // D0=
}


// ================================================
// 0x75f9: WORD '?-NULL' codep=0x224c wordp=0x7604 params=0 returns=1
// ================================================

void Is_dash_NULL() // ?-NULL
{
  IsNULL(); // ?NULL
  Push(!Pop()); //  NOT
}


// ================================================
// 0x760a: WORD '?CHILD' codep=0x224c wordp=0x7615 params=0 returns=1
// ================================================

void IsCHILD() // ?CHILD
{
  GetINST_dash_OFF(); // @INST-OFF
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
}


// ================================================
// 0x761d: WORD '?ONLY' codep=0x224c wordp=0x761f params=0 returns=1
// ================================================

void IsONLY() // ?ONLY
{
  CI(); // CI
  GetINST_dash_SIB(); // @INST-SIB
  D_eq_(); // D=
}


// ================================================
// 0x7627: WORD '!IADDR' codep=0x224c wordp=0x7632 params=2 returns=0
// ================================================

void StoreIADDR() // !IADDR
{
  Push(pp_IADDR); // IADDR
  _st_1_dot_5_ex__gt_(); // <1.5!>
}


// ================================================
// 0x7638: WORD '@[IOFF]' codep=0x763a wordp=0x763a
// ================================================
// 0x763a: mov    ax,[558C] // [IOFF]
// 0x763e: push   ax
// 0x763f: lodsw
// 0x7640: mov    bx,ax
// 0x7642: jmp    word ptr [bx]

// ================================================
// 0x7644: WORD 'IBFR>ICACHE' codep=0x224c wordp=0x7646 params=0 returns=0
// ================================================

void IBFR_gt_ICACHE() // IBFR>ICACHE
{
  GetDS(); // @DS
  Push(pp_IBFR); // IBFR
  Push(Read16(pp__do_SEG)); // $SEG @
  Push(Read16(pp__do_OLD)); // $OLD @
  Push(Read16(pp_LENINST)); // LENINST @
  LCMOVE(); // LCMOVE
}


// ================================================
// 0x765a: WORD 'ICACHE>IBFR' codep=0x224c wordp=0x765c params=0 returns=0
// ================================================

void ICACHE_gt_IBFR() // ICACHE>IBFR
{
  Push(Read16(pp__do_SEG)); // $SEG @
  Push(Read16(pp__do_OLD)); // $OLD @
  GetDS(); // @DS
  Push(pp_IBFR); // IBFR
  Push(Read16(pp_LENINST)); // LENINST @
  LCMOVE(); // LCMOVE
}


// ================================================
// 0x7670: WORD 'BVA>BUF' codep=0x224c wordp=0x7672 params=2 returns=2
// ================================================

void BVA_gt_BUF() // BVA>BUF
{
  IsBMOUNT(); // ?BMOUNT
  VA_gt_BUF(); // VA>BUF
}


// ================================================
// 0x7678: WORD 'PRIORITIZE' codep=0x7684 wordp=0x7684
// ================================================
// 0x7684: pop    ax
// 0x7685: or     ax,ax
// 0x7687: jz     76B0
// 0x7689: mov    bx,ax
// 0x768b: sub    bx,02
// 0x768e: push   es
// 0x768f: push   word ptr [54EA] // LOISEG
// 0x7693: pop    es
// 0x7694: call   2F36
// 0x7697: push   word ptr [54F2] // LOCSEC
// 0x769b: pop    es
// 0x769c: call   2F36
// 0x769f: shr    bx,1
// 0x76a1: shr    ax,1
// 0x76a3: push   word ptr [54EE] // HIISEG
// 0x76a7: pop    es
// 0x76a8: call   49CA
// 0x76ab: pop    es
// 0x76ac: shl    bx,1
// 0x76ae: mov    ax,bx
// 0x76b0: push   ax
// 0x76b1: lodsw
// 0x76b2: mov    bx,ax
// 0x76b4: jmp    word ptr [bx]

// ================================================
// 0x76b6: WORD 'ITLEN' codep=0x224c wordp=0x76b8
// ================================================

void ITLEN() // ITLEN
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() + 9)&0xFF); //  9 + C@
  Push(Read16(regsp)); // DUP
  Push(Pop()==0x0030?1:0); //  0x0030 =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push((Read16(Pop() + 0x000b)&0xFF) + 1); //  0x000b + C@ 1+
  } else
  {
    SWAP(); // SWAP
    Pop(); // DROP
    Func6("FILE-SLEN");
    Push(Read16(Pop())&0xFF); //  C@
  }
  Push(Pop() + Read16(cc_IHEADLEN)); //  IHEADLEN +
}


// ================================================
// 0x76ea: WORD 'POINT>I' codep=0x224c wordp=0x76ec
// ================================================

void POINT_gt_I() // POINT>I
{
  Push(pp__bo_IOFF_bc_); // [IOFF]
  _st__ex__gt_(); // <!>
  Push(Read16(pp__do_SEG)); // $SEG @
  Push(Read16(pp_LOCSEC)); // LOCSEC @
  Get_bo_IOFF_bc_(); // @[IOFF]
  L_at_(); // L@
  Push(Read16(regsp)); // DUP
  Push(pp__do_OLD); // $OLD
  _st__ex__gt_(); // <!>
  L_at_(); // L@
  Push(pp_LENINST); // LENINST
  _st__ex__gt_(); // <!>
  Push(Read16(pp_LOISEG)); // LOISEG @
  Get_bo_IOFF_bc_(); // @[IOFF]
  L_at_(); // L@
  Push(Read16(pp_HIISEG)); // HIISEG @
  Get_bo_IOFF_bc_(); // @[IOFF]
  Push(Pop() >> 1); //  2/
  LC_at_(); // LC@
  StoreIADDR(); // !IADDR
}


// ================================================
// 0x771e: WORD 'W7720' codep=0x224c wordp=0x7720 params=2 returns=1
// ================================================

void W7720() // W7720
{
  unsigned short int a;
  Push(Read16(pp_QTYINST)); // QTYINST @
  if (Pop() != 0)
  {
    SWAP(); // SWAP
    a = Pop(); // >R
    Push(Read16(pp_LOISEG)); // LOISEG @
    Push(0);
    Push(Read16(pp_QTYINST)); // QTYINST @
    Push(a); // I
    LWSCAN(); // LWSCAN
    if (Pop() != 0)
    {
      Push(Read16(regsp)); // DUP
      Push(Pop() >> 1); //  2/
      Push(Read16(pp_HIISEG)); // HIISEG @
      SWAP(); // SWAP
      LC_at_(); // LC@
      ROT(); // ROT
      Push((Pop()==Pop())?1:0); // =
      Push(!Pop()); //  NOT
      if (Pop() != 0)
      {
        Push(Read16(pp_LOISEG)); // LOISEG @
        SWAP(); // SWAP
        Push(Pop() + 2); //  2+
        Push(Read16(pp_QTYINST)); // QTYINST @
        OVER(); // OVER
        Push(Pop() >> 1); //  2/
        _dash_(); // -
        Push(a); // I
        LWSCAN(); // LWSCAN
      } else
      {
        Push(1);
      }
    } else
    {
      Pop(); // DROP
      Push(0);
    }
    Push(a); // R>
    Pop(); // DROP
    return;
  }
  Pop(); Pop(); // 2DROP
  Push(0);
}


// ================================================
// 0x7786: WORD '?UPDINST' codep=0x224c wordp=0x7788 params=2 returns=1
// ================================================

void IsUPDINST() // ?UPDINST
{
  Push(Pop() + 2); //  2+
  LC_at_(); // LC@
}


// ================================================
// 0x778e: WORD '?IN$LOC' codep=0x224c wordp=0x7790 params=1 returns=2
// ================================================

void IsIN_do_LOC() // ?IN$LOC
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Read16(pp_LOCSEC)); // LOCSEC @
  Push(0);
  Push(Read16(pp_QTYINST)); // QTYINST @
  Push(a); // R>
  LWSCAN(); // LWSCAN
}


// ================================================
// 0x77a2: WORD '?UPDATE>CACHE' codep=0x224c wordp=0x77a4 params=0 returns=0
// ================================================

void IsUPDATE_gt_CACHE() // ?UPDATE>CACHE
{
  Push(Read16(pp_IBFR + 2)&0xFF); // IBFR 2+ C@
  if (Pop() == 0) return;
  IBFR_gt_ICACHE(); // IBFR>ICACHE
  Push(0);
  Push(pp_IBFR + 2); // IBFR 2+
  _st_C_ex__gt_(); // <C!>
  Push2Words("NULL");
  StoreIADDR(); // !IADDR
}


// ================================================
// 0x77be: WORD '?UPD>DISK' codep=0x224c wordp=0x77c0 params=0 returns=0
// ================================================

void IsUPD_gt_DISK() // ?UPD>DISK
{
  Push(Read16(pp__do_SEG)); // $SEG @
  Push(Read16(pp__do_OLD)); // $OLD @
  IsUPDINST(); // ?UPDINST
  if (Pop() == 0) return;
  Push(Read16(pp__do_SEG)); // $SEG @
  Push(Read16(pp__do_OLD) + 3); // $OLD @ 3 +
  GetDS(); // @DS
  Push(pp_IADDR); // IADDR
  _1_dot_5_at_(); // 1.5@
  BVA_gt_BUF(); // BVA>BUF
  IsUPDATE(); // ?UPDATE
  Push(Read16(pp_LENINST) - 3); // LENINST @ 3 -
  LCMOVE(); // LCMOVE
  Push(0);
  Push(Read16(pp__do_SEG)); // $SEG @
  Push(Read16(pp__do_OLD) + 2); // $OLD @ 2+
  LC_ex_(); // LC!
}


// ================================================
// 0x77fe: WORD '-LINST' codep=0x224c wordp=0x7800
// ================================================

void _dash_LINST() // -LINST
{
  Push((Read16(pp_QTYINST) - 1) * 2); // QTYINST @ 1- 2*
  POINT_gt_I(); // POINT>I
  IsUPD_gt_DISK(); // ?UPD>DISK
  Push(-1);
  Push(pp_QTYINST); // QTYINST
  _st__plus__ex__gt_(); // <+!>
  Push(-Read16(pp_LENINST)); // LENINST @ NEGATE
  Push(pp__do_FREE); // $FREE
  _st__plus__ex__gt_(); // <+!>
  Push(0);
  Push(Read16(pp_LOISEG)); // LOISEG @
  Get_bo_IOFF_bc_(); // @[IOFF]
  L_ex_(); // L!
  Push(0x270f);
  Push(Read16(pp_LOCSEC)); // LOCSEC @
  Get_bo_IOFF_bc_(); // @[IOFF]
  L_ex_(); // L!
  Push(Read16(pp__do_OLD)); // $OLD @
  Push(pp__do_NEW); // $NEW
  _st__ex__gt_(); // <!>
  while(1)
  {
    Push(Read16(pp__do_OLD) + Read16(pp_LENINST)); // $OLD @ LENINST @ +
    IsIN_do_LOC(); // ?IN$LOC
    if (Pop() == 0) return;
    POINT_gt_I(); // POINT>I
    Push(Read16(pp__do_SEG)); // $SEG @
    Push(Read16(pp__do_OLD)); // $OLD @
    OVER(); // OVER
    Push(Read16(pp__do_NEW)); // $NEW @
    Push(Read16(pp_LENINST)); // LENINST @
    LCMOVE(); // LCMOVE
    Push(Read16(pp__do_NEW)); // $NEW @
    Push(Read16(pp_LOCSEC)); // LOCSEC @
    Get_bo_IOFF_bc_(); // @[IOFF]
    L_ex_(); // L!
    Push(Read16(pp_LENINST)); // LENINST @
    Push(pp__do_NEW); // $NEW
    _st__plus__ex__gt_(); // <+!>
  }
}


// ================================================
// 0x787a: WORD '?$COLLECT' codep=0x224c wordp=0x787c params=0 returns=0
// ================================================

void Is_do_COLLECT() // ?$COLLECT
{
  while(1)
  {
    Push(Read16(pp__do_MAX) - Read16(pp__do_FREE)); // $MAX @ $FREE @ -
    Push(0x0111);
    _st_(); // <
    if (Pop() == 0) return;
    _dash_LINST(); // -LINST
  }
}


// ================================================
// 0x7898: WORD '1BTN' codep=0x73ea wordp=0x78a1
// ================================================
LoadDataType _1BTN = {BUTTONSIDX, 0x00, 0x0c, 0x49, 0x6858};

// ================================================
// 0x78a7: WORD 'AFIELD:' codep=0x224c wordp=0x78b3
// ================================================

void AFIELD_c_() // AFIELD:
{
  unsigned short int a;
  HEAD_c_(); // HEAD:
  Push(0x73ea);
  _co_(); // ,
  ROT(); // ROT
  Push(Read16(regsp)); // DUP
  C_co_(); // C,
  a = Pop(); // >R
  SWAP(); // SWAP
  C_co_(); // C,
  C_co_(); // C,
  Push(a); // I
  Func6("FILE-RLEN");
  Push(Read16(Pop())&0xFF); //  C@
  C_co_(); // C,
  Push(a); // R>
  Func6("FILE-START");
  Push(Read16(Pop())); //  @
  _co_(); // ,
}


// ================================================
// 0x78db: WORD 'IFIELD:' codep=0x224c wordp=0x78e7
// ================================================

void IFIELD_c_() // IFIELD:
{
  HEAD_c_(); // HEAD:
  Push(0x744d);
  _co_(); // ,
  ROT(); // ROT
  C_co_(); // C,
  SWAP(); // SWAP
  C_co_(); // C,
  C_co_(); // C,
}


// ================================================
// 0x78fb: WORD '#BTN' codep=0x73ea wordp=0x7904
// ================================================
LoadDataType _n_BTN = {BUTTONSIDX, 0x48, 0x01, 0x49, 0x6858};

// ================================================
// 0x790a: WORD 'DISK>IBFR' codep=0x224c wordp=0x790c
// ================================================

void DISK_gt_IBFR() // DISK>IBFR
{
  Is_do_COLLECT(); // ?$COLLECT
  _2DUP(); // 2DUP
  StoreIADDR(); // !IADDR
  BVA_gt_BUF(); // BVA>BUF
  Push(Read16(regsp)); // DUP
  ITLEN(); // ITLEN
  Push(Read16(regsp)); // DUP
  Push(Pop() + 3); //  3 +
  Push(Read16(regsp)); // DUP
  Push(pp_IBFR); // IBFR
  Store_3(); // !_3
  Push(pp_LENINST); // LENINST
  _st__ex__gt_(); // <!>
  Push(pp_IBFR + 3); // IBFR 3 +
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(0);
  Push(pp_IBFR + 2); // IBFR 2+
  _st_C_ex__gt_(); // <C!>
  Push(Read16(pp_QTYINST) * 2); // QTYINST @ 2*
  Push(pp__bo_IOFF_bc_); // [IOFF]
  _st__ex__gt_(); // <!>
  Push(1);
  Push(pp_QTYINST); // QTYINST
  _st__plus__ex__gt_(); // <+!>
  Push(pp_IADDR); // IADDR
  _1_dot_5_at_(); // 1.5@
  Push(Read16(pp_HIISEG)); // HIISEG @
  Get_bo_IOFF_bc_(); // @[IOFF]
  Push(Pop() >> 1); //  2/
  LC_ex_(); // LC!
  Push(Read16(pp_LOISEG)); // LOISEG @
  Get_bo_IOFF_bc_(); // @[IOFF]
  L_ex_(); // L!
  Push(Read16(pp__do_FREE)); // $FREE @
  Push(pp__do_OLD); // $OLD
  _st__ex__gt_(); // <!>
  Push(Read16(pp_LENINST)); // LENINST @
  Push(pp__do_FREE); // $FREE
  _st__plus__ex__gt_(); // <+!>
  Push(Read16(pp__do_OLD)); // $OLD @
  Push(Read16(pp_LOCSEC)); // LOCSEC @
  Get_bo_IOFF_bc_(); // @[IOFF]
  L_ex_(); // L!
  IBFR_gt_ICACHE(); // IBFR>ICACHE
}


// ================================================
// 0x7980: WORD 'SET-CURRENT' codep=0x224c wordp=0x798c params=0 returns=0
// ================================================

void SET_dash_CURRENT() // SET-CURRENT
{
  CDEPTH(); // CDEPTH
  _0_gt_(); // 0>
  if (Pop() == 0) return;
  IsUPDATE_gt_CACHE(); // ?UPDATE>CACHE
  Is_dash_NULL(); // ?-NULL
  if (Pop() == 0) return;
  CI(); // CI
  W7720(); // W7720
  if (Pop() != 0)
  {
    PRIORITIZE(); // PRIORITIZE
    POINT_gt_I(); // POINT>I
    ICACHE_gt_IBFR(); // ICACHE>IBFR
  } else
  {
    CI(); // CI
    DISK_gt_IBFR(); // DISK>IBFR
  }
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x79c0: WORD 'ICLOSE' codep=0x224c wordp=0x79cb params=0 returns=0
// ================================================

void ICLOSE() // ICLOSE
{
  IsUPDATE_gt_CACHE(); // ?UPDATE>CACHE
  CDROP(); // CDROP
  COVER(); // COVER
  Is_dash_NULL(); // ?-NULL
  if (Pop() != 0)
  {
    SET_dash_CURRENT(); // SET-CURRENT
    GetINST_dash_OFF(); // @INST-OFF
  } else
  {
    Push2Words("NULL");
  }
  Push(pp_W6162); // W6162
  _st_1_dot_5_ex__gt_(); // <1.5!>
  CDROP(); // CDROP
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0x79eb: WORD '>C+S' codep=0x224c wordp=0x79f4 params=2 returns=0
// ================================================

void _gt_C_plus_S() // >C+S
{
  _gt_C(); // >C
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0x79fa: WORD '@>C+S' codep=0x224c wordp=0x7a04 params=1 returns=0
// ================================================

void Get_gt_C_plus_S() // @>C+S
{
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7a0a: WORD 'IOPEN' codep=0x224c wordp=0x7a14 params=0 returns=0
// ================================================

void IOPEN() // IOPEN
{
  GetINST_dash_OFF(); // @INST-OFF
  _2DUP(); // 2DUP
  Push(pp_W6162); // W6162
  _st_1_dot_5_ex__gt_(); // <1.5!>
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7a20: WORD 'CCLR' codep=0x224c wordp=0x7a29 params=0 returns=0
// ================================================

void CCLR() // CCLR
{
  IsUPDATE_gt_CACHE(); // ?UPDATE>CACHE
  Push(Read16(cc_END_dash_CX)); // END-CX
  Push(pp_CXSP); // CXSP
  _st__ex__gt_(); // <!>
  Push(pp_CXS); // CXS
  Push(0x0078);
  Push(0);
  FILL_1(); // FILL_1
}


// ================================================
// 0x7a3d: WORD '1STCHILD' codep=0x224c wordp=0x7a3f params=0 returns=2
// ================================================

void _1STCHILD() // 1STCHILD
{
  Push(pp_W6162); // W6162
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0x7a45: WORD '?LAST' codep=0x224c wordp=0x7a4f params=0 returns=1
// ================================================

void IsLAST() // ?LAST
{
  GetINST_dash_SIB(); // @INST-SIB
  _1STCHILD(); // 1STCHILD
  D_eq_(); // D=
}


// ================================================
// 0x7a57: WORD '?FIRST' codep=0x224c wordp=0x7a62 params=0 returns=1
// ================================================

void IsFIRST() // ?FIRST
{
  CI(); // CI
  _1STCHILD(); // 1STCHILD
  D_eq_(); // D=
}


// ================================================
// 0x7a6a: WORD '>C+' codep=0x224c wordp=0x7a72 params=2 returns=0
// ================================================

void _gt_C_plus_() // >C+
{
  SET_dash_CURRENT(); // SET-CURRENT
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  _gt_C(); // >C
}


// ================================================
// 0x7a7c: WORD 'INEXT' codep=0x224c wordp=0x7a86 params=0 returns=0
// ================================================

void INEXT() // INEXT
{
  Is_dash_NULL(); // ?-NULL
  if (Pop() == 0) return;
  GetINST_dash_SIB(); // @INST-SIB
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7a94: WORD 'IPREV' codep=0x224c wordp=0x7a9e params=0 returns=0
// ================================================

void IPREV() // IPREV
{
  Is_dash_NULL(); // ?-NULL
  if (Pop() == 0) return;
  GetINST_dash_PREV(); // @INST-PREV
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7aac: WORD 'IFIRST' codep=0x224c wordp=0x7ab7 params=0 returns=0
// ================================================

void IFIRST() // IFIRST
{
  CDROP(); // CDROP
  _1STCHILD(); // 1STCHILD
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7abf: WORD 'ILAST' codep=0x224c wordp=0x7ac9 params=0 returns=0
// ================================================

void ILAST() // ILAST
{
  IFIRST(); // IFIRST
  IPREV(); // IPREV
}


// ================================================
// 0x7acf: WORD 'VCLR' codep=0x224c wordp=0x7ad8 params=0 returns=0
// ================================================

void VCLR() // VCLR
{
  Push(Read16(cc_END_dash_V)); // END-V
  Push(pp_VSP); // VSP
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x7ae0: WORD '>V' codep=0x7ae7 wordp=0x7ae7 params=1 returns=0
// ================================================
// 0x7ae7: mov    bx,[54B4] // VSP
// 0x7aeb: pop    word ptr [bx]
// 0x7aed: sub    word ptr [54B4],02 // VSP
// 0x7af2: lodsw
// 0x7af3: mov    bx,ax
// 0x7af5: jmp    word ptr [bx]

// ================================================
// 0x7af7: WORD 'V>' codep=0x7afe wordp=0x7afe params=0 returns=1
// ================================================
// 0x7afe: add    word ptr [54B4],02 // VSP
// 0x7b03: mov    bx,[54B4] // VSP
// 0x7b07: push   word ptr [bx]
// 0x7b09: lodsw
// 0x7b0a: mov    bx,ax
// 0x7b0c: jmp    word ptr [bx]

// ================================================
// 0x7b0e: WORD 'VI' codep=0x7b15 wordp=0x7b15 params=0 returns=1
// ================================================
// 0x7b15: mov    bx,[54B4] // VSP
// 0x7b19: push   word ptr [bx+02]
// 0x7b1c: lodsw
// 0x7b1d: mov    bx,ax
// 0x7b1f: jmp    word ptr [bx]

// ================================================
// 0x7b21: WORD 'IC>DSK' codep=0x224c wordp=0x7b23 params=0 returns=0
// ================================================
// orphan

void IC_gt_DSK() // IC>DSK
{
  unsigned short int i, imax;
  IsUPDATE_gt_CACHE(); // ?UPDATE>CACHE
  Push(Read16(pp_QTYINST)); // QTYINST @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(i * 2); // I 2*
    POINT_gt_I(); // POINT>I
    IsUPD_gt_DISK(); // ?UPD>DISK
    i++;
  } while(i<imax); // (LOOP)

  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0x7b43: WORD 'SAVE-BUFFERS' codep=0x224c wordp=0x7b4f params=0 returns=0
// ================================================

void SAVE_dash_BUFFERS() // SAVE-BUFFERS
{
  SAVE_dash_BUFFERS2(); // SAVE-BUFFERS2
  INIT(); // INIT
}


// ================================================
// 0x7b55: WORD 'FLUSH_2' codep=0x224c wordp=0x7b5f params=0 returns=0
// ================================================

void FLUSH_2() // FLUSH_2
{
  SAVE_dash_BUFFERS(); // SAVE-BUFFERS
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
}


// ================================================
// 0x7b65: WORD 'IINSERT' codep=0x224c wordp=0x7b71 params=4 returns=0
// ================================================

void IINSERT() // IINSERT
{
  _gt_C_plus_S(); // >C+S
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    GetINST_dash_OFF(); // @INST-OFF
    _2SWAP(); // 2SWAP
    StoreINST_dash_OFF(); // !INST-OFF
    IOPEN(); // IOPEN
    StoreINST_dash_SIB(); // !INST-SIB
    CI(); // CI
    INEXT(); // INEXT
    GetINST_dash_PREV(); // @INST-PREV
    _2SWAP(); // 2SWAP
    StoreINST_dash_PREV(); // !INST-PREV
    IPREV(); // IPREV
    StoreINST_dash_PREV(); // !INST-PREV
    CI(); // CI
    IPREV(); // IPREV
    StoreINST_dash_SIB(); // !INST-SIB
  } else
  {
    StoreINST_dash_OFF(); // !INST-OFF
    IOPEN(); // IOPEN
    CI(); // CI
    StoreINST_dash_SIB(); // !INST-SIB
    CI(); // CI
    StoreINST_dash_PREV(); // !INST-PREV
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7bad: WORD '<INSERT' codep=0x224c wordp=0x7bb9 params=4 returns=0
// ================================================

void _st_INSERT() // <INSERT
{
  _gt_C_plus_S(); // >C+S
  GetINST_dash_PREV(); // @INST-PREV
  _2SWAP(); // 2SWAP
  StoreINST_dash_PREV(); // !INST-PREV
  CI(); // CI
  IPREV(); // IPREV
  StoreINST_dash_SIB(); // !INST-SIB
  StoreINST_dash_PREV(); // !INST-PREV
  CI(); // CI
  IPREV(); // IPREV
  StoreINST_dash_SIB(); // !INST-SIB
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7bd3: WORD '>INSERT' codep=0x224c wordp=0x7bdf params=4 returns=0
// ================================================

void _gt_INSERT() // >INSERT
{
  _gt_C_plus_S(); // >C+S
  GetINST_dash_SIB(); // @INST-SIB
  ICLOSE(); // ICLOSE
  _st_INSERT(); // <INSERT
}


// ================================================
// 0x7be9: WORD 'IEXTRACT' codep=0x224c wordp=0x7bf5 params=0 returns=2
// ================================================

void IEXTRACT() // IEXTRACT
{
  CI(); // CI
  IsONLY(); // ?ONLY
  if (Pop() != 0)
  {
    ICLOSE(); // ICLOSE
    Push2Words("NULL");
    StoreINST_dash_OFF(); // !INST-OFF
    IOPEN(); // IOPEN
    return;
  }
  IsFIRST(); // ?FIRST
  if (Pop() != 0)
  {
    GetINST_dash_PREV(); // @INST-PREV
    GetINST_dash_SIB(); // @INST-SIB
    ICLOSE(); // ICLOSE
    StoreINST_dash_OFF(); // !INST-OFF
    IOPEN(); // IOPEN
    StoreINST_dash_PREV(); // !INST-PREV
    CI(); // CI
    IPREV(); // IPREV
    StoreINST_dash_SIB(); // !INST-SIB
    INEXT(); // INEXT
    return;
  }
  GetINST_dash_SIB(); // @INST-SIB
  IPREV(); // IPREV
  StoreINST_dash_SIB(); // !INST-SIB
  CI(); // CI
  INEXT(); // INEXT
  StoreINST_dash_PREV(); // !INST-PREV
}


// ================================================
// 0x7c35: WORD 'NEWSPACE' codep=0x224c wordp=0x7c37 params=0 returns=2
// ================================================

void NEWSPACE() // NEWSPACE
{
  Push2Words("VANEWSPACE");
  VA_gt_BUF(); // VA>BUF
}


// ================================================
// 0x7c3d: WORD '@NEWSPACE' codep=0x224c wordp=0x7c49 params=0 returns=3
// ================================================

void GetNEWSPACE() // @NEWSPACE
{
  NEWSPACE(); // NEWSPACE
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0x7c4f: WORD '!NEWSPACE' codep=0x224c wordp=0x7c5b params=1 returns=0
// ================================================

void StoreNEWSPACE() // !NEWSPACE
{
  NEWSPACE(); // NEWSPACE
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0x7c61: WORD '+!NEWSPACE' codep=0x224c wordp=0x7c63 params=0 returns=1
// ================================================

void _plus__ex_NEWSPACE() // +!NEWSPACE
{
  GetNEWSPACE(); // @NEWSPACE
  ROT(); // ROT
  M_plus_(); // M+
  StoreNEWSPACE(); // !NEWSPACE
}


// ================================================
// 0x7c6d: WORD 'MAXSPACE' codep=0x224c wordp=0x7c79 params=0 returns=2
// ================================================

void MAXSPACE() // MAXSPACE
{
  Push2Words("VANEWSPACE");
  Push(0x0003); Push(0x0000);
  D_plus_(); // D+
  VA_gt_BUF(); // VA>BUF
}


// ================================================
// 0x7c87: WORD 'BLKSPACE' codep=0x224c wordp=0x7c89 params=0 returns=2
// ================================================

void BLKSPACE() // BLKSPACE
{
  GetNEWSPACE(); // @NEWSPACE
  VA_gt_BLK(); // VA>BLK
  Pop(); // DROP
  Push(0x0400);
  SWAP(); // SWAP
  _dash_(); // -
}


// ================================================
// 0x7c99: WORD 'FLD@' codep=0x4a4f wordp=0x7ca2
// ================================================

void FLD_at_() // FLD@
{
  switch(Pop()) // FLD@
  {
  case 1:
    Push(Read8(Pop())&0xFF); // C@
    break;
  case 2:
    Push(Read16(Pop())); // @
    break;
  case 3:
    _1_dot_5_at_(); // 1.5@
    break;
  default:
    Push(Read16(Pop())); // @
    break;

  }
}

// ================================================
// 0x7cb2: WORD 'FLD!' codep=0x4a4f wordp=0x7cbb
// ================================================

void FLD_ex_() // FLD!
{
  switch(Pop()) // FLD!
  {
  case 1:
    C_ex_(); // C!
    break;
  case 2:
    Store_3(); // !_3
    break;
  case 3:
    _1_dot_5_ex_(); // 1.5!
    break;
  default:
    Store_3(); // !_3
    break;

  }
}

// ================================================
// 0x7ccb: WORD 'IFLD@' codep=0x224c wordp=0x7cd5
// ================================================

void IFLD_at_() // IFLD@
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() + 2)&0xFF); //  2+ C@
  SWAP(); // SWAP
  EXECUTE(); // EXECUTE
  SWAP(); // SWAP
  FLD_at_(); // FLD@ case
}


// ================================================
// 0x7ce5: WORD 'IFLD!' codep=0x224c wordp=0x7cef
// ================================================

void IFLD_ex_() // IFLD!
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() + 2)&0xFF); //  2+ C@
  SWAP(); // SWAP
  EXECUTE(); // EXECUTE
  SWAP(); // SWAP
  FLD_ex_(); // FLD! case
}


// ================================================
// 0x7cff: WORD '?FLD=' codep=0x224c wordp=0x7d01
// ================================================

void IsFLD_eq_() // ?FLD=
{
  OVER(); // OVER
  IFLD_at_(); // IFLD@
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0x7d0b: WORD '?CLASS/SPECIES' codep=0x224c wordp=0x7d17 params=2 returns=3
// ================================================

void IsCLASS_slash_SPECIES() // ?CLASS/SPECIES
{
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  SWAP(); // SWAP
  GetINST_dash_CLASS(); // @INST-CLASS
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  SWAP(); // SWAP
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0x7d37: WORD '?CHOICE' codep=0x224c wordp=0x7d39
// ================================================

void IsCHOICE() // ?CHOICE
{
  Push(pp__i__ask_CHOICE); // '?CHOICE
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d3f: WORD '?EXIT' codep=0x224c wordp=0x7d41
// ================================================

void IsEXIT() // ?EXIT
{
  Push(pp__i__ask_EXIT); // '?EXIT
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d47: WORD 'TRAVERS' codep=0x224c wordp=0x7d49
// ================================================

void TRAVERS() // TRAVERS
{
  Push(pp__i_TRAVERS); // 'TRAVERS
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d4f: WORD 'MAP' codep=0x224c wordp=0x7d57
// ================================================

void MAP() // MAP
{
  Push(pp__i_MAP); // 'MAP
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d5d: WORD 'DUP@>V!' codep=0x224c wordp=0x7d5f params=2 returns=0
// ================================================

void DUP_at__gt_V_ex_() // DUP@>V!
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); //  @
  _gt_V(); // >V
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x7d69: WORD 'V>SWAP!' codep=0x224c wordp=0x7d6b params=1 returns=0
// ================================================

void V_gt_SWAP_ex_() // V>SWAP!
{
  V_gt_(); // V>
  SWAP(); // SWAP
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x7d73: WORD 'SELECT' codep=0x224c wordp=0x7d7e
// ================================================

void SELECT() // SELECT
{
  Push(0);
  _gt_V(); // >V
  while(1)
  {
    IsCHOICE(); // ?CHOICE
    IsEXIT(); // ?EXIT
    Push(Pop() | Pop()); // OR
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    TRAVERS(); // TRAVERS
    V_gt_(); // V>
    Pop(); // DROP
    Push(1);
    _gt_V(); // >V
  }
  IsEXIT(); // ?EXIT
  Push(!Pop()); //  NOT
  V_gt_(); // V>
  Pop(); // DROP
}


// ================================================
// 0x7da6: WORD '?>FIRST' codep=0x224c wordp=0x7db2 params=0 returns=1
// ================================================

void Is_gt_FIRST() // ?>FIRST
{
  VI(); // VI
  IsFIRST(); // ?FIRST
  Push(Pop() & Pop()); // AND
  IsNULL(); // ?NULL
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0x7dbe: WORD 'SELECT-2DROP' codep=0x224c wordp=0x7dca
// ================================================

void SELECT_dash_2DROP() // SELECT-2DROP
{
  unsigned short int a;
  Push(pp__i__ask_CHOICE); // '?CHOICE
  DUP_at__gt_V_ex_(); // DUP@>V!
  Push(0x7db2); // '?>FIRST'
  Push(pp__i__ask_EXIT); // '?EXIT
  DUP_at__gt_V_ex_(); // DUP@>V!
  Push(0x7a86); // 'INEXT'
  Push(pp__i_TRAVERS); // 'TRAVERS
  DUP_at__gt_V_ex_(); // DUP@>V!
  SELECT(); // SELECT
  Push(pp__i_TRAVERS); // 'TRAVERS
  V_gt_SWAP_ex_(); // V>SWAP!
  Push(pp__i__ask_EXIT); // '?EXIT
  V_gt_SWAP_ex_(); // V>SWAP!
  Push(pp__i__ask_CHOICE); // '?CHOICE
  V_gt_SWAP_ex_(); // V>SWAP!
  a = Pop(); // >R
  Pop(); Pop(); // 2DROP
  Push(a); // R>
}


// ================================================
// 0x7df4: WORD '3SELECTDROP' codep=0x224c wordp=0x7df6
// ================================================
// orphan

void _3SELECTDROP() // 3SELECTDROP
{
  unsigned short int a;
  SELECT_dash_2DROP(); // SELECT-2DROP
  a = Pop(); // >R
  Pop(); // DROP
  Push(a); // R>
}


// ================================================
// 0x7e00: WORD '=FIND' codep=0x224c wordp=0x7e02
// ================================================

void _eq_FIND() // =FIND
{
  Push(0x7d01); // '?FLD='
  SELECT_dash_2DROP(); // SELECT-2DROP
}


// ================================================
// 0x7e0a: WORD 'IFIND' codep=0x224c wordp=0x7e14
// ================================================

void IFIND() // IFIND
{
  Push(0x7d17); // '?CLASS/SPECIES'
  SELECT_dash_2DROP(); // SELECT-2DROP
}


// ================================================
// 0x7e1c: WORD 'MAP>ROOT' codep=0x224c wordp=0x7e1e params=0 returns=0
// ================================================

void MAP_gt_ROOT() // MAP>ROOT
{
  IsCHILD(); // ?CHILD
  if (Pop() == 0) return;
  IOPEN(); // IOPEN
  do
  {
    MAP_gt_ROOT(); // MAP>ROOT
    MAP(); // MAP
    TRAVERS(); // TRAVERS
    IsEXIT(); // ?EXIT
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7e36: WORD 'MAP>LEAF' codep=0x224c wordp=0x7e38
// ================================================

void MAP_gt_LEAF() // MAP>LEAF
{
  MAP(); // MAP
  IsCHILD(); // ?CHILD
  if (Pop() == 0) return;
  IOPEN(); // IOPEN
  do
  {
    MAP_gt_LEAF(); // MAP>LEAF
    TRAVERS(); // TRAVERS
    IsEXIT(); // ?EXIT
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7e50: WORD 'MAKE1ST' codep=0x224c wordp=0x7e5c params=0 returns=0
// ================================================

void MAKE1ST() // MAKE1ST
{
  IsFIRST(); // ?FIRST
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  IEXTRACT(); // IEXTRACT
  CI_i_(); // CI'
  IINSERT(); // IINSERT
  IFIRST(); // IFIRST
}


// ================================================
// 0x7e6e: WORD 'EXTRACTED>INACTIVE' codep=0x224c wordp=0x7e70 params=3 returns=0
// ================================================

void EXTRACTED_gt_INACTIVE() // EXTRACTED>INACTIVE
{
  Push2Words("INACTIVE");
  _gt_C_plus_S(); // >C+S
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x749c); // 'INST-SPECIES'
    SWAP(); // SWAP
    _eq_FIND(); // =FIND
    if (Pop() != 0)
    {
      MAKE1ST(); // MAKE1ST
      CI(); // CI
    } else
    {
      CI_i_(); // CI'
    }
    ICLOSE(); // ICLOSE
  } else
  {
    Pop(); // DROP
    CI(); // CI
  }
  IINSERT(); // IINSERT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7ea2: WORD '>INACTIVE' codep=0x224c wordp=0x7eae params=2 returns=0
// ================================================

void _gt_INACTIVE() // >INACTIVE
{
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  Push((Read16(pp_IBFR) - 3) - Read16(cc_IHEADLEN)); // IBFR @ 3 - IHEADLEN -
  Push(Read16(regsp)); // DUP
  StoreINST_dash_SPECIES(); // !INST-SPECIES
  CDROP(); // CDROP
  EXTRACTED_gt_INACTIVE(); // EXTRACTED>INACTIVE
}


// ================================================
// 0x7ec8: WORD '(IDELETE)' codep=0x224c wordp=0x7eca params=0 returns=0
// ================================================

void _ro_IDELETE_rc_() // (IDELETE)
{
  IEXTRACT(); // IEXTRACT
  _gt_INACTIVE(); // >INACTIVE
}


// ================================================
// 0x7ed0: WORD 'IDELETE' codep=0x224c wordp=0x7edc
// ================================================

void IDELETE() // IDELETE
{
  Push(0x7eca); // '(IDELETE)'
  Push(pp__i_MAP); // 'MAP
  DUP_at__gt_V_ex_(); // DUP@>V!
  Push(0x75f3); // '?NULL'
  Push(pp__i__ask_EXIT); // '?EXIT
  DUP_at__gt_V_ex_(); // DUP@>V!
  Push(0x3a48); // 'NOP'
  Push(pp__i_TRAVERS); // 'TRAVERS
  DUP_at__gt_V_ex_(); // DUP@>V!
  MAP_gt_ROOT(); // MAP>ROOT
  MAP(); // MAP
  Push(pp__i_TRAVERS); // 'TRAVERS
  V_gt_SWAP_ex_(); // V>SWAP!
  Push(pp__i__ask_EXIT); // '?EXIT
  V_gt_SWAP_ex_(); // V>SWAP!
  Push(pp__i_MAP); // 'MAP
  V_gt_SWAP_ex_(); // V>SWAP!
}


// ================================================
// 0x7f06: WORD 'SELECT-MAP' codep=0x224c wordp=0x7f08
// ================================================

void SELECT_dash_MAP() // SELECT-MAP
{
  Push(pp__i_MAP); // 'MAP
  DUP_at__gt_V_ex_(); // DUP@>V!
  Push(pp__i_TRAVERS); // 'TRAVERS
  DUP_at__gt_V_ex_(); // DUP@>V!
  Push(pp__i__ask_EXIT); // '?EXIT
  DUP_at__gt_V_ex_(); // DUP@>V!
  Push(pp__i__ask_CHOICE); // '?CHOICE
  DUP_at__gt_V_ex_(); // DUP@>V!
  IFIRST(); // IFIRST
  do
  {
    SELECT(); // SELECT
    if (Pop() != 0)
    {
      MAP(); // MAP
      TRAVERS(); // TRAVERS
      IsFIRST(); // ?FIRST
    } else
    {
      Push(1);
    }
  } while(Pop() == 0);
  Push(pp__i__ask_CHOICE); // '?CHOICE
  V_gt_SWAP_ex_(); // V>SWAP!
  Push(pp__i__ask_EXIT); // '?EXIT
  V_gt_SWAP_ex_(); // V>SWAP!
  Push(pp__i_TRAVERS); // 'TRAVERS
  V_gt_SWAP_ex_(); // V>SWAP!
  Push(pp__i_MAP); // 'MAP
  V_gt_SWAP_ex_(); // V>SWAP!
}


// ================================================
// 0x7f42: WORD 'ALL' codep=0x224c wordp=0x7f4a
// ================================================

void ALL() // ALL
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x7604); // '?-NULL'
  Push(0x7db2); // '?>FIRST'
  Push(0x7a86); // 'INEXT'
  Push(a); // R>
  SELECT_dash_MAP(); // SELECT-MAP
}


// ================================================
// 0x7f5e: WORD 'EACH' codep=0x224c wordp=0x7f67
// ================================================

void EACH() // EACH
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x7db2); // '?>FIRST'
  Push(0x7a86); // 'INEXT'
  Push(a); // R>
  SELECT_dash_MAP(); // SELECT-MAP
}


// ================================================
// 0x7f77: WORD 'THROW-AWAY' codep=0x224c wordp=0x7f79
// ================================================

void THROW_dash_AWAY() // THROW-AWAY
{
  Push(pp__i_THROW_dash_AWAY); // 'THROW-AWAY
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7f7f: WORD 'NULLPOINTERS' codep=0x224c wordp=0x7f8b params=0 returns=0
// ================================================

void NULLPOINTERS() // NULLPOINTERS
{
  Push2Words("NULL");
  StoreINST_dash_SIB(); // !INST-SIB
  Push2Words("NULL");
  StoreINST_dash_PREV(); // !INST-PREV
  Push2Words("NULL");
  StoreINST_dash_OFF(); // !INST-OFF
}


// ================================================
// 0x7f99: WORD 'CHILDEXTRACT' codep=0x224c wordp=0x7f9b params=0 returns=2
// ================================================

void CHILDEXTRACT() // CHILDEXTRACT
{
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    IEXTRACT(); // IEXTRACT
    ICLOSE(); // ICLOSE
    return;
  }
  IEXTRACT(); // IEXTRACT
}


// ================================================
// 0x7faf: WORD 'TRY-INACTIVE' codep=0x224c wordp=0x7fb1 params=0 returns=0
// ================================================

void TRY_dash_INACTIVE() // TRY-INACTIVE
{
  Push2Words("INACTIVE");
  _gt_C_plus_S(); // >C+S
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x749c); // 'INST-SPECIES'
    OVER(); // OVER
    _eq_FIND(); // =FIND
    if (Pop() != 0)
    {
      Push(pp_IsRECYCLED); // ?RECYCLED
      ON_2(); // ON_2
      MAKE1ST(); // MAKE1ST
      CHILDEXTRACT(); // CHILDEXTRACT
    } else
    {
      Push2Words("NULL");
    }
    ICLOSE(); // ICLOSE
  } else
  {
    Push2Words("NULL");
  }
  ICLOSE(); // ICLOSE
  _gt_C(); // >C
}


// ================================================
// 0x7fe5: WORD 'NEWFRAGMENT' codep=0x224c wordp=0x7fe7 params=0 returns=4
// ================================================

void NEWFRAGMENT() // NEWFRAGMENT
{
  unsigned short int a;
  BLKSPACE(); // BLKSPACE
  Push(Read16(cc_IHEADLEN)); // IHEADLEN
  _gt_(); // >
  if (Pop() != 0)
  {
    BLKSPACE(); // BLKSPACE
    Push((Pop() - Read16(cc_IHEADLEN)) - 1); //  IHEADLEN - 1-
    GetNEWSPACE(); // @NEWSPACE
    VA_gt_BUF(); // VA>BUF
    a = Pop(); // >R
    Push(a + 0x000b); // I 0x000b +
    C_ex_(); // C!
    Push(0x0030);
    Push(a + 9); // R> 9 +
    C_ex_(); // C!
    GetNEWSPACE(); // @NEWSPACE
    _gt_C_plus_S(); // >C+S
    NULLPOINTERS(); // NULLPOINTERS
    CI(); // CI
    ICLOSE(); // ICLOSE
    _gt_INACTIVE(); // >INACTIVE
  }
  BLKSPACE(); // BLKSPACE
  _plus__ex_NEWSPACE(); // +!NEWSPACE
}


// ================================================
// 0x8027: WORD '?>MAXSP' codep=0x224c wordp=0x8033 params=1 returns=4
// ================================================

void Is_gt_MAXSP() // ?>MAXSP
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  MAXSPACE(); // MAXSPACE
  _1_dot_5_at_(); // 1.5@
  GetNEWSPACE(); // @NEWSPACE
  Push(a); // R>
  Push(0);
  D_plus_(); // D+
  D_st_(); // D<
}


// ================================================
// 0x8047: WORD 'TRY-NEWSPACE' codep=0x224c wordp=0x8049 params=1 returns=9
// ================================================

void TRY_dash_NEWSPACE() // TRY-NEWSPACE
{
  Is_gt_MAXSP(); // ?>MAXSP
  if (Pop() != 0)
  {
    Push2Words("NULL");
    _gt_C(); // >C
    return;
  }
  BLKSPACE(); // BLKSPACE
  OVER(); // OVER
  Push(Pop() + Read16(cc_IHEADLEN)); //  IHEADLEN +
  _st_(); // <
  if (Pop() != 0)
  {
    NEWFRAGMENT(); // NEWFRAGMENT
  }
  GetNEWSPACE(); // @NEWSPACE
  _gt_C(); // >C
  Push(Read16(regsp)); // DUP
  Push(Pop() + Read16(cc_IHEADLEN)); //  IHEADLEN +
  _plus__ex_NEWSPACE(); // +!NEWSPACE
  Is_gt_MAXSP(); // ?>MAXSP
  if (Pop() == 0) return;
  CDROP(); // CDROP
  Push2Words("NULL");
  _gt_C(); // >C
}


// ================================================
// 0x8081: WORD 'GET-NEW-INSTANCE' codep=0x224c wordp=0x8083 params=1 returns=9
// ================================================

void GET_dash_NEW_dash_INSTANCE() // GET-NEW-INSTANCE
{
  while(1)
  {
    Push(pp_IsRECYCLED); // ?RECYCLED
    OFF_2(); // OFF_2
    Push(Read16(pp_IsREUSE)); // ?REUSE @
    if (Pop() != 0)
    {
      TRY_dash_INACTIVE(); // TRY-INACTIVE
    } else
    {
      TRY_dash_NEWSPACE(); // TRY-NEWSPACE
    }
    IsNULL(); // ?NULL
    if (Pop() != 0)
    {
      CDROP(); // CDROP
      Push(Read16(pp_IsREUSE)); // ?REUSE @
      if (Pop() != 0)
      {
        TRY_dash_NEWSPACE(); // TRY-NEWSPACE
      } else
      {
        TRY_dash_INACTIVE(); // TRY-INACTIVE
      }
      IsNULL(); // ?NULL
      if (Pop() != 0)
      {
        THROW_dash_AWAY(); // THROW-AWAY
      }
    }
    IsNULL(); // ?NULL
    if (Pop() == 0) return;
    CDROP(); // CDROP
  }
}


// ================================================
// 0x80c5: WORD 'SET?REUSE' codep=0x4a4f wordp=0x80d1
// ================================================

void SET_ask_REUSE() // SET?REUSE
{
  switch(Pop()) // SET?REUSE
  {
  case 11:
    Func9("<ON>");
    break;
  case 41:
    Func9("<ON>");
    break;
  case 14:
    Func9("<ON>");
    break;
  case 26:
    Func9("<ON>");
    break;
  case 68:
    Func9("<ON>");
    break;
  case 28:
    Func9("<ON>");
    break;
  case 56:
    Func9("<ON>");
    break;
  case 36:
    Func9("<ON>");
    break;
  case 40:
    Func9("<ON>");
    break;
  case 43:
    Func9("<ON>");
    break;
  case 24:
    Func9("<ON>");
    break;
  case 25:
    Func9("<ON>");
    break;
  case 67:
    Func9("<ON>");
    break;
  default:
    Func9("<OFF>");
    break;

  }
}

// ================================================
// 0x8109: WORD 'VICREAT' codep=0x224c wordp=0x8115 params=1 returns=11
// ================================================

void VICREAT() // VICREAT
{
  unsigned short int a;
  Push(pp_IsREUSE); // ?REUSE
  OFF_2(); // OFF_2
  Push(Read16(regsp)); // DUP
  Push(0x00fe);
  _gt_(); // >
  IsUNRAVEL(); // ?UNRAVEL
  Push(Pop() + 1); //  1+
  GET_dash_NEW_dash_INSTANCE(); // GET-NEW-INSTANCE
  Push(Pop() - 1); //  1-
  CI(); // CI
  VA_gt_BUF(); // VA>BUF
  a = Pop(); // >R
  Push(a + 0x000b); // I 0x000b +
  C_ex_(); // C!
  Push(0x0030);
  Push(a + 9); // R> 9 +
  C_ex_(); // C!
  SET_dash_CURRENT(); // SET-CURRENT
  NULLPOINTERS(); // NULLPOINTERS
  CI(); // CI
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x814f: WORD 'ICREATE' codep=0x224c wordp=0x815b
// ================================================

void ICREATE() // ICREATE
{
  unsigned short int a;
  Push(pp_IsREUSE); // ?REUSE
  Push(3);
  PICK(); // PICK
  SET_ask_REUSE(); // SET?REUSE case
  OVER(); // OVER
  Func6("FILE-SLEN");
  Push(Read16(Pop())&0xFF); //  C@
  GET_dash_NEW_dash_INSTANCE(); // GET-NEW-INSTANCE
  Pop(); // DROP
  Push(!Read16(pp_IsRECYCLED)); // ?RECYCLED @ NOT
  if (Pop() != 0)
  {
    CI(); // CI
    VA_gt_BUF(); // VA>BUF
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    Push(Pop() + 0x000a); //  0x000a +
    C_ex_(); // C!
    Push(a + 9); // R> 9 +
    C_ex_(); // C!
    SET_dash_CURRENT(); // SET-CURRENT
  } else
  {
    SET_dash_CURRENT(); // SET-CURRENT
    StoreINST_dash_SPECIES(); // !INST-SPECIES
    StoreINST_dash_CLASS(); // !INST-CLASS
  }
  NULLPOINTERS(); // NULLPOINTERS
  CI(); // CI
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x81a3: WORD '*CREATE' codep=0x224c wordp=0x81af
// ================================================

void _star_CREATE() // *CREATE
{
  unsigned short int i, imax;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    _2DUP(); // 2DUP
    ICREATE(); // ICREATE
    IsNULL(); // ?NULL
    if (Pop() != 0)
    {
      CI_i_(); // CI'
      IINSERT(); // IINSERT
      IFIRST(); // IFIRST
    } else
    {
      _1STCHILD(); // 1STCHILD
      _st_INSERT(); // <INSERT
    }
    i++;
  } while(i<imax); // (LOOP)

  ILAST(); // ILAST
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0x81d5: WORD '.DRJ' codep=0x224c wordp=0x81d7 params=2 returns=0
// ================================================

void DrawDRJ() // .DRJ
{
  Push(2);
  SPACES(); // SPACES
  Push(5);
  D_dot_R(); // D.R
}


// ================================================
// 0x81e1: WORD '.INM' codep=0x224c wordp=0x81e3 params=2 returns=0
// ================================================

void DrawINM() // .INM
{
  _gt_C_plus_S(); // >C+S
  Is_dash_NULL(); // ?-NULL
  if (Pop() != 0)
  {
    GetINST_dash_CLASS(); // @INST-CLASS
    Func6("FILE-NAME");
    Push(0x000c);
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    CI(); // CI
    DrawDRJ(); // .DRJ
  } else
  {
    Push2Words("0.");
    DrawDRJ(); // .DRJ
    PRINT("<NULL>", 6); // (.")
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x820e: WORD '.C' codep=0x224c wordp=0x8215 params=0 returns=0
// ================================================

void DrawC() // .C
{
  unsigned short int i, imax;
  Exec("CR"); // call of word 0x26ee '(CR)'
  CDEPTH(); // CDEPTH
  if (Pop() != 0)
  {

    i = Read16(cc_END_dash_CX); // END-CX
    imax = Read16(pp_CXSP) + 3; // CXSP @ 3 +
    do // (DO)
    {
      Push(i); // I
      _1_dot_5_at_(); // 1.5@
      DrawDRJ(); // .DRJ
      Push(-3);
      int step = Pop();
      i += step;
      if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
    } while(1); // (+LOOP)

  } else
  {
    PRINT("MT STK", 6); // (.")
  }
  Exec("CR"); // call of word 0x26ee '(CR)'
}


// ================================================
// 0x8248: WORD 'INDENT.INM' codep=0x224c wordp=0x824a
// ================================================

void INDENT_dot_INM() // INDENT.INM
{
  Exec("CR"); // call of word 0x26ee '(CR)'
  CI(); // CI
  CDEPTH(); // CDEPTH
  Push(Pop() * 2); //  2*
  SPACES(); // SPACES
  DrawINM(); // .INM
  Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
  if (Pop() == 0) return;
  QUIT(); // QUIT
}


// ================================================
// 0x8260: WORD '.TREE' codep=0x224c wordp=0x826a
// ================================================

void DrawTREE() // .TREE
{
  Push(0x824a); // 'INDENT.INM'
  Push(pp__i_MAP); // 'MAP
  DUP_at__gt_V_ex_(); // DUP@>V!
  Push(0x7a62); // '?FIRST'
  Push(pp__i__ask_EXIT); // '?EXIT
  DUP_at__gt_V_ex_(); // DUP@>V!
  Push(0x7a86); // 'INEXT'
  Push(pp__i_TRAVERS); // 'TRAVERS
  DUP_at__gt_V_ex_(); // DUP@>V!
  MAP_gt_LEAF(); // MAP>LEAF
  Push(pp__i_TRAVERS); // 'TRAVERS
  V_gt_SWAP_ex_(); // V>SWAP!
  Push(pp__i__ask_EXIT); // '?EXIT
  V_gt_SWAP_ex_(); // V>SWAP!
  Push(pp__i_MAP); // 'MAP
  V_gt_SWAP_ex_(); // V>SWAP!
}


// ================================================
// 0x8292: WORD 'OVA@' codep=0x224c wordp=0x8294 params=0 returns=1
// ================================================

void OVA_at_() // OVA@
{
  Push(Read16(pp_OVA)); // OVA @
}


// ================================================
// 0x829a: WORD 'OV-CANCEL' codep=0x224c wordp=0x82a6 params=0 returns=0
// ================================================

void OV_dash_CANCEL() // OV-CANCEL
{
  Push(Read16(pp_OV_n_)); // OV# @
  if (Pop() != 0)
  {
    OVA_at_(); // OVA@
    Push(Read16(regsp)); // DUP
    Push(4);
    _plus__at_(); // +@
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      OVA_at_(); // OVA@
      Push(8);
      _plus__at_(); // +@
      Push(Pop() + 4); //  4 +
      Push(8);
      Push(0);
      FILL_1(); // FILL_1
    }
  }
  Push(pp_OV_n_); // OV#
  OFF_2(); // OFF_2
  Push(0x081a); // 'FORTH'
  Push(Read16(regsp)); // DUP
  Push(user_CURRENT); // CURRENT
  _st__ex__gt_(); // <!>
  Push(user_CONTEXT); // CONTEXT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x82e0: WORD 'VSA>BUFADR' codep=0x224c wordp=0x82e2 params=3 returns=2
// ================================================

void VSA_gt_BUFADR() // VSA>BUFADR
{
  Push(Read16(regsp)); // DUP
  MOUNT_dash_VSA(); // MOUNT-VSA
  VSA_gt_VA(); // VSA>VA
  VA_gt_BUF(); // VA>BUF
}


// ================================================
// 0x82ec: WORD '?ROOMERROR' codep=0x224c wordp=0x82ee params=1 returns=0
// ================================================

void IsROOMERROR() // ?ROOMERROR
{
  HERE(); // HERE
  U_st_(); // U<
  if (Pop() == 0) return;
  PRINT("OV TOO BIG", 10); // (.")
  UNRAVEL(); // UNRAVEL
}


// ================================================
// 0x8307: WORD 'OV-VERIFY' codep=0x224c wordp=0x8309 params=2 returns=0
// ================================================

void OV_dash_VERIFY() // OV-VERIFY
{
  Push(Read16(regsp)); // DUP
  VSA_gt_BUFADR(); // VSA>BUFADR
  _2DUP(); // 2DUP
  Push(Read16(Pop())); //  @
  _dash_(); // -
  if (Pop() != 0)
  {
    PRINT("INV OV BLK", 10); // (.")
    UNRAVEL(); // UNRAVEL
  }
  Push(4);
  _plus__at_(); // +@
  IsROOMERROR(); // ?ROOMERROR
  Pop(); // DROP
}


// ================================================
// 0x8330: WORD 'LOAD-OVERLAY' codep=0x224c wordp=0x8332 params=1 returns=0
// ================================================

void LOAD_dash_OVERLAY() // LOAD-OVERLAY
{
  unsigned short int a;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(Read16(regsp)); // DUP
  Push(Pop()==Read16(pp_OV_n_)?1:0); //  OV# @ =
  if (Pop() != 0)
  {
    Pop(); // DROP
    return;
  }
  Push(Read16(regsp)); // DUP
  OV_dash_VERIFY(); // OV-VERIFY
  OV_dash_CANCEL(); // OV-CANCEL
  VSA_gt_BUFADR(); // VSA>BUFADR
  a = Pop(); // >R
  Push(a); // I
  Push(4);
  _plus__at_(); // +@
  Push(Read16(regsp)); // DUP
  Push(pp_OVA); // OVA
  _st__ex__gt_(); // <!>
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Read16(a)); // I @
  Push(Read16(regsp)); // DUP
  Push(pp_OV_n_); // OV#
  _st__ex__gt_(); // <!>
  Push(Read16(a + 2)); // R> 2+ @
  MEM_st_DSK(); // MEM<DSK
  OVA_at_(); // OVA@
  Push(Pop() + 0x000a); //  0x000a +
  OVA_at_(); // OVA@
  Push(8);
  _plus__at_(); // +@
  Push(Pop() + 4); //  4 +
  Push(8);
  CMOVE(); // CMOVE
  OVA_at_(); // OVA@
  Push(8);
  _plus__at_(); // +@
  Push(Pop() - 2); //  2-
  Push(Read16(regsp)); // DUP
  Push(user_CONTEXT); // CONTEXT
  _st__ex__gt_(); // <!>
  Push(user_CURRENT); // CURRENT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x839e: WORD 'SAVE-OVERLAY' codep=0x224c wordp=0x83aa params=0 returns=0
// ================================================

void SAVE_dash_OVERLAY() // SAVE-OVERLAY
{
  unsigned short int a;
  Push(Read16(pp_OV_n_)); // OV# @
  if (Pop() == 0) return;
  OVA_at_(); // OVA@
  a = Pop(); // >R
  Push(a); // I
  Push(8);
  _plus__at_(); // +@
  Push(Pop() + 4); //  4 +
  Push(a + 0x000a); // I 0x000a +
  Push(8);
  CMOVE(); // CMOVE
  Push(a); // I
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Read16(a)); // I @
  Push(Read16(a + 2)); // R> 2+ @
  MEM_gt_DSK(); // MEM>DSK
}


// ================================================
// 0x83de: WORD 'OVERLAY' codep=0x224c wordp=0x83ea
// ================================================

void OVERLAY() // OVERLAY
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  Func6("FILE-START");
  Push(Read16(Pop())); //  @
  Push(Read16(regsp)); // DUP
  _co_(); // ,
  OV_dash_VERIFY(); // OV-VERIFY
  CODE(); // (;CODE) inlined assembler code
// 0x83f8: call   1649
  Push(Read16(Pop())); //  @
  LOAD_dash_OVERLAY(); // LOAD-OVERLAY
}


// ================================================
// 0x8401: WORD 'DP-SWITCH' codep=0x224c wordp=0x8403 params=0 returns=0
// ================================================

void DP_dash_SWITCH() // DP-SWITCH
{
  Push(Read16(user_DP)); // DP @
  OVA_at_(); // OVA@
  Push(6);
  _plus__at_(); // +@
  Push(user_DP); // DP
  _st__ex__gt_(); // <!>
  OVA_at_(); // OVA@
  Push(Pop() + 6); //  6 +
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x841b: WORD 'OPEN-OVERLAY' codep=0x224c wordp=0x8427
// ================================================

void OPEN_dash_OVERLAY() // OPEN-OVERLAY
{
  Push(Read16(regsp)); // DUP
  Func6("FILE-START");
  Push(Read16(Pop())); //  @
  SWAP(); // SWAP
  Func6("FILE-#REC");
  Push(Read16(Pop())); //  @
  OVER(); // OVER
  Push(pp_OV_n_); // OV#
  _st__ex__gt_(); // <!>
  Push(Read16(regsp)); // DUP
  Push(-(Pop() >> 4) + Read16(cc_EM)); //  16* NEGATE EM +
  Push(Read16(regsp)); // DUP
  IsROOMERROR(); // ?ROOMERROR
  Push(Read16(regsp)); // DUP
  Push(pp_OVA); // OVA
  _st__ex__gt_(); // <!>
  HERE(); // HERE
  OVER(); // OVER
  Push(Pop() + 6); //  6 +
  _st__ex__gt_(); // <!>
  Push(user_DP); // DP
  _st__ex__gt_(); // <!>
  SWAP(); // SWAP
  _co_(); // ,
  _co_(); // ,
  OVA_at_(); // OVA@
  _co_(); // ,
  Push(2);
  ALLOT(); // ALLOT
  Push(Read16(user_VOC_dash_LINK)); // VOC-LINK @
  _co_(); // ,
  Push(8);
  ALLOT(); // ALLOT
  Push(2);
  ALLOT(); // ALLOT
}


// ================================================
// 0x8479: WORD '.CVSAS' codep=0x224c wordp=0x847b params=0 returns=0
// ================================================

void DrawCVSAS() // .CVSAS
{
  Exec("CR"); // call of word 0x26ee '(CR)'
  Push(Read16(user_CONTEXT)); // CONTEXT @
  NFA(); // NFA
  ID_dot_(); // ID.
  OVA_at_(); // OVA@
  HERE(); // HERE
  OVER(); // OVER
  _dash_(); // -
  Push((Pop() >> 4) + 1); //  16/ 1+
  Push(Read16(regsp)); // DUP
  Draw(); // .
  PRINT("SEGS USED", 9); // (.")
  SWAP(); // SWAP
  Push(Pop() + 0x0012); //  0x0012 +
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x84ad: WORD 'CLOSE-OVERLAY' codep=0x224c wordp=0x84b9 params=0 returns=0
// ================================================

void CLOSE_dash_OVERLAY() // CLOSE-OVERLAY
{
  DrawCVSAS(); // .CVSAS
  DP_dash_SWITCH(); // DP-SWITCH
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
  SAVE_dash_BUFFERS(); // SAVE-BUFFERS
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0x84c5: WORD 'MODULE' codep=0x224c wordp=0x84d0 params=1 returns=0
// ================================================

void MODULE() // MODULE
{
  Push(Read16(pp_OV_n_)); // OV# @
  _gt_V(); // >V
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
  EXECUTE(); // EXECUTE
  V_gt_(); // V>
  LOAD_dash_OVERLAY(); // LOAD-OVERLAY
}


// ================================================
// 0x84e0: WORD '?TANDRG' codep=0x1d29 wordp=0x84ec
// ================================================
// 0x84ec: db 0x00 0x00 '  '

// ================================================
// 0x84ee: WORD 'MSET-CO' codep=0x224c wordp=0x84fa
// ================================================

void MSET_dash_CO() // MSET-CO
{
  WE93B(); // Unknown overlay function
  WD5FA(); // Unknown overlay function
  Push(2);
  WDAC2(); // Unknown overlay function
  WE949(); // Unknown overlay function
  WD603(); // Unknown overlay function
  Push(0);
  WDAC2(); // Unknown overlay function
  WE9DA(); // Unknown overlay function
}


// ================================================
// 0x850e: WORD '!COLOR' codep=0x224c wordp=0x8519 params=1 returns=0
// ================================================

void StoreCOLOR() // !COLOR
{
  Push(Read16(regsp)); // DUP
  Push(pp_COLOR); // COLOR
  Store_3(); // !_3
  Push(pp_DCOLOR); // DCOLOR
  Store_3(); // !_3
}


// ================================================
// 0x8525: WORD '@COLOR' codep=0x224c wordp=0x8530 params=0 returns=1
// ================================================

void GetCOLOR() // @COLOR
{
  Push(Read16(pp_COLOR)); // COLOR @
}


// ================================================
// 0x8536: WORD 'TREJECT/TACCEPT' codep=0x1d29 wordp=0x8538 params=0 returns=1
// ================================================
// orphan
// 0x8538: mov    ax,ds
// 0x853a: mov    es,ax
// 0x853c: push   bp
// 0x853d: push   di
// 0x853e: push   si
// 0x853f: mov    bl,0F
// 0x8541: xor    bh,bh
// 0x8543: mov    si,[569B] // VIN
// 0x8547: mov    di,[56B0] // OIN
// 0x854b: mov    bp,[5752] // IBELOW
// 0x854f: mov    cx,[5686] // #IN
// 0x8553: xor    dx,dx
// 0x8555: lodsw
// 0x8556: cmp    ax,bp
// 0x8558: jns    855D
// 0x855a: or     dx,04
// 0x855d: cmp    ax,[575F] // IABOVE
// 0x8561: jle    8566
// 0x8563: or     dx,08
// 0x8566: lodsw
// 0x8567: cmp    ax,[5738] // ILEFT
// 0x856b: jns    8570
// 0x856d: or     dx,01
// 0x8570: cmp    ax,[5745] // IRIGHT
// 0x8574: jle    8579
// 0x8576: or     dx,02
// 0x8579: mov    ax,dx
// 0x857b: stosb
// 0x857c: and    bl,dl
// 0x857e: or     bh,dl
// 0x8580: loop   8553
// 0x8582: xor    ax,ax
// 0x8584: mov    al,bl
// 0x8586: mov    [56E8],ax // TRJCT
// 0x858a: mov    al,bh
// 0x858c: mov    [56DC],ax // TACCPT
// 0x8590: pop    si
// 0x8591: pop    di
// 0x8592: pop    bp
// 0x8593: ret    


// ================================================
// 0x8594: WORD 'INT/O' codep=0x1d29 wordp=0x8596 params=0 returns=1
// ================================================
// 0x8596: push   bx
// 0x8597: push   bp
// 0x8598: push   si
// 0x8599: push   di
// 0x859a: mov    cx,[5710] // W5710
// 0x859e: mov    si,[5714] // W5714
// 0x85a2: mov    bp,[5704] // W5704
// 0x85a6: mov    di,[5708] // W5708
// 0x85aa: cmp    word ptr [56CF],01 // W56CF
// 0x85af: jnz    85B5
// 0x85b1: xchg   cx,si
// 0x85b3: xchg   bp,di
// 0x85b5: mov    ax,[572C] // W572C
// 0x85b9: sub    ax,cx
// 0x85bb: mov    bx,di
// 0x85bd: sub    bx,si
// 0x85bf: imul   bx
// 0x85c1: mov    bx,bp
// 0x85c3: sub    bx,cx
// 0x85c5: idiv   bx
// 0x85c7: add    ax,si
// 0x85c9: mov    dx,ax
// 0x85cb: mov    cx,[572C] // W572C
// 0x85cf: cmp    word ptr [56CF],01 // W56CF
// 0x85d4: jnz    85D8
// 0x85d6: xchg   cx,dx
// 0x85d8: sub    ax,ax
// 0x85da: cmp    cx,[5738] // ILEFT
// 0x85de: jns    85E3
// 0x85e0: or     ax,0001
// 0x85e3: cmp    cx,[5745] // IRIGHT
// 0x85e7: jle    85EC
// 0x85e9: or     ax,0002
// 0x85ec: cmp    dx,[5752] // IBELOW
// 0x85f0: jns    85F5
// 0x85f2: or     ax,0004
// 0x85f5: cmp    dx,[575F] // IABOVE
// 0x85f9: jle    85FE
// 0x85fb: or     ax,0008
// 0x85fe: pop    di
// 0x85ff: pop    si
// 0x8600: pop    bp
// 0x8601: pop    bx
// 0x8602: ret    


// ================================================
// 0x8603: WORD 'CLIP' codep=0x1d29 wordp=0x8605 params=0 returns=1
// ================================================
// 0x8605: mov    word ptr [5691],0000 // #OUT
// 0x860b: xchg   [56BF],si // W56BF
// 0x860f: xchg   [56C3],di // W56C3
// 0x8613: xchg   [56C7],bx // W56C7
// 0x8617: xchg   [56CB],bp // W56CB
// 0x861b: mov    si,[569B] // VIN
// 0x861f: mov    di,[56A6] // VOUT
// 0x8623: mov    bx,[56B0] // OIN
// 0x8627: mov    bp,[56BB] // OOUT
// 0x862b: mov    cx,[5686] // #IN
// 0x862f: cmp    word ptr [56F4],01 // ?OPEN
// 0x8634: jnz    8666
// 0x8636: mov    ax,[si]
// 0x8638: mov    [5708],ax // W5708
// 0x863c: mov    ax,[si+02]
// 0x863f: mov    [5704],ax // W5704
// 0x8643: mov    al,[bx]
// 0x8645: mov    [570C],al // W570C
// 0x8649: and    al,[5728] // W5728
// 0x864d: jnz    865F
// 0x864f: movsw
// 0x8650: movsw
// 0x8651: mov    al,[570C] // W570C
// 0x8655: mov    [bp+00],al
// 0x8658: inc    bp
// 0x8659: inc    word ptr [5691] // #OUT
// 0x865d: jmp    8662
// 0x865f: add    si,04
// 0x8662: dec    cx
// 0x8663: inc    bx
// 0x8664: jmp    8689
// 0x8666: dec    cx
// 0x8667: add    bx,cx
// 0x8669: mov    al,[bx]
// 0x866b: mov    [570C],al // W570C
// 0x866f: sub    bx,cx
// 0x8671: mov    ax,cx
// 0x8673: shl    ax,1
// 0x8675: shl    ax,1
// 0x8677: add    si,ax
// 0x8679: mov    dx,[si]
// 0x867b: mov    [5708],dx // W5708
// 0x867f: mov    dx,[si+02]
// 0x8682: mov    [5704],dx // W5704
// 0x8686: sub    si,ax
// 0x8688: inc    cx
// 0x8689: mov    ax,[si]
// 0x868b: mov    [5714],ax // W5714
// 0x868f: mov    ax,[si+02]
// 0x8692: mov    [5710],ax // W5710
// 0x8696: mov    al,[bx]
// 0x8698: mov    [5718],al // W5718
// 0x869c: inc    bx
// 0x869d: mov    ax,[5728] // W5728
// 0x86a1: and    al,[5718] // W5718
// 0x86a5: and    ah,[570C] // W570C
// 0x86a9: cmp    ah,al
// 0x86ab: jz     8709
// 0x86ad: push   cx
// 0x86ae: push   ax
// 0x86af: xor    cx,cx
// 0x86b1: mov    ax,[572C] // W572C
// 0x86b5: cmp    word ptr [56CF],00 // W56CF
// 0x86ba: jnz    86D2
// 0x86bc: cmp    ax,[5710] // W5710
// 0x86c0: jz     86C3
// 0x86c2: inc    cx
// 0x86c3: cmp    ax,[5704] // W5704
// 0x86c7: jz     86CE
// 0x86c9: and    cx,01
// 0x86cc: jmp    86D0
// 0x86ce: xor    cx,cx
// 0x86d0: jmp    86E6
// 0x86d2: cmp    ax,[5714] // W5714
// 0x86d6: jz     86D9
// 0x86d8: inc    cx
// 0x86d9: cmp    ax,[5708] // W5708
// 0x86dd: jz     86E4
// 0x86df: and    cx,01
// 0x86e2: jmp    86E6
// 0x86e4: xor    cx,cx
// 0x86e6: cmp    word ptr [56F4],01 // ?OPEN
// 0x86eb: jnz    86EE
// 0x86ed: inc    cx
// 0x86ee: or     cx,cx
// 0x86f0: jz     8707
// 0x86f2: call   8596
// 0x86f5: mov    [di],dx
// 0x86f7: add    di,02
// 0x86fa: mov    [di],cx
// 0x86fc: add    di,02
// 0x86ff: mov    [bp+00],ax
// 0x8702: inc    bp
// 0x8703: inc    word ptr [5691] // #OUT
// 0x8707: pop    ax
// 0x8708: pop    cx
// 0x8709: or     al,al
// 0x870b: jnz    871D
// 0x870d: movsw
// 0x870e: movsw
// 0x870f: mov    dl,[5718] // W5718
// 0x8713: mov    [bp+00],dl
// 0x8716: inc    bp
// 0x8717: inc    word ptr [5691] // #OUT
// 0x871b: jmp    8720
// 0x871d: add    si,04
// 0x8720: mov    ax,[5714] // W5714
// 0x8724: mov    [5708],ax // W5708
// 0x8728: mov    ax,[5710] // W5710
// 0x872c: mov    [5704],ax // W5704
// 0x8730: mov    al,[5718] // W5718
// 0x8734: mov    [570C],al // W570C
// 0x8738: dec    cx
// 0x8739: jz     873E
// 0x873b: jmp    8689
// 0x873e: mov    ax,[569B] // VIN
// 0x8742: mov    cx,[56A6] // VOUT
// 0x8746: mov    [56A6],ax // VOUT
// 0x874a: mov    [569B],cx // VIN
// 0x874e: mov    ax,[56B0] // OIN
// 0x8752: mov    cx,[56BB] // OOUT
// 0x8756: mov    [56BB],ax // OOUT
// 0x875a: mov    [56B0],cx // OIN
// 0x875e: mov    ax,[5691] // #OUT
// 0x8762: mov    [5686],ax // #IN
// 0x8766: xchg   [56BF],si // W56BF
// 0x876a: xchg   [56C3],di // W56C3
// 0x876e: xchg   [56C7],bx // W56C7
// 0x8772: xchg   [56CB],bp // W56CB
// 0x8776: ret    


// ================================================
// 0x8777: WORD 'CLIPPER' codep=0x8783 wordp=0x8783
// ================================================
// 0x8783: push   di
// 0x8784: call   8538
// 0x8787: mov    ax,[56E8] // TRJCT
// 0x878b: or     ax,ax
// 0x878d: jz     8797
// 0x878f: mov    word ptr [5686],0000 // #IN
// 0x8795: jmp    87D9
// 0x8797: mov    ax,[56DC] // TACCPT
// 0x879b: or     ax,ax
// 0x879d: jz     87D9
// 0x879f: mov    di,5253
// 0x87a2: mov    cx,0004
// 0x87a5: mov    dx,[di]
// 0x87a7: test   dl,al
// 0x87a9: jz     87D4
// 0x87ab: mov    [5728],dx // W5728
// 0x87af: add    di,02
// 0x87b2: xor    dx,dx
// 0x87b4: mov    dl,[di]
// 0x87b6: mov    [56CF],dx // W56CF
// 0x87ba: inc    di
// 0x87bb: mov    dx,[di]
// 0x87bd: mov    [572C],dx // W572C
// 0x87c1: add    di,02
// 0x87c4: push   ax
// 0x87c5: push   cx
// 0x87c6: call   8605
// 0x87c9: pop    cx
// 0x87ca: or     ax,ax
// 0x87cc: jnz    87D1
// 0x87ce: mov    cx,0001
// 0x87d1: pop    ax
// 0x87d2: jmp    87D7
// 0x87d4: add    di,05
// 0x87d7: loop   87A5
// 0x87d9: pop    di
// 0x87da: lodsw
// 0x87db: mov    bx,ax
// 0x87dd: jmp    word ptr [bx]

// ================================================
// 0x87df: WORD 'SCANCON' codep=0x1d29 wordp=0x87e1 params=0 returns=1
// ================================================
// 0x87e1: push   word ptr [5710] // W5710
// 0x87e5: mov    ax,[5708] // W5708
// 0x87e9: mov    cx,[5714] // W5714
// 0x87ed: push   cx
// 0x87ee: cmp    cx,ax
// 0x87f0: jns    880A
// 0x87f2: mov    [5708],cx // W5708
// 0x87f6: mov    [5714],ax // W5714
// 0x87fa: mov    cx,[5704] // W5704
// 0x87fe: mov    ax,[5710] // W5710
// 0x8802: mov    [5704],ax // W5704
// 0x8806: mov    [5710],cx // W5710
// 0x880a: mov    bl,C3
// 0x880c: mov    ax,[5710] // W5710
// 0x8810: sub    ax,[5704] // W5704
// 0x8814: jge    881A
// 0x8816: mov    bl,CB
// 0x8818: neg    ax
// 0x881a: mov    cx,ax
// 0x881c: mov    bh,C7
// 0x881e: mov    ax,[5714] // W5714
// 0x8822: sub    ax,[5708] // W5708
// 0x8826: mov    dx,ax
// 0x8828: cmp    dx,cx
// 0x882a: jge    8830
// 0x882c: xchg   dx,cx
// 0x882e: xchg   bh,bl
// 0x8830: mov    di,87E1
// 0x8833: add    di,0087
// 0x8837: mov    [di],bh
// 0x8839: add    di,03
// 0x883c: mov    [di],cx
// 0x883e: shr    cx,1
// 0x8840: add    di,04
// 0x8843: mov    [di],cx
// 0x8845: add    di,06
// 0x8848: mov    [di],dx
// 0x884a: add    di,03
// 0x884d: mov    [di],bl
// 0x884f: mov    bl,[5704] // W5704
// 0x8853: mov    bh,[5708] // W5708
// 0x8857: xor    cx,cx
// 0x8859: xor    ax,ax
// 0x885b: mov    al,bh
// 0x885d: shl    ax,1
// 0x885f: add    ax,[57E1] // SCAN+
// 0x8863: mov    di,ax
// 0x8865: mov    [di],bl
// 0x8867: inc    bh
// 0x8869: add    cx,0000
// 0x886d: cmp    cx,0000
// 0x8871: jle    8879
// 0x8873: sub    cx,0004
// 0x8877: inc    bl
// 0x8879: dec    dx
// 0x887a: jge    8859
// 0x887c: pop    word ptr [5714] // W5714
// 0x8880: pop    word ptr [5710] // W5710
// 0x8884: ret    


// ================================================
// 0x8885: WORD 'SCANPOLY' codep=0x8891 wordp=0x8891 params=0 returns=0
// ================================================
// 0x8891: push   di
// 0x8892: xor    cx,cx
// 0x8894: mov    [57FB],cx // #HORIZ
// 0x8898: mov    [57DD],cx // ELEMENT
// 0x889c: mov    di,[569B] // VIN
// 0x88a0: mov    ax,[5686] // #IN
// 0x88a4: dec    ax
// 0x88a5: shl    ax,1
// 0x88a7: shl    ax,1
// 0x88a9: add    di,ax
// 0x88ab: mov    cx,[di]
// 0x88ad: mov    [5708],cx // W5708
// 0x88b1: add    di,02
// 0x88b4: mov    cx,[di]
// 0x88b6: mov    [5704],cx // W5704
// 0x88ba: mov    di,[569B] // VIN
// 0x88be: mov    cx,[di]
// 0x88c0: mov    [57EC],cx // YMIN
// 0x88c4: mov    [57F7],cx // YMAX
// 0x88c8: mov    cx,[5686] // #IN
// 0x88cc: mov    ax,[di]
// 0x88ce: mov    [5714],ax // W5714
// 0x88d2: add    di,02
// 0x88d5: mov    bx,[di]
// 0x88d7: mov    [5710],bx // W5710
// 0x88db: add    di,02
// 0x88de: mov    dx,[5708] // W5708
// 0x88e2: cmp    ax,dx
// 0x88e4: jnz    88FF
// 0x88e6: inc    word ptr [57FB] // #HORIZ
// 0x88ea: cmp    bx,[5704] // W5704
// 0x88ee: jns    88F7
// 0x88f0: push   word ptr [5704] // W5704
// 0x88f4: push   bx
// 0x88f5: jmp    88FC
// 0x88f7: push   bx
// 0x88f8: push   word ptr [5704] // W5704
// 0x88fc: push   ax
// 0x88fd: jmp    8937
// 0x88ff: mov    dx,[57EC] // YMIN
// 0x8903: cmp    dx,ax
// 0x8905: jle    890D
// 0x8907: mov    [57EC],ax // YMIN
// 0x890b: jmp    8919
// 0x890d: mov    dx,[57F7] // YMAX
// 0x8911: cmp    dx,ax
// 0x8913: jns    8919
// 0x8915: mov    [57F7],ax // YMAX
// 0x8919: xor    dx,dx
// 0x891b: mov    bx,[5708] // W5708
// 0x891f: cmp    bx,ax
// 0x8921: jle    8924
// 0x8923: inc    dx
// 0x8924: mov    [57DD],dx // ELEMENT
// 0x8928: add    dx,[57D9] // SCAN
// 0x892c: mov    [57E1],dx // SCAN+
// 0x8930: push   cx
// 0x8931: push   di
// 0x8932: call   87E1
// 0x8935: pop    di
// 0x8936: pop    cx
// 0x8937: mov    ax,[5714] // W5714
// 0x893b: mov    [5708],ax // W5708
// 0x893f: mov    ax,[5710] // W5710
// 0x8943: mov    [5704],ax // W5704
// 0x8947: dec    cx
// 0x8948: jz     894D
// 0x894a: jmp    88CC
// 0x894d: cmp    [57FB],cx // #HORIZ
// 0x8951: jle    898F
// 0x8953: mov    ax,0900
// 0x8956: mov    [5708],ax // W5708
// 0x895a: mov    cx,[57FB] // #HORIZ
// 0x895e: pop    dx
// 0x895f: mov    di,dx
// 0x8961: shl    di,1
// 0x8963: add    di,[57D9] // SCAN
// 0x8967: cmp    dx,[5708] // W5708
// 0x896b: jnz    8982
// 0x896d: pop    ax
// 0x896e: mov    ah,[di]
// 0x8970: cmp    al,ah
// 0x8972: jns    8976
// 0x8974: mov    [di],al
// 0x8976: inc    di
// 0x8977: pop    ax
// 0x8978: mov    ah,[di]
// 0x897a: cmp    al,ah
// 0x897c: jle    8980
// 0x897e: mov    [di],al
// 0x8980: jmp    898D
// 0x8982: mov    [5708],dx // W5708
// 0x8986: pop    ax
// 0x8987: mov    [di],al
// 0x8989: pop    ax
// 0x898a: inc    di
// 0x898b: mov    [di],al
// 0x898d: loop   895E
// 0x898f: pop    di
// 0x8990: lodsw
// 0x8991: mov    bx,ax
// 0x8993: jmp    word ptr [bx]

// ================================================
// 0x8995: WORD 'SETCLIPWINDOW' codep=0x224c wordp=0x89a1 params=4 returns=0
// ================================================

void SETCLIPWINDOW() // SETCLIPWINDOW
{
  Push(Read16(regsp)); // DUP
  Push(pp_ILEFT); // ILEFT
  Store_3(); // !_3
  Push(pp_CLIP_dash_TABLE + 0x0012); // CLIP-TABLE 0x0012 +
  Store_3(); // !_3
  Push(Read16(regsp)); // DUP
  Push(pp_IBELOW); // IBELOW
  Store_3(); // !_3
  Push(pp_CLIP_dash_TABLE + 0x000d); // CLIP-TABLE 0x000d +
  Store_3(); // !_3
  Push(Read16(regsp)); // DUP
  Push(pp_IRIGHT); // IRIGHT
  Store_3(); // !_3
  Push(pp_CLIP_dash_TABLE + 8); // CLIP-TABLE 8 +
  Store_3(); // !_3
  Push(Read16(regsp)); // DUP
  Push(pp_IABOVE); // IABOVE
  Store_3(); // !_3
  Push(pp_CLIP_dash_TABLE + 3); // CLIP-TABLE 3 +
  Store_3(); // !_3
}


// ================================================
// 0x89df: WORD 'VCLIPSET' codep=0x224c wordp=0x89eb params=0 returns=0
// ================================================

void VCLIPSET() // VCLIPSET
{
  Push(0x0077);
  Push(0x0047);
  Push(0);
  Push(0);
  SETCLIPWINDOW(); // SETCLIPWINDOW
}


// ================================================
// 0x89fb: WORD 'DCLIPSET' codep=0x224c wordp=0x8a07 params=0 returns=0
// ================================================

void DCLIPSET() // DCLIPSET
{
  Push(0x00c7);
  Push(0x009f);
  Push(0);
  Push(0);
  SETCLIPWINDOW(); // SETCLIPWINDOW
}


// ================================================
// 0x8a17: WORD 'W8A19' codep=0x224c wordp=0x8a19 params=2 returns=1
// ================================================

void W8A19() // W8A19
{
  Pop(); // DROP
  Push(0x00c7);
  SWAP(); // SWAP
  _dash_(); // -
  Push(Pop() * 0x0028); //  0x0028 *
}


// ================================================
// 0x8a2b: WORD 'W8A2D' codep=0x8a2d wordp=0x8a2d
// ================================================
// 0x8a2d: pop    ax
// 0x8a2e: shr    ax,1
// 0x8a30: pop    cx
// 0x8a31: mov    bx,00C7
// 0x8a34: sub    bx,cx
// 0x8a36: test   bx,0001
// 0x8a3a: jz     8A42
// 0x8a3c: add    ax,2000
// 0x8a3f: and    bx,FE
// 0x8a42: xchg   ax,bx
// 0x8a43: mov    cx,0028
// 0x8a46: mul    cx
// 0x8a48: add    bx,ax
// 0x8a4a: mov    ax,bx
// 0x8a4c: push   ax
// 0x8a4d: lodsw
// 0x8a4e: mov    bx,ax
// 0x8a50: jmp    word ptr [bx]

// ================================================
// 0x8a52: WORD 'W8A54' codep=0x224c wordp=0x8a54 params=2 returns=3
// ================================================

void W8A54() // W8A54
{
  Push(Pop() + 0x0028); //  0x0028 +
  SWAP(); // SWAP
  Push(Pop() - 0x0111); //  0x0111 -
  ABS(); // ABS
  SWAP(); // SWAP
  Push(8);
  _slash_(); // /
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(4);
  MOD(); // MOD
  Push(Pop() * 0x2000); //  0x2000 *
  SWAP(); // SWAP
  Push(4);
  _slash_(); // /
  Push(Pop() * 0x005a); //  0x005a *
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
}


// ================================================
// 0x8a8a: WORD '?HERCULES' codep=0x224c wordp=0x8a96 params=0 returns=1
// ================================================

void IsHERCULES() // ?HERCULES
{
  Push(Read16(pp_MONITOR)==4?1:0); // MONITOR @ 4 =
}


// ================================================
// 0x8aa0: WORD 'YTABLE.ADDRESS' codep=0x224c wordp=0x8aa2 params=1 returns=1
// ================================================

void YTABLE_dot_ADDRESS() // YTABLE.ADDRESS
{
  Push(Pop() * 2 + pp_YTABLE); //  2* YTABLE +
}


// ================================================
// 0x8aaa: WORD 'BLD-DIS' codep=0x224c wordp=0x8ab6 params=0 returns=1
// ================================================

void BLD_dash_DIS() // BLD-DIS
{
  unsigned short int i, imax;
  IsHERCULES(); // ?HERCULES
  if (Pop() != 0)
  {
    Push(0x8a54); // 'W8A54'
  } else
  {
    Push(Read16(pp_IsEGA)); // ?EGA @
    if (Pop() != 0)
    {
      Push(0x8a19); // 'W8A19'
    } else
    {
      Push(0x8a2d); // 'W8A2D'
    }
  }

  i = 0;
  imax = 0x00c8;
  do // (DO)
  {
    Push(i); // I
    Push(0);
    Push(3);
    PICK(); // PICK
    EXECUTE(); // EXECUTE
    Push(i); // I
    YTABLE_dot_ADDRESS(); // YTABLE.ADDRESS
    Store_3(); // !_3
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0x8af8: WORD 'BLD-MV' codep=0x224c wordp=0x8b03 params=0 returns=0
// ================================================

void BLD_dash_MV() // BLD-MV
{
  unsigned short int i, imax;

  i = 0;
  imax = 0x0078;
  do // (DO)
  {
    Push(0);
    Push(i & 1); // I 1 AND
    if (Pop() == 0) goto label1;
    Push(Read16(pp_IsEGA)==0?1:0); // ?EGA @ 0=
    if (Pop() == 0) goto label1;
    Push(Pop() + 0x0870); //  0x0870 +
    goto label1;

    label1:
    Push(i); // I
    Push(Read16(pp_IsEGA)==0?1:0); // ?EGA @ 0=
    if (Pop() != 0)
    {
      Push((Pop() >> 1) * 0x0024); //  2/ 0x0024 *
    } else
    {
      Push(Pop() * 0x0012); //  0x0012 *
    }
    Push(Pop() + Pop()); // +
    Push(pp_VYTABLE + i * 2); // VYTABLE I 2* +
    Store_3(); // !_3
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0x8b5b: WORD 'HID-DIS' codep=0x224c wordp=0x8b5d params=0 returns=0
// ================================================

void HID_dash_DIS() // HID-DIS
{
  unsigned short int i, imax;
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    BLD_dash_DIS(); // BLD-DIS
    return;
  }
  Push(0);

  i = 0;
  imax = 0x00c8;
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(i); // I
    YTABLE_dot_ADDRESS(); // YTABLE.ADDRESS
    Store_3(); // !_3
    Push(Pop() + 0x0050); //  0x0050 +
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0x8b8b: WORD '?HID-DIS' codep=0x224c wordp=0x8b8d params=0 returns=1
// ================================================

void IsHID_dash_DIS() // ?HID-DIS
{
  Push(0);
  YTABLE_dot_ADDRESS(); // YTABLE.ADDRESS
  Push(Read16(Pop())==0?1:0); //  @ 0=
}


// ================================================
// 0x8b97: WORD '>MAINVIEW' codep=0x224c wordp=0x8ba3 params=0 returns=0
// ================================================

void _gt_MAINVIEW() // >MAINVIEW
{
  Push(pp_VYTABLE); // VYTABLE
  Push(pp_YTABL); // YTABL
  Store_3(); // !_3
  Push(Read16(pp_HBUF_dash_SEG)); // HBUF-SEG @
  Push(pp_BUF_dash_SEG); // BUF-SEG
  Store_3(); // !_3
  Push(0x10e0);
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    Push(Pop() >> 1); //  2/
  }
  Push(pp_BUF_dash_CNT); // BUF-CNT
  Store_3(); // !_3
}


// ================================================
// 0x8bc5: WORD '>DISPLAY' codep=0x224c wordp=0x8bd1 params=0 returns=0
// ================================================

void _gt_DISPLAY() // >DISPLAY
{
  IsHID_dash_DIS(); // ?HID-DIS
  if (Pop() != 0)
  {
    BLD_dash_DIS(); // BLD-DIS
  }
  Push(pp_YTABLE); // YTABLE
  Push(pp_YTABL); // YTABL
  Store_3(); // !_3
  Push(Read16(pp_DBUF_dash_SEG)); // DBUF-SEG @
  Push(pp_BUF_dash_SEG); // BUF-SEG
  Store_3(); // !_3
  Push(Read16(cc_DBUF_dash_SIZE)); // DBUF-SIZE
  Push(pp_BUF_dash_CNT); // BUF-CNT
  Store_3(); // !_3
}


// ================================================
// 0x8bef: WORD '>HIDDEN' codep=0x224c wordp=0x8bfb params=0 returns=0
// ================================================

void _gt_HIDDEN() // >HIDDEN
{
  Push(Read16(pp_IsEGA)==0?1:0); // ?EGA @ 0=
  IsHID_dash_DIS(); // ?HID-DIS
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    HID_dash_DIS(); // HID-DIS
  }
  Push(pp_YTABLE); // YTABLE
  Push(pp_YTABL); // YTABL
  Store_3(); // !_3
  Push(Read16(pp_HBUF_dash_SEG)); // HBUF-SEG @
  Push(pp_BUF_dash_SEG); // BUF-SEG
  Store_3(); // !_3
  Push(Read16(cc_DBUF_dash_SIZE)); // DBUF-SIZE
  Push(Read16(pp_MONITOR)==4?1:0); // MONITOR @ 4 =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(0x4000);
  }
  Push(pp_BUF_dash_CNT); // BUF-CNT
  Store_3(); // !_3
}


// ================================================
// 0x8c35: WORD 'SET6845' codep=0x1d29 wordp=0x8c41 params=0 returns=1
// ================================================
// 0x8c41: mov    cx,000E
// 0x8c44: xor    ah,ah
// 0x8c46: mov    al,ah
// 0x8c48: out    dx,al
// 0x8c49: inc    dx
// 0x8c4a: lodsb
// 0x8c4b: out    dx,al
// 0x8c4c: add    ah,01
// 0x8c4f: dec    dx
// 0x8c50: loop   8C46
// 0x8c52: ret    


// ================================================
// 0x8c53: WORD 'GIBM' codep=0x1d29 wordp=0x8c5c
// ================================================
// 0x8c5c: db 0x38 0x28 0x2d 0x0a 0x7f 0x06 0x64 0x70 0x02 0x01 0x08 0x08 0x00 0x00 '8(-  dp      '

// ================================================
// 0x8c6a: WORD 'GHERC' codep=0x1d29 wordp=0x8c74
// ================================================
// 0x8c74: db 0x35 0x2d 0x2e 0x07 0x5b 0x02 0x57 0x57 0x02 0x03 0x00 0x00 0x00 0x00 '5-. [ WW      '

// ================================================
// 0x8c82: WORD 'THERC' codep=0x1d29 wordp=0x8c8c
// ================================================
// 0x8c8c: db 0x61 0x50 0x52 0x0f 0x19 0x06 0x19 0x19 0x02 0x0d 0x0b 0x0c 0x00 0x00 'aPR           '

// ================================================
// 0x8c9a: WORD '>HGRAPH' codep=0x1d29 wordp=0x8ca6 params=0 returns=1
// ================================================
// 0x8ca6: mov    dx,03B8
// 0x8ca9: mov    al,02
// 0x8cab: out    dx,al
// 0x8cac: mov    al,01
// 0x8cae: mov    dx,03BF
// 0x8cb1: out    dx,al
// 0x8cb2: mov    dx,03B4
// 0x8cb5: mov    si,8C74
// 0x8cb8: call   8C41
// 0x8cbb: mov    dx,03B8
// 0x8cbe: mov    al,0A
// 0x8cc0: out    dx,al
// 0x8cc1: ret    


// ================================================
// 0x8cc2: WORD '>HTEXT' codep=0x1d29 wordp=0x8ccd params=0 returns=1
// ================================================
// 0x8ccd: mov    dx,03B8
// 0x8cd0: mov    al,20
// 0x8cd2: out    dx,al
// 0x8cd3: mov    al,00
// 0x8cd5: mov    dx,03BF
// 0x8cd8: out    dx,al
// 0x8cd9: mov    dx,03B4
// 0x8cdc: mov    si,8C8C
// 0x8cdf: call   8C41
// 0x8ce2: mov    dx,03B8
// 0x8ce5: mov    al,28
// 0x8ce7: out    dx,al
// 0x8ce8: ret    


// ================================================
// 0x8ce9: WORD 'W8CEB' codep=0x1d29 wordp=0x8ceb params=0 returns=1
// ================================================
// 0x8ceb: mov    ax,008D
// 0x8cee: int    10
// 0x8cf0: mov    dx,03CE
// 0x8cf3: mov    al,01
// 0x8cf5: mov    ah,0F
// 0x8cf7: out    dx,al
// 0x8cf8: inc    dx
// 0x8cf9: xchg   ah,al
// 0x8cfb: out    dx,al
// 0x8cfc: ret    


// ================================================
// 0x8cfd: WORD 'DISPLAY-WAIT' codep=0x8d09 wordp=0x8d09 params=0 returns=0
// ================================================
// 0x8d09: mov    dx,03DA
// 0x8d0c: mov    ax,0004
// 0x8d0f: sub    ax,[584A] // MONITOR
// 0x8d13: jnz    8D18
// 0x8d15: mov    dx,03BA
// 0x8d18: mov    ax,[5DA3] // ?EGA
// 0x8d1c: test   ax,00FF
// 0x8d1f: jz     8D26
// 0x8d21: mov    cx,0008
// 0x8d24: jmp    8D29
// 0x8d26: mov    cx,0001
// 0x8d29: in     al,dx
// 0x8d2a: and    ax,cx
// 0x8d2c: jnz    8D29
// 0x8d2e: in     al,dx
// 0x8d2f: and    ax,cx
// 0x8d31: jz     8D2E
// 0x8d33: in     al,dx
// 0x8d34: and    ax,cx
// 0x8d36: jnz    8D33
// 0x8d38: lodsw
// 0x8d39: mov    bx,ax
// 0x8d3b: jmp    word ptr [bx]

// ================================================
// 0x8d3d: WORD '>TANDY' codep=0x1d29 wordp=0x8d48 params=0 returns=1
// ================================================
// 0x8d48: mov    al,03
// 0x8d4a: mov    dx,03DA
// 0x8d4d: out    dx,al
// 0x8d4e: mov    al,10
// 0x8d50: mov    dx,03DE
// 0x8d53: out    dx,al
// 0x8d54: mov    al,01
// 0x8d56: mov    dx,03DA
// 0x8d59: out    dx,al
// 0x8d5a: mov    al,0F
// 0x8d5c: mov    dx,03DE
// 0x8d5f: out    dx,al
// 0x8d60: mov    bx,0A27
// 0x8d63: ret    


// ================================================
// 0x8d64: WORD 'W8D66' codep=0x8d66 wordp=0x8d66
// ================================================
// 0x8d66: pop    dx
// 0x8d67: push   ds
// 0x8d68: xor    ax,ax
// 0x8d6a: mov    ds,ax
// 0x8d6c: mov    bx,0410
// 0x8d6f: mov    [bx],dx
// 0x8d71: pop    ds
// 0x8d72: lodsw
// 0x8d73: mov    bx,ax
// 0x8d75: jmp    word ptr [bx]

// ================================================
// 0x8d77: WORD '>MONO' codep=0x224c wordp=0x8d81
// ================================================

void _gt_MONO() // >MONO
{
  Push(0x0071);
  W8D66(); // W8D66
}


// ================================================
// 0x8d89: WORD '>LORES' codep=0x8d8b wordp=0x8d8b params=0 returns=0
// ================================================
// 0x8d8b: push   si
// 0x8d8c: push   di
// 0x8d8d: mov    di,[584A] // MONITOR
// 0x8d91: cmp    di,04
// 0x8d94: jnz    8D9B
// 0x8d96: call   8CA6
// 0x8d99: jmp    8DE7
// 0x8d9b: mov    ax,[5DA3] // ?EGA
// 0x8d9f: test   ax,00FF
// 0x8da2: jz     8DB5
// 0x8da4: call   8CEB
// 0x8da7: mov    dx,03CE
// 0x8daa: mov    al,01
// 0x8dac: mov    ah,0F
// 0x8dae: out    dx,al
// 0x8daf: inc    dx
// 0x8db0: xchg   ah,al
// 0x8db2: out    dx,al
// 0x8db3: jmp    8DE7
// 0x8db5: mov    dx,03D4
// 0x8db8: mov    si,8C5C
// 0x8dbb: call   8C41
// 0x8dbe: cmp    word ptr [84EC],01 // ?TANDRG
// 0x8dc3: jnz    8DCA
// 0x8dc5: call   8D48
// 0x8dc8: jmp    8DCD
// 0x8dca: mov    bx,1A27
// 0x8dcd: mov    dx,03D8
// 0x8dd0: cmp    di,01
// 0x8dd3: jnz    8DD8
// 0x8dd5: mov    bx,1E27
// 0x8dd8: cmp    di,02
// 0x8ddb: jnz    8DE0
// 0x8ddd: mov    bx,2A20
// 0x8de0: mov    al,bh
// 0x8de2: out    dx,al
// 0x8de3: inc    dx
// 0x8de4: mov    al,bl
// 0x8de6: out    dx,al
// 0x8de7: pop    di
// 0x8de8: pop    si
// 0x8de9: lodsw
// 0x8dea: mov    bx,ax
// 0x8dec: jmp    word ptr [bx]

// ================================================
// 0x8dee: WORD '>ALPHACODE' codep=0x8df0 wordp=0x8df0 params=0 returns=0
// ================================================
// 0x8df0: push   si
// 0x8df1: push   di
// 0x8df2: mov    di,[584A] // MONITOR
// 0x8df6: cmp    di,04
// 0x8df9: jnz    8E00
// 0x8dfb: call   8CCD
// 0x8dfe: jmp    8E05
// 0x8e00: mov    ax,0002
// 0x8e03: int    10
// 0x8e05: pop    di
// 0x8e06: pop    si
// 0x8e07: lodsw
// 0x8e08: mov    bx,ax
// 0x8e0a: jmp    word ptr [bx]

// ================================================
// 0x8e0c: WORD '>ALPHA' codep=0x224c wordp=0x8e17 params=0 returns=0
// ================================================

void _gt_ALPHA() // >ALPHA
{
  _gt_ALPHACODE(); // >ALPHACODE
}


// ================================================
// 0x8e1b: WORD '>A' codep=0x224c wordp=0x8e22 params=0 returns=0
// ================================================

void _gt_A() // >A
{
  _gt_ALPHA(); // >ALPHA
}


// ================================================
// 0x8e26: WORD 'COPYLIN' codep=0x1d29 wordp=0x8e32 params=0 returns=1
// ================================================
// 0x8e32: mov    al,05
// 0x8e34: mov    ah,01
// 0x8e36: mov    dx,03CE
// 0x8e39: out    dx,al
// 0x8e3a: inc    dx
// 0x8e3b: xchg   ah,al
// 0x8e3d: out    dx,al
// 0x8e3e: repz   
// 0x8e3f: movsb
// 0x8e40: mov    al,05
// 0x8e42: mov    ah,00
// 0x8e44: mov    dx,03CE
// 0x8e47: out    dx,al
// 0x8e48: inc    dx
// 0x8e49: xchg   ah,al
// 0x8e4b: out    dx,al
// 0x8e4c: ret    


// ================================================
// 0x8e4d: WORD 'W8E4F' codep=0x8e4f wordp=0x8e4f
// ================================================
// 0x8e4f: pop    bx
// 0x8e50: pop    dx
// 0x8e51: pop    cx
// 0x8e52: pop    ax
// 0x8e53: push   ds
// 0x8e54: push   si
// 0x8e55: push   es
// 0x8e56: push   di
// 0x8e57: mov    di,bx
// 0x8e59: mov    es,dx
// 0x8e5b: mov    si,cx
// 0x8e5d: mov    ds,ax
// 0x8e5f: mov    cx,2000
// 0x8e62: call   8E32
// 0x8e65: pop    di
// 0x8e66: pop    es
// 0x8e67: pop    si
// 0x8e68: pop    ds
// 0x8e69: lodsw
// 0x8e6a: mov    bx,ax
// 0x8e6c: jmp    word ptr [bx]

// ================================================
// 0x8e6e: WORD 'SCANLINE' codep=0x224c wordp=0x8e70 params=1 returns=2
// ================================================

void SCANLINE() // SCANLINE
{
  Push(Read16(pp_DBUF_dash_SEG)); // DBUF-SEG @
  SWAP(); // SWAP
  YTABLE_dot_ADDRESS(); // YTABLE.ADDRESS
  Push(Read16(Pop())); //  @
}


// ================================================
// 0x8e7c: WORD '|DISPLAY' codep=0x224c wordp=0x8e88 params=2 returns=0
// ================================================

void _v_DISPLAY() // |DISPLAY
{
  unsigned short int a, i, imax;
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    Push(Read16(pp_DBUF_dash_SEG)); // DBUF-SEG @
    SWAP(); // SWAP
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      SWAP(); // SWAP
    }
    Push(0);
    SWAP(); // SWAP
    Push(0);
    W8E4F(); // W8E4F
    return;
  }
  a = Pop(); // >R

  i = 0;
  imax = 0x00c8;
  do // (DO)
  {
    Push(i); // I
    SCANLINE(); // SCANLINE
    Push(3);
    PICK(); // PICK
    Push(i * 0x0050); // I 0x0050 *
    Push(a); // J
    if (Pop() != 0)
    {
      _2SWAP(); // 2SWAP
    }
    Push(0x0050);
    LCMOVE(); // LCMOVE
    i++;
  } while(i<imax); // (LOOP)

  Push(a); // R>
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0x8edc: WORD '>LORES_2' codep=0x224c wordp=0x8ee7
// ================================================

void _gt_LORES_2() // >LORES_2
{
  DISPLAY_dash_WAIT(); // DISPLAY-WAIT
  _gt_LORES(); // >LORES
  Push(Read16(pp_MONITOR)); // MONITOR @
  COLORCA(); // COLORCA
}


// ================================================
// 0x8ef3: WORD 'SAVE-SCR' codep=0x224c wordp=0x8eff params=0 returns=0
// ================================================

void SAVE_dash_SCR() // SAVE-SCR
{
  Push(Read16(pp_HBUF_dash_SEG)); // HBUF-SEG @
  Push(0);
  _v_DISPLAY(); // |DISPLAY
}


// ================================================
// 0x8f09: WORD 'SCR-RES' codep=0x224c wordp=0x8f15 params=0 returns=0
// ================================================

void SCR_dash_RES() // SCR-RES
{
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    Push(Read16(pp_HBUF_dash_SEG)); // HBUF-SEG @
    Push(0);
    Push(Read16(pp_DBUF_dash_SEG)); // DBUF-SEG @
    OVER(); // OVER
    DISPLAY_dash_WAIT(); // DISPLAY-WAIT
    W8E4F(); // W8E4F
    return;
  }
  Push(Read16(pp_HBUF_dash_SEG)); // HBUF-SEG @
  Push(1);
  _v_DISPLAY(); // |DISPLAY
}


// ================================================
// 0x8f3b: WORD 'W8F3D' codep=0x1d29 wordp=0x8f3d params=0 returns=1
// ================================================
// orphan
// 0x8f3d: push   es
// 0x8f3e: push   di
// 0x8f3f: mov    ah,0F
// 0x8f41: mov    dx,03C4
// 0x8f44: mov    al,02
// 0x8f46: out    dx,al
// 0x8f47: inc    dx
// 0x8f48: xchg   ah,al
// 0x8f4a: out    dx,al
// 0x8f4b: mov    dx,03CE
// 0x8f4e: mov    al,01
// 0x8f50: mov    ah,0F
// 0x8f52: out    dx,al
// 0x8f53: inc    dx
// 0x8f54: xchg   ah,al
// 0x8f56: out    dx,al
// 0x8f57: mov    dx,03CE
// 0x8f5a: mov    ah,[55F2] // COLOR
// 0x8f5e: mov    al,00
// 0x8f60: out    dx,al
// 0x8f61: inc    dx
// 0x8f62: xchg   ah,al
// 0x8f64: out    dx,al
// 0x8f65: dec    dx
// 0x8f66: mov    ah,FF
// 0x8f68: mov    al,08
// 0x8f6a: out    dx,al
// 0x8f6b: inc    dx
// 0x8f6c: xchg   ah,al
// 0x8f6e: out    dx,al
// 0x8f6f: mov    ax,[5648] // BUF-SEG
// 0x8f73: mov    es,ax
// 0x8f75: mov    di,0000
// 0x8f78: mov    cx,[5656] // BUF-CNT
// 0x8f7c: repz   
// 0x8f7d: stosb
// 0x8f7e: pop    di
// 0x8f7f: pop    es
// 0x8f80: ret    


// ================================================
// 0x8f81: WORD 'BFILL' codep=0x8f8b wordp=0x8f8b params=0 returns=0
// ================================================
// 0x8f8b: mov    ax,[5DA3] // ?EGA
// 0x8f8f: test   ax,00FF
// 0x8f92: jz     8F99
// 0x8f94: call   8F3D
// 0x8f97: jmp    8FB3
// 0x8f99: push   di
// 0x8f9a: mov    ax,[55F2] // COLOR
// 0x8f9e: mov    ah,al
// 0x8fa0: push   es
// 0x8fa1: mov    cx,[5648] // BUF-SEG
// 0x8fa5: mov    es,cx
// 0x8fa7: mov    cx,[5656] // BUF-CNT
// 0x8fab: shr    cx,1
// 0x8fad: xor    di,di
// 0x8faf: repz   
// 0x8fb0: stosw
// 0x8fb1: pop    es
// 0x8fb2: pop    di
// 0x8fb3: lodsw
// 0x8fb4: mov    bx,ax
// 0x8fb6: jmp    word ptr [bx]

// ================================================
// 0x8fb8: WORD 'DARK' codep=0x224c wordp=0x8fc1 params=0 returns=0
// ================================================

void DARK() // DARK
{
  GetCOLOR(); // @COLOR
  GetColor(BLACK);
  Push(pp_COLOR); // COLOR
  Store_3(); // !_3
  BFILL(); // BFILL
  Push(pp_COLOR); // COLOR
  Store_3(); // !_3
}


// ================================================
// 0x8fd1: WORD 'BYE' codep=0x224c wordp=0x8fd9 params=0 returns=0
// ================================================

void BYE() // BYE
{
  _gt_ALPHA(); // >ALPHA
  BEEPOFF(); // BEEPOFF
  IsHERCULES(); // ?HERCULES
  if (Pop() != 0)
  {
    _gt_DISPLAY(); // >DISPLAY
    DARK(); // DARK
    Exec("PAGE"); // call of word 0x274c '(PAGE)'
  }
  BYE_2(); // BYE_2
}


// ================================================
// 0x8fed: WORD 'DUMMY' codep=0x1d29 wordp=0x8ff7
// ================================================
// 0x8ff7: db 0xcb ' '

// ================================================
// 0x8ff8: WORD 'LPLOT' codep=0x9002 wordp=0x9002 params=2 returns=0
// ================================================
// 0x9002: call   8C16:029D
// 0x9007: lodsw
// 0x9008: mov    bx,ax
// 0x900a: jmp    word ptr [bx]

// ================================================
// 0x900c: WORD 'LXPLOT' codep=0x9017 wordp=0x9017
// ================================================
// 0x9017: call   8C16:02EC
// 0x901c: lodsw
// 0x901d: mov    bx,ax
// 0x901f: jmp    word ptr [bx]

// ================================================
// 0x9021: WORD '{BLT}' codep=0x902b wordp=0x902b params=0 returns=0
// ================================================
// 0x902b: call   8C16:020D
// 0x9030: lodsw
// 0x9031: mov    bx,ax
// 0x9033: jmp    word ptr [bx]

// ================================================
// 0x9035: WORD 'LLINE' codep=0x903f wordp=0x903f params=4 returns=0
// ================================================
// 0x903f: call   8C16:0336
// 0x9044: lodsw
// 0x9045: mov    bx,ax
// 0x9047: jmp    word ptr [bx]

// ================================================
// 0x9049: WORD 'LFILLPOLY' codep=0x9055 wordp=0x9055 params=0 returns=0
// ================================================
// 0x9055: call   8C16:041B
// 0x905a: lodsw
// 0x905b: mov    bx,ax
// 0x905d: jmp    word ptr [bx]

// ================================================
// 0x905f: WORD 'LCOPYBLK' codep=0x906b wordp=0x906b params=6 returns=0
// ================================================
// 0x906b: call   8C16:05C1
// 0x9070: lodsw
// 0x9071: mov    bx,ax
// 0x9073: jmp    word ptr [bx]

// ================================================
// 0x9075: WORD 'TILEFILL' codep=0x9081 wordp=0x9081
// ================================================
// 0x9081: call   8C16:0635
// 0x9086: lodsw
// 0x9087: mov    bx,ax
// 0x9089: jmp    word ptr [bx]

// ================================================
// 0x908b: WORD 'SQLPLOT' codep=0x9097 wordp=0x9097
// ================================================
// 0x9097: call   8C16:06AA
// 0x909c: lodsw
// 0x909d: mov    bx,ax
// 0x909f: jmp    word ptr [bx]

// ================================================
// 0x90a1: WORD 'V>DISPLAY' codep=0x90ad wordp=0x90ad params=0 returns=0
// ================================================
// 0x90ad: call   8C16:0052
// 0x90b2: lodsw
// 0x90b3: mov    bx,ax
// 0x90b5: jmp    word ptr [bx]

// ================================================
// 0x90b7: WORD 'EEXTENT' codep=0x90c3 wordp=0x90c3
// ================================================
// 0x90c3: call   8C16:08FE
// 0x90c8: lodsw
// 0x90c9: mov    bx,ax
// 0x90cb: jmp    word ptr [bx]

// ================================================
// 0x90cd: WORD '{.ELLIP}' codep=0x1d29 wordp=0x90d9
// ================================================
// 0x90d9: db 0x9a 0xe5 0x08 0x16 0x8c 0xc3 '      '

// ================================================
// 0x90df: WORD '.{SCANELLIP}' codep=0x1d29 wordp=0x90eb
// ================================================
// 0x90eb: db 0x9a 0xcb 0x08 0x16 0x8c 0xc3 '      '

// ================================================
// 0x90f1: WORD 'ARC' codep=0x90f9 wordp=0x90f9
// ================================================
// 0x90f9: call   8C16:0789
// 0x90fe: lodsw
// 0x90ff: mov    bx,ax
// 0x9101: jmp    word ptr [bx]

// ================================================
// 0x9103: WORD 'L@PIXEL' codep=0x910f wordp=0x910f
// ================================================
// 0x910f: call   8C16:00F4
// 0x9114: lodsw
// 0x9115: mov    bx,ax
// 0x9117: jmp    word ptr [bx]

// ================================================
// 0x9119: WORD '(FVLINE' codep=0x1d29 wordp=0x9125
// ================================================
// 0x9125: db 0x9a 0x20 0x20 0x16 0x8c 0xc3 '      '

// ================================================
// 0x912b: WORD 'EGA-OFF' codep=0x1d29 wordp=0x9137
// ================================================
// 0x9137: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x6f 0x66 0x66 0x73 0x65 0x74 0x73 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x5c 0x20 0x47 0x52 0x43 0x4f ' ALLOT offsets          \ GRCO'

// ================================================
// 0x9155: WORD 'CGA-OFF' codep=0x1d29 wordp=0x9161
// ================================================
// 0x9161: db 0x9d 0x02 0xec 0x02 0x0d 0x02 0x36 0x03 0x1b 0x04 0xc1 0x05 0x35 0x06 0xaa 0x06 0x52 0x00 0xfe 0x08 0xe5 0x08 0xcb 0x08 0x89 0x07 0xf4 0x00 0x20 0x20 '      6     5   R             '

// ================================================
// 0x917f: WORD 'DEF-SEG' codep=0x224c wordp=0x918b params=0 returns=14
// ================================================

void DEF_dash_SEG() // DEF-SEG
{
  unsigned short int i, imax;
  Push(0x9002); // 'LPLOT'
  Push(0x9017); // 'LXPLOT'
  Push(0x902b); // '{BLT}'
  Push(0x903f); // 'LLINE'
  Push(0x9055); // 'LFILLPOLY'
  Push(0x906b); // 'LCOPYBLK'
  Push(0x9081); // 'TILEFILL'
  Push(0x9097); // 'SQLPLOT'
  Push(0x90ad); // 'V>DISPLAY'
  Push(0x90c3); // 'EEXTENT'
  Push(0x90d9); // '{.ELLIP}'
  Push(0x90eb); // '.{SCANELLIP}'
  Push(0x90f9); // 'ARC'
  Push(0x910f); // 'L@PIXEL'
  Push(0x9125); // '(FVLINE'
  Push(Read16(pp_REMSEG)); // REMSEG @

  i = 0;
  imax = 0x001e;
  do // (DO)
  {
    SWAP(); // SWAP
    OVER(); // OVER
    SWAP(); // SWAP
    Push(Pop() + 3); //  3 +
    Store_3(); // !_3
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); // DROP
}


// ================================================
// 0x91e9: WORD 'W91EB' codep=0x224c wordp=0x91eb params=1 returns=14
// ================================================

void W91EB() // W91EB
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  Push(0x9002); // 'LPLOT'
  Push(0x9017); // 'LXPLOT'
  Push(0x902b); // '{BLT}'
  Push(0x903f); // 'LLINE'
  Push(0x9055); // 'LFILLPOLY'
  Push(0x906b); // 'LCOPYBLK'
  Push(0x9081); // 'TILEFILL'
  Push(0x9097); // 'SQLPLOT'
  Push(0x90ad); // 'V>DISPLAY'
  Push(0x90c3); // 'EEXTENT'
  Push(0x90d9); // '{.ELLIP}'
  Push(0x90eb); // '.{SCANELLIP}'
  Push(0x90f9); // 'ARC'
  Push(0x910f); // 'L@PIXEL'
  Push(0x9125); // '(FVLINE'
  Push(a); // R>

  i = 0x001c;
  imax = 0;
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(i); // I
    _plus__at_(); // +@
    ROT(); // ROT
    Push(Pop() + 1); //  1+
    Store_3(); // !_3
    Push(-2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); // DROP
}


// ================================================
// 0x9249: WORD 'DEF-OFF' codep=0x224c wordp=0x9255 params=0 returns=14
// ================================================

void DEF_dash_OFF() // DEF-OFF
{
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    Push(pp_EGA_dash_OFF); // EGA-OFF
  } else
  {
    Push(pp_CGA_dash_OFF); // CGA-OFF
  }
  W91EB(); // W91EB
}


// ================================================
// 0x9269: WORD 'DO-PATC' codep=0x224c wordp=0x9275 params=0 returns=0
// ================================================

void DO_dash_PATC() // DO-PATC
{
  Push(Read16(pp_REMSEG)); // REMSEG @
  Push(0);
  GetDS(); // @DS
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    Push(pp_EGA_dash_OFF); // EGA-OFF
  } else
  {
    Push(pp_CGA_dash_OFF); // CGA-OFF
  }
  Push(0x001e);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0x9295: WORD 'LOAD-CO' codep=0x224c wordp=0x92a1
// ================================================

void LOAD_dash_CO() // LOAD-CO
{
  Push(Read16(pp_REMSEG)); // REMSEG @
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    Push(0x0091);
  } else
  {
    Push(0x0090);
  }
  FILE_st_(); // FILE<
  DO_dash_PATC(); // DO-PATC
  DEF_dash_SEG(); // DEF-SEG
  DEF_dash_OFF(); // DEF-OFF
}


// ================================================
// 0x92c3: WORD 'EGA-BIT' codep=0x1d29 wordp=0x92cf
// ================================================
// 0x92cf: db 0xc0 0x00 0x30 0x00 0x0c 0x00 0x03 0x00 '  0     '

// ================================================
// 0x92d7: WORD 'CGA-BIT' codep=0x1d29 wordp=0x92e3
// ================================================
// 0x92e3: db 0xf0 0x0f '  '

// ================================================
// 0x92e5: WORD 'S/RON' codep=0x92ef wordp=0x92ef
// ================================================
// 0x92ef: mov    dx,03CE
// 0x92f2: mov    al,01
// 0x92f4: mov    ah,0F
// 0x92f6: out    dx,al
// 0x92f7: inc    dx
// 0x92f8: xchg   ah,al
// 0x92fa: out    dx,al
// 0x92fb: lodsw
// 0x92fc: mov    bx,ax
// 0x92fe: jmp    word ptr [bx]

// ================================================
// 0x9300: WORD '(PLOT)' codep=0x1d29 wordp=0x930b params=0 returns=1
// ================================================
// 0x930b: pop    word ptr [5663] // RETURN
// 0x930f: pop    dx
// 0x9310: pop    ax
// 0x9311: shl    dx,1
// 0x9313: add    dx,[563A] // YTABL
// 0x9317: push   dx
// 0x9318: push   ax
// 0x9319: and    ax,0003
// 0x931c: shl    ax,1
// 0x931e: mov    bx,92CF
// 0x9321: add    bx,ax
// 0x9323: mov    dx,[bx]
// 0x9325: pop    ax
// 0x9326: shr    ax,1
// 0x9328: shr    ax,1
// 0x932a: pop    bx
// 0x932b: add    ax,[bx]
// 0x932d: mov    bx,ax
// 0x932f: push   es
// 0x9330: mov    cx,[5648] // BUF-SEG
// 0x9334: mov    es,cx
// 0x9336: mov    ax,dx
// 0x9338: xchg   ah,al
// 0x933a: mov    dx,03CE
// 0x933d: mov    al,08
// 0x933f: out    dx,al
// 0x9340: inc    dx
// 0x9341: xchg   ah,al
// 0x9343: out    dx,al
// 0x9344: mov    dx,03CE
// 0x9347: mov    ah,[55F2] // COLOR
// 0x934b: mov    al,00
// 0x934d: out    dx,al
// 0x934e: inc    dx
// 0x934f: xchg   ah,al
// 0x9351: out    dx,al
// 0x9352: es:    
// 0x9353: mov    al,[bx]
// 0x9355: es:    
// 0x9356: mov    [bx],al
// 0x9358: pop    es
// 0x9359: push   word ptr [5663] // RETURN
// 0x935d: ret    


// ================================================
// 0x935e: WORD 'PLOT' codep=0x9367 wordp=0x9367 params=3 returns=1
// ================================================
// 0x9367: call   930B
// 0x936a: lodsw
// 0x936b: mov    bx,ax
// 0x936d: jmp    word ptr [bx]

// ================================================
// 0x936f: WORD 'SETCOLO' codep=0x937b wordp=0x937b
// ================================================
// 0x937b: mov    dx,03CE
// 0x937e: mov    ah,[55F2] // COLOR
// 0x9382: mov    al,00
// 0x9384: out    dx,al
// 0x9385: inc    dx
// 0x9386: xchg   ah,al
// 0x9388: out    dx,al
// 0x9389: lodsw
// 0x938a: mov    bx,ax
// 0x938c: jmp    word ptr [bx]

// ================================================
// 0x938e: WORD '?EXTENTX' codep=0x9390 wordp=0x9390 params=4 returns=0
// ================================================
// 0x9390: mov    bx,[569B] // VIN
// 0x9394: mov    cx,0004
// 0x9397: pop    word ptr [bx]
// 0x9399: add    bx,02
// 0x939c: loop   9397
// 0x939e: mov    bx,0002
// 0x93a1: mov    [5686],bx // #IN
// 0x93a5: push   di
// 0x93a6: call   8538
// 0x93a9: pop    di
// 0x93aa: lodsw
// 0x93ab: mov    bx,ax
// 0x93ad: jmp    word ptr [bx]

// ================================================
// 0x93af: WORD 'BEXTENT' codep=0x93b1 wordp=0x93b1 params=0 returns=4
// ================================================
// 0x93b1: push   word ptr [586E] // XBLT
// 0x93b5: mov    ax,[5863] // YBLT
// 0x93b9: sub    ax,[5887] // LBLT
// 0x93bd: inc    ax
// 0x93be: push   ax
// 0x93bf: mov    ax,[586E] // XBLT
// 0x93c3: add    ax,[5892] // WBLT
// 0x93c7: dec    ax
// 0x93c8: push   ax
// 0x93c9: push   word ptr [5863] // YBLT
// 0x93cd: lodsw
// 0x93ce: mov    bx,ax
// 0x93d0: jmp    word ptr [bx]

// ================================================
// 0x93d2: WORD 'BLT' codep=0x224c wordp=0x93da params=0 returns=0
// ================================================

void BLT() // BLT
{
  Push(pp_V1); // V1
  Push(pp_VIN); // VIN
  Store_3(); // !_3
  Push(pp_V2); // V2
  Push(pp_OIN); // OIN
  Store_3(); // !_3
  BEXTENT(); // BEXTENT
  IsEXTENTX(); // ?EXTENTX
  Push(Read16(pp_TRJCT)==0?1:0); // TRJCT @ 0=
  if (Pop() == 0) return;
  _co_BLT_cc_(); // {BLT}
}


// ================================================
// 0x93f8: WORD '{1FONT}' codep=0x224c wordp=0x93fa params=1 returns=0
// ================================================

void _co_1FONT_cc_() // {1FONT}
{
  unsigned short int a;
  Push(Read16(pp_BLTSEG)); // BLTSEG @
  a = Pop(); // >R
  Push(Read16(pp_FONTSEG)); // FONTSEG @
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  Push(5);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(Read16(regsp)); // DUP
  Push(0x005b);
  _st_(); // <
  if (Pop() != 0)
  {
    Push((Pop() - 0x0020) * 2 + Read16(cc_W52CD)); //  0x0020 - 2* W52CD +
    Push(pp_ABLT); // ABLT
    Store_3(); // !_3
    Push(3);
    Push(pp_WBLT); // WBLT
    Store_3(); // !_3
    Push(4);
  } else
  {
    Push(((Pop() - 0x005b) * 2) * 2 + Read16(cc_W52D1)); //  0x005b - 2* 2* W52D1 +
    Push(pp_ABLT); // ABLT
    Store_3(); // !_3
    Push(5);
    Push(pp_WBLT); // WBLT
    Store_3(); // !_3
    Push(6);
  }
  BLT(); // BLT
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(a); // R>
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
}


// ================================================
// 0x945e: WORD '{GTYPE}' codep=0x224c wordp=0x9460 params=2 returns=0
// ================================================

void _co_GTYPE_cc_() // {GTYPE}
{
  unsigned short int i, imax;
  _2DUP(); // 2DUP
  _gt_UPPERCASE(); // >UPPERCASE

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop())&0xFF); //  C@
    Exec("EMIT"); // call of word 0x2731 '(EMIT)'
    Push(Pop() + 1); //  1+
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0x9478: WORD '>1FONT' codep=0x224c wordp=0x9483 params=0 returns=0
// ================================================

void _gt_1FONT() // >1FONT
{
  Push(0x93fa); // '{1FONT}'
  Push(0x066d); // 'EMIT'
  EXECUTES(); // EXECUTES
  Push(0x9460); // '{GTYPE}'
  Push(0x06e8); // 'TYPE'
  EXECUTES(); // EXECUTES
}


// ================================================
// 0x9499: WORD '>0FONT' codep=0x224c wordp=0x94a4 params=0 returns=0
// ================================================

void _gt_0FONT() // >0FONT
{
  Push(0x2731); // '(EMIT)'
  Push(0x066d); // 'EMIT'
  EXECUTES(); // EXECUTES
  Push(0x2690); // '(TYPE)'
  Push(0x06e8); // 'TYPE'
  EXECUTES(); // EXECUTES
  Push(0x26ee); // '(CR)'
  Push(0x0644); // 'CR'
  EXECUTES(); // EXECUTES
}


// ================================================
// 0x94c4: WORD '{2FONT}' codep=0x224c wordp=0x94d0 params=1 returns=0
// ================================================

void _co_2FONT_cc_() // {2FONT}
{
  unsigned short int a;
  Push(Read16(pp_BLTSEG)); // BLTSEG @
  a = Pop(); // >R
  Push(Read16(pp_FONTSEG)); // FONTSEG @
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  Push(7);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(Pop() - 0x0020); //  0x0020 -
  Push(Read16(pp_FONTSEG)); // FONTSEG @
  OVER(); // OVER
  Push(Pop() + Read16(cc__7SPACING)); //  7SPACING +
  LC_at_(); // LC@
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(Pop() * 6 + Read16(cc__7CHAR)); //  6 * 7CHAR +
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  DISPLAY_dash_WAIT(); // DISPLAY-WAIT
  BLT(); // BLT
  Push(Read16(pp_WBLT) + 1); // WBLT @ 1+
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(a); // R>
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
}


// ================================================
// 0x951c: WORD '>2FONT' codep=0x224c wordp=0x9527 params=0 returns=0
// ================================================

void _gt_2FONT() // >2FONT
{
  Push(0x94d0); // '{2FONT}'
  Push(0x066d); // 'EMIT'
  EXECUTES(); // EXECUTES
  Push(0x9460); // '{GTYPE}'
  Push(0x06e8); // 'TYPE'
  EXECUTES(); // EXECUTES
}


// ================================================
// 0x953d: WORD '{3FONT}' codep=0x224c wordp=0x953f params=1 returns=0
// ================================================

void _co_3FONT_cc_() // {3FONT}
{
  unsigned short int a;
  Push(Read16(pp_BLTSEG)); // BLTSEG @
  a = Pop(); // >R
  Push(Read16(pp_FONTSEG)); // FONTSEG @
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  Push(9);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(Pop() - 0x0020); //  0x0020 -
  Push(Read16(pp_FONTSEG)); // FONTSEG @
  OVER(); // OVER
  Push(Pop() + Read16(cc__7SPACING)); //  7SPACING +
  LC_at_(); // LC@
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push((Pop() - 0x0021) * 8 + Read16(cc__9CHAR)); //  0x0021 - 8 * 9CHAR +
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  DISPLAY_dash_WAIT(); // DISPLAY-WAIT
  BLT(); // BLT
  Push(Read16(pp_WBLT) + 1); // WBLT @ 1+
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(a); // R>
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
}


// ================================================
// 0x9591: WORD '>3FONT' codep=0x224c wordp=0x959c params=0 returns=0
// ================================================

void _gt_3FONT() // >3FONT
{
  Push(0x953f); // '{3FONT}'
  Push(0x066d); // 'EMIT'
  EXECUTES(); // EXECUTES
  Push(0x9460); // '{GTYPE}'
  Push(0x06e8); // 'TYPE'
  EXECUTES(); // EXECUTES
}


// ================================================
// 0x95b2: WORD 'SHL-BIT' codep=0x95be wordp=0x95be
// ================================================
// 0x95be: pop    ax
// 0x95bf: pop    cx
// 0x95c0: shr    ax,1
// 0x95c2: rcl    cx,1
// 0x95c4: push   cx
// 0x95c5: lodsw
// 0x95c6: mov    bx,ax
// 0x95c8: jmp    word ptr [bx]

// ================================================
// 0x95ca: WORD 'BLK>BUFFER' codep=0x224c wordp=0x95d6 params=1 returns=1
// ================================================

void BLK_gt_BUFFER() // BLK>BUFFER
{
  unsigned short int i, imax;

  i = 0;
  imax = 0x0010;
  do // (DO)
  {
    GetDS(); // @DS
    OVER(); // OVER
    Push(Pop() + i); //  I +
    BLOCK_2(); // BLOCK_2
    Push(Read16(pp_BUF_dash_SEG)); // BUF-SEG @
    Push(i * 0x0400); // I 0x0400 *
    Push(0x0400);
    LCMOVE(); // LCMOVE
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0x9602: WORD '!EPARMS' codep=0x224c wordp=0x9604 params=5 returns=0
// ================================================

void StoreEPARMS() // !EPARMS
{
  Push(pp_XDENOM); // XDENOM
  Store_3(); // !_3
  Push(pp_XNUMER); // XNUMER
  Store_3(); // !_3
  Push(pp_ERAD); // ERAD
  Store_3(); // !_3
  Push(pp_EY); // EY
  Store_3(); // !_3
  Push(pp_EX); // EX
  Store_3(); // !_3
  Push(pp_V1); // V1
  Push(pp_VIN); // VIN
  Store_3(); // !_3
  Push(pp_V2); // V2
  Push(pp_OIN); // OIN
  Store_3(); // !_3
}


// ================================================
// 0x9626: WORD '.ELLIPSE' codep=0x224c wordp=0x9632 params=5 returns=0
// ================================================

void DrawELLIPSE() // .ELLIPSE
{
  StoreEPARMS(); // !EPARMS
  EEXTENT(); // EEXTENT
  IsEXTENTX(); // ?EXTENTX
  Push(Read16(pp_TRJCT)==0?1:0); // TRJCT @ 0=
  if (Pop() == 0) return;
  Push(0x90d9); // '{.ELLIP}'
  Push(Read16(Pop() + 1)); //  1+ @
  Push(pp__st_ARC1_gt_); // <ARC1>
  Store_3(); // !_3
  ARC(); // ARC
}


// ================================================
// 0x9652: WORD '.CIRCLE' codep=0x224c wordp=0x965e params=3 returns=0
// ================================================

void DrawCIRCLE() // .CIRCLE
{
  Push(9);
  Push(0x000f);
  DrawELLIPSE(); // .ELLIPSE
}


// ================================================
// 0x9668: WORD 'FILLELLIP' codep=0x224c wordp=0x9674
// ================================================

void FILLELLIP() // FILLELLIP
{
  StoreEPARMS(); // !EPARMS
  EEXTENT(); // EEXTENT
  IsEXTENTX(); // ?EXTENTX
  Push(Read16(pp_TRJCT)==0?1:0); // TRJCT @ 0=
  if (Pop() == 0) return;
  Push(Read16(pp_EY) + Read16(pp_ERAD)); // EY @ ERAD @ +
  Push(Read16(pp_IABOVE)); // IABOVE @
  MIN(); // MIN
  Push(pp_YMAX); // YMAX
  Store_3(); // !_3
  Push(Read16(pp_EY) - Read16(pp_ERAD)); // EY @ ERAD @ -
  Push(Read16(pp_IBELOW)); // IBELOW @
  MAX(); // MAX
  Push(pp_YMIN); // YMIN
  Store_3(); // !_3
  Push(0x90eb); // '.{SCANELLIP}'
  Push(Read16(Pop() + 1)); //  1+ @
  Push(pp__st_ARC1_gt_); // <ARC1>
  Store_3(); // !_3
  ARC(); // ARC
  LFILLPOLY(); // LFILLPOLY
}


// ================================================
// 0x96be: WORD 'FILLCIRC' codep=0x224c wordp=0x96ca
// ================================================

void FILLCIRC() // FILLCIRC
{
  Push(9);
  Push(0x000f);
  FILLELLIP(); // FILLELLIP
}


// ================================================
// 0x96d4: WORD 'FRAMELEN' codep=0x224c wordp=0x96d6 params=0 returns=0
// ================================================

void FRAMELEN() // FRAMELEN
{
  Push((Read16(pp_LBLT) * Read16(pp_WBLT) + 0x000f >> 4) * 2 + 1); // LBLT @ WBLT @ * 0x000f + 16/ 2* 1+
  Push(pp_LFRAME); // LFRAME
  Store_3(); // !_3
}


// ================================================
// 0x96f2: WORD '.PACKBLT' codep=0x224c wordp=0x96fe params=3 returns=0
// ================================================

void DrawPACKBLT() // .PACKBLT
{
  unsigned short int a, i, imax;
  Push(pp_YBLT); // YBLT
  Store_3(); // !_3
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  Push(Read16(pp_BLTSEG)); // BLTSEG @
  a = Pop(); // >R
  Push(a); // I
  Push(0);
  LC_at_(); // LC@
  Push(Read16(regsp)); // DUP
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(Pop() >> 1); //  2/
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  Push(a); // I
  Push(1);
  LC_at_(); // LC@
  Push(Read16(regsp)); // DUP
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(-(Pop() >> 1)); //  2/ NEGATE
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  FRAMELEN(); // FRAMELEN
  Push(a); // R>
  Push(2);
  LC_at_(); // LC@

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(i * Read16(pp_LFRAME) + 3); // I LFRAME @ * 3 +
    Push(Read16(regsp)); // DUP
    Push(Read16(pp_BLTSEG)); // BLTSEG @
    SWAP(); // SWAP
    LC_at_(); // LC@
    Is_gt_EGA(); // ?>EGA
    Push(pp_COLOR); // COLOR
    Store_3(); // !_3
    Push(Pop() + 1); //  1+
    Push(pp_ABLT); // ABLT
    Store_3(); // !_3
    BLT(); // BLT
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0x976c: WORD 'SET-COLORMAP' codep=0x224c wordp=0x9778 params=0 returns=0
// ================================================

void SET_dash_COLORMAP() // SET-COLORMAP
{
  Push(Read16(pp_MONITOR) - 1); // MONITOR @ 1-
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(!(Pop()==0?1:0)); //  0= NOT
  IsHERCULES(); // ?HERCULES
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(Read16(pp_IsEGA)); // ?EGA @
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(3);
    }
    Push((Pop() - 1) * 5 + (Read16(pp__n_CLRMAP) - 1)); //  1- 5 * #CLRMAP @ 1- +
  } else
  {
    Push(3);
  }
  Push(0x0074);
  SWAP(); // SWAP
  GetRECORD(); // @RECORD
  Push(pp_CMAP); // CMAP
  Push(0x0040);
  CMOVE(); // CMOVE
}


// ================================================
// 0x97c0: WORD 'COLORMAP' codep=0x97cc wordp=0x97cc
// ================================================
// 0x97cc: pop    bx
// 0x97cd: or     bx,bx
// 0x97cf: jns    97D6
// 0x97d1: mov    bx,0000
// 0x97d4: jmp    97DB
// 0x97d6: shr    bx,1
// 0x97d8: and    bx,38
// 0x97db: add    bx,6A3F
// 0x97df: mov    [58CD],bx // TILE-PTR
// 0x97e3: xor    ax,ax
// 0x97e5: mov    al,[bx]
// 0x97e7: mov    [55F2],ax // COLOR
// 0x97eb: add    bx,02
// 0x97ee: mov    al,[bx]
// 0x97f0: mov    [55FF],ax // DCOLOR
// 0x97f4: lodsw
// 0x97f5: mov    bx,ax
// 0x97f7: jmp    word ptr [bx]

// ================================================
// 0x97f9: WORD 'CELLCOLOR' codep=0x224c wordp=0x9805
// ================================================

void CELLCOLOR() // CELLCOLOR
{
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  COLORMAP(); // COLORMAP
}


// ================================================
// 0x980d: WORD '!XYSEED' codep=0x224c wordp=0x9819 params=2 returns=0
// ================================================

void StoreXYSEED() // !XYSEED
{
  Push(pp_SEED); // SEED
  Store_3(); // !_3
  FRND(); // FRND
  SWAP(); // SWAP
  Push(pp_SEED); // SEED
  Store_3(); // !_3
  FRND(); // FRND
  Push(Pop() + Read16(pp_GLOBALSEED)); //  GLOBALSEED @ XOR
  Push(Pop() ^ Pop()); // XOR
  Push(pp_SEED); // SEED
  Store_3(); // !_3
}


// ================================================
// 0x9835: WORD 'BUFFERXY' codep=0x9841 wordp=0x9841
// ================================================
// 0x9841: pop    cx
// 0x9842: pop    ax
// 0x9843: pop    dx
// 0x9844: pop    bx
// 0x9845: sub    dx,[4E53] // YLL
// 0x9849: inc    dx
// 0x984a: or     cx,cx
// 0x984c: jz     9850
// 0x984e: shl    dx,cl
// 0x9850: add    dx,[596B] // YLLDEST
// 0x9854: dec    dx
// 0x9855: sub    bx,[4E49] // XLL
// 0x9859: mov    cx,ax
// 0x985b: or     cx,cx
// 0x985d: jz     9861
// 0x985f: shl    bx,cl
// 0x9861: add    bx,[595D] // XLLDEST
// 0x9865: push   bx
// 0x9866: push   dx
// 0x9867: lodsw
// 0x9868: mov    bx,ax
// 0x986a: jmp    word ptr [bx]

// ================================================
// 0x986c: WORD '.CELL' codep=0x224c wordp=0x986e
// ================================================

void DrawCELL() // .CELL
{
  Push(pp__i__dot_CELL); // '.CELL
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x9874: WORD '.1X2CELL' codep=0x224c wordp=0x9880
// ================================================

void Draw1X2CELL() // .1X2CELL
{
  _2DUP(); // 2DUP
  CELLCOLOR(); // CELLCOLOR
  Push(0);
  Push(1);
  BUFFERXY(); // BUFFERXY
  SQLPLOT(); // SQLPLOT
}


// ================================================
// 0x988e: WORD '.2X2CELL' codep=0x224c wordp=0x989a
// ================================================

void Draw2X2CELL() // .2X2CELL
{
  _2DUP(); // 2DUP
  CELLCOLOR(); // CELLCOLOR
  Push(1);
  Push(1);
  BUFFERXY(); // BUFFERXY
  _2DUP(); // 2DUP
  SQLPLOT(); // SQLPLOT
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
  SQLPLOT(); // SQLPLOT
}


// ================================================
// 0x98b2: WORD '.4X4CELL' codep=0x224c wordp=0x98be
// ================================================

void Draw4X4CELL() // .4X4CELL
{
  _2DUP(); // 2DUP
  CELLCOLOR(); // CELLCOLOR
  Push(2);
  Push(2);
  BUFFERXY(); // BUFFERXY
  Push(4);
  Push(4);
  TILEFILL(); // TILEFILL
}


// ================================================
// 0x98d0: WORD '.8X8CELL' codep=0x224c wordp=0x98dc
// ================================================

void Draw8X8CELL() // .8X8CELL
{
  _2DUP(); // 2DUP
  CELLCOLOR(); // CELLCOLOR
  Push(3);
  Push(3);
  BUFFERXY(); // BUFFERXY
  Push(8);
  Push(8);
  TILEFILL(); // TILEFILL
}


// ================================================
// 0x98ee: WORD '.REGION+' codep=0x224c wordp=0x98fa
// ================================================

void DrawREGION_plus_() // .REGION+
{
  unsigned short int i, imax, j, jmax;

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
      DrawCELL(); // .CELL
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0x9922: WORD '?INVIS' codep=0x992d wordp=0x992d
// ================================================
// 0x992d: sub    ax,ax
// 0x992f: pop    dx
// 0x9930: cmp    dx,[5B31] // BVIS
// 0x9934: jns    9939
// 0x9936: or     ax,0004
// 0x9939: cmp    dx,[5B22] // W5B22
// 0x993d: jle    9942
// 0x993f: or     ax,0008
// 0x9942: pop    dx
// 0x9943: cmp    dx,[5B3C] // LVIS
// 0x9947: jns    994C
// 0x9949: or     ax,0001
// 0x994c: cmp    dx,[5B26] // W5B26
// 0x9950: jle    9955
// 0x9952: or     ax,0002
// 0x9955: or     ax,ax
// 0x9957: jnz    995C
// 0x9959: inc    ax
// 0x995a: jmp    995E
// 0x995c: xor    ax,ax
// 0x995e: push   ax
// 0x995f: lodsw
// 0x9960: mov    bx,ax
// 0x9962: jmp    word ptr [bx]

// ================================================
// 0x9964: WORD 'WLD>SCR' codep=0x9970 wordp=0x9970
// ================================================
// 0x9970: pop    ax
// 0x9971: sub    ax,[5B31] // BVIS
// 0x9975: mov    cx,[6221] // YWLD:YPIX
// 0x9979: imul   cx
// 0x997b: mov    cx,[6223] // YWLD:YPIX
// 0x997f: idiv   cx
// 0x9981: add    ax,[596B] // YLLDEST
// 0x9985: mov    [48C6],ax // ZZZ
// 0x9989: pop    ax
// 0x998a: sub    ax,[5B3C] // LVIS
// 0x998e: mov    cx,[6211] // XWLD:XPIX
// 0x9992: imul   cx
// 0x9994: mov    cx,[6213] // XWLD:XPIX
// 0x9998: idiv   cx
// 0x999a: add    ax,[595D] // XLLDEST
// 0x999e: push   ax
// 0x999f: push   word ptr [48C6] // ZZZ
// 0x99a3: lodsw
// 0x99a4: mov    bx,ax
// 0x99a6: jmp    word ptr [bx]

// ================================================
// 0x99a8: WORD 'SCR>BLT' codep=0x99b4 wordp=0x99b4
// ================================================
// 0x99b4: pop    ax
// 0x99b5: add    ax,0007
// 0x99b8: sub    ax,[5A4E] // CENTERADJUST
// 0x99bc: pop    cx
// 0x99bd: sub    cx,[5A4E] // CENTERADJUST
// 0x99c1: push   cx
// 0x99c2: push   ax
// 0x99c3: lodsw
// 0x99c4: mov    bx,ax
// 0x99c6: jmp    word ptr [bx]

// ================================================
// 0x99c8: WORD '!VISWINDOW' codep=0x224c wordp=0x99d4 params=4 returns=0
// ================================================

void StoreVISWINDOW() // !VISWINDOW
{
  Push(pp_W5B22); // W5B22
  Store_3(); // !_3
  Push(pp_W5B26); // W5B26
  Store_3(); // !_3
  Push(pp_BVIS); // BVIS
  Store_3(); // !_3
  Push(pp_LVIS); // LVIS
  Store_3(); // !_3
}


// ================================================
// 0x99e6: WORD 'FILE>ICONIMAGE' codep=0x224c wordp=0x99e8 params=1 returns=0
// ================================================

void FILE_gt_ICONIMAGE() // FILE>ICONIMAGE
{
  unsigned short int i, imax;

  i = 0;
  imax = 0x0040;
  do // (DO)
  {
    GetDS(); // @DS
    OVER(); // OVER
    Push(i); // I
    GetRECORD(); // @RECORD
    Push(0);
    Push(i); // I
    ReadArray(ICONIMA); // ICONIMA
    Push(0x0012);
    LCMOVE(); // LCMOVE
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0x9a0c: WORD '>1ICONFONT' codep=0x224c wordp=0x9a18 params=0 returns=0
// ================================================

void _gt_1ICONFONT() // >1ICONFONT
{
  Push(1);
  Push(pp_ICONFON); // ICONFON
  Store_3(); // !_3
  Push(pp_CENTERADJUST); // CENTERADJUST
  OFF(); // OFF
  Push(0x003e);
  FILE_gt_ICONIMAGE(); // FILE>ICONIMAGE
}


// ================================================
// 0x9a2a: WORD '>2ICONF' codep=0x224c wordp=0x9a36 params=0 returns=0
// ================================================

void _gt_2ICONF() // >2ICONF
{
  Push(2);
  Push(pp_ICONFON); // ICONFON
  Store_3(); // !_3
  Push(2);
  Push(pp_CENTERADJUST); // CENTERADJUST
  Store_3(); // !_3
  Push(0x003f);
  FILE_gt_ICONIMAGE(); // FILE>ICONIMAGE
}


// ================================================
// 0x9a4a: WORD '>3ICONFONT' codep=0x224c wordp=0x9a56 params=0 returns=0
// ================================================

void _gt_3ICONFONT() // >3ICONFONT
{
  Push(3);
  Push(pp_ICONFON); // ICONFON
  Store_3(); // !_3
  Push(3);
  Push(pp_CENTERADJUST); // CENTERADJUST
  Store_3(); // !_3
  Push(0x0040);
  FILE_gt_ICONIMAGE(); // FILE>ICONIMAGE
}


// ================================================
// 0x9a6a: WORD '@IW' codep=0x9a6c wordp=0x9a6c
// ================================================
// 0x9a6c: pop    ax
// 0x9a6d: push   es
// 0x9a6e: mov    es,ax
// 0x9a70: mov    bx,[5A02] // IINDEX
// 0x9a74: shl    bx,1
// 0x9a76: es:    
// 0x9a77: mov    ax,[bx]
// 0x9a79: pop    es
// 0x9a7a: push   ax
// 0x9a7b: lodsw
// 0x9a7c: mov    bx,ax
// 0x9a7e: jmp    word ptr [bx]

// ================================================
// 0x9a80: WORD 'W9A82' codep=0x9a82 wordp=0x9a82
// ================================================
// 0x9a82: pop    ax
// 0x9a83: push   es
// 0x9a84: mov    es,ax
// 0x9a86: mov    bx,[5A02] // IINDEX
// 0x9a8a: xor    ax,ax
// 0x9a8c: es:    
// 0x9a8d: mov    al,[bx]
// 0x9a8f: pop    es
// 0x9a90: push   ax
// 0x9a91: lodsw
// 0x9a92: mov    bx,ax
// 0x9a94: jmp    word ptr [bx]

// ================================================
// 0x9a96: WORD '!IW' codep=0x9a9e wordp=0x9a9e
// ================================================
// 0x9a9e: pop    ax
// 0x9a9f: pop    cx
// 0x9aa0: push   es
// 0x9aa1: mov    es,ax
// 0x9aa3: mov    bx,[5A02] // IINDEX
// 0x9aa7: shl    bx,1
// 0x9aa9: es:    
// 0x9aaa: mov    [bx],cx
// 0x9aac: pop    es
// 0x9aad: lodsw
// 0x9aae: mov    bx,ax
// 0x9ab0: jmp    word ptr [bx]

// ================================================
// 0x9ab2: WORD '!IB' codep=0x9aba wordp=0x9aba
// ================================================
// 0x9aba: pop    ax
// 0x9abb: pop    cx
// 0x9abc: push   es
// 0x9abd: mov    es,ax
// 0x9abf: mov    bx,[5A02] // IINDEX
// 0x9ac3: es:    
// 0x9ac4: mov    [bx],cl
// 0x9ac6: pop    es
// 0x9ac7: lodsw
// 0x9ac8: mov    bx,ax
// 0x9aca: jmp    word ptr [bx]

// ================================================
// 0x9acc: WORD '@IX' codep=0x224c wordp=0x9ad4
// ================================================

void GetIX() // @IX
{
  Push(Read16(pp_IXSEG)); // IXSEG @
  GetIW(); // @IW
}


// ================================================
// 0x9adc: WORD '@IY' codep=0x224c wordp=0x9ae4
// ================================================

void GetIY() // @IY
{
  Push(Read16(pp_IYSEG)); // IYSEG @
  GetIW(); // @IW
}


// ================================================
// 0x9aec: WORD '@ID' codep=0x224c wordp=0x9af4
// ================================================

void GetID() // @ID
{
  Push(Read16(pp_IDSEG)); // IDSEG @
  W9A82(); // W9A82
}


// ================================================
// 0x9afc: WORD '@IC' codep=0x224c wordp=0x9b04
// ================================================

void GetIC() // @IC
{
  Push(Read16(pp_ICSEG)); // ICSEG @
  W9A82(); // W9A82
}


// ================================================
// 0x9b0c: WORD '@IL' codep=0x224c wordp=0x9b14
// ================================================

void GetIL() // @IL
{
  Push(Read16(pp_ILSEG)); // ILSEG @
  GetIW(); // @IW
}


// ================================================
// 0x9b1c: WORD '@IH' codep=0x224c wordp=0x9b24
// ================================================

void GetIH() // @IH
{
  Push(Read16(pp_IHSEG)); // IHSEG @
  W9A82(); // W9A82
}


// ================================================
// 0x9b2c: WORD '!IX' codep=0x224c wordp=0x9b34
// ================================================

void StoreIX() // !IX
{
  Push(Read16(pp_IXSEG)); // IXSEG @
  StoreIW(); // !IW
}


// ================================================
// 0x9b3c: WORD '!IY' codep=0x224c wordp=0x9b44
// ================================================

void StoreIY() // !IY
{
  Push(Read16(pp_IYSEG)); // IYSEG @
  StoreIW(); // !IW
}


// ================================================
// 0x9b4c: WORD '!ID' codep=0x224c wordp=0x9b54
// ================================================

void StoreID() // !ID
{
  Push(Read16(pp_IDSEG)); // IDSEG @
  StoreIB(); // !IB
}


// ================================================
// 0x9b5c: WORD '!IC' codep=0x224c wordp=0x9b64
// ================================================

void StoreIC() // !IC
{
  Push(Read16(pp_ICSEG)); // ICSEG @
  StoreIB(); // !IB
}


// ================================================
// 0x9b6c: WORD '!IL' codep=0x224c wordp=0x9b74
// ================================================

void StoreIL() // !IL
{
  Push(Read16(pp_ILSEG)); // ILSEG @
  StoreIW(); // !IW
}


// ================================================
// 0x9b7c: WORD '!IH' codep=0x224c wordp=0x9b84
// ================================================

void StoreIH() // !IH
{
  Push(Read16(pp_IHSEG)); // IHSEG @
  StoreIB(); // !IB
}


// ================================================
// 0x9b8c: WORD 'INIT-ICONLIST' codep=0x224c wordp=0x9b98 params=0 returns=0
// ================================================

void INIT_dash_ICONLIST() // INIT-ICONLIST
{
  Push(pp_IGLOBAL); // IGLOBAL
  OFF(); // OFF
  Push(pp_ILOCAL); // ILOCAL
  OFF(); // OFF
}


// ================================================
// 0x9ba2: WORD '.BACKGROUND' codep=0x224c wordp=0x9bae
// ================================================

void DrawBACKGROUND() // .BACKGROUND
{
  Push(pp__i__dot_BACKG); // '.BACKG
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x9bb4: WORD '{8X8ICON}' codep=0x224c wordp=0x9bb6 params=1 returns=0
// ================================================

void _co_8X8ICON_cc_() // {8X8ICON}
{
  unsigned short int i, imax;
  Push(0);
  SWAP(); // SWAP
  ReadArray(ICONIMA); // ICONIMA
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3

  i = 0;
  imax = 2;
  do // (DO)
  {
    Push(Read16(pp_BLTSEG)); // BLTSEG @
    Push(Read16(pp_ABLT)); // ABLT @
    LC_at_(); // LC@
    Is_gt_EGA(); // ?>EGA
    StoreCOLOR(); // !COLOR
    Push(1);
    Push(pp_ABLT); // ABLT
    _plus__ex__2(); // +!_2
    BLT(); // BLT
    Push(8);
    Push(pp_ABLT); // ABLT
    _plus__ex__2(); // +!_2
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0x9bec: WORD '.8X8ICON' codep=0x224c wordp=0x9bee
// ================================================

void Draw8X8ICON() // .8X8ICON
{
  Push(8);
  Push(8);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  GetIX(); // @IX
  GetIY(); // @IY
  WLD_gt_SCR(); // WLD>SCR
  SCR_gt_BLT(); // SCR>BLT
  Push(pp_YBLT); // YBLT
  Store_3(); // !_3
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  GetID(); // @ID
  _co_8X8ICON_cc_(); // {8X8ICON}
  GetIC(); // @IC
  Push(Pop()==Read16(cc_DEAD_dash_IC)?1:0); //  DEAD-IC =
  if (Pop() == 0) return;
  Push(0x0013);
  _co_8X8ICON_cc_(); // {8X8ICON}
}


// ================================================
// 0x9c20: WORD '.FLUX-ICON' codep=0x224c wordp=0x9c22
// ================================================

void DrawFLUX_dash_ICON() // .FLUX-ICON
{
  Push(pp__i__dot_FLUX_dash_ICON); // '.FLUX-ICON
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x9c28: WORD '.CIRCLEICON' codep=0x224c wordp=0x9c34
// ================================================

void DrawCIRCLEICON() // .CIRCLEICON
{
  GetIC(); // @IC
  StoreCOLOR(); // !COLOR
  GetIX(); // @IX
  GetIY(); // @IY
  WLD_gt_SCR(); // WLD>SCR
  GetID(); // @ID
  Push((Pop() - Read16(cc_NULL_dash_ICON)) * Read16(cc__star_MAPSCALE)); //  NULL-ICON - *MAPSCALE *
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _2_at_(); // 2@
  SWAP(); // SWAP
  _star__slash_(); // */
  FILLCIRC(); // FILLCIRC
}


// ================================================
// 0x9c54: WORD 'SYSCASE' codep=0x4a4f wordp=0x9c60
// ================================================

void SYSCASE() // SYSCASE
{
  switch(Pop()) // SYSCASE
  {
  case 4:
    Push(pp_SSYSEG); // SSYSEG
    break;
  case 6:
    Push(pp_SSYSEG); // SSYSEG
    break;
  case 15:
    Push(pp_MSYSEG); // MSYSEG
    break;
  case 14:
    Push(pp_MSYSEG); // MSYSEG
    break;
  default:
    Push(pp_LSYSEG); // LSYSEG
    break;

  }
}

// ================================================
// 0x9c74: WORD '.STARSYS' codep=0x224c wordp=0x9c76
// ================================================

void DrawSTARSYS() // .STARSYS
{
  GetIC(); // @IC
  SYSCASE(); // SYSCASE case
  Push(Read16(Pop())); //  @
  GetIX(); // @IX
  GetIY(); // @IY
  WLD_gt_SCR(); // WLD>SCR
  DrawPACKBLT(); // .PACKBLT
}


// ================================================
// 0x9c86: WORD '.ICONCASES' codep=0x4a4f wordp=0x9c92
// ================================================

void DrawICONCASES() // .ICONCASES
{
  switch(Pop()) // .ICONCASES
  {
  case 253:
    DrawSTARSYS(); // .STARSYS
    break;
  case 50:
    NOP(); // NOP
    break;
  case 255:
    DrawFLUX_dash_ICON(); // .FLUX-ICON
    break;
  case 254:
    NOP(); // NOP
    break;
  default:
    DrawCIRCLEICON(); // .CIRCLEICON
    break;

  }
}

// ================================================
// 0x9ca6: WORD '.ICON' codep=0x224c wordp=0x9cb0
// ================================================

void DrawICON() // .ICON
{
  GetIX(); // @IX
  GetIY(); // @IY
  IsINVIS(); // ?INVIS
  GetID(); // @ID
  Push(0x0033);
  Push(0x005b);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  GetID(); // @ID
  Push(Read16(cc_NULL_dash_ICON)); // NULL-ICON
  _st_(); // <
  if (Pop() != 0)
  {
    Draw8X8ICON(); // .8X8ICON
    return;
  }
  GetID(); // @ID
  DrawICONCASES(); // .ICONCASES case
}


// ================================================
// 0x9cde: WORD 'POINT>ICON' codep=0x224c wordp=0x9cea params=1 returns=0
// ================================================

void POINT_gt_ICON() // POINT>ICON
{
  Push(pp_IINDEX); // IINDEX
  Store_3(); // !_3
}


// ================================================
// 0x9cf0: WORD '.LOCAL-ICONS' codep=0x224c wordp=0x9cfc params=0 returns=0
// ================================================

void DrawLOCAL_dash_ICONS() // .LOCAL-ICONS
{
  unsigned short int i, imax;
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    POINT_gt_ICON(); // POINT>ICON
    DrawICON(); // .ICON
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0x9d16: WORD '?ILOCUS' codep=0x9d18 wordp=0x9d18
// ================================================
// 0x9d18: pop    cx
// 0x9d19: pop    word ptr [5B04] // BICON
// 0x9d1d: pop    word ptr [5B00] // W5B00
// 0x9d21: pop    word ptr [5AFC] // W5AFC
// 0x9d25: pop    word ptr [5AF8] // W5AF8
// 0x9d29: xor    ax,ax
// 0x9d2b: push   ax
// 0x9d2c: or     cx,cx
// 0x9d2e: jle    9D71
// 0x9d30: mov    bx,cx
// 0x9d32: dec    bx
// 0x9d33: add    bx,[5B04] // BICON
// 0x9d37: shl    bx,1
// 0x9d39: push   es
// 0x9d3a: push   word ptr [59BE] // IXSEG
// 0x9d3e: pop    es
// 0x9d3f: es:    
// 0x9d40: mov    dx,[bx]
// 0x9d42: pop    es
// 0x9d43: sub    dx,[5AF8] // W5AF8
// 0x9d47: jns    9D4B
// 0x9d49: neg    dx
// 0x9d4b: cmp    dx,[5B00] // W5B00
// 0x9d4f: jg     9D6F
// 0x9d51: push   es
// 0x9d52: push   word ptr [59C2] // IYSEG
// 0x9d56: pop    es
// 0x9d57: es:    
// 0x9d58: mov    dx,[bx]
// 0x9d5a: pop    es
// 0x9d5b: sub    dx,[5AFC] // W5AFC
// 0x9d5f: jns    9D63
// 0x9d61: neg    dx
// 0x9d63: cmp    dx,[5B00] // W5B00
// 0x9d67: jg     9D6F
// 0x9d69: pop    ax
// 0x9d6a: shr    bx,1
// 0x9d6c: push   bx
// 0x9d6d: inc    ax
// 0x9d6e: push   ax
// 0x9d6f: loop   9D30
// 0x9d71: lodsw
// 0x9d72: mov    bx,ax
// 0x9d74: jmp    word ptr [bx]

// ================================================
// 0x9d76: WORD '?ICONS-LOCUS' codep=0x224c wordp=0x9d82
// ================================================

void IsICONS_dash_LOCUS() // ?ICONS-LOCUS
{
  Push(0);
  SWAP(); // SWAP
  IsILOCUS(); // ?ILOCUS
}


// ================================================
// 0x9d8a: WORD '?ICONS-AT' codep=0x224c wordp=0x9d96
// ================================================

void IsICONS_dash_AT() // ?ICONS-AT
{
  Push(0);
  SWAP(); // SWAP
  IsICONS_dash_LOCUS(); // ?ICONS-LOCUS
}


// ================================================
// 0x9d9e: WORD '?ICON-IADDR' codep=0x224c wordp=0x9daa params=1 returns=2
// ================================================

void IsICON_dash_IADDR() // ?ICON-IADDR
{
  unsigned short int a;
  Push(0);
  Push(Read16(pp_IGLOBAL)); // IGLOBAL @
  do
  {
    Push(Read16(pp_ILSEG)); // ILSEG @
    ROT(); // ROT
    ROT(); // ROT
    Push(5);
    PICK(); // PICK
    LWSCAN(); // LWSCAN
    if (Pop() != 0)
    {
      Push(Read16(pp_IHSEG)); // IHSEG @
      OVER(); // OVER
      Push(Pop() >> 1); //  2/
      LC_at_(); // LC@
      Push(3);
      PICK(); // PICK
      Push((Pop()==Pop())?1:0); // =
      if (Pop() != 0)
      {
        Push(1);
      } else
      {
        Push(Pop() + 2); //  2+
        Push(Read16(pp_IGLOBAL)); // IGLOBAL @
        OVER(); // OVER
        Push(Pop() >> 1); //  2/
        _dash_(); // -
        Push(0);
      }
    } else
    {
      Push(-1);
      Push(1);
    }
  } while(Pop() == 0);
  a = Pop(); // >R
  Pop(); Pop(); // 2DROP
  Push(a); // R>
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(0);
    return;
  }
  Push(Pop() >> 1); //  2/
  Push(1);
}


// ================================================
// 0x9e12: WORD 'XCHGICON' codep=0x9e14 wordp=0x9e14
// ================================================
// 0x9e14: pop    ax
// 0x9e15: pop    bx
// 0x9e16: push   es
// 0x9e17: push   word ptr [59C6] // IDSEG
// 0x9e1b: pop    es
// 0x9e1c: call   49CA
// 0x9e1f: push   word ptr [59CA] // ICSEG
// 0x9e23: pop    es
// 0x9e24: call   49CA
// 0x9e27: push   word ptr [59DA] // IHSEG
// 0x9e2b: pop    es
// 0x9e2c: call   49CA
// 0x9e2f: shl    ax,1
// 0x9e31: shl    bx,1
// 0x9e33: push   word ptr [59BE] // IXSEG
// 0x9e37: pop    es
// 0x9e38: call   2F36
// 0x9e3b: push   word ptr [59C2] // IYSEG
// 0x9e3f: pop    es
// 0x9e40: call   2F36
// 0x9e43: push   word ptr [59CE] // ILSEG
// 0x9e47: pop    es
// 0x9e48: call   2F36
// 0x9e4b: pop    es
// 0x9e4c: lodsw
// 0x9e4d: mov    bx,ax
// 0x9e4f: jmp    word ptr [bx]

// ================================================
// 0x9e51: WORD 'PERCOLATE' codep=0x224c wordp=0x9e53 params=2 returns=0
// ================================================

void PERCOLATE() // PERCOLATE
{
  unsigned short int i, imax;
  Push(pp_BICON); // BICON
  Store_3(); // !_3
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(i + Read16(pp_BICON)); // I BICON @ +
    XCHGICON(); // XCHGICON
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0x9e71: WORD '-ICON' codep=0x224c wordp=0x9e7b params=0 returns=2
// ================================================

void _dash_ICON() // -ICON
{
  unsigned short int a;
  CI(); // CI
  IsICON_dash_IADDR(); // ?ICON-IADDR
  if (Pop() == 0) return;
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  OVER(); // OVER
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(-1);
    Push(pp_ILOCAL); // ILOCAL
    _plus__ex__2(); // +!_2
    Push(Read16(pp_ILOCAL)); // ILOCAL @
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    XCHGICON(); // XCHGICON
    Push(a); // R>
  }
  Push(-1);
  Push(pp_IGLOBAL); // IGLOBAL
  _plus__ex__2(); // +!_2
  Push(Read16(pp_IGLOBAL)); // IGLOBAL @
  XCHGICON(); // XCHGICON
}


// ================================================
// 0x9eaf: WORD '?IID' codep=0x9eb1 wordp=0x9eb1
// ================================================
// 0x9eb1: pop    cx
// 0x9eb2: pop    word ptr [5B04] // BICON
// 0x9eb6: pop    dx
// 0x9eb7: pop    word ptr [48C8] // ZZZ
// 0x9ebb: xor    ax,ax
// 0x9ebd: push   es
// 0x9ebe: pop    word ptr [48C6] // ZZZ
// 0x9ec2: push   word ptr [59C6] // IDSEG
// 0x9ec6: pop    es
// 0x9ec7: push   ax
// 0x9ec8: or     cx,cx
// 0x9eca: jle    9EE8
// 0x9ecc: mov    bx,cx
// 0x9ece: dec    bx
// 0x9ecf: add    bx,[5B04] // BICON
// 0x9ed3: es:    
// 0x9ed4: mov    al,[bx]
// 0x9ed6: cmp    ax,dx
// 0x9ed8: jns    9EE6
// 0x9eda: cmp    ax,[48C8] // ZZZ
// 0x9ede: jle    9EE6
// 0x9ee0: pop    ax
// 0x9ee1: push   bx
// 0x9ee2: inc    ax
// 0x9ee3: push   ax
// 0x9ee4: xor    ax,ax
// 0x9ee6: loop   9ECC
// 0x9ee8: push   word ptr [48C6] // ZZZ
// 0x9eec: pop    es
// 0x9eed: lodsw
// 0x9eee: mov    bx,ax
// 0x9ef0: jmp    word ptr [bx]

// ================================================
// 0x9ef2: WORD '?ICONSI' codep=0x224c wordp=0x9efe
// ================================================

void IsICONSI() // ?ICONSI
{
  Push(0);
  SWAP(); // SWAP
  IsIID(); // ?IID
}


// ================================================
// 0x9f06: WORD '+ICON' codep=0x224c wordp=0x9f10
// ================================================

void _plus_ICON() // +ICON
{
  Push(Read16(pp_IGLOBAL)); // IGLOBAL @
  Push(Read16(regsp)); // DUP
  Push(Pop()==Read16(cc_ILIMIT)?1:0); //  ILIMIT =
  if (Pop() != 0)
  {
    UNRAVEL(); // UNRAVEL
  }
  POINT_gt_ICON(); // POINT>ICON
  Push(1);
  Push(pp_IGLOBAL); // IGLOBAL
  _plus__ex__2(); // +!_2
  StoreIH(); // !IH
  StoreIL(); // !IL
  StoreIC(); // !IC
  StoreID(); // !ID
  StoreIY(); // !IY
  StoreIX(); // !IX
}


// ================================================
// 0x9f36: WORD '+ICONBOX' codep=0x224c wordp=0x9f42 params=0 returns=0
// ================================================

void _plus_ICONBOX() // +ICONBOX
{
  Push(Read16(pp__i_ICONBO)); // 'ICONBO @
  MODULE(); // MODULE
}


// ================================================
// 0x9f4a: WORD 'ORGLIST' codep=0x224c wordp=0x9f56 params=0 returns=0
// ================================================

void ORGLIST() // ORGLIST
{
  unsigned short int i, imax;
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  _2_at_(); // 2@
  Push(Pop() - Read16(pp_YABS)); //  YABS @ -
  ABS(); // ABS
  SWAP(); // SWAP
  Push(Pop() - Read16(pp_XABS)); //  XABS @ -
  ABS(); // ABS
  MAX(); // MAX
  Push(Pop() - Read16(pp_LOCRADIUS)); //  LOCRADIUS @ -
  _0_gt_(); // 0>
  if (Pop() == 0) return;
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  _2DUP(); // 2DUP
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  _2_ex_(); // 2!
  Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
  if (Pop() != 0)
  {
    Push(Read16(pp_LOCRADIUS) + Read16(pp_W54D4)); // LOCRADIUS @ W54D4 @ +
    Push(Read16(pp_IGLOBAL)); // IGLOBAL @
    IsICONS_dash_LOCUS(); // ?ICONS-LOCUS
    Push(Read16(regsp)); // DUP
    Push(pp_ILOCAL); // ILOCAL
    Store_3(); // !_3
    Push(0);
    PERCOLATE(); // PERCOLATE
    Push(Read16(cc_NULL_dash_ICON)); // NULL-ICON
    Push(Read16(cc_SYS_dash_ICO)); // SYS-ICO
    Push(Read16(pp_ILOCAL)); // ILOCAL @
    IsICONSI(); // ?ICONSI
    Push(Read16(regsp)); // DUP
    Push(pp__n_CIRC); // #CIRC
    Store_3(); // !_3
    Push(0);
    PERCOLATE(); // PERCOLATE
    Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
    _2_at_(); // 2@
    Push(Read16(pp_LOCRADIUS)); // LOCRADIUS @
    Push(Read16(pp__n_CIRC)); // #CIRC @
    Push(Read16(pp_ILOCAL)); // ILOCAL @
    OVER(); // OVER
    _dash_(); // -
    IsILOCUS(); // ?ILOCUS
    Push(Read16(regsp)); // DUP
    Push(Pop() + Read16(pp__n_CIRC)); //  #CIRC @ +
    Push(pp_ILOCAL); // ILOCAL
    Store_3(); // !_3
    Push(Read16(pp__n_CIRC)); // #CIRC @
    PERCOLATE(); // PERCOLATE
  } else
  {
    Push(Read16(pp_LOCRADIUS)); // LOCRADIUS @
    Push(Read16(pp_IGLOBAL)); // IGLOBAL @
    IsICONS_dash_LOCUS(); // ?ICONS-LOCUS
    Push(Read16(regsp)); // DUP
    Push(pp_ILOCAL); // ILOCAL
    Store_3(); // !_3
    Push(0);
    PERCOLATE(); // PERCOLATE
  }
  Push(0x0019);
  Push(0x0023);
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONSI(); // ?ICONSI
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_ILOCAL) - 1); // ILOCAL @ 1-
    XCHGICON(); // XCHGICON
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xa024: WORD 'POS.' codep=0x224c wordp=0xa02d params=2 returns=0
// ================================================

void POS_dot_() // POS.
{
  Push(pp_YBLT); // YBLT
  Store_3(); // !_3
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
}


// ================================================
// 0xa037: WORD '.1LOGO' codep=0x224c wordp=0xa042 params=3 returns=0
// ================================================

void Draw1LOGO() // .1LOGO
{
  unsigned short int a;
  GetCOLOR(); // @COLOR
  a = Pop(); // >R
  StoreCOLOR(); // !COLOR
  POS_dot_(); // POS.
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  Push(0x000a);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(0x000a);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(pp__1LOGO); // 1LOGO
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
  Push(a); // R>
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xa06e: WORD 'INIT-VIEWSCREEN-POLY' codep=0x224c wordp=0xa070 params=0 returns=0
// ================================================

void INIT_dash_VIEWSCREEN_dash_POLY() // INIT-VIEWSCREEN-POLY
{
  Push(pp_NEB_dash_TABLE); // NEB-TABLE
  Push(pp_VIN); // VIN
  Store_3(); // !_3
  Push(pp_NEB2); // NEB2
  Push(pp_VOUT); // VOUT
  Store_3(); // !_3
  Push(pp_V1); // V1
  Push(pp_OIN); // OIN
  Store_3(); // !_3
  Push(pp_V2); // V2
  Push(pp_OOUT); // OOUT
  Store_3(); // !_3
}


// ================================================
// 0xa08a: WORD 'POLY-WINDOW-BOUND' codep=0x224c wordp=0xa08c params=5 returns=0
// ================================================

void POLY_dash_WINDOW_dash_BOUND() // POLY-WINDOW-BOUND
{
  unsigned short int a;
  INIT_dash_VIEWSCREEN_dash_POLY(); // INIT-VIEWSCREEN-POLY
  StoreCOLOR(); // !COLOR
  Push(pp_NEB_dash_TABLE); // NEB-TABLE
  a = Pop(); // >R
  Push(Read16(regsp)); // DUP
  Push(a + 2); // I 2+
  Store_3(); // !_3
  Push(a + 0x000e); // I 0x000e +
  Store_3(); // !_3
  Push(Read16(regsp)); // DUP
  Push(a); // I
  Store_3(); // !_3
  Push(a + 4); // I 4 +
  Store_3(); // !_3
  Push(Read16(regsp)); // DUP
  Push(a + 6); // I 6 +
  Store_3(); // !_3
  Push(a + 0x000a); // I 0x000a +
  Store_3(); // !_3
  Push(Read16(regsp)); // DUP
  Push(a + 8); // I 8 +
  Store_3(); // !_3
  Push(a + 0x000c); // R> 0x000c +
  Store_3(); // !_3
  Push(4);
  Push(pp__n_IN); // #IN
  Store_3(); // !_3
}


// ================================================
// 0xa0e4: WORD 'POLY-WINDOW-FILL' codep=0x224c wordp=0xa0f0 params=5 returns=0
// ================================================

void POLY_dash_WINDOW_dash_FILL() // POLY-WINDOW-FILL
{
  POLY_dash_WINDOW_dash_BOUND(); // POLY-WINDOW-BOUND
  SCANPOLY(); // SCANPOLY
  LFILLPOLY(); // LFILLPOLY
}


// ================================================
// 0xa0f8: WORD 'SFILL' codep=0x224c wordp=0xa102 params=0 returns=0
// ================================================

void SFILL() // SFILL
{
  Push(0x00c7);
  Push2Words("NULL");
  Push(0x009f);
  GetCOLOR(); // @COLOR
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
}


// ================================================
// 0xa112: WORD '>SSCT' codep=0x224c wordp=0xa11c params=0 returns=0
// ================================================

void _gt_SSCT() // >SSCT
{
  Push(0x0032);
  Push(pp_CTTOP); // CTTOP
  Store_3(); // !_3
  Push(3);
  Push(pp_CTBOT); // CTBOT
  Store_3(); // !_3
}


// ================================================
// 0xa12c: WORD '>TVCT' codep=0x224c wordp=0xa136 params=0 returns=0
// ================================================

void _gt_TVCT() // >TVCT
{
  Push(Read16(pp_WTOP)); // WTOP @
  Push(pp_CTTOP); // CTTOP
  Store_3(); // !_3
  Push(Read16(pp_WBOTTOM)); // WBOTTOM @
  Push(pp_CTBOT); // CTBOT
  Store_3(); // !_3
}


// ================================================
// 0xa148: WORD 'CTPOS.' codep=0x224c wordp=0xa153 params=2 returns=0
// ================================================

void CTPOS_dot_() // CTPOS.
{
  _2DUP(); // 2DUP
  Push(pp_CTY); // CTY
  Store_3(); // !_3
  Push(pp_CTX); // CTX
  Store_3(); // !_3
  SWAP(); // SWAP
  Push(Pop() * 4 + 5); //  4 * 5 +
  Push(Read16(pp_CTTOP)); // CTTOP @
  ROT(); // ROT
  Push(Pop() * 7); //  7 *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xa177: WORD 'CTERASE' codep=0x224c wordp=0xa183 params=0 returns=0
// ================================================

void CTERASE() // CTERASE
{
  GetCOLOR(); // @COLOR
  Push(0x0033);
  Push(3);
  Push(1);
  Push(0x009c);
  GetColor(BLACK);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0);
  Push(0);
  CTPOS_dot_(); // CTPOS.
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xa19f: WORD '@BEEP' codep=0x224c wordp=0xa1a9 params=0 returns=2
// ================================================

void GetBEEP() // @BEEP
{
  Push(Read16(pp_BEEPTONE)); // BEEPTONE @
  Push(Read16(pp_BEEPMS)); // BEEPMS @
}


// ================================================
// 0xa1b3: WORD '!BEEP' codep=0x224c wordp=0xa1bd params=2 returns=0
// ================================================

void StoreBEEP() // !BEEP
{
  Push(pp_BEEPMS); // BEEPMS
  _st__ex__gt_(); // <!>
  Push(pp_BEEPTONE); // BEEPTONE
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xa1c7: WORD 'CLICK' codep=0x224c wordp=0xa1d1 params=0 returns=0
// ================================================

void CLICK() // CLICK
{
  GetBEEP(); // @BEEP
  Push(0x0064);
  Push(pp_BEEPMS); // BEEPMS
  Store_3(); // !_3
  Push(0x0032);
  Push(pp_BEEPTONE); // BEEPTONE
  Store_3(); // !_3
  BEEP(); // BEEP
  StoreBEEP(); // !BEEP
}


// ================================================
// 0xa1e9: WORD '>SND' codep=0x224c wordp=0xa1f2 params=3 returns=0
// ================================================

void _gt_SND() // >SND
{
  unsigned short int i, imax, j, jmax;
  Push(0);
  Push(Read16(pp_IsSOUND)); // ?SOUND @
  if (Pop() != 0)
  {
    Push(1);
    TONE(); // TONE
    BEEPON_2(); // BEEPON_2

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      TONE(); // TONE
      MS(); // MS
      i++;
    } while(i<imax); // (LOOP)

    BEEPOFF(); // BEEPOFF
    return;
  }

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
    Pop(); Pop(); // 2DROP
    j++;
  } while(j<jmax); // (LOOP)

}


// ================================================
// 0xa21c: WORD 'BEEPON' codep=0x224c wordp=0xa227 params=0 returns=0
// ================================================

void BEEPON() // BEEPON
{
  Push(Read16(pp_IsSOUND)); // ?SOUND @
  if (Pop() == 0) return;
  BEEPON_2(); // BEEPON_2
}


// ================================================
// 0xa233: WORD 'mussegswap' codep=0x224c wordp=0xa235 params=1 returns=2
// ================================================

void mussegswap() // mussegswap
{
  Push(Read16(cc_MUSSEG)); // MUSSEG
  SWAP(); // SWAP
}


// ================================================
// 0xa23b: WORD 'WA23D' codep=0x224c wordp=0xa23d params=2 returns=0
// ================================================

void WA23D() // WA23D
{
  mussegswap(); // mussegswap
  L_ex_(); // L!
}


// ================================================
// 0xa243: WORD 'WA245' codep=0x224c wordp=0xa245 params=1 returns=1
// ================================================

void WA245() // WA245
{
  mussegswap(); // mussegswap
  L_at_(); // L@
}


// ================================================
// 0xa24b: WORD 'WA24D' codep=0x224c wordp=0xa24d params=1 returns=1
// ================================================

void WA24D() // WA24D
{
  mussegswap(); // mussegswap
  LC_at_(); // LC@
}


// ================================================
// 0xa253: WORD 'WA255' codep=0x224c wordp=0xa255 params=2 returns=0
// ================================================

void WA255() // WA255
{
  mussegswap(); // mussegswap
  LC_ex_(); // LC!
}


// ================================================
// 0xa25b: WORD 'muson' codep=0x224c wordp=0xa25d params=0 returns=0
// ================================================

void muson() // muson
{
  Push(1);
  Push(2);
  WA255(); // WA255
}


// ================================================
// 0xa265: WORD 'musoff' codep=0x224c wordp=0xa267 params=0 returns=0
// ================================================

void musoff() // musoff
{
  Push(0);
  Push(2);
  WA255(); // WA255
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xa271: WORD 'SONG' codep=0x224c wordp=0xa27a params=0 returns=0
// ================================================

void SONG() // SONG
{
  Push(Read16(pp_IsSOUND)); // ?SOUND @
  if (Pop() == 0) return;
  musoff(); // musoff
  Push(Pop() * 2 + 0x0010); //  2* 0x0010 +
  WA245(); // WA245
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  Push(3);
  WA23D(); // WA23D
  Push(5);
  WA23D(); // WA23D
  Push(Read16(regsp)); // DUP
  WA24D(); // WA24D
  Push(9);
  WA255(); // WA255
  Push(Pop() + 1); //  1+
  WA245(); // WA245
  Push(7);
  WA23D(); // WA23D
  Push(1);
  Push(0x000a);
  WA255(); // WA255
  Push(1);
  Push(0x000d);
  WA255(); // WA255
  muson(); // muson
}


// ================================================
// 0xa2be: WORD '@CRS' codep=0x224c wordp=0xa2c7 params=0 returns=11
// ================================================

void GetCRS() // @CRS
{
  Push(Read16(pp_YBLT)); // YBLT @
  Push(Read16(pp_XBLT)); // XBLT @
  Push(Read16(pp_LBLT)); // LBLT @
  Push(Read16(pp_WBLT)); // WBLT @
  Push(Read16(pp_ABLT)); // ABLT @
  Push(Read16(pp_NCRS)); // NCRS @
  Push(Read16(pp_OCRS)); // OCRS @
  Push(Read16(pp_COLOR)); // COLOR @
  Push(Read16(pp_DCOLOR)); // DCOLOR @
  Push(Read16(pp_XORMODE)); // XORMODE @
  Push(Read16(pp_BLTSEG)); // BLTSEG @
}


// ================================================
// 0xa2f5: WORD '!CRS' codep=0x224c wordp=0xa2fe params=11 returns=0
// ================================================

void StoreCRS() // !CRS
{
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  Push(pp_XORMODE); // XORMODE
  Store_3(); // !_3
  Push(pp_DCOLOR); // DCOLOR
  Store_3(); // !_3
  Push(pp_COLOR); // COLOR
  Store_3(); // !_3
  Push(pp_OCRS); // OCRS
  Store_3(); // !_3
  Push(pp_NCRS); // NCRS
  Store_3(); // !_3
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  Push(pp_YBLT); // YBLT
  Store_3(); // !_3
}


// ================================================
// 0xa32c: WORD '$.' codep=0x224c wordp=0xa333 params=1 returns=0
// ================================================

void _do__dot_() // $.
{
  COUNT(); // COUNT
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xa339: WORD 'POLY-ERASE-TEXT' codep=0x224c wordp=0xa345 params=2 returns=0
// ================================================

void POLY_dash_ERASE_dash_TEXT() // POLY-ERASE-TEXT
{
  unsigned short int a, b;
  a = Pop(); // >R
  b = Pop(); // >R
  GetCRS(); // @CRS
  Push(Read16(pp_YBLT)); // YBLT @
  Push(Read16(regsp)); // DUP
  Push(Pop() - 4); //  4 -
  Push(Read16(pp_XBLT)); // XBLT @
  SWAP(); // SWAP
  OVER(); // OVER
  Push(Pop() + b * 4); //  R> 4 * +
  Push(a); // R>
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  StoreCRS(); // !CRS
}


// ================================================
// 0xa36d: WORD 'POS.PXT' codep=0x224c wordp=0xa379 params=4 returns=0
// ================================================

void POS_dot_PXT() // POS.PXT
{
  unsigned short int a, b, c, d;
  a = Pop(); // >R
  b = Pop(); // >R
  c = Pop(); // >R
  d = Pop(); // >R
  GetCRS(); // @CRS
  Push(d); // R>
  Push(c); // R>
  Push(b); // R>
  Push(a); // R>
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  StoreCRS(); // !CRS
}


// ================================================
// 0xa395: WORD 'WINDOW' codep=0x224c wordp=0xa3a0 params=4 returns=0
// ================================================

void WINDOW() // WINDOW
{
  Push(Read16(regsp)); // DUP
  Push(pp_WCHARS); // WCHARS
  Store_3(); // !_3
  Push(Pop() * 4); //  4 *
  ROT(); // ROT
  Push(Read16(regsp)); // DUP
  Push(pp_WLEFT); // WLEFT
  Store_3(); // !_3
  Push(Pop() + Pop()); // +
  Push(pp_WRIGHT); // WRIGHT
  Store_3(); // !_3
  Push(Read16(regsp)); // DUP
  Push(pp_WLINES); // WLINES
  Store_3(); // !_3
  Push((Pop() - 1) * 0xfff9 - 5); //  1- 0xfff9 * 5 -
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  Push(pp_WBOTTOM); // WBOTTOM
  Store_3(); // !_3
  Push(pp_WTOP); // WTOP
  Store_3(); // !_3
}


// ================================================
// 0xa3d8: WORD 'WA3DA' codep=0x224c wordp=0xa3da params=1 returns=0
// ================================================

void WA3DA() // WA3DA
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  _gt_1FONT(); // >1FONT
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WBOTTOM) + 5); // WBOTTOM @ 5 +
  POS_dot_(); // POS.
  Push(a); // R>
  _do__dot_(); // $.
  StoreCRS(); // !CRS
}


// ================================================
// 0xa3fa: WORD 'WA3FC' codep=0x224c wordp=0xa3fc params=1 returns=0
// ================================================

void WA3FC() // WA3FC
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  _gt_1FONT(); // >1FONT
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WTOP)); // WTOP @
  POS_dot_(); // POS.
  Push(a); // R>
  _do__dot_(); // $.
  StoreCRS(); // !CRS
}


// ================================================
// 0xa418: WORD 'WLINE-UP' codep=0x224c wordp=0xa424 params=1 returns=0
// ================================================

void WLINE_dash_UP() // WLINE-UP
{
  unsigned short int i, imax;

  i = 0;
  imax = 7;
  do // (DO)
  {
    Push(Read16(pp_WLEFT)); // WLEFT @
    Push(Read16(pp_WTOP) - 1); // WTOP @ 1-
    Push(Read16(pp_WRIGHT)); // WRIGHT @
    Push(Read16(pp_WBOTTOM) - 1); // WBOTTOM @ 1-
    Push(Read16(pp_WLEFT)); // WLEFT @
    Push(Read16(pp_WTOP)); // WTOP @
    LCOPYBLK(); // LCOPYBLK
    i++;
  } while(i<imax); // (LOOP)

  WA3DA(); // WA3DA
}


// ================================================
// 0xa450: WORD 'WLINE-D' codep=0x224c wordp=0xa45c params=1 returns=0
// ================================================

void WLINE_dash_D() // WLINE-D
{
  unsigned short int i, imax;

  i = 0;
  imax = 7;
  do // (DO)
  {
    Push(Read16(pp_WLEFT)); // WLEFT @
    Push(Read16(pp_WTOP) + 1); // WTOP @ 1+
    Push(Read16(pp_WRIGHT)); // WRIGHT @
    Push(Read16(pp_WBOTTOM)); // WBOTTOM @
    Push(Read16(pp_WLEFT)); // WLEFT @
    Push(Read16(pp_WTOP)); // WTOP @
    LCOPYBLK(); // LCOPYBLK
    i++;
  } while(i<imax); // (LOOP)

  WA3FC(); // WA3FC
}


// ================================================
// 0xa486: WORD 'GCR' codep=0x224c wordp=0xa48e params=0 returns=0
// ================================================

void GCR() // GCR
{
  Push(0xfff9);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
}


// ================================================
// 0xa4a0: WORD 'WSHORTE' codep=0x224c wordp=0xa4ac params=1 returns=0
// ================================================

void WSHORTE() // WSHORTE
{
  Push(Read16(pp_WCHARS)); // WCHARS @
  SWAP(); // SWAP
  Push(7);
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex__2(); // +!_2
  Push(Read16(pp_WBOTTOM) - 2); // WBOTTOM @ 2-
  Push(Read16(pp_WLEFT)); // WLEFT @
  POS_dot_PXT(); // POS.PXT
  Push(-1);
  Push(pp_WLINES); // WLINES
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xa4cc: WORD 'CTCR' codep=0x224c wordp=0xa4d5 params=0 returns=0
// ================================================

void CTCR() // CTCR
{
  Push(0);
  Push(Read16(pp_CTY) + 1); // CTY @ 1+
  Push(6);
  MIN(); // MIN
  CTPOS_dot_(); // CTPOS.
}


// ================================================
// 0xa4e5: WORD 'TTY-SCR' codep=0x224c wordp=0xa4f1 params=0 returns=0
// ================================================

void TTY_dash_SCR() // TTY-SCR
{
  unsigned short int i, imax;

  i = 0;
  imax = 7;
  do // (DO)
  {
    Push(4);
    Push(0x0031);
    Push(0x00a0);
    Push(3);
    Push(4);
    Push(0x0032);
    LCOPYBLK(); // LCOPYBLK
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xa511: WORD 'WA513' codep=0x224c wordp=0xa513 params=0 returns=0
// ================================================

void WA513() // WA513
{
  _gt_1FONT(); // >1FONT
  TTY_dash_SCR(); // TTY-SCR
  Push(0);
  Push(6);
  CTPOS_dot_(); // CTPOS.
}


// ================================================
// 0xa51f: WORD 'CTINIT' codep=0x224c wordp=0xa52a params=0 returns=0
// ================================================

void CTINIT() // CTINIT
{
  _gt_1FONT(); // >1FONT
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0xa513); // 'WA513'
  Push(0x0644); // 'CR'
  EXECUTES(); // EXECUTES
}


// ================================================
// 0xa540: WORD '.TTY' codep=0x224c wordp=0xa549 params=2 returns=0
// ================================================

void DrawTTY() // .TTY
{
  WA513(); // WA513
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xa54f: WORD 'VIEWSCR' codep=0x224c wordp=0xa55b params=1 returns=0
// ================================================

void VIEWSCR() // VIEWSCR
{
  unsigned short int i, imax, j, jmax;

  i = 0;
  imax = 3;
  do // (DO)
  {
    Push(i + 1); // I 1+
    Push(0x00c3);
    OVER(); // OVER
    Push(0x0044);
    LLINE(); // LLINE
    Push(0x004c + i); // 0x004c I +
    Push(0x00c3);
    OVER(); // OVER
    Push(0x0044);
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)


  j = 0;
  jmax = 4;
  do // (DO)
  {
    Push(4);
    Push(0x0044 + j); // 0x0044 I +
    Push(0x004b);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(4);
    Push(0x00c0 + j); // 0x00c0 I +
    Push(0x000b);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(0x004b);
    Push(0x00c0 + j); // 0x00c0 I +
    Push(0x0044);
    OVER(); // OVER
    LLINE(); // LLINE
    j++;
  } while(j<jmax); // (LOOP)

  Push(0x004a);
  Push(0x00c0);
  Push(0x000c);
  OVER(); // OVER
  LLINE(); // LLINE
  GetCOLOR(); // @COLOR
  SWAP(); // SWAP
  StoreCOLOR(); // !COLOR
  _gt_MAINVIEW(); // >MAINVIEW
  BFILL(); // BFILL
  _gt_DISPLAY(); // >DISPLAY
  V_gt_DISPLAY(); // V>DISPLAY
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xa5ed: WORD 'TXT-WIN' codep=0x224c wordp=0xa5f9 params=0 returns=0
// ================================================

void TXT_dash_WIN() // TXT-WIN
{
  unsigned short int i, imax;
  Push(Read16(pp_IsON_dash_PLA) * 0x000d); // ?ON-PLA @ 0x000d *
  _gt_V(); // >V

  i = 0;
  imax = 2;
  do // (DO)
  {
    Push(i + 1); // I 1+
    VI(); // VI
    OVER(); // OVER
    Push(0x0034);
    VI(); // VI
    Push(Pop() + Pop()); // +
    LLINE(); // LLINE
    Push(0x009d + i); // 0x009d I +
    VI(); // VI
    OVER(); // OVER
    Push(0x0034);
    VI(); // VI
    Push(Pop() + Pop()); // +
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Push(3);
  Push(0x0034);
  VI(); // VI
  Push(Pop() + Pop()); // +
  Push(0x009c);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(3);
  VI(); // VI
  Push(0x009c);
  V_gt_(); // V>
  LLINE(); // LLINE
}


// ================================================
// 0xa657: WORD 'WA659' codep=0x224c wordp=0xa659 params=0 returns=0
// ================================================

void WA659() // WA659
{
  unsigned short int i, imax;

  i = 0;
  imax = 2;
  do // (DO)
  {
    Push(0x0051 + i); // 0x0051 I +
    Push(0x007d);
    OVER(); // OVER
    Push(0x00c6);
    LLINE(); // LLINE
    Push(0x009d + i); // 0x009d I +
    Push(0x007d);
    OVER(); // OVER
    Push(0x00c6);
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Push(0x0053);
  Push(0x00c6);
  Push(0x009c);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x0053);
  Push(0x007d);
  Push(0x009c);
  OVER(); // OVER
  LLINE(); // LLINE
}


// ================================================
// 0xa6ad: WORD 'WA6AF' codep=0x224c wordp=0xa6af params=0 returns=0
// ================================================

void WA6AF() // WA6AF
{
  unsigned short int i, imax;

  i = 0;
  imax = 2;
  do // (DO)
  {
    Push(0x005a + i); // 0x005a I +
    Push(0x0037);
    OVER(); // OVER
    Push(0x007a);
    LLINE(); // LLINE
    Push(0x009d + i); // 0x009d I +
    Push(0x0037);
    OVER(); // OVER
    Push(0x007a);
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Push(0x005c);
  Push(0x007a);
  Push(0x009c);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x005c);
  Push(0x0037);
  Push(0x009c);
  OVER(); // OVER
  LLINE(); // LLINE
}


// ================================================
// 0xa703: WORD 'WA705' codep=0x224c wordp=0xa705 params=0 returns=0
// ================================================

void WA705() // WA705
{
  unsigned short int i, imax;
  Push(pp_BUTTON); // BUTTON
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(9);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(8);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3

  i = 0;
  imax = 6;
  do // (DO)
  {
    Push(0x0051);
    Push(0x0078 - i * 0x000b); // 0x0078 I 0x000b * -
    POS_dot_(); // POS.
    BLT(); // BLT
    i++;
  } while(i<imax); // (LOOP)

  Push(1);
  Push(0x0041);
  GetColor(GREY2);
  Draw1LOGO(); // .1LOGO
}


// ================================================
// 0xa74d: WORD '?MRC' codep=0x224c wordp=0xa756 params=2 returns=0
// ================================================

void IsMRC() // ?MRC
{
  Push(Read16(pp_MONITOR)); // MONITOR @
  Push(Read16(regsp)); // DUP
  Push(Pop()==3?1:0); //  3 =
  if (Pop() != 0)
  {
    Pop(); // DROP
    ROT(); // ROT
    ROT(); // ROT
  } else
  {
    Push(Pop()==2?1:0); //  2 =
    if (Pop() != 0)
    {
      ROT(); // ROT
    }
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xa77c: WORD 'WA77E' codep=0x224c wordp=0xa77e params=1 returns=0
// ================================================

void WA77E() // WA77E
{
  unsigned short int a;
  a = Pop(); // >R
  GetCOLOR(); // @COLOR
  Push(0x0079);
  Push(0x005c);
  Push(0x0038);
  Push(0x009c);
  Push(a); // R>
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xa79a: WORD 'ERASE-AUXILLARY' codep=0x224c wordp=0xa7a6 params=1 returns=0
// ================================================

void ERASE_dash_AUXILLARY() // ERASE-AUXILLARY
{
  unsigned short int a;
  a = Pop(); // >R
  GetCOLOR(); // @COLOR
  Push(0x00c5);
  Push(0x0053);
  Push(0x007e);
  Push(0x009c);
  Push(a); // R>
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xa7c2: WORD 'ERASE-T' codep=0x224c wordp=0xa7ce params=1 returns=0
// ================================================

void ERASE_dash_T() // ERASE-T
{
  unsigned short int a;
  a = Pop(); // >R
  GetCOLOR(); // @COLOR
  Push(0x0033);
  Push(3);
  Push(1);
  Push(0x009c);
  Push(a); // R>
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0);
  Push(0);
  CTPOS_dot_(); // CTPOS.
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xa7ec: WORD 'WA7EE' codep=0x224c wordp=0xa7ee params=1 returns=0
// ================================================
// orphan

void WA7EE() // WA7EE
{
  GetCOLOR(); // @COLOR
  SWAP(); // SWAP
  StoreCOLOR(); // !COLOR
  _gt_MAINVIEW(); // >MAINVIEW
  BFILL(); // BFILL
  _gt_DISPLAY(); // >DISPLAY
  V_gt_DISPLAY(); // V>DISPLAY
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xa800: WORD 'WA802' codep=0x224c wordp=0xa802 params=2 returns=0
// ================================================

void WA802() // WA802
{
  Push(Pop() * 0x000b); //  0x000b *
  Push(0x0052);
  Push(0x0077);
  ROT(); // ROT
  _dash_(); // -
  POS_dot_(); // POS.
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
}


// ================================================
// 0xa81e: WORD '.HIGHLI' codep=0x224c wordp=0xa82a params=2 returns=0
// ================================================

void DrawHIGHLI() // .HIGHLI
{
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  WA802(); // WA802
  Push(pp_HIGHLIGHT_dash_BUTTON); // HIGHLIGHT-BUTTON
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(7);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(6);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  BLT(); // BLT
}


// ================================================
// 0xa848: WORD 'WA84A' codep=0x224c wordp=0xa84a params=2 returns=0
// ================================================

void WA84A() // WA84A
{
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  WA802(); // WA802
  Push(-2);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  Push(2);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(3);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(2);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(pp_BUTTON_dash_ON); // BUTTON-ON
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
}


// ================================================
// 0xa874: WORD '.ON' codep=0x224c wordp=0xa87c params=2 returns=0
// ================================================

void DrawON() // .ON
{
  unsigned short int a;
  OVER(); // OVER
  a = Pop(); // >R
  WA84A(); // WA84A
  Push(a); // R>
  GetColor(BLACK);
  Push((Pop()==Pop())?1:0); // =
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  CLICK(); // CLICK
}


// ================================================
// 0xa892: WORD 'CLR-BUT' codep=0x224c wordp=0xa89e params=0 returns=0
// ================================================

void CLR_dash_BUT() // CLR-BUT
{
  unsigned short int i, imax;

  i = 0;
  imax = 6;
  do // (DO)
  {
    Push(0);
    Push(i); // I
    _2DUP(); // 2DUP
    DrawHIGHLI(); // .HIGHLI
    WA84A(); // WA84A
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xa8b4: WORD 'INIT-BU' codep=0x224c wordp=0xa8c0 params=0 returns=0
// ================================================

void INIT_dash_BU() // INIT-BU
{
  CLR_dash_BUT(); // CLR-BUT
  Push(pp_THIS_dash_BU); // THIS-BU
  OFF(); // OFF
  GetColor(BLUE);
  Push(0);
  DrawHIGHLI(); // .HIGHLI
}


// ================================================
// 0xa8ce: WORD '(SHIP-C' codep=0x224c wordp=0xa8da params=1 returns=0
// ================================================

void _ro_SHIP_dash_C() // (SHIP-C
{
  _gt_SSCT(); // >SSCT
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR
  SFILL(); // SFILL
  GetColor(GREEN);
  GetColor(GREEN);
  GetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  VIEWSCR(); // VIEWSCR
  WA659(); // WA659
  WA6AF(); // WA6AF
  TXT_dash_WIN(); // TXT-WIN
  WA705(); // WA705
  Push(0);
  WA77E(); // WA77E
  GetColor(BLACK);
  ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
  CTERASE(); // CTERASE
  CLR_dash_BUT(); // CLR-BUT
  INIT_dash_BU(); // INIT-BU
}


// ================================================
// 0xa906: WORD 'SHIP-CONSOLE' codep=0x224c wordp=0xa912 params=0 returns=0
// ================================================

void SHIP_dash_CONSOLE() // SHIP-CONSOLE
{
  GetColor(BLACK);
  _ro_SHIP_dash_C(); // (SHIP-C
}


// ================================================
// 0xa918: WORD ''KEY' codep=0x224c wordp=0xa921
// ================================================

void _i_KEY() // 'KEY
{
  Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
  if (Pop() != 0)
  {
    Push(Read16(pp_LKEY)); // LKEY @
    Push(pp_SKEY); // SKEY
    Store_3(); // !_3
    KEY_2(); // KEY_2
    Push(Read16(regsp)); // DUP
    Push(pp_LKEY); // LKEY
    Store_3(); // !_3
    Push(Read16(regsp)); // DUP
    Push((Pop()==0x001b?1:0) & Read16(pp_ESC_dash_EN)); //  0x001b = ESC-EN @ AND
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(0);
      Push(pp_ESC_dash_PFA); // ESC-PFA
      GetEXECUTE(); // @EXECUTE
    }
    Push(Read16(regsp)); // DUP
    Push(Pop()==0x0013?1:0); //  0x0013 =
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(0);
      Push(pp_IsSOUND); // ?SOUND
      Push(1);
      TOGGLE(); // TOGGLE
      Push(Read16(pp_IsSOUND)==0?1:0); // ?SOUND @ 0=
      if (Pop() != 0)
      {
        musoff(); // musoff
      }
    }
    Push(pp_KEYTIME); // KEYTIME
    _2_at_(); // 2@
    Push(pp_LKEYTIM); // LKEYTIM
    _2_ex_(); // 2!
    TIME(); // TIME
    _2_at_(); // 2@
    Push(pp_KEYTIME); // KEYTIME
    _2_ex_(); // 2!
    return;
  }
  Push(0);
}


// ================================================
// 0xa98b: WORD 'UL' codep=0x224c wordp=0xa98d params=0 returns=2
// ================================================

void UL() // UL
{
  Push(1);
  Push(-1);
}


// ================================================
// 0xa993: WORD 'U0' codep=0x224c wordp=0xa995 params=0 returns=2
// ================================================

void U0() // U0
{
  Push(1);
  Push(0);
}


// ================================================
// 0xa99b: WORD '0L' codep=0x224c wordp=0xa99d params=0 returns=2
// ================================================

void _0L() // 0L
{
  Push(1);
  Push(1);
}


// ================================================
// 0xa9a3: WORD 'UR' codep=0x224c wordp=0xa9a5 params=0 returns=2
// ================================================

void UR() // UR
{
  Push(0);
  Push(-1);
  Push(pp_FQUIT); // FQUIT
  ON_3(); // ON_3
}


// ================================================
// 0xa9af: WORD '0R' codep=0x224c wordp=0xa9b1 params=0 returns=2
// ================================================

void _0R() // 0R
{
  Push(0);
  Push(1);
  Push(pp_FQUIT); // FQUIT
  ON_3(); // ON_3
}


// ================================================
// 0xa9bb: WORD 'DL' codep=0x224c wordp=0xa9bd params=0 returns=2
// ================================================

void DL() // DL
{
  Push(-1);
  Push(-1);
}


// ================================================
// 0xa9c3: WORD 'DZ' codep=0x224c wordp=0xa9c5 params=0 returns=2
// ================================================

void DZ() // DZ
{
  Push(-1);
  Push(0);
}


// ================================================
// 0xa9cb: WORD 'DR' codep=0x224c wordp=0xa9cd params=0 returns=2
// ================================================

void DR() // DR
{
  Push(-1);
  Push(1);
}


// ================================================
// 0xa9d3: WORD 'XY0' codep=0x224c wordp=0xa9d5 params=0 returns=2
// ================================================

void XY0() // XY0
{
  Push2Words("NULL");
}


// ================================================
// 0xa9d9: WORD 'TRIG' codep=0x224c wordp=0xa9db params=0 returns=2
// ================================================

void TRIG() // TRIG
{
  Push2Words("NULL");
  Push(pp_FTRIG); // FTRIG
  ON_3(); // ON_3
}


// ================================================
// 0xa9e3: WORD '(XYSCAN)' codep=0x4a4f wordp=0xa9ef
// ================================================

void _ro_XYSCAN_rc_() // (XYSCAN)
{
  switch(Pop()) // (XYSCAN)
  {
  case 327:
    UL(); // UL
    break;
  case 328:
    U0(); // U0
    break;
  case 329:
    _0L(); // 0L
    break;
  case 331:
    UR(); // UR
    break;
  case 333:
    _0R(); // 0R
    break;
  case 335:
    DL(); // DL
    break;
  case 336:
    DZ(); // DZ
    break;
  case 337:
    DR(); // DR
    break;
  case 0:
    XY0(); // XY0
    break;
  case 92:
    UL(); // UL
    break;
  case 126:
    U0(); // U0
    break;
  case 124:
    UR(); // UR
    break;
  case 500:
    _0R(); // 0R
    break;
  case 335:
    DL(); // DL
    break;
  case 96:
    DZ(); // DZ
    break;
  default:
    TRIG(); // TRIG
    break;

  }
}

// ================================================
// 0xaa2f: WORD 'XYSCAN' codep=0x224c wordp=0xaa3a
// ================================================

void XYSCAN() // XYSCAN
{
  Push(pp_FQUIT); // FQUIT
  OFF(); // OFF
  Push(pp_FTRIG); // FTRIG
  OFF(); // OFF
  _i_KEY(); // 'KEY
  _ro_XYSCAN_rc_(); // (XYSCAN) case
}


// ================================================
// 0xaa48: WORD '?TRIG' codep=0x224c wordp=0xaa52 params=0 returns=1
// ================================================

void IsTRIG() // ?TRIG
{
  Push(Read16(pp_FTRIG)); // FTRIG @
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(pp_FTRIG); // FTRIG
  OFF(); // OFF
}


// ================================================
// 0xaa62: WORD '?QUIT' codep=0x224c wordp=0xaa6c params=0 returns=1
// ================================================

void IsQUIT() // ?QUIT
{
  Push(Read16(pp_FQUIT)); // FQUIT @
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(pp_FQUIT); // FQUIT
  OFF(); // OFF
}


// ================================================
// 0xaa7c: WORD 'Y/N' codep=0x224c wordp=0xaa84
// ================================================

void Y_slash_N() // Y/N
{
  do
  {
    XYSCAN(); // XYSCAN
    SWAP(); // SWAP
    Pop(); // DROP
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  } while(Pop() == 0);
  CLICK(); // CLICK
  _0_gt_(); // 0>
}


// ================================================
// 0xaa96: WORD 'NEXT-BUTTON' codep=0x224c wordp=0xaa98 params=0 returns=0
// ================================================

void NEXT_dash_BUTTON() // NEXT-BUTTON
{
  Push(0x005d);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  Push(0xfff5);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xaaaa: WORD 'XEQ-BUTTON' codep=0x224c wordp=0xaaac
// ================================================
// orphan

void XEQ_dash_BUTTON() // XEQ-BUTTON
{
  Push(pp__i_BUTTON); // 'BUTTON
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xaab2: WORD '.ABTN' codep=0x224c wordp=0xaabc
// ================================================

void DrawABTN() // .ABTN
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  Push(0x005d);
  Push(0x0077 - a * 0x000b); // 0x0077 I 0x000b * -
  POS_dot_(); // POS.
  _gt_2FONT(); // >2FONT
  Push(Read16(pp_YBLT)); // YBLT @
  Push(0x005d);
  OVER(); // OVER
  Push(Pop() - 7); //  7 -
  Push(0x009c);
  GetColor(BLACK);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  LoadData(_1BTN); // from 'BUTTONS'
  Push(Pop() + a * 0x000c); //  R> 0x000c * +
  Push(0x000c);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xab10: WORD '.BTN-TE' codep=0x224c wordp=0xab1c
// ================================================

void DrawBTN_dash_TE() // .BTN-TE
{
  unsigned short int i, imax;
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(Read16(regsp)); // DUP
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  Push(pp_BTN_dash_REC); // BTN-REC
  Store_3(); // !_3
  GetColor(BLACK);
  WA77E(); // WA77E
  Push(0x005d);
  Push(0x0077);
  POS_dot_(); // POS.
  _gt_2FONT(); // >2FONT
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  LoadData(_n_BTN); // from 'BUTTONS'

  i = 0;
  imax = (Read16(Pop())&0xFF) * 0x000c; //  C@ 0x000c *
  do // (DO)
  {
    LoadData(_1BTN); // from 'BUTTONS'
    Push(Pop() + i); //  I +
    Push(0x000c);
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    NEXT_dash_BUTTON(); // NEXT-BUTTON
    Push(0x000c);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xab6a: WORD 'NEW-BUT' codep=0x224c wordp=0xab76
// ================================================

void NEW_dash_BUT() // NEW-BUT
{
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(Read16(pp_BTN_dash_REC)); // BTN-REC @
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(0);
  LoadData(_n_BTN); // from 'BUTTONS'
  Push(Read16(Pop())&0xFF); //  C@
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    GetColor(BLUE);
    OVER(); // OVER
    GetColor(BLACK);
    Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
    DrawHIGHLI(); // .HIGHLI
    DrawHIGHLI(); // .HIGHLI
    Push(pp_THIS_dash_BU); // THIS-BU
    Store_3(); // !_3
    CLICK(); // CLICK
  } else
  {
    Pop(); // DROP
  }
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xabba: WORD 'CURSORSPACE' codep=0x224c wordp=0xabc6 params=0 returns=1
// ================================================

void CURSORSPACE() // CURSORSPACE
{
  Push(Read16(pp_CURSEG)); // CURSEG @
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  Push(0);
}


// ================================================
// 0xabd2: WORD 'BLD-CRS' codep=0x224c wordp=0xabde params=1 returns=0
// ================================================

void BLD_dash_CRS() // BLD-CRS
{
  unsigned short int a, b;
  GetCOLOR(); // @COLOR
  a = Pop(); // >R
  Push(Read16(pp_CRSCOLO)); // CRSCOLO @
  StoreCOLOR(); // !COLOR
  CURSORSPACE(); // CURSORSPACE
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  Push((Pop() + 1) + Read16(pp_OCRS) * 4); //  1+ OCRS @ 4 * +
  b = Pop(); // >R
  Push(Read16(b)&0xFF); // I C@
  Push(pp_YBLT); // YBLT
  Store_3(); // !_3
  Push(Read16(b + 1)&0xFF); // I 1+ C@
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  Push(Read16(b + 2)&0xFF); // I 2+ C@
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(Read16(b + 3)&0xFF); // R> 3 + C@
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  BLT(); // BLT
  Push(a); // R>
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xac30: WORD 'SET-CRS' codep=0x224c wordp=0xac3c params=1 returns=1
// ================================================

void SET_dash_CRS() // SET-CRS
{
  Push(Read16(pp_NCRS)); // NCRS @
  OVER(); // OVER
  Push((Read16(Pop())&0xFF) + 1); //  C@ 1+
  Push(0);
  SWAP(); // SWAP
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Push(!(Read16(pp_NCRS)==Read16(pp_OCRS)?1:0)); // NCRS @ OCRS @ = NOT
    if (Pop() != 0)
    {
      Push(Read16(regsp)); // DUP
      BLD_dash_CRS(); // BLD-CRS
      Push(Read16(pp_NCRS)); // NCRS @
      Push(pp_OCRS); // OCRS
      Store_3(); // !_3
      BLD_dash_CRS(); // BLD-CRS
      Push(1);
    } else
    {
      Pop(); // DROP
      Push(0);
    }
    return;
  }
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(pp_OCRS)); // OCRS @
  MIN(); // MIN
  Push(0);
  MAX(); // MAX
  Push(Read16(regsp)); // DUP
  Push(pp_OCRS); // OCRS
  Store_3(); // !_3
  Push(pp_NCRS); // NCRS
  Store_3(); // !_3
  Push(0);
}


// ================================================
// 0xac96: WORD '$!' codep=0x224c wordp=0xac9d params=2 returns=0
// ================================================

void _do__ex_() // $!
{
  OVER(); // OVER
  Push((Read16(Pop())&0xFF) + 1); //  C@ 1+
  CMOVE(); // CMOVE
}


// ================================================
// 0xaca7: WORD 'SUBROOT' codep=0x224c wordp=0xacb3 params=0 returns=0
// ================================================

void SUBROOT() // SUBROOT
{
  CDEPTH(); // CDEPTH
  Push(pp__ro_SRDEPTH_rc_); // (SRDEPTH)
  Store_3(); // !_3
}


// ================================================
// 0xacbb: WORD 'SRDEPTH' codep=0x224c wordp=0xacc7 params=0 returns=1
// ================================================

void SRDEPTH() // SRDEPTH
{
  CDEPTH(); // CDEPTH
  Push(Pop() - Read16(pp__ro_SRDEPTH_rc_)); //  (SRDEPTH) @ -
}


// ================================================
// 0xacd1: WORD '>ASCEND' codep=0x224c wordp=0xacd3 params=0 returns=0
// ================================================

void _gt_ASCEND() // >ASCEND
{
  while(1)
  {
    IsLAST(); // ?LAST
    SRDEPTH(); // SRDEPTH
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) return;
    ICLOSE(); // ICLOSE
  }
}


// ================================================
// 0xace7: WORD 'NEXT-NODE' codep=0x224c wordp=0xacf3 params=0 returns=0
// ================================================

void NEXT_dash_NODE() // NEXT-NODE
{
  GetINST_dash_OFF(); // @INST-OFF
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    return;
  }
  _gt_ASCEND(); // >ASCEND
  SRDEPTH(); // SRDEPTH
  _0_gt_(); // 0>
  if (Pop() == 0) return;
  INEXT(); // INEXT
}


// ================================================
// 0xad0f: WORD 'INST-VAL' codep=0x744d wordp=0xad1b
// ================================================
IFieldType INST_dash_VAL = {DIRECTORYIDX, 0x11, 0x02};

// ================================================
// 0xad1e: WORD 'SHAPE' codep=0x73ea wordp=0xad28
// ================================================
LoadDataType SHAPE = {CREATUREIDX, 0x04, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xad2e: WORD 'INST-DATE' codep=0x744d wordp=0xad3a
// ================================================
IFieldType INST_dash_DATE = {DIRECTORYIDX, 0x13, 0x02};

// ================================================
// 0xad3d: WORD 'RESEMBLES' codep=0x73ea wordp=0xad49
// ================================================
LoadDataType RESEMBLES = {CREATUREIDX, 0x92, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xad4f: WORD 'BOX-NAME' codep=0x73ea wordp=0xad5b
// ================================================
LoadDataType BOX_dash_NAME = {BOXIDX, 0x00, 0x10, 0x10, 0x6440};

// ================================================
// 0xad61: WORD '%NAME' codep=0x744d wordp=0xad6b
// ================================================
IFieldType _pe_NAME = {SHIPIDX, 0x34, 0x0f};

// ================================================
// 0xad6e: WORD 'ORIG-NAME' codep=0x73ea wordp=0xad7a
// ================================================
LoadDataType ORIG_dash_NAME = {MESSAGEIDX, 0x00, 0x10, 0x00, 0x0000};

// ================================================
// 0xad80: WORD 'SPEC-NAME' codep=0x73ea wordp=0xad8c
// ================================================
LoadDataType SPEC_dash_NAME = {SPECIMENIDX, 0x00, 0x10, 0x10, 0x65e4};

// ================================================
// 0xad92: WORD 'BD-NAME' codep=0x73ea wordp=0xad9e
// ================================================
LoadDataType BD_dash_NAME = {BIO_DATAIDX, 0x00, 0x10, 0x10, 0x65e4};

// ================================================
// 0xada4: WORD 'ELEM-NAME' codep=0x73ea wordp=0xadb0
// ================================================
LoadDataType ELEM_dash_NAME = {ELEMENTIDX, 0x00, 0x10, 0x17, 0x650a};

// ================================================
// 0xadb6: WORD 'ELEM-VAL' codep=0x73ea wordp=0xadc2
// ================================================
LoadDataType ELEM_dash_VAL = {ELEMENTIDX, 0x10, 0x02, 0x17, 0x650a};

// ================================================
// 0xadc8: WORD 'ART-NAME' codep=0x73ea wordp=0xadd4
// ================================================
LoadDataType ART_dash_NAME = {ARTIFACTIDX, 0x00, 0x18, 0x1e, 0x652c};

// ================================================
// 0xadda: WORD 'ART-VAL' codep=0x73ea wordp=0xade6
// ================================================
LoadDataType ART_dash_VAL = {ARTIFACTIDX, 0x1b, 0x02, 0x1e, 0x652c};

// ================================================
// 0xadec: WORD 'ART-VOL' codep=0x73ea wordp=0xadf8
// ================================================
LoadDataType ART_dash_VOL = {ARTIFACTIDX, 0x19, 0x02, 0x1e, 0x652c};

// ================================================
// 0xadfe: WORD 'PHR-CNT' codep=0x744d wordp=0xae0a
// ================================================
IFieldType PHR_dash_CNT = {STRINGIDX, 0x0b, 0x01};

// ================================================
// 0xae0d: WORD 'PHRASE-MEM' codep=0x744d wordp=0xae18
// ================================================
IFieldType PHRASE_dash_MEM = {STRINGIDX, 0x0c, 0xfe};

// ================================================
// 0xae1b: WORD 'U>$' codep=0x224c wordp=0xae23 params=1 returns=2
// ================================================

void U_gt__do_() // U>$
{
  Push(0);
  _st__n_(); // <#
  _n_S(); // #S
  _n__gt_(); // #>
}


// ================================================
// 0xae2d: WORD 'WAE2F' codep=0x224c wordp=0xae2f params=0 returns=1
// ================================================

void WAE2F() // WAE2F
{
  unsigned short int i, imax;

  i = 0;
  imax = 0x000b;
  do // (DO)
  {
    Push(i); // I
    GetTableEntry("OVT");
    Push(Read16(Pop())); //  @
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xae43: WORD 'WAE45' codep=0x224c wordp=0xae45 params=1 returns=0
// ================================================

void WAE45() // WAE45
{
  unsigned short int i, imax;

  i = 0x000a;
  imax = 0;
  do // (DO)
  {
    Push(i); // I
    GetTableEntry("OVT");
    Store_3(); // !_3
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xae5b: WORD '<CTVERSIONERROR>' codep=0x224c wordp=0xae67 params=2 returns=0
// ================================================

void _st_CTVERSIONERROR_gt_() // <CTVERSIONERROR>
{
  unsigned short int a, b;
  a = Pop(); // >R
  b = Pop(); // >R
  WAE2F(); // WAE2F
  Push(b); // R>
  Push(a); // R>
  CTINIT(); // CTINIT
  W7075(); // W7075
  WAE45(); // WAE45
}


// ================================================
// 0xae79: WORD '<CTASKMOUNT>' codep=0x224c wordp=0xae85 params=0 returns=0
// ================================================

void _st_CTASKMOUNT_gt_() // <CTASKMOUNT>
{
  WAE2F(); // WAE2F
  CTINIT(); // CTINIT
  _st_ASKMOUNT_gt_(); // <ASKMOUNT>
  WAE45(); // WAE45
}


// ================================================
// 0xae8f: WORD 'TEXT-CO' codep=0x744d wordp=0xae9b
// ================================================
IFieldType TEXT_dash_CO = {SCROLL_TEXTIDX, 0x0b, 0x03};

// ================================================
// 0xae9e: WORD 'TEXT-IN' codep=0x744d wordp=0xaeaa
// ================================================
IFieldType TEXT_dash_IN = {SCROLL_TEXTIDX, 0x0e, 0x03};

// ================================================
// 0xaead: WORD 'TEXT-TE' codep=0x744d wordp=0xaeb9
// ================================================
IFieldType TEXT_dash_TE = {SCROLL_TEXTIDX, 0x11, 0x26};

// ================================================
// 0xaebc: WORD 'TEXT>PA' codep=0x224c wordp=0xaec8 params=0 returns=0
// ================================================

void TEXT_gt_PA() // TEXT>PA
{
  Push(0x63ef+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  PAD(); // PAD
  Push(Pop() + 1); //  1+
  Push(0x0026);
  CMOVE(); // CMOVE
  Push(0x0026);
  PAD(); // PAD
  C_ex_(); // C!
}


// ================================================
// 0xaede: WORD 'CMESS' codep=0x224c wordp=0xaee8 params=2 returns=11
// ================================================

void CMESS() // CMESS
{
  unsigned short int a, b;
  a = Pop(); // >R
  b = Pop(); // >R
  GetCRS(); // @CRS
  Push(b); // R>
  Push(a); // R>
  CTINIT(); // CTINIT
  Push(Pop() * 2); //  2*
  Push(0x0050);
  SWAP(); // SWAP
  _dash_(); // -
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  Push(0x0017);
  SWAP(); // SWAP
  Push(Pop() * 6); //  6 *
  _dash_(); // -
  Push(pp_YBLT); // YBLT
  Store_3(); // !_3
}


// ================================================
// 0xaf14: WORD 'X0MESS' codep=0x224c wordp=0xaf1f params=2 returns=0
// ================================================

void X0MESS() // X0MESS
{
  Push(0x0017);
  ROT(); // ROT
  Push(Pop() * 6); //  6 *
  _dash_(); // -
  Push(0x0026);
  ROT(); // ROT
  ROT(); // ROT
  Push(2);
  Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
  Push(5);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(4);
    MAX(); // MAX
  }
  POS_dot_PXT(); // POS.PXT
}


// ================================================
// 0xaf49: WORD '0MESS' codep=0x224c wordp=0xaf53 params=1 returns=0
// ================================================

void _0MESS() // 0MESS
{
  GetColor(BLACK);
  X0MESS(); // X0MESS
}


// ================================================
// 0xaf59: WORD 'WAF5B' codep=0x2214 wordp=0xaf5b
// ================================================
// 0xaf5b: dw 0x002e

// ================================================
// 0xaf5d: WORD '-XTRAILING' codep=0x224c wordp=0xaf69 params=3 returns=2
// ================================================

void _dash_XTRAILING() // -XTRAILING
{
  Push(0xaf5b); // 'WAF5B'
  Store_3(); // !_3
  Push(0xaf5b); // 'WAF5B'
  CFA(); // CFA
  Push(0x2790); // '-TRAILING'
  Push(Pop() + 0x000e); //  0x000e +
  Store_3(); // !_3
  _dash_TRAILING(); // -TRAILING
  Push(0x099a); // 'BL'
  CFA(); // CFA
  Push(0x2790); // '-TRAILING'
  Push(Pop() + 0x000e); //  0x000e +
  Store_3(); // !_3
}


// ================================================
// 0xaf97: WORD 'CEX+WAX' codep=0x224c wordp=0xafa3
// ================================================

void CEX_plus_WAX() // CEX+WAX
{
  Push(pp__i_CEX_plus_); // 'CEX+
  GetEXECUTE(); // @EXECUTE
  Push(pp__i_WAX); // 'WAX
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xafad: WORD 'WAFAF' codep=0x224c wordp=0xafaf params=0 returns=0
// ================================================

void WAFAF() // WAFAF
{
  Push((Read16(pp_STARDATE)==Read16(pp__ro_FLARE_rc_)?1:0) & (Read16(pp_IsWIN)==0?1:0)); // STARDATE @ (FLARE) @ = ?WIN @ 0= AND
  if (Pop() == 0) return;
  Push(pp__i_FLARE); // 'FLARE
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xafcb: WORD 'WAFCD' codep=0x224c wordp=0xafcd
// ================================================

void WAFCD() // WAFCD
{
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xafd3: WORD 'WAFD5' codep=0x224c wordp=0xafd5
// ================================================

void WAFD5() // WAFD5
{
  Push(pp__i_REPAIR); // 'REPAIR
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xafdb: WORD 'WAFDD' codep=0x224c wordp=0xafdd
// ================================================

void WAFDD() // WAFDD
{
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xafe3: WORD 'WAFE5' codep=0x224c wordp=0xafe5
// ================================================

void WAFE5() // WAFE5
{
  Push(pp__i__dot_VEHICLE_dash_STATUS); // '.VEHICLE-STATUS
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xafeb: WORD 'WAFED' codep=0x224c wordp=0xafed
// ================================================

void WAFED() // WAFED
{
  WAFDD(); // WAFDD
  if (Pop() == 0) return;
  WAFD5(); // WAFD5
  WAFE5(); // WAFE5
}


// ================================================
// 0xaff9: WORD 'WAFFB' codep=0x224c wordp=0xaffb
// ================================================

void WAFFB() // WAFFB
{
  Push(pp__i_TREATM); // 'TREATM
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xb001: WORD 'WB003' codep=0x224c wordp=0xb003
// ================================================

void WB003() // WB003
{
  Push(pp__i__dot_VITAL); // '.VITAL
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xb009: WORD 'WB00B' codep=0x224c wordp=0xb00b
// ================================================

void WB00B() // WB00B
{
  Push(pp__i_CREW_dash_C); // 'CREW-C
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xb011: WORD 'WB013' codep=0x224c wordp=0xb013
// ================================================

void WB013() // WB013
{
  WB00B(); // WB00B
  if (Pop() == 0) return;
  WAFFB(); // WAFFB
  WB003(); // WB003
}


// ================================================
// 0xb01f: WORD '?NEW-HO' codep=0x224c wordp=0xb02b params=0 returns=1
// ================================================

void IsNEW_dash_HO() // ?NEW-HO
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LAST_dash_UPDATE); // LAST-UPDATE
  _2_at_(); // 2@
  D_dash_(); // D-
  DABS(); // DABS
  Push(pp_REAL_dash_MS); // REAL-MS
  _2_at_(); // 2@
  D_gt_(); // D>
}


// ================================================
// 0xb03f: WORD 'WB041' codep=0x224c wordp=0xb041
// ================================================

void WB041() // WB041
{
  Push(pp__i__dot_DATE); // '.DATE
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xb047: WORD 'WB049' codep=0x224c wordp=0xb049 params=0 returns=0
// ================================================

void WB049() // WB049
{
  IsNEW_dash_HO(); // ?NEW-HO
  if (Pop() == 0) return;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LAST_dash_UPDATE); // LAST-UPDATE
  StoreD(); // D!
  Push(Read16(pp_IsSECURE)); // ?SECURE @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(pp_STARDATE)); // STARDATE @
    _st_(); // <
    Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
    Push(2);
    Push(4);
    WITHIN(); // WITHIN
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(Read16(pp__i_STP)); // 'STP @
      MODULE(); // MODULE
    }
  }
  Push(Read16(pp_STAR_dash_HR)==0x0017?1:0); // STAR-HR @ 0x0017 =
  if (Pop() != 0)
  {
    Push(1);
    Push(pp_STARDATE); // STARDATE
    _plus__ex__2(); // +!_2
    WAFAF(); // WAFAF
    Push(pp_STAR_dash_HR); // STAR-HR
    OFF(); // OFF
  } else
  {
    Push(1);
    Push(pp_STAR_dash_HR); // STAR-HR
    _plus__ex__2(); // +!_2
  }
  WB041(); // WB041
  Push(Read16(pp_IsSUP)); // ?SUP @
  if (Pop() == 0) return;
  Push(pp__i_ENERGY); // 'ENERGY
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xb0b1: WORD 'PARALLE' codep=0x224c wordp=0xb0bd params=0 returns=0
// ================================================

void PARALLE() // PARALLE
{
  Push(Read16(pp_TIME_dash_PASSING)); // TIME-PASSING @
  if (Pop() == 0) return;
  WB049(); // WB049
  WB013(); // WB013
  WAFED(); // WAFED
  WAFCD(); // WAFCD
}


// ================================================
// 0xb0cf: WORD 'WB0D1' codep=0x224c wordp=0xb0d1 params=0 returns=0
// ================================================

void WB0D1() // WB0D1
{
  Push(Read16(pp__i_CLEANU)); // 'CLEANU @
  _gt_V(); // >V
  Push(Read16(pp__i_KEY_dash_CA)); // 'KEY-CA @
  _gt_V(); // >V
}


// ================================================
// 0xb0df: WORD 'WB0E1' codep=0x224c wordp=0xb0e1 params=0 returns=0
// ================================================

void WB0E1() // WB0E1
{
  V_gt_(); // V>
  Push(pp__i_KEY_dash_CA); // 'KEY-CA
  Store_3(); // !_3
  V_gt_(); // V>
  Push(pp__i_CLEANU); // 'CLEANU
  Store_3(); // !_3
}


// ================================================
// 0xb0ef: WORD 'WB0F1' codep=0x224c wordp=0xb0f1
// ================================================

void WB0F1() // WB0F1
{
  Push(pp__i_KEY_dash_CA); // 'KEY-CA
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xb0f7: WORD 'DOTASKS' codep=0x224c wordp=0xb103
// ================================================

void DOTASKS() // DOTASKS
{
  WB0D1(); // WB0D1
  EXECUTE(); // EXECUTE
  Push(pp__i_KEY_dash_CA); // 'KEY-CA
  Store_3(); // !_3
  Push(pp__i_CLEANU); // 'CLEANU
  Store_3(); // !_3
  Push(1);
  do
  {
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    Push(Pop() | Read16(pp_FORCEKEY)); //  FORCEKEY @ OR
    if (Pop() != 0)
    {
      _i_KEY(); // 'KEY
      WB0F1(); // WB0F1
      TIME(); // TIME
      _2_at_(); // 2@
      Push(pp_KEYTIME); // KEYTIME
      StoreD(); // D!
    } else
    {
      Push(pp_SKEY); // SKEY
      OFF(); // OFF
      Push(pp_LKEY); // LKEY
      OFF(); // OFF
    }
    TIME(); // TIME
    _2_at_(); // 2@
    Push(pp_KEYTIME); // KEYTIME
    _2_at_(); // 2@
    D_dash_(); // D-
    Push(0x03e8); Push(0x0000);
    D_gt_(); // D>
    Push(Pop() | Read16(pp_FORCEPTASK)); //  FORCEPTASK @ OR
    if (Pop() != 0)
    {
      PARALLE(); // PARALLE
    }
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    Push(Pop()==0?1:0); //  0=
  } while(Pop() == 0);
  Push(pp__i_CLEANU); // 'CLEANU
  GetEXECUTE(); // @EXECUTE
  WB0E1(); // WB0E1
}

// 0xb163: db 0x65 0xb1 0x80 0xe4 0x80 0x80 0xfc 0x00 0x74 0x11 0x1e 0x55 0x1f 0x8b 0x44 0x04 0x1f 0x25 0x00 0x80 0x0b 0xc0 0x75 0x03 0xbf 0x0d 0x00 0x8b 0xc7 0x2e 0x88 0x06 0xf6 0x5f 0xb0 0x03 0xcf 'e       t  U  D  %    u      .   _   '

// ================================================
// 0xb188: WORD 'WB18A' codep=0x224c wordp=0xb18a params=0 returns=0
// ================================================

void WB18A() // WB18A
{
  Push(0x0024);
  _ro__ex_OLD_rc_(); // (!OLD)
  Push(pp_W613C); // W613C
  _2_ex_(); // 2!
  GetDS(); // @DS
  Push(0xb165);
  Push(0x0024);
  _ro__ex_SET_rc_(); // (!SET)
}


// ================================================
// 0xb1a2: WORD 'RESTOREINT24' codep=0x224c wordp=0xb1a4 params=0 returns=0
// ================================================

void RESTOREINT24() // RESTOREINT24
{
  Push(pp_W613C); // W613C
  _2_at_(); // 2@
  Push(0x0024);
  _ro__ex_SET_rc_(); // (!SET)
}


// ================================================
// 0xb1b0: WORD 'SETDBUF' codep=0x224c wordp=0xb1bc
// ================================================

void SETDBUF() // SETDBUF
{
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    Push(0xa000);
    Push(Read16(cc__16K) >> 1); // 16K 2/
    Push(0xa200);
    Push(pp_HBUF_dash_SEG); // HBUF-SEG
    Store_3(); // !_3
  } else
  {
    Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
    Push(pp_HBUF_dash_SEG); // HBUF-SEG
    Store_3(); // !_3
    IsHERCULES(); // ?HERCULES
    if (Pop() != 0)
    {
      Push(0xb000);
      Push(Read16(cc__16K) * 2); // 16K 2*
    } else
    {
      Push(0xb800);
      Push(Read16(cc__16K)); // 16K
    }
  }
  Push(0x50c2); // 'DBUF-SIZE'
  Store_3(); // !_3
  Push(pp_DBUF_dash_SEG); // DBUF-SEG
  Store_3(); // !_3
  BLD_dash_DIS(); // BLD-DIS
  BLD_dash_MV(); // BLD-MV
  _gt_DISPLAY(); // >DISPLAY
  Push(Read16(pp_MONITOR)); // MONITOR @
  COLORCA(); // COLORCA
}


// ================================================
// 0xb210: WORD 'XOR!' codep=0x224c wordp=0xb219 params=1 returns=0
// ================================================

void XOR_ex_() // XOR!
{
  unsigned short int i, imax;
  Push(Read16(regsp)); // DUP
  NFA(); // NFA
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
  Push(Pop() - 2); //  2 -
  SWAP(); // SWAP
  _2DUP(); // 2DUP
  _dash_(); // -
  Push(1);
  _gt_(); // >
  if (Pop() != 0)
  {

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(i); // I
      Push(0x007f);
      TOGGLE(); // TOGGLE
      Push(1);
      i += Pop();
    } while(i<imax); // (/LOOP)

    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xb24b: WORD 'HEAD!' codep=0x224c wordp=0xb255 params=0 returns=0
// ================================================

void HEAD_ex_() // HEAD!
{
  unsigned short int i, imax;
  Push(Read16(user_CONTEXT) + 6); // CONTEXT @ 6 +
  PAD(); // PAD
  Push(8);
  CMOVE(); // CMOVE
  while(1)
  {
    Push(0);
    Push(0);
    PAD(); // PAD
    Push(Read16(regsp)); // DUP
    Push(Pop() + 8); //  8 +
    SWAP(); // SWAP

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(Read16(regsp)); // DUP
      Push(Read16(i)); // I @
      U_st_(); // U<
      if (Pop() != 0)
      {
        Pop(); Pop(); // 2DROP
        Push(i); // I
        Push(Read16(regsp)); // DUP
        Push(Read16(Pop())); //  @
      }
      Push(2);
      i += Pop();
    } while(i<imax); // (/LOOP)

    OVER(); // OVER
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      OVER(); // OVER
      Push(Read16(Pop() - 2)); //  2- @
      SWAP(); // SWAP
      Store_3(); // !_3
    }
    SWAP(); // SWAP
    Pop(); // DROP
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() == 0) break;

    PFA(); // PFA
    XOR_ex_(); // XOR!
  }
  NODRIVES(); // NODRIVES
  SET_STR_AS_PARAM("starflt.com");
  _gt_TIB(); // >TIB
  SYSGEN(); // SYSGEN
  BYE(); // BYE
}


// ================================================
// 0xb2c9: WORD 'LFCLAIM' codep=0x224c wordp=0xb2cb params=1 returns=1
// ================================================

void LFCLAIM() // LFCLAIM
{
  Push(-Pop() + Read16(pp_LFSEG)); //  NEGATE LFSEG @ +
  Push(Read16(regsp)); // DUP
  Push(pp_LFSEG); // LFSEG
  Store_3(); // !_3
}


// ================================================
// 0xb2db: WORD 'AINSTALL' codep=0x224c wordp=0xb2dd params=1 returns=0
// ================================================

void AINSTALL() // AINSTALL
{
  Push(Read16(regsp)); // DUP
  Push(pp__i_ARRAY); // 'ARRAY
  Store_3(); // !_3
  _n_BYTES(); // #BYTES
  _n_ROWZ(); // #ROWZ
  Push(Pop() * 2); //  2*
  Push(Pop() + Pop()); // +
  Push((Pop() >> 4) + 1); //  16/ 1+
  LFCLAIM(); // LFCLAIM
  OVER(); // OVER
  Push(Pop() + 6); //  6 +
  Store_3(); // !_3
  StoreOFFSETS(); // !OFFSETS
}


// ================================================
// 0xb2fd: WORD 'BINSTALL' codep=0x224c wordp=0xb2ff params=2 returns=0
// ================================================

void BINSTALL() // BINSTALL
{
  LFCLAIM(); // LFCLAIM
  SWAP(); // SWAP
  Store_3(); // !_3
}


// ================================================
// 0xb307: WORD 'AINSTALLS' codep=0x224c wordp=0xb309 params=0 returns=0
// ================================================

void AINSTALLS() // AINSTALLS
{
  unsigned short int i, imax;

  i = 0;
  imax = 0x000f;
  do // (DO)
  {
    Push(i); // I
    GetTableEntry("IARRAYS");
    AINSTALL(); // AINSTALL
    i++;
  } while(i<imax); // (LOOP)

  Push(0x6b1d); // 'PPOLY'
  Push(Read16(Pop() + 6)); //  6 + @
  Push(0x5144); // 'POLYSEG'
  Store_3(); // !_3
}


// ================================================
// 0xb32d: WORD 'BINSTALLS' codep=0x224c wordp=0xb32f params=0 returns=0
// ================================================

void BINSTALLS() // BINSTALLS
{
  unsigned short int i, imax;
  Push(0x5071); // 'MUSSEG'
  Push(0x0032);
  Push(pp_REMSEG); // REMSEG
  Push(0x00e1);
  Push(pp_SSYSEG); // SSYSEG
  Push(0x000b);
  Push(pp_MSYSEG); // MSYSEG
  Push(0x001c);
  Push(pp_FONTSEG); // FONTSEG
  Push(0x0030);
  Push(pp_CURSEG); // CURSEG
  Push(0x000d);
  Push(pp_LSYSEG); // LSYSEG
  Push(0x002f);
  Push(pp_IHSEG); // IHSEG
  Push(0x002d);
  Push(pp_ILSEG); // ILSEG
  Push(0x005a);
  Push(pp_ICSEG); // ICSEG
  Push(0x002d);
  Push(pp_IDSEG); // IDSEG
  Push(0x002d);
  Push(pp_IYSEG); // IYSEG
  Push(0x005a);
  Push(pp_IXSEG); // IXSEG
  Push(0x005a);
  Push(pp_HIISEG); // HIISEG
  Push(0x001f);
  Push(pp_LOISEG); // LOISEG
  Push(0x003e);
  Push(pp_LOCSEC); // LOCSEC
  Push(0x003e);
  Push(pp__do_SEG); // $SEG
  Push(0x0136);
  Push(pp_HBUF_dash_SEG); // HBUF-SEG
  Push(0x010e);

  i = 0;
  imax = 0x0012;
  do // (DO)
  {
    BINSTALL(); // BINSTALL
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xb3ad: WORD 'ICINIT' codep=0x224c wordp=0xb3b8 params=0 returns=0
// ================================================

void ICINIT() // ICINIT
{
  Push(0x01f0);
  Push(pp_W5574); // W5574
  Store_3(); // !_3
  Push(0x1360);
  Push(pp__do_MAX); // $MAX
  Store_3(); // !_3
  Push(pp__do_FREE); // $FREE
  OFF(); // OFF
  Push(pp_QTYINST); // QTYINST
  OFF(); // OFF
  Push2Words("NULL");
  Push(pp_IADDR); // IADDR
  _2_ex_(); // 2!
  Push(pp_LFILE_n_); // LFILE#
  OFF(); // OFF
  Push(pp_IBFR + 2); // IBFR 2+
  OFF(); // OFF
}


// ================================================
// 0xb3e2: WORD 'INIT-CRS' codep=0x224c wordp=0xb3e4 params=0 returns=0
// ================================================

void INIT_dash_CRS() // INIT-CRS
{
  PAD(); // PAD
  Push(0x00c8);
  Push(0x00ff);
  FILL_1(); // FILL_1
  GetDS(); // @DS
  PAD(); // PAD
  Push(Read16(pp_CURSEG)); // CURSEG @
  Push(0);
  Push(0x00c8);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xb402: WORD 'XKEYINT' codep=0xb40e wordp=0xb40e
// ================================================
// 0xb40e: push   ax
// 0xb40f: push   ds
// 0xb410: mov    ax,0040
// 0xb413: mov    ds,ax
// 0xb415: xor    ax,ax
// 0xb417: in     al,60
// 0xb419: and    ax,0080
// 0xb41c: jnz    B426
// 0xb41e: mov    ax,[001C]
// 0xb422: mov    [001A],ax
// 0xb426: pop    ds
// 0xb427: pop    ax
// 0xb428: jmp    F000:E987

// ================================================
// 0xb42d: WORD 'INSTALLXKEY' codep=0x224c wordp=0xb439 params=0 returns=0
// ================================================

void INSTALLXKEY() // INSTALLXKEY
{
  Push(Read16(pp__bo_KEYINT_bc_)==0?1:0); // [KEYINT] @ 0=
  if (Pop() == 0) return;
  Push(9);
  _ro__ex_OLD_rc_(); // (!OLD)
  Push(Read16(pp_KEYINTADDR)); // KEYINTADDR @
  _2_ex_(); // 2!
  Push(pp__bo_KEYINT_bc_); // [KEYINT]
  ON_3(); // ON_3
  GetDS(); // @DS
  Push(0xb40e); // 'XKEYINT'
  Push(9);
  _ro__ex_SET_rc_(); // (!SET)
}


// ================================================
// 0xb45d: WORD 'KILLBREAK' codep=0x224c wordp=0xb45f params=0 returns=0
// ================================================
// orphan

void KILLBREAK() // KILLBREAK
{
  Push(0x01b8);
  _2_at_(); // 2@
  Push(0x001b);
  _ro__ex_SET_rc_(); // (!SET)
}


// ================================================
// 0xb46d: WORD 'farb' codep=0x224c wordp=0xb46f params=0 returns=0
// ================================================
// orphan

void farb() // farb
{
  SETSYSK(); // SETSYSK
  INSTALLXKEY(); // INSTALLXKEY
  WB18A(); // WB18A
  KILLBREAK(); // KILLBREAK
}


// ================================================
// 0xb479: WORD 'RESTOREKEY' codep=0x224c wordp=0xb485 params=0 returns=0
// ================================================

void RESTOREKEY() // RESTOREKEY
{
  Push(Read16(pp__bo_KEYINT_bc_)); // [KEYINT] @
  if (Pop() == 0) return;
  Push(Read16(pp_KEYINTADDR)); // KEYINTADDR @
  _2_at_(); // 2@
  Push(9);
  _ro__ex_SET_rc_(); // (!SET)
  Push(pp__bo_KEYINT_bc_); // [KEYINT]
  OFF(); // OFF
}


// ================================================
// 0xb49d: WORD 'FLIMP' codep=0x224c wordp=0xb49f params=0 returns=0
// ================================================
// orphan

void FLIMP() // FLIMP
{
  RESTOREKEY(); // RESTOREKEY
  RESTOREINT24(); // RESTOREINT24
}


// ================================================
// 0xb4a5: WORD 'CFIGARRAYS' codep=0x224c wordp=0xb4b1 params=0 returns=0
// ================================================

void CFIGARRAYS() // CFIGARRAYS
{
  Push(Read16(pp_SYSK) * 0x0040 - 1); // SYSK @ 0x0040 * 1-
  Push(pp_LFSEG); // LFSEG
  Store_3(); // !_3
  AINSTALLS(); // AINSTALLS
  BINSTALLS(); // BINSTALLS
  Push(Read16(pp_HBUF_dash_SEG)); // HBUF-SEG @
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Store_3(); // !_3
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() == 0) return;
  Push(0xa200);
  Push(pp_HBUF_dash_SEG); // HBUF-SEG
  Store_3(); // !_3
}


// ================================================
// 0xb4df: WORD 'LDFONTS' codep=0x224c wordp=0xb4eb
// ================================================

void LDFONTS() // LDFONTS
{
  Push(Read16(pp_FONTSEG)); // FONTSEG @
  Push(0x008f);
  FILE_st_(); // FILE<
}


// ================================================
// 0xb4f7: WORD 'CONFIGURE-SYSTEM' codep=0x224c wordp=0xb503
// ================================================

void CONFIGURE_dash_SYSTEM() // CONFIGURE-SYSTEM
{
  SETMAXDRV(); // SETMAXDRV
  CFIGARRAYS(); // CFIGARRAYS
  Push(Read16(pp_LFSEG)); // LFSEG @
  GetDS(); // @DS
  Push(Pop() + 0x1000); //  0x1000 +
  _dash_(); // -
  Push(0);
  Push(0x0042);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  Push(Read16(regsp)); // DUP
  Push(pp__bo__n_CACHE_bc_); // [#CACHE]
  Store_3(); // !_3
  Push(0x00d0);
  MIN(); // MIN
  Push(pp__n_CACHE); // #CACHE
  Store_3(); // !_3
  AUTO_dash_CACHE(); // AUTO-CACHE
  Push(Read16(pp_BUFFER_dash_BEGIN)); // BUFFER-BEGIN @
  SEG_gt_ADDR(); // SEG>ADDR
  Push(Read16(regsp)); // DUP
  Push(pp__1BUFADR); // 1BUFADR
  Store_3(); // !_3
  Push(Pop() + 0x0410); //  0x0410 +
  Push(pp__2BUFADR); // 2BUFADR
  Store_3(); // !_3
  MOUNTA(); // MOUNTA
  LOAD_dash_CO(); // LOAD-CO
  NODRIVES(); // NODRIVES
  ICINIT(); // ICINIT
  INIT_dash_CRS(); // INIT-CRS
  SETDBUF(); // SETDBUF
}


// ================================================
// 0xb557: WORD 'STARTER' codep=0x224c wordp=0xb563
// ================================================

void STARTER() // STARTER
{
  CONFIGURE_dash_SYSTEM(); // CONFIGURE-SYSTEM
  DOSPARM(); // DOSPARM
}


// ================================================
// 0xb569: WORD 'DOS' codep=0x224c wordp=0xb571 params=0 returns=0
// ================================================

void DOS() // DOS
{
}


// ================================================
// 0xb573: WORD 'MUSIC' codep=0x1ab5 wordp=0xb57d
// ================================================
// 0xb57d: db 0x8b 0xb5 0x1c 0x08 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xb591: WORD 'MUSIC-OV' codep=0x83f8 wordp=0xb59e
// ================================================
// Overlay MUSIC_dash_OV = 0x2d86

// ================================================
// 0xb5a0: WORD 'HIMUS' codep=0x224c wordp=0xb5aa
// ================================================

void HIMUS() // HIMUS
{
  LoadOverlay(MUSIC_dash_OV); // MUSIC-OV
  INTROS(); // Overlay MUSIC
}


// ================================================
// 0xb5b0: WORD '*CAPT-LOG' codep=0x3b68 wordp=0xb5be
// ================================================
// 0xb5be: dw 0x0000 0x9b46

// ================================================
// 0xb5c2: WORD '*OP' codep=0x3b68 wordp=0xb5ca
// ================================================
// 0xb5ca: dw 0x0000 0x9ae5

// ================================================
// 0xb5ce: WORD '*COMM-OFF' codep=0x3b68 wordp=0xb5dc
// ================================================
// 0xb5dc: dw 0x0001 0x0512

// ================================================
// 0xb5e0: WORD '*EOL' codep=0x3b68 wordp=0xb5e9
// ================================================
// 0xb5e9: dw 0x0001 0xedab

// ================================================
// 0xb5ed: WORD 'OTABLE' codep=0x1d29 wordp=0xb5f8
// ================================================
// 0xb5f8: db 0x90 0x60 0x01 0x88 0xad 0x01 0x77 0x12 0x01 0x96 0xb8 0x01 0x55 0xbc 0x01 0x7c 0x30 0x01 0x72 0x82 0x01 0xc0 0xda 0x00 0xbf 0x11 0x01 0xfb 0x11 0x01 0x6e 0xd6 0x00 0xdd 0x11 0x01 0x41 0xd4 0x00 0x55 0xc1 0x01 ' `    w     U  |0 r           n     A  U  '

// ================================================
// 0xb622: WORD '+ORG' codep=0x4a4f wordp=0xb62b
// ================================================

void _plus_ORG() // +ORG
{
  switch(Pop()) // +ORG
  {
  case 18:
    Push(0);
    break;
  case 19:
    Push(1);
    break;
  case 21:
    Push(2);
    break;
  default:
    Push(-1);
    break;

  }
}

// ================================================
// 0xb63b: WORD 'ORGIADDR' codep=0x224c wordp=0xb648
// ================================================

void ORGIADDR() // ORGIADDR
{
  Push(Read16(regsp)); // DUP
  Push(0x000b);
  MIN(); // MIN
  SWAP(); // SWAP
  _plus_ORG(); // +ORG case
  Push(Pop() + Pop()); // +
  Push(Pop() * 3 + pp_OTABLE); //  3 * OTABLE +
}


// ================================================
// 0xb660: WORD 'XHBUF-SEG' codep=0x224c wordp=0xb66e params=0 returns=1
// ================================================

void XHBUF_dash_SEG() // XHBUF-SEG
{
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    Push(pp_XBUF_dash_SE); // XBUF-SE
    return;
  }
  Push(pp_HBUF_dash_SEG); // HBUF-SEG
}


// ================================================
// 0xb680: WORD 'COND-CNT' codep=0x1d29 wordp=0xb68d
// ================================================
// 0xb68d: db 0x0d 0x00 '  '

// ================================================
// 0xb68f: WORD 'TRUE' codep=0x2214 wordp=0xb698
// ================================================
// 0xb698: dw 0x0001

// ================================================
// 0xb69a: WORD 'FALSE' codep=0x2214 wordp=0xb6a4
// ================================================
// 0xb6a4: dw 0x0000

// ================================================
// 0xb6a6: WORD 'UNKNOWN' codep=0x2214 wordp=0xb6b2
// ================================================
// 0xb6b2: dw 0x00ff

// ================================================
// 0xb6b4: WORD 'RULELIM' codep=0x2214 wordp=0xb6c0
// ================================================
// 0xb6c0: dw 0xeb86

// ================================================
// 0xb6c2: WORD 'CONDLIM' codep=0x2214 wordp=0xb6ce
// ================================================
// 0xb6ce: dw 0xeb87

// ================================================
// 0xb6d0: WORD 'RULECNT' codep=0x2214 wordp=0xb6dc
// ================================================
// 0xb6dc: dw 0xeb88

// ================================================
// 0xb6de: WORD 'RULEARR' codep=0x2214 wordp=0xb6ea
// ================================================
// 0xb6ea: dw 0xeb89

// ================================================
// 0xb6ec: WORD 'CONDARR' codep=0x2214 wordp=0xb6f8
// ================================================
// 0xb6f8: dw 0xeb97

// ================================================
// 0xb6fa: WORD 'CFLGARR' codep=0x2214 wordp=0xb706
// ================================================
// 0xb706: dw 0xebb3

// ================================================
// 0xb708: WORD 'XC@' codep=0x224c wordp=0xb710 params=1 returns=1
// ================================================

void XC_at_() // XC@
{
  Push((Read16(Pop())&0xFF) & 0x007f); //  C@ 0x007f AND
}


// ================================================
// 0xb71a: WORD 'C+!' codep=0x224c wordp=0xb722 params=2 returns=0
// ================================================

void C_plus__ex_() // C+!
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex_(); // C!
}


// ================================================
// 0xb730: WORD '>EXPERT' codep=0x224c wordp=0xb73c params=1 returns=0
// ================================================

void _gt_EXPERT() // >EXPERT
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(0xb6c0); // 'RULELIM'
  Store_3(); // !_3
  Push(a + 1); // I 1+
  Push(0xb6ce); // 'CONDLIM'
  Store_3(); // !_3
  Push(a + 2); // I 2+
  Push(0xb6dc); // 'RULECNT'
  Store_3(); // !_3
  Push(a + 3); // R> 3 +
  Push(0xb6ea); // 'RULEARR'
  Store_3(); // !_3
  Push((Read16(Read16(cc_RULELIM))&0xFF) * 2 + Read16(cc_RULEARR)); // RULELIM C@ 2* RULEARR +
  Push(0xb6f8); // 'CONDARR'
  Store_3(); // !_3
  Push((Read16(Read16(cc_CONDLIM))&0xFF) * 2 + Read16(cc_CONDARR)); // CONDLIM C@ 2* CONDARR +
  Push(0xb706); // 'CFLGARR'
  Store_3(); // !_3
}


// ================================================
// 0xb788: WORD 'DISTRACT' codep=0x224c wordp=0xb795 params=1 returns=0
// ================================================

void DISTRACT() // DISTRACT
{
  _gt_EXPERT(); // >EXPERT
  Push(Read16(cc_CFLGARR)); // CFLGARR
  Push(Read16(Read16(cc_CONDLIM))&0xFF); // CONDLIM C@
  Push(Read16(cc_UNKNOWN)); // UNKNOWN
  FILL_1(); // FILL_1
}


// ================================================
// 0xb7a3: WORD 'EXECUTE-RULE' codep=0x224c wordp=0xb7b4 params=1 returns=1
// ================================================

void EXECUTE_dash_RULE() // EXECUTE-RULE
{
  unsigned short int a, i, imax, b;
  a = Pop(); // >R
  Push(Read16(cc_TRUE)); // TRUE
  Push(a + 3); // I 3 +
  Push(Read16(regsp)); // DUP
  Push(Pop() + (Read16(a)&0xFF)); //  I C@ +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(cc_CFLGARR)); // CFLGARR
    Push(i); // I
    XC_at_(); // XC@
    Push(Pop() + Pop()); // +
    Push(Read16(Pop())&0xFF); //  C@
    Push(Read16(regsp)); // DUP
    Push(Pop()==Read16(cc_UNKNOWN)?1:0); //  UNKNOWN =
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(Read16(cc_CONDARR)); // CONDARR
      Push(i); // I
      XC_at_(); // XC@
      Push(Pop() * 2); //  2*
      Push(Pop() + Pop()); // +
      GetEXECUTE(); // @EXECUTE
      Push(!(!Pop())); //  NOT NOT
      Push(Read16(regsp)); // DUP
      Push(Read16(cc_CFLGARR)); // CFLGARR
      Push(i); // I
      XC_at_(); // XC@
      Push(Pop() + Pop()); // +
      C_ex_(); // C!
    }
    Push(Pop()==!(!((Read16(i)&0xFF) & 0x0080))?1:0); //  I C@ 0x0080 AND NOT NOT =
    Push(Pop() & Pop()); // AND
    Push(Read16(regsp)); // DUP
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    }
    Push(1);
    i += Pop();
  } while(i<imax); // (/LOOP)

  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    b = Pop(); // >R
    Push(a + 1); // I' 1+
    GetEXECUTE(); // @EXECUTE
    Push(b); // R>
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xb834: WORD 'EXPERT' codep=0x224c wordp=0xb83f
// ================================================

void EXPERT() // EXPERT
{
  unsigned short int a, i, imax;
  Push(pp_COND_dash_CNT); // COND-CNT
  OFF(); // OFF
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  HERE(); // HERE
  a = Pop(); // >R
  C_co_(); // C,
  C_co_(); // C,
  Push(0);
  C_co_(); // C,
  Push(a); // R>
  _gt_EXPERT(); // >EXPERT
  Push((Read16(Read16(cc_RULELIM))&0xFF) * 2 + (Read16(Read16(cc_CONDLIM))&0xFF) * 3); // RULELIM C@ 2* CONDLIM C@ 3 * +
  ALLOT(); // ALLOT
  CODE(); // (;CODE) inlined assembler code
// 0xb869: call   1649
  Push(Read16(regsp)); // DUP
  _gt_EXPERT(); // >EXPERT
  _gt_V(); // >V
  Push(Read16(cc_RULEARR)); // RULEARR
  Push(Read16(regsp)); // DUP
  Push(Pop() + (Read16(Read16(cc_RULECNT))&0xFF) * 2); //  RULECNT C@ 2* +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(i)); // I @
    EXECUTE_dash_RULE(); // EXECUTE-RULE
    if (Pop() != 0)
    {
      V_gt_(); // V>
      Push(Read16(regsp)); // DUP
      _gt_EXPERT(); // >EXPERT
      Push(!Pop()); //  NOT
      _gt_V(); // >V
      imax = i; // LEAVE
      Push(((i - Read16(cc_RULEARR) >> 1) >> 1) * 2 + Read16(cc_RULEARR)); // I RULEARR - 2/ 2/ 2* RULEARR +
      Push(Read16(regsp)); // DUP
      Push(Read16(Pop())); //  @
      Push(Read16(i)); // I @
      SWAP(); // SWAP
      Push(i); // I
      Store_3(); // !_3
      SWAP(); // SWAP
      Store_3(); // !_3
    }
    Push(2);
    i += Pop();
  } while(i<imax); // (/LOOP)

  V_gt_(); // V>
  Push(!Pop()); //  NOT
}


// ================================================
// 0xb8c6: WORD '-->' codep=0x224c wordp=0xb8ce
// ================================================

void _dash__dash__gt_() // -->
{
  _i__1(); // '_1
}


// ================================================
// 0xb8d2: WORD '?INDEX' codep=0x224c wordp=0xb8dd params=1 returns=1
// ================================================

void IsINDEX() // ?INDEX
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  Push(-1);

  i = 0;
  imax = Read16(pp_COND_dash_CNT) * 2; // COND-CNT @ 2*
  do // (DO)
  {
    Push(Read16(Read16(cc_CONDARR) + i)==a?1:0); // CONDARR I + @ J =
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(i >> 1); // I 2/
      imax = i; // LEAVE
    }
    Push(2);
    i += Pop();
  } while(i<imax); // (/LOOP)

  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xb90f: WORD 'CONDITION' codep=0x224c wordp=0xb91d
// ================================================

void CONDITION() // CONDITION
{
  unsigned short int a;
  _dash__dash__gt_(); // -->
  a = Pop(); // >R
  Push(a); // I
  Push(0xb8ce); // '-->'
  Push((Pop()==Pop())?1:0); // =
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(Read16(Read16(cc_CONDLIM))&0xFF); // CONDLIM C@
    Push(Read16(pp_COND_dash_CNT)); // COND-CNT @
    _gt_(); // >
    Push(!Pop()); //  NOT
    ABORT("Condition overflow", 18);// (ABORT")
    Push(a); // I
    IsINDEX(); // ?INDEX
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(Read16(pp_COND_dash_CNT)); // COND-CNT @
      Push(a); // I
      OVER(); // OVER
      Push(Pop() * 2 + Read16(cc_CONDARR)); //  2* CONDARR +
      Store_3(); // !_3
      Push(1);
      Push(pp_COND_dash_CNT); // COND-CNT
      _plus__ex__2(); // +!_2
    }
  } else
  {
    Push(-1);
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xb980: WORD 'RULE:' codep=0x224c wordp=0xb98a
// ================================================

void RULE_c_() // RULE:
{
  Push(Read16(Read16(cc_RULELIM))&0xFF); // RULELIM C@
  Push(Read16(Read16(cc_RULECNT))&0xFF); // RULECNT C@
  _gt_(); // >
  Push(!Pop()); //  NOT
  ABORT("Rule overflow", 13);// (ABORT")
  HERE(); // HERE
  Push(0);
  C_co_(); // C,
  Push(0x3a48); // 'NOP'
  _co_(); // ,
  do
  {
    CONDITION(); // CONDITION
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      _i__1(); // '_1
      Push(Read16(regsp)); // DUP
      Push(0xb698); // 'TRUE'
      Push((Pop()==Pop())?1:0); // =
      OVER(); // OVER
      Push(0xb6a4); // 'FALSE'
      Push((Pop()==Pop())?1:0); // =
      Push(Pop() | Pop()); // OR
      Push(!Pop()); //  NOT
      ABORT("TRUE or FALSE needed", 20);// (ABORT")
      EXECUTE(); // EXECUTE
      Push(Pop() * 0x0080); //  0x0080 *
      Push(Pop() + Pop()); // +
      C_co_(); // C,
      Push(1);
      OVER(); // OVER
      C_plus__ex_(); // C+!
      Push(0);
    }
  } while(Pop() == 0);
  _dash__dash__gt_(); // -->
  OVER(); // OVER
  Push(Pop() + 1); //  1+
  Store_3(); // !_3
  Push((Read16(Read16(cc_RULECNT))&0xFF) * 2 + Read16(cc_RULEARR)); // RULECNT C@ 2* RULEARR +
  Store_3(); // !_3
  Push(1);
  Push(Read16(cc_RULECNT)); // RULECNT
  C_plus__ex_(); // C+!
}


// ================================================
// 0xba1f: WORD 'IT-VOC' codep=0x1ab5 wordp=0xba2a
// ================================================
// 0xba2a: db 0x38 0xba 0x7f 0xb5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '8                  '

// ================================================
// 0xba3e: WORD 'IT-OV' codep=0x83f8 wordp=0xba48
// ================================================
// Overlay IT_dash_OV = 0x93b3

// ================================================
// 0xba4a: WORD 'WBA4C' codep=0x224c wordp=0xba4c
// ================================================

void WBA4C() // WBA4C
{
  LoadOverlay(IT_dash_OV); // IT-OV
  DATE_do__gt_ADR(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xba54: WORD 'WBA56' codep=0x224c wordp=0xba56
// ================================================

void WBA56() // WBA56
{
  LoadOverlay(IT_dash_OV); // IT-OV
  BOX_gt_LIST(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xba5e: WORD 'WBA60' codep=0x224c wordp=0xba60
// ================================================

void WBA60() // WBA60
{
  LoadOverlay(IT_dash_OV); // IT-OV
  GET_dash_BOXES(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xba68: WORD 'WBA6A' codep=0x224c wordp=0xba6a
// ================================================

void WBA6A() // WBA6A
{
  LoadOverlay(IT_dash_OV); // IT-OV
  MAKE_dash_SCROLL_dash_BOX(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xba72: WORD 'WBA74' codep=0x224c wordp=0xba74
// ================================================

void WBA74() // WBA74
{
  LoadOverlay(IT_dash_OV); // IT-OV
  DELETE_dash_SCROLL_dash_BOX(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xba7c: WORD 'WBA7E' codep=0x224c wordp=0xba7e
// ================================================

void WBA7E() // WBA7E
{
  LoadOverlay(IT_dash_OV); // IT-OV
  BOX_gt_TOCS(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xba86: WORD 'WBA88' codep=0x224c wordp=0xba88
// ================================================

void WBA88() // WBA88
{
  LoadOverlay(IT_dash_OV); // IT-OV
  _gt_BOX(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xba90: WORD 'WBA92' codep=0x224c wordp=0xba92
// ================================================

void WBA92() // WBA92
{
  LoadOverlay(IT_dash_OV); // IT-OV
  BOX_gt_(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xba9a: WORD 'WBA9C' codep=0x224c wordp=0xba9c
// ================================================

void WBA9C() // WBA9C
{
  LoadOverlay(IT_dash_OV); // IT-OV
  _ro_BOX_gt__rc_(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xbaa4: WORD 'WBAA6' codep=0x224c wordp=0xbaa6
// ================================================

void WBAA6() // WBAA6
{
  LoadOverlay(IT_dash_OV); // IT-OV
  CLASS_gt_BOX_dash_SPEC(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xbaae: WORD 'WBAB0' codep=0x224c wordp=0xbab0
// ================================================

void WBAB0() // WBAB0
{
  LoadOverlay(IT_dash_OV); // IT-OV
  ITEM_gt_PAD(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xbab8: WORD 'DATE$>ADR' codep=0x224c wordp=0xbac4 params=0 returns=0
// ================================================

void DATE_do__gt_ADR() // DATE$>ADR
{
  Push(0xba4c); // 'WBA4C'
  MODULE(); // MODULE
}


// ================================================
// 0xbacc: WORD 'BOX>LIS' codep=0x224c wordp=0xbad8 params=0 returns=0
// ================================================

void BOX_gt_LIS() // BOX>LIS
{
  Push(0xba56); // 'WBA56'
  MODULE(); // MODULE
}


// ================================================
// 0xbae0: WORD 'GET-BOX' codep=0x224c wordp=0xbaec params=0 returns=0
// ================================================

void GET_dash_BOX() // GET-BOX
{
  Push(0xba60); // 'WBA60'
  MODULE(); // MODULE
}


// ================================================
// 0xbaf4: WORD 'MAKE-SC' codep=0x224c wordp=0xbb00 params=0 returns=0
// ================================================

void MAKE_dash_SC() // MAKE-SC
{
  Push(0xba6a); // 'WBA6A'
  MODULE(); // MODULE
}


// ================================================
// 0xbb08: WORD 'delete-scroll-box' codep=0x224c wordp=0xbb14 params=0 returns=0
// ================================================

void delete_dash_scroll_dash_box() // delete-scroll-box
{
  Push(0xba74); // 'WBA74'
  MODULE(); // MODULE
}


// ================================================
// 0xbb1c: WORD 'BOX>TOC' codep=0x224c wordp=0xbb28 params=0 returns=0
// ================================================

void BOX_gt_TOC() // BOX>TOC
{
  Push(0xba7e); // 'WBA7E'
  MODULE(); // MODULE
}


// ================================================
// 0xbb30: WORD '>BOX' codep=0x224c wordp=0xbb39 params=0 returns=0
// ================================================

void _gt_BOX() // >BOX
{
  Push(0xba88); // 'WBA88'
  MODULE(); // MODULE
}


// ================================================
// 0xbb41: WORD 'BOX>' codep=0x224c wordp=0xbb4a params=0 returns=0
// ================================================

void BOX_gt_() // BOX>
{
  Push(0xba92); // 'WBA92'
  MODULE(); // MODULE
}


// ================================================
// 0xbb52: WORD '(BOX>)' codep=0x224c wordp=0xbb5d params=0 returns=0
// ================================================

void _ro_BOX_gt__rc_() // (BOX>)
{
  Push(0xba9c); // 'WBA9C'
  MODULE(); // MODULE
}


// ================================================
// 0xbb65: WORD 'CLASS>B' codep=0x224c wordp=0xbb71 params=0 returns=0
// ================================================

void CLASS_gt_B() // CLASS>B
{
  Push(0xbaa6); // 'WBAA6'
  MODULE(); // MODULE
}


// ================================================
// 0xbb79: WORD 'ITEM>PA' codep=0x224c wordp=0xbb85 params=0 returns=0
// ================================================

void ITEM_gt_PA() // ITEM>PA
{
  Push(0xbab0); // 'WBAB0'
  MODULE(); // MODULE
}


// ================================================
// 0xbb8d: WORD 'BTADDR' codep=0x1d29 wordp=0xbb98
// ================================================
// 0xbb98: db 0xb1 0xbc '  '

// ================================================
// 0xbb9a: WORD 'HUFF_BT_POINTER' codep=0x1d29 wordp=0xbb9c
// ================================================
// 0xbb9c: db 0x3a 0x20 ': '

// ================================================
// 0xbb9e: WORD 'HUFF_ACTIVE_POINTER_BYTE' codep=0x1d29 wordp=0xbba0
// ================================================
// 0xbba0: db 0x3a 0x20 ': '

// ================================================
// 0xbba2: WORD 'WBBA4' codep=0x1d29 wordp=0xbba4
// ================================================
// 0xbba4: db 0x3a 0x20 ': '

// ================================================
// 0xbba6: WORD 'HUFF_ACTIVE_POINTER_BIT' codep=0x1d29 wordp=0xbba8
// ================================================
// 0xbba8: db 0x3a 0x20 ': '

// ================================================
// 0xbbaa: WORD 'HUFF_PHRASE_ADDCHAR' codep=0x2214 wordp=0xbbac
// ================================================
// 0xbbac: dw 0xbc8f

// ================================================
// 0xbbae: WORD 'HUFF_PHRASE_INIT' codep=0x2214 wordp=0xbbb0
// ================================================
// 0xbbb0: dw 0xbc87

// ================================================
// 0xbbb2: WORD 'HUFF_PHRASE_FINISH' codep=0x2214 wordp=0xbbb4
// ================================================
// 0xbbb4: dw 0xbca5

// ================================================
// 0xbbb6: WORD 'HUFF_MOVE_ACTIVE_POINTER' codep=0x224c wordp=0xbbb8 params=0 returns=0
// ================================================

void HUFF_MOVE_ACTIVE_POINTER() // HUFF_MOVE_ACTIVE_POINTER
{
  Push(Read16(pp_HUFF_ACTIVE_POINTER_BIT)); // HUFF_ACTIVE_POINTER_BIT @
  Push(Read16(regsp)); // DUP
  Push(Pop()==0x0080?1:0); //  0x0080 =
  Push(pp_HUFF_ACTIVE_POINTER_BYTE); // HUFF_ACTIVE_POINTER_BYTE
  _plus__ex__2(); // +!_2
  Push(Pop() >> 1); //  2/
  Push(Read16(regsp)); // DUP
  Push((Pop()==0?1:0) * 0x0080); //  0= 0x0080 *
  Push(Pop() + Pop()); // +
  Push(pp_HUFF_ACTIVE_POINTER_BIT); // HUFF_ACTIVE_POINTER_BIT
  Store_3(); // !_3
}


// ================================================
// 0xbbdc: WORD 'WBBDE' codep=0x224c wordp=0xbbde params=1 returns=2
// ================================================

void WBBDE() // WBBDE
{
  Push(Pop() & (Read16(pp_HUFF_ACTIVE_POINTER_BIT)&0xFF)); //  HUFF_ACTIVE_POINTER_BIT C@ AND
  _0_gt_(); // 0>
  Push(Read16((Pop() + Read16(pp_BTADDR)) + Read16(pp_HUFF_BT_POINTER))&0xFF); //  BTADDR @ + HUFF_BT_POINTER @ + C@
  Push(Read16(regsp)); // DUP
  Push(Pop() & 0x0080); //  0x0080 AND
  if (Pop() != 0)
  {
    Push((Pop() & 0x007f) * 2); //  0x007f AND 2*
    Push(pp_HUFF_BT_POINTER); // HUFF_BT_POINTER
    _plus__ex__2(); // +!_2
  } else
  {
    Push(1);
    Push(pp_WBBA4); // WBBA4
    _plus__ex__2(); // +!_2
    Push(Read16(cc_HUFF_PHRASE_ADDCHAR)); // HUFF_PHRASE_ADDCHAR
    EXECUTE(); // EXECUTE
    Push(pp_HUFF_BT_POINTER); // HUFF_BT_POINTER
    OFF(); // OFF
  }
  HUFF_MOVE_ACTIVE_POINTER(); // HUFF_MOVE_ACTIVE_POINTER
  Push(Read16(pp_HUFF_ACTIVE_POINTER_BIT)==0x0080?1:0); // HUFF_ACTIVE_POINTER_BIT @ 0x0080 =
}


// ================================================
// 0xbc2c: WORD 'HUFF>' codep=0x224c wordp=0xbc36 params=2 returns=0
// ================================================

void HUFF_gt_() // HUFF>
{
  Push(pp_HUFF_BT_POINTER); // HUFF_BT_POINTER
  OFF(); // OFF
  Push(pp_WBBA4); // WBBA4
  OFF(); // OFF
  Push(pp_HUFF_ACTIVE_POINTER_BYTE); // HUFF_ACTIVE_POINTER_BYTE
  OFF(); // OFF
  Push(0x0080);
  Push(pp_HUFF_ACTIVE_POINTER_BIT); // HUFF_ACTIVE_POINTER_BIT
  Store_3(); // !_3
  Push(Read16(cc_HUFF_PHRASE_INIT)); // HUFF_PHRASE_INIT
  EXECUTE(); // EXECUTE
  while(1)
  {
    Push(Read16(regsp)); // DUP
    Push(Read16(pp_WBBA4)); // WBBA4 @
    _gt_(); // >
    if (Pop() == 0) break;

    do
    {
      OVER(); // OVER
      Push(Read16(Pop() + Read16(pp_HUFF_ACTIVE_POINTER_BYTE))&0xFF); //  HUFF_ACTIVE_POINTER_BYTE @ + C@
      WBBDE(); // WBBDE
    } while(Pop() == 0);
  }
  Pop(); Pop(); // 2DROP
  Push(Read16(cc_HUFF_PHRASE_FINISH)); // HUFF_PHRASE_FINISH
  EXECUTE(); // EXECUTE
}


// ================================================
// 0xbc76: WORD 'PHRASE$' codep=0x744d wordp=0xbc82
// ================================================
IFieldType PHRASE_do_ = {STRINGIDX, 0x0b, 0x00};

// ================================================
// 0xbc85: WORD 'HUFF_LSCAN_INIT' codep=0x224c wordp=0xbc87 params=0 returns=0
// ================================================
// orphan

void HUFF_LSCAN_INIT() // HUFF_LSCAN_INIT
{
  Push(pp_LSCAN); // LSCAN
  OFF(); // OFF
}


// ================================================
// 0xbc8d: WORD 'HUFF_LSCAN_ADDCHAR' codep=0x224c wordp=0xbc8f params=1 returns=0
// ================================================
// orphan

void HUFF_LSCAN_ADDCHAR() // HUFF_LSCAN_ADDCHAR
{
  Push(pp_LSCAN); // LSCAN
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  Push(Pop() + Pop()); // +
  Push(Pop() + 1); //  1+
  C_ex_(); // C!
  Push(1);
  Push(pp_LSCAN); // LSCAN
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xbca3: WORD 'HUFF_LSCAN_FINISH' codep=0x224c wordp=0xbca5 params=0 returns=0
// ================================================
// orphan

void HUFF_LSCAN_FINISH() // HUFF_LSCAN_FINISH
{
  Push(Read16((0x63ef+PHRASE_do_.offset) + 1)&0xFF); // PHRASE$<IFIELD> 1+ C@
  Push(pp_LSCAN); // LSCAN
  C_ex_(); // C!
}

// 0xbcb1: db 0x9c 0x81 0x96 0x81 0x81 0x20 0x83 0x81 0x81 0x48 0x59 0x43 0x82 0x81 0x4d 0x57 0x81 0x2e 0x81 0x42 0x84 0x81 0x31 0x81 0x5a 0x81 0x34 0x33 0x86 0x81 0x51 0x81 0x81 0x32 0x81 0x25 0x2b 0x81 0x23 0x28 0x81 0x3f 0x39 0x81 0x37 0x2a 0x84 0x81 0x54 0x81 0x81 0x4c 0x50 0x46 0x53 0x4f 0x8d 0x81 0x82 0x81 0x4e 0x41 0x49 0x81 0x81 0x55 0x81 0x47 0x2c 0x81 0x81 0x58 0x27 0x81 0x81 0x21 0x35 0x81 0x26 0x81 0x29 0x2f 0x81 0x45 0x81 0x52 0x81 0x44 0x81 0x56 0x4b 0x81 0x81 0x30 0x81 0x2d 0x81 0x4a 0x36 0x38 '         HYC  MW . B  1 Z 43  Q  2 %+ #( ?9 7*  T  LPFSO    NAI  U G,  X'  !5 & )/ E R D VK  0 - J68'

// ================================================
// 0xbd15: WORD 'MISC-VOC' codep=0x1ab5 wordp=0xbd1f
// ================================================
// 0xbd1f: db 0x2d 0xbd 0x2c 0xba 0x7a 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '- , z               '

// ================================================
// 0xbd33: WORD 'MISC-OV' codep=0x83f8 wordp=0xbd3d
// ================================================
// Overlay MISC_dash_OV = 0x7182

// ================================================
// 0xbd3f: WORD '=CARGO' codep=0x224c wordp=0xbd4a
// ================================================

void _eq_CARGO() // =CARGO
{
  LoadOverlay(MISC_dash_OV); // MISC-OV
  _eq_CARG(); // Overlay MISC-OV
}


// ================================================
// 0xbd50: WORD 'OV#IN$' codep=0x224c wordp=0xbd5b
// ================================================

void OV_n_IN_do_() // OV#IN$
{
  LoadOverlay(MISC_dash_OV); // MISC-OV
  _ro__n_IN_do_(); // Overlay MISC-OV
}


// ================================================
// 0xbd61: WORD 'OVQUITMESS' codep=0x224c wordp=0xbd70
// ================================================

void OVQUITMESS() // OVQUITMESS
{
  LoadOverlay(MISC_dash_OV); // MISC-OV
  _ro_QUIT(); // Overlay MISC-OV
}


// ================================================
// 0xbd76: WORD 'OV.0$$$' codep=0x224c wordp=0xbd82
// ================================================

void OV_dot_0_do__do__do_() // OV.0$$$
{
  LoadOverlay(MISC_dash_OV); // MISC-OV
  _ro__dot_0_do__do_(); // Overlay MISC-OV
}


// ================================================
// 0xbd88: WORD 'OV0$$$MESS' codep=0x224c wordp=0xbd97
// ================================================

void OV0_do__do__do_MESS() // OV0$$$MESS
{
  LoadOverlay(MISC_dash_OV); // MISC-OV
  _ro_0_do__do__do_(); // Overlay MISC-OV
}


// ================================================
// 0xbd9d: WORD 'OVTRIM' codep=0x224c wordp=0xbda8
// ================================================

void OVTRIM() // OVTRIM
{
  LoadOverlay(MISC_dash_OV); // MISC-OV
  _ro_TRIM(); // Overlay MISC-OV
}


// ================================================
// 0xbdae: WORD 'OVTRIMS' codep=0x224c wordp=0xbdba
// ================================================

void OVTRIMS() // OVTRIMS
{
  unsigned short int i, imax;
  LoadOverlay(MISC_dash_OV); // MISC-OV

  i = 0;
  imax = Pop();
  do // (DO)
  {
    _ro_TRIM(); // Overlay MISC-OV
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xbdc8: WORD 'OV?ARTIFACT' codep=0x224c wordp=0xbdd8
// ================================================

void OV_ask_ARTIFACT() // OV?ARTIFACT
{
  LoadOverlay(MISC_dash_OV); // MISC-OV
  _ro__ask_ART(); // Overlay MISC-OV
}


// ================================================
// 0xbdde: WORD 'OV?.EQUIP-OK' codep=0x224c wordp=0xbdef
// ================================================

void OV_ask__dot_EQUIP_dash_OK() // OV?.EQUIP-OK
{
  LoadOverlay(MISC_dash_OV); // MISC-OV
  _ro__ask__dot_EQ(); // Overlay MISC-OV
}


// ================================================
// 0xbdf5: WORD 'ENG-VOC' codep=0x1ab5 wordp=0xbe01
// ================================================
// 0xbe01: db 0x0f 0xbe 0x21 0xbd 0x0d 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  !                 '

// ================================================
// 0xbe15: WORD 'ENG-O' codep=0x83f8 wordp=0xbe1f
// ================================================
// Overlay ENG_dash_O = 0x80a5

// ================================================
// 0xbe21: WORD 'OV/DA' codep=0x224c wordp=0xbe2b
// ================================================

void OV_slash_DA() // OV/DA
{
  LoadOverlay(ENG_dash_O); // ENG-O
  _ro__slash_DAMAGE_rc_(); // Overlay ENGINEER
}


// ================================================
// 0xbe31: WORD 'OV/RE' codep=0x224c wordp=0xbe3b
// ================================================

void OV_slash_RE() // OV/RE
{
  LoadOverlay(ENG_dash_O); // ENG-O
  _ro__slash_REPAIR_rc_(); // Overlay ENGINEER
}


// ================================================
// 0xbe41: WORD 'OVDBA' codep=0x224c wordp=0xbe4b
// ================================================

void OVDBA() // OVDBA
{
  LoadOverlay(ENG_dash_O); // ENG-O
  DBARS(); // Overlay ENGINEER
}


// ================================================
// 0xbe51: WORD 'BLT-VOC' codep=0x1ab5 wordp=0xbe5d
// ================================================
// 0xbe5d: db 0x6b 0xbe 0x03 0xbe 0x28 0xf5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'k   (               '

// ================================================
// 0xbe71: WORD 'BLT-OV' codep=0x83f8 wordp=0xbe7c
// ================================================
// Overlay BLT_dash_OV = 0x714c

// ================================================
// 0xbe7e: WORD '.RUNBIT' codep=0x224c wordp=0xbe8a
// ================================================

void DrawRUNBIT() // .RUNBIT
{
  LoadOverlay(BLT_dash_OV); // BLT-OV
  DrawRUNBIT(); // Overlay BLT-OV
}


// ================================================
// 0xbe90: WORD '@.HYBRID' codep=0x224c wordp=0xbe9d
// ================================================

void Get_dot_HYBRID() // @.HYBRID
{
  LoadOverlay(BLT_dash_OV); // BLT-OV
  Get_dot_HYBRID(); // Overlay BLT-OV
}


// ================================================
// 0xbea3: WORD '.EGARUNBIT' codep=0x224c wordp=0xbeb2
// ================================================

void DrawEGARUNBIT() // .EGARUNBIT
{
  LoadOverlay(BLT_dash_OV); // BLT-OV
  DrawEGARUNBIT(); // Overlay BLT-OV
}


// ================================================
// 0xbeb8: WORD 'SCI-VOC' codep=0x1ab5 wordp=0xbec4
// ================================================
// 0xbec4: db 0xd2 0xbe 0x5f 0xbe 0x26 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  _ &               '

// ================================================
// 0xbed8: WORD 'SCI-OV' codep=0x83f8 wordp=0xbee3
// ================================================
// Overlay SCI_dash_OV = 0x8499

// ================================================
// 0xbee5: WORD 'OV/STATUS' codep=0x224c wordp=0xbef3
// ================================================

void OV_slash_STATUS() // OV/STATUS
{
  LoadOverlay(SCI_dash_OV); // SCI-OV
  _ro__slash_STATUS_rc_(); // Overlay SCIENCE
}


// ================================================
// 0xbef9: WORD 'OV/STXT' codep=0x224c wordp=0xbf05
// ================================================

void OV_slash_STXT() // OV/STXT
{
  LoadOverlay(SCI_dash_OV); // SCI-OV
  DrawSTAT_dash_TEXT(); // Overlay SCIENCE
}


// ================================================
// 0xbf0b: WORD 'OVSTARDATE' codep=0x224c wordp=0xbf1a
// ================================================

void OVSTARDATE() // OVSTARDATE
{
  LoadOverlay(SCI_dash_OV); // SCI-OV
  Push(0);
  DrawSTARDATE(); // Overlay SCIENCE
}


// ================================================
// 0xbf22: WORD 'OV/SENSORS' codep=0x224c wordp=0xbf31
// ================================================

void OV_slash_SENSORS() // OV/SENSORS
{
  LoadOverlay(SCI_dash_OV); // SCI-OV
  _ro__slash_SENSORS_rc_(); // Overlay SCIENCE
}


// ================================================
// 0xbf37: WORD '?HEAVY' codep=0x224c wordp=0xbf42
// ================================================

void IsHEAVY() // ?HEAVY
{
  LoadOverlay(SCI_dash_OV); // SCI-OV
  IsHEAVY(); // Overlay SCIENCE
}


// ================================================
// 0xbf48: WORD '/STARDATE' codep=0x224c wordp=0xbf56 params=0 returns=0
// ================================================

void _slash_STARDATE() // /STARDATE
{
  Push(0xbf1a); // 'OVSTARDATE'
  MODULE(); // MODULE
}


// ================================================
// 0xbf5e: WORD '.SORD' codep=0x224c wordp=0xbf68 params=0 returns=0
// ================================================

void DrawSORD() // .SORD
{
  Push(Read16(pp__n_AUX)); // #AUX @
  Push(Read16(regsp)); // DUP
  Push(Pop()==1?1:0); //  1 =
  if (Pop() != 0)
  {
    Push(0xbf05); // 'OV/STXT'
    MODULE(); // MODULE
  }
  Push(Pop()==3?1:0); //  3 =
  if (Pop() == 0) return;
  Push(0xbe4b); // 'OVDBA'
  MODULE(); // MODULE
}


// ================================================
// 0xbf8c: WORD '?VCYCLE' codep=0x224c wordp=0xbf98 params=0 returns=1
// ================================================

void IsVCYCLE() // ?VCYCLE
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_VSTIME); // VSTIME
  _2_at_(); // 2@
  D_gt_(); // D>
}


// ================================================
// 0xbfa4: WORD 'HEALTI' codep=0x1d29 wordp=0xbfaf
// ================================================
// 0xbfaf: db 0x20 0x45 ' E'

// ================================================
// 0xbfb1: WORD 'LASTAP' codep=0x1d29 wordp=0xbfbc
// ================================================
// 0xbfbc: db 0x49 0x4e 0x54 0x20 'INT '

// ================================================
// 0xbfc0: WORD 'ROSTER' codep=0x1d29 wordp=0xbfcb
// ================================================
// 0xbfcb: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 '                  '

// ================================================
// 0xbfdd: WORD 'HEALER' codep=0x1ab5 wordp=0xbfe8
// ================================================
// 0xbfe8: db 0xf6 0xbf 0xc6 0xbe 0x1d 0xf5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xbffc: WORD 'HEAL-O' codep=0x83f8 wordp=0xc007
// ================================================
// Overlay HEAL_dash_O = 0x8eba

// ================================================
// 0xc009: WORD '(OBI' codep=0x224c wordp=0xc012
// ================================================

void _ro_OBI() // (OBI
{
  LoadOverlay(HEAL_dash_O); // HEAL-O
  OBITS(); // Overlay HEAL-OV
}


// ================================================
// 0xc018: WORD '(.VI' codep=0x224c wordp=0xc021
// ================================================

void _ro__dot_VI() // (.VI
{
  LoadOverlay(HEAL_dash_O); // HEAL-O
  DrawVITS(); // Overlay HEAL-OV
}


// ================================================
// 0xc027: WORD '(HEA' codep=0x224c wordp=0xc030
// ================================================

void _ro_HEA() // (HEA
{
  LoadOverlay(HEAL_dash_O); // HEAL-O
  HEAL(); // Overlay HEAL-OV
}


// ================================================
// 0xc036: WORD '(ROL' codep=0x224c wordp=0xc03f
// ================================================

void _ro_ROL() // (ROL
{
  LoadOverlay(HEAL_dash_O); // HEAL-O
  ROLE_dash_C(); // Overlay HEAL-OV
}


// ================================================
// 0xc045: WORD 'OBIT' codep=0x224c wordp=0xc04e params=0 returns=0
// ================================================

void OBIT() // OBIT
{
  Push(0xc012); // '(OBI'
  MODULE(); // MODULE
}


// ================================================
// 0xc056: WORD 'HEAL' codep=0x224c wordp=0xc05f params=0 returns=0
// ================================================

void HEAL() // HEAL
{
  Push(0xc030); // '(HEA'
  MODULE(); // MODULE
}


// ================================================
// 0xc067: WORD '.VIT' codep=0x224c wordp=0xc070 params=0 returns=0
// ================================================

void DrawVIT() // .VIT
{
  Push(0xc021); // '(.VI'
  MODULE(); // MODULE
}


// ================================================
// 0xc078: WORD '?APP' codep=0x224c wordp=0xc081 params=0 returns=1
// ================================================

void IsAPP() // ?APP
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LASTAP); // LASTAP
  _2_at_(); // 2@
  Push(Read16(pp_HEALTI)); // HEALTI @
  Push(0);
  D_plus_(); // D+
  D_gt_(); // D>
  Push(Pop() & Read16(pp_IsHEAL)); //  ?HEAL @ AND
  if (Pop() != 0)
  {
    TIME(); // TIME
    _2_at_(); // 2@
    Push(pp_LASTAP); // LASTAP
    _2_ex_(); // 2!
    Push(1);
    return;
  }
  Push(0);
}


// ================================================
// 0xc0af: WORD 'REPAIR' codep=0x1ab5 wordp=0xc0ba
// ================================================
// 0xc0ba: db 0xc8 0xc0 0xea 0xbf 0xd9 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xc0ce: WORD 'REPAIR-' codep=0x83f8 wordp=0xc0da
// ================================================
// Overlay REPAIR_dash_ = 0x8f07

// ================================================
// 0xc0dc: WORD 'DO-REPA' codep=0x224c wordp=0xc0e8
// ================================================

void DO_dash_REPA() // DO-REPA
{
  LoadOverlay(REPAIR_dash_); // REPAIR-
  DO_dash_REPA(); // Overlay REPAIR-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LASTREP); // LASTREP
  _2_ex_(); // 2!
}


// ================================================
// 0xc0f8: WORD '?SHIP-REPAIR' codep=0x224c wordp=0xc104 params=0 returns=1
// ================================================

void IsSHIP_dash_REPAIR() // ?SHIP-REPAIR
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LASTREP); // LASTREP
  _2_at_(); // 2@
  D_dash_(); // D-
  DABS(); // DABS
  Push(Read16(pp_REPAIRT)); // REPAIRT @
  Push(0);
  D_gt_(); // D>
  Push(Pop() & Read16(pp_IsREPAIR) | (Read16(pp_IsREPAIR)==1?1:0)); //  ?REPAIR @ AND ?REPAIR @ 1 = OR
}


// ================================================
// 0xc12a: WORD 'MREPAIR' codep=0x224c wordp=0xc136 params=0 returns=0
// ================================================

void MREPAIR() // MREPAIR
{
  IsSHIP_dash_REPAIR(); // ?SHIP-REPAIR
  if (Pop() == 0) return;
  Push(0xc0e8); // 'DO-REPA'
  MODULE(); // MODULE
  Push(Read16(pp__n_AUX)==3?1:0); // #AUX @ 3 =
  if (Pop() == 0) return;
  Push(0xbe4b); // 'OVDBA'
  MODULE(); // MODULE
}


// ================================================
// 0xc156: WORD 'COMM-VOC' codep=0x1ab5 wordp=0xc163
// ================================================
// 0xc163: db 0x71 0xc1 0xbc 0xc0 0x32 0xf5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'q   2               '

// ================================================
// 0xc177: WORD 'COMM-OV' codep=0x83f8 wordp=0xc183
// ================================================
// Overlay COMM_dash_OV = 0x7c7d

// ================================================
// 0xc185: WORD 'OVINIT-COMM' codep=0x224c wordp=0xc195
// ================================================

void OVINIT_dash_COMM() // OVINIT-COMM
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  ICOMM(); // Overlay COMM-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc19d: WORD 'U-COMM' codep=0x224c wordp=0xc1a8
// ================================================

void U_dash_COMM() // U-COMM
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  CL1(); // Overlay COMM-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc1b0: WORD 'COMM-EXPERTS' codep=0x224c wordp=0xc1c1
// ================================================

void COMM_dash_EXPERTS() // COMM-EXPERTS
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  COMM_dash_EXPERTS(); // Overlay COMM-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc1c9: WORD 'A>O' codep=0x224c wordp=0xc1d1
// ================================================

void A_gt_O() // A>O
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  A_gt_ORIGINATOR(); // Overlay COMM-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc1d9: WORD 'O>C' codep=0x224c wordp=0xc1e1
// ================================================

void O_gt_C() // O>C
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  ORIGINATOR_gt_C(); // Overlay COMM-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc1e9: WORD '>HAIL' codep=0x224c wordp=0xc1f3
// ================================================

void _gt_HAIL() // >HAIL
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  _gt_HAIL_do_(); // Overlay COMM-OV
}


// ================================================
// 0xc1f9: WORD 'OV+!EDL' codep=0x224c wordp=0xc205
// ================================================

void OV_plus__ex_EDL() // OV+!EDL
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  _plus__ex_EDL(); // Overlay COMM-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc20d: WORD 'P>CT' codep=0x224c wordp=0xc216
// ================================================

void P_gt_CT() // P>CT
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  _ro_PHRASE_gt_CT_rc_(); // Overlay COMM-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc21e: WORD 'CTUP' codep=0x224c wordp=0xc227
// ================================================

void CTUP() // CTUP
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  CTSCROLL(); // Overlay COMM-OV
}


// ================================================
// 0xc22d: WORD 'OVEDL+AUX' codep=0x224c wordp=0xc23b
// ================================================

void OVEDL_plus_AUX() // OVEDL+AUX
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  EDL_plus_AUX(); // Overlay COMM-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc243: WORD 'MCOMM-EXPERTS' codep=0x224c wordp=0xc255 params=0 returns=0
// ================================================

void MCOMM_dash_EXPERTS() // MCOMM-EXPERTS
{
  Push(0xc1c1); // 'COMM-EXPERTS'
  MODULE(); // MODULE
}


// ================================================
// 0xc25d: WORD 'MEDL+AUX' codep=0x224c wordp=0xc26a params=0 returns=0
// ================================================

void MEDL_plus_AUX() // MEDL+AUX
{
  Push(0xc23b); // 'OVEDL+AUX'
  MODULE(); // MODULE
}


// ================================================
// 0xc272: WORD 'DA-STR' codep=0x224c wordp=0xc27d
// ================================================

void DA_dash_STR() // DA-STR
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  IAPWR(); // Overlay COMM-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc285: WORD 'XCOM-VOC' codep=0x1ab5 wordp=0xc292
// ================================================
// 0xc292: db 0xa0 0xc2 0x65 0xc1 0xf4 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  e                 '

// ================================================
// 0xc2a6: WORD 'XCOM-OV' codep=0x83f8 wordp=0xc2b2
// ================================================
// Overlay XCOM_dash_OV = 0x7e41

// ================================================
// 0xc2b4: WORD 'XCOMM' codep=0x224c wordp=0xc2be
// ================================================

void XCOMM() // XCOMM
{
  LoadOverlay(XCOM_dash_OV); // XCOM-OV
  _ro_XCOMM_rc_(); // Overlay COMMSPEC-OV
}


// ================================================
// 0xc2c4: WORD 'FRACT' codep=0x1ab5 wordp=0xc2ce
// ================================================
// 0xc2ce: db 0xdc 0xc2 0x94 0xc2 0xfb 0xf0 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xc2e2: WORD 'FRACT-OV' codep=0x83f8 wordp=0xc2ef
// ================================================
// Overlay FRACT_dash_OV = 0x6e3c

// ================================================
// 0xc2f1: WORD 'MERCATOR-GEN' codep=0x224c wordp=0xc302
// ================================================

void MERCATOR_dash_GEN() // MERCATOR-GEN
{
  LoadOverlay(FRACT_dash_OV); // FRACT-OV
  MERCATOR_dash_GEN(); // Overlay FRACT-OV
}


// ================================================
// 0xc308: WORD 'NEWCONTOUR' codep=0x224c wordp=0xc317
// ================================================

void NEWCONTOUR() // NEWCONTOUR
{
  LoadOverlay(FRACT_dash_OV); // FRACT-OV
  NEWCONTOUR(); // Overlay FRACT-OV
}


// ================================================
// 0xc31d: WORD 'MAKE-GLOBE' codep=0x224c wordp=0xc32c
// ================================================

void MAKE_dash_GLOBE() // MAKE-GLOBE
{
  LoadOverlay(FRACT_dash_OV); // FRACT-OV
  MAKE_dash_GLOBE(); // Overlay FRACT-OV
}


// ================================================
// 0xc332: WORD 'SCRLCON' codep=0x224c wordp=0xc33e
// ================================================

void SCRLCON() // SCRLCON
{
  LoadOverlay(FRACT_dash_OV); // FRACT-OV
  SCRLCON(); // Overlay FRACT-OV
}


// ================================================
// 0xc344: WORD 'ORBIT' codep=0x1ab5 wordp=0xc34e
// ================================================
// 0xc34e: db 0x5c 0xc3 0xd0 0xc2 0x88 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '\                   '

// ================================================
// 0xc362: WORD 'ORBIT-OV' codep=0x83f8 wordp=0xc36f
// ================================================
// Overlay ORBIT_dash_OV = 0x8186

// ================================================
// 0xc371: WORD 'INIT-ORBIT' codep=0x224c wordp=0xc380
// ================================================

void INIT_dash_ORBIT() // INIT-ORBIT
{
  LoadOverlay(ORBIT_dash_OV); // ORBIT-OV
  INIT_dash_ORBIT(); // Overlay ORBIT-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc388: WORD 'SHOWSITE' codep=0x224c wordp=0xc395
// ================================================

void SHOWSITE() // SHOWSITE
{
  LoadOverlay(ORBIT_dash_OV); // ORBIT-OV
  SHOWSITE(); // Overlay ORBIT-OV
}


// ================================================
// 0xc39b: WORD 'DESCEND' codep=0x224c wordp=0xc3a7
// ================================================

void DESCEND() // DESCEND
{
  LoadOverlay(ORBIT_dash_OV); // ORBIT-OV
  DESCEND(); // Overlay ORBIT-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc3af: WORD 'ASCEND' codep=0x224c wordp=0xc3ba
// ================================================

void ASCEND() // ASCEND
{
  LoadOverlay(ORBIT_dash_OV); // ORBIT-OV
  ASCEND(); // Overlay ORBIT-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc3c2: WORD 'ROTATE' codep=0x224c wordp=0xc3cd
// ================================================

void ROTATE() // ROTATE
{
  LoadOverlay(ORBIT_dash_OV); // ORBIT-OV
  ROTATE(); // Overlay ORBIT-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc3d5: WORD 'SEEGRID' codep=0x224c wordp=0xc3e1
// ================================================

void SEEGRID() // SEEGRID
{
  LoadOverlay(ORBIT_dash_OV); // ORBIT-OV
  SEEGRID(); // Overlay ORBIT-OV
}


// ================================================
// 0xc3e7: WORD 'MROTATE' codep=0x224c wordp=0xc3f3 params=0 returns=0
// ================================================

void MROTATE() // MROTATE
{
  Push(0xc3cd); // 'ROTATE'
  MODULE(); // MODULE
}


// ================================================
// 0xc3fb: WORD 'VICONP' codep=0x1ab5 wordp=0xc406
// ================================================
// 0xc406: db 0x14 0xc4 0x50 0xc3 0x1d 0xf5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  P                 '

// ================================================
// 0xc41a: WORD 'ICONP-OV' codep=0x83f8 wordp=0xc427
// ================================================
// Overlay ICONP_dash_OV = 0x6f5e

// ================================================
// 0xc429: WORD 'ICON-PARM' codep=0x224c wordp=0xc437
// ================================================

void ICON_dash_PARM() // ICON-PARM
{
  LoadOverlay(ICONP_dash_OV); // ICONP-OV
  ICON_dash_PARM(); // Overlay ICONP-OV
}


// ================================================
// 0xc43d: WORD '+ICONBXOV' codep=0x224c wordp=0xc44b
// ================================================

void _plus_ICONBXOV() // +ICONBXOV
{
  LoadOverlay(ICONP_dash_OV); // ICONP-OV
  _plus_ICONBOX(); // Overlay ICONP-OV
}


// ================================================
// 0xc451: WORD 'SITE-VOC' codep=0x1ab5 wordp=0xc45e
// ================================================
// 0xc45e: db 0x6c 0xc4 0x08 0xc4 0x2d 0xf5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'l   -               '

// ================================================
// 0xc472: WORD 'SITE-OV' codep=0x83f8 wordp=0xc47e
// ================================================
// Overlay SITE_dash_OV = 0x6f92

// ================================================
// 0xc480: WORD '(.MERC)' codep=0x224c wordp=0xc48c
// ================================================

void _ro__dot_MERC_rc_() // (.MERC)
{
  LoadOverlay(SITE_dash_OV); // SITE-OV
  DrawMERCATOR(); // Overlay SITE-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xc494: WORD '(GETSITE)' codep=0x224c wordp=0xc4a2
// ================================================

void _ro_GETSITE_rc_() // (GETSITE)
{
  LoadOverlay(SITE_dash_OV); // SITE-OV
  GETSITE_2(); // Overlay SITE-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xc4ac: WORD 'FLUX-VOC' codep=0x1ab5 wordp=0xc4b9
// ================================================
// 0xc4b9: db 0xc7 0xc4 0x60 0xc4 0xfe 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  `                 '

// ================================================
// 0xc4cd: WORD 'FLUX-OV' codep=0x83f8 wordp=0xc4d9
// ================================================
// Overlay FLUX_dash_OV = 0x89fc

// ================================================
// 0xc4db: WORD 'OVFLUX-EFFECT' codep=0x224c wordp=0xc4e5
// ================================================

void OVFLUX_dash_EFFECT() // OVFLUX-EFFECT
{
  LoadOverlay(FLUX_dash_OV); // FLUX-OV
  FLUX(); // Overlay FLUX-EFFECT
}


// ================================================
// 0xc4eb: WORD 'BANK-VOC' codep=0x1ab5 wordp=0xc4f8
// ================================================
// 0xc4f8: db 0x06 0xc5 0xbb 0xc4 0xe4 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xc50c: WORD 'BANK-OV' codep=0x83f8 wordp=0xc518
// ================================================
// Overlay BANK_dash_OV = 0x71dc

// ================================================
// 0xc51a: WORD 'OVINIT-BALANCE' codep=0x224c wordp=0xc52d
// ================================================

void OVINIT_dash_BALANCE() // OVINIT-BALANCE
{
  LoadOverlay(BANK_dash_OV); // BANK-OV
  INIT_dash_BALANCE(); // Overlay BANK-OV
}


// ================================================
// 0xc533: WORD 'OVTRANSACT' codep=0x224c wordp=0xc542
// ================================================

void OVTRANSACT() // OVTRANSACT
{
  LoadOverlay(BANK_dash_OV); // BANK-OV
  TRANSACT(); // Overlay BANK-OV
}


// ================================================
// 0xc548: WORD 'OVD@BALANCE' codep=0x224c wordp=0xc558
// ================================================

void OVD_at_BALANCE() // OVD@BALANCE
{
  LoadOverlay(BANK_dash_OV); // BANK-OV
  GetDBALANCE(); // Overlay BANK-OV
}


// ================================================
// 0xc55e: WORD 'OVD!BALANCE' codep=0x224c wordp=0xc56e
// ================================================

void OVD_ex_BALANCE() // OVD!BALANCE
{
  LoadOverlay(BANK_dash_OV); // BANK-OV
  StoreDBALANCE(); // Overlay BANK-OV
}


// ================================================
// 0xc574: WORD 'OV?BALANCE' codep=0x224c wordp=0xc583
// ================================================

void OV_ask_BALANCE() // OV?BALANCE
{
  LoadOverlay(BANK_dash_OV); // BANK-OV
  IsBALANCE(); // Overlay BANK-OV
}


// ================================================
// 0xc589: WORD 'OV!TFLAG' codep=0x224c wordp=0xc596
// ================================================

void OV_ex_TFLAG() // OV!TFLAG
{
  LoadOverlay(BANK_dash_OV); // BANK-OV
  StoreTFLAG(); // Overlay BANK-OV
}


// ================================================
// 0xc59c: WORD 'I-TRANS' codep=0x224c wordp=0xc5a8
// ================================================

void I_dash_TRANS() // I-TRANS
{
  LoadOverlay(BANK_dash_OV); // BANK-OV
  INT_pe_(); // Overlay BANK-OV
}


// ================================================
// 0xc5ae: WORD 'U-B' codep=0x224c wordp=0xc5b6
// ================================================

void U_dash_B() // U-B
{
  LoadOverlay(BANK_dash_OV); // BANK-OV
  _ro_U_dash_BANK_rc_(); // Overlay BANK-OV
}


// ================================================
// 0xc5bc: WORD 'T+BALANCE' codep=0x224c wordp=0xc5ca
// ================================================

void T_plus_BALANCE() // T+BALANCE
{
  LoadOverlay(BANK_dash_OV); // BANK-OV
  GetDBALANCE(); // Overlay BANK-OV
  D_plus_(); // D+
  StoreDBALANCE(); // Overlay BANK-OV
  StoreTFLAG(); // Overlay BANK-OV
}


// ================================================
// 0xc5d6: WORD 'ACREW-VOC' codep=0x1ab5 wordp=0xc5e4
// ================================================
// 0xc5e4: db 0xf2 0xc5 0xfa 0xc4 0x51 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '    Q               '

// ================================================
// 0xc5f8: WORD 'ACREW-OV' codep=0x83f8 wordp=0xc605
// ================================================
// Overlay ACREW_dash_OV = 0x723b

// ================================================
// 0xc607: WORD 'U-AC' codep=0x224c wordp=0xc610
// ================================================

void U_dash_AC() // U-AC
{
  LoadOverlay(ACREW_dash_OV); // ACREW-OV
  _ro_U_dash_ASSCREW_rc_(); // Overlay ASSCREW-OV
}


// ================================================
// 0xc616: WORD 'PFILE-VOC' codep=0x1ab5 wordp=0xc624
// ================================================
// 0xc624: db 0x32 0xc6 0xe6 0xc5 0xfe 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '2                   '

// ================================================
// 0xc638: WORD 'PFILE-OV' codep=0x83f8 wordp=0xc645
// ================================================
// Overlay PFILE_dash_OV = 0x72ea

// ================================================
// 0xc647: WORD 'U-PF' codep=0x224c wordp=0xc650
// ================================================

void U_dash_PF() // U-PF
{
  LoadOverlay(PFILE_dash_OV); // PFILE-OV
  _ro_U_dash_PFILE_rc_(); // Overlay PERSONNEL-OV
}


// ================================================
// 0xc656: WORD 'SHIP-GR-VOC' codep=0x1ab5 wordp=0xc666
// ================================================
// 0xc666: db 0x74 0xc6 0x26 0xc6 0xed 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 't &                 '

// ================================================
// 0xc67a: WORD 'SHIP-GR-OV' codep=0x83f8 wordp=0xc689
// ================================================
// Overlay SHIP_dash_GR_dash_OV = 0x73f0

// ================================================
// 0xc68b: WORD 'OV.MASS' codep=0x224c wordp=0xc697
// ================================================

void OV_dot_MASS() // OV.MASS
{
  LoadOverlay(SHIP_dash_GR_dash_OV); // SHIP-GR-OV
  _ro__dot_MASS_rc_(); // Overlay SHIPGRPH-OV
}


// ================================================
// 0xc69d: WORD 'OV.ACC' codep=0x224c wordp=0xc6a8
// ================================================

void OV_dot_ACC() // OV.ACC
{
  LoadOverlay(SHIP_dash_GR_dash_OV); // SHIP-GR-OV
  _ro__dot_ACC_rc_(); // Overlay SHIPGRPH-OV
}


// ================================================
// 0xc6ae: WORD 'OV.PODS' codep=0x224c wordp=0xc6ba
// ================================================

void OV_dot_PODS() // OV.PODS
{
  LoadOverlay(SHIP_dash_GR_dash_OV); // SHIP-GR-OV
  _ro__dot_PODS_rc_(); // Overlay SHIPGRPH-OV
}


// ================================================
// 0xc6c0: WORD 'OV.SHIP' codep=0x224c wordp=0xc6cc
// ================================================

void OV_dot_SHIP() // OV.SHIP
{
  LoadOverlay(SHIP_dash_GR_dash_OV); // SHIP-GR-OV
  _ro__dot_SHIP_rc_(); // Overlay SHIPGRPH-OV
}


// ================================================
// 0xc6d2: WORD 'OVBALANCEMESS' codep=0x224c wordp=0xc6e4
// ================================================

void OVBALANCEMESS() // OVBALANCEMESS
{
  LoadOverlay(SHIP_dash_GR_dash_OV); // SHIP-GR-OV
  _ro_BALANCEMESS_rc_(); // Overlay SHIPGRPH-OV
}


// ================================================
// 0xc6ea: WORD 'OV.CONFIG' codep=0x224c wordp=0xc6f8
// ================================================

void OV_dot_CONFIG() // OV.CONFIG
{
  LoadOverlay(SHIP_dash_GR_dash_OV); // SHIP-GR-OV
  _ro__dot_CONFIG_rc_(); // Overlay SHIPGRPH-OV
}


// ================================================
// 0xc6fe: WORD 'CONFIG-VOC' codep=0x1ab5 wordp=0xc70d
// ================================================
// 0xc70d: db 0x1b 0xc7 0x68 0xc6 0xad 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  h                 '

// ================================================
// 0xc721: WORD 'CONFIG-OV' codep=0x83f8 wordp=0xc72f
// ================================================
// Overlay CONFIG_dash_OV = 0x7474

// ================================================
// 0xc731: WORD 'U-SC' codep=0x224c wordp=0xc73a
// ================================================

void U_dash_SC() // U-SC
{
  LoadOverlay(CONFIG_dash_OV); // CONFIG-OV
  _ro_U_dash_CONFIG_rc_(); // Overlay CONFIG-OV
}


// ================================================
// 0xc740: WORD 'TD-VOC' codep=0x1ab5 wordp=0xc74b
// ================================================
// 0xc74b: db 0x59 0xc7 0x0f 0xc7 0xc1 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'Y                   '

// ================================================
// 0xc75f: WORD 'TD-OV' codep=0x83f8 wordp=0xc769
// ================================================
// Overlay TD_dash_OV = 0x7534

// ================================================
// 0xc76b: WORD '<TDART' codep=0x224c wordp=0xc776
// ================================================

void _st_TDART() // <TDART
{
  LoadOverlay(TD_dash_OV); // TD-OV
  _st_TDART(); // Overlay TDEPOT-OV
}


// ================================================
// 0xc77c: WORD 'U-TD' codep=0x224c wordp=0xc785
// ================================================

void U_dash_TD() // U-TD
{
  LoadOverlay(TD_dash_OV); // TD-OV
  _ro_U_dash_DEPOT_rc_(); // Overlay TDEPOT-OV
}


// ================================================
// 0xc78b: WORD 'TOSS' codep=0x224c wordp=0xc794
// ================================================

void TOSS() // TOSS
{
  LoadOverlay(TD_dash_OV); // TD-OV
  SELL_dash_IT(); // Overlay TDEPOT-OV
}


// ================================================
// 0xc79a: WORD 'KEY-ELEM-AMT' codep=0x224c wordp=0xc7ab
// ================================================

void KEY_dash_ELEM_dash_AMT() // KEY-ELEM-AMT
{
  LoadOverlay(TD_dash_OV); // TD-OV
  KEY_dash_ELEM_dash_AMT(); // Overlay TDEPOT-OV
}


// ================================================
// 0xc7b1: WORD '?FANLYZ' codep=0x1d29 wordp=0xc7bd
// ================================================
// 0xc7bd: db 0x00 0x00 '  '

// ================================================
// 0xc7bf: WORD 'OP-VOC' codep=0x1ab5 wordp=0xc7ca
// ================================================
// 0xc7ca: db 0xd8 0xc7 0x4d 0xc7 0xf2 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  M                 '

// ================================================
// 0xc7de: WORD 'OP-OV' codep=0x83f8 wordp=0xc7e8
// ================================================
// Overlay OP_dash_OV = 0x8a19

// ================================================
// 0xc7ea: WORD 'U-OP' codep=0x224c wordp=0xc7f3
// ================================================

void U_dash_OP() // U-OP
{
  LoadOverlay(OP_dash_OV); // OP-OV
  _ro_U_dash_OP_rc_(); // Overlay OP-OV
}


// ================================================
// 0xc7f9: WORD 'SETTER' codep=0x1ab5 wordp=0xc804
// ================================================
// 0xc804: db 0x12 0xc8 0xcc 0xc7 0x77 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '    w               '

// ================================================
// 0xc818: WORD 'PLSET-OV' codep=0x83f8 wordp=0xc825
// ================================================
// Overlay PLSET_dash_OV = 0x90e3

// ================================================
// 0xc827: WORD 'SET-PLANET' codep=0x224c wordp=0xc834
// ================================================

void SET_dash_PLANET() // SET-PLANET
{
  LoadOverlay(PLSET_dash_OV); // PLSET-OV
  PLAN_dash_RUL(); // Overlay PLSET-OV
}


// ================================================
// 0xc83a: WORD 'SETC' codep=0x224c wordp=0xc843
// ================================================

void SETC() // SETC
{
  LoadOverlay(PLSET_dash_OV); // PLSET-OV
  SETC(); // Overlay PLSET-OV
}


// ================================================
// 0xc849: WORD 'DPART-VOC' codep=0x1ab5 wordp=0xc857
// ================================================
// 0xc857: db 0x65 0xc8 0x06 0xc8 0x85 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'e                   '

// ================================================
// 0xc86b: WORD 'DPART-OV' codep=0x83f8 wordp=0xc878
// ================================================
// Overlay DPART_dash_OV = 0x696c

// ================================================
// 0xc87a: WORD 'DEPART' codep=0x224c wordp=0xc885
// ================================================

void DEPART() // DEPART
{
  LoadOverlay(DPART_dash_OV); // DPART-OV
  DEPART(); // Overlay DPART-OV
}


// ================================================
// 0xc88b: WORD 'DAMAGE_1' codep=0x1ab5 wordp=0xc897
// ================================================
// 0xc897: db 0xa5 0xc8 0x59 0xc8 0x17 0xf5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  Y                 '

// ================================================
// 0xc8ab: WORD 'DAMAGE_2' codep=0x83f8 wordp=0xc8b7
// ================================================
// Overlay DAMAGE_2 = 0x95af

// ================================================
// 0xc8b9: WORD 'DO-DA' codep=0x224c wordp=0xc8c3
// ================================================

void DO_dash_DA() // DO-DA
{
  LoadOverlay(DAMAGE_2); // DAMAGE_2
  DO_dash_DAMA(); // Overlay DAMAGE-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc8cb: WORD 'COMBAT-VO' codep=0x1ab5 wordp=0xc8d9
// ================================================
// 0xc8d9: db 0xe7 0xc8 0x99 0xc8 0xe1 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xc8ed: WORD 'COMBAT-O' codep=0x83f8 wordp=0xc8fa
// ================================================
// Overlay COMBAT_dash_O = 0x942c

// ================================================
// 0xc8fc: WORD '(WA' codep=0x224c wordp=0xc904
// ================================================

void _ro_WA() // (WA
{
  LoadOverlay(COMBAT_dash_O); // COMBAT-O
  WAR(); // Overlay COMBAT-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc90c: WORD '(CO' codep=0x224c wordp=0xc914
// ================================================

void _ro_CO() // (CO
{
  LoadOverlay(COMBAT_dash_O); // COMBAT-O
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  COMBAT(); // Overlay COMBAT-OV
  ICLOSE(); // ICLOSE
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc922: WORD 'CSC' codep=0x224c wordp=0xc92a
// ================================================

void CSC() // CSC
{
  LoadOverlay(COMBAT_dash_O); // COMBAT-O
  SET_dash_SCALE(); // Overlay COMBAT-OV
}


// ================================================
// 0xc930: WORD 'C&C' codep=0x224c wordp=0xc938
// ================================================

void C_and_C() // C&C
{
  LoadOverlay(COMBAT_dash_O); // COMBAT-O
  CLEAR_dash_CO(); // Overlay COMBAT-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc940: WORD 'COM' codep=0x224c wordp=0xc948 params=0 returns=0
// ================================================

void COM() // COM
{
  Push(0xc914); // '(CO'
  MODULE(); // MODULE
}


// ================================================
// 0xc950: WORD 'WAR' codep=0x224c wordp=0xc958 params=0 returns=0
// ================================================

void WAR() // WAR
{
  Push(0xc904); // '(WA'
  MODULE(); // MODULE
}


// ================================================
// 0xc960: WORD '?CALLING' codep=0x1d29 wordp=0xc96d
// ================================================
// 0xc96d: db 0x01 0x00 '  '

// ================================================
// 0xc96f: WORD 'HMISC-VOC' codep=0x1ab5 wordp=0xc97d
// ================================================
// 0xc97d: db 0x8b 0xc9 0xdb 0xc8 0x0c 0xf5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xc991: WORD 'HMISC-OV' codep=0x83f8 wordp=0xc99e
// ================================================
// Overlay HMISC_dash_OV = 0x7008

// ================================================
// 0xc9a0: WORD 'UFM' codep=0x224c wordp=0xc9a8
// ================================================

void UFM() // UFM
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  UF_dash_MESS(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc9ae: WORD 'USM' codep=0x224c wordp=0xc9b6
// ================================================

void USM() // USM
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  US_dash_MESS(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc9bc: WORD 'NFM' codep=0x224c wordp=0xc9c4
// ================================================

void NFM() // NFM
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  NF_dash_MESS(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc9ca: WORD 'NSM' codep=0x224c wordp=0xc9d2
// ================================================

void NSM() // NSM
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  NS_dash_MESS(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc9d8: WORD '.EX' codep=0x224c wordp=0xc9e0
// ================================================

void DrawEX() // .EX
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  DrawEX(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc9e6: WORD 'DMSG' codep=0x224c wordp=0xc9ef
// ================================================

void DMSG() // DMSG
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  DMSG(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc9f5: WORD 'D-UP' codep=0x224c wordp=0xc9fe
// ================================================

void D_dash_UP() // D-UP
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  DISP_dash_SETUP(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xca04: WORD 'DO-FLARE' codep=0x224c wordp=0xca11
// ================================================

void DO_dash_FLARE() // DO-FLARE
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  DO_dash_FLARE(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xca17: WORD '?PRL' codep=0x224c wordp=0xca20
// ================================================

void IsPRL() // ?PRL
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  IsPRL(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xca26: WORD 'OSET' codep=0x224c wordp=0xca2f
// ================================================

void OSET() // OSET
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  OSET(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xca35: WORD 'ORBUP' codep=0x224c wordp=0xca3f params=0 returns=0
// ================================================

void ORBUP() // ORBUP
{
  Push(0xca2f); // 'OSET'
  MODULE(); // MODULE
}


// ================================================
// 0xca47: WORD 'TRAK-ENCS' codep=0x224c wordp=0xca55 params=0 returns=0
// ================================================

void TRAK_dash_ENCS() // TRAK-ENCS
{
  Push(Read16(pp_STAR_dash_HR) - Read16(pp_TRAK_dash_HR)); // STAR-HR @ TRAK-HR @ -
  ABS(); // ABS
  Push(2);
  Push(0x0017);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  TRAK_dash_E(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xca73: WORD 'HEAT' codep=0x224c wordp=0xca7c
// ================================================

void HEAT() // HEAT
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  HEAT(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xca82: WORD '!'EXT' codep=0x224c wordp=0xca8c
// ================================================

void Store_i_EXT() // !'EXT
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  _ro__ex__i_EXT_rc_(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xca92: WORD '(CTXT)' codep=0x224c wordp=0xca9d
// ================================================

void _ro_CTXT_rc_() // (CTXT)
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  _ro_CTXT_rc_(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xcaa3: WORD 'CONTEXT-CASES' codep=0x224c wordp=0xcab5 params=0 returns=0
// ================================================

void CONTEXT_dash_CASES() // CONTEXT-CASES
{
  Push(0xca9d); // '(CTXT)'
  MODULE(); // MODULE
}


// ================================================
// 0xcabd: WORD '+A-VESS' codep=0x224c wordp=0xcac9
// ================================================

void _plus_A_dash_VESS() // +A-VESS
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  _plus_A_dash_VESS(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xcacf: WORD 'MTRAK-ENCS' codep=0x224c wordp=0xcade params=0 returns=0
// ================================================

void MTRAK_dash_ENCS() // MTRAK-ENCS
{
  Push(0xca55); // 'TRAK-ENCS'
  MODULE(); // MODULE
}


// ================================================
// 0xcae6: WORD 'MHEAT' codep=0x224c wordp=0xcaf0 params=0 returns=0
// ================================================

void MHEAT() // MHEAT
{
  Push(0xca7c); // 'HEAT'
  MODULE(); // MODULE
}


// ================================================
// 0xcaf8: WORD 'NAV-VOC' codep=0x1ab5 wordp=0xcb04
// ================================================
// 0xcb04: db 0x12 0xcb 0x7f 0xc9 0xea 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                   '

// ================================================
// 0xcb18: WORD 'NAV-O' codep=0x83f8 wordp=0xcb22
// ================================================
// Overlay NAV_dash_O = 0x8590

// ================================================
// 0xcb24: WORD 'OV/(D' codep=0x224c wordp=0xcb2e
// ================================================

void OV_slash__ro_D() // OV/(D
{
  LoadOverlay(NAV_dash_O); // NAV-O
  _ro__slash__ro_DIS_rc_ARM_rc_(); // Overlay NAVIGATR
}


// ================================================
// 0xcb34: WORD 'OV/(U' codep=0x224c wordp=0xcb3e
// ================================================

void OV_slash__ro_U() // OV/(U
{
  LoadOverlay(NAV_dash_O); // NAV-O
  _ro__slash__ro_UD_rc_SHIELD_rc_(); // Overlay NAVIGATR
}


// ================================================
// 0xcb44: WORD 'OV-SH' codep=0x224c wordp=0xcb4e
// ================================================

void OV_dash_SH() // OV-SH
{
  CTINIT(); // CTINIT
  LoadOverlay(NAV_dash_O); // NAV-O
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  _gt_DOWN_dash_SHIELD(); // Overlay NAVIGATR
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xcb5c: WORD 'OV-AR' codep=0x224c wordp=0xcb66
// ================================================

void OV_dash_AR() // OV-AR
{
  CTINIT(); // CTINIT
  LoadOverlay(NAV_dash_O); // NAV-O
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  _gt_DISARM(); // Overlay NAVIGATR
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xcb74: WORD 'SHPMOV-VOC' codep=0x1ab5 wordp=0xcb80
// ================================================
// 0xcb80: db 0x8e 0xcb 0x06 0xcb 0xfa 0xf1 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xcb94: WORD 'SHPMOV-OV' codep=0x83f8 wordp=0xcba0
// ================================================
// Overlay SHPMOV_dash_OV = 0x8747

// ================================================
// 0xcba2: WORD 'FLY' codep=0x224c wordp=0xcbaa
// ================================================

void FLY() // FLY
{
  LoadOverlay(SHPMOV_dash_OV); // SHPMOV-OV
  FLY(); // Overlay HYPER-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xcbb2: WORD 'MANEUVER' codep=0x224c wordp=0xcbbf
// ================================================

void MANEUVER() // MANEUVER
{
  LoadOverlay(SHPMOV_dash_OV); // SHPMOV-OV
  Push(0xca20); // '?PRL'
  MODULE(); // MODULE
  if (Pop() != 0)
  {
    JMPSHP(); // Overlay HYPER-OV
  } else
  {
    CHK_dash_MOV(); // Overlay HYPER-OV
    if (Pop() != 0)
    {
      DrawAUXSYS(); // Overlay HYPER-OV
      Push(Read16(pp_SKIP2NEST)); // SKIP2NEST @
      if (Pop() != 0)
      {
        UNNEST(); // Overlay HYPER-OV
      } else
      {
        Push(0xf0ab); // 'CLEANUP-MOV'
        Push(0xef37); // 'SET-DESTINATION'
        Push(0xf003); // 'SETUP-MOV'
        DOTASKS(SETUP_dash_MOV, SETUP_dash_MOV, SETUP_dash_MOV);
      }
    }
    Push(pp_FTRIG); // FTRIG
    OFF(); // OFF
  }
  DrawSORD(); // .SORD
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xcbff: WORD 'UNNEST' codep=0x224c wordp=0xcc0a
// ================================================

void UNNEST() // UNNEST
{
  LoadOverlay(SHPMOV_dash_OV); // SHPMOV-OV
  UNNEST(); // Overlay HYPER-OV
}


// ================================================
// 0xcc10: WORD '>NEST' codep=0x224c wordp=0xcc1a
// ================================================

void _gt_NEST() // >NEST
{
  LoadOverlay(SHPMOV_dash_OV); // SHPMOV-OV
  _plus_NEST(); // Overlay HYPER-OV
}


// ================================================
// 0xcc20: WORD 'GET-HAUX' codep=0x224c wordp=0xcc2d
// ================================================

void GET_dash_HAUX() // GET-HAUX
{
  LoadOverlay(SHPMOV_dash_OV); // SHPMOV-OV
  _ro_GET_dash_AUX(); // Overlay HYPER-OV
}


// ================================================
// 0xcc33: WORD 'OV.MVS' codep=0x224c wordp=0xcc3e
// ================================================

void OV_dot_MVS() // OV.MVS
{
  LoadOverlay(SHPMOV_dash_OV); // SHPMOV-OV
  DrawMVS(); // Overlay HYPER-OV
}


// ================================================
// 0xcc44: WORD 'S>PORT' codep=0x224c wordp=0xcc4f
// ================================================

void S_gt_PORT() // S>PORT
{
  LoadOverlay(SHPMOV_dash_OV); // SHPMOV-OV
  COME_dash_HITHER(); // Overlay HYPER-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xcc57: WORD 'USE-E' codep=0x224c wordp=0xcc61
// ================================================

void USE_dash_E() // USE-E
{
  LoadOverlay(SHPMOV_dash_OV); // SHPMOV-OV
  USE_dash_E(); // Overlay HYPER-OV
}


// ================================================
// 0xcc67: WORD 'MUSE-E' codep=0x224c wordp=0xcc72 params=0 returns=0
// ================================================

void MUSE_dash_E() // MUSE-E
{
  Push(0xcc61); // 'USE-E'
  MODULE(); // MODULE
}


// ================================================
// 0xcc7a: WORD 'VITA' codep=0x1ab5 wordp=0xcc83
// ================================================
// 0xcc83: db 0x91 0xcc 0x82 0xcb 0x96 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xcc97: WORD 'VITA-OV' codep=0x83f8 wordp=0xcca3
// ================================================
// Overlay VITA_dash_OV = 0x7723

// ================================================
// 0xcca5: WORD 'DIO' codep=0x224c wordp=0xccad
// ================================================

void DIO() // DIO
{
  LoadOverlay(VITA_dash_OV); // VITA-OV
  DIO(); // Overlay VITA-OV
}


// ================================================
// 0xccb3: WORD 'HIPARMS' codep=0x1ab5 wordp=0xccbf
// ================================================
// 0xccbf: db 0xcd 0xcc 0x85 0xcc 0xee 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xccd3: WORD 'HP-OV' codep=0x83f8 wordp=0xccdd
// ================================================
// Overlay HP_dash_OV = 0x7801

// ================================================
// 0xccdf: WORD 'C+OPARMS' codep=0x224c wordp=0xccec
// ================================================

void C_plus_OPARMS() // C+OPARMS
{
  LoadOverlay(HP_dash_OV); // HP-OV
  C_plus_OPARMS(); // Overlay HP-OV
}


// ================================================
// 0xccf2: WORD 'BIO' codep=0x224c wordp=0xccfa
// ================================================

void BIO() // BIO
{
  DIO(); // DIO
  Push(0xc843); // 'SETC'
  MODULE(); // MODULE
  C_plus_OPARMS(); // C+OPARMS
}


// ================================================
// 0xcd06: WORD 'LOPARMS' codep=0x1ab5 wordp=0xcd12
// ================================================
// 0xcd12: db 0x20 0xcd 0xc1 0xcc 0xf2 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xcd26: WORD 'LP-OV' codep=0x83f8 wordp=0xcd30
// ================================================
// Overlay LP_dash_OV = 0x792f

// ================================================
// 0xcd32: WORD 'OTHER-PAR' codep=0x224c wordp=0xcd40
// ================================================

void OTHER_dash_PAR() // OTHER-PAR
{
  LoadOverlay(LP_dash_OV); // LP-OV
  SPEC_dot_PARM(); // Overlay LP-OV
}


// ================================================
// 0xcd46: WORD 'SENTS' codep=0x1ab5 wordp=0xcd50
// ================================================
// 0xcd50: db 0x5e 0xcd 0x14 0xcd 0x44 0xf3 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '^   D               '

// ================================================
// 0xcd64: WORD 'SENT-OV' codep=0x83f8 wordp=0xcd70
// ================================================
// Overlay SENT_dash_OV = 0x7a79

// ================================================
// 0xcd72: WORD '?TALK' codep=0x224c wordp=0xcd7c
// ================================================

void IsTALK() // ?TALK
{
  LoadOverlay(SENT_dash_OV); // SENT-OV
  IsTALK(); // Overlay SENT-OV
}


// ================================================
// 0xcd82: WORD 'SAYIT' codep=0x224c wordp=0xcd8c
// ================================================

void SAYIT() // SAYIT
{
  LoadOverlay(SENT_dash_OV); // SENT-OV
  CLASS_gt_DE(); // Overlay SENT-OV
}


// ================================================
// 0xcd92: WORD 'MAPS-VOC' codep=0x1ab5 wordp=0xcd9f
// ================================================
// 0xcd9f: db 0xad 0xcd 0x52 0xcd 0x43 0xf5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  R C               '

// ================================================
// 0xcdb3: WORD 'MAPS-' codep=0x83f8 wordp=0xcdbd
// ================================================
// Overlay MAPS_dash_ = 0x9179

// ================================================
// 0xcdbf: WORD 'MAPS' codep=0x224c wordp=0xcdc8
// ================================================

void MAPS() // MAPS
{
  LoadOverlay(MAPS_dash_); // MAPS-
  MAPS(); // Overlay MAPS-OV
}


// ================================================
// 0xcdce: WORD '.STOR' codep=0x224c wordp=0xcdd8
// ================================================

void DrawSTOR() // .STOR
{
  LoadOverlay(MAPS_dash_); // MAPS-
  DrawSTORM(); // Overlay MAPS-OV
}


// ================================================
// 0xcdde: WORD '(2X2)' codep=0x224c wordp=0xcde8
// ================================================

void _ro_2X2_rc_() // (2X2)
{
  LoadOverlay(MAPS_dash_); // MAPS-
  _2X2CONTOUR(); // Overlay MAPS-OV
}


// ================================================
// 0xcdee: WORD '2X2CO' codep=0x224c wordp=0xcdf8 params=0 returns=0
// ================================================

void _2X2CO() // 2X2CO
{
  Push(0xcde8); // '(2X2)'
  MODULE(); // MODULE
}


// ================================================
// 0xce00: WORD '(4X4)' codep=0x224c wordp=0xce0a
// ================================================

void _ro_4X4_rc_() // (4X4)
{
  LoadOverlay(MAPS_dash_); // MAPS-
  _4X4CONTOUR(); // Overlay MAPS-OV
}


// ================================================
// 0xce10: WORD '4X4CO' codep=0x224c wordp=0xce1a params=0 returns=0
// ================================================

void _4X4CO() // 4X4CO
{
  Push(0xce0a); // '(4X4)'
  MODULE(); // MODULE
}


// ================================================
// 0xce22: WORD '(8X8)' codep=0x224c wordp=0xce2c
// ================================================

void _ro_8X8_rc_() // (8X8)
{
  LoadOverlay(MAPS_dash_); // MAPS-
  _8X8CONTOUR(); // Overlay MAPS-OV
}


// ================================================
// 0xce32: WORD '8X8CO' codep=0x224c wordp=0xce3c params=0 returns=0
// ================================================

void _8X8CO() // 8X8CO
{
  Push(0xce2c); // '(8X8)'
  MODULE(); // MODULE
}


// ================================================
// 0xce44: WORD 'SEEDER' codep=0x1ab5 wordp=0xce4f
// ================================================
// 0xce4f: db 0x5d 0xce 0xa1 0xcd 0xca 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 ']                   '

// ================================================
// 0xce63: WORD 'SEED-OV' codep=0x83f8 wordp=0xce6f
// ================================================
// Overlay SEED_dash_OV = 0x7ef4

// ================================================
// 0xce71: WORD 'POPULA' codep=0x224c wordp=0xce7c
// ================================================

void POPULA() // POPULA
{
  LoadOverlay(SEED_dash_OV); // SEED-OV
  POPULA(); // Overlay SEED-OV
}


// ================================================
// 0xce82: WORD 'ICON-VOC' codep=0x1ab5 wordp=0xce8f
// ================================================
// 0xce8f: db 0x9d 0xce 0x51 0xce 0x96 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  Q                 '

// ================================================
// 0xcea3: WORD 'LISTICONS-OV' codep=0x83f8 wordp=0xceb4
// ================================================
// Overlay LISTICONS_dash_OV = 0x7f8a

// ================================================
// 0xceb6: WORD 'ICONS' codep=0x224c wordp=0xcec0
// ================================================

void ICONS() // ICONS
{
  LoadOverlay(LISTICONS_dash_OV); // LISTICONS-OV
  ICONS(); // Overlay LISTICONS
}


// ================================================
// 0xcec6: WORD 'ITEMS' codep=0x1ab5 wordp=0xced0
// ================================================
// 0xced0: db 0xde 0xce 0x91 0xce 0x90 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xcee4: WORD 'ITEMS-OV' codep=0x83f8 wordp=0xcef1
// ================================================
// Overlay ITEMS_dash_OV = 0x8b2c

// ================================================
// 0xcef3: WORD '/ITEMS' codep=0x224c wordp=0xcefe
// ================================================

void _slash_ITEMS() // /ITEMS
{
  LoadOverlay(ITEMS_dash_OV); // ITEMS-OV
  _ro__slash_ITEMS_rc_(); // Overlay ITEMS-OV
}


// ================================================
// 0xcf04: WORD '>DEBRIS' codep=0x224c wordp=0xcf10
// ================================================

void _gt_DEBRIS() // >DEBRIS
{
  LoadOverlay(ITEMS_dash_OV); // ITEMS-OV
  _gt_DEBRIS(); // Overlay ITEMS-OV
}


// ================================================
// 0xcf16: WORD 'MOVE-VOC' codep=0x1ab5 wordp=0xcf23
// ================================================
// 0xcf23: db 0x31 0xcf 0xd2 0xce 0x1f 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '1                   '

// ================================================
// 0xcf37: WORD 'MOVE-OV' codep=0x83f8 wordp=0xcf43
// ================================================
// Overlay MOVE_dash_OV = 0x7fb7

// ================================================
// 0xcf45: WORD 'TVMOVE' codep=0x224c wordp=0xcf50
// ================================================

void TVMOVE() // TVMOVE
{
  LoadOverlay(MOVE_dash_OV); // MOVE-OV
  TV_dash_MOVE(); // Overlay MOVE-OV
}


// ================================================
// 0xcf56: WORD '?POPULA' codep=0x224c wordp=0xcf62
// ================================================

void IsPOPULA() // ?POPULA
{
  LoadOverlay(MOVE_dash_OV); // MOVE-OV
  IsPOPULA(); // Overlay MOVE-OV
}


// ================================================
// 0xcf68: WORD '!E/M' codep=0x224c wordp=0xcf71
// ================================================

void StoreE_slash_M() // !E/M
{
  LoadOverlay(MOVE_dash_OV); // MOVE-OV
  SET_dash_SPEED(); // Overlay MOVE-OV
}


// ================================================
// 0xcf77: WORD 'STORM-VOC' codep=0x1ab5 wordp=0xcf85
// ================================================
// 0xcf85: db 0x93 0xcf 0x25 0xcf 0xbc 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  %                 '

// ================================================
// 0xcf99: WORD 'STORM-OV' codep=0x83f8 wordp=0xcfa6
// ================================================
// Overlay STORM_dash_OV = 0x935b

// ================================================
// 0xcfa8: WORD 'DO.STORM' codep=0x224c wordp=0xcfb5
// ================================================

void DO_dot_STORM() // DO.STORM
{
  LoadOverlay(STORM_dash_OV); // STORM-OV
  _ro_DO_dot_STORM(); // Overlay STORM-OV
}


// ================================================
// 0xcfbb: WORD 'INJURE' codep=0x224c wordp=0xcfc6
// ================================================

void INJURE() // INJURE
{
  LoadOverlay(STORM_dash_OV); // STORM-OV
  INJURE_dash_PL(); // Overlay STORM-OV
}


// ================================================
// 0xcfcc: WORD 'T.V.' codep=0x1ab5 wordp=0xcfd5
// ================================================
// 0xcfd5: db 0xe3 0xcf 0x87 0xcf 0x6b 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '    k               '

// ================================================
// 0xcfe9: WORD 'TV-OV' codep=0x83f8 wordp=0xcff3
// ================================================
// Overlay TV_dash_OV = 0x7ba4

// ================================================
// 0xcff5: WORD 'TV-DISP' codep=0x224c wordp=0xd001
// ================================================

void TV_dash_DISP() // TV-DISP
{
  LoadOverlay(TV_dash_OV); // TV-OV
  TV_dash_DISP(); // Overlay TV-OV
}


// ================================================
// 0xd007: WORD '(TVSET)' codep=0x224c wordp=0xd013
// ================================================

void _ro_TVSET_rc_() // (TVSET)
{
  LoadOverlay(TV_dash_OV); // TV-OV
  TV_dash_SETUP(); // Overlay TV-OV
}


// ================================================
// 0xd019: WORD '(CLEAN)' codep=0x224c wordp=0xd025
// ================================================

void _ro_CLEAN_rc_() // (CLEAN)
{
  LoadOverlay(TV_dash_OV); // TV-OV
  TV_dash_CLEANU(); // Overlay TV-OV
}


// ================================================
// 0xd02b: WORD '(HEAVE)' codep=0x224c wordp=0xd037
// ================================================

void _ro_HEAVE_rc_() // (HEAVE)
{
  LoadOverlay(TV_dash_OV); // TV-OV
  HEAVEHO(); // Overlay TV-OV
}


// ================================================
// 0xd03d: WORD '(WEAPONS)' codep=0x224c wordp=0xd04b
// ================================================

void _ro_WEAPONS_rc_() // (WEAPONS)
{
  LoadOverlay(TV_dash_OV); // TV-OV
  DO_dot_WEAPON(); // Overlay TV-OV
}


// ================================================
// 0xd051: WORD '(TALK)' codep=0x224c wordp=0xd05c
// ================================================

void _ro_TALK_rc_() // (TALK)
{
  LoadOverlay(TV_dash_OV); // TV-OV
  WALK_and_TALK(); // Overlay TV-OV
}


// ================================================
// 0xd062: WORD 'HEAVEHO' codep=0x224c wordp=0xd06e params=0 returns=0
// ================================================

void HEAVEHO() // HEAVEHO
{
  Push(0xd037); // '(HEAVE)'
  MODULE(); // MODULE
}


// ================================================
// 0xd076: WORD 'BEHAVIO' codep=0x1ab5 wordp=0xd082
// ================================================
// 0xd082: db 0x90 0xd0 0xd7 0xcf 0xe0 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xd096: WORD 'BEHAVE-OV' codep=0x83f8 wordp=0xd0a4
// ================================================
// Overlay BEHAVE_dash_OV = 0x8cfa

// ================================================
// 0xd0a6: WORD 'TVTASKS' codep=0x224c wordp=0xd0b2
// ================================================

void TVTASKS() // TVTASKS
{
  LoadOverlay(BEHAVE_dash_OV); // BEHAVE-OV
  TV_dash_TASKS(); // Overlay BEHAV-OV
}


// ================================================
// 0xd0b8: WORD 'TV' codep=0x224c wordp=0xd0bf
// ================================================

void TV() // TV
{
  LoadOverlay(BEHAVE_dash_OV); // BEHAVE-OV
  TV(); // Overlay BEHAV-OV
}


// ================================================
// 0xd0c5: WORD '(SIMULA)' codep=0x224c wordp=0xd0d2
// ================================================

void _ro_SIMULA_rc_() // (SIMULA)
{
  LoadOverlay(BEHAVE_dash_OV); // BEHAVE-OV
  SIMULATE(); // Overlay BEHAV-OV
}


// ================================================
// 0xd0d8: WORD 'SIMULATE' codep=0x224c wordp=0xd0e5 params=0 returns=0
// ================================================

void SIMULATE() // SIMULATE
{
  Push(0xd0d2); // '(SIMULA)'
  MODULE(); // MODULE
}


// ================================================
// 0xd0ed: WORD 'STP-VOC' codep=0x1ab5 wordp=0xd0f9
// ================================================
// 0xd0f9: db 0x07 0xd1 0x84 0xd0 0xed 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xd10d: WORD 'STP-OV' codep=0x83f8 wordp=0xd118
// ================================================
// Overlay STP_dash_OV = 0x96a3

// ================================================
// 0xd11a: WORD 'SECURE' codep=0x224c wordp=0xd125
// ================================================

void SECURE() // SECURE
{
  LoadOverlay(STP_dash_OV); // STP-OV
  STP(); // Overlay STP-OV
}


// ================================================
// 0xd12b: WORD 'SIC'EM' codep=0x224c wordp=0xd136
// ================================================

void SIC_i_EM() // SIC'EM
{
  LoadOverlay(STP_dash_OV); // STP-OV
  SIC_i_EM(); // Overlay STP-OV
}


// ================================================
// 0xd13c: WORD '2NDS' codep=0x224c wordp=0xd145
// ================================================

void _2NDS() // 2NDS
{
  LoadOverlay(STP_dash_OV); // STP-OV
  _2NDS(); // Overlay STP-OV
}


// ================================================
// 0xd14b: WORD 'LAUNCH-VOC' codep=0x1ab5 wordp=0xd15a
// ================================================
// 0xd15a: db 0x68 0xd1 0xfb 0xd0 0x4b 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'h   K               '

// ================================================
// 0xd16e: WORD 'LAUNC' codep=0x83f8 wordp=0xd178
// ================================================
// Overlay LAUNC = 0x89a7

// ================================================
// 0xd17a: WORD 'OVCOU' codep=0x224c wordp=0xd184
// ================================================

void OVCOU() // OVCOU
{
  LoadOverlay(LAUNC); // LAUNC
  _and_LAUNCH(); // Overlay LAUNCH-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xd18c: WORD 'OVBAC' codep=0x224c wordp=0xd196
// ================================================

void OVBAC() // OVBAC
{
  LoadOverlay(LAUNC); // LAUNC
  _and_RETURN(); // Overlay LAUNCH-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xd19e: WORD '.AIRL' codep=0x224c wordp=0xd1a8
// ================================================

void DrawAIRL() // .AIRL
{
  LoadOverlay(LAUNC); // LAUNC
  DrawAIRLOCK(); // Overlay LAUNCH-OV
}


// ================================================
// 0xd1ae: WORD 'CAP-VOC' codep=0x1ab5 wordp=0xd1ba
// ================================================
// 0xd1ba: db 0xc8 0xd1 0x5c 0xd1 0x2c 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  \ ,               '

// ================================================
// 0xd1ce: WORD 'CAP-O' codep=0x83f8 wordp=0xd1d8
// ================================================
// Overlay CAP_dash_O = 0x8325

// ================================================
// 0xd1da: WORD 'OV/IT' codep=0x224c wordp=0xd1e4
// ================================================

void OV_slash_IT() // OV/IT
{
  LoadOverlay(CAP_dash_O); // CAP-O
  _ro__slash_ITEMS_rc_(); // Overlay CAPTAIN
}


// ================================================
// 0xd1ea: WORD 'OV/CA' codep=0x224c wordp=0xd1f4
// ================================================

void OV_slash_CA() // OV/CA
{
  LoadOverlay(CAP_dash_O); // CAP-O
  _ro__slash_CAPT_dash_LOG_rc_(); // Overlay CAPTAIN
}


// ================================================
// 0xd1fa: WORD 'OV/LA' codep=0x224c wordp=0xd204
// ================================================

void OV_slash_LA() // OV/LA
{
  LoadOverlay(CAP_dash_O); // CAP-O
  _ro__slash_LAUNCH_slash_LAND_rc_(); // Overlay CAPTAIN
}


// ================================================
// 0xd20a: WORD 'OV>DE' codep=0x224c wordp=0xd214
// ================================================

void OV_gt_DE() // OV>DE
{
  LoadOverlay(CAP_dash_O); // CAP-O
  _gt_DESCEND(); // Overlay CAPTAIN
}


// ================================================
// 0xd21a: WORD 'OV/LO' codep=0x224c wordp=0xd224
// ================================================

void OV_slash_LO() // OV/LO
{
  LoadOverlay(CAP_dash_O); // CAP-O
  _ro__slash_LOG_dash_PLAN_rc_(); // Overlay CAPTAIN
}


// ================================================
// 0xd22a: WORD 'DOC-VOC' codep=0x1ab5 wordp=0xd236
// ================================================
// 0xd236: db 0x44 0xd2 0xbc 0xd1 0xe3 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'D                   '

// ================================================
// 0xd24a: WORD 'DOC-OV' codep=0x83f8 wordp=0xd255
// ================================================
// Overlay DOC_dash_OV = 0x8136

// ================================================
// 0xd257: WORD 'OV/EXAMINE' codep=0x224c wordp=0xd266
// ================================================

void OV_slash_EXAMINE() // OV/EXAMINE
{
  LoadOverlay(DOC_dash_OV); // DOC-OV
  _ro__slash_EXAMINE_rc_(); // Overlay DOCTOR
}


// ================================================
// 0xd26c: WORD 'OV/TREAT' codep=0x224c wordp=0xd279
// ================================================

void OV_slash_TREAT() // OV/TREAT
{
  LoadOverlay(DOC_dash_OV); // DOC-OV
  _ro__slash_TREAT_rc_(); // Overlay DOCTOR
}


// ================================================
// 0xd27f: WORD 'AN-VOC' codep=0x1ab5 wordp=0xd28a
// ================================================
// 0xd28a: db 0x98 0xd2 0x38 0xd2 0x6a 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  8 j               '

// ================================================
// 0xd29e: WORD 'AN-OV' codep=0x83f8 wordp=0xd2a8
// ================================================
// Overlay AN_dash_OV = 0x8907

// ================================================
// 0xd2aa: WORD 'OV/ANALYSIS' codep=0x224c wordp=0xd2ba
// ================================================

void OV_slash_ANALYSIS() // OV/ANALYSIS
{
  LoadOverlay(AN_dash_OV); // AN-OV
  _ro__slash_ANALYSIS_rc_(); // Overlay ANALYZE-OV
}


// ================================================
// 0xd2c0: WORD '*MAP' codep=0x1ab5 wordp=0xd2c9
// ================================================
// 0xd2c9: db 0xd7 0xd2 0x8c 0xd2 0x62 0xed 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '    b               '

// ================================================
// 0xd2dd: WORD '*MAP-OV' codep=0x83f8 wordp=0xd2e9
// ================================================
// Overlay _star_MAP_dash_OV = 0x8643

// ================================================
// 0xd2eb: WORD 'OV/STARMAP' codep=0x224c wordp=0xd2fa
// ================================================

void OV_slash_STARMAP() // OV/STARMAP
{
  LoadOverlay(_star_MAP_dash_OV); // *MAP-OV
  _ro__slash_STARMAP_rc_(); // Overlay MAP-OV
  Push(pp_FTRIG); // FTRIG
  OFF(); // OFF
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xd306: WORD 'LAND-VOC' codep=0x1ab5 wordp=0xd313
// ================================================
// 0xd313: db 0x21 0xd3 0xcb 0xd2 0xeb 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '!                   '

// ================================================
// 0xd327: WORD 'LAND-OV' codep=0x83f8 wordp=0xd333
// ================================================
// Overlay LAND_dash_OV = 0x965b

// ================================================
// 0xd335: WORD 'TRY-LAND' codep=0x224c wordp=0xd342
// ================================================

void TRY_dash_LAND() // TRY-LAND
{
  LoadOverlay(LAND_dash_OV); // LAND-OV
  IsLAND(); // Overlay LAND-OV
}


// ================================================
// 0xd348: WORD 'TRY-LAUNCH' codep=0x224c wordp=0xd357
// ================================================

void TRY_dash_LAUNCH() // TRY-LAUNCH
{
  LoadOverlay(LAND_dash_OV); // LAND-OV
  IsLAUNCH(); // Overlay LAND-OV
}


// ================================================
// 0xd35d: WORD 'BTN-VOC' codep=0x1ab5 wordp=0xd369
// ================================================
// 0xd369: db 0x77 0xd3 0x15 0xd3 0xae 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'w                   '

// ================================================
// 0xd37d: WORD 'BTN-OV' codep=0x83f8 wordp=0xd388
// ================================================
// Overlay BTN_dash_OV = 0x85c7

// ================================================
// 0xd38a: WORD 'OVFLT' codep=0x224c wordp=0xd394
// ================================================

void OVFLT() // OVFLT
{
  LoadOverlay(BTN_dash_OV); // BTN-OV
  _gt_FLT(); // Overlay SHIPBUTTONS
}


// ================================================
// 0xd39a: WORD 'CHKFLT-VOC' codep=0x1ab5 wordp=0xd3a9
// ================================================
// 0xd3a9: db 0xb7 0xd3 0x6b 0xd3 0xf4 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  k                 '

// ================================================
// 0xd3bd: WORD 'CHKFLT-OV' codep=0x83f8 wordp=0xd3cb
// ================================================
// Overlay CHKFLT_dash_OV = 0x6e00

// ================================================
// 0xd3cd: WORD '?FLIGHT-OK' codep=0x224c wordp=0xd3dc
// ================================================

void IsFLIGHT_dash_OK() // ?FLIGHT-OK
{
  LoadOverlay(CHKFLT_dash_OV); // CHKFLT-OV
  IsCAN_dash_LEAVE(); // Overlay CHKFLIGHT-OV
}


// ================================================
// 0xd3e2: WORD 'PM-VOC' codep=0x1ab5 wordp=0xd3ed
// ================================================
// 0xd3ed: db 0xfb 0xd3 0xab 0xd3 0xda 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xd401: WORD 'PM-OV' codep=0x83f8 wordp=0xd40b
// ================================================
// Overlay PM_dash_OV = 0x7660

// ================================================
// 0xd40d: WORD 'PORTM' codep=0x224c wordp=0xd417
// ================================================

void PORTM() // PORTM
{
  LoadOverlay(PM_dash_OV); // PM-OV
  WALKIES(); // Overlay PORTMENU-OV
}


// ================================================
// 0xd41d: WORD 'GAME' codep=0x1ab5 wordp=0xd426
// ================================================
// 0xd426: db 0x34 0xd4 0xef 0xd3 0x2f 0xf5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '4   /               '

// ================================================
// 0xd43a: WORD 'GAME-OV' codep=0x83f8 wordp=0xd445
// ================================================
// Overlay GAME_dash_OV = 0x8f71

// ================================================
// 0xd447: WORD 'STARTGAME' codep=0x224c wordp=0xd452
// ================================================

void STARTGAME() // STARTGAME
{
  LoadOverlay(GAME_dash_OV); // GAME-OV
  START_dot_GAME(); // Overlay GAME-OV
}


// ================================================
// 0xd458: WORD 'GAMEOP_1' codep=0x224c wordp=0xd463
// ================================================

void GAMEOP_1() // GAMEOP_1
{
  LoadOverlay(GAME_dash_OV); // GAME-OV
  GAMEOPS(); // Overlay GAME-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xd46b: WORD 'GAMEOP_2' codep=0x224c wordp=0xd476 params=0 returns=0
// ================================================

void GAMEOP_2() // GAMEOP_2
{
  Push(0xd463); // 'GAMEOP_1'
  MODULE(); // MODULE
}


// ================================================
// 0xd47e: WORD 'LET-THERE-BE-STARFLIGHT' codep=0x224c wordp=0xd489
// ================================================

void LET_dash_THERE_dash_BE_dash_STARFLIGHT() // LET-THERE-BE-STARFLIGHT
{
  Push(pp_ESC_dash_EN); // ESC-EN
  OFF(); // OFF
  STARTER(); // STARTER
  Push(pp_RELAXTIME); // RELAXTIME
  ON_3(); // ON_3
  MOUNTA(); // MOUNTA
  LDFONTS(); // LDFONTS
  SIGFLD(":TIMESTAMP");
  Push(Read16(Pop())); //  @
  Push(pp_TIMESTAMP); // TIMESTAMP
  Store_3(); // !_3
  Push(pp_RELAXTIME); // RELAXTIME
  OFF(); // OFF
  STARTGAME(); // STARTGAME
}

// 0xd4a7: db 0x00 ' '

