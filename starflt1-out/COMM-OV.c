// ====== OVERLAY 'COMM-OV' ======
// store offset = 0xd920
// overlay size   = 0x1c40

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xd936  codep:0x744d parp:0xd936 size:0x0003 C-string:'UNK_0xd936'
//      UNK_0xd93b  codep:0x224c parp:0xd93b size:0x0010 C-string:'UNK_0xd93b'
//      UNK_0xd94d  codep:0x744d parp:0xd94d size:0x0003 C-string:'UNK_0xd94d'
//      UNK_0xd952  codep:0x744d parp:0xd952 size:0x0003 C-string:'UNK_0xd952'
//      UNK_0xd957  codep:0x744d parp:0xd957 size:0x0003 C-string:'UNK_0xd957'
//      UNK_0xd95c  codep:0x744d parp:0xd95c size:0x0003 C-string:'UNK_0xd95c'
//      UNK_0xd961  codep:0x744d parp:0xd961 size:0x0003 C-string:'UNK_0xd961'
//      UNK_0xd966  codep:0x744d parp:0xd966 size:0x0003 C-string:'UNK_0xd966'
//      UNK_0xd96b  codep:0x744d parp:0xd96b size:0x0003 C-string:'UNK_0xd96b'
//      UNK_0xd970  codep:0x744d parp:0xd970 size:0x0003 C-string:'UNK_0xd970'
//      UNK_0xd975  codep:0x744d parp:0xd975 size:0x0003 C-string:'UNK_0xd975'
//      UNK_0xd97a  codep:0x744d parp:0xd97a size:0x0003 C-string:'UNK_0xd97a'
//      UNK_0xd97f  codep:0x744d parp:0xd97f size:0x0003 C-string:'UNK_0xd97f'
//      UNK_0xd984  codep:0x744d parp:0xd984 size:0x0003 C-string:'UNK_0xd984'
//      UNK_0xd989  codep:0x744d parp:0xd989 size:0x0003 C-string:'UNK_0xd989'
//      UNK_0xd98e  codep:0x744d parp:0xd98e size:0x0003 C-string:'UNK_0xd98e'
//      UNK_0xd993  codep:0x744d parp:0xd993 size:0x0003 C-string:'UNK_0xd993'
//      UNK_0xd998  codep:0x744d parp:0xd998 size:0x0003 C-string:'UNK_0xd998'
//      UNK_0xd99d  codep:0x744d parp:0xd99d size:0x0003 C-string:'UNK_0xd99d'
//      UNK_0xd9a2  codep:0x744d parp:0xd9a2 size:0x0003 C-string:'UNK_0xd9a2'
//      UNK_0xd9a7  codep:0x744d parp:0xd9a7 size:0x0003 C-string:'UNK_0xd9a7'
//      UNK_0xd9ac  codep:0x744d parp:0xd9ac size:0x0003 C-string:'UNK_0xd9ac'
//      UNK_0xd9b1  codep:0x744d parp:0xd9b1 size:0x0008 C-string:'UNK_0xd9b1'
//      UNK_0xd9bb  codep:0x744d parp:0xd9bb size:0x0003 C-string:'UNK_0xd9bb'
//      UNK_0xd9c0  codep:0x744d parp:0xd9c0 size:0x0003 C-string:'UNK_0xd9c0'
//      UNK_0xd9c5  codep:0x744d parp:0xd9c5 size:0x0003 C-string:'UNK_0xd9c5'
//      UNK_0xd9ca  codep:0x744d parp:0xd9ca size:0x0008 C-string:'UNK_0xd9ca'
//      UNK_0xd9d4  codep:0x744d parp:0xd9d4 size:0x0003 C-string:'UNK_0xd9d4'
//      UNK_0xd9d9  codep:0x744d parp:0xd9d9 size:0x0003 C-string:'UNK_0xd9d9'
//      UNK_0xd9de  codep:0x744d parp:0xd9de size:0x0003 C-string:'UNK_0xd9de'
//      UNK_0xd9e3  codep:0x744d parp:0xd9e3 size:0x0003 C-string:'UNK_0xd9e3'
//      UNK_0xd9e8  codep:0x73ea parp:0xd9e8 size:0x0006 C-string:'UNK_0xd9e8'
//      UNK_0xd9f0  codep:0x73ea parp:0xd9f0 size:0x0006 C-string:'UNK_0xd9f0'
//      UNK_0xd9f8  codep:0x744d parp:0xd9f8 size:0x0003 C-string:'UNK_0xd9f8'
//      UNK_0xd9fd  codep:0x73ea parp:0xd9fd size:0x0006 C-string:'UNK_0xd9fd'
//      UNK_0xda05  codep:0x1d29 parp:0xda05 size:0x0004 C-string:'UNK_0xda05'
//      UNK_0xda0b  codep:0x1d29 parp:0xda0b size:0x0002 C-string:'UNK_0xda0b'
//      UNK_0xda0f  codep:0x2214 parp:0xda0f size:0x0002 C-string:'UNK_0xda0f'
//      UNK_0xda13  codep:0x1d29 parp:0xda13 size:0x0002 C-string:'UNK_0xda13'
//      UNK_0xda17  codep:0x1d29 parp:0xda17 size:0x0002 C-string:'UNK_0xda17'
//      UNK_0xda1b  codep:0x1d29 parp:0xda1b size:0x0002 C-string:'UNK_0xda1b'
//      UNK_0xda1f  codep:0x1d29 parp:0xda1f size:0x0002 C-string:'UNK_0xda1f'
//      UNK_0xda23  codep:0x1d29 parp:0xda23 size:0x0002 C-string:'UNK_0xda23'
//      UNK_0xda27  codep:0x1d29 parp:0xda27 size:0x0002 C-string:'UNK_0xda27'
//      UNK_0xda2b  codep:0x1d29 parp:0xda2b size:0x0002 C-string:'UNK_0xda2b'
//      UNK_0xda2f  codep:0x1d29 parp:0xda2f size:0x0002 C-string:'UNK_0xda2f'
//      UNK_0xda33  codep:0x1d29 parp:0xda33 size:0x0002 C-string:'UNK_0xda33'
//      UNK_0xda37  codep:0x2214 parp:0xda37 size:0x0002 C-string:'UNK_0xda37'
//      UNK_0xda3b  codep:0x2214 parp:0xda3b size:0x0002 C-string:'UNK_0xda3b'
//      UNK_0xda3f  codep:0x1d29 parp:0xda3f size:0x0002 C-string:'UNK_0xda3f'
//      UNK_0xda43  codep:0x1d29 parp:0xda43 size:0x0002 C-string:'UNK_0xda43'
//      UNK_0xda47  codep:0x1d29 parp:0xda47 size:0x0002 C-string:'UNK_0xda47'
//      UNK_0xda4b  codep:0x1d29 parp:0xda4b size:0x0002 C-string:'UNK_0xda4b'
//      UNK_0xda4f  codep:0x1d29 parp:0xda4f size:0x0004 C-string:'UNK_0xda4f'
//      UNK_0xda55  codep:0x2214 parp:0xda55 size:0x0002 C-string:'UNK_0xda55'
//      UNK_0xda59  codep:0x1d29 parp:0xda59 size:0x0002 C-string:'UNK_0xda59'
//      UNK_0xda5d  codep:0x2214 parp:0xda5d size:0x0002 C-string:'UNK_0xda5d'
//      UNK_0xda61  codep:0x2214 parp:0xda61 size:0x0002 C-string:'UNK_0xda61'
//      UNK_0xda65  codep:0x1d29 parp:0xda65 size:0x0002 C-string:'UNK_0xda65'
//      UNK_0xda69  codep:0x1d29 parp:0xda69 size:0x0002 C-string:'UNK_0xda69'
//      UNK_0xda6d  codep:0x2214 parp:0xda6d size:0x0002 C-string:'UNK_0xda6d'
//      UNK_0xda71  codep:0x1d29 parp:0xda71 size:0x0002 C-string:'UNK_0xda71'
//      UNK_0xda75  codep:0x2214 parp:0xda75 size:0x0002 C-string:'UNK_0xda75'
//      UNK_0xda79  codep:0x2214 parp:0xda79 size:0x0002 C-string:'UNK_0xda79'
//      UNK_0xda7d  codep:0x1d29 parp:0xda7d size:0x0010 C-string:'UNK_0xda7d'
//      UNK_0xda8f  codep:0x1d29 parp:0xda8f size:0x0010 C-string:'UNK_0xda8f'
//      UNK_0xdaa1  codep:0x1d29 parp:0xdaa1 size:0x0010 C-string:'UNK_0xdaa1'
//      UNK_0xdab3  codep:0x1d29 parp:0xdab3 size:0x0010 C-string:'UNK_0xdab3'
//      UNK_0xdac5  codep:0x1d29 parp:0xdac5 size:0x0004 C-string:'UNK_0xdac5'
//      UNK_0xdacb  codep:0x1d29 parp:0xdacb size:0x0002 C-string:'UNK_0xdacb'
//      UNK_0xdacf  codep:0x1d29 parp:0xdacf size:0x0002 C-string:'UNK_0xdacf'
//      UNK_0xdad3  codep:0x2214 parp:0xdad3 size:0x0002 C-string:'UNK_0xdad3'
//      UNK_0xdad7  codep:0x1d29 parp:0xdad7 size:0x0002 C-string:'UNK_0xdad7'
//      UNK_0xdadb  codep:0x1d29 parp:0xdadb size:0x0002 C-string:'UNK_0xdadb'
//      UNK_0xdadf  codep:0x2214 parp:0xdadf size:0x0002 C-string:'UNK_0xdadf'
//      UNK_0xdae3  codep:0x2214 parp:0xdae3 size:0x0002 C-string:'UNK_0xdae3'
//      UNK_0xdae7  codep:0x2214 parp:0xdae7 size:0x0002 C-string:'UNK_0xdae7'
//      UNK_0xdaeb  codep:0x2214 parp:0xdaeb size:0x0002 C-string:'UNK_0xdaeb'
//      UNK_0xdaef  codep:0x2214 parp:0xdaef size:0x0002 C-string:'UNK_0xdaef'
//      UNK_0xdaf3  codep:0x2214 parp:0xdaf3 size:0x0002 C-string:'UNK_0xdaf3'
//      UNK_0xdaf7  codep:0x2214 parp:0xdaf7 size:0x0002 C-string:'UNK_0xdaf7'
//      UNK_0xdafb  codep:0x2214 parp:0xdafb size:0x0002 C-string:'UNK_0xdafb'
//      UNK_0xdaff  codep:0x2214 parp:0xdaff size:0x0002 C-string:'UNK_0xdaff'
//      UNK_0xdb03  codep:0x2214 parp:0xdb03 size:0x0002 C-string:'UNK_0xdb03'
//      UNK_0xdb07  codep:0x744d parp:0xdb07 size:0x0003 C-string:'UNK_0xdb07'
//      UNK_0xdb0c  codep:0x224c parp:0xdb0c size:0x0006 C-string:'UNK_0xdb0c'
//    ORIGINATOR>C  codep:0x224c parp:0xdb23 size:0x0014 C-string:'ORIGINATOR_gt_C'
//    A>ORIGINATOR  codep:0x224c parp:0xdb48 size:0x0020 C-string:'A_gt_ORIGINATOR'
//      UNK_0xdb6a  codep:0x224c parp:0xdb6a size:0x0018 C-string:'UNK_0xdb6a'
//      UNK_0xdb84  codep:0x224c parp:0xdb84 size:0x0006 C-string:'UNK_0xdb84'
//      UNK_0xdb8c  codep:0x224c parp:0xdb8c size:0x000c C-string:'UNK_0xdb8c'
//      UNK_0xdb9a  codep:0x224c parp:0xdb9a size:0x000c C-string:'UNK_0xdb9a'
//      UNK_0xdba8  codep:0x224c parp:0xdba8 size:0x0006 C-string:'UNK_0xdba8'
//        P>AFIELD  codep:0x4a4f parp:0xdbbb size:0x000c C-string:'P_gt_AFIELD'
//      UNK_0xdbc9  codep:0x224c parp:0xdbc9 size:0x0010 C-string:'UNK_0xdbc9'
//      UNK_0xdbdb  codep:0x224c parp:0xdbdb size:0x000e C-string:'UNK_0xdbdb'
//      UNK_0xdbeb  codep:0x224c parp:0xdbeb size:0x0012 C-string:'UNK_0xdbeb'
//      UNK_0xdbff  codep:0x224c parp:0xdbff size:0x000a C-string:'UNK_0xdbff'
//      UNK_0xdc0b  codep:0x3b68 parp:0xdc0b size:0x0004 C-string:'UNK_0xdc0b'
//      UNK_0xdc11  codep:0x3b68 parp:0xdc11 size:0x0004 C-string:'UNK_0xdc11'
//      UNK_0xdc17  codep:0x3b68 parp:0xdc17 size:0x0004 C-string:'UNK_0xdc17'
//      UNK_0xdc1d  codep:0x3b68 parp:0xdc1d size:0x0004 C-string:'UNK_0xdc1d'
//            #PHR  codep:0x4a4f parp:0xdc2a size:0x0014 C-string:'_n_PHR'
//      UNK_0xdc40  codep:0x224c parp:0xdc40 size:0x000e C-string:'UNK_0xdc40'
//          N>POST  codep:0x4a4f parp:0xdc59 size:0x0014 C-string:'N_gt_POST'
//      UNK_0xdc6f  codep:0x224c parp:0xdc6f size:0x0066 C-string:'UNK_0xdc6f'
//      UNK_0xdcd7  codep:0x224c parp:0xdcd7 size:0x0008 C-string:'UNK_0xdcd7'
//           +!EDL  codep:0x224c parp:0xdce9 size:0x005c C-string:'_plus__ex_EDL'
//      UNK_0xdd47  codep:0x224c parp:0xdd47 size:0x0020 C-string:'UNK_0xdd47'
//      UNK_0xdd69  codep:0x224c parp:0xdd69 size:0x0012 C-string:'UNK_0xdd69'
//      UNK_0xdd7d  codep:0x224c parp:0xdd7d size:0x0040 C-string:'UNK_0xdd7d'
//      UNK_0xddbf  codep:0x224c parp:0xddbf size:0x0050 C-string:'UNK_0xddbf'
//      UNK_0xde11  codep:0x224c parp:0xde11 size:0x0018 C-string:'UNK_0xde11'
//      UNK_0xde2b  codep:0x224c parp:0xde2b size:0x0040 C-string:'UNK_0xde2b'
//      UNK_0xde6d  codep:0x224c parp:0xde6d size:0x003a C-string:'UNK_0xde6d'
//      UNK_0xdea9  codep:0x224c parp:0xdea9 size:0x0010 C-string:'UNK_0xdea9'
//      UNK_0xdebb  codep:0x224c parp:0xdebb size:0x000a C-string:'UNK_0xdebb'
//      UNK_0xdec7  codep:0x224c parp:0xdec7 size:0x0010 C-string:'UNK_0xdec7'
//          >HAIL$  codep:0x224c parp:0xdee2 size:0x0010 C-string:'_gt_HAIL_do_'
//      UNK_0xdef4  codep:0x224c parp:0xdef4 size:0x001e C-string:'UNK_0xdef4'
//      UNK_0xdf14  codep:0x224c parp:0xdf14 size:0x001c C-string:'UNK_0xdf14'
//      UNK_0xdf32  codep:0x1d29 parp:0xdf32 size:0x00e0 C-string:'UNK_0xdf32'
//      UNK_0xe014  codep:0x224c parp:0xe014 size:0x0044 C-string:'UNK_0xe014'
//      UNK_0xe05a  codep:0x224c parp:0xe05a size:0x000c C-string:'UNK_0xe05a'
//      UNK_0xe068  codep:0x224c parp:0xe068 size:0x0044 C-string:'UNK_0xe068'
//             O>P  codep:0x4a4f parp:0xe0b4 size:0x0010 C-string:'O_gt_P'
//      UNK_0xe0c6  codep:0x224c parp:0xe0c6 size:0x0030 C-string:'UNK_0xe0c6'
//      UNK_0xe0f8  codep:0x224c parp:0xe0f8 size:0x0012 C-string:'UNK_0xe0f8'
//      UNK_0xe10c  codep:0x224c parp:0xe10c size:0x0006 C-string:'UNK_0xe10c'
//           ACASE  codep:0x4a4f parp:0xe11c size:0x000c C-string:'ACASE'
//      UNK_0xe12a  codep:0x224c parp:0xe12a size:0x0034 C-string:'UNK_0xe12a'
//      UNK_0xe160  codep:0x224c parp:0xe160 size:0x002e C-string:'UNK_0xe160'
//      UNK_0xe190  codep:0x224c parp:0xe190 size:0x0052 C-string:'UNK_0xe190'
//      UNK_0xe1e4  codep:0x224c parp:0xe1e4 size:0x000a C-string:'UNK_0xe1e4'
//      UNK_0xe1f0  codep:0x224c parp:0xe1f0 size:0x0054 C-string:'UNK_0xe1f0'
//      UNK_0xe246  codep:0x224c parp:0xe246 size:0x000e C-string:'UNK_0xe246'
//        CTSCROLL  codep:0x224c parp:0xe261 size:0x0042 C-string:'CTSCROLL'
//      UNK_0xe2a5  codep:0x224c parp:0xe2a5 size:0x0042 C-string:'UNK_0xe2a5'
//      UNK_0xe2e9  codep:0x224c parp:0xe2e9 size:0x000c C-string:'UNK_0xe2e9'
//      UNK_0xe2f7  codep:0x224c parp:0xe2f7 size:0x000c C-string:'UNK_0xe2f7'
//      UNK_0xe305  codep:0x224c parp:0xe305 size:0x000c C-string:'UNK_0xe305'
//      UNK_0xe313  codep:0x224c parp:0xe313 size:0x0014 C-string:'UNK_0xe313'
//      UNK_0xe329  codep:0x224c parp:0xe329 size:0x0020 C-string:'UNK_0xe329'
//      UNK_0xe34b  codep:0x224c parp:0xe34b size:0x0018 C-string:'UNK_0xe34b'
//      UNK_0xe365  codep:0x224c parp:0xe365 size:0x0012 C-string:'UNK_0xe365'
//      UNK_0xe379  codep:0x224c parp:0xe379 size:0x0014 C-string:'UNK_0xe379'
//      UNK_0xe38f  codep:0x224c parp:0xe38f size:0x001b C-string:'UNK_0xe38f'
//      UNK_0xe3ac  codep:0x224c parp:0xe3ac size:0x0015 C-string:'UNK_0xe3ac'
//      UNK_0xe3c3  codep:0x224c parp:0xe3c3 size:0x0006 C-string:'UNK_0xe3c3'
//              ?S  codep:0x4a4f parp:0xe3d0 size:0x0014 C-string:'_ask_S'
//      UNK_0xe3e6  codep:0x224c parp:0xe3e6 size:0x0008 C-string:'UNK_0xe3e6'
//             SPL  codep:0x4a4f parp:0xe3f6 size:0x0024 C-string:'SPL'
//      UNK_0xe41c  codep:0x224c parp:0xe41c size:0x001a C-string:'UNK_0xe41c'
//     (PHRASE>CT)  codep:0x224c parp:0xe446 size:0x003a C-string:'_ro_PHRASE_gt_CT_rc_'
//      UNK_0xe482  codep:0x224c parp:0xe482 size:0x002e C-string:'UNK_0xe482'
//      UNK_0xe4b2  codep:0x1d29 parp:0xe4b2 size:0x0002 C-string:'UNK_0xe4b2'
//      UNK_0xe4b6  codep:0x224c parp:0xe4b6 size:0x001c C-string:'UNK_0xe4b6'
//      UNK_0xe4d4  codep:0x224c parp:0xe4d4 size:0x0006 C-string:'UNK_0xe4d4'
//      UNK_0xe4dc  codep:0x224c parp:0xe4dc size:0x0008 C-string:'UNK_0xe4dc'
//      UNK_0xe4e6  codep:0x224c parp:0xe4e6 size:0x0008 C-string:'UNK_0xe4e6'
//      UNK_0xe4f0  codep:0x224c parp:0xe4f0 size:0x0008 C-string:'UNK_0xe4f0'
//      UNK_0xe4fa  codep:0x224c parp:0xe4fa size:0x0018 C-string:'UNK_0xe4fa'
//      UNK_0xe514  codep:0x224c parp:0xe514 size:0x0008 C-string:'UNK_0xe514'
//      UNK_0xe51e  codep:0x224c parp:0xe51e size:0x0006 C-string:'UNK_0xe51e'
//      UNK_0xe526  codep:0x224c parp:0xe526 size:0x0006 C-string:'UNK_0xe526'
//      UNK_0xe52e  codep:0x224c parp:0xe52e size:0x0016 C-string:'UNK_0xe52e'
//      UNK_0xe546  codep:0x224c parp:0xe546 size:0x000c C-string:'UNK_0xe546'
//      UNK_0xe554  codep:0x224c parp:0xe554 size:0x000c C-string:'UNK_0xe554'
//      UNK_0xe562  codep:0x224c parp:0xe562 size:0x001a C-string:'UNK_0xe562'
//      UNK_0xe57e  codep:0x224c parp:0xe57e size:0x000c C-string:'UNK_0xe57e'
//      UNK_0xe58c  codep:0x224c parp:0xe58c size:0x0012 C-string:'UNK_0xe58c'
//      UNK_0xe5a0  codep:0x224c parp:0xe5a0 size:0x0006 C-string:'UNK_0xe5a0'
//      UNK_0xe5a8  codep:0x224c parp:0xe5a8 size:0x0008 C-string:'UNK_0xe5a8'
//      UNK_0xe5b2  codep:0x224c parp:0xe5b2 size:0x0008 C-string:'UNK_0xe5b2'
//      UNK_0xe5bc  codep:0x224c parp:0xe5bc size:0x0008 C-string:'UNK_0xe5bc'
//      UNK_0xe5c6  codep:0x224c parp:0xe5c6 size:0x0008 C-string:'UNK_0xe5c6'
//      UNK_0xe5d0  codep:0x224c parp:0xe5d0 size:0x0008 C-string:'UNK_0xe5d0'
//      UNK_0xe5da  codep:0x224c parp:0xe5da size:0x0008 C-string:'UNK_0xe5da'
//      UNK_0xe5e4  codep:0x224c parp:0xe5e4 size:0x0008 C-string:'UNK_0xe5e4'
//      UNK_0xe5ee  codep:0x224c parp:0xe5ee size:0x0006 C-string:'UNK_0xe5ee'
//      UNK_0xe5f6  codep:0x224c parp:0xe5f6 size:0x0011 C-string:'UNK_0xe5f6'
//      UNK_0xe609  codep:0x224c parp:0xe609 size:0x000f C-string:'UNK_0xe609'
//      UNK_0xe61a  codep:0x224c parp:0xe61a size:0x0016 C-string:'UNK_0xe61a'
//      UNK_0xe632  codep:0x224c parp:0xe632 size:0x0016 C-string:'UNK_0xe632'
//      UNK_0xe64a  codep:0x224c parp:0xe64a size:0x0016 C-string:'UNK_0xe64a'
//      UNK_0xe662  codep:0x224c parp:0xe662 size:0x0016 C-string:'UNK_0xe662'
//      UNK_0xe67a  codep:0x224c parp:0xe67a size:0x0014 C-string:'UNK_0xe67a'
//      UNK_0xe690  codep:0x224c parp:0xe690 size:0x001a C-string:'UNK_0xe690'
//      UNK_0xe6ac  codep:0x224c parp:0xe6ac size:0x0014 C-string:'UNK_0xe6ac'
//      UNK_0xe6c2  codep:0x224c parp:0xe6c2 size:0x002e C-string:'UNK_0xe6c2'
//      UNK_0xe6f2  codep:0x224c parp:0xe6f2 size:0x0012 C-string:'UNK_0xe6f2'
//      UNK_0xe706  codep:0x224c parp:0xe706 size:0x0014 C-string:'UNK_0xe706'
//      UNK_0xe71c  codep:0x224c parp:0xe71c size:0x0010 C-string:'UNK_0xe71c'
//      UNK_0xe72e  codep:0x224c parp:0xe72e size:0x0032 C-string:'UNK_0xe72e'
//      UNK_0xe762  codep:0x224c parp:0xe762 size:0x0010 C-string:'UNK_0xe762'
//      UNK_0xe774  codep:0x224c parp:0xe774 size:0x000a C-string:'UNK_0xe774'
//      UNK_0xe780  codep:0x224c parp:0xe780 size:0x000c C-string:'UNK_0xe780'
//         (?RACE)  codep:0x4a4f parp:0xe798 size:0x0024 C-string:'_ro__ask_RACE_rc_'
//      UNK_0xe7be  codep:0x224c parp:0xe7be size:0x0008 C-string:'UNK_0xe7be'
//      UNK_0xe7c8  codep:0x224c parp:0xe7c8 size:0x0006 C-string:'UNK_0xe7c8'
//      UNK_0xe7d0  codep:0x224c parp:0xe7d0 size:0x0006 C-string:'UNK_0xe7d0'
//      UNK_0xe7d8  codep:0x224c parp:0xe7d8 size:0x0006 C-string:'UNK_0xe7d8'
//      UNK_0xe7e0  codep:0x224c parp:0xe7e0 size:0x0006 C-string:'UNK_0xe7e0'
//      UNK_0xe7e8  codep:0x224c parp:0xe7e8 size:0x0008 C-string:'UNK_0xe7e8'
//      UNK_0xe7f2  codep:0x224c parp:0xe7f2 size:0x000a C-string:'UNK_0xe7f2'
//      UNK_0xe7fe  codep:0x224c parp:0xe7fe size:0x000e C-string:'UNK_0xe7fe'
//      UNK_0xe80e  codep:0x224c parp:0xe80e size:0x002a C-string:'UNK_0xe80e'
//      UNK_0xe83a  codep:0x224c parp:0xe83a size:0x0014 C-string:'UNK_0xe83a'
//      UNK_0xe850  codep:0x224c parp:0xe850 size:0x0016 C-string:'UNK_0xe850'
//      UNK_0xe868  codep:0x224c parp:0xe868 size:0x004c C-string:'UNK_0xe868'
//      UNK_0xe8b6  codep:0x224c parp:0xe8b6 size:0x000a C-string:'UNK_0xe8b6'
//      UNK_0xe8c2  codep:0x224c parp:0xe8c2 size:0x000c C-string:'UNK_0xe8c2'
//      UNK_0xe8d0  codep:0x224c parp:0xe8d0 size:0x000c C-string:'UNK_0xe8d0'
//      UNK_0xe8de  codep:0x224c parp:0xe8de size:0x000a C-string:'UNK_0xe8de'
//      UNK_0xe8ea  codep:0x224c parp:0xe8ea size:0x001a C-string:'UNK_0xe8ea'
//      UNK_0xe906  codep:0x224c parp:0xe906 size:0x000a C-string:'UNK_0xe906'
//      UNK_0xe912  codep:0x224c parp:0xe912 size:0x001a C-string:'UNK_0xe912'
//      UNK_0xe92e  codep:0x224c parp:0xe92e size:0x000a C-string:'UNK_0xe92e'
//      UNK_0xe93a  codep:0x224c parp:0xe93a size:0x000a C-string:'UNK_0xe93a'
//      UNK_0xe946  codep:0x224c parp:0xe946 size:0x000c C-string:'UNK_0xe946'
//      UNK_0xe954  codep:0x224c parp:0xe954 size:0x000c C-string:'UNK_0xe954'
//      UNK_0xe962  codep:0x224c parp:0xe962 size:0x000c C-string:'UNK_0xe962'
//      UNK_0xe970  codep:0x224c parp:0xe970 size:0x000a C-string:'UNK_0xe970'
//      UNK_0xe97c  codep:0x224c parp:0xe97c size:0x000e C-string:'UNK_0xe97c'
//      UNK_0xe98c  codep:0x224c parp:0xe98c size:0x000a C-string:'UNK_0xe98c'
//      UNK_0xe998  codep:0x224c parp:0xe998 size:0x001c C-string:'UNK_0xe998'
//      UNK_0xe9b6  codep:0x224c parp:0xe9b6 size:0x000a C-string:'UNK_0xe9b6'
//      UNK_0xe9c2  codep:0x224c parp:0xe9c2 size:0x000a C-string:'UNK_0xe9c2'
//      UNK_0xe9ce  codep:0x224c parp:0xe9ce size:0x003c C-string:'UNK_0xe9ce'
//      UNK_0xea0c  codep:0x224c parp:0xea0c size:0x0016 C-string:'UNK_0xea0c'
//      UNK_0xea24  codep:0x224c parp:0xea24 size:0x0010 C-string:'UNK_0xea24'
//      UNK_0xea36  codep:0x224c parp:0xea36 size:0x0008 C-string:'UNK_0xea36'
//           <EDL>  codep:0xb869 parp:0xea48 size:0x0069 C-string:'_st_EDL_gt_'
//          <TALK>  codep:0xb869 parp:0xeabc size:0x00aa C-string:'_st_TALK_gt_'
//           <AUX>  codep:0xb869 parp:0xeb70 size:0x009a C-string:'_st_AUX_gt_'
//          <COMM>  codep:0xb869 parp:0xec15 size:0x0092 C-string:'_st_COMM_gt_'
//      UNK_0xeca9  codep:0x224c parp:0xeca9 size:0x0014 C-string:'UNK_0xeca9'
//      UNK_0xecbf  codep:0x224c parp:0xecbf size:0x002a C-string:'UNK_0xecbf'
//      UNK_0xeceb  codep:0x224c parp:0xeceb size:0x0006 C-string:'UNK_0xeceb'
//      UNK_0xecf3  codep:0x224c parp:0xecf3 size:0x002e C-string:'UNK_0xecf3'
//      UNK_0xed23  codep:0x744d parp:0xed23 size:0x0003 C-string:'UNK_0xed23'
//      UNK_0xed28  codep:0x224c parp:0xed28 size:0x0048 C-string:'UNK_0xed28'
//      UNK_0xed72  codep:0x1d29 parp:0xed72 size:0x0003 C-string:'UNK_0xed72'
//      UNK_0xed77  codep:0x224c parp:0xed77 size:0x0026 C-string:'UNK_0xed77'
//            (>?)  codep:0x4a4f parp:0xeda6 size:0x0014 C-string:'_ro__gt__ask__rc_'
//      UNK_0xedbc  codep:0x224c parp:0xedbc size:0x002c C-string:'UNK_0xedbc'
//      UNK_0xedea  codep:0x224c parp:0xedea size:0x000c C-string:'UNK_0xedea'
//             >CM  codep:0x4a4f parp:0xedfe size:0x0010 C-string:'_gt_CM'
//      UNK_0xee10  codep:0x224c parp:0xee10 size:0x0011 C-string:'UNK_0xee10'
//      UNK_0xee23  codep:0x224c parp:0xee23 size:0x0010 C-string:'UNK_0xee23'
//      UNK_0xee35  codep:0x224c parp:0xee35 size:0x000a C-string:'UNK_0xee35'
//      UNK_0xee41  codep:0x224c parp:0xee41 size:0x0006 C-string:'UNK_0xee41'
//            >Y/N  codep:0x4a4f parp:0xee50 size:0x0010 C-string:'_gt_Y_slash_N'
//      UNK_0xee62  codep:0x224c parp:0xee62 size:0x0018 C-string:'UNK_0xee62'
//      UNK_0xee7c  codep:0x224c parp:0xee7c size:0x0016 C-string:'UNK_0xee7c'
//         EDL+AUX  codep:0x224c parp:0xee9e size:0x0022 C-string:'EDL_plus_AUX'
//    COMM-EXPERTS  codep:0x224c parp:0xeed1 size:0x002a C-string:'COMM_dash_EXPERTS'
//      UNK_0xeefd  codep:0x224c parp:0xeefd size:0x002e C-string:'UNK_0xeefd'
//      UNK_0xef2d  codep:0x224c parp:0xef2d size:0x003e C-string:'UNK_0xef2d'
//      UNK_0xef6d  codep:0x224c parp:0xef6d size:0x002e C-string:'UNK_0xef6d'
//      UNK_0xef9d  codep:0x224c parp:0xef9d size:0x0024 C-string:'UNK_0xef9d'
//      UNK_0xefc3  codep:0x224c parp:0xefc3 size:0x009c C-string:'UNK_0xefc3'
//      UNK_0xf061  codep:0x224c parp:0xf061 size:0x0072 C-string:'UNK_0xf061'
//      UNK_0xf0d5  codep:0x224c parp:0xf0d5 size:0x0050 C-string:'UNK_0xf0d5'
//          (CBTN)  codep:0x4a4f parp:0xf130 size:0x000c C-string:'_ro_CBTN_rc_'
//      UNK_0xf13e  codep:0x224c parp:0xf13e size:0x002e C-string:'UNK_0xf13e'
//             CL1  codep:0x224c parp:0xf174 size:0x00b2 C-string:'CL1'
//      UNK_0xf228  codep:0x224c parp:0xf228 size:0x0050 C-string:'UNK_0xf228'
//      UNK_0xf27a  codep:0x224c parp:0xf27a size:0x00b4 C-string:'UNK_0xf27a'
//      UNK_0xf330  codep:0x224c parp:0xf330 size:0x0090 C-string:'UNK_0xf330'
//      UNK_0xf3c2  codep:0x224c parp:0xf3c2 size:0x0078 C-string:'UNK_0xf3c2'
//           IAPWR  codep:0x224c parp:0xf444 size:0x006a C-string:'IAPWR'
//      UNK_0xf4b0  codep:0x224c parp:0xf4b0 size:0x0014 C-string:'UNK_0xf4b0'
//      UNK_0xf4c6  codep:0x224c parp:0xf4c6 size:0x006a C-string:'UNK_0xf4c6'
//           ICOMM  codep:0x224c parp:0xf53a size:0x0000 C-string:'ICOMM'

// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xda05 = 0xda05; // UNK_0xda05 size: 4
// {0x56, 0x3a, 0x20, 0x6d}

const unsigned short int pp_UNK_0xda0b = 0xda0b; // UNK_0xda0b size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda13 = 0xda13; // UNK_0xda13 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda17 = 0xda17; // UNK_0xda17 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda1b = 0xda1b; // UNK_0xda1b size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda1f = 0xda1f; // UNK_0xda1f size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda23 = 0xda23; // UNK_0xda23 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda27 = 0xda27; // UNK_0xda27 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda2b = 0xda2b; // UNK_0xda2b size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda2f = 0xda2f; // UNK_0xda2f size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda33 = 0xda33; // UNK_0xda33 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda3f = 0xda3f; // UNK_0xda3f size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda43 = 0xda43; // UNK_0xda43 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda47 = 0xda47; // UNK_0xda47 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda4b = 0xda4b; // UNK_0xda4b size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda4f = 0xda4f; // UNK_0xda4f size: 4
// {0x56, 0x3a, 0x20, 0x72}

const unsigned short int pp_UNK_0xda59 = 0xda59; // UNK_0xda59 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda65 = 0xda65; // UNK_0xda65 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda69 = 0xda69; // UNK_0xda69 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda71 = 0xda71; // UNK_0xda71 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda7d = 0xda7d; // UNK_0xda7d size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20}

const unsigned short int pp_UNK_0xda8f = 0xda8f; // UNK_0xda8f size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x31, 0x2f, 0x38, 0x36, 0x20, 0x29, 0xda}

const unsigned short int pp_UNK_0xdaa1 = 0xdaa1; // UNK_0xdaa1 size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x2b, 0xe6, 0x84, 0xda, 0xc4, 0x5e, 0x53}

const unsigned short int pp_UNK_0xdab3 = 0xdab3; // UNK_0xdab3 size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x49, 0x2d, 0x4f, 0x46, 0xc6, 0xa0, 0x3c}

const unsigned short int pp_UNK_0xdac5 = 0xdac5; // UNK_0xdac5 size: 4
// {0x56, 0x3a, 0x20, 0x6d}

const unsigned short int pp_UNK_0xdacb = 0xdacb; // UNK_0xdacb size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdacf = 0xdacf; // UNK_0xdacf size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdad7 = 0xdad7; // UNK_0xdad7 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdadb = 0xdadb; // UNK_0xdadb size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdf32 = 0xdf32; // UNK_0xdf32 size: 224
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x48, 0x45, 0x41, 0x44, 0x3a, 0x20, 0x44, 0x49, 0x53, 0x4b, 0x3e, 0x44, 0x53, 0x50, 0x20, 0x28, 0x20, 0x2d, 0x2d, 0x20, 0x5c, 0x20, 0x6d, 0x6f, 0x76, 0x65, 0x20, 0x64, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x20, 0x66, 0x72, 0x6f, 0x6d, 0x20, 0x73, 0x61, 0x76, 0x65, 0x20, 0x64, 0x69, 0x73, 0x6b, 0x20, 0x74, 0x6f, 0x20, 0x29, 0x20, 0x20, 0x20, 0x20, 0x54, 0x3a, 0x20, 0x28, 0x20, 0x74, 0x65, 0x6d, 0x70, 0x6f, 0x72, 0x61, 0x72, 0x79, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x63, 0x61, 0x63, 0x68, 0x65, 0x29, 0x20}

const unsigned short int pp_UNK_0xe4b2 = 0xe4b2; // UNK_0xe4b2 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xed72 = 0xed72; // UNK_0xed72 size: 3
// {0x02, 0x08, 0x01}


const unsigned short int cc_UNK_0xda0f = 0x0000; // UNK_0xda0f
const unsigned short int cc_UNK_0xda37 = 0x0000; // UNK_0xda37
const unsigned short int cc_UNK_0xda3b = 0x0000; // UNK_0xda3b
const unsigned short int cc_UNK_0xda55 = 0x0000; // UNK_0xda55
const unsigned short int cc_UNK_0xda5d = 0x0000; // UNK_0xda5d
const unsigned short int cc_UNK_0xda61 = 0x0000; // UNK_0xda61
const unsigned short int cc_UNK_0xda6d = 0x0000; // UNK_0xda6d
const unsigned short int cc_UNK_0xda75 = 0x0000; // UNK_0xda75
const unsigned short int cc_UNK_0xda79 = 0x0000; // UNK_0xda79
const unsigned short int cc_UNK_0xdad3 = 0x0000; // UNK_0xdad3
const unsigned short int cc_UNK_0xdadf = 0x0001; // UNK_0xdadf
const unsigned short int cc_UNK_0xdae3 = 0x0002; // UNK_0xdae3
const unsigned short int cc_UNK_0xdae7 = 0x0004; // UNK_0xdae7
const unsigned short int cc_UNK_0xdaeb = 0x0008; // UNK_0xdaeb
const unsigned short int cc_UNK_0xdaef = 0x0010; // UNK_0xdaef
const unsigned short int cc_UNK_0xdaf3 = 0x0007; // UNK_0xdaf3
const unsigned short int cc_UNK_0xdaf7 = 0x0008; // UNK_0xdaf7
const unsigned short int cc_UNK_0xdafb = 0x0009; // UNK_0xdafb
const unsigned short int cc_UNK_0xdaff = 0x000b; // UNK_0xdaff
const unsigned short int cc_UNK_0xdb03 = 0x000a; // UNK_0xdb03


// 0xd932: db 0xc4 0x01 '  '

// ================================================
// 0xd934: WORD 'UNK_0xd936' codep=0x744d parp=0xd936
// ================================================
// 0xd936: db 0x30 0x0b 0xff '0  '

// ================================================
// 0xd939: WORD 'UNK_0xd93b' codep=0x224c parp=0xd93b
// ================================================

void UNK_0xd93b() // UNK_0xd93b
{
  _gt_C_plus_S(); // >C+S
  Push(0x63fa); // IFIELD(UNK_0xd936)
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xd94b: WORD 'UNK_0xd94d' codep=0x744d parp=0xd94d
// ================================================
// 0xd94d: db 0x32 0x0b 0x01 '2  '

// ================================================
// 0xd950: WORD 'UNK_0xd952' codep=0x744d parp=0xd952
// ================================================
// 0xd952: db 0x32 0x0c 0x01 '2  '

// ================================================
// 0xd955: WORD 'UNK_0xd957' codep=0x744d parp=0xd957
// ================================================
// 0xd957: db 0x32 0x0d 0x01 '2  '

// ================================================
// 0xd95a: WORD 'UNK_0xd95c' codep=0x744d parp=0xd95c
// ================================================
// 0xd95c: db 0x32 0x0e 0x01 '2  '

// ================================================
// 0xd95f: WORD 'UNK_0xd961' codep=0x744d parp=0xd961
// ================================================
// 0xd961: db 0x32 0x0f 0x01 '2  '

// ================================================
// 0xd964: WORD 'UNK_0xd966' codep=0x744d parp=0xd966
// ================================================
// 0xd966: db 0x32 0x10 0x01 '2  '

// ================================================
// 0xd969: WORD 'UNK_0xd96b' codep=0x744d parp=0xd96b
// ================================================
// 0xd96b: db 0x34 0x0b 0x01 '4  '

// ================================================
// 0xd96e: WORD 'UNK_0xd970' codep=0x744d parp=0xd970
// ================================================
// 0xd970: db 0x34 0x0c 0x01 '4  '

// ================================================
// 0xd973: WORD 'UNK_0xd975' codep=0x744d parp=0xd975
// ================================================
// 0xd975: db 0x34 0x0d 0x01 '4  '

// ================================================
// 0xd978: WORD 'UNK_0xd97a' codep=0x744d parp=0xd97a
// ================================================
// 0xd97a: db 0x34 0x12 0x01 '4  '

// ================================================
// 0xd97d: WORD 'UNK_0xd97f' codep=0x744d parp=0xd97f
// ================================================
// 0xd97f: db 0x34 0x1d 0x01 '4  '

// ================================================
// 0xd982: WORD 'UNK_0xd984' codep=0x744d parp=0xd984
// ================================================
// 0xd984: db 0x34 0x13 0x01 '4  '

// ================================================
// 0xd987: WORD 'UNK_0xd989' codep=0x744d parp=0xd989
// ================================================
// 0xd989: db 0x34 0x14 0x01 '4  '

// ================================================
// 0xd98c: WORD 'UNK_0xd98e' codep=0x744d parp=0xd98e
// ================================================
// 0xd98e: db 0x34 0x15 0x01 '4  '

// ================================================
// 0xd991: WORD 'UNK_0xd993' codep=0x744d parp=0xd993
// ================================================
// 0xd993: db 0x34 0x16 0x01 '4  '

// ================================================
// 0xd996: WORD 'UNK_0xd998' codep=0x744d parp=0xd998
// ================================================
// 0xd998: db 0x34 0x17 0x01 '4  '

// ================================================
// 0xd99b: WORD 'UNK_0xd99d' codep=0x744d parp=0xd99d
// ================================================
// 0xd99d: db 0x34 0x18 0x01 '4  '

// ================================================
// 0xd9a0: WORD 'UNK_0xd9a2' codep=0x744d parp=0xd9a2
// ================================================
// 0xd9a2: db 0x34 0x19 0x01 '4  '

// ================================================
// 0xd9a5: WORD 'UNK_0xd9a7' codep=0x744d parp=0xd9a7
// ================================================
// 0xd9a7: db 0x34 0x1a 0x03 '4  '

// ================================================
// 0xd9aa: WORD 'UNK_0xd9ac' codep=0x744d parp=0xd9ac
// ================================================
// 0xd9ac: db 0x10 0x1d 0x01 '   '

// ================================================
// 0xd9af: WORD 'UNK_0xd9b1' codep=0x744d parp=0xd9b1
// ================================================
// 0xd9b1: db 0x10 0x0b 0x0f 0x4d 0x74 0x10 0x1b 0x01 '   Mt   '

// ================================================
// 0xd9b9: WORD 'UNK_0xd9bb' codep=0x744d parp=0xd9bb
// ================================================
// 0xd9bb: db 0x10 0x1a 0x0f '   '

// ================================================
// 0xd9be: WORD 'UNK_0xd9c0' codep=0x744d parp=0xd9c0
// ================================================
// 0xd9c0: db 0x11 0x11 0x03 '   '

// ================================================
// 0xd9c3: WORD 'UNK_0xd9c5' codep=0x744d parp=0xd9c5
// ================================================
// 0xd9c5: db 0x11 0x1d 0x03 '   '

// ================================================
// 0xd9c8: WORD 'UNK_0xd9ca' codep=0x744d parp=0xd9ca
// ================================================
// 0xd9ca: db 0x14 0x45 0x04 0x4d 0x74 0x14 0x17 0x02 ' E Mt   '

// ================================================
// 0xd9d2: WORD 'UNK_0xd9d4' codep=0x744d parp=0xd9d4
// ================================================
// 0xd9d4: db 0x14 0x11 0x02 '   '

// ================================================
// 0xd9d7: WORD 'UNK_0xd9d9' codep=0x744d parp=0xd9d9
// ================================================
// 0xd9d9: db 0x14 0x19 0x02 '   '

// ================================================
// 0xd9dc: WORD 'UNK_0xd9de' codep=0x744d parp=0xd9de
// ================================================
// 0xd9de: db 0x14 0x1b 0x02 '   '

// ================================================
// 0xd9e1: WORD 'UNK_0xd9e3' codep=0x744d parp=0xd9e3
// ================================================
// 0xd9e3: db 0x14 0x1d 0x02 '   '

// ================================================
// 0xd9e6: WORD 'UNK_0xd9e8' codep=0x73ea parp=0xd9e8
// ================================================
// 0xd9e8: db 0x19 0x0c 0x04 0x49 0x91 0x64 '   I d'

// ================================================
// 0xd9ee: WORD 'UNK_0xd9f0' codep=0x73ea parp=0xd9f0
// ================================================
// 0xd9f0: db 0x19 0x12 0x03 0x49 0x91 0x64 '   I d'

// ================================================
// 0xd9f6: WORD 'UNK_0xd9f8' codep=0x744d parp=0xd9f8
// ================================================
// 0xd9f8: db 0x19 0x12 0x04 '   '

// ================================================
// 0xd9fb: WORD 'UNK_0xd9fd' codep=0x73ea parp=0xd9fd
// ================================================
// 0xd9fd: db 0x19 0x05 0x01 0x49 0x91 0x64 '   I d'

// ================================================
// 0xda03: WORD 'UNK_0xda05' codep=0x1d29 parp=0xda05
// ================================================
// 0xda05: db 0x56 0x3a 0x20 0x6d 'V: m'

// ================================================
// 0xda09: WORD 'UNK_0xda0b' codep=0x1d29 parp=0xda0b
// ================================================
// 0xda0b: db 0x3a 0x20 ': '

// ================================================
// 0xda0d: WORD 'UNK_0xda0f' codep=0x2214 parp=0xda0f
// ================================================
// 0xda0f: db 0x00 0x00 '  '

// ================================================
// 0xda11: WORD 'UNK_0xda13' codep=0x1d29 parp=0xda13
// ================================================
// 0xda13: db 0x3a 0x20 ': '

// ================================================
// 0xda15: WORD 'UNK_0xda17' codep=0x1d29 parp=0xda17
// ================================================
// 0xda17: db 0x3a 0x20 ': '

// ================================================
// 0xda19: WORD 'UNK_0xda1b' codep=0x1d29 parp=0xda1b
// ================================================
// 0xda1b: db 0x3a 0x20 ': '

// ================================================
// 0xda1d: WORD 'UNK_0xda1f' codep=0x1d29 parp=0xda1f
// ================================================
// 0xda1f: db 0x3a 0x20 ': '

// ================================================
// 0xda21: WORD 'UNK_0xda23' codep=0x1d29 parp=0xda23
// ================================================
// 0xda23: db 0x3a 0x20 ': '

// ================================================
// 0xda25: WORD 'UNK_0xda27' codep=0x1d29 parp=0xda27
// ================================================
// 0xda27: db 0x3a 0x20 ': '

// ================================================
// 0xda29: WORD 'UNK_0xda2b' codep=0x1d29 parp=0xda2b
// ================================================
// 0xda2b: db 0x3a 0x20 ': '

// ================================================
// 0xda2d: WORD 'UNK_0xda2f' codep=0x1d29 parp=0xda2f
// ================================================
// 0xda2f: db 0x3a 0x20 ': '

// ================================================
// 0xda31: WORD 'UNK_0xda33' codep=0x1d29 parp=0xda33
// ================================================
// 0xda33: db 0x3a 0x20 ': '

// ================================================
// 0xda35: WORD 'UNK_0xda37' codep=0x2214 parp=0xda37
// ================================================
// 0xda37: db 0x00 0x00 '  '

// ================================================
// 0xda39: WORD 'UNK_0xda3b' codep=0x2214 parp=0xda3b
// ================================================
// 0xda3b: db 0x00 0x00 '  '

// ================================================
// 0xda3d: WORD 'UNK_0xda3f' codep=0x1d29 parp=0xda3f
// ================================================
// 0xda3f: db 0x3a 0x20 ': '

// ================================================
// 0xda41: WORD 'UNK_0xda43' codep=0x1d29 parp=0xda43
// ================================================
// 0xda43: db 0x3a 0x20 ': '

// ================================================
// 0xda45: WORD 'UNK_0xda47' codep=0x1d29 parp=0xda47
// ================================================
// 0xda47: db 0x3a 0x20 ': '

// ================================================
// 0xda49: WORD 'UNK_0xda4b' codep=0x1d29 parp=0xda4b
// ================================================
// 0xda4b: db 0x3a 0x20 ': '

// ================================================
// 0xda4d: WORD 'UNK_0xda4f' codep=0x1d29 parp=0xda4f
// ================================================
// 0xda4f: db 0x56 0x3a 0x20 0x72 'V: r'

// ================================================
// 0xda53: WORD 'UNK_0xda55' codep=0x2214 parp=0xda55
// ================================================
// 0xda55: db 0x00 0x00 '  '

// ================================================
// 0xda57: WORD 'UNK_0xda59' codep=0x1d29 parp=0xda59
// ================================================
// 0xda59: db 0x3a 0x20 ': '

// ================================================
// 0xda5b: WORD 'UNK_0xda5d' codep=0x2214 parp=0xda5d
// ================================================
// 0xda5d: db 0x00 0x00 '  '

// ================================================
// 0xda5f: WORD 'UNK_0xda61' codep=0x2214 parp=0xda61
// ================================================
// 0xda61: db 0x00 0x00 '  '

// ================================================
// 0xda63: WORD 'UNK_0xda65' codep=0x1d29 parp=0xda65
// ================================================
// 0xda65: db 0x3a 0x20 ': '

// ================================================
// 0xda67: WORD 'UNK_0xda69' codep=0x1d29 parp=0xda69
// ================================================
// 0xda69: db 0x3a 0x20 ': '

// ================================================
// 0xda6b: WORD 'UNK_0xda6d' codep=0x2214 parp=0xda6d
// ================================================
// 0xda6d: db 0x00 0x00 '  '

// ================================================
// 0xda6f: WORD 'UNK_0xda71' codep=0x1d29 parp=0xda71
// ================================================
// 0xda71: db 0x3a 0x20 ': '

// ================================================
// 0xda73: WORD 'UNK_0xda75' codep=0x2214 parp=0xda75
// ================================================
// 0xda75: db 0x00 0x00 '  '

// ================================================
// 0xda77: WORD 'UNK_0xda79' codep=0x2214 parp=0xda79
// ================================================
// 0xda79: db 0x00 0x00 '  '

// ================================================
// 0xda7b: WORD 'UNK_0xda7d' codep=0x1d29 parp=0xda7d
// ================================================
// 0xda7d: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 ':  ALLOT        '

// ================================================
// 0xda8d: WORD 'UNK_0xda8f' codep=0x1d29 parp=0xda8f
// ================================================
// 0xda8f: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x31 0x2f 0x38 0x36 0x20 0x29 0xda ':  ALLOT 1/86 ) '

// ================================================
// 0xda9f: WORD 'UNK_0xdaa1' codep=0x1d29 parp=0xdaa1
// ================================================
// 0xdaa1: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x2b 0xe6 0x84 0xda 0xc4 0x5e 0x53 ':  ALLOT +    ^S'

// ================================================
// 0xdab1: WORD 'UNK_0xdab3' codep=0x1d29 parp=0xdab3
// ================================================
// 0xdab3: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x49 0x2d 0x4f 0x46 0xc6 0xa0 0x3c ':  ALLOT I-OF  <'

// ================================================
// 0xdac3: WORD 'UNK_0xdac5' codep=0x1d29 parp=0xdac5
// ================================================
// 0xdac5: db 0x56 0x3a 0x20 0x6d 'V: m'

// ================================================
// 0xdac9: WORD 'UNK_0xdacb' codep=0x1d29 parp=0xdacb
// ================================================
// 0xdacb: db 0x3a 0x20 ': '

// ================================================
// 0xdacd: WORD 'UNK_0xdacf' codep=0x1d29 parp=0xdacf
// ================================================
// 0xdacf: db 0x3a 0x20 ': '

// ================================================
// 0xdad1: WORD 'UNK_0xdad3' codep=0x2214 parp=0xdad3
// ================================================
// 0xdad3: db 0x00 0x00 '  '

// ================================================
// 0xdad5: WORD 'UNK_0xdad7' codep=0x1d29 parp=0xdad7
// ================================================
// 0xdad7: db 0x3a 0x20 ': '

// ================================================
// 0xdad9: WORD 'UNK_0xdadb' codep=0x1d29 parp=0xdadb
// ================================================
// 0xdadb: db 0x3a 0x20 ': '

// ================================================
// 0xdadd: WORD 'UNK_0xdadf' codep=0x2214 parp=0xdadf
// ================================================
// 0xdadf: db 0x01 0x00 '  '

// ================================================
// 0xdae1: WORD 'UNK_0xdae3' codep=0x2214 parp=0xdae3
// ================================================
// 0xdae3: db 0x02 0x00 '  '

// ================================================
// 0xdae5: WORD 'UNK_0xdae7' codep=0x2214 parp=0xdae7
// ================================================
// 0xdae7: db 0x04 0x00 '  '

// ================================================
// 0xdae9: WORD 'UNK_0xdaeb' codep=0x2214 parp=0xdaeb
// ================================================
// 0xdaeb: db 0x08 0x00 '  '

// ================================================
// 0xdaed: WORD 'UNK_0xdaef' codep=0x2214 parp=0xdaef
// ================================================
// 0xdaef: db 0x10 0x00 '  '

// ================================================
// 0xdaf1: WORD 'UNK_0xdaf3' codep=0x2214 parp=0xdaf3
// ================================================
// 0xdaf3: db 0x07 0x00 '  '

// ================================================
// 0xdaf5: WORD 'UNK_0xdaf7' codep=0x2214 parp=0xdaf7
// ================================================
// 0xdaf7: db 0x08 0x00 '  '

// ================================================
// 0xdaf9: WORD 'UNK_0xdafb' codep=0x2214 parp=0xdafb
// ================================================
// 0xdafb: db 0x09 0x00 '  '

// ================================================
// 0xdafd: WORD 'UNK_0xdaff' codep=0x2214 parp=0xdaff
// ================================================
// 0xdaff: db 0x0b 0x00 '  '

// ================================================
// 0xdb01: WORD 'UNK_0xdb03' codep=0x2214 parp=0xdb03
// ================================================
// 0xdb03: db 0x0a 0x00 '  '

// ================================================
// 0xdb05: WORD 'UNK_0xdb07' codep=0x744d parp=0xdb07
// ================================================
// 0xdb07: db 0x3d 0x1b 0x01 '=  '

// ================================================
// 0xdb0a: WORD 'UNK_0xdb0c' codep=0x224c parp=0xdb0c
// ================================================

void UNK_0xdb0c() // UNK_0xdb0c
{
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xdb12: WORD 'ORIGINATOR>C' codep=0x224c parp=0xdb23
// ================================================
// entry

void ORIGINATOR_gt_C() // ORIGINATOR>C
{
  Push(pp__ro_ORIGIN); // (ORIGIN
  _at__gt_C_plus_S(); // @>C+S
  SetColor("WHITE");
  SetColor("WHITE");
  Push(0x63fa); // IFIELD(UNK_0xd96b)
  Push(Read8(Pop())&0xFF); // C@
  _ask_MRC(); // ?MRC
  Push(pp_CTCOLOR); // CTCOLOR
  _ex__3(); // !_3
}


// ================================================
// 0xdb37: WORD 'A>ORIGINATOR' codep=0x224c parp=0xdb48
// ================================================
// entry

void A_gt_ORIGINATOR() // A>ORIGINATOR
{
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_ORIGIN); // (ORIGIN
  _1_dot_5_ex_(); // 1.5!
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda2f); // UNK_0xda2f
  _ex__3(); // !_3
  Push(pp_UNK_0xda27); // UNK_0xda27
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda3f); // UNK_0xda3f
  _ex__3(); // !_3
  Push(0xda5d);
  ON_3(); // ON_3
}


// ================================================
// 0xdb68: WORD 'UNK_0xdb6a' codep=0x224c parp=0xdb6a
// ================================================

void UNK_0xdb6a() // UNK_0xdb6a
{
  Push2Words("*COMM-OFF");
  Push(pp__ro_ORIGIN); // (ORIGIN
  _1_dot_5_ex_(); // 1.5!
  Push(pp_UNK_0xda13); // UNK_0xda13
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda2f); // UNK_0xda2f
  _ex__3(); // !_3
  Push(pp_UNK_0xda1b); // UNK_0xda1b
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda3f); // UNK_0xda3f
  _ex__3(); // !_3
}


// ================================================
// 0xdb82: WORD 'UNK_0xdb84' codep=0x224c parp=0xdb84
// ================================================

void UNK_0xdb84() // UNK_0xdb84
{
  Push(pp_UNK_0xda05); // UNK_0xda05
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xdb8a: WORD 'UNK_0xdb8c' codep=0x224c parp=0xdb8c
// ================================================

void UNK_0xdb8c() // UNK_0xdb8c
{
  Push(pp_UNK_0xdac5); // UNK_0xdac5
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63fe); // IFIELD(UNK_0xd961)
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdb98: WORD 'UNK_0xdb9a' codep=0x224c parp=0xdb9a
// ================================================

void UNK_0xdb9a() // UNK_0xdb9a
{
  Push(pp_UNK_0xdac5); // UNK_0xdac5
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63ff); // IFIELD(UNK_0xd966)
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdba6: WORD 'UNK_0xdba8' codep=0x224c parp=0xdba8
// ================================================

void UNK_0xdba8() // UNK_0xdba8
{
  Push(pp_UNK_0xda27); // UNK_0xda27
  _ex__3(); // !_3
}


// ================================================
// 0xdbae: WORD 'P>AFIELD' codep=0x4a4f parp=0xdbbb
// ================================================

void P_gt_AFIELD() // P>AFIELD
{
  switch(Pop()) // P>AFIELD
  {
  case 2:
    Push(0x6406); // IFIELD(UNK_0xd998)
    break;
  case 8:
    Push(0x6407); // IFIELD(UNK_0xd99d)
    break;
  default:
    Push(0x6405); // IFIELD(UNK_0xd993)
    break;

  }
}

// ================================================
// 0xdbc7: WORD 'UNK_0xdbc9' codep=0x224c parp=0xdbc9
// ================================================

void UNK_0xdbc9() // UNK_0xdbc9
{
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  _at__gt_C_plus_S(); // @>C+S
  Push(pp_UNK_0xda13); // UNK_0xda13
  Push(Read16(Pop())); // @
  P_gt_AFIELD(); // P>AFIELD case
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdbd9: WORD 'UNK_0xdbdb' codep=0x224c parp=0xdbdb
// ================================================

void UNK_0xdbdb() // UNK_0xdbdb
{
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  NEW_dash_BUT(); // NEW-BUT
}


// ================================================
// 0xdbe9: WORD 'UNK_0xdbeb' codep=0x224c parp=0xdbeb
// ================================================

void UNK_0xdbeb() // UNK_0xdbeb
{

  label1:
  UNK_0xdbdb(); // UNK_0xdbdb
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label1;
  SetColor("BLUE");
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  _dot_ON(); // .ON
}


// ================================================
// 0xdbfd: WORD 'UNK_0xdbff' codep=0x224c parp=0xdbff
// ================================================

void UNK_0xdbff() // UNK_0xdbff
{
  UNK_0xdb6a(); // UNK_0xdb6a
  SetColor("WHITE");
  Push(pp_CTCOLOR); // CTCOLOR
  _ex__3(); // !_3
}


// ================================================
// 0xdc09: WORD 'UNK_0xdc0b' codep=0x3b68 parp=0xdc0b
// ================================================
// 0xdc0b: db 0x14 0x00 0x0a 0x00 '    '

// ================================================
// 0xdc0f: WORD 'UNK_0xdc11' codep=0x3b68 parp=0xdc11
// ================================================
// 0xdc11: db 0x0f 0x00 0x0a 0x00 '    '

// ================================================
// 0xdc15: WORD 'UNK_0xdc17' codep=0x3b68 parp=0xdc17
// ================================================
// 0xdc17: db 0x0a 0x00 0x05 0x00 '    '

// ================================================
// 0xdc1b: WORD 'UNK_0xdc1d' codep=0x3b68 parp=0xdc1d
// ================================================
// 0xdc1d: db 0x07 0x00 0x04 0x00 '    '

// ================================================
// 0xdc21: WORD '#PHR' codep=0x4a4f parp=0xdc2a
// ================================================

void _n_PHR() // #PHR
{
  switch(Pop()) // #PHR
  {
  case 1:
    Push2Words("UNK_0xdc0b");
    break;
  case 2:
    Push2Words("UNK_0xdc11");
    break;
  case 4:
    Push2Words("UNK_0xdc17");
    break;
  case 8:
    Push2Words("UNK_0xdc1d");
    break;
  default:
    Push2Words("NULL");
    break;

  }
}

// ================================================
// 0xdc3e: WORD 'UNK_0xdc40' codep=0x224c parp=0xdc40
// ================================================

void UNK_0xdc40() // UNK_0xdc40
{
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read16(Pop())); // @
  _n_PHR(); // #PHR case
  RRND(); // RRND
  Push(pp_UNK_0xda47); // UNK_0xda47
  _ex__3(); // !_3
}


// ================================================
// 0xdc4e: WORD 'N>POST' codep=0x4a4f parp=0xdc59
// ================================================

void N_gt_POST() // N>POST
{
  switch(Pop()) // N>POST
  {
  case 0:
    Push(cc_UNK_0xdae3); // UNK_0xdae3
    break;
  case 1:
    Push(cc_UNK_0xdae7); // UNK_0xdae7
    break;
  case 2:
    Push(cc_UNK_0xdaeb); // UNK_0xdaeb
    break;
  case 3:
    Push(cc_UNK_0xdaef); // UNK_0xdaef
    break;
  default:
    Push(cc_UNK_0xdadf); // UNK_0xdadf
    break;

  }
}

// ================================================
// 0xdc6d: WORD 'UNK_0xdc6f' codep=0x224c parp=0xdc6f
// ================================================

void UNK_0xdc6f() // UNK_0xdc6f
{
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  _at__gt_C_plus_S(); // @>C+S
  Push(pp_EDL); // EDL
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x6402); // IFIELD(UNK_0xd984)
  Push(Read8(Pop())&0xFF); // C@
  _st_(); // <
  if (Pop() == 0) Push(1); else Push(0); // NOT
  OVER(); // OVER
  Push(0x6403); // IFIELD(UNK_0xd989)
  Push(Read8(Pop())&0xFF); // C@
  _st_(); // <
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x6404); // IFIELD(UNK_0xd98e)
  Push(Read8(Pop())&0xFF); // C@
  _st_(); // <
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xda65); // UNK_0xda65
  Push(Read16(Pop())); // @
  Push(pp_A_dash_STRENGTH); // A-STRENGTH
  Push(Read16(Pop())); // @
  _dash_(); // -
  _2DUP(); // 2DUP
  Push(cc__5); // 5
  _gt_(); // >
  SWAP(); // SWAP
  Push(cc__3); // 3
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  ROT(); // ROT
  Push(2); // 2
  Push((Pop()==Pop())?1:0); // =
  ROT(); // ROT
  Push(0x000f);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  N_gt_POST(); // N>POST case
  Push(pp_A_dash_POSTU); // A-POSTU
  _ex__3(); // !_3
  UNK_0xdc40(); // UNK_0xdc40
}


// ================================================
// 0xdcd5: WORD 'UNK_0xdcd7' codep=0x224c parp=0xdcd7
// ================================================

void UNK_0xdcd7() // UNK_0xdcd7
{
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read8(Pop())&0xFF); // C@
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xdcdf: WORD '+!EDL' codep=0x224c parp=0xdce9
// ================================================
// entry

void _plus__ex_EDL() // +!EDL
{
  Push(pp_EDL); // EDL
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(0x0064);
  MIN(); // MIN
  Push(pp_EDL); // EDL
  _ex__3(); // !_3
  UNK_0xdc6f(); // UNK_0xdc6f
  Push(pp_UNK_0xda1b); // UNK_0xda1b
  OFF(); // OFF
  Push(pp_UNK_0xda71); // UNK_0xda71
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  Push((Pop()==Pop())?1:0); // =
  Push(2); // 2
  UNK_0xdcd7(); // UNK_0xdcd7
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  _at__gt_C_plus_S(); // @>C+S
  Push(1); // 1
  Push(0x6401); // IFIELD(UNK_0xd97a)
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  Push(1); // 1
  Push(pp_EDL); // EDL
  _ex__3(); // !_3
  Push2Words("*HEAVEN");
  _gt_C_plus_S(); // >C+S
  Push(0); // 0
  Push(0x640a); // IFIELD(UNK_0xdb07)
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  Push(pp__ro_ENCOUNTER); // (ENCOUNTER
  _1_dot_5_at_(); // 1.5@
  Push2Words("*HEAVEN");
  D_eq_(); // D=
  if (Pop() == 0) return;
  Push(pp_SKIP2NEST); // SKIP2NEST
  ON_3(); // ON_3
}


// ================================================
// 0xdd45: WORD 'UNK_0xdd47' codep=0x224c parp=0xdd47
// ================================================

void UNK_0xdd47() // UNK_0xdd47
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xda33); // UNK_0xda33
  Push(Read16(Pop())); // @
  Push(0x0037);
  U_star_(); // U*
  OVER(); // OVER
  Push(Pop()*2); // 2*
  Push(cc_UNK_0xda5d); // UNK_0xda5d
  U_star_(); // U*
  D_plus_(); // D+
  D_plus_(); // D+
  Push(pp_OK_dash_TALK); // OK-TALK
  D_ex_(); // D!
}


// ================================================
// 0xdd67: WORD 'UNK_0xdd69' codep=0x224c parp=0xdd69
// ================================================

void UNK_0xdd69() // UNK_0xdd69
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x4e20); Push(0x0000);
  D_plus_(); // D+
  Push(pp_UNK_0xda4f); // UNK_0xda4f
  D_ex_(); // D!
}


// ================================================
// 0xdd7b: WORD 'UNK_0xdd7d' codep=0x224c parp=0xdd7d
// ================================================

void UNK_0xdd7d() // UNK_0xdd7d
{
  unsigned short int a = Pop(); // >R
  Push(a); // I
  Push(0x000a);
  Push(0x000c);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  Push(0); // 0
  Push(0x0065);
  RRND(); // RRND
  Push(0x0014);
  _st_(); // <
  Push(a); // I
  BIT(); // BIT
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdad7); // UNK_0xdad7
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  Push(pp_UNK_0xdad7); // UNK_0xdad7
  _ex__3(); // !_3

  label1:
  Push(a); // R>
  BIT(); // BIT
  Push(pp_UNK_0xdad7); // UNK_0xdad7
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xddbd: WORD 'UNK_0xddbf' codep=0x224c parp=0xddbf
// ================================================

void UNK_0xddbf() // UNK_0xddbf
{
  Push(0); // 0
  Push(0x0100);
  Push(pp_UNK_0xda4b); // UNK_0xda4b
  _ex__3(); // !_3

  label2:
  Push(0x63fc); // IFIELD(UNK_0xd957)
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xda4b); // UNK_0xda4b
  Push(Read16(Pop())); // @
  _st_(); // <
  Push(0x63fb); // IFIELD(UNK_0xd952)
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xda2f); // UNK_0xda2f
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() & Pop()); // AND
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(0x63fa); // IFIELD(UNK_0xd94d)
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xda59); // UNK_0xda59
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  CI(); // CI
  Push(pp_UNK_0xda05); // UNK_0xda05
  _1_dot_5_ex_(); // 1.5!
  Push(0x63fc); // IFIELD(UNK_0xd957)
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xda4b); // UNK_0xda4b
  _ex__3(); // !_3
  Pop(); // DROP
  Push(1); // 1

  label1:
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label2;
}


// ================================================
// 0xde0f: WORD 'UNK_0xde11' codep=0x224c parp=0xde11
// ================================================

void UNK_0xde11() // UNK_0xde11
{
  Push(pp_UNK_0xda3f); // UNK_0xda3f
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(1); // 1
  Push(2); // 2
  WITHIN(); // WITHIN
  SWAP(); // SWAP
  Push(cc__5); // 5
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xde29: WORD 'UNK_0xde2b' codep=0x224c parp=0xde2b
// ================================================

void UNK_0xde2b() // UNK_0xde2b
{
  Push(pp_UNK_0xda3f); // UNK_0xda3f
  Push(Read16(Pop())); // @
  Push(0x0033);
  OVER(); // OVER
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  SWAP(); // SWAP
  UNK_0xdd7d(); // UNK_0xdd7d
  Push(Pop() | Pop()); // OR
  Push(cc_UNK_0xda5d); // UNK_0xda5d
  Push(pp_UNK_0xda59); // UNK_0xda59
  Push(Read16(Pop())); // @
  Push(2); // 2
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xde11(); // UNK_0xde11
  Push(Pop() | Pop()); // OR

  label1:
  if (Pop() == 0) return;
  IFIRST(); // IFIRST
  Push(0x0033);
  Push(cc__5); // 5
  IFIND(); // IFIND
  Pop(); // DROP
  Push(cc__5); // 5
  Push(pp_UNK_0xda3f); // UNK_0xda3f
  _ex__3(); // !_3
}


// ================================================
// 0xde6b: WORD 'UNK_0xde6d' codep=0x224c parp=0xde6d
// ================================================

void UNK_0xde6d() // UNK_0xde6d
{
  Push2Words("NULL");
  Push(pp_UNK_0xda05); // UNK_0xda05
  _1_dot_5_ex_(); // 1.5!
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  _ask_CHILD(); // ?CHILD
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  UNK_0xde2b(); // UNK_0xde2b
  _ask_CHILD(); // ?CHILD
  if (Pop() == 0) goto label2;
  IOPEN(); // IOPEN
  UNK_0xddbf(); // UNK_0xddbf
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label3;
  ICLOSE(); // ICLOSE
  Push(cc__5); // 5
  Push(pp_UNK_0xda3f); // UNK_0xda3f
  _ex__3(); // !_3
  UNK_0xde2b(); // UNK_0xde2b
  IOPEN(); // IOPEN
  UNK_0xddbf(); // UNK_0xddbf
  Pop(); // DROP

  label3:
  CDROP(); // CDROP

  label2:
  CDROP(); // CDROP

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdea7: WORD 'UNK_0xdea9' codep=0x224c parp=0xdea9
// ================================================

void UNK_0xdea9() // UNK_0xdea9
{
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  _ex__3(); // !_3
  Push(cc__5); // 5
  Push(pp_RECORD_n_); // RECORD#
  _ex__3(); // !_3
}


// ================================================
// 0xdeb9: WORD 'UNK_0xdebb' codep=0x224c parp=0xdebb
// ================================================

void UNK_0xdebb() // UNK_0xdebb
{
  LoadData("1BTN"); // from 'BUTTONS     '
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xdec5: WORD 'UNK_0xdec7' codep=0x224c parp=0xdec7
// ================================================

void UNK_0xdec7() // UNK_0xdec7
{
  UNK_0xdea9(); // UNK_0xdea9

  UNK_0x3f3b("RESPOND");
  UNK_0xdebb(); // UNK_0xdebb
}


// ================================================
// 0xded7: WORD '>HAIL$' codep=0x224c parp=0xdee2
// ================================================
// entry

void _gt_HAIL_do_() // >HAIL$
{
  UNK_0xdea9(); // UNK_0xdea9

  UNK_0x3f3b("HAIL   ");
  UNK_0xdebb(); // UNK_0xdebb
}


// ================================================
// 0xdef2: WORD 'UNK_0xdef4' codep=0x224c parp=0xdef4
// ================================================

void UNK_0xdef4() // UNK_0xdef4
{
  SWAP(); // SWAP
  PAD(); // PAD
  PAD(); // PAD
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  ROT(); // ROT
  Push(Read16(regsp)); // DUP
  PAD(); // PAD
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  PAD(); // PAD
  C_ex_(); // C!
  CMOVE(); // CMOVE
}


// ================================================
// 0xdf12: WORD 'UNK_0xdf14' codep=0x224c parp=0xdf14
// ================================================

void UNK_0xdf14() // UNK_0xdf14
{
  Push(0); // 0
  ROT(); // ROT
  ROT(); // ROT
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  Push(1); // 1
  i += Pop();
  } while(i<imax); // (/LOOP) 0xfff6

}


// ================================================
// 0xdf30: WORD 'UNK_0xdf32' codep=0x1d29 parp=0xdf32
// ================================================
// 0xdf32: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x48 0x45 0x41 0x44 0x3a 0x20 0x44 0x49 0x53 0x4b 0x3e 0x44 0x53 0x50 0x20 0x28 0x20 0x2d 0x2d 0x20 0x5c 0x20 0x6d 0x6f 0x76 0x65 0x20 0x64 0x69 0x73 0x70 0x6c 0x61 0x79 0x20 0x69 0x6d 0x61 0x67 0x65 0x20 0x66 0x72 0x6f 0x6d 0x20 0x73 0x61 0x76 0x65 0x20 0x64 0x69 0x73 0x6b 0x20 0x74 0x6f 0x20 0x29 0x20 0x20 0x20 0x20 0x54 0x3a 0x20 0x28 0x20 0x74 0x65 0x6d 0x70 0x6f 0x72 0x61 0x72 0x79 0x20 0x6c 0x6f 0x63 0x61 0x74 0x69 0x6f 0x6e 0x20 0x69 0x6e 0x20 0x63 0x61 0x63 0x68 0x65 0x29 0x20 ':  ALLOT                                                                                                                      HEAD: DISK>DSP ( -- \ move display image from save disk to )    T: ( temporary location in cache) '

// ================================================
// 0xe012: WORD 'UNK_0xe014' codep=0x224c parp=0xe014
// ================================================

void UNK_0xe014() // UNK_0xe014
{
  Push(pp_UNK_0xdf32); // UNK_0xdf32
  Push(0x00e0);
  Push(cc_BL); // BL
  FILL_1(); // FILL_1
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(0x6409); // IFIELD(UNK_0xd9a7)
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x0020);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x63fa); // IFIELD(UNK_0xd936)
  Push(Pop()+1); // 1+
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  Push(pp_LSCAN); // LSCAN
  Push(pp_UNK_0xdf32); // UNK_0xdf32
  Push(i); // I
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  CMOVE(); // CMOVE
  INEXT(); // INEXT
  i++;
  } while(i<imax); // (LOOP) 0xffe0

  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe058: WORD 'UNK_0xe05a' codep=0x224c parp=0xe05a
// ================================================

void UNK_0xe05a() // UNK_0xe05a
{
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdf32); // UNK_0xdf32
  Push(Pop() + Pop()); // +
  COUNT(); // COUNT
}


// ================================================
// 0xe066: WORD 'UNK_0xe068' codep=0x224c parp=0xe068
// ================================================

void UNK_0xe068() // UNK_0xe068
{
  PAD(); // PAD
  Push(0x0040);
  Push(cc_BL); // BL
  FILL_1(); // FILL_1
  Push(0); // 0
  PAD(); // PAD
  C_ex_(); // C!
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(0x6408); // IFIELD(UNK_0xd9a2)
  Push(Read8(Pop())&0xFF); // C@
  unsigned short int a = Pop(); // >R
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  Push(a); // R>
  MOD(); // MOD
  Push(Pop()+2); // 2+
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  _2DUP(); // 2DUP
  UNK_0xdf14(); // UNK_0xdf14
  Push(i); // I
  Push(Pop() * Pop()); // *
  Push(0x0020);
  MOD(); // MOD
  UNK_0xe05a(); // UNK_0xe05a
  UNK_0xdef4(); // UNK_0xdef4
  i++;
  } while(i<imax); // (LOOP) 0xffec

  Pop(); Pop();// 2DROP
  PAD(); // PAD
  COUNT(); // COUNT
}


// ================================================
// 0xe0ac: WORD 'O>P' codep=0x4a4f parp=0xe0b4
// ================================================

void O_gt_P() // O>P
{
  switch(Pop()) // O>P
  {
  case 8:
    Push(1); // 1
    break;
  case 7:
    Push(2); // 2
    break;
  case 1:
    Push(cc__3); // 3
    break;
  default:
    Push(cc__dash_1); // -1
    break;

  }
}

// ================================================
// 0xe0c4: WORD 'UNK_0xe0c6' codep=0x224c parp=0xe0c6
// ================================================

void UNK_0xe0c6() // UNK_0xe0c6
{
  Push(cc_UNK_0xda61); // UNK_0xda61
  Push(cc_UNK_0xda5d); // UNK_0xda5d
  Push(Pop() & Pop()); // AND
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  Push(cc__3); // 3
  PICK(); // PICK
  Push(cc__3); // 3
  PICK(); // PICK
  Push(Pop() * Pop()); // *
  ABS(); // ABS
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(0x00fa);
  MOD(); // MOD
  Push(pp_UNK_0xdacb); // UNK_0xdacb
  Push(Read16(Pop())); // @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe0f6: WORD 'UNK_0xe0f8' codep=0x224c parp=0xe0f8
// ================================================

void UNK_0xe0f8() // UNK_0xe0f8
{
  Push(pp_TERMINA); // TERMINA
  ON_3(); // ON_3
  Push(pp_UNK_0xda69); // UNK_0xda69
  OFF(); // OFF
  Push(0xafa3); // probable 'CEX+WAX'
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  _ex__3(); // !_3
}


// ================================================
// 0xe10a: WORD 'UNK_0xe10c' codep=0x224c parp=0xe10c
// ================================================

void UNK_0xe10c() // UNK_0xe10c
{
  Pop(); // DROP
  UNK_0xe0f8(); // UNK_0xe0f8
}


// ================================================
// 0xe112: WORD 'ACASE' codep=0x4a4f parp=0xe11c
// ================================================

void ACASE() // ACASE
{
  switch(Pop()) // ACASE
  {
  case 0:
    _plus__ex_EDL(); // +!EDL
    break;
  case 1:
    UNK_0xe10c(); // UNK_0xe10c
    break;
  default:
    Pop(); // DROP
    break;

  }
}

// ================================================
// 0xe128: WORD 'UNK_0xe12a' codep=0x224c parp=0xe12a
// ================================================

void UNK_0xe12a() // UNK_0xe12a
{
  UNK_0xdb84(); // UNK_0xdb84
  Push(0x63fd); // IFIELD(UNK_0xd95c)
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
  Push(pp__ro_ORIGIN); // (ORIGIN
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Push(Read16(regsp)); // DUP
  Push(0x007f);
  Push((Pop()==Pop())?1:0); // =
  OVER(); // OVER
  Push(0xff81);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  ACASE(); // ACASE case
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xe15e: WORD 'UNK_0xe160' codep=0x224c parp=0xe160
// ================================================

void UNK_0xe160() // UNK_0xe160
{
  _2DUP(); // 2DUP
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  Push(cc_BL); // BL
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+
  goto label2;

  label1:
  imax = i; // LEAVE

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffea

  unsigned short int a = Pop(); // >R
  SWAP(); // SWAP
  Push(a); // I
  _dash_(); // -
  Push(Pop() + Pop()); // +
  Push(a); // R>
  SWAP(); // SWAP
}


// ================================================
// 0xe18e: WORD 'UNK_0xe190' codep=0x224c parp=0xe190
// ================================================

void UNK_0xe190() // UNK_0xe190
{
  UNK_0xe160(); // UNK_0xe160
  _2DUP(); // 2DUP
  Push(Pop()+1); // 1+
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0); // 0
  ROT(); // ROT
  ROT(); // ROT

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(cc_BL); // BL
  Push((Pop()==Pop())?1:0); // =
  Push(i); // I
  Push(Pop()+1); // 1+
  Push(imax); // I'
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(i); // I
  Push(cc__3); // 3
  PICK(); // PICK
  _dash_(); // -
  imax = i; // LEAVE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffdc

  Push(Read16(regsp)); // DUP
  Push(cc__4); // 4
  PICK(); // PICK
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  ROT(); // ROT
  Push(cc__3); // 3
  PICK(); // PICK
  _dash_(); // -
  Push(Pop()-1); // 1-
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xe1e2: WORD 'UNK_0xe1e4' codep=0x224c parp=0xe1e4
// ================================================

void UNK_0xe1e4() // UNK_0xe1e4
{
  Push(Pop()-1); // 1-
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
}


// ================================================
// 0xe1ee: WORD 'UNK_0xe1f0' codep=0x224c parp=0xe1f0
// ================================================

void UNK_0xe1f0() // UNK_0xe1f0
{
  Push(pp__ask_ON_dash_PLA); // ?ON-PLA
  Push(Read16(Pop())); // @
  unsigned short int a = Pop(); // >R
  Push(a); // I
  if (Pop() == 0) goto label1;
  SetColor("PINK");
  goto label2;

  label1:
  SetColor("BLUE");

  label2:
  _ex_COLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+

  label3:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_gt_(); // D>
  _i_KEY(); // 'KEY
  Push(0x002b);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label3;
  Push(a); // I
  if (Pop() == 0) goto label4;
  SetColor("RED");
  goto label5;

  label4:
  SetColor("DK-BLUE");

  label5:
  _ex_COLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  Push(pp_CTCOLOR); // CTCOLOR
  Push(Read16(Pop())); // @
  _ex_COLOR(); // !COLOR
  Pop(); Pop();// 2DROP
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xe244: WORD 'UNK_0xe246' codep=0x224c parp=0xe246
// ================================================

void UNK_0xe246() // UNK_0xe246
{
  Push(pp_CTX); // CTX
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x0026);
  _st_(); // <
}


// ================================================
// 0xe254: WORD 'CTSCROLL' codep=0x224c parp=0xe261
// ================================================
// entry

void CTSCROLL() // CTSCROLL
{
  Push(1); // 1
  Push(pp_UNK_0xdadb); // UNK_0xdadb
  _plus__ex_(); // +!
  Push(pp_UNK_0xdadb); // UNK_0xdadb
  Push(Read16(Pop())); // @
  Push(cc__7); // 7
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x2ee0); Push(0x0000);
  UNK_0xe1f0(); // UNK_0xe1f0
  Push(pp_UNK_0xdadb); // UNK_0xdadb
  OFF(); // OFF

  label1:
  Push(cc__7); // 7
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__3); // 3
  Push(pp_CTTOP); // CTTOP
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0x00a1);
  Push(pp_CTBOT); // CTBOT
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  Push(pp_CTTOP); // CTTOP
  Push(Read16(Pop())); // @
  LCOPYBLK(); // LCOPYBLK
  i++;
  } while(i<imax); // (LOOP) 0xffe6

}


// ================================================
// 0xe2a3: WORD 'UNK_0xe2a5' codep=0x224c parp=0xe2a5
// ================================================

void UNK_0xe2a5() // UNK_0xe2a5
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(Read16(regsp)); // DUP
  UNK_0xe246(); // UNK_0xe246
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  CTSCROLL(); // CTSCROLL
  Push(0); // 0
  Push(cc__6); // 6
  CTPOS_dot_(); // CTPOS.

  label2:
  OVER(); // OVER
  Push(Read8(Pop())&0xFF); // C@
  Push(0x002e);
  Push((Pop()==Pop())?1:0); // =
  Push(pp_CTX); // CTX
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  SPACE(); // SPACE

  label3:
  Push(Read16(regsp)); // DUP
  Push(pp_CTX); // CTX
  _plus__ex_(); // +!
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xe2e7: WORD 'UNK_0xe2e9' codep=0x224c parp=0xe2e9
// ================================================

void UNK_0xe2e9() // UNK_0xe2e9
{
  Push(pp_UNK_0xda7d); // UNK_0xda7d
  Push(Pop()+1); // 1+
  Push(Read16(regsp)); // DUP
  Push(Pop()-1); // 1-
  Push(Read8(Pop())&0xFF); // C@
}


// ================================================
// 0xe2f5: WORD 'UNK_0xe2f7' codep=0x224c parp=0xe2f7
// ================================================

void UNK_0xe2f7() // UNK_0xe2f7
{
  Push(pp_UNK_0xda8f); // UNK_0xda8f
  Push(Pop()+1); // 1+
  Push(Read16(regsp)); // DUP
  Push(Pop()-1); // 1-
  Push(Read8(Pop())&0xFF); // C@
}


// ================================================
// 0xe303: WORD 'UNK_0xe305' codep=0x224c parp=0xe305
// ================================================

void UNK_0xe305() // UNK_0xe305
{
  Push(pp_UNK_0xdaa1); // UNK_0xdaa1
  Push(Pop()+1); // 1+
  Push(Read16(regsp)); // DUP
  Push(Pop()-1); // 1-
  Push(Read8(Pop())&0xFF); // C@
}


// ================================================
// 0xe311: WORD 'UNK_0xe313' codep=0x224c parp=0xe313
// ================================================

void UNK_0xe313() // UNK_0xe313
{

  UNK_0x3f3b("ISS");
  UNK_0xe2a5(); // UNK_0xe2a5
  Push(pp_UNK_0xdab3); // UNK_0xdab3
  Push(Pop()+1); // 1+
  Push(Read16(regsp)); // DUP
  Push(Pop()-1); // 1-
  Push(Read8(Pop())&0xFF); // C@
}


// ================================================
// 0xe327: WORD 'UNK_0xe329' codep=0x224c parp=0xe329
// ================================================

void UNK_0xe329() // UNK_0xe329
{

  label2:
  OVER(); // OVER
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0029);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  OVER(); // OVER
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xe1e4(); // UNK_0xe1e4
  goto label2;

  label1:
  UNK_0xe1e4(); // UNK_0xe1e4
}


// ================================================
// 0xe349: WORD 'UNK_0xe34b' codep=0x224c parp=0xe34b
// ================================================

void UNK_0xe34b() // UNK_0xe34b
{
  UNK_0xe1e4(); // UNK_0xe1e4
  Push(pp_UNK_0xda1f); // UNK_0xda1f
  Push(Read16(Pop())); // @
  Push(cc__9); // 9
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  UNK_0xe329(); // UNK_0xe329
  Push2Words("NULL");

  label1:
  Push(0); // 0
}


// ================================================
// 0xe363: WORD 'UNK_0xe365' codep=0x224c parp=0xe365
// ================================================

void UNK_0xe365() // UNK_0xe365
{

  UNK_0x3f3b("YOUR");
  UNK_0xe2a5(); // UNK_0xe2a5

  UNK_0x3f3b("RACE");
}


// ================================================
// 0xe377: WORD 'UNK_0xe379' codep=0x224c parp=0xe379
// ================================================

void UNK_0xe379() // UNK_0xe379
{

  UNK_0x3f3b("OTHER");
  UNK_0xe2a5(); // UNK_0xe2a5

  UNK_0x3f3b("RACES");
}


// ================================================
// 0xe38d: WORD 'UNK_0xe38f' codep=0x224c parp=0xe38f
// ================================================

void UNK_0xe38f() // UNK_0xe38f
{

  UNK_0x3f3b("THE");
  UNK_0xe2a5(); // UNK_0xe2a5

  UNK_0x3f3b("OLD");
  UNK_0xe2a5(); // UNK_0xe2a5

  UNK_0x3f3b("EMPIRE");
}


// ================================================
// 0xe3aa: WORD 'UNK_0xe3ac' codep=0x224c parp=0xe3ac
// ================================================

void UNK_0xe3ac() // UNK_0xe3ac
{

  UNK_0x3f3b("THE");
  UNK_0xe2a5(); // UNK_0xe2a5

  UNK_0x3f3b("ANCIENTS");
}


// ================================================
// 0xe3c1: WORD 'UNK_0xe3c3' codep=0x224c parp=0xe3c3
// ================================================

void UNK_0xe3c3() // UNK_0xe3c3
{
  UNK_0xe1e4(); // UNK_0xe1e4
  Push(0); // 0
}


// ================================================
// 0xe3c9: WORD '?S' codep=0x4a4f parp=0xe3d0
// ================================================

void _ask_S() // ?S
{
  switch(Pop()) // ?S
  {
  case 7:
    UNK_0xe365(); // UNK_0xe365
    break;
  case 8:
    UNK_0xe379(); // UNK_0xe379
    break;
  case 10:
    UNK_0xe38f(); // UNK_0xe38f
    break;
  case 11:
    UNK_0xe3ac(); // UNK_0xe3ac
    break;
  default:
    UNK_0xe3c3(); // UNK_0xe3c3
    break;

  }
}

// ================================================
// 0xe3e4: WORD 'UNK_0xe3e6' codep=0x224c parp=0xe3e6
// ================================================

void UNK_0xe3e6() // UNK_0xe3e6
{
  Push(pp_UNK_0xda1f); // UNK_0xda1f
  Push(Read16(Pop())); // @
  _ask_S(); // ?S case
}


// ================================================
// 0xe3ee: WORD 'SPL' codep=0x4a4f parp=0xe3f6
// ================================================

void SPL() // SPL
{
  switch(Pop()) // SPL
  {
  case 42:
    UNK_0xe305(); // UNK_0xe305
    break;
  case 38:
    UNK_0xe313(); // UNK_0xe313
    break;
  case 37:
    UNK_0xe2e9(); // UNK_0xe2e9
    break;
  case 47:
    UNK_0xe3e6(); // UNK_0xe3e6
    break;
  case 40:
    UNK_0xe34b(); // UNK_0xe34b
    break;
  case 41:
    UNK_0xe3c3(); // UNK_0xe3c3
    break;
  case 43:
    UNK_0xe2f7(); // UNK_0xe2f7
    break;
  case 35:
    UNK_0xe3c3(); // UNK_0xe3c3
    break;
  default:
    Push(0); // 0
    break;

  }
}

// ================================================
// 0xe41a: WORD 'UNK_0xe41c' codep=0x224c parp=0xe41c
// ================================================

void UNK_0xe41c() // UNK_0xe41c
{
  OVER(); // OVER
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(Pop() * Pop()); // *
  SPL(); // SPL case
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  UNK_0xe2a5(); // UNK_0xe2a5
  UNK_0xe1e4(); // UNK_0xe1e4
}


// ================================================
// 0xe436: WORD '(PHRASE>CT)' codep=0x224c parp=0xe446
// ================================================
// entry

void _ro_PHRASE_gt_CT_rc_() // (PHRASE>CT)
{
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xda33); // UNK_0xda33
  _ex__3(); // !_3
  CTINIT(); // CTINIT
  Push(0); // 0
  Push(cc__6); // 6
  CTPOS_dot_(); // CTPOS.
  Push(pp_CTCOLOR); // CTCOLOR
  Push(Read16(Pop())); // @
  _ex_COLOR(); // !COLOR
  Push(pp_UNK_0xdadb); // UNK_0xdadb
  OFF(); // OFF
  CTSCROLL(); // CTSCROLL

  label2:
  UNK_0xe190(); // UNK_0xe190
  UNK_0xe41c(); // UNK_0xe41c
  UNK_0xe0c6(); // UNK_0xe0c6
  if (Pop() == 0) goto label1;
  UNK_0xe068(); // UNK_0xe068

  label1:
  UNK_0xe2a5(); // UNK_0xe2a5
  Push(1); // 1
  Push(pp_CTX); // CTX
  _plus__ex_(); // +!
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe480: WORD 'UNK_0xe482' codep=0x224c parp=0xe482
// ================================================

void UNK_0xe482() // UNK_0xe482
{
  Push(pp_UNK_0xda05); // UNK_0xda05
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  UNK_0xe12a(); // UNK_0xe12a
  UNK_0xdb84(); // UNK_0xdb84
  Push(0x63fc); // IFIELD(UNK_0xd957)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  Push(0x63fc); // IFIELD(UNK_0xd957)
  C_ex_(); // C!
  IOPEN(); // IOPEN
  Push(0x63fa); // IFIELD(UNK_0xd936)
  Push(Pop()+1); // 1+
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe4b0: WORD 'UNK_0xe4b2' codep=0x1d29 parp=0xe4b2
// ================================================
// 0xe4b2: db 0x00 0x00 '  '

// ================================================
// 0xe4b4: WORD 'UNK_0xe4b6' codep=0x224c parp=0xe4b6
// ================================================

void UNK_0xe4b6() // UNK_0xe4b6
{
  CTINIT(); // CTINIT
  Push(0x0eca); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  _dot_TTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
  UNK_0xdba8(); // UNK_0xdba8
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  UNK_0xde6d(); // UNK_0xde6d
  UNK_0xe482(); // UNK_0xe482
}


// ================================================
// 0xe4d2: WORD 'UNK_0xe4d4' codep=0x224c parp=0xe4d4
// ================================================

void UNK_0xe4d4() // UNK_0xe4d4
{
  Push(cc__5); // 5
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe4da: WORD 'UNK_0xe4dc' codep=0x224c parp=0xe4dc
// ================================================

void UNK_0xe4dc() // UNK_0xe4dc
{
  Push(0xfffb);
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe4e4: WORD 'UNK_0xe4e6' codep=0x224c parp=0xe4e6
// ================================================

void UNK_0xe4e6() // UNK_0xe4e6
{
  Push(0x000a);
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe4ee: WORD 'UNK_0xe4f0' codep=0x224c parp=0xe4f0
// ================================================

void UNK_0xe4f0() // UNK_0xe4f0
{
  Push(0xfff6);
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe4f8: WORD 'UNK_0xe4fa' codep=0x224c parp=0xe4fa
// ================================================

void UNK_0xe4fa() // UNK_0xe4fa
{
  Push(pp_UNK_0xda43); // UNK_0xda43
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(2); // 2
  Push(cc__4); // 4
  WITHIN(); // WITHIN
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(Pop() * Pop()); // *
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe512: WORD 'UNK_0xe514' codep=0x224c parp=0xe514
// ================================================

void UNK_0xe514() // UNK_0xe514
{
  Push(0x0064);
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe51c: WORD 'UNK_0xe51e' codep=0x224c parp=0xe51e
// ================================================

void UNK_0xe51e() // UNK_0xe51e
{
  UNK_0xdb9a(); // UNK_0xdb9a
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe524: WORD 'UNK_0xe526' codep=0x224c parp=0xe526
// ================================================

void UNK_0xe526() // UNK_0xe526
{
  UNK_0xdb8c(); // UNK_0xdb8c
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe52c: WORD 'UNK_0xe52e' codep=0x224c parp=0xe52e
// ================================================

void UNK_0xe52e() // UNK_0xe52e
{
  UNK_0xdbc9(); // UNK_0xdbc9
  _plus__ex_EDL(); // +!EDL
  Push(pp_UNK_0xda17); // UNK_0xda17
  Push(pp_UNK_0xda13); // UNK_0xda13
  Push(Read16(Pop())); // @
  OVER(); // OVER
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  SWAP(); // SWAP
  _ex__3(); // !_3
}


// ================================================
// 0xe544: WORD 'UNK_0xe546' codep=0x224c parp=0xe546
// ================================================

void UNK_0xe546() // UNK_0xe546
{
  UNK_0xdbc9(); // UNK_0xdbc9
  _plus__ex_EDL(); // +!EDL
  Push(0xda0f); // probable 'UNK_0xda0f'
  OFF(); // OFF
}


// ================================================
// 0xe552: WORD 'UNK_0xe554' codep=0x224c parp=0xe554
// ================================================

void UNK_0xe554() // UNK_0xe554
{
  UNK_0xdbc9(); // UNK_0xdbc9
  Push(pp_UNK_0xda23); // UNK_0xda23
  Push(Read8(Pop())&0xFF); // C@
  _slash_(); // /
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe560: WORD 'UNK_0xe562' codep=0x224c parp=0xe562
// ================================================

void UNK_0xe562() // UNK_0xe562
{
  Push(cc_UNK_0xdad3); // UNK_0xdad3
  if (Pop() == 0) return;
  UNK_0xdbc9(); // UNK_0xdbc9
  Push(pp_UNK_0xda23); // UNK_0xda23
  Push(Read8(Pop())&0xFF); // C@
  _slash_(); // /
  Push(Pop()>>1); // 2/
  _plus__ex_EDL(); // +!EDL
  Push(0xdad3); // probable 'UNK_0xdad3'
  OFF(); // OFF
}


// ================================================
// 0xe57c: WORD 'UNK_0xe57e' codep=0x224c parp=0xe57e
// ================================================

void UNK_0xe57e() // UNK_0xe57e
{
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(0x63fb); // IFIELD(UNK_0xd970)
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe58a: WORD 'UNK_0xe58c' codep=0x224c parp=0xe58c
// ================================================

void UNK_0xe58c() // UNK_0xe58c
{
  UNK_0xe57e(); // UNK_0xe57e
  SWAP(); // SWAP
  _star__slash_(); // */
  Push(0x0064);
  MIN(); // MIN
  Push(pp_UNK_0xda69); // UNK_0xda69
  _ex__3(); // !_3
}


// ================================================
// 0xe59e: WORD 'UNK_0xe5a0' codep=0x224c parp=0xe5a0
// ================================================

void UNK_0xe5a0() // UNK_0xe5a0
{
  Push(pp_UNK_0xda69); // UNK_0xda69
  _ex__3(); // !_3
}


// ================================================
// 0xe5a6: WORD 'UNK_0xe5a8' codep=0x224c parp=0xe5a8
// ================================================

void UNK_0xe5a8() // UNK_0xe5a8
{
  Push(cc__3); // 3
  Push(2); // 2
  UNK_0xe58c(); // UNK_0xe58c
}


// ================================================
// 0xe5b0: WORD 'UNK_0xe5b2' codep=0x224c parp=0xe5b2
// ================================================

void UNK_0xe5b2() // UNK_0xe5b2
{
  Push(2); // 2
  Push(1); // 1
  UNK_0xe58c(); // UNK_0xe58c
}


// ================================================
// 0xe5ba: WORD 'UNK_0xe5bc' codep=0x224c parp=0xe5bc
// ================================================

void UNK_0xe5bc() // UNK_0xe5bc
{
  Push(cc__5); // 5
  Push(2); // 2
  UNK_0xe58c(); // UNK_0xe58c
}


// ================================================
// 0xe5c4: WORD 'UNK_0xe5c6' codep=0x224c parp=0xe5c6
// ================================================

void UNK_0xe5c6() // UNK_0xe5c6
{
  Push(1); // 1
  Push(1); // 1
  UNK_0xe58c(); // UNK_0xe58c
}


// ================================================
// 0xe5ce: WORD 'UNK_0xe5d0' codep=0x224c parp=0xe5d0
// ================================================

void UNK_0xe5d0() // UNK_0xe5d0
{
  Push(1); // 1
  Push(2); // 2
  UNK_0xe58c(); // UNK_0xe58c
}


// ================================================
// 0xe5d8: WORD 'UNK_0xe5da' codep=0x224c parp=0xe5da
// ================================================

void UNK_0xe5da() // UNK_0xe5da
{
  Push(0x0046);
  UNK_0xe5a0(); // UNK_0xe5a0
}


// ================================================
// 0xe5e2: WORD 'UNK_0xe5e4' codep=0x224c parp=0xe5e4
// ================================================

void UNK_0xe5e4() // UNK_0xe5e4
{
  Push(0x0064);
  UNK_0xe5a0(); // UNK_0xe5a0
}


// ================================================
// 0xe5ec: WORD 'UNK_0xe5ee' codep=0x224c parp=0xe5ee
// ================================================

void UNK_0xe5ee() // UNK_0xe5ee
{
  Push(pp_UNK_0xda69); // UNK_0xda69
  OFF(); // OFF
}


// ================================================
// 0xe5f4: WORD 'UNK_0xe5f6' codep=0x224c parp=0xe5f6
// ================================================

void UNK_0xe5f6() // UNK_0xe5f6
{
  CTINIT(); // CTINIT

  UNK_0x3f3b("CAPTAIN,");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xe607: WORD 'UNK_0xe609' codep=0x224c parp=0xe609
// ================================================

void UNK_0xe609() // UNK_0xe609
{

  UNK_0x3f3b("THEY'VE ");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xe618: WORD 'UNK_0xe61a' codep=0x224c parp=0xe61a
// ================================================

void UNK_0xe61a() // UNK_0xe61a
{
  Push(0x50a6); // probable '?A-SHIE'
  ON_3(); // ON_3
  UNK_0xe5f6(); // UNK_0xe5f6
  UNK_0xe609(); // UNK_0xe609
  Push(0x0ee1); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe630: WORD 'UNK_0xe632' codep=0x224c parp=0xe632
// ================================================

void UNK_0xe632() // UNK_0xe632
{
  Push(0x50a6); // probable '?A-SHIE'
  OFF(); // OFF
  UNK_0xe5f6(); // UNK_0xe5f6
  UNK_0xe609(); // UNK_0xe609
  Push(0x0f03); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe648: WORD 'UNK_0xe64a' codep=0x224c parp=0xe64a
// ================================================

void UNK_0xe64a() // UNK_0xe64a
{
  Push(0x50b4); // probable '?A-WEAP'
  ON_3(); // ON_3
  UNK_0xe5f6(); // UNK_0xe5f6
  UNK_0xe609(); // UNK_0xe609
  Push(0x0f26); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe660: WORD 'UNK_0xe662' codep=0x224c parp=0xe662
// ================================================

void UNK_0xe662() // UNK_0xe662
{
  Push(0x50b4); // probable '?A-WEAP'
  OFF(); // OFF
  UNK_0xe5f6(); // UNK_0xe5f6
  UNK_0xe609(); // UNK_0xe609
  Push(0x0f47); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe678: WORD 'UNK_0xe67a' codep=0x224c parp=0xe67a
// ================================================

void UNK_0xe67a() // UNK_0xe67a
{
  Push(0xda75); // probable 'UNK_0xda75'
  ON_3(); // ON_3
  UNK_0xe5f6(); // UNK_0xe5f6
  Push(0x0f6c); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  _dot_TTY(); // .TTY
}


// ================================================
// 0xe68e: WORD 'UNK_0xe690' codep=0x224c parp=0xe690
// ================================================

void UNK_0xe690() // UNK_0xe690
{
  Push(pp__i__plus_VESS); // '+VESS
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  Push(0xda75); // probable 'UNK_0xda75'
  OFF(); // OFF
  UNK_0xe5f6(); // UNK_0xe5f6
  Push(0x0f9f); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  _dot_TTY(); // .TTY
}


// ================================================
// 0xe6aa: WORD 'UNK_0xe6ac' codep=0x224c parp=0xe6ac
// ================================================

void UNK_0xe6ac() // UNK_0xe6ac
{
  Push(0xda79); // probable 'UNK_0xda79'
  ON_3(); // ON_3
  UNK_0xe5f6(); // UNK_0xe5f6
  Push(0x0fcc); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  _dot_TTY(); // .TTY
}


// ================================================
// 0xe6c0: WORD 'UNK_0xe6c2' codep=0x224c parp=0xe6c2
// ================================================

void UNK_0xe6c2() // UNK_0xe6c2
{
  Push(pp_TERMINA); // TERMINA
  OFF(); // OFF
  CTERASE(); // CTERASE
  Push(1); // 1
  UNK_0xe4b6(); // UNK_0xe4b6
  Push(1); // 1
  Push(pp_UNK_0xda43); // UNK_0xda43
  _plus__ex_(); // +!
  UNK_0xdd69(); // UNK_0xdd69
  UNK_0xdd47(); // UNK_0xdd47
  Push(2); // 2
  Push(pp_UNK_0xda0b); // UNK_0xda0b
  _ex__3(); // !_3
  UNK_0xdec7(); // UNK_0xdec7
  Push(pp_UNK_0xe4b2); // UNK_0xe4b2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(cc__5); // 5
  Push(0); // 0
  _dot_ABTN(); // .ABTN

  label1:
  UNK_0xe4fa(); // UNK_0xe4fa
}


// ================================================
// 0xe6f0: WORD 'UNK_0xe6f2' codep=0x224c parp=0xe6f2
// ================================================

void UNK_0xe6f2() // UNK_0xe6f2
{
  Push(pp_TERMINA); // TERMINA
  OFF(); // OFF
  Push(2); // 2
  UNK_0xe4b6(); // UNK_0xe4b6
  Push(1); // 1
  Push(pp_UNK_0xda2b); // UNK_0xda2b
  _plus__ex_(); // +!
  UNK_0xdd47(); // UNK_0xdd47
}


// ================================================
// 0xe704: WORD 'UNK_0xe706' codep=0x224c parp=0xe706
// ================================================

void UNK_0xe706() // UNK_0xe706
{
  Push(pp_UNK_0xda1f); // UNK_0xda1f
  Push(Read16(Pop())); // @
  UNK_0xe4b6(); // UNK_0xe4b6
  Push(1); // 1
  Push(pp_UNK_0xda2b); // UNK_0xda2b
  _plus__ex_(); // +!
  UNK_0xdd47(); // UNK_0xdd47
  Push(pp_UNK_0xda1f); // UNK_0xda1f
  OFF(); // OFF
}


// ================================================
// 0xe71a: WORD 'UNK_0xe71c' codep=0x224c parp=0xe71c
// ================================================

void UNK_0xe71c() // UNK_0xe71c
{
  Push(0x000d);
  UNK_0xe4b6(); // UNK_0xe4b6
  Push(1); // 1
  Push(pp_UNK_0xda2b); // UNK_0xda2b
  _plus__ex_(); // +!
  UNK_0xdd47(); // UNK_0xdd47
}


// ================================================
// 0xe72c: WORD 'UNK_0xe72e' codep=0x224c parp=0xe72e
// ================================================

void UNK_0xe72e() // UNK_0xe72e
{
  Push(0x000e);
  UNK_0xe4b6(); // UNK_0xe4b6
  Push(pp_UNK_0xda05); // UNK_0xda05
  _1_dot_5_at_(); // 1.5@
  Push(pp_UNK_0xdac5); // UNK_0xdac5
  _1_dot_5_ex_(); // 1.5!
  Push(1); // 1
  Push(pp_UNK_0xda2b); // UNK_0xda2b
  _plus__ex_(); // +!
  UNK_0xdd69(); // UNK_0xdd69
  UNK_0xdd47(); // UNK_0xdd47
  Push(0xda55); // probable 'UNK_0xda55'
  ON_3(); // ON_3
  Push(0x000a);
  _dot_BTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  Push(1); // 1
  Push(pp_UNK_0xda43); // UNK_0xda43
  _ex__3(); // !_3
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xe760: WORD 'UNK_0xe762' codep=0x224c parp=0xe762
// ================================================

void UNK_0xe762() // UNK_0xe762
{
  Push(cc__6); // 6
  UNK_0xe4b6(); // UNK_0xe4b6
  UNK_0xdd69(); // UNK_0xdd69
  UNK_0xdd47(); // UNK_0xdd47
  Push(1); // 1
  Push(pp_UNK_0xda43); // UNK_0xda43
  _plus__ex_(); // +!
}


// ================================================
// 0xe772: WORD 'UNK_0xe774' codep=0x224c parp=0xe774
// ================================================

void UNK_0xe774() // UNK_0xe774
{
  Push(0x000f);
  UNK_0xe4b6(); // UNK_0xe4b6
  UNK_0xe0f8(); // UNK_0xe0f8
}


// ================================================
// 0xe77e: WORD 'UNK_0xe780' codep=0x224c parp=0xe780
// ================================================

void UNK_0xe780() // UNK_0xe780
{
  Push(0xda6d); // probable 'UNK_0xda6d'
  ON_3(); // ON_3
  Push(pp_TERMINA); // TERMINA
  OFF(); // OFF
}


// ================================================
// 0xe78c: WORD '(?RACE)' codep=0x4a4f parp=0xe798
// ================================================

void _ro__ask_RACE_rc_() // (?RACE)
{
  switch(Pop()) // (?RACE)
  {
  case 1:
    Push(1); // 1
    break;
  case 2:
    Push(1); // 1
    break;
  case 3:
    Push(1); // 1
    break;
  case 6:
    Push(1); // 1
    break;
  case 7:
    Push(1); // 1
    break;
  case 8:
    Push(1); // 1
    break;
  case 9:
    Push(1); // 1
    break;
  case 21:
    Push(1); // 1
    break;
  default:
    Push(0); // 0
    break;

  }
}

// ================================================
// 0xe7bc: WORD 'UNK_0xe7be' codep=0x224c parp=0xe7be
// ================================================

void UNK_0xe7be() // UNK_0xe7be
{
  Push(pp_UNK_0xda71); // UNK_0xda71
  Push(Read16(Pop())); // @
  _ro__ask_RACE_rc_(); // (?RACE) case
}


// ================================================
// 0xe7c6: WORD 'UNK_0xe7c8' codep=0x224c parp=0xe7c8
// ================================================

void UNK_0xe7c8() // UNK_0xe7c8
{
  Push(1); // 1
  UNK_0xdcd7(); // UNK_0xdcd7
}


// ================================================
// 0xe7ce: WORD 'UNK_0xe7d0' codep=0x224c parp=0xe7d0
// ================================================

void UNK_0xe7d0() // UNK_0xe7d0
{
  Push(2); // 2
  UNK_0xdcd7(); // UNK_0xdcd7
}


// ================================================
// 0xe7d6: WORD 'UNK_0xe7d8' codep=0x224c parp=0xe7d8
// ================================================

void UNK_0xe7d8() // UNK_0xe7d8
{
  Push(cc__4); // 4
  UNK_0xdcd7(); // UNK_0xdcd7
}


// ================================================
// 0xe7de: WORD 'UNK_0xe7e0' codep=0x224c parp=0xe7e0
// ================================================

void UNK_0xe7e0() // UNK_0xe7e0
{
  Push(cc__8); // 8
  UNK_0xdcd7(); // UNK_0xdcd7
}


// ================================================
// 0xe7e6: WORD 'UNK_0xe7e8' codep=0x224c parp=0xe7e8
// ================================================

void UNK_0xe7e8() // UNK_0xe7e8
{
  Push(0x0010);
  UNK_0xdcd7(); // UNK_0xdcd7
}


// ================================================
// 0xe7f0: WORD 'UNK_0xe7f2' codep=0x224c parp=0xe7f2
// ================================================

void UNK_0xe7f2() // UNK_0xe7f2
{
  Push(pp_UNK_0xda69); // UNK_0xda69
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xe7fc: WORD 'UNK_0xe7fe' codep=0x224c parp=0xe7fe
// ================================================

void UNK_0xe7fe() // UNK_0xe7fe
{
  Push(pp_UNK_0xda2b); // UNK_0xda2b
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda47); // UNK_0xda47
  Push(Read16(Pop())); // @
  _st_(); // <
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xe80c: WORD 'UNK_0xe80e' codep=0x224c parp=0xe80e
// ================================================

void UNK_0xe80e() // UNK_0xe80e
{
  Push(0); // 0
  Push(0x05dc);
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(pp_UNK_0xda59); // UNK_0xda59
  Push(Read16(Pop())); // @
  Push(2); // 2
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(pp_AVCNT); // AVCNT
  Push(Read16(Pop())); // @
  Push(0x0014);
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe838: WORD 'UNK_0xe83a' codep=0x224c parp=0xe83a
// ================================================

void UNK_0xe83a() // UNK_0xe83a
{
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe84e: WORD 'UNK_0xe850' codep=0x224c parp=0xe850
// ================================================

void UNK_0xe850() // UNK_0xe850
{
  Push(0); // 0
  Push(0x0032);
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  Push(Pop()*2); // 2*
  Push(Pop()+1); // 1+
  _slash_(); // /
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xe866: WORD 'UNK_0xe868' codep=0x224c parp=0xe868
// ================================================

void UNK_0xe868() // UNK_0xe868
{
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
  Push(pp_UNK_0xda69); // UNK_0xda69
  Push(Read16(Pop())); // @
  _st_(); // <
  Push(0); // 0
  Push(cc__4); // 4
  RRND(); // RRND
  UNK_0xdb0c(); // UNK_0xdb0c
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  _at__gt_C_plus_S(); // @>C+S
  _ask_CHILD(); // ?CHILD
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
  UNK_0xe7c8(); // UNK_0xe7c8
  Push(Pop() | Pop()); // OR
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(0x0032); Push(0x0000);
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_OK_dash_TALK); // OK-TALK
  _2_at_(); // 2@
  DMAX(); // DMAX
  Push(pp_OK_dash_TALK); // OK-TALK
  D_ex_(); // D!
}


// ================================================
// 0xe8b4: WORD 'UNK_0xe8b6' codep=0x224c parp=0xe8b6
// ================================================

void UNK_0xe8b6() // UNK_0xe8b6
{
  Push(pp_UNK_0xda43); // UNK_0xda43
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _st_(); // <
}


// ================================================
// 0xe8c0: WORD 'UNK_0xe8c2' codep=0x224c parp=0xe8c2
// ================================================

void UNK_0xe8c2() // UNK_0xe8c2
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6434); // IFIELD(UNK_0xd9ca)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8ce: WORD 'UNK_0xe8d0' codep=0x224c parp=0xe8d0
// ================================================

void UNK_0xe8d0() // UNK_0xe8d0
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6434); // IFIELD(UNK_0xd9ca)
  _ex__3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8dc: WORD 'UNK_0xe8de' codep=0x224c parp=0xe8de
// ================================================

void UNK_0xe8de() // UNK_0xe8de
{
  UNK_0xe8c2(); // UNK_0xe8c2
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  _0_gt_(); // 0>
}


// ================================================
// 0xe8e8: WORD 'UNK_0xe8ea' codep=0x224c parp=0xe8ea
// ================================================

void UNK_0xe8ea() // UNK_0xe8ea
{
  UNK_0xe8c2(); // UNK_0xe8c2
  Push(Read16(regsp)); // DUP
  Push(0x0010);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  SWAP(); // SWAP
  Push(0xffef);
  Push(Pop() & Pop()); // AND
  UNK_0xe8d0(); // UNK_0xe8d0
}


// ================================================
// 0xe904: WORD 'UNK_0xe906' codep=0x224c parp=0xe906
// ================================================

void UNK_0xe906() // UNK_0xe906
{
  UNK_0xe8c2(); // UNK_0xe8c2
  Push(cc__3); // 3
  Push(Pop() & Pop()); // AND
  _0_gt_(); // 0>
}


// ================================================
// 0xe910: WORD 'UNK_0xe912' codep=0x224c parp=0xe912
// ================================================

void UNK_0xe912() // UNK_0xe912
{
  UNK_0xe8c2(); // UNK_0xe8c2
  Push(Read16(regsp)); // DUP
  Push(0x0020);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  SWAP(); // SWAP
  Push(0xffdf);
  Push(Pop() & Pop()); // AND
  UNK_0xe8d0(); // UNK_0xe8d0
}


// ================================================
// 0xe92c: WORD 'UNK_0xe92e' codep=0x224c parp=0xe92e
// ================================================

void UNK_0xe92e() // UNK_0xe92e
{
  Push(pp_UNK_0xda0b); // UNK_0xda0b
  Push(Read16(Pop())); // @
  Push(1); // 1
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xe938: WORD 'UNK_0xe93a' codep=0x224c parp=0xe93a
// ================================================

void UNK_0xe93a() // UNK_0xe93a
{
  Push(pp_UNK_0xda0b); // UNK_0xda0b
  Push(Read16(Pop())); // @
  Push(2); // 2
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xe944: WORD 'UNK_0xe946' codep=0x224c parp=0xe946
// ================================================

void UNK_0xe946() // UNK_0xe946
{
  Push(pp_UNK_0xda4f); // UNK_0xda4f
  _2_at_(); // 2@
  TIME(); // TIME
  _2_at_(); // 2@
  D_st_(); // D<
}


// ================================================
// 0xe952: WORD 'UNK_0xe954' codep=0x224c parp=0xe954
// ================================================

void UNK_0xe954() // UNK_0xe954
{
  Push(pp_OK_dash_TALK); // OK-TALK
  _2_at_(); // 2@
  TIME(); // TIME
  _2_at_(); // 2@
  D_st_(); // D<
}


// ================================================
// 0xe960: WORD 'UNK_0xe962' codep=0x224c parp=0xe962
// ================================================

void UNK_0xe962() // UNK_0xe962
{
  Push(pp_UNK_0xda1b); // UNK_0xda1b
  Push(Read8(Pop())&0xFF); // C@
  Push(0x000d);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xe96e: WORD 'UNK_0xe970' codep=0x224c parp=0xe970
// ================================================

void UNK_0xe970() // UNK_0xe970
{
  Push(pp_UNK_0xda1f); // UNK_0xda1f
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xe97a: WORD 'UNK_0xe97c' codep=0x224c parp=0xe97c
// ================================================

void UNK_0xe97c() // UNK_0xe97c
{
  Push(pp_UNK_0xda13); // UNK_0xda13
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda17); // UNK_0xda17
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xe98a: WORD 'UNK_0xe98c' codep=0x224c parp=0xe98c
// ================================================

void UNK_0xe98c() // UNK_0xe98c
{
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _st_(); // <
}


// ================================================
// 0xe996: WORD 'UNK_0xe998' codep=0x224c parp=0xe998
// ================================================

void UNK_0xe998() // UNK_0xe998
{
  Push(pp_UNK_0xda23); // UNK_0xda23
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(pp_UNK_0xda2b); // UNK_0xda2b
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(Pop() | Pop()); // OR
  Push(pp_TERMINA); // TERMINA
  Push(Read16(Pop())); // @
  UNK_0xdb0c(); // UNK_0xdb0c
  Push(pp_UNK_0xe4b2); // UNK_0xe4b2
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe9b4: WORD 'UNK_0xe9b6' codep=0x224c parp=0xe9b6
// ================================================

void UNK_0xe9b6() // UNK_0xe9b6
{
  Push(pp_TERMINA); // TERMINA
  Push(Read16(Pop())); // @
  UNK_0xe7e8(); // UNK_0xe7e8
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe9c0: WORD 'UNK_0xe9c2' codep=0x224c parp=0xe9c2
// ================================================

void UNK_0xe9c2() // UNK_0xe9c2
{
  Push(pp_UNK_0xda71); // UNK_0xda71
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xe9cc: WORD 'UNK_0xe9ce' codep=0x224c parp=0xe9ce
// ================================================

void UNK_0xe9ce() // UNK_0xe9ce
{
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
  Push(pp_UNK_0xda71); // UNK_0xda71
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  Push(0x0046);
  goto label2;

  label1:
  Push(0x001e);

  label2:
  _st_(); // <
  Push(0x000d);
  Push(Pop() + Pop()); // +
  UNK_0xdba8(); // UNK_0xdba8
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  UNK_0xde6d(); // UNK_0xde6d
  Push(pp_UNK_0xda3f); // UNK_0xda3f
  Push(Read16(Pop())); // @
  Push(0x000e);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xea0a: WORD 'UNK_0xea0c' codep=0x224c parp=0xea0c
// ================================================

void UNK_0xea0c() // UNK_0xea0c
{
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63fc); // IFIELD(UNK_0xd975)
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xda59); // UNK_0xda59
  Push(Read16(Pop())); // @
  Push(1); // 1
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xea22: WORD 'UNK_0xea24' codep=0x224c parp=0xea24
// ================================================

void UNK_0xea24() // UNK_0xea24
{
  UNK_0xe998(); // UNK_0xe998
  UNK_0xea0c(); // UNK_0xea0c
  Push(Pop() & Pop()); // AND
  UNK_0xe7c8(); // UNK_0xe7c8
  Push(Pop() & Pop()); // AND
  Push(cc_UNK_0xda6d); // UNK_0xda6d
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xea34: WORD 'UNK_0xea36' codep=0x224c parp=0xea36
// ================================================

void UNK_0xea36() // UNK_0xea36
{
  UNK_0xe7c8(); // UNK_0xe7c8
  UNK_0xea0c(); // UNK_0xea0c
  UNK_0xdb0c(); // UNK_0xdb0c
}


// ================================================
// 0xea3e: WORD '<EDL>' codep=0xb869 parp=0xea48
// ================================================
// 0xea48: db 0x0a 0x0d 0x09 0x86 0xea 0x8b 0xea 0x90 0xea 0x95 0xea 0x9a 0xea 0x9f 0xea 0xa3 0xea 0xa8 0xea 0xac 0xea 0x45 0x44 0xea 0xe8 0xde 0xe8 0x12 0xe9 0x06 0xe9 0x2e 0xe9 0x7c 0xe9 0x62 0xe9 0x70 0xe9 0xd3 0xda 0x0f 0xda 0x98 0x50 0x98 0xe9 0x38 0x2f 0x38 0x35 0x20 0x29 0xa0 0x3c 0x35 0x39 0x39 0xea 0xce 0x47 0x52 0x02 0xd4 0xe4 0x80 0x81 0x02 0xdc 0xe4 0x80 0x01 0x02 0xe6 0xe4 0x82 0x83 0x02 0xf0 0xe4 0x82 0x03 0x02 0x2e 0xe5 0x84 0x85 0x01 0x54 0xe5 0x86 0x02 0x62 0xe5 0x87 0x88 0x01 0x46 0xe5 0x89 0x02 0x14 0xe5 0x8a 0x0b '                     ED        . | b p      P  8/85 ) <599  GR                     .    T   b    F       '

// ================================================
// 0xeab1: WORD '<TALK>' codep=0xb869 parp=0xeabc
// ================================================
// 0xeabc: db 0x10 0x0c 0x0f 0x03 0xeb 0x0a 0xeb 0x11 0xeb 0x18 0xeb 0x1f 0xeb 0x26 0xeb 0x2d 0xeb 0x33 0xeb 0x3a 0xeb 0x41 0xeb 0x47 0xeb 0x4d 0xeb 0x52 0xeb 0x58 0xeb 0x5e 0xeb 0x20 0x20 0x98 0xe9 0xb6 0xe9 0xd0 0xe7 0x2e 0xe9 0xd8 0xe7 0xe0 0xe7 0xe8 0xe7 0xc8 0xe7 0x0c 0xea 0xfe 0xe7 0x6d 0xda 0x49 0x4e 0x45 0x52 0xc1 0xa0 0x3c 0x80 0xf1 0xf2 0xea 0xc5 0x21 0x4e 0x04 0xa8 0xe5 0x00 0x01 0x82 0x03 0x04 0xb2 0xe5 0x00 0x01 0x82 0x83 0x04 0xc6 0xe5 0x00 0x01 0x84 0x03 0x04 0xa8 0xe5 0x00 0x01 0x84 0x83 0x04 0xd0 0xe5 0x00 0x01 0x85 0x03 0x04 0xc6 0xe5 0x00 0x01 0x85 0x83 0x03 0xee 0xe5 0x00 0x01 0x86 0x04 0xb2 0xe5 0x00 0x01 0x87 0x03 0x04 0xbc 0xe5 0x00 0x01 0x87 0x83 0x03 0xda 0xe5 0x80 0x88 0x09 0x03 0xda 0xe5 0x80 0x07 0x09 0x02 0xee 0xe5 0x80 0x89 0x03 0xee 0xe5 0x00 0x81 0x07 0x03 0xee 0xe5 0x00 0x81 0x08 0x05 0xe4 0xe5 0x00 0x81 0x87 0x88 0x0a '             & - 3 : A G M R X ^         .             m INER  <     !N                                                                                                   '

// ================================================
// 0xeb66: WORD '<AUX>' codep=0xb869 parp=0xeb70
// ================================================
// 0xeb70: db 0x0b 0x15 0x0a 0xc8 0xeb 0xd0 0xeb 0xd5 0xeb 0xda 0xeb 0xe3 0xeb 0xea 0xeb 0xef 0xeb 0xf9 0xeb 0xfe 0xeb 0x05 0xec 0x58 0x49 0x37 0xda 0xa6 0x50 0xd0 0xe7 0x24 0xea 0xc2 0xe9 0x3b 0xda 0xb4 0x50 0xd8 0xe7 0xc8 0xe7 0xe0 0xe7 0xe8 0xe7 0x0e 0xe8 0x75 0xda 0xbe 0xe7 0x8c 0xe9 0x50 0xe8 0x54 0xe9 0x3a 0xe8 0x79 0xda 0x6d 0xda 0x45 0x54 0x2d 0x4e 0x45 0xc5 0xa0 0x3c 0x59 0xf3 0x72 0xeb 0xc6 0x52 0x45 0x4d 0x4f 0x56 0xc5 0xa0 0x3c 0x8d 0xf3 0x05 0x1a 0xe6 0x80 0x01 0x02 0x03 0x04 0x02 0x32 0xe6 0x81 0x82 0x02 0x32 0xe6 0x81 0x83 0x06 0x4a 0xe6 0x85 0x06 0x02 0x07 0x08 0x03 0x04 0x62 0xe6 0x86 0x09 0x0a 0x08 0x02 0x62 0xe6 0x86 0x83 0x07 0x7a 0xe6 0x8b 0x0c 0x8d 0x8e 0x02 0x07 0x03 0x02 0x90 0xe6 0x8c 0x8f 0x04 0xac 0xe6 0x90 0x8d 0x91 0x12 0x02 0x80 0xe7 0x13 0x83 '                       XI7  P  $   ;  P          u     P T : y m ET-NE  <Y r  REMOV  <           2    2    J        b      b    z                         '

// ================================================
// 0xec0a: WORD '<COMM>' codep=0xb869 parp=0xec15
// ================================================
// 0xec15: db 0x0a 0x0f 0x09 0x59 0xec 0x63 0xec 0x6e 0xec 0x77 0xec 0x81 0xec 0x8b 0xec 0x93 0xec 0x9a 0xec 0xa1 0xec 0x4f 0x4d 0x98 0xe9 0x2e 0xe9 0x54 0xe9 0x68 0xe8 0x3a 0xe9 0x6d 0xda 0x36 0xea 0x46 0xe9 0xb6 0xe8 0x70 0xe9 0xce 0xe9 0x55 0xda 0xfe 0xe7 0xf2 0xe7 0x29 0x0e 0x26 0x36 0x30 0x35 0xe7 0x0f 0x6c 0x58 0x76 0x6d 0x7a 0x58 0xb7 0x6d 0x9b 0x07 0xc2 0xe6 0x00 0x01 0x82 0x83 0x04 0x05 0x06 0x08 0xc2 0xe6 0x00 0x84 0x82 0x83 0x87 0x88 0x05 0x06 0x06 0xf2 0xe6 0x00 0x81 0x82 0x83 0x05 0x06 0x07 0x1c 0xe7 0x80 0x82 0x09 0x83 0x8a 0x0b 0x0c 0x07 0x2e 0xe7 0x80 0x82 0x09 0x83 0x0a 0x0b 0x0c 0x05 0x62 0xe7 0x80 0x8b 0x82 0x87 0x88 0x04 0x06 0xe7 0x80 0x89 0x82 0x0c 0x04 0x74 0xe7 0x80 0x8c 0x82 0x0b 0x03 0xf8 0xe0 0x80 0x0d 0x0c '   Y c n w           OM  . T h : m 6 F   p   U     ) &605  lXvmzX m                                          .         b              t           '

// ================================================
// 0xeca7: WORD 'UNK_0xeca9' codep=0x224c parp=0xeca9
// ================================================

void UNK_0xeca9() // UNK_0xeca9
{
  CTINIT(); // CTINIT
  Push(0x1000); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  _dot_TTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
}


// ================================================
// 0xecbd: WORD 'UNK_0xecbf' codep=0x224c parp=0xecbf
// ================================================

void UNK_0xecbf() // UNK_0xecbf
{
  SetColor("BLUE");
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  _dot_ON(); // .ON
  UNK_0xeca9(); // UNK_0xeca9
  UNK_0xdb6a(); // UNK_0xdb6a
  UNK_0xde6d(); // UNK_0xde6d
  UNK_0xe482(); // UNK_0xe482
  Push(pp_UNK_0xda1b); // UNK_0xda1b
  Push(Read16(Pop())); // @
  Push(1); // 1
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_UNK_0xda23); // UNK_0xda23
  _plus__ex_(); // +!
  UNK_0xdd47(); // UNK_0xdd47
  SetColor("BLACK");
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  _dot_ON(); // .ON
}


// ================================================
// 0xece9: WORD 'UNK_0xeceb' codep=0x224c parp=0xeceb
// ================================================

void UNK_0xeceb() // UNK_0xeceb
{
  Push(pp__ro_STOP_dash_C); // (STOP-C
  ON_3(); // ON_3
}


// ================================================
// 0xecf1: WORD 'UNK_0xecf3' codep=0x224c parp=0xecf3
// ================================================

void UNK_0xecf3() // UNK_0xecf3
{
  _ask_TRIG(); // ?TRIG
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(pp_LKEY); // LKEY
  Push(Read16(Pop())); // @
  Push(0x002b);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(0xd4c0); Push(0x0001);
  UNK_0xe1f0(); // UNK_0xe1f0
  return;

  label1:
  SetColor("BLUE");
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  _dot_ON(); // .ON
}


// ================================================
// 0xed21: WORD 'UNK_0xed23' codep=0x744d parp=0xed23
// ================================================
// 0xed23: db 0x17 0x0b 0x09 '   '

// ================================================
// 0xed26: WORD 'UNK_0xed28' codep=0x224c parp=0xed28
// ================================================

void UNK_0xed28() // UNK_0xed28
{
  if (Pop() == 0) goto label1;
  Push2Words("*ASYS");
  _gt_C_plus_S(); // >C+S
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(0x63fa); // IFIELD(UNK_0xed23)
  Push(Read16(Pop())); // @
  _st_(); // <
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp__ask_WIN); // ?WIN
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label2;
  Push(0x63fa); // IFIELD(UNK_0xed23)
  Push(Read16(Pop())); // @
  _gt_(); // >
  Push(Pop() & Pop()); // AND

  label2:
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label3;
  Push(0x101a); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  _dot_TTY(); // .TTY
  Push(0x07d0);
  MS(); // MS

  label3:
  if (Pop() == 0) Push(1); else Push(0); // NOT
  return;

  label1:
  Push(0); // 0
}


// ================================================
// 0xed70: WORD 'UNK_0xed72' codep=0x1d29 parp=0xed72
// ================================================
// 0xed72: db 0x02 0x08 0x01 '   '

// ================================================
// 0xed75: WORD 'UNK_0xed77' codep=0x224c parp=0xed77
// ================================================

void UNK_0xed77() // UNK_0xed77
{
  Push(cc__8); // 8
  _dot_BTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  UNK_0xdbeb(); // UNK_0xdbeb
  Push(pp_UNK_0xed72); // UNK_0xed72
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xda13); // UNK_0xda13
  _ex__3(); // !_3
  Push(cc__5); // 5
  UNK_0xe998(); // UNK_0xe998
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _dot_BTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
}


// ================================================
// 0xed9d: WORD '(>?)' codep=0x4a4f parp=0xeda6
// ================================================

void _ro__gt__ask__rc_() // (>?)
{
  switch(Pop()) // (>?)
  {
  case 0:
    Push(cc_UNK_0xdaf3); // UNK_0xdaf3
    break;
  case 1:
    Push(cc_UNK_0xdaf7); // UNK_0xdaf7
    break;
  case 2:
    Push(cc_UNK_0xdb03); // UNK_0xdb03
    break;
  case 3:
    Push(cc_UNK_0xdaff); // UNK_0xdaff
    break;
  default:
    Push(cc_UNK_0xdafb); // UNK_0xdafb
    break;

  }
}

// ================================================
// 0xedba: WORD 'UNK_0xedbc' codep=0x224c parp=0xedbc
// ================================================

void UNK_0xedbc() // UNK_0xedbc
{
  Push(0x000b);
  _dot_BTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  UNK_0xdbeb(); // UNK_0xdbeb
  Push(0xdad3); // probable 'UNK_0xdad3'
  ON_3(); // ON_3
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  _ro__gt__ask__rc_(); // (>?) case
  Push(pp_UNK_0xda1f); // UNK_0xda1f
  _ex__3(); // !_3
  Push(0x000e);
  Push(pp_UNK_0xda1b); // UNK_0xda1b
  _ex__3(); // !_3
  UNK_0xecbf(); // UNK_0xecbf
  Push(cc__9); // 9
  _dot_BTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
}


// ================================================
// 0xede8: WORD 'UNK_0xedea' codep=0x224c parp=0xedea
// ================================================

void UNK_0xedea() // UNK_0xedea
{
  Push(0x000d);
  Push(pp_UNK_0xda1b); // UNK_0xda1b
  _ex__3(); // !_3
  UNK_0xecbf(); // UNK_0xecbf
}


// ================================================
// 0xedf6: WORD '>CM' codep=0x4a4f parp=0xedfe
// ================================================

void _gt_CM() // >CM
{
  switch(Pop()) // >CM
  {
  case 0:
    UNK_0xedea(); // UNK_0xedea
    break;
  case 1:
    UNK_0xedbc(); // UNK_0xedbc
    break;
  case 2:
    UNK_0xed77(); // UNK_0xed77
    break;
  default:
    UNK_0xe0f8(); // UNK_0xe0f8
    break;

  }
}

// ================================================
// 0xee0e: WORD 'UNK_0xee10' codep=0x224c parp=0xee10
// ================================================

void UNK_0xee10() // UNK_0xee10
{
  UNK_0xe51e(); // UNK_0xe51e
  UNK_0xeca9(); // UNK_0xeca9

  UNK_0x3f3b("YES.");
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  CLICK(); // CLICK
}


// ================================================
// 0xee21: WORD 'UNK_0xee23' codep=0x224c parp=0xee23
// ================================================

void UNK_0xee23() // UNK_0xee23
{
  UNK_0xe526(); // UNK_0xe526
  UNK_0xeca9(); // UNK_0xeca9

  UNK_0x3f3b("NO.");
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  CLICK(); // CLICK
}


// ================================================
// 0xee33: WORD 'UNK_0xee35' codep=0x224c parp=0xee35
// ================================================

void UNK_0xee35() // UNK_0xee35
{
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read16(Pop())); // @
  Push(Pop()*2); // 2*
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xee3f: WORD 'UNK_0xee41' codep=0x224c parp=0xee41
// ================================================

void UNK_0xee41() // UNK_0xee41
{
  UNK_0xee35(); // UNK_0xee35
  UNK_0xe0f8(); // UNK_0xe0f8
}


// ================================================
// 0xee47: WORD '>Y/N' codep=0x4a4f parp=0xee50
// ================================================

void _gt_Y_slash_N() // >Y/N
{
  switch(Pop()) // >Y/N
  {
  case 0:
    UNK_0xee10(); // UNK_0xee10
    break;
  case 1:
    UNK_0xee23(); // UNK_0xee23
    break;
  case 2:
    UNK_0xee41(); // UNK_0xee41
    break;
  default:
    UNK_0xee35(); // UNK_0xee35
    break;

  }
}

// ================================================
// 0xee60: WORD 'UNK_0xee62' codep=0x224c parp=0xee62
// ================================================

void UNK_0xee62() // UNK_0xee62
{
  CTERASE(); // CTERASE
  UNK_0xed77(); // UNK_0xed77
  Push(1); // 1
  Push(pp_UNK_0xda1b); // UNK_0xda1b
  _ex__3(); // !_3
  UNK_0xecbf(); // UNK_0xecbf
  Push(1); // 1
  Push(pp_UNK_0xda0b); // UNK_0xda0b
  _ex__3(); // !_3
  Push(cc__5); // 5
  _dot_BTN_dash_TE(); // .BTN-TE
}


// ================================================
// 0xee7a: WORD 'UNK_0xee7c' codep=0x224c parp=0xee7c
// ================================================

void UNK_0xee7c() // UNK_0xee7c
{
  UNK_0xed77(); // UNK_0xed77
  Push(2); // 2
  Push(pp_UNK_0xda1b); // UNK_0xda1b
  _ex__3(); // !_3
  UNK_0xecbf(); // UNK_0xecbf
  Push(0xda0f); // probable 'UNK_0xda0f'
  ON_3(); // ON_3
  Push(pp_UNK_0xda43); // UNK_0xda43
  OFF(); // OFF
}


// ================================================
// 0xee92: WORD 'EDL+AUX' codep=0x224c parp=0xee9e
// ================================================
// entry

void EDL_plus_AUX() // EDL+AUX
{
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xda75); // UNK_0xda75
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(0xeb70); // probable '<AUX>'
  DISTRACT(); // DISTRACT
  Rule(<AUX>);
  Pop(); // DROP
  Push(0xea48); // probable '<EDL>'
  DISTRACT(); // DISTRACT
  Rule(<EDL>);
  Pop(); // DROP
}


// ================================================
// 0xeec0: WORD 'COMM-EXPERTS' codep=0x224c parp=0xeed1
// ================================================
// entry

void COMM_dash_EXPERTS() // COMM-EXPERTS
{
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xda75); // UNK_0xda75
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  EDL_plus_AUX(); // EDL+AUX
  Push(0xeabc); // probable '<TALK>'
  DISTRACT(); // DISTRACT
  Rule(<TALK>);
  Pop(); // DROP
  Push(0xec15); // probable '<COMM>'
  DISTRACT(); // DISTRACT
  Rule(<COMM>);
  Pop(); // DROP

  label1:
  Push(0xda5d);
  OFF(); // OFF
}


// ================================================
// 0xeefb: WORD 'UNK_0xeefd' codep=0x224c parp=0xeefd
// ================================================

void UNK_0xeefd() // UNK_0xeefd
{
  Push(pp__i_CC); // 'CC
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  _gt_MAINVIEW(); // >MAINVIEW
  DARK(); // DARK
  _gt_DISPLAY(); // >DISPLAY
  V_gt_DISPLAY(); // V>DISPLAY
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  _at__gt_C_plus_S(); // @>C+S
  Push(0x640c); // IFIELD(UNK_0xd97f)
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(cc__4); // 4
  Push(0x00bf);
  POS_dot_(); // POS.
  Push(0xbe9d); // probable '@.HYBRID'
  MODULE(); // MODULE

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef2b: WORD 'UNK_0xef2d' codep=0x224c parp=0xef2d
// ================================================

void UNK_0xef2d() // UNK_0xef2d
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  D0_eq_(); // D0=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push(pp__ro_ENCOUNTER); // (ENCOUNTER
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  D0_eq_(); // D0=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push2Words("*SHIP");

  label1:
  _gt_C_plus_S(); // >C+S
  Push(0x63fc); // IFIELD(INST-X)
  _2_at_(); // 2@
  ICLOSE(); // ICLOSE
  Push(0x03e8);
  _dash_(); // -
  ABS(); // ABS
  unsigned short int a = Pop(); // >R
  Push(0x0320);
  _dash_(); // -
  ABS(); // ABS
  Push(a); // R>
  MAX(); // MAX
}


// ================================================
// 0xef6b: WORD 'UNK_0xef6d' codep=0x224c parp=0xef6d
// ================================================

void UNK_0xef6d() // UNK_0xef6d
{
  UNK_0xef2d(); // UNK_0xef2d
  Push(pp__dash_END); // -END
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _star__slash_(); // */
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  _ex__3(); // !_3
  Push(cc__6); // 6
  Push(pp_RECORD_n_); // RECORD#
  _ex__3(); // !_3
  LoadData("ELEM-VAL"); // from 'ELEMENT     '
  Push(Read16(Pop())); // @
  U_star_(); // U*
  SET_dash_CURRENT(); // SET-CURRENT
  Push(0x3a98); Push(0x0000);
  DMAX(); // DMAX
  Push(pp_TOWFINE); // TOWFINE
  D_ex_(); // D!
}


// ================================================
// 0xef9b: WORD 'UNK_0xef9d' codep=0x224c parp=0xef9d
// ================================================

void UNK_0xef9d() // UNK_0xef9d
{
  Push(Read16(regsp)); // DUP
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0x103b); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  _dot_TTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xefc1: WORD 'UNK_0xefc3' codep=0x224c parp=0xefc3
// ================================================

void UNK_0xefc3() // UNK_0xefc3
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(0x105b); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR
  Push(0x1088); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  Y_slash_N(); // Y/N
  UNK_0xef9d(); // UNK_0xef9d
  UNK_0xed28(); // UNK_0xed28
  if (Pop() == 0) goto label1;
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  Push((Pop()==Pop())?1:0); // =
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(cc_UNK_0xda75); // UNK_0xda75
  UNK_0xdb0c(); // UNK_0xdb0c
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  Push(Read16(Pop())); // @
  Push(pp__i_HEAT); // 'HEAT
  Push(Read16(Pop())); // @
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  Push(0x10a3); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  _dot_TTY(); // .TTY
  goto label3;

  label2:
  Push(0x10cc); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  _dot_TTY(); // .TTY
  UNK_0xef6d(); // UNK_0xef6d
  Push(0x09c4);
  MS(); // MS
  Push(pp__i_YANK); // 'YANK
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  CTINIT(); // CTINIT
  Push(0x10f4); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  _dot_TTY(); // .TTY
  UNK_0xeceb(); // UNK_0xeceb
  Push(pp__ask_RECALL); // ?RECALL
  ON_3(); // ON_3
  Push(pp__ask_NEB); // ?NEB
  OFF(); // OFF

  label3:
  goto label4;

  label1:
  CTERASE(); // CTERASE
  Push(0x1121); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  Exec(TYPE); // call of word 0x2690 '(TYPE)'

  label4:
  SetColor("BLACK");
  Push(1); // 1
  _dot_ON(); // .ON
}


// ================================================
// 0xf05f: WORD 'UNK_0xf061' codep=0x224c parp=0xf061
// ================================================

void UNK_0xf061() // UNK_0xf061
{
  UNK_0xeefd(); // UNK_0xeefd
  Push(cc__9); // 9
  _dot_BTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  Push(pp__i_XCOMM); // 'XCOMM
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  Push(pp__ro_STOP_dash_C); // (STOP-C
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;

  label4:
  COMM_dash_EXPERTS(); // COMM-EXPERTS
  UNK_0xdbdb(); // UNK_0xdbdb
  UNK_0xecf3(); // UNK_0xecf3
  Push(cc_UNK_0xda55); // UNK_0xda55
  UNK_0xe946(); // UNK_0xe946
  Push(Pop() & Pop()); // AND
  UNK_0xe8b6(); // UNK_0xe8b6
  UNK_0xdb0c(); // UNK_0xdb0c
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xda55); // UNK_0xda55
  if (Pop() == 0) goto label3;
  Push(0xda55); // probable 'UNK_0xda55'
  OFF(); // OFF
  UNK_0xe8b6(); // UNK_0xe8b6
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  UNK_0xdbff(); // UNK_0xdbff
  _gt_Y_slash_N(); // >Y/N case
  Push(pp_UNK_0xda43); // UNK_0xda43
  OFF(); // OFF
  Push(cc__9); // 9
  _dot_BTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  goto label2;

  label3:
  _gt_CM(); // >CM case

  label2:
  UNK_0xe9b6(); // UNK_0xe9b6
  if (Pop() == 0) goto label4;

  label1:
  Push(pp_UNK_0xda2b); // UNK_0xda2b
  OFF(); // OFF
  Push(pp_UNK_0xda23); // UNK_0xda23
  OFF(); // OFF
  Push(pp_UNK_0xda0b); // UNK_0xda0b
  OFF(); // OFF
  _gt_HAIL_do_(); // >HAIL$
}


// ================================================
// 0xf0d3: WORD 'UNK_0xf0d5' codep=0x224c parp=0xf0d5
// ================================================

void UNK_0xf0d5() // UNK_0xf0d5
{
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  Push(2); // 2
  Push(0xbdef); // probable 'OV?.EQUIP-OK'
  MODULE(); // MODULE
  if (Pop() == 0) goto label2;
  Push(pp_UNK_0xda0b); // UNK_0xda0b
  Push(Read16(Pop())); // @
  Push(2); // 2
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  UNK_0xee62(); // UNK_0xee62
  goto label4;

  label3:
  UNK_0xee7c(); // UNK_0xee7c

  label4:
  goto label5;

  label2:
  Push(pp__ro_STOP_dash_C); // (STOP-C
  ON_3(); // ON_3

  label5:
  return;

  label1:
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  Push(0x1137); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  SetColor("BLACK");
  Push(0); // 0
  _dot_ON(); // .ON
}


// ================================================
// 0xf125: WORD '(CBTN)' codep=0x4a4f parp=0xf130
// ================================================

void _ro_CBTN_rc_() // (CBTN)
{
  switch(Pop()) // (CBTN)
  {
  case 0:
    UNK_0xf0d5(); // UNK_0xf0d5
    break;
  case 1:
    UNK_0xefc3(); // UNK_0xefc3
    break;
  default:
    UNK_0xeceb(); // UNK_0xeceb
    break;

  }
}

// ================================================
// 0xf13c: WORD 'UNK_0xf13e' codep=0x224c parp=0xf13e
// ================================================

void UNK_0xf13e() // UNK_0xf13e
{
  Push(pp__ro_ENCOUNTER); // (ENCOUNTER
  _1_dot_5_at_(); // 1.5@
  Push2Words("*ARREST");
  D_eq_(); // D=
  Push(pp__ask_SECURE); // ?SECURE
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(pp__i_UNNEST); // 'UNNEST
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  Push2Words("*ARREST");
  _gt_C_plus_S(); // >C+S
  Push(0x00ff);
  Push(0x00ff);
  Push(0x63fc); // IFIELD(INST-X)
  D_ex_(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf16c: WORD 'CL1' codep=0x224c parp=0xf174
// ================================================
// entry

void CL1() // CL1
{
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(pp_UNK_0xda2b); // UNK_0xda2b
  OFF(); // OFF
  Push(pp_UNK_0xda0b); // UNK_0xda0b
  OFF(); // OFF
  _gt_HAIL_do_(); // >HAIL$

  label1:
  Push(cc__5); // 5
  _dot_BTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  Push(pp__ro_STOP_dash_C); // (STOP-C
  OFF(); // OFF
  Push(pp_UNK_0xe4b2); // UNK_0xe4b2
  ON_3(); // ON_3

  label6:
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  PARALLE(); // PARALLE

  label2:
  UNK_0xdbdb(); // UNK_0xdbdb
  UNK_0xecf3(); // UNK_0xecf3
  if (Pop() == 0) goto label3;
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  _ro_CBTN_rc_(); // (CBTN) case

  label3:
  Push(pp_UNK_0xda23); // UNK_0xda23
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda2b); // UNK_0xda2b
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  UNK_0xdb0c(); // UNK_0xdb0c
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label4;
  Push(2); // 2
  Push(0xbdef); // probable 'OV?.EQUIP-OK'
  MODULE(); // MODULE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp__ro_STOP_dash_C); // (STOP-C
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  Push(pp__ro_STOP_dash_C); // (STOP-C
  _ex__3(); // !_3

  label4:
  Push(pp__ro_STOP_dash_C); // (STOP-C
  Push(Read16(Pop())); // @
  UNK_0xdb0c(); // UNK_0xdb0c
  if (Pop() == 0) goto label5;
  UNK_0xf061(); // UNK_0xf061
  CTINIT(); // CTINIT
  Push(0x115a); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  _dot_TTY(); // .TTY
  UNK_0xf13e(); // UNK_0xf13e
  Push(cc__5); // 5
  _dot_BTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  Push(pp_FTRIG); // FTRIG
  OFF(); // OFF

  label5:
  Push(pp__ro_STOP_dash_C); // (STOP-C
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label6;
  Push(0); // 0
  _dot_BTN_dash_TE(); // .BTN-TE
  Push(pp_UNK_0xe4b2); // UNK_0xe4b2
  OFF(); // OFF
  CLR_dash_BUT(); // CLR-BUT
  SetColor("BLUE");
  Push(cc__4); // 4
  _dot_HIGHLI(); // .HIGHLI
  Push(cc__4); // 4
  Push(pp_THIS_dash_BU); // THIS-BU
  _ex__3(); // !_3
  SetColor("WHITE");
  Push(pp_CTCOLOR); // CTCOLOR
  _ex__3(); // !_3
}


// ================================================
// 0xf226: WORD 'UNK_0xf228' codep=0x224c parp=0xf228
// ================================================

void UNK_0xf228() // UNK_0xf228
{
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  _1_dot_5_ex_(); // 1.5!
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_OK_dash_TALK); // OK-TALK
  D_ex_(); // D!
  Push(pp_TERMINA); // TERMINA
  OFF(); // OFF
  Push(0x000e);
  UNK_0xdba8(); // UNK_0xdba8
  Push(pp_UNK_0xda2b); // UNK_0xda2b
  OFF(); // OFF
  Push(pp_UNK_0xda43); // UNK_0xda43
  OFF(); // OFF
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(0x63fb); // IFIELD(UNK_0xd970)
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xda69); // UNK_0xda69
  _ex__3(); // !_3
  Push(0x6401); // IFIELD(UNK_0xd97a)
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_EDL); // EDL
  _ex__3(); // !_3
  UNK_0xe8de(); // UNK_0xe8de
  Push(cc__5); // 5
  Push(Pop() * Pop()); // *
  _plus__ex_EDL(); // +!EDL
  UNK_0xe8ea(); // UNK_0xe8ea
  Pop(); // DROP
  UNK_0xe906(); // UNK_0xe906
  Push(0x000a);
  Push(Pop() * Pop()); // *
  _plus__ex_EDL(); // +!EDL
  UNK_0xe912(); // UNK_0xe912
  Pop(); // DROP
  UNK_0xdc6f(); // UNK_0xdc6f
}


// ================================================
// 0xf278: WORD 'UNK_0xf27a' codep=0x224c parp=0xf27a
// ================================================

void UNK_0xf27a() // UNK_0xf27a
{
  UNK_0xf228(); // UNK_0xf228
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(Read16(regsp)); // DUP
  unsigned short int a = Pop(); // >R
  Push(pp_UNK_0xda71); // UNK_0xda71
  _ex__3(); // !_3
  _ask_CHILD(); // ?CHILD
  if (Pop() == 0) goto label1;
  Push(a); // I
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
  _0_gt_(); // 0>
  Push(a); // I
  _plus_BIT(); // +BIT
  Push(1); // 1
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  Push(a); // I
  Push(cc__6); // 6
  Push(cc__9); // 9
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  Push(Read16(regsp)); // DUP
  Push(0xda61); // probable 'UNK_0xda61'
  _ex__3(); // !_3
  if (Pop() == 0) goto label2;
  UNK_0xe014(); // UNK_0xe014
  Push(pp__ro_ENCOUNTER); // (ENCOUNTER
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  Push(2); // 2
  Push(Pop() | Pop()); // OR
  UNK_0xe068(); // UNK_0xe068
  Push(0x000f);
  MIN(); // MIN
  OVER(); // OVER
  Push(Pop()-1); // 1-
  C_ex_(); // C!
  Push(Pop()-1); // 1-
  Push(pp_UNK_0xda8f); // UNK_0xda8f
  _do__ex_(); // $!
  SWAP(); // SWAP
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  Push(2); // 2
  Push(Pop() | Pop()); // OR
  UNK_0xe068(); // UNK_0xe068
  Push(0x000f);
  MIN(); // MIN
  OVER(); // OVER
  Push(Pop()-1); // 1-
  C_ex_(); // C!
  Push(Pop()-1); // 1-
  Push(pp_UNK_0xda7d); // UNK_0xda7d
  _do__ex_(); // $!

  label2:
  goto label3;

  label1:
  Push(pp_TERMINA); // TERMINA
  ON_3(); // ON_3

  label3:
  Push(a); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
  UNK_0xe7e0(); // UNK_0xe7e0
  UNK_0xe7e8(); // UNK_0xe7e8
  Push(Pop() | Pop()); // OR
  Push(Read16(regsp)); // DUP
  Push(cc_UNK_0xda3b); // UNK_0xda3b
  Push(Pop() & Pop()); // AND
  Push(0x50b4); // probable '?A-WEAP'
  _ex__3(); // !_3
  UNK_0xe7d8(); // UNK_0xe7d8
  Push(Pop() | Pop()); // OR
  UNK_0xe9c2(); // UNK_0xe9c2
  UNK_0xdb0c(); // UNK_0xdb0c
  Push(cc_UNK_0xda37); // UNK_0xda37
  Push(Pop() & Pop()); // AND
  Push(0x50a6); // probable '?A-SHIE'
  _ex__3(); // !_3
}


// ================================================
// 0xf32e: WORD 'UNK_0xf330' codep=0x224c parp=0xf330
// ================================================

void UNK_0xf330() // UNK_0xf330
{
  Push(pp_UNK_0xdad7); // UNK_0xdad7
  OFF(); // OFF
  Push(0xdad3); // probable 'UNK_0xdad3'
  OFF(); // OFF
  Push(0xda79); // probable 'UNK_0xda79'
  OFF(); // OFF
  Push(0xda75); // probable 'UNK_0xda75'
  OFF(); // OFF
  Push(0xda0f); // probable 'UNK_0xda0f'
  OFF(); // OFF
  Push(pp_UNK_0xda17); // UNK_0xda17
  OFF(); // OFF
  Push(0x5098); // probable '?FIRED-'
  OFF(); // OFF
  Push(0xda55); // probable 'UNK_0xda55'
  OFF(); // OFF
  Push(pp_UNK_0xda0b); // UNK_0xda0b
  OFF(); // OFF
  Push(pp_UNK_0xda23); // UNK_0xda23
  OFF(); // OFF
  Push(pp_UNK_0xda1b); // UNK_0xda1b
  OFF(); // OFF
  Push(pp_UNK_0xda1f); // UNK_0xda1f
  OFF(); // OFF
  Push(0xda6d); // probable 'UNK_0xda6d'
  OFF(); // OFF
  Push(pp_P_dash_RACES); // P-RACES
  OFF(); // OFF
  Push(pp_UNK_0xdacf); // UNK_0xdacf
  OFF(); // OFF
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x6400); // IFIELD(UNK_0xd9c0)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63fa); // IFIELD(UNK_0xd9b1)
  Push(pp_UNK_0xdaa1); // UNK_0xdaa1
  _do__ex_(); // $!
  ICLOSE(); // ICLOSE
  Push(0); // 0
  Push(0x0012);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x6400); // IFIELD(UNK_0xd9c0)
  Push(i); // I
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()+1); // 1+
  BIT(); // BIT
  Push(Pop() | Pop()); // OR
  ICLOSE(); // ICLOSE
  Push(cc__3); // 3
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffea

  ICLOSE(); // ICLOSE
  Push(pp_P_dash_RACES); // P-RACES
  _ex__3(); // !_3
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6423); // IFIELD(%NAME)
  Push(pp_UNK_0xdab3); // UNK_0xdab3
  _do__ex_(); // $!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3c0: WORD 'UNK_0xf3c2' codep=0x224c parp=0xf3c2
// ================================================

void UNK_0xf3c2() // UNK_0xf3c2
{
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x640c); // IFIELD(UNK_0xd9c5)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x640c); // IFIELD(UNK_0xd9ac)
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xdacb); // UNK_0xdacb
  _ex__3(); // !_3
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(pp_UNK_0xdacf); // UNK_0xdacf
  _ex__3(); // !_3
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xda71); // UNK_0xda71
  Push(Read16(Pop())); // @
  O_gt_P(); // O>P case
  Push(Read16(regsp)); // DUP
  Push(Pop()+1); // 1+
  BIT(); // BIT
  Push(pp_P_dash_RACES); // P-RACES
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  _0_gt_(); // 0>
  Push(0x0032);
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(pp_UNK_0xdacf); // UNK_0xdacf
  Push(Read16(Pop())); // @
  Push((Pop()==Pop())?1:0); // =
  Push(0x0032);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  UNK_0xe9c2(); // UNK_0xe9c2
  Push(cc__4); // 4
  Push(0xbdd8); // probable 'OV?ARTIFACT'
  MODULE(); // MODULE
  Push(Pop() & Pop()); // AND
  Push(0x00fa);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xdacb); // UNK_0xdacb
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0); // 0
  SQRT(); // SQRT
  Push(0x00a7);
  Push(0x000a);
  _star__slash_(); // */
  Push(0x00fa);
  MIN(); // MIN
  Push(pp_UNK_0xdacb); // UNK_0xdacb
  _ex__3(); // !_3
}


// ================================================
// 0xf43a: WORD 'IAPWR' codep=0x224c parp=0xf444
// ================================================
// entry

void IAPWR() // IAPWR
{
  Push(pp__ro_ENCOUNTER); // (ENCOUNTER
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0); // 0

  label2:
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x0019);
  Push((Pop()==Pop())?1:0); // =
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(0x0018);
  Push((Pop()==Pop())?1:0); // =
  UNK_0xdb0c(); // UNK_0xdb0c
  if (Pop() == 0) goto label1;
  Push(cc_UNK_0xda37); // UNK_0xda37
  LoadData("UNK_0xd9e8"); // from 'VESSEL      '
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
  Push(0xda37); // probable 'UNK_0xda37'
  _ex__3(); // !_3
  Push(cc_UNK_0xda3b); // UNK_0xda3b
  LoadData("UNK_0xd9f0"); // from 'VESSEL      '
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
  Push(0xda3b); // probable 'UNK_0xda3b'
  _ex__3(); // !_3
  LoadData("UNK_0xd9fd"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x6401); // IFIELD(UNK_0xd9f8)
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  LoadData("UNK_0xd9e8"); // from 'VESSEL      '
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  _star__slash_(); // */
  Push(Pop() + Pop()); // +

  label1:
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label2;
  Push(pp_A_dash_STRENGTH); // A-STRENGTH
  _ex__3(); // !_3
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4ae: WORD 'UNK_0xf4b0' codep=0x224c parp=0xf4b0
// ================================================

void UNK_0xf4b0() // UNK_0xf4b0
{
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xf4c4: WORD 'UNK_0xf4c6' codep=0x224c parp=0xf4c6
// ================================================

void UNK_0xf4c6() // UNK_0xf4c6
{
  Push(pp_UNK_0xda59); // UNK_0xda59
  Push(Read16(Pop())); // @
  Push(1); // 1
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6400); // IFIELD(UNK_0xd9d4)
  UNK_0xf4b0(); // UNK_0xf4b0
  Push(0x6408); // IFIELD(UNK_0xd9d9)
  UNK_0xf4b0(); // UNK_0xf4b0
  Push(Pop() + Pop()); // +
  Push(0x640c); // IFIELD(UNK_0xd9e3)
  UNK_0xf4b0(); // UNK_0xf4b0
  Push(Pop() + Pop()); // +
  Push(0x640a); // IFIELD(UNK_0xd9de)
  UNK_0xf4b0(); // UNK_0xf4b0
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x6400); // IFIELD(UNK_0xd9c0)
  _at__gt_C_plus_S(); // @>C+S
  Push(0); // 0
  Push(0x6409); // IFIELD(UNK_0xd9bb)
  Push(cc__5); // 5
  Push(Pop() + Pop()); // +
  Push(0x6409); // IFIELD(UNK_0xd9bb)

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  i++;
  } while(i<imax); // (LOOP) 0xfff8

  Push(0x0226);
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(0x01f4);
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
  Push(0); // 0

  label2:
  Push(pp_UNK_0xda65); // UNK_0xda65
  _ex__3(); // !_3
}


// ================================================
// 0xf530: WORD 'ICOMM' codep=0x224c parp=0xf53a
// ================================================
// entry

void ICOMM() // ICOMM
{
  Push(pp_UNK_0xda59); // UNK_0xda59
  _ex__3(); // !_3
  Push(0xda3b); // probable 'UNK_0xda3b'
  OFF(); // OFF
  Push(0xda37); // probable 'UNK_0xda37'
  OFF(); // OFF
  IAPWR(); // IAPWR
  UNK_0xf4c6(); // UNK_0xf4c6
  UNK_0xf27a(); // UNK_0xf27a
  UNK_0xf330(); // UNK_0xf330
  UNK_0xf3c2(); // UNK_0xf3c2
  _gt_DISPLAY(); // >DISPLAY
}

// 0xf558: db 0x43 0x4f 0x4d 0x4d 0x2d 0x56 0x4f 0x43 0x00 'COMM-VOC '
  