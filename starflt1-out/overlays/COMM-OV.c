// ====== OVERLAY 'COMM-OV' ======
// store offset = 0xd920
// overlay size   = 0x1c40

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//         PHRASE$  codep:0x744d wordp:0xd936 size:0x0003 C-string:'PHRASE_do_'
//           WD93B  codep:0x224c wordp:0xd93b size:0x0010 C-string:'WD93B'
//             LSC  codep:0x744d wordp:0xd94d size:0x0003 C-string:'LSC'
//              LP  codep:0x744d wordp:0xd952 size:0x0003 C-string:'LP'
//              FC  codep:0x744d wordp:0xd957 size:0x0003 C-string:'FC'
//              UA  codep:0x744d wordp:0xd95c size:0x0003 C-string:'UA'
//           DEDLN  codep:0x744d wordp:0xd961 size:0x0003 C-string:'DEDLN'
//           DEDLY  codep:0x744d wordp:0xd966 size:0x0003 C-string:'DEDLY'
//              TC  codep:0x744d wordp:0xd96b size:0x0003 C-string:'TC'
//              T%  codep:0x744d wordp:0xd970 size:0x0003 C-string:'T_pe_'
//             CSF  codep:0x744d wordp:0xd975 size:0x0003 C-string:'CSF'
//        BASE-EDL  codep:0x744d wordp:0xd97a size:0x0003 C-string:'BASE_dash_EDL'
//            CPIC  codep:0x744d wordp:0xd97f size:0x0003 C-string:'CPIC'
//             AET  codep:0x744d wordp:0xd984 size:0x0003 C-string:'AET'
//             BET  codep:0x744d wordp:0xd989 size:0x0003 C-string:'BET'
//             CET  codep:0x744d wordp:0xd98e size:0x0003 C-string:'CET'
//             OPE  codep:0x744d wordp:0xd993 size:0x0003 C-string:'OPE'
//             FPE  codep:0x744d wordp:0xd998 size:0x0003 C-string:'FPE'
//             HPE  codep:0x744d wordp:0xd99d size:0x0003 C-string:'HPE'
//             MSW  codep:0x744d wordp:0xd9a2 size:0x0003 C-string:'MSW'
//         VST-PTR  codep:0x744d wordp:0xd9a7 size:0x0003 C-string:'VST_dash_PTR'
//      COMM-SKILL  codep:0x744d wordp:0xd9ac size:0x0003 C-string:'COMM_dash_SKILL'
//           WD9B1  codep:0x744d wordp:0xd9b1 size:0x0003 C-string:'WD9B1'
//           WD9B6  codep:0x744d wordp:0xd9b6 size:0x0003 C-string:'WD9B6'
//           WD9BB  codep:0x744d wordp:0xd9bb size:0x0003 C-string:'WD9BB'
//           WD9C0  codep:0x744d wordp:0xd9c0 size:0x0003 C-string:'WD9C0'
//           WD9C5  codep:0x744d wordp:0xd9c5 size:0x0003 C-string:'WD9C5'
//           WD9CA  codep:0x744d wordp:0xd9ca size:0x0003 C-string:'WD9CA'
//           WD9CF  codep:0x744d wordp:0xd9cf size:0x0003 C-string:'WD9CF'
//           WD9D4  codep:0x744d wordp:0xd9d4 size:0x0003 C-string:'WD9D4'
//           WD9D9  codep:0x744d wordp:0xd9d9 size:0x0003 C-string:'WD9D9'
//           WD9DE  codep:0x744d wordp:0xd9de size:0x0003 C-string:'WD9DE'
//           WD9E3  codep:0x744d wordp:0xd9e3 size:0x0003 C-string:'WD9E3'
//           WD9E8  codep:0x73ea wordp:0xd9e8 size:0x0006 C-string:'WD9E8'
//           WD9F0  codep:0x73ea wordp:0xd9f0 size:0x0006 C-string:'WD9F0'
//           WD9F8  codep:0x744d wordp:0xd9f8 size:0x0003 C-string:'WD9F8'
//           WD9FD  codep:0x73ea wordp:0xd9fd size:0x0006 C-string:'WD9FD'
//        (PHRASE)  codep:0x1d29 wordp:0xda05 size:0x0004 C-string:'_ro_PHRASE_rc_'
//          HAILER  codep:0x1d29 wordp:0xda0b size:0x0002 C-string:'HAILER'
//      ?P-RESPOND  codep:0x2214 wordp:0xda0f size:0x0002 C-string:'IsP_dash_RESPOND'
//       P-POSTURE  codep:0x1d29 wordp:0xda13 size:0x0002 C-string:'P_dash_POSTURE'
//      P-POSTURES  codep:0x1d29 wordp:0xda17 size:0x0002 C-string:'P_dash_POSTURES'
//       P-SUBJECT  codep:0x1d29 wordp:0xda1b size:0x0002 C-string:'P_dash_SUBJECT'
//          P-QUES  codep:0x1d29 wordp:0xda1f size:0x0002 C-string:'P_dash_QUES'
//       P-PHRASES  codep:0x1d29 wordp:0xda23 size:0x0002 C-string:'P_dash_PHRASES'
//       A-SUBJECT  codep:0x1d29 wordp:0xda27 size:0x0002 C-string:'A_dash_SUBJECT'
//      #A-PHRASES  codep:0x1d29 wordp:0xda2b size:0x0002 C-string:'_n_A_dash_PHRASES'
//         POSTURE  codep:0x1d29 wordp:0xda2f size:0x0002 C-string:'POSTURE'
//        LAST-LEN  codep:0x1d29 wordp:0xda33 size:0x0002 C-string:'LAST_dash_LEN'
//           WDA37  codep:0x2214 wordp:0xda37 size:0x0002 C-string:'WDA37'
//           WDA3B  codep:0x2214 wordp:0xda3b size:0x0002 C-string:'WDA3B'
//         SUBJECT  codep:0x1d29 wordp:0xda3f size:0x0002 C-string:'SUBJECT'
//        #A-HAILS  codep:0x1d29 wordp:0xda43 size:0x0002 C-string:'_n_A_dash_HAILS'
// #A-PHRASES-LIMIT  codep:0x1d29 wordp:0xda47 size:0x0002 C-string:'_n_A_dash_PHRASES_dash_LIMIT'
//      LEAST-USED  codep:0x1d29 wordp:0xda4b size:0x0002 C-string:'LEAST_dash_USED'
//      TIRED-TIME  codep:0x1d29 wordp:0xda4f size:0x0004 C-string:'TIRED_dash_TIME'
// ?WAITING-FOR-ANSWER  codep:0x2214 wordp:0xda55 size:0x0002 C-string:'IsWAITING_dash_FOR_dash_ANSWER'
// SPACIAL-CONTEXT  codep:0x1d29 wordp:0xda59 size:0x0002 C-string:'SPACIAL_dash_CONTEXT'
//      ?A-TALKING  codep:0x2214 wordp:0xda5d size:0x0002 C-string:'IsA_dash_TALKING'
//           WDA61  codep:0x2214 wordp:0xda61 size:0x0002 C-string:'WDA61'
//           WDA65  codep:0x1d29 wordp:0xda65 size:0x0002 C-string:'WDA65'
//           %TALK  codep:0x1d29 wordp:0xda69 size:0x0002 C-string:'_pe_TALK'
// ?HAS-SURRENDERED  codep:0x2214 wordp:0xda6d size:0x0002 C-string:'IsHAS_dash_SURRENDERED'
//      ALIEN-RACE  codep:0x1d29 wordp:0xda71 size:0x0002 C-string:'ALIEN_dash_RACE'
//         ?CALLED  codep:0x2214 wordp:0xda75 size:0x0002 C-string:'IsCALLED'
//        ?SCANNED  codep:0x2214 wordp:0xda79 size:0x0002 C-string:'IsSCANNED'
//          A-CAPT  codep:0x1d29 wordp:0xda7d size:0x0010 C-string:'A_dash_CAPT'
//          A-SHIP  codep:0x1d29 wordp:0xda8f size:0x0010 C-string:'A_dash_SHIP'
//          P-CAPT  codep:0x1d29 wordp:0xdaa1 size:0x0010 C-string:'P_dash_CAPT'
//          P-SHIP  codep:0x1d29 wordp:0xdab3 size:0x0010 C-string:'P_dash_SHIP'
//          A-QUES  codep:0x1d29 wordp:0xdac5 size:0x0004 C-string:'A_dash_QUES'
//  COMM-OFF-SKILL  codep:0x1d29 wordp:0xdacb size:0x0002 C-string:'COMM_dash_OFF_dash_SKILL'
//       COMM-RACE  codep:0x1d29 wordp:0xdacf size:0x0002 C-string:'COMM_dash_RACE'
//      P-STRENGTH  codep:0x2214 wordp:0xdad3 size:0x0002 C-string:'P_dash_STRENGTH'
//      (LOCK-OUT)  codep:0x1d29 wordp:0xdad7 size:0x0002 C-string:'_ro_LOCK_dash_OUT_rc_'
//           CTCNT  codep:0x1d29 wordp:0xdadb size:0x0002 C-string:'CTCNT'
//      OBSEQUIOUS  codep:0x2214 wordp:0xdadf size:0x0002 C-string:'OBSEQUIOUS'
//        FRIENDLY  codep:0x2214 wordp:0xdae3 size:0x0002 C-string:'FRIENDLY'
//         NEUTRAL  codep:0x2214 wordp:0xdae7 size:0x0002 C-string:'NEUTRAL'
//         HOSTILE  codep:0x2214 wordp:0xdaeb size:0x0002 C-string:'HOSTILE'
//           FIGHT  codep:0x2214 wordp:0xdaef size:0x0002 C-string:'FIGHT'
//      THEMSELVES  codep:0x2214 wordp:0xdaf3 size:0x0002 C-string:'THEMSELVES'
//     OTHER_RACES  codep:0x2214 wordp:0xdaf7 size:0x0002 C-string:'OTHER_RACES'
//      GEN'L-INFO  codep:0x2214 wordp:0xdafb size:0x0002 C-string:'GEN_i_L_dash_INFO'
//        ANCIENTS  codep:0x2214 wordp:0xdaff size:0x0002 C-string:'ANCIENTS'
//      OLD-EMPIRE  codep:0x2214 wordp:0xdb03 size:0x0002 C-string:'OLD_dash_EMPIRE'
//           WDB07  codep:0x744d wordp:0xdb07 size:0x0003 C-string:'WDB07'
//           WDB0C  codep:0x224c wordp:0xdb0c size:0x0006 C-string:'WDB0C'
//    ORIGINATOR>C  codep:0x224c wordp:0xdb23 size:0x0014 C-string:'ORIGINATOR_gt_C'
//    A>ORIGINATOR  codep:0x224c wordp:0xdb48 size:0x0020 C-string:'A_gt_ORIGINATOR'
//    P>ORIGINATOR  codep:0x224c wordp:0xdb6a size:0x0018 C-string:'P_gt_ORIGINATOR'
//        PHRASE>C  codep:0x224c wordp:0xdb84 size:0x0006 C-string:'PHRASE_gt_C'
//        DELTA-NO  codep:0x224c wordp:0xdb8c size:0x000c C-string:'DELTA_dash_NO'
//       DELTA-YES  codep:0x224c wordp:0xdb9a size:0x000c C-string:'DELTA_dash_YES'
//      !A-SUBJECT  codep:0x224c wordp:0xdba8 size:0x0006 C-string:'StoreA_dash_SUBJECT'
//        P>AFIELD  codep:0x4a4f wordp:0xdbbb size:0x000c C-string:'P_gt_AFIELD'
//  POSTURE-EFFECT  codep:0x224c wordp:0xdbc9 size:0x0010 C-string:'POSTURE_dash_EFFECT'
//       (>BUTTON)  codep:0x224c wordp:0xdbdb size:0x000e C-string:'_ro__gt_BUTTON_rc_'
//         >BUTTON  codep:0x224c wordp:0xdbeb size:0x0012 C-string:'_gt_BUTTON'
//           CAPT:  codep:0x224c wordp:0xdbff size:0x000a C-string:'CAPT_c_'
//             OP#  codep:0x3b68 wordp:0xdc0b size:0x0004 C-string:'OP_n_'
//             FP#  codep:0x3b68 wordp:0xdc11 size:0x0004 C-string:'FP_n_'
//             NP#  codep:0x3b68 wordp:0xdc17 size:0x0004 C-string:'NP_n_'
//             HP#  codep:0x3b68 wordp:0xdc1d size:0x0004 C-string:'HP_n_'
//            #PHR  codep:0x4a4f wordp:0xdc2a size:0x0014 C-string:'_n_PHR'
// GET-PHRASE-LIMIT  codep:0x224c wordp:0xdc40 size:0x000e C-string:'GET_dash_PHRASE_dash_LIMIT'
//       N-POSTURE  codep:0x4a4f wordp:0xdc59 size:0x0014 C-string:'N_dash_POSTURE'
//     EDL>POSTURE  codep:0x224c wordp:0xdc6f size:0x0066 C-string:'EDL_gt_POSTURE'
//           WDCD7  codep:0x224c wordp:0xdcd7 size:0x0008 C-string:'WDCD7'
//           +!EDL  codep:0x224c wordp:0xdce9 size:0x005c C-string:'_plus__ex_EDL'
//     SET-OK-TIME  codep:0x224c wordp:0xdd47 size:0x0020 C-string:'SET_dash_OK_dash_TIME'
//  SET-TIRED-TIME  codep:0x224c wordp:0xdd69 size:0x0012 C-string:'SET_dash_TIRED_dash_TIME'
//     ?LOCKED-OUT  codep:0x224c wordp:0xdd7d size:0x0040 C-string:'IsLOCKED_dash_OUT'
//     FIND-PHRASE  codep:0x224c wordp:0xddbf size:0x0050 C-string:'FIND_dash_PHRASE'
//    ?SPACE<>SUBJ  codep:0x224c wordp:0xde11 size:0x0018 C-string:'IsSPACE_st__gt_SUBJ'
//    FIND-SUBJECT  codep:0x224c wordp:0xde2b size:0x0040 C-string:'FIND_dash_SUBJECT'
//   PHRASE-SEARCH  codep:0x224c wordp:0xde6d size:0x003a C-string:'PHRASE_dash_SEARCH'
//           COMM$  codep:0x224c wordp:0xdea9 size:0x0010 C-string:'COMM_do_'
//          ]COMM$  codep:0x224c wordp:0xdebb size:0x000a C-string:'_bc_COMM_do_'
//       >RESPOND$  codep:0x224c wordp:0xdec7 size:0x0010 C-string:'_gt_RESPOND_do_'
//          >HAIL$  codep:0x224c wordp:0xdee2 size:0x0010 C-string:'_gt_HAIL_do_'
//        PAD+WORD  codep:0x224c wordp:0xdef4 size:0x001e C-string:'PAD_plus_WORD'
//       HASH-WORD  codep:0x224c wordp:0xdf14 size:0x001c C-string:'HASH_dash_WORD'
//     A-SYLLABLES  codep:0x1d29 wordp:0xdf32 size:0x00e0 C-string:'A_dash_SYLLABLES'
//  MOVE-SYLLABLES  codep:0x224c wordp:0xe014 size:0x0044 C-string:'MOVE_dash_SYLLABLES'
//          A-SYLL  codep:0x224c wordp:0xe05a size:0x000c C-string:'A_dash_SYLL'
//          A-WORD  codep:0x224c wordp:0xe068 size:0x0044 C-string:'A_dash_WORD'
//             O>P  codep:0x4a4f wordp:0xe0b4 size:0x0010 C-string:'O_gt_P'
//       ?SCRAMBLE  codep:0x224c wordp:0xe0c6 size:0x0030 C-string:'IsSCRAMBLE'
//       TERMINATE  codep:0x224c wordp:0xe0f8 size:0x0012 C-string:'TERMINATE'
//     A>TERMINATE  codep:0x224c wordp:0xe10c size:0x0006 C-string:'A_gt_TERMINATE'
//     ACTION-CASE  codep:0x4a4f wordp:0xe11c size:0x000c C-string:'ACTION_dash_CASE'
//           DO-UA  codep:0x224c wordp:0xe12a size:0x0034 C-string:'DO_dash_UA'
//        -LEADING  codep:0x224c wordp:0xe160 size:0x002e C-string:'_dash_LEADING'
//           PARSE  codep:0x224c wordp:0xe190 size:0x0052 C-string:'PARSE'
//          +1CHAR  codep:0x224c wordp:0xe1e4 size:0x000a C-string:'_plus_1CHAR'
//           WE1F0  codep:0x224c wordp:0xe1f0 size:0x0054 C-string:'WE1F0'
//       ?WORD-FIT  codep:0x224c wordp:0xe246 size:0x000e C-string:'IsWORD_dash_FIT'
//        CTSCROLL  codep:0x224c wordp:0xe261 size:0x0042 C-string:'CTSCROLL'
//         WORD>CT  codep:0x224c wordp:0xe2a5 size:0x0042 C-string:'WORD_gt_CT'
//           ANAME  codep:0x224c wordp:0xe2e9 size:0x000c C-string:'ANAME'
//           ASHIP  codep:0x224c wordp:0xe2f7 size:0x000c C-string:'ASHIP'
//           CNAME  codep:0x224c wordp:0xe305 size:0x000c C-string:'CNAME'
//           SNAME  codep:0x224c wordp:0xe313 size:0x0014 C-string:'SNAME'
//      >ENDOPTION  codep:0x224c wordp:0xe329 size:0x0020 C-string:'_gt_ENDOPTION'
//         OPTION$  codep:0x224c wordp:0xe34b size:0x0018 C-string:'OPTION_do_'
//            YOU$  codep:0x224c wordp:0xe365 size:0x0012 C-string:'YOU_do_'
//          OTHER$  codep:0x224c wordp:0xe379 size:0x0014 C-string:'OTHER_do_'
//            OEMP  codep:0x224c wordp:0xe38f size:0x001b C-string:'OEMP'
//            ANC$  codep:0x224c wordp:0xe3ac size:0x0015 C-string:'ANC_do_'
//             NO$  codep:0x224c wordp:0xe3c3 size:0x0006 C-string:'NO_do_'
//      (?SUBJECT)  codep:0x4a4f wordp:0xe3d0 size:0x0014 C-string:'_ro__ask_SUBJECT_rc_'
//        ?SUBJECT  codep:0x224c wordp:0xe3e6 size:0x0008 C-string:'IsSUBJECT'
//    SPECIAL-CASE  codep:0x4a4f wordp:0xe3f6 size:0x0024 C-string:'SPECIAL_dash_CASE'
//         SPECIAL  codep:0x224c wordp:0xe41c size:0x001a C-string:'SPECIAL'
//     (PHRASE>CT)  codep:0x224c wordp:0xe446 size:0x003a C-string:'_ro_PHRASE_gt_CT_rc_'
//       PHRASE>CT  codep:0x224c wordp:0xe482 size:0x002e C-string:'PHRASE_gt_CT'
//      ?COMM-BTNS  codep:0x1d29 wordp:0xe4b2 size:0x0002 C-string:'IsCOMM_dash_BTNS'
//     !A-SUBJECT+  codep:0x224c wordp:0xe4b6 size:0x001c C-string:'StoreA_dash_SUBJECT_plus_'
//          +5>EDL  codep:0x224c wordp:0xe4d4 size:0x0006 C-string:'_plus_5_gt_EDL'
//           WE4DC  codep:0x224c wordp:0xe4dc size:0x0008 C-string:'WE4DC'
//           WE4E6  codep:0x224c wordp:0xe4e6 size:0x0008 C-string:'WE4E6'
//           WE4F0  codep:0x224c wordp:0xe4f0 size:0x0008 C-string:'WE4F0'
//        +4/9>EDL  codep:0x224c wordp:0xe4fa size:0x0018 C-string:'_plus_4_slash_9_gt_EDL'
//           WE514  codep:0x224c wordp:0xe514 size:0x0008 C-string:'WE514'
//         YES>EDL  codep:0x224c wordp:0xe51e size:0x0006 C-string:'YES_gt_EDL'
//          NO-EDL  codep:0x224c wordp:0xe526 size:0x0006 C-string:'NO_dash_EDL'
// NEW-POSTURE>EDL  codep:0x224c wordp:0xe52e size:0x0016 C-string:'NEW_dash_POSTURE_gt_EDL'
//     RESPOND>EDL  codep:0x224c wordp:0xe546 size:0x000c C-string:'RESPOND_gt_EDL'
//   STATEMENT-EDL  codep:0x224c wordp:0xe554 size:0x000c C-string:'STATEMENT_dash_EDL'
//           WE562  codep:0x224c wordp:0xe562 size:0x001a C-string:'WE562'
//             @T%  codep:0x224c wordp:0xe57e size:0x000c C-string:'GetT_pe_'
//         #!%TALK  codep:0x224c wordp:0xe58c size:0x0012 C-string:'_n__ex__pe_TALK'
//          !%TALK  codep:0x224c wordp:0xe5a0 size:0x0006 C-string:'Store_pe_TALK'
//          1.5*T%  codep:0x224c wordp:0xe5a8 size:0x0008 C-string:'_1_dot_5_star_T_pe_'
//            2*T%  codep:0x224c wordp:0xe5b2 size:0x0008 C-string:'_2_star_T_pe_'
//          2.5>T%  codep:0x224c wordp:0xe5bc size:0x0008 C-string:'_2_dot_5_gt_T_pe_'
//            1*T%  codep:0x224c wordp:0xe5c6 size:0x0008 C-string:'_1_star_T_pe_'
//          0.5*T%  codep:0x224c wordp:0xe5d0 size:0x0008 C-string:'_0_dot_5_star_T_pe_'
//           70>T%  codep:0x224c wordp:0xe5da size:0x0008 C-string:'_70_gt_T_pe_'
//          100>T%  codep:0x224c wordp:0xe5e4 size:0x0008 C-string:'_100_gt_T_pe_'
//            0>T%  codep:0x224c wordp:0xe5ee size:0x0006 C-string:'_0_gt_T_pe_'
//           CAPT:  codep:0x224c wordp:0xe5f6 size:0x0011 C-string:'CAPT_c_'
//           WE609  codep:0x224c wordp:0xe609 size:0x000f C-string:'WE609'
//   RAISE-SHIELDS  codep:0x224c wordp:0xe61a size:0x0016 C-string:'RAISE_dash_SHIELDS'
//   LOWER-SHIELDS  codep:0x224c wordp:0xe632 size:0x0016 C-string:'LOWER_dash_SHIELDS'
//     ARM-WEAPONS  codep:0x224c wordp:0xe64a size:0x0016 C-string:'ARM_dash_WEAPONS'
//  DISARM-WEAPONS  codep:0x224c wordp:0xe662 size:0x0016 C-string:'DISARM_dash_WEAPONS'
//  CALL-FOR-SHIPS  codep:0x224c wordp:0xe67a size:0x0014 C-string:'CALL_dash_FOR_dash_SHIPS'
//    SHIPS-ARRIVE  codep:0x224c wordp:0xe690 size:0x001a C-string:'SHIPS_dash_ARRIVE'
//     SCAN-PLAYER  codep:0x224c wordp:0xe6ac size:0x0014 C-string:'SCAN_dash_PLAYER'
//            HAIL  codep:0x224c wordp:0xe6c2 size:0x002e C-string:'HAIL'
//         RESPOND  codep:0x224c wordp:0xe6f2 size:0x0012 C-string:'RESPOND'
//          ANSWER  codep:0x224c wordp:0xe706 size:0x0014 C-string:'ANSWER'
//       STATEMENT  codep:0x224c wordp:0xe71c size:0x0010 C-string:'STATEMENT'
//        QUESTION  codep:0x224c wordp:0xe72e size:0x0032 C-string:'QUESTION'
// TIRED-OF-WAITING  codep:0x224c wordp:0xe762 size:0x0010 C-string:'TIRED_dash_OF_dash_WAITING'
// TIRED-OF-TALKING  codep:0x224c wordp:0xe774 size:0x000a C-string:'TIRED_dash_OF_dash_TALKING'
//           WE780  codep:0x224c wordp:0xe780 size:0x000c C-string:'WE780'
//         (?RACE)  codep:0x4a4f wordp:0xe798 size:0x0024 C-string:'_ro__ask_RACE_rc_'
//           WE7BE  codep:0x224c wordp:0xe7be size:0x0008 C-string:'WE7BE'
//     ?OBSEQUIOUS  codep:0x224c wordp:0xe7c8 size:0x0006 C-string:'IsOBSEQUIOUS'
//       ?FRIENDLY  codep:0x224c wordp:0xe7d0 size:0x0006 C-string:'IsFRIENDLY'
//        ?NEUTRAL  codep:0x224c wordp:0xe7d8 size:0x0006 C-string:'IsNEUTRAL'
//        ?HOSTILE  codep:0x224c wordp:0xe7e0 size:0x0006 C-string:'IsHOSTILE'
//          ?FIGHT  codep:0x224c wordp:0xe7e8 size:0x0008 C-string:'IsFIGHT'
//   TALKATIVENESS  codep:0x224c wordp:0xe7f2 size:0x000a C-string:'TALKATIVENESS'
// ?TIRED-OF-TALKING  codep:0x224c wordp:0xe7fe size:0x000e C-string:'IsTIRED_dash_OF_dash_TALKING'
//           WE80E  codep:0x224c wordp:0xe80e size:0x002a C-string:'WE80E'
//           WE83A  codep:0x224c wordp:0xe83a size:0x0014 C-string:'WE83A'
//           WE850  codep:0x224c wordp:0xe850 size:0x0016 C-string:'WE850'
//     ?OK-TO-TALK  codep:0x224c wordp:0xe868 size:0x004c C-string:'IsOK_dash_TO_dash_TALK'
//         ?REPEAT  codep:0x224c wordp:0xe8b6 size:0x000a C-string:'IsREPEAT'
//           WE8C2  codep:0x224c wordp:0xe8c2 size:0x000c C-string:'WE8C2'
//           WE8D0  codep:0x224c wordp:0xe8d0 size:0x000c C-string:'WE8D0'
//     ?SHIELDS-UP  codep:0x224c wordp:0xe8de size:0x000a C-string:'IsSHIELDS_dash_UP'
//   ?SHIELDS-FLAG  codep:0x224c wordp:0xe8ea size:0x001a C-string:'IsSHIELDS_dash_FLAG'
//   ?WEAPON-ARMED  codep:0x224c wordp:0xe906 size:0x000a C-string:'IsWEAPON_dash_ARMED'
//    ?WEAPON-FLAG  codep:0x224c wordp:0xe912 size:0x001a C-string:'IsWEAPON_dash_FLAG'
//       ?P-HAILED  codep:0x224c wordp:0xe92e size:0x000a C-string:'IsP_dash_HAILED'
//       ?A-HAILED  codep:0x224c wordp:0xe93a size:0x000a C-string:'IsA_dash_HAILED'
// ?TIRED-OF-WAITING  codep:0x224c wordp:0xe946 size:0x000c C-string:'IsTIRED_dash_OF_dash_WAITING'
//   ?WANT-TO-TALK  codep:0x224c wordp:0xe954 size:0x000c C-string:'IsWANT_dash_TO_dash_TALK'
//    ?P-STATEMENT  codep:0x224c wordp:0xe962 size:0x000c C-string:'IsP_dash_STATEMENT'
// ?WAS-QUESTIONED  codep:0x224c wordp:0xe970 size:0x000a C-string:'IsWAS_dash_QUESTIONED'
//    ?NEW-POSTURE  codep:0x224c wordp:0xe97c size:0x000e C-string:'IsNEW_dash_POSTURE'
//         <3SHIPS  codep:0x224c wordp:0xe98c size:0x000a C-string:'_st_3SHIPS'
//        ?IN-COMM  codep:0x224c wordp:0xe998 size:0x001c C-string:'IsIN_dash_COMM'
//     ?TERMINATED  codep:0x224c wordp:0xe9b6 size:0x000a C-string:'IsTERMINATED'
//   ?ALIEN-RACE-6  codep:0x224c wordp:0xe9c2 size:0x000a C-string:'IsALIEN_dash_RACE_dash_6'
// ?MAKE-STATEMENT  codep:0x224c wordp:0xe9ce size:0x003c C-string:'IsMAKE_dash_STATEMENT'
//  ?CAN-SURRENDER  codep:0x224c wordp:0xea0c size:0x0016 C-string:'IsCAN_dash_SURRENDER'
//           WEA24  codep:0x224c wordp:0xea24 size:0x0010 C-string:'WEA24'
//           WEA36  codep:0x224c wordp:0xea36 size:0x0008 C-string:'WEA36'
//           <EDL>  codep:0xb869 wordp:0xea48 size:0x0069 C-string:'_st_EDL_gt_'
//          <TALK>  codep:0xb869 wordp:0xeabc size:0x00aa C-string:'_st_TALK_gt_'
//           <AUX>  codep:0xb869 wordp:0xeb70 size:0x009a C-string:'_st_AUX_gt_'
//          <COMM>  codep:0xb869 wordp:0xec15 size:0x0092 C-string:'_st_COMM_gt_'
//           WECA9  codep:0x224c wordp:0xeca9 size:0x0014 C-string:'WECA9'
//        P-PHRASE  codep:0x224c wordp:0xecbf size:0x002a C-string:'P_dash_PHRASE'
//       STOP-COMM  codep:0x224c wordp:0xeceb size:0x0006 C-string:'STOP_dash_COMM'
//           ?TRIG  codep:0x224c wordp:0xecf3 size:0x002e C-string:'IsTRIG'
//           WED23  codep:0x744d wordp:0xed23 size:0x0003 C-string:'WED23'
//           WED28  codep:0x224c wordp:0xed28 size:0x0048 C-string:'WED28'
//           WED72  codep:0x1d29 wordp:0xed72 size:0x0003 C-string:'WED72'
//      >P-POSTURE  codep:0x224c wordp:0xed77 size:0x0026 C-string:'_gt_P_dash_POSTURE'
//            (>?)  codep:0x4a4f wordp:0xeda6 size:0x0014 C-string:'_ro__gt__ask__rc_'
//       >QUESTION  codep:0x224c wordp:0xedbc size:0x002c C-string:'_gt_QUESTION'
//      >STATEMENT  codep:0x224c wordp:0xedea size:0x000c C-string:'_gt_STATEMENT'
//             >CM  codep:0x4a4f wordp:0xedfe size:0x0010 C-string:'_gt_CM'
//            >YES  codep:0x224c wordp:0xee10 size:0x0011 C-string:'_gt_YES'
//             >NO  codep:0x224c wordp:0xee23 size:0x0010 C-string:'_gt_NO'
//      >IMPATIENT  codep:0x224c wordp:0xee35 size:0x000a C-string:'_gt_IMPATIENT'
//      >TERMINATE  codep:0x224c wordp:0xee41 size:0x0006 C-string:'_gt_TERMINATE'
//            >Y/N  codep:0x4a4f wordp:0xee50 size:0x0010 C-string:'_gt_Y_slash_N'
//           >HAIL  codep:0x224c wordp:0xee62 size:0x0018 C-string:'_gt_HAIL'
//        >RESPOND  codep:0x224c wordp:0xee7c size:0x0016 C-string:'_gt_RESPOND'
//         EDL+AUX  codep:0x224c wordp:0xee9e size:0x0022 C-string:'EDL_plus_AUX'
//    COMM-EXPERTS  codep:0x224c wordp:0xeed1 size:0x002a C-string:'COMM_dash_EXPERTS'
//       .COMM-PIC  codep:0x224c wordp:0xeefd size:0x002e C-string:'DrawCOMM_dash_PIC'
//           WEF2D  codep:0x224c wordp:0xef2d size:0x003e C-string:'WEF2D'
//           WEF6D  codep:0x224c wordp:0xef6d size:0x002e C-string:'WEF6D'
//           WEF9D  codep:0x224c wordp:0xef9d size:0x0024 C-string:'WEF9D'
//           WEFC3  codep:0x224c wordp:0xefc3 size:0x009c C-string:'WEFC3'
//      COMM-LOOP2  codep:0x224c wordp:0xf061 size:0x0072 C-string:'COMM_dash_LOOP2'
//     COMMUNICATE  codep:0x224c wordp:0xf0d5 size:0x0050 C-string:'COMMUNICATE'
//          (CBTN)  codep:0x4a4f wordp:0xf130 size:0x000c C-string:'_ro_CBTN_rc_'
//           WF13E  codep:0x224c wordp:0xf13e size:0x002e C-string:'WF13E'
//             CL1  codep:0x224c wordp:0xf174 size:0x00b2 C-string:'CL1'
//      INIT_ACOMM  codep:0x224c wordp:0xf228 size:0x0050 C-string:'INIT_ACOMM'
//           WF27A  codep:0x224c wordp:0xf27a size:0x00b4 C-string:'WF27A'
//      INIT_GCOMM  codep:0x224c wordp:0xf330 size:0x0090 C-string:'INIT_GCOMM'
//      INIT-MCOMM  codep:0x224c wordp:0xf3c2 size:0x0078 C-string:'INIT_dash_MCOMM'
//           IAPWR  codep:0x224c wordp:0xf444 size:0x006a C-string:'IAPWR'
//           WF4B0  codep:0x224c wordp:0xf4b0 size:0x0014 C-string:'WF4B0'
//           WF4C6  codep:0x224c wordp:0xf4c6 size:0x006a C-string:'WF4C6'
//           ICOMM  codep:0x224c wordp:0xf53a size:0x0000 C-string:'ICOMM'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_IsFIRED_dash_WEAPONS; // ?FIRED-WEAPONS
extern const unsigned short int cc_IsA_dash_SHIELDS_dash_UP; // ?A-SHIELDS-UP
extern const unsigned short int cc_IsA_dash_WEAP; // ?A-WEAP
extern const unsigned short int pp__i_XCOMM; // 'XCOMM
extern const unsigned short int pp__i_HEAT; // 'HEAT
extern const unsigned short int pp_A_dash_STRENGTH; // A-STRENGTH
extern const unsigned short int pp_AVCNT; // AVCNT
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_EDL; // EDL
extern const unsigned short int pp_A_dash_POSTU; // A-POSTU
extern const unsigned short int pp_P_dash_RACES; // P-RACES
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp_IsWIN; // ?WIN
extern const unsigned short int pp__i_UNNEST; // 'UNNEST
extern const unsigned short int pp__n_VESS; // #VESS
extern const unsigned short int pp_CTCOLOR; // CTCOLOR
extern const unsigned short int pp__i_CC; // 'CC
extern const unsigned short int pp__ro_STOP_dash_COMM_rc_; // (STOP-COMM)
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern const unsigned short int pp_THIS_dash_BUTTON; // THIS-BUTTON
extern const unsigned short int pp_SKIP2NEST; // SKIP2NEST
extern const unsigned short int pp_IsON_dash_PLA; // ?ON-PLA
extern const unsigned short int pp_IsRECALL; // ?RECALL
extern const unsigned short int pp_CTX; // CTX
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp__i_YANK; // 'YANK
extern const unsigned short int pp__i__plus_VESS; // '+VESS
extern const unsigned short int pp_IsNEB; // ?NEB
extern const unsigned short int pp_TERMINA; // TERMINA
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp__i_EXTERNAL_dash_EVENTS; // 'EXTERNAL-EVENTS
extern const unsigned short int pp_IsSECURE; // ?SECURE
extern const unsigned short int pp_TOWFINE; // TOWFINE
extern const unsigned short int pp__ro_ORIGINATOR_rc_; // (ORIGINATOR)
extern const unsigned short int pp_OK_dash_TALK; // OK-TALK
extern const unsigned short int pp__ro_SYSTEM_rc_; // (SYSTEM)
extern const unsigned short int pp__ro_ENCOUNTER_rc_; // (ENCOUNTER)
extern const unsigned short int pp__ro_AORIGINATOR_rc_; // (AORIGINATOR)
extern const unsigned short int pp_LSCAN; // LSCAN
extern const unsigned short int pp_CTTOP; // CTTOP
extern const unsigned short int pp_CTBOT; // CTBOT
extern LoadDataType _1BTN; // 1BTN
extern LoadDataType ELEM_dash_VAL; // ELEM-VAL
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color RED; // RED
extern Color BLUE; // BLUE
extern Color PINK; // PINK
extern Color WHITE; // WHITE
extern IFieldType INST_dash_X; // INST-X
extern IFieldType _pe_NAME; // %NAME
void COUNT(); // COUNT
void _star__slash_(); // */
void ABS(); // ABS
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void D_st_(); // D<
void PAD(); // PAD
void SPACE(); // SPACE
void MS(); // MS
void PICK(); // PICK
void _2OVER(); // 2OVER
void D0_eq_(); // D0=
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void DMAX(); // DMAX
void BIT(); // BIT
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _1_dot_5_ex_(); // 1.5!
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void CMOVE(); // CMOVE
void FILL_1(); // FILL_1
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void IsCHILD(); // ?CHILD
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IFIRST(); // IFIRST
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void DARK(); // DARK
void POS_dot_(); // POS.
void CTPOS_dot_(); // CTPOS.
void CTERASE(); // CTERASE
void CLICK(); // CLICK
void CTCR(); // CTCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void TXT_dash_WIN(); // TXT-WIN
void IsMRC(); // ?MRC
void DrawHIGHLI(); // .HIGHLI
void DrawON(); // .ON
void CLR_dash_BUT(); // CLR-BUT
void INIT_dash_BUTTON(); // INIT-BUTTON
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void Y_slash_N(); // Y/N
void DrawABTN(); // .ABTN
void DrawBTN_dash_TEXT(); // .BTN-TEXT
void NEW_dash_BUT(); // NEW-BUT
void _do__ex_(); // $!
void PARALLE(); // PARALLE
void DISTRACT(); // DISTRACT
void HUFF_gt_(); // HUFF>
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void U_star_(); // U*
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TIME(); // TIME
void _1_dot_5_at_(); // 1.5@
void _plus_BIT(); // +BIT
void _plus__dash__at_(); // +-@
void CI(); // CI
void LCOPYBLK(); // LCOPYBLK
void V_gt_DISPLAY(); // V>DISPLAY


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp__ro_PHRASE_rc_ = 0xda05; // (PHRASE) size: 4
// {0x56, 0x3a, 0x20, 0x6d}

const unsigned short int pp_HAILER = 0xda0b; // HAILER size: 2
// {0x3a, 0x20}

const unsigned short int pp_P_dash_POSTURE = 0xda13; // P-POSTURE size: 2
// {0x3a, 0x20}

const unsigned short int pp_P_dash_POSTURES = 0xda17; // P-POSTURES size: 2
// {0x3a, 0x20}

const unsigned short int pp_P_dash_SUBJECT = 0xda1b; // P-SUBJECT size: 2
// {0x3a, 0x20}

const unsigned short int pp_P_dash_QUES = 0xda1f; // P-QUES size: 2
// {0x3a, 0x20}

const unsigned short int pp_P_dash_PHRASES = 0xda23; // P-PHRASES size: 2
// {0x3a, 0x20}

const unsigned short int pp_A_dash_SUBJECT = 0xda27; // A-SUBJECT size: 2
// {0x3a, 0x20}

const unsigned short int pp__n_A_dash_PHRASES = 0xda2b; // #A-PHRASES size: 2
// {0x3a, 0x20}

const unsigned short int pp_POSTURE = 0xda2f; // POSTURE size: 2
// {0x3a, 0x20}

const unsigned short int pp_LAST_dash_LEN = 0xda33; // LAST-LEN size: 2
// {0x3a, 0x20}

const unsigned short int pp_SUBJECT = 0xda3f; // SUBJECT size: 2
// {0x3a, 0x20}

const unsigned short int pp__n_A_dash_HAILS = 0xda43; // #A-HAILS size: 2
// {0x3a, 0x20}

const unsigned short int pp__n_A_dash_PHRASES_dash_LIMIT = 0xda47; // #A-PHRASES-LIMIT size: 2
// {0x3a, 0x20}

const unsigned short int pp_LEAST_dash_USED = 0xda4b; // LEAST-USED size: 2
// {0x3a, 0x20}

const unsigned short int pp_TIRED_dash_TIME = 0xda4f; // TIRED-TIME size: 4
// {0x56, 0x3a, 0x20, 0x72}

const unsigned short int pp_SPACIAL_dash_CONTEXT = 0xda59; // SPACIAL-CONTEXT size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDA65 = 0xda65; // WDA65 size: 2
// {0x3a, 0x20}

const unsigned short int pp__pe_TALK = 0xda69; // %TALK size: 2
// {0x3a, 0x20}

const unsigned short int pp_ALIEN_dash_RACE = 0xda71; // ALIEN-RACE size: 2
// {0x3a, 0x20}

const unsigned short int pp_A_dash_CAPT = 0xda7d; // A-CAPT size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20}

const unsigned short int pp_A_dash_SHIP = 0xda8f; // A-SHIP size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x31, 0x2f, 0x38, 0x36, 0x20, 0x29, 0xda}

const unsigned short int pp_P_dash_CAPT = 0xdaa1; // P-CAPT size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x2b, 0xe6, 0x84, 0xda, 0xc4, 0x5e, 0x53}

const unsigned short int pp_P_dash_SHIP = 0xdab3; // P-SHIP size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x49, 0x2d, 0x4f, 0x46, 0xc6, 0xa0, 0x3c}

const unsigned short int pp_A_dash_QUES = 0xdac5; // A-QUES size: 4
// {0x56, 0x3a, 0x20, 0x6d}

const unsigned short int pp_COMM_dash_OFF_dash_SKILL = 0xdacb; // COMM-OFF-SKILL size: 2
// {0x3a, 0x20}

const unsigned short int pp_COMM_dash_RACE = 0xdacf; // COMM-RACE size: 2
// {0x3a, 0x20}

const unsigned short int pp__ro_LOCK_dash_OUT_rc_ = 0xdad7; // (LOCK-OUT) size: 2
// {0x3a, 0x20}

const unsigned short int pp_CTCNT = 0xdadb; // CTCNT size: 2
// {0x3a, 0x20}

const unsigned short int pp_A_dash_SYLLABLES = 0xdf32; // A-SYLLABLES size: 224
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x48, 0x45, 0x41, 0x44, 0x3a, 0x20, 0x44, 0x49, 0x53, 0x4b, 0x3e, 0x44, 0x53, 0x50, 0x20, 0x28, 0x20, 0x2d, 0x2d, 0x20, 0x5c, 0x20, 0x6d, 0x6f, 0x76, 0x65, 0x20, 0x64, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x20, 0x66, 0x72, 0x6f, 0x6d, 0x20, 0x73, 0x61, 0x76, 0x65, 0x20, 0x64, 0x69, 0x73, 0x6b, 0x20, 0x74, 0x6f, 0x20, 0x29, 0x20, 0x20, 0x20, 0x20, 0x54, 0x3a, 0x20, 0x28, 0x20, 0x74, 0x65, 0x6d, 0x70, 0x6f, 0x72, 0x61, 0x72, 0x79, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x63, 0x61, 0x63, 0x68, 0x65, 0x29, 0x20}

const unsigned short int pp_IsCOMM_dash_BTNS = 0xe4b2; // ?COMM-BTNS size: 2
// {0x00, 0x00}

const unsigned short int pp_WED72 = 0xed72; // WED72 size: 3
// {0x02, 0x08, 0x01}


const unsigned short int cc_IsP_dash_RESPOND = 0xda0f; // ?P-RESPOND
const unsigned short int cc_WDA37 = 0xda37; // WDA37
const unsigned short int cc_WDA3B = 0xda3b; // WDA3B
const unsigned short int cc_IsWAITING_dash_FOR_dash_ANSWER = 0xda55; // ?WAITING-FOR-ANSWER
const unsigned short int cc_IsA_dash_TALKING = 0xda5d; // ?A-TALKING
const unsigned short int cc_WDA61 = 0xda61; // WDA61
const unsigned short int cc_IsHAS_dash_SURRENDERED = 0xda6d; // ?HAS-SURRENDERED
const unsigned short int cc_IsCALLED = 0xda75; // ?CALLED
const unsigned short int cc_IsSCANNED = 0xda79; // ?SCANNED
const unsigned short int cc_P_dash_STRENGTH = 0xdad3; // P-STRENGTH
const unsigned short int cc_OBSEQUIOUS = 0xdadf; // OBSEQUIOUS
const unsigned short int cc_FRIENDLY = 0xdae3; // FRIENDLY
const unsigned short int cc_NEUTRAL = 0xdae7; // NEUTRAL
const unsigned short int cc_HOSTILE = 0xdaeb; // HOSTILE
const unsigned short int cc_FIGHT = 0xdaef; // FIGHT
const unsigned short int cc_THEMSELVES = 0xdaf3; // THEMSELVES
const unsigned short int cc_OTHER_RACES = 0xdaf7; // OTHER_RACES
const unsigned short int cc_GEN_i_L_dash_INFO = 0xdafb; // GEN'L-INFO
const unsigned short int cc_ANCIENTS = 0xdaff; // ANCIENTS
const unsigned short int cc_OLD_dash_EMPIRE = 0xdb03; // OLD-EMPIRE


// 0xd932: db 0xc4 0x01 '  '

// ================================================
// 0xd934: WORD 'PHRASE$' codep=0x744d wordp=0xd936
// ================================================
IFieldType PHRASE_do_ = {STRINGIDX, 0x0b, 0xff};

// ================================================
// 0xd939: WORD 'WD93B' codep=0x224c wordp=0xd93b params=2 returns=2
// ================================================

void WD93B() // WD93B
{
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+PHRASE_do_.offset); // PHRASE$<IFIELD>
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xd94b: WORD 'LSC' codep=0x744d wordp=0xd94d
// ================================================
IFieldType LSC = {PHRASECONTRLIDX, 0x0b, 0x01};

// ================================================
// 0xd950: WORD 'LP' codep=0x744d wordp=0xd952
// ================================================
IFieldType LP = {PHRASECONTRLIDX, 0x0c, 0x01};

// ================================================
// 0xd955: WORD 'FC' codep=0x744d wordp=0xd957
// ================================================
IFieldType FC = {PHRASECONTRLIDX, 0x0d, 0x01};

// ================================================
// 0xd95a: WORD 'UA' codep=0x744d wordp=0xd95c
// ================================================
IFieldType UA = {PHRASECONTRLIDX, 0x0e, 0x01};

// ================================================
// 0xd95f: WORD 'DEDLN' codep=0x744d wordp=0xd961
// ================================================
IFieldType DEDLN = {PHRASECONTRLIDX, 0x0f, 0x01};

// ================================================
// 0xd964: WORD 'DEDLY' codep=0x744d wordp=0xd966
// ================================================
IFieldType DEDLY = {PHRASECONTRLIDX, 0x10, 0x01};

// ================================================
// 0xd969: WORD 'TC' codep=0x744d wordp=0xd96b
// ================================================
IFieldType TC = {ORIGINATORIDX, 0x0b, 0x01};

// ================================================
// 0xd96e: WORD 'T%' codep=0x744d wordp=0xd970
// ================================================
IFieldType T_pe_ = {ORIGINATORIDX, 0x0c, 0x01};

// ================================================
// 0xd973: WORD 'CSF' codep=0x744d wordp=0xd975
// ================================================
IFieldType CSF = {ORIGINATORIDX, 0x0d, 0x01};

// ================================================
// 0xd978: WORD 'BASE-EDL' codep=0x744d wordp=0xd97a
// ================================================
IFieldType BASE_dash_EDL = {ORIGINATORIDX, 0x12, 0x01};

// ================================================
// 0xd97d: WORD 'CPIC' codep=0x744d wordp=0xd97f
// ================================================
IFieldType CPIC = {ORIGINATORIDX, 0x1d, 0x01};

// ================================================
// 0xd982: WORD 'AET' codep=0x744d wordp=0xd984
// ================================================
IFieldType AET = {ORIGINATORIDX, 0x13, 0x01};

// ================================================
// 0xd987: WORD 'BET' codep=0x744d wordp=0xd989
// ================================================
IFieldType BET = {ORIGINATORIDX, 0x14, 0x01};

// ================================================
// 0xd98c: WORD 'CET' codep=0x744d wordp=0xd98e
// ================================================
IFieldType CET = {ORIGINATORIDX, 0x15, 0x01};

// ================================================
// 0xd991: WORD 'OPE' codep=0x744d wordp=0xd993
// ================================================
IFieldType OPE = {ORIGINATORIDX, 0x16, 0x01};

// ================================================
// 0xd996: WORD 'FPE' codep=0x744d wordp=0xd998
// ================================================
IFieldType FPE = {ORIGINATORIDX, 0x17, 0x01};

// ================================================
// 0xd99b: WORD 'HPE' codep=0x744d wordp=0xd99d
// ================================================
IFieldType HPE = {ORIGINATORIDX, 0x18, 0x01};

// ================================================
// 0xd9a0: WORD 'MSW' codep=0x744d wordp=0xd9a2
// ================================================
IFieldType MSW = {ORIGINATORIDX, 0x19, 0x01};

// ================================================
// 0xd9a5: WORD 'VST-PTR' codep=0x744d wordp=0xd9a7
// ================================================
IFieldType VST_dash_PTR = {ORIGINATORIDX, 0x1a, 0x03};

// ================================================
// 0xd9aa: WORD 'COMM-SKILL' codep=0x744d wordp=0xd9ac
// ================================================
IFieldType COMM_dash_SKILL = {CREWMEMBERIDX, 0x1d, 0x01};

// ================================================
// 0xd9af: WORD 'WD9B1' codep=0x744d wordp=0xd9b1
// ================================================
IFieldType WD9B1 = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xd9b4: WORD 'WD9B6' codep=0x744d wordp=0xd9b6
// ================================================
// orphan
IFieldType WD9B6 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xd9b9: WORD 'WD9BB' codep=0x744d wordp=0xd9bb
// ================================================
IFieldType WD9BB = {CREWMEMBERIDX, 0x1a, 0x0f};

// ================================================
// 0xd9be: WORD 'WD9C0' codep=0x744d wordp=0xd9c0
// ================================================
IFieldType WD9C0 = {ASSIGN_CREWIDX, 0x11, 0x03};

// ================================================
// 0xd9c3: WORD 'WD9C5' codep=0x744d wordp=0xd9c5
// ================================================
IFieldType WD9C5 = {ASSIGN_CREWIDX, 0x1d, 0x03};

// ================================================
// 0xd9c8: WORD 'WD9CA' codep=0x744d wordp=0xd9ca
// ================================================
IFieldType WD9CA = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xd9cd: WORD 'WD9CF' codep=0x744d wordp=0xd9cf
// ================================================
// orphan
IFieldType WD9CF = {SHIPIDX, 0x17, 0x02};

// ================================================
// 0xd9d2: WORD 'WD9D4' codep=0x744d wordp=0xd9d4
// ================================================
IFieldType WD9D4 = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xd9d7: WORD 'WD9D9' codep=0x744d wordp=0xd9d9
// ================================================
IFieldType WD9D9 = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xd9dc: WORD 'WD9DE' codep=0x744d wordp=0xd9de
// ================================================
IFieldType WD9DE = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xd9e1: WORD 'WD9E3' codep=0x744d wordp=0xd9e3
// ================================================
IFieldType WD9E3 = {SHIPIDX, 0x1d, 0x02};

// ================================================
// 0xd9e6: WORD 'WD9E8' codep=0x73ea wordp=0xd9e8
// ================================================
LoadDataType WD9E8 = {VESSELIDX, 0x0c, 0x04, 0x49, 0x6491};

// ================================================
// 0xd9ee: WORD 'WD9F0' codep=0x73ea wordp=0xd9f0
// ================================================
LoadDataType WD9F0 = {VESSELIDX, 0x12, 0x03, 0x49, 0x6491};

// ================================================
// 0xd9f6: WORD 'WD9F8' codep=0x744d wordp=0xd9f8
// ================================================
IFieldType WD9F8 = {VESSELIDX, 0x12, 0x04};

// ================================================
// 0xd9fb: WORD 'WD9FD' codep=0x73ea wordp=0xd9fd
// ================================================
LoadDataType WD9FD = {VESSELIDX, 0x05, 0x01, 0x49, 0x6491};

// ================================================
// 0xda03: WORD '(PHRASE)' codep=0x1d29 wordp=0xda05
// ================================================
// 0xda05: db 0x56 0x3a 0x20 0x6d 'V: m'

// ================================================
// 0xda09: WORD 'HAILER' codep=0x1d29 wordp=0xda0b
// ================================================
// 0xda0b: db 0x3a 0x20 ': '

// ================================================
// 0xda0d: WORD '?P-RESPOND' codep=0x2214 wordp=0xda0f
// ================================================
// 0xda0f: dw 0x0000

// ================================================
// 0xda11: WORD 'P-POSTURE' codep=0x1d29 wordp=0xda13
// ================================================
// 0xda13: db 0x3a 0x20 ': '

// ================================================
// 0xda15: WORD 'P-POSTURES' codep=0x1d29 wordp=0xda17
// ================================================
// 0xda17: db 0x3a 0x20 ': '

// ================================================
// 0xda19: WORD 'P-SUBJECT' codep=0x1d29 wordp=0xda1b
// ================================================
// 0xda1b: db 0x3a 0x20 ': '

// ================================================
// 0xda1d: WORD 'P-QUES' codep=0x1d29 wordp=0xda1f
// ================================================
// 0xda1f: db 0x3a 0x20 ': '

// ================================================
// 0xda21: WORD 'P-PHRASES' codep=0x1d29 wordp=0xda23
// ================================================
// 0xda23: db 0x3a 0x20 ': '

// ================================================
// 0xda25: WORD 'A-SUBJECT' codep=0x1d29 wordp=0xda27
// ================================================
// 0xda27: db 0x3a 0x20 ': '

// ================================================
// 0xda29: WORD '#A-PHRASES' codep=0x1d29 wordp=0xda2b
// ================================================
// 0xda2b: db 0x3a 0x20 ': '

// ================================================
// 0xda2d: WORD 'POSTURE' codep=0x1d29 wordp=0xda2f
// ================================================
// 0xda2f: db 0x3a 0x20 ': '

// ================================================
// 0xda31: WORD 'LAST-LEN' codep=0x1d29 wordp=0xda33
// ================================================
// 0xda33: db 0x3a 0x20 ': '

// ================================================
// 0xda35: WORD 'WDA37' codep=0x2214 wordp=0xda37
// ================================================
// 0xda37: dw 0x0000

// ================================================
// 0xda39: WORD 'WDA3B' codep=0x2214 wordp=0xda3b
// ================================================
// 0xda3b: dw 0x0000

// ================================================
// 0xda3d: WORD 'SUBJECT' codep=0x1d29 wordp=0xda3f
// ================================================
// 0xda3f: db 0x3a 0x20 ': '

// ================================================
// 0xda41: WORD '#A-HAILS' codep=0x1d29 wordp=0xda43
// ================================================
// 0xda43: db 0x3a 0x20 ': '

// ================================================
// 0xda45: WORD '#A-PHRASES-LIMIT' codep=0x1d29 wordp=0xda47
// ================================================
// 0xda47: db 0x3a 0x20 ': '

// ================================================
// 0xda49: WORD 'LEAST-USED' codep=0x1d29 wordp=0xda4b
// ================================================
// 0xda4b: db 0x3a 0x20 ': '

// ================================================
// 0xda4d: WORD 'TIRED-TIME' codep=0x1d29 wordp=0xda4f
// ================================================
// 0xda4f: db 0x56 0x3a 0x20 0x72 'V: r'

// ================================================
// 0xda53: WORD '?WAITING-FOR-ANSWER' codep=0x2214 wordp=0xda55
// ================================================
// 0xda55: dw 0x0000

// ================================================
// 0xda57: WORD 'SPACIAL-CONTEXT' codep=0x1d29 wordp=0xda59
// ================================================
// 0xda59: db 0x3a 0x20 ': '

// ================================================
// 0xda5b: WORD '?A-TALKING' codep=0x2214 wordp=0xda5d
// ================================================
// 0xda5d: dw 0x0000

// ================================================
// 0xda5f: WORD 'WDA61' codep=0x2214 wordp=0xda61
// ================================================
// 0xda61: dw 0x0000

// ================================================
// 0xda63: WORD 'WDA65' codep=0x1d29 wordp=0xda65
// ================================================
// 0xda65: db 0x3a 0x20 ': '

// ================================================
// 0xda67: WORD '%TALK' codep=0x1d29 wordp=0xda69
// ================================================
// 0xda69: db 0x3a 0x20 ': '

// ================================================
// 0xda6b: WORD '?HAS-SURRENDERED' codep=0x2214 wordp=0xda6d
// ================================================
// 0xda6d: dw 0x0000

// ================================================
// 0xda6f: WORD 'ALIEN-RACE' codep=0x1d29 wordp=0xda71
// ================================================
// 0xda71: db 0x3a 0x20 ': '

// ================================================
// 0xda73: WORD '?CALLED' codep=0x2214 wordp=0xda75
// ================================================
// 0xda75: dw 0x0000

// ================================================
// 0xda77: WORD '?SCANNED' codep=0x2214 wordp=0xda79
// ================================================
// 0xda79: dw 0x0000

// ================================================
// 0xda7b: WORD 'A-CAPT' codep=0x1d29 wordp=0xda7d
// ================================================
// 0xda7d: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 ':  ALLOT        '

// ================================================
// 0xda8d: WORD 'A-SHIP' codep=0x1d29 wordp=0xda8f
// ================================================
// 0xda8f: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x31 0x2f 0x38 0x36 0x20 0x29 0xda ':  ALLOT 1/86 ) '

// ================================================
// 0xda9f: WORD 'P-CAPT' codep=0x1d29 wordp=0xdaa1
// ================================================
// 0xdaa1: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x2b 0xe6 0x84 0xda 0xc4 0x5e 0x53 ':  ALLOT +    ^S'

// ================================================
// 0xdab1: WORD 'P-SHIP' codep=0x1d29 wordp=0xdab3
// ================================================
// 0xdab3: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x49 0x2d 0x4f 0x46 0xc6 0xa0 0x3c ':  ALLOT I-OF  <'

// ================================================
// 0xdac3: WORD 'A-QUES' codep=0x1d29 wordp=0xdac5
// ================================================
// 0xdac5: db 0x56 0x3a 0x20 0x6d 'V: m'

// ================================================
// 0xdac9: WORD 'COMM-OFF-SKILL' codep=0x1d29 wordp=0xdacb
// ================================================
// 0xdacb: db 0x3a 0x20 ': '

// ================================================
// 0xdacd: WORD 'COMM-RACE' codep=0x1d29 wordp=0xdacf
// ================================================
// 0xdacf: db 0x3a 0x20 ': '

// ================================================
// 0xdad1: WORD 'P-STRENGTH' codep=0x2214 wordp=0xdad3
// ================================================
// 0xdad3: dw 0x0000

// ================================================
// 0xdad5: WORD '(LOCK-OUT)' codep=0x1d29 wordp=0xdad7
// ================================================
// 0xdad7: db 0x3a 0x20 ': '

// ================================================
// 0xdad9: WORD 'CTCNT' codep=0x1d29 wordp=0xdadb
// ================================================
// 0xdadb: db 0x3a 0x20 ': '

// ================================================
// 0xdadd: WORD 'OBSEQUIOUS' codep=0x2214 wordp=0xdadf
// ================================================
// 0xdadf: dw 0x0001

// ================================================
// 0xdae1: WORD 'FRIENDLY' codep=0x2214 wordp=0xdae3
// ================================================
// 0xdae3: dw 0x0002

// ================================================
// 0xdae5: WORD 'NEUTRAL' codep=0x2214 wordp=0xdae7
// ================================================
// 0xdae7: dw 0x0004

// ================================================
// 0xdae9: WORD 'HOSTILE' codep=0x2214 wordp=0xdaeb
// ================================================
// 0xdaeb: dw 0x0008

// ================================================
// 0xdaed: WORD 'FIGHT' codep=0x2214 wordp=0xdaef
// ================================================
// 0xdaef: dw 0x0010

// ================================================
// 0xdaf1: WORD 'THEMSELVES' codep=0x2214 wordp=0xdaf3
// ================================================
// 0xdaf3: dw 0x0007

// ================================================
// 0xdaf5: WORD 'OTHER_RACES' codep=0x2214 wordp=0xdaf7
// ================================================
// 0xdaf7: dw 0x0008

// ================================================
// 0xdaf9: WORD 'GEN'L-INFO' codep=0x2214 wordp=0xdafb
// ================================================
// 0xdafb: dw 0x0009

// ================================================
// 0xdafd: WORD 'ANCIENTS' codep=0x2214 wordp=0xdaff
// ================================================
// 0xdaff: dw 0x000b

// ================================================
// 0xdb01: WORD 'OLD-EMPIRE' codep=0x2214 wordp=0xdb03
// ================================================
// 0xdb03: dw 0x000a

// ================================================
// 0xdb05: WORD 'WDB07' codep=0x744d wordp=0xdb07
// ================================================
IFieldType WDB07 = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xdb0a: WORD 'WDB0C' codep=0x224c wordp=0xdb0c params=2 returns=1
// ================================================

void WDB0C() // WDB0C
{
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xdb12: WORD 'ORIGINATOR>C' codep=0x224c wordp=0xdb23 params=0 returns=0
// ================================================
// entry

void ORIGINATOR_gt_C() // ORIGINATOR>C
{
  Push(pp__ro_ORIGINATOR_rc_); // (ORIGINATOR)
  Get_gt_C_plus_S(); // @>C+S
  GetColor(WHITE);
  GetColor(WHITE);
  Push(Read16(0x63ef+TC.offset)&0xFF); // TC<IFIELD> C@
  IsMRC(); // ?MRC
  Push(pp_CTCOLOR); // CTCOLOR
  Store_3(); // !_3
}


// ================================================
// 0xdb37: WORD 'A>ORIGINATOR' codep=0x224c wordp=0xdb48 params=0 returns=0
// ================================================
// entry

void A_gt_ORIGINATOR() // A>ORIGINATOR
{
  Push(pp__ro_AORIGINATOR_rc_); // (AORIGINATOR)
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_ORIGINATOR_rc_); // (ORIGINATOR)
  _1_dot_5_ex_(); // 1.5!
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(pp_POSTURE); // POSTURE
  Store_3(); // !_3
  Push(Read16(pp_A_dash_SUBJECT)); // A-SUBJECT @
  Push(pp_SUBJECT); // SUBJECT
  Store_3(); // !_3
  Push(0xda5d); // '?A-TALKING'
  ON_3(); // ON_3
}


// ================================================
// 0xdb68: WORD 'P>ORIGINATOR' codep=0x224c wordp=0xdb6a params=0 returns=0
// ================================================

void P_gt_ORIGINATOR() // P>ORIGINATOR
{
  Push2Words("*COMM-OFF");
  Push(pp__ro_ORIGINATOR_rc_); // (ORIGINATOR)
  _1_dot_5_ex_(); // 1.5!
  Push(Read16(pp_P_dash_POSTURE)); // P-POSTURE @
  Push(pp_POSTURE); // POSTURE
  Store_3(); // !_3
  Push(Read16(pp_P_dash_SUBJECT)); // P-SUBJECT @
  Push(pp_SUBJECT); // SUBJECT
  Store_3(); // !_3
}


// ================================================
// 0xdb82: WORD 'PHRASE>C' codep=0x224c wordp=0xdb84 params=0 returns=0
// ================================================

void PHRASE_gt_C() // PHRASE>C
{
  Push(pp__ro_PHRASE_rc_); // (PHRASE)
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xdb8a: WORD 'DELTA-NO' codep=0x224c wordp=0xdb8c params=0 returns=1
// ================================================

void DELTA_dash_NO() // DELTA-NO
{
  Push(pp_A_dash_QUES); // A-QUES
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+DEDLN.offset); // DEDLN<IFIELD>
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdb98: WORD 'DELTA-YES' codep=0x224c wordp=0xdb9a params=0 returns=1
// ================================================

void DELTA_dash_YES() // DELTA-YES
{
  Push(pp_A_dash_QUES); // A-QUES
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+DEDLY.offset); // DEDLY<IFIELD>
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdba6: WORD '!A-SUBJECT' codep=0x224c wordp=0xdba8 params=1 returns=0
// ================================================

void StoreA_dash_SUBJECT() // !A-SUBJECT
{
  Push(pp_A_dash_SUBJECT); // A-SUBJECT
  Store_3(); // !_3
}


// ================================================
// 0xdbae: WORD 'P>AFIELD' codep=0x4a4f wordp=0xdbbb
// ================================================

void P_gt_AFIELD() // P>AFIELD
{
  switch(Pop()) // P>AFIELD
  {
  case 2:
    Push(0x63ef+FPE.offset); // IFIELD
    break;
  case 8:
    Push(0x63ef+HPE.offset); // IFIELD
    break;
  default:
    Push(0x63ef+OPE.offset); // IFIELD
    break;

  }
}

// ================================================
// 0xdbc7: WORD 'POSTURE-EFFECT' codep=0x224c wordp=0xdbc9
// ================================================

void POSTURE_dash_EFFECT() // POSTURE-EFFECT
{
  Push(pp__ro_AORIGINATOR_rc_); // (AORIGINATOR)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(pp_P_dash_POSTURE)); // P-POSTURE @
  P_gt_AFIELD(); // P>AFIELD case
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdbd9: WORD '(>BUTTON)' codep=0x224c wordp=0xdbdb
// ================================================

void _ro__gt_BUTTON_rc_() // (>BUTTON)
{
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  NEW_dash_BUT(); // NEW-BUT
}


// ================================================
// 0xdbe9: WORD '>BUTTON' codep=0x224c wordp=0xdbeb
// ================================================

void _gt_BUTTON() // >BUTTON
{
  do
  {
    _ro__gt_BUTTON_rc_(); // (>BUTTON)
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  GetColor(BLUE);
  Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
  DrawON(); // .ON
}


// ================================================
// 0xdbfd: WORD 'CAPT:' codep=0x224c wordp=0xdbff params=0 returns=0
// ================================================

void CAPT_c_() // CAPT:
{
  P_gt_ORIGINATOR(); // P>ORIGINATOR
  GetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_3(); // !_3
}


// ================================================
// 0xdc09: WORD 'OP#' codep=0x3b68 wordp=0xdc0b
// ================================================
// 0xdc0b: dw 0x0014 0x000a

// ================================================
// 0xdc0f: WORD 'FP#' codep=0x3b68 wordp=0xdc11
// ================================================
// 0xdc11: dw 0x000f 0x000a

// ================================================
// 0xdc15: WORD 'NP#' codep=0x3b68 wordp=0xdc17
// ================================================
// 0xdc17: dw 0x000a 0x0005

// ================================================
// 0xdc1b: WORD 'HP#' codep=0x3b68 wordp=0xdc1d
// ================================================
// 0xdc1d: dw 0x0007 0x0004

// ================================================
// 0xdc21: WORD '#PHR' codep=0x4a4f wordp=0xdc2a
// ================================================

void _n_PHR() // #PHR
{
  switch(Pop()) // #PHR
  {
  case 1:
    Push2Words("OP#");
    break;
  case 2:
    Push2Words("FP#");
    break;
  case 4:
    Push2Words("NP#");
    break;
  case 8:
    Push2Words("HP#");
    break;
  default:
    Push2Words("NULL");
    break;

  }
}

// ================================================
// 0xdc3e: WORD 'GET-PHRASE-LIMIT' codep=0x224c wordp=0xdc40
// ================================================

void GET_dash_PHRASE_dash_LIMIT() // GET-PHRASE-LIMIT
{
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  _n_PHR(); // #PHR case
  RRND(); // RRND
  Push(pp__n_A_dash_PHRASES_dash_LIMIT); // #A-PHRASES-LIMIT
  Store_3(); // !_3
}


// ================================================
// 0xdc4e: WORD 'N-POSTURE' codep=0x4a4f wordp=0xdc59
// ================================================

void N_dash_POSTURE() // N-POSTURE
{
  switch(Pop()) // N-POSTURE
  {
  case 0:
    Push(Read16(cc_FRIENDLY)); // FRIENDLY
    break;
  case 1:
    Push(Read16(cc_NEUTRAL)); // NEUTRAL
    break;
  case 2:
    Push(Read16(cc_HOSTILE)); // HOSTILE
    break;
  case 3:
    Push(Read16(cc_FIGHT)); // FIGHT
    break;
  default:
    Push(Read16(cc_OBSEQUIOUS)); // OBSEQUIOUS
    break;

  }
}

// ================================================
// 0xdc6d: WORD 'EDL>POSTURE' codep=0x224c wordp=0xdc6f
// ================================================

void EDL_gt_POSTURE() // EDL>POSTURE
{
  Push(pp__ro_AORIGINATOR_rc_); // (AORIGINATOR)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(pp_EDL)); // EDL @
  Push(Read16(regsp)); // DUP
  Push(Read16(0x63ef+AET.offset)&0xFF); // AET<IFIELD> C@
  _st_(); // <
  Push(!Pop()); //  NOT
  OVER(); // OVER
  Push(Read16(0x63ef+BET.offset)&0xFF); // BET<IFIELD> C@
  _st_(); // <
  Push(!Pop()); //  NOT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(Read16(0x63ef+CET.offset)&0xFF); // CET<IFIELD> C@
  _st_(); // <
  Push(!Pop()); //  NOT
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  ICLOSE(); // ICLOSE
  Push(Read16(pp_WDA65) - Read16(pp_A_dash_STRENGTH)); // WDA65 @ A-STRENGTH @ -
  _2DUP(); // 2DUP
  Push(5);
  _gt_(); // >
  SWAP(); // SWAP
  Push(Pop()==3?1:0); //  3 =
  Push(Pop() & Pop()); // AND
  ROT(); // ROT
  Push(Pop()==2?1:0); //  2 =
  ROT(); // ROT
  Push(0x000f);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(Pop() * 2); //  2*
  Push(Pop() + Pop()); // +
  N_dash_POSTURE(); // N-POSTURE case
  Push(pp_A_dash_POSTU); // A-POSTU
  Store_3(); // !_3
  GET_dash_PHRASE_dash_LIMIT(); // GET-PHRASE-LIMIT
}


// ================================================
// 0xdcd5: WORD 'WDCD7' codep=0x224c wordp=0xdcd7 params=1 returns=1
// ================================================

void WDCD7() // WDCD7
{
  Push(Pop()==(Read16(pp_A_dash_POSTU)&0xFF)?1:0); //  A-POSTU C@ =
}


// ================================================
// 0xdcdf: WORD '+!EDL' codep=0x224c wordp=0xdce9
// ================================================
// entry

void _plus__ex_EDL() // +!EDL
{
  Push(Pop() + Read16(pp_EDL)); //  EDL @ +
  Push(0);
  MAX(); // MAX
  Push(0x0064);
  MIN(); // MIN
  Push(pp_EDL); // EDL
  Store_3(); // !_3
  EDL_gt_POSTURE(); // EDL>POSTURE
  Push(pp_P_dash_SUBJECT); // P-SUBJECT
  OFF(); // OFF
  Push(Read16(pp_ALIEN_dash_RACE)==3?1:0); // ALIEN-RACE @ 3 =
  Push(2);
  WDCD7(); // WDCD7
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(pp__ro_AORIGINATOR_rc_); // (AORIGINATOR)
  Get_gt_C_plus_S(); // @>C+S
  Push(1);
  Push(0x63ef+BASE_dash_EDL.offset); // BASE-EDL<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  Push(1);
  Push(pp_EDL); // EDL
  Store_3(); // !_3
  Push2Words("*HEAVEN");
  _gt_C_plus_S(); // >C+S
  Push(0);
  Push(0x63ef+WDB07.offset); // WDB07<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  Push(pp__ro_ENCOUNTER_rc_); // (ENCOUNTER)
  _1_dot_5_at_(); // 1.5@
  Push2Words("*HEAVEN");
  D_eq_(); // D=
  if (Pop() == 0) return;
  Push(pp_SKIP2NEST); // SKIP2NEST
  ON_3(); // ON_3
}


// ================================================
// 0xdd45: WORD 'SET-OK-TIME' codep=0x224c wordp=0xdd47 params=0 returns=0
// ================================================

void SET_dash_OK_dash_TIME() // SET-OK-TIME
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(Read16(pp_LAST_dash_LEN)); // LAST-LEN @
  Push(0x0037);
  U_star_(); // U*
  OVER(); // OVER
  Push(Pop() * 2); //  2*
  Push(Read16(cc_IsA_dash_TALKING)); // ?A-TALKING
  U_star_(); // U*
  D_plus_(); // D+
  D_plus_(); // D+
  Push(pp_OK_dash_TALK); // OK-TALK
  StoreD(); // D!
}


// ================================================
// 0xdd67: WORD 'SET-TIRED-TIME' codep=0x224c wordp=0xdd69 params=0 returns=0
// ================================================

void SET_dash_TIRED_dash_TIME() // SET-TIRED-TIME
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x4e20); Push(0x0000);
  D_plus_(); // D+
  Push(pp_TIRED_dash_TIME); // TIRED-TIME
  StoreD(); // D!
}


// ================================================
// 0xdd7b: WORD '?LOCKED-OUT' codep=0x224c wordp=0xdd7d params=1 returns=1
// ================================================

void IsLOCKED_dash_OUT() // ?LOCKED-OUT
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(0x000a);
  Push(0x000c);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Push(0);
    Push(0x0065);
    RRND(); // RRND
    Push(0x0014);
    _st_(); // <
    Push(a); // I
    BIT(); // BIT
    Push(Pop() * Pop()); // *
    Push(Pop() | Read16(pp__ro_LOCK_dash_OUT_rc_)); //  (LOCK-OUT) @ OR
    Push(pp__ro_LOCK_dash_OUT_rc_); // (LOCK-OUT)
    Store_3(); // !_3
  }
  Push(a); // R>
  BIT(); // BIT
  Push(((Pop() & Read16(pp__ro_LOCK_dash_OUT_rc_))==0?1:0)==0?1:0); //  (LOCK-OUT) @ AND 0= 0=
}


// ================================================
// 0xddbd: WORD 'FIND-PHRASE' codep=0x224c wordp=0xddbf params=0 returns=1
// ================================================

void FIND_dash_PHRASE() // FIND-PHRASE
{
  Push(0);
  Push(0x0100);
  Push(pp_LEAST_dash_USED); // LEAST-USED
  Store_3(); // !_3
  do
  {
    Push(Read16(0x63ef+FC.offset)&0xFF); // FC<IFIELD> C@
    Push(Read16(pp_LEAST_dash_USED)); // LEAST-USED @
    _st_(); // <
    Push((Read16(0x63ef+LP.offset)&0xFF) & (Read16(pp_POSTURE)&0xFF)); // LP<IFIELD> C@ POSTURE C@ AND
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    Push((Read16(0x63ef+LSC.offset)&0xFF) & Read16(pp_SPACIAL_dash_CONTEXT)); // LSC<IFIELD> C@ SPACIAL-CONTEXT @ AND
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      CI(); // CI
      Push(pp__ro_PHRASE_rc_); // (PHRASE)
      _1_dot_5_ex_(); // 1.5!
      Push(Read16(0x63ef+FC.offset)&0xFF); // FC<IFIELD> C@
      Push(pp_LEAST_dash_USED); // LEAST-USED
      Store_3(); // !_3
      Pop(); // DROP
      Push(1);
    }
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
}


// ================================================
// 0xde0f: WORD '?SPACE<>SUBJ' codep=0x224c wordp=0xde11 params=0 returns=1
// ================================================

void IsSPACE_st__gt_SUBJ() // ?SPACE<>SUBJ
{
  Push(Read16(pp_SUBJECT)); // SUBJECT @
  Push(Read16(regsp)); // DUP
  Push(1);
  Push(2);
  WITHIN(); // WITHIN
  SWAP(); // SWAP
  Push(Pop()==5?1:0); //  5 =
  Push(Pop() | Pop()); // OR
  Push(!Pop()); //  NOT
}


// ================================================
// 0xde29: WORD 'FIND-SUBJECT' codep=0x224c wordp=0xde2b
// ================================================

void FIND_dash_SUBJECT() // FIND-SUBJECT
{
  Push(Read16(pp_SUBJECT)); // SUBJECT @
  Push(0x0033);
  OVER(); // OVER
  IFIND(); // IFIND
  Push(Pop()==0?1:0); //  0=
  SWAP(); // SWAP
  IsLOCKED_dash_OUT(); // ?LOCKED-OUT
  Push(Pop() | Pop()); // OR
  Push(Read16(cc_IsA_dash_TALKING) & (Read16(pp_SPACIAL_dash_CONTEXT)==2?1:0)); // ?A-TALKING SPACIAL-CONTEXT @ 2 = AND
  if (Pop() != 0)
  {
    IsSPACE_st__gt_SUBJ(); // ?SPACE<>SUBJ
    Push(Pop() | Pop()); // OR
  }
  if (Pop() == 0) return;
  IFIRST(); // IFIRST
  Push(0x0033);
  Push(5);
  IFIND(); // IFIND
  Pop(); // DROP
  Push(5);
  Push(pp_SUBJECT); // SUBJECT
  Store_3(); // !_3
}


// ================================================
// 0xde6b: WORD 'PHRASE-SEARCH' codep=0x224c wordp=0xde6d params=0 returns=0
// ================================================

void PHRASE_dash_SEARCH() // PHRASE-SEARCH
{
  Push2Words("NULL");
  Push(pp__ro_PHRASE_rc_); // (PHRASE)
  _1_dot_5_ex_(); // 1.5!
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    FIND_dash_SUBJECT(); // FIND-SUBJECT
    IsCHILD(); // ?CHILD
    if (Pop() != 0)
    {
      IOPEN(); // IOPEN
      FIND_dash_PHRASE(); // FIND-PHRASE
      Push(Pop()==0?1:0); //  0=
      if (Pop() != 0)
      {
        ICLOSE(); // ICLOSE
        Push(5);
        Push(pp_SUBJECT); // SUBJECT
        Store_3(); // !_3
        FIND_dash_SUBJECT(); // FIND-SUBJECT
        IOPEN(); // IOPEN
        FIND_dash_PHRASE(); // FIND-PHRASE
        Pop(); // DROP
      }
      CDROP(); // CDROP
    }
    CDROP(); // CDROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdea7: WORD 'COMM$' codep=0x224c wordp=0xdea9 params=0 returns=0
// ================================================

void COMM_do_() // COMM$
{
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(5);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
}


// ================================================
// 0xdeb9: WORD ']COMM$' codep=0x224c wordp=0xdebb
// ================================================

void _bc_COMM_do_() // ]COMM$
{
  LoadData(_1BTN); // from 'BUTTONS'
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xdec5: WORD '>RESPOND$' codep=0x224c wordp=0xdec7
// ================================================

void _gt_RESPOND_do_() // >RESPOND$
{
  COMM_do_(); // COMM$
  SET_STR_AS_PARAM("RESPOND");
  _bc_COMM_do_(); // ]COMM$
}


// ================================================
// 0xded7: WORD '>HAIL$' codep=0x224c wordp=0xdee2
// ================================================
// entry

void _gt_HAIL_do_() // >HAIL$
{
  COMM_do_(); // COMM$
  SET_STR_AS_PARAM("HAIL   ");
  _bc_COMM_do_(); // ]COMM$
}


// ================================================
// 0xdef2: WORD 'PAD+WORD' codep=0x224c wordp=0xdef4 params=2 returns=0
// ================================================

void PAD_plus_WORD() // PAD+WORD
{
  SWAP(); // SWAP
  PAD(); // PAD
  PAD(); // PAD
  Push(Read16(Pop())&0xFF); //  C@
  Push(Pop() + Pop()); // +
  Push(Pop() + 1); //  1+
  ROT(); // ROT
  Push(Read16(regsp)); // DUP
  PAD(); // PAD
  Push(Read16(Pop())&0xFF); //  C@
  Push(Pop() + Pop()); // +
  PAD(); // PAD
  C_ex_(); // C!
  CMOVE(); // CMOVE
}


// ================================================
// 0xdf12: WORD 'HASH-WORD' codep=0x224c wordp=0xdf14 params=2 returns=1
// ================================================

void HASH_dash_WORD() // HASH-WORD
{
  unsigned short int i, imax;
  Push(0);
  ROT(); // ROT
  ROT(); // ROT
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Pop() + (Read16(i)&0xFF)); //  I C@ +
    Push(1);
    i += Pop();
  } while(i<imax); // (/LOOP)

}


// ================================================
// 0xdf30: WORD 'A-SYLLABLES' codep=0x1d29 wordp=0xdf32
// ================================================
// 0xdf32: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x48 0x45 0x41 0x44 0x3a 0x20 0x44 0x49 0x53 0x4b 0x3e 0x44 0x53 0x50 0x20 0x28 0x20 0x2d 0x2d 0x20 0x5c 0x20 0x6d 0x6f 0x76 0x65 0x20 0x64 0x69 0x73 0x70 0x6c 0x61 0x79 0x20 0x69 0x6d 0x61 0x67 0x65 0x20 0x66 0x72 0x6f 0x6d 0x20 0x73 0x61 0x76 0x65 0x20 0x64 0x69 0x73 0x6b 0x20 0x74 0x6f 0x20 0x29 0x20 0x20 0x20 0x20 0x54 0x3a 0x20 0x28 0x20 0x74 0x65 0x6d 0x70 0x6f 0x72 0x61 0x72 0x79 0x20 0x6c 0x6f 0x63 0x61 0x74 0x69 0x6f 0x6e 0x20 0x69 0x6e 0x20 0x63 0x61 0x63 0x68 0x65 0x29 0x20 ':  ALLOT                                                                                                                      HEAD: DISK>DSP ( -- \ move display image from save disk to )    T: ( temporary location in cache) '

// ================================================
// 0xe012: WORD 'MOVE-SYLLABLES' codep=0x224c wordp=0xe014 params=0 returns=0
// ================================================

void MOVE_dash_SYLLABLES() // MOVE-SYLLABLES
{
  unsigned short int i, imax;
  Push(pp_A_dash_SYLLABLES); // A-SYLLABLES
  Push(0x00e0);
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(0x63ef+VST_dash_PTR.offset); // VST-PTR<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN

  i = 0;
  imax = 0x0020;
  do // (DO)
  {
    Push((0x63ef+PHRASE_do_.offset) + 1); // PHRASE$<IFIELD> 1+
    COUNT(); // COUNT
    HUFF_gt_(); // HUFF>
    Push(pp_LSCAN); // LSCAN
    Push(pp_A_dash_SYLLABLES + i * 7); // A-SYLLABLES I 7 * +
    OVER(); // OVER
    Push((Read16(Pop())&0xFF) + 1); //  C@ 1+
    CMOVE(); // CMOVE
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe058: WORD 'A-SYLL' codep=0x224c wordp=0xe05a params=1 returns=2
// ================================================

void A_dash_SYLL() // A-SYLL
{
  Push(Pop() * 7 + pp_A_dash_SYLLABLES); //  7 * A-SYLLABLES +
  COUNT(); // COUNT
}


// ================================================
// 0xe066: WORD 'A-WORD' codep=0x224c wordp=0xe068 params=2 returns=2
// ================================================

void A_dash_WORD() // A-WORD
{
  unsigned short int a, i, imax;
  PAD(); // PAD
  Push(0x0040);
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  Push(0);
  PAD(); // PAD
  C_ex_(); // C!
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(Read16(0x63ef+MSW.offset)&0xFF); // MSW<IFIELD> C@
  a = Pop(); // >R
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  Push(a); // R>
  MOD(); // MOD

  i = 1;
  imax = Pop() + 2; //  2+
  do // (DO)
  {
    _2DUP(); // 2DUP
    HASH_dash_WORD(); // HASH-WORD
    Push(Pop() * i); //  I *
    Push(0x0020);
    MOD(); // MOD
    A_dash_SYLL(); // A-SYLL
    PAD_plus_WORD(); // PAD+WORD
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
  PAD(); // PAD
  COUNT(); // COUNT
}


// ================================================
// 0xe0ac: WORD 'O>P' codep=0x4a4f wordp=0xe0b4
// ================================================

void O_gt_P() // O>P
{
  switch(Pop()) // O>P
  {
  case 8:
    Push(1);
    break;
  case 7:
    Push(2);
    break;
  case 1:
    Push(3);
    break;
  default:
    Push(-1);
    break;

  }
}

// ================================================
// 0xe0c4: WORD '?SCRAMBLE' codep=0x224c wordp=0xe0c6 params=0 returns=1
// ================================================

void IsSCRAMBLE() // ?SCRAMBLE
{
  Push((Read16(cc_WDA61) & Read16(cc_IsA_dash_TALKING)) & (Read16(pp_CONTEXT_dash_ID_n_)==4?1:0)); // WDA61 ?A-TALKING AND CONTEXT-ID# @ 4 = AND
  Push(3);
  PICK(); // PICK
  Push(3);
  PICK(); // PICK
  Push(Pop() * Pop()); // *
  ABS(); // ABS
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(0x00fa);
  MOD(); // MOD
  Push(Read16(pp_COMM_dash_OFF_dash_SKILL)); // COMM-OFF-SKILL @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe0f6: WORD 'TERMINATE' codep=0x224c wordp=0xe0f8 params=0 returns=0
// ================================================

void TERMINATE() // TERMINATE
{
  Push(pp_TERMINA); // TERMINA
  ON_3(); // ON_3
  Push(pp__pe_TALK); // %TALK
  OFF(); // OFF
  Push(0xafa3); // 'CEX+WAX'
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  Store_3(); // !_3
}


// ================================================
// 0xe10a: WORD 'A>TERMINATE' codep=0x224c wordp=0xe10c params=1 returns=0
// ================================================

void A_gt_TERMINATE() // A>TERMINATE
{
  Pop(); // DROP
  TERMINATE(); // TERMINATE
}


// ================================================
// 0xe112: WORD 'ACTION-CASE' codep=0x4a4f wordp=0xe11c
// ================================================

void ACTION_dash_CASE() // ACTION-CASE
{
  switch(Pop()) // ACTION-CASE
  {
  case 0:
    _plus__ex_EDL(); // +!EDL
    break;
  case 1:
    A_gt_TERMINATE(); // A>TERMINATE
    break;
  default:
    Pop(); // DROP
    break;

  }
}

// ================================================
// 0xe128: WORD 'DO-UA' codep=0x224c wordp=0xe12a params=0 returns=0
// ================================================

void DO_dash_UA() // DO-UA
{
  PHRASE_gt_C(); // PHRASE>C
  Push(0x63ef+UA.offset); // UA<IFIELD>
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
  Push(pp__ro_ORIGINATOR_rc_); // (ORIGINATOR)
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_AORIGINATOR_rc_); // (AORIGINATOR)
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(Pop()==0x007f?1:0); //  0x007f =
    OVER(); // OVER
    Push((Pop()==0xff81?1:0) * 2); //  0xff81 = 2*
    Push(Pop() + Pop()); // +
    ACTION_dash_CASE(); // ACTION-CASE case
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xe15e: WORD '-LEADING' codep=0x224c wordp=0xe160
// ================================================

void _dash_LEADING() // -LEADING
{
  unsigned short int i, imax, a;
  _2DUP(); // 2DUP

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push((Read16(Pop())&0xFF)==Read16(cc_BL)?1:0); //  C@ BL =
    if (Pop() != 0)
    {
      Push(Pop() + 1); //  1+
    } else
    {
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  a = Pop(); // >R
  SWAP(); // SWAP
  Push(Pop() - a); //  I -
  Push(Pop() + Pop()); // +
  Push(a); // R>
  SWAP(); // SWAP
}


// ================================================
// 0xe18e: WORD 'PARSE' codep=0x224c wordp=0xe190
// ================================================

void PARSE() // PARSE
{
  unsigned short int i, imax;
  _dash_LEADING(); // -LEADING
  _2DUP(); // 2DUP
  Push(Pop() + 1); //  1+
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0);
  ROT(); // ROT
  ROT(); // ROT

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(((Read16(i)&0xFF)==Read16(cc_BL)?1:0) | (i + 1==imax?1:0)); // I C@ BL = I 1+ I' = OR
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(i); // I
      Push(3);
      PICK(); // PICK
      _dash_(); // -
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(regsp)); // DUP
  Push(4);
  PICK(); // PICK
  Push(Pop() + Pop()); // +
  Push(Pop() + 1); //  1+
  ROT(); // ROT
  Push(3);
  PICK(); // PICK
  _dash_(); // -
  Push(Pop() - 1); //  1-
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xe1e2: WORD '+1CHAR' codep=0x224c wordp=0xe1e4 params=2 returns=2
// ================================================

void _plus_1CHAR() // +1CHAR
{
  Push(Pop() - 1); //  1-
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
}


// ================================================
// 0xe1ee: WORD 'WE1F0' codep=0x224c wordp=0xe1f0
// ================================================

void WE1F0() // WE1F0
{
  unsigned short int a;
  Push(Read16(pp_IsON_dash_PLA)); // ?ON-PLA @
  a = Pop(); // >R
  Push(a); // I
  if (Pop() != 0)
  {
    GetColor(PINK);
  } else
  {
    GetColor(BLUE);
  }
  StoreCOLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    _2OVER(); // 2OVER
    D_gt_(); // D>
    _i_KEY(); // 'KEY
    Push(Pop()==0x002b?1:0); //  0x002b =
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Push(a); // I
  if (Pop() != 0)
  {
    GetColor(RED);
  } else
  {
    GetColor(DK_dash_BLUE);
  }
  StoreCOLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  Push(Read16(pp_CTCOLOR)); // CTCOLOR @
  StoreCOLOR(); // !COLOR
  Pop(); Pop(); // 2DROP
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xe244: WORD '?WORD-FIT' codep=0x224c wordp=0xe246 params=1 returns=1
// ================================================

void IsWORD_dash_FIT() // ?WORD-FIT
{
  Push(Pop() + Read16(pp_CTX)); //  CTX @ +
  Push(0x0026);
  _st_(); // <
}


// ================================================
// 0xe254: WORD 'CTSCROLL' codep=0x224c wordp=0xe261 params=0 returns=0
// ================================================
// entry

void CTSCROLL() // CTSCROLL
{
  unsigned short int i, imax;
  Push(1);
  Push(pp_CTCNT); // CTCNT
  _plus__ex__2(); // +!_2
  Push(Read16(pp_CTCNT)); // CTCNT @
  Push(7);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0x2ee0); Push(0x0000);
    WE1F0(); // WE1F0
    Push(pp_CTCNT); // CTCNT
    OFF(); // OFF
  }

  i = 0;
  imax = 7;
  do // (DO)
  {
    Push(3);
    Push(Read16(pp_CTTOP) - 1); // CTTOP @ 1-
    Push(0x00a1);
    Push(Read16(pp_CTBOT)); // CTBOT @
    Push(3);
    Push(Read16(pp_CTTOP)); // CTTOP @
    LCOPYBLK(); // LCOPYBLK
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe2a3: WORD 'WORD>CT' codep=0x224c wordp=0xe2a5 params=2 returns=0
// ================================================

void WORD_gt_CT() // WORD>CT
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    IsWORD_dash_FIT(); // ?WORD-FIT
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      CTSCROLL(); // CTSCROLL
      Push(0);
      Push(6);
      CTPOS_dot_(); // CTPOS.
    }
    OVER(); // OVER
    Push(!(((Read16(Pop())&0xFF)==0x002e?1:0) | (Read16(pp_CTX)==0?1:0))); //  C@ 0x002e = CTX @ 0= OR NOT
    if (Pop() != 0)
    {
      SPACE(); // SPACE
    }
    Push(Read16(regsp)); // DUP
    Push(pp_CTX); // CTX
    _plus__ex__2(); // +!_2
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xe2e7: WORD 'ANAME' codep=0x224c wordp=0xe2e9 params=0 returns=2
// ================================================

void ANAME() // ANAME
{
  Push(pp_A_dash_CAPT + 1); // A-CAPT 1+
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() - 1)&0xFF); //  1- C@
}


// ================================================
// 0xe2f5: WORD 'ASHIP' codep=0x224c wordp=0xe2f7 params=0 returns=2
// ================================================

void ASHIP() // ASHIP
{
  Push(pp_A_dash_SHIP + 1); // A-SHIP 1+
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() - 1)&0xFF); //  1- C@
}


// ================================================
// 0xe303: WORD 'CNAME' codep=0x224c wordp=0xe305 params=0 returns=2
// ================================================

void CNAME() // CNAME
{
  Push(pp_P_dash_CAPT + 1); // P-CAPT 1+
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() - 1)&0xFF); //  1- C@
}


// ================================================
// 0xe311: WORD 'SNAME' codep=0x224c wordp=0xe313 params=0 returns=2
// ================================================

void SNAME() // SNAME
{
  SET_STR_AS_PARAM("ISS");
  WORD_gt_CT(); // WORD>CT
  Push(pp_P_dash_SHIP + 1); // P-SHIP 1+
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() - 1)&0xFF); //  1- C@
}


// ================================================
// 0xe327: WORD '>ENDOPTION' codep=0x224c wordp=0xe329 params=2 returns=2
// ================================================

void _gt_ENDOPTION() // >ENDOPTION
{
  while(1)
  {
    OVER(); // OVER
    Push(!((Read16(Pop())&0xFF)==0x0029?1:0)); //  C@ 0x0029 = NOT
    OVER(); // OVER
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) break;

    _plus_1CHAR(); // +1CHAR
  }
  _plus_1CHAR(); // +1CHAR
}


// ================================================
// 0xe349: WORD 'OPTION$' codep=0x224c wordp=0xe34b params=2 returns=3
// ================================================

void OPTION_do_() // OPTION$
{
  _plus_1CHAR(); // +1CHAR
  Push(Read16(pp_P_dash_QUES)==9?1:0); // P-QUES @ 9 =
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    _gt_ENDOPTION(); // >ENDOPTION
    Push2Words("NULL");
  }
  Push(0);
}


// ================================================
// 0xe363: WORD 'YOU$' codep=0x224c wordp=0xe365 params=0 returns=2
// ================================================

void YOU_do_() // YOU$
{
  SET_STR_AS_PARAM("YOUR");
  WORD_gt_CT(); // WORD>CT
  SET_STR_AS_PARAM("RACE");
}


// ================================================
// 0xe377: WORD 'OTHER$' codep=0x224c wordp=0xe379 params=0 returns=2
// ================================================

void OTHER_do_() // OTHER$
{
  SET_STR_AS_PARAM("OTHER");
  WORD_gt_CT(); // WORD>CT
  SET_STR_AS_PARAM("RACES");
}


// ================================================
// 0xe38d: WORD 'OEMP' codep=0x224c wordp=0xe38f params=0 returns=2
// ================================================

void OEMP() // OEMP
{
  SET_STR_AS_PARAM("THE");
  WORD_gt_CT(); // WORD>CT
  SET_STR_AS_PARAM("OLD");
  WORD_gt_CT(); // WORD>CT
  SET_STR_AS_PARAM("EMPIRE");
}


// ================================================
// 0xe3aa: WORD 'ANC$' codep=0x224c wordp=0xe3ac params=0 returns=2
// ================================================

void ANC_do_() // ANC$
{
  SET_STR_AS_PARAM("THE");
  WORD_gt_CT(); // WORD>CT
  SET_STR_AS_PARAM("ANCIENTS");
}


// ================================================
// 0xe3c1: WORD 'NO$' codep=0x224c wordp=0xe3c3 params=2 returns=3
// ================================================

void NO_do_() // NO$
{
  _plus_1CHAR(); // +1CHAR
  Push(0);
}


// ================================================
// 0xe3c9: WORD '(?SUBJECT)' codep=0x4a4f wordp=0xe3d0
// ================================================

void _ro__ask_SUBJECT_rc_() // (?SUBJECT)
{
  switch(Pop()) // (?SUBJECT)
  {
  case 7:
    YOU_do_(); // YOU$
    break;
  case 8:
    OTHER_do_(); // OTHER$
    break;
  case 10:
    OEMP(); // OEMP
    break;
  case 11:
    ANC_do_(); // ANC$
    break;
  default:
    NO_do_(); // NO$
    break;

  }
}

// ================================================
// 0xe3e4: WORD '?SUBJECT' codep=0x224c wordp=0xe3e6
// ================================================

void IsSUBJECT() // ?SUBJECT
{
  Push(Read16(pp_P_dash_QUES)); // P-QUES @
  _ro__ask_SUBJECT_rc_(); // (?SUBJECT) case
}


// ================================================
// 0xe3ee: WORD 'SPECIAL-CASE' codep=0x4a4f wordp=0xe3f6
// ================================================

void SPECIAL_dash_CASE() // SPECIAL-CASE
{
  switch(Pop()) // SPECIAL-CASE
  {
  case 42:
    CNAME(); // CNAME
    break;
  case 38:
    SNAME(); // SNAME
    break;
  case 37:
    ANAME(); // ANAME
    break;
  case 47:
    IsSUBJECT(); // ?SUBJECT
    break;
  case 40:
    OPTION_do_(); // OPTION$
    break;
  case 41:
    NO_do_(); // NO$
    break;
  case 43:
    ASHIP(); // ASHIP
    break;
  case 35:
    NO_do_(); // NO$
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xe41a: WORD 'SPECIAL' codep=0x224c wordp=0xe41c
// ================================================

void SPECIAL() // SPECIAL
{
  OVER(); // OVER
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
  _0_gt_(); // 0>
  Push(Pop() * Pop()); // *
  SPECIAL_dash_CASE(); // SPECIAL-CASE case
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  WORD_gt_CT(); // WORD>CT
  _plus_1CHAR(); // +1CHAR
}


// ================================================
// 0xe436: WORD '(PHRASE>CT)' codep=0x224c wordp=0xe446
// ================================================
// entry

void _ro_PHRASE_gt_CT_rc_() // (PHRASE>CT)
{
  Push(Read16(regsp)); // DUP
  Push(pp_LAST_dash_LEN); // LAST-LEN
  Store_3(); // !_3
  CTINIT(); // CTINIT
  Push(0);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  Push(Read16(pp_CTCOLOR)); // CTCOLOR @
  StoreCOLOR(); // !COLOR
  Push(pp_CTCNT); // CTCNT
  OFF(); // OFF
  CTSCROLL(); // CTSCROLL
  do
  {
    PARSE(); // PARSE
    SPECIAL(); // SPECIAL
    IsSCRAMBLE(); // ?SCRAMBLE
    if (Pop() != 0)
    {
      A_dash_WORD(); // A-WORD
    }
    WORD_gt_CT(); // WORD>CT
    Push(1);
    Push(pp_CTX); // CTX
    _plus__ex__2(); // +!_2
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe480: WORD 'PHRASE>CT' codep=0x224c wordp=0xe482 params=0 returns=0
// ================================================

void PHRASE_gt_CT() // PHRASE>CT
{
  Push(pp__ro_PHRASE_rc_); // (PHRASE)
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  DO_dash_UA(); // DO-UA
  PHRASE_gt_C(); // PHRASE>C
  Push((Read16(0x63ef+FC.offset)&0xFF) + 1); // FC<IFIELD> C@ 1+
  Push(0x63ef+FC.offset); // FC<IFIELD>
  C_ex_(); // C!
  IOPEN(); // IOPEN
  Push((0x63ef+PHRASE_do_.offset) + 1); // PHRASE$<IFIELD> 1+
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe4b0: WORD '?COMM-BTNS' codep=0x1d29 wordp=0xe4b2
// ================================================
// 0xe4b2: db 0x00 0x00 '  '

// ================================================
// 0xe4b4: WORD '!A-SUBJECT+' codep=0x224c wordp=0xe4b6 params=0 returns=1
// ================================================

void StoreA_dash_SUBJECT_plus_() // !A-SUBJECT+
{
  CTINIT(); // CTINIT
  Push(0x0eca); Push(0x0002); // 'RECEIVING:'
  WD93B(); // WD93B
  DrawTTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
  StoreA_dash_SUBJECT(); // !A-SUBJECT
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  PHRASE_dash_SEARCH(); // PHRASE-SEARCH
  PHRASE_gt_CT(); // PHRASE>CT
}


// ================================================
// 0xe4d2: WORD '+5>EDL' codep=0x224c wordp=0xe4d4
// ================================================

void _plus_5_gt_EDL() // +5>EDL
{
  Push(5);
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe4da: WORD 'WE4DC' codep=0x224c wordp=0xe4dc
// ================================================

void WE4DC() // WE4DC
{
  Push(0xfffb);
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe4e4: WORD 'WE4E6' codep=0x224c wordp=0xe4e6
// ================================================

void WE4E6() // WE4E6
{
  Push(0x000a);
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe4ee: WORD 'WE4F0' codep=0x224c wordp=0xe4f0
// ================================================

void WE4F0() // WE4F0
{
  Push(0xfff6);
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe4f8: WORD '+4/9>EDL' codep=0x224c wordp=0xe4fa
// ================================================

void _plus_4_slash_9_gt_EDL() // +4/9>EDL
{
  Push(Read16(pp__n_A_dash_HAILS)); // #A-HAILS @
  Push(Read16(regsp)); // DUP
  Push(2);
  Push(4);
  WITHIN(); // WITHIN
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(Pop() * Pop()); // *
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe512: WORD 'WE514' codep=0x224c wordp=0xe514
// ================================================

void WE514() // WE514
{
  Push(0x0064);
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe51c: WORD 'YES>EDL' codep=0x224c wordp=0xe51e
// ================================================

void YES_gt_EDL() // YES>EDL
{
  DELTA_dash_YES(); // DELTA-YES
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe524: WORD 'NO-EDL' codep=0x224c wordp=0xe526
// ================================================

void NO_dash_EDL() // NO-EDL
{
  DELTA_dash_NO(); // DELTA-NO
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe52c: WORD 'NEW-POSTURE>EDL' codep=0x224c wordp=0xe52e
// ================================================

void NEW_dash_POSTURE_gt_EDL() // NEW-POSTURE>EDL
{
  POSTURE_dash_EFFECT(); // POSTURE-EFFECT
  _plus__ex_EDL(); // +!EDL
  Push(pp_P_dash_POSTURES); // P-POSTURES
  Push(Read16(pp_P_dash_POSTURE)); // P-POSTURE @
  OVER(); // OVER
  Push(Read16(Pop())); //  @
  Push(Pop() | Pop()); // OR
  SWAP(); // SWAP
  Store_3(); // !_3
}


// ================================================
// 0xe544: WORD 'RESPOND>EDL' codep=0x224c wordp=0xe546
// ================================================

void RESPOND_gt_EDL() // RESPOND>EDL
{
  POSTURE_dash_EFFECT(); // POSTURE-EFFECT
  _plus__ex_EDL(); // +!EDL
  Push(0xda0f); // '?P-RESPOND'
  OFF(); // OFF
}


// ================================================
// 0xe552: WORD 'STATEMENT-EDL' codep=0x224c wordp=0xe554
// ================================================

void STATEMENT_dash_EDL() // STATEMENT-EDL
{
  POSTURE_dash_EFFECT(); // POSTURE-EFFECT
  Push(Read16(pp_P_dash_PHRASES)&0xFF); // P-PHRASES C@
  _slash_(); // /
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe560: WORD 'WE562' codep=0x224c wordp=0xe562 params=0 returns=0
// ================================================

void WE562() // WE562
{
  Push(Read16(cc_P_dash_STRENGTH)); // P-STRENGTH
  if (Pop() == 0) return;
  POSTURE_dash_EFFECT(); // POSTURE-EFFECT
  Push(Read16(pp_P_dash_PHRASES)&0xFF); // P-PHRASES C@
  _slash_(); // /
  Push(Pop() >> 1); //  2/
  _plus__ex_EDL(); // +!EDL
  Push(0xdad3); // 'P-STRENGTH'
  OFF(); // OFF
}


// ================================================
// 0xe57c: WORD '@T%' codep=0x224c wordp=0xe57e params=0 returns=1
// ================================================

void GetT_pe_() // @T%
{
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(Read16(0x63ef+T_pe_.offset)&0xFF); // T%<IFIELD> C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe58a: WORD '#!%TALK' codep=0x224c wordp=0xe58c params=2 returns=0
// ================================================

void _n__ex__pe_TALK() // #!%TALK
{
  GetT_pe_(); // @T%
  SWAP(); // SWAP
  _star__slash_(); // */
  Push(0x0064);
  MIN(); // MIN
  Push(pp__pe_TALK); // %TALK
  Store_3(); // !_3
}


// ================================================
// 0xe59e: WORD '!%TALK' codep=0x224c wordp=0xe5a0 params=1 returns=0
// ================================================

void Store_pe_TALK() // !%TALK
{
  Push(pp__pe_TALK); // %TALK
  Store_3(); // !_3
}


// ================================================
// 0xe5a6: WORD '1.5*T%' codep=0x224c wordp=0xe5a8 params=0 returns=0
// ================================================

void _1_dot_5_star_T_pe_() // 1.5*T%
{
  Push(3);
  Push(2);
  _n__ex__pe_TALK(); // #!%TALK
}


// ================================================
// 0xe5b0: WORD '2*T%' codep=0x224c wordp=0xe5b2 params=0 returns=0
// ================================================

void _2_star_T_pe_() // 2*T%
{
  Push(2);
  Push(1);
  _n__ex__pe_TALK(); // #!%TALK
}


// ================================================
// 0xe5ba: WORD '2.5>T%' codep=0x224c wordp=0xe5bc params=0 returns=0
// ================================================

void _2_dot_5_gt_T_pe_() // 2.5>T%
{
  Push(5);
  Push(2);
  _n__ex__pe_TALK(); // #!%TALK
}


// ================================================
// 0xe5c4: WORD '1*T%' codep=0x224c wordp=0xe5c6 params=0 returns=0
// ================================================

void _1_star_T_pe_() // 1*T%
{
  Push(1);
  Push(1);
  _n__ex__pe_TALK(); // #!%TALK
}


// ================================================
// 0xe5ce: WORD '0.5*T%' codep=0x224c wordp=0xe5d0 params=0 returns=0
// ================================================

void _0_dot_5_star_T_pe_() // 0.5*T%
{
  Push(1);
  Push(2);
  _n__ex__pe_TALK(); // #!%TALK
}


// ================================================
// 0xe5d8: WORD '70>T%' codep=0x224c wordp=0xe5da params=0 returns=0
// ================================================

void _70_gt_T_pe_() // 70>T%
{
  Push(0x0046);
  Store_pe_TALK(); // !%TALK
}


// ================================================
// 0xe5e2: WORD '100>T%' codep=0x224c wordp=0xe5e4 params=0 returns=0
// ================================================

void _100_gt_T_pe_() // 100>T%
{
  Push(0x0064);
  Store_pe_TALK(); // !%TALK
}


// ================================================
// 0xe5ec: WORD '0>T%' codep=0x224c wordp=0xe5ee params=0 returns=0
// ================================================

void _0_gt_T_pe_() // 0>T%
{
  Push(pp__pe_TALK); // %TALK
  OFF(); // OFF
}


// ================================================
// 0xe5f4: WORD 'CAPT:' codep=0x224c wordp=0xe5f6 params=0 returns=0
// ================================================

void CAPT_c_() // CAPT:
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("CAPTAIN,");
  DrawTTY(); // .TTY
}


// ================================================
// 0xe607: WORD 'WE609' codep=0x224c wordp=0xe609 params=0 returns=0
// ================================================

void WE609() // WE609
{
  SET_STR_AS_PARAM("THEY'VE ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xe618: WORD 'RAISE-SHIELDS' codep=0x224c wordp=0xe61a params=0 returns=0
// ================================================

void RAISE_dash_SHIELDS() // RAISE-SHIELDS
{
  Push(0x50a6); // '?A-SHIELDS-UP'
  ON_3(); // ON_3
  CAPT_c_(); // CAPT:
  WE609(); // WE609
  Push(0x0ee1); Push(0x0002); // 'RAISED THEIR SHIELDS.'
  WD93B(); // WD93B
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe630: WORD 'LOWER-SHIELDS' codep=0x224c wordp=0xe632 params=0 returns=0
// ================================================

void LOWER_dash_SHIELDS() // LOWER-SHIELDS
{
  Push(0x50a6); // '?A-SHIELDS-UP'
  OFF(); // OFF
  CAPT_c_(); // CAPT:
  WE609(); // WE609
  Push(0x0f03); Push(0x0002); // 'LOWERED THEIR SHIELDS.'
  WD93B(); // WD93B
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe648: WORD 'ARM-WEAPONS' codep=0x224c wordp=0xe64a params=0 returns=0
// ================================================

void ARM_dash_WEAPONS() // ARM-WEAPONS
{
  Push(0x50b4); // '?A-WEAP'
  ON_3(); // ON_3
  CAPT_c_(); // CAPT:
  WE609(); // WE609
  Push(0x0f26); Push(0x0002); // 'ARMED THEIR WEAPONS.'
  WD93B(); // WD93B
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe660: WORD 'DISARM-WEAPONS' codep=0x224c wordp=0xe662 params=0 returns=0
// ================================================

void DISARM_dash_WEAPONS() // DISARM-WEAPONS
{
  Push(0x50b4); // '?A-WEAP'
  OFF(); // OFF
  CAPT_c_(); // CAPT:
  WE609(); // WE609
  Push(0x0f47); Push(0x0002); // 'DIS-ARMED THEIR WEAPONS.'
  WD93B(); // WD93B
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe678: WORD 'CALL-FOR-SHIPS' codep=0x224c wordp=0xe67a params=0 returns=0
// ================================================

void CALL_dash_FOR_dash_SHIPS() // CALL-FOR-SHIPS
{
  Push(0xda75); // '?CALLED'
  ON_3(); // ON_3
  CAPT_c_(); // CAPT:
  Push(0x0f6c); Push(0x0002); // 'I'M PICKING UP AN ALIEN DISTRESS CALL.'
  WD93B(); // WD93B
  DrawTTY(); // .TTY
}


// ================================================
// 0xe68e: WORD 'SHIPS-ARRIVE' codep=0x224c wordp=0xe690 params=0 returns=0
// ================================================

void SHIPS_dash_ARRIVE() // SHIPS-ARRIVE
{
  Push(Read16(pp__i__plus_VESS)); // '+VESS @
  MODULE(); // MODULE
  Push(0xda75); // '?CALLED'
  OFF(); // OFF
  CAPT_c_(); // CAPT:
  Push(0x0f9f); Push(0x0002); // 'MORE ALIEN SHIPS HAVE WARPED IN.'
  WD93B(); // WD93B
  DrawTTY(); // .TTY
}


// ================================================
// 0xe6aa: WORD 'SCAN-PLAYER' codep=0x224c wordp=0xe6ac params=0 returns=0
// ================================================

void SCAN_dash_PLAYER() // SCAN-PLAYER
{
  Push(0xda79); // '?SCANNED'
  ON_3(); // ON_3
  CAPT_c_(); // CAPT:
  Push(0x0fcc); Push(0x0002); // 'WE'RE BEING SCANNED.'
  WD93B(); // WD93B
  DrawTTY(); // .TTY
}


// ================================================
// 0xe6c0: WORD 'HAIL' codep=0x224c wordp=0xe6c2
// ================================================

void HAIL() // HAIL
{
  Push(pp_TERMINA); // TERMINA
  OFF(); // OFF
  CTERASE(); // CTERASE
  Push(1);
  StoreA_dash_SUBJECT_plus_(); // !A-SUBJECT+
  Push(1);
  Push(pp__n_A_dash_HAILS); // #A-HAILS
  _plus__ex__2(); // +!_2
  SET_dash_TIRED_dash_TIME(); // SET-TIRED-TIME
  SET_dash_OK_dash_TIME(); // SET-OK-TIME
  Push(2);
  Push(pp_HAILER); // HAILER
  Store_3(); // !_3
  _gt_RESPOND_do_(); // >RESPOND$
  Push(Read16(pp_IsCOMM_dash_BTNS)); // ?COMM-BTNS @
  if (Pop() != 0)
  {
    Push(5);
    Push(0);
    DrawABTN(); // .ABTN
  }
  _plus_4_slash_9_gt_EDL(); // +4/9>EDL
}


// ================================================
// 0xe6f0: WORD 'RESPOND' codep=0x224c wordp=0xe6f2 params=0 returns=2
// ================================================

void RESPOND() // RESPOND
{
  Push(pp_TERMINA); // TERMINA
  OFF(); // OFF
  Push(2);
  StoreA_dash_SUBJECT_plus_(); // !A-SUBJECT+
  Push(1);
  Push(pp__n_A_dash_PHRASES); // #A-PHRASES
  _plus__ex__2(); // +!_2
  SET_dash_OK_dash_TIME(); // SET-OK-TIME
}


// ================================================
// 0xe704: WORD 'ANSWER' codep=0x224c wordp=0xe706 params=0 returns=2
// ================================================

void ANSWER() // ANSWER
{
  Push(Read16(pp_P_dash_QUES)); // P-QUES @
  StoreA_dash_SUBJECT_plus_(); // !A-SUBJECT+
  Push(1);
  Push(pp__n_A_dash_PHRASES); // #A-PHRASES
  _plus__ex__2(); // +!_2
  SET_dash_OK_dash_TIME(); // SET-OK-TIME
  Push(pp_P_dash_QUES); // P-QUES
  OFF(); // OFF
}


// ================================================
// 0xe71a: WORD 'STATEMENT' codep=0x224c wordp=0xe71c params=0 returns=2
// ================================================

void STATEMENT() // STATEMENT
{
  Push(0x000d);
  StoreA_dash_SUBJECT_plus_(); // !A-SUBJECT+
  Push(1);
  Push(pp__n_A_dash_PHRASES); // #A-PHRASES
  _plus__ex__2(); // +!_2
  SET_dash_OK_dash_TIME(); // SET-OK-TIME
}


// ================================================
// 0xe72c: WORD 'QUESTION' codep=0x224c wordp=0xe72e
// ================================================

void QUESTION() // QUESTION
{
  Push(0x000e);
  StoreA_dash_SUBJECT_plus_(); // !A-SUBJECT+
  Push(pp__ro_PHRASE_rc_); // (PHRASE)
  _1_dot_5_at_(); // 1.5@
  Push(pp_A_dash_QUES); // A-QUES
  _1_dot_5_ex_(); // 1.5!
  Push(1);
  Push(pp__n_A_dash_PHRASES); // #A-PHRASES
  _plus__ex__2(); // +!_2
  SET_dash_TIRED_dash_TIME(); // SET-TIRED-TIME
  SET_dash_OK_dash_TIME(); // SET-OK-TIME
  Push(0xda55); // '?WAITING-FOR-ANSWER'
  ON_3(); // ON_3
  Push(0x000a);
  DrawBTN_dash_TEXT(); // .BTN-TEXT
  INIT_dash_BUTTON(); // INIT-BUTTON
  Push(1);
  Push(pp__n_A_dash_HAILS); // #A-HAILS
  Store_3(); // !_3
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xe760: WORD 'TIRED-OF-WAITING' codep=0x224c wordp=0xe762 params=0 returns=2
// ================================================

void TIRED_dash_OF_dash_WAITING() // TIRED-OF-WAITING
{
  Push(6);
  StoreA_dash_SUBJECT_plus_(); // !A-SUBJECT+
  SET_dash_TIRED_dash_TIME(); // SET-TIRED-TIME
  SET_dash_OK_dash_TIME(); // SET-OK-TIME
  Push(1);
  Push(pp__n_A_dash_HAILS); // #A-HAILS
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe772: WORD 'TIRED-OF-TALKING' codep=0x224c wordp=0xe774 params=0 returns=2
// ================================================

void TIRED_dash_OF_dash_TALKING() // TIRED-OF-TALKING
{
  Push(0x000f);
  StoreA_dash_SUBJECT_plus_(); // !A-SUBJECT+
  TERMINATE(); // TERMINATE
}


// ================================================
// 0xe77e: WORD 'WE780' codep=0x224c wordp=0xe780 params=0 returns=0
// ================================================

void WE780() // WE780
{
  Push(0xda6d); // '?HAS-SURRENDERED'
  ON_3(); // ON_3
  Push(pp_TERMINA); // TERMINA
  OFF(); // OFF
}


// ================================================
// 0xe78c: WORD '(?RACE)' codep=0x4a4f wordp=0xe798
// ================================================

void _ro__ask_RACE_rc_() // (?RACE)
{
  switch(Pop()) // (?RACE)
  {
  case 1:
    Push(1);
    break;
  case 2:
    Push(1);
    break;
  case 3:
    Push(1);
    break;
  case 6:
    Push(1);
    break;
  case 7:
    Push(1);
    break;
  case 8:
    Push(1);
    break;
  case 9:
    Push(1);
    break;
  case 21:
    Push(1);
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xe7bc: WORD 'WE7BE' codep=0x224c wordp=0xe7be
// ================================================

void WE7BE() // WE7BE
{
  Push(Read16(pp_ALIEN_dash_RACE)); // ALIEN-RACE @
  _ro__ask_RACE_rc_(); // (?RACE) case
}


// ================================================
// 0xe7c6: WORD '?OBSEQUIOUS' codep=0x224c wordp=0xe7c8 params=0 returns=1
// ================================================

void IsOBSEQUIOUS() // ?OBSEQUIOUS
{
  Push(1);
  WDCD7(); // WDCD7
}


// ================================================
// 0xe7ce: WORD '?FRIENDLY' codep=0x224c wordp=0xe7d0 params=0 returns=1
// ================================================

void IsFRIENDLY() // ?FRIENDLY
{
  Push(2);
  WDCD7(); // WDCD7
}


// ================================================
// 0xe7d6: WORD '?NEUTRAL' codep=0x224c wordp=0xe7d8 params=0 returns=1
// ================================================

void IsNEUTRAL() // ?NEUTRAL
{
  Push(4);
  WDCD7(); // WDCD7
}


// ================================================
// 0xe7de: WORD '?HOSTILE' codep=0x224c wordp=0xe7e0 params=0 returns=1
// ================================================

void IsHOSTILE() // ?HOSTILE
{
  Push(8);
  WDCD7(); // WDCD7
}


// ================================================
// 0xe7e6: WORD '?FIGHT' codep=0x224c wordp=0xe7e8 params=0 returns=1
// ================================================

void IsFIGHT() // ?FIGHT
{
  Push(0x0010);
  WDCD7(); // WDCD7
}


// ================================================
// 0xe7f0: WORD 'TALKATIVENESS' codep=0x224c wordp=0xe7f2 params=0 returns=1
// ================================================

void TALKATIVENESS() // TALKATIVENESS
{
  Push(!(Read16(pp__pe_TALK)==0?1:0)); // %TALK @ 0= NOT
}


// ================================================
// 0xe7fc: WORD '?TIRED-OF-TALKING' codep=0x224c wordp=0xe7fe params=0 returns=1
// ================================================

void IsTIRED_dash_OF_dash_TALKING() // ?TIRED-OF-TALKING
{
  Push(Read16(pp__n_A_dash_PHRASES)); // #A-PHRASES @
  Push(Read16(pp__n_A_dash_PHRASES_dash_LIMIT)); // #A-PHRASES-LIMIT @
  _st_(); // <
  Push(!Pop()); //  NOT
}


// ================================================
// 0xe80c: WORD 'WE80E' codep=0x224c wordp=0xe80e params=0 returns=1
// ================================================

void WE80E() // WE80E
{
  Push(0);
  Push(0x05dc);
  RRND(); // RRND
  Push((Pop()==0?1:0) | (Read16(pp_SPACIAL_dash_CONTEXT)==2?1:0)); //  0= SPACIAL-CONTEXT @ 2 = OR
  Push(Read16(pp__n_VESS)); // #VESS @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(Read16(pp_AVCNT)); // AVCNT @
  Push(0x0014);
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe838: WORD 'WE83A' codep=0x224c wordp=0xe83a params=0 returns=1
// ================================================

void WE83A() // WE83A
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  Push(Read16(pp__n_VESS)); // #VESS @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe84e: WORD 'WE850' codep=0x224c wordp=0xe850 params=0 returns=2
// ================================================

void WE850() // WE850
{
  Push(0);
  Push(0x0032);
  Push(Read16(pp__n_VESS) * 2 + 1); // #VESS @ 2* 1+
  _slash_(); // /
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
}


// ================================================
// 0xe866: WORD '?OK-TO-TALK' codep=0x224c wordp=0xe868 params=0 returns=1
// ================================================

void IsOK_dash_TO_dash_TALK() // ?OK-TO-TALK
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(Read16(pp__pe_TALK)); // %TALK @
  _st_(); // <
  Push(0);
  Push(4);
  RRND(); // RRND
  WDB0C(); // WDB0C
  Push(pp__ro_AORIGINATOR_rc_); // (AORIGINATOR)
  Get_gt_C_plus_S(); // @>C+S
  IsCHILD(); // ?CHILD
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
  IsOBSEQUIOUS(); // ?OBSEQUIOUS
  Push(Pop() | Pop()); // OR
  Push(Read16(pp__n_VESS)); // #VESS @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  Push(0x0032); Push(0x0000);
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_OK_dash_TALK); // OK-TALK
  _2_at_(); // 2@
  DMAX(); // DMAX
  Push(pp_OK_dash_TALK); // OK-TALK
  StoreD(); // D!
}


// ================================================
// 0xe8b4: WORD '?REPEAT' codep=0x224c wordp=0xe8b6 params=0 returns=1
// ================================================

void IsREPEAT() // ?REPEAT
{
  Push(Read16(pp__n_A_dash_HAILS)); // #A-HAILS @
  Push(3);
  _st_(); // <
}


// ================================================
// 0xe8c0: WORD 'WE8C2' codep=0x224c wordp=0xe8c2 params=0 returns=1
// ================================================

void WE8C2() // WE8C2
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+WD9CA.offset)); // WD9CA<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8ce: WORD 'WE8D0' codep=0x224c wordp=0xe8d0 params=1 returns=0
// ================================================

void WE8D0() // WE8D0
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WD9CA.offset); // WD9CA<IFIELD>
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8dc: WORD '?SHIELDS-UP' codep=0x224c wordp=0xe8de params=0 returns=1
// ================================================

void IsSHIELDS_dash_UP() // ?SHIELDS-UP
{
  WE8C2(); // WE8C2
  Push(Pop() & 8); //  8 AND
  _0_gt_(); // 0>
}


// ================================================
// 0xe8e8: WORD '?SHIELDS-FLAG' codep=0x224c wordp=0xe8ea params=0 returns=1
// ================================================

void IsSHIELDS_dash_FLAG() // ?SHIELDS-FLAG
{
  WE8C2(); // WE8C2
  Push(Read16(regsp)); // DUP
  Push(!((Pop() & 0x0010)==0?1:0)); //  0x0010 AND 0= NOT
  SWAP(); // SWAP
  Push(Pop() & 0xffef); //  0xffef AND
  WE8D0(); // WE8D0
}


// ================================================
// 0xe904: WORD '?WEAPON-ARMED' codep=0x224c wordp=0xe906 params=0 returns=1
// ================================================

void IsWEAPON_dash_ARMED() // ?WEAPON-ARMED
{
  WE8C2(); // WE8C2
  Push(Pop() & 3); //  3 AND
  _0_gt_(); // 0>
}


// ================================================
// 0xe910: WORD '?WEAPON-FLAG' codep=0x224c wordp=0xe912 params=0 returns=1
// ================================================

void IsWEAPON_dash_FLAG() // ?WEAPON-FLAG
{
  WE8C2(); // WE8C2
  Push(Read16(regsp)); // DUP
  Push(!((Pop() & 0x0020)==0?1:0)); //  0x0020 AND 0= NOT
  SWAP(); // SWAP
  Push(Pop() & 0xffdf); //  0xffdf AND
  WE8D0(); // WE8D0
}


// ================================================
// 0xe92c: WORD '?P-HAILED' codep=0x224c wordp=0xe92e params=0 returns=1
// ================================================

void IsP_dash_HAILED() // ?P-HAILED
{
  Push(Read16(pp_HAILER)==1?1:0); // HAILER @ 1 =
}


// ================================================
// 0xe938: WORD '?A-HAILED' codep=0x224c wordp=0xe93a params=0 returns=1
// ================================================

void IsA_dash_HAILED() // ?A-HAILED
{
  Push(Read16(pp_HAILER)==2?1:0); // HAILER @ 2 =
}


// ================================================
// 0xe944: WORD '?TIRED-OF-WAITING' codep=0x224c wordp=0xe946 params=0 returns=1
// ================================================

void IsTIRED_dash_OF_dash_WAITING() // ?TIRED-OF-WAITING
{
  Push(pp_TIRED_dash_TIME); // TIRED-TIME
  _2_at_(); // 2@
  TIME(); // TIME
  _2_at_(); // 2@
  D_st_(); // D<
}


// ================================================
// 0xe952: WORD '?WANT-TO-TALK' codep=0x224c wordp=0xe954 params=0 returns=1
// ================================================

void IsWANT_dash_TO_dash_TALK() // ?WANT-TO-TALK
{
  Push(pp_OK_dash_TALK); // OK-TALK
  _2_at_(); // 2@
  TIME(); // TIME
  _2_at_(); // 2@
  D_st_(); // D<
}


// ================================================
// 0xe960: WORD '?P-STATEMENT' codep=0x224c wordp=0xe962 params=0 returns=1
// ================================================

void IsP_dash_STATEMENT() // ?P-STATEMENT
{
  Push((Read16(pp_P_dash_SUBJECT)&0xFF)==0x000d?1:0); // P-SUBJECT C@ 0x000d =
}


// ================================================
// 0xe96e: WORD '?WAS-QUESTIONED' codep=0x224c wordp=0xe970 params=0 returns=1
// ================================================

void IsWAS_dash_QUESTIONED() // ?WAS-QUESTIONED
{
  Push(!(Read16(pp_P_dash_QUES)==0?1:0)); // P-QUES @ 0= NOT
}


// ================================================
// 0xe97a: WORD '?NEW-POSTURE' codep=0x224c wordp=0xe97c params=0 returns=1
// ================================================

void IsNEW_dash_POSTURE() // ?NEW-POSTURE
{
  Push((Read16(pp_P_dash_POSTURE) & Read16(pp_P_dash_POSTURES))==0?1:0); // P-POSTURE @ P-POSTURES @ AND 0=
}


// ================================================
// 0xe98a: WORD '<3SHIPS' codep=0x224c wordp=0xe98c params=0 returns=1
// ================================================

void _st_3SHIPS() // <3SHIPS
{
  Push(Read16(pp__n_VESS)); // #VESS @
  Push(3);
  _st_(); // <
}


// ================================================
// 0xe996: WORD '?IN-COMM' codep=0x224c wordp=0xe998 params=0 returns=1
// ================================================

void IsIN_dash_COMM() // ?IN-COMM
{
  Push(Read16(pp_P_dash_PHRASES)&0xFF); // P-PHRASES C@
  _0_gt_(); // 0>
  Push(Read16(pp__n_A_dash_PHRASES)&0xFF); // #A-PHRASES C@
  _0_gt_(); // 0>
  Push(Pop() | Pop()); // OR
  Push(Read16(pp_TERMINA)); // TERMINA @
  WDB0C(); // WDB0C
  Push(Pop() & Read16(pp_IsCOMM_dash_BTNS)); //  ?COMM-BTNS @ AND
}


// ================================================
// 0xe9b4: WORD '?TERMINATED' codep=0x224c wordp=0xe9b6 params=0 returns=1
// ================================================

void IsTERMINATED() // ?TERMINATED
{
  Push(Read16(pp_TERMINA)); // TERMINA @
  IsFIGHT(); // ?FIGHT
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe9c0: WORD '?ALIEN-RACE-6' codep=0x224c wordp=0xe9c2 params=0 returns=1
// ================================================

void IsALIEN_dash_RACE_dash_6() // ?ALIEN-RACE-6
{
  Push(Read16(pp_ALIEN_dash_RACE)==6?1:0); // ALIEN-RACE @ 6 =
}


// ================================================
// 0xe9cc: WORD '?MAKE-STATEMENT' codep=0x224c wordp=0xe9ce params=0 returns=1
// ================================================

void IsMAKE_dash_STATEMENT() // ?MAKE-STATEMENT
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(Read16(pp_ALIEN_dash_RACE)==3?1:0); // ALIEN-RACE @ 3 =
  if (Pop() != 0)
  {
    Push(0x0046);
  } else
  {
    Push(0x001e);
  }
  _st_(); // <
  Push(Pop() + 0x000d); //  0x000d +
  StoreA_dash_SUBJECT(); // !A-SUBJECT
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  PHRASE_dash_SEARCH(); // PHRASE-SEARCH
  Push(!(Read16(pp_SUBJECT)==0x000e?1:0)); // SUBJECT @ 0x000e = NOT
}


// ================================================
// 0xea0a: WORD '?CAN-SURRENDER' codep=0x224c wordp=0xea0c params=0 returns=1
// ================================================

void IsCAN_dash_SURRENDER() // ?CAN-SURRENDER
{
  Push(pp__ro_AORIGINATOR_rc_); // (AORIGINATOR)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+CSF.offset)&0xFF); // CSF<IFIELD> C@
  ICLOSE(); // ICLOSE
  Push(Pop() & (Read16(pp_SPACIAL_dash_CONTEXT)==1?1:0)); //  SPACIAL-CONTEXT @ 1 = AND
}


// ================================================
// 0xea22: WORD 'WEA24' codep=0x224c wordp=0xea24 params=0 returns=1
// ================================================

void WEA24() // WEA24
{
  IsIN_dash_COMM(); // ?IN-COMM
  IsCAN_dash_SURRENDER(); // ?CAN-SURRENDER
  Push(Pop() & Pop()); // AND
  IsOBSEQUIOUS(); // ?OBSEQUIOUS
  Push(Pop() & Pop()); // AND
  Push(Pop() | Read16(cc_IsHAS_dash_SURRENDERED)); //  ?HAS-SURRENDERED OR
}


// ================================================
// 0xea34: WORD 'WEA36' codep=0x224c wordp=0xea36 params=0 returns=1
// ================================================

void WEA36() // WEA36
{
  IsOBSEQUIOUS(); // ?OBSEQUIOUS
  IsCAN_dash_SURRENDER(); // ?CAN-SURRENDER
  WDB0C(); // WDB0C
}


// ================================================
// 0xea3e: WORD '<EDL>' codep=0xb869 wordp=0xea48
// ================================================

void _st_EDL_gt_() // <EDL> rule
{
  int b;

  b = 1;
  IsSHIELDS_dash_FLAG(); // ?SHIELDS-FLAG
  b = b && Pop();
  IsSHIELDS_dash_UP(); // ?SHIELDS-UP
  b = b && Pop();
  if (b)
  {
    _plus_5_gt_EDL(); // +5>EDL
  }

  b = 1;
  IsSHIELDS_dash_FLAG(); // ?SHIELDS-FLAG
  b = b && Pop();
  IsSHIELDS_dash_UP(); // ?SHIELDS-UP
  b = b && !Pop();
  if (b)
  {
    WE4DC(); // WE4DC
  }

  b = 1;
  IsWEAPON_dash_FLAG(); // ?WEAPON-FLAG
  b = b && Pop();
  IsWEAPON_dash_ARMED(); // ?WEAPON-ARMED
  b = b && Pop();
  if (b)
  {
    WE4E6(); // WE4E6
  }

  b = 1;
  IsWEAPON_dash_FLAG(); // ?WEAPON-FLAG
  b = b && Pop();
  IsWEAPON_dash_ARMED(); // ?WEAPON-ARMED
  b = b && !Pop();
  if (b)
  {
    WE4F0(); // WE4F0
  }

  b = 1;
  IsP_dash_HAILED(); // ?P-HAILED
  b = b && Pop();
  IsNEW_dash_POSTURE(); // ?NEW-POSTURE
  b = b && Pop();
  if (b)
  {
    NEW_dash_POSTURE_gt_EDL(); // NEW-POSTURE>EDL
  }

  b = 1;
  IsP_dash_STATEMENT(); // ?P-STATEMENT
  b = b && Pop();
  if (b)
  {
    STATEMENT_dash_EDL(); // STATEMENT-EDL
  }

  b = 1;
  IsWAS_dash_QUESTIONED(); // ?WAS-QUESTIONED
  b = b && Pop();
  Push(Read16(cc_P_dash_STRENGTH)); // P-STRENGTH
  b = b && Pop();
  if (b)
  {
    WE562(); // WE562
  }

  b = 1;
  Push(Read16(cc_IsP_dash_RESPOND)); // ?P-RESPOND
  b = b && Pop();
  if (b)
  {
    RESPOND_gt_EDL(); // RESPOND>EDL
  }

  b = 1;
  Push(Read16(cc_IsFIRED_dash_WEAPONS)); // ?FIRED-WEAPONS
  b = b && Pop();
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && !Pop();
  if (b)
  {
    WE514(); // WE514
  }
}

// 0xea5d: db 0x45 0x44 'ED'
// 0xea77: db 0x38 0x2f '8/'
// 0xea85: db 0x52 'R'

// ================================================
// 0xeab1: WORD '<TALK>' codep=0xb869 wordp=0xeabc
// ================================================

void _st_TALK_gt_() // <TALK> rule
{
  int b;

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && !Pop();
  IsTERMINATED(); // ?TERMINATED
  b = b && !Pop();
  IsFRIENDLY(); // ?FRIENDLY
  b = b && Pop();
  IsP_dash_HAILED(); // ?P-HAILED
  b = b && !Pop();
  if (b)
  {
    _1_dot_5_star_T_pe_(); // 1.5*T%
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && !Pop();
  IsTERMINATED(); // ?TERMINATED
  b = b && !Pop();
  IsFRIENDLY(); // ?FRIENDLY
  b = b && Pop();
  IsP_dash_HAILED(); // ?P-HAILED
  b = b && Pop();
  if (b)
  {
    _2_star_T_pe_(); // 2*T%
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && !Pop();
  IsTERMINATED(); // ?TERMINATED
  b = b && !Pop();
  IsNEUTRAL(); // ?NEUTRAL
  b = b && Pop();
  IsP_dash_HAILED(); // ?P-HAILED
  b = b && !Pop();
  if (b)
  {
    _1_star_T_pe_(); // 1*T%
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && !Pop();
  IsTERMINATED(); // ?TERMINATED
  b = b && !Pop();
  IsNEUTRAL(); // ?NEUTRAL
  b = b && Pop();
  IsP_dash_HAILED(); // ?P-HAILED
  b = b && Pop();
  if (b)
  {
    _1_dot_5_star_T_pe_(); // 1.5*T%
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && !Pop();
  IsTERMINATED(); // ?TERMINATED
  b = b && !Pop();
  IsHOSTILE(); // ?HOSTILE
  b = b && Pop();
  IsP_dash_HAILED(); // ?P-HAILED
  b = b && !Pop();
  if (b)
  {
    _0_dot_5_star_T_pe_(); // 0.5*T%
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && !Pop();
  IsTERMINATED(); // ?TERMINATED
  b = b && !Pop();
  IsHOSTILE(); // ?HOSTILE
  b = b && Pop();
  IsP_dash_HAILED(); // ?P-HAILED
  b = b && Pop();
  if (b)
  {
    _1_star_T_pe_(); // 1*T%
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && !Pop();
  IsTERMINATED(); // ?TERMINATED
  b = b && !Pop();
  IsFIGHT(); // ?FIGHT
  b = b && Pop();
  if (b)
  {
    _0_gt_T_pe_(); // 0>T%
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && !Pop();
  IsTERMINATED(); // ?TERMINATED
  b = b && !Pop();
  IsOBSEQUIOUS(); // ?OBSEQUIOUS
  b = b && Pop();
  IsP_dash_HAILED(); // ?P-HAILED
  b = b && !Pop();
  if (b)
  {
    _2_star_T_pe_(); // 2*T%
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && !Pop();
  IsTERMINATED(); // ?TERMINATED
  b = b && !Pop();
  IsOBSEQUIOUS(); // ?OBSEQUIOUS
  b = b && Pop();
  IsP_dash_HAILED(); // ?P-HAILED
  b = b && Pop();
  if (b)
  {
    _2_dot_5_gt_T_pe_(); // 2.5>T%
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && Pop();
  IsCAN_dash_SURRENDER(); // ?CAN-SURRENDER
  b = b && Pop();
  IsTIRED_dash_OF_dash_TALKING(); // ?TIRED-OF-TALKING
  b = b && !Pop();
  if (b)
  {
    _70_gt_T_pe_(); // 70>T%
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && Pop();
  IsOBSEQUIOUS(); // ?OBSEQUIOUS
  b = b && !Pop();
  IsTIRED_dash_OF_dash_TALKING(); // ?TIRED-OF-TALKING
  b = b && !Pop();
  if (b)
  {
    _70_gt_T_pe_(); // 70>T%
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && Pop();
  IsTIRED_dash_OF_dash_TALKING(); // ?TIRED-OF-TALKING
  b = b && Pop();
  if (b)
  {
    _0_gt_T_pe_(); // 0>T%
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && !Pop();
  IsTERMINATED(); // ?TERMINATED
  b = b && Pop();
  IsOBSEQUIOUS(); // ?OBSEQUIOUS
  b = b && !Pop();
  if (b)
  {
    _0_gt_T_pe_(); // 0>T%
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && !Pop();
  IsTERMINATED(); // ?TERMINATED
  b = b && Pop();
  IsCAN_dash_SURRENDER(); // ?CAN-SURRENDER
  b = b && !Pop();
  if (b)
  {
    _0_gt_T_pe_(); // 0>T%
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && !Pop();
  IsTERMINATED(); // ?TERMINATED
  b = b && Pop();
  IsOBSEQUIOUS(); // ?OBSEQUIOUS
  b = b && Pop();
  IsCAN_dash_SURRENDER(); // ?CAN-SURRENDER
  b = b && Pop();
  Push(Read16(cc_IsHAS_dash_SURRENDERED)); // ?HAS-SURRENDERED
  b = b && !Pop();
  if (b)
  {
    _100_gt_T_pe_(); // 100>T%
  }
}

// 0xeadd: db 0x20 0x20 '  '
// 0xeaf5: db 0x49 0x4e 'IN'
// 0xeb02: db 0x4e 'N'

// ================================================
// 0xeb66: WORD '<AUX>' codep=0xb869 wordp=0xeb70
// ================================================

void _st_AUX_gt_() // <AUX> rule
{
  int b;

  b = 1;
  Push(Read16(cc_WDA37)); // WDA37
  b = b && Pop();
  Push(Read16(cc_IsA_dash_SHIELDS_dash_UP)); // ?A-SHIELDS-UP
  b = b && !Pop();
  IsFRIENDLY(); // ?FRIENDLY
  b = b && !Pop();
  WEA24(); // WEA24
  b = b && !Pop();
  IsALIEN_dash_RACE_dash_6(); // ?ALIEN-RACE-6
  b = b && !Pop();
  if (b)
  {
    RAISE_dash_SHIELDS(); // RAISE-SHIELDS
  }

  b = 1;
  Push(Read16(cc_IsA_dash_SHIELDS_dash_UP)); // ?A-SHIELDS-UP
  b = b && Pop();
  IsFRIENDLY(); // ?FRIENDLY
  b = b && Pop();
  if (b)
  {
    LOWER_dash_SHIELDS(); // LOWER-SHIELDS
  }

  b = 1;
  Push(Read16(cc_IsA_dash_SHIELDS_dash_UP)); // ?A-SHIELDS-UP
  b = b && Pop();
  WEA24(); // WEA24
  b = b && Pop();
  if (b)
  {
    LOWER_dash_SHIELDS(); // LOWER-SHIELDS
  }

  b = 1;
  Push(Read16(cc_WDA3B)); // WDA3B
  b = b && Pop();
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  b = b && !Pop();
  IsFRIENDLY(); // ?FRIENDLY
  b = b && !Pop();
  IsNEUTRAL(); // ?NEUTRAL
  b = b && !Pop();
  IsOBSEQUIOUS(); // ?OBSEQUIOUS
  b = b && !Pop();
  WEA24(); // WEA24
  b = b && !Pop();
  if (b)
  {
    ARM_dash_WEAPONS(); // ARM-WEAPONS
  }

  b = 1;
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  b = b && Pop();
  IsHOSTILE(); // ?HOSTILE
  b = b && !Pop();
  IsFIGHT(); // ?FIGHT
  b = b && !Pop();
  IsOBSEQUIOUS(); // ?OBSEQUIOUS
  b = b && !Pop();
  if (b)
  {
    DISARM_dash_WEAPONS(); // DISARM-WEAPONS
  }

  b = 1;
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  b = b && Pop();
  WEA24(); // WEA24
  b = b && Pop();
  if (b)
  {
    DISARM_dash_WEAPONS(); // DISARM-WEAPONS
  }

  b = 1;
  WE80E(); // WE80E
  b = b && Pop();
  Push(Read16(cc_IsCALLED)); // ?CALLED
  b = b && !Pop();
  WE7BE(); // WE7BE
  b = b && Pop();
  _st_3SHIPS(); // <3SHIPS
  b = b && Pop();
  IsFRIENDLY(); // ?FRIENDLY
  b = b && !Pop();
  IsNEUTRAL(); // ?NEUTRAL
  b = b && !Pop();
  WEA24(); // WEA24
  b = b && !Pop();
  if (b)
  {
    CALL_dash_FOR_dash_SHIPS(); // CALL-FOR-SHIPS
  }

  b = 1;
  Push(Read16(cc_IsCALLED)); // ?CALLED
  b = b && Pop();
  WE850(); // WE850
  b = b && Pop();
  if (b)
  {
    SHIPS_dash_ARRIVE(); // SHIPS-ARRIVE
  }

  b = 1;
  IsWANT_dash_TO_dash_TALK(); // ?WANT-TO-TALK
  b = b && Pop();
  WE7BE(); // WE7BE
  b = b && Pop();
  WE83A(); // WE83A
  b = b && Pop();
  Push(Read16(cc_IsSCANNED)); // ?SCANNED
  b = b && !Pop();
  if (b)
  {
    SCAN_dash_PLAYER(); // SCAN-PLAYER
  }

  b = 1;
  Push(Read16(cc_IsHAS_dash_SURRENDERED)); // ?HAS-SURRENDERED
  b = b && !Pop();
  WEA24(); // WEA24
  b = b && Pop();
  if (b)
  {
    WE780(); // WE780
  }
}

// 0xeb87: db 0x58 0x49 'XI'
// 0xebb1: db 0x45 0x54 'ET'
// 0xebc7: db 0xf3 ' '

// ================================================
// 0xec0a: WORD '<COMM>' codep=0xb869 wordp=0xec15
// ================================================

void _st_COMM_gt_() // <COMM> rule
{
  int b;

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && !Pop();
  IsP_dash_HAILED(); // ?P-HAILED
  b = b && !Pop();
  IsWANT_dash_TO_dash_TALK(); // ?WANT-TO-TALK
  b = b && Pop();
  IsOK_dash_TO_dash_TALK(); // ?OK-TO-TALK
  b = b && Pop();
  IsA_dash_HAILED(); // ?A-HAILED
  b = b && !Pop();
  Push(Read16(cc_IsHAS_dash_SURRENDERED)); // ?HAS-SURRENDERED
  b = b && !Pop();
  WEA36(); // WEA36
  b = b && !Pop();
  if (b)
  {
    HAIL(); // HAIL
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && !Pop();
  IsA_dash_HAILED(); // ?A-HAILED
  b = b && Pop();
  IsWANT_dash_TO_dash_TALK(); // ?WANT-TO-TALK
  b = b && Pop();
  IsOK_dash_TO_dash_TALK(); // ?OK-TO-TALK
  b = b && Pop();
  IsTIRED_dash_OF_dash_WAITING(); // ?TIRED-OF-WAITING
  b = b && Pop();
  IsREPEAT(); // ?REPEAT
  b = b && Pop();
  Push(Read16(cc_IsHAS_dash_SURRENDERED)); // ?HAS-SURRENDERED
  b = b && !Pop();
  WEA36(); // WEA36
  b = b && !Pop();
  if (b)
  {
    HAIL(); // HAIL
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && !Pop();
  IsP_dash_HAILED(); // ?P-HAILED
  b = b && Pop();
  IsWANT_dash_TO_dash_TALK(); // ?WANT-TO-TALK
  b = b && Pop();
  IsOK_dash_TO_dash_TALK(); // ?OK-TO-TALK
  b = b && Pop();
  Push(Read16(cc_IsHAS_dash_SURRENDERED)); // ?HAS-SURRENDERED
  b = b && !Pop();
  WEA36(); // WEA36
  b = b && !Pop();
  if (b)
  {
    RESPOND(); // RESPOND
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && Pop();
  IsWANT_dash_TO_dash_TALK(); // ?WANT-TO-TALK
  b = b && Pop();
  IsWAS_dash_QUESTIONED(); // ?WAS-QUESTIONED
  b = b && !Pop();
  IsOK_dash_TO_dash_TALK(); // ?OK-TO-TALK
  b = b && Pop();
  IsMAKE_dash_STATEMENT(); // ?MAKE-STATEMENT
  b = b && Pop();
  Push(Read16(cc_IsWAITING_dash_FOR_dash_ANSWER)); // ?WAITING-FOR-ANSWER
  b = b && !Pop();
  IsTIRED_dash_OF_dash_TALKING(); // ?TIRED-OF-TALKING
  b = b && !Pop();
  if (b)
  {
    STATEMENT(); // STATEMENT
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && Pop();
  IsWANT_dash_TO_dash_TALK(); // ?WANT-TO-TALK
  b = b && Pop();
  IsWAS_dash_QUESTIONED(); // ?WAS-QUESTIONED
  b = b && !Pop();
  IsOK_dash_TO_dash_TALK(); // ?OK-TO-TALK
  b = b && Pop();
  IsMAKE_dash_STATEMENT(); // ?MAKE-STATEMENT
  b = b && !Pop();
  Push(Read16(cc_IsWAITING_dash_FOR_dash_ANSWER)); // ?WAITING-FOR-ANSWER
  b = b && !Pop();
  IsTIRED_dash_OF_dash_TALKING(); // ?TIRED-OF-TALKING
  b = b && !Pop();
  if (b)
  {
    QUESTION(); // QUESTION
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && Pop();
  Push(Read16(cc_IsWAITING_dash_FOR_dash_ANSWER)); // ?WAITING-FOR-ANSWER
  b = b && Pop();
  IsWANT_dash_TO_dash_TALK(); // ?WANT-TO-TALK
  b = b && Pop();
  IsTIRED_dash_OF_dash_WAITING(); // ?TIRED-OF-WAITING
  b = b && Pop();
  IsREPEAT(); // ?REPEAT
  b = b && Pop();
  if (b)
  {
    TIRED_dash_OF_dash_WAITING(); // TIRED-OF-WAITING
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && Pop();
  IsWAS_dash_QUESTIONED(); // ?WAS-QUESTIONED
  b = b && Pop();
  IsWANT_dash_TO_dash_TALK(); // ?WANT-TO-TALK
  b = b && Pop();
  IsTIRED_dash_OF_dash_TALKING(); // ?TIRED-OF-TALKING
  b = b && !Pop();
  if (b)
  {
    ANSWER(); // ANSWER
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && Pop();
  IsTIRED_dash_OF_dash_TALKING(); // ?TIRED-OF-TALKING
  b = b && Pop();
  IsWANT_dash_TO_dash_TALK(); // ?WANT-TO-TALK
  b = b && Pop();
  Push(Read16(cc_IsWAITING_dash_FOR_dash_ANSWER)); // ?WAITING-FOR-ANSWER
  b = b && !Pop();
  if (b)
  {
    TIRED_dash_OF_dash_TALKING(); // TIRED-OF-TALKING
  }

  b = 1;
  IsIN_dash_COMM(); // ?IN-COMM
  b = b && Pop();
  TALKATIVENESS(); // TALKATIVENESS
  b = b && !Pop();
  IsTIRED_dash_OF_dash_TALKING(); // ?TIRED-OF-TALKING
  b = b && !Pop();
  if (b)
  {
    TERMINATE(); // TERMINATE
  }
}

// 0xec2a: db 0x4f 0x4d 'OM'
// 0xec48: db 0x29 0x0e ') '
// 0xec58: db 0x9b ' '

// ================================================
// 0xeca7: WORD 'WECA9' codep=0x224c wordp=0xeca9 params=0 returns=2
// ================================================

void WECA9() // WECA9
{
  CTINIT(); // CTINIT
  Push(0x1000); Push(0x0002); // 'TRANSMITTING:'
  WD93B(); // WD93B
  DrawTTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
}


// ================================================
// 0xecbd: WORD 'P-PHRASE' codep=0x224c wordp=0xecbf params=0 returns=2
// ================================================

void P_dash_PHRASE() // P-PHRASE
{
  GetColor(BLUE);
  Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
  DrawON(); // .ON
  WECA9(); // WECA9
  P_gt_ORIGINATOR(); // P>ORIGINATOR
  PHRASE_dash_SEARCH(); // PHRASE-SEARCH
  PHRASE_gt_CT(); // PHRASE>CT
  Push(!(Read16(pp_P_dash_SUBJECT)==1?1:0)); // P-SUBJECT @ 1 = NOT
  Push(pp_P_dash_PHRASES); // P-PHRASES
  _plus__ex__2(); // +!_2
  SET_dash_OK_dash_TIME(); // SET-OK-TIME
  GetColor(BLACK);
  Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
  DrawON(); // .ON
}


// ================================================
// 0xece9: WORD 'STOP-COMM' codep=0x224c wordp=0xeceb params=0 returns=0
// ================================================

void STOP_dash_COMM() // STOP-COMM
{
  Push(pp__ro_STOP_dash_COMM_rc_); // (STOP-COMM)
  ON_3(); // ON_3
}


// ================================================
// 0xecf1: WORD '?TRIG' codep=0x224c wordp=0xecf3 params=0 returns=1
// ================================================

void IsTRIG() // ?TRIG
{
  IsTRIG(); // ?TRIG
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(Read16(pp_LKEY)==0x002b?1:0); // LKEY @ 0x002b =
  if (Pop() != 0)
  {
    Push(!Pop()); //  NOT
    Push(0xd4c0); Push(0x0001); // 'FIN-LIKE'
    WE1F0(); // WE1F0
    return;
  }
  GetColor(BLUE);
  Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
  DrawON(); // .ON
}


// ================================================
// 0xed21: WORD 'WED23' codep=0x744d wordp=0xed23
// ================================================
IFieldType WED23 = {STARSYSTEMIDX, 0x0b, 0x09};

// ================================================
// 0xed26: WORD 'WED28' codep=0x224c wordp=0xed28 params=1 returns=1
// ================================================

void WED28() // WED28
{
  if (Pop() != 0)
  {
    Push2Words("*ASYS");
    _gt_C_plus_S(); // >C+S
    Push(Read16(pp_STARDATE)); // STARDATE @
    Push(Read16(0x63ef+WED23.offset)); // WED23<IFIELD> @
    _st_(); // <
    Push(!Pop()); //  NOT
    Push(Read16(pp_IsWIN)); // ?WIN @
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+WED23.offset)); // WED23<IFIELD> @
      _gt_(); // >
      Push(Pop() & Pop()); // AND
    }
    ICLOSE(); // ICLOSE
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(0x101a); Push(0x0002); // 'THERE'S NO RESPONSE!'
      WD93B(); // WD93B
      DrawTTY(); // .TTY
      Push(0x07d0);
      MS(); // MS
    }
    Push(!Pop()); //  NOT
    return;
  }
  Push(0);
}


// ================================================
// 0xed70: WORD 'WED72' codep=0x1d29 wordp=0xed72
// ================================================
// 0xed72: db 0x02 0x08 0x01 '   '

// ================================================
// 0xed75: WORD '>P-POSTURE' codep=0x224c wordp=0xed77
// ================================================

void _gt_P_dash_POSTURE() // >P-POSTURE
{
  Push(8);
  DrawBTN_dash_TEXT(); // .BTN-TEXT
  INIT_dash_BUTTON(); // INIT-BUTTON
  _gt_BUTTON(); // >BUTTON
  Push(Read16(pp_WED72 + Read16(pp_THIS_dash_BUTTON))&0xFF); // WED72 THIS-BUTTON @ + C@
  Push(pp_P_dash_POSTURE); // P-POSTURE
  Store_3(); // !_3
  Push(5);
  IsIN_dash_COMM(); // ?IN-COMM
  Push(Pop() * 4); //  4 *
  Push(Pop() + Pop()); // +
  DrawBTN_dash_TEXT(); // .BTN-TEXT
  INIT_dash_BUTTON(); // INIT-BUTTON
}


// ================================================
// 0xed9d: WORD '(>?)' codep=0x4a4f wordp=0xeda6
// ================================================

void _ro__gt__ask__rc_() // (>?)
{
  switch(Pop()) // (>?)
  {
  case 0:
    Push(Read16(cc_THEMSELVES)); // THEMSELVES
    break;
  case 1:
    Push(Read16(cc_OTHER_RACES)); // OTHER_RACES
    break;
  case 2:
    Push(Read16(cc_OLD_dash_EMPIRE)); // OLD-EMPIRE
    break;
  case 3:
    Push(Read16(cc_ANCIENTS)); // ANCIENTS
    break;
  default:
    Push(Read16(cc_GEN_i_L_dash_INFO)); // GEN'L-INFO
    break;

  }
}

// ================================================
// 0xedba: WORD '>QUESTION' codep=0x224c wordp=0xedbc
// ================================================

void _gt_QUESTION() // >QUESTION
{
  Push(0x000b);
  DrawBTN_dash_TEXT(); // .BTN-TEXT
  INIT_dash_BUTTON(); // INIT-BUTTON
  _gt_BUTTON(); // >BUTTON
  Push(0xdad3); // 'P-STRENGTH'
  ON_3(); // ON_3
  Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
  _ro__gt__ask__rc_(); // (>?) case
  Push(pp_P_dash_QUES); // P-QUES
  Store_3(); // !_3
  Push(0x000e);
  Push(pp_P_dash_SUBJECT); // P-SUBJECT
  Store_3(); // !_3
  P_dash_PHRASE(); // P-PHRASE
  Push(9);
  DrawBTN_dash_TEXT(); // .BTN-TEXT
  INIT_dash_BUTTON(); // INIT-BUTTON
}


// ================================================
// 0xede8: WORD '>STATEMENT' codep=0x224c wordp=0xedea params=0 returns=2
// ================================================

void _gt_STATEMENT() // >STATEMENT
{
  Push(0x000d);
  Push(pp_P_dash_SUBJECT); // P-SUBJECT
  Store_3(); // !_3
  P_dash_PHRASE(); // P-PHRASE
}


// ================================================
// 0xedf6: WORD '>CM' codep=0x4a4f wordp=0xedfe
// ================================================

void _gt_CM() // >CM
{
  switch(Pop()) // >CM
  {
  case 0:
    _gt_STATEMENT(); // >STATEMENT
    break;
  case 1:
    _gt_QUESTION(); // >QUESTION
    break;
  case 2:
    _gt_P_dash_POSTURE(); // >P-POSTURE
    break;
  default:
    TERMINATE(); // TERMINATE
    break;

  }
}

// ================================================
// 0xee0e: WORD '>YES' codep=0x224c wordp=0xee10
// ================================================

void _gt_YES() // >YES
{
  YES_gt_EDL(); // YES>EDL
  WECA9(); // WECA9
  SET_STR_AS_PARAM("YES.");
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  CLICK(); // CLICK
}


// ================================================
// 0xee21: WORD '>NO' codep=0x224c wordp=0xee23
// ================================================

void _gt_NO() // >NO
{
  NO_dash_EDL(); // NO-EDL
  WECA9(); // WECA9
  SET_STR_AS_PARAM("NO.");
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  CLICK(); // CLICK
}


// ================================================
// 0xee33: WORD '>IMPATIENT' codep=0x224c wordp=0xee35
// ================================================

void _gt_IMPATIENT() // >IMPATIENT
{
  Push(Read16(pp_A_dash_POSTU) * 2); // A-POSTU @ 2*
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xee3f: WORD '>TERMINATE' codep=0x224c wordp=0xee41
// ================================================

void _gt_TERMINATE() // >TERMINATE
{
  _gt_IMPATIENT(); // >IMPATIENT
  TERMINATE(); // TERMINATE
}


// ================================================
// 0xee47: WORD '>Y/N' codep=0x4a4f wordp=0xee50
// ================================================

void _gt_Y_slash_N() // >Y/N
{
  switch(Pop()) // >Y/N
  {
  case 0:
    _gt_YES(); // >YES
    break;
  case 1:
    _gt_NO(); // >NO
    break;
  case 2:
    _gt_TERMINATE(); // >TERMINATE
    break;
  default:
    _gt_IMPATIENT(); // >IMPATIENT
    break;

  }
}

// ================================================
// 0xee60: WORD '>HAIL' codep=0x224c wordp=0xee62
// ================================================

void _gt_HAIL() // >HAIL
{
  CTERASE(); // CTERASE
  _gt_P_dash_POSTURE(); // >P-POSTURE
  Push(1);
  Push(pp_P_dash_SUBJECT); // P-SUBJECT
  Store_3(); // !_3
  P_dash_PHRASE(); // P-PHRASE
  Push(1);
  Push(pp_HAILER); // HAILER
  Store_3(); // !_3
  Push(5);
  DrawBTN_dash_TEXT(); // .BTN-TEXT
}


// ================================================
// 0xee7a: WORD '>RESPOND' codep=0x224c wordp=0xee7c
// ================================================

void _gt_RESPOND() // >RESPOND
{
  _gt_P_dash_POSTURE(); // >P-POSTURE
  Push(2);
  Push(pp_P_dash_SUBJECT); // P-SUBJECT
  Store_3(); // !_3
  P_dash_PHRASE(); // P-PHRASE
  Push(0xda0f); // '?P-RESPOND'
  ON_3(); // ON_3
  Push(pp__n_A_dash_HAILS); // #A-HAILS
  OFF(); // OFF
}


// ================================================
// 0xee92: WORD 'EDL+AUX' codep=0x224c wordp=0xee9e params=0 returns=0
// ================================================
// entry

void EDL_plus_AUX() // EDL+AUX
{
  Push(Read16(pp__n_VESS) | Read16(cc_IsCALLED)); // #VESS @ ?CALLED OR
  if (Pop() == 0) return;
  Push(0xeb70); // '<AUX>'
  DISTRACT(); // DISTRACT
  _st_AUX_gt_(); // <AUX> rule
  Pop(); // DROP
  Push(0xea48); // '<EDL>'
  DISTRACT(); // DISTRACT
  _st_EDL_gt_(); // <EDL> rule
  Pop(); // DROP
}


// ================================================
// 0xeec0: WORD 'COMM-EXPERTS' codep=0x224c wordp=0xeed1 params=0 returns=0
// ================================================
// entry

void COMM_dash_EXPERTS() // COMM-EXPERTS
{
  Push(Read16(pp__n_VESS) | Read16(cc_IsCALLED)); // #VESS @ ?CALLED OR
  if (Pop() != 0)
  {
    EDL_plus_AUX(); // EDL+AUX
    Push(0xeabc); // '<TALK>'
    DISTRACT(); // DISTRACT
    _st_TALK_gt_(); // <TALK> rule
    Pop(); // DROP
    Push(0xec15); // '<COMM>'
    DISTRACT(); // DISTRACT
    _st_COMM_gt_(); // <COMM> rule
    Pop(); // DROP
  }
  Push(0xda5d); // '?A-TALKING'
  OFF(); // OFF
}


// ================================================
// 0xeefb: WORD '.COMM-PIC' codep=0x224c wordp=0xeefd params=0 returns=0
// ================================================

void DrawCOMM_dash_PIC() // .COMM-PIC
{
  Push(Read16(pp__i_CC)); // 'CC @
  MODULE(); // MODULE
  _gt_MAINVIEW(); // >MAINVIEW
  DARK(); // DARK
  _gt_DISPLAY(); // >DISPLAY
  V_gt_DISPLAY(); // V>DISPLAY
  Push(pp__ro_AORIGINATOR_rc_); // (AORIGINATOR)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+CPIC.offset)&0xFF); // CPIC<IFIELD> C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(4);
    Push(0x00bf);
    POS_dot_(); // POS.
    Push(0xbe9d); // '@.HYBRID'
    MODULE(); // MODULE
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef2b: WORD 'WEF2D' codep=0x224c wordp=0xef2d params=0 returns=1
// ================================================

void WEF2D() // WEF2D
{
  unsigned short int a;
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  D0_eq_(); // D0=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(pp__ro_ENCOUNTER_rc_); // (ENCOUNTER)
    _1_dot_5_at_(); // 1.5@
    _2DUP(); // 2DUP
    D0_eq_(); // D0=
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
      Push2Words("*SHIP");
    }
  }
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  ICLOSE(); // ICLOSE
  Push(Pop() - 0x03e8); //  0x03e8 -
  ABS(); // ABS
  a = Pop(); // >R
  Push(Pop() - 0x0320); //  0x0320 -
  ABS(); // ABS
  Push(a); // R>
  MAX(); // MAX
}


// ================================================
// 0xef6b: WORD 'WEF6D' codep=0x224c wordp=0xef6d
// ================================================

void WEF6D() // WEF6D
{
  WEF2D(); // WEF2D
  Push(Read16(pp__dash_END)); // -END @
  Push(5);
  _star__slash_(); // */
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(6);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Push(Read16(Pop())); //  @
  U_star_(); // U*
  SET_dash_CURRENT(); // SET-CURRENT
  Push(0x3a98); Push(0x0000);
  DMAX(); // DMAX
  Push(pp_TOWFINE); // TOWFINE
  StoreD(); // D!
}


// ================================================
// 0xef9b: WORD 'WEF9D' codep=0x224c wordp=0xef9d params=1 returns=1
// ================================================

void WEF9D() // WEF9D
{
  Push(Read16(regsp)); // DUP
  Push(Pop() & (Read16(pp_CONTEXT_dash_ID_n_)==5?1:0)); //  CONTEXT-ID# @ 5 = AND
  if (Pop() == 0) return;
  Push(0x103b); Push(0x0002); // 'WE'RE ALREADY HOME!'
  WD93B(); // WD93B
  DrawTTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
  Push(!Pop()); //  NOT
}


// ================================================
// 0xefc1: WORD 'WEFC3' codep=0x224c wordp=0xefc3
// ================================================

void WEFC3() // WEFC3
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(0x105b); Push(0x0002); // 'TRANSMIT EMERGENCY DISTRESS CALL'
  WD93B(); // WD93B
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR
  Push(0x1088); Push(0x0002); // 'CONFIRM: [N Y]'
  WD93B(); // WD93B
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Y_slash_N(); // Y/N
  WEF9D(); // WEF9D
  WED28(); // WED28
  if (Pop() != 0)
  {
    Push(Read16(pp_CONTEXT_dash_ID_n_)==4?1:0); // CONTEXT-ID# @ 4 =
    Push(Read16(pp__n_VESS)); // #VESS @
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    Push(Read16(cc_IsCALLED)); // ?CALLED
    WDB0C(); // WDB0C
    Push(Pop() | (Read16(pp__i_EXTERNAL_dash_EVENTS)==Read16(pp__i_HEAT)?1:0)); //  'EXTERNAL-EVENTS @ 'HEAT @ = OR
    if (Pop() != 0)
    {
      Push(0x10a3); Push(0x0002); // 'TRANSMISSION IS BEING JAMMED'
      WD93B(); // WD93B
      DrawTTY(); // .TTY
    } else
    {
      Push(0x10cc); Push(0x0002); // 'INITIATING CRYOGENIC STASIS'
      WD93B(); // WD93B
      DrawTTY(); // .TTY
      WEF6D(); // WEF6D
      Push(0x09c4);
      MS(); // MS
      Push(Read16(pp__i_YANK)); // 'YANK @
      MODULE(); // MODULE
      CTINIT(); // CTINIT
      Push(0x10f4); Push(0x0002); // 'RETRIEVAL COMPLETE, CREW REVIVED'
      WD93B(); // WD93B
      DrawTTY(); // .TTY
      STOP_dash_COMM(); // STOP-COMM
      Push(pp_IsRECALL); // ?RECALL
      ON_3(); // ON_3
      Push(pp_IsNEB); // ?NEB
      OFF(); // OFF
    }
  } else
  {
    CTERASE(); // CTERASE
    Push(0x1121); Push(0x0002); // 'CANCELLED'
    WD93B(); // WD93B
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  }
  GetColor(BLACK);
  Push(1);
  DrawON(); // .ON
}


// ================================================
// 0xf05f: WORD 'COMM-LOOP2' codep=0x224c wordp=0xf061
// ================================================

void COMM_dash_LOOP2() // COMM-LOOP2
{
  DrawCOMM_dash_PIC(); // .COMM-PIC
  Push(9);
  DrawBTN_dash_TEXT(); // .BTN-TEXT
  INIT_dash_BUTTON(); // INIT-BUTTON
  Push(Read16(pp__i_XCOMM)); // 'XCOMM @
  MODULE(); // MODULE
  Push(!Read16(pp__ro_STOP_dash_COMM_rc_)); // (STOP-COMM) @ NOT
  if (Pop() != 0)
  {
    do
    {
      COMM_dash_EXPERTS(); // COMM-EXPERTS
      _ro__gt_BUTTON_rc_(); // (>BUTTON)
      IsTRIG(); // ?TRIG
      Push(Read16(cc_IsWAITING_dash_FOR_dash_ANSWER)); // ?WAITING-FOR-ANSWER
      IsTIRED_dash_OF_dash_WAITING(); // ?TIRED-OF-WAITING
      Push(Pop() & Pop()); // AND
      IsREPEAT(); // ?REPEAT
      WDB0C(); // WDB0C
      Push(Pop() | Pop()); // OR
      if (Pop() != 0)
      {
        Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
        Push(Read16(cc_IsWAITING_dash_FOR_dash_ANSWER)); // ?WAITING-FOR-ANSWER
        if (Pop() != 0)
        {
          Push(0xda55); // '?WAITING-FOR-ANSWER'
          OFF(); // OFF
          IsREPEAT(); // ?REPEAT
          Push(!Pop() * 3); //  NOT 3 *
          Push(Pop() + Pop()); // +
          CAPT_c_(); // CAPT:
          _gt_Y_slash_N(); // >Y/N case
          Push(pp__n_A_dash_HAILS); // #A-HAILS
          OFF(); // OFF
          Push(9);
          DrawBTN_dash_TEXT(); // .BTN-TEXT
          INIT_dash_BUTTON(); // INIT-BUTTON
        } else
        {
          _gt_CM(); // >CM case
        }
      }
      IsTERMINATED(); // ?TERMINATED
    } while(Pop() == 0);
  }
  Push(pp__n_A_dash_PHRASES); // #A-PHRASES
  OFF(); // OFF
  Push(pp_P_dash_PHRASES); // P-PHRASES
  OFF(); // OFF
  Push(pp_HAILER); // HAILER
  OFF(); // OFF
  _gt_HAIL_do_(); // >HAIL$
}


// ================================================
// 0xf0d3: WORD 'COMMUNICATE' codep=0x224c wordp=0xf0d5 params=0 returns=0
// ================================================

void COMMUNICATE() // COMMUNICATE
{
  Push(Read16(pp_CONTEXT_dash_ID_n_)==4?1:0); // CONTEXT-ID# @ 4 =
  if (Pop() != 0)
  {
    Push(2);
    Push(0xbdef); // 'OV?.EQUIP-OK'
    MODULE(); // MODULE
    if (Pop() != 0)
    {
      Push(!(Read16(pp_HAILER)==2?1:0)); // HAILER @ 2 = NOT
      if (Pop() != 0)
      {
        _gt_HAIL(); // >HAIL
      } else
      {
        _gt_RESPOND(); // >RESPOND
      }
    } else
    {
      Push(pp__ro_STOP_dash_COMM_rc_); // (STOP-COMM)
      ON_3(); // ON_3
    }
    return;
  }
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  Push(0x1137); Push(0x0002); // 'THERE'S NO ONE TO HAIL'
  WD93B(); // WD93B
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  GetColor(BLACK);
  Push(0);
  DrawON(); // .ON
}


// ================================================
// 0xf125: WORD '(CBTN)' codep=0x4a4f wordp=0xf130
// ================================================

void _ro_CBTN_rc_() // (CBTN)
{
  switch(Pop()) // (CBTN)
  {
  case 0:
    COMMUNICATE(); // COMMUNICATE
    break;
  case 1:
    WEFC3(); // WEFC3
    break;
  default:
    STOP_dash_COMM(); // STOP-COMM
    break;

  }
}

// ================================================
// 0xf13c: WORD 'WF13E' codep=0x224c wordp=0xf13e params=0 returns=0
// ================================================

void WF13E() // WF13E
{
  Push(pp__ro_ENCOUNTER_rc_); // (ENCOUNTER)
  _1_dot_5_at_(); // 1.5@
  Push2Words("*ARREST");
  D_eq_(); // D=
  Push(Pop() & (Read16(pp_IsSECURE)==0?1:0)); //  ?SECURE @ 0= AND
  if (Pop() == 0) return;
  Push(Read16(pp__i_UNNEST)); // 'UNNEST @
  MODULE(); // MODULE
  Push2Words("*ARREST");
  _gt_C_plus_S(); // >C+S
  Push(0x00ff);
  Push(0x00ff);
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  StoreD(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf16c: WORD 'CL1' codep=0x224c wordp=0xf174
// ================================================
// entry

void CL1() // CL1
{
  Push(!Read16(pp__n_VESS)); // #VESS @ NOT
  if (Pop() != 0)
  {
    Push(pp__n_A_dash_PHRASES); // #A-PHRASES
    OFF(); // OFF
    Push(pp_HAILER); // HAILER
    OFF(); // OFF
    _gt_HAIL_do_(); // >HAIL$
  }
  Push(5);
  DrawBTN_dash_TEXT(); // .BTN-TEXT
  INIT_dash_BUTTON(); // INIT-BUTTON
  Push(pp__ro_STOP_dash_COMM_rc_); // (STOP-COMM)
  OFF(); // OFF
  Push(pp_IsCOMM_dash_BTNS); // ?COMM-BTNS
  ON_3(); // ON_3
  do
  {
    Push(pp__ro_AORIGINATOR_rc_); // (AORIGINATOR)
    _1_dot_5_at_(); // 1.5@
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      PARALLE(); // PARALLE
    }
    _ro__gt_BUTTON_rc_(); // (>BUTTON)
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
      _ro_CBTN_rc_(); // (CBTN) case
    }
    Push(Read16(pp_P_dash_PHRASES) | Read16(pp__n_A_dash_PHRASES)); // P-PHRASES @ #A-PHRASES @ OR
    Push(pp__ro_AORIGINATOR_rc_); // (AORIGINATOR)
    _1_dot_5_at_(); // 1.5@
    D0_eq_(); // D0=
    WDB0C(); // WDB0C
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(2);
      Push(0xbdef); // 'OV?.EQUIP-OK'
      MODULE(); // MODULE
      Push(!Pop() | Read16(pp__ro_STOP_dash_COMM_rc_)); //  NOT (STOP-COMM) @ OR
      Push(pp__ro_STOP_dash_COMM_rc_); // (STOP-COMM)
      Store_3(); // !_3
    }
    Push(Read16(pp__ro_STOP_dash_COMM_rc_)); // (STOP-COMM) @
    WDB0C(); // WDB0C
    if (Pop() != 0)
    {
      COMM_dash_LOOP2(); // COMM-LOOP2
      CTINIT(); // CTINIT
      Push(0x115a); Push(0x0002); // 'COMMUNICATIONS HAVE BEEN TERMINATED'
      WD93B(); // WD93B
      DrawTTY(); // .TTY
      WF13E(); // WF13E
      Push(5);
      DrawBTN_dash_TEXT(); // .BTN-TEXT
      INIT_dash_BUTTON(); // INIT-BUTTON
      Push(pp_FTRIG); // FTRIG
      OFF(); // OFF
    }
    Push(Read16(pp__ro_STOP_dash_COMM_rc_)); // (STOP-COMM) @
  } while(Pop() == 0);
  Push(0);
  DrawBTN_dash_TEXT(); // .BTN-TEXT
  Push(pp_IsCOMM_dash_BTNS); // ?COMM-BTNS
  OFF(); // OFF
  CLR_dash_BUT(); // CLR-BUT
  GetColor(BLUE);
  Push(4);
  DrawHIGHLI(); // .HIGHLI
  Push(4);
  Push(pp_THIS_dash_BUTTON); // THIS-BUTTON
  Store_3(); // !_3
  GetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_3(); // !_3
}


// ================================================
// 0xf226: WORD 'INIT_ACOMM' codep=0x224c wordp=0xf228
// ================================================

void INIT_ACOMM() // INIT_ACOMM
{
  Push(pp__ro_AORIGINATOR_rc_); // (AORIGINATOR)
  _1_dot_5_ex_(); // 1.5!
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_OK_dash_TALK); // OK-TALK
  StoreD(); // D!
  Push(pp_TERMINA); // TERMINA
  OFF(); // OFF
  Push(0x000e);
  StoreA_dash_SUBJECT(); // !A-SUBJECT
  Push(pp__n_A_dash_PHRASES); // #A-PHRASES
  OFF(); // OFF
  Push(pp__n_A_dash_HAILS); // #A-HAILS
  OFF(); // OFF
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(Read16(0x63ef+T_pe_.offset)&0xFF); // T%<IFIELD> C@
  Push(pp__pe_TALK); // %TALK
  Store_3(); // !_3
  Push(Read16(0x63ef+BASE_dash_EDL.offset)&0xFF); // BASE-EDL<IFIELD> C@
  Push(pp_EDL); // EDL
  Store_3(); // !_3
  IsSHIELDS_dash_UP(); // ?SHIELDS-UP
  Push(Pop() * 5); //  5 *
  _plus__ex_EDL(); // +!EDL
  IsSHIELDS_dash_FLAG(); // ?SHIELDS-FLAG
  Pop(); // DROP
  IsWEAPON_dash_ARMED(); // ?WEAPON-ARMED
  Push(Pop() * 0x000a); //  0x000a *
  _plus__ex_EDL(); // +!EDL
  IsWEAPON_dash_FLAG(); // ?WEAPON-FLAG
  Pop(); // DROP
  EDL_gt_POSTURE(); // EDL>POSTURE
}


// ================================================
// 0xf278: WORD 'WF27A' codep=0x224c wordp=0xf27a
// ================================================

void WF27A() // WF27A
{
  unsigned short int a;
  INIT_ACOMM(); // INIT_ACOMM
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(pp_ALIEN_dash_RACE); // ALIEN-RACE
  Store_3(); // !_3
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    Push(a & 7); // I 7 AND
    _0_gt_(); // 0>
    Push(a); // I
    _plus_BIT(); // +BIT
    Push(Pop()==1?1:0); //  1 =
    Push(Pop() & Pop()); // AND
    Push(a); // I
    Push(6);
    Push(9);
    WITHIN(); // WITHIN
    Push(Pop() | Pop()); // OR
    Push(Read16(regsp)); // DUP
    Push(0xda61); // 'WDA61'
    Store_3(); // !_3
    if (Pop() != 0)
    {
      MOVE_dash_SYLLABLES(); // MOVE-SYLLABLES
      Push(pp__ro_ENCOUNTER_rc_); // (ENCOUNTER)
      _1_dot_5_at_(); // 1.5@
      _2DUP(); // 2DUP
      Push(Pop() & 0x000f | 2); //  0x000f AND 2 OR
      A_dash_WORD(); // A-WORD
      Push(0x000f);
      MIN(); // MIN
      OVER(); // OVER
      Push(Pop() - 1); //  1-
      C_ex_(); // C!
      Push(Pop() - 1); //  1-
      Push(pp_A_dash_SHIP); // A-SHIP
      _do__ex_(); // $!
      SWAP(); // SWAP
      Push(Pop() & 0x000f | 2); //  0x000f AND 2 OR
      A_dash_WORD(); // A-WORD
      Push(0x000f);
      MIN(); // MIN
      OVER(); // OVER
      Push(Pop() - 1); //  1-
      C_ex_(); // C!
      Push(Pop() - 1); //  1-
      Push(pp_A_dash_CAPT); // A-CAPT
      _do__ex_(); // $!
    }
  } else
  {
    Push(pp_TERMINA); // TERMINA
    ON_3(); // ON_3
  }
  Push(a); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
  IsHOSTILE(); // ?HOSTILE
  IsFIGHT(); // ?FIGHT
  Push(Pop() | Pop()); // OR
  Push(Read16(regsp)); // DUP
  Push(Pop() & Read16(cc_WDA3B)); //  WDA3B AND
  Push(0x50b4); // '?A-WEAP'
  Store_3(); // !_3
  IsNEUTRAL(); // ?NEUTRAL
  Push(Pop() | Pop()); // OR
  IsALIEN_dash_RACE_dash_6(); // ?ALIEN-RACE-6
  WDB0C(); // WDB0C
  Push(Pop() & Read16(cc_WDA37)); //  WDA37 AND
  Push(0x50a6); // '?A-SHIELDS-UP'
  Store_3(); // !_3
}


// ================================================
// 0xf32e: WORD 'INIT_GCOMM' codep=0x224c wordp=0xf330 params=0 returns=0
// ================================================

void INIT_GCOMM() // INIT_GCOMM
{
  unsigned short int i, imax;
  Push(pp__ro_LOCK_dash_OUT_rc_); // (LOCK-OUT)
  OFF(); // OFF
  Push(0xdad3); // 'P-STRENGTH'
  OFF(); // OFF
  Push(0xda79); // '?SCANNED'
  OFF(); // OFF
  Push(0xda75); // '?CALLED'
  OFF(); // OFF
  Push(0xda0f); // '?P-RESPOND'
  OFF(); // OFF
  Push(pp_P_dash_POSTURES); // P-POSTURES
  OFF(); // OFF
  Push(0x5098); // '?FIRED-WEAPONS'
  OFF(); // OFF
  Push(0xda55); // '?WAITING-FOR-ANSWER'
  OFF(); // OFF
  Push(pp_HAILER); // HAILER
  OFF(); // OFF
  Push(pp_P_dash_PHRASES); // P-PHRASES
  OFF(); // OFF
  Push(pp_P_dash_SUBJECT); // P-SUBJECT
  OFF(); // OFF
  Push(pp_P_dash_QUES); // P-QUES
  OFF(); // OFF
  Push(0xda6d); // '?HAS-SURRENDERED'
  OFF(); // OFF
  Push(pp_P_dash_RACES); // P-RACES
  OFF(); // OFF
  Push(pp_COMM_dash_RACE); // COMM-RACE
  OFF(); // OFF
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WD9C0.offset); // WD9C0<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+WD9B1.offset); // WD9B1<IFIELD>
  Push(pp_P_dash_CAPT); // P-CAPT
  _do__ex_(); // $!
  ICLOSE(); // ICLOSE
  Push(0);

  i = 0;
  imax = 0x0012;
  do // (DO)
  {
    Push((0x63ef+WD9C0.offset) + i); // WD9C0<IFIELD> I +
    Get_gt_C_plus_S(); // @>C+S
    GetINST_dash_SPECIES(); // @INST-SPECIES
    Push(Pop() + 1); //  1+
    BIT(); // BIT
    Push(Pop() | Pop()); // OR
    ICLOSE(); // ICLOSE
    Push(3);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  ICLOSE(); // ICLOSE
  Push(pp_P_dash_RACES); // P-RACES
  Store_3(); // !_3
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+_pe_NAME.offset); // %NAME<IFIELD>
  Push(pp_P_dash_SHIP); // P-SHIP
  _do__ex_(); // $!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3c0: WORD 'INIT-MCOMM' codep=0x224c wordp=0xf3c2
// ================================================

void INIT_dash_MCOMM() // INIT-MCOMM
{
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WD9C5.offset); // WD9C5<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+COMM_dash_SKILL.offset)&0xFF); // COMM-SKILL<IFIELD> C@
  Push(pp_COMM_dash_OFF_dash_SKILL); // COMM-OFF-SKILL
  Store_3(); // !_3
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(pp_COMM_dash_RACE); // COMM-RACE
  Store_3(); // !_3
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(Read16(pp_ALIEN_dash_RACE)); // ALIEN-RACE @
  O_gt_P(); // O>P case
  Push(Read16(regsp)); // DUP
  Push(Pop() + 1); //  1+
  BIT(); // BIT
  Push(Pop() & Read16(pp_P_dash_RACES)); //  P-RACES @ AND
  _0_gt_(); // 0>
  Push(Pop() * 0x0032); //  0x0032 *
  SWAP(); // SWAP
  Push((Pop()==Read16(pp_COMM_dash_RACE)?1:0) * 0x0032); //  COMM-RACE @ = 0x0032 *
  Push(Pop() + Pop()); // +
  IsALIEN_dash_RACE_dash_6(); // ?ALIEN-RACE-6
  Push(4);
  Push(0xbdd8); // 'OV?ARTIFACT'
  MODULE(); // MODULE
  Push(Pop() & Pop()); // AND
  Push(Pop() * 0x00fa); //  0x00fa *
  Push(Pop() + Pop()); // +
  Push(Pop() + Read16(pp_COMM_dash_OFF_dash_SKILL)); //  COMM-OFF-SKILL @ +
  Push(0);
  SQRT(); // SQRT
  Push(0x00a7);
  Push(0x000a);
  _star__slash_(); // */
  Push(0x00fa);
  MIN(); // MIN
  Push(pp_COMM_dash_OFF_dash_SKILL); // COMM-OFF-SKILL
  Store_3(); // !_3
}


// ================================================
// 0xf43a: WORD 'IAPWR' codep=0x224c wordp=0xf444 params=0 returns=0
// ================================================
// entry

void IAPWR() // IAPWR
{
  Push(pp__ro_ENCOUNTER_rc_); // (ENCOUNTER)
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0);
  do
  {
    GetINST_dash_CLASS(); // @INST-CLASS
    Push(Pop()==0x0019?1:0); //  0x0019 =
    GetINST_dash_SPECIES(); // @INST-SPECIES
    Push(Pop()==0x0018?1:0); //  0x0018 =
    WDB0C(); // WDB0C
    if (Pop() != 0)
    {
      Push(Read16(cc_WDA37)); // WDA37
      LoadData(WD9E8); // from 'VESSEL'
      Push(!(Read16(Pop() + 2)==0?1:0)); //  2+ @ 0= NOT
      Push(Pop() | Pop()); // OR
      Push(0xda37); // 'WDA37'
      Store_3(); // !_3
      Push(Read16(cc_WDA3B)); // WDA3B
      LoadData(WD9F0); // from 'VESSEL'
      _1_dot_5_at_(); // 1.5@
      D0_eq_(); // D0=
      Push(!Pop()); //  NOT
      Push(Pop() | Pop()); // OR
      Push(0xda3b); // 'WDA3B'
      Store_3(); // !_3
      LoadData(WD9FD); // from 'VESSEL'
      Push(Read16(Pop())&0xFF); //  C@
      Push(0x63ef+WD9F8.offset); // WD9F8<IFIELD>
      _2_at_(); // 2@
      Push(Pop() + Pop()); // +
      LoadData(WD9E8); // from 'VESSEL'
      _2_at_(); // 2@
      Push(Pop() + Pop()); // +
      _star__slash_(); // */
      Push(Pop() + Pop()); // +
    }
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  Push(pp_A_dash_STRENGTH); // A-STRENGTH
  Store_3(); // !_3
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4ae: WORD 'WF4B0' codep=0x224c wordp=0xf4b0 params=1 returns=1
// ================================================

void WF4B0() // WF4B0
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push((Read16(Pop() + 1)&0xFF) & 7); //  1+ C@ 7 AND
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xf4c4: WORD 'WF4C6' codep=0x224c wordp=0xf4c6 params=0 returns=0
// ================================================

void WF4C6() // WF4C6
{
  unsigned short int i, imax;
  Push(Read16(pp_SPACIAL_dash_CONTEXT)==1?1:0); // SPACIAL-CONTEXT @ 1 =
  if (Pop() != 0)
  {
    Push2Words("*SHIP");
    _gt_C_plus_S(); // >C+S
    Push(0x63ef+WD9D4.offset); // WD9D4<IFIELD>
    WF4B0(); // WF4B0
    Push(0x63ef+WD9D9.offset); // WD9D9<IFIELD>
    WF4B0(); // WF4B0
    Push(Pop() + Pop()); // +
    Push(0x63ef+WD9E3.offset); // WD9E3<IFIELD>
    WF4B0(); // WF4B0
    Push(Pop() + Pop()); // +
    Push(0x63ef+WD9DE.offset); // WD9DE<IFIELD>
    WF4B0(); // WF4B0
    Push(Pop() + Pop()); // +
    Push(Read16(regsp)); // DUP
    Push2Words("*ASSIGN-CREW");
    _gt_C_plus_S(); // >C+S
    Push(0x63ef+WD9C0.offset); // WD9C0<IFIELD>
    Get_gt_C_plus_S(); // @>C+S
    Push(0);

    i = 0x63ef+WD9BB.offset; // WD9BB<IFIELD>
    imax = (0x63ef+WD9BB.offset) + 5; // WD9BB<IFIELD> 5 +
    do // (DO)
    {
      Push(Pop() + (Read16(i)&0xFF)); //  I C@ +
      i++;
    } while(i<imax); // (LOOP)

    Push(Pop() - 0x0226); //  0x0226 -
    Push(0);
    MAX(); // MAX
    Push(0x01f4);
    _star__slash_(); // */
    Push(Pop() + Pop()); // +
    CDROP(); // CDROP
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
  } else
  {
    Push(0);
  }
  Push(pp_WDA65); // WDA65
  Store_3(); // !_3
}


// ================================================
// 0xf530: WORD 'ICOMM' codep=0x224c wordp=0xf53a
// ================================================
// entry

void ICOMM() // ICOMM
{
  Push(pp_SPACIAL_dash_CONTEXT); // SPACIAL-CONTEXT
  Store_3(); // !_3
  Push(0xda3b); // 'WDA3B'
  OFF(); // OFF
  Push(0xda37); // 'WDA37'
  OFF(); // OFF
  IAPWR(); // IAPWR
  WF4C6(); // WF4C6
  WF27A(); // WF27A
  INIT_GCOMM(); // INIT_GCOMM
  INIT_dash_MCOMM(); // INIT-MCOMM
  _gt_DISPLAY(); // >DISPLAY
}

// 0xf558: db 0x43 0x4f 0x4d 0x4d 0x2d 0x56 0x4f 0x43 0x00 'COMM-VOC '

