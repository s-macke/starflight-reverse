// ====== OVERLAY 'COMM-OV' ======
// store offset = 0xd920
// overlay size   = 0x1c40

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


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
//      UNK_0xd9b1  codep:0x744d parp:0xd9b1 size:0x0003 C-string:'UNK_0xd9b1'
//      UNK_0xd9b6  codep:0x744d parp:0xd9b6 size:0x0003 C-string:'UNK_0xd9b6'
//      UNK_0xd9bb  codep:0x744d parp:0xd9bb size:0x0003 C-string:'UNK_0xd9bb'
//      UNK_0xd9c0  codep:0x744d parp:0xd9c0 size:0x0003 C-string:'UNK_0xd9c0'
//      UNK_0xd9c5  codep:0x744d parp:0xd9c5 size:0x0003 C-string:'UNK_0xd9c5'
//      UNK_0xd9ca  codep:0x744d parp:0xd9ca size:0x0003 C-string:'UNK_0xd9ca'
//      UNK_0xd9cf  codep:0x744d parp:0xd9cf size:0x0003 C-string:'UNK_0xd9cf'
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
//              ?S  codep:0x4a4f parp:0xe3d0 size:0x0014 C-string:'IsS'
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
extern const unsigned short int pp_THIS_dash_BU; // THIS-BU
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
extern const unsigned short int pp__ro_ORIGIN; // (ORIGIN
extern const unsigned short int pp_OK_dash_TALK; // OK-TALK
extern const unsigned short int pp__ro_SYSTEM; // (SYSTEM
extern const unsigned short int pp__ro_ENCOUNTER; // (ENCOUNTER
extern const unsigned short int pp__ro_AORIGINATOR; // (AORIGINATOR
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
void INIT_dash_BU(); // INIT-BU
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void Y_slash_N(); // Y/N
void DrawABTN(); // .ABTN
void DrawBTN_dash_TE(); // .BTN-TE
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


const unsigned short int cc_UNK_0xda0f = 0xda0f; // UNK_0xda0f
const unsigned short int cc_UNK_0xda37 = 0xda37; // UNK_0xda37
const unsigned short int cc_UNK_0xda3b = 0xda3b; // UNK_0xda3b
const unsigned short int cc_UNK_0xda55 = 0xda55; // UNK_0xda55
const unsigned short int cc_UNK_0xda5d = 0xda5d; // UNK_0xda5d
const unsigned short int cc_UNK_0xda61 = 0xda61; // UNK_0xda61
const unsigned short int cc_UNK_0xda6d = 0xda6d; // UNK_0xda6d
const unsigned short int cc_UNK_0xda75 = 0xda75; // UNK_0xda75
const unsigned short int cc_UNK_0xda79 = 0xda79; // UNK_0xda79
const unsigned short int cc_UNK_0xdad3 = 0xdad3; // UNK_0xdad3
const unsigned short int cc_UNK_0xdadf = 0xdadf; // UNK_0xdadf
const unsigned short int cc_UNK_0xdae3 = 0xdae3; // UNK_0xdae3
const unsigned short int cc_UNK_0xdae7 = 0xdae7; // UNK_0xdae7
const unsigned short int cc_UNK_0xdaeb = 0xdaeb; // UNK_0xdaeb
const unsigned short int cc_UNK_0xdaef = 0xdaef; // UNK_0xdaef
const unsigned short int cc_UNK_0xdaf3 = 0xdaf3; // UNK_0xdaf3
const unsigned short int cc_UNK_0xdaf7 = 0xdaf7; // UNK_0xdaf7
const unsigned short int cc_UNK_0xdafb = 0xdafb; // UNK_0xdafb
const unsigned short int cc_UNK_0xdaff = 0xdaff; // UNK_0xdaff
const unsigned short int cc_UNK_0xdb03 = 0xdb03; // UNK_0xdb03


// 0xd932: db 0xc4 0x01 '  '

// ================================================
// 0xd934: WORD 'UNK_0xd936' codep=0x744d parp=0xd936
// ================================================
IFieldType UNK_0xd936 = {STRINGIDX, 0x0b, 0xff};

// ================================================
// 0xd939: WORD 'UNK_0xd93b' codep=0x224c parp=0xd93b params=2 returns=2
// ================================================

void UNK_0xd93b() // UNK_0xd93b
{
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+UNK_0xd936.offset); // UNK_0xd936<IFIELD>
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xd94b: WORD 'UNK_0xd94d' codep=0x744d parp=0xd94d
// ================================================
IFieldType UNK_0xd94d = {PHRASECONTRLIDX, 0x0b, 0x01};

// ================================================
// 0xd950: WORD 'UNK_0xd952' codep=0x744d parp=0xd952
// ================================================
IFieldType UNK_0xd952 = {PHRASECONTRLIDX, 0x0c, 0x01};

// ================================================
// 0xd955: WORD 'UNK_0xd957' codep=0x744d parp=0xd957
// ================================================
IFieldType UNK_0xd957 = {PHRASECONTRLIDX, 0x0d, 0x01};

// ================================================
// 0xd95a: WORD 'UNK_0xd95c' codep=0x744d parp=0xd95c
// ================================================
IFieldType UNK_0xd95c = {PHRASECONTRLIDX, 0x0e, 0x01};

// ================================================
// 0xd95f: WORD 'UNK_0xd961' codep=0x744d parp=0xd961
// ================================================
IFieldType UNK_0xd961 = {PHRASECONTRLIDX, 0x0f, 0x01};

// ================================================
// 0xd964: WORD 'UNK_0xd966' codep=0x744d parp=0xd966
// ================================================
IFieldType UNK_0xd966 = {PHRASECONTRLIDX, 0x10, 0x01};

// ================================================
// 0xd969: WORD 'UNK_0xd96b' codep=0x744d parp=0xd96b
// ================================================
IFieldType UNK_0xd96b = {ORIGINATORIDX, 0x0b, 0x01};

// ================================================
// 0xd96e: WORD 'UNK_0xd970' codep=0x744d parp=0xd970
// ================================================
IFieldType UNK_0xd970 = {ORIGINATORIDX, 0x0c, 0x01};

// ================================================
// 0xd973: WORD 'UNK_0xd975' codep=0x744d parp=0xd975
// ================================================
IFieldType UNK_0xd975 = {ORIGINATORIDX, 0x0d, 0x01};

// ================================================
// 0xd978: WORD 'UNK_0xd97a' codep=0x744d parp=0xd97a
// ================================================
IFieldType UNK_0xd97a = {ORIGINATORIDX, 0x12, 0x01};

// ================================================
// 0xd97d: WORD 'UNK_0xd97f' codep=0x744d parp=0xd97f
// ================================================
IFieldType UNK_0xd97f = {ORIGINATORIDX, 0x1d, 0x01};

// ================================================
// 0xd982: WORD 'UNK_0xd984' codep=0x744d parp=0xd984
// ================================================
IFieldType UNK_0xd984 = {ORIGINATORIDX, 0x13, 0x01};

// ================================================
// 0xd987: WORD 'UNK_0xd989' codep=0x744d parp=0xd989
// ================================================
IFieldType UNK_0xd989 = {ORIGINATORIDX, 0x14, 0x01};

// ================================================
// 0xd98c: WORD 'UNK_0xd98e' codep=0x744d parp=0xd98e
// ================================================
IFieldType UNK_0xd98e = {ORIGINATORIDX, 0x15, 0x01};

// ================================================
// 0xd991: WORD 'UNK_0xd993' codep=0x744d parp=0xd993
// ================================================
IFieldType UNK_0xd993 = {ORIGINATORIDX, 0x16, 0x01};

// ================================================
// 0xd996: WORD 'UNK_0xd998' codep=0x744d parp=0xd998
// ================================================
IFieldType UNK_0xd998 = {ORIGINATORIDX, 0x17, 0x01};

// ================================================
// 0xd99b: WORD 'UNK_0xd99d' codep=0x744d parp=0xd99d
// ================================================
IFieldType UNK_0xd99d = {ORIGINATORIDX, 0x18, 0x01};

// ================================================
// 0xd9a0: WORD 'UNK_0xd9a2' codep=0x744d parp=0xd9a2
// ================================================
IFieldType UNK_0xd9a2 = {ORIGINATORIDX, 0x19, 0x01};

// ================================================
// 0xd9a5: WORD 'UNK_0xd9a7' codep=0x744d parp=0xd9a7
// ================================================
IFieldType UNK_0xd9a7 = {ORIGINATORIDX, 0x1a, 0x03};

// ================================================
// 0xd9aa: WORD 'UNK_0xd9ac' codep=0x744d parp=0xd9ac
// ================================================
IFieldType UNK_0xd9ac = {CREWMEMBERIDX, 0x1d, 0x01};

// ================================================
// 0xd9af: WORD 'UNK_0xd9b1' codep=0x744d parp=0xd9b1
// ================================================
IFieldType UNK_0xd9b1 = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xd9b4: WORD 'UNK_0xd9b6' codep=0x744d parp=0xd9b6
// ================================================
// orphan
IFieldType UNK_0xd9b6 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xd9b9: WORD 'UNK_0xd9bb' codep=0x744d parp=0xd9bb
// ================================================
IFieldType UNK_0xd9bb = {CREWMEMBERIDX, 0x1a, 0x0f};

// ================================================
// 0xd9be: WORD 'UNK_0xd9c0' codep=0x744d parp=0xd9c0
// ================================================
IFieldType UNK_0xd9c0 = {ASSIGN_CREWIDX, 0x11, 0x03};

// ================================================
// 0xd9c3: WORD 'UNK_0xd9c5' codep=0x744d parp=0xd9c5
// ================================================
IFieldType UNK_0xd9c5 = {ASSIGN_CREWIDX, 0x1d, 0x03};

// ================================================
// 0xd9c8: WORD 'UNK_0xd9ca' codep=0x744d parp=0xd9ca
// ================================================
IFieldType UNK_0xd9ca = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xd9cd: WORD 'UNK_0xd9cf' codep=0x744d parp=0xd9cf
// ================================================
// orphan
IFieldType UNK_0xd9cf = {SHIPIDX, 0x17, 0x02};

// ================================================
// 0xd9d2: WORD 'UNK_0xd9d4' codep=0x744d parp=0xd9d4
// ================================================
IFieldType UNK_0xd9d4 = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xd9d7: WORD 'UNK_0xd9d9' codep=0x744d parp=0xd9d9
// ================================================
IFieldType UNK_0xd9d9 = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xd9dc: WORD 'UNK_0xd9de' codep=0x744d parp=0xd9de
// ================================================
IFieldType UNK_0xd9de = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xd9e1: WORD 'UNK_0xd9e3' codep=0x744d parp=0xd9e3
// ================================================
IFieldType UNK_0xd9e3 = {SHIPIDX, 0x1d, 0x02};

// ================================================
// 0xd9e6: WORD 'UNK_0xd9e8' codep=0x73ea parp=0xd9e8
// ================================================
LoadDataType UNK_0xd9e8 = {VESSELIDX, 0x0c, 0x04, 0x49, 0x6491};

// ================================================
// 0xd9ee: WORD 'UNK_0xd9f0' codep=0x73ea parp=0xd9f0
// ================================================
LoadDataType UNK_0xd9f0 = {VESSELIDX, 0x12, 0x03, 0x49, 0x6491};

// ================================================
// 0xd9f6: WORD 'UNK_0xd9f8' codep=0x744d parp=0xd9f8
// ================================================
IFieldType UNK_0xd9f8 = {VESSELIDX, 0x12, 0x04};

// ================================================
// 0xd9fb: WORD 'UNK_0xd9fd' codep=0x73ea parp=0xd9fd
// ================================================
LoadDataType UNK_0xd9fd = {VESSELIDX, 0x05, 0x01, 0x49, 0x6491};

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
// 0xda0f: dw 0x0000

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
// 0xda37: dw 0x0000

// ================================================
// 0xda39: WORD 'UNK_0xda3b' codep=0x2214 parp=0xda3b
// ================================================
// 0xda3b: dw 0x0000

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
// 0xda55: dw 0x0000

// ================================================
// 0xda57: WORD 'UNK_0xda59' codep=0x1d29 parp=0xda59
// ================================================
// 0xda59: db 0x3a 0x20 ': '

// ================================================
// 0xda5b: WORD 'UNK_0xda5d' codep=0x2214 parp=0xda5d
// ================================================
// 0xda5d: dw 0x0000

// ================================================
// 0xda5f: WORD 'UNK_0xda61' codep=0x2214 parp=0xda61
// ================================================
// 0xda61: dw 0x0000

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
// 0xda6d: dw 0x0000

// ================================================
// 0xda6f: WORD 'UNK_0xda71' codep=0x1d29 parp=0xda71
// ================================================
// 0xda71: db 0x3a 0x20 ': '

// ================================================
// 0xda73: WORD 'UNK_0xda75' codep=0x2214 parp=0xda75
// ================================================
// 0xda75: dw 0x0000

// ================================================
// 0xda77: WORD 'UNK_0xda79' codep=0x2214 parp=0xda79
// ================================================
// 0xda79: dw 0x0000

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
// 0xdad3: dw 0x0000

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
// 0xdadf: dw 0x0001

// ================================================
// 0xdae1: WORD 'UNK_0xdae3' codep=0x2214 parp=0xdae3
// ================================================
// 0xdae3: dw 0x0002

// ================================================
// 0xdae5: WORD 'UNK_0xdae7' codep=0x2214 parp=0xdae7
// ================================================
// 0xdae7: dw 0x0004

// ================================================
// 0xdae9: WORD 'UNK_0xdaeb' codep=0x2214 parp=0xdaeb
// ================================================
// 0xdaeb: dw 0x0008

// ================================================
// 0xdaed: WORD 'UNK_0xdaef' codep=0x2214 parp=0xdaef
// ================================================
// 0xdaef: dw 0x0010

// ================================================
// 0xdaf1: WORD 'UNK_0xdaf3' codep=0x2214 parp=0xdaf3
// ================================================
// 0xdaf3: dw 0x0007

// ================================================
// 0xdaf5: WORD 'UNK_0xdaf7' codep=0x2214 parp=0xdaf7
// ================================================
// 0xdaf7: dw 0x0008

// ================================================
// 0xdaf9: WORD 'UNK_0xdafb' codep=0x2214 parp=0xdafb
// ================================================
// 0xdafb: dw 0x0009

// ================================================
// 0xdafd: WORD 'UNK_0xdaff' codep=0x2214 parp=0xdaff
// ================================================
// 0xdaff: dw 0x000b

// ================================================
// 0xdb01: WORD 'UNK_0xdb03' codep=0x2214 parp=0xdb03
// ================================================
// 0xdb03: dw 0x000a

// ================================================
// 0xdb05: WORD 'UNK_0xdb07' codep=0x744d parp=0xdb07
// ================================================
IFieldType UNK_0xdb07 = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xdb0a: WORD 'UNK_0xdb0c' codep=0x224c parp=0xdb0c params=2 returns=1
// ================================================

void UNK_0xdb0c() // UNK_0xdb0c
{
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xdb12: WORD 'ORIGINATOR>C' codep=0x224c parp=0xdb23 params=0 returns=0
// ================================================
// entry

void ORIGINATOR_gt_C() // ORIGINATOR>C
{
  Push(pp__ro_ORIGIN); // (ORIGIN
  Get_gt_C_plus_S(); // @>C+S
  GetColor(WHITE);
  GetColor(WHITE);
  Push(Read16(0x63ef+UNK_0xd96b.offset)&0xFF); // UNK_0xd96b<IFIELD> C@
  IsMRC(); // ?MRC
  Push(pp_CTCOLOR); // CTCOLOR
  Store_3(); // !_3
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
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(pp_UNK_0xda2f); // UNK_0xda2f
  Store_3(); // !_3
  Push(Read16(pp_UNK_0xda27)); // UNK_0xda27 @
  Push(pp_UNK_0xda3f); // UNK_0xda3f
  Store_3(); // !_3
  Push(0xda5d); // probable 'UNK_0xda5d'
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
  Push(Read16(pp_UNK_0xda13)); // UNK_0xda13 @
  Push(pp_UNK_0xda2f); // UNK_0xda2f
  Store_3(); // !_3
  Push(Read16(pp_UNK_0xda1b)); // UNK_0xda1b @
  Push(pp_UNK_0xda3f); // UNK_0xda3f
  Store_3(); // !_3
}


// ================================================
// 0xdb82: WORD 'UNK_0xdb84' codep=0x224c parp=0xdb84 params=0 returns=0
// ================================================

void UNK_0xdb84() // UNK_0xdb84
{
  Push(pp_UNK_0xda05); // UNK_0xda05
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xdb8a: WORD 'UNK_0xdb8c' codep=0x224c parp=0xdb8c
// ================================================

void UNK_0xdb8c() // UNK_0xdb8c
{
  Push(pp_UNK_0xdac5); // UNK_0xdac5
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+UNK_0xd961.offset); // UNK_0xd961<IFIELD>
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdb98: WORD 'UNK_0xdb9a' codep=0x224c parp=0xdb9a
// ================================================

void UNK_0xdb9a() // UNK_0xdb9a
{
  Push(pp_UNK_0xdac5); // UNK_0xdac5
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+UNK_0xd966.offset); // UNK_0xd966<IFIELD>
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdba6: WORD 'UNK_0xdba8' codep=0x224c parp=0xdba8 params=1 returns=0
// ================================================

void UNK_0xdba8() // UNK_0xdba8
{
  Push(pp_UNK_0xda27); // UNK_0xda27
  Store_3(); // !_3
}


// ================================================
// 0xdbae: WORD 'P>AFIELD' codep=0x4a4f parp=0xdbbb
// ================================================

void P_gt_AFIELD() // P>AFIELD
{
  switch(Pop()) // P>AFIELD
  {
  case 2:
    Push(0x63ef+UNK_0xd998.offset); // IFIELD
    break;
  case 8:
    Push(0x63ef+UNK_0xd99d.offset); // IFIELD
    break;
  default:
    Push(0x63ef+UNK_0xd993.offset); // IFIELD
    break;

  }
}

// ================================================
// 0xdbc7: WORD 'UNK_0xdbc9' codep=0x224c parp=0xdbc9
// ================================================

void UNK_0xdbc9() // UNK_0xdbc9
{
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(pp_UNK_0xda13)); // UNK_0xda13 @
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
  do
  {
    UNK_0xdbdb(); // UNK_0xdbdb
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  GetColor(BLUE);
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  DrawON(); // .ON
}


// ================================================
// 0xdbfd: WORD 'UNK_0xdbff' codep=0x224c parp=0xdbff
// ================================================

void UNK_0xdbff() // UNK_0xdbff
{
  UNK_0xdb6a(); // UNK_0xdb6a
  GetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_3(); // !_3
}


// ================================================
// 0xdc09: WORD 'UNK_0xdc0b' codep=0x3b68 parp=0xdc0b
// ================================================
// 0xdc0b: dw 0x0014 0x000a

// ================================================
// 0xdc0f: WORD 'UNK_0xdc11' codep=0x3b68 parp=0xdc11
// ================================================
// 0xdc11: dw 0x000f 0x000a

// ================================================
// 0xdc15: WORD 'UNK_0xdc17' codep=0x3b68 parp=0xdc17
// ================================================
// 0xdc17: dw 0x000a 0x0005

// ================================================
// 0xdc1b: WORD 'UNK_0xdc1d' codep=0x3b68 parp=0xdc1d
// ================================================
// 0xdc1d: dw 0x0007 0x0004

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
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  _n_PHR(); // #PHR case
  RRND(); // RRND
  Push(pp_UNK_0xda47); // UNK_0xda47
  Store_3(); // !_3
}


// ================================================
// 0xdc4e: WORD 'N>POST' codep=0x4a4f parp=0xdc59
// ================================================

void N_gt_POST() // N>POST
{
  switch(Pop()) // N>POST
  {
  case 0:
    Push(Read16(cc_UNK_0xdae3)); // UNK_0xdae3
    break;
  case 1:
    Push(Read16(cc_UNK_0xdae7)); // UNK_0xdae7
    break;
  case 2:
    Push(Read16(cc_UNK_0xdaeb)); // UNK_0xdaeb
    break;
  case 3:
    Push(Read16(cc_UNK_0xdaef)); // UNK_0xdaef
    break;
  default:
    Push(Read16(cc_UNK_0xdadf)); // UNK_0xdadf
    break;

  }
}

// ================================================
// 0xdc6d: WORD 'UNK_0xdc6f' codep=0x224c parp=0xdc6f
// ================================================

void UNK_0xdc6f() // UNK_0xdc6f
{
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(pp_EDL)); // EDL @
  Push(Read16(regsp)); // DUP
  Push(Read16(0x63ef+UNK_0xd984.offset)&0xFF); // UNK_0xd984<IFIELD> C@
  _st_(); // <
  Push(!Pop()); //  NOT
  OVER(); // OVER
  Push(Read16(0x63ef+UNK_0xd989.offset)&0xFF); // UNK_0xd989<IFIELD> C@
  _st_(); // <
  Push(!Pop()); //  NOT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(Read16(0x63ef+UNK_0xd98e.offset)&0xFF); // UNK_0xd98e<IFIELD> C@
  _st_(); // <
  Push(!Pop()); //  NOT
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  ICLOSE(); // ICLOSE
  Push(Read16(pp_UNK_0xda65) - Read16(pp_A_dash_STRENGTH)); // UNK_0xda65 @ A-STRENGTH @ -
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
  UNK_0xdc40(); // UNK_0xdc40
}


// ================================================
// 0xdcd5: WORD 'UNK_0xdcd7' codep=0x224c parp=0xdcd7 params=1 returns=1
// ================================================

void UNK_0xdcd7() // UNK_0xdcd7
{
  Push(Pop()==(Read16(pp_A_dash_POSTU)&0xFF)?1:0); //  A-POSTU C@ =
}


// ================================================
// 0xdcdf: WORD '+!EDL' codep=0x224c parp=0xdce9
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
  UNK_0xdc6f(); // UNK_0xdc6f
  Push(pp_UNK_0xda1b); // UNK_0xda1b
  OFF(); // OFF
  Push(Read16(pp_UNK_0xda71)==3?1:0); // UNK_0xda71 @ 3 =
  Push(2);
  UNK_0xdcd7(); // UNK_0xdcd7
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  Get_gt_C_plus_S(); // @>C+S
  Push(1);
  Push(0x63ef+UNK_0xd97a.offset); // UNK_0xd97a<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  Push(1);
  Push(pp_EDL); // EDL
  Store_3(); // !_3
  Push2Words("*HEAVEN");
  _gt_C_plus_S(); // >C+S
  Push(0);
  Push(0x63ef+UNK_0xdb07.offset); // UNK_0xdb07<IFIELD>
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
  Push(Read16(pp_UNK_0xda33)); // UNK_0xda33 @
  Push(0x0037);
  U_star_(); // U*
  OVER(); // OVER
  Push(Pop() * 2); //  2*
  Push(Read16(cc_UNK_0xda5d)); // UNK_0xda5d
  U_star_(); // U*
  D_plus_(); // D+
  D_plus_(); // D+
  Push(pp_OK_dash_TALK); // OK-TALK
  StoreD(); // D!
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
  StoreD(); // D!
}


// ================================================
// 0xdd7b: WORD 'UNK_0xdd7d' codep=0x224c parp=0xdd7d params=1 returns=1
// ================================================

void UNK_0xdd7d() // UNK_0xdd7d
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
    Push(Pop() | Read16(pp_UNK_0xdad7)); //  UNK_0xdad7 @ OR
    Push(pp_UNK_0xdad7); // UNK_0xdad7
    Store_3(); // !_3
  }
  Push(a); // R>
  BIT(); // BIT
  Push(((Pop() & Read16(pp_UNK_0xdad7))==0?1:0)==0?1:0); //  UNK_0xdad7 @ AND 0= 0=
}


// ================================================
// 0xddbd: WORD 'UNK_0xddbf' codep=0x224c parp=0xddbf params=0 returns=1
// ================================================

void UNK_0xddbf() // UNK_0xddbf
{
  Push(0);
  Push(0x0100);
  Push(pp_UNK_0xda4b); // UNK_0xda4b
  Store_3(); // !_3
  do
  {
    Push(Read16(0x63ef+UNK_0xd957.offset)&0xFF); // UNK_0xd957<IFIELD> C@
    Push(Read16(pp_UNK_0xda4b)); // UNK_0xda4b @
    _st_(); // <
    Push((Read16(0x63ef+UNK_0xd952.offset)&0xFF) & (Read16(pp_UNK_0xda2f)&0xFF)); // UNK_0xd952<IFIELD> C@ UNK_0xda2f C@ AND
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    Push((Read16(0x63ef+UNK_0xd94d.offset)&0xFF) & Read16(pp_UNK_0xda59)); // UNK_0xd94d<IFIELD> C@ UNK_0xda59 @ AND
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      CI(); // CI
      Push(pp_UNK_0xda05); // UNK_0xda05
      _1_dot_5_ex_(); // 1.5!
      Push(Read16(0x63ef+UNK_0xd957.offset)&0xFF); // UNK_0xd957<IFIELD> C@
      Push(pp_UNK_0xda4b); // UNK_0xda4b
      Store_3(); // !_3
      Pop(); // DROP
      Push(1);
    }
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
}


// ================================================
// 0xde0f: WORD 'UNK_0xde11' codep=0x224c parp=0xde11 params=0 returns=1
// ================================================

void UNK_0xde11() // UNK_0xde11
{
  Push(Read16(pp_UNK_0xda3f)); // UNK_0xda3f @
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
// 0xde29: WORD 'UNK_0xde2b' codep=0x224c parp=0xde2b
// ================================================

void UNK_0xde2b() // UNK_0xde2b
{
  Push(Read16(pp_UNK_0xda3f)); // UNK_0xda3f @
  Push(0x0033);
  OVER(); // OVER
  IFIND(); // IFIND
  Push(Pop()==0?1:0); //  0=
  SWAP(); // SWAP
  UNK_0xdd7d(); // UNK_0xdd7d
  Push(Pop() | Pop()); // OR
  Push(Read16(cc_UNK_0xda5d) & (Read16(pp_UNK_0xda59)==2?1:0)); // UNK_0xda5d UNK_0xda59 @ 2 = AND
  if (Pop() != 0)
  {
    UNK_0xde11(); // UNK_0xde11
    Push(Pop() | Pop()); // OR
  }
  if (Pop() == 0) return;
  IFIRST(); // IFIRST
  Push(0x0033);
  Push(5);
  IFIND(); // IFIND
  Pop(); // DROP
  Push(5);
  Push(pp_UNK_0xda3f); // UNK_0xda3f
  Store_3(); // !_3
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
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    UNK_0xde2b(); // UNK_0xde2b
    IsCHILD(); // ?CHILD
    if (Pop() != 0)
    {
      IOPEN(); // IOPEN
      UNK_0xddbf(); // UNK_0xddbf
      Push(Pop()==0?1:0); //  0=
      if (Pop() != 0)
      {
        ICLOSE(); // ICLOSE
        Push(5);
        Push(pp_UNK_0xda3f); // UNK_0xda3f
        Store_3(); // !_3
        UNK_0xde2b(); // UNK_0xde2b
        IOPEN(); // IOPEN
        UNK_0xddbf(); // UNK_0xddbf
        Pop(); // DROP
      }
      CDROP(); // CDROP
    }
    CDROP(); // CDROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdea7: WORD 'UNK_0xdea9' codep=0x224c parp=0xdea9 params=0 returns=0
// ================================================

void UNK_0xdea9() // UNK_0xdea9
{
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(5);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
}


// ================================================
// 0xdeb9: WORD 'UNK_0xdebb' codep=0x224c parp=0xdebb
// ================================================

void UNK_0xdebb() // UNK_0xdebb
{
  LoadData(_1BTN); // from 'BUTTONS'
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
  SET_STR_AS_PARAM("RESPOND");
  UNK_0xdebb(); // UNK_0xdebb
}


// ================================================
// 0xded7: WORD '>HAIL$' codep=0x224c parp=0xdee2
// ================================================
// entry

void _gt_HAIL_do_() // >HAIL$
{
  UNK_0xdea9(); // UNK_0xdea9
  SET_STR_AS_PARAM("HAIL   ");
  UNK_0xdebb(); // UNK_0xdebb
}


// ================================================
// 0xdef2: WORD 'UNK_0xdef4' codep=0x224c parp=0xdef4 params=2 returns=0
// ================================================

void UNK_0xdef4() // UNK_0xdef4
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
// 0xdf12: WORD 'UNK_0xdf14' codep=0x224c parp=0xdf14 params=2 returns=1
// ================================================

void UNK_0xdf14() // UNK_0xdf14
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
// 0xdf30: WORD 'UNK_0xdf32' codep=0x1d29 parp=0xdf32
// ================================================
// 0xdf32: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x48 0x45 0x41 0x44 0x3a 0x20 0x44 0x49 0x53 0x4b 0x3e 0x44 0x53 0x50 0x20 0x28 0x20 0x2d 0x2d 0x20 0x5c 0x20 0x6d 0x6f 0x76 0x65 0x20 0x64 0x69 0x73 0x70 0x6c 0x61 0x79 0x20 0x69 0x6d 0x61 0x67 0x65 0x20 0x66 0x72 0x6f 0x6d 0x20 0x73 0x61 0x76 0x65 0x20 0x64 0x69 0x73 0x6b 0x20 0x74 0x6f 0x20 0x29 0x20 0x20 0x20 0x20 0x54 0x3a 0x20 0x28 0x20 0x74 0x65 0x6d 0x70 0x6f 0x72 0x61 0x72 0x79 0x20 0x6c 0x6f 0x63 0x61 0x74 0x69 0x6f 0x6e 0x20 0x69 0x6e 0x20 0x63 0x61 0x63 0x68 0x65 0x29 0x20 ':  ALLOT                                                                                                                      HEAD: DISK>DSP ( -- \ move display image from save disk to )    T: ( temporary location in cache) '

// ================================================
// 0xe012: WORD 'UNK_0xe014' codep=0x224c parp=0xe014 params=0 returns=0
// ================================================

void UNK_0xe014() // UNK_0xe014
{
  unsigned short int i, imax;
  Push(pp_UNK_0xdf32); // UNK_0xdf32
  Push(0x00e0);
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(0x63ef+UNK_0xd9a7.offset); // UNK_0xd9a7<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x0020);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push((0x63ef+UNK_0xd936.offset) + 1); // UNK_0xd936<IFIELD> 1+
    COUNT(); // COUNT
    HUFF_gt_(); // HUFF>
    Push(pp_LSCAN); // LSCAN
    Push(pp_UNK_0xdf32 + i * 7); // UNK_0xdf32 I 7 * +
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
// 0xe058: WORD 'UNK_0xe05a' codep=0x224c parp=0xe05a params=1 returns=2
// ================================================

void UNK_0xe05a() // UNK_0xe05a
{
  Push(Pop() * 7 + pp_UNK_0xdf32); //  7 * UNK_0xdf32 +
  COUNT(); // COUNT
}


// ================================================
// 0xe066: WORD 'UNK_0xe068' codep=0x224c parp=0xe068 params=2 returns=2
// ================================================

void UNK_0xe068() // UNK_0xe068
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
  Push(Read16(0x63ef+UNK_0xd9a2.offset)&0xFF); // UNK_0xd9a2<IFIELD> C@
  a = Pop(); // >R
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  Push(a); // R>
  MOD(); // MOD
  Push(Pop() + 2); //  2+
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    _2DUP(); // 2DUP
    UNK_0xdf14(); // UNK_0xdf14
    Push(Pop() * i); //  I *
    Push(0x0020);
    MOD(); // MOD
    UNK_0xe05a(); // UNK_0xe05a
    UNK_0xdef4(); // UNK_0xdef4
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
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
// 0xe0c4: WORD 'UNK_0xe0c6' codep=0x224c parp=0xe0c6 params=0 returns=1
// ================================================

void UNK_0xe0c6() // UNK_0xe0c6
{
  Push((Read16(cc_UNK_0xda61) & Read16(cc_UNK_0xda5d)) & (Read16(pp_CONTEXT_dash_ID_n_)==4?1:0)); // UNK_0xda61 UNK_0xda5d AND CONTEXT-ID# @ 4 = AND
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
  Push(Read16(pp_UNK_0xdacb)); // UNK_0xdacb @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe0f6: WORD 'UNK_0xe0f8' codep=0x224c parp=0xe0f8 params=0 returns=0
// ================================================

void UNK_0xe0f8() // UNK_0xe0f8
{
  Push(pp_TERMINA); // TERMINA
  ON_3(); // ON_3
  Push(pp_UNK_0xda69); // UNK_0xda69
  OFF(); // OFF
  Push(0xafa3); // probable 'CEX+WAX'
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  Store_3(); // !_3
}


// ================================================
// 0xe10a: WORD 'UNK_0xe10c' codep=0x224c parp=0xe10c params=1 returns=0
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
  Push(0x63ef+UNK_0xd95c.offset); // UNK_0xd95c<IFIELD>
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
  Push(pp__ro_ORIGIN); // (ORIGIN
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
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
// 0xe15e: WORD 'UNK_0xe160' codep=0x224c parp=0xe160
// ================================================

void UNK_0xe160() // UNK_0xe160
{
  unsigned short int i, imax, a;
  _2DUP(); // 2DUP
  Push(0);

  i = Pop();
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
// 0xe18e: WORD 'UNK_0xe190' codep=0x224c parp=0xe190
// ================================================

void UNK_0xe190() // UNK_0xe190
{
  unsigned short int i, imax;
  UNK_0xe160(); // UNK_0xe160
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
// 0xe1e2: WORD 'UNK_0xe1e4' codep=0x224c parp=0xe1e4 params=2 returns=2
// ================================================

void UNK_0xe1e4() // UNK_0xe1e4
{
  Push(Pop() - 1); //  1-
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
}


// ================================================
// 0xe1ee: WORD 'UNK_0xe1f0' codep=0x224c parp=0xe1f0
// ================================================

void UNK_0xe1f0() // UNK_0xe1f0
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
// 0xe244: WORD 'UNK_0xe246' codep=0x224c parp=0xe246 params=1 returns=1
// ================================================

void UNK_0xe246() // UNK_0xe246
{
  Push(Pop() + Read16(pp_CTX)); //  CTX @ +
  Push(0x0026);
  _st_(); // <
}


// ================================================
// 0xe254: WORD 'CTSCROLL' codep=0x224c parp=0xe261 params=0 returns=0
// ================================================
// entry

void CTSCROLL() // CTSCROLL
{
  unsigned short int i, imax;
  Push(1);
  Push(pp_UNK_0xdadb); // UNK_0xdadb
  _plus__ex__2(); // +!_2
  Push(Read16(pp_UNK_0xdadb)); // UNK_0xdadb @
  Push(7);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0x2ee0); Push(0x0000);
    UNK_0xe1f0(); // UNK_0xe1f0
    Push(pp_UNK_0xdadb); // UNK_0xdadb
    OFF(); // OFF
  }
  Push(7);
  Push(0);

  i = Pop();
  imax = Pop();
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
// 0xe2a3: WORD 'UNK_0xe2a5' codep=0x224c parp=0xe2a5 params=2 returns=0
// ================================================

void UNK_0xe2a5() // UNK_0xe2a5
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    UNK_0xe246(); // UNK_0xe246
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
// 0xe2e7: WORD 'UNK_0xe2e9' codep=0x224c parp=0xe2e9 params=0 returns=2
// ================================================

void UNK_0xe2e9() // UNK_0xe2e9
{
  Push(pp_UNK_0xda7d + 1); // UNK_0xda7d 1+
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() - 1)&0xFF); //  1- C@
}


// ================================================
// 0xe2f5: WORD 'UNK_0xe2f7' codep=0x224c parp=0xe2f7 params=0 returns=2
// ================================================

void UNK_0xe2f7() // UNK_0xe2f7
{
  Push(pp_UNK_0xda8f + 1); // UNK_0xda8f 1+
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() - 1)&0xFF); //  1- C@
}


// ================================================
// 0xe303: WORD 'UNK_0xe305' codep=0x224c parp=0xe305 params=0 returns=2
// ================================================

void UNK_0xe305() // UNK_0xe305
{
  Push(pp_UNK_0xdaa1 + 1); // UNK_0xdaa1 1+
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() - 1)&0xFF); //  1- C@
}


// ================================================
// 0xe311: WORD 'UNK_0xe313' codep=0x224c parp=0xe313 params=0 returns=2
// ================================================

void UNK_0xe313() // UNK_0xe313
{
  SET_STR_AS_PARAM("ISS");
  UNK_0xe2a5(); // UNK_0xe2a5
  Push(pp_UNK_0xdab3 + 1); // UNK_0xdab3 1+
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() - 1)&0xFF); //  1- C@
}


// ================================================
// 0xe327: WORD 'UNK_0xe329' codep=0x224c parp=0xe329 params=2 returns=2
// ================================================

void UNK_0xe329() // UNK_0xe329
{

  label2:
  OVER(); // OVER
  Push(!((Read16(Pop())&0xFF)==0x0029?1:0)); //  C@ 0x0029 = NOT
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
// 0xe349: WORD 'UNK_0xe34b' codep=0x224c parp=0xe34b params=2 returns=3
// ================================================

void UNK_0xe34b() // UNK_0xe34b
{
  UNK_0xe1e4(); // UNK_0xe1e4
  Push(Read16(pp_UNK_0xda1f)==9?1:0); // UNK_0xda1f @ 9 =
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    UNK_0xe329(); // UNK_0xe329
    Push2Words("NULL");
  }
  Push(0);
}


// ================================================
// 0xe363: WORD 'UNK_0xe365' codep=0x224c parp=0xe365 params=0 returns=2
// ================================================

void UNK_0xe365() // UNK_0xe365
{
  SET_STR_AS_PARAM("YOUR");
  UNK_0xe2a5(); // UNK_0xe2a5
  SET_STR_AS_PARAM("RACE");
}


// ================================================
// 0xe377: WORD 'UNK_0xe379' codep=0x224c parp=0xe379 params=0 returns=2
// ================================================

void UNK_0xe379() // UNK_0xe379
{
  SET_STR_AS_PARAM("OTHER");
  UNK_0xe2a5(); // UNK_0xe2a5
  SET_STR_AS_PARAM("RACES");
}


// ================================================
// 0xe38d: WORD 'UNK_0xe38f' codep=0x224c parp=0xe38f params=0 returns=2
// ================================================

void UNK_0xe38f() // UNK_0xe38f
{
  SET_STR_AS_PARAM("THE");
  UNK_0xe2a5(); // UNK_0xe2a5
  SET_STR_AS_PARAM("OLD");
  UNK_0xe2a5(); // UNK_0xe2a5
  SET_STR_AS_PARAM("EMPIRE");
}


// ================================================
// 0xe3aa: WORD 'UNK_0xe3ac' codep=0x224c parp=0xe3ac params=0 returns=2
// ================================================

void UNK_0xe3ac() // UNK_0xe3ac
{
  SET_STR_AS_PARAM("THE");
  UNK_0xe2a5(); // UNK_0xe2a5
  SET_STR_AS_PARAM("ANCIENTS");
}


// ================================================
// 0xe3c1: WORD 'UNK_0xe3c3' codep=0x224c parp=0xe3c3 params=2 returns=3
// ================================================

void UNK_0xe3c3() // UNK_0xe3c3
{
  UNK_0xe1e4(); // UNK_0xe1e4
  Push(0);
}


// ================================================
// 0xe3c9: WORD '?S' codep=0x4a4f parp=0xe3d0
// ================================================

void IsS() // ?S
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
  Push(Read16(pp_UNK_0xda1f)); // UNK_0xda1f @
  IsS(); // ?S case
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
    Push(0);
    break;

  }
}

// ================================================
// 0xe41a: WORD 'UNK_0xe41c' codep=0x224c parp=0xe41c
// ================================================

void UNK_0xe41c() // UNK_0xe41c
{
  OVER(); // OVER
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
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
  Store_3(); // !_3
  CTINIT(); // CTINIT
  Push(0);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  Push(Read16(pp_CTCOLOR)); // CTCOLOR @
  StoreCOLOR(); // !COLOR
  Push(pp_UNK_0xdadb); // UNK_0xdadb
  OFF(); // OFF
  CTSCROLL(); // CTSCROLL
  do
  {
    UNK_0xe190(); // UNK_0xe190
    UNK_0xe41c(); // UNK_0xe41c
    UNK_0xe0c6(); // UNK_0xe0c6
    if (Pop() != 0)
    {
      UNK_0xe068(); // UNK_0xe068
    }
    UNK_0xe2a5(); // UNK_0xe2a5
    Push(1);
    Push(pp_CTX); // CTX
    _plus__ex__2(); // +!_2
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe480: WORD 'UNK_0xe482' codep=0x224c parp=0xe482 params=0 returns=0
// ================================================

void UNK_0xe482() // UNK_0xe482
{
  Push(pp_UNK_0xda05); // UNK_0xda05
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  UNK_0xe12a(); // UNK_0xe12a
  UNK_0xdb84(); // UNK_0xdb84
  Push((Read16(0x63ef+UNK_0xd957.offset)&0xFF) + 1); // UNK_0xd957<IFIELD> C@ 1+
  Push(0x63ef+UNK_0xd957.offset); // UNK_0xd957<IFIELD>
  C_ex_(); // C!
  IOPEN(); // IOPEN
  Push((0x63ef+UNK_0xd936.offset) + 1); // UNK_0xd936<IFIELD> 1+
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
  DrawTTY(); // .TTY
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
  Push(5);
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
  Push(Read16(pp_UNK_0xda43)); // UNK_0xda43 @
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
  Push(Read16(pp_UNK_0xda13)); // UNK_0xda13 @
  OVER(); // OVER
  Push(Read16(Pop())); //  @
  Push(Pop() | Pop()); // OR
  SWAP(); // SWAP
  Store_3(); // !_3
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
  Push(Read16(pp_UNK_0xda23)&0xFF); // UNK_0xda23 C@
  _slash_(); // /
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe560: WORD 'UNK_0xe562' codep=0x224c parp=0xe562 params=0 returns=0
// ================================================

void UNK_0xe562() // UNK_0xe562
{
  Push(Read16(cc_UNK_0xdad3)); // UNK_0xdad3
  if (Pop() == 0) return;
  UNK_0xdbc9(); // UNK_0xdbc9
  Push(Read16(pp_UNK_0xda23)&0xFF); // UNK_0xda23 C@
  _slash_(); // /
  Push(Pop() >> 1); //  2/
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
  Push(Read16(0x63ef+UNK_0xd970.offset)&0xFF); // UNK_0xd970<IFIELD> C@
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
  Store_3(); // !_3
}


// ================================================
// 0xe59e: WORD 'UNK_0xe5a0' codep=0x224c parp=0xe5a0 params=1 returns=0
// ================================================

void UNK_0xe5a0() // UNK_0xe5a0
{
  Push(pp_UNK_0xda69); // UNK_0xda69
  Store_3(); // !_3
}


// ================================================
// 0xe5a6: WORD 'UNK_0xe5a8' codep=0x224c parp=0xe5a8
// ================================================

void UNK_0xe5a8() // UNK_0xe5a8
{
  Push(3);
  Push(2);
  UNK_0xe58c(); // UNK_0xe58c
}


// ================================================
// 0xe5b0: WORD 'UNK_0xe5b2' codep=0x224c parp=0xe5b2
// ================================================

void UNK_0xe5b2() // UNK_0xe5b2
{
  Push(2);
  Push(1);
  UNK_0xe58c(); // UNK_0xe58c
}


// ================================================
// 0xe5ba: WORD 'UNK_0xe5bc' codep=0x224c parp=0xe5bc
// ================================================

void UNK_0xe5bc() // UNK_0xe5bc
{
  Push(5);
  Push(2);
  UNK_0xe58c(); // UNK_0xe58c
}


// ================================================
// 0xe5c4: WORD 'UNK_0xe5c6' codep=0x224c parp=0xe5c6
// ================================================

void UNK_0xe5c6() // UNK_0xe5c6
{
  Push(1);
  Push(1);
  UNK_0xe58c(); // UNK_0xe58c
}


// ================================================
// 0xe5ce: WORD 'UNK_0xe5d0' codep=0x224c parp=0xe5d0
// ================================================

void UNK_0xe5d0() // UNK_0xe5d0
{
  Push(1);
  Push(2);
  UNK_0xe58c(); // UNK_0xe58c
}


// ================================================
// 0xe5d8: WORD 'UNK_0xe5da' codep=0x224c parp=0xe5da params=0 returns=0
// ================================================

void UNK_0xe5da() // UNK_0xe5da
{
  Push(0x0046);
  UNK_0xe5a0(); // UNK_0xe5a0
}


// ================================================
// 0xe5e2: WORD 'UNK_0xe5e4' codep=0x224c parp=0xe5e4 params=0 returns=0
// ================================================

void UNK_0xe5e4() // UNK_0xe5e4
{
  Push(0x0064);
  UNK_0xe5a0(); // UNK_0xe5a0
}


// ================================================
// 0xe5ec: WORD 'UNK_0xe5ee' codep=0x224c parp=0xe5ee params=0 returns=0
// ================================================

void UNK_0xe5ee() // UNK_0xe5ee
{
  Push(pp_UNK_0xda69); // UNK_0xda69
  OFF(); // OFF
}


// ================================================
// 0xe5f4: WORD 'UNK_0xe5f6' codep=0x224c parp=0xe5f6 params=0 returns=0
// ================================================

void UNK_0xe5f6() // UNK_0xe5f6
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("CAPTAIN,");
  DrawTTY(); // .TTY
}


// ================================================
// 0xe607: WORD 'UNK_0xe609' codep=0x224c parp=0xe609 params=0 returns=0
// ================================================

void UNK_0xe609() // UNK_0xe609
{
  SET_STR_AS_PARAM("THEY'VE ");
  DrawTTY(); // .TTY
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
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
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
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
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
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
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
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
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
  DrawTTY(); // .TTY
}


// ================================================
// 0xe68e: WORD 'UNK_0xe690' codep=0x224c parp=0xe690
// ================================================

void UNK_0xe690() // UNK_0xe690
{
  Push(Read16(pp__i__plus_VESS)); // '+VESS @
  MODULE(); // MODULE
  Push(0xda75); // probable 'UNK_0xda75'
  OFF(); // OFF
  UNK_0xe5f6(); // UNK_0xe5f6
  Push(0x0f9f); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  DrawTTY(); // .TTY
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
  DrawTTY(); // .TTY
}


// ================================================
// 0xe6c0: WORD 'UNK_0xe6c2' codep=0x224c parp=0xe6c2
// ================================================

void UNK_0xe6c2() // UNK_0xe6c2
{
  Push(pp_TERMINA); // TERMINA
  OFF(); // OFF
  CTERASE(); // CTERASE
  Push(1);
  UNK_0xe4b6(); // UNK_0xe4b6
  Push(1);
  Push(pp_UNK_0xda43); // UNK_0xda43
  _plus__ex__2(); // +!_2
  UNK_0xdd69(); // UNK_0xdd69
  UNK_0xdd47(); // UNK_0xdd47
  Push(2);
  Push(pp_UNK_0xda0b); // UNK_0xda0b
  Store_3(); // !_3
  UNK_0xdec7(); // UNK_0xdec7
  Push(Read16(pp_UNK_0xe4b2)); // UNK_0xe4b2 @
  if (Pop() != 0)
  {
    Push(5);
    Push(0);
    DrawABTN(); // .ABTN
  }
  UNK_0xe4fa(); // UNK_0xe4fa
}


// ================================================
// 0xe6f0: WORD 'UNK_0xe6f2' codep=0x224c parp=0xe6f2
// ================================================

void UNK_0xe6f2() // UNK_0xe6f2
{
  Push(pp_TERMINA); // TERMINA
  OFF(); // OFF
  Push(2);
  UNK_0xe4b6(); // UNK_0xe4b6
  Push(1);
  Push(pp_UNK_0xda2b); // UNK_0xda2b
  _plus__ex__2(); // +!_2
  UNK_0xdd47(); // UNK_0xdd47
}


// ================================================
// 0xe704: WORD 'UNK_0xe706' codep=0x224c parp=0xe706
// ================================================

void UNK_0xe706() // UNK_0xe706
{
  Push(Read16(pp_UNK_0xda1f)); // UNK_0xda1f @
  UNK_0xe4b6(); // UNK_0xe4b6
  Push(1);
  Push(pp_UNK_0xda2b); // UNK_0xda2b
  _plus__ex__2(); // +!_2
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
  Push(1);
  Push(pp_UNK_0xda2b); // UNK_0xda2b
  _plus__ex__2(); // +!_2
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
  Push(1);
  Push(pp_UNK_0xda2b); // UNK_0xda2b
  _plus__ex__2(); // +!_2
  UNK_0xdd69(); // UNK_0xdd69
  UNK_0xdd47(); // UNK_0xdd47
  Push(0xda55); // probable 'UNK_0xda55'
  ON_3(); // ON_3
  Push(0x000a);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  Push(1);
  Push(pp_UNK_0xda43); // UNK_0xda43
  Store_3(); // !_3
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xe760: WORD 'UNK_0xe762' codep=0x224c parp=0xe762
// ================================================

void UNK_0xe762() // UNK_0xe762
{
  Push(6);
  UNK_0xe4b6(); // UNK_0xe4b6
  UNK_0xdd69(); // UNK_0xdd69
  UNK_0xdd47(); // UNK_0xdd47
  Push(1);
  Push(pp_UNK_0xda43); // UNK_0xda43
  _plus__ex__2(); // +!_2
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
// 0xe77e: WORD 'UNK_0xe780' codep=0x224c parp=0xe780 params=0 returns=0
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
// 0xe7bc: WORD 'UNK_0xe7be' codep=0x224c parp=0xe7be
// ================================================

void UNK_0xe7be() // UNK_0xe7be
{
  Push(Read16(pp_UNK_0xda71)); // UNK_0xda71 @
  _ro__ask_RACE_rc_(); // (?RACE) case
}


// ================================================
// 0xe7c6: WORD 'UNK_0xe7c8' codep=0x224c parp=0xe7c8 params=0 returns=1
// ================================================

void UNK_0xe7c8() // UNK_0xe7c8
{
  Push(1);
  UNK_0xdcd7(); // UNK_0xdcd7
}


// ================================================
// 0xe7ce: WORD 'UNK_0xe7d0' codep=0x224c parp=0xe7d0 params=0 returns=1
// ================================================

void UNK_0xe7d0() // UNK_0xe7d0
{
  Push(2);
  UNK_0xdcd7(); // UNK_0xdcd7
}


// ================================================
// 0xe7d6: WORD 'UNK_0xe7d8' codep=0x224c parp=0xe7d8 params=0 returns=1
// ================================================

void UNK_0xe7d8() // UNK_0xe7d8
{
  Push(4);
  UNK_0xdcd7(); // UNK_0xdcd7
}


// ================================================
// 0xe7de: WORD 'UNK_0xe7e0' codep=0x224c parp=0xe7e0 params=0 returns=1
// ================================================

void UNK_0xe7e0() // UNK_0xe7e0
{
  Push(8);
  UNK_0xdcd7(); // UNK_0xdcd7
}


// ================================================
// 0xe7e6: WORD 'UNK_0xe7e8' codep=0x224c parp=0xe7e8 params=0 returns=1
// ================================================

void UNK_0xe7e8() // UNK_0xe7e8
{
  Push(0x0010);
  UNK_0xdcd7(); // UNK_0xdcd7
}


// ================================================
// 0xe7f0: WORD 'UNK_0xe7f2' codep=0x224c parp=0xe7f2 params=0 returns=1
// ================================================

void UNK_0xe7f2() // UNK_0xe7f2
{
  Push(!(Read16(pp_UNK_0xda69)==0?1:0)); // UNK_0xda69 @ 0= NOT
}


// ================================================
// 0xe7fc: WORD 'UNK_0xe7fe' codep=0x224c parp=0xe7fe params=0 returns=1
// ================================================

void UNK_0xe7fe() // UNK_0xe7fe
{
  Push(Read16(pp_UNK_0xda2b)); // UNK_0xda2b @
  Push(Read16(pp_UNK_0xda47)); // UNK_0xda47 @
  _st_(); // <
  Push(!Pop()); //  NOT
}


// ================================================
// 0xe80c: WORD 'UNK_0xe80e' codep=0x224c parp=0xe80e params=0 returns=1
// ================================================

void UNK_0xe80e() // UNK_0xe80e
{
  Push(0);
  Push(0x05dc);
  RRND(); // RRND
  Push((Pop()==0?1:0) | (Read16(pp_UNK_0xda59)==2?1:0)); //  0= UNK_0xda59 @ 2 = OR
  Push(Read16(pp__n_VESS)); // #VESS @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(Read16(pp_AVCNT)); // AVCNT @
  Push(0x0014);
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe838: WORD 'UNK_0xe83a' codep=0x224c parp=0xe83a params=0 returns=1
// ================================================

void UNK_0xe83a() // UNK_0xe83a
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
// 0xe84e: WORD 'UNK_0xe850' codep=0x224c parp=0xe850 params=0 returns=2
// ================================================

void UNK_0xe850() // UNK_0xe850
{
  Push(0);
  Push(0x0032);
  Push(Read16(pp__n_VESS) * 2 + 1); // #VESS @ 2* 1+
  _slash_(); // /
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
}


// ================================================
// 0xe866: WORD 'UNK_0xe868' codep=0x224c parp=0xe868 params=0 returns=1
// ================================================

void UNK_0xe868() // UNK_0xe868
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(Read16(pp_UNK_0xda69)); // UNK_0xda69 @
  _st_(); // <
  Push(0);
  Push(4);
  RRND(); // RRND
  UNK_0xdb0c(); // UNK_0xdb0c
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  Get_gt_C_plus_S(); // @>C+S
  IsCHILD(); // ?CHILD
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
  UNK_0xe7c8(); // UNK_0xe7c8
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
// 0xe8b4: WORD 'UNK_0xe8b6' codep=0x224c parp=0xe8b6 params=0 returns=1
// ================================================

void UNK_0xe8b6() // UNK_0xe8b6
{
  Push(Read16(pp_UNK_0xda43)); // UNK_0xda43 @
  Push(3);
  _st_(); // <
}


// ================================================
// 0xe8c0: WORD 'UNK_0xe8c2' codep=0x224c parp=0xe8c2 params=0 returns=1
// ================================================

void UNK_0xe8c2() // UNK_0xe8c2
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+UNK_0xd9ca.offset)); // UNK_0xd9ca<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8ce: WORD 'UNK_0xe8d0' codep=0x224c parp=0xe8d0 params=1 returns=0
// ================================================

void UNK_0xe8d0() // UNK_0xe8d0
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+UNK_0xd9ca.offset); // UNK_0xd9ca<IFIELD>
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8dc: WORD 'UNK_0xe8de' codep=0x224c parp=0xe8de params=0 returns=1
// ================================================

void UNK_0xe8de() // UNK_0xe8de
{
  UNK_0xe8c2(); // UNK_0xe8c2
  Push(Pop() & 8); //  8 AND
  _0_gt_(); // 0>
}


// ================================================
// 0xe8e8: WORD 'UNK_0xe8ea' codep=0x224c parp=0xe8ea params=0 returns=1
// ================================================

void UNK_0xe8ea() // UNK_0xe8ea
{
  UNK_0xe8c2(); // UNK_0xe8c2
  Push(Read16(regsp)); // DUP
  Push(!((Pop() & 0x0010)==0?1:0)); //  0x0010 AND 0= NOT
  SWAP(); // SWAP
  Push(Pop() & 0xffef); //  0xffef AND
  UNK_0xe8d0(); // UNK_0xe8d0
}


// ================================================
// 0xe904: WORD 'UNK_0xe906' codep=0x224c parp=0xe906 params=0 returns=1
// ================================================

void UNK_0xe906() // UNK_0xe906
{
  UNK_0xe8c2(); // UNK_0xe8c2
  Push(Pop() & 3); //  3 AND
  _0_gt_(); // 0>
}


// ================================================
// 0xe910: WORD 'UNK_0xe912' codep=0x224c parp=0xe912 params=0 returns=1
// ================================================

void UNK_0xe912() // UNK_0xe912
{
  UNK_0xe8c2(); // UNK_0xe8c2
  Push(Read16(regsp)); // DUP
  Push(!((Pop() & 0x0020)==0?1:0)); //  0x0020 AND 0= NOT
  SWAP(); // SWAP
  Push(Pop() & 0xffdf); //  0xffdf AND
  UNK_0xe8d0(); // UNK_0xe8d0
}


// ================================================
// 0xe92c: WORD 'UNK_0xe92e' codep=0x224c parp=0xe92e params=0 returns=1
// ================================================

void UNK_0xe92e() // UNK_0xe92e
{
  Push(Read16(pp_UNK_0xda0b)==1?1:0); // UNK_0xda0b @ 1 =
}


// ================================================
// 0xe938: WORD 'UNK_0xe93a' codep=0x224c parp=0xe93a params=0 returns=1
// ================================================

void UNK_0xe93a() // UNK_0xe93a
{
  Push(Read16(pp_UNK_0xda0b)==2?1:0); // UNK_0xda0b @ 2 =
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
// 0xe960: WORD 'UNK_0xe962' codep=0x224c parp=0xe962 params=0 returns=1
// ================================================

void UNK_0xe962() // UNK_0xe962
{
  Push((Read16(pp_UNK_0xda1b)&0xFF)==0x000d?1:0); // UNK_0xda1b C@ 0x000d =
}


// ================================================
// 0xe96e: WORD 'UNK_0xe970' codep=0x224c parp=0xe970 params=0 returns=1
// ================================================

void UNK_0xe970() // UNK_0xe970
{
  Push(!(Read16(pp_UNK_0xda1f)==0?1:0)); // UNK_0xda1f @ 0= NOT
}


// ================================================
// 0xe97a: WORD 'UNK_0xe97c' codep=0x224c parp=0xe97c params=0 returns=1
// ================================================

void UNK_0xe97c() // UNK_0xe97c
{
  Push((Read16(pp_UNK_0xda13) & Read16(pp_UNK_0xda17))==0?1:0); // UNK_0xda13 @ UNK_0xda17 @ AND 0=
}


// ================================================
// 0xe98a: WORD 'UNK_0xe98c' codep=0x224c parp=0xe98c params=0 returns=1
// ================================================

void UNK_0xe98c() // UNK_0xe98c
{
  Push(Read16(pp__n_VESS)); // #VESS @
  Push(3);
  _st_(); // <
}


// ================================================
// 0xe996: WORD 'UNK_0xe998' codep=0x224c parp=0xe998 params=0 returns=1
// ================================================

void UNK_0xe998() // UNK_0xe998
{
  Push(Read16(pp_UNK_0xda23)&0xFF); // UNK_0xda23 C@
  _0_gt_(); // 0>
  Push(Read16(pp_UNK_0xda2b)&0xFF); // UNK_0xda2b C@
  _0_gt_(); // 0>
  Push(Pop() | Pop()); // OR
  Push(Read16(pp_TERMINA)); // TERMINA @
  UNK_0xdb0c(); // UNK_0xdb0c
  Push(Pop() & Read16(pp_UNK_0xe4b2)); //  UNK_0xe4b2 @ AND
}


// ================================================
// 0xe9b4: WORD 'UNK_0xe9b6' codep=0x224c parp=0xe9b6 params=0 returns=1
// ================================================

void UNK_0xe9b6() // UNK_0xe9b6
{
  Push(Read16(pp_TERMINA)); // TERMINA @
  UNK_0xe7e8(); // UNK_0xe7e8
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe9c0: WORD 'UNK_0xe9c2' codep=0x224c parp=0xe9c2 params=0 returns=1
// ================================================

void UNK_0xe9c2() // UNK_0xe9c2
{
  Push(Read16(pp_UNK_0xda71)==6?1:0); // UNK_0xda71 @ 6 =
}


// ================================================
// 0xe9cc: WORD 'UNK_0xe9ce' codep=0x224c parp=0xe9ce
// ================================================

void UNK_0xe9ce() // UNK_0xe9ce
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(Read16(pp_UNK_0xda71)==3?1:0); // UNK_0xda71 @ 3 =
  if (Pop() != 0)
  {
    Push(0x0046);
  } else
  {
    Push(0x001e);
  }
  _st_(); // <
  Push(Pop() + 0x000d); //  0x000d +
  UNK_0xdba8(); // UNK_0xdba8
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  UNK_0xde6d(); // UNK_0xde6d
  Push(!(Read16(pp_UNK_0xda3f)==0x000e?1:0)); // UNK_0xda3f @ 0x000e = NOT
}


// ================================================
// 0xea0a: WORD 'UNK_0xea0c' codep=0x224c parp=0xea0c params=0 returns=1
// ================================================

void UNK_0xea0c() // UNK_0xea0c
{
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+UNK_0xd975.offset)&0xFF); // UNK_0xd975<IFIELD> C@
  ICLOSE(); // ICLOSE
  Push(Pop() & (Read16(pp_UNK_0xda59)==1?1:0)); //  UNK_0xda59 @ 1 = AND
}


// ================================================
// 0xea22: WORD 'UNK_0xea24' codep=0x224c parp=0xea24 params=0 returns=1
// ================================================

void UNK_0xea24() // UNK_0xea24
{
  UNK_0xe998(); // UNK_0xe998
  UNK_0xea0c(); // UNK_0xea0c
  Push(Pop() & Pop()); // AND
  UNK_0xe7c8(); // UNK_0xe7c8
  Push(Pop() & Pop()); // AND
  Push(Pop() | Read16(cc_UNK_0xda6d)); //  UNK_0xda6d OR
}


// ================================================
// 0xea34: WORD 'UNK_0xea36' codep=0x224c parp=0xea36 params=0 returns=1
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

void _st_EDL_gt_() // <EDL> rule
{
  int b;

  b = 1;
  UNK_0xe8ea(); // UNK_0xe8ea
  b = b && Pop();
  UNK_0xe8de(); // UNK_0xe8de
  b = b && Pop();
  if (b)
  {
    UNK_0xe4d4(); // UNK_0xe4d4
  }

  b = 1;
  UNK_0xe8ea(); // UNK_0xe8ea
  b = b && Pop();
  UNK_0xe8de(); // UNK_0xe8de
  b = b && !Pop();
  if (b)
  {
    UNK_0xe4dc(); // UNK_0xe4dc
  }

  b = 1;
  UNK_0xe912(); // UNK_0xe912
  b = b && Pop();
  UNK_0xe906(); // UNK_0xe906
  b = b && Pop();
  if (b)
  {
    UNK_0xe4e6(); // UNK_0xe4e6
  }

  b = 1;
  UNK_0xe912(); // UNK_0xe912
  b = b && Pop();
  UNK_0xe906(); // UNK_0xe906
  b = b && !Pop();
  if (b)
  {
    UNK_0xe4f0(); // UNK_0xe4f0
  }

  b = 1;
  UNK_0xe92e(); // UNK_0xe92e
  b = b && Pop();
  UNK_0xe97c(); // UNK_0xe97c
  b = b && Pop();
  if (b)
  {
    UNK_0xe52e(); // UNK_0xe52e
  }

  b = 1;
  UNK_0xe962(); // UNK_0xe962
  b = b && Pop();
  if (b)
  {
    UNK_0xe554(); // UNK_0xe554
  }

  b = 1;
  UNK_0xe970(); // UNK_0xe970
  b = b && Pop();
  Push(Read16(cc_UNK_0xdad3)); // UNK_0xdad3
  b = b && Pop();
  if (b)
  {
    UNK_0xe562(); // UNK_0xe562
  }

  b = 1;
  Push(Read16(cc_UNK_0xda0f)); // UNK_0xda0f
  b = b && Pop();
  if (b)
  {
    UNK_0xe546(); // UNK_0xe546
  }

  b = 1;
  Push(Read16(cc_IsFIRED_dash_)); // ?FIRED-
  b = b && Pop();
  UNK_0xe998(); // UNK_0xe998
  b = b && !Pop();
  if (b)
  {
    UNK_0xe514(); // UNK_0xe514
  }
}

// 0xea5d: db 0x45 0x44 'ED'
// 0xea77: db 0x38 0x2f '8/'
// 0xea85: db 0x52 'R'

// ================================================
// 0xeab1: WORD '<TALK>' codep=0xb869 parp=0xeabc
// ================================================

void _st_TALK_gt_() // <TALK> rule
{
  int b;

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && !Pop();
  UNK_0xe9b6(); // UNK_0xe9b6
  b = b && !Pop();
  UNK_0xe7d0(); // UNK_0xe7d0
  b = b && Pop();
  UNK_0xe92e(); // UNK_0xe92e
  b = b && !Pop();
  if (b)
  {
    UNK_0xe5a8(); // UNK_0xe5a8
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && !Pop();
  UNK_0xe9b6(); // UNK_0xe9b6
  b = b && !Pop();
  UNK_0xe7d0(); // UNK_0xe7d0
  b = b && Pop();
  UNK_0xe92e(); // UNK_0xe92e
  b = b && Pop();
  if (b)
  {
    UNK_0xe5b2(); // UNK_0xe5b2
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && !Pop();
  UNK_0xe9b6(); // UNK_0xe9b6
  b = b && !Pop();
  UNK_0xe7d8(); // UNK_0xe7d8
  b = b && Pop();
  UNK_0xe92e(); // UNK_0xe92e
  b = b && !Pop();
  if (b)
  {
    UNK_0xe5c6(); // UNK_0xe5c6
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && !Pop();
  UNK_0xe9b6(); // UNK_0xe9b6
  b = b && !Pop();
  UNK_0xe7d8(); // UNK_0xe7d8
  b = b && Pop();
  UNK_0xe92e(); // UNK_0xe92e
  b = b && Pop();
  if (b)
  {
    UNK_0xe5a8(); // UNK_0xe5a8
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && !Pop();
  UNK_0xe9b6(); // UNK_0xe9b6
  b = b && !Pop();
  UNK_0xe7e0(); // UNK_0xe7e0
  b = b && Pop();
  UNK_0xe92e(); // UNK_0xe92e
  b = b && !Pop();
  if (b)
  {
    UNK_0xe5d0(); // UNK_0xe5d0
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && !Pop();
  UNK_0xe9b6(); // UNK_0xe9b6
  b = b && !Pop();
  UNK_0xe7e0(); // UNK_0xe7e0
  b = b && Pop();
  UNK_0xe92e(); // UNK_0xe92e
  b = b && Pop();
  if (b)
  {
    UNK_0xe5c6(); // UNK_0xe5c6
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && !Pop();
  UNK_0xe9b6(); // UNK_0xe9b6
  b = b && !Pop();
  UNK_0xe7e8(); // UNK_0xe7e8
  b = b && Pop();
  if (b)
  {
    UNK_0xe5ee(); // UNK_0xe5ee
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && !Pop();
  UNK_0xe9b6(); // UNK_0xe9b6
  b = b && !Pop();
  UNK_0xe7c8(); // UNK_0xe7c8
  b = b && Pop();
  UNK_0xe92e(); // UNK_0xe92e
  b = b && !Pop();
  if (b)
  {
    UNK_0xe5b2(); // UNK_0xe5b2
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && !Pop();
  UNK_0xe9b6(); // UNK_0xe9b6
  b = b && !Pop();
  UNK_0xe7c8(); // UNK_0xe7c8
  b = b && Pop();
  UNK_0xe92e(); // UNK_0xe92e
  b = b && Pop();
  if (b)
  {
    UNK_0xe5bc(); // UNK_0xe5bc
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && Pop();
  UNK_0xea0c(); // UNK_0xea0c
  b = b && Pop();
  UNK_0xe7fe(); // UNK_0xe7fe
  b = b && !Pop();
  if (b)
  {
    UNK_0xe5da(); // UNK_0xe5da
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && Pop();
  UNK_0xe7c8(); // UNK_0xe7c8
  b = b && !Pop();
  UNK_0xe7fe(); // UNK_0xe7fe
  b = b && !Pop();
  if (b)
  {
    UNK_0xe5da(); // UNK_0xe5da
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && Pop();
  UNK_0xe7fe(); // UNK_0xe7fe
  b = b && Pop();
  if (b)
  {
    UNK_0xe5ee(); // UNK_0xe5ee
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && !Pop();
  UNK_0xe9b6(); // UNK_0xe9b6
  b = b && Pop();
  UNK_0xe7c8(); // UNK_0xe7c8
  b = b && !Pop();
  if (b)
  {
    UNK_0xe5ee(); // UNK_0xe5ee
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && !Pop();
  UNK_0xe9b6(); // UNK_0xe9b6
  b = b && Pop();
  UNK_0xea0c(); // UNK_0xea0c
  b = b && !Pop();
  if (b)
  {
    UNK_0xe5ee(); // UNK_0xe5ee
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && !Pop();
  UNK_0xe9b6(); // UNK_0xe9b6
  b = b && Pop();
  UNK_0xe7c8(); // UNK_0xe7c8
  b = b && Pop();
  UNK_0xea0c(); // UNK_0xea0c
  b = b && Pop();
  Push(Read16(cc_UNK_0xda6d)); // UNK_0xda6d
  b = b && !Pop();
  if (b)
  {
    UNK_0xe5e4(); // UNK_0xe5e4
  }
}

// 0xeadd: db 0x20 0x20 '  '
// 0xeaf5: db 0x49 0x4e 'IN'
// 0xeb02: db 0x4e 'N'

// ================================================
// 0xeb66: WORD '<AUX>' codep=0xb869 parp=0xeb70
// ================================================

void _st_AUX_gt_() // <AUX> rule
{
  int b;

  b = 1;
  Push(Read16(cc_UNK_0xda37)); // UNK_0xda37
  b = b && Pop();
  Push(Read16(cc_IsA_dash_SHIE)); // ?A-SHIE
  b = b && !Pop();
  UNK_0xe7d0(); // UNK_0xe7d0
  b = b && !Pop();
  UNK_0xea24(); // UNK_0xea24
  b = b && !Pop();
  UNK_0xe9c2(); // UNK_0xe9c2
  b = b && !Pop();
  if (b)
  {
    UNK_0xe61a(); // UNK_0xe61a
  }

  b = 1;
  Push(Read16(cc_IsA_dash_SHIE)); // ?A-SHIE
  b = b && Pop();
  UNK_0xe7d0(); // UNK_0xe7d0
  b = b && Pop();
  if (b)
  {
    UNK_0xe632(); // UNK_0xe632
  }

  b = 1;
  Push(Read16(cc_IsA_dash_SHIE)); // ?A-SHIE
  b = b && Pop();
  UNK_0xea24(); // UNK_0xea24
  b = b && Pop();
  if (b)
  {
    UNK_0xe632(); // UNK_0xe632
  }

  b = 1;
  Push(Read16(cc_UNK_0xda3b)); // UNK_0xda3b
  b = b && Pop();
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  b = b && !Pop();
  UNK_0xe7d0(); // UNK_0xe7d0
  b = b && !Pop();
  UNK_0xe7d8(); // UNK_0xe7d8
  b = b && !Pop();
  UNK_0xe7c8(); // UNK_0xe7c8
  b = b && !Pop();
  UNK_0xea24(); // UNK_0xea24
  b = b && !Pop();
  if (b)
  {
    UNK_0xe64a(); // UNK_0xe64a
  }

  b = 1;
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  b = b && Pop();
  UNK_0xe7e0(); // UNK_0xe7e0
  b = b && !Pop();
  UNK_0xe7e8(); // UNK_0xe7e8
  b = b && !Pop();
  UNK_0xe7c8(); // UNK_0xe7c8
  b = b && !Pop();
  if (b)
  {
    UNK_0xe662(); // UNK_0xe662
  }

  b = 1;
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  b = b && Pop();
  UNK_0xea24(); // UNK_0xea24
  b = b && Pop();
  if (b)
  {
    UNK_0xe662(); // UNK_0xe662
  }

  b = 1;
  UNK_0xe80e(); // UNK_0xe80e
  b = b && Pop();
  Push(Read16(cc_UNK_0xda75)); // UNK_0xda75
  b = b && !Pop();
  UNK_0xe7be(); // UNK_0xe7be
  b = b && Pop();
  UNK_0xe98c(); // UNK_0xe98c
  b = b && Pop();
  UNK_0xe7d0(); // UNK_0xe7d0
  b = b && !Pop();
  UNK_0xe7d8(); // UNK_0xe7d8
  b = b && !Pop();
  UNK_0xea24(); // UNK_0xea24
  b = b && !Pop();
  if (b)
  {
    UNK_0xe67a(); // UNK_0xe67a
  }

  b = 1;
  Push(Read16(cc_UNK_0xda75)); // UNK_0xda75
  b = b && Pop();
  UNK_0xe850(); // UNK_0xe850
  b = b && Pop();
  if (b)
  {
    UNK_0xe690(); // UNK_0xe690
  }

  b = 1;
  UNK_0xe954(); // UNK_0xe954
  b = b && Pop();
  UNK_0xe7be(); // UNK_0xe7be
  b = b && Pop();
  UNK_0xe83a(); // UNK_0xe83a
  b = b && Pop();
  Push(Read16(cc_UNK_0xda79)); // UNK_0xda79
  b = b && !Pop();
  if (b)
  {
    UNK_0xe6ac(); // UNK_0xe6ac
  }

  b = 1;
  Push(Read16(cc_UNK_0xda6d)); // UNK_0xda6d
  b = b && !Pop();
  UNK_0xea24(); // UNK_0xea24
  b = b && Pop();
  if (b)
  {
    UNK_0xe780(); // UNK_0xe780
  }
}

// 0xeb87: db 0x58 0x49 'XI'
// 0xebb1: db 0x45 0x54 'ET'
// 0xebc7: db 0xf3 ' '

// ================================================
// 0xec0a: WORD '<COMM>' codep=0xb869 parp=0xec15
// ================================================

void _st_COMM_gt_() // <COMM> rule
{
  int b;

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && !Pop();
  UNK_0xe92e(); // UNK_0xe92e
  b = b && !Pop();
  UNK_0xe954(); // UNK_0xe954
  b = b && Pop();
  UNK_0xe868(); // UNK_0xe868
  b = b && Pop();
  UNK_0xe93a(); // UNK_0xe93a
  b = b && !Pop();
  Push(Read16(cc_UNK_0xda6d)); // UNK_0xda6d
  b = b && !Pop();
  UNK_0xea36(); // UNK_0xea36
  b = b && !Pop();
  if (b)
  {
    UNK_0xe6c2(); // UNK_0xe6c2
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && !Pop();
  UNK_0xe93a(); // UNK_0xe93a
  b = b && Pop();
  UNK_0xe954(); // UNK_0xe954
  b = b && Pop();
  UNK_0xe868(); // UNK_0xe868
  b = b && Pop();
  UNK_0xe946(); // UNK_0xe946
  b = b && Pop();
  UNK_0xe8b6(); // UNK_0xe8b6
  b = b && Pop();
  Push(Read16(cc_UNK_0xda6d)); // UNK_0xda6d
  b = b && !Pop();
  UNK_0xea36(); // UNK_0xea36
  b = b && !Pop();
  if (b)
  {
    UNK_0xe6c2(); // UNK_0xe6c2
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && !Pop();
  UNK_0xe92e(); // UNK_0xe92e
  b = b && Pop();
  UNK_0xe954(); // UNK_0xe954
  b = b && Pop();
  UNK_0xe868(); // UNK_0xe868
  b = b && Pop();
  Push(Read16(cc_UNK_0xda6d)); // UNK_0xda6d
  b = b && !Pop();
  UNK_0xea36(); // UNK_0xea36
  b = b && !Pop();
  if (b)
  {
    UNK_0xe6f2(); // UNK_0xe6f2
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && Pop();
  UNK_0xe954(); // UNK_0xe954
  b = b && Pop();
  UNK_0xe970(); // UNK_0xe970
  b = b && !Pop();
  UNK_0xe868(); // UNK_0xe868
  b = b && Pop();
  UNK_0xe9ce(); // UNK_0xe9ce
  b = b && Pop();
  Push(Read16(cc_UNK_0xda55)); // UNK_0xda55
  b = b && !Pop();
  UNK_0xe7fe(); // UNK_0xe7fe
  b = b && !Pop();
  if (b)
  {
    UNK_0xe71c(); // UNK_0xe71c
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && Pop();
  UNK_0xe954(); // UNK_0xe954
  b = b && Pop();
  UNK_0xe970(); // UNK_0xe970
  b = b && !Pop();
  UNK_0xe868(); // UNK_0xe868
  b = b && Pop();
  UNK_0xe9ce(); // UNK_0xe9ce
  b = b && !Pop();
  Push(Read16(cc_UNK_0xda55)); // UNK_0xda55
  b = b && !Pop();
  UNK_0xe7fe(); // UNK_0xe7fe
  b = b && !Pop();
  if (b)
  {
    UNK_0xe72e(); // UNK_0xe72e
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && Pop();
  Push(Read16(cc_UNK_0xda55)); // UNK_0xda55
  b = b && Pop();
  UNK_0xe954(); // UNK_0xe954
  b = b && Pop();
  UNK_0xe946(); // UNK_0xe946
  b = b && Pop();
  UNK_0xe8b6(); // UNK_0xe8b6
  b = b && Pop();
  if (b)
  {
    UNK_0xe762(); // UNK_0xe762
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && Pop();
  UNK_0xe970(); // UNK_0xe970
  b = b && Pop();
  UNK_0xe954(); // UNK_0xe954
  b = b && Pop();
  UNK_0xe7fe(); // UNK_0xe7fe
  b = b && !Pop();
  if (b)
  {
    UNK_0xe706(); // UNK_0xe706
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && Pop();
  UNK_0xe7fe(); // UNK_0xe7fe
  b = b && Pop();
  UNK_0xe954(); // UNK_0xe954
  b = b && Pop();
  Push(Read16(cc_UNK_0xda55)); // UNK_0xda55
  b = b && !Pop();
  if (b)
  {
    UNK_0xe774(); // UNK_0xe774
  }

  b = 1;
  UNK_0xe998(); // UNK_0xe998
  b = b && Pop();
  UNK_0xe7f2(); // UNK_0xe7f2
  b = b && !Pop();
  UNK_0xe7fe(); // UNK_0xe7fe
  b = b && !Pop();
  if (b)
  {
    UNK_0xe0f8(); // UNK_0xe0f8
  }
}

// 0xec2a: db 0x4f 0x4d 'OM'
// 0xec48: db 0x29 0x0e ') '
// 0xec58: db 0x9b ' '

// ================================================
// 0xeca7: WORD 'UNK_0xeca9' codep=0x224c parp=0xeca9
// ================================================

void UNK_0xeca9() // UNK_0xeca9
{
  CTINIT(); // CTINIT
  Push(0x1000); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  DrawTTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
}


// ================================================
// 0xecbd: WORD 'UNK_0xecbf' codep=0x224c parp=0xecbf
// ================================================

void UNK_0xecbf() // UNK_0xecbf
{
  GetColor(BLUE);
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  DrawON(); // .ON
  UNK_0xeca9(); // UNK_0xeca9
  UNK_0xdb6a(); // UNK_0xdb6a
  UNK_0xde6d(); // UNK_0xde6d
  UNK_0xe482(); // UNK_0xe482
  Push(!(Read16(pp_UNK_0xda1b)==1?1:0)); // UNK_0xda1b @ 1 = NOT
  Push(pp_UNK_0xda23); // UNK_0xda23
  _plus__ex__2(); // +!_2
  UNK_0xdd47(); // UNK_0xdd47
  GetColor(BLACK);
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  DrawON(); // .ON
}


// ================================================
// 0xece9: WORD 'UNK_0xeceb' codep=0x224c parp=0xeceb params=0 returns=0
// ================================================

void UNK_0xeceb() // UNK_0xeceb
{
  Push(pp__ro_STOP_dash_COMM_rc_); // (STOP-COMM)
  ON_3(); // ON_3
}


// ================================================
// 0xecf1: WORD 'UNK_0xecf3' codep=0x224c parp=0xecf3 params=0 returns=1
// ================================================

void UNK_0xecf3() // UNK_0xecf3
{
  IsTRIG(); // ?TRIG
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(Read16(pp_LKEY)==0x002b?1:0); // LKEY @ 0x002b =
  if (Pop() != 0)
  {
    Push(!Pop()); //  NOT
    Push(0xd4c0); Push(0x0001);
    UNK_0xe1f0(); // UNK_0xe1f0
    return;
  }
  GetColor(BLUE);
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  DrawON(); // .ON
}


// ================================================
// 0xed21: WORD 'UNK_0xed23' codep=0x744d parp=0xed23
// ================================================
IFieldType UNK_0xed23 = {STARSYSTEMIDX, 0x0b, 0x09};

// ================================================
// 0xed26: WORD 'UNK_0xed28' codep=0x224c parp=0xed28 params=1 returns=1
// ================================================

void UNK_0xed28() // UNK_0xed28
{
  if (Pop() != 0)
  {
    Push2Words("*ASYS");
    _gt_C_plus_S(); // >C+S
    Push(Read16(pp_STARDATE)); // STARDATE @
    Push(Read16(0x63ef+UNK_0xed23.offset)); // UNK_0xed23<IFIELD> @
    _st_(); // <
    Push(!Pop()); //  NOT
    Push(Read16(pp_IsWIN)); // ?WIN @
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+UNK_0xed23.offset)); // UNK_0xed23<IFIELD> @
      _gt_(); // >
      Push(Pop() & Pop()); // AND
    }
    ICLOSE(); // ICLOSE
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(0x101a); Push(0x0002);
      UNK_0xd93b(); // UNK_0xd93b
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
// 0xed70: WORD 'UNK_0xed72' codep=0x1d29 parp=0xed72
// ================================================
// 0xed72: db 0x02 0x08 0x01 '   '

// ================================================
// 0xed75: WORD 'UNK_0xed77' codep=0x224c parp=0xed77
// ================================================

void UNK_0xed77() // UNK_0xed77
{
  Push(8);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  UNK_0xdbeb(); // UNK_0xdbeb
  Push(Read16(pp_UNK_0xed72 + Read16(pp_THIS_dash_BU))&0xFF); // UNK_0xed72 THIS-BU @ + C@
  Push(pp_UNK_0xda13); // UNK_0xda13
  Store_3(); // !_3
  Push(5);
  UNK_0xe998(); // UNK_0xe998
  Push(Pop() * 4); //  4 *
  Push(Pop() + Pop()); // +
  DrawBTN_dash_TE(); // .BTN-TE
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
    Push(Read16(cc_UNK_0xdaf3)); // UNK_0xdaf3
    break;
  case 1:
    Push(Read16(cc_UNK_0xdaf7)); // UNK_0xdaf7
    break;
  case 2:
    Push(Read16(cc_UNK_0xdb03)); // UNK_0xdb03
    break;
  case 3:
    Push(Read16(cc_UNK_0xdaff)); // UNK_0xdaff
    break;
  default:
    Push(Read16(cc_UNK_0xdafb)); // UNK_0xdafb
    break;

  }
}

// ================================================
// 0xedba: WORD 'UNK_0xedbc' codep=0x224c parp=0xedbc
// ================================================

void UNK_0xedbc() // UNK_0xedbc
{
  Push(0x000b);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  UNK_0xdbeb(); // UNK_0xdbeb
  Push(0xdad3); // probable 'UNK_0xdad3'
  ON_3(); // ON_3
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  _ro__gt__ask__rc_(); // (>?) case
  Push(pp_UNK_0xda1f); // UNK_0xda1f
  Store_3(); // !_3
  Push(0x000e);
  Push(pp_UNK_0xda1b); // UNK_0xda1b
  Store_3(); // !_3
  UNK_0xecbf(); // UNK_0xecbf
  Push(9);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
}


// ================================================
// 0xede8: WORD 'UNK_0xedea' codep=0x224c parp=0xedea
// ================================================

void UNK_0xedea() // UNK_0xedea
{
  Push(0x000d);
  Push(pp_UNK_0xda1b); // UNK_0xda1b
  Store_3(); // !_3
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
  SET_STR_AS_PARAM("YES.");
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
  SET_STR_AS_PARAM("NO.");
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  CLICK(); // CLICK
}


// ================================================
// 0xee33: WORD 'UNK_0xee35' codep=0x224c parp=0xee35
// ================================================

void UNK_0xee35() // UNK_0xee35
{
  Push(Read16(pp_A_dash_POSTU) * 2); // A-POSTU @ 2*
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
  Push(1);
  Push(pp_UNK_0xda1b); // UNK_0xda1b
  Store_3(); // !_3
  UNK_0xecbf(); // UNK_0xecbf
  Push(1);
  Push(pp_UNK_0xda0b); // UNK_0xda0b
  Store_3(); // !_3
  Push(5);
  DrawBTN_dash_TE(); // .BTN-TE
}


// ================================================
// 0xee7a: WORD 'UNK_0xee7c' codep=0x224c parp=0xee7c
// ================================================

void UNK_0xee7c() // UNK_0xee7c
{
  UNK_0xed77(); // UNK_0xed77
  Push(2);
  Push(pp_UNK_0xda1b); // UNK_0xda1b
  Store_3(); // !_3
  UNK_0xecbf(); // UNK_0xecbf
  Push(0xda0f); // probable 'UNK_0xda0f'
  ON_3(); // ON_3
  Push(pp_UNK_0xda43); // UNK_0xda43
  OFF(); // OFF
}


// ================================================
// 0xee92: WORD 'EDL+AUX' codep=0x224c parp=0xee9e params=0 returns=0
// ================================================
// entry

void EDL_plus_AUX() // EDL+AUX
{
  Push(Read16(pp__n_VESS) | Read16(cc_UNK_0xda75)); // #VESS @ UNK_0xda75 OR
  if (Pop() == 0) return;
  Push(0xeb70); // probable '<AUX>'
  DISTRACT(); // DISTRACT
  _st_AUX_gt_(); // <AUX> rule
  Pop(); // DROP
  Push(0xea48); // probable '<EDL>'
  DISTRACT(); // DISTRACT
  _st_EDL_gt_(); // <EDL> rule
  Pop(); // DROP
}


// ================================================
// 0xeec0: WORD 'COMM-EXPERTS' codep=0x224c parp=0xeed1 params=0 returns=0
// ================================================
// entry

void COMM_dash_EXPERTS() // COMM-EXPERTS
{
  Push(Read16(pp__n_VESS) | Read16(cc_UNK_0xda75)); // #VESS @ UNK_0xda75 OR
  if (Pop() != 0)
  {
    EDL_plus_AUX(); // EDL+AUX
    Push(0xeabc); // probable '<TALK>'
    DISTRACT(); // DISTRACT
    _st_TALK_gt_(); // <TALK> rule
    Pop(); // DROP
    Push(0xec15); // probable '<COMM>'
    DISTRACT(); // DISTRACT
    _st_COMM_gt_(); // <COMM> rule
    Pop(); // DROP
  }
  Push(0xda5d); // probable 'UNK_0xda5d'
  OFF(); // OFF
}


// ================================================
// 0xeefb: WORD 'UNK_0xeefd' codep=0x224c parp=0xeefd params=0 returns=0
// ================================================

void UNK_0xeefd() // UNK_0xeefd
{
  Push(Read16(pp__i_CC)); // 'CC @
  MODULE(); // MODULE
  _gt_MAINVIEW(); // >MAINVIEW
  DARK(); // DARK
  _gt_DISPLAY(); // >DISPLAY
  V_gt_DISPLAY(); // V>DISPLAY
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+UNK_0xd97f.offset)&0xFF); // UNK_0xd97f<IFIELD> C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(4);
    Push(0x00bf);
    POS_dot_(); // POS.
    Push(0xbe9d); // probable '@.HYBRID'
    MODULE(); // MODULE
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef2b: WORD 'UNK_0xef2d' codep=0x224c parp=0xef2d params=0 returns=1
// ================================================

void UNK_0xef2d() // UNK_0xef2d
{
  unsigned short int a;
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  D0_eq_(); // D0=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(pp__ro_ENCOUNTER); // (ENCOUNTER
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
// 0xef6b: WORD 'UNK_0xef6d' codep=0x224c parp=0xef6d
// ================================================

void UNK_0xef6d() // UNK_0xef6d
{
  UNK_0xef2d(); // UNK_0xef2d
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
// 0xef9b: WORD 'UNK_0xef9d' codep=0x224c parp=0xef9d params=1 returns=1
// ================================================

void UNK_0xef9d() // UNK_0xef9d
{
  Push(Read16(regsp)); // DUP
  Push(Pop() & (Read16(pp_CONTEXT_dash_ID_n_)==5?1:0)); //  CONTEXT-ID# @ 5 = AND
  if (Pop() == 0) return;
  Push(0x103b); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  DrawTTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
  Push(!Pop()); //  NOT
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
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR
  Push(0x1088); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Y_slash_N(); // Y/N
  UNK_0xef9d(); // UNK_0xef9d
  UNK_0xed28(); // UNK_0xed28
  if (Pop() != 0)
  {
    Push(Read16(pp_CONTEXT_dash_ID_n_)==4?1:0); // CONTEXT-ID# @ 4 =
    Push(Read16(pp__n_VESS)); // #VESS @
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    Push(Read16(cc_UNK_0xda75)); // UNK_0xda75
    UNK_0xdb0c(); // UNK_0xdb0c
    Push(Pop() | (Read16(pp__i_EXTERNAL_dash_EVENTS)==Read16(pp__i_HEAT)?1:0)); //  'EXTERNAL-EVENTS @ 'HEAT @ = OR
    if (Pop() != 0)
    {
      Push(0x10a3); Push(0x0002);
      UNK_0xd93b(); // UNK_0xd93b
      DrawTTY(); // .TTY
    } else
    {
      Push(0x10cc); Push(0x0002);
      UNK_0xd93b(); // UNK_0xd93b
      DrawTTY(); // .TTY
      UNK_0xef6d(); // UNK_0xef6d
      Push(0x09c4);
      MS(); // MS
      Push(Read16(pp__i_YANK)); // 'YANK @
      MODULE(); // MODULE
      CTINIT(); // CTINIT
      Push(0x10f4); Push(0x0002);
      UNK_0xd93b(); // UNK_0xd93b
      DrawTTY(); // .TTY
      UNK_0xeceb(); // UNK_0xeceb
      Push(pp_IsRECALL); // ?RECALL
      ON_3(); // ON_3
      Push(pp_IsNEB); // ?NEB
      OFF(); // OFF
    }
  } else
  {
    CTERASE(); // CTERASE
    Push(0x1121); Push(0x0002);
    UNK_0xd93b(); // UNK_0xd93b
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  }
  GetColor(BLACK);
  Push(1);
  DrawON(); // .ON
}


// ================================================
// 0xf05f: WORD 'UNK_0xf061' codep=0x224c parp=0xf061
// ================================================

void UNK_0xf061() // UNK_0xf061
{
  UNK_0xeefd(); // UNK_0xeefd
  Push(9);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  Push(Read16(pp__i_XCOMM)); // 'XCOMM @
  MODULE(); // MODULE
  Push(!Read16(pp__ro_STOP_dash_COMM_rc_)); // (STOP-COMM) @ NOT
  if (Pop() != 0)
  {
    do
    {
      COMM_dash_EXPERTS(); // COMM-EXPERTS
      UNK_0xdbdb(); // UNK_0xdbdb
      UNK_0xecf3(); // UNK_0xecf3
      Push(Read16(cc_UNK_0xda55)); // UNK_0xda55
      UNK_0xe946(); // UNK_0xe946
      Push(Pop() & Pop()); // AND
      UNK_0xe8b6(); // UNK_0xe8b6
      UNK_0xdb0c(); // UNK_0xdb0c
      Push(Pop() | Pop()); // OR
      if (Pop() != 0)
      {
        Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
        Push(Read16(cc_UNK_0xda55)); // UNK_0xda55
        if (Pop() != 0)
        {
          Push(0xda55); // probable 'UNK_0xda55'
          OFF(); // OFF
          UNK_0xe8b6(); // UNK_0xe8b6
          Push(!Pop() * 3); //  NOT 3 *
          Push(Pop() + Pop()); // +
          UNK_0xdbff(); // UNK_0xdbff
          _gt_Y_slash_N(); // >Y/N case
          Push(pp_UNK_0xda43); // UNK_0xda43
          OFF(); // OFF
          Push(9);
          DrawBTN_dash_TE(); // .BTN-TE
          INIT_dash_BU(); // INIT-BU
        } else
        {
          _gt_CM(); // >CM case
        }
      }
      UNK_0xe9b6(); // UNK_0xe9b6
    } while(Pop() == 0);
  }
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
  Push(Read16(pp_CONTEXT_dash_ID_n_)==4?1:0); // CONTEXT-ID# @ 4 =
  if (Pop() != 0)
  {
    Push(2);
    Push(0xbdef); // probable 'OV?.EQUIP-OK'
    MODULE(); // MODULE
    if (Pop() != 0)
    {
      Push(!(Read16(pp_UNK_0xda0b)==2?1:0)); // UNK_0xda0b @ 2 = NOT
      if (Pop() != 0)
      {
        UNK_0xee62(); // UNK_0xee62
      } else
      {
        UNK_0xee7c(); // UNK_0xee7c
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
  Push(0x1137); Push(0x0002);
  UNK_0xd93b(); // UNK_0xd93b
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  GetColor(BLACK);
  Push(0);
  DrawON(); // .ON
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
// 0xf13c: WORD 'UNK_0xf13e' codep=0x224c parp=0xf13e params=0 returns=0
// ================================================

void UNK_0xf13e() // UNK_0xf13e
{
  Push(pp__ro_ENCOUNTER); // (ENCOUNTER
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
// 0xf16c: WORD 'CL1' codep=0x224c parp=0xf174
// ================================================
// entry

void CL1() // CL1
{
  Push(!Read16(pp__n_VESS)); // #VESS @ NOT
  if (Pop() != 0)
  {
    Push(pp_UNK_0xda2b); // UNK_0xda2b
    OFF(); // OFF
    Push(pp_UNK_0xda0b); // UNK_0xda0b
    OFF(); // OFF
    _gt_HAIL_do_(); // >HAIL$
  }
  Push(5);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  Push(pp__ro_STOP_dash_COMM_rc_); // (STOP-COMM)
  OFF(); // OFF
  Push(pp_UNK_0xe4b2); // UNK_0xe4b2
  ON_3(); // ON_3
  do
  {
    Push(pp__ro_AORIGINATOR); // (AORIGINATOR
    _1_dot_5_at_(); // 1.5@
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      PARALLE(); // PARALLE
    }
    UNK_0xdbdb(); // UNK_0xdbdb
    UNK_0xecf3(); // UNK_0xecf3
    if (Pop() != 0)
    {
      Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
      _ro_CBTN_rc_(); // (CBTN) case
    }
    Push(Read16(pp_UNK_0xda23) | Read16(pp_UNK_0xda2b)); // UNK_0xda23 @ UNK_0xda2b @ OR
    Push(pp__ro_AORIGINATOR); // (AORIGINATOR
    _1_dot_5_at_(); // 1.5@
    D0_eq_(); // D0=
    UNK_0xdb0c(); // UNK_0xdb0c
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(2);
      Push(0xbdef); // probable 'OV?.EQUIP-OK'
      MODULE(); // MODULE
      Push(!Pop() | Read16(pp__ro_STOP_dash_COMM_rc_)); //  NOT (STOP-COMM) @ OR
      Push(pp__ro_STOP_dash_COMM_rc_); // (STOP-COMM)
      Store_3(); // !_3
    }
    Push(Read16(pp__ro_STOP_dash_COMM_rc_)); // (STOP-COMM) @
    UNK_0xdb0c(); // UNK_0xdb0c
    if (Pop() != 0)
    {
      UNK_0xf061(); // UNK_0xf061
      CTINIT(); // CTINIT
      Push(0x115a); Push(0x0002);
      UNK_0xd93b(); // UNK_0xd93b
      DrawTTY(); // .TTY
      UNK_0xf13e(); // UNK_0xf13e
      Push(5);
      DrawBTN_dash_TE(); // .BTN-TE
      INIT_dash_BU(); // INIT-BU
      Push(pp_FTRIG); // FTRIG
      OFF(); // OFF
    }
    Push(Read16(pp__ro_STOP_dash_COMM_rc_)); // (STOP-COMM) @
  } while(Pop() == 0);
  Push(0);
  DrawBTN_dash_TE(); // .BTN-TE
  Push(pp_UNK_0xe4b2); // UNK_0xe4b2
  OFF(); // OFF
  CLR_dash_BUT(); // CLR-BUT
  GetColor(BLUE);
  Push(4);
  DrawHIGHLI(); // .HIGHLI
  Push(4);
  Push(pp_THIS_dash_BU); // THIS-BU
  Store_3(); // !_3
  GetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_3(); // !_3
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
  StoreD(); // D!
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
  Push(Read16(0x63ef+UNK_0xd970.offset)&0xFF); // UNK_0xd970<IFIELD> C@
  Push(pp_UNK_0xda69); // UNK_0xda69
  Store_3(); // !_3
  Push(Read16(0x63ef+UNK_0xd97a.offset)&0xFF); // UNK_0xd97a<IFIELD> C@
  Push(pp_EDL); // EDL
  Store_3(); // !_3
  UNK_0xe8de(); // UNK_0xe8de
  Push(Pop() * 5); //  5 *
  _plus__ex_EDL(); // +!EDL
  UNK_0xe8ea(); // UNK_0xe8ea
  Pop(); // DROP
  UNK_0xe906(); // UNK_0xe906
  Push(Pop() * 0x000a); //  0x000a *
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
  unsigned short int a;
  UNK_0xf228(); // UNK_0xf228
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(pp_UNK_0xda71); // UNK_0xda71
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
    Push(0xda61); // probable 'UNK_0xda61'
    Store_3(); // !_3
    if (Pop() != 0)
    {
      UNK_0xe014(); // UNK_0xe014
      Push(pp__ro_ENCOUNTER); // (ENCOUNTER
      _1_dot_5_at_(); // 1.5@
      _2DUP(); // 2DUP
      Push(Pop() & 0x000f | 2); //  0x000f AND 2 OR
      UNK_0xe068(); // UNK_0xe068
      Push(0x000f);
      MIN(); // MIN
      OVER(); // OVER
      Push(Pop() - 1); //  1-
      C_ex_(); // C!
      Push(Pop() - 1); //  1-
      Push(pp_UNK_0xda8f); // UNK_0xda8f
      _do__ex_(); // $!
      SWAP(); // SWAP
      Push(Pop() & 0x000f | 2); //  0x000f AND 2 OR
      UNK_0xe068(); // UNK_0xe068
      Push(0x000f);
      MIN(); // MIN
      OVER(); // OVER
      Push(Pop() - 1); //  1-
      C_ex_(); // C!
      Push(Pop() - 1); //  1-
      Push(pp_UNK_0xda7d); // UNK_0xda7d
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
  UNK_0xe7e0(); // UNK_0xe7e0
  UNK_0xe7e8(); // UNK_0xe7e8
  Push(Pop() | Pop()); // OR
  Push(Read16(regsp)); // DUP
  Push(Pop() & Read16(cc_UNK_0xda3b)); //  UNK_0xda3b AND
  Push(0x50b4); // probable '?A-WEAP'
  Store_3(); // !_3
  UNK_0xe7d8(); // UNK_0xe7d8
  Push(Pop() | Pop()); // OR
  UNK_0xe9c2(); // UNK_0xe9c2
  UNK_0xdb0c(); // UNK_0xdb0c
  Push(Pop() & Read16(cc_UNK_0xda37)); //  UNK_0xda37 AND
  Push(0x50a6); // probable '?A-SHIE'
  Store_3(); // !_3
}


// ================================================
// 0xf32e: WORD 'UNK_0xf330' codep=0x224c parp=0xf330 params=0 returns=0
// ================================================

void UNK_0xf330() // UNK_0xf330
{
  unsigned short int i, imax;
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
  Push(0x63ef+UNK_0xd9c0.offset); // UNK_0xd9c0<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+UNK_0xd9b1.offset); // UNK_0xd9b1<IFIELD>
  Push(pp_UNK_0xdaa1); // UNK_0xdaa1
  _do__ex_(); // $!
  ICLOSE(); // ICLOSE
  Push(0);
  Push(0x0012);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push((0x63ef+UNK_0xd9c0.offset) + i); // UNK_0xd9c0<IFIELD> I +
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
  Push(0x63ef+UNK_0xd9c5.offset); // UNK_0xd9c5<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+UNK_0xd9ac.offset)&0xFF); // UNK_0xd9ac<IFIELD> C@
  Push(pp_UNK_0xdacb); // UNK_0xdacb
  Store_3(); // !_3
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(pp_UNK_0xdacf); // UNK_0xdacf
  Store_3(); // !_3
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(Read16(pp_UNK_0xda71)); // UNK_0xda71 @
  O_gt_P(); // O>P case
  Push(Read16(regsp)); // DUP
  Push(Pop() + 1); //  1+
  BIT(); // BIT
  Push(Pop() & Read16(pp_P_dash_RACES)); //  P-RACES @ AND
  _0_gt_(); // 0>
  Push(Pop() * 0x0032); //  0x0032 *
  SWAP(); // SWAP
  Push((Pop()==Read16(pp_UNK_0xdacf)?1:0) * 0x0032); //  UNK_0xdacf @ = 0x0032 *
  Push(Pop() + Pop()); // +
  UNK_0xe9c2(); // UNK_0xe9c2
  Push(4);
  Push(0xbdd8); // probable 'OV?ARTIFACT'
  MODULE(); // MODULE
  Push(Pop() & Pop()); // AND
  Push(Pop() * 0x00fa); //  0x00fa *
  Push(Pop() + Pop()); // +
  Push(Pop() + Read16(pp_UNK_0xdacb)); //  UNK_0xdacb @ +
  Push(0);
  SQRT(); // SQRT
  Push(0x00a7);
  Push(0x000a);
  _star__slash_(); // */
  Push(0x00fa);
  MIN(); // MIN
  Push(pp_UNK_0xdacb); // UNK_0xdacb
  Store_3(); // !_3
}


// ================================================
// 0xf43a: WORD 'IAPWR' codep=0x224c parp=0xf444 params=0 returns=0
// ================================================
// entry

void IAPWR() // IAPWR
{
  Push(pp__ro_ENCOUNTER); // (ENCOUNTER
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0);
  do
  {
    GetINST_dash_CLASS(); // @INST-CLASS
    Push(Pop()==0x0019?1:0); //  0x0019 =
    GetINST_dash_SPECIES(); // @INST-SPECIES
    Push(Pop()==0x0018?1:0); //  0x0018 =
    UNK_0xdb0c(); // UNK_0xdb0c
    if (Pop() != 0)
    {
      Push(Read16(cc_UNK_0xda37)); // UNK_0xda37
      LoadData(UNK_0xd9e8); // from 'VESSEL'
      Push(!(Read16(Pop() + 2)==0?1:0)); //  2+ @ 0= NOT
      Push(Pop() | Pop()); // OR
      Push(0xda37); // probable 'UNK_0xda37'
      Store_3(); // !_3
      Push(Read16(cc_UNK_0xda3b)); // UNK_0xda3b
      LoadData(UNK_0xd9f0); // from 'VESSEL'
      _1_dot_5_at_(); // 1.5@
      D0_eq_(); // D0=
      Push(!Pop()); //  NOT
      Push(Pop() | Pop()); // OR
      Push(0xda3b); // probable 'UNK_0xda3b'
      Store_3(); // !_3
      LoadData(UNK_0xd9fd); // from 'VESSEL'
      Push(Read16(Pop())&0xFF); //  C@
      Push(0x63ef+UNK_0xd9f8.offset); // UNK_0xd9f8<IFIELD>
      _2_at_(); // 2@
      Push(Pop() + Pop()); // +
      LoadData(UNK_0xd9e8); // from 'VESSEL'
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
// 0xf4ae: WORD 'UNK_0xf4b0' codep=0x224c parp=0xf4b0 params=1 returns=1
// ================================================

void UNK_0xf4b0() // UNK_0xf4b0
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push((Read16(Pop() + 1)&0xFF) & 7); //  1+ C@ 7 AND
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xf4c4: WORD 'UNK_0xf4c6' codep=0x224c parp=0xf4c6 params=0 returns=0
// ================================================

void UNK_0xf4c6() // UNK_0xf4c6
{
  unsigned short int i, imax;
  Push(Read16(pp_UNK_0xda59)==1?1:0); // UNK_0xda59 @ 1 =
  if (Pop() != 0)
  {
    Push2Words("*SHIP");
    _gt_C_plus_S(); // >C+S
    Push(0x63ef+UNK_0xd9d4.offset); // UNK_0xd9d4<IFIELD>
    UNK_0xf4b0(); // UNK_0xf4b0
    Push(0x63ef+UNK_0xd9d9.offset); // UNK_0xd9d9<IFIELD>
    UNK_0xf4b0(); // UNK_0xf4b0
    Push(Pop() + Pop()); // +
    Push(0x63ef+UNK_0xd9e3.offset); // UNK_0xd9e3<IFIELD>
    UNK_0xf4b0(); // UNK_0xf4b0
    Push(Pop() + Pop()); // +
    Push(0x63ef+UNK_0xd9de.offset); // UNK_0xd9de<IFIELD>
    UNK_0xf4b0(); // UNK_0xf4b0
    Push(Pop() + Pop()); // +
    Push(Read16(regsp)); // DUP
    Push2Words("*ASSIGN-CREW");
    _gt_C_plus_S(); // >C+S
    Push(0x63ef+UNK_0xd9c0.offset); // UNK_0xd9c0<IFIELD>
    Get_gt_C_plus_S(); // @>C+S
    Push(0);
    Push((0x63ef+UNK_0xd9bb.offset) + 5); // UNK_0xd9bb<IFIELD> 5 +
    Push(0x63ef+UNK_0xd9bb.offset); // UNK_0xd9bb<IFIELD>

    i = Pop();
    imax = Pop();
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
  Push(pp_UNK_0xda65); // UNK_0xda65
  Store_3(); // !_3
}


// ================================================
// 0xf530: WORD 'ICOMM' codep=0x224c parp=0xf53a
// ================================================
// entry

void ICOMM() // ICOMM
{
  Push(pp_UNK_0xda59); // UNK_0xda59
  Store_3(); // !_3
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

