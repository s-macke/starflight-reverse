// ====== OVERLAY 'COMM-OV' ======
// store offset = 0xd920
// overlay size   = 0x1c40

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WD936  codep:0x744d wordp:0xd936 size:0x0003 C-string:'WD936'
//           WD93B  codep:0x224c wordp:0xd93b size:0x0010 C-string:'WD93B'
//           WD94D  codep:0x744d wordp:0xd94d size:0x0003 C-string:'WD94D'
//           WD952  codep:0x744d wordp:0xd952 size:0x0003 C-string:'WD952'
//           WD957  codep:0x744d wordp:0xd957 size:0x0003 C-string:'WD957'
//           WD95C  codep:0x744d wordp:0xd95c size:0x0003 C-string:'WD95C'
//           WD961  codep:0x744d wordp:0xd961 size:0x0003 C-string:'WD961'
//           WD966  codep:0x744d wordp:0xd966 size:0x0003 C-string:'WD966'
//           WD96B  codep:0x744d wordp:0xd96b size:0x0003 C-string:'WD96B'
//           WD970  codep:0x744d wordp:0xd970 size:0x0003 C-string:'WD970'
//           WD975  codep:0x744d wordp:0xd975 size:0x0003 C-string:'WD975'
//           WD97A  codep:0x744d wordp:0xd97a size:0x0003 C-string:'WD97A'
//            CPIC  codep:0x744d wordp:0xd97f size:0x0003 C-string:'CPIC'
//           WD984  codep:0x744d wordp:0xd984 size:0x0003 C-string:'WD984'
//           WD989  codep:0x744d wordp:0xd989 size:0x0003 C-string:'WD989'
//           WD98E  codep:0x744d wordp:0xd98e size:0x0003 C-string:'WD98E'
//           WD993  codep:0x744d wordp:0xd993 size:0x0003 C-string:'WD993'
//             FPE  codep:0x744d wordp:0xd998 size:0x0003 C-string:'FPE'
//             HPE  codep:0x744d wordp:0xd99d size:0x0003 C-string:'HPE'
//           WD9A2  codep:0x744d wordp:0xd9a2 size:0x0003 C-string:'WD9A2'
//           WD9A7  codep:0x744d wordp:0xd9a7 size:0x0003 C-string:'WD9A7'
//           WD9AC  codep:0x744d wordp:0xd9ac size:0x0003 C-string:'WD9AC'
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
//           WDA0F  codep:0x2214 wordp:0xda0f size:0x0002 C-string:'WDA0F'
//       P-POSTURE  codep:0x1d29 wordp:0xda13 size:0x0002 C-string:'P_dash_POSTURE'
//           WDA17  codep:0x1d29 wordp:0xda17 size:0x0002 C-string:'WDA17'
//       P-SUBJECT  codep:0x1d29 wordp:0xda1b size:0x0002 C-string:'P_dash_SUBJECT'
//          P-QUES  codep:0x1d29 wordp:0xda1f size:0x0002 C-string:'P_dash_QUES'
//           WDA23  codep:0x1d29 wordp:0xda23 size:0x0002 C-string:'WDA23'
//           WDA27  codep:0x1d29 wordp:0xda27 size:0x0002 C-string:'WDA27'
//      #A-PHRASES  codep:0x1d29 wordp:0xda2b size:0x0002 C-string:'_n_A_dash_PHRASES'
//         POSTURE  codep:0x1d29 wordp:0xda2f size:0x0002 C-string:'POSTURE'
//           WDA33  codep:0x1d29 wordp:0xda33 size:0x0002 C-string:'WDA33'
//           WDA37  codep:0x2214 wordp:0xda37 size:0x0002 C-string:'WDA37'
//           WDA3B  codep:0x2214 wordp:0xda3b size:0x0002 C-string:'WDA3B'
//         SUBJECT  codep:0x1d29 wordp:0xda3f size:0x0002 C-string:'SUBJECT'
//        #A-HAILS  codep:0x1d29 wordp:0xda43 size:0x0002 C-string:'_n_A_dash_HAILS'
//           WDA47  codep:0x1d29 wordp:0xda47 size:0x0002 C-string:'WDA47'
//           WDA4B  codep:0x1d29 wordp:0xda4b size:0x0002 C-string:'WDA4B'
//           WDA4F  codep:0x1d29 wordp:0xda4f size:0x0004 C-string:'WDA4F'
//           WDA55  codep:0x2214 wordp:0xda55 size:0x0002 C-string:'WDA55'
//           WDA59  codep:0x1d29 wordp:0xda59 size:0x0002 C-string:'WDA59'
//           WDA5D  codep:0x2214 wordp:0xda5d size:0x0002 C-string:'WDA5D'
//           WDA61  codep:0x2214 wordp:0xda61 size:0x0002 C-string:'WDA61'
//           WDA65  codep:0x1d29 wordp:0xda65 size:0x0002 C-string:'WDA65'
//           WDA69  codep:0x1d29 wordp:0xda69 size:0x0002 C-string:'WDA69'
//           WDA6D  codep:0x2214 wordp:0xda6d size:0x0002 C-string:'WDA6D'
//           WDA71  codep:0x1d29 wordp:0xda71 size:0x0002 C-string:'WDA71'
//           WDA75  codep:0x2214 wordp:0xda75 size:0x0002 C-string:'WDA75'
//           WDA79  codep:0x2214 wordp:0xda79 size:0x0002 C-string:'WDA79'
//           WDA7D  codep:0x1d29 wordp:0xda7d size:0x0010 C-string:'WDA7D'
//           WDA8F  codep:0x1d29 wordp:0xda8f size:0x0010 C-string:'WDA8F'
//           WDAA1  codep:0x1d29 wordp:0xdaa1 size:0x0010 C-string:'WDAA1'
//           WDAB3  codep:0x1d29 wordp:0xdab3 size:0x0010 C-string:'WDAB3'
//          A-QUES  codep:0x1d29 wordp:0xdac5 size:0x0004 C-string:'A_dash_QUES'
//           WDACB  codep:0x1d29 wordp:0xdacb size:0x0002 C-string:'WDACB'
//           WDACF  codep:0x1d29 wordp:0xdacf size:0x0002 C-string:'WDACF'
//           WDAD3  codep:0x2214 wordp:0xdad3 size:0x0002 C-string:'WDAD3'
//           WDAD7  codep:0x1d29 wordp:0xdad7 size:0x0002 C-string:'WDAD7'
//           WDADB  codep:0x1d29 wordp:0xdadb size:0x0002 C-string:'WDADB'
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
//           WDB84  codep:0x224c wordp:0xdb84 size:0x0006 C-string:'WDB84'
//           WDB8C  codep:0x224c wordp:0xdb8c size:0x000c C-string:'WDB8C'
//           WDB9A  codep:0x224c wordp:0xdb9a size:0x000c C-string:'WDB9A'
//           WDBA8  codep:0x224c wordp:0xdba8 size:0x0006 C-string:'WDBA8'
//        P>AFIELD  codep:0x4a4f wordp:0xdbbb size:0x000c C-string:'P_gt_AFIELD'
//  POSTURE-EFFECT  codep:0x224c wordp:0xdbc9 size:0x0010 C-string:'POSTURE_dash_EFFECT'
//           WDBDB  codep:0x224c wordp:0xdbdb size:0x000e C-string:'WDBDB'
//         >BUTTON  codep:0x224c wordp:0xdbeb size:0x0012 C-string:'_gt_BUTTON'
//           WDBFF  codep:0x224c wordp:0xdbff size:0x000a C-string:'WDBFF'
//           WDC0B  codep:0x3b68 wordp:0xdc0b size:0x0004 C-string:'WDC0B'
//           WDC11  codep:0x3b68 wordp:0xdc11 size:0x0004 C-string:'WDC11'
//           WDC17  codep:0x3b68 wordp:0xdc17 size:0x0004 C-string:'WDC17'
//           WDC1D  codep:0x3b68 wordp:0xdc1d size:0x0004 C-string:'WDC1D'
//            #PHR  codep:0x4a4f wordp:0xdc2a size:0x0014 C-string:'_n_PHR'
//           WDC40  codep:0x224c wordp:0xdc40 size:0x000e C-string:'WDC40'
//          N>POST  codep:0x4a4f wordp:0xdc59 size:0x0014 C-string:'N_gt_POST'
//           WDC6F  codep:0x224c wordp:0xdc6f size:0x0066 C-string:'WDC6F'
//           WDCD7  codep:0x224c wordp:0xdcd7 size:0x0008 C-string:'WDCD7'
//           +!EDL  codep:0x224c wordp:0xdce9 size:0x005c C-string:'_plus__ex_EDL'
//     SET-OK-TIME  codep:0x224c wordp:0xdd47 size:0x0020 C-string:'SET_dash_OK_dash_TIME'
//  SET-TIRED-TIME  codep:0x224c wordp:0xdd69 size:0x0012 C-string:'SET_dash_TIRED_dash_TIME'
//           WDD7D  codep:0x224c wordp:0xdd7d size:0x0040 C-string:'WDD7D'
//           WDDBF  codep:0x224c wordp:0xddbf size:0x0050 C-string:'WDDBF'
//           WDE11  codep:0x224c wordp:0xde11 size:0x0018 C-string:'WDE11'
//           WDE2B  codep:0x224c wordp:0xde2b size:0x0040 C-string:'WDE2B'
//           WDE6D  codep:0x224c wordp:0xde6d size:0x003a C-string:'WDE6D'
//           WDEA9  codep:0x224c wordp:0xdea9 size:0x0010 C-string:'WDEA9'
//           WDEBB  codep:0x224c wordp:0xdebb size:0x000a C-string:'WDEBB'
//       >RESPOND$  codep:0x224c wordp:0xdec7 size:0x0010 C-string:'_gt_RESPOND_do_'
//          >HAIL$  codep:0x224c wordp:0xdee2 size:0x0010 C-string:'_gt_HAIL_do_'
//           WDEF4  codep:0x224c wordp:0xdef4 size:0x001e C-string:'WDEF4'
//           WDF14  codep:0x224c wordp:0xdf14 size:0x001c C-string:'WDF14'
//           WDF32  codep:0x1d29 wordp:0xdf32 size:0x00e0 C-string:'WDF32'
//           WE014  codep:0x224c wordp:0xe014 size:0x0044 C-string:'WE014'
//           WE05A  codep:0x224c wordp:0xe05a size:0x000c C-string:'WE05A'
//           WE068  codep:0x224c wordp:0xe068 size:0x0044 C-string:'WE068'
//             O>P  codep:0x4a4f wordp:0xe0b4 size:0x0010 C-string:'O_gt_P'
//           WE0C6  codep:0x224c wordp:0xe0c6 size:0x0030 C-string:'WE0C6'
//       TERMINATE  codep:0x224c wordp:0xe0f8 size:0x0012 C-string:'TERMINATE'
//           WE10C  codep:0x224c wordp:0xe10c size:0x0006 C-string:'WE10C'
//           ACASE  codep:0x4a4f wordp:0xe11c size:0x000c C-string:'ACASE'
//           WE12A  codep:0x224c wordp:0xe12a size:0x0034 C-string:'WE12A'
//           WE160  codep:0x224c wordp:0xe160 size:0x002e C-string:'WE160'
//           WE190  codep:0x224c wordp:0xe190 size:0x0052 C-string:'WE190'
//           WE1E4  codep:0x224c wordp:0xe1e4 size:0x000a C-string:'WE1E4'
//           WE1F0  codep:0x224c wordp:0xe1f0 size:0x0054 C-string:'WE1F0'
//           WE246  codep:0x224c wordp:0xe246 size:0x000e C-string:'WE246'
//        CTSCROLL  codep:0x224c wordp:0xe261 size:0x0042 C-string:'CTSCROLL'
//           WE2A5  codep:0x224c wordp:0xe2a5 size:0x0042 C-string:'WE2A5'
//           WE2E9  codep:0x224c wordp:0xe2e9 size:0x000c C-string:'WE2E9'
//           WE2F7  codep:0x224c wordp:0xe2f7 size:0x000c C-string:'WE2F7'
//           WE305  codep:0x224c wordp:0xe305 size:0x000c C-string:'WE305'
//           WE313  codep:0x224c wordp:0xe313 size:0x0014 C-string:'WE313'
//           WE329  codep:0x224c wordp:0xe329 size:0x0020 C-string:'WE329'
//           WE34B  codep:0x224c wordp:0xe34b size:0x0018 C-string:'WE34B'
//           WE365  codep:0x224c wordp:0xe365 size:0x0012 C-string:'WE365'
//           WE379  codep:0x224c wordp:0xe379 size:0x0014 C-string:'WE379'
//           WE38F  codep:0x224c wordp:0xe38f size:0x001b C-string:'WE38F'
//           WE3AC  codep:0x224c wordp:0xe3ac size:0x0015 C-string:'WE3AC'
//           WE3C3  codep:0x224c wordp:0xe3c3 size:0x0006 C-string:'WE3C3'
//              ?S  codep:0x4a4f wordp:0xe3d0 size:0x0014 C-string:'IsS'
//           WE3E6  codep:0x224c wordp:0xe3e6 size:0x0008 C-string:'WE3E6'
//             SPL  codep:0x4a4f wordp:0xe3f6 size:0x0024 C-string:'SPL'
//           WE41C  codep:0x224c wordp:0xe41c size:0x001a C-string:'WE41C'
//     (PHRASE>CT)  codep:0x224c wordp:0xe446 size:0x003a C-string:'_ro_PHRASE_gt_CT_rc_'
//           WE482  codep:0x224c wordp:0xe482 size:0x002e C-string:'WE482'
//      ?COMM-BTNS  codep:0x1d29 wordp:0xe4b2 size:0x0002 C-string:'IsCOMM_dash_BTNS'
//      !A-SUBJECT  codep:0x224c wordp:0xe4b6 size:0x001c C-string:'StoreA_dash_SUBJECT'
//           WE4D4  codep:0x224c wordp:0xe4d4 size:0x0006 C-string:'WE4D4'
//           WE4DC  codep:0x224c wordp:0xe4dc size:0x0008 C-string:'WE4DC'
//           WE4E6  codep:0x224c wordp:0xe4e6 size:0x0008 C-string:'WE4E6'
//           WE4F0  codep:0x224c wordp:0xe4f0 size:0x0008 C-string:'WE4F0'
//        +4/9>EDL  codep:0x224c wordp:0xe4fa size:0x0018 C-string:'_plus_4_slash_9_gt_EDL'
//           WE514  codep:0x224c wordp:0xe514 size:0x0008 C-string:'WE514'
//         YES>EDL  codep:0x224c wordp:0xe51e size:0x0006 C-string:'YES_gt_EDL'
//          NO-EDL  codep:0x224c wordp:0xe526 size:0x0006 C-string:'NO_dash_EDL'
//           WE52E  codep:0x224c wordp:0xe52e size:0x0016 C-string:'WE52E'
//           WE546  codep:0x224c wordp:0xe546 size:0x000c C-string:'WE546'
//           WE554  codep:0x224c wordp:0xe554 size:0x000c C-string:'WE554'
//           WE562  codep:0x224c wordp:0xe562 size:0x001a C-string:'WE562'
//           WE57E  codep:0x224c wordp:0xe57e size:0x000c C-string:'WE57E'
//           WE58C  codep:0x224c wordp:0xe58c size:0x0012 C-string:'WE58C'
//           WE5A0  codep:0x224c wordp:0xe5a0 size:0x0006 C-string:'WE5A0'
//           WE5A8  codep:0x224c wordp:0xe5a8 size:0x0008 C-string:'WE5A8'
//           WE5B2  codep:0x224c wordp:0xe5b2 size:0x0008 C-string:'WE5B2'
//           WE5BC  codep:0x224c wordp:0xe5bc size:0x0008 C-string:'WE5BC'
//           WE5C6  codep:0x224c wordp:0xe5c6 size:0x0008 C-string:'WE5C6'
//           WE5D0  codep:0x224c wordp:0xe5d0 size:0x0008 C-string:'WE5D0'
//           WE5DA  codep:0x224c wordp:0xe5da size:0x0008 C-string:'WE5DA'
//           WE5E4  codep:0x224c wordp:0xe5e4 size:0x0008 C-string:'WE5E4'
//           WE5EE  codep:0x224c wordp:0xe5ee size:0x0006 C-string:'WE5EE'
//           WE5F6  codep:0x224c wordp:0xe5f6 size:0x0011 C-string:'WE5F6'
//           WE609  codep:0x224c wordp:0xe609 size:0x000f C-string:'WE609'
//           WE61A  codep:0x224c wordp:0xe61a size:0x0016 C-string:'WE61A'
//           WE632  codep:0x224c wordp:0xe632 size:0x0016 C-string:'WE632'
//           WE64A  codep:0x224c wordp:0xe64a size:0x0016 C-string:'WE64A'
//           WE662  codep:0x224c wordp:0xe662 size:0x0016 C-string:'WE662'
//           WE67A  codep:0x224c wordp:0xe67a size:0x0014 C-string:'WE67A'
//           WE690  codep:0x224c wordp:0xe690 size:0x001a C-string:'WE690'
//           WE6AC  codep:0x224c wordp:0xe6ac size:0x0014 C-string:'WE6AC'
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
//           WE7C8  codep:0x224c wordp:0xe7c8 size:0x0006 C-string:'WE7C8'
//           WE7D0  codep:0x224c wordp:0xe7d0 size:0x0006 C-string:'WE7D0'
//           WE7D8  codep:0x224c wordp:0xe7d8 size:0x0006 C-string:'WE7D8'
//           WE7E0  codep:0x224c wordp:0xe7e0 size:0x0006 C-string:'WE7E0'
//           WE7E8  codep:0x224c wordp:0xe7e8 size:0x0008 C-string:'WE7E8'
//           WE7F2  codep:0x224c wordp:0xe7f2 size:0x000a C-string:'WE7F2'
//           WE7FE  codep:0x224c wordp:0xe7fe size:0x000e C-string:'WE7FE'
//           WE80E  codep:0x224c wordp:0xe80e size:0x002a C-string:'WE80E'
//           WE83A  codep:0x224c wordp:0xe83a size:0x0014 C-string:'WE83A'
//           WE850  codep:0x224c wordp:0xe850 size:0x0016 C-string:'WE850'
//           WE868  codep:0x224c wordp:0xe868 size:0x004c C-string:'WE868'
//           WE8B6  codep:0x224c wordp:0xe8b6 size:0x000a C-string:'WE8B6'
//           WE8C2  codep:0x224c wordp:0xe8c2 size:0x000c C-string:'WE8C2'
//           WE8D0  codep:0x224c wordp:0xe8d0 size:0x000c C-string:'WE8D0'
//           WE8DE  codep:0x224c wordp:0xe8de size:0x000a C-string:'WE8DE'
//           WE8EA  codep:0x224c wordp:0xe8ea size:0x001a C-string:'WE8EA'
//           WE906  codep:0x224c wordp:0xe906 size:0x000a C-string:'WE906'
//           WE912  codep:0x224c wordp:0xe912 size:0x001a C-string:'WE912'
//           WE92E  codep:0x224c wordp:0xe92e size:0x000a C-string:'WE92E'
//           WE93A  codep:0x224c wordp:0xe93a size:0x000a C-string:'WE93A'
//           WE946  codep:0x224c wordp:0xe946 size:0x000c C-string:'WE946'
//           WE954  codep:0x224c wordp:0xe954 size:0x000c C-string:'WE954'
//           WE962  codep:0x224c wordp:0xe962 size:0x000c C-string:'WE962'
//           WE970  codep:0x224c wordp:0xe970 size:0x000a C-string:'WE970'
//           WE97C  codep:0x224c wordp:0xe97c size:0x000e C-string:'WE97C'
//           WE98C  codep:0x224c wordp:0xe98c size:0x000a C-string:'WE98C'
//           WE998  codep:0x224c wordp:0xe998 size:0x001c C-string:'WE998'
//           WE9B6  codep:0x224c wordp:0xe9b6 size:0x000a C-string:'WE9B6'
//           WE9C2  codep:0x224c wordp:0xe9c2 size:0x000a C-string:'WE9C2'
//           WE9CE  codep:0x224c wordp:0xe9ce size:0x003c C-string:'WE9CE'
//           WEA0C  codep:0x224c wordp:0xea0c size:0x0016 C-string:'WEA0C'
//           WEA24  codep:0x224c wordp:0xea24 size:0x0010 C-string:'WEA24'
//           WEA36  codep:0x224c wordp:0xea36 size:0x0008 C-string:'WEA36'
//           <EDL>  codep:0xb869 wordp:0xea48 size:0x0069 C-string:'_st_EDL_gt_'
//          <TALK>  codep:0xb869 wordp:0xeabc size:0x00aa C-string:'_st_TALK_gt_'
//           <AUX>  codep:0xb869 wordp:0xeb70 size:0x009a C-string:'_st_AUX_gt_'
//          <COMM>  codep:0xb869 wordp:0xec15 size:0x0092 C-string:'_st_COMM_gt_'
//           WECA9  codep:0x224c wordp:0xeca9 size:0x0014 C-string:'WECA9'
//        P-PHRASE  codep:0x224c wordp:0xecbf size:0x002a C-string:'P_dash_PHRASE'
//           WECEB  codep:0x224c wordp:0xeceb size:0x0006 C-string:'WECEB'
//           WECF3  codep:0x224c wordp:0xecf3 size:0x002e C-string:'WECF3'
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
//           WEE62  codep:0x224c wordp:0xee62 size:0x0018 C-string:'WEE62'
//        >RESPOND  codep:0x224c wordp:0xee7c size:0x0016 C-string:'_gt_RESPOND'
//         EDL+AUX  codep:0x224c wordp:0xee9e size:0x0022 C-string:'EDL_plus_AUX'
//    COMM-EXPERTS  codep:0x224c wordp:0xeed1 size:0x002a C-string:'COMM_dash_EXPERTS'
//       .COMM-PIC  codep:0x224c wordp:0xeefd size:0x002e C-string:'DrawCOMM_dash_PIC'
//           WEF2D  codep:0x224c wordp:0xef2d size:0x003e C-string:'WEF2D'
//           WEF6D  codep:0x224c wordp:0xef6d size:0x002e C-string:'WEF6D'
//           WEF9D  codep:0x224c wordp:0xef9d size:0x0024 C-string:'WEF9D'
//           WEFC3  codep:0x224c wordp:0xefc3 size:0x009c C-string:'WEFC3'
//           WF061  codep:0x224c wordp:0xf061 size:0x0072 C-string:'WF061'
//           WF0D5  codep:0x224c wordp:0xf0d5 size:0x0050 C-string:'WF0D5'
//          (CBTN)  codep:0x4a4f wordp:0xf130 size:0x000c C-string:'_ro_CBTN_rc_'
//           WF13E  codep:0x224c wordp:0xf13e size:0x002e C-string:'WF13E'
//             CL1  codep:0x224c wordp:0xf174 size:0x00b2 C-string:'CL1'
//           WF228  codep:0x224c wordp:0xf228 size:0x0050 C-string:'WF228'
//           WF27A  codep:0x224c wordp:0xf27a size:0x00b4 C-string:'WF27A'
//           WF330  codep:0x224c wordp:0xf330 size:0x0090 C-string:'WF330'
//           WF3C2  codep:0x224c wordp:0xf3c2 size:0x0078 C-string:'WF3C2'
//           IAPWR  codep:0x224c wordp:0xf444 size:0x006a C-string:'IAPWR'
//           WF4B0  codep:0x224c wordp:0xf4b0 size:0x0014 C-string:'WF4B0'
//           WF4C6  codep:0x224c wordp:0xf4c6 size:0x006a C-string:'WF4C6'
//           ICOMM  codep:0x224c wordp:0xf53a size:0x0000 C-string:'ICOMM'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_IsFIRED_dash_; // ?FIRED-
extern const unsigned short int cc_IsA_dash_SHIE; // ?A-SHIE
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

const unsigned short int pp_WDA17 = 0xda17; // WDA17 size: 2
// {0x3a, 0x20}

const unsigned short int pp_P_dash_SUBJECT = 0xda1b; // P-SUBJECT size: 2
// {0x3a, 0x20}

const unsigned short int pp_P_dash_QUES = 0xda1f; // P-QUES size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDA23 = 0xda23; // WDA23 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDA27 = 0xda27; // WDA27 size: 2
// {0x3a, 0x20}

const unsigned short int pp__n_A_dash_PHRASES = 0xda2b; // #A-PHRASES size: 2
// {0x3a, 0x20}

const unsigned short int pp_POSTURE = 0xda2f; // POSTURE size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDA33 = 0xda33; // WDA33 size: 2
// {0x3a, 0x20}

const unsigned short int pp_SUBJECT = 0xda3f; // SUBJECT size: 2
// {0x3a, 0x20}

const unsigned short int pp__n_A_dash_HAILS = 0xda43; // #A-HAILS size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDA47 = 0xda47; // WDA47 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDA4B = 0xda4b; // WDA4B size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDA4F = 0xda4f; // WDA4F size: 4
// {0x56, 0x3a, 0x20, 0x72}

const unsigned short int pp_WDA59 = 0xda59; // WDA59 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDA65 = 0xda65; // WDA65 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDA69 = 0xda69; // WDA69 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDA71 = 0xda71; // WDA71 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDA7D = 0xda7d; // WDA7D size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20}

const unsigned short int pp_WDA8F = 0xda8f; // WDA8F size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x31, 0x2f, 0x38, 0x36, 0x20, 0x29, 0xda}

const unsigned short int pp_WDAA1 = 0xdaa1; // WDAA1 size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x2b, 0xe6, 0x84, 0xda, 0xc4, 0x5e, 0x53}

const unsigned short int pp_WDAB3 = 0xdab3; // WDAB3 size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x49, 0x2d, 0x4f, 0x46, 0xc6, 0xa0, 0x3c}

const unsigned short int pp_A_dash_QUES = 0xdac5; // A-QUES size: 4
// {0x56, 0x3a, 0x20, 0x6d}

const unsigned short int pp_WDACB = 0xdacb; // WDACB size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDACF = 0xdacf; // WDACF size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDAD7 = 0xdad7; // WDAD7 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDADB = 0xdadb; // WDADB size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDF32 = 0xdf32; // WDF32 size: 224
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x48, 0x45, 0x41, 0x44, 0x3a, 0x20, 0x44, 0x49, 0x53, 0x4b, 0x3e, 0x44, 0x53, 0x50, 0x20, 0x28, 0x20, 0x2d, 0x2d, 0x20, 0x5c, 0x20, 0x6d, 0x6f, 0x76, 0x65, 0x20, 0x64, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x20, 0x66, 0x72, 0x6f, 0x6d, 0x20, 0x73, 0x61, 0x76, 0x65, 0x20, 0x64, 0x69, 0x73, 0x6b, 0x20, 0x74, 0x6f, 0x20, 0x29, 0x20, 0x20, 0x20, 0x20, 0x54, 0x3a, 0x20, 0x28, 0x20, 0x74, 0x65, 0x6d, 0x70, 0x6f, 0x72, 0x61, 0x72, 0x79, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x63, 0x61, 0x63, 0x68, 0x65, 0x29, 0x20}

const unsigned short int pp_IsCOMM_dash_BTNS = 0xe4b2; // ?COMM-BTNS size: 2
// {0x00, 0x00}

const unsigned short int pp_WED72 = 0xed72; // WED72 size: 3
// {0x02, 0x08, 0x01}


const unsigned short int cc_WDA0F = 0xda0f; // WDA0F
const unsigned short int cc_WDA37 = 0xda37; // WDA37
const unsigned short int cc_WDA3B = 0xda3b; // WDA3B
const unsigned short int cc_WDA55 = 0xda55; // WDA55
const unsigned short int cc_WDA5D = 0xda5d; // WDA5D
const unsigned short int cc_WDA61 = 0xda61; // WDA61
const unsigned short int cc_WDA6D = 0xda6d; // WDA6D
const unsigned short int cc_WDA75 = 0xda75; // WDA75
const unsigned short int cc_WDA79 = 0xda79; // WDA79
const unsigned short int cc_WDAD3 = 0xdad3; // WDAD3
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
// 0xd934: WORD 'WD936' codep=0x744d wordp=0xd936
// ================================================
IFieldType WD936 = {STRINGIDX, 0x0b, 0xff};

// ================================================
// 0xd939: WORD 'WD93B' codep=0x224c wordp=0xd93b params=2 returns=2
// ================================================

void WD93B() // WD93B
{
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WD936.offset); // WD936<IFIELD>
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xd94b: WORD 'WD94D' codep=0x744d wordp=0xd94d
// ================================================
IFieldType WD94D = {PHRASECONTRLIDX, 0x0b, 0x01};

// ================================================
// 0xd950: WORD 'WD952' codep=0x744d wordp=0xd952
// ================================================
IFieldType WD952 = {PHRASECONTRLIDX, 0x0c, 0x01};

// ================================================
// 0xd955: WORD 'WD957' codep=0x744d wordp=0xd957
// ================================================
IFieldType WD957 = {PHRASECONTRLIDX, 0x0d, 0x01};

// ================================================
// 0xd95a: WORD 'WD95C' codep=0x744d wordp=0xd95c
// ================================================
IFieldType WD95C = {PHRASECONTRLIDX, 0x0e, 0x01};

// ================================================
// 0xd95f: WORD 'WD961' codep=0x744d wordp=0xd961
// ================================================
IFieldType WD961 = {PHRASECONTRLIDX, 0x0f, 0x01};

// ================================================
// 0xd964: WORD 'WD966' codep=0x744d wordp=0xd966
// ================================================
IFieldType WD966 = {PHRASECONTRLIDX, 0x10, 0x01};

// ================================================
// 0xd969: WORD 'WD96B' codep=0x744d wordp=0xd96b
// ================================================
IFieldType WD96B = {ORIGINATORIDX, 0x0b, 0x01};

// ================================================
// 0xd96e: WORD 'WD970' codep=0x744d wordp=0xd970
// ================================================
IFieldType WD970 = {ORIGINATORIDX, 0x0c, 0x01};

// ================================================
// 0xd973: WORD 'WD975' codep=0x744d wordp=0xd975
// ================================================
IFieldType WD975 = {ORIGINATORIDX, 0x0d, 0x01};

// ================================================
// 0xd978: WORD 'WD97A' codep=0x744d wordp=0xd97a
// ================================================
IFieldType WD97A = {ORIGINATORIDX, 0x12, 0x01};

// ================================================
// 0xd97d: WORD 'CPIC' codep=0x744d wordp=0xd97f
// ================================================
IFieldType CPIC = {ORIGINATORIDX, 0x1d, 0x01};

// ================================================
// 0xd982: WORD 'WD984' codep=0x744d wordp=0xd984
// ================================================
IFieldType WD984 = {ORIGINATORIDX, 0x13, 0x01};

// ================================================
// 0xd987: WORD 'WD989' codep=0x744d wordp=0xd989
// ================================================
IFieldType WD989 = {ORIGINATORIDX, 0x14, 0x01};

// ================================================
// 0xd98c: WORD 'WD98E' codep=0x744d wordp=0xd98e
// ================================================
IFieldType WD98E = {ORIGINATORIDX, 0x15, 0x01};

// ================================================
// 0xd991: WORD 'WD993' codep=0x744d wordp=0xd993
// ================================================
IFieldType WD993 = {ORIGINATORIDX, 0x16, 0x01};

// ================================================
// 0xd996: WORD 'FPE' codep=0x744d wordp=0xd998
// ================================================
IFieldType FPE = {ORIGINATORIDX, 0x17, 0x01};

// ================================================
// 0xd99b: WORD 'HPE' codep=0x744d wordp=0xd99d
// ================================================
IFieldType HPE = {ORIGINATORIDX, 0x18, 0x01};

// ================================================
// 0xd9a0: WORD 'WD9A2' codep=0x744d wordp=0xd9a2
// ================================================
IFieldType WD9A2 = {ORIGINATORIDX, 0x19, 0x01};

// ================================================
// 0xd9a5: WORD 'WD9A7' codep=0x744d wordp=0xd9a7
// ================================================
IFieldType WD9A7 = {ORIGINATORIDX, 0x1a, 0x03};

// ================================================
// 0xd9aa: WORD 'WD9AC' codep=0x744d wordp=0xd9ac
// ================================================
IFieldType WD9AC = {CREWMEMBERIDX, 0x1d, 0x01};

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
// 0xda0d: WORD 'WDA0F' codep=0x2214 wordp=0xda0f
// ================================================
// 0xda0f: dw 0x0000

// ================================================
// 0xda11: WORD 'P-POSTURE' codep=0x1d29 wordp=0xda13
// ================================================
// 0xda13: db 0x3a 0x20 ': '

// ================================================
// 0xda15: WORD 'WDA17' codep=0x1d29 wordp=0xda17
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
// 0xda21: WORD 'WDA23' codep=0x1d29 wordp=0xda23
// ================================================
// 0xda23: db 0x3a 0x20 ': '

// ================================================
// 0xda25: WORD 'WDA27' codep=0x1d29 wordp=0xda27
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
// 0xda31: WORD 'WDA33' codep=0x1d29 wordp=0xda33
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
// 0xda45: WORD 'WDA47' codep=0x1d29 wordp=0xda47
// ================================================
// 0xda47: db 0x3a 0x20 ': '

// ================================================
// 0xda49: WORD 'WDA4B' codep=0x1d29 wordp=0xda4b
// ================================================
// 0xda4b: db 0x3a 0x20 ': '

// ================================================
// 0xda4d: WORD 'WDA4F' codep=0x1d29 wordp=0xda4f
// ================================================
// 0xda4f: db 0x56 0x3a 0x20 0x72 'V: r'

// ================================================
// 0xda53: WORD 'WDA55' codep=0x2214 wordp=0xda55
// ================================================
// 0xda55: dw 0x0000

// ================================================
// 0xda57: WORD 'WDA59' codep=0x1d29 wordp=0xda59
// ================================================
// 0xda59: db 0x3a 0x20 ': '

// ================================================
// 0xda5b: WORD 'WDA5D' codep=0x2214 wordp=0xda5d
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
// 0xda67: WORD 'WDA69' codep=0x1d29 wordp=0xda69
// ================================================
// 0xda69: db 0x3a 0x20 ': '

// ================================================
// 0xda6b: WORD 'WDA6D' codep=0x2214 wordp=0xda6d
// ================================================
// 0xda6d: dw 0x0000

// ================================================
// 0xda6f: WORD 'WDA71' codep=0x1d29 wordp=0xda71
// ================================================
// 0xda71: db 0x3a 0x20 ': '

// ================================================
// 0xda73: WORD 'WDA75' codep=0x2214 wordp=0xda75
// ================================================
// 0xda75: dw 0x0000

// ================================================
// 0xda77: WORD 'WDA79' codep=0x2214 wordp=0xda79
// ================================================
// 0xda79: dw 0x0000

// ================================================
// 0xda7b: WORD 'WDA7D' codep=0x1d29 wordp=0xda7d
// ================================================
// 0xda7d: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 ':  ALLOT        '

// ================================================
// 0xda8d: WORD 'WDA8F' codep=0x1d29 wordp=0xda8f
// ================================================
// 0xda8f: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x31 0x2f 0x38 0x36 0x20 0x29 0xda ':  ALLOT 1/86 ) '

// ================================================
// 0xda9f: WORD 'WDAA1' codep=0x1d29 wordp=0xdaa1
// ================================================
// 0xdaa1: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x2b 0xe6 0x84 0xda 0xc4 0x5e 0x53 ':  ALLOT +    ^S'

// ================================================
// 0xdab1: WORD 'WDAB3' codep=0x1d29 wordp=0xdab3
// ================================================
// 0xdab3: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x49 0x2d 0x4f 0x46 0xc6 0xa0 0x3c ':  ALLOT I-OF  <'

// ================================================
// 0xdac3: WORD 'A-QUES' codep=0x1d29 wordp=0xdac5
// ================================================
// 0xdac5: db 0x56 0x3a 0x20 0x6d 'V: m'

// ================================================
// 0xdac9: WORD 'WDACB' codep=0x1d29 wordp=0xdacb
// ================================================
// 0xdacb: db 0x3a 0x20 ': '

// ================================================
// 0xdacd: WORD 'WDACF' codep=0x1d29 wordp=0xdacf
// ================================================
// 0xdacf: db 0x3a 0x20 ': '

// ================================================
// 0xdad1: WORD 'WDAD3' codep=0x2214 wordp=0xdad3
// ================================================
// 0xdad3: dw 0x0000

// ================================================
// 0xdad5: WORD 'WDAD7' codep=0x1d29 wordp=0xdad7
// ================================================
// 0xdad7: db 0x3a 0x20 ': '

// ================================================
// 0xdad9: WORD 'WDADB' codep=0x1d29 wordp=0xdadb
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
  Push(Read16(0x63ef+WD96B.offset)&0xFF); // WD96B<IFIELD> C@
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
  Push(Read16(pp_WDA27)); // WDA27 @
  Push(pp_SUBJECT); // SUBJECT
  Store_3(); // !_3
  Push(0xda5d); // 'WDA5D'
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
// 0xdb82: WORD 'WDB84' codep=0x224c wordp=0xdb84 params=0 returns=0
// ================================================

void WDB84() // WDB84
{
  Push(pp__ro_PHRASE_rc_); // (PHRASE)
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xdb8a: WORD 'WDB8C' codep=0x224c wordp=0xdb8c params=0 returns=1
// ================================================

void WDB8C() // WDB8C
{
  Push(pp_A_dash_QUES); // A-QUES
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+WD961.offset); // WD961<IFIELD>
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdb98: WORD 'WDB9A' codep=0x224c wordp=0xdb9a params=0 returns=1
// ================================================

void WDB9A() // WDB9A
{
  Push(pp_A_dash_QUES); // A-QUES
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+WD966.offset); // WD966<IFIELD>
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdba6: WORD 'WDBA8' codep=0x224c wordp=0xdba8 params=1 returns=0
// ================================================

void WDBA8() // WDBA8
{
  Push(pp_WDA27); // WDA27
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
    Push(0x63ef+WD993.offset); // IFIELD
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
// 0xdbd9: WORD 'WDBDB' codep=0x224c wordp=0xdbdb
// ================================================

void WDBDB() // WDBDB
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
    WDBDB(); // WDBDB
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  GetColor(BLUE);
  Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
  DrawON(); // .ON
}


// ================================================
// 0xdbfd: WORD 'WDBFF' codep=0x224c wordp=0xdbff params=0 returns=0
// ================================================

void WDBFF() // WDBFF
{
  P_gt_ORIGINATOR(); // P>ORIGINATOR
  GetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_3(); // !_3
}


// ================================================
// 0xdc09: WORD 'WDC0B' codep=0x3b68 wordp=0xdc0b
// ================================================
// 0xdc0b: dw 0x0014 0x000a

// ================================================
// 0xdc0f: WORD 'WDC11' codep=0x3b68 wordp=0xdc11
// ================================================
// 0xdc11: dw 0x000f 0x000a

// ================================================
// 0xdc15: WORD 'WDC17' codep=0x3b68 wordp=0xdc17
// ================================================
// 0xdc17: dw 0x000a 0x0005

// ================================================
// 0xdc1b: WORD 'WDC1D' codep=0x3b68 wordp=0xdc1d
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
    Push2Words("WDC0B");
    break;
  case 2:
    Push2Words("WDC11");
    break;
  case 4:
    Push2Words("WDC17");
    break;
  case 8:
    Push2Words("WDC1D");
    break;
  default:
    Push2Words("NULL");
    break;

  }
}

// ================================================
// 0xdc3e: WORD 'WDC40' codep=0x224c wordp=0xdc40
// ================================================

void WDC40() // WDC40
{
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  _n_PHR(); // #PHR case
  RRND(); // RRND
  Push(pp_WDA47); // WDA47
  Store_3(); // !_3
}


// ================================================
// 0xdc4e: WORD 'N>POST' codep=0x4a4f wordp=0xdc59
// ================================================

void N_gt_POST() // N>POST
{
  switch(Pop()) // N>POST
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
// 0xdc6d: WORD 'WDC6F' codep=0x224c wordp=0xdc6f
// ================================================

void WDC6F() // WDC6F
{
  Push(pp__ro_AORIGINATOR_rc_); // (AORIGINATOR)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(pp_EDL)); // EDL @
  Push(Read16(regsp)); // DUP
  Push(Read16(0x63ef+WD984.offset)&0xFF); // WD984<IFIELD> C@
  _st_(); // <
  Push(!Pop()); //  NOT
  OVER(); // OVER
  Push(Read16(0x63ef+WD989.offset)&0xFF); // WD989<IFIELD> C@
  _st_(); // <
  Push(!Pop()); //  NOT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(Read16(0x63ef+WD98E.offset)&0xFF); // WD98E<IFIELD> C@
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
  N_gt_POST(); // N>POST case
  Push(pp_A_dash_POSTU); // A-POSTU
  Store_3(); // !_3
  WDC40(); // WDC40
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
  WDC6F(); // WDC6F
  Push(pp_P_dash_SUBJECT); // P-SUBJECT
  OFF(); // OFF
  Push(Read16(pp_WDA71)==3?1:0); // WDA71 @ 3 =
  Push(2);
  WDCD7(); // WDCD7
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(pp__ro_AORIGINATOR_rc_); // (AORIGINATOR)
  Get_gt_C_plus_S(); // @>C+S
  Push(1);
  Push(0x63ef+WD97A.offset); // WD97A<IFIELD>
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
  Push(Read16(pp_WDA33)); // WDA33 @
  Push(0x0037);
  U_star_(); // U*
  OVER(); // OVER
  Push(Pop() * 2); //  2*
  Push(Read16(cc_WDA5D)); // WDA5D
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
  Push(pp_WDA4F); // WDA4F
  StoreD(); // D!
}


// ================================================
// 0xdd7b: WORD 'WDD7D' codep=0x224c wordp=0xdd7d params=1 returns=1
// ================================================

void WDD7D() // WDD7D
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
    Push(Pop() | Read16(pp_WDAD7)); //  WDAD7 @ OR
    Push(pp_WDAD7); // WDAD7
    Store_3(); // !_3
  }
  Push(a); // R>
  BIT(); // BIT
  Push(((Pop() & Read16(pp_WDAD7))==0?1:0)==0?1:0); //  WDAD7 @ AND 0= 0=
}


// ================================================
// 0xddbd: WORD 'WDDBF' codep=0x224c wordp=0xddbf params=0 returns=1
// ================================================

void WDDBF() // WDDBF
{
  Push(0);
  Push(0x0100);
  Push(pp_WDA4B); // WDA4B
  Store_3(); // !_3
  do
  {
    Push(Read16(0x63ef+WD957.offset)&0xFF); // WD957<IFIELD> C@
    Push(Read16(pp_WDA4B)); // WDA4B @
    _st_(); // <
    Push((Read16(0x63ef+WD952.offset)&0xFF) & (Read16(pp_POSTURE)&0xFF)); // WD952<IFIELD> C@ POSTURE C@ AND
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    Push((Read16(0x63ef+WD94D.offset)&0xFF) & Read16(pp_WDA59)); // WD94D<IFIELD> C@ WDA59 @ AND
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      CI(); // CI
      Push(pp__ro_PHRASE_rc_); // (PHRASE)
      _1_dot_5_ex_(); // 1.5!
      Push(Read16(0x63ef+WD957.offset)&0xFF); // WD957<IFIELD> C@
      Push(pp_WDA4B); // WDA4B
      Store_3(); // !_3
      Pop(); // DROP
      Push(1);
    }
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
}


// ================================================
// 0xde0f: WORD 'WDE11' codep=0x224c wordp=0xde11 params=0 returns=1
// ================================================

void WDE11() // WDE11
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
// 0xde29: WORD 'WDE2B' codep=0x224c wordp=0xde2b
// ================================================

void WDE2B() // WDE2B
{
  Push(Read16(pp_SUBJECT)); // SUBJECT @
  Push(0x0033);
  OVER(); // OVER
  IFIND(); // IFIND
  Push(Pop()==0?1:0); //  0=
  SWAP(); // SWAP
  WDD7D(); // WDD7D
  Push(Pop() | Pop()); // OR
  Push(Read16(cc_WDA5D) & (Read16(pp_WDA59)==2?1:0)); // WDA5D WDA59 @ 2 = AND
  if (Pop() != 0)
  {
    WDE11(); // WDE11
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
// 0xde6b: WORD 'WDE6D' codep=0x224c wordp=0xde6d params=0 returns=0
// ================================================

void WDE6D() // WDE6D
{
  Push2Words("NULL");
  Push(pp__ro_PHRASE_rc_); // (PHRASE)
  _1_dot_5_ex_(); // 1.5!
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    WDE2B(); // WDE2B
    IsCHILD(); // ?CHILD
    if (Pop() != 0)
    {
      IOPEN(); // IOPEN
      WDDBF(); // WDDBF
      Push(Pop()==0?1:0); //  0=
      if (Pop() != 0)
      {
        ICLOSE(); // ICLOSE
        Push(5);
        Push(pp_SUBJECT); // SUBJECT
        Store_3(); // !_3
        WDE2B(); // WDE2B
        IOPEN(); // IOPEN
        WDDBF(); // WDDBF
        Pop(); // DROP
      }
      CDROP(); // CDROP
    }
    CDROP(); // CDROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdea7: WORD 'WDEA9' codep=0x224c wordp=0xdea9 params=0 returns=0
// ================================================

void WDEA9() // WDEA9
{
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(5);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
}


// ================================================
// 0xdeb9: WORD 'WDEBB' codep=0x224c wordp=0xdebb
// ================================================

void WDEBB() // WDEBB
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
  WDEA9(); // WDEA9
  SET_STR_AS_PARAM("RESPOND");
  WDEBB(); // WDEBB
}


// ================================================
// 0xded7: WORD '>HAIL$' codep=0x224c wordp=0xdee2
// ================================================
// entry

void _gt_HAIL_do_() // >HAIL$
{
  WDEA9(); // WDEA9
  SET_STR_AS_PARAM("HAIL   ");
  WDEBB(); // WDEBB
}


// ================================================
// 0xdef2: WORD 'WDEF4' codep=0x224c wordp=0xdef4 params=2 returns=0
// ================================================

void WDEF4() // WDEF4
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
// 0xdf12: WORD 'WDF14' codep=0x224c wordp=0xdf14 params=2 returns=1
// ================================================

void WDF14() // WDF14
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
// 0xdf30: WORD 'WDF32' codep=0x1d29 wordp=0xdf32
// ================================================
// 0xdf32: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x48 0x45 0x41 0x44 0x3a 0x20 0x44 0x49 0x53 0x4b 0x3e 0x44 0x53 0x50 0x20 0x28 0x20 0x2d 0x2d 0x20 0x5c 0x20 0x6d 0x6f 0x76 0x65 0x20 0x64 0x69 0x73 0x70 0x6c 0x61 0x79 0x20 0x69 0x6d 0x61 0x67 0x65 0x20 0x66 0x72 0x6f 0x6d 0x20 0x73 0x61 0x76 0x65 0x20 0x64 0x69 0x73 0x6b 0x20 0x74 0x6f 0x20 0x29 0x20 0x20 0x20 0x20 0x54 0x3a 0x20 0x28 0x20 0x74 0x65 0x6d 0x70 0x6f 0x72 0x61 0x72 0x79 0x20 0x6c 0x6f 0x63 0x61 0x74 0x69 0x6f 0x6e 0x20 0x69 0x6e 0x20 0x63 0x61 0x63 0x68 0x65 0x29 0x20 ':  ALLOT                                                                                                                      HEAD: DISK>DSP ( -- \ move display image from save disk to )    T: ( temporary location in cache) '

// ================================================
// 0xe012: WORD 'WE014' codep=0x224c wordp=0xe014 params=0 returns=0
// ================================================

void WE014() // WE014
{
  unsigned short int i, imax;
  Push(pp_WDF32); // WDF32
  Push(0x00e0);
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(0x63ef+WD9A7.offset); // WD9A7<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN

  i = 0;
  imax = 0x0020;
  do // (DO)
  {
    Push((0x63ef+WD936.offset) + 1); // WD936<IFIELD> 1+
    COUNT(); // COUNT
    HUFF_gt_(); // HUFF>
    Push(pp_LSCAN); // LSCAN
    Push(pp_WDF32 + i * 7); // WDF32 I 7 * +
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
// 0xe058: WORD 'WE05A' codep=0x224c wordp=0xe05a params=1 returns=2
// ================================================

void WE05A() // WE05A
{
  Push(Pop() * 7 + pp_WDF32); //  7 * WDF32 +
  COUNT(); // COUNT
}


// ================================================
// 0xe066: WORD 'WE068' codep=0x224c wordp=0xe068 params=2 returns=2
// ================================================

void WE068() // WE068
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
  Push(Read16(0x63ef+WD9A2.offset)&0xFF); // WD9A2<IFIELD> C@
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
    WDF14(); // WDF14
    Push(Pop() * i); //  I *
    Push(0x0020);
    MOD(); // MOD
    WE05A(); // WE05A
    WDEF4(); // WDEF4
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
// 0xe0c4: WORD 'WE0C6' codep=0x224c wordp=0xe0c6 params=0 returns=1
// ================================================

void WE0C6() // WE0C6
{
  Push((Read16(cc_WDA61) & Read16(cc_WDA5D)) & (Read16(pp_CONTEXT_dash_ID_n_)==4?1:0)); // WDA61 WDA5D AND CONTEXT-ID# @ 4 = AND
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
  Push(Read16(pp_WDACB)); // WDACB @
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
  Push(pp_WDA69); // WDA69
  OFF(); // OFF
  Push(0xafa3); // 'CEX+WAX'
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  Store_3(); // !_3
}


// ================================================
// 0xe10a: WORD 'WE10C' codep=0x224c wordp=0xe10c params=1 returns=0
// ================================================

void WE10C() // WE10C
{
  Pop(); // DROP
  TERMINATE(); // TERMINATE
}


// ================================================
// 0xe112: WORD 'ACASE' codep=0x4a4f wordp=0xe11c
// ================================================

void ACASE() // ACASE
{
  switch(Pop()) // ACASE
  {
  case 0:
    _plus__ex_EDL(); // +!EDL
    break;
  case 1:
    WE10C(); // WE10C
    break;
  default:
    Pop(); // DROP
    break;

  }
}

// ================================================
// 0xe128: WORD 'WE12A' codep=0x224c wordp=0xe12a params=0 returns=0
// ================================================

void WE12A() // WE12A
{
  WDB84(); // WDB84
  Push(0x63ef+WD95C.offset); // WD95C<IFIELD>
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
    ACASE(); // ACASE case
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xe15e: WORD 'WE160' codep=0x224c wordp=0xe160
// ================================================

void WE160() // WE160
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
// 0xe18e: WORD 'WE190' codep=0x224c wordp=0xe190
// ================================================

void WE190() // WE190
{
  unsigned short int i, imax;
  WE160(); // WE160
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
// 0xe1e2: WORD 'WE1E4' codep=0x224c wordp=0xe1e4 params=2 returns=2
// ================================================

void WE1E4() // WE1E4
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
// 0xe244: WORD 'WE246' codep=0x224c wordp=0xe246 params=1 returns=1
// ================================================

void WE246() // WE246
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
  Push(pp_WDADB); // WDADB
  _plus__ex__2(); // +!_2
  Push(Read16(pp_WDADB)); // WDADB @
  Push(7);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0x2ee0); Push(0x0000);
    WE1F0(); // WE1F0
    Push(pp_WDADB); // WDADB
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
// 0xe2a3: WORD 'WE2A5' codep=0x224c wordp=0xe2a5 params=2 returns=0
// ================================================

void WE2A5() // WE2A5
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    WE246(); // WE246
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
// 0xe2e7: WORD 'WE2E9' codep=0x224c wordp=0xe2e9 params=0 returns=2
// ================================================

void WE2E9() // WE2E9
{
  Push(pp_WDA7D + 1); // WDA7D 1+
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() - 1)&0xFF); //  1- C@
}


// ================================================
// 0xe2f5: WORD 'WE2F7' codep=0x224c wordp=0xe2f7 params=0 returns=2
// ================================================

void WE2F7() // WE2F7
{
  Push(pp_WDA8F + 1); // WDA8F 1+
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() - 1)&0xFF); //  1- C@
}


// ================================================
// 0xe303: WORD 'WE305' codep=0x224c wordp=0xe305 params=0 returns=2
// ================================================

void WE305() // WE305
{
  Push(pp_WDAA1 + 1); // WDAA1 1+
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() - 1)&0xFF); //  1- C@
}


// ================================================
// 0xe311: WORD 'WE313' codep=0x224c wordp=0xe313 params=0 returns=2
// ================================================

void WE313() // WE313
{
  SET_STR_AS_PARAM("ISS");
  WE2A5(); // WE2A5
  Push(pp_WDAB3 + 1); // WDAB3 1+
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() - 1)&0xFF); //  1- C@
}


// ================================================
// 0xe327: WORD 'WE329' codep=0x224c wordp=0xe329 params=2 returns=2
// ================================================

void WE329() // WE329
{
  while(1)
  {
    OVER(); // OVER
    Push(!((Read16(Pop())&0xFF)==0x0029?1:0)); //  C@ 0x0029 = NOT
    OVER(); // OVER
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) break;

    WE1E4(); // WE1E4
  }
  WE1E4(); // WE1E4
}


// ================================================
// 0xe349: WORD 'WE34B' codep=0x224c wordp=0xe34b params=2 returns=3
// ================================================

void WE34B() // WE34B
{
  WE1E4(); // WE1E4
  Push(Read16(pp_P_dash_QUES)==9?1:0); // P-QUES @ 9 =
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    WE329(); // WE329
    Push2Words("NULL");
  }
  Push(0);
}


// ================================================
// 0xe363: WORD 'WE365' codep=0x224c wordp=0xe365 params=0 returns=2
// ================================================

void WE365() // WE365
{
  SET_STR_AS_PARAM("YOUR");
  WE2A5(); // WE2A5
  SET_STR_AS_PARAM("RACE");
}


// ================================================
// 0xe377: WORD 'WE379' codep=0x224c wordp=0xe379 params=0 returns=2
// ================================================

void WE379() // WE379
{
  SET_STR_AS_PARAM("OTHER");
  WE2A5(); // WE2A5
  SET_STR_AS_PARAM("RACES");
}


// ================================================
// 0xe38d: WORD 'WE38F' codep=0x224c wordp=0xe38f params=0 returns=2
// ================================================

void WE38F() // WE38F
{
  SET_STR_AS_PARAM("THE");
  WE2A5(); // WE2A5
  SET_STR_AS_PARAM("OLD");
  WE2A5(); // WE2A5
  SET_STR_AS_PARAM("EMPIRE");
}


// ================================================
// 0xe3aa: WORD 'WE3AC' codep=0x224c wordp=0xe3ac params=0 returns=2
// ================================================

void WE3AC() // WE3AC
{
  SET_STR_AS_PARAM("THE");
  WE2A5(); // WE2A5
  SET_STR_AS_PARAM("ANCIENTS");
}


// ================================================
// 0xe3c1: WORD 'WE3C3' codep=0x224c wordp=0xe3c3 params=2 returns=3
// ================================================

void WE3C3() // WE3C3
{
  WE1E4(); // WE1E4
  Push(0);
}


// ================================================
// 0xe3c9: WORD '?S' codep=0x4a4f wordp=0xe3d0
// ================================================

void IsS() // ?S
{
  switch(Pop()) // ?S
  {
  case 7:
    WE365(); // WE365
    break;
  case 8:
    WE379(); // WE379
    break;
  case 10:
    WE38F(); // WE38F
    break;
  case 11:
    WE3AC(); // WE3AC
    break;
  default:
    WE3C3(); // WE3C3
    break;

  }
}

// ================================================
// 0xe3e4: WORD 'WE3E6' codep=0x224c wordp=0xe3e6
// ================================================

void WE3E6() // WE3E6
{
  Push(Read16(pp_P_dash_QUES)); // P-QUES @
  IsS(); // ?S case
}


// ================================================
// 0xe3ee: WORD 'SPL' codep=0x4a4f wordp=0xe3f6
// ================================================

void SPL() // SPL
{
  switch(Pop()) // SPL
  {
  case 42:
    WE305(); // WE305
    break;
  case 38:
    WE313(); // WE313
    break;
  case 37:
    WE2E9(); // WE2E9
    break;
  case 47:
    WE3E6(); // WE3E6
    break;
  case 40:
    WE34B(); // WE34B
    break;
  case 41:
    WE3C3(); // WE3C3
    break;
  case 43:
    WE2F7(); // WE2F7
    break;
  case 35:
    WE3C3(); // WE3C3
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xe41a: WORD 'WE41C' codep=0x224c wordp=0xe41c
// ================================================

void WE41C() // WE41C
{
  OVER(); // OVER
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
  _0_gt_(); // 0>
  Push(Pop() * Pop()); // *
  SPL(); // SPL case
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  WE2A5(); // WE2A5
  WE1E4(); // WE1E4
}


// ================================================
// 0xe436: WORD '(PHRASE>CT)' codep=0x224c wordp=0xe446
// ================================================
// entry

void _ro_PHRASE_gt_CT_rc_() // (PHRASE>CT)
{
  Push(Read16(regsp)); // DUP
  Push(pp_WDA33); // WDA33
  Store_3(); // !_3
  CTINIT(); // CTINIT
  Push(0);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  Push(Read16(pp_CTCOLOR)); // CTCOLOR @
  StoreCOLOR(); // !COLOR
  Push(pp_WDADB); // WDADB
  OFF(); // OFF
  CTSCROLL(); // CTSCROLL
  do
  {
    WE190(); // WE190
    WE41C(); // WE41C
    WE0C6(); // WE0C6
    if (Pop() != 0)
    {
      WE068(); // WE068
    }
    WE2A5(); // WE2A5
    Push(1);
    Push(pp_CTX); // CTX
    _plus__ex__2(); // +!_2
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe480: WORD 'WE482' codep=0x224c wordp=0xe482 params=0 returns=0
// ================================================

void WE482() // WE482
{
  Push(pp__ro_PHRASE_rc_); // (PHRASE)
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  WE12A(); // WE12A
  WDB84(); // WDB84
  Push((Read16(0x63ef+WD957.offset)&0xFF) + 1); // WD957<IFIELD> C@ 1+
  Push(0x63ef+WD957.offset); // WD957<IFIELD>
  C_ex_(); // C!
  IOPEN(); // IOPEN
  Push((0x63ef+WD936.offset) + 1); // WD936<IFIELD> 1+
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
// 0xe4b4: WORD '!A-SUBJECT' codep=0x224c wordp=0xe4b6 params=0 returns=1
// ================================================

void StoreA_dash_SUBJECT() // !A-SUBJECT
{
  CTINIT(); // CTINIT
  Push(0x0eca); Push(0x0002); // 'RECEIVING:'
  WD93B(); // WD93B
  DrawTTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
  WDBA8(); // WDBA8
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  WDE6D(); // WDE6D
  WE482(); // WE482
}


// ================================================
// 0xe4d2: WORD 'WE4D4' codep=0x224c wordp=0xe4d4
// ================================================

void WE4D4() // WE4D4
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
  WDB9A(); // WDB9A
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe524: WORD 'NO-EDL' codep=0x224c wordp=0xe526
// ================================================

void NO_dash_EDL() // NO-EDL
{
  WDB8C(); // WDB8C
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe52c: WORD 'WE52E' codep=0x224c wordp=0xe52e
// ================================================

void WE52E() // WE52E
{
  POSTURE_dash_EFFECT(); // POSTURE-EFFECT
  _plus__ex_EDL(); // +!EDL
  Push(pp_WDA17); // WDA17
  Push(Read16(pp_P_dash_POSTURE)); // P-POSTURE @
  OVER(); // OVER
  Push(Read16(Pop())); //  @
  Push(Pop() | Pop()); // OR
  SWAP(); // SWAP
  Store_3(); // !_3
}


// ================================================
// 0xe544: WORD 'WE546' codep=0x224c wordp=0xe546
// ================================================

void WE546() // WE546
{
  POSTURE_dash_EFFECT(); // POSTURE-EFFECT
  _plus__ex_EDL(); // +!EDL
  Push(0xda0f); // 'WDA0F'
  OFF(); // OFF
}


// ================================================
// 0xe552: WORD 'WE554' codep=0x224c wordp=0xe554
// ================================================

void WE554() // WE554
{
  POSTURE_dash_EFFECT(); // POSTURE-EFFECT
  Push(Read16(pp_WDA23)&0xFF); // WDA23 C@
  _slash_(); // /
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe560: WORD 'WE562' codep=0x224c wordp=0xe562 params=0 returns=0
// ================================================

void WE562() // WE562
{
  Push(Read16(cc_WDAD3)); // WDAD3
  if (Pop() == 0) return;
  POSTURE_dash_EFFECT(); // POSTURE-EFFECT
  Push(Read16(pp_WDA23)&0xFF); // WDA23 C@
  _slash_(); // /
  Push(Pop() >> 1); //  2/
  _plus__ex_EDL(); // +!EDL
  Push(0xdad3); // 'WDAD3'
  OFF(); // OFF
}


// ================================================
// 0xe57c: WORD 'WE57E' codep=0x224c wordp=0xe57e params=0 returns=1
// ================================================

void WE57E() // WE57E
{
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(Read16(0x63ef+WD970.offset)&0xFF); // WD970<IFIELD> C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe58a: WORD 'WE58C' codep=0x224c wordp=0xe58c params=2 returns=0
// ================================================

void WE58C() // WE58C
{
  WE57E(); // WE57E
  SWAP(); // SWAP
  _star__slash_(); // */
  Push(0x0064);
  MIN(); // MIN
  Push(pp_WDA69); // WDA69
  Store_3(); // !_3
}


// ================================================
// 0xe59e: WORD 'WE5A0' codep=0x224c wordp=0xe5a0 params=1 returns=0
// ================================================

void WE5A0() // WE5A0
{
  Push(pp_WDA69); // WDA69
  Store_3(); // !_3
}


// ================================================
// 0xe5a6: WORD 'WE5A8' codep=0x224c wordp=0xe5a8 params=0 returns=0
// ================================================

void WE5A8() // WE5A8
{
  Push(3);
  Push(2);
  WE58C(); // WE58C
}


// ================================================
// 0xe5b0: WORD 'WE5B2' codep=0x224c wordp=0xe5b2 params=0 returns=0
// ================================================

void WE5B2() // WE5B2
{
  Push(2);
  Push(1);
  WE58C(); // WE58C
}


// ================================================
// 0xe5ba: WORD 'WE5BC' codep=0x224c wordp=0xe5bc params=0 returns=0
// ================================================

void WE5BC() // WE5BC
{
  Push(5);
  Push(2);
  WE58C(); // WE58C
}


// ================================================
// 0xe5c4: WORD 'WE5C6' codep=0x224c wordp=0xe5c6 params=0 returns=0
// ================================================

void WE5C6() // WE5C6
{
  Push(1);
  Push(1);
  WE58C(); // WE58C
}


// ================================================
// 0xe5ce: WORD 'WE5D0' codep=0x224c wordp=0xe5d0 params=0 returns=0
// ================================================

void WE5D0() // WE5D0
{
  Push(1);
  Push(2);
  WE58C(); // WE58C
}


// ================================================
// 0xe5d8: WORD 'WE5DA' codep=0x224c wordp=0xe5da params=0 returns=0
// ================================================

void WE5DA() // WE5DA
{
  Push(0x0046);
  WE5A0(); // WE5A0
}


// ================================================
// 0xe5e2: WORD 'WE5E4' codep=0x224c wordp=0xe5e4 params=0 returns=0
// ================================================

void WE5E4() // WE5E4
{
  Push(0x0064);
  WE5A0(); // WE5A0
}


// ================================================
// 0xe5ec: WORD 'WE5EE' codep=0x224c wordp=0xe5ee params=0 returns=0
// ================================================

void WE5EE() // WE5EE
{
  Push(pp_WDA69); // WDA69
  OFF(); // OFF
}


// ================================================
// 0xe5f4: WORD 'WE5F6' codep=0x224c wordp=0xe5f6 params=0 returns=0
// ================================================

void WE5F6() // WE5F6
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
// 0xe618: WORD 'WE61A' codep=0x224c wordp=0xe61a params=0 returns=0
// ================================================

void WE61A() // WE61A
{
  Push(0x50a6); // '?A-SHIE'
  ON_3(); // ON_3
  WE5F6(); // WE5F6
  WE609(); // WE609
  Push(0x0ee1); Push(0x0002); // 'RAISED THEIR SHIELDS.'
  WD93B(); // WD93B
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe630: WORD 'WE632' codep=0x224c wordp=0xe632 params=0 returns=0
// ================================================

void WE632() // WE632
{
  Push(0x50a6); // '?A-SHIE'
  OFF(); // OFF
  WE5F6(); // WE5F6
  WE609(); // WE609
  Push(0x0f03); Push(0x0002); // 'LOWERED THEIR SHIELDS.'
  WD93B(); // WD93B
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe648: WORD 'WE64A' codep=0x224c wordp=0xe64a params=0 returns=0
// ================================================

void WE64A() // WE64A
{
  Push(0x50b4); // '?A-WEAP'
  ON_3(); // ON_3
  WE5F6(); // WE5F6
  WE609(); // WE609
  Push(0x0f26); Push(0x0002); // 'ARMED THEIR WEAPONS.'
  WD93B(); // WD93B
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe660: WORD 'WE662' codep=0x224c wordp=0xe662 params=0 returns=0
// ================================================

void WE662() // WE662
{
  Push(0x50b4); // '?A-WEAP'
  OFF(); // OFF
  WE5F6(); // WE5F6
  WE609(); // WE609
  Push(0x0f47); Push(0x0002); // 'DIS-ARMED THEIR WEAPONS.'
  WD93B(); // WD93B
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe678: WORD 'WE67A' codep=0x224c wordp=0xe67a params=0 returns=0
// ================================================

void WE67A() // WE67A
{
  Push(0xda75); // 'WDA75'
  ON_3(); // ON_3
  WE5F6(); // WE5F6
  Push(0x0f6c); Push(0x0002); // 'I'M PICKING UP AN ALIEN DISTRESS CALL.'
  WD93B(); // WD93B
  DrawTTY(); // .TTY
}


// ================================================
// 0xe68e: WORD 'WE690' codep=0x224c wordp=0xe690 params=0 returns=0
// ================================================

void WE690() // WE690
{
  Push(Read16(pp__i__plus_VESS)); // '+VESS @
  MODULE(); // MODULE
  Push(0xda75); // 'WDA75'
  OFF(); // OFF
  WE5F6(); // WE5F6
  Push(0x0f9f); Push(0x0002); // 'MORE ALIEN SHIPS HAVE WARPED IN.'
  WD93B(); // WD93B
  DrawTTY(); // .TTY
}


// ================================================
// 0xe6aa: WORD 'WE6AC' codep=0x224c wordp=0xe6ac params=0 returns=0
// ================================================

void WE6AC() // WE6AC
{
  Push(0xda79); // 'WDA79'
  ON_3(); // ON_3
  WE5F6(); // WE5F6
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
  StoreA_dash_SUBJECT(); // !A-SUBJECT
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
  StoreA_dash_SUBJECT(); // !A-SUBJECT
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
  StoreA_dash_SUBJECT(); // !A-SUBJECT
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
  StoreA_dash_SUBJECT(); // !A-SUBJECT
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
  StoreA_dash_SUBJECT(); // !A-SUBJECT
  Push(pp__ro_PHRASE_rc_); // (PHRASE)
  _1_dot_5_at_(); // 1.5@
  Push(pp_A_dash_QUES); // A-QUES
  _1_dot_5_ex_(); // 1.5!
  Push(1);
  Push(pp__n_A_dash_PHRASES); // #A-PHRASES
  _plus__ex__2(); // +!_2
  SET_dash_TIRED_dash_TIME(); // SET-TIRED-TIME
  SET_dash_OK_dash_TIME(); // SET-OK-TIME
  Push(0xda55); // 'WDA55'
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
  StoreA_dash_SUBJECT(); // !A-SUBJECT
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
  StoreA_dash_SUBJECT(); // !A-SUBJECT
  TERMINATE(); // TERMINATE
}


// ================================================
// 0xe77e: WORD 'WE780' codep=0x224c wordp=0xe780 params=0 returns=0
// ================================================

void WE780() // WE780
{
  Push(0xda6d); // 'WDA6D'
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
  Push(Read16(pp_WDA71)); // WDA71 @
  _ro__ask_RACE_rc_(); // (?RACE) case
}


// ================================================
// 0xe7c6: WORD 'WE7C8' codep=0x224c wordp=0xe7c8 params=0 returns=1
// ================================================

void WE7C8() // WE7C8
{
  Push(1);
  WDCD7(); // WDCD7
}


// ================================================
// 0xe7ce: WORD 'WE7D0' codep=0x224c wordp=0xe7d0 params=0 returns=1
// ================================================

void WE7D0() // WE7D0
{
  Push(2);
  WDCD7(); // WDCD7
}


// ================================================
// 0xe7d6: WORD 'WE7D8' codep=0x224c wordp=0xe7d8 params=0 returns=1
// ================================================

void WE7D8() // WE7D8
{
  Push(4);
  WDCD7(); // WDCD7
}


// ================================================
// 0xe7de: WORD 'WE7E0' codep=0x224c wordp=0xe7e0 params=0 returns=1
// ================================================

void WE7E0() // WE7E0
{
  Push(8);
  WDCD7(); // WDCD7
}


// ================================================
// 0xe7e6: WORD 'WE7E8' codep=0x224c wordp=0xe7e8 params=0 returns=1
// ================================================

void WE7E8() // WE7E8
{
  Push(0x0010);
  WDCD7(); // WDCD7
}


// ================================================
// 0xe7f0: WORD 'WE7F2' codep=0x224c wordp=0xe7f2 params=0 returns=1
// ================================================

void WE7F2() // WE7F2
{
  Push(!(Read16(pp_WDA69)==0?1:0)); // WDA69 @ 0= NOT
}


// ================================================
// 0xe7fc: WORD 'WE7FE' codep=0x224c wordp=0xe7fe params=0 returns=1
// ================================================

void WE7FE() // WE7FE
{
  Push(Read16(pp__n_A_dash_PHRASES)); // #A-PHRASES @
  Push(Read16(pp_WDA47)); // WDA47 @
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
  Push((Pop()==0?1:0) | (Read16(pp_WDA59)==2?1:0)); //  0= WDA59 @ 2 = OR
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
// 0xe866: WORD 'WE868' codep=0x224c wordp=0xe868 params=0 returns=1
// ================================================

void WE868() // WE868
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(Read16(pp_WDA69)); // WDA69 @
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
  WE7C8(); // WE7C8
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
// 0xe8b4: WORD 'WE8B6' codep=0x224c wordp=0xe8b6 params=0 returns=1
// ================================================

void WE8B6() // WE8B6
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
// 0xe8dc: WORD 'WE8DE' codep=0x224c wordp=0xe8de params=0 returns=1
// ================================================

void WE8DE() // WE8DE
{
  WE8C2(); // WE8C2
  Push(Pop() & 8); //  8 AND
  _0_gt_(); // 0>
}


// ================================================
// 0xe8e8: WORD 'WE8EA' codep=0x224c wordp=0xe8ea params=0 returns=1
// ================================================

void WE8EA() // WE8EA
{
  WE8C2(); // WE8C2
  Push(Read16(regsp)); // DUP
  Push(!((Pop() & 0x0010)==0?1:0)); //  0x0010 AND 0= NOT
  SWAP(); // SWAP
  Push(Pop() & 0xffef); //  0xffef AND
  WE8D0(); // WE8D0
}


// ================================================
// 0xe904: WORD 'WE906' codep=0x224c wordp=0xe906 params=0 returns=1
// ================================================

void WE906() // WE906
{
  WE8C2(); // WE8C2
  Push(Pop() & 3); //  3 AND
  _0_gt_(); // 0>
}


// ================================================
// 0xe910: WORD 'WE912' codep=0x224c wordp=0xe912 params=0 returns=1
// ================================================

void WE912() // WE912
{
  WE8C2(); // WE8C2
  Push(Read16(regsp)); // DUP
  Push(!((Pop() & 0x0020)==0?1:0)); //  0x0020 AND 0= NOT
  SWAP(); // SWAP
  Push(Pop() & 0xffdf); //  0xffdf AND
  WE8D0(); // WE8D0
}


// ================================================
// 0xe92c: WORD 'WE92E' codep=0x224c wordp=0xe92e params=0 returns=1
// ================================================

void WE92E() // WE92E
{
  Push(Read16(pp_HAILER)==1?1:0); // HAILER @ 1 =
}


// ================================================
// 0xe938: WORD 'WE93A' codep=0x224c wordp=0xe93a params=0 returns=1
// ================================================

void WE93A() // WE93A
{
  Push(Read16(pp_HAILER)==2?1:0); // HAILER @ 2 =
}


// ================================================
// 0xe944: WORD 'WE946' codep=0x224c wordp=0xe946 params=0 returns=1
// ================================================

void WE946() // WE946
{
  Push(pp_WDA4F); // WDA4F
  _2_at_(); // 2@
  TIME(); // TIME
  _2_at_(); // 2@
  D_st_(); // D<
}


// ================================================
// 0xe952: WORD 'WE954' codep=0x224c wordp=0xe954 params=0 returns=1
// ================================================

void WE954() // WE954
{
  Push(pp_OK_dash_TALK); // OK-TALK
  _2_at_(); // 2@
  TIME(); // TIME
  _2_at_(); // 2@
  D_st_(); // D<
}


// ================================================
// 0xe960: WORD 'WE962' codep=0x224c wordp=0xe962 params=0 returns=1
// ================================================

void WE962() // WE962
{
  Push((Read16(pp_P_dash_SUBJECT)&0xFF)==0x000d?1:0); // P-SUBJECT C@ 0x000d =
}


// ================================================
// 0xe96e: WORD 'WE970' codep=0x224c wordp=0xe970 params=0 returns=1
// ================================================

void WE970() // WE970
{
  Push(!(Read16(pp_P_dash_QUES)==0?1:0)); // P-QUES @ 0= NOT
}


// ================================================
// 0xe97a: WORD 'WE97C' codep=0x224c wordp=0xe97c params=0 returns=1
// ================================================

void WE97C() // WE97C
{
  Push((Read16(pp_P_dash_POSTURE) & Read16(pp_WDA17))==0?1:0); // P-POSTURE @ WDA17 @ AND 0=
}


// ================================================
// 0xe98a: WORD 'WE98C' codep=0x224c wordp=0xe98c params=0 returns=1
// ================================================

void WE98C() // WE98C
{
  Push(Read16(pp__n_VESS)); // #VESS @
  Push(3);
  _st_(); // <
}


// ================================================
// 0xe996: WORD 'WE998' codep=0x224c wordp=0xe998 params=0 returns=1
// ================================================

void WE998() // WE998
{
  Push(Read16(pp_WDA23)&0xFF); // WDA23 C@
  _0_gt_(); // 0>
  Push(Read16(pp__n_A_dash_PHRASES)&0xFF); // #A-PHRASES C@
  _0_gt_(); // 0>
  Push(Pop() | Pop()); // OR
  Push(Read16(pp_TERMINA)); // TERMINA @
  WDB0C(); // WDB0C
  Push(Pop() & Read16(pp_IsCOMM_dash_BTNS)); //  ?COMM-BTNS @ AND
}


// ================================================
// 0xe9b4: WORD 'WE9B6' codep=0x224c wordp=0xe9b6 params=0 returns=1
// ================================================

void WE9B6() // WE9B6
{
  Push(Read16(pp_TERMINA)); // TERMINA @
  WE7E8(); // WE7E8
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe9c0: WORD 'WE9C2' codep=0x224c wordp=0xe9c2 params=0 returns=1
// ================================================

void WE9C2() // WE9C2
{
  Push(Read16(pp_WDA71)==6?1:0); // WDA71 @ 6 =
}


// ================================================
// 0xe9cc: WORD 'WE9CE' codep=0x224c wordp=0xe9ce params=0 returns=1
// ================================================

void WE9CE() // WE9CE
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(Read16(pp_WDA71)==3?1:0); // WDA71 @ 3 =
  if (Pop() != 0)
  {
    Push(0x0046);
  } else
  {
    Push(0x001e);
  }
  _st_(); // <
  Push(Pop() + 0x000d); //  0x000d +
  WDBA8(); // WDBA8
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  WDE6D(); // WDE6D
  Push(!(Read16(pp_SUBJECT)==0x000e?1:0)); // SUBJECT @ 0x000e = NOT
}


// ================================================
// 0xea0a: WORD 'WEA0C' codep=0x224c wordp=0xea0c params=0 returns=1
// ================================================

void WEA0C() // WEA0C
{
  Push(pp__ro_AORIGINATOR_rc_); // (AORIGINATOR)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+WD975.offset)&0xFF); // WD975<IFIELD> C@
  ICLOSE(); // ICLOSE
  Push(Pop() & (Read16(pp_WDA59)==1?1:0)); //  WDA59 @ 1 = AND
}


// ================================================
// 0xea22: WORD 'WEA24' codep=0x224c wordp=0xea24 params=0 returns=1
// ================================================

void WEA24() // WEA24
{
  WE998(); // WE998
  WEA0C(); // WEA0C
  Push(Pop() & Pop()); // AND
  WE7C8(); // WE7C8
  Push(Pop() & Pop()); // AND
  Push(Pop() | Read16(cc_WDA6D)); //  WDA6D OR
}


// ================================================
// 0xea34: WORD 'WEA36' codep=0x224c wordp=0xea36 params=0 returns=1
// ================================================

void WEA36() // WEA36
{
  WE7C8(); // WE7C8
  WEA0C(); // WEA0C
  WDB0C(); // WDB0C
}


// ================================================
// 0xea3e: WORD '<EDL>' codep=0xb869 wordp=0xea48
// ================================================

void _st_EDL_gt_() // <EDL> rule
{
  int b;

  b = 1;
  WE8EA(); // WE8EA
  b = b && Pop();
  WE8DE(); // WE8DE
  b = b && Pop();
  if (b)
  {
    WE4D4(); // WE4D4
  }

  b = 1;
  WE8EA(); // WE8EA
  b = b && Pop();
  WE8DE(); // WE8DE
  b = b && !Pop();
  if (b)
  {
    WE4DC(); // WE4DC
  }

  b = 1;
  WE912(); // WE912
  b = b && Pop();
  WE906(); // WE906
  b = b && Pop();
  if (b)
  {
    WE4E6(); // WE4E6
  }

  b = 1;
  WE912(); // WE912
  b = b && Pop();
  WE906(); // WE906
  b = b && !Pop();
  if (b)
  {
    WE4F0(); // WE4F0
  }

  b = 1;
  WE92E(); // WE92E
  b = b && Pop();
  WE97C(); // WE97C
  b = b && Pop();
  if (b)
  {
    WE52E(); // WE52E
  }

  b = 1;
  WE962(); // WE962
  b = b && Pop();
  if (b)
  {
    WE554(); // WE554
  }

  b = 1;
  WE970(); // WE970
  b = b && Pop();
  Push(Read16(cc_WDAD3)); // WDAD3
  b = b && Pop();
  if (b)
  {
    WE562(); // WE562
  }

  b = 1;
  Push(Read16(cc_WDA0F)); // WDA0F
  b = b && Pop();
  if (b)
  {
    WE546(); // WE546
  }

  b = 1;
  Push(Read16(cc_IsFIRED_dash_)); // ?FIRED-
  b = b && Pop();
  WE998(); // WE998
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
  WE998(); // WE998
  b = b && !Pop();
  WE9B6(); // WE9B6
  b = b && !Pop();
  WE7D0(); // WE7D0
  b = b && Pop();
  WE92E(); // WE92E
  b = b && !Pop();
  if (b)
  {
    WE5A8(); // WE5A8
  }

  b = 1;
  WE998(); // WE998
  b = b && !Pop();
  WE9B6(); // WE9B6
  b = b && !Pop();
  WE7D0(); // WE7D0
  b = b && Pop();
  WE92E(); // WE92E
  b = b && Pop();
  if (b)
  {
    WE5B2(); // WE5B2
  }

  b = 1;
  WE998(); // WE998
  b = b && !Pop();
  WE9B6(); // WE9B6
  b = b && !Pop();
  WE7D8(); // WE7D8
  b = b && Pop();
  WE92E(); // WE92E
  b = b && !Pop();
  if (b)
  {
    WE5C6(); // WE5C6
  }

  b = 1;
  WE998(); // WE998
  b = b && !Pop();
  WE9B6(); // WE9B6
  b = b && !Pop();
  WE7D8(); // WE7D8
  b = b && Pop();
  WE92E(); // WE92E
  b = b && Pop();
  if (b)
  {
    WE5A8(); // WE5A8
  }

  b = 1;
  WE998(); // WE998
  b = b && !Pop();
  WE9B6(); // WE9B6
  b = b && !Pop();
  WE7E0(); // WE7E0
  b = b && Pop();
  WE92E(); // WE92E
  b = b && !Pop();
  if (b)
  {
    WE5D0(); // WE5D0
  }

  b = 1;
  WE998(); // WE998
  b = b && !Pop();
  WE9B6(); // WE9B6
  b = b && !Pop();
  WE7E0(); // WE7E0
  b = b && Pop();
  WE92E(); // WE92E
  b = b && Pop();
  if (b)
  {
    WE5C6(); // WE5C6
  }

  b = 1;
  WE998(); // WE998
  b = b && !Pop();
  WE9B6(); // WE9B6
  b = b && !Pop();
  WE7E8(); // WE7E8
  b = b && Pop();
  if (b)
  {
    WE5EE(); // WE5EE
  }

  b = 1;
  WE998(); // WE998
  b = b && !Pop();
  WE9B6(); // WE9B6
  b = b && !Pop();
  WE7C8(); // WE7C8
  b = b && Pop();
  WE92E(); // WE92E
  b = b && !Pop();
  if (b)
  {
    WE5B2(); // WE5B2
  }

  b = 1;
  WE998(); // WE998
  b = b && !Pop();
  WE9B6(); // WE9B6
  b = b && !Pop();
  WE7C8(); // WE7C8
  b = b && Pop();
  WE92E(); // WE92E
  b = b && Pop();
  if (b)
  {
    WE5BC(); // WE5BC
  }

  b = 1;
  WE998(); // WE998
  b = b && Pop();
  WEA0C(); // WEA0C
  b = b && Pop();
  WE7FE(); // WE7FE
  b = b && !Pop();
  if (b)
  {
    WE5DA(); // WE5DA
  }

  b = 1;
  WE998(); // WE998
  b = b && Pop();
  WE7C8(); // WE7C8
  b = b && !Pop();
  WE7FE(); // WE7FE
  b = b && !Pop();
  if (b)
  {
    WE5DA(); // WE5DA
  }

  b = 1;
  WE998(); // WE998
  b = b && Pop();
  WE7FE(); // WE7FE
  b = b && Pop();
  if (b)
  {
    WE5EE(); // WE5EE
  }

  b = 1;
  WE998(); // WE998
  b = b && !Pop();
  WE9B6(); // WE9B6
  b = b && Pop();
  WE7C8(); // WE7C8
  b = b && !Pop();
  if (b)
  {
    WE5EE(); // WE5EE
  }

  b = 1;
  WE998(); // WE998
  b = b && !Pop();
  WE9B6(); // WE9B6
  b = b && Pop();
  WEA0C(); // WEA0C
  b = b && !Pop();
  if (b)
  {
    WE5EE(); // WE5EE
  }

  b = 1;
  WE998(); // WE998
  b = b && !Pop();
  WE9B6(); // WE9B6
  b = b && Pop();
  WE7C8(); // WE7C8
  b = b && Pop();
  WEA0C(); // WEA0C
  b = b && Pop();
  Push(Read16(cc_WDA6D)); // WDA6D
  b = b && !Pop();
  if (b)
  {
    WE5E4(); // WE5E4
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
  Push(Read16(cc_IsA_dash_SHIE)); // ?A-SHIE
  b = b && !Pop();
  WE7D0(); // WE7D0
  b = b && !Pop();
  WEA24(); // WEA24
  b = b && !Pop();
  WE9C2(); // WE9C2
  b = b && !Pop();
  if (b)
  {
    WE61A(); // WE61A
  }

  b = 1;
  Push(Read16(cc_IsA_dash_SHIE)); // ?A-SHIE
  b = b && Pop();
  WE7D0(); // WE7D0
  b = b && Pop();
  if (b)
  {
    WE632(); // WE632
  }

  b = 1;
  Push(Read16(cc_IsA_dash_SHIE)); // ?A-SHIE
  b = b && Pop();
  WEA24(); // WEA24
  b = b && Pop();
  if (b)
  {
    WE632(); // WE632
  }

  b = 1;
  Push(Read16(cc_WDA3B)); // WDA3B
  b = b && Pop();
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  b = b && !Pop();
  WE7D0(); // WE7D0
  b = b && !Pop();
  WE7D8(); // WE7D8
  b = b && !Pop();
  WE7C8(); // WE7C8
  b = b && !Pop();
  WEA24(); // WEA24
  b = b && !Pop();
  if (b)
  {
    WE64A(); // WE64A
  }

  b = 1;
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  b = b && Pop();
  WE7E0(); // WE7E0
  b = b && !Pop();
  WE7E8(); // WE7E8
  b = b && !Pop();
  WE7C8(); // WE7C8
  b = b && !Pop();
  if (b)
  {
    WE662(); // WE662
  }

  b = 1;
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  b = b && Pop();
  WEA24(); // WEA24
  b = b && Pop();
  if (b)
  {
    WE662(); // WE662
  }

  b = 1;
  WE80E(); // WE80E
  b = b && Pop();
  Push(Read16(cc_WDA75)); // WDA75
  b = b && !Pop();
  WE7BE(); // WE7BE
  b = b && Pop();
  WE98C(); // WE98C
  b = b && Pop();
  WE7D0(); // WE7D0
  b = b && !Pop();
  WE7D8(); // WE7D8
  b = b && !Pop();
  WEA24(); // WEA24
  b = b && !Pop();
  if (b)
  {
    WE67A(); // WE67A
  }

  b = 1;
  Push(Read16(cc_WDA75)); // WDA75
  b = b && Pop();
  WE850(); // WE850
  b = b && Pop();
  if (b)
  {
    WE690(); // WE690
  }

  b = 1;
  WE954(); // WE954
  b = b && Pop();
  WE7BE(); // WE7BE
  b = b && Pop();
  WE83A(); // WE83A
  b = b && Pop();
  Push(Read16(cc_WDA79)); // WDA79
  b = b && !Pop();
  if (b)
  {
    WE6AC(); // WE6AC
  }

  b = 1;
  Push(Read16(cc_WDA6D)); // WDA6D
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
  WE998(); // WE998
  b = b && !Pop();
  WE92E(); // WE92E
  b = b && !Pop();
  WE954(); // WE954
  b = b && Pop();
  WE868(); // WE868
  b = b && Pop();
  WE93A(); // WE93A
  b = b && !Pop();
  Push(Read16(cc_WDA6D)); // WDA6D
  b = b && !Pop();
  WEA36(); // WEA36
  b = b && !Pop();
  if (b)
  {
    HAIL(); // HAIL
  }

  b = 1;
  WE998(); // WE998
  b = b && !Pop();
  WE93A(); // WE93A
  b = b && Pop();
  WE954(); // WE954
  b = b && Pop();
  WE868(); // WE868
  b = b && Pop();
  WE946(); // WE946
  b = b && Pop();
  WE8B6(); // WE8B6
  b = b && Pop();
  Push(Read16(cc_WDA6D)); // WDA6D
  b = b && !Pop();
  WEA36(); // WEA36
  b = b && !Pop();
  if (b)
  {
    HAIL(); // HAIL
  }

  b = 1;
  WE998(); // WE998
  b = b && !Pop();
  WE92E(); // WE92E
  b = b && Pop();
  WE954(); // WE954
  b = b && Pop();
  WE868(); // WE868
  b = b && Pop();
  Push(Read16(cc_WDA6D)); // WDA6D
  b = b && !Pop();
  WEA36(); // WEA36
  b = b && !Pop();
  if (b)
  {
    RESPOND(); // RESPOND
  }

  b = 1;
  WE998(); // WE998
  b = b && Pop();
  WE954(); // WE954
  b = b && Pop();
  WE970(); // WE970
  b = b && !Pop();
  WE868(); // WE868
  b = b && Pop();
  WE9CE(); // WE9CE
  b = b && Pop();
  Push(Read16(cc_WDA55)); // WDA55
  b = b && !Pop();
  WE7FE(); // WE7FE
  b = b && !Pop();
  if (b)
  {
    STATEMENT(); // STATEMENT
  }

  b = 1;
  WE998(); // WE998
  b = b && Pop();
  WE954(); // WE954
  b = b && Pop();
  WE970(); // WE970
  b = b && !Pop();
  WE868(); // WE868
  b = b && Pop();
  WE9CE(); // WE9CE
  b = b && !Pop();
  Push(Read16(cc_WDA55)); // WDA55
  b = b && !Pop();
  WE7FE(); // WE7FE
  b = b && !Pop();
  if (b)
  {
    QUESTION(); // QUESTION
  }

  b = 1;
  WE998(); // WE998
  b = b && Pop();
  Push(Read16(cc_WDA55)); // WDA55
  b = b && Pop();
  WE954(); // WE954
  b = b && Pop();
  WE946(); // WE946
  b = b && Pop();
  WE8B6(); // WE8B6
  b = b && Pop();
  if (b)
  {
    TIRED_dash_OF_dash_WAITING(); // TIRED-OF-WAITING
  }

  b = 1;
  WE998(); // WE998
  b = b && Pop();
  WE970(); // WE970
  b = b && Pop();
  WE954(); // WE954
  b = b && Pop();
  WE7FE(); // WE7FE
  b = b && !Pop();
  if (b)
  {
    ANSWER(); // ANSWER
  }

  b = 1;
  WE998(); // WE998
  b = b && Pop();
  WE7FE(); // WE7FE
  b = b && Pop();
  WE954(); // WE954
  b = b && Pop();
  Push(Read16(cc_WDA55)); // WDA55
  b = b && !Pop();
  if (b)
  {
    TIRED_dash_OF_dash_TALKING(); // TIRED-OF-TALKING
  }

  b = 1;
  WE998(); // WE998
  b = b && Pop();
  WE7F2(); // WE7F2
  b = b && !Pop();
  WE7FE(); // WE7FE
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
  WDE6D(); // WDE6D
  WE482(); // WE482
  Push(!(Read16(pp_P_dash_SUBJECT)==1?1:0)); // P-SUBJECT @ 1 = NOT
  Push(pp_WDA23); // WDA23
  _plus__ex__2(); // +!_2
  SET_dash_OK_dash_TIME(); // SET-OK-TIME
  GetColor(BLACK);
  Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
  DrawON(); // .ON
}


// ================================================
// 0xece9: WORD 'WECEB' codep=0x224c wordp=0xeceb params=0 returns=0
// ================================================

void WECEB() // WECEB
{
  Push(pp__ro_STOP_dash_COMM_rc_); // (STOP-COMM)
  ON_3(); // ON_3
}


// ================================================
// 0xecf1: WORD 'WECF3' codep=0x224c wordp=0xecf3 params=0 returns=1
// ================================================

void WECF3() // WECF3
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
  WE998(); // WE998
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
  Push(0xdad3); // 'WDAD3'
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
// 0xee60: WORD 'WEE62' codep=0x224c wordp=0xee62
// ================================================

void WEE62() // WEE62
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
  Push(0xda0f); // 'WDA0F'
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
  Push(Read16(pp__n_VESS) | Read16(cc_WDA75)); // #VESS @ WDA75 OR
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
  Push(Read16(pp__n_VESS) | Read16(cc_WDA75)); // #VESS @ WDA75 OR
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
  Push(0xda5d); // 'WDA5D'
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
    Push(Read16(cc_WDA75)); // WDA75
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
      WECEB(); // WECEB
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
// 0xf05f: WORD 'WF061' codep=0x224c wordp=0xf061
// ================================================

void WF061() // WF061
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
      WDBDB(); // WDBDB
      WECF3(); // WECF3
      Push(Read16(cc_WDA55)); // WDA55
      WE946(); // WE946
      Push(Pop() & Pop()); // AND
      WE8B6(); // WE8B6
      WDB0C(); // WDB0C
      Push(Pop() | Pop()); // OR
      if (Pop() != 0)
      {
        Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
        Push(Read16(cc_WDA55)); // WDA55
        if (Pop() != 0)
        {
          Push(0xda55); // 'WDA55'
          OFF(); // OFF
          WE8B6(); // WE8B6
          Push(!Pop() * 3); //  NOT 3 *
          Push(Pop() + Pop()); // +
          WDBFF(); // WDBFF
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
      WE9B6(); // WE9B6
    } while(Pop() == 0);
  }
  Push(pp__n_A_dash_PHRASES); // #A-PHRASES
  OFF(); // OFF
  Push(pp_WDA23); // WDA23
  OFF(); // OFF
  Push(pp_HAILER); // HAILER
  OFF(); // OFF
  _gt_HAIL_do_(); // >HAIL$
}


// ================================================
// 0xf0d3: WORD 'WF0D5' codep=0x224c wordp=0xf0d5 params=0 returns=0
// ================================================

void WF0D5() // WF0D5
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
        WEE62(); // WEE62
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
    WF0D5(); // WF0D5
    break;
  case 1:
    WEFC3(); // WEFC3
    break;
  default:
    WECEB(); // WECEB
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
    WDBDB(); // WDBDB
    WECF3(); // WECF3
    if (Pop() != 0)
    {
      Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
      _ro_CBTN_rc_(); // (CBTN) case
    }
    Push(Read16(pp_WDA23) | Read16(pp__n_A_dash_PHRASES)); // WDA23 @ #A-PHRASES @ OR
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
      WF061(); // WF061
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
// 0xf226: WORD 'WF228' codep=0x224c wordp=0xf228
// ================================================

void WF228() // WF228
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
  WDBA8(); // WDBA8
  Push(pp__n_A_dash_PHRASES); // #A-PHRASES
  OFF(); // OFF
  Push(pp__n_A_dash_HAILS); // #A-HAILS
  OFF(); // OFF
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(Read16(0x63ef+WD970.offset)&0xFF); // WD970<IFIELD> C@
  Push(pp_WDA69); // WDA69
  Store_3(); // !_3
  Push(Read16(0x63ef+WD97A.offset)&0xFF); // WD97A<IFIELD> C@
  Push(pp_EDL); // EDL
  Store_3(); // !_3
  WE8DE(); // WE8DE
  Push(Pop() * 5); //  5 *
  _plus__ex_EDL(); // +!EDL
  WE8EA(); // WE8EA
  Pop(); // DROP
  WE906(); // WE906
  Push(Pop() * 0x000a); //  0x000a *
  _plus__ex_EDL(); // +!EDL
  WE912(); // WE912
  Pop(); // DROP
  WDC6F(); // WDC6F
}


// ================================================
// 0xf278: WORD 'WF27A' codep=0x224c wordp=0xf27a
// ================================================

void WF27A() // WF27A
{
  unsigned short int a;
  WF228(); // WF228
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(pp_WDA71); // WDA71
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
      WE014(); // WE014
      Push(pp__ro_ENCOUNTER_rc_); // (ENCOUNTER)
      _1_dot_5_at_(); // 1.5@
      _2DUP(); // 2DUP
      Push(Pop() & 0x000f | 2); //  0x000f AND 2 OR
      WE068(); // WE068
      Push(0x000f);
      MIN(); // MIN
      OVER(); // OVER
      Push(Pop() - 1); //  1-
      C_ex_(); // C!
      Push(Pop() - 1); //  1-
      Push(pp_WDA8F); // WDA8F
      _do__ex_(); // $!
      SWAP(); // SWAP
      Push(Pop() & 0x000f | 2); //  0x000f AND 2 OR
      WE068(); // WE068
      Push(0x000f);
      MIN(); // MIN
      OVER(); // OVER
      Push(Pop() - 1); //  1-
      C_ex_(); // C!
      Push(Pop() - 1); //  1-
      Push(pp_WDA7D); // WDA7D
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
  WE7E0(); // WE7E0
  WE7E8(); // WE7E8
  Push(Pop() | Pop()); // OR
  Push(Read16(regsp)); // DUP
  Push(Pop() & Read16(cc_WDA3B)); //  WDA3B AND
  Push(0x50b4); // '?A-WEAP'
  Store_3(); // !_3
  WE7D8(); // WE7D8
  Push(Pop() | Pop()); // OR
  WE9C2(); // WE9C2
  WDB0C(); // WDB0C
  Push(Pop() & Read16(cc_WDA37)); //  WDA37 AND
  Push(0x50a6); // '?A-SHIE'
  Store_3(); // !_3
}


// ================================================
// 0xf32e: WORD 'WF330' codep=0x224c wordp=0xf330 params=0 returns=0
// ================================================

void WF330() // WF330
{
  unsigned short int i, imax;
  Push(pp_WDAD7); // WDAD7
  OFF(); // OFF
  Push(0xdad3); // 'WDAD3'
  OFF(); // OFF
  Push(0xda79); // 'WDA79'
  OFF(); // OFF
  Push(0xda75); // 'WDA75'
  OFF(); // OFF
  Push(0xda0f); // 'WDA0F'
  OFF(); // OFF
  Push(pp_WDA17); // WDA17
  OFF(); // OFF
  Push(0x5098); // '?FIRED-'
  OFF(); // OFF
  Push(0xda55); // 'WDA55'
  OFF(); // OFF
  Push(pp_HAILER); // HAILER
  OFF(); // OFF
  Push(pp_WDA23); // WDA23
  OFF(); // OFF
  Push(pp_P_dash_SUBJECT); // P-SUBJECT
  OFF(); // OFF
  Push(pp_P_dash_QUES); // P-QUES
  OFF(); // OFF
  Push(0xda6d); // 'WDA6D'
  OFF(); // OFF
  Push(pp_P_dash_RACES); // P-RACES
  OFF(); // OFF
  Push(pp_WDACF); // WDACF
  OFF(); // OFF
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WD9C0.offset); // WD9C0<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+WD9B1.offset); // WD9B1<IFIELD>
  Push(pp_WDAA1); // WDAA1
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
  Push(pp_WDAB3); // WDAB3
  _do__ex_(); // $!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3c0: WORD 'WF3C2' codep=0x224c wordp=0xf3c2
// ================================================

void WF3C2() // WF3C2
{
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WD9C5.offset); // WD9C5<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+WD9AC.offset)&0xFF); // WD9AC<IFIELD> C@
  Push(pp_WDACB); // WDACB
  Store_3(); // !_3
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(pp_WDACF); // WDACF
  Store_3(); // !_3
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(Read16(pp_WDA71)); // WDA71 @
  O_gt_P(); // O>P case
  Push(Read16(regsp)); // DUP
  Push(Pop() + 1); //  1+
  BIT(); // BIT
  Push(Pop() & Read16(pp_P_dash_RACES)); //  P-RACES @ AND
  _0_gt_(); // 0>
  Push(Pop() * 0x0032); //  0x0032 *
  SWAP(); // SWAP
  Push((Pop()==Read16(pp_WDACF)?1:0) * 0x0032); //  WDACF @ = 0x0032 *
  Push(Pop() + Pop()); // +
  WE9C2(); // WE9C2
  Push(4);
  Push(0xbdd8); // 'OV?ARTIFACT'
  MODULE(); // MODULE
  Push(Pop() & Pop()); // AND
  Push(Pop() * 0x00fa); //  0x00fa *
  Push(Pop() + Pop()); // +
  Push(Pop() + Read16(pp_WDACB)); //  WDACB @ +
  Push(0);
  SQRT(); // SQRT
  Push(0x00a7);
  Push(0x000a);
  _star__slash_(); // */
  Push(0x00fa);
  MIN(); // MIN
  Push(pp_WDACB); // WDACB
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
  Push(Read16(pp_WDA59)==1?1:0); // WDA59 @ 1 =
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
  Push(pp_WDA59); // WDA59
  Store_3(); // !_3
  Push(0xda3b); // 'WDA3B'
  OFF(); // OFF
  Push(0xda37); // 'WDA37'
  OFF(); // OFF
  IAPWR(); // IAPWR
  WF4C6(); // WF4C6
  WF27A(); // WF27A
  WF330(); // WF330
  WF3C2(); // WF3C2
  _gt_DISPLAY(); // >DISPLAY
}

// 0xf558: db 0x43 0x4f 0x4d 0x4d 0x2d 0x56 0x4f 0x43 0x00 'COMM-VOC '

