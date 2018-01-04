// ====== OVERLAY 'COMM-OV' ======
// store offset = 0xd7e0
// overlay size   = 0x1d80

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


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
//      UNK_0xd861  codep:0x7420 parp:0xd861 size:0x0003 C-string:'UNK_0xd861'
//      UNK_0xd866  codep:0x7420 parp:0xd866 size:0x0003 C-string:'UNK_0xd866'
//      UNK_0xd86b  codep:0x7420 parp:0xd86b size:0x0003 C-string:'UNK_0xd86b'
//      UNK_0xd870  codep:0x7420 parp:0xd870 size:0x0003 C-string:'UNK_0xd870'
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
//      UNK_0xd8e1  codep:0x1d29 parp:0xd8e1 size:0x0004 C-string:'UNK_0xd8e1'
//      UNK_0xd8e7  codep:0x2214 parp:0xd8e7 size:0x0002 C-string:'UNK_0xd8e7'
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
//      UNK_0xd9fb  codep:0x1d29 parp:0xd9fb size:0x0002 C-string:'UNK_0xd9fb'
//      UNK_0xd9ff  codep:0x2214 parp:0xd9ff size:0x0002 C-string:'UNK_0xd9ff'
//      UNK_0xda03  codep:0x2214 parp:0xda03 size:0x0002 C-string:'UNK_0xda03'
//      UNK_0xda07  codep:0x1d29 parp:0xda07 size:0x0010 C-string:'UNK_0xda07'
//      UNK_0xda19  codep:0x1d29 parp:0xda19 size:0x0010 C-string:'UNK_0xda19'
//      UNK_0xda2b  codep:0x1d29 parp:0xda2b size:0x0010 C-string:'UNK_0xda2b'
//      UNK_0xda3d  codep:0x1d29 parp:0xda3d size:0x0010 C-string:'UNK_0xda3d'
//      UNK_0xda4f  codep:0x1d29 parp:0xda4f size:0x0004 C-string:'UNK_0xda4f'
//      UNK_0xda55  codep:0x1d29 parp:0xda55 size:0x0002 C-string:'UNK_0xda55'
//      UNK_0xda59  codep:0x1d29 parp:0xda59 size:0x0002 C-string:'UNK_0xda59'
//      UNK_0xda5d  codep:0x2214 parp:0xda5d size:0x0002 C-string:'UNK_0xda5d'
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
//        P>AFIELD  codep:0x4b3b parp:0xdb51 size:0x000c C-string:'P_gt_AFIELD'
//      UNK_0xdb5f  codep:0x224c parp:0xdb5f size:0x0010 C-string:'UNK_0xdb5f'
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
//      UNK_0xdd15  codep:0x224c parp:0xdd15 size:0x001e C-string:'UNK_0xdd15'
//      UNK_0xdd35  codep:0x224c parp:0xdd35 size:0x0010 C-string:'UNK_0xdd35'
//      UNK_0xdd47  codep:0x224c parp:0xdd47 size:0x0010 C-string:'UNK_0xdd47'
//      UNK_0xdd59  codep:0x224c parp:0xdd59 size:0x0050 C-string:'UNK_0xdd59'
//      UNK_0xddab  codep:0x224c parp:0xddab size:0x0018 C-string:'UNK_0xddab'
//      UNK_0xddc5  codep:0x224c parp:0xddc5 size:0x0040 C-string:'UNK_0xddc5'
//      UNK_0xde07  codep:0x224c parp:0xde07 size:0x003a C-string:'UNK_0xde07'
//      UNK_0xde43  codep:0x224c parp:0xde43 size:0x0010 C-string:'UNK_0xde43'
//      UNK_0xde55  codep:0x224c parp:0xde55 size:0x000a C-string:'UNK_0xde55'
//      UNK_0xde61  codep:0x224c parp:0xde61 size:0x0010 C-string:'UNK_0xde61'
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
//              ?S  codep:0x4b3b parp:0xe391 size:0x0014 C-string:'IsS'
//      UNK_0xe3a7  codep:0x224c parp:0xe3a7 size:0x0008 C-string:'UNK_0xe3a7'
//             SPL  codep:0x4b3b parp:0xe3b7 size:0x0028 C-string:'SPL'
//      UNK_0xe3e1  codep:0x224c parp:0xe3e1 size:0x001a C-string:'UNK_0xe3e1'
//     (PHRASE>CT)  codep:0x224c parp:0xe40b size:0x003c C-string:'_ro_PHRASE_gt_CT_rc_'
//      UNK_0xe449  codep:0x224c parp:0xe449 size:0x0010 C-string:'UNK_0xe449'
//      UNK_0xe45b  codep:0x224c parp:0xe45b size:0x001e C-string:'UNK_0xe45b'
//      UNK_0xe47b  codep:0x224c parp:0xe47b size:0x0022 C-string:'UNK_0xe47b'
//      UNK_0xe49f  codep:0x224c parp:0xe49f size:0x0028 C-string:'UNK_0xe49f'
//      UNK_0xe4c9  codep:0x224c parp:0xe4c9 size:0x0098 C-string:'UNK_0xe4c9'
//      UNK_0xe563  codep:0x1d29 parp:0xe563 size:0x0002 C-string:'UNK_0xe563'
//      UNK_0xe567  codep:0x224c parp:0xe567 size:0x0058 C-string:'UNK_0xe567'
//      UNK_0xe5c1  codep:0x1d29 parp:0xe5c1 size:0x0019 C-string:'UNK_0xe5c1'
//      UNK_0xe5dc  codep:0x224c parp:0xe5dc size:0x000c C-string:'UNK_0xe5dc'
//      UNK_0xe5ea  codep:0x224c parp:0xe5ea size:0x0012 C-string:'UNK_0xe5ea'
//      UNK_0xe5fe  codep:0x224c parp:0xe5fe size:0x000c C-string:'UNK_0xe5fe'
//      UNK_0xe60c  codep:0x224c parp:0xe60c size:0x0006 C-string:'UNK_0xe60c'
//      UNK_0xe614  codep:0x224c parp:0xe614 size:0x0008 C-string:'UNK_0xe614'
//      UNK_0xe61e  codep:0x224c parp:0xe61e size:0x0008 C-string:'UNK_0xe61e'
//      UNK_0xe628  codep:0x224c parp:0xe628 size:0x0008 C-string:'UNK_0xe628'
//      UNK_0xe632  codep:0x224c parp:0xe632 size:0x0018 C-string:'UNK_0xe632'
//      UNK_0xe64c  codep:0x224c parp:0xe64c size:0x000e C-string:'UNK_0xe64c'
//      UNK_0xe65c  codep:0x224c parp:0xe65c size:0x0006 C-string:'UNK_0xe65c'
//      UNK_0xe664  codep:0x224c parp:0xe664 size:0x0006 C-string:'UNK_0xe664'
//      UNK_0xe66c  codep:0x224c parp:0xe66c size:0x000c C-string:'UNK_0xe66c'
//      UNK_0xe67a  codep:0x224c parp:0xe67a size:0x000c C-string:'UNK_0xe67a'
//      UNK_0xe688  codep:0x224c parp:0xe688 size:0x0016 C-string:'UNK_0xe688'
//      UNK_0xe6a0  codep:0x224c parp:0xe6a0 size:0x000c C-string:'UNK_0xe6a0'
//      UNK_0xe6ae  codep:0x224c parp:0xe6ae size:0x000c C-string:'UNK_0xe6ae'
//      UNK_0xe6bc  codep:0x224c parp:0xe6bc size:0x001a C-string:'UNK_0xe6bc'
//      UNK_0xe6d8  codep:0x224c parp:0xe6d8 size:0x000c C-string:'UNK_0xe6d8'
//      UNK_0xe6e6  codep:0x224c parp:0xe6e6 size:0x0012 C-string:'UNK_0xe6e6'
//      UNK_0xe6fa  codep:0x224c parp:0xe6fa size:0x0008 C-string:'UNK_0xe6fa'
//      UNK_0xe704  codep:0x224c parp:0xe704 size:0x0008 C-string:'UNK_0xe704'
//      UNK_0xe70e  codep:0x224c parp:0xe70e size:0x0008 C-string:'UNK_0xe70e'
//      UNK_0xe718  codep:0x224c parp:0xe718 size:0x0008 C-string:'UNK_0xe718'
//      UNK_0xe722  codep:0x224c parp:0xe722 size:0x0008 C-string:'UNK_0xe722'
//      UNK_0xe72c  codep:0x224c parp:0xe72c size:0x0008 C-string:'UNK_0xe72c'
//      UNK_0xe736  codep:0x224c parp:0xe736 size:0x0008 C-string:'UNK_0xe736'
//      UNK_0xe740  codep:0x224c parp:0xe740 size:0x0006 C-string:'UNK_0xe740'
//      UNK_0xe748  codep:0x224c parp:0xe748 size:0x0008 C-string:'UNK_0xe748'
//      UNK_0xe752  codep:0x224c parp:0xe752 size:0x000a C-string:'UNK_0xe752'
//      UNK_0xe75e  codep:0x224c parp:0xe75e size:0x000e C-string:'UNK_0xe75e'
//      UNK_0xe76e  codep:0x224c parp:0xe76e size:0x000f C-string:'UNK_0xe76e'
//      UNK_0xe77f  codep:0x224c parp:0xe77f size:0x0016 C-string:'UNK_0xe77f'
//      UNK_0xe797  codep:0x224c parp:0xe797 size:0x0016 C-string:'UNK_0xe797'
//      UNK_0xe7af  codep:0x224c parp:0xe7af size:0x0016 C-string:'UNK_0xe7af'
//      UNK_0xe7c7  codep:0x224c parp:0xe7c7 size:0x0016 C-string:'UNK_0xe7c7'
//      UNK_0xe7df  codep:0x224c parp:0xe7df size:0x0014 C-string:'UNK_0xe7df'
//      UNK_0xe7f5  codep:0x224c parp:0xe7f5 size:0x001a C-string:'UNK_0xe7f5'
//      UNK_0xe811  codep:0x224c parp:0xe811 size:0x0014 C-string:'UNK_0xe811'
//      UNK_0xe827  codep:0x224c parp:0xe827 size:0x002e C-string:'UNK_0xe827'
//      UNK_0xe857  codep:0x224c parp:0xe857 size:0x0012 C-string:'UNK_0xe857'
//      UNK_0xe86b  codep:0x224c parp:0xe86b size:0x0014 C-string:'UNK_0xe86b'
//      UNK_0xe881  codep:0x224c parp:0xe881 size:0x0010 C-string:'UNK_0xe881'
//      UNK_0xe893  codep:0x224c parp:0xe893 size:0x0032 C-string:'UNK_0xe893'
//      UNK_0xe8c7  codep:0x224c parp:0xe8c7 size:0x0010 C-string:'UNK_0xe8c7'
//      UNK_0xe8d9  codep:0x224c parp:0xe8d9 size:0x000a C-string:'UNK_0xe8d9'
//      UNK_0xe8e5  codep:0x224c parp:0xe8e5 size:0x000c C-string:'UNK_0xe8e5'
//         (?RACE)  codep:0x1d29 parp:0xe8fd size:0x0019 C-string:'_ro__ask_RACE_rc_'
//      UNK_0xe918  codep:0x224c parp:0xe918 size:0x000c C-string:'UNK_0xe918'
//      UNK_0xe926  codep:0x224c parp:0xe926 size:0x0006 C-string:'UNK_0xe926'
//      UNK_0xe92e  codep:0x224c parp:0xe92e size:0x0006 C-string:'UNK_0xe92e'
//      UNK_0xe936  codep:0x224c parp:0xe936 size:0x0006 C-string:'UNK_0xe936'
//      UNK_0xe93e  codep:0x224c parp:0xe93e size:0x0006 C-string:'UNK_0xe93e'
//      UNK_0xe946  codep:0x224c parp:0xe946 size:0x0008 C-string:'UNK_0xe946'
//      UNK_0xe950  codep:0x224c parp:0xe950 size:0x0008 C-string:'UNK_0xe950'
//      UNK_0xe95a  codep:0x224c parp:0xe95a size:0x000e C-string:'UNK_0xe95a'
//      UNK_0xe96a  codep:0x224c parp:0xe96a size:0x000c C-string:'UNK_0xe96a'
//      UNK_0xe978  codep:0x224c parp:0xe978 size:0x0020 C-string:'UNK_0xe978'
//      UNK_0xe99a  codep:0x224c parp:0xe99a size:0x0014 C-string:'UNK_0xe99a'
//      UNK_0xe9b0  codep:0x224c parp:0xe9b0 size:0x0016 C-string:'UNK_0xe9b0'
//      UNK_0xe9c8  codep:0x224c parp:0xe9c8 size:0x004a C-string:'UNK_0xe9c8'
//      UNK_0xea14  codep:0x224c parp:0xea14 size:0x000a C-string:'UNK_0xea14'
//      UNK_0xea20  codep:0x224c parp:0xea20 size:0x000a C-string:'UNK_0xea20'
//      UNK_0xea2c  codep:0x224c parp:0xea2c size:0x000a C-string:'UNK_0xea2c'
//      UNK_0xea38  codep:0x224c parp:0xea38 size:0x000a C-string:'UNK_0xea38'
//      UNK_0xea44  codep:0x224c parp:0xea44 size:0x0018 C-string:'UNK_0xea44'
//      UNK_0xea5e  codep:0x224c parp:0xea5e size:0x000a C-string:'UNK_0xea5e'
//      UNK_0xea6a  codep:0x224c parp:0xea6a size:0x0018 C-string:'UNK_0xea6a'
//      UNK_0xea84  codep:0x224c parp:0xea84 size:0x000a C-string:'UNK_0xea84'
//      UNK_0xea90  codep:0x224c parp:0xea90 size:0x000a C-string:'UNK_0xea90'
//      UNK_0xea9c  codep:0x224c parp:0xea9c size:0x000a C-string:'UNK_0xea9c'
//      UNK_0xeaa8  codep:0x224c parp:0xeaa8 size:0x000a C-string:'UNK_0xeaa8'
//      UNK_0xeab4  codep:0x224c parp:0xeab4 size:0x000c C-string:'UNK_0xeab4'
//      UNK_0xeac2  codep:0x224c parp:0xeac2 size:0x0008 C-string:'UNK_0xeac2'
//      UNK_0xeacc  codep:0x224c parp:0xeacc size:0x000e C-string:'UNK_0xeacc'
//      UNK_0xeadc  codep:0x224c parp:0xeadc size:0x0008 C-string:'UNK_0xeadc'
//      UNK_0xeae6  codep:0x224c parp:0xeae6 size:0x000a C-string:'UNK_0xeae6'
//      UNK_0xeaf2  codep:0x224c parp:0xeaf2 size:0x001c C-string:'UNK_0xeaf2'
//      UNK_0xeb10  codep:0x224c parp:0xeb10 size:0x000a C-string:'UNK_0xeb10'
//      UNK_0xeb1c  codep:0x224c parp:0xeb1c size:0x0012 C-string:'UNK_0xeb1c'
//      UNK_0xeb30  codep:0x224c parp:0xeb30 size:0x003e C-string:'UNK_0xeb30'
//      UNK_0xeb70  codep:0x224c parp:0xeb70 size:0x0010 C-string:'UNK_0xeb70'
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
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_IsFIRED_dash_; // ?FIRED-
extern const unsigned short int cc_IsA_dash_SHIE; // ?A-SHIE
extern const unsigned short int cc_IsA_dash_WEAP; // ?A-WEAP
extern const unsigned short int cc_IsCALLED; // ?CALLED
extern const unsigned short int cc_MPS; // MPS
extern const unsigned short int pp_IsNID; // ?NID
extern const unsigned short int pp_IsUF; // ?UF
extern const unsigned short int pp__pe_TALK; // %TALK
extern const unsigned short int pp_DICT; // DICT
extern const unsigned short int pp_PIC_n_; // PIC#
extern const unsigned short int pp__i_XCOMM; // 'XCOMM
extern const unsigned short int pp_A_dash_STREN; // A-STREN
extern const unsigned short int pp_P_dash_POSTU; // P-POSTU
extern const unsigned short int pp_AVCNT; // AVCNT
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_EDL; // EDL
extern const unsigned short int pp_A_dash_POSTU; // A-POSTU
extern const unsigned short int pp_P_dash_RACES; // P-RACES
extern const unsigned short int pp__i_UNNEST; // 'UNNEST
extern const unsigned short int pp__n_VESS; // #VESS
extern const unsigned short int pp_CTCOLOR; // CTCOLOR
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp__i_CC; // 'CC
extern const unsigned short int pp__ro_STOP_dash_C; // (STOP-C
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_THIS_dash_BU; // THIS-BU
extern const unsigned short int pp_WLINES; // WLINES
extern const unsigned short int pp_IsON_dash_PLA; // ?ON-PLA
extern const unsigned short int pp_CTX; // CTX
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp__i__plus_VESS; // '+VESS
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_LINE_dash_CO; // LINE-CO
extern const unsigned short int pp_TERMINA; // TERMINA
extern const unsigned short int pp_IsCOMBAT; // ?COMBAT
extern const unsigned short int pp__i_EXTERN; // 'EXTERN
extern const unsigned short int pp_IsMVT; // ?MVT
extern const unsigned short int pp_IsSECURE; // ?SECURE
extern const unsigned short int pp_Is10; // ?10
extern const unsigned short int pp__ro_ORIGIN; // (ORIGIN
extern const unsigned short int pp_OK_dash_TALK; // OK-TALK
extern const unsigned short int pp__ro_ENCOUN; // (ENCOUN
extern const unsigned short int pp__ro_AORIGI; // (AORIGI
extern const unsigned short int pp_LSCAN; // LSCAN
extern const unsigned short int pp_SMART; // SMART
extern LoadDataType _1BTN; // 1BTN
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color RED; // RED
extern Color BLUE; // BLUE
extern Color PINK; // PINK
extern Color WHITE; // WHITE
extern IFieldType INST_dash_X; // INST-X
extern IFieldType _pe_NAME; // %NAME
extern IFieldType PHRASE; // PHRASE
extern IFieldType PHRASE_do_; // PHRASE$
void COUNT(); // COUNT
void _star__slash_(); // */
void ABS(); // ABS
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void D_st_(); // D<
void PAD(); // PAD
void _dash_TRAILING(); // -TRAILING
void SPACE(); // SPACE
void MS(); // MS
void NOP(); // NOP
void PICK(); // PICK
void _2OVER(); // 2OVER
void D0_eq_(); // D0=
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void DMAX(); // DMAX
void BIT(); // BIT
void _plus__at_(); // +@
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void I_gt_C(); // I>C
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void FILL_2(); // FILL_2
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void CDROP(); // CDROP
void IsNULL(); // ?NULL
void IsCHILD(); // ?CHILD
void SET_dash_CUR(); // SET-CUR
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IPREV(); // IPREV
void IFIRST(); // IFIRST
void IFIND(); // IFIND
void SAVE_dash_OV(); // SAVE-OV
void IsCGA(); // ?CGA
void StoreCOLOR(); // !COLOR
void _gt_DISPLA(); // >DISPLA
void CTPOS_dot_(); // CTPOS.
void CTERASE(); // CTERASE
void CLICK(); // CLICK
void WUP(); // WUP
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
void IsQUIT(); // ?QUIT
void DrawABTN(); // .ABTN
void DrawBTN_dash_TE(); // .BTN-TE
void NEW_dash_BUT(); // NEW-BUT
void _do__ex_(); // $!
void DISTRAC(); // DISTRAC
void PARALLE(); // PARALLE
void ORGIA(); // ORGIA
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
void LC_at_(); // LC@
void LCMOVE(); // LCMOVE
void GetEXECUTE(); // @EXECUTE
void _1_dot_5_at_(); // 1.5@
void GetDS(); // @DS
void _plus__dash__at_(); // +-@
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xd8dd = 0xd8dd; // UNK_0xd8dd size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xd8e1 = 0xd8e1; // UNK_0xd8e1 size: 4
// {0x56, 0x3a, 0x20, 0x63}

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

const unsigned short int pp_UNK_0xd9fb = 0xd9fb; // UNK_0xd9fb size: 2
// {0x3a, 0x20}

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

const unsigned short int pp_UNK_0xda59 = 0xda59; // UNK_0xda59 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda61 = 0xda61; // UNK_0xda61 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda65 = 0xda65; // UNK_0xda65 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdedc = 0xdedc; // UNK_0xdedc size: 112
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x49, 0x50, 0xd4, 0xac, 0x3c, 0xc3, 0xe6, 0xdf, 0xde, 0xc8, 0x44, 0x45, 0x53, 0x43, 0x52, 0x49, 0x50, 0xb2, 0xac, 0x3c, 0xcb, 0xe6, 0x6a, 0xde, 0xc9, 0x48, 0x49, 0x54, 0x50, 0x4f, 0x49, 0x4e, 0xd4, 0xac, 0x3c, 0xd3, 0xe6, 0xaa, 0xde, 0xc8, 0x2e, 0x41, 0x52, 0x54, 0x4e, 0x41, 0x4d, 0xc5, 0xac, 0x3c, 0xd8, 0xe6, 0xfd, 0xde, 0xc6, 0x43, 0x50, 0x41, 0x55, 0x53, 0xc5, 0xac, 0x3c, 0x63, 0xe7, 0xc5, 0xde, 0xc6, 0x2d, 0x50, 0x41, 0x55, 0x53, 0xc5, 0xac, 0x3c, 0x6f, 0xe7, 0xf2, 0xe6, 0xc7, 0x57, 0x53, 0x43, 0x52, 0x4f, 0x4c, 0xcc, 0xac, 0x3c, 0x8d, 0xe7, 0xee, 0xde, 0xc8, 0x2d, 0x4c, 0x45, 0x41, 0x44, 0x49, 0x4e, 0xc7}

const unsigned short int pp_UNK_0xe280 = 0xe280; // UNK_0xe280 size: 25
// {0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00}

const unsigned short int pp_UNK_0xe563 = 0xe563; // UNK_0xe563 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xe5c1 = 0xe5c1; // UNK_0xe5c1 size: 25
// {0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00}

const unsigned short int pp__ro__ask_RACE_rc_ = 0xe8fd; // (?RACE) size: 25
// {0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00}

const unsigned short int pp_UNK_0xeeb3 = 0xeeb3; // UNK_0xeeb3 size: 3
// {0x02, 0x08, 0x01}


const unsigned short int cc_UNK_0xd8e7 = 0xd8e7; // UNK_0xd8e7
const unsigned short int cc_UNK_0xd90f = 0xd90f; // UNK_0xd90f
const unsigned short int cc_UNK_0xd913 = 0xd913; // UNK_0xd913
const unsigned short int cc_UNK_0xd92d = 0xd92d; // UNK_0xd92d
const unsigned short int cc_UNK_0xd935 = 0xd935; // UNK_0xd935
const unsigned short int cc_UNK_0xd9f7 = 0xd9f7; // UNK_0xd9f7
const unsigned short int cc_UNK_0xd9ff = 0xd9ff; // UNK_0xd9ff
const unsigned short int cc_UNK_0xda03 = 0xda03; // UNK_0xda03
const unsigned short int cc_UNK_0xda5d = 0xda5d; // UNK_0xda5d
const unsigned short int cc_UNK_0xda69 = 0xda69; // UNK_0xda69
const unsigned short int cc_UNK_0xda6d = 0xda6d; // UNK_0xda6d
const unsigned short int cc_UNK_0xda71 = 0xda71; // UNK_0xda71
const unsigned short int cc_UNK_0xda75 = 0xda75; // UNK_0xda75
const unsigned short int cc_UNK_0xda79 = 0xda79; // UNK_0xda79
const unsigned short int cc_UNK_0xda7d = 0xda7d; // UNK_0xda7d


// 0xd7f2: db 0xd8 0x01 '  '

// ================================================
// 0xd7f4: WORD 'UNK_0xd7f6' codep=0x224c parp=0xd7f6 params=0 returns=0
// ================================================

void UNK_0xd7f6() // UNK_0xd7f6
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd7fc: WORD 'UNK_0xd7fe' codep=0x224c parp=0xd7fe params=0 returns=0
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
// 0xd80c: WORD 'UNK_0xd80e' codep=0x224c parp=0xd80e params=2 returns=2
// ================================================

void UNK_0xd80e() // UNK_0xd80e
{
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+PHRASE_do_.offset); // IFIELD
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xd81e: WORD 'UNK_0xd820' codep=0x7420 parp=0xd820
// ================================================
IFieldType UNK_0xd820 = {PHRASECONTRLIDX, 0x0b, 0x01};

// ================================================
// 0xd823: WORD 'UNK_0xd825' codep=0x7420 parp=0xd825
// ================================================
IFieldType UNK_0xd825 = {PHRASECONTRLIDX, 0x0c, 0x01};

// ================================================
// 0xd828: WORD 'UNK_0xd82a' codep=0x7420 parp=0xd82a
// ================================================
IFieldType UNK_0xd82a = {PHRASECONTRLIDX, 0x0d, 0x01};

// ================================================
// 0xd82d: WORD 'UNK_0xd82f' codep=0x7420 parp=0xd82f
// ================================================
IFieldType UNK_0xd82f = {PHRASECONTRLIDX, 0x0e, 0x01};

// ================================================
// 0xd832: WORD 'UNK_0xd834' codep=0x7420 parp=0xd834
// ================================================
IFieldType UNK_0xd834 = {PHRASECONTRLIDX, 0x0f, 0x01};

// ================================================
// 0xd837: WORD 'UNK_0xd839' codep=0x7420 parp=0xd839
// ================================================
IFieldType UNK_0xd839 = {PHRASECONTRLIDX, 0x10, 0x01};

// ================================================
// 0xd83c: WORD 'UNK_0xd83e' codep=0x7420 parp=0xd83e
// ================================================
IFieldType UNK_0xd83e = {ORIGINATORIDX, 0x0b, 0x01};

// ================================================
// 0xd841: WORD 'UNK_0xd843' codep=0x7420 parp=0xd843
// ================================================
IFieldType UNK_0xd843 = {ORIGINATORIDX, 0x0c, 0x01};

// ================================================
// 0xd846: WORD 'UNK_0xd848' codep=0x7420 parp=0xd848
// ================================================
IFieldType UNK_0xd848 = {ORIGINATORIDX, 0x0d, 0x01};

// ================================================
// 0xd84b: WORD 'UNK_0xd84d' codep=0x7420 parp=0xd84d
// ================================================
IFieldType UNK_0xd84d = {ORIGINATORIDX, 0x12, 0x01};

// ================================================
// 0xd850: WORD 'UNK_0xd852' codep=0x7420 parp=0xd852
// ================================================
IFieldType UNK_0xd852 = {ORIGINATORIDX, 0x1d, 0x01};

// ================================================
// 0xd855: WORD 'UNK_0xd857' codep=0x7420 parp=0xd857
// ================================================
IFieldType UNK_0xd857 = {ORIGINATORIDX, 0x13, 0x01};

// ================================================
// 0xd85a: WORD 'UNK_0xd85c' codep=0x7420 parp=0xd85c
// ================================================
IFieldType UNK_0xd85c = {ORIGINATORIDX, 0x14, 0x01};

// ================================================
// 0xd85f: WORD 'UNK_0xd861' codep=0x7420 parp=0xd861
// ================================================
IFieldType UNK_0xd861 = {ORIGINATORIDX, 0x15, 0x01};

// ================================================
// 0xd864: WORD 'UNK_0xd866' codep=0x7420 parp=0xd866
// ================================================
IFieldType UNK_0xd866 = {ORIGINATORIDX, 0x16, 0x01};

// ================================================
// 0xd869: WORD 'UNK_0xd86b' codep=0x7420 parp=0xd86b
// ================================================
IFieldType UNK_0xd86b = {ORIGINATORIDX, 0x17, 0x01};

// ================================================
// 0xd86e: WORD 'UNK_0xd870' codep=0x7420 parp=0xd870
// ================================================
IFieldType UNK_0xd870 = {ORIGINATORIDX, 0x18, 0x01};

// ================================================
// 0xd873: WORD 'UNK_0xd875' codep=0x7420 parp=0xd875
// ================================================
IFieldType UNK_0xd875 = {ORIGINATORIDX, 0x19, 0x01};

// ================================================
// 0xd878: WORD 'UNK_0xd87a' codep=0x7420 parp=0xd87a
// ================================================
IFieldType UNK_0xd87a = {ORIGINATORIDX, 0x1a, 0x03};

// ================================================
// 0xd87d: WORD 'UNK_0xd87f' codep=0x7420 parp=0xd87f
// ================================================
IFieldType UNK_0xd87f = {COMM_MSGIDX, 0x0b, 0x03};

// ================================================
// 0xd882: WORD 'UNK_0xd884' codep=0x7420 parp=0xd884
// ================================================
IFieldType UNK_0xd884 = {CREWMEMBERIDX, 0x1d, 0x01};

// ================================================
// 0xd887: WORD 'UNK_0xd889' codep=0x7420 parp=0xd889
// ================================================
IFieldType UNK_0xd889 = {CREWMEMBERIDX, 0x0b, 0x0f};
// 0xd88c: db 0x20 0x74 0x10 0x1b 0x01 0x20 0x74 0x10 0x1a 0x0f ' t    t   '

// ================================================
// 0xd896: WORD 'UNK_0xd898' codep=0x7420 parp=0xd898
// ================================================
IFieldType UNK_0xd898 = {ASSIGN_CREWIDX, 0x11, 0x03};

// ================================================
// 0xd89b: WORD 'UNK_0xd89d' codep=0x7420 parp=0xd89d
// ================================================
IFieldType UNK_0xd89d = {ASSIGN_CREWIDX, 0x1d, 0x03};

// ================================================
// 0xd8a0: WORD 'UNK_0xd8a2' codep=0x7420 parp=0xd8a2
// ================================================
IFieldType UNK_0xd8a2 = {SHIPIDX, 0x45, 0x04};
// 0xd8a5: db 0x20 0x74 0x14 0x17 0x02 ' t   '

// ================================================
// 0xd8aa: WORD 'UNK_0xd8ac' codep=0x7420 parp=0xd8ac
// ================================================
IFieldType UNK_0xd8ac = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xd8af: WORD 'UNK_0xd8b1' codep=0x7420 parp=0xd8b1
// ================================================
IFieldType UNK_0xd8b1 = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xd8b4: WORD 'UNK_0xd8b6' codep=0x7420 parp=0xd8b6
// ================================================
IFieldType UNK_0xd8b6 = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xd8b9: WORD 'UNK_0xd8bb' codep=0x7420 parp=0xd8bb
// ================================================
IFieldType UNK_0xd8bb = {SHIPIDX, 0x1d, 0x02};

// ================================================
// 0xd8be: WORD 'UNK_0xd8c0' codep=0x7394 parp=0xd8c0
// ================================================
LoadDataType UNK_0xd8c0 = {VESSELIDX, 0x0c, 0x04, 0x24, 0x6b5d};

// ================================================
// 0xd8c6: WORD 'UNK_0xd8c8' codep=0x7394 parp=0xd8c8
// ================================================
LoadDataType UNK_0xd8c8 = {VESSELIDX, 0x12, 0x03, 0x24, 0x6b5d};

// ================================================
// 0xd8ce: WORD 'UNK_0xd8d0' codep=0x7420 parp=0xd8d0
// ================================================
IFieldType UNK_0xd8d0 = {VESSELIDX, 0x12, 0x04};

// ================================================
// 0xd8d3: WORD 'UNK_0xd8d5' codep=0x7394 parp=0xd8d5
// ================================================
LoadDataType UNK_0xd8d5 = {VESSELIDX, 0x05, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xd8db: WORD 'UNK_0xd8dd' codep=0x1d29 parp=0xd8dd
// ================================================
// 0xd8dd: db 0x3a 0x20 ': '

// ================================================
// 0xd8df: WORD 'UNK_0xd8e1' codep=0x1d29 parp=0xd8e1
// ================================================
// 0xd8e1: db 0x56 0x3a 0x20 0x63 'V: c'

// ================================================
// 0xd8e5: WORD 'UNK_0xd8e7' codep=0x2214 parp=0xd8e7
// ================================================
// 0xd8e7: dw 0x0000

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
// 0xd90f: dw 0x0000

// ================================================
// 0xd911: WORD 'UNK_0xd913' codep=0x2214 parp=0xd913
// ================================================
// 0xd913: dw 0x0000

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
// 0xd92d: dw 0x0000

// ================================================
// 0xd92f: WORD 'UNK_0xd931' codep=0x1d29 parp=0xd931
// ================================================
// 0xd931: db 0x3a 0x20 ': '

// ================================================
// 0xd933: WORD 'UNK_0xd935' codep=0x2214 parp=0xd935
// ================================================
// 0xd935: dw 0x0000

// ================================================
// 0xd937: WORD 'UNK_0xd939' codep=0x224c parp=0xd939 params=1 returns=1
// ================================================

void UNK_0xd939() // UNK_0xd939
{
  Push(0x65e1+UNK_0xd857.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  MAX(); // MAX
}


// ================================================
// 0xd943: WORD 'UNK_0xd945' codep=0x224c parp=0xd945 params=0 returns=0
// ================================================

void UNK_0xd945() // UNK_0xd945
{
  Push(pp_IsNID); // ?NID
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xd939(); // UNK_0xd939
}


// ================================================
// 0xd953: WORD 'UNK_0xd955' codep=0x224c parp=0xd955 params=0 returns=1
// ================================================

void UNK_0xd955() // UNK_0xd955
{
  Push(pp_LSCAN); // LSCAN
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
  unsigned short int i, imax, a;
  Push(pp_LSCAN); // LSCAN
  Push(0x0190);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  Push(pp_LSCAN); // LSCAN
  _099(); // 099
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(pp_DICT); // DICT
    Push(Read16(Pop())); // @
    Push(i); // I
    Push(0x65e1+PHRASE.offset); // IFIELD
    _plus__at_(); // +@
    Push(Pop()+3); // 3+
    GetDS(); // @DS
    UNK_0xd955(); // UNK_0xd955
    _2OVER(); // 2OVER
    Push(Pop()-1); // 1-
    LC_at_(); // LC@
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    LCMOVE(); // LCMOVE
    Push(a); // R>
    Push(pp_LSCAN); // LSCAN
    Push(Read8(Pop())&0xFF); // C@
    Push(Pop() + Pop()); // +
    Push(pp_LSCAN); // LSCAN
    C_ex__2(); // C!_2
    Push(Read16(cc_BL)); // BL
    UNK_0xd955(); // UNK_0xd955
    C_ex__2(); // C!_2
    Push(1);
    Push(pp_LSCAN); // LSCAN
    Push(Read8(Pop())&0xFF); // C@
    Push(Pop() + Pop()); // +
    Push(pp_LSCAN); // LSCAN
    C_ex__2(); // C!_2
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); // DROP
}


// ================================================
// 0xd9b9: WORD 'UNK_0xd9bb' codep=0x224c parp=0xd9bb params=0 returns=0
// ================================================

void UNK_0xd9bb() // UNK_0xd9bb
{
  Push(pp_IsMVT); // ?MVT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xd939(); // UNK_0xd939
}


// ================================================
// 0xd9c9: WORD 'S>EDL' codep=0x4b3b parp=0xd9d3
// ================================================

void S_gt_EDL() // S>EDL
{
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
}

// ================================================
// 0xd9e7: WORD 'UNK_0xd9e9' codep=0x224c parp=0xd9e9
// ================================================

void UNK_0xd9e9() // UNK_0xd9e9
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  S_gt_EDL(); // S>EDL case
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xd9f5: WORD 'UNK_0xd9f7' codep=0x2214 parp=0xd9f7
// ================================================
// 0xd9f7: dw 0x0000

// ================================================
// 0xd9f9: WORD 'UNK_0xd9fb' codep=0x1d29 parp=0xd9fb
// ================================================
// 0xd9fb: db 0x3a 0x20 ': '

// ================================================
// 0xd9fd: WORD 'UNK_0xd9ff' codep=0x2214 parp=0xd9ff
// ================================================
// 0xd9ff: dw 0x0000

// ================================================
// 0xda01: WORD 'UNK_0xda03' codep=0x2214 parp=0xda03
// ================================================
// 0xda03: dw 0x0000

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
// 0xda59: db 0x3a 0x20 ': '

// ================================================
// 0xda5b: WORD 'UNK_0xda5d' codep=0x2214 parp=0xda5d
// ================================================
// 0xda5d: dw 0x0000

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
// 0xda69: dw 0x0010

// ================================================
// 0xda6b: WORD 'UNK_0xda6d' codep=0x2214 parp=0xda6d
// ================================================
// 0xda6d: dw 0x0007

// ================================================
// 0xda6f: WORD 'UNK_0xda71' codep=0x2214 parp=0xda71
// ================================================
// 0xda71: dw 0x0008

// ================================================
// 0xda73: WORD 'UNK_0xda75' codep=0x2214 parp=0xda75
// ================================================
// 0xda75: dw 0x0009

// ================================================
// 0xda77: WORD 'UNK_0xda79' codep=0x2214 parp=0xda79
// ================================================
// 0xda79: dw 0x000b

// ================================================
// 0xda7b: WORD 'UNK_0xda7d' codep=0x2214 parp=0xda7d
// ================================================
// 0xda7d: dw 0x000a
// 0xda7f: db 0x20 0x74 0x3d 0x1b 0x01 ' t=  '

// ================================================
// 0xda84: WORD 'UNK_0xda86' codep=0x224c parp=0xda86 params=2 returns=1
// ================================================

void UNK_0xda86() // UNK_0xda86
{
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xda8c: WORD 'UNK_0xda8e' codep=0x224c parp=0xda8e params=1 returns=1
// ================================================

void UNK_0xda8e() // UNK_0xda8e
{
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read8(Pop())&0xFF); // C@
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xda96: WORD 'UNK_0xda98' codep=0x224c parp=0xda98 params=0 returns=1
// ================================================

void UNK_0xda98() // UNK_0xda98
{
  Push(Read16(cc_UNK_0xd935)); // UNK_0xd935
  if (Pop() != 0)
  {
    SetColor(RED);
    return;
  }
  SetColor(WHITE);
}


// ================================================
// 0xdaa8: WORD 'ORIGINATOR>' codep=0x224c parp=0xdab8
// ================================================
// entry

void ORIGINATOR_gt_() // ORIGINATOR>
{
  Push(pp__ro_ORIGIN); // (ORIGIN
  Get_gt_C_plus_S(); // @>C+S
  SetColor(WHITE);
  UNK_0xda98(); // UNK_0xda98
  Push(0x65e1+UNK_0xd83e.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  I_gt_C(); // I>C
  IsMRC(); // ?MRC
  Push(pp_CTCOLOR); // CTCOLOR
  Store_2(); // !_2
}


// ================================================
// 0xdace: WORD 'A>ORIGINATO' codep=0x224c parp=0xdade
// ================================================
// entry

void A_gt_ORIGINATO() // A>ORIGINATO
{
  Push(pp__ro_AORIGI); // (AORIGI
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_ORIGIN); // (ORIGIN
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xd907); // UNK_0xd907
  Store_2(); // !_2
  Push(pp_UNK_0xd8ff); // UNK_0xd8ff
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xd917); // UNK_0xd917
  Store_2(); // !_2
  Push(0xd935); // probable 'UNK_0xd935'
  ON_2(); // ON_2
}


// ================================================
// 0xdafe: WORD 'UNK_0xdb00' codep=0x224c parp=0xdb00
// ================================================

void UNK_0xdb00() // UNK_0xdb00
{
  Push2Words("*COMM");
  Push(pp__ro_ORIGIN); // (ORIGIN
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp_P_dash_POSTU); // P-POSTU
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xd907); // UNK_0xd907
  Store_2(); // !_2
  Push(pp_UNK_0xd8f3); // UNK_0xd8f3
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xd917); // UNK_0xd917
  Store_2(); // !_2
}


// ================================================
// 0xdb18: WORD 'UNK_0xdb1a' codep=0x224c parp=0xdb1a params=0 returns=0
// ================================================

void UNK_0xdb1a() // UNK_0xdb1a
{
  Push(pp_UNK_0xd8e1); // UNK_0xd8e1
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xdb20: WORD 'UNK_0xdb22' codep=0x224c parp=0xdb22
// ================================================

void UNK_0xdb22() // UNK_0xdb22
{
  Push(pp_UNK_0xda4f); // UNK_0xda4f
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+UNK_0xd834.offset); // IFIELD
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdb2e: WORD 'UNK_0xdb30' codep=0x224c parp=0xdb30
// ================================================

void UNK_0xdb30() // UNK_0xdb30
{
  Push(pp_UNK_0xda4f); // UNK_0xda4f
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+UNK_0xd839.offset); // IFIELD
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdb3c: WORD 'UNK_0xdb3e' codep=0x224c parp=0xdb3e params=1 returns=0
// ================================================

void UNK_0xdb3e() // UNK_0xdb3e
{
  Push(pp_UNK_0xd8ff); // UNK_0xd8ff
  Store_2(); // !_2
}


// ================================================
// 0xdb44: WORD 'P>AFIELD' codep=0x4b3b parp=0xdb51
// ================================================

void P_gt_AFIELD() // P>AFIELD
{
  switch(Pop()) // P>AFIELD
  {
  case 2:
    Push(0x65e1+UNK_0xd86b.offset); // IFIELD
    break;
  case 8:
    Push(0x65e1+UNK_0xd870.offset); // IFIELD
    break;
  default:
    Push(0x65e1+UNK_0xd866.offset); // IFIELD
    break;

  }
}

// ================================================
// 0xdb5d: WORD 'UNK_0xdb5f' codep=0x224c parp=0xdb5f
// ================================================

void UNK_0xdb5f() // UNK_0xdb5f
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  Push(pp_P_dash_POSTU); // P-POSTU
  Push(Read16(Pop())); // @
  P_gt_AFIELD(); // P>AFIELD case
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
}


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
  do
  {
    UNK_0xdb71(); // UNK_0xdb71
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  SetColor(BLUE);
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  DrawON(); // .ON
}


// ================================================
// 0xdb93: WORD 'UNK_0xdb95' codep=0x224c parp=0xdb95
// ================================================

void UNK_0xdb95() // UNK_0xdb95
{
  UNK_0xdb00(); // UNK_0xdb00
  SetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_2(); // !_2
}


// ================================================
// 0xdb9f: WORD 'UNK_0xdba1' codep=0x3b74 parp=0xdba1
// ================================================
// 0xdba1: dw 0x0014 0x000a

// ================================================
// 0xdba5: WORD 'UNK_0xdba7' codep=0x3b74 parp=0xdba7
// ================================================
// 0xdba7: dw 0x000f 0x000a

// ================================================
// 0xdbab: WORD 'UNK_0xdbad' codep=0x3b74 parp=0xdbad
// ================================================
// 0xdbad: dw 0x000a 0x0005

// ================================================
// 0xdbb1: WORD 'UNK_0xdbb3' codep=0x3b74 parp=0xdbb3
// ================================================
// 0xdbb3: dw 0x0007 0x0004

// ================================================
// 0xdbb7: WORD '#PHR' codep=0x4b3b parp=0xdbc0
// ================================================

void _n_PHR() // #PHR
{
  switch(Pop()) // #PHR
  {
  case 1:
    Push2Words("UNK_0xdba1");
    break;
  case 2:
    Push2Words("UNK_0xdba7");
    break;
  case 4:
    Push2Words("UNK_0xdbad");
    break;
  case 8:
    Push2Words("UNK_0xdbb3");
    break;
  default:
    Push2Words("NULL");
    break;

  }
}

// ================================================
// 0xdbd4: WORD 'UNK_0xdbd6' codep=0x224c parp=0xdbd6
// ================================================

void UNK_0xdbd6() // UNK_0xdbd6
{
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd
  Push(Read16(Pop())); // @
  Push(0x0012);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(0x03e8);
  } else
  {
    Push(pp_A_dash_POSTU); // A-POSTU
    Push(Read16(Pop())); // @
    _n_PHR(); // #PHR case
    RRND(); // RRND
  }
  Push(pp_UNK_0xd91f); // UNK_0xd91f
  Store_2(); // !_2
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xdbfc: WORD 'N>POST' codep=0x4b3b parp=0xdc07
// ================================================

void N_gt_POST() // N>POST
{
  switch(Pop()) // N>POST
  {
  case 0:
    Push(2);
    break;
  case 1:
    Push(4);
    break;
  case 2:
    Push(8);
    break;
  case 3:
    Push(Read16(cc_UNK_0xda69)); // UNK_0xda69
    break;
  default:
    Push(1);
    break;

  }
}

// ================================================
// 0xdc1b: WORD 'UNK_0xdc1d' codep=0x224c parp=0xdc1d
// ================================================

void UNK_0xdc1d() // UNK_0xdc1d
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  Push(pp_EDL); // EDL
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x65e1+UNK_0xd857.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  _st_(); // <
  if (Pop() == 0) Push(1); else Push(0); // NOT
  OVER(); // OVER
  Push(0x65e1+UNK_0xd85c.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  _st_(); // <
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x65e1+UNK_0xd861.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  _st_(); // <
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xd9fb); // UNK_0xd9fb
  Push(Read16(Pop())); // @
  Push(pp_A_dash_STREN); // A-STREN
  Push(Read16(Pop())); // @
  _dash_(); // -
  _2DUP(); // 2DUP
  Push(5);
  _gt_(); // >
  SWAP(); // SWAP
  Push(3);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  ROT(); // ROT
  Push(2);
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
  Store_2(); // !_2
}


// ================================================
// 0xdc81: WORD 'UNK_0xdc83' codep=0x224c parp=0xdc83
// ================================================

void UNK_0xdc83() // UNK_0xdc83
{
  unsigned short int a;
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read16(Pop())); // @
  UNK_0xdc1d(); // UNK_0xdc1d
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  a = Pop(); // >R
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(a); // R>
  Push(Pop() & Pop()); // AND
  Push(pp_IsCOMBAT); // ?COMBAT
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  UNK_0xd7f6(); // UNK_0xd7f6
  Push(0x65e1+UNK_0xd848.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push2Words("*PLIST");
    _gt_C_plus_S(); // >C+S
    IOPEN(); // IOPEN
    Push(0x000b);
    Push(0x00fb);
    IFIND(); // IFIND
    Pop(); // DROP
    IOPEN(); // IOPEN
    CTINIT(); // CTINIT
    Push(0xbe45); // probable '.HUFF'
    MODULE(); // MODULE
    Push(3);
    _star_CLOSE(); // *CLOSE
  }
  UNK_0xdbd6(); // UNK_0xdbd6
}


// ================================================
// 0xdcd5: WORD 'EDL>P' codep=0x224c parp=0xdcdf
// ================================================
// entry

void EDL_gt_P() // EDL>P
{
  Push(pp_A_dash_STREN); // A-STREN
  _099(); // 099
  Push(pp_UNK_0xd9fb); // UNK_0xd9fb
  _099(); // 099
  UNK_0xdc1d(); // UNK_0xdc1d
}


// ================================================
// 0xdceb: WORD '+!EDL' codep=0x224c parp=0xdcf5
// ================================================
// entry

void _plus__ex_EDL() // +!EDL
{
  Push(pp_EDL); // EDL
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0);
  MAX(); // MAX
  Push(0x0064);
  MIN(); // MIN
  UNK_0xd9e9(); // UNK_0xd9e9
  Push(pp_EDL); // EDL
  Store_2(); // !_2
  UNK_0xdc83(); // UNK_0xdc83
  Push(pp_UNK_0xd8f3); // UNK_0xd8f3
  _099(); // 099
}


// ================================================
// 0xdd13: WORD 'UNK_0xdd15' codep=0x224c parp=0xdd15
// ================================================

void UNK_0xdd15() // UNK_0xdd15
{
  UNK_0xd806(); // UNK_0xd806
  Push(pp_UNK_0xd90b); // UNK_0xd90b
  Push(Read16(Pop())); // @
  Push(0x001b);
  U_star_(); // U*
  OVER(); // OVER
  Push(Pop()*2); // 2*
  Push(Read16(cc_UNK_0xd935)); // UNK_0xd935
  U_star_(); // U*
  D_plus_(); // D+
  D_plus_(); // D+
  Push(pp_OK_dash_TALK); // OK-TALK
  StoreD(); // D!
}


// ================================================
// 0xdd33: WORD 'UNK_0xdd35' codep=0x224c parp=0xdd35
// ================================================

void UNK_0xdd35() // UNK_0xdd35
{
  UNK_0xd806(); // UNK_0xd806
  Push(0x3a98); Push(0x0000);
  D_plus_(); // D+
  Push(pp_UNK_0xd927); // UNK_0xd927
  StoreD(); // D!
}


// ================================================
// 0xdd45: WORD 'UNK_0xdd47' codep=0x224c parp=0xdd47 params=1 returns=1
// ================================================

void UNK_0xdd47() // UNK_0xdd47
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // R>
  BIT(); // BIT
  Push(pp_UNK_0xda61); // UNK_0xda61
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xdd57: WORD 'UNK_0xdd59' codep=0x224c parp=0xdd59 params=0 returns=1
// ================================================

void UNK_0xdd59() // UNK_0xdd59
{
  Push(0);
  Push(0x0100);
  Push(pp_UNK_0xd923); // UNK_0xd923
  Store_2(); // !_2
  do
  {
    Push(0x65e1+UNK_0xd82a.offset); // IFIELD
    Push(Read8(Pop())&0xFF); // C@
    Push(pp_UNK_0xd923); // UNK_0xd923
    Push(Read16(Pop())); // @
    _st_(); // <
    Push(0x65e1+UNK_0xd825.offset); // IFIELD
    Push(Read8(Pop())&0xFF); // C@
    Push(pp_UNK_0xd907); // UNK_0xd907
    Push(Read8(Pop())&0xFF); // C@
    Push(Pop() & Pop()); // AND
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    Push(0x65e1+UNK_0xd820.offset); // IFIELD
    Push(Read8(Pop())&0xFF); // C@
    Push(pp_UNK_0xd931); // UNK_0xd931
    Push(Read16(Pop())); // @
    Push(Pop() & Pop()); // AND
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      CI(); // CI
      Push(pp_UNK_0xd8e1); // UNK_0xd8e1
      _1_dot_5_ex__2(); // 1.5!_2
      Push(0x65e1+UNK_0xd82a.offset); // IFIELD
      Push(Read8(Pop())&0xFF); // C@
      Push(pp_UNK_0xd923); // UNK_0xd923
      Store_2(); // !_2
      Pop(); // DROP
      Push(1);
    }
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
}


// ================================================
// 0xdda9: WORD 'UNK_0xddab' codep=0x224c parp=0xddab params=0 returns=1
// ================================================

void UNK_0xddab() // UNK_0xddab
{
  Push(pp_UNK_0xd917); // UNK_0xd917
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(1);
  Push(2);
  WITHIN(); // WITHIN
  SWAP(); // SWAP
  Push(5);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xddc3: WORD 'UNK_0xddc5' codep=0x224c parp=0xddc5 params=3 returns=0
// ================================================

void UNK_0xddc5() // UNK_0xddc5
{
  Push(pp_UNK_0xd917); // UNK_0xd917
  Push(Read16(Pop())); // @
  Push(0x0033);
  OVER(); // OVER
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  SWAP(); // SWAP
  UNK_0xdd47(); // UNK_0xdd47
  Push(Pop() | Pop()); // OR
  Push(Read16(cc_UNK_0xd935)); // UNK_0xd935
  Push(pp_UNK_0xd931); // UNK_0xd931
  Push(Read16(Pop())); // @
  Push(2);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    UNK_0xddab(); // UNK_0xddab
    Push(Pop() | Pop()); // OR
  }
  if (Pop() == 0) return;
  IFIRST(); // IFIRST
  Push(0x0033);
  Push(5);
  IFIND(); // IFIND
  Pop(); // DROP
  Push(5);
  Push(pp_UNK_0xd917); // UNK_0xd917
  Store_2(); // !_2
}


// ================================================
// 0xde05: WORD 'UNK_0xde07' codep=0x224c parp=0xde07
// ================================================

void UNK_0xde07() // UNK_0xde07
{
  Push2Words("NULL");
  Push(pp_UNK_0xd8e1); // UNK_0xd8e1
  _1_dot_5_ex__2(); // 1.5!_2
  ORIGINATOR_gt_(); // ORIGINATOR>
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    UNK_0xddc5(); // UNK_0xddc5
    IsCHILD(); // ?CHILD
    if (Pop() != 0)
    {
      IOPEN(); // IOPEN
      UNK_0xdd59(); // UNK_0xdd59
      if (Pop() == 0) Push(1); else Push(0); // 0=
      if (Pop() != 0)
      {
        ICLOSE(); // ICLOSE
        Push(5);
        Push(pp_UNK_0xd917); // UNK_0xd917
        Store_2(); // !_2
        UNK_0xddc5(); // UNK_0xddc5
        IOPEN(); // IOPEN
        UNK_0xdd59(); // UNK_0xdd59
        Pop(); // DROP
      }
      CDROP(); // CDROP
    }
    CDROP(); // CDROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xde41: WORD 'UNK_0xde43' codep=0x224c parp=0xde43 params=0 returns=0
// ================================================

void UNK_0xde43() // UNK_0xde43
{
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_2(); // !_2
  Push(5);
  Push(pp_RECORD_n_); // RECORD#
  Store_2(); // !_2
}


// ================================================
// 0xde53: WORD 'UNK_0xde55' codep=0x224c parp=0xde55
// ================================================

void UNK_0xde55() // UNK_0xde55
{
  LoadData(_1BTN); // from 'BUTTONS'
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xde5f: WORD 'UNK_0xde61' codep=0x224c parp=0xde61
// ================================================

void UNK_0xde61() // UNK_0xde61
{
  UNK_0xde43(); // UNK_0xde43
  SET_STR_AS_PARAM("RESPOND");
  UNK_0xde55(); // UNK_0xde55
}


// ================================================
// 0xde71: WORD '>HAIL$' codep=0x224c parp=0xde7c
// ================================================
// entry

void _gt_HAIL_do_() // >HAIL$
{
  UNK_0xde43(); // UNK_0xde43
  SET_STR_AS_PARAM("HAIL   ");
  UNK_0xde55(); // UNK_0xde55
}


// ================================================
// 0xde8c: WORD 'UNK_0xde8e' codep=0x224c parp=0xde8e params=0 returns=0
// ================================================

void UNK_0xde8e() // UNK_0xde8e
{
  Push(-1);
  Push(pp_LSCAN); // LSCAN
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  Push(pp_LSCAN); // LSCAN
  C_ex__2(); // C!_2
}


// ================================================
// 0xde9c: WORD 'UNK_0xde9e' codep=0x224c parp=0xde9e params=2 returns=0
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
// 0xdebc: WORD 'UNK_0xdebe' codep=0x224c parp=0xdebe params=2 returns=1
// ================================================

void UNK_0xdebe() // UNK_0xdebe
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
    Push(i); // I
    Push(Read8(Pop())&0xFF); // C@
    Push(Pop() + Pop()); // +
    Push(1);
    i += Pop();
  } while(i<imax); // (/LOOP)

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
  unsigned short int i, imax;
  Push(pp_UNK_0xdedc); // UNK_0xdedc
  Push(0x0070);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  ORIGINATOR_gt_(); // ORIGINATOR>
  Push(0x65e1+UNK_0xd87a.offset); // IFIELD
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x0010);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x65e1+PHRASE_do_.offset); // IFIELD
    COUNT(); // COUNT
    UNK_0xd963(); // UNK_0xd963
    UNK_0xde8e(); // UNK_0xde8e
    Push(pp_LSCAN); // LSCAN
    Push(pp_UNK_0xdedc); // UNK_0xdedc
    Push(i); // I
    Push(7);
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    OVER(); // OVER
    Push(Read8(Pop())&0xFF); // C@
    Push(Pop()+1); // 1+
    CMOVE_2(); // CMOVE_2
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xdf90: WORD 'UNK_0xdf92' codep=0x224c parp=0xdf92 params=1 returns=2
// ================================================

void UNK_0xdf92() // UNK_0xdf92
{
  Push(7);
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdedc); // UNK_0xdedc
  Push(Pop() + Pop()); // +
  COUNT(); // COUNT
}


// ================================================
// 0xdf9e: WORD '1SYL' codep=0x224c parp=0xdfa7
// ================================================
// entry

void _1SYL() // 1SYL
{
  Push(0);
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
  unsigned short int a, i, imax;
  PAD(); // PAD
  Push(0x0040);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  Push(0);
  PAD(); // PAD
  C_ex__2(); // C!_2
  ORIGINATOR_gt_(); // ORIGINATOR>
  Push(0x65e1+UNK_0xd875.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  a = Pop(); // >R
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  Push(a); // R>
  MOD(); // MOD
  Push(Pop()+2); // 2+
  Push(1);

  i = Pop();
  imax = Pop();
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
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
  PAD(); // PAD
  COUNT(); // COUNT
  _dash_TRAILING(); // -TRAILING
}


// ================================================
// 0xe003: WORD 'UNK_0xe005' codep=0x224c parp=0xe005
// ================================================

void UNK_0xe005() // UNK_0xe005
{
  Push(1);
  Push(pp_LINE_dash_CO); // LINE-CO
  Store_2(); // !_2
  CTINIT(); // CTINIT
  Push(0x5963); Push(0x0002);
  UNK_0xd80e(); // UNK_0xd80e
  DrawTTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
}


// ================================================
// 0xe01f: WORD 'UNK_0xe021' codep=0x224c parp=0xe021 params=0 returns=0
// ================================================

void UNK_0xe021() // UNK_0xe021
{
  Push(Read16(cc_UNK_0xd935)); // UNK_0xd935
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_P_dash_POSTU); // P-POSTU
  Push(Read16(Pop())); // @
  Push(4);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xe005(); // UNK_0xe005
  Push(0x597d); Push(0x0002);
  UNK_0xd80e(); // UNK_0xd80e
  DrawTTY(); // .TTY
}


// ================================================
// 0xe041: WORD 'UNK_0xe043' codep=0x224c parp=0xe043 params=0 returns=1
// ================================================

void UNK_0xe043() // UNK_0xe043
{
  Push(Read16(cc_UNK_0xd9f7)); // UNK_0xd9f7
  Push(Read16(cc_UNK_0xd935)); // UNK_0xd935
  Push(Pop() & Pop()); // AND
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
  Push(pp_UNK_0xda55); // UNK_0xda55
  Push(Read16(Pop())); // @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe069: WORD 'UNK_0xe06b' codep=0x224c parp=0xe06b params=0 returns=0
// ================================================

void UNK_0xe06b() // UNK_0xe06b
{
  Push(pp_TERMINA); // TERMINA
  ON_2(); // ON_2
  Push(pp__pe_TALK); // %TALK
  _099(); // 099
  UNK_0xe021(); // UNK_0xe021
  Push(0xae81); // probable 'CEX+WAX'
  Push(pp__i_EXTERN); // 'EXTERN
  Store_2(); // !_2
}


// ================================================
// 0xe07f: WORD 'UNK_0xe081' codep=0x224c parp=0xe081
// ================================================

void UNK_0xe081() // UNK_0xe081
{
  unsigned short int a;
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  Push(pp_IsON_dash_PLA); // ?ON-PLA
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  Push(a); // I
  if (Pop() != 0)
  {
    SetColor(PINK);
  } else
  {
    SetColor(BLUE);
  }
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    Pop(); // DROP
    SetColor(WHITE);
  }
  StoreCOLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  UNK_0xd806(); // UNK_0xd806
  D_plus_(); // D+
  do
  {
    UNK_0xd806(); // UNK_0xd806
    _2OVER(); // 2OVER
    D_gt_(); // D>
    _i_KEY(); // 'KEY
    Push(0x0020);
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Push(a); // R>
  if (Pop() != 0)
  {
    SetColor(RED);
  } else
  {
    SetColor(DK_dash_BLUE);
  }
  StoreCOLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  Push(pp_CTCOLOR); // CTCOLOR
  Push(Read16(Pop())); // @
  StoreCOLOR(); // !COLOR
  Pop(); Pop(); // 2DROP
  Push(pp_ESC_dash_EN); // ESC-EN
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

void ACASE() // ACASE
{
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
}

// ================================================
// 0xe105: WORD 'UNK_0xe107' codep=0x224c parp=0xe107
// ================================================

void UNK_0xe107() // UNK_0xe107
{
  UNK_0xdb1a(); // UNK_0xdb1a
  Push(0x65e1+UNK_0xd82f.offset); // IFIELD
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
  Push(pp__ro_ORIGIN); // (ORIGIN
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_AORIGI); // (AORIGI
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
  if (Pop() != 0)
  {
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
  }
  Pop(); // DROP
}


// ================================================
// 0xe13b: WORD 'UNK_0xe13d' codep=0x224c parp=0xe13d
// ================================================

void UNK_0xe13d() // UNK_0xe13d
{
  unsigned short int i, imax, a;
  _2DUP(); // 2DUP
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(Read8(Pop())&0xFF); // C@
    Push(Read16(cc_BL)); // BL
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Push(Pop()+1); // 1+
    } else
    {
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  a = Pop(); // >R
  SWAP(); // SWAP
  Push(a); // I
  _dash_(); // -
  Push(Pop() + Pop()); // +
  Push(a); // R>
  SWAP(); // SWAP
}


// ================================================
// 0xe16b: WORD 'UNK_0xe16d' codep=0x224c parp=0xe16d
// ================================================

void UNK_0xe16d() // UNK_0xe16d
{
  unsigned short int i, imax;
  UNK_0xe13d(); // UNK_0xe13d
  _2DUP(); // 2DUP
  Push(Pop()+1); // 1+
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
    Push(i); // I
    Push(Read8(Pop())&0xFF); // C@
    Push(Read16(cc_BL)); // BL
    Push((Pop()==Pop())?1:0); // =
    Push(i); // I
    Push(Pop()+1); // 1+
    Push(imax); // I'
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() | Pop()); // OR
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
  Push(Pop()+1); // 1+
  ROT(); // ROT
  Push(3);
  PICK(); // PICK
  _dash_(); // -
  Push(Pop()-1); // 1-
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xe1bf: WORD 'UNK_0xe1c1' codep=0x224c parp=0xe1c1 params=2 returns=2
// ================================================

void UNK_0xe1c1() // UNK_0xe1c1
{
  Push(Pop()-1); // 1-
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
}


// ================================================
// 0xe1cb: WORD 'UNK_0xe1cd' codep=0x224c parp=0xe1cd params=1 returns=1
// ================================================

void UNK_0xe1cd() // UNK_0xe1cd
{
  Push(pp_CTX); // CTX
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
  Push(1);
  Push(pp_LINE_dash_CO); // LINE-CO
  _plus__ex__2(); // +!_2
  Push(pp_LINE_dash_CO); // LINE-CO
  Push(Read16(Pop())); // @
  Push(pp_WLINES); // WLINES
  Push(Read16(Pop())); // @
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0x4e20); Push(0x0000);
    UNK_0xe081(); // UNK_0xe081
    Push(pp_LINE_dash_CO); // LINE-CO
    _099(); // 099
  }
  WUP(); // WUP
}


// ================================================
// 0xe20c: WORD 'UNK_0xe20e' codep=0x224c parp=0xe20e params=1 returns=1
// ================================================

void UNK_0xe20e() // UNK_0xe20e
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(0x002e);
  Push((Pop()==Pop())?1:0); // =
  Push(Read16(a)); // R@
  Push(0x003f);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  Push(Read16(a)); // R@
  Push(0x002c);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  Push(a); // R>
  Push(0x0027);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe238: WORD 'UNK_0xe23a' codep=0x224c parp=0xe23a params=2 returns=0
// ================================================

void UNK_0xe23a() // UNK_0xe23a
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    UNK_0xe1cd(); // UNK_0xe1cd
    if (Pop() == 0) Push(1); else Push(0); // 0=
    if (Pop() != 0)
    {
      CTSCROLL(); // CTSCROLL
      Push(0);
      Push(6);
      CTPOS_dot_(); // CTPOS.
      Push(-1);
      Push(pp_YBLT); // YBLT
      _plus__ex__2(); // +!_2
    }
    OVER(); // OVER
    Push(Read8(Pop())&0xFF); // C@
    UNK_0xe20e(); // UNK_0xe20e
    Push(pp_CTX); // CTX
    Push(Read16(Pop())); // @
    if (Pop() == 0) Push(1); else Push(0); // 0=
    Push(Pop() | Pop()); // OR
    if (Pop() == 0) Push(1); else Push(0); // NOT
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
// 0xe27e: WORD 'UNK_0xe280' codep=0x1d29 parp=0xe280
// ================================================
// 0xe280: db 0x00 0x01 0x01 0x00 0x01 0x01 0x01 0x01 0x01 0x00 0x01 0x01 0x00 0x00 0x00 0x00 0x00 0x00 0x01 0x01 0x00 0x00 0x00 0x00 0x00 '                         '

// ================================================
// 0xe299: WORD 'UNK_0xe29b' codep=0x224c parp=0xe29b params=0 returns=2
// ================================================

void UNK_0xe29b() // UNK_0xe29b
{
  Push(pp_UNK_0xda07); // UNK_0xda07
  COUNT(); // COUNT
}


// ================================================
// 0xe2a1: WORD 'UNK_0xe2a3' codep=0x224c parp=0xe2a3 params=0 returns=2
// ================================================

void UNK_0xe2a3() // UNK_0xe2a3
{
  Push(pp_UNK_0xda19); // UNK_0xda19
  COUNT(); // COUNT
}


// ================================================
// 0xe2a9: WORD 'UNK_0xe2ab' codep=0x224c parp=0xe2ab params=0 returns=2
// ================================================

void UNK_0xe2ab() // UNK_0xe2ab
{
  Push(pp_UNK_0xda2b); // UNK_0xda2b
  COUNT(); // COUNT
}


// ================================================
// 0xe2b1: WORD 'UNK_0xe2b3' codep=0x224c parp=0xe2b3 params=0 returns=2
// ================================================

void UNK_0xe2b3() // UNK_0xe2b3
{
  SET_STR_AS_PARAM("ISS");
  UNK_0xe23a(); // UNK_0xe23a
  Push(pp_UNK_0xda3d); // UNK_0xda3d
  COUNT(); // COUNT
}


// ================================================
// 0xe2c1: WORD 'UNK_0xe2c3' codep=0x224c parp=0xe2c3 params=2 returns=2
// ================================================

void UNK_0xe2c3() // UNK_0xe2c3
{
  do
  {
    OVER(); // OVER
    Push(Read8(Pop())&0xFF); // C@
    Push(0x0029);
    Push((Pop()==Pop())?1:0); // =
    if (Pop() == 0) Push(1); else Push(0); // NOT
    OVER(); // OVER
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) return;
    UNK_0xe1c1(); // UNK_0xe1c1
  } while(1);
}


// ================================================
// 0xe2e1: WORD 'UNK_0xe2e3' codep=0x224c parp=0xe2e3 params=0 returns=1
// ================================================

void UNK_0xe2e3() // UNK_0xe2e3
{
  Push(Read16(cc_UNK_0xd935)); // UNK_0xd935
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    UNK_0xe1c1(); // UNK_0xe1c1
    Push(pp_UNK_0xd8f7); // UNK_0xd8f7
    Push(Read16(Pop())); // @
    Push(9);
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
      UNK_0xe2c3(); // UNK_0xe2c3
      Push2Words("NULL");
    }
  }
  Push(0);
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
// 0xe30f: WORD 'UNK_0xe311' codep=0x224c parp=0xe311 params=0 returns=2
// ================================================

void UNK_0xe311() // UNK_0xe311
{
  SET_STR_AS_PARAM("OTHER");
  UNK_0xe23a(); // UNK_0xe23a
  SET_STR_AS_PARAM("BEINGS");
}


// ================================================
// 0xe326: WORD 'UNK_0xe328' codep=0x224c parp=0xe328 params=0 returns=2
// ================================================

void UNK_0xe328() // UNK_0xe328
{
  SET_STR_AS_PARAM("THE");
  UNK_0xe23a(); // UNK_0xe23a
  SET_STR_AS_PARAM("PAST");
}


// ================================================
// 0xe339: WORD 'UNK_0xe33b' codep=0x224c parp=0xe33b params=0 returns=2
// ================================================

void UNK_0xe33b() // UNK_0xe33b
{
  SET_STR_AS_PARAM("TRADE");
}


// ================================================
// 0xe345: WORD 'UNK_0xe347' codep=0x224c parp=0xe347 params=2 returns=3
// ================================================

void UNK_0xe347() // UNK_0xe347
{
  UNK_0xe1c1(); // UNK_0xe1c1
  Push(0);
}


// ================================================
// 0xe34d: WORD 'UNK_0xe34f' codep=0x224c parp=0xe34f params=1 returns=2
// ================================================

void UNK_0xe34f() // UNK_0xe34f
{
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("ESHVEY");
    return;
  }
  SET_STR_AS_PARAM("ESHVARA");
}


// ================================================
// 0xe36c: WORD 'UNK_0xe36e' codep=0x224c parp=0xe36e params=0 returns=1
// ================================================

void UNK_0xe36e() // UNK_0xe36e
{
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd
  Push(Read16(Pop())); // @
  Push(2);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xe378: WORD 'UNK_0xe37a' codep=0x224c parp=0xe37a params=0 returns=2
// ================================================

void UNK_0xe37a() // UNK_0xe37a
{
  UNK_0xe36e(); // UNK_0xe36e
  UNK_0xe34f(); // UNK_0xe34f
}


// ================================================
// 0xe380: WORD 'UNK_0xe382' codep=0x224c parp=0xe382 params=0 returns=2
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

void IsS() // ?S
{
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
// 0xe3a5: WORD 'UNK_0xe3a7' codep=0x224c parp=0xe3a7
// ================================================

void UNK_0xe3a7() // UNK_0xe3a7
{
  Push(pp_UNK_0xd8f7); // UNK_0xd8f7
  Push(Read16(Pop())); // @
  IsS(); // ?S case
}


// ================================================
// 0xe3af: WORD 'SPL' codep=0x4b3b parp=0xe3b7
// ================================================

void SPL() // SPL
{
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
    Push(0);
    break;

  }
}

// ================================================
// 0xe3df: WORD 'UNK_0xe3e1' codep=0x224c parp=0xe3e1
// ================================================

void UNK_0xe3e1() // UNK_0xe3e1
{
  OVER(); // OVER
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(Pop() * Pop()); // *
  SPL(); // SPL case
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
  Push(pp_UNK_0xd90b); // UNK_0xd90b
  Store_2(); // !_2
  CTINIT(); // CTINIT
  Push(0);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  Push(-1);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  Push(pp_CTCOLOR); // CTCOLOR
  Push(Read16(Pop())); // @
  StoreCOLOR(); // !COLOR
  CTSCROLL(); // CTSCROLL
  do
  {
    UNK_0xe16d(); // UNK_0xe16d
    UNK_0xe3e1(); // UNK_0xe3e1
    UNK_0xe043(); // UNK_0xe043
    if (Pop() != 0)
    {
      UNK_0xdfbd(); // UNK_0xdfbd
    }
    UNK_0xe23a(); // UNK_0xe23a
    Push(1);
    Push(pp_CTX); // CTX
    _plus__ex__2(); // +!_2
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe447: WORD 'UNK_0xe449' codep=0x224c parp=0xe449
// ================================================

void UNK_0xe449() // UNK_0xe449
{
  Push(0x65e1+PHRASE_do_.offset); // IFIELD
  COUNT(); // COUNT
  UNK_0xd963(); // UNK_0xd963
  Push(pp_LSCAN); // LSCAN
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
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    Push(0x2ee0); Push(0x0000);
    UNK_0xe081(); // UNK_0xe081
    IOPEN(); // IOPEN
    UNK_0xe449(); // UNK_0xe449
    ICLOSE(); // ICLOSE
  }
  CTSCROLL(); // CTSCROLL
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe479: WORD 'UNK_0xe47b' codep=0x224c parp=0xe47b params=0 returns=0
// ================================================

void UNK_0xe47b() // UNK_0xe47b
{
  Push(pp_UNK_0xd8e1); // UNK_0xd8e1
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  UNK_0xe107(); // UNK_0xe107
  UNK_0xdb1a(); // UNK_0xdb1a
  Push(0x65e1+UNK_0xd82a.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  Push(0x65e1+UNK_0xd82a.offset); // IFIELD
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
  unsigned short int a;
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xe280); // UNK_0xe280
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(0xd9f7); // probable 'UNK_0xd9f7'
  Store_2(); // !_2
  ORGIA(); // ORGIA
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_ORIGIN); // (ORIGIN
  _1_dot_5_ex__2(); // 1.5!_2
  Push(a); // R>
  if (Pop() == 0) return;
  UNK_0xdf4e(); // UNK_0xdf4e
}


// ================================================
// 0xe4c7: WORD 'UNK_0xe4c9' codep=0x224c parp=0xe4c9
// ================================================

void UNK_0xe4c9() // UNK_0xe4c9
{
  unsigned short int a, b;
  Push2Words("*MESS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  IsNULL(); // ?NULL
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    Push(0x59be); Push(0x0002);
    UNK_0xd80e(); // UNK_0xd80e
    DrawTTY(); // .TTY
  } else
  {
    IPREV(); // IPREV
    Push(pp_UNK_0xd8dd); // UNK_0xd8dd
    Push(Read16(Pop())); // @
    a = Pop(); // >R
    Push(1);
    Push(0xbe74); // probable '?COMS'
    MODULE(); // MODULE
    Push(pp_UNK_0xd8dd); // UNK_0xd8dd
    Store_2(); // !_2
    UNK_0xe49f(); // UNK_0xe49f
    Push(0xd935); // probable 'UNK_0xd935'
    ON_2(); // ON_2
    Push(pp_UNK_0xd8eb); // UNK_0xd8eb
    GetEXECUTE(); // @EXECUTE
    Push(pp_CONTEXT_3); // CONTEXT_3
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop())); // @
    b = Pop(); // >R
    ON_2(); // ON_2
    do
    {
      INEXT(); // INEXT
      GetINST_dash_S(); // @INST-S
      Push(pp_UNK_0xd8dd); // UNK_0xd8dd
      Push(Read16(Pop())); // @
      Push((Pop()==Pop())?1:0); // =
      if (Pop() != 0)
      {
        Push(0x65e1+UNK_0xd87f.offset); // IFIELD
        _1_dot_5_at_(); // 1.5@
        Push(pp_UNK_0xd8e1); // UNK_0xd8e1
        _1_dot_5_ex__2(); // 1.5!_2
        UNK_0xdb1a(); // UNK_0xdb1a
        IOPEN(); // IOPEN
        UNK_0xe45b(); // UNK_0xe45b
        Push(0xd4c0); Push(0x0001);
        Push(0xbe96); // probable 'CPAUS'
        MODULE(); // MODULE
      }
      IsLAST(); // ?LAST
      IsQUIT(); // ?QUIT
      Push(Pop() | Pop()); // OR
    } while(Pop() == 0);
    Push(b); // R>
    Push(pp_CONTEXT_3); // CONTEXT_3
    Store_2(); // !_2
    Push(0xd935); // probable 'UNK_0xd935'
    _099(); // 099
    Push(a); // R>
    Push(pp_UNK_0xd8dd); // UNK_0xd8dd
    Store_2(); // !_2
    UNK_0xe49f(); // UNK_0xe49f
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
  SetColor(BLACK);
  Push(2);
  DrawON(); // .ON
}


// ================================================
// 0xe561: WORD 'UNK_0xe563' codep=0x1d29 parp=0xe563
// ================================================
// 0xe563: db 0x00 0x00 '  '

// ================================================
// 0xe565: WORD 'UNK_0xe567' codep=0x224c parp=0xe567
// ================================================

void UNK_0xe567() // UNK_0xe567
{
  CTINIT(); // CTINIT
  Push(0x59d8); Push(0x0002);
  UNK_0xd80e(); // UNK_0xd80e
  DrawTTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
  Push(1);
  Push(pp_LINE_dash_CO); // LINE-CO
  Store_2(); // !_2
  UNK_0xdb3e(); // UNK_0xdb3e
  A_gt_ORIGINATO(); // A>ORIGINATO
  UNK_0xde07(); // UNK_0xde07
  UNK_0xe47b(); // UNK_0xe47b
  Push(pp_UNK_0xd8ff); // UNK_0xd8ff
  Push(Read16(Pop())); // @
  Push(7);
  Push(0x000c);
  WITHIN(); // WITHIN
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x0013);
  Push((Pop()==Pop())?1:0); // =
  SWAP(); // SWAP
  Push(4);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(pp_UNK_0xd8e1); // UNK_0xd8e1
  _1_dot_5_at_(); // 1.5@
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd
  Push(Read16(Pop())); // @
  Push(0);
  Push(0xbe74); // probable '?COMS'
  MODULE(); // MODULE
}


// ================================================
// 0xe5bf: WORD 'UNK_0xe5c1' codep=0x1d29 parp=0xe5c1
// ================================================
// 0xe5c1: db 0x00 0x01 0x01 0x01 0x01 0x01 0x00 0x00 0x00 0x01 0x01 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x01 0x00 '                         '

// ================================================
// 0xe5da: WORD 'UNK_0xe5dc' codep=0x224c parp=0xe5dc params=0 returns=1
// ================================================

void UNK_0xe5dc() // UNK_0xe5dc
{
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe5c1); // UNK_0xe5c1
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
}


// ================================================
// 0xe5e8: WORD 'UNK_0xe5ea' codep=0x224c parp=0xe5ea params=0 returns=1
// ================================================

void UNK_0xe5ea() // UNK_0xe5ea
{
  UNK_0xd7f6(); // UNK_0xd7f6
  Push(8);
  _eq_SPECIE(); // =SPECIE
  Push(0x000b);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe5fc: WORD 'UNK_0xe5fe' codep=0x224c parp=0xe5fe params=1 returns=0
// ================================================

void UNK_0xe5fe() // UNK_0xe5fe
{
  Push(5);
  Push(Read16(cc_MPS)); // MPS
  _star__slash_(); // */
  Push(pp__pe_TALK); // %TALK
  Store_2(); // !_2
}


// ================================================
// 0xe60a: WORD 'UNK_0xe60c' codep=0x224c parp=0xe60c
// ================================================

void UNK_0xe60c() // UNK_0xe60c
{
  Push(5);
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe612: WORD 'UNK_0xe614' codep=0x224c parp=0xe614
// ================================================

void UNK_0xe614() // UNK_0xe614
{
  Push(0xfffb);
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe61c: WORD 'UNK_0xe61e' codep=0x224c parp=0xe61e
// ================================================

void UNK_0xe61e() // UNK_0xe61e
{
  Push(0x000a);
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe626: WORD 'UNK_0xe628' codep=0x224c parp=0xe628
// ================================================

void UNK_0xe628() // UNK_0xe628
{
  Push(0xfff6);
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe630: WORD 'UNK_0xe632' codep=0x224c parp=0xe632
// ================================================

void UNK_0xe632() // UNK_0xe632
{
  Push(pp_UNK_0xd91b); // UNK_0xd91b
  Push(Read16(Pop())); // @
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
// 0xe64a: WORD 'UNK_0xe64c' codep=0x224c parp=0xe64c
// ================================================

void UNK_0xe64c() // UNK_0xe64c
{
  Push(0x0064);
  _plus__ex_EDL(); // +!EDL
  Push(0x5184); // probable '?FIRED-'
  _099(); // 099
}


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


// ================================================
// 0xe66a: WORD 'UNK_0xe66c' codep=0x224c parp=0xe66c params=0 returns=1
// ================================================

void UNK_0xe66c() // UNK_0xe66c
{
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd
  Push(Read16(Pop())); // @
  Push(0x000b);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xe678: WORD 'UNK_0xe67a' codep=0x224c parp=0xe67a params=0 returns=1
// ================================================

void UNK_0xe67a() // UNK_0xe67a
{
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd
  Push(Read16(Pop())); // @
  Push(0x0013);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xe686: WORD 'UNK_0xe688' codep=0x224c parp=0xe688
// ================================================

void UNK_0xe688() // UNK_0xe688
{
  UNK_0xdb5f(); // UNK_0xdb5f
  _plus__ex_EDL(); // +!EDL
  Push(pp_UNK_0xd8ef); // UNK_0xd8ef
  Push(pp_P_dash_POSTU); // P-POSTU
  Push(Read16(Pop())); // @
  OVER(); // OVER
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  SWAP(); // SWAP
  Store_2(); // !_2
}


// ================================================
// 0xe69e: WORD 'UNK_0xe6a0' codep=0x224c parp=0xe6a0
// ================================================

void UNK_0xe6a0() // UNK_0xe6a0
{
  UNK_0xdb5f(); // UNK_0xdb5f
  _plus__ex_EDL(); // +!EDL
  Push(0xd8e7); // probable 'UNK_0xd8e7'
  _099(); // 099
}


// ================================================
// 0xe6ac: WORD 'UNK_0xe6ae' codep=0x224c parp=0xe6ae
// ================================================

void UNK_0xe6ae() // UNK_0xe6ae
{
  UNK_0xdb5f(); // UNK_0xdb5f
  Push(pp_UNK_0xd8fb); // UNK_0xd8fb
  Push(Read8(Pop())&0xFF); // C@
  _slash_(); // /
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe6ba: WORD 'UNK_0xe6bc' codep=0x224c parp=0xe6bc params=0 returns=0
// ================================================

void UNK_0xe6bc() // UNK_0xe6bc
{
  Push(Read16(cc_UNK_0xda5d)); // UNK_0xda5d
  if (Pop() == 0) return;
  UNK_0xdb5f(); // UNK_0xdb5f
  Push(pp_UNK_0xd8fb); // UNK_0xd8fb
  Push(Read8(Pop())&0xFF); // C@
  _slash_(); // /
  Push(Pop()>>1); // 2/
  _plus__ex_EDL(); // +!EDL
  Push(0xda5d); // probable 'UNK_0xda5d'
  _099(); // 099
}


// ================================================
// 0xe6d6: WORD 'UNK_0xe6d8' codep=0x224c parp=0xe6d8
// ================================================

void UNK_0xe6d8() // UNK_0xe6d8
{
  A_gt_ORIGINATO(); // A>ORIGINATO
  ORIGINATOR_gt_(); // ORIGINATOR>
  Push(0x65e1+UNK_0xd843.offset); // IFIELD
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


// ================================================
// 0xe6f8: WORD 'UNK_0xe6fa' codep=0x224c parp=0xe6fa
// ================================================

void UNK_0xe6fa() // UNK_0xe6fa
{
  Push(3);
  Push(2);
  UNK_0xe6e6(); // UNK_0xe6e6
}


// ================================================
// 0xe702: WORD 'UNK_0xe704' codep=0x224c parp=0xe704
// ================================================

void UNK_0xe704() // UNK_0xe704
{
  Push(2);
  Push(1);
  UNK_0xe6e6(); // UNK_0xe6e6
}


// ================================================
// 0xe70c: WORD 'UNK_0xe70e' codep=0x224c parp=0xe70e
// ================================================

void UNK_0xe70e() // UNK_0xe70e
{
  Push(5);
  Push(2);
  UNK_0xe6e6(); // UNK_0xe6e6
}


// ================================================
// 0xe716: WORD 'UNK_0xe718' codep=0x224c parp=0xe718
// ================================================

void UNK_0xe718() // UNK_0xe718
{
  Push(1);
  Push(1);
  UNK_0xe6e6(); // UNK_0xe6e6
}


// ================================================
// 0xe720: WORD 'UNK_0xe722' codep=0x224c parp=0xe722
// ================================================

void UNK_0xe722() // UNK_0xe722
{
  Push(1);
  Push(2);
  UNK_0xe6e6(); // UNK_0xe6e6
}


// ================================================
// 0xe72a: WORD 'UNK_0xe72c' codep=0x224c parp=0xe72c params=0 returns=0
// ================================================

void UNK_0xe72c() // UNK_0xe72c
{
  Push(0x0019);
  UNK_0xe5fe(); // UNK_0xe5fe
}


// ================================================
// 0xe734: WORD 'UNK_0xe736' codep=0x224c parp=0xe736 params=0 returns=0
// ================================================

void UNK_0xe736() // UNK_0xe736
{
  Push(0x0064);
  UNK_0xe5fe(); // UNK_0xe5fe
}


// ================================================
// 0xe73e: WORD 'UNK_0xe740' codep=0x224c parp=0xe740 params=0 returns=0
// ================================================

void UNK_0xe740() // UNK_0xe740
{
  Push(pp__pe_TALK); // %TALK
  _099(); // 099
}


// ================================================
// 0xe746: WORD 'UNK_0xe748' codep=0x224c parp=0xe748 params=0 returns=0
// ================================================

void UNK_0xe748() // UNK_0xe748
{
  Push(0x000a);
  UNK_0xe5fe(); // UNK_0xe5fe
}


// ================================================
// 0xe750: WORD 'UNK_0xe752' codep=0x224c parp=0xe752 params=0 returns=0
// ================================================

void UNK_0xe752() // UNK_0xe752
{
  Push(0x0064);
  Push(pp__pe_TALK); // %TALK
  Store_2(); // !_2
}


// ================================================
// 0xe75c: WORD 'UNK_0xe75e' codep=0x224c parp=0xe75e
// ================================================

void UNK_0xe75e() // UNK_0xe75e
{
  CTINIT(); // CTINIT
  Push(0x59ef); Push(0x0002);
  UNK_0xd80e(); // UNK_0xd80e
  DrawTTY(); // .TTY
}


// ================================================
// 0xe76c: WORD 'UNK_0xe76e' codep=0x224c parp=0xe76e
// ================================================

void UNK_0xe76e() // UNK_0xe76e
{
  SET_STR_AS_PARAM("THEY'VE ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xe77d: WORD 'UNK_0xe77f' codep=0x224c parp=0xe77f
// ================================================

void UNK_0xe77f() // UNK_0xe77f
{
  Push(0x5192); // probable '?A-SHIE'
  ON_2(); // ON_2
  UNK_0xe75e(); // UNK_0xe75e
  UNK_0xe76e(); // UNK_0xe76e
  Push(0x5a06); Push(0x0002);
  UNK_0xd80e(); // UNK_0xd80e
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe795: WORD 'UNK_0xe797' codep=0x224c parp=0xe797
// ================================================

void UNK_0xe797() // UNK_0xe797
{
  Push(0x5192); // probable '?A-SHIE'
  _099(); // 099
  UNK_0xe75e(); // UNK_0xe75e
  UNK_0xe76e(); // UNK_0xe76e
  Push(0x5a28); Push(0x0002);
  UNK_0xd80e(); // UNK_0xd80e
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe7ad: WORD 'UNK_0xe7af' codep=0x224c parp=0xe7af
// ================================================

void UNK_0xe7af() // UNK_0xe7af
{
  Push(0x51a0); // probable '?A-WEAP'
  ON_2(); // ON_2
  UNK_0xe75e(); // UNK_0xe75e
  UNK_0xe76e(); // UNK_0xe76e
  Push(0x5a4b); Push(0x0002);
  UNK_0xd80e(); // UNK_0xd80e
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe7c5: WORD 'UNK_0xe7c7' codep=0x224c parp=0xe7c7
// ================================================

void UNK_0xe7c7() // UNK_0xe7c7
{
  Push(0x51a0); // probable '?A-WEAP'
  _099(); // 099
  UNK_0xe75e(); // UNK_0xe75e
  UNK_0xe76e(); // UNK_0xe76e
  Push(0x5a6c); Push(0x0002);
  UNK_0xd80e(); // UNK_0xd80e
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe7dd: WORD 'UNK_0xe7df' codep=0x224c parp=0xe7df
// ================================================

void UNK_0xe7df() // UNK_0xe7df
{
  Push(0x52bd); // probable '?CALLED'
  ON_2(); // ON_2
  UNK_0xe75e(); // UNK_0xe75e
  Push(0x5a91); Push(0x0002);
  UNK_0xd80e(); // UNK_0xd80e
  DrawTTY(); // .TTY
}


// ================================================
// 0xe7f3: WORD 'UNK_0xe7f5' codep=0x224c parp=0xe7f5
// ================================================

void UNK_0xe7f5() // UNK_0xe7f5
{
  Push(pp__i__plus_VESS); // '+VESS
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  Push(0x52bd); // probable '?CALLED'
  _099(); // 099
  UNK_0xe75e(); // UNK_0xe75e
  Push(0x5ac4); Push(0x0002);
  UNK_0xd80e(); // UNK_0xd80e
  DrawTTY(); // .TTY
}


// ================================================
// 0xe80f: WORD 'UNK_0xe811' codep=0x224c parp=0xe811
// ================================================

void UNK_0xe811() // UNK_0xe811
{
  Push(0xda03); // probable 'UNK_0xda03'
  ON_2(); // ON_2
  UNK_0xe75e(); // UNK_0xe75e
  Push(0x5af1); Push(0x0002);
  UNK_0xd80e(); // UNK_0xd80e
  DrawTTY(); // .TTY
}


// ================================================
// 0xe825: WORD 'UNK_0xe827' codep=0x224c parp=0xe827
// ================================================

void UNK_0xe827() // UNK_0xe827
{
  Push(pp_TERMINA); // TERMINA
  _099(); // 099
  CTERASE(); // CTERASE
  Push(1);
  UNK_0xe567(); // UNK_0xe567
  Push(1);
  Push(pp_UNK_0xd91b); // UNK_0xd91b
  _plus__ex__2(); // +!_2
  UNK_0xdd35(); // UNK_0xdd35
  UNK_0xdd15(); // UNK_0xdd15
  Push(2);
  Push(pp_UNK_0xda65); // UNK_0xda65
  Store_2(); // !_2
  UNK_0xde61(); // UNK_0xde61
  Push(pp_UNK_0xe563); // UNK_0xe563
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    Push(5);
    Push(0);
    DrawABTN(); // .ABTN
  }
  UNK_0xe632(); // UNK_0xe632
}


// ================================================
// 0xe855: WORD 'UNK_0xe857' codep=0x224c parp=0xe857
// ================================================

void UNK_0xe857() // UNK_0xe857
{
  Push(pp_TERMINA); // TERMINA
  _099(); // 099
  Push(2);
  UNK_0xe567(); // UNK_0xe567
  Push(1);
  Push(pp_UNK_0xd903); // UNK_0xd903
  _plus__ex__2(); // +!_2
  UNK_0xdd15(); // UNK_0xdd15
}


// ================================================
// 0xe869: WORD 'UNK_0xe86b' codep=0x224c parp=0xe86b
// ================================================

void UNK_0xe86b() // UNK_0xe86b
{
  Push(pp_UNK_0xd8f7); // UNK_0xd8f7
  Push(Read16(Pop())); // @
  UNK_0xe567(); // UNK_0xe567
  Push(1);
  Push(pp_UNK_0xd903); // UNK_0xd903
  _plus__ex__2(); // +!_2
  UNK_0xdd15(); // UNK_0xdd15
  Push(pp_UNK_0xd8f7); // UNK_0xd8f7
  _099(); // 099
}


// ================================================
// 0xe87f: WORD 'UNK_0xe881' codep=0x224c parp=0xe881
// ================================================

void UNK_0xe881() // UNK_0xe881
{
  Push(0x000d);
  UNK_0xe567(); // UNK_0xe567
  Push(1);
  Push(pp_UNK_0xd903); // UNK_0xd903
  _plus__ex__2(); // +!_2
  UNK_0xdd15(); // UNK_0xdd15
}


// ================================================
// 0xe891: WORD 'UNK_0xe893' codep=0x224c parp=0xe893
// ================================================

void UNK_0xe893() // UNK_0xe893
{
  Push(0x000e);
  UNK_0xe567(); // UNK_0xe567
  Push(pp_UNK_0xd8e1); // UNK_0xd8e1
  _1_dot_5_at_(); // 1.5@
  Push(pp_UNK_0xda4f); // UNK_0xda4f
  _1_dot_5_ex__2(); // 1.5!_2
  Push(1);
  Push(pp_UNK_0xd903); // UNK_0xd903
  _plus__ex__2(); // +!_2
  UNK_0xdd35(); // UNK_0xdd35
  UNK_0xdd15(); // UNK_0xdd15
  Push(0xd92d); // probable 'UNK_0xd92d'
  ON_2(); // ON_2
  Push(0x000a);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  Push(1);
  Push(pp_UNK_0xd91b); // UNK_0xd91b
  Store_2(); // !_2
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xe8c5: WORD 'UNK_0xe8c7' codep=0x224c parp=0xe8c7
// ================================================

void UNK_0xe8c7() // UNK_0xe8c7
{
  Push(6);
  UNK_0xe567(); // UNK_0xe567
  UNK_0xdd35(); // UNK_0xdd35
  UNK_0xdd15(); // UNK_0xdd15
  Push(1);
  Push(pp_UNK_0xd91b); // UNK_0xd91b
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe8d7: WORD 'UNK_0xe8d9' codep=0x224c parp=0xe8d9
// ================================================

void UNK_0xe8d9() // UNK_0xe8d9
{
  Push(0x000f);
  UNK_0xe567(); // UNK_0xe567
  UNK_0xe06b(); // UNK_0xe06b
}


// ================================================
// 0xe8e3: WORD 'UNK_0xe8e5' codep=0x224c parp=0xe8e5 params=0 returns=0
// ================================================

void UNK_0xe8e5() // UNK_0xe8e5
{
  Push(0xd9ff); // probable 'UNK_0xd9ff'
  ON_2(); // ON_2
  Push(pp_TERMINA); // TERMINA
  _099(); // 099
}


// ================================================
// 0xe8f1: WORD '(?RACE)' codep=0x1d29 parp=0xe8fd
// ================================================
// 0xe8fd: db 0x00 0x01 0x01 0x00 0x01 0x01 0x01 0x01 0x01 0x00 0x01 0x01 0x00 0x00 0x00 0x00 0x00 0x00 0x01 0x00 0x00 0x00 0x01 0x00 0x00 '                         '

// ================================================
// 0xe916: WORD 'UNK_0xe918' codep=0x224c parp=0xe918 params=0 returns=1
// ================================================

void UNK_0xe918() // UNK_0xe918
{
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd
  Push(Read16(Pop())); // @
  Push(pp__ro__ask_RACE_rc_); // (?RACE)
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
}


// ================================================
// 0xe924: WORD 'UNK_0xe926' codep=0x224c parp=0xe926 params=0 returns=1
// ================================================

void UNK_0xe926() // UNK_0xe926
{
  Push(1);
  UNK_0xda8e(); // UNK_0xda8e
}


// ================================================
// 0xe92c: WORD 'UNK_0xe92e' codep=0x224c parp=0xe92e params=0 returns=1
// ================================================

void UNK_0xe92e() // UNK_0xe92e
{
  Push(2);
  UNK_0xda8e(); // UNK_0xda8e
}


// ================================================
// 0xe934: WORD 'UNK_0xe936' codep=0x224c parp=0xe936 params=0 returns=1
// ================================================

void UNK_0xe936() // UNK_0xe936
{
  Push(4);
  UNK_0xda8e(); // UNK_0xda8e
}


// ================================================
// 0xe93c: WORD 'UNK_0xe93e' codep=0x224c parp=0xe93e params=0 returns=1
// ================================================

void UNK_0xe93e() // UNK_0xe93e
{
  Push(8);
  UNK_0xda8e(); // UNK_0xda8e
}


// ================================================
// 0xe944: WORD 'UNK_0xe946' codep=0x224c parp=0xe946 params=0 returns=1
// ================================================

void UNK_0xe946() // UNK_0xe946
{
  Push(0x0010);
  UNK_0xda8e(); // UNK_0xda8e
}


// ================================================
// 0xe94e: WORD 'UNK_0xe950' codep=0x224c parp=0xe950 params=0 returns=1
// ================================================

void UNK_0xe950() // UNK_0xe950
{
  Push(pp__pe_TALK); // %TALK
  Push(Read16(Pop())); // @
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xe958: WORD 'UNK_0xe95a' codep=0x224c parp=0xe95a params=0 returns=1
// ================================================

void UNK_0xe95a() // UNK_0xe95a
{
  Push(pp_UNK_0xd903); // UNK_0xd903
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xd91f); // UNK_0xd91f
  Push(Read16(Pop())); // @
  _st_(); // <
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xe968: WORD 'UNK_0xe96a' codep=0x224c parp=0xe96a params=0 returns=1
// ================================================

void UNK_0xe96a() // UNK_0xe96a
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+UNK_0xd848.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe976: WORD 'UNK_0xe978' codep=0x224c parp=0xe978
// ================================================

void UNK_0xe978() // UNK_0xe978
{
  Push(0);
  Push(0x02ee);
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
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
// 0xe998: WORD 'UNK_0xe99a' codep=0x224c parp=0xe99a
// ================================================

void UNK_0xe99a() // UNK_0xe99a
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe9ae: WORD 'UNK_0xe9b0' codep=0x224c parp=0xe9b0
// ================================================

void UNK_0xe9b0() // UNK_0xe9b0
{
  Push(0);
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
// 0xe9c6: WORD 'UNK_0xe9c8' codep=0x224c parp=0xe9c8
// ================================================

void UNK_0xe9c8() // UNK_0xe9c8
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(pp__pe_TALK); // %TALK
  Push(Read16(Pop())); // @
  _st_(); // <
  Push(0);
  Push(4);
  RRND(); // RRND
  UNK_0xda86(); // UNK_0xda86
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  IsCHILD(); // ?CHILD
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
  UNK_0xe926(); // UNK_0xe926
  Push(Pop() | Pop()); // OR
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(0x0032); Push(0x0000);
  UNK_0xd806(); // UNK_0xd806
  D_plus_(); // D+
  Push(pp_OK_dash_TALK); // OK-TALK
  _2_at_(); // 2@
  DMAX(); // DMAX
  Push(pp_OK_dash_TALK); // OK-TALK
  StoreD(); // D!
}


// ================================================
// 0xea12: WORD 'UNK_0xea14' codep=0x224c parp=0xea14 params=0 returns=1
// ================================================

void UNK_0xea14() // UNK_0xea14
{
  Push(pp_UNK_0xd91b); // UNK_0xd91b
  Push(Read16(Pop())); // @
  Push(3);
  _st_(); // <
}


// ================================================
// 0xea1e: WORD 'UNK_0xea20' codep=0x224c parp=0xea20 params=0 returns=1
// ================================================

void UNK_0xea20() // UNK_0xea20
{
  UNK_0xd7fe(); // UNK_0xd7fe
  Push(0x65e1+UNK_0xd8a2.offset); // IFIELD
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea2a: WORD 'UNK_0xea2c' codep=0x224c parp=0xea2c params=1 returns=0
// ================================================

void UNK_0xea2c() // UNK_0xea2c
{
  UNK_0xd7fe(); // UNK_0xd7fe
  Push(0x65e1+UNK_0xd8a2.offset); // IFIELD
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea36: WORD 'UNK_0xea38' codep=0x224c parp=0xea38 params=0 returns=1
// ================================================

void UNK_0xea38() // UNK_0xea38
{
  UNK_0xea20(); // UNK_0xea20
  Push(8);
  Push(Pop() & Pop()); // AND
  _0_gt_(); // 0>
}


// ================================================
// 0xea42: WORD 'UNK_0xea44' codep=0x224c parp=0xea44 params=0 returns=1
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
// 0xea5c: WORD 'UNK_0xea5e' codep=0x224c parp=0xea5e params=0 returns=1
// ================================================

void UNK_0xea5e() // UNK_0xea5e
{
  UNK_0xea20(); // UNK_0xea20
  Push(3);
  Push(Pop() & Pop()); // AND
  _0_gt_(); // 0>
}


// ================================================
// 0xea68: WORD 'UNK_0xea6a' codep=0x224c parp=0xea6a params=0 returns=1
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


// ================================================
// 0xea82: WORD 'UNK_0xea84' codep=0x224c parp=0xea84 params=0 returns=1
// ================================================

void UNK_0xea84() // UNK_0xea84
{
  Push(pp_UNK_0xda65); // UNK_0xda65
  Push(Read16(Pop())); // @
  Push(1);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xea8e: WORD 'UNK_0xea90' codep=0x224c parp=0xea90 params=0 returns=1
// ================================================

void UNK_0xea90() // UNK_0xea90
{
  Push(pp_UNK_0xda65); // UNK_0xda65
  Push(Read16(Pop())); // @
  Push(2);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xea9a: WORD 'UNK_0xea9c' codep=0x224c parp=0xea9c
// ================================================

void UNK_0xea9c() // UNK_0xea9c
{
  Push(pp_UNK_0xd927); // UNK_0xd927
  _2_at_(); // 2@
  UNK_0xd806(); // UNK_0xd806
  D_st_(); // D<
}


// ================================================
// 0xeaa6: WORD 'UNK_0xeaa8' codep=0x224c parp=0xeaa8
// ================================================

void UNK_0xeaa8() // UNK_0xeaa8
{
  Push(pp_OK_dash_TALK); // OK-TALK
  _2_at_(); // 2@
  UNK_0xd806(); // UNK_0xd806
  D_st_(); // D<
}


// ================================================
// 0xeab2: WORD 'UNK_0xeab4' codep=0x224c parp=0xeab4 params=0 returns=1
// ================================================

void UNK_0xeab4() // UNK_0xeab4
{
  Push(pp_UNK_0xd8f3); // UNK_0xd8f3
  Push(Read8(Pop())&0xFF); // C@
  Push(0x000d);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xeac0: WORD 'UNK_0xeac2' codep=0x224c parp=0xeac2 params=0 returns=1
// ================================================

void UNK_0xeac2() // UNK_0xeac2
{
  Push(pp_UNK_0xd8f7); // UNK_0xd8f7
  Push(Read16(Pop())); // @
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xeaca: WORD 'UNK_0xeacc' codep=0x224c parp=0xeacc params=0 returns=1
// ================================================

void UNK_0xeacc() // UNK_0xeacc
{
  Push(pp_P_dash_POSTU); // P-POSTU
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xd8ef); // UNK_0xd8ef
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xeada: WORD 'UNK_0xeadc' codep=0x224c parp=0xeadc params=0 returns=1
// ================================================

void UNK_0xeadc() // UNK_0xeadc
{
  UNK_0xe926(); // UNK_0xe926
  UNK_0xe96a(); // UNK_0xe96a
  UNK_0xda86(); // UNK_0xda86
}


// ================================================
// 0xeae4: WORD 'UNK_0xeae6' codep=0x224c parp=0xeae6 params=0 returns=1
// ================================================

void UNK_0xeae6() // UNK_0xeae6
{
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  Push(3);
  _st_(); // <
}


// ================================================
// 0xeaf0: WORD 'UNK_0xeaf2' codep=0x224c parp=0xeaf2 params=0 returns=1
// ================================================

void UNK_0xeaf2() // UNK_0xeaf2
{
  Push(pp_UNK_0xd8fb); // UNK_0xd8fb
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(pp_UNK_0xd903); // UNK_0xd903
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(Pop() | Pop()); // OR
  Push(pp_TERMINA); // TERMINA
  Push(Read16(Pop())); // @
  UNK_0xda86(); // UNK_0xda86
  Push(pp_UNK_0xe563); // UNK_0xe563
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xeb0e: WORD 'UNK_0xeb10' codep=0x224c parp=0xeb10 params=0 returns=1
// ================================================

void UNK_0xeb10() // UNK_0xeb10
{
  Push(pp_TERMINA); // TERMINA
  Push(Read16(Pop())); // @
  UNK_0xe946(); // UNK_0xe946
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xeb1a: WORD 'UNK_0xeb1c' codep=0x224c parp=0xeb1c params=0 returns=1
// ================================================

void UNK_0xeb1c() // UNK_0xeb1c
{
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd
  Push(Read16(Pop())); // @
  Push(0x000a);
  Push((Pop()==Pop())?1:0); // =
  Push(pp_IsUF); // ?UF
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xeb2e: WORD 'UNK_0xeb30' codep=0x224c parp=0xeb30
// ================================================

void UNK_0xeb30() // UNK_0xeb30
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd
  Push(Read16(Pop())); // @
  Push(0x0016);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(0x0064);
  } else
  {
    Push(0x001e);
  }
  _st_(); // <
  Push(0x000d);
  Push(Pop() + Pop()); // +
  UNK_0xdb3e(); // UNK_0xdb3e
  A_gt_ORIGINATO(); // A>ORIGINATO
  UNK_0xde07(); // UNK_0xde07
  Push(pp_UNK_0xd917); // UNK_0xd917
  Push(Read16(Pop())); // @
  Push(0x000e);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xeb6e: WORD 'UNK_0xeb70' codep=0x224c parp=0xeb70 params=0 returns=1
// ================================================

void UNK_0xeb70() // UNK_0xeb70
{
  UNK_0xeaf2(); // UNK_0xeaf2
  UNK_0xe96a(); // UNK_0xe96a
  Push(Pop() & Pop()); // AND
  UNK_0xe926(); // UNK_0xe926
  Push(Pop() & Pop()); // AND
  Push(Read16(cc_UNK_0xd9ff)); // UNK_0xd9ff
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xeb80: WORD '<EDL>' codep=0xaccc parp=0xeb8a
// ================================================

void _st_EDL_gt_() // <EDL> rule
{
  int b;

  b = 1;
  UNK_0xea38(); // UNK_0xea38
  b = b && Pop();
  UNK_0xeb1c(); // UNK_0xeb1c
  b = b && !Pop();
  UNK_0xea44(); // UNK_0xea44
  b = b && Pop();
  if (b)
  {
    UNK_0xe60c(); // UNK_0xe60c
  }

  b = 1;
  UNK_0xea38(); // UNK_0xea38
  b = b && Pop();
  UNK_0xeb1c(); // UNK_0xeb1c
  b = b && Pop();
  UNK_0xea44(); // UNK_0xea44
  b = b && Pop();
  if (b)
  {
    UNK_0xe614(); // UNK_0xe614
  }

  b = 1;
  UNK_0xea38(); // UNK_0xea38
  b = b && !Pop();
  UNK_0xeb1c(); // UNK_0xeb1c
  b = b && !Pop();
  UNK_0xea44(); // UNK_0xea44
  b = b && Pop();
  if (b)
  {
    UNK_0xe614(); // UNK_0xe614
  }

  b = 1;
  UNK_0xea38(); // UNK_0xea38
  b = b && !Pop();
  UNK_0xeb1c(); // UNK_0xeb1c
  b = b && Pop();
  UNK_0xea44(); // UNK_0xea44
  b = b && Pop();
  if (b)
  {
    UNK_0xe60c(); // UNK_0xe60c
  }

  b = 1;
  UNK_0xea5e(); // UNK_0xea5e
  b = b && Pop();
  UNK_0xeb1c(); // UNK_0xeb1c
  b = b && !Pop();
  UNK_0xea6a(); // UNK_0xea6a
  b = b && Pop();
  if (b)
  {
    UNK_0xe61e(); // UNK_0xe61e
  }

  b = 1;
  UNK_0xea5e(); // UNK_0xea5e
  b = b && Pop();
  UNK_0xeb1c(); // UNK_0xeb1c
  b = b && Pop();
  UNK_0xea6a(); // UNK_0xea6a
  b = b && Pop();
  if (b)
  {
    UNK_0xe628(); // UNK_0xe628
  }

  b = 1;
  UNK_0xea5e(); // UNK_0xea5e
  b = b && !Pop();
  UNK_0xeb1c(); // UNK_0xeb1c
  b = b && !Pop();
  UNK_0xea6a(); // UNK_0xea6a
  b = b && Pop();
  if (b)
  {
    UNK_0xe628(); // UNK_0xe628
  }

  b = 1;
  UNK_0xea5e(); // UNK_0xea5e
  b = b && !Pop();
  UNK_0xeb1c(); // UNK_0xeb1c
  b = b && Pop();
  UNK_0xea6a(); // UNK_0xea6a
  b = b && Pop();
  if (b)
  {
    UNK_0xe61e(); // UNK_0xe61e
  }

  b = 1;
  UNK_0xea84(); // UNK_0xea84
  b = b && Pop();
  UNK_0xeacc(); // UNK_0xeacc
  b = b && Pop();
  if (b)
  {
    UNK_0xe688(); // UNK_0xe688
  }

  b = 1;
  UNK_0xeab4(); // UNK_0xeab4
  b = b && Pop();
  if (b)
  {
    UNK_0xe6ae(); // UNK_0xe6ae
  }

  b = 1;
  UNK_0xeac2(); // UNK_0xeac2
  b = b && Pop();
  Push(Read16(cc_UNK_0xda5d)); // UNK_0xda5d
  b = b && Pop();
  if (b)
  {
    UNK_0xe6bc(); // UNK_0xe6bc
  }

  b = 1;
  Push(Read16(cc_UNK_0xd8e7)); // UNK_0xd8e7
  b = b && Pop();
  if (b)
  {
    UNK_0xe6a0(); // UNK_0xe6a0
  }

  b = 1;
  Push(Read16(cc_IsFIRED_dash_)); // ?FIRED-
  b = b && Pop();
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && !Pop();
  if (b)
  {
    UNK_0xe64c(); // UNK_0xe64c
  }
}

// 0xebc1: db 0x5c 0x5d '\]'
// 0xebd0: db 0x17 ' '

// ================================================
// 0xec18: WORD '<TALK>' codep=0xaccc parp=0xec23
// ================================================

void _st_TALK_gt_() // <TALK> rule
{
  int b;

  b = 1;
  UNK_0xe66c(); // UNK_0xe66c
  b = b && Pop();
  if (b)
  {
    UNK_0xe748(); // UNK_0xe748
  }

  b = 1;
  UNK_0xe67a(); // UNK_0xe67a
  b = b && Pop();
  if (b)
  {
    UNK_0xe752(); // UNK_0xe752
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && !Pop();
  UNK_0xeb10(); // UNK_0xeb10
  b = b && !Pop();
  UNK_0xe92e(); // UNK_0xe92e
  b = b && Pop();
  UNK_0xea84(); // UNK_0xea84
  b = b && !Pop();
  if (b)
  {
    UNK_0xe6fa(); // UNK_0xe6fa
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && !Pop();
  UNK_0xeb10(); // UNK_0xeb10
  b = b && !Pop();
  UNK_0xe92e(); // UNK_0xe92e
  b = b && Pop();
  UNK_0xea84(); // UNK_0xea84
  b = b && Pop();
  if (b)
  {
    UNK_0xe704(); // UNK_0xe704
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && !Pop();
  UNK_0xeb10(); // UNK_0xeb10
  b = b && !Pop();
  UNK_0xe936(); // UNK_0xe936
  b = b && Pop();
  UNK_0xea84(); // UNK_0xea84
  b = b && !Pop();
  if (b)
  {
    UNK_0xe718(); // UNK_0xe718
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && !Pop();
  UNK_0xeb10(); // UNK_0xeb10
  b = b && !Pop();
  UNK_0xe936(); // UNK_0xe936
  b = b && Pop();
  UNK_0xea84(); // UNK_0xea84
  b = b && Pop();
  if (b)
  {
    UNK_0xe6fa(); // UNK_0xe6fa
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && !Pop();
  UNK_0xeb10(); // UNK_0xeb10
  b = b && !Pop();
  UNK_0xe93e(); // UNK_0xe93e
  b = b && Pop();
  UNK_0xea84(); // UNK_0xea84
  b = b && !Pop();
  if (b)
  {
    UNK_0xe722(); // UNK_0xe722
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && !Pop();
  UNK_0xeb10(); // UNK_0xeb10
  b = b && !Pop();
  UNK_0xe93e(); // UNK_0xe93e
  b = b && Pop();
  UNK_0xea84(); // UNK_0xea84
  b = b && Pop();
  if (b)
  {
    UNK_0xe718(); // UNK_0xe718
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && !Pop();
  UNK_0xeb10(); // UNK_0xeb10
  b = b && !Pop();
  UNK_0xe946(); // UNK_0xe946
  b = b && Pop();
  if (b)
  {
    UNK_0xe740(); // UNK_0xe740
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && !Pop();
  UNK_0xeb10(); // UNK_0xeb10
  b = b && !Pop();
  UNK_0xe926(); // UNK_0xe926
  b = b && Pop();
  UNK_0xea84(); // UNK_0xea84
  b = b && !Pop();
  if (b)
  {
    UNK_0xe704(); // UNK_0xe704
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && !Pop();
  UNK_0xeb10(); // UNK_0xeb10
  b = b && !Pop();
  UNK_0xe926(); // UNK_0xe926
  b = b && Pop();
  UNK_0xea84(); // UNK_0xea84
  b = b && Pop();
  if (b)
  {
    UNK_0xe70e(); // UNK_0xe70e
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && Pop();
  UNK_0xe96a(); // UNK_0xe96a
  b = b && Pop();
  UNK_0xe95a(); // UNK_0xe95a
  b = b && !Pop();
  if (b)
  {
    UNK_0xe72c(); // UNK_0xe72c
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && Pop();
  UNK_0xe926(); // UNK_0xe926
  b = b && !Pop();
  UNK_0xe95a(); // UNK_0xe95a
  b = b && !Pop();
  if (b)
  {
    UNK_0xe72c(); // UNK_0xe72c
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && Pop();
  UNK_0xe95a(); // UNK_0xe95a
  b = b && Pop();
  if (b)
  {
    UNK_0xe740(); // UNK_0xe740
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && !Pop();
  UNK_0xeb10(); // UNK_0xeb10
  b = b && Pop();
  UNK_0xe926(); // UNK_0xe926
  b = b && !Pop();
  if (b)
  {
    UNK_0xe740(); // UNK_0xe740
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && !Pop();
  UNK_0xeb10(); // UNK_0xeb10
  b = b && Pop();
  UNK_0xe96a(); // UNK_0xe96a
  b = b && !Pop();
  if (b)
  {
    UNK_0xe740(); // UNK_0xe740
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && !Pop();
  UNK_0xeb10(); // UNK_0xeb10
  b = b && Pop();
  UNK_0xe926(); // UNK_0xe926
  b = b && Pop();
  UNK_0xe96a(); // UNK_0xe96a
  b = b && Pop();
  Push(Read16(cc_UNK_0xd9ff)); // UNK_0xd9ff
  b = b && !Pop();
  if (b)
  {
    UNK_0xe736(); // UNK_0xe736
  }
}

// 0xec48: db 0x52 0x20 'R '
// 0xec64: db 0x6c 0x1f 'l '
// 0xec73: db 0x90 ' '

// ================================================
// 0xecdf: WORD '<AUX>' codep=0xaccc parp=0xece9
// ================================================

void _st_AUX_gt_() // <AUX> rule
{
  int b;

  b = 1;
  Push(Read16(cc_UNK_0xd90f)); // UNK_0xd90f
  b = b && Pop();
  Push(Read16(cc_IsA_dash_SHIE)); // ?A-SHIE
  b = b && !Pop();
  UNK_0xe92e(); // UNK_0xe92e
  b = b && !Pop();
  UNK_0xeb70(); // UNK_0xeb70
  b = b && !Pop();
  UNK_0xeb1c(); // UNK_0xeb1c
  b = b && !Pop();
  if (b)
  {
    UNK_0xe77f(); // UNK_0xe77f
  }

  b = 1;
  Push(Read16(cc_IsA_dash_SHIE)); // ?A-SHIE
  b = b && Pop();
  UNK_0xe92e(); // UNK_0xe92e
  b = b && Pop();
  UNK_0xeb1c(); // UNK_0xeb1c
  b = b && !Pop();
  if (b)
  {
    UNK_0xe797(); // UNK_0xe797
  }

  b = 1;
  Push(Read16(cc_IsA_dash_SHIE)); // ?A-SHIE
  b = b && Pop();
  UNK_0xeb70(); // UNK_0xeb70
  b = b && Pop();
  UNK_0xeb1c(); // UNK_0xeb1c
  b = b && !Pop();
  if (b)
  {
    UNK_0xe797(); // UNK_0xe797
  }

  b = 1;
  Push(Read16(cc_UNK_0xd913)); // UNK_0xd913
  b = b && Pop();
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  b = b && !Pop();
  UNK_0xe92e(); // UNK_0xe92e
  b = b && !Pop();
  UNK_0xe936(); // UNK_0xe936
  b = b && !Pop();
  UNK_0xe926(); // UNK_0xe926
  b = b && !Pop();
  UNK_0xeb70(); // UNK_0xeb70
  b = b && !Pop();
  UNK_0xeb1c(); // UNK_0xeb1c
  b = b && !Pop();
  UNK_0xe5ea(); // UNK_0xe5ea
  b = b && !Pop();
  if (b)
  {
    UNK_0xe7af(); // UNK_0xe7af
  }

  b = 1;
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  b = b && Pop();
  UNK_0xe93e(); // UNK_0xe93e
  b = b && !Pop();
  UNK_0xeb1c(); // UNK_0xeb1c
  b = b && !Pop();
  UNK_0xe946(); // UNK_0xe946
  b = b && !Pop();
  UNK_0xe926(); // UNK_0xe926
  b = b && !Pop();
  if (b)
  {
    UNK_0xe7c7(); // UNK_0xe7c7
  }

  b = 1;
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  b = b && Pop();
  UNK_0xeb70(); // UNK_0xeb70
  b = b && Pop();
  if (b)
  {
    UNK_0xe7c7(); // UNK_0xe7c7
  }

  b = 1;
  UNK_0xe978(); // UNK_0xe978
  b = b && Pop();
  Push(Read16(cc_IsCALLED)); // ?CALLED
  b = b && !Pop();
  UNK_0xe5dc(); // UNK_0xe5dc
  b = b && Pop();
  UNK_0xeae6(); // UNK_0xeae6
  b = b && Pop();
  UNK_0xe92e(); // UNK_0xe92e
  b = b && !Pop();
  UNK_0xe936(); // UNK_0xe936
  b = b && !Pop();
  UNK_0xeb70(); // UNK_0xeb70
  b = b && !Pop();
  if (b)
  {
    UNK_0xe7df(); // UNK_0xe7df
  }

  b = 1;
  Push(Read16(cc_IsCALLED)); // ?CALLED
  b = b && Pop();
  UNK_0xe9b0(); // UNK_0xe9b0
  b = b && Pop();
  if (b)
  {
    UNK_0xe7f5(); // UNK_0xe7f5
  }

  b = 1;
  UNK_0xeaa8(); // UNK_0xeaa8
  b = b && Pop();
  UNK_0xe918(); // UNK_0xe918
  b = b && Pop();
  UNK_0xe99a(); // UNK_0xe99a
  b = b && Pop();
  Push(Read16(cc_UNK_0xda03)); // UNK_0xda03
  b = b && !Pop();
  if (b)
  {
    UNK_0xe811(); // UNK_0xe811
  }

  b = 1;
  Push(Read16(cc_UNK_0xd9ff)); // UNK_0xd9ff
  b = b && !Pop();
  UNK_0xeb70(); // UNK_0xeb70
  b = b && Pop();
  if (b)
  {
    UNK_0xe8e5(); // UNK_0xe8e5
  }
}

// 0xed2c: db 0x0b 0x5c ' \'
// 0xed44: db 0x15 ' '

// ================================================
// 0xed8c: WORD '<COMM>' codep=0xaccc parp=0xed97
// ================================================

void _st_COMM_gt_() // <COMM> rule
{
  int b;

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && !Pop();
  UNK_0xea84(); // UNK_0xea84
  b = b && !Pop();
  UNK_0xeaa8(); // UNK_0xeaa8
  b = b && Pop();
  UNK_0xe9c8(); // UNK_0xe9c8
  b = b && Pop();
  UNK_0xea90(); // UNK_0xea90
  b = b && !Pop();
  Push(Read16(cc_UNK_0xd9ff)); // UNK_0xd9ff
  b = b && !Pop();
  UNK_0xeadc(); // UNK_0xeadc
  b = b && !Pop();
  if (b)
  {
    UNK_0xe827(); // UNK_0xe827
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && !Pop();
  UNK_0xea90(); // UNK_0xea90
  b = b && Pop();
  UNK_0xeaa8(); // UNK_0xeaa8
  b = b && Pop();
  UNK_0xe9c8(); // UNK_0xe9c8
  b = b && Pop();
  UNK_0xea9c(); // UNK_0xea9c
  b = b && Pop();
  UNK_0xea14(); // UNK_0xea14
  b = b && Pop();
  Push(Read16(cc_UNK_0xd9ff)); // UNK_0xd9ff
  b = b && !Pop();
  UNK_0xeadc(); // UNK_0xeadc
  b = b && !Pop();
  if (b)
  {
    UNK_0xe827(); // UNK_0xe827
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && !Pop();
  UNK_0xea84(); // UNK_0xea84
  b = b && Pop();
  UNK_0xeaa8(); // UNK_0xeaa8
  b = b && Pop();
  UNK_0xe9c8(); // UNK_0xe9c8
  b = b && Pop();
  Push(Read16(cc_UNK_0xd9ff)); // UNK_0xd9ff
  b = b && !Pop();
  UNK_0xeadc(); // UNK_0xeadc
  b = b && !Pop();
  if (b)
  {
    UNK_0xe857(); // UNK_0xe857
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && Pop();
  UNK_0xeaa8(); // UNK_0xeaa8
  b = b && Pop();
  UNK_0xeac2(); // UNK_0xeac2
  b = b && !Pop();
  UNK_0xe9c8(); // UNK_0xe9c8
  b = b && Pop();
  UNK_0xeb30(); // UNK_0xeb30
  b = b && Pop();
  Push(Read16(cc_UNK_0xd92d)); // UNK_0xd92d
  b = b && !Pop();
  UNK_0xe95a(); // UNK_0xe95a
  b = b && !Pop();
  if (b)
  {
    UNK_0xe881(); // UNK_0xe881
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && Pop();
  UNK_0xeaa8(); // UNK_0xeaa8
  b = b && Pop();
  UNK_0xeac2(); // UNK_0xeac2
  b = b && !Pop();
  UNK_0xe9c8(); // UNK_0xe9c8
  b = b && Pop();
  UNK_0xeb30(); // UNK_0xeb30
  b = b && !Pop();
  Push(Read16(cc_UNK_0xd92d)); // UNK_0xd92d
  b = b && !Pop();
  UNK_0xe95a(); // UNK_0xe95a
  b = b && !Pop();
  if (b)
  {
    UNK_0xe893(); // UNK_0xe893
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && Pop();
  Push(Read16(cc_UNK_0xd92d)); // UNK_0xd92d
  b = b && Pop();
  UNK_0xeaa8(); // UNK_0xeaa8
  b = b && Pop();
  UNK_0xea9c(); // UNK_0xea9c
  b = b && Pop();
  UNK_0xea14(); // UNK_0xea14
  b = b && Pop();
  if (b)
  {
    UNK_0xe8c7(); // UNK_0xe8c7
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && Pop();
  UNK_0xeac2(); // UNK_0xeac2
  b = b && Pop();
  UNK_0xeaa8(); // UNK_0xeaa8
  b = b && Pop();
  UNK_0xe95a(); // UNK_0xe95a
  b = b && !Pop();
  if (b)
  {
    UNK_0xe86b(); // UNK_0xe86b
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && Pop();
  UNK_0xe95a(); // UNK_0xe95a
  b = b && Pop();
  UNK_0xeaa8(); // UNK_0xeaa8
  b = b && Pop();
  Push(Read16(cc_UNK_0xd92d)); // UNK_0xd92d
  b = b && !Pop();
  if (b)
  {
    UNK_0xe8d9(); // UNK_0xe8d9
  }

  b = 1;
  UNK_0xeaf2(); // UNK_0xeaf2
  b = b && Pop();
  UNK_0xe950(); // UNK_0xe950
  b = b && !Pop();
  UNK_0xe95a(); // UNK_0xe95a
  b = b && !Pop();
  if (b)
  {
    UNK_0xe06b(); // UNK_0xe06b
  }
}

// 0xedac: db 0x4f 0x4d 'OM'
// 0xedca: db 0x29 0xdf ') '
// 0xedda: db 0x7a 'z'

// ================================================
// 0xee29: WORD 'UNK_0xee2b' codep=0x224c parp=0xee2b
// ================================================

void UNK_0xee2b() // UNK_0xee2b
{
  SetColor(BLUE);
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  DrawON(); // .ON
  UNK_0xe005(); // UNK_0xe005
  UNK_0xdb00(); // UNK_0xdb00
  UNK_0xde07(); // UNK_0xde07
  UNK_0xe47b(); // UNK_0xe47b
  Push(pp_UNK_0xd8f3); // UNK_0xd8f3
  Push(Read16(Pop())); // @
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_UNK_0xd8fb); // UNK_0xd8fb
  _plus__ex__2(); // +!_2
  UNK_0xdd15(); // UNK_0xdd15
  SetColor(BLACK);
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  DrawON(); // .ON
}


// ================================================
// 0xee55: WORD 'UNK_0xee57' codep=0x224c parp=0xee57 params=0 returns=0
// ================================================

void UNK_0xee57() // UNK_0xee57
{
  Push(pp__ro_STOP_dash_C); // (STOP-C
  ON_2(); // ON_2
}


// ================================================
// 0xee5d: WORD 'UNK_0xee5f' codep=0x224c parp=0xee5f params=0 returns=1
// ================================================

void UNK_0xee5f() // UNK_0xee5f
{
  IsTRIG(); // ?TRIG
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(pp_LKEY); // LKEY
  Push(Read16(Pop())); // @
  Push(0x002b);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    if (Pop() == 0) Push(1); else Push(0); // NOT
    Push(0xd4c0); Push(0x0001);
    UNK_0xe081(); // UNK_0xe081
    return;
  }
  SetColor(BLUE);
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  DrawON(); // .ON
}


// ================================================
// 0xee8d: WORD 'UNK_0xee8f' codep=0x224c parp=0xee8f params=0 returns=0
// ================================================

void UNK_0xee8f() // UNK_0xee8f
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  Push(4);
  Push((Pop()==Pop())?1:0); // =
  Push(0x65e1+UNK_0xd843.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0x0032);
    Push(0x65e1+UNK_0xd843.offset); // IFIELD
    C_ex__2(); // C!_2
  }
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
  Push(8);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  UNK_0xdb81(); // UNK_0xdb81
  Push(pp_UNK_0xeeb3); // UNK_0xeeb3
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_P_dash_POSTU); // P-POSTU
  Store_2(); // !_2
  Push(5);
  UNK_0xeaf2(); // UNK_0xeaf2
  Push(4);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
}


// ================================================
// 0xeede: WORD '(>?)' codep=0x4b3b parp=0xeee7
// ================================================

void _ro__gt__ask__rc_() // (>?)
{
  switch(Pop()) // (>?)
  {
  case 0:
    Push(Read16(cc_UNK_0xda6d)); // UNK_0xda6d
    break;
  case 1:
    Push(Read16(cc_UNK_0xda71)); // UNK_0xda71
    break;
  case 2:
    Push(Read16(cc_UNK_0xda7d)); // UNK_0xda7d
    break;
  case 3:
    Push(Read16(cc_UNK_0xda79)); // UNK_0xda79
    break;
  default:
    Push(Read16(cc_UNK_0xda75)); // UNK_0xda75
    break;

  }
}

// ================================================
// 0xeefb: WORD 'UNK_0xeefd' codep=0x224c parp=0xeefd
// ================================================

void UNK_0xeefd() // UNK_0xeefd
{
  Push(0x000b);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  UNK_0xdb81(); // UNK_0xdb81
  Push(0xda5d); // probable 'UNK_0xda5d'
  ON_2(); // ON_2
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  _ro__gt__ask__rc_(); // (>?) case
  Push(pp_UNK_0xd8f7); // UNK_0xd8f7
  Store_2(); // !_2
  Push(0x000e);
  Push(pp_UNK_0xd8f3); // UNK_0xd8f3
  Store_2(); // !_2
  UNK_0xee2b(); // UNK_0xee2b
  Push(9);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
}


// ================================================
// 0xef29: WORD 'UNK_0xef2b' codep=0x224c parp=0xef2b
// ================================================

void UNK_0xef2b() // UNK_0xef2b
{
  Push(0x000d);
  Push(pp_UNK_0xd8f3); // UNK_0xd8f3
  Store_2(); // !_2
  UNK_0xee2b(); // UNK_0xee2b
}


// ================================================
// 0xef37: WORD '>CM' codep=0x4b3b parp=0xef3f
// ================================================

void _gt_CM() // >CM
{
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
}

// ================================================
// 0xef4f: WORD 'UNK_0xef51' codep=0x224c parp=0xef51
// ================================================

void UNK_0xef51() // UNK_0xef51
{
  UNK_0xe65c(); // UNK_0xe65c
  UNK_0xe005(); // UNK_0xe005
  SET_STR_AS_PARAM("YES.");
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
  SET_STR_AS_PARAM("NO.");
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  CLICK(); // CLICK
}


// ================================================
// 0xef74: WORD 'UNK_0xef76' codep=0x224c parp=0xef76
// ================================================

void UNK_0xef76() // UNK_0xef76
{
  Push(pp_A_dash_POSTU); // A-POSTU
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

void _gt_Y_slash_N() // >Y/N
{
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
}

// ================================================
// 0xefa1: WORD 'UNK_0xefa3' codep=0x224c parp=0xefa3
// ================================================

void UNK_0xefa3() // UNK_0xefa3
{
  CTERASE(); // CTERASE
  UNK_0xeeb8(); // UNK_0xeeb8
  Push(1);
  Push(pp_UNK_0xd8f3); // UNK_0xd8f3
  Store_2(); // !_2
  UNK_0xee2b(); // UNK_0xee2b
  Push(1);
  Push(pp_UNK_0xda65); // UNK_0xda65
  Store_2(); // !_2
  Push(5);
  DrawBTN_dash_TE(); // .BTN-TE
  UNK_0xee8f(); // UNK_0xee8f
}


// ================================================
// 0xefbd: WORD 'UNK_0xefbf' codep=0x224c parp=0xefbf
// ================================================

void UNK_0xefbf() // UNK_0xefbf
{
  UNK_0xeeb8(); // UNK_0xeeb8
  Push(2);
  Push(pp_UNK_0xd8f3); // UNK_0xd8f3
  Store_2(); // !_2
  UNK_0xee2b(); // UNK_0xee2b
  Push(0xd8e7); // probable 'UNK_0xd8e7'
  ON_2(); // ON_2
  Push(pp_UNK_0xd91b); // UNK_0xd91b
  _099(); // 099
}


// ================================================
// 0xefd5: WORD 'EDL+AUX' codep=0x224c parp=0xefe1 params=0 returns=0
// ================================================
// entry

void EDL_plus_AUX() // EDL+AUX
{
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  Push(Read16(cc_IsCALLED)); // ?CALLED
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(0xece9); // probable '<AUX>'
  DISTRAC(); // DISTRAC
  _st_AUX_gt_(); // <AUX> rule
  Pop(); // DROP
  Push(0xeb8a); // probable '<EDL>'
  DISTRAC(); // DISTRAC
  _st_EDL_gt_(); // <EDL> rule
  Pop(); // DROP
}


// ================================================
// 0xf003: WORD 'COMM-EXPERT' codep=0x224c parp=0xf013 params=0 returns=0
// ================================================
// entry

void COMM_dash_EXPERT() // COMM-EXPERT
{
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  Push(Read16(cc_IsCALLED)); // ?CALLED
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(pp_SMART); // SMART
    ON_2(); // ON_2
    EDL_plus_AUX(); // EDL+AUX
    Push(0xec23); // probable '<TALK>'
    DISTRAC(); // DISTRAC
    _st_TALK_gt_(); // <TALK> rule
    Pop(); // DROP
    Push(0xed97); // probable '<COMM>'
    DISTRAC(); // DISTRAC
    _st_COMM_gt_(); // <COMM> rule
    Pop(); // DROP
    Push(0);
    Push(0xb822); // probable 'PSYCH'
    MODULE(); // MODULE
  }
  Push(0xd935); // probable 'UNK_0xd935'
  _099(); // 099
}


// ================================================
// 0xf049: WORD 'UNK_0xf04b' codep=0x224c parp=0xf04b params=0 returns=1
// ================================================

void UNK_0xf04b() // UNK_0xf04b
{
  Push(pp__i_CC); // 'CC
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+UNK_0xd852.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(0xb9c8); // probable '@.HYBR'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf063: WORD 'UNK_0xf065' codep=0x224c parp=0xf065 params=0 returns=0
// ================================================

void UNK_0xf065() // UNK_0xf065
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  Push(7);
  Push((Pop()==Pop())?1:0); // =
  ICLOSE(); // ICLOSE
  Push(Read16(cc_UNK_0xd92d)); // UNK_0xd92d
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0);
  Push(0x000a);
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(pp__i_XCOMM); // 'XCOMM
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}


// ================================================
// 0xf091: WORD 'UNK_0xf093' codep=0x224c parp=0xf093 params=0 returns=0
// ================================================

void UNK_0xf093() // UNK_0xf093
{
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd
  Push(Read16(Pop())); // @
  Push(4);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) return;
  Push(0);
  Push(Read16(regsp)); // DUP
  Push(pp_EDL); // EDL
  Store_2(); // !_2
  Push(0x65e1+UNK_0xd84d.offset); // IFIELD
  Store_2(); // !_2
}


// ================================================
// 0xf0ad: WORD 'UNK_0xf0af' codep=0x224c parp=0xf0af params=0 returns=0
// ================================================

void UNK_0xf0af() // UNK_0xf0af
{
  Push(0x000a);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) return;
  Push(pp_Is10); // ?10
  Push(Read16(Pop())); // @
  Push(0x0014);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0);
  } else
  {
    Push(0x0064);
  }
  Push(Read16(regsp)); // DUP
  Push(0x65e1+UNK_0xd84d.offset); // IFIELD
  C_ex__2(); // C!_2
  Push(pp_EDL); // EDL
  Store_2(); // !_2
}


// ================================================
// 0xf0dd: WORD 'UNK_0xf0df' codep=0x224c parp=0xf0df
// ================================================

void UNK_0xf0df() // UNK_0xf0df
{
  UNK_0xf04b(); // UNK_0xf04b
  Push(9);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  Push(pp__i_XCOMM); // 'XCOMM
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  Push(pp__ro_STOP_dash_C); // (STOP-C
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    do
    {
      UNK_0xf065(); // UNK_0xf065
      COMM_dash_EXPERT(); // COMM-EXPERT
      UNK_0xdb71(); // UNK_0xdb71
      UNK_0xee5f(); // UNK_0xee5f
      Push(Read16(cc_UNK_0xd92d)); // UNK_0xd92d
      UNK_0xea9c(); // UNK_0xea9c
      Push(Pop() & Pop()); // AND
      UNK_0xea14(); // UNK_0xea14
      UNK_0xda86(); // UNK_0xda86
      Push(Pop() | Pop()); // OR
      if (Pop() != 0)
      {
        Push(pp_THIS_dash_BU); // THIS-BU
        Push(Read16(Pop())); // @
        Push(Read16(cc_UNK_0xd92d)); // UNK_0xd92d
        if (Pop() != 0)
        {
          Push(0xd92d); // probable 'UNK_0xd92d'
          _099(); // 099
          UNK_0xea14(); // UNK_0xea14
          if (Pop() == 0) Push(1); else Push(0); // NOT
          Push(3);
          Push(Pop() * Pop()); // *
          Push(Pop() + Pop()); // +
          UNK_0xdb95(); // UNK_0xdb95
          _gt_Y_slash_N(); // >Y/N case
          Push(pp_UNK_0xd91b); // UNK_0xd91b
          _099(); // 099
          Push(9);
          DrawBTN_dash_TE(); // .BTN-TE
          INIT_dash_BU(); // INIT-BU
        } else
        {
          _gt_CM(); // >CM case
        }
      }
      UNK_0xeb10(); // UNK_0xeb10
    } while(Pop() == 0);
    Push(pp_P_dash_POSTU); // P-POSTU
    Push(Read16(Pop())); // @
    Push(0x62b1); // probable ':('
    Push(Read16(Pop())); // @
    MODULE(); // MODULE
  }
  Push(pp_UNK_0xd903); // UNK_0xd903
  _099(); // 099
  Push(pp_UNK_0xd8fb); // UNK_0xd8fb
  _099(); // 099
  Push(pp_UNK_0xda65); // UNK_0xda65
  _099(); // 099
  _gt_HAIL_do_(); // >HAIL$
  Push(pp_PIC_n_); // PIC#
  _099(); // 099
}


// ================================================
// 0xf163: WORD 'UNK_0xf165' codep=0x224c parp=0xf165
// ================================================

void UNK_0xf165() // UNK_0xf165
{
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  Push(4);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(2);
    Push(0xb77c); // probable 'OV?.EQ'
    MODULE(); // MODULE
    if (Pop() != 0)
    {
      Push(pp_UNK_0xda65); // UNK_0xda65
      Push(Read16(Pop())); // @
      Push(2);
      Push((Pop()==Pop())?1:0); // =
      if (Pop() == 0) Push(1); else Push(0); // NOT
      if (Pop() != 0)
      {
        UNK_0xefa3(); // UNK_0xefa3
      } else
      {
        UNK_0xefbf(); // UNK_0xefbf
      }
    } else
    {
      Push(pp__ro_STOP_dash_C); // (STOP-C
      ON_2(); // ON_2
    }
    return;
  }
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  Push(0x5b12); Push(0x0002);
  UNK_0xd80e(); // UNK_0xd80e
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  SetColor(BLACK);
  Push(0);
  DrawON(); // .ON
}


// ================================================
// 0xf1b5: WORD 'UNK_0xf1b7' codep=0x224c parp=0xf1b7 params=0 returns=0
// ================================================

void UNK_0xf1b7() // UNK_0xf1b7
{
  Push(0xb7d6); // probable 'TOW'
  MODULE(); // MODULE
}


// ================================================
// 0xf1bf: WORD '(CBTN)' codep=0x4b3b parp=0xf1ca
// ================================================

void _ro_CBTN_rc_() // (CBTN)
{
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
}

// ================================================
// 0xf1da: WORD 'UNK_0xf1dc' codep=0x224c parp=0xf1dc params=0 returns=0
// ================================================

void UNK_0xf1dc() // UNK_0xf1dc
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  _1_dot_5_at_(); // 1.5@
  Push2Words("*ARREST");
  D_eq_(); // D=
  Push(pp_IsSECURE); // ?SECURE
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
  Push(0x65e1+INST_dash_X.offset); // IFIELD
  StoreD(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf20a: WORD 'CL1' codep=0x224c parp=0xf212
// ================================================
// entry

void CL1() // CL1
{
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    Push(pp_UNK_0xd903); // UNK_0xd903
    _099(); // 099
    Push(pp_UNK_0xda65); // UNK_0xda65
    _099(); // 099
    _gt_HAIL_do_(); // >HAIL$
  }
  Push(5);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  Push(pp__ro_STOP_dash_C); // (STOP-C
  _099(); // 099
  Push(pp_UNK_0xe563); // UNK_0xe563
  ON_2(); // ON_2
  do
  {
    Push(pp__ro_AORIGI); // (AORIGI
    _1_dot_5_at_(); // 1.5@
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      PARALLE(); // PARALLE
    }
    UNK_0xdb71(); // UNK_0xdb71
    UNK_0xee5f(); // UNK_0xee5f
    if (Pop() != 0)
    {
      Push(pp_THIS_dash_BU); // THIS-BU
      Push(Read16(Pop())); // @
      _ro_CBTN_rc_(); // (CBTN) case
    }
    Push(pp_UNK_0xd8fb); // UNK_0xd8fb
    Push(Read16(Pop())); // @
    Push(pp_UNK_0xd903); // UNK_0xd903
    Push(Read16(Pop())); // @
    Push(Pop() | Pop()); // OR
    Push(pp__ro_AORIGI); // (AORIGI
    _1_dot_5_at_(); // 1.5@
    D0_eq_(); // D0=
    UNK_0xda86(); // UNK_0xda86
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(2);
      Push(0xb77c); // probable 'OV?.EQ'
      MODULE(); // MODULE
      if (Pop() == 0) Push(1); else Push(0); // NOT
      Push(pp__ro_STOP_dash_C); // (STOP-C
      Push(Read16(Pop())); // @
      Push(Pop() | Pop()); // OR
      Push(pp__ro_STOP_dash_C); // (STOP-C
      Store_2(); // !_2
    }
    Push(pp__ro_STOP_dash_C); // (STOP-C
    Push(Read16(Pop())); // @
    UNK_0xda86(); // UNK_0xda86
    if (Pop() != 0)
    {
      UNK_0xf0df(); // UNK_0xf0df
      CTINIT(); // CTINIT
      Push(0x5b35); Push(0x0002);
      UNK_0xd80e(); // UNK_0xd80e
      DrawTTY(); // .TTY
      UNK_0xf1dc(); // UNK_0xf1dc
      Push(5);
      DrawBTN_dash_TE(); // .BTN-TE
      INIT_dash_BU(); // INIT-BU
      Push(pp_FTRIG); // FTRIG
      _099(); // 099
    }
    Push(pp__ro_STOP_dash_C); // (STOP-C
    Push(Read16(Pop())); // @
  } while(Pop() == 0);
  Push(0);
  DrawBTN_dash_TE(); // .BTN-TE
  Push(pp_UNK_0xe563); // UNK_0xe563
  _099(); // 099
  CLR_dash_BUT(); // CLR-BUT
  SetColor(BLUE);
  Push(4);
  DrawHIGHLI(); // .HIGHLI
  Push(4);
  Push(pp_THIS_dash_BU); // THIS-BU
  Store_2(); // !_2
  SetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_2(); // !_2
}


// ================================================
// 0xf2c4: WORD 'UNK_0xf2c6' codep=0x224c parp=0xf2c6
// ================================================

void UNK_0xf2c6() // UNK_0xf2c6
{
  Push(pp__ro_AORIGI); // (AORIGI
  _1_dot_5_ex__2(); // 1.5!_2
  UNK_0xe718(); // UNK_0xe718
  UNK_0xd806(); // UNK_0xd806
  Push(pp_OK_dash_TALK); // OK-TALK
  StoreD(); // D!
  Push(pp_TERMINA); // TERMINA
  _099(); // 099
  Push(0x000e);
  UNK_0xdb3e(); // UNK_0xdb3e
  Push(pp_UNK_0xd903); // UNK_0xd903
  _099(); // 099
  Push(pp_UNK_0xd91b); // UNK_0xd91b
  _099(); // 099
  A_gt_ORIGINATO(); // A>ORIGINATO
  ORIGINATOR_gt_(); // ORIGINATOR>
  Push(0x65e1+UNK_0xd843.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(pp__pe_TALK); // %TALK
  Store_2(); // !_2
  Push(0x65e1+UNK_0xd84d.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_EDL); // EDL
  Store_2(); // !_2
  UNK_0xea38(); // UNK_0xea38
  Push(5);
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
  Push(6);
  _eq_SPECIE(); // =SPECIE
  if (Pop() != 0)
  {
    Push(pp_EDL); // EDL
    _099(); // 099
  }
  UNK_0xf0af(); // UNK_0xf0af
  UNK_0xf093(); // UNK_0xf093
  UNK_0xdc83(); // UNK_0xdc83
}


// ================================================
// 0xf326: WORD 'UNK_0xf328' codep=0x224c parp=0xf328
// ================================================

void UNK_0xf328() // UNK_0xf328
{
  unsigned short int a;
  UNK_0xf2c6(); // UNK_0xf2c6
  GetINST_dash_S(); // @INST-S
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(pp_UNK_0xd8dd); // UNK_0xd8dd
  Store_2(); // !_2
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    Push(a); // I
    Push(pp_UNK_0xe280); // UNK_0xe280
    Push(Pop() + Pop()); // +
    Push(Read8(Pop())&0xFF); // C@
    Push(Read16(regsp)); // DUP
    Push(0xd9f7); // probable 'UNK_0xd9f7'
    Store_2(); // !_2
    if (Pop() != 0)
    {
      UNK_0xdf4e(); // UNK_0xdf4e
      Push(pp__ro_ENCOUN); // (ENCOUN
      _1_dot_5_at_(); // 1.5@
      _2DUP(); // 2DUP
      Push(0x000f);
      Push(Pop() & Pop()); // AND
      Push(2);
      Push(Pop() | Pop()); // OR
      UNK_0xdfbd(); // UNK_0xdfbd
      Push(0x000f);
      MIN(); // MIN
      OVER(); // OVER
      Push(Pop()-1); // 1-
      C_ex__2(); // C!_2
      Push(Pop()-1); // 1-
      Push(pp_UNK_0xda19); // UNK_0xda19
      _do__ex_(); // $!
      SWAP(); // SWAP
      Push(0x000f);
      Push(Pop() & Pop()); // AND
      Push(2);
      Push(Pop() | Pop()); // OR
      UNK_0xdfbd(); // UNK_0xdfbd
      Push(0x000f);
      MIN(); // MIN
      OVER(); // OVER
      Push(Pop()-1); // 1-
      C_ex__2(); // C!_2
      Push(Pop()-1); // 1-
      Push(pp_UNK_0xda07); // UNK_0xda07
      _do__ex_(); // $!
    }
  } else
  {
    Push(pp_TERMINA); // TERMINA
    ON_2(); // ON_2
  }
  Push(a); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
  UNK_0xe93e(); // UNK_0xe93e
  UNK_0xe946(); // UNK_0xe946
  Push(Pop() | Pop()); // OR
  Push(Read16(regsp)); // DUP
  Push(Read16(cc_UNK_0xd913)); // UNK_0xd913
  Push(Pop() & Pop()); // AND
  UNK_0xeb1c(); // UNK_0xeb1c
  Push(Pop() | Pop()); // OR
  Push(0x51a0); // probable '?A-WEAP'
  Store_2(); // !_2
  UNK_0xe936(); // UNK_0xe936
  Push(Pop() | Pop()); // OR
  Push(Read16(cc_UNK_0xd90f)); // UNK_0xd90f
  Push(Pop() & Pop()); // AND
  UNK_0xeb1c(); // UNK_0xeb1c
  Push(Pop() | Pop()); // OR
  Push(0x5192); // probable '?A-SHIE'
  Store_2(); // !_2
}


// ================================================
// 0xf3cc: WORD 'UNK_0xf3ce' codep=0x224c parp=0xf3ce params=0 returns=0
// ================================================

void UNK_0xf3ce() // UNK_0xf3ce
{
  unsigned short int i, imax;
  Push(pp_UNK_0xda61); // UNK_0xda61
  _099(); // 099
  Push(0xda5d); // probable 'UNK_0xda5d'
  _099(); // 099
  Push(0xda03); // probable 'UNK_0xda03'
  _099(); // 099
  Push(0x52bd); // probable '?CALLED'
  _099(); // 099
  Push(0xd8e7); // probable 'UNK_0xd8e7'
  _099(); // 099
  Push(pp_UNK_0xd8ef); // UNK_0xd8ef
  _099(); // 099
  Push(0x5184); // probable '?FIRED-'
  _099(); // 099
  Push(0xd92d); // probable 'UNK_0xd92d'
  _099(); // 099
  Push(pp_UNK_0xda65); // UNK_0xda65
  _099(); // 099
  Push(pp_UNK_0xd8fb); // UNK_0xd8fb
  _099(); // 099
  Push(pp_UNK_0xd8f3); // UNK_0xd8f3
  _099(); // 099
  Push(pp_UNK_0xd8f7); // UNK_0xd8f7
  _099(); // 099
  Push(0xd9ff); // probable 'UNK_0xd9ff'
  _099(); // 099
  Push(pp_P_dash_RACES); // P-RACES
  _099(); // 099
  Push(pp_UNK_0xda59); // UNK_0xda59
  _099(); // 099
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xd898.offset); // IFIELD
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+UNK_0xd889.offset); // IFIELD
  Push(pp_UNK_0xda2b); // UNK_0xda2b
  _do__ex_(); // $!
  ICLOSE(); // ICLOSE
  Push(0);
  Push(0x0012);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x65e1+UNK_0xd898.offset); // IFIELD
    Push(i); // I
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    GetINST_dash_S(); // @INST-S
    Push(Pop()+1); // 1+
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
  Store_2(); // !_2
  UNK_0xd7fe(); // UNK_0xd7fe
  Push(0x65e1+_pe_NAME.offset); // IFIELD
  Push(pp_UNK_0xda3d); // UNK_0xda3d
  _do__ex_(); // $!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf45c: WORD 'UNK_0xf45e' codep=0x224c parp=0xf45e params=0 returns=0
// ================================================

void UNK_0xf45e() // UNK_0xf45e
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xd89d.offset); // IFIELD
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+UNK_0xd884.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xda55); // UNK_0xda55
  Store_2(); // !_2
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf474: WORD 'IAPWR' codep=0x224c parp=0xf47e params=0 returns=0
// ================================================
// entry

void IAPWR() // IAPWR
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0);
  do
  {
    GetINST_dash_C(); // @INST-C
    Push(0x0019);
    Push((Pop()==Pop())?1:0); // =
    GetINST_dash_S(); // @INST-S
    if (Pop() == 0) Push(1); else Push(0); // 0=
    UNK_0xda86(); // UNK_0xda86
    if (Pop() != 0)
    {
      Push(Read16(cc_UNK_0xd90f)); // UNK_0xd90f
      LoadData(UNK_0xd8c0); // from 'VESSEL'
      Push(Pop()+2); // 2+
      Push(Read16(Pop())); // @
      _gt_FLAG(); // >FLAG
      Push(Pop() | Pop()); // OR
      Push(0xd90f); // probable 'UNK_0xd90f'
      Store_2(); // !_2
      Push(Read16(cc_UNK_0xd913)); // UNK_0xd913
      LoadData(UNK_0xd8c8); // from 'VESSEL'
      _1_dot_5_at_(); // 1.5@
      D0_eq_(); // D0=
      if (Pop() == 0) Push(1); else Push(0); // NOT
      Push(Pop() | Pop()); // OR
      Push(0xd913); // probable 'UNK_0xd913'
      Store_2(); // !_2
      LoadData(UNK_0xd8d5); // from 'VESSEL'
      Push(Read8(Pop())&0xFF); // C@
      Push(0x65e1+UNK_0xd8d0.offset); // IFIELD
      _2_at_(); // 2@
      Push(Pop() + Pop()); // +
      LoadData(UNK_0xd8c0); // from 'VESSEL'
      _2_at_(); // 2@
      Push(Pop() + Pop()); // +
      _star__slash_(); // */
      Push(Pop() + Pop()); // +
    }
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  Push(pp_A_dash_STREN); // A-STREN
  Store_2(); // !_2
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4e2: WORD 'UNK_0xf4e4' codep=0x224c parp=0xf4e4 params=1 returns=1
// ================================================

void UNK_0xf4e4() // UNK_0xf4e4
{
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(7);
  Push(Pop() & Pop()); // AND
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xf4f8: WORD 'UNK_0xf4fa' codep=0x224c parp=0xf4fa params=0 returns=0
// ================================================

void UNK_0xf4fa() // UNK_0xf4fa
{
  UNK_0xd7fe(); // UNK_0xd7fe
  Push(0x65e1+UNK_0xd8ac.offset); // IFIELD
  UNK_0xf4e4(); // UNK_0xf4e4
  Push(0x65e1+UNK_0xd8b1.offset); // IFIELD
  UNK_0xf4e4(); // UNK_0xf4e4
  Push(Pop() + Pop()); // +
  Push(0x65e1+UNK_0xd8bb.offset); // IFIELD
  UNK_0xf4e4(); // UNK_0xf4e4
  Push(Pop() + Pop()); // +
  Push(0x65e1+UNK_0xd8b6.offset); // IFIELD
  UNK_0xf4e4(); // UNK_0xf4e4
  Push(Pop() + Pop()); // +
  ICLOSE(); // ICLOSE
  Push(0x000f);
  Push(0x000a);
  _star__slash_(); // */
  Push(pp_UNK_0xd9fb); // UNK_0xd9fb
  Store_2(); // !_2
}


// ================================================
// 0xf524: WORD 'ICOMM' codep=0x224c parp=0xf52e
// ================================================
// entry

void ICOMM() // ICOMM
{
  Push(pp_UNK_0xd931); // UNK_0xd931
  Store_2(); // !_2
  Push(0xd913); // probable 'UNK_0xd913'
  _099(); // 099
  Push(0xd90f); // probable 'UNK_0xd90f'
  _099(); // 099
  IAPWR(); // IAPWR
  UNK_0xf4fa(); // UNK_0xf4fa
  UNK_0xf328(); // UNK_0xf328
  UNK_0xf3ce(); // UNK_0xf3ce
  UNK_0xf45e(); // UNK_0xf45e
  UNK_0xeb1c(); // UNK_0xeb1c
  if (Pop() != 0)
  {
    UNK_0xea20(); // UNK_0xea20
    Push(0x0030);
    Push(Pop() | Pop()); // OR
    UNK_0xea2c(); // UNK_0xea2c
  }
  _gt_DISPLA(); // >DISPLA
}

// 0xf55c: db 0x43 0x4f 0x4d 0x4d 0x00 'COMM '

