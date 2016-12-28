// ====== OVERLAY 'COMM-OV' ======
// store offset = 0xd7e0
// overlay size   = 0x1d80

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xd7f6  codep:0x224c parp:0xd7f6 size:0x0006 C-string:'UNK_0xd7f6'
//      UNK_0xd7fe  codep:0x224c parp:0xd7fe size:0x0006 C-string:'UNK_0xd7fe'
//      UNK_0xd806  codep:0x224c parp:0xd806 size:0x0006 C-string:'UNK_0xd806'
//      UNK_0xd80e  codep:0x224c parp:0xd80e size:0x0010 C-string:'UNK_0xd80e'
//      UNK_0xd820  codep:0x7420 parp:0xd820 size:0x0003 C-string:'UNK_0xd820'
//      UNK_0xd825  codep:0x7420 parp:0xd825 size:0x0003 C-string:'UNK_0xd825'
//      UNK_0xd82a  codep:0x7420 parp:0xd82a size:0x0003 C-string:'UNK_0xd82a'
//      UNK_0xd82f  codep:0x7420 parp:0xd82f size:0x0003 C-string:'UNK_0xd82f'
//      UNK_0xd834  codep:0x7420 parp:0xd834 size:0x0003 C-string:'UNK_0xd834'
//      UNK_0xd839  codep:0x7420 parp:0xd839 size:0x0003 C-string:'UNK_0xd839'
//      UNK_0xd83e  codep:0x7420 parp:0xd83e size:0x0003 C-string:'UNK_0xd83e'
//      UNK_0xd843  codep:0x7420 parp:0xd843 size:0x0003 C-string:'UNK_0xd843'
//      UNK_0xd848  codep:0x7420 parp:0xd848 size:0x0003 C-string:'UNK_0xd848'
//      UNK_0xd84d  codep:0x7420 parp:0xd84d size:0x0003 C-string:'UNK_0xd84d'
//      UNK_0xd852  codep:0x7420 parp:0xd852 size:0x0003 C-string:'UNK_0xd852'
//      UNK_0xd857  codep:0x7420 parp:0xd857 size:0x0003 C-string:'UNK_0xd857'
//      UNK_0xd85c  codep:0x7420 parp:0xd85c size:0x0003 C-string:'UNK_0xd85c'
//      UNK_0xd861  codep:0x7420 parp:0xd861 size:0x0012 C-string:'UNK_0xd861'
//      UNK_0xd875  codep:0x7420 parp:0xd875 size:0x0003 C-string:'UNK_0xd875'
//      UNK_0xd87a  codep:0x7420 parp:0xd87a size:0x0003 C-string:'UNK_0xd87a'
//      UNK_0xd87f  codep:0x7420 parp:0xd87f size:0x0003 C-string:'UNK_0xd87f'
//      UNK_0xd884  codep:0x7420 parp:0xd884 size:0x0003 C-string:'UNK_0xd884'
//      UNK_0xd889  codep:0x7420 parp:0xd889 size:0x000d C-string:'UNK_0xd889'
//      UNK_0xd898  codep:0x7420 parp:0xd898 size:0x0003 C-string:'UNK_0xd898'
//      UNK_0xd89d  codep:0x7420 parp:0xd89d size:0x0003 C-string:'UNK_0xd89d'
//      UNK_0xd8a2  codep:0x7420 parp:0xd8a2 size:0x0008 C-string:'UNK_0xd8a2'
//      UNK_0xd8ac  codep:0x7420 parp:0xd8ac size:0x0003 C-string:'UNK_0xd8ac'
//      UNK_0xd8b1  codep:0x7420 parp:0xd8b1 size:0x0003 C-string:'UNK_0xd8b1'
//      UNK_0xd8b6  codep:0x7420 parp:0xd8b6 size:0x0003 C-string:'UNK_0xd8b6'
//      UNK_0xd8bb  codep:0x7420 parp:0xd8bb size:0x0003 C-string:'UNK_0xd8bb'
//      UNK_0xd8c0  codep:0x7394 parp:0xd8c0 size:0x0006 C-string:'UNK_0xd8c0'
//      UNK_0xd8c8  codep:0x7394 parp:0xd8c8 size:0x0006 C-string:'UNK_0xd8c8'
//      UNK_0xd8d0  codep:0x7420 parp:0xd8d0 size:0x0003 C-string:'UNK_0xd8d0'
//      UNK_0xd8d5  codep:0x7394 parp:0xd8d5 size:0x0006 C-string:'UNK_0xd8d5'
//      UNK_0xd8dd  codep:0x1d29 parp:0xd8dd size:0x0002 C-string:'UNK_0xd8dd'
//      UNK_0xd8e1  codep:0x1d29 parp:0xd8e1 size:0x0008 C-string:'UNK_0xd8e1'
//      UNK_0xd8eb  codep:0x1d29 parp:0xd8eb size:0x0002 C-string:'UNK_0xd8eb'
//      UNK_0xd8ef  codep:0x1d29 parp:0xd8ef size:0x0002 C-string:'UNK_0xd8ef'
//      UNK_0xd8f3  codep:0x1d29 parp:0xd8f3 size:0x0002 C-string:'UNK_0xd8f3'
//      UNK_0xd8f7  codep:0x1d29 parp:0xd8f7 size:0x0002 C-string:'UNK_0xd8f7'
//      UNK_0xd8fb  codep:0x1d29 parp:0xd8fb size:0x0002 C-string:'UNK_0xd8fb'
//      UNK_0xd8ff  codep:0x1d29 parp:0xd8ff size:0x0002 C-string:'UNK_0xd8ff'
//      UNK_0xd903  codep:0x1d29 parp:0xd903 size:0x0002 C-string:'UNK_0xd903'
//      UNK_0xd907  codep:0x1d29 parp:0xd907 size:0x0002 C-string:'UNK_0xd907'
//      UNK_0xd90b  codep:0x1d29 parp:0xd90b size:0x0002 C-string:'UNK_0xd90b'
//      UNK_0xd90f  codep:0x2214 parp:0xd90f size:0x0002 C-string:'UNK_0xd90f'
//      UNK_0xd913  codep:0x2214 parp:0xd913 size:0x0002 C-string:'UNK_0xd913'
//      UNK_0xd917  codep:0x1d29 parp:0xd917 size:0x0002 C-string:'UNK_0xd917'
//      UNK_0xd91b  codep:0x1d29 parp:0xd91b size:0x0002 C-string:'UNK_0xd91b'
//      UNK_0xd91f  codep:0x1d29 parp:0xd91f size:0x0002 C-string:'UNK_0xd91f'
//      UNK_0xd923  codep:0x1d29 parp:0xd923 size:0x0002 C-string:'UNK_0xd923'
//      UNK_0xd927  codep:0x1d29 parp:0xd927 size:0x0004 C-string:'UNK_0xd927'
//      UNK_0xd92d  codep:0x2214 parp:0xd92d size:0x0002 C-string:'UNK_0xd92d'
//      UNK_0xd931  codep:0x1d29 parp:0xd931 size:0x0002 C-string:'UNK_0xd931'
//      UNK_0xd935  codep:0x2214 parp:0xd935 size:0x0002 C-string:'UNK_0xd935'
//      UNK_0xd939  codep:0x224c parp:0xd939 size:0x000a C-string:'UNK_0xd939'
//      UNK_0xd945  codep:0x224c parp:0xd945 size:0x000e C-string:'UNK_0xd945'
//      UNK_0xd955  codep:0x224c parp:0xd955 size:0x000c C-string:'UNK_0xd955'
//      UNK_0xd963  codep:0x224c parp:0xd963 size:0x0056 C-string:'UNK_0xd963'
//      UNK_0xd9bb  codep:0x224c parp:0xd9bb size:0x000e C-string:'UNK_0xd9bb'
//           S>EDL  codep:0x4b3b parp:0xd9d3 size:0x0014 C-string:'S_gt_EDL'
//      UNK_0xd9e9  codep:0x224c parp:0xd9e9 size:0x000c C-string:'UNK_0xd9e9'
//      UNK_0xd9f7  codep:0x2214 parp:0xd9f7 size:0x0002 C-string:'UNK_0xd9f7'
//      UNK_0xd9fb  codep:0x1d29 parp:0xd9fb size:0x000a C-string:'UNK_0xd9fb'
//      UNK_0xda07  codep:0x1d29 parp:0xda07 size:0x0010 C-string:'UNK_0xda07'
//      UNK_0xda19  codep:0x1d29 parp:0xda19 size:0x0010 C-string:'UNK_0xda19'
//      UNK_0xda2b  codep:0x1d29 parp:0xda2b size:0x0010 C-string:'UNK_0xda2b'
//      UNK_0xda3d  codep:0x1d29 parp:0xda3d size:0x0010 C-string:'UNK_0xda3d'
//      UNK_0xda4f  codep:0x1d29 parp:0xda4f size:0x0004 C-string:'UNK_0xda4f'
//      UNK_0xda55  codep:0x1d29 parp:0xda55 size:0x0002 C-string:'UNK_0xda55'
//      UNK_0xda59  codep:0x1d29 parp:0xda59 size:0x0006 C-string:'UNK_0xda59'
//      UNK_0xda61  codep:0x1d29 parp:0xda61 size:0x0002 C-string:'UNK_0xda61'
//      UNK_0xda65  codep:0x1d29 parp:0xda65 size:0x0002 C-string:'UNK_0xda65'
//      UNK_0xda69  codep:0x2214 parp:0xda69 size:0x0002 C-string:'UNK_0xda69'
//      UNK_0xda6d  codep:0x2214 parp:0xda6d size:0x0002 C-string:'UNK_0xda6d'
//      UNK_0xda71  codep:0x2214 parp:0xda71 size:0x0002 C-string:'UNK_0xda71'
//      UNK_0xda75  codep:0x2214 parp:0xda75 size:0x0002 C-string:'UNK_0xda75'
//      UNK_0xda79  codep:0x2214 parp:0xda79 size:0x0002 C-string:'UNK_0xda79'
//      UNK_0xda7d  codep:0x2214 parp:0xda7d size:0x0007 C-string:'UNK_0xda7d'
//      UNK_0xda86  codep:0x224c parp:0xda86 size:0x0006 C-string:'UNK_0xda86'
//      UNK_0xda8e  codep:0x224c parp:0xda8e size:0x0008 C-string:'UNK_0xda8e'
//      UNK_0xda98  codep:0x224c parp:0xda98 size:0x0010 C-string:'UNK_0xda98'
//     ORIGINATOR>  codep:0x224c parp:0xdab8 size:0x0016 C-string:'ORIGINATOR_gt_'
//     A>ORIGINATO  codep:0x224c parp:0xdade size:0x0020 C-string:'A_gt_ORIGINATO'
//      UNK_0xdb00  codep:0x224c parp:0xdb00 size:0x0018 C-string:'UNK_0xdb00'
//      UNK_0xdb1a  codep:0x224c parp:0xdb1a size:0x0006 C-string:'UNK_0xdb1a'
//      UNK_0xdb22  codep:0x224c parp:0xdb22 size:0x000c C-string:'UNK_0xdb22'
//      UNK_0xdb30  codep:0x224c parp:0xdb30 size:0x000c C-string:'UNK_0xdb30'
//      UNK_0xdb3e  codep:0x224c parp:0xdb3e size:0x0006 C-string:'UNK_0xdb3e'
//        P>AFIELD  codep:0x4b3b parp:0xdb51 size:0x001e C-string:'P_gt_AFIELD'
//      UNK_0xdb71  codep:0x224c parp:0xdb71 size:0x000e C-string:'UNK_0xdb71'
//      UNK_0xdb81  codep:0x224c parp:0xdb81 size:0x0012 C-string:'UNK_0xdb81'
//      UNK_0xdb95  codep:0x224c parp:0xdb95 size:0x000a C-string:'UNK_0xdb95'
//      UNK_0xdba1  codep:0x3b74 parp:0xdba1 size:0x0004 C-string:'UNK_0xdba1'
//      UNK_0xdba7  codep:0x3b74 parp:0xdba7 size:0x0004 C-string:'UNK_0xdba7'
//      UNK_0xdbad  codep:0x3b74 parp:0xdbad size:0x0004 C-string:'UNK_0xdbad'
//      UNK_0xdbb3  codep:0x3b74 parp:0xdbb3 size:0x0004 C-string:'UNK_0xdbb3'
//            #PHR  codep:0x4b3b parp:0xdbc0 size:0x0014 C-string:'_n_PHR'
//      UNK_0xdbd6  codep:0x224c parp:0xdbd6 size:0x0026 C-string:'UNK_0xdbd6'
//          N>POST  codep:0x4b3b parp:0xdc07 size:0x0014 C-string:'N_gt_POST'
//      UNK_0xdc1d  codep:0x224c parp:0xdc1d size:0x0064 C-string:'UNK_0xdc1d'
//      UNK_0xdc83  codep:0x224c parp:0xdc83 size:0x0052 C-string:'UNK_0xdc83'
//           EDL>P  codep:0x224c parp:0xdcdf size:0x000c C-string:'EDL_gt_P'
//           +!EDL  codep:0x224c parp:0xdcf5 size:0x001e C-string:'_plus__ex_EDL'
//      UNK_0xdd15  codep:0x224c parp:0xdd15 size:0x0030 C-string:'UNK_0xdd15'
//      UNK_0xdd47  codep:0x224c parp:0xdd47 size:0x0010 C-string:'UNK_0xdd47'
//      UNK_0xdd59  codep:0x224c parp:0xdd59 size:0x0050 C-string:'UNK_0xdd59'
//      UNK_0xddab  codep:0x224c parp:0xddab size:0x0018 C-string:'UNK_0xddab'
//      UNK_0xddc5  codep:0x224c parp:0xddc5 size:0x0040 C-string:'UNK_0xddc5'
//      UNK_0xde07  codep:0x224c parp:0xde07 size:0x003a C-string:'UNK_0xde07'
//      UNK_0xde43  codep:0x224c parp:0xde43 size:0x0010 C-string:'UNK_0xde43'
//      UNK_0xde55  codep:0x224c parp:0xde55 size:0x001c C-string:'UNK_0xde55'
//          >HAIL$  codep:0x224c parp:0xde7c size:0x0010 C-string:'_gt_HAIL_do_'
//      UNK_0xde8e  codep:0x224c parp:0xde8e size:0x000e C-string:'UNK_0xde8e'
//      UNK_0xde9e  codep:0x224c parp:0xde9e size:0x001e C-string:'UNK_0xde9e'
//      UNK_0xdebe  codep:0x224c parp:0xdebe size:0x001c C-string:'UNK_0xdebe'
//      UNK_0xdedc  codep:0x1d29 parp:0xdedc size:0x0070 C-string:'UNK_0xdedc'
//      UNK_0xdf4e  codep:0x224c parp:0xdf4e size:0x0042 C-string:'UNK_0xdf4e'
//      UNK_0xdf92  codep:0x224c parp:0xdf92 size:0x000c C-string:'UNK_0xdf92'
//            1SYL  codep:0x224c parp:0xdfa7 size:0x0014 C-string:'_1SYL'
//      UNK_0xdfbd  codep:0x224c parp:0xdfbd size:0x0046 C-string:'UNK_0xdfbd'
//      UNK_0xe005  codep:0x224c parp:0xe005 size:0x001a C-string:'UNK_0xe005'
//      UNK_0xe021  codep:0x224c parp:0xe021 size:0x0020 C-string:'UNK_0xe021'
//      UNK_0xe043  codep:0x224c parp:0xe043 size:0x0026 C-string:'UNK_0xe043'
//      UNK_0xe06b  codep:0x224c parp:0xe06b size:0x0014 C-string:'UNK_0xe06b'
//      UNK_0xe081  codep:0x224c parp:0xe081 size:0x005e C-string:'UNK_0xe081'
//      UNK_0xe0e1  codep:0x224c parp:0xe0e1 size:0x000e C-string:'UNK_0xe0e1'
//           ACASE  codep:0x4b3b parp:0xe0f9 size:0x000c C-string:'ACASE'
//      UNK_0xe107  codep:0x224c parp:0xe107 size:0x0034 C-string:'UNK_0xe107'
//      UNK_0xe13d  codep:0x224c parp:0xe13d size:0x002e C-string:'UNK_0xe13d'
//      UNK_0xe16d  codep:0x224c parp:0xe16d size:0x0052 C-string:'UNK_0xe16d'
//      UNK_0xe1c1  codep:0x224c parp:0xe1c1 size:0x000a C-string:'UNK_0xe1c1'
//      UNK_0xe1cd  codep:0x224c parp:0xe1cd size:0x000e C-string:'UNK_0xe1cd'
//        CTSCROLL  codep:0x224c parp:0xe1e8 size:0x0024 C-string:'CTSCROLL'
//      UNK_0xe20e  codep:0x224c parp:0xe20e size:0x002a C-string:'UNK_0xe20e'
//      UNK_0xe23a  codep:0x224c parp:0xe23a size:0x0044 C-string:'UNK_0xe23a'
//      UNK_0xe280  codep:0x1d29 parp:0xe280 size:0x0019 C-string:'UNK_0xe280'
//      UNK_0xe29b  codep:0x224c parp:0xe29b size:0x0006 C-string:'UNK_0xe29b'
//      UNK_0xe2a3  codep:0x224c parp:0xe2a3 size:0x0006 C-string:'UNK_0xe2a3'
//      UNK_0xe2ab  codep:0x224c parp:0xe2ab size:0x0006 C-string:'UNK_0xe2ab'
//      UNK_0xe2b3  codep:0x224c parp:0xe2b3 size:0x000e C-string:'UNK_0xe2b3'
//      UNK_0xe2c3  codep:0x224c parp:0xe2c3 size:0x001e C-string:'UNK_0xe2c3'
//      UNK_0xe2e3  codep:0x224c parp:0xe2e3 size:0x0020 C-string:'UNK_0xe2e3'
//      UNK_0xe305  codep:0x224c parp:0xe305 size:0x000a C-string:'UNK_0xe305'
//      UNK_0xe311  codep:0x224c parp:0xe311 size:0x0015 C-string:'UNK_0xe311'
//      UNK_0xe328  codep:0x224c parp:0xe328 size:0x0011 C-string:'UNK_0xe328'
//      UNK_0xe33b  codep:0x224c parp:0xe33b size:0x000a C-string:'UNK_0xe33b'
//      UNK_0xe347  codep:0x224c parp:0xe347 size:0x0006 C-string:'UNK_0xe347'
//      UNK_0xe34f  codep:0x224c parp:0xe34f size:0x001d C-string:'UNK_0xe34f'
//      UNK_0xe36e  codep:0x224c parp:0xe36e size:0x000a C-string:'UNK_0xe36e'
//      UNK_0xe37a  codep:0x224c parp:0xe37a size:0x0006 C-string:'UNK_0xe37a'
//      UNK_0xe382  codep:0x224c parp:0xe382 size:0x0008 C-string:'UNK_0xe382'
//              ?S  codep:0x4b3b parp:0xe391 size:0x0014 C-string:'_ask_S'
//      UNK_0xe3a7  codep:0x224c parp:0xe3a7 size:0x0008 C-string:'UNK_0xe3a7'
//             SPL  codep:0x4b3b parp:0xe3b7 size:0x0028 C-string:'SPL'
//      UNK_0xe3e1  codep:0x224c parp:0xe3e1 size:0x001a C-string:'UNK_0xe3e1'
//     (PHRASE>CT)  codep:0x224c parp:0xe40b size:0x003c C-string:'_ro_PHRASE_gt_CT_rc_'
//      UNK_0xe449  codep:0x224c parp:0xe449 size:0x0010 C-string:'UNK_0xe449'
//      UNK_0xe45b  codep:0x224c parp:0xe45b size:0x001e C-string:'UNK_0xe45b'
//      UNK_0xe47b  codep:0x224c parp:0xe47b size:0x0022 C-string:'UNK_0xe47b'
//      UNK_0xe49f  codep:0x224c parp:0xe49f size:0x0028 C-string:'UNK_0xe49f'
//      UNK_0xe4c9  codep:0x224c parp:0xe4c9 size:0x0098 C-string:'UNK_0xe4c9'
//      UNK_0xe563  codep:0x1d29 parp:0xe563 size:0x0099 C-string:'UNK_0xe563'
//      UNK_0xe5fe  codep:0x224c parp:0xe5fe size:0x005c C-string:'UNK_0xe5fe'
//      UNK_0xe65c  codep:0x224c parp:0xe65c size:0x0006 C-string:'UNK_0xe65c'
//      UNK_0xe664  codep:0x224c parp:0xe664 size:0x0072 C-string:'UNK_0xe664'
//      UNK_0xe6d8  codep:0x224c parp:0xe6d8 size:0x000c C-string:'UNK_0xe6d8'
//      UNK_0xe6e6  codep:0x224c parp:0xe6e6 size:0x0030 C-string:'UNK_0xe6e6'
//      UNK_0xe718  codep:0x224c parp:0xe718 size:0x01d9 C-string:'UNK_0xe718'
//         (?RACE)  codep:0x1d29 parp:0xe8fd size:0x0037 C-string:'_ro__ask_RACE_rc_'
//      UNK_0xe936  codep:0x224c parp:0xe936 size:0x0006 C-string:'UNK_0xe936'
//      UNK_0xe93e  codep:0x224c parp:0xe93e size:0x0006 C-string:'UNK_0xe93e'
//      UNK_0xe946  codep:0x224c parp:0xe946 size:0x00cc C-string:'UNK_0xe946'
//      UNK_0xea14  codep:0x224c parp:0xea14 size:0x000a C-string:'UNK_0xea14'
//      UNK_0xea20  codep:0x224c parp:0xea20 size:0x000a C-string:'UNK_0xea20'
//      UNK_0xea2c  codep:0x224c parp:0xea2c size:0x000a C-string:'UNK_0xea2c'
//      UNK_0xea38  codep:0x224c parp:0xea38 size:0x000a C-string:'UNK_0xea38'
//      UNK_0xea44  codep:0x224c parp:0xea44 size:0x0018 C-string:'UNK_0xea44'
//      UNK_0xea5e  codep:0x224c parp:0xea5e size:0x000a C-string:'UNK_0xea5e'
//      UNK_0xea6a  codep:0x224c parp:0xea6a size:0x0030 C-string:'UNK_0xea6a'
//      UNK_0xea9c  codep:0x224c parp:0xea9c size:0x0054 C-string:'UNK_0xea9c'
//      UNK_0xeaf2  codep:0x224c parp:0xeaf2 size:0x001c C-string:'UNK_0xeaf2'
//      UNK_0xeb10  codep:0x224c parp:0xeb10 size:0x000a C-string:'UNK_0xeb10'
//      UNK_0xeb1c  codep:0x224c parp:0xeb1c size:0x0064 C-string:'UNK_0xeb1c'
//           <EDL>  codep:0xaccc parp:0xeb8a size:0x008e C-string:'_st_EDL_gt_'
//          <TALK>  codep:0xaccc parp:0xec23 size:0x00bc C-string:'_st_TALK_gt_'
//           <AUX>  codep:0xaccc parp:0xece9 size:0x00a3 C-string:'_st_AUX_gt_'
//          <COMM>  codep:0xaccc parp:0xed97 size:0x0092 C-string:'_st_COMM_gt_'
//      UNK_0xee2b  codep:0x224c parp:0xee2b size:0x002a C-string:'UNK_0xee2b'
//      UNK_0xee57  codep:0x224c parp:0xee57 size:0x0006 C-string:'UNK_0xee57'
//      UNK_0xee5f  codep:0x224c parp:0xee5f size:0x002e C-string:'UNK_0xee5f'
//      UNK_0xee8f  codep:0x224c parp:0xee8f size:0x0022 C-string:'UNK_0xee8f'
//      UNK_0xeeb3  codep:0x1d29 parp:0xeeb3 size:0x0003 C-string:'UNK_0xeeb3'
//      UNK_0xeeb8  codep:0x224c parp:0xeeb8 size:0x0026 C-string:'UNK_0xeeb8'
//            (>?)  codep:0x4b3b parp:0xeee7 size:0x0014 C-string:'_ro__gt__ask__rc_'
//      UNK_0xeefd  codep:0x224c parp:0xeefd size:0x002c C-string:'UNK_0xeefd'
//      UNK_0xef2b  codep:0x224c parp:0xef2b size:0x000c C-string:'UNK_0xef2b'
//             >CM  codep:0x4b3b parp:0xef3f size:0x0010 C-string:'_gt_CM'
//      UNK_0xef51  codep:0x224c parp:0xef51 size:0x0011 C-string:'UNK_0xef51'
//      UNK_0xef64  codep:0x224c parp:0xef64 size:0x0010 C-string:'UNK_0xef64'
//      UNK_0xef76  codep:0x224c parp:0xef76 size:0x000a C-string:'UNK_0xef76'
//      UNK_0xef82  codep:0x224c parp:0xef82 size:0x0006 C-string:'UNK_0xef82'
//            >Y/N  codep:0x4b3b parp:0xef91 size:0x0010 C-string:'_gt_Y_slash_N'
//      UNK_0xefa3  codep:0x224c parp:0xefa3 size:0x001a C-string:'UNK_0xefa3'
//      UNK_0xefbf  codep:0x224c parp:0xefbf size:0x0016 C-string:'UNK_0xefbf'
//         EDL+AUX  codep:0x224c parp:0xefe1 size:0x0022 C-string:'EDL_plus_AUX'
//     COMM-EXPERT  codep:0x224c parp:0xf013 size:0x0036 C-string:'COMM_dash_EXPERT'
//      UNK_0xf04b  codep:0x224c parp:0xf04b size:0x0018 C-string:'UNK_0xf04b'
//      UNK_0xf065  codep:0x224c parp:0xf065 size:0x002c C-string:'UNK_0xf065'
//      UNK_0xf093  codep:0x224c parp:0xf093 size:0x001a C-string:'UNK_0xf093'
//      UNK_0xf0af  codep:0x224c parp:0xf0af size:0x002e C-string:'UNK_0xf0af'
//      UNK_0xf0df  codep:0x224c parp:0xf0df size:0x0084 C-string:'UNK_0xf0df'
//      UNK_0xf165  codep:0x224c parp:0xf165 size:0x0050 C-string:'UNK_0xf165'
//      UNK_0xf1b7  codep:0x224c parp:0xf1b7 size:0x0008 C-string:'UNK_0xf1b7'
//          (CBTN)  codep:0x4b3b parp:0xf1ca size:0x0010 C-string:'_ro_CBTN_rc_'
//      UNK_0xf1dc  codep:0x224c parp:0xf1dc size:0x002e C-string:'UNK_0xf1dc'
//             CL1  codep:0x224c parp:0xf212 size:0x00b2 C-string:'CL1'
//      UNK_0xf2c6  codep:0x224c parp:0xf2c6 size:0x0060 C-string:'UNK_0xf2c6'
//      UNK_0xf328  codep:0x224c parp:0xf328 size:0x00a4 C-string:'UNK_0xf328'
//      UNK_0xf3ce  codep:0x224c parp:0xf3ce size:0x008e C-string:'UNK_0xf3ce'
//      UNK_0xf45e  codep:0x224c parp:0xf45e size:0x0016 C-string:'UNK_0xf45e'
//           IAPWR  codep:0x224c parp:0xf47e size:0x0064 C-string:'IAPWR'
//      UNK_0xf4e4  codep:0x224c parp:0xf4e4 size:0x0014 C-string:'UNK_0xf4e4'
//      UNK_0xf4fa  codep:0x224c parp:0xf4fa size:0x002a C-string:'UNK_0xf4fa'
//           ICOMM  codep:0x224c parp:0xf52e size:0x0000 C-string:'ICOMM'

// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xd8dd = 0xd8dd; // UNK_0xd8dd size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xd8e1 = 0xd8e1; // UNK_0xd8e1 size: 8
// {0x56, 0x3a, 0x20, 0x63, 0x14, 0x22, 0x00, 0x00}

const unsigned short int pp_UNK_0xd8eb = 0xd8eb; // UNK_0xd8eb size: 2
// {0x5e, 0xf4}

const unsigned short int pp_UNK_0xd8ef = 0xd8ef; // UNK_0xd8ef size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xd8f3 = 0xd8f3; // UNK_0xd8f3 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xd8f7 = 0xd8f7; // UNK_0xd8f7 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xd8fb = 0xd8fb; // UNK_0xd8fb size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xd8ff = 0xd8ff; // UNK_0xd8ff size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xd903 = 0xd903; // UNK_0xd903 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xd907 = 0xd907; // UNK_0xd907 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xd90b = 0xd90b; // UNK_0xd90b size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xd917 = 0xd917; // UNK_0xd917 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xd91b = 0xd91b; // UNK_0xd91b size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xd91f = 0xd91f; // UNK_0xd91f size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xd923 = 0xd923; // UNK_0xd923 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xd927 = 0xd927; // UNK_0xd927 size: 4
// {0x56, 0x3a, 0x20, 0x72}

const unsigned short int pp_UNK_0xd931 = 0xd931; // UNK_0xd931 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xd9fb = 0xd9fb; // UNK_0xd9fb size: 10
// {0x3a, 0x20, 0x14, 0x22, 0x00, 0x00, 0x14, 0x22, 0x00, 0x00}

const unsigned short int pp_UNK_0xda07 = 0xda07; // UNK_0xda07 size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x73}

const unsigned short int pp_UNK_0xda19 = 0xda19; // UNK_0xda19 size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x20, 0x4f, 0x56, 0x52, 0x20, 0x20, 0x72}

const unsigned short int pp_UNK_0xda2b = 0xda2b; // UNK_0xda2b size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0xd0, 0xac, 0x39, 0x35, 0x33, 0x2f, 0xda}

const unsigned short int pp_UNK_0xda3d = 0xda3d; // UNK_0xda3d size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x45, 0x54, 0x53, 0x43, 0x41, 0x4c, 0xc5}

const unsigned short int pp_UNK_0xda4f = 0xda4f; // UNK_0xda4f size: 4
// {0x56, 0x3a, 0x20, 0x6d}

const unsigned short int pp_UNK_0xda55 = 0xda55; // UNK_0xda55 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda59 = 0xda59; // UNK_0xda59 size: 6
// {0x3a, 0x20, 0x14, 0x22, 0x00, 0x00}

const unsigned short int pp_UNK_0xda61 = 0xda61; // UNK_0xda61 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda65 = 0xda65; // UNK_0xda65 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdedc = 0xdedc; // UNK_0xdedc size: 112
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x49, 0x50, 0xd4, 0xac, 0x3c, 0xc3, 0xe6, 0xdf, 0xde, 0xc8, 0x44, 0x45, 0x53, 0x43, 0x52, 0x49, 0x50, 0xb2, 0xac, 0x3c, 0xcb, 0xe6, 0x6a, 0xde, 0xc9, 0x48, 0x49, 0x54, 0x50, 0x4f, 0x49, 0x4e, 0xd4, 0xac, 0x3c, 0xd3, 0xe6, 0xaa, 0xde, 0xc8, 0x2e, 0x41, 0x52, 0x54, 0x4e, 0x41, 0x4d, 0xc5, 0xac, 0x3c, 0xd8, 0xe6, 0xfd, 0xde, 0xc6, 0x43, 0x50, 0x41, 0x55, 0x53, 0xc5, 0xac, 0x3c, 0x63, 0xe7, 0xc5, 0xde, 0xc6, 0x2d, 0x50, 0x41, 0x55, 0x53, 0xc5, 0xac, 0x3c, 0x6f, 0xe7, 0xf2, 0xe6, 0xc7, 0x57, 0x53, 0x43, 0x52, 0x4f, 0x4c, 0xcc, 0xac, 0x3c, 0x8d, 0xe7, 0xee, 0xde, 0xc8, 0x2d, 0x4c, 0x45, 0x41, 0x44, 0x49, 0x4e, 0xc7}

const unsigned short int pp_UNK_0xe280 = 0xe280; // UNK_0xe280 size: 25
// {0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00}

const unsigned short int pp_UNK_0xe563 = 0xe563; // UNK_0xe563 size: 153
// {0x00, 0x00, 0x4c, 0x22, 0xd2, 0x9f, 0x16, 0x16, 0xd8, 0x59, 0x02, 0x00, 0x0c, 0xd8, 0xf1, 0x9f, 0x5d, 0x17, 0xf4, 0x01, 0xef, 0x2a, 0x2e, 0x0f, 0xe7, 0x5e, 0x16, 0x6d, 0x3c, 0xdb, 0xdc, 0xda, 0x05, 0xde, 0x79, 0xe4, 0xfd, 0xd8, 0xae, 0x0b, 0x9f, 0x3b, 0x5d, 0x17, 0x0c, 0x00, 0x25, 0x40, 0xdb, 0xd8, 0xae, 0x0b, 0x41, 0x0e, 0x5d, 0x17, 0x13, 0x00, 0x5f, 0x12, 0xf2, 0x0e, 0x87, 0x3b, 0x5f, 0x12, 0x3e, 0x13, 0x3e, 0x13, 0xfa, 0x15, 0x12, 0x00, 0xdf, 0xd8, 0x83, 0x4a, 0xdb, 0xd8, 0xae, 0x0b, 0x20, 0x0f, 0x5d, 0x17, 0x74, 0xbe, 0xd9, 0x84, 0x90, 0x16, 0x29, 0x1d, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x4c, 0x22, 0xdb, 0xd8, 0xae, 0x0b, 0xbf, 0xe5, 0x72, 0x0f, 0x92, 0x0c, 0x90, 0x16, 0x4c, 0x22, 0xf4, 0xd7, 0xa7, 0x3b, 0x46, 0x75, 0x5d, 0x17, 0x0b, 0x00, 0x46, 0x75, 0x3e, 0x13, 0xdf, 0x79, 0x90, 0x16}

const unsigned short int pp__ro__ask_RACE_rc_ = 0xe8fd; // (?RACE) size: 55
// {0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x4c, 0x22, 0xdb, 0xd8, 0xae, 0x0b, 0xfb, 0xe8, 0x72, 0x0f, 0x92, 0x0c, 0x90, 0x16, 0x4c, 0x22, 0x2e, 0x0f, 0x8c, 0xda, 0x90, 0x16, 0x4c, 0x22, 0x3d, 0x0f, 0x8c, 0xda, 0x90, 0x16}

const unsigned short int pp_UNK_0xeeb3 = 0xeeb3; // UNK_0xeeb3 size: 3
// {0x02, 0x08, 0x01}


const unsigned short int cc_UNK_0xd90f = 0x0000; // UNK_0xd90f
const unsigned short int cc_UNK_0xd913 = 0x0000; // UNK_0xd913
const unsigned short int cc_UNK_0xd92d = 0x0000; // UNK_0xd92d
const unsigned short int cc_UNK_0xd935 = 0x0000; // UNK_0xd935
const unsigned short int cc_UNK_0xd9f7 = 0x0000; // UNK_0xd9f7
const unsigned short int cc_UNK_0xda69 = 0x0010; // UNK_0xda69
const unsigned short int cc_UNK_0xda6d = 0x0007; // UNK_0xda6d
const unsigned short int cc_UNK_0xda71 = 0x0008; // UNK_0xda71
const unsigned short int cc_UNK_0xda75 = 0x0009; // UNK_0xda75
const unsigned short int cc_UNK_0xda79 = 0x000b; // UNK_0xda79
const unsigned short int cc_UNK_0xda7d = 0x000a; // UNK_0xda7d


// 0xd7f2: db 0xd8 0x01 '  '

// ================================================
// 0xd7f4: WORD 'UNK_0xd7f6' codep=0x224c parp=0xd7f6
// ================================================

void UNK_0xd7f6() // UNK_0xd7f6
{
  Push(pp__ro_AORIGI); // (AORIGI size: 4
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd7fc: WORD 'UNK_0xd7fe' codep=0x224c parp=0xd7fe
// ================================================

void UNK_0xd7fe() // UNK_0xd7fe
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xd804: WORD 'UNK_0xd806' codep=0x224c parp=0xd806
// ================================================

void UNK_0xd806() // UNK_0xd806
{
  TIME(); // TIME
  _2_at_(); // 2@
}


// ================================================
// 0xd80c: WORD 'UNK_0xd80e' codep=0x224c parp=0xd80e
// ================================================

void UNK_0xd80e() // UNK_0xd80e
{
  _gt_C_plus_S(); // >C+S
  Push(0x65ec); // IFIELD(PHRASE$)
  Push(pp_LSCAN); // LSCAN size: 400
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN size: 400
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xd81e: WORD 'UNK_0xd820' codep=0x7420 parp=0xd820
// ================================================
// 0xd820: db 0x32 0x0b 0x01 '2  '

// ================================================
// 0xd823: WORD 'UNK_0xd825' codep=0x7420 parp=0xd825
// ================================================
// 0xd825: db 0x32 0x0c 0x01 '2  '

// ================================================
// 0xd828: WORD 'UNK_0xd82a' codep=0x7420 parp=0xd82a
// ================================================
// 0xd82a: db 0x32 0x0d 0x01 '2  '

// ================================================
// 0xd82d: WORD 'UNK_0xd82f' codep=0x7420 parp=0xd82f
// ================================================
// 0xd82f: db 0x32 0x0e 0x01 '2  '

// ================================================
// 0xd832: WORD 'UNK_0xd834' codep=0x7420 parp=0xd834
// ================================================
// 0xd834: db 0x32 0x0f 0x01 '2  '

// ================================================
// 0xd837: WORD 'UNK_0xd839' codep=0x7420 parp=0xd839
// ================================================
// 0xd839: db 0x32 0x10 0x01 '2  '

// ================================================
// 0xd83c: WORD 'UNK_0xd83e' codep=0x7420 parp=0xd83e
// ================================================
// 0xd83e: db 0x34 0x0b 0x01 '4  '

// ================================================
// 0xd841: WORD 'UNK_0xd843' codep=0x7420 parp=0xd843
// ================================================
// 0xd843: db 0x34 0x0c 0x01 '4  '

// ================================================
// 0xd846: WORD 'UNK_0xd848' codep=0x7420 parp=0xd848
// ================================================
// 0xd848: db 0x34 0x0d 0x01 '4  '

// ================================================
// 0xd84b: WORD 'UNK_0xd84d' codep=0x7420 parp=0xd84d
// ================================================
// 0xd84d: db 0x34 0x12 0x01 '4  '

// ================================================
// 0xd850: WORD 'UNK_0xd852' codep=0x7420 parp=0xd852
// ================================================
// 0xd852: db 0x34 0x1d 0x01 '4  '

// ================================================
// 0xd855: WORD 'UNK_0xd857' codep=0x7420 parp=0xd857
// ================================================
// 0xd857: db 0x34 0x13 0x01 '4  '

// ================================================
// 0xd85a: WORD 'UNK_0xd85c' codep=0x7420 parp=0xd85c
// ================================================
// 0xd85c: db 0x34 0x14 0x01 '4  '

// ================================================
// 0xd85f: WORD 'UNK_0xd861' codep=0x7420 parp=0xd861
// ================================================
// 0xd861: db 0x34 0x15 0x01 0x20 0x74 0x34 0x16 0x01 0x20 0x74 0x34 0x17 0x01 0x20 0x74 0x34 0x18 0x01 '4   t4   t4   t4  '

// ================================================
// 0xd873: WORD 'UNK_0xd875' codep=0x7420 parp=0xd875
// ================================================
// 0xd875: db 0x34 0x19 0x01 '4  '

// ================================================
// 0xd878: WORD 'UNK_0xd87a' codep=0x7420 parp=0xd87a
// ================================================
// 0xd87a: db 0x34 0x1a 0x03 '4  '

// ================================================
// 0xd87d: WORD 'UNK_0xd87f' codep=0x7420 parp=0xd87f
// ================================================
// 0xd87f: db 0x2b 0x0b 0x03 '+  '

// ================================================
// 0xd882: WORD 'UNK_0xd884' codep=0x7420 parp=0xd884
// ================================================
// 0xd884: db 0x10 0x1d 0x01 '   '

// ================================================
// 0xd887: WORD 'UNK_0xd889' codep=0x7420 parp=0xd889
// ================================================
// 0xd889: db 0x10 0x0b 0x0f 0x20 0x74 0x10 0x1b 0x01 0x20 0x74 0x10 0x1a 0x0f '    t    t   '

// ================================================
// 0xd896: WORD 'UNK_0xd898' codep=0x7420 parp=0xd898
// ================================================
// 0xd898: db 0x11 0x11 0x03 '   '

// ================================================
// 0xd89b: WORD 'UNK_0xd89d' codep=0x7420 parp=0xd89d
// ================================================
// 0xd89d: db 0x11 0x1d 0x03 '   '

// ================================================
// 0xd8a0: WORD 'UNK_0xd8a2' codep=0x7420 parp=0xd8a2
// ================================================
// 0xd8a2: db 0x14 0x45 0x04 0x20 0x74 0x14 0x17 0x02 ' E  t   '

// ================================================
// 0xd8aa: WORD 'UNK_0xd8ac' codep=0x7420 parp=0xd8ac
// ================================================
// 0xd8ac: db 0x14 0x11 0x02 '   '

// ================================================
// 0xd8af: WORD 'UNK_0xd8b1' codep=0x7420 parp=0xd8b1
// ================================================
// 0xd8b1: db 0x14 0x19 0x02 '   '

// ================================================
// 0xd8b4: WORD 'UNK_0xd8b6' codep=0x7420 parp=0xd8b6
// ================================================
// 0xd8b6: db 0x14 0x1b 0x02 '   '

// ================================================
// 0xd8b9: WORD 'UNK_0xd8bb' codep=0x7420 parp=0xd8bb
// ================================================
// 0xd8bb: db 0x14 0x1d 0x02 '   '

// ================================================
// 0xd8be: WORD 'UNK_0xd8c0' codep=0x7394 parp=0xd8c0
// ================================================
// 0xd8c0: db 0x19 0x0c 0x04 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xd8c6: WORD 'UNK_0xd8c8' codep=0x7394 parp=0xd8c8
// ================================================
// 0xd8c8: db 0x19 0x12 0x03 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xd8ce: WORD 'UNK_0xd8d0' codep=0x7420 parp=0xd8d0
// ================================================
// 0xd8d0: db 0x19 0x12 0x04 '   '

// ================================================
// 0xd8d3: WORD 'UNK_0xd8d5' codep=0x7394 parp=0xd8d5
// ================================================
// 0xd8d5: db 0x19 0x05 0x01 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xd8db: WORD 'UNK_0xd8dd' codep=0x1d29 parp=0xd8dd
// ================================================
// 0xd8dd: db 0x3a 0x20 ': '

// ================================================
// 0xd8df: WORD 'UNK_0xd8e1' codep=0x1d29 parp=0xd8e1
// ================================================
// 0xd8e1: db 0x56 0x3a 0x20 0x63 0x14 0x22 0x00 0x00 'V: c "  '

// ================================================
// 0xd8e9: WORD 'UNK_0xd8eb' codep=0x1d29 parp=0xd8eb
// ================================================
// 0xd8eb: db 0x5e 0xf4 '^ '

// ================================================
// 0xd8ed: WORD 'UNK_0xd8ef' codep=0x1d29 parp=0xd8ef
// ================================================
// 0xd8ef: db 0x3a 0x20 ': '

// ================================================
// 0xd8f1: WORD 'UNK_0xd8f3' codep=0x1d29 parp=0xd8f3
// ================================================
// 0xd8f3: db 0x3a 0x20 ': '

// ================================================
// 0xd8f5: WORD 'UNK_0xd8f7' codep=0x1d29 parp=0xd8f7
// ================================================
// 0xd8f7: db 0x3a 0x20 ': '

// ================================================
// 0xd8f9: WORD 'UNK_0xd8fb' codep=0x1d29 parp=0xd8fb
// ================================================
// 0xd8fb: db 0x3a 0x20 ': '

// ================================================
// 0xd8fd: WORD 'UNK_0xd8ff' codep=0x1d29 parp=0xd8ff
// ================================================
// 0xd8ff: db 0x3a 0x20 ': '

// ================================================
// 0xd901: WORD 'UNK_0xd903' codep=0x1d29 parp=0xd903
// ================================================
// 0xd903: db 0x3a 0x20 ': '

// ================================================
// 0xd905: WORD 'UNK_0xd907' codep=0x1d29 parp=0xd907
// ================================================
// 0xd907: db 0x3a 0x20 ': '

// ================================================
// 0xd909: WORD 'UNK_0xd90b' codep=0x1d29 parp=0xd90b
// ================================================
// 0xd90b: db 0x3a 0x20 ': '

// ================================================
// 0xd90d: WORD 'UNK_0xd90f' codep=0x2214 parp=0xd90f
// ================================================
// 0xd90f: db 0x00 0x00 '  '

// ================================================
// 0xd911: WORD 'UNK_0xd913' codep=0x2214 parp=0xd913
// ================================================
// 0xd913: db 0x00 0x00 '  '

// ================================================
// 0xd915: WORD 'UNK_0xd917' codep=0x1d29 parp=0xd917
// ================================================
// 0xd917: db 0x3a 0x20 ': '

// ================================================
// 0xd919: WORD 'UNK_0xd91b' codep=0x1d29 parp=0xd91b
// ================================================
// 0xd91b: db 0x3a 0x20 ': '

// ================================================
// 0xd91d: WORD 'UNK_0xd91f' codep=0x1d29 parp=0xd91f
// ================================================
// 0xd91f: db 0x3a 0x20 ': '

// ================================================
// 0xd921: WORD 'UNK_0xd923' codep=0x1d29 parp=0xd923
// ================================================
// 0xd923: db 0x3a 0x20 ': '

// ================================================
// 0xd925: WORD 'UNK_0xd927' codep=0x1d29 parp=0xd927
// ================================================
// 0xd927: db 0x56 0x3a 0x20 0x72 'V: r'

// ================================================
// 0xd92b: WORD 'UNK_0xd92d' codep=0x2214 parp=0xd92d
// ================================================
// 0xd92d: db 0x00 0x00 '  '

// ================================================
// 0xd92f: WORD 'UNK_0xd931' codep=0x1d29 parp=0xd931
// ================================================
// 0xd931: db 0x3a 0x20 ': '

// ================================================
// 0xd933: WORD 'UNK_0xd935' codep=0x2214 parp=0xd935
// ================================================
// 0xd935: db 0x00 0x00 '  '

// ================================================
// 0xd937: WORD 'UNK_0xd939' codep=0x224c parp=0xd939
// ================================================

void UNK_0xd939() // UNK_0xd939
{
  Push(0x65f4); // IFIELD(UNK_0xd857)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  MAX(); // MAX
}


// ================================================
// 0xd943: WORD 'UNK_0xd945' codep=0x224c parp=0xd945
// ================================================

void UNK_0xd945() // UNK_0xd945
{
  Push(pp__ask_NID); // ?NID size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xd939(); // UNK_0xd939
}


// ================================================
// 0xd953: WORD 'UNK_0xd955' codep=0x224c parp=0xd955
// ================================================

void UNK_0xd955() // UNK_0xd955
{
  Push(pp_LSCAN); // LSCAN size: 400
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
}


// ================================================
// 0xd961: WORD 'UNK_0xd963' codep=0x224c parp=0xd963
// ================================================

void UNK_0xd963() // UNK_0xd963
{
  Push(pp_LSCAN); // LSCAN size: 400
  Push(0x0190);
  Push(cc_BL); // BL
  FILL_2(); // FILL_2
  Push(pp_LSCAN); // LSCAN size: 400
  _099(); // 099
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_DICT); // DICT size: 2
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(0x65ed); // IFIELD(PHRASE)
  _plus__at_(); // +@
  Push(Pop()+3); // 3+
  _at_DS(); // @DS
  UNK_0xd955(); // UNK_0xd955
  _2OVER(); // 2OVER
  Push(Pop()-1); // 1-
  LC_at_(); // LC@
  Push(Read16(regsp)); // DUP
  _gt_R(); // >R
  LCMOVE(); // LCMOVE
  R_gt_(); // R>
  Push(pp_LSCAN); // LSCAN size: 400
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  Push(pp_LSCAN); // LSCAN size: 400
  C_ex__2(); // C!_2
  Push(cc_BL); // BL
  UNK_0xd955(); // UNK_0xd955
  C_ex__2(); // C!_2
  Push(1); // 1
  Push(pp_LSCAN); // LSCAN size: 400
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  Push(pp_LSCAN); // LSCAN size: 400
  C_ex__2(); // C!_2
  Push(2); // 2
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffc2

  Pop(); // DROP
}


// ================================================
// 0xd9b9: WORD 'UNK_0xd9bb' codep=0x224c parp=0xd9bb
// ================================================

void UNK_0xd9bb() // UNK_0xd9bb
{
  Push(pp__ask_MVT); // ?MVT size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xd939(); // UNK_0xd939
}


// ================================================
// 0xd9c9: WORD 'S>EDL' codep=0x4b3b parp=0xd9d3
// ================================================
// 0xd9d3: db 0x04 0x00 0x48 0x3a 0x12 0x00 0xbb 0xd9 0x01 0x00 0xbb 0xd9 0x02 0x00 0xbb 0xd9 0x08 0x00 0x45 0xd9 '  H:              E '

// ================================================
// 0xd9e7: WORD 'UNK_0xd9e9' codep=0x224c parp=0xd9e9
// ================================================

void UNK_0xd9e9() // UNK_0xd9e9
{
  Push(pp__ro_AORIGI); // (AORIGI size: 4
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_S(); // @INST-S
  Pop();
  switch(Pop()) // S>EDL
  {
  case 18:
    UNK_0xd9bb(); // UNK_0xd9bb
    break;
  case 1:
    UNK_0xd9bb(); // UNK_0xd9bb
    break;
  case 2:
    UNK_0xd9bb(); // UNK_0xd9bb
    break;
  case 8:
    UNK_0xd945(); // UNK_0xd945
    break;
  default:
    NOP(); // NOP
    break;

  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xd9f5: WORD 'UNK_0xd9f7' codep=0x2214 parp=0xd9f7
// ================================================
// 0xd9f7: db 0x00 0x00 '  '

// ================================================
// 0xd9f9: WORD 'UNK_0xd9fb' codep=0x1d29 parp=0xd9fb
// ================================================
// 0xd9fb: db 0x3a 0x20 0x14 0x22 0x00 0x00 0x14 0x22 0x00 0x00 ':  "   "  '

// ================================================
// 0xda05: WORD 'UNK_0xda07' codep=0x1d29 parp=0xda07
// ================================================
// 0xda07: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x72 0x69 0x61 0x62 0x6c 0x65 0x73 ':  ALLOT riables'

// ================================================
// 0xda17: WORD 'UNK_0xda19' codep=0x1d29 parp=0xda19
// ================================================
// 0xda19: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x20 0x4f 0x56 0x52 0x20 0x20 0x72 ':  ALLOT  OVR  r'

// ================================================
// 0xda29: WORD 'UNK_0xda2b' codep=0x1d29 parp=0xda2b
// ================================================
// 0xda2b: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0xd0 0xac 0x39 0x35 0x33 0x2f 0xda ':  ALLOT   953/ '

// ================================================
// 0xda3b: WORD 'UNK_0xda3d' codep=0x1d29 parp=0xda3d
// ================================================
// 0xda3d: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x45 0x54 0x53 0x43 0x41 0x4c 0xc5 ':  ALLOT ETSCAL '

// ================================================
// 0xda4d: WORD 'UNK_0xda4f' codep=0x1d29 parp=0xda4f
// ================================================
// 0xda4f: db 0x56 0x3a 0x20 0x6d 'V: m'

// ================================================
// 0xda53: WORD 'UNK_0xda55' codep=0x1d29 parp=0xda55
// ================================================
// 0xda55: db 0x3a 0x20 ': '

// ================================================
// 0xda57: WORD 'UNK_0xda59' codep=0x1d29 parp=0xda59
// ================================================
// 0xda59: db 0x3a 0x20 0x14 0x22 0x00 0x00 ':  "  '

// ================================================
// 0xda5f: WORD 'UNK_0xda61' codep=0x1d29 parp=0xda61
// ================================================
// 0xda61: db 0x3a 0x20 ': '

// ================================================
// 0xda63: WORD 'UNK_0xda65' codep=0x1d29 parp=0xda65
// ================================================
// 0xda65: db 0x3a 0x20 ': '

// ================================================
// 0xda67: WORD 'UNK_0xda69' codep=0x2214 parp=0xda69
// ================================================
// 0xda69: db 0x10 0x00 '  '

// ================================================
// 0xda6b: WORD 'UNK_0xda6d' codep=0x2214 parp=0xda6d
// ================================================
// 0xda6d: db 0x07 0x00 '  '

// ================================================
// 0xda6f: WORD 'UNK_0xda71' codep=0x2214 parp=0xda71
// ================================================
// 0xda71: db 0x08 0x00 '  '

// ================================================
// 0xda73: WORD 'UNK_0xda75' codep=0x2214 parp=0xda75
// ================================================
// 0xda75: db 0x09 0x00 '  '

// ================================================
// 0xda77: WORD 'UNK_0xda79' codep=0x2214 parp=0xda79
// ================================================
// 0xda79: db 0x0b 0x00 '  '

// ================================================
// 0xda7b: WORD 'UNK_0xda7d' codep=0x2214 parp=0xda7d
// ================================================
// 0xda7d: db 0x0a 0x00 0x20 0x74 0x3d 0x1b 0x01 '   t=  '

// ================================================
// 0xda84: WORD 'UNK_0xda86' codep=0x224c parp=0xda86
// ================================================

void UNK_0xda86() // UNK_0xda86
{
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xda8c: WORD 'UNK_0xda8e' codep=0x224c parp=0xda8e
// ================================================

void UNK_0xda8e() // UNK_0xda8e
{
  Push(pp_A_dash_POSTU); // A-POSTU size: 2
  Push(Read8(Pop())&0xFF); // C@
  _eq_(); // =
}


// ================================================
// 0xda96: WORD 'UNK_0xda98' codep=0x224c parp=0xda98
// ================================================

void UNK_0xda98() // UNK_0xda98
{
  Push(cc_UNK_0xd935); // UNK_0xd935
  if (Pop() == 0) goto label1;
  SetColor("RED");
  return;

  label1:
  SetColor("WHITE");
}


// ================================================
// 0xdaa8: WORD 'ORIGINATOR>' codep=0x224c parp=0xdab8
// ================================================
// entry

void ORIGINATOR_gt_() // ORIGINATOR>
{
  Push(pp__ro_ORIGIN); // (ORIGIN size: 4
  _at__gt_C_plus_S(); // @>C+S
  SetColor("WHITE");
  UNK_0xda98(); // UNK_0xda98
  Push(0x65ec); // IFIELD(UNK_0xd83e)
  Push(Read8(Pop())&0xFF); // C@
  I_gt_C(); // I>C
  _ask_MRC(); // ?MRC
  Push(pp_CTCOLOR); // CTCOLOR size: 2
  _ex__2(); // !_2
}


// ================================================
// 0xdace: WORD 'A>ORIGINATO' codep=0x224c parp=0xdade
// ================================================
// entry

void A_gt_ORIGINATO() // A>ORIGINATO
{
  Push(pp__ro_AORIGI); // (AORIGI size: 4
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_ORIGIN); // (ORIGIN size: 4
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp_A_dash_POSTU); // A-POSTU size: 2
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xd907); // UNK_0xd907 size: 0
  _ex__2(); // !_2
  Push(pp_UNK_0xd8ff); // UNK_0xd8ff size: 0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xd917); // UNK_0xd917 size: 0
  _ex__2(); // !_2
  Push(0xd935);
  ON_2(); // ON_2
}


// ================================================
// 0xdafe: WORD 'UNK_0xdb00' codep=0x224c parp=0xdb00
// ================================================

void UNK_0xdb00() // UNK_0xdb00
{
  Push2Words("*COMM");
  Push(pp__ro_ORIGIN); // (ORIGIN size: 4
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp_P_dash_POSTU); // P-POSTU size: 2
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xd907); // UNK_0xd907 size: 0
  _ex__2(); // !_2
  Push(pp_UNK_0xd8f3); // UNK_0xd8f3 size: 0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xd917); // UNK_0xd917 size: 0
  _ex__2(); // !_2
}


// ================================================
// 0xdb18: WORD 'UNK_0xdb1a' codep=0x224c parp=0xdb1a
// ================================================

void UNK_0xdb1a() // UNK_0xdb1a
{
  Push(pp_UNK_0xd8e1); // UNK_0xd8e1 size: 0
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xdb20: WORD 'UNK_0xdb22' codep=0x224c parp=0xdb22
// ================================================

void UNK_0xdb22() // UNK_0xdb22
{
  Push(pp_UNK_0xda4f); // UNK_0xda4f size: 0
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65f0); // IFIELD(UNK_0xd834)
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdb2e: WORD 'UNK_0xdb30' codep=0x224c parp=0xdb30
// ================================================

void UNK_0xdb30() // UNK_0xdb30
{
  Push(pp_UNK_0xda4f); // UNK_0xda4f size: 0
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65f1); // IFIELD(UNK_0xd839)
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdb3c: WORD 'UNK_0xdb3e' codep=0x224c parp=0xdb3e
// ================================================

void UNK_0xdb3e() // UNK_0xdb3e
{
  Push(pp_UNK_0xd8ff); // UNK_0xd8ff size: 0
  _ex__2(); // !_2
}


// ================================================
// 0xdb44: WORD 'P>AFIELD' codep=0x4b3b parp=0xdb51
// ================================================
// 0xdb51: db 0x02 0x00 0x66 0xd8 0x02 0x00 0x6b 0xd8 0x08 0x00 0x70 0xd8 0x4c 0x22 0xef 0x64 0x2f 0x7a 0x4b 0x55 0xae 0x0b 0x4f 0xdb 0xaf 0x4c 0xdf 0x79 0x90 0x16 '  f   k   p L" d/zKU  O  L y  '

// ================================================
// 0xdb6f: WORD 'UNK_0xdb71' codep=0x224c parp=0xdb71
// ================================================

void UNK_0xdb71() // UNK_0xdb71
{
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  NEW_dash_BUT(); // NEW-BUT
}


// ================================================
// 0xdb7f: WORD 'UNK_0xdb81' codep=0x224c parp=0xdb81
// ================================================

void UNK_0xdb81() // UNK_0xdb81
{

  label1:
  UNK_0xdb71(); // UNK_0xdb71
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label1;
  SetColor("BLUE");
  Push(pp_THIS_dash_BU); // THIS-BU size: 2
  Push(Read16(Pop())); // @
  _dot_ON(); // .ON
}


// ================================================
// 0xdb93: WORD 'UNK_0xdb95' codep=0x224c parp=0xdb95
// ================================================

void UNK_0xdb95() // UNK_0xdb95
{
  UNK_0xdb00(); // UNK_0xdb00
  SetColor("WHITE");
  Push(pp_CTCOLOR); // CTCOLOR size: 2
  _ex__2(); // !_2
}


// ================================================
// 0xdb9f: WORD 'UNK_0xdba1' codep=0x3b74 parp=0xdba1
// ================================================
// 0xdba1: db 0x14 0x00 0x0a 0x00 '    '

// ================================================
// 0xdba5: WORD 'UNK_0xdba7' codep=0x3b74 parp=0xdba7
// ================================================
// 0xdba7: db 0x0f 0x00 0x0a 0x00 '    '

// ================================================
// 0xdbab: WORD 'UNK_0xdbad' codep=0x3b74 parp=0xdbad
// ================================================
// 0xdbad: db 0x0a 0x00 0x05 0x00 '    '

// ================================================
// 0xdbb1: WORD 'UNK_0xdbb3' codep=0x3b74 parp=0xdbb3
// ================================================
// 0xdbb3: db 0x07 0x00 0x04 0x00 '    '

// ================================================
// 0xdbb7: WORD '#PHR' codep=0x4b3b parp=0xdbc0
// ================================================
// 0xdbc0: db 0x04 0x00 0xa8 0x49 0x01 0x00 0xa1 0xdb 0x02 0x00 0xa7 0xdb 0x04 0x00 0xad 0xdb 0x08 0x00 0xb3 0xdb '   I                '

// ================================================
// 0xdbd4: WORD 'UNK_0xdbd6' codep=0x224c parp=0xdbd6
// ================================================

void UNK_0xdbd6() // UNK_0xdbd6
{
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd size: 0
  Push(Read16(Pop())); // @
  Push(0x0012);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0x03e8);
  goto label2;

  label1:
  Push(pp_A_dash_POSTU); // A-POSTU size: 2
  Push(Read16(Pop())); // @
  Pop();
  switch(Pop()) // #PHR
  {
  case 1:
    UNK_0xdba1(); // UNK_0xdba1
    break;
  case 2:
    UNK_0xdba7(); // UNK_0xdba7
    break;
  case 4:
    UNK_0xdbad(); // UNK_0xdbad
    break;
  case 8:
    UNK_0xdbb3(); // UNK_0xdbb3
    break;
  default:
    NULL(); // NULL
    break;

  }
  RRND(); // RRND

  label2:
  Push(pp_UNK_0xd91f); // UNK_0xd91f size: 0
  _ex__2(); // !_2
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xdbfc: WORD 'N>POST' codep=0x4b3b parp=0xdc07
// ================================================
// 0xdc07: db 0x04 0x00 0x30 0x0f 0x00 0x00 0x3f 0x0f 0x01 0x00 0x89 0x3b 0x02 0x00 0xa9 0x3b 0x03 0x00 0x69 0xda '  0   ?    ;   ;  i '

// ================================================
// 0xdc1b: WORD 'UNK_0xdc1d' codep=0x224c parp=0xdc1d
// ================================================

void UNK_0xdc1d() // UNK_0xdc1d
{
  Push(pp__ro_AORIGI); // (AORIGI size: 4
  _at__gt_C_plus_S(); // @>C+S
  Push(pp_EDL); // EDL size: 2
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x65f4); // IFIELD(UNK_0xd857)
  Push(Read8(Pop())&0xFF); // C@
  _st_(); // <
  if (Pop() == 0) Push(1); else Push(0); // NOT
  OVER(); // OVER
  Push(0x65f5); // IFIELD(UNK_0xd85c)
  Push(Read8(Pop())&0xFF); // C@
  _st_(); // <
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x65f6); // IFIELD(UNK_0xd861)
  Push(Read8(Pop())&0xFF); // C@
  _st_(); // <
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xd9fb); // UNK_0xd9fb size: 0
  Push(Read16(Pop())); // @
  Push(pp_A_dash_STREN); // A-STREN size: 2
  Push(Read16(Pop())); // @
  _dash_(); // -
  _2DUP(); // 2DUP
  Push(cc__5); // 5
  _gt_(); // >
  SWAP(); // SWAP
  Push(cc__3); // 3
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  ROT(); // ROT
  Push(2); // 2
  _eq_(); // =
  ROT(); // ROT
  Push(0x000f);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Pop();
  switch(Pop()) // N>POST
  {
  case 0:
    Push(2); // 2
    break;
  case 1:
    Push(cc__4); // 4
    break;
  case 2:
    Push(cc__8); // 8
    break;
  case 3:
    Push(cc_UNK_0xda69); // UNK_0xda69
    break;
  default:
    Push(1); // 1
    break;

  }
  Push(pp_A_dash_POSTU); // A-POSTU size: 2
  _ex__2(); // !_2
}


// ================================================
// 0xdc81: WORD 'UNK_0xdc83' codep=0x224c parp=0xdc83
// ================================================

void UNK_0xdc83() // UNK_0xdc83
{
  Push(pp_A_dash_POSTU); // A-POSTU size: 2
  Push(Read16(Pop())); // @
  UNK_0xdc1d(); // UNK_0xdc1d
  Push(pp_A_dash_POSTU); // A-POSTU size: 2
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(1); // 1
  _eq_(); // =
  _gt_R(); // >R
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  R_gt_(); // R>
  Push(Pop() & Pop()); // AND
  Push(pp__ask_COMBAT); // ?COMBAT size: 2
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  UNK_0xd7f6(); // UNK_0xd7f6
  Push(0x65ee); // IFIELD(UNK_0xd848)
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push2Words("*PLIST");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x00fb);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  CTINIT(); // CTINIT
  Push(0xbe45);
  MODULE(); // MODULE
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE

  label1:
  UNK_0xdbd6(); // UNK_0xdbd6
}


// ================================================
// 0xdcd5: WORD 'EDL>P' codep=0x224c parp=0xdcdf
// ================================================
// entry

void EDL_gt_P() // EDL>P
{
  Push(pp_A_dash_STREN); // A-STREN size: 2
  _099(); // 099
  Push(pp_UNK_0xd9fb); // UNK_0xd9fb size: 0
  _099(); // 099
  UNK_0xdc1d(); // UNK_0xdc1d
}


// ================================================
// 0xdceb: WORD '+!EDL' codep=0x224c parp=0xdcf5
// ================================================
// entry

void _plus__ex_EDL() // +!EDL
{
  Push(pp_EDL); // EDL size: 2
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(0x0064);
  MIN(); // MIN
  UNK_0xd9e9(); // UNK_0xd9e9
  Push(pp_EDL); // EDL size: 2
  _ex__2(); // !_2
  UNK_0xdc83(); // UNK_0xdc83
  Push(pp_UNK_0xd8f3); // UNK_0xd8f3 size: 0
  _099(); // 099
}


// ================================================
// 0xdd13: WORD 'UNK_0xdd15' codep=0x224c parp=0xdd15
// ================================================

void UNK_0xdd15() // UNK_0xdd15
{
  UNK_0xd806(); // UNK_0xd806
  Push(pp_UNK_0xd90b); // UNK_0xd90b size: 0
  Push(Read16(Pop())); // @
  Push(0x001b);
  U_star_(); // U*
  OVER(); // OVER
  Push(Pop()*2); // 2*
  Push(cc_UNK_0xd935); // UNK_0xd935
  U_star_(); // U*
  D_plus_(); // D+
  D_plus_(); // D+
  Push(pp_OK_dash_TALK); // OK-TALK size: 4
  D_ex_(); // D!
}

// 0xdd33: db 0x4c 0x22 0x04 0xd8 0x16 0x16 0x98 0x3a 0x00 0x00 0x65 0x10 0x25 0xd9 0x4c 0x6d 0x90 0x16 'L"     :  e % Lm  '

// ================================================
// 0xdd45: WORD 'UNK_0xdd47' codep=0x224c parp=0xdd47
// ================================================

void UNK_0xdd47() // UNK_0xdd47
{
  _gt_R(); // >R
  R_gt_(); // R>
  BIT(); // BIT
  Push(pp_UNK_0xda61); // UNK_0xda61 size: 0
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xdd57: WORD 'UNK_0xdd59' codep=0x224c parp=0xdd59
// ================================================

void UNK_0xdd59() // UNK_0xdd59
{
  Push(0); // 0
  Push(0x0100);
  Push(pp_UNK_0xd923); // UNK_0xd923 size: 0
  _ex__2(); // !_2

  label2:
  Push(0x65ee); // IFIELD(UNK_0xd82a)
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xd923); // UNK_0xd923 size: 0
  Push(Read16(Pop())); // @
  _st_(); // <
  Push(0x65ed); // IFIELD(UNK_0xd825)
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xd907); // UNK_0xd907 size: 0
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() & Pop()); // AND
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(0x65ec); // IFIELD(UNK_0xd820)
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xd931); // UNK_0xd931 size: 0
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  CI(); // CI
  Push(pp_UNK_0xd8e1); // UNK_0xd8e1 size: 0
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0x65ee); // IFIELD(UNK_0xd82a)
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xd923); // UNK_0xd923 size: 0
  _ex__2(); // !_2
  Pop(); // DROP
  Push(1); // 1

  label1:
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label2;
}


// ================================================
// 0xdda9: WORD 'UNK_0xddab' codep=0x224c parp=0xddab
// ================================================

void UNK_0xddab() // UNK_0xddab
{
  Push(pp_UNK_0xd917); // UNK_0xd917 size: 0
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(1); // 1
  Push(2); // 2
  WITHIN(); // WITHIN
  SWAP(); // SWAP
  Push(cc__5); // 5
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xddc3: WORD 'UNK_0xddc5' codep=0x224c parp=0xddc5
// ================================================

void UNK_0xddc5() // UNK_0xddc5
{
  Push(pp_UNK_0xd917); // UNK_0xd917 size: 0
  Push(Read16(Pop())); // @
  Push(0x0033);
  OVER(); // OVER
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  SWAP(); // SWAP
  UNK_0xdd47(); // UNK_0xdd47
  Push(Pop() | Pop()); // OR
  Push(cc_UNK_0xd935); // UNK_0xd935
  Push(pp_UNK_0xd931); // UNK_0xd931 size: 0
  Push(Read16(Pop())); // @
  Push(2); // 2
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xddab(); // UNK_0xddab
  Push(Pop() | Pop()); // OR

  label1:
  if (Pop() == 0) return;
  IFIRST(); // IFIRST
  Push(0x0033);
  Push(cc__5); // 5
  IFIND(); // IFIND
  Pop(); // DROP
  Push(cc__5); // 5
  Push(pp_UNK_0xd917); // UNK_0xd917 size: 0
  _ex__2(); // !_2
}


// ================================================
// 0xde05: WORD 'UNK_0xde07' codep=0x224c parp=0xde07
// ================================================

void UNK_0xde07() // UNK_0xde07
{
  Push2Words("NULL");
  Push(pp_UNK_0xd8e1); // UNK_0xd8e1 size: 0
  _1_dot_5_ex__2(); // 1.5!_2
  ORIGINATOR_gt_(); // ORIGINATOR>
  _ask_CHILD(); // ?CHILD
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  UNK_0xddc5(); // UNK_0xddc5
  _ask_CHILD(); // ?CHILD
  if (Pop() == 0) goto label2;
  IOPEN(); // IOPEN
  UNK_0xdd59(); // UNK_0xdd59
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label3;
  ICLOSE(); // ICLOSE
  Push(cc__5); // 5
  Push(pp_UNK_0xd917); // UNK_0xd917 size: 0
  _ex__2(); // !_2
  UNK_0xddc5(); // UNK_0xddc5
  IOPEN(); // IOPEN
  UNK_0xdd59(); // UNK_0xdd59
  Pop(); // DROP

  label3:
  CDROP(); // CDROP

  label2:
  CDROP(); // CDROP

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xde41: WORD 'UNK_0xde43' codep=0x224c parp=0xde43
// ================================================

void UNK_0xde43() // UNK_0xde43
{
  Push(0x003a);
  Push(pp_FILE_n_); // FILE# size: 2
  _ex__2(); // !_2
  Push(cc__5); // 5
  Push(pp_RECORD_n_); // RECORD# size: 2
  _ex__2(); // !_2
}


// ================================================
// 0xde53: WORD 'UNK_0xde55' codep=0x224c parp=0xde55
// ================================================

void UNK_0xde55() // UNK_0xde55
{
  LoadData("1BTN"); // from 'ANALYZE-TEXT'
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  SET_dash_CUR(); // SET-CUR
}

// 0xde5f: db 0x4c 0x22 0x41 0xde 0x07 0x3f 0x07 0x52 0x45 0x53 0x50 0x4f 0x4e 0x44 0x53 0xde 0x90 0x16 'L"A  ? RESPONDS   '

// ================================================
// 0xde71: WORD '>HAIL$' codep=0x224c parp=0xde7c
// ================================================
// entry

void _gt_HAIL_do_() // >HAIL$
{
  UNK_0xde43(); // UNK_0xde43

  UNK_0x3f09("HAIL   ");
  UNK_0xde55(); // UNK_0xde55
}


// ================================================
// 0xde8c: WORD 'UNK_0xde8e' codep=0x224c parp=0xde8e
// ================================================

void UNK_0xde8e() // UNK_0xde8e
{
  Push(cc__dash_1); // -1
  Push(pp_LSCAN); // LSCAN size: 400
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  Push(pp_LSCAN); // LSCAN size: 400
  C_ex__2(); // C!_2
}


// ================================================
// 0xde9c: WORD 'UNK_0xde9e' codep=0x224c parp=0xde9e
// ================================================

void UNK_0xde9e() // UNK_0xde9e
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
  C_ex__2(); // C!_2
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xdebc: WORD 'UNK_0xdebe' codep=0x224c parp=0xdebe
// ================================================

void UNK_0xdebe() // UNK_0xdebe
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
// 0xdeda: WORD 'UNK_0xdedc' codep=0x1d29 parp=0xdedc
// ================================================
// 0xdedc: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x49 0x50 0xd4 0xac 0x3c 0xc3 0xe6 0xdf 0xde 0xc8 0x44 0x45 0x53 0x43 0x52 0x49 0x50 0xb2 0xac 0x3c 0xcb 0xe6 0x6a 0xde 0xc9 0x48 0x49 0x54 0x50 0x4f 0x49 0x4e 0xd4 0xac 0x3c 0xd3 0xe6 0xaa 0xde 0xc8 0x2e 0x41 0x52 0x54 0x4e 0x41 0x4d 0xc5 0xac 0x3c 0xd8 0xe6 0xfd 0xde 0xc6 0x43 0x50 0x41 0x55 0x53 0xc5 0xac 0x3c 0x63 0xe7 0xc5 0xde 0xc6 0x2d 0x50 0x41 0x55 0x53 0xc5 0xac 0x3c 0x6f 0xe7 0xf2 0xe6 0xc7 0x57 0x53 0x43 0x52 0x4f 0x4c 0xcc 0xac 0x3c 0x8d 0xe7 0xee 0xde 0xc8 0x2d 0x4c 0x45 0x41 0x44 0x49 0x4e 0xc7 ':  ALLOT IP  <     DESCRIP  <  j  HITPOIN  <     .ARTNAM  <     CPAUS  <c    -PAUS  <o    WSCROL  <     -LEADIN '

// ================================================
// 0xdf4c: WORD 'UNK_0xdf4e' codep=0x224c parp=0xdf4e
// ================================================

void UNK_0xdf4e() // UNK_0xdf4e
{
  Push(pp_UNK_0xdedc); // UNK_0xdedc size: 0
  Push(0x0070);
  Push(cc_BL); // BL
  FILL_2(); // FILL_2
  ORIGINATOR_gt_(); // ORIGINATOR>
  Push(0x65fb); // IFIELD(UNK_0xd87a)
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x0010);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x65ec); // IFIELD(PHRASE$)
  COUNT(); // COUNT
  UNK_0xd963(); // UNK_0xd963
  UNK_0xde8e(); // UNK_0xde8e
  Push(pp_LSCAN); // LSCAN size: 400
  Push(pp_UNK_0xdedc); // UNK_0xdedc size: 0
  Push(i); // I
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  CMOVE_2(); // CMOVE_2
  INEXT(); // INEXT
  i++;
  } while(i<imax); // (LOOP) 0xffe0

  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xdf90: WORD 'UNK_0xdf92' codep=0x224c parp=0xdf92
// ================================================

void UNK_0xdf92() // UNK_0xdf92
{
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdedc); // UNK_0xdedc size: 0
  Push(Pop() + Pop()); // +
  COUNT(); // COUNT
}


// ================================================
// 0xdf9e: WORD '1SYL' codep=0x224c parp=0xdfa7
// ================================================
// entry

void _1SYL() // 1SYL
{
  Push(0); // 0
  Push(0x0010);
  RRND(); // RRND
  UNK_0xdf92(); // UNK_0xdf92
  Pop(); // DROP
  Push(Pop()-1); // 1-
  PAD(); // PAD
  _do__ex_(); // $!
}


// ================================================
// 0xdfbb: WORD 'UNK_0xdfbd' codep=0x224c parp=0xdfbd
// ================================================

void UNK_0xdfbd() // UNK_0xdfbd
{
  PAD(); // PAD
  Push(0x0040);
  Push(cc_BL); // BL
  FILL_2(); // FILL_2
  Push(0); // 0
  PAD(); // PAD
  C_ex__2(); // C!_2
  ORIGINATOR_gt_(); // ORIGINATOR>
  Push(0x65fa); // IFIELD(UNK_0xd875)
  Push(Read8(Pop())&0xFF); // C@
  _gt_R(); // >R
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  R_gt_(); // R>
  MOD(); // MOD
  Push(Pop()+2); // 2+
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  _2DUP(); // 2DUP
  UNK_0xdebe(); // UNK_0xdebe
  Push(i); // I
  Push(Pop() * Pop()); // *
  Push(0x0010);
  MOD(); // MOD
  UNK_0xdf92(); // UNK_0xdf92
  UNK_0xde9e(); // UNK_0xde9e
  i++;
  } while(i<imax); // (LOOP) 0xffec

  Pop(); Pop();// 2DROP
  PAD(); // PAD
  COUNT(); // COUNT
  _dash_TRAILING(); // -TRAILING
}


// ================================================
// 0xe003: WORD 'UNK_0xe005' codep=0x224c parp=0xe005
// ================================================

void UNK_0xe005() // UNK_0xe005
{
  Push(1); // 1
  Push(pp_LINE_dash_CO); // LINE-CO size: 2
  _ex__2(); // !_2
  CTINIT(); // CTINIT
  Push(0x5963); Push(0x0002);
  UNK_0xd80e(); // UNK_0xd80e
  _dot_TTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
}


// ================================================
// 0xe01f: WORD 'UNK_0xe021' codep=0x224c parp=0xe021
// ================================================

void UNK_0xe021() // UNK_0xe021
{
  Push(cc_UNK_0xd935); // UNK_0xd935
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_P_dash_POSTU); // P-POSTU size: 2
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _st_(); // <
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xe005(); // UNK_0xe005
  Push(0x597d); Push(0x0002);
  UNK_0xd80e(); // UNK_0xd80e
  _dot_TTY(); // .TTY
}


// ================================================
// 0xe041: WORD 'UNK_0xe043' codep=0x224c parp=0xe043
// ================================================

void UNK_0xe043() // UNK_0xe043
{
  Push(cc_UNK_0xd9f7); // UNK_0xd9f7
  Push(cc_UNK_0xd935); // UNK_0xd935
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
  Push(pp_UNK_0xda55); // UNK_0xda55 size: 0
  Push(Read16(Pop())); // @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe069: WORD 'UNK_0xe06b' codep=0x224c parp=0xe06b
// ================================================

void UNK_0xe06b() // UNK_0xe06b
{
  Push(pp_TERMINA); // TERMINA size: 2
  ON_2(); // ON_2
  Push(pp__pe_TALK); // %TALK size: 2
  _099(); // 099
  UNK_0xe021(); // UNK_0xe021
  Push(0xae81);
  Push(pp__i_EXTERN); // 'EXTERN size: 2
  _ex__2(); // !_2
}


// ================================================
// 0xe07f: WORD 'UNK_0xe081' codep=0x224c parp=0xe081
// ================================================

void UNK_0xe081() // UNK_0xe081
{
  Push(pp_ESC_dash_EN); // ESC-EN size: 2
  _099(); // 099
  Push(pp__ask_ON_dash_PLA); // ?ON-PLA size: 2
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(h); // I
  if (Pop() == 0) goto label1;
  SetColor("PINK");
  goto label2;

  label1:
  SetColor("BLUE");

  label2:
  _ask_CGA(); // ?CGA
  if (Pop() == 0) goto label3;
  Pop(); // DROP
  SetColor("WHITE");

  label3:
  _ex_COLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  UNK_0xd806(); // UNK_0xd806
  D_plus_(); // D+

  label4:
  UNK_0xd806(); // UNK_0xd806
  _2OVER(); // 2OVER
  D_gt_(); // D>
  _i_KEY(); // 'KEY
  Push(0x0020);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label4;
  R_gt_(); // R>
  if (Pop() == 0) goto label5;
  SetColor("RED");
  goto label6;

  label5:
  SetColor("DK-BLUE");

  label6:
  _ex_COLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  Push(pp_CTCOLOR); // CTCOLOR size: 2
  Push(Read16(Pop())); // @
  _ex_COLOR(); // !COLOR
  Pop(); Pop();// 2DROP
  Push(pp_ESC_dash_EN); // ESC-EN size: 2
  ON_2(); // ON_2
}


// ================================================
// 0xe0df: WORD 'UNK_0xe0e1' codep=0x224c parp=0xe0e1
// ================================================

void UNK_0xe0e1() // UNK_0xe0e1
{
  Push(0x2710); Push(0x0000);
  UNK_0xe081(); // UNK_0xe081
  Pop(); // DROP
  UNK_0xe06b(); // UNK_0xe06b
}


// ================================================
// 0xe0ef: WORD 'ACASE' codep=0x4b3b parp=0xe0f9
// ================================================
// 0xe0f9: db 0x02 0x00 0x34 0x0e 0x00 0x00 0xf5 0xdc 0x01 0x00 0xe1 0xe0 '  4         '

// ================================================
// 0xe105: WORD 'UNK_0xe107' codep=0x224c parp=0xe107
// ================================================

void UNK_0xe107() // UNK_0xe107
{
  UNK_0xdb1a(); // UNK_0xdb1a
  Push(0x65ef); // IFIELD(UNK_0xd82f)
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
  Push(pp__ro_ORIGIN); // (ORIGIN size: 4
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_AORIGI); // (AORIGI size: 4
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Push(Read16(regsp)); // DUP
  Push(0x007f);
  _eq_(); // =
  OVER(); // OVER
  Push(0xff81);
  _eq_(); // =
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Pop();
  switch(Pop()) // ACASE
  {
  case 0:
    _plus__ex_EDL(); // +!EDL
    break;
  case 1:
    UNK_0xe0e1(); // UNK_0xe0e1
    break;
  default:
    Pop(); // DROP
    break;

  }
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xe13b: WORD 'UNK_0xe13d' codep=0x224c parp=0xe13d
// ================================================

void UNK_0xe13d() // UNK_0xe13d
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
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+
  goto label2;

  label1:
  LEAVE(); // LEAVE

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffea

  _gt_R(); // >R
  SWAP(); // SWAP
  Push(i); // I
  _dash_(); // -
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
  SWAP(); // SWAP
}


// ================================================
// 0xe16b: WORD 'UNK_0xe16d' codep=0x224c parp=0xe16d
// ================================================

void UNK_0xe16d() // UNK_0xe16d
{
  UNK_0xe13d(); // UNK_0xe13d
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
  _eq_(); // =
  Push(i); // I
  Push(Pop()+1); // 1+
  Push(i); // I'
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(i); // I
  Push(cc__3); // 3
  PICK(); // PICK
  _dash_(); // -
  LEAVE(); // LEAVE

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
// 0xe1bf: WORD 'UNK_0xe1c1' codep=0x224c parp=0xe1c1
// ================================================

void UNK_0xe1c1() // UNK_0xe1c1
{
  Push(Pop()-1); // 1-
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
}


// ================================================
// 0xe1cb: WORD 'UNK_0xe1cd' codep=0x224c parp=0xe1cd
// ================================================

void UNK_0xe1cd() // UNK_0xe1cd
{
  Push(pp_CTX); // CTX size: 2
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x0026);
  _st_(); // <
}


// ================================================
// 0xe1db: WORD 'CTSCROLL' codep=0x224c parp=0xe1e8
// ================================================
// entry

void CTSCROLL() // CTSCROLL
{
  Push(1); // 1
  Push(pp_LINE_dash_CO); // LINE-CO size: 2
  _plus__ex__2(); // +!_2
  Push(pp_LINE_dash_CO); // LINE-CO size: 2
  Push(Read16(Pop())); // @
  Push(pp_WLINES); // WLINES size: 2
  Push(Read16(Pop())); // @
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x4e20); Push(0x0000);
  UNK_0xe081(); // UNK_0xe081
  Push(pp_LINE_dash_CO); // LINE-CO size: 2
  _099(); // 099

  label1:
  WUP(); // WUP
}


// ================================================
// 0xe20c: WORD 'UNK_0xe20e' codep=0x224c parp=0xe20e
// ================================================

void UNK_0xe20e() // UNK_0xe20e
{
  _gt_R(); // >R
  R_at_(); // R@
  Push(0x002e);
  _eq_(); // =
  R_at_(); // R@
  Push(0x003f);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  R_at_(); // R@
  Push(0x002c);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  R_gt_(); // R>
  Push(0x0027);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe238: WORD 'UNK_0xe23a' codep=0x224c parp=0xe23a
// ================================================

void UNK_0xe23a() // UNK_0xe23a
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(Read16(regsp)); // DUP
  UNK_0xe1cd(); // UNK_0xe1cd
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  CTSCROLL(); // CTSCROLL
  Push(0); // 0
  Push(cc__6); // 6
  CTPOS_dot_(); // CTPOS.
  Push(cc__dash_1); // -1
  Push(pp_YBLT); // YBLT size: 2
  _plus__ex__2(); // +!_2

  label2:
  OVER(); // OVER
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xe20e(); // UNK_0xe20e
  Push(pp_CTX); // CTX size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  SPACE(); // SPACE

  label3:
  Push(Read16(regsp)); // DUP
  Push(pp_CTX); // CTX size: 2
  _plus__ex__2(); // +!_2
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xe27e: WORD 'UNK_0xe280' codep=0x1d29 parp=0xe280
// ================================================
// 0xe280: db 0x00 0x01 0x01 0x00 0x01 0x01 0x01 0x01 0x01 0x00 0x01 0x01 0x00 0x00 0x00 0x00 0x00 0x00 0x01 0x01 0x00 0x00 0x00 0x00 0x00 '                         '

// ================================================
// 0xe299: WORD 'UNK_0xe29b' codep=0x224c parp=0xe29b
// ================================================

void UNK_0xe29b() // UNK_0xe29b
{
  Push(pp_UNK_0xda07); // UNK_0xda07 size: 0
  COUNT(); // COUNT
}


// ================================================
// 0xe2a1: WORD 'UNK_0xe2a3' codep=0x224c parp=0xe2a3
// ================================================

void UNK_0xe2a3() // UNK_0xe2a3
{
  Push(pp_UNK_0xda19); // UNK_0xda19 size: 0
  COUNT(); // COUNT
}


// ================================================
// 0xe2a9: WORD 'UNK_0xe2ab' codep=0x224c parp=0xe2ab
// ================================================

void UNK_0xe2ab() // UNK_0xe2ab
{
  Push(pp_UNK_0xda2b); // UNK_0xda2b size: 0
  COUNT(); // COUNT
}


// ================================================
// 0xe2b1: WORD 'UNK_0xe2b3' codep=0x224c parp=0xe2b3
// ================================================

void UNK_0xe2b3() // UNK_0xe2b3
{

  UNK_0x3f09("ISS");
  UNK_0xe23a(); // UNK_0xe23a
  Push(pp_UNK_0xda3d); // UNK_0xda3d size: 0
  COUNT(); // COUNT
}


// ================================================
// 0xe2c1: WORD 'UNK_0xe2c3' codep=0x224c parp=0xe2c3
// ================================================

void UNK_0xe2c3() // UNK_0xe2c3
{

  label1:
  OVER(); // OVER
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0029);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  OVER(); // OVER
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xe1c1(); // UNK_0xe1c1
  goto label1;
}


// ================================================
// 0xe2e1: WORD 'UNK_0xe2e3' codep=0x224c parp=0xe2e3
// ================================================

void UNK_0xe2e3() // UNK_0xe2e3
{
  Push(cc_UNK_0xd935); // UNK_0xd935
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xe1c1(); // UNK_0xe1c1
  Push(pp_UNK_0xd8f7); // UNK_0xd8f7 size: 0
  Push(Read16(Pop())); // @
  Push(cc__9); // 9
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  UNK_0xe2c3(); // UNK_0xe2c3
  Push2Words("NULL");

  label1:
  Push(0); // 0
}


// ================================================
// 0xe303: WORD 'UNK_0xe305' codep=0x224c parp=0xe305
// ================================================

void UNK_0xe305() // UNK_0xe305
{
  Push(0x59a7); Push(0x0002);
  UNK_0xd80e(); // UNK_0xd80e
}


// ================================================
// 0xe30f: WORD 'UNK_0xe311' codep=0x224c parp=0xe311
// ================================================

void UNK_0xe311() // UNK_0xe311
{

  UNK_0x3f09("OTHER");
  UNK_0xe23a(); // UNK_0xe23a

  UNK_0x3f09("BEINGS");
}


// ================================================
// 0xe326: WORD 'UNK_0xe328' codep=0x224c parp=0xe328
// ================================================

void UNK_0xe328() // UNK_0xe328
{

  UNK_0x3f09("THE");
  UNK_0xe23a(); // UNK_0xe23a

  UNK_0x3f09("PAST");
}


// ================================================
// 0xe339: WORD 'UNK_0xe33b' codep=0x224c parp=0xe33b
// ================================================

void UNK_0xe33b() // UNK_0xe33b
{

  UNK_0x3f09("TRADE");
}


// ================================================
// 0xe345: WORD 'UNK_0xe347' codep=0x224c parp=0xe347
// ================================================

void UNK_0xe347() // UNK_0xe347
{
  UNK_0xe1c1(); // UNK_0xe1c1
  Push(0); // 0
}


// ================================================
// 0xe34d: WORD 'UNK_0xe34f' codep=0x224c parp=0xe34f
// ================================================

void UNK_0xe34f() // UNK_0xe34f
{
  if (Pop() == 0) goto label1;

  UNK_0x3f09("ESHVEY");
  return;

  label1:

  UNK_0x3f09("ESHVARA");
}


// ================================================
// 0xe36c: WORD 'UNK_0xe36e' codep=0x224c parp=0xe36e
// ================================================

void UNK_0xe36e() // UNK_0xe36e
{
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd size: 0
  Push(Read16(Pop())); // @
  Push(2); // 2
  _eq_(); // =
}


// ================================================
// 0xe378: WORD 'UNK_0xe37a' codep=0x224c parp=0xe37a
// ================================================

void UNK_0xe37a() // UNK_0xe37a
{
  UNK_0xe36e(); // UNK_0xe36e
  UNK_0xe34f(); // UNK_0xe34f
}


// ================================================
// 0xe380: WORD 'UNK_0xe382' codep=0x224c parp=0xe382
// ================================================

void UNK_0xe382() // UNK_0xe382
{
  UNK_0xe36e(); // UNK_0xe36e
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xe34f(); // UNK_0xe34f
}


// ================================================
// 0xe38a: WORD '?S' codep=0x4b3b parp=0xe391
// ================================================
// 0xe391: db 0x04 0x00 0x47 0xe3 0x07 0x00 0x05 0xe3 0x08 0x00 0x11 0xe3 0x0a 0x00 0x28 0xe3 0x0b 0x00 0x3b 0xe3 '  G           (   ; '

// ================================================
// 0xe3a5: WORD 'UNK_0xe3a7' codep=0x224c parp=0xe3a7
// ================================================

void UNK_0xe3a7() // UNK_0xe3a7
{
  Push(pp_UNK_0xd8f7); // UNK_0xd8f7 size: 0
  Push(Read16(Pop())); // @
  Pop();
  switch(Pop()) // ?S
  {
  case 7:
    UNK_0xe305(); // UNK_0xe305
    break;
  case 8:
    UNK_0xe311(); // UNK_0xe311
    break;
  case 10:
    UNK_0xe328(); // UNK_0xe328
    break;
  case 11:
    UNK_0xe33b(); // UNK_0xe33b
    break;
  default:
    UNK_0xe347(); // UNK_0xe347
    break;

  }
}


// ================================================
// 0xe3af: WORD 'SPL' codep=0x4b3b parp=0xe3b7
// ================================================
// 0xe3b7: db 0x09 0x00 0x22 0x0f 0x2a 0x00 0xab 0xe2 0x26 0x00 0xb3 0xe2 0x25 0x00 0x9b 0xe2 0x2f 0x00 0xa7 0xe3 0x28 0x00 0xe3 0xe2 0x29 0x00 0x47 0xe3 0x2b 0x00 0xa3 0xe2 0x23 0x00 0x7a 0xe3 0x5e 0x00 0x82 0xe3 '  " *   &   %   /   (   ) G +   # z ^   '

// ================================================
// 0xe3df: WORD 'UNK_0xe3e1' codep=0x224c parp=0xe3e1
// ================================================

void UNK_0xe3e1() // UNK_0xe3e1
{
  OVER(); // OVER
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_CONTEXT_3); // CONTEXT_3 size: 2
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(Pop() * Pop()); // *
  Pop();
  switch(Pop()) // SPL
  {
  case 42:
    UNK_0xe2ab(); // UNK_0xe2ab
    break;
  case 38:
    UNK_0xe2b3(); // UNK_0xe2b3
    break;
  case 37:
    UNK_0xe29b(); // UNK_0xe29b
    break;
  case 47:
    UNK_0xe3a7(); // UNK_0xe3a7
    break;
  case 40:
    UNK_0xe2e3(); // UNK_0xe2e3
    break;
  case 41:
    UNK_0xe347(); // UNK_0xe347
    break;
  case 43:
    UNK_0xe2a3(); // UNK_0xe2a3
    break;
  case 35:
    UNK_0xe37a(); // UNK_0xe37a
    break;
  case 94:
    UNK_0xe382(); // UNK_0xe382
    break;
  default:
    Push(0); // 0
    break;

  }
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  UNK_0xe23a(); // UNK_0xe23a
  UNK_0xe1c1(); // UNK_0xe1c1
}


// ================================================
// 0xe3fb: WORD '(PHRASE>CT)' codep=0x224c parp=0xe40b
// ================================================
// entry

void _ro_PHRASE_gt_CT_rc_() // (PHRASE>CT)
{
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xd90b); // UNK_0xd90b size: 0
  _ex__2(); // !_2
  CTINIT(); // CTINIT
  Push(0); // 0
  Push(cc__6); // 6
  CTPOS_dot_(); // CTPOS.
  Push(cc__dash_1); // -1
  Push(pp_YBLT); // YBLT size: 2
  _plus__ex__2(); // +!_2
  Push(pp_CTCOLOR); // CTCOLOR size: 2
  Push(Read16(Pop())); // @
  _ex_COLOR(); // !COLOR
  CTSCROLL(); // CTSCROLL

  label2:
  UNK_0xe16d(); // UNK_0xe16d
  UNK_0xe3e1(); // UNK_0xe3e1
  UNK_0xe043(); // UNK_0xe043
  if (Pop() == 0) goto label1;
  UNK_0xdfbd(); // UNK_0xdfbd

  label1:
  UNK_0xe23a(); // UNK_0xe23a
  Push(1); // 1
  Push(pp_CTX); // CTX size: 2
  _plus__ex__2(); // +!_2
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe447: WORD 'UNK_0xe449' codep=0x224c parp=0xe449
// ================================================

void UNK_0xe449() // UNK_0xe449
{
  Push(0x65ec); // IFIELD(PHRASE$)
  COUNT(); // COUNT
  UNK_0xd963(); // UNK_0xd963
  Push(pp_LSCAN); // LSCAN size: 400
  COUNT(); // COUNT
  Push(Pop()-1); // 1-
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
}


// ================================================
// 0xe459: WORD 'UNK_0xe45b' codep=0x224c parp=0xe45b
// ================================================

void UNK_0xe45b() // UNK_0xe45b
{
  UNK_0xe449(); // UNK_0xe449
  _ask_CHILD(); // ?CHILD
  if (Pop() == 0) goto label1;
  Push(0x2ee0); Push(0x0000);
  UNK_0xe081(); // UNK_0xe081
  IOPEN(); // IOPEN
  UNK_0xe449(); // UNK_0xe449
  ICLOSE(); // ICLOSE

  label1:
  CTSCROLL(); // CTSCROLL
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe479: WORD 'UNK_0xe47b' codep=0x224c parp=0xe47b
// ================================================

void UNK_0xe47b() // UNK_0xe47b
{
  Push(pp_UNK_0xd8e1); // UNK_0xd8e1 size: 0
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  UNK_0xe107(); // UNK_0xe107
  UNK_0xdb1a(); // UNK_0xdb1a
  Push(0x65ee); // IFIELD(UNK_0xd82a)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  Push(0x65ee); // IFIELD(UNK_0xd82a)
  C_ex__2(); // C!_2
  IOPEN(); // IOPEN
  _i_KEY(); // 'KEY
  Pop(); // DROP
  UNK_0xe45b(); // UNK_0xe45b
}


// ================================================
// 0xe49d: WORD 'UNK_0xe49f' codep=0x224c parp=0xe49f
// ================================================

void UNK_0xe49f() // UNK_0xe49f
{
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd size: 0
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xe280); // UNK_0xe280 size: 0
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  _gt_R(); // >R
  R_at_(); // R@
  Push(0xd9f7);
  _ex__2(); // !_2
  ORGIA(); // ORGIA
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_ORIGIN); // (ORIGIN size: 4
  _1_dot_5_ex__2(); // 1.5!_2
  R_gt_(); // R>
  if (Pop() == 0) return;
  UNK_0xdf4e(); // UNK_0xdf4e
}


// ================================================
// 0xe4c7: WORD 'UNK_0xe4c9' codep=0x224c parp=0xe4c9
// ================================================

void UNK_0xe4c9() // UNK_0xe4c9
{
  Push2Words("*MESS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  _ask_NULL(); // ?NULL
  if (Pop() == 0) goto label1;
  CTINIT(); // CTINIT
  Push(0x59be); Push(0x0002);
  UNK_0xd80e(); // UNK_0xd80e
  _dot_TTY(); // .TTY
  goto label2;

  label1:
  IPREV(); // IPREV
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd size: 0
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(1); // 1
  Push(0xbe74);
  MODULE(); // MODULE
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd size: 0
  _ex__2(); // !_2
  UNK_0xe49f(); // UNK_0xe49f
  Push(0xd935);
  ON_2(); // ON_2
  Push(pp_UNK_0xd8eb); // UNK_0xd8eb size: 0
  _at_EXECUTE(); // @EXECUTE
  Push(pp_CONTEXT_3); // CONTEXT_3 size: 2
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  ON_2(); // ON_2

  label4:
  INEXT(); // INEXT
  _at_INST_dash_S(); // @INST-S
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd size: 0
  Push(Read16(Pop())); // @
  _eq_(); // =
  if (Pop() == 0) goto label3;
  Push(0x65ec); // IFIELD(UNK_0xd87f)
  _1_dot_5_at_(); // 1.5@
  Push(pp_UNK_0xd8e1); // UNK_0xd8e1 size: 0
  _1_dot_5_ex__2(); // 1.5!_2
  UNK_0xdb1a(); // UNK_0xdb1a
  IOPEN(); // IOPEN
  UNK_0xe45b(); // UNK_0xe45b
  Push(0xd4c0); Push(0x0001);
  Push(0xbe96);
  MODULE(); // MODULE

  label3:
  _ask_LAST(); // ?LAST
  _ask_QUIT(); // ?QUIT
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label4;
  R_gt_(); // R>
  Push(pp_CONTEXT_3); // CONTEXT_3 size: 2
  _ex__2(); // !_2
  Push(0xd935);
  _099(); // 099
  R_gt_(); // R>
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd size: 0
  _ex__2(); // !_2
  UNK_0xe49f(); // UNK_0xe49f

  label2:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  SetColor("BLACK");
  Push(2); // 2
  _dot_ON(); // .ON
}


// ================================================
// 0xe561: WORD 'UNK_0xe563' codep=0x1d29 parp=0xe563
// ================================================
// 0xe563: db 0x00 0x00 0x4c 0x22 0xd2 0x9f 0x16 0x16 0xd8 0x59 0x02 0x00 0x0c 0xd8 0xf1 0x9f 0x5d 0x17 0xf4 0x01 0xef 0x2a 0x2e 0x0f 0xe7 0x5e 0x16 0x6d 0x3c 0xdb 0xdc 0xda 0x05 0xde 0x79 0xe4 0xfd 0xd8 0xae 0x0b 0x9f 0x3b 0x5d 0x17 0x0c 0x00 0x25 0x40 0xdb 0xd8 0xae 0x0b 0x41 0x0e 0x5d 0x17 0x13 0x00 0x5f 0x12 0xf2 0x0e 0x87 0x3b 0x5f 0x12 0x3e 0x13 0x3e 0x13 0xfa 0x15 0x12 0x00 0xdf 0xd8 0x83 0x4a 0xdb 0xd8 0xae 0x0b 0x20 0x0f 0x5d 0x17 0x74 0xbe 0xd9 0x84 0x90 0x16 0x29 0x1d 0x00 0x01 0x01 0x01 0x01 0x01 0x00 0x00 0x00 0x01 0x01 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x01 0x00 0x4c 0x22 0xdb 0xd8 0xae 0x0b 0xbf 0xe5 0x72 0x0f 0x92 0x0c 0x90 0x16 0x4c 0x22 0xf4 0xd7 0xa7 0x3b 0x46 0x75 0x5d 0x17 0x0b 0x00 0x46 0x75 0x3e 0x13 0xdf 0x79 0x90 0x16 '  L"     Y      ]    *.  ^ m<     y      ;]   %@    A ]   _    ;_ > >        J      ] t     )                          L"      r     L"   ;Fu]   Fu>  y  '

// ================================================
// 0xe5fc: WORD 'UNK_0xe5fe' codep=0x224c parp=0xe5fe
// ================================================

void UNK_0xe5fe() // UNK_0xe5fe
{
  Push(cc__5); // 5
  Push(cc_MPS); // MPS
  _star__slash_(); // */
  Push(pp__pe_TALK); // %TALK size: 2
  _ex__2(); // !_2
}

// 0xe60a: db 0x4c 0x22 0x8f 0x3b 0xf3 0xdc 0x90 0x16 0x4c 0x22 0x5d 0x17 0xfb 0xff 0xf3 0xdc 0x90 0x16 0x4c 0x22 0x5d 0x17 0x0a 0x00 0xf3 0xdc 0x90 0x16 0x4c 0x22 0x5d 0x17 0xf6 0xff 0xf3 0xdc 0x90 0x16 0x4c 0x22 0x19 0xd9 0xae 0x0b 0x41 0x0e 0x3d 0x0f 0x87 0x3b 0x25 0x40 0xf2 0x0e 0x41 0x0e 0xb3 0x0f 0xb3 0x0f 0xf3 0xdc 0x90 0x16 0x4c 0x22 0x5d 0x17 0x64 0x00 0xf3 0xdc 0x5d 0x17 0x84 0x51 0x65 0x6d 0x90 0x16 'L" ;    L"]       L"]       L"]       L"    A =  ;%@  A         L"] d   ]  Qem  '

// ================================================
// 0xe65a: WORD 'UNK_0xe65c' codep=0x224c parp=0xe65c
// ================================================

void UNK_0xe65c() // UNK_0xe65c
{
  UNK_0xdb30(); // UNK_0xdb30
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe662: WORD 'UNK_0xe664' codep=0x224c parp=0xe664
// ================================================

void UNK_0xe664() // UNK_0xe664
{
  UNK_0xdb22(); // UNK_0xdb22
  _plus__ex_EDL(); // +!EDL
}

// 0xe66a: db 0x4c 0x22 0xdb 0xd8 0xae 0x0b 0x5d 0x17 0x0b 0x00 0x5f 0x12 0x90 0x16 0x4c 0x22 0xdb 0xd8 0xae 0x0b 0x5d 0x17 0x13 0x00 0x5f 0x12 0x90 0x16 0x4c 0x22 0x5d 0xdb 0xf3 0xdc 0xed 0xd8 0x4b 0x55 0xae 0x0b 0x7f 0x0e 0xae 0x0b 0x3e 0x13 0xf2 0x0e 0x16 0x6d 0x90 0x16 0x4c 0x22 0x5d 0xdb 0xf3 0xdc 0x5d 0x17 0xe7 0xd8 0x65 0x6d 0x90 0x16 0x4c 0x22 0x5d 0xdb 0xf9 0xd8 0x92 0x0c 0x4c 0x0f 0xf3 0xdc 0x90 0x16 0x4c 0x22 0x5b 0xda 0xfa 0x15 0x14 0x00 0x5d 0xdb 0xf9 0xd8 0x92 0x0c 0x4c 0x0f 0x35 0x10 0xf3 0xdc 0x5d 0x17 0x5d 0xda 0x65 0x6d 0x90 0x16 'L"    ]   _   L"    ]   _   L"]     KU     >    m  L"]   ]   em  L"]     L     L"[     ]     L 5   ] ] em  '

// ================================================
// 0xe6d6: WORD 'UNK_0xe6d8' codep=0x224c parp=0xe6d8
// ================================================

void UNK_0xe6d8() // UNK_0xe6d8
{
  A_gt_ORIGINATO(); // A>ORIGINATO
  ORIGINATOR_gt_(); // ORIGINATOR>
  Push(0x65ed); // IFIELD(UNK_0xd843)
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe6e4: WORD 'UNK_0xe6e6' codep=0x224c parp=0xe6e6
// ================================================

void UNK_0xe6e6() // UNK_0xe6e6
{
  UNK_0xe6d8(); // UNK_0xe6d8
  ROT(); // ROT
  ROT(); // ROT
  _star__slash_(); // */
  Push(0x0064);
  MIN(); // MIN
  UNK_0xe5fe(); // UNK_0xe5fe
}

// 0xe6f8: db 0x4c 0x22 0x7f 0x3b 0x3d 0x0f 0xe4 0xe6 0x90 0x16 0x4c 0x22 0x3d 0x0f 0x2e 0x0f 0xe4 0xe6 0x90 0x16 0x4c 0x22 0x8f 0x3b 0x3d 0x0f 0xe4 0xe6 0x90 0x16 'L";=     L"= .     L" ;=     '

// ================================================
// 0xe716: WORD 'UNK_0xe718' codep=0x224c parp=0xe718
// ================================================

void UNK_0xe718() // UNK_0xe718
{
  Push(1); // 1
  Push(1); // 1
  UNK_0xe6e6(); // UNK_0xe6e6
}

// 0xe720: db 0x4c 0x22 0x2e 0x0f 0x3d 0x0f 0xe4 0xe6 0x90 0x16 0x4c 0x22 0x5d 0x17 0x19 0x00 0xfc 0xe5 0x90 0x16 0x4c 0x22 0x5d 0x17 0x64 0x00 0xfc 0xe5 0x90 0x16 0x4c 0x22 0x1e 0x52 0x65 0x6d 0x90 0x16 0x4c 0x22 0x5d 0x17 0x0a 0x00 0xfc 0xe5 0x90 0x16 0x4c 0x22 0x5d 0x17 0x64 0x00 0x1e 0x52 0x16 0x6d 0x90 0x16 0x4c 0x22 0xd2 0x9f 0x16 0x16 0xef 0x59 0x02 0x00 0x0c 0xd8 0xf1 0x9f 0x90 0x16 0x4c 0x22 0x07 0x3f 0x08 0x54 0x48 0x45 0x59 0x27 0x56 0x45 0x20 0xf1 0x9f 0x90 0x16 0x4c 0x22 0x5d 0x17 0x92 0x51 0x57 0x6d 0x5c 0xe7 0x6c 0xe7 0x16 0x16 0x06 0x5a 0x02 0x00 0x0c 0xd8 0xe6 0x06 0x90 0x16 0x4c 0x22 0x5d 0x17 0x92 0x51 0x65 0x6d 0x5c 0xe7 0x6c 0xe7 0x16 0x16 0x28 0x5a 0x02 0x00 0x0c 0xd8 0xe6 0x06 0x90 0x16 0x4c 0x22 0x5d 0x17 0xa0 0x51 0x57 0x6d 0x5c 0xe7 0x6c 0xe7 0x16 0x16 0x4b 0x5a 0x02 0x00 0x0c 0xd8 0xe6 0x06 0x90 0x16 0x4c 0x22 0x5d 0x17 0xa0 0x51 0x65 0x6d 0x5c 0xe7 0x6c 0xe7 0x16 0x16 0x6c 0x5a 0x02 0x00 0x0c 0xd8 0xe6 0x06 0x90 0x16 0x4c 0x22 0x5d 0x17 0xbd 0x52 0x57 0x6d 0x5c 0xe7 0x16 0x16 0x91 0x5a 0x02 0x00 0x0c 0xd8 0xf1 0x9f 0x90 0x16 0x4c 0x22 0x7e 0x5e 0xae 0x0b 0xd9 0x84 0x5d 0x17 0xbd 0x52 0x65 0x6d 0x5c 0xe7 0x16 0x16 0xc4 0x5a 0x02 0x00 0x0c 0xd8 0xf1 0x9f 0x90 0x16 0x4c 0x22 0x5d 0x17 0x03 0xda 0x57 0x6d 0x5c 0xe7 0x16 0x16 0xf1 0x5a 0x02 0x00 0x0c 0xd8 0xf1 0x9f 0x90 0x16 0x4c 0x22 0xb9 0x5f 0x65 0x6d 0x46 0x9c 0x2e 0x0f 0x65 0xe5 0x2e 0x0f 0x19 0xd9 0x23 0x6d 0x33 0xdd 0x13 0xdd 0x3d 0x0f 0x63 0xda 0x16 0x6d 0x5f 0xde 0x61 0xe5 0xae 0x0b 0xfa 0x15 0x08 0x00 0x8f 0x3b 0x20 0x0f 0x98 0xa6 0x30 0xe6 0x90 0x16 0x4c 0x22 0xb9 0x5f 0x65 0x6d 0x3d 0x0f 0x65 0xe5 0x2e 0x0f 0x01 0xd9 0x23 0x6d 0x13 0xdd 0x90 0x16 0x4c 0x22 0xf5 0xd8 0xae 0x0b 0x65 0xe5 0x2e 0x0f 0x01 0xd9 0x23 0x6d 0x13 0xdd 0xf5 0xd8 0x65 0x6d 0x90 0x16 0x4c 0x22 0x5d 0x17 0x0d 0x00 0x65 0xe5 0x2e 0x0f 0x01 0xd9 0x23 0x6d 0x13 0xdd 0x90 0x16 0x4c 0x22 0x5d 0x17 0x0e 0x00 0x65 0xe5 0xdf 0xd8 0x83 0x4a 0x4d 0xda 0x32 0x6d 0x2e 0x0f 0x01 0xd9 0x23 0x6d 0x33 0xdd 0x13 0xdd 0x5d 0x17 0x2d 0xd9 0x57 0x6d 0x5d 0x17 0x0a 0x00 0x1a 0xa7 0x7c 0xa3 0x2e 0x0f 0x19 0xd9 0x16 0x6d 0xdd 0xa3 0x32 0x0e 0x90 0x16 0x4c 0x22 0x97 0x3b 0x65 0xe5 0x33 0xdd 0x13 0xdd 0x2e 0x0f 0x19 0xd9 0x23 0x6d 0x90 0x16 0x4c 0x22 0x5d 0x17 0x0f 0x00 0x65 0xe5 0x69 0xe0 0x90 0x16 0x4c 0x22 0x5d 0x17 0xff 0xd9 0x57 0x6d 0xb9 0x5f 0x65 0x6d 0x90 0x16 'L". =     L"]       L"] d     L" Rem  L"]       L"] d  R m  L"     Y        L" ? THEY'VE     L"]  QWm\ l    Z        L"]  Qem\ l   (Z        L"]  QWm\ l   KZ        L"]  Qem\ l   lZ        L"]  RWm\    Z        L"~^    ]  Rem\    Z        L"]   Wm\    Z        L" _emF . e .   #m3   = c  m_ a        ;    0   L" _em= e .   #m    L"    e .   #m    em  L"]   e .   #m    L"]   e    JM 2m.   #m3   ] - Wm]     | .    m  2   L" ;e 3   .   #m  L"]   e i   L"]   Wm _em  '

// ================================================
// 0xe8f1: WORD '(?RACE)' codep=0x1d29 parp=0xe8fd
// ================================================
// 0xe8fd: db 0x00 0x01 0x01 0x00 0x01 0x01 0x01 0x01 0x01 0x00 0x01 0x01 0x00 0x00 0x00 0x00 0x00 0x00 0x01 0x00 0x00 0x00 0x01 0x00 0x00 0x4c 0x22 0xdb 0xd8 0xae 0x0b 0xfb 0xe8 0x72 0x0f 0x92 0x0c 0x90 0x16 0x4c 0x22 0x2e 0x0f 0x8c 0xda 0x90 0x16 0x4c 0x22 0x3d 0x0f 0x8c 0xda 0x90 0x16 '                         L"      r     L".     L"=     '

// ================================================
// 0xe934: WORD 'UNK_0xe936' codep=0x224c parp=0xe936
// ================================================

void UNK_0xe936() // UNK_0xe936
{
  Push(cc__4); // 4
  UNK_0xda8e(); // UNK_0xda8e
}


// ================================================
// 0xe93c: WORD 'UNK_0xe93e' codep=0x224c parp=0xe93e
// ================================================

void UNK_0xe93e() // UNK_0xe93e
{
  Push(cc__8); // 8
  UNK_0xda8e(); // UNK_0xda8e
}


// ================================================
// 0xe944: WORD 'UNK_0xe946' codep=0x224c parp=0xe946
// ================================================

void UNK_0xe946() // UNK_0xe946
{
  Push(0x0010);
  UNK_0xda8e(); // UNK_0xda8e
}

// 0xe94e: db 0x4c 0x22 0x1e 0x52 0xae 0x0b 0xdd 0x4a 0x90 0x16 0x4c 0x22 0x01 0xd9 0xae 0x0b 0x1d 0xd9 0xae 0x0b 0x46 0x12 0x07 0x13 0x90 0x16 0x4c 0x22 0xef 0x64 0x2f 0x7a 0x46 0xd8 0x92 0x0c 0xdf 0x79 0x90 0x16 0x4c 0x22 0x20 0x0f 0x5d 0x17 0xee 0x02 0xc4 0x4b 0x89 0x12 0x3b 0x59 0xae 0x0b 0x9f 0x12 0xf5 0x12 0xe8 0x55 0xae 0x0b 0x5d 0x17 0x14 0x00 0x46 0x12 0xf5 0x12 0x90 0x16 0x4c 0x22 0x20 0x0f 0x5d 0x17 0x64 0x00 0xc4 0x4b 0x89 0x12 0x3b 0x59 0xae 0x0b 0x9f 0x12 0xf5 0x12 0x90 0x16 0x4c 0x22 0x20 0x0f 0x5d 0x17 0x32 0x00 0x3b 0x59 0xae 0x0b 0x05 0x10 0xe7 0x0f 0x4c 0x0f 0xc4 0x4b 0x89 0x12 0x90 0x16 0x4c 0x22 0x20 0x0f 0x5d 0x17 0x64 0x00 0xc4 0x4b 0x1e 0x52 0xae 0x0b 0x46 0x12 0x20 0x0f 0x87 0x3b 0xc4 0x4b 0x84 0xda 0xef 0x64 0x2f 0x7a 0x29 0x76 0xf5 0x12 0xdf 0x79 0x24 0xe9 0x3e 0x13 0x3b 0x59 0xae 0x0b 0x9f 0x12 0xf5 0x12 0x41 0x0e 0x07 0x13 0xfa 0x15 0x16 0x00 0x16 0x16 0x32 0x00 0x00 0x00 0x04 0xd8 0x65 0x10 0x4f 0x64 0x38 0x0c 0x5b 0x40 0x4f 0x64 0x4c 0x6d 0x90 0x16 'L" R   J  L"        F     L" d/zF    y  L"  ]    K  ;Y       U  ]   F     L"  ] d  K  ;Y        L"  ] 2 ;Y      L  K    L"  ] d  K R  F    ; K   d/z)v   y$ > ;Y      A         2     e Od8 [@OdLm  '

// ================================================
// 0xea12: WORD 'UNK_0xea14' codep=0x224c parp=0xea14
// ================================================

void UNK_0xea14() // UNK_0xea14
{
  Push(pp_UNK_0xd91b); // UNK_0xd91b size: 0
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _st_(); // <
}


// ================================================
// 0xea1e: WORD 'UNK_0xea20' codep=0x224c parp=0xea20
// ================================================

void UNK_0xea20() // UNK_0xea20
{
  UNK_0xd7fe(); // UNK_0xd7fe
  Push(0x6626); // IFIELD(UNK_0xd8a2)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea2a: WORD 'UNK_0xea2c' codep=0x224c parp=0xea2c
// ================================================

void UNK_0xea2c() // UNK_0xea2c
{
  UNK_0xd7fe(); // UNK_0xd7fe
  Push(0x6626); // IFIELD(UNK_0xd8a2)
  _ex__2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea36: WORD 'UNK_0xea38' codep=0x224c parp=0xea38
// ================================================

void UNK_0xea38() // UNK_0xea38
{
  UNK_0xea20(); // UNK_0xea20
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  _0_gt_(); // 0>
}


// ================================================
// 0xea42: WORD 'UNK_0xea44' codep=0x224c parp=0xea44
// ================================================

void UNK_0xea44() // UNK_0xea44
{
  UNK_0xea20(); // UNK_0xea20
  Push(Read16(regsp)); // DUP
  Push(0x0010);
  Push(Pop() & Pop()); // AND
  _gt_FLAG(); // >FLAG
  SWAP(); // SWAP
  Push(0xffef);
  Push(Pop() & Pop()); // AND
  UNK_0xea2c(); // UNK_0xea2c
}


// ================================================
// 0xea5c: WORD 'UNK_0xea5e' codep=0x224c parp=0xea5e
// ================================================

void UNK_0xea5e() // UNK_0xea5e
{
  UNK_0xea20(); // UNK_0xea20
  Push(cc__3); // 3
  Push(Pop() & Pop()); // AND
  _0_gt_(); // 0>
}


// ================================================
// 0xea68: WORD 'UNK_0xea6a' codep=0x224c parp=0xea6a
// ================================================

void UNK_0xea6a() // UNK_0xea6a
{
  UNK_0xea20(); // UNK_0xea20
  Push(Read16(regsp)); // DUP
  Push(0x0020);
  Push(Pop() & Pop()); // AND
  _gt_FLAG(); // >FLAG
  SWAP(); // SWAP
  Push(0xffdf);
  Push(Pop() & Pop()); // AND
  UNK_0xea2c(); // UNK_0xea2c
}

// 0xea82: db 0x4c 0x22 0x63 0xda 0xae 0x0b 0x2e 0x0f 0x5f 0x12 0x90 0x16 0x4c 0x22 0x63 0xda 0xae 0x0b 0x3d 0x0f 0x5f 0x12 0x90 0x16 'L"c   . _   L"c   = _   '

// ================================================
// 0xea9a: WORD 'UNK_0xea9c' codep=0x224c parp=0xea9c
// ================================================

void UNK_0xea9c() // UNK_0xea9c
{
  Push(pp_UNK_0xd927); // UNK_0xd927 size: 0
  _2_at_(); // 2@
  UNK_0xd806(); // UNK_0xd806
  D_st_(); // D<
}

// 0xeaa6: db 0x4c 0x22 0x4f 0x64 0x38 0x0c 0x04 0xd8 0xb2 0x12 0x90 0x16 0x4c 0x22 0xf1 0xd8 0x92 0x0c 0x5d 0x17 0x0d 0x00 0x5f 0x12 0x90 0x16 0x4c 0x22 0xf5 0xd8 0xae 0x0b 0xdd 0x4a 0x90 0x16 0x4c 0x22 0x4b 0x55 0xae 0x0b 0xed 0xd8 0xae 0x0b 0xf5 0x12 0x89 0x12 0x90 0x16 0x4c 0x22 0x24 0xe9 0x68 0xe9 0x84 0xda 0x90 0x16 0x4c 0x22 0x3b 0x59 0xae 0x0b 0x7f 0x3b 0x46 0x12 0x90 0x16 'L"Od8       L"    ]   _   L"     J  L"KU            L"$ h     L";Y  ;F   '

// ================================================
// 0xeaf0: WORD 'UNK_0xeaf2' codep=0x224c parp=0xeaf2
// ================================================

void UNK_0xeaf2() // UNK_0xeaf2
{
  Push(pp_UNK_0xd8fb); // UNK_0xd8fb size: 0
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(pp_UNK_0xd903); // UNK_0xd903 size: 0
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(Pop() | Pop()); // OR
  Push(pp_TERMINA); // TERMINA size: 2
  Push(Read16(Pop())); // @
  UNK_0xda86(); // UNK_0xda86
  Push(pp_UNK_0xe563); // UNK_0xe563 size: 0
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xeb0e: WORD 'UNK_0xeb10' codep=0x224c parp=0xeb10
// ================================================

void UNK_0xeb10() // UNK_0xeb10
{
  Push(pp_TERMINA); // TERMINA size: 2
  Push(Read16(Pop())); // @
  UNK_0xe946(); // UNK_0xe946
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xeb1a: WORD 'UNK_0xeb1c' codep=0x224c parp=0xeb1c
// ================================================

void UNK_0xeb1c() // UNK_0xeb1c
{
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd size: 0
  Push(Read16(Pop())); // @
  Push(0x000a);
  _eq_(); // =
  Push(pp__ask_UF); // ?UF size: 2
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
}

// 0xeb2e: db 0x4c 0x22 0x20 0x0f 0x5d 0x17 0x64 0x00 0xc4 0x4b 0xdb 0xd8 0xae 0x0b 0x5d 0x17 0x16 0x00 0x5f 0x12 0xfa 0x15 0x0a 0x00 0x5d 0x17 0x64 0x00 0x60 0x16 0x06 0x00 0x5d 0x17 0x1e 0x00 0x46 0x12 0x5d 0x17 0x0d 0x00 0x72 0x0f 0x3c 0xdb 0xdc 0xda 0x05 0xde 0x15 0xd9 0xae 0x0b 0x5d 0x17 0x0e 0x00 0x5f 0x12 0x07 0x13 0x90 0x16 0x4c 0x22 0xf0 0xea 0x68 0xe9 0xf5 0x12 0x24 0xe9 0xf5 0x12 0xfd 0xd9 0x3e 0x13 0x90 0x16 'L"  ] d  K    ]   _     ] d `   ]   F ]   r <         ]   _     L"  h   $     >   '

// ================================================
// 0xeb80: WORD '<EDL>' codep=0xaccc parp=0xeb8a
// ================================================
// 0xeb8a: db 0x0d 0x0e 0x0d 0xd1 0xeb 0xd7 0xeb 0xdd 0xeb 0xe3 0xeb 0xe9 0xeb 0xef 0xeb 0xf5 0xeb 0xfb 0xeb 0x01 0xec 0x06 0xec 0x0a 0xec 0x0f 0xec 0x13 0xec 0x38 0xea 0x1c 0xeb 0x44 0xea 0x5e 0xea 0x6a 0xea 0x84 0xea 0xcc 0xea 0xb4 0xea 0xc2 0xea 0x5d 0xda 0xe7 0xd8 0x84 0x51 0xf2 0xea 0x5c 0x5d 0xae 0x0b 0xf6 0x0f 0x8b 0xeb 0x90 0x16 0x4c 0x22 0x01 0xeb 0x5d 0x17 0x03 0x0c 0xe6 0x80 0x01 0x82 0x03 0x14 0xe6 0x80 0x81 0x82 0x03 0x14 0xe6 0x00 0x01 0x82 0x03 0x0c 0xe6 0x00 0x81 0x82 0x03 0x1e 0xe6 0x83 0x01 0x84 0x03 0x28 0xe6 0x83 0x81 0x84 0x03 0x28 0xe6 0x03 0x01 0x84 0x03 0x1e 0xe6 0x03 0x81 0x84 0x02 0x88 0xe6 0x85 0x86 0x01 0xae 0xe6 0x87 0x02 0xbc 0xe6 0x88 0x89 0x01 0xa0 0xe6 0x8a 0x02 0x4c 0xe6 0x8b 0x0c '                             8   D ^ j         ]    Q  \]        L"  ]                                (     (                             L   '

// ================================================
// 0xec18: WORD '<TALK>' codep=0xaccc parp=0xec23
// ================================================
// 0xec23: db 0x12 0x0e 0x11 0x74 0xec 0x78 0xec 0x7c 0xec 0x83 0xec 0x8a 0xec 0x91 0xec 0x98 0xec 0x9f 0xec 0xa6 0xec 0xac 0xec 0xb3 0xec 0xba 0xec 0xc0 0xec 0xc6 0xec 0xcb 0xec 0xd1 0xec 0xd7 0xec 0x52 0x20 0x6c 0xe6 0x7a 0xe6 0xf2 0xea 0x10 0xeb 0x2e 0xe9 0x84 0xea 0x36 0xe9 0x3e 0xe9 0x46 0xe9 0x26 0xe9 0x6a 0xe9 0x5a 0xe9 0xff 0xd9 0x6c 0x1f 0x7a 0x3f 0x7a 0xf2 0xea 0xf2 0x0e 0x4c 0x7e 0x3d 0x0f 0x0a 0x7a 0x90 0x01 0x48 0xe7 0x80 0x01 0x52 0xe7 0x81 0x04 0xfa 0xe6 0x02 0x03 0x84 0x05 0x04 0x04 0xe7 0x02 0x03 0x84 0x85 0x04 0x18 0xe7 0x02 0x03 0x86 0x05 0x04 0xfa 0xe6 0x02 0x03 0x86 0x85 0x04 0x22 0xe7 0x02 0x03 0x87 0x05 0x04 0x18 0xe7 0x02 0x03 0x87 0x85 0x03 0x40 0xe7 0x02 0x03 0x88 0x04 0x04 0xe7 0x02 0x03 0x89 0x05 0x04 0x0e 0xe7 0x02 0x03 0x89 0x85 0x03 0x2c 0xe7 0x82 0x8a 0x0b 0x03 0x2c 0xe7 0x82 0x09 0x0b 0x02 0x40 0xe7 0x82 0x8b 0x03 0x40 0xe7 0x02 0x83 0x09 0x03 0x40 0xe7 0x02 0x83 0x0a 0x05 0x36 0xe7 0x02 0x83 0x89 0x8a 0x0c '   t x |                             R l z     .   6 > F & j Z   l z?z    L~=  z  H   R                               "             @                   ,     ,     @    @     @     6      '

// ================================================
// 0xecdf: WORD '<AUX>' codep=0xaccc parp=0xece9
// ================================================
// 0xece9: db 0x0a 0x17 0x0a 0x45 0xed 0x4d 0xed 0x53 0xed 0x59 0xed 0x64 0xed 0x6c 0xed 0x71 0xed 0x7b 0xed 0x80 0xed 0x87 0xed 0x0f 0xd9 0x92 0x51 0x2e 0xe9 0x70 0xeb 0x1c 0xeb 0x13 0xd9 0xa0 0x51 0x36 0xe9 0x26 0xe9 0xea 0xe5 0x3e 0xe9 0x46 0xe9 0x78 0xe9 0xbd 0x52 0xdc 0xe5 0xe6 0xea 0xb0 0xe9 0xa8 0xea 0x18 0xe9 0x9a 0xe9 0x03 0xda 0xff 0xd9 0x0b 0x5c 0x5d 0xae 0x0b 0x3d 0x0f 0x92 0x0f 0x50 0x0e 0x9f 0x3b 0xb3 0x0f 0x92 0x0f 0x7b 0x9a 0x0d 0xed 0xb1 0x7a 0xd0 0x15 0x05 0x7f 0xe7 0x80 0x01 0x02 0x03 0x04 0x03 0x97 0xe7 0x81 0x82 0x04 0x03 0x97 0xe7 0x81 0x83 0x04 0x08 0xaf 0xe7 0x85 0x06 0x02 0x07 0x08 0x03 0x04 0x09 0x05 0xc7 0xe7 0x86 0x0a 0x04 0x0b 0x08 0x02 0xc7 0xe7 0x86 0x83 0x07 0xdf 0xe7 0x8c 0x0d 0x8e 0x8f 0x02 0x07 0x03 0x02 0xf5 0xe7 0x8d 0x90 0x04 0x11 0xe8 0x91 0x92 0x93 0x14 0x02 0xe5 0xe8 0x15 0x83 '   E M S Y d l q {        Q. p      Q6 &   > F x  R                 \]  =   P  ;    {    z                                                                        '

// ================================================
// 0xed8c: WORD '<COMM>' codep=0xaccc parp=0xed97
// ================================================
// 0xed97: db 0x0a 0x0f 0x09 0xdb 0xed 0xe5 0xed 0xf0 0xed 0xf9 0xed 0x03 0xee 0x0d 0xee 0x15 0xee 0x1c 0xee 0x23 0xee 0x4f 0x4d 0xf2 0xea 0x84 0xea 0xa8 0xea 0xc8 0xe9 0x90 0xea 0xff 0xd9 0xdc 0xea 0x9c 0xea 0x14 0xea 0xc2 0xea 0x30 0xeb 0x2d 0xd9 0x5a 0xe9 0x50 0xe9 0x29 0xdf 0x31 0x30 0x30 0x30 0x22 0x8c 0x9c 0x0e 0xec 0x4d 0xec 0xe8 0xeb 0x1f 0x7a 0x07 0x27 0xe8 0x00 0x01 0x82 0x83 0x04 0x05 0x06 0x08 0x27 0xe8 0x00 0x84 0x82 0x83 0x87 0x88 0x05 0x06 0x06 0x57 0xe8 0x00 0x81 0x82 0x83 0x05 0x06 0x07 0x81 0xe8 0x80 0x82 0x09 0x83 0x8a 0x0b 0x0c 0x07 0x93 0xe8 0x80 0x82 0x09 0x83 0x0a 0x0b 0x0c 0x05 0xc7 0xe8 0x80 0x8b 0x82 0x87 0x88 0x04 0x6b 0xe8 0x80 0x89 0x82 0x0c 0x04 0xd9 0xe8 0x80 0x8c 0x82 0x0b 0x03 0x6b 0xe0 0x80 0x0d 0x0c '                   # OM                    0 - Z P ) 1000"    M    z '         '          W                                    k             k    '

// ================================================
// 0xee29: WORD 'UNK_0xee2b' codep=0x224c parp=0xee2b
// ================================================

void UNK_0xee2b() // UNK_0xee2b
{
  SetColor("BLUE");
  Push(pp_THIS_dash_BU); // THIS-BU size: 2
  Push(Read16(Pop())); // @
  _dot_ON(); // .ON
  UNK_0xe005(); // UNK_0xe005
  UNK_0xdb00(); // UNK_0xdb00
  UNK_0xde07(); // UNK_0xde07
  UNK_0xe47b(); // UNK_0xe47b
  Push(pp_UNK_0xd8f3); // UNK_0xd8f3 size: 0
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_UNK_0xd8fb); // UNK_0xd8fb size: 0
  _plus__ex__2(); // +!_2
  UNK_0xdd15(); // UNK_0xdd15
  SetColor("BLACK");
  Push(pp_THIS_dash_BU); // THIS-BU size: 2
  Push(Read16(Pop())); // @
  _dot_ON(); // .ON
}


// ================================================
// 0xee55: WORD 'UNK_0xee57' codep=0x224c parp=0xee57
// ================================================

void UNK_0xee57() // UNK_0xee57
{
  Push(pp__ro_STOP_dash_C); // (STOP-C size: 2
  ON_2(); // ON_2
}


// ================================================
// 0xee5d: WORD 'UNK_0xee5f' codep=0x224c parp=0xee5f
// ================================================

void UNK_0xee5f() // UNK_0xee5f
{
  _ask_TRIG(); // ?TRIG
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(pp_LKEY); // LKEY size: 2
  Push(Read16(Pop())); // @
  Push(0x002b);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(0xd4c0); Push(0x0001);
  UNK_0xe081(); // UNK_0xe081
  return;

  label1:
  SetColor("BLUE");
  Push(pp_THIS_dash_BU); // THIS-BU size: 2
  Push(Read16(Pop())); // @
  _dot_ON(); // .ON
}


// ================================================
// 0xee8d: WORD 'UNK_0xee8f' codep=0x224c parp=0xee8f
// ================================================

void UNK_0xee8f() // UNK_0xee8f
{
  Push(pp__ro_AORIGI); // (AORIGI size: 4
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_S(); // @INST-S
  Push(cc__4); // 4
  _eq_(); // =
  Push(0x65ed); // IFIELD(UNK_0xd843)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(0x0032);
  Push(0x65ed); // IFIELD(UNK_0xd843)
  C_ex__2(); // C!_2

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeeb1: WORD 'UNK_0xeeb3' codep=0x1d29 parp=0xeeb3
// ================================================
// 0xeeb3: db 0x02 0x08 0x01 '   '

// ================================================
// 0xeeb6: WORD 'UNK_0xeeb8' codep=0x224c parp=0xeeb8
// ================================================

void UNK_0xeeb8() // UNK_0xeeb8
{
  Push(cc__8); // 8
  _dot_BTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  UNK_0xdb81(); // UNK_0xdb81
  Push(pp_UNK_0xeeb3); // UNK_0xeeb3 size: 0
  Push(pp_THIS_dash_BU); // THIS-BU size: 2
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_P_dash_POSTU); // P-POSTU size: 2
  _ex__2(); // !_2
  Push(cc__5); // 5
  UNK_0xeaf2(); // UNK_0xeaf2
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _dot_BTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
}


// ================================================
// 0xeede: WORD '(>?)' codep=0x4b3b parp=0xeee7
// ================================================
// 0xeee7: db 0x04 0x00 0x75 0xda 0x00 0x00 0x6d 0xda 0x01 0x00 0x71 0xda 0x02 0x00 0x7d 0xda 0x03 0x00 0x79 0xda '  u   m   q   }   y '

// ================================================
// 0xeefb: WORD 'UNK_0xeefd' codep=0x224c parp=0xeefd
// ================================================

void UNK_0xeefd() // UNK_0xeefd
{
  Push(0x000b);
  _dot_BTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  UNK_0xdb81(); // UNK_0xdb81
  Push(0xda5d);
  ON_2(); // ON_2
  Push(pp_THIS_dash_BU); // THIS-BU size: 2
  Push(Read16(Pop())); // @
  Pop();
  switch(Pop()) // (>?)
  {
  case 0:
    Push(cc_UNK_0xda6d); // UNK_0xda6d
    break;
  case 1:
    Push(cc_UNK_0xda71); // UNK_0xda71
    break;
  case 2:
    Push(cc_UNK_0xda7d); // UNK_0xda7d
    break;
  case 3:
    Push(cc_UNK_0xda79); // UNK_0xda79
    break;
  default:
    Push(cc_UNK_0xda75); // UNK_0xda75
    break;

  }
  Push(pp_UNK_0xd8f7); // UNK_0xd8f7 size: 0
  _ex__2(); // !_2
  Push(0x000e);
  Push(pp_UNK_0xd8f3); // UNK_0xd8f3 size: 0
  _ex__2(); // !_2
  UNK_0xee2b(); // UNK_0xee2b
  Push(cc__9); // 9
  _dot_BTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
}


// ================================================
// 0xef29: WORD 'UNK_0xef2b' codep=0x224c parp=0xef2b
// ================================================

void UNK_0xef2b() // UNK_0xef2b
{
  Push(0x000d);
  Push(pp_UNK_0xd8f3); // UNK_0xd8f3 size: 0
  _ex__2(); // !_2
  UNK_0xee2b(); // UNK_0xee2b
}


// ================================================
// 0xef37: WORD '>CM' codep=0x4b3b parp=0xef3f
// ================================================
// 0xef3f: db 0x03 0x00 0x6b 0xe0 0x00 0x00 0x2b 0xef 0x01 0x00 0xfd 0xee 0x02 0x00 0xb8 0xee '  k   +         '

// ================================================
// 0xef4f: WORD 'UNK_0xef51' codep=0x224c parp=0xef51
// ================================================

void UNK_0xef51() // UNK_0xef51
{
  UNK_0xe65c(); // UNK_0xe65c
  UNK_0xe005(); // UNK_0xe005

  UNK_0x3f09("YES.");
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  CLICK(); // CLICK
}


// ================================================
// 0xef62: WORD 'UNK_0xef64' codep=0x224c parp=0xef64
// ================================================

void UNK_0xef64() // UNK_0xef64
{
  UNK_0xe664(); // UNK_0xe664
  UNK_0xe005(); // UNK_0xe005

  UNK_0x3f09("NO.");
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  CLICK(); // CLICK
}


// ================================================
// 0xef74: WORD 'UNK_0xef76' codep=0x224c parp=0xef76
// ================================================

void UNK_0xef76() // UNK_0xef76
{
  Push(pp_A_dash_POSTU); // A-POSTU size: 2
  Push(Read16(Pop())); // @
  Push(Pop()*2); // 2*
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xef80: WORD 'UNK_0xef82' codep=0x224c parp=0xef82
// ================================================

void UNK_0xef82() // UNK_0xef82
{
  UNK_0xef76(); // UNK_0xef76
  UNK_0xe06b(); // UNK_0xe06b
}


// ================================================
// 0xef88: WORD '>Y/N' codep=0x4b3b parp=0xef91
// ================================================
// 0xef91: db 0x03 0x00 0x76 0xef 0x00 0x00 0x51 0xef 0x01 0x00 0x64 0xef 0x02 0x00 0x82 0xef '  v   Q   d     '

// ================================================
// 0xefa1: WORD 'UNK_0xefa3' codep=0x224c parp=0xefa3
// ================================================

void UNK_0xefa3() // UNK_0xefa3
{
  CTERASE(); // CTERASE
  UNK_0xeeb8(); // UNK_0xeeb8
  Push(1); // 1
  Push(pp_UNK_0xd8f3); // UNK_0xd8f3 size: 0
  _ex__2(); // !_2
  UNK_0xee2b(); // UNK_0xee2b
  Push(1); // 1
  Push(pp_UNK_0xda65); // UNK_0xda65 size: 0
  _ex__2(); // !_2
  Push(cc__5); // 5
  _dot_BTN_dash_TE(); // .BTN-TE
  UNK_0xee8f(); // UNK_0xee8f
}


// ================================================
// 0xefbd: WORD 'UNK_0xefbf' codep=0x224c parp=0xefbf
// ================================================

void UNK_0xefbf() // UNK_0xefbf
{
  UNK_0xeeb8(); // UNK_0xeeb8
  Push(2); // 2
  Push(pp_UNK_0xd8f3); // UNK_0xd8f3 size: 0
  _ex__2(); // !_2
  UNK_0xee2b(); // UNK_0xee2b
  Push(0xd8e7);
  ON_2(); // ON_2
  Push(pp_UNK_0xd91b); // UNK_0xd91b size: 0
  _099(); // 099
}


// ================================================
// 0xefd5: WORD 'EDL+AUX' codep=0x224c parp=0xefe1
// ================================================
// entry

void EDL_plus_AUX() // EDL+AUX
{
  Push(pp__n_VESS); // #VESS size: 2
  Push(Read16(Pop())); // @
  Push(cc__ask_CALLED); // ?CALLED
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(0xece9);
  DISTRAC(); // DISTRAC
  Func13("<AUX>");
  Pop(); // DROP
  Push(0xeb8a);
  DISTRAC(); // DISTRAC
  Func13("<EDL>");
  Pop(); // DROP
}


// ================================================
// 0xf003: WORD 'COMM-EXPERT' codep=0x224c parp=0xf013
// ================================================
// entry

void COMM_dash_EXPERT() // COMM-EXPERT
{
  Push(pp__n_VESS); // #VESS size: 2
  Push(Read16(Pop())); // @
  Push(cc__ask_CALLED); // ?CALLED
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(pp_SMART); // SMART size: 2
  ON_2(); // ON_2
  EDL_plus_AUX(); // EDL+AUX
  Push(0xec23);
  DISTRAC(); // DISTRAC
  Func13("<TALK>");
  Pop(); // DROP
  Push(0xed97);
  DISTRAC(); // DISTRAC
  Func13("<COMM>");
  Pop(); // DROP
  Push(0); // 0
  Push(0xb822);
  MODULE(); // MODULE

  label1:
  Push(0xd935);
  _099(); // 099
}


// ================================================
// 0xf049: WORD 'UNK_0xf04b' codep=0x224c parp=0xf04b
// ================================================

void UNK_0xf04b() // UNK_0xf04b
{
  Push(pp__i_CC); // 'CC size: 2
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  Push(pp__ro_AORIGI); // (AORIGI size: 4
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65fe); // IFIELD(UNK_0xd852)
  Push(Read8(Pop())&0xFF); // C@
  Push(0xb9c8);
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf063: WORD 'UNK_0xf065' codep=0x224c parp=0xf065
// ================================================

void UNK_0xf065() // UNK_0xf065
{
  Push(pp__ro_AORIGI); // (AORIGI size: 4
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_S(); // @INST-S
  Push(cc__7); // 7
  _eq_(); // =
  ICLOSE(); // ICLOSE
  Push(cc_UNK_0xd92d); // UNK_0xd92d
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0); // 0
  Push(0x000a);
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(pp__i_XCOMM); // 'XCOMM size: 2
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}


// ================================================
// 0xf091: WORD 'UNK_0xf093' codep=0x224c parp=0xf093
// ================================================

void UNK_0xf093() // UNK_0xf093
{
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd size: 0
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _eq_(); // =
  if (Pop() == 0) return;
  Push(0); // 0
  Push(Read16(regsp)); // DUP
  Push(pp_EDL); // EDL size: 2
  _ex__2(); // !_2
  Push(0x65f3); // IFIELD(UNK_0xd84d)
  _ex__2(); // !_2
}


// ================================================
// 0xf0ad: WORD 'UNK_0xf0af' codep=0x224c parp=0xf0af
// ================================================

void UNK_0xf0af() // UNK_0xf0af
{
  Push(0x000a);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) return;
  Push(pp__ask_10); // ?10 size: 2
  Push(Read16(Pop())); // @
  Push(0x0014);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0); // 0
  goto label2;

  label1:
  Push(0x0064);

  label2:
  Push(Read16(regsp)); // DUP
  Push(0x65f3); // IFIELD(UNK_0xd84d)
  C_ex__2(); // C!_2
  Push(pp_EDL); // EDL size: 2
  _ex__2(); // !_2
}


// ================================================
// 0xf0dd: WORD 'UNK_0xf0df' codep=0x224c parp=0xf0df
// ================================================

void UNK_0xf0df() // UNK_0xf0df
{
  UNK_0xf04b(); // UNK_0xf04b
  Push(cc__9); // 9
  _dot_BTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  Push(pp__i_XCOMM); // 'XCOMM size: 2
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  Push(pp__ro_STOP_dash_C); // (STOP-C size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;

  label4:
  UNK_0xf065(); // UNK_0xf065
  COMM_dash_EXPERT(); // COMM-EXPERT
  UNK_0xdb71(); // UNK_0xdb71
  UNK_0xee5f(); // UNK_0xee5f
  Push(cc_UNK_0xd92d); // UNK_0xd92d
  UNK_0xea9c(); // UNK_0xea9c
  Push(Pop() & Pop()); // AND
  UNK_0xea14(); // UNK_0xea14
  UNK_0xda86(); // UNK_0xda86
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  Push(pp_THIS_dash_BU); // THIS-BU size: 2
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xd92d); // UNK_0xd92d
  if (Pop() == 0) goto label3;
  Push(0xd92d);
  _099(); // 099
  UNK_0xea14(); // UNK_0xea14
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  UNK_0xdb95(); // UNK_0xdb95
  Pop();
  switch(Pop()) // >Y/N
  {
  case 0:
    UNK_0xef51(); // UNK_0xef51
    break;
  case 1:
    UNK_0xef64(); // UNK_0xef64
    break;
  case 2:
    UNK_0xef82(); // UNK_0xef82
    break;
  default:
    UNK_0xef76(); // UNK_0xef76
    break;

  }
  Push(pp_UNK_0xd91b); // UNK_0xd91b size: 0
  _099(); // 099
  Push(cc__9); // 9
  _dot_BTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  goto label2;

  label3:
  Pop();
  switch(Pop()) // >CM
  {
  case 0:
    UNK_0xef2b(); // UNK_0xef2b
    break;
  case 1:
    UNK_0xeefd(); // UNK_0xeefd
    break;
  case 2:
    UNK_0xeeb8(); // UNK_0xeeb8
    break;
  default:
    UNK_0xe06b(); // UNK_0xe06b
    break;

  }

  label2:
  UNK_0xeb10(); // UNK_0xeb10
  if (Pop() == 0) goto label4;
  Push(pp_P_dash_POSTU); // P-POSTU size: 2
  Push(Read16(Pop())); // @
  Push(0x62b1);
  Push(Read16(Pop())); // @
  MODULE(); // MODULE

  label1:
  Push(pp_UNK_0xd903); // UNK_0xd903 size: 0
  _099(); // 099
  Push(pp_UNK_0xd8fb); // UNK_0xd8fb size: 0
  _099(); // 099
  Push(pp_UNK_0xda65); // UNK_0xda65 size: 0
  _099(); // 099
  _gt_HAIL_do_(); // >HAIL$
  Push(pp_PIC_n_); // PIC# size: 2
  _099(); // 099
}


// ================================================
// 0xf163: WORD 'UNK_0xf165' codep=0x224c parp=0xf165
// ================================================

void UNK_0xf165() // UNK_0xf165
{
  Push(pp_CONTEXT_3); // CONTEXT_3 size: 2
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(2); // 2
  Push(0xb77c);
  MODULE(); // MODULE
  if (Pop() == 0) goto label2;
  Push(pp_UNK_0xda65); // UNK_0xda65 size: 0
  Push(Read16(Pop())); // @
  Push(2); // 2
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  UNK_0xefa3(); // UNK_0xefa3
  goto label4;

  label3:
  UNK_0xefbf(); // UNK_0xefbf

  label4:
  goto label5;

  label2:
  Push(pp__ro_STOP_dash_C); // (STOP-C size: 2
  ON_2(); // ON_2

  label5:
  return;

  label1:
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  Push(0x5b12); Push(0x0002);
  UNK_0xd80e(); // UNK_0xd80e
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  SetColor("BLACK");
  Push(0); // 0
  _dot_ON(); // .ON
}


// ================================================
// 0xf1b5: WORD 'UNK_0xf1b7' codep=0x224c parp=0xf1b7
// ================================================

void UNK_0xf1b7() // UNK_0xf1b7
{
  Push(0xb7d6);
  MODULE(); // MODULE
}


// ================================================
// 0xf1bf: WORD '(CBTN)' codep=0x4b3b parp=0xf1ca
// ================================================
// 0xf1ca: db 0x03 0x00 0x57 0xee 0x00 0x00 0x65 0xf1 0x01 0x00 0xb7 0xf1 0x02 0x00 0xc9 0xe4 '  W   e         '

// ================================================
// 0xf1da: WORD 'UNK_0xf1dc' codep=0x224c parp=0xf1dc
// ================================================

void UNK_0xf1dc() // UNK_0xf1dc
{
  Push(pp__ro_ENCOUN); // (ENCOUN size: 4
  _1_dot_5_at_(); // 1.5@
  Push2Words("*ARREST");
  D_eq_(); // D=
  Push(pp__ask_SECURE); // ?SECURE size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(pp__i_UNNEST); // 'UNNEST size: 2
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  Push2Words("*ARREST");
  _gt_C_plus_S(); // >C+S
  Push(0x00ff);
  Push(0x00ff);
  Push(0x65ee); // IFIELD(INST-X)
  D_ex_(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf20a: WORD 'CL1' codep=0x224c parp=0xf212
// ================================================
// entry

void CL1() // CL1
{
  Push(pp__n_VESS); // #VESS size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(pp_UNK_0xd903); // UNK_0xd903 size: 0
  _099(); // 099
  Push(pp_UNK_0xda65); // UNK_0xda65 size: 0
  _099(); // 099
  _gt_HAIL_do_(); // >HAIL$

  label1:
  Push(cc__5); // 5
  _dot_BTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  Push(pp__ro_STOP_dash_C); // (STOP-C size: 2
  _099(); // 099
  Push(pp_UNK_0xe563); // UNK_0xe563 size: 0
  ON_2(); // ON_2

  label6:
  Push(pp__ro_AORIGI); // (AORIGI size: 4
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  PARALLE(); // PARALLE

  label2:
  UNK_0xdb71(); // UNK_0xdb71
  UNK_0xee5f(); // UNK_0xee5f
  if (Pop() == 0) goto label3;
  Push(pp_THIS_dash_BU); // THIS-BU size: 2
  Push(Read16(Pop())); // @
  Pop();
  switch(Pop()) // (CBTN)
  {
  case 0:
    UNK_0xf165(); // UNK_0xf165
    break;
  case 1:
    UNK_0xf1b7(); // UNK_0xf1b7
    break;
  case 2:
    UNK_0xe4c9(); // UNK_0xe4c9
    break;
  default:
    UNK_0xee57(); // UNK_0xee57
    break;

  }

  label3:
  Push(pp_UNK_0xd8fb); // UNK_0xd8fb size: 0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xd903); // UNK_0xd903 size: 0
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  Push(pp__ro_AORIGI); // (AORIGI size: 4
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  UNK_0xda86(); // UNK_0xda86
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label4;
  Push(2); // 2
  Push(0xb77c);
  MODULE(); // MODULE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp__ro_STOP_dash_C); // (STOP-C size: 2
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  Push(pp__ro_STOP_dash_C); // (STOP-C size: 2
  _ex__2(); // !_2

  label4:
  Push(pp__ro_STOP_dash_C); // (STOP-C size: 2
  Push(Read16(Pop())); // @
  UNK_0xda86(); // UNK_0xda86
  if (Pop() == 0) goto label5;
  UNK_0xf0df(); // UNK_0xf0df
  CTINIT(); // CTINIT
  Push(0x5b35); Push(0x0002);
  UNK_0xd80e(); // UNK_0xd80e
  _dot_TTY(); // .TTY
  UNK_0xf1dc(); // UNK_0xf1dc
  Push(cc__5); // 5
  _dot_BTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  Push(pp_FTRIG); // FTRIG size: 2
  _099(); // 099

  label5:
  Push(pp__ro_STOP_dash_C); // (STOP-C size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label6;
  Push(0); // 0
  _dot_BTN_dash_TE(); // .BTN-TE
  Push(pp_UNK_0xe563); // UNK_0xe563 size: 0
  _099(); // 099
  CLR_dash_BUT(); // CLR-BUT
  SetColor("BLUE");
  Push(cc__4); // 4
  _dot_HIGHLI(); // .HIGHLI
  Push(cc__4); // 4
  Push(pp_THIS_dash_BU); // THIS-BU size: 2
  _ex__2(); // !_2
  SetColor("WHITE");
  Push(pp_CTCOLOR); // CTCOLOR size: 2
  _ex__2(); // !_2
}


// ================================================
// 0xf2c4: WORD 'UNK_0xf2c6' codep=0x224c parp=0xf2c6
// ================================================

void UNK_0xf2c6() // UNK_0xf2c6
{
  Push(pp__ro_AORIGI); // (AORIGI size: 4
  _1_dot_5_ex__2(); // 1.5!_2
  UNK_0xe718(); // UNK_0xe718
  UNK_0xd806(); // UNK_0xd806
  Push(pp_OK_dash_TALK); // OK-TALK size: 4
  D_ex_(); // D!
  Push(pp_TERMINA); // TERMINA size: 2
  _099(); // 099
  Push(0x000e);
  UNK_0xdb3e(); // UNK_0xdb3e
  Push(pp_UNK_0xd903); // UNK_0xd903 size: 0
  _099(); // 099
  Push(pp_UNK_0xd91b); // UNK_0xd91b size: 0
  _099(); // 099
  A_gt_ORIGINATO(); // A>ORIGINATO
  ORIGINATOR_gt_(); // ORIGINATOR>
  Push(0x65ed); // IFIELD(UNK_0xd843)
  Push(Read8(Pop())&0xFF); // C@
  Push(pp__pe_TALK); // %TALK size: 2
  _ex__2(); // !_2
  Push(0x65f3); // IFIELD(UNK_0xd84d)
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_EDL); // EDL size: 2
  _ex__2(); // !_2
  UNK_0xea38(); // UNK_0xea38
  Push(cc__5); // 5
  Push(Pop() * Pop()); // *
  _plus__ex_EDL(); // +!EDL
  UNK_0xea44(); // UNK_0xea44
  Pop(); // DROP
  UNK_0xea5e(); // UNK_0xea5e
  Push(0x000a);
  Push(Pop() * Pop()); // *
  _plus__ex_EDL(); // +!EDL
  UNK_0xea6a(); // UNK_0xea6a
  Pop(); // DROP
  Push(cc__6); // 6
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) goto label1;
  Push(pp_EDL); // EDL size: 2
  _099(); // 099

  label1:
  UNK_0xf0af(); // UNK_0xf0af
  UNK_0xf093(); // UNK_0xf093
  UNK_0xdc83(); // UNK_0xdc83
}


// ================================================
// 0xf326: WORD 'UNK_0xf328' codep=0x224c parp=0xf328
// ================================================

void UNK_0xf328() // UNK_0xf328
{
  UNK_0xf2c6(); // UNK_0xf2c6
  _at_INST_dash_S(); // @INST-S
  Push(Read16(regsp)); // DUP
  _gt_R(); // >R
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd size: 0
  _ex__2(); // !_2
  _ask_CHILD(); // ?CHILD
  if (Pop() == 0) goto label1;
  Push(h); // I
  Push(pp_UNK_0xe280); // UNK_0xe280 size: 0
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(0xd9f7);
  _ex__2(); // !_2
  if (Pop() == 0) goto label2;
  UNK_0xdf4e(); // UNK_0xdf4e
  Push(pp__ro_ENCOUN); // (ENCOUN size: 4
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  Push(2); // 2
  Push(Pop() | Pop()); // OR
  UNK_0xdfbd(); // UNK_0xdfbd
  Push(0x000f);
  MIN(); // MIN
  OVER(); // OVER
  Push(Pop()-1); // 1-
  C_ex__2(); // C!_2
  Push(Pop()-1); // 1-
  Push(pp_UNK_0xda19); // UNK_0xda19 size: 0
  _do__ex_(); // $!
  SWAP(); // SWAP
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  Push(2); // 2
  Push(Pop() | Pop()); // OR
  UNK_0xdfbd(); // UNK_0xdfbd
  Push(0x000f);
  MIN(); // MIN
  OVER(); // OVER
  Push(Pop()-1); // 1-
  C_ex__2(); // C!_2
  Push(Pop()-1); // 1-
  Push(pp_UNK_0xda07); // UNK_0xda07 size: 0
  _do__ex_(); // $!

  label2:
  goto label3;

  label1:
  Push(pp_TERMINA); // TERMINA size: 2
  ON_2(); // ON_2

  label3:
  R_gt_(); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
  UNK_0xe93e(); // UNK_0xe93e
  UNK_0xe946(); // UNK_0xe946
  Push(Pop() | Pop()); // OR
  Push(Read16(regsp)); // DUP
  Push(cc_UNK_0xd913); // UNK_0xd913
  Push(Pop() & Pop()); // AND
  UNK_0xeb1c(); // UNK_0xeb1c
  Push(Pop() | Pop()); // OR
  Push(0x51a0);
  _ex__2(); // !_2
  UNK_0xe936(); // UNK_0xe936
  Push(Pop() | Pop()); // OR
  Push(cc_UNK_0xd90f); // UNK_0xd90f
  Push(Pop() & Pop()); // AND
  UNK_0xeb1c(); // UNK_0xeb1c
  Push(Pop() | Pop()); // OR
  Push(0x5192);
  _ex__2(); // !_2
}


// ================================================
// 0xf3cc: WORD 'UNK_0xf3ce' codep=0x224c parp=0xf3ce
// ================================================

void UNK_0xf3ce() // UNK_0xf3ce
{
  Push(pp_UNK_0xda61); // UNK_0xda61 size: 0
  _099(); // 099
  Push(0xda5d);
  _099(); // 099
  Push(0xda03);
  _099(); // 099
  Push(0x52bd);
  _099(); // 099
  Push(0xd8e7);
  _099(); // 099
  Push(pp_UNK_0xd8ef); // UNK_0xd8ef size: 0
  _099(); // 099
  Push(0x5184);
  _099(); // 099
  Push(0xd92d);
  _099(); // 099
  Push(pp_UNK_0xda65); // UNK_0xda65 size: 0
  _099(); // 099
  Push(pp_UNK_0xd8fb); // UNK_0xd8fb size: 0
  _099(); // 099
  Push(pp_UNK_0xd8f3); // UNK_0xd8f3 size: 0
  _099(); // 099
  Push(pp_UNK_0xd8f7); // UNK_0xd8f7 size: 0
  _099(); // 099
  Push(0xd9ff);
  _099(); // 099
  Push(pp_P_dash_RACES); // P-RACES size: 2
  _099(); // 099
  Push(pp_UNK_0xda59); // UNK_0xda59 size: 0
  _099(); // 099
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65f2); // IFIELD(UNK_0xd898)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65ec); // IFIELD(UNK_0xd889)
  Push(pp_UNK_0xda2b); // UNK_0xda2b size: 0
  _do__ex_(); // $!
  ICLOSE(); // ICLOSE
  Push(0); // 0
  Push(0x0012);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x65f2); // IFIELD(UNK_0xd898)
  Push(i); // I
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_S(); // @INST-S
  Push(Pop()+1); // 1+
  BIT(); // BIT
  Push(Pop() | Pop()); // OR
  ICLOSE(); // ICLOSE
  Push(cc__3); // 3
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffea

  ICLOSE(); // ICLOSE
  Push(pp_P_dash_RACES); // P-RACES size: 2
  _ex__2(); // !_2
  UNK_0xd7fe(); // UNK_0xd7fe
  Push(0x6615); // IFIELD(%NAME)
  Push(pp_UNK_0xda3d); // UNK_0xda3d size: 0
  _do__ex_(); // $!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf45c: WORD 'UNK_0xf45e' codep=0x224c parp=0xf45e
// ================================================

void UNK_0xf45e() // UNK_0xf45e
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65fe); // IFIELD(UNK_0xd89d)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65fe); // IFIELD(UNK_0xd884)
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xda55); // UNK_0xda55 size: 0
  _ex__2(); // !_2
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf474: WORD 'IAPWR' codep=0x224c parp=0xf47e
// ================================================
// entry

void IAPWR() // IAPWR
{
  Push(pp__ro_ENCOUN); // (ENCOUN size: 4
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0); // 0

  label2:
  _at_INST_dash_C(); // @INST-C
  Push(0x0019);
  _eq_(); // =
  _at_INST_dash_S(); // @INST-S
  if (Pop() == 0) Push(1); else Push(0); // 0=
  UNK_0xda86(); // UNK_0xda86
  if (Pop() == 0) goto label1;
  Push(cc_UNK_0xd90f); // UNK_0xd90f
  LoadData("UNK_0xd8c0"); // from 'VESSEL      '
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  _gt_FLAG(); // >FLAG
  Push(Pop() | Pop()); // OR
  Push(0xd90f);
  _ex__2(); // !_2
  Push(cc_UNK_0xd913); // UNK_0xd913
  LoadData("UNK_0xd8c8"); // from 'VESSEL      '
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
  Push(0xd913);
  _ex__2(); // !_2
  LoadData("UNK_0xd8d5"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x65f3); // IFIELD(UNK_0xd8d0)
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  LoadData("UNK_0xd8c0"); // from 'VESSEL      '
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  _star__slash_(); // */
  Push(Pop() + Pop()); // +

  label1:
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label2;
  Push(pp_A_dash_STREN); // A-STREN size: 2
  _ex__2(); // !_2
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4e2: WORD 'UNK_0xf4e4' codep=0x224c parp=0xf4e4
// ================================================

void UNK_0xf4e4() // UNK_0xf4e4
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
// 0xf4f8: WORD 'UNK_0xf4fa' codep=0x224c parp=0xf4fa
// ================================================

void UNK_0xf4fa() // UNK_0xf4fa
{
  UNK_0xd7fe(); // UNK_0xd7fe
  Push(0x65f2); // IFIELD(UNK_0xd8ac)
  UNK_0xf4e4(); // UNK_0xf4e4
  Push(0x65fa); // IFIELD(UNK_0xd8b1)
  UNK_0xf4e4(); // UNK_0xf4e4
  Push(Pop() + Pop()); // +
  Push(0x65fe); // IFIELD(UNK_0xd8bb)
  UNK_0xf4e4(); // UNK_0xf4e4
  Push(Pop() + Pop()); // +
  Push(0x65fc); // IFIELD(UNK_0xd8b6)
  UNK_0xf4e4(); // UNK_0xf4e4
  Push(Pop() + Pop()); // +
  ICLOSE(); // ICLOSE
  Push(0x000f);
  Push(0x000a);
  _star__slash_(); // */
  Push(pp_UNK_0xd9fb); // UNK_0xd9fb size: 0
  _ex__2(); // !_2
}


// ================================================
// 0xf524: WORD 'ICOMM' codep=0x224c parp=0xf52e
// ================================================
// entry

void ICOMM() // ICOMM
{
  Push(pp_UNK_0xd931); // UNK_0xd931 size: 0
  _ex__2(); // !_2
  Push(0xd913);
  _099(); // 099
  Push(0xd90f);
  _099(); // 099
  IAPWR(); // IAPWR
  UNK_0xf4fa(); // UNK_0xf4fa
  UNK_0xf328(); // UNK_0xf328
  UNK_0xf3ce(); // UNK_0xf3ce
  UNK_0xf45e(); // UNK_0xf45e
  UNK_0xeb1c(); // UNK_0xeb1c
  if (Pop() == 0) goto label1;
  UNK_0xea20(); // UNK_0xea20
  Push(0x0030);
  Push(Pop() | Pop()); // OR
  UNK_0xea2c(); // UNK_0xea2c

  label1:
  _gt_DISPLA(); // >DISPLA
}

// 0xf55c: db 0x43 0x4f 0x4d 0x4d 0x00 'COMM '
  