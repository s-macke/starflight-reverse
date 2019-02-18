// ====== OVERLAY 'COMM-OV' ======
// store offset = 0xd7e0
// overlay size   = 0x1d80

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WD7F6  codep:0x224c wordp:0xd7f6 size:0x0006 C-string:'WD7F6'
//           WD7FE  codep:0x224c wordp:0xd7fe size:0x0006 C-string:'WD7FE'
//           WD806  codep:0x224c wordp:0xd806 size:0x0006 C-string:'WD806'
//           WD80E  codep:0x224c wordp:0xd80e size:0x0010 C-string:'WD80E'
//           WD820  codep:0x7420 wordp:0xd820 size:0x0003 C-string:'WD820'
//           WD825  codep:0x7420 wordp:0xd825 size:0x0003 C-string:'WD825'
//           WD82A  codep:0x7420 wordp:0xd82a size:0x0003 C-string:'WD82A'
//           WD82F  codep:0x7420 wordp:0xd82f size:0x0003 C-string:'WD82F'
//           WD834  codep:0x7420 wordp:0xd834 size:0x0003 C-string:'WD834'
//           WD839  codep:0x7420 wordp:0xd839 size:0x0003 C-string:'WD839'
//           WD83E  codep:0x7420 wordp:0xd83e size:0x0003 C-string:'WD83E'
//           WD843  codep:0x7420 wordp:0xd843 size:0x0003 C-string:'WD843'
//           WD848  codep:0x7420 wordp:0xd848 size:0x0003 C-string:'WD848'
//           WD84D  codep:0x7420 wordp:0xd84d size:0x0003 C-string:'WD84D'
//           WD852  codep:0x7420 wordp:0xd852 size:0x0003 C-string:'WD852'
//           WD857  codep:0x7420 wordp:0xd857 size:0x0003 C-string:'WD857'
//           WD85C  codep:0x7420 wordp:0xd85c size:0x0003 C-string:'WD85C'
//           WD861  codep:0x7420 wordp:0xd861 size:0x0003 C-string:'WD861'
//           WD866  codep:0x7420 wordp:0xd866 size:0x0003 C-string:'WD866'
//           WD86B  codep:0x7420 wordp:0xd86b size:0x0003 C-string:'WD86B'
//           WD870  codep:0x7420 wordp:0xd870 size:0x0003 C-string:'WD870'
//           WD875  codep:0x7420 wordp:0xd875 size:0x0003 C-string:'WD875'
//           WD87A  codep:0x7420 wordp:0xd87a size:0x0003 C-string:'WD87A'
//           WD87F  codep:0x7420 wordp:0xd87f size:0x0003 C-string:'WD87F'
//           WD884  codep:0x7420 wordp:0xd884 size:0x0003 C-string:'WD884'
//           WD889  codep:0x7420 wordp:0xd889 size:0x0003 C-string:'WD889'
//           WD88E  codep:0x7420 wordp:0xd88e size:0x0003 C-string:'WD88E'
//           WD893  codep:0x7420 wordp:0xd893 size:0x0003 C-string:'WD893'
//           WD898  codep:0x7420 wordp:0xd898 size:0x0003 C-string:'WD898'
//           WD89D  codep:0x7420 wordp:0xd89d size:0x0003 C-string:'WD89D'
//           WD8A2  codep:0x7420 wordp:0xd8a2 size:0x0003 C-string:'WD8A2'
//           WD8A7  codep:0x7420 wordp:0xd8a7 size:0x0003 C-string:'WD8A7'
//           WD8AC  codep:0x7420 wordp:0xd8ac size:0x0003 C-string:'WD8AC'
//           WD8B1  codep:0x7420 wordp:0xd8b1 size:0x0003 C-string:'WD8B1'
//           WD8B6  codep:0x7420 wordp:0xd8b6 size:0x0003 C-string:'WD8B6'
//           WD8BB  codep:0x7420 wordp:0xd8bb size:0x0003 C-string:'WD8BB'
//           WD8C0  codep:0x7394 wordp:0xd8c0 size:0x0006 C-string:'WD8C0'
//           WD8C8  codep:0x7394 wordp:0xd8c8 size:0x0006 C-string:'WD8C8'
//           WD8D0  codep:0x7420 wordp:0xd8d0 size:0x0003 C-string:'WD8D0'
//           WD8D5  codep:0x7394 wordp:0xd8d5 size:0x0006 C-string:'WD8D5'
//           WD8DD  codep:0x1d29 wordp:0xd8dd size:0x0002 C-string:'WD8DD'
//           WD8E1  codep:0x1d29 wordp:0xd8e1 size:0x0004 C-string:'WD8E1'
//           WD8E7  codep:0x2214 wordp:0xd8e7 size:0x0002 C-string:'WD8E7'
//           WD8EB  codep:0x1d29 wordp:0xd8eb size:0x0002 C-string:'WD8EB'
//           WD8EF  codep:0x1d29 wordp:0xd8ef size:0x0002 C-string:'WD8EF'
//           WD8F3  codep:0x1d29 wordp:0xd8f3 size:0x0002 C-string:'WD8F3'
//           WD8F7  codep:0x1d29 wordp:0xd8f7 size:0x0002 C-string:'WD8F7'
//           WD8FB  codep:0x1d29 wordp:0xd8fb size:0x0002 C-string:'WD8FB'
//           WD8FF  codep:0x1d29 wordp:0xd8ff size:0x0002 C-string:'WD8FF'
//           WD903  codep:0x1d29 wordp:0xd903 size:0x0002 C-string:'WD903'
//           WD907  codep:0x1d29 wordp:0xd907 size:0x0002 C-string:'WD907'
//           WD90B  codep:0x1d29 wordp:0xd90b size:0x0002 C-string:'WD90B'
//           WD90F  codep:0x2214 wordp:0xd90f size:0x0002 C-string:'WD90F'
//           WD913  codep:0x2214 wordp:0xd913 size:0x0002 C-string:'WD913'
//           WD917  codep:0x1d29 wordp:0xd917 size:0x0002 C-string:'WD917'
//           WD91B  codep:0x1d29 wordp:0xd91b size:0x0002 C-string:'WD91B'
//           WD91F  codep:0x1d29 wordp:0xd91f size:0x0002 C-string:'WD91F'
//           WD923  codep:0x1d29 wordp:0xd923 size:0x0002 C-string:'WD923'
//           WD927  codep:0x1d29 wordp:0xd927 size:0x0004 C-string:'WD927'
//           WD92D  codep:0x2214 wordp:0xd92d size:0x0002 C-string:'WD92D'
//           WD931  codep:0x1d29 wordp:0xd931 size:0x0002 C-string:'WD931'
//           WD935  codep:0x2214 wordp:0xd935 size:0x0002 C-string:'WD935'
//           WD939  codep:0x224c wordp:0xd939 size:0x000a C-string:'WD939'
//           WD945  codep:0x224c wordp:0xd945 size:0x000e C-string:'WD945'
//           WD955  codep:0x224c wordp:0xd955 size:0x000c C-string:'WD955'
//           WD963  codep:0x224c wordp:0xd963 size:0x0056 C-string:'WD963'
//           WD9BB  codep:0x224c wordp:0xd9bb size:0x000e C-string:'WD9BB'
//           S>EDL  codep:0x4b3b wordp:0xd9d3 size:0x0014 C-string:'S_gt_EDL'
//           WD9E9  codep:0x224c wordp:0xd9e9 size:0x000c C-string:'WD9E9'
//           WD9F7  codep:0x2214 wordp:0xd9f7 size:0x0002 C-string:'WD9F7'
//           WD9FB  codep:0x1d29 wordp:0xd9fb size:0x0002 C-string:'WD9FB'
//           WD9FF  codep:0x2214 wordp:0xd9ff size:0x0002 C-string:'WD9FF'
//           WDA03  codep:0x2214 wordp:0xda03 size:0x0002 C-string:'WDA03'
//           WDA07  codep:0x1d29 wordp:0xda07 size:0x0010 C-string:'WDA07'
//           WDA19  codep:0x1d29 wordp:0xda19 size:0x0010 C-string:'WDA19'
//           WDA2B  codep:0x1d29 wordp:0xda2b size:0x0010 C-string:'WDA2B'
//           WDA3D  codep:0x1d29 wordp:0xda3d size:0x0010 C-string:'WDA3D'
//           WDA4F  codep:0x1d29 wordp:0xda4f size:0x0004 C-string:'WDA4F'
//           WDA55  codep:0x1d29 wordp:0xda55 size:0x0002 C-string:'WDA55'
//           WDA59  codep:0x1d29 wordp:0xda59 size:0x0002 C-string:'WDA59'
//           WDA5D  codep:0x2214 wordp:0xda5d size:0x0002 C-string:'WDA5D'
//           WDA61  codep:0x1d29 wordp:0xda61 size:0x0002 C-string:'WDA61'
//           WDA65  codep:0x1d29 wordp:0xda65 size:0x0002 C-string:'WDA65'
//           WDA69  codep:0x2214 wordp:0xda69 size:0x0002 C-string:'WDA69'
//           WDA6D  codep:0x2214 wordp:0xda6d size:0x0002 C-string:'WDA6D'
//           WDA71  codep:0x2214 wordp:0xda71 size:0x0002 C-string:'WDA71'
//           WDA75  codep:0x2214 wordp:0xda75 size:0x0002 C-string:'WDA75'
//           WDA79  codep:0x2214 wordp:0xda79 size:0x0002 C-string:'WDA79'
//           WDA7D  codep:0x2214 wordp:0xda7d size:0x0002 C-string:'WDA7D'
//           WDA81  codep:0x7420 wordp:0xda81 size:0x0003 C-string:'WDA81'
//           WDA86  codep:0x224c wordp:0xda86 size:0x0006 C-string:'WDA86'
//           WDA8E  codep:0x224c wordp:0xda8e size:0x0008 C-string:'WDA8E'
//           WDA98  codep:0x224c wordp:0xda98 size:0x0010 C-string:'WDA98'
//     ORIGINATOR>  codep:0x224c wordp:0xdab8 size:0x0016 C-string:'ORIGINATOR_gt_'
//     A>ORIGINATO  codep:0x224c wordp:0xdade size:0x0020 C-string:'A_gt_ORIGINATO'
//           WDB00  codep:0x224c wordp:0xdb00 size:0x0018 C-string:'WDB00'
//           WDB1A  codep:0x224c wordp:0xdb1a size:0x0006 C-string:'WDB1A'
//           WDB22  codep:0x224c wordp:0xdb22 size:0x000c C-string:'WDB22'
//           WDB30  codep:0x224c wordp:0xdb30 size:0x000c C-string:'WDB30'
//           WDB3E  codep:0x224c wordp:0xdb3e size:0x0006 C-string:'WDB3E'
//        P>AFIELD  codep:0x4b3b wordp:0xdb51 size:0x000c C-string:'P_gt_AFIELD'
//           WDB5F  codep:0x224c wordp:0xdb5f size:0x0010 C-string:'WDB5F'
//           WDB71  codep:0x224c wordp:0xdb71 size:0x000e C-string:'WDB71'
//           WDB81  codep:0x224c wordp:0xdb81 size:0x0012 C-string:'WDB81'
//           WDB95  codep:0x224c wordp:0xdb95 size:0x000a C-string:'WDB95'
//           WDBA1  codep:0x3b74 wordp:0xdba1 size:0x0004 C-string:'WDBA1'
//           WDBA7  codep:0x3b74 wordp:0xdba7 size:0x0004 C-string:'WDBA7'
//           WDBAD  codep:0x3b74 wordp:0xdbad size:0x0004 C-string:'WDBAD'
//           WDBB3  codep:0x3b74 wordp:0xdbb3 size:0x0004 C-string:'WDBB3'
//            #PHR  codep:0x4b3b wordp:0xdbc0 size:0x0014 C-string:'_n_PHR'
//           WDBD6  codep:0x224c wordp:0xdbd6 size:0x0026 C-string:'WDBD6'
//          N>POST  codep:0x4b3b wordp:0xdc07 size:0x0014 C-string:'N_gt_POST'
//           WDC1D  codep:0x224c wordp:0xdc1d size:0x0064 C-string:'WDC1D'
//           WDC83  codep:0x224c wordp:0xdc83 size:0x0052 C-string:'WDC83'
//           EDL>P  codep:0x224c wordp:0xdcdf size:0x000c C-string:'EDL_gt_P'
//           +!EDL  codep:0x224c wordp:0xdcf5 size:0x001e C-string:'_plus__ex_EDL'
//           WDD15  codep:0x224c wordp:0xdd15 size:0x001e C-string:'WDD15'
//           WDD35  codep:0x224c wordp:0xdd35 size:0x0010 C-string:'WDD35'
//           WDD47  codep:0x224c wordp:0xdd47 size:0x0010 C-string:'WDD47'
//           WDD59  codep:0x224c wordp:0xdd59 size:0x0050 C-string:'WDD59'
//           WDDAB  codep:0x224c wordp:0xddab size:0x0018 C-string:'WDDAB'
//           WDDC5  codep:0x224c wordp:0xddc5 size:0x0040 C-string:'WDDC5'
//           WDE07  codep:0x224c wordp:0xde07 size:0x003a C-string:'WDE07'
//           WDE43  codep:0x224c wordp:0xde43 size:0x0010 C-string:'WDE43'
//           WDE55  codep:0x224c wordp:0xde55 size:0x000a C-string:'WDE55'
//           WDE61  codep:0x224c wordp:0xde61 size:0x0010 C-string:'WDE61'
//          >HAIL$  codep:0x224c wordp:0xde7c size:0x0010 C-string:'_gt_HAIL_do_'
//           WDE8E  codep:0x224c wordp:0xde8e size:0x000e C-string:'WDE8E'
//           WDE9E  codep:0x224c wordp:0xde9e size:0x001e C-string:'WDE9E'
//           WDEBE  codep:0x224c wordp:0xdebe size:0x001c C-string:'WDEBE'
//           WDEDC  codep:0x1d29 wordp:0xdedc size:0x0070 C-string:'WDEDC'
//           WDF4E  codep:0x224c wordp:0xdf4e size:0x0042 C-string:'WDF4E'
//           WDF92  codep:0x224c wordp:0xdf92 size:0x000c C-string:'WDF92'
//            1SYL  codep:0x224c wordp:0xdfa7 size:0x0014 C-string:'_1SYL'
//           WDFBD  codep:0x224c wordp:0xdfbd size:0x0046 C-string:'WDFBD'
//           WE005  codep:0x224c wordp:0xe005 size:0x001a C-string:'WE005'
//           WE021  codep:0x224c wordp:0xe021 size:0x0020 C-string:'WE021'
//           WE043  codep:0x224c wordp:0xe043 size:0x0026 C-string:'WE043'
//           WE06B  codep:0x224c wordp:0xe06b size:0x0014 C-string:'WE06B'
//           WE081  codep:0x224c wordp:0xe081 size:0x005e C-string:'WE081'
//           WE0E1  codep:0x224c wordp:0xe0e1 size:0x000e C-string:'WE0E1'
//           ACASE  codep:0x4b3b wordp:0xe0f9 size:0x000c C-string:'ACASE'
//           WE107  codep:0x224c wordp:0xe107 size:0x0034 C-string:'WE107'
//           WE13D  codep:0x224c wordp:0xe13d size:0x002e C-string:'WE13D'
//           WE16D  codep:0x224c wordp:0xe16d size:0x0052 C-string:'WE16D'
//           WE1C1  codep:0x224c wordp:0xe1c1 size:0x000a C-string:'WE1C1'
//           WE1CD  codep:0x224c wordp:0xe1cd size:0x000e C-string:'WE1CD'
//        CTSCROLL  codep:0x224c wordp:0xe1e8 size:0x0024 C-string:'CTSCROLL'
//           WE20E  codep:0x224c wordp:0xe20e size:0x002a C-string:'WE20E'
//           WE23A  codep:0x224c wordp:0xe23a size:0x0044 C-string:'WE23A'
//           WE280  codep:0x1d29 wordp:0xe280 size:0x0019 C-string:'WE280'
//           WE29B  codep:0x224c wordp:0xe29b size:0x0006 C-string:'WE29B'
//           WE2A3  codep:0x224c wordp:0xe2a3 size:0x0006 C-string:'WE2A3'
//           WE2AB  codep:0x224c wordp:0xe2ab size:0x0006 C-string:'WE2AB'
//           WE2B3  codep:0x224c wordp:0xe2b3 size:0x000e C-string:'WE2B3'
//           WE2C3  codep:0x224c wordp:0xe2c3 size:0x001e C-string:'WE2C3'
//           WE2E3  codep:0x224c wordp:0xe2e3 size:0x0020 C-string:'WE2E3'
//           WE305  codep:0x224c wordp:0xe305 size:0x000a C-string:'WE305'
//           WE311  codep:0x224c wordp:0xe311 size:0x0015 C-string:'WE311'
//           WE328  codep:0x224c wordp:0xe328 size:0x0011 C-string:'WE328'
//           WE33B  codep:0x224c wordp:0xe33b size:0x000a C-string:'WE33B'
//           WE347  codep:0x224c wordp:0xe347 size:0x0006 C-string:'WE347'
//           WE34F  codep:0x224c wordp:0xe34f size:0x001d C-string:'WE34F'
//           WE36E  codep:0x224c wordp:0xe36e size:0x000a C-string:'WE36E'
//           WE37A  codep:0x224c wordp:0xe37a size:0x0006 C-string:'WE37A'
//           WE382  codep:0x224c wordp:0xe382 size:0x0008 C-string:'WE382'
//              ?S  codep:0x4b3b wordp:0xe391 size:0x0014 C-string:'IsS'
//           WE3A7  codep:0x224c wordp:0xe3a7 size:0x0008 C-string:'WE3A7'
//             SPL  codep:0x4b3b wordp:0xe3b7 size:0x0028 C-string:'SPL'
//           WE3E1  codep:0x224c wordp:0xe3e1 size:0x001a C-string:'WE3E1'
//     (PHRASE>CT)  codep:0x224c wordp:0xe40b size:0x003c C-string:'_ro_PHRASE_gt_CT_rc_'
//           WE449  codep:0x224c wordp:0xe449 size:0x0010 C-string:'WE449'
//           WE45B  codep:0x224c wordp:0xe45b size:0x001e C-string:'WE45B'
//           WE47B  codep:0x224c wordp:0xe47b size:0x0022 C-string:'WE47B'
//           WE49F  codep:0x224c wordp:0xe49f size:0x0028 C-string:'WE49F'
//           WE4C9  codep:0x224c wordp:0xe4c9 size:0x0098 C-string:'WE4C9'
//           WE563  codep:0x1d29 wordp:0xe563 size:0x0002 C-string:'WE563'
//           WE567  codep:0x224c wordp:0xe567 size:0x0058 C-string:'WE567'
//           WE5C1  codep:0x1d29 wordp:0xe5c1 size:0x0019 C-string:'WE5C1'
//           WE5DC  codep:0x224c wordp:0xe5dc size:0x000c C-string:'WE5DC'
//           WE5EA  codep:0x224c wordp:0xe5ea size:0x0012 C-string:'WE5EA'
//           WE5FE  codep:0x224c wordp:0xe5fe size:0x000c C-string:'WE5FE'
//           WE60C  codep:0x224c wordp:0xe60c size:0x0006 C-string:'WE60C'
//           WE614  codep:0x224c wordp:0xe614 size:0x0008 C-string:'WE614'
//           WE61E  codep:0x224c wordp:0xe61e size:0x0008 C-string:'WE61E'
//           WE628  codep:0x224c wordp:0xe628 size:0x0008 C-string:'WE628'
//           WE632  codep:0x224c wordp:0xe632 size:0x0018 C-string:'WE632'
//           WE64C  codep:0x224c wordp:0xe64c size:0x000e C-string:'WE64C'
//           WE65C  codep:0x224c wordp:0xe65c size:0x0006 C-string:'WE65C'
//           WE664  codep:0x224c wordp:0xe664 size:0x0006 C-string:'WE664'
//           WE66C  codep:0x224c wordp:0xe66c size:0x000c C-string:'WE66C'
//           WE67A  codep:0x224c wordp:0xe67a size:0x000c C-string:'WE67A'
//           WE688  codep:0x224c wordp:0xe688 size:0x0016 C-string:'WE688'
//           WE6A0  codep:0x224c wordp:0xe6a0 size:0x000c C-string:'WE6A0'
//           WE6AE  codep:0x224c wordp:0xe6ae size:0x000c C-string:'WE6AE'
//           WE6BC  codep:0x224c wordp:0xe6bc size:0x001a C-string:'WE6BC'
//           WE6D8  codep:0x224c wordp:0xe6d8 size:0x000c C-string:'WE6D8'
//           WE6E6  codep:0x224c wordp:0xe6e6 size:0x0012 C-string:'WE6E6'
//           WE6FA  codep:0x224c wordp:0xe6fa size:0x0008 C-string:'WE6FA'
//           WE704  codep:0x224c wordp:0xe704 size:0x0008 C-string:'WE704'
//           WE70E  codep:0x224c wordp:0xe70e size:0x0008 C-string:'WE70E'
//           WE718  codep:0x224c wordp:0xe718 size:0x0008 C-string:'WE718'
//           WE722  codep:0x224c wordp:0xe722 size:0x0008 C-string:'WE722'
//           WE72C  codep:0x224c wordp:0xe72c size:0x0008 C-string:'WE72C'
//           WE736  codep:0x224c wordp:0xe736 size:0x0008 C-string:'WE736'
//           WE740  codep:0x224c wordp:0xe740 size:0x0006 C-string:'WE740'
//           WE748  codep:0x224c wordp:0xe748 size:0x0008 C-string:'WE748'
//           WE752  codep:0x224c wordp:0xe752 size:0x000a C-string:'WE752'
//           WE75E  codep:0x224c wordp:0xe75e size:0x000e C-string:'WE75E'
//           WE76E  codep:0x224c wordp:0xe76e size:0x000f C-string:'WE76E'
//           WE77F  codep:0x224c wordp:0xe77f size:0x0016 C-string:'WE77F'
//           WE797  codep:0x224c wordp:0xe797 size:0x0016 C-string:'WE797'
//           WE7AF  codep:0x224c wordp:0xe7af size:0x0016 C-string:'WE7AF'
//           WE7C7  codep:0x224c wordp:0xe7c7 size:0x0016 C-string:'WE7C7'
//           WE7DF  codep:0x224c wordp:0xe7df size:0x0014 C-string:'WE7DF'
//           WE7F5  codep:0x224c wordp:0xe7f5 size:0x001a C-string:'WE7F5'
//           WE811  codep:0x224c wordp:0xe811 size:0x0014 C-string:'WE811'
//           WE827  codep:0x224c wordp:0xe827 size:0x002e C-string:'WE827'
//           WE857  codep:0x224c wordp:0xe857 size:0x0012 C-string:'WE857'
//           WE86B  codep:0x224c wordp:0xe86b size:0x0014 C-string:'WE86B'
//           WE881  codep:0x224c wordp:0xe881 size:0x0010 C-string:'WE881'
//           WE893  codep:0x224c wordp:0xe893 size:0x0032 C-string:'WE893'
//           WE8C7  codep:0x224c wordp:0xe8c7 size:0x0010 C-string:'WE8C7'
//           WE8D9  codep:0x224c wordp:0xe8d9 size:0x000a C-string:'WE8D9'
//           WE8E5  codep:0x224c wordp:0xe8e5 size:0x000c C-string:'WE8E5'
//         (?RACE)  codep:0x1d29 wordp:0xe8fd size:0x0019 C-string:'_ro__ask_RACE_rc_'
//           WE918  codep:0x224c wordp:0xe918 size:0x000c C-string:'WE918'
//           WE926  codep:0x224c wordp:0xe926 size:0x0006 C-string:'WE926'
//           WE92E  codep:0x224c wordp:0xe92e size:0x0006 C-string:'WE92E'
//           WE936  codep:0x224c wordp:0xe936 size:0x0006 C-string:'WE936'
//           WE93E  codep:0x224c wordp:0xe93e size:0x0006 C-string:'WE93E'
//           WE946  codep:0x224c wordp:0xe946 size:0x0008 C-string:'WE946'
//           WE950  codep:0x224c wordp:0xe950 size:0x0008 C-string:'WE950'
//           WE95A  codep:0x224c wordp:0xe95a size:0x000e C-string:'WE95A'
//           WE96A  codep:0x224c wordp:0xe96a size:0x000c C-string:'WE96A'
//           WE978  codep:0x224c wordp:0xe978 size:0x0020 C-string:'WE978'
//           WE99A  codep:0x224c wordp:0xe99a size:0x0014 C-string:'WE99A'
//           WE9B0  codep:0x224c wordp:0xe9b0 size:0x0016 C-string:'WE9B0'
//           WE9C8  codep:0x224c wordp:0xe9c8 size:0x004a C-string:'WE9C8'
//           WEA14  codep:0x224c wordp:0xea14 size:0x000a C-string:'WEA14'
//           WEA20  codep:0x224c wordp:0xea20 size:0x000a C-string:'WEA20'
//           WEA2C  codep:0x224c wordp:0xea2c size:0x000a C-string:'WEA2C'
//           WEA38  codep:0x224c wordp:0xea38 size:0x000a C-string:'WEA38'
//           WEA44  codep:0x224c wordp:0xea44 size:0x0018 C-string:'WEA44'
//           WEA5E  codep:0x224c wordp:0xea5e size:0x000a C-string:'WEA5E'
//           WEA6A  codep:0x224c wordp:0xea6a size:0x0018 C-string:'WEA6A'
//           WEA84  codep:0x224c wordp:0xea84 size:0x000a C-string:'WEA84'
//           WEA90  codep:0x224c wordp:0xea90 size:0x000a C-string:'WEA90'
//           WEA9C  codep:0x224c wordp:0xea9c size:0x000a C-string:'WEA9C'
//           WEAA8  codep:0x224c wordp:0xeaa8 size:0x000a C-string:'WEAA8'
//           WEAB4  codep:0x224c wordp:0xeab4 size:0x000c C-string:'WEAB4'
//           WEAC2  codep:0x224c wordp:0xeac2 size:0x0008 C-string:'WEAC2'
//           WEACC  codep:0x224c wordp:0xeacc size:0x000e C-string:'WEACC'
//           WEADC  codep:0x224c wordp:0xeadc size:0x0008 C-string:'WEADC'
//           WEAE6  codep:0x224c wordp:0xeae6 size:0x000a C-string:'WEAE6'
//           WEAF2  codep:0x224c wordp:0xeaf2 size:0x001c C-string:'WEAF2'
//           WEB10  codep:0x224c wordp:0xeb10 size:0x000a C-string:'WEB10'
//           WEB1C  codep:0x224c wordp:0xeb1c size:0x0012 C-string:'WEB1C'
//           WEB30  codep:0x224c wordp:0xeb30 size:0x003e C-string:'WEB30'
//           WEB70  codep:0x224c wordp:0xeb70 size:0x0010 C-string:'WEB70'
//           <EDL>  codep:0xaccc wordp:0xeb8a size:0x008e C-string:'_st_EDL_gt_'
//          <TALK>  codep:0xaccc wordp:0xec23 size:0x00bc C-string:'_st_TALK_gt_'
//           <AUX>  codep:0xaccc wordp:0xece9 size:0x00a3 C-string:'_st_AUX_gt_'
//          <COMM>  codep:0xaccc wordp:0xed97 size:0x0092 C-string:'_st_COMM_gt_'
//           WEE2B  codep:0x224c wordp:0xee2b size:0x002a C-string:'WEE2B'
//           WEE57  codep:0x224c wordp:0xee57 size:0x0006 C-string:'WEE57'
//           WEE5F  codep:0x224c wordp:0xee5f size:0x002e C-string:'WEE5F'
//           WEE8F  codep:0x224c wordp:0xee8f size:0x0022 C-string:'WEE8F'
//           WEEB3  codep:0x1d29 wordp:0xeeb3 size:0x0003 C-string:'WEEB3'
//           WEEB8  codep:0x224c wordp:0xeeb8 size:0x0026 C-string:'WEEB8'
//            (>?)  codep:0x4b3b wordp:0xeee7 size:0x0014 C-string:'_ro__gt__ask__rc_'
//           WEEFD  codep:0x224c wordp:0xeefd size:0x002c C-string:'WEEFD'
//           WEF2B  codep:0x224c wordp:0xef2b size:0x000c C-string:'WEF2B'
//             >CM  codep:0x4b3b wordp:0xef3f size:0x0010 C-string:'_gt_CM'
//           WEF51  codep:0x224c wordp:0xef51 size:0x0011 C-string:'WEF51'
//           WEF64  codep:0x224c wordp:0xef64 size:0x0010 C-string:'WEF64'
//           WEF76  codep:0x224c wordp:0xef76 size:0x000a C-string:'WEF76'
//           WEF82  codep:0x224c wordp:0xef82 size:0x0006 C-string:'WEF82'
//            >Y/N  codep:0x4b3b wordp:0xef91 size:0x0010 C-string:'_gt_Y_slash_N'
//           WEFA3  codep:0x224c wordp:0xefa3 size:0x001a C-string:'WEFA3'
//           WEFBF  codep:0x224c wordp:0xefbf size:0x0016 C-string:'WEFBF'
//         EDL+AUX  codep:0x224c wordp:0xefe1 size:0x0022 C-string:'EDL_plus_AUX'
//     COMM-EXPERT  codep:0x224c wordp:0xf013 size:0x0036 C-string:'COMM_dash_EXPERT'
//           WF04B  codep:0x224c wordp:0xf04b size:0x0018 C-string:'WF04B'
//           WF065  codep:0x224c wordp:0xf065 size:0x002c C-string:'WF065'
//           WF093  codep:0x224c wordp:0xf093 size:0x001a C-string:'WF093'
//           WF0AF  codep:0x224c wordp:0xf0af size:0x002e C-string:'WF0AF'
//           WF0DF  codep:0x224c wordp:0xf0df size:0x0084 C-string:'WF0DF'
//           WF165  codep:0x224c wordp:0xf165 size:0x0050 C-string:'WF165'
//           WF1B7  codep:0x224c wordp:0xf1b7 size:0x0008 C-string:'WF1B7'
//          (CBTN)  codep:0x4b3b wordp:0xf1ca size:0x0010 C-string:'_ro_CBTN_rc_'
//           WF1DC  codep:0x224c wordp:0xf1dc size:0x002e C-string:'WF1DC'
//             CL1  codep:0x224c wordp:0xf212 size:0x00b2 C-string:'CL1'
//           WF2C6  codep:0x224c wordp:0xf2c6 size:0x0060 C-string:'WF2C6'
//           WF328  codep:0x224c wordp:0xf328 size:0x00a4 C-string:'WF328'
//           WF3CE  codep:0x224c wordp:0xf3ce size:0x008e C-string:'WF3CE'
//           WF45E  codep:0x224c wordp:0xf45e size:0x0016 C-string:'WF45E'
//           IAPWR  codep:0x224c wordp:0xf47e size:0x0064 C-string:'IAPWR'
//           WF4E4  codep:0x224c wordp:0xf4e4 size:0x0014 C-string:'WF4E4'
//           WF4FA  codep:0x224c wordp:0xf4fa size:0x002a C-string:'WF4FA'
//           ICOMM  codep:0x224c wordp:0xf52e size:0x0000 C-string:'ICOMM'

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
const unsigned short int pp_WD8DD = 0xd8dd; // WD8DD size: 2
// {0x3a, 0x20}

const unsigned short int pp_WD8E1 = 0xd8e1; // WD8E1 size: 4
// {0x56, 0x3a, 0x20, 0x63}

const unsigned short int pp_WD8EB = 0xd8eb; // WD8EB size: 2
// {0x5e, 0xf4}

const unsigned short int pp_WD8EF = 0xd8ef; // WD8EF size: 2
// {0x3a, 0x20}

const unsigned short int pp_WD8F3 = 0xd8f3; // WD8F3 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WD8F7 = 0xd8f7; // WD8F7 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WD8FB = 0xd8fb; // WD8FB size: 2
// {0x3a, 0x20}

const unsigned short int pp_WD8FF = 0xd8ff; // WD8FF size: 2
// {0x3a, 0x20}

const unsigned short int pp_WD903 = 0xd903; // WD903 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WD907 = 0xd907; // WD907 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WD90B = 0xd90b; // WD90B size: 2
// {0x3a, 0x20}

const unsigned short int pp_WD917 = 0xd917; // WD917 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WD91B = 0xd91b; // WD91B size: 2
// {0x3a, 0x20}

const unsigned short int pp_WD91F = 0xd91f; // WD91F size: 2
// {0x3a, 0x20}

const unsigned short int pp_WD923 = 0xd923; // WD923 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WD927 = 0xd927; // WD927 size: 4
// {0x56, 0x3a, 0x20, 0x72}

const unsigned short int pp_WD931 = 0xd931; // WD931 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WD9FB = 0xd9fb; // WD9FB size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDA07 = 0xda07; // WDA07 size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x73}

const unsigned short int pp_WDA19 = 0xda19; // WDA19 size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x20, 0x4f, 0x56, 0x52, 0x20, 0x20, 0x72}

const unsigned short int pp_WDA2B = 0xda2b; // WDA2B size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0xd0, 0xac, 0x39, 0x35, 0x33, 0x2f, 0xda}

const unsigned short int pp_WDA3D = 0xda3d; // WDA3D size: 16
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x45, 0x54, 0x53, 0x43, 0x41, 0x4c, 0xc5}

const unsigned short int pp_WDA4F = 0xda4f; // WDA4F size: 4
// {0x56, 0x3a, 0x20, 0x6d}

const unsigned short int pp_WDA55 = 0xda55; // WDA55 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDA59 = 0xda59; // WDA59 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDA61 = 0xda61; // WDA61 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDA65 = 0xda65; // WDA65 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDEDC = 0xdedc; // WDEDC size: 112
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x49, 0x50, 0xd4, 0xac, 0x3c, 0xc3, 0xe6, 0xdf, 0xde, 0xc8, 0x44, 0x45, 0x53, 0x43, 0x52, 0x49, 0x50, 0xb2, 0xac, 0x3c, 0xcb, 0xe6, 0x6a, 0xde, 0xc9, 0x48, 0x49, 0x54, 0x50, 0x4f, 0x49, 0x4e, 0xd4, 0xac, 0x3c, 0xd3, 0xe6, 0xaa, 0xde, 0xc8, 0x2e, 0x41, 0x52, 0x54, 0x4e, 0x41, 0x4d, 0xc5, 0xac, 0x3c, 0xd8, 0xe6, 0xfd, 0xde, 0xc6, 0x43, 0x50, 0x41, 0x55, 0x53, 0xc5, 0xac, 0x3c, 0x63, 0xe7, 0xc5, 0xde, 0xc6, 0x2d, 0x50, 0x41, 0x55, 0x53, 0xc5, 0xac, 0x3c, 0x6f, 0xe7, 0xf2, 0xe6, 0xc7, 0x57, 0x53, 0x43, 0x52, 0x4f, 0x4c, 0xcc, 0xac, 0x3c, 0x8d, 0xe7, 0xee, 0xde, 0xc8, 0x2d, 0x4c, 0x45, 0x41, 0x44, 0x49, 0x4e, 0xc7}

const unsigned short int pp_WE280 = 0xe280; // WE280 size: 25
// {0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00}

const unsigned short int pp_WE563 = 0xe563; // WE563 size: 2
// {0x00, 0x00}

const unsigned short int pp_WE5C1 = 0xe5c1; // WE5C1 size: 25
// {0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00}

const unsigned short int pp__ro__ask_RACE_rc_ = 0xe8fd; // (?RACE) size: 25
// {0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00}

const unsigned short int pp_WEEB3 = 0xeeb3; // WEEB3 size: 3
// {0x02, 0x08, 0x01}


const unsigned short int cc_WD8E7 = 0xd8e7; // WD8E7
const unsigned short int cc_WD90F = 0xd90f; // WD90F
const unsigned short int cc_WD913 = 0xd913; // WD913
const unsigned short int cc_WD92D = 0xd92d; // WD92D
const unsigned short int cc_WD935 = 0xd935; // WD935
const unsigned short int cc_WD9F7 = 0xd9f7; // WD9F7
const unsigned short int cc_WD9FF = 0xd9ff; // WD9FF
const unsigned short int cc_WDA03 = 0xda03; // WDA03
const unsigned short int cc_WDA5D = 0xda5d; // WDA5D
const unsigned short int cc_WDA69 = 0xda69; // WDA69
const unsigned short int cc_WDA6D = 0xda6d; // WDA6D
const unsigned short int cc_WDA71 = 0xda71; // WDA71
const unsigned short int cc_WDA75 = 0xda75; // WDA75
const unsigned short int cc_WDA79 = 0xda79; // WDA79
const unsigned short int cc_WDA7D = 0xda7d; // WDA7D


// 0xd7f2: db 0xd8 0x01 '  '

// ================================================
// 0xd7f4: WORD 'WD7F6' codep=0x224c wordp=0xd7f6 params=0 returns=0
// ================================================

void WD7F6() // WD7F6
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd7fc: WORD 'WD7FE' codep=0x224c wordp=0xd7fe params=0 returns=0
// ================================================

void WD7FE() // WD7FE
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xd804: WORD 'WD806' codep=0x224c wordp=0xd806 params=0 returns=2
// ================================================

void WD806() // WD806
{
  TIME(); // TIME
  _2_at_(); // 2@
}


// ================================================
// 0xd80c: WORD 'WD80E' codep=0x224c wordp=0xd80e params=2 returns=2
// ================================================

void WD80E() // WD80E
{
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+PHRASE_do_.offset); // PHRASE$<IFIELD>
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xd81e: WORD 'WD820' codep=0x7420 wordp=0xd820
// ================================================
IFieldType WD820 = {PHRASECONTRLIDX, 0x0b, 0x01};

// ================================================
// 0xd823: WORD 'WD825' codep=0x7420 wordp=0xd825
// ================================================
IFieldType WD825 = {PHRASECONTRLIDX, 0x0c, 0x01};

// ================================================
// 0xd828: WORD 'WD82A' codep=0x7420 wordp=0xd82a
// ================================================
IFieldType WD82A = {PHRASECONTRLIDX, 0x0d, 0x01};

// ================================================
// 0xd82d: WORD 'WD82F' codep=0x7420 wordp=0xd82f
// ================================================
IFieldType WD82F = {PHRASECONTRLIDX, 0x0e, 0x01};

// ================================================
// 0xd832: WORD 'WD834' codep=0x7420 wordp=0xd834
// ================================================
IFieldType WD834 = {PHRASECONTRLIDX, 0x0f, 0x01};

// ================================================
// 0xd837: WORD 'WD839' codep=0x7420 wordp=0xd839
// ================================================
IFieldType WD839 = {PHRASECONTRLIDX, 0x10, 0x01};

// ================================================
// 0xd83c: WORD 'WD83E' codep=0x7420 wordp=0xd83e
// ================================================
IFieldType WD83E = {ORIGINATORIDX, 0x0b, 0x01};

// ================================================
// 0xd841: WORD 'WD843' codep=0x7420 wordp=0xd843
// ================================================
IFieldType WD843 = {ORIGINATORIDX, 0x0c, 0x01};

// ================================================
// 0xd846: WORD 'WD848' codep=0x7420 wordp=0xd848
// ================================================
IFieldType WD848 = {ORIGINATORIDX, 0x0d, 0x01};

// ================================================
// 0xd84b: WORD 'WD84D' codep=0x7420 wordp=0xd84d
// ================================================
IFieldType WD84D = {ORIGINATORIDX, 0x12, 0x01};

// ================================================
// 0xd850: WORD 'WD852' codep=0x7420 wordp=0xd852
// ================================================
IFieldType WD852 = {ORIGINATORIDX, 0x1d, 0x01};

// ================================================
// 0xd855: WORD 'WD857' codep=0x7420 wordp=0xd857
// ================================================
IFieldType WD857 = {ORIGINATORIDX, 0x13, 0x01};

// ================================================
// 0xd85a: WORD 'WD85C' codep=0x7420 wordp=0xd85c
// ================================================
IFieldType WD85C = {ORIGINATORIDX, 0x14, 0x01};

// ================================================
// 0xd85f: WORD 'WD861' codep=0x7420 wordp=0xd861
// ================================================
IFieldType WD861 = {ORIGINATORIDX, 0x15, 0x01};

// ================================================
// 0xd864: WORD 'WD866' codep=0x7420 wordp=0xd866
// ================================================
IFieldType WD866 = {ORIGINATORIDX, 0x16, 0x01};

// ================================================
// 0xd869: WORD 'WD86B' codep=0x7420 wordp=0xd86b
// ================================================
IFieldType WD86B = {ORIGINATORIDX, 0x17, 0x01};

// ================================================
// 0xd86e: WORD 'WD870' codep=0x7420 wordp=0xd870
// ================================================
IFieldType WD870 = {ORIGINATORIDX, 0x18, 0x01};

// ================================================
// 0xd873: WORD 'WD875' codep=0x7420 wordp=0xd875
// ================================================
IFieldType WD875 = {ORIGINATORIDX, 0x19, 0x01};

// ================================================
// 0xd878: WORD 'WD87A' codep=0x7420 wordp=0xd87a
// ================================================
IFieldType WD87A = {ORIGINATORIDX, 0x1a, 0x03};

// ================================================
// 0xd87d: WORD 'WD87F' codep=0x7420 wordp=0xd87f
// ================================================
IFieldType WD87F = {COMM_MSGIDX, 0x0b, 0x03};

// ================================================
// 0xd882: WORD 'WD884' codep=0x7420 wordp=0xd884
// ================================================
IFieldType WD884 = {CREWMEMBERIDX, 0x1d, 0x01};

// ================================================
// 0xd887: WORD 'WD889' codep=0x7420 wordp=0xd889
// ================================================
IFieldType WD889 = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xd88c: WORD 'WD88E' codep=0x7420 wordp=0xd88e
// ================================================
// orphan
IFieldType WD88E = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xd891: WORD 'WD893' codep=0x7420 wordp=0xd893
// ================================================
// orphan
IFieldType WD893 = {CREWMEMBERIDX, 0x1a, 0x0f};

// ================================================
// 0xd896: WORD 'WD898' codep=0x7420 wordp=0xd898
// ================================================
IFieldType WD898 = {ASSIGN_CREWIDX, 0x11, 0x03};

// ================================================
// 0xd89b: WORD 'WD89D' codep=0x7420 wordp=0xd89d
// ================================================
IFieldType WD89D = {ASSIGN_CREWIDX, 0x1d, 0x03};

// ================================================
// 0xd8a0: WORD 'WD8A2' codep=0x7420 wordp=0xd8a2
// ================================================
IFieldType WD8A2 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xd8a5: WORD 'WD8A7' codep=0x7420 wordp=0xd8a7
// ================================================
// orphan
IFieldType WD8A7 = {SHIPIDX, 0x17, 0x02};

// ================================================
// 0xd8aa: WORD 'WD8AC' codep=0x7420 wordp=0xd8ac
// ================================================
IFieldType WD8AC = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xd8af: WORD 'WD8B1' codep=0x7420 wordp=0xd8b1
// ================================================
IFieldType WD8B1 = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xd8b4: WORD 'WD8B6' codep=0x7420 wordp=0xd8b6
// ================================================
IFieldType WD8B6 = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xd8b9: WORD 'WD8BB' codep=0x7420 wordp=0xd8bb
// ================================================
IFieldType WD8BB = {SHIPIDX, 0x1d, 0x02};

// ================================================
// 0xd8be: WORD 'WD8C0' codep=0x7394 wordp=0xd8c0
// ================================================
LoadDataType WD8C0 = {VESSELIDX, 0x0c, 0x04, 0x24, 0x6b5d};

// ================================================
// 0xd8c6: WORD 'WD8C8' codep=0x7394 wordp=0xd8c8
// ================================================
LoadDataType WD8C8 = {VESSELIDX, 0x12, 0x03, 0x24, 0x6b5d};

// ================================================
// 0xd8ce: WORD 'WD8D0' codep=0x7420 wordp=0xd8d0
// ================================================
IFieldType WD8D0 = {VESSELIDX, 0x12, 0x04};

// ================================================
// 0xd8d3: WORD 'WD8D5' codep=0x7394 wordp=0xd8d5
// ================================================
LoadDataType WD8D5 = {VESSELIDX, 0x05, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xd8db: WORD 'WD8DD' codep=0x1d29 wordp=0xd8dd
// ================================================
// 0xd8dd: db 0x3a 0x20 ': '

// ================================================
// 0xd8df: WORD 'WD8E1' codep=0x1d29 wordp=0xd8e1
// ================================================
// 0xd8e1: db 0x56 0x3a 0x20 0x63 'V: c'

// ================================================
// 0xd8e5: WORD 'WD8E7' codep=0x2214 wordp=0xd8e7
// ================================================
// 0xd8e7: dw 0x0000

// ================================================
// 0xd8e9: WORD 'WD8EB' codep=0x1d29 wordp=0xd8eb
// ================================================
// 0xd8eb: db 0x5e 0xf4 '^ '

// ================================================
// 0xd8ed: WORD 'WD8EF' codep=0x1d29 wordp=0xd8ef
// ================================================
// 0xd8ef: db 0x3a 0x20 ': '

// ================================================
// 0xd8f1: WORD 'WD8F3' codep=0x1d29 wordp=0xd8f3
// ================================================
// 0xd8f3: db 0x3a 0x20 ': '

// ================================================
// 0xd8f5: WORD 'WD8F7' codep=0x1d29 wordp=0xd8f7
// ================================================
// 0xd8f7: db 0x3a 0x20 ': '

// ================================================
// 0xd8f9: WORD 'WD8FB' codep=0x1d29 wordp=0xd8fb
// ================================================
// 0xd8fb: db 0x3a 0x20 ': '

// ================================================
// 0xd8fd: WORD 'WD8FF' codep=0x1d29 wordp=0xd8ff
// ================================================
// 0xd8ff: db 0x3a 0x20 ': '

// ================================================
// 0xd901: WORD 'WD903' codep=0x1d29 wordp=0xd903
// ================================================
// 0xd903: db 0x3a 0x20 ': '

// ================================================
// 0xd905: WORD 'WD907' codep=0x1d29 wordp=0xd907
// ================================================
// 0xd907: db 0x3a 0x20 ': '

// ================================================
// 0xd909: WORD 'WD90B' codep=0x1d29 wordp=0xd90b
// ================================================
// 0xd90b: db 0x3a 0x20 ': '

// ================================================
// 0xd90d: WORD 'WD90F' codep=0x2214 wordp=0xd90f
// ================================================
// 0xd90f: dw 0x0000

// ================================================
// 0xd911: WORD 'WD913' codep=0x2214 wordp=0xd913
// ================================================
// 0xd913: dw 0x0000

// ================================================
// 0xd915: WORD 'WD917' codep=0x1d29 wordp=0xd917
// ================================================
// 0xd917: db 0x3a 0x20 ': '

// ================================================
// 0xd919: WORD 'WD91B' codep=0x1d29 wordp=0xd91b
// ================================================
// 0xd91b: db 0x3a 0x20 ': '

// ================================================
// 0xd91d: WORD 'WD91F' codep=0x1d29 wordp=0xd91f
// ================================================
// 0xd91f: db 0x3a 0x20 ': '

// ================================================
// 0xd921: WORD 'WD923' codep=0x1d29 wordp=0xd923
// ================================================
// 0xd923: db 0x3a 0x20 ': '

// ================================================
// 0xd925: WORD 'WD927' codep=0x1d29 wordp=0xd927
// ================================================
// 0xd927: db 0x56 0x3a 0x20 0x72 'V: r'

// ================================================
// 0xd92b: WORD 'WD92D' codep=0x2214 wordp=0xd92d
// ================================================
// 0xd92d: dw 0x0000

// ================================================
// 0xd92f: WORD 'WD931' codep=0x1d29 wordp=0xd931
// ================================================
// 0xd931: db 0x3a 0x20 ': '

// ================================================
// 0xd933: WORD 'WD935' codep=0x2214 wordp=0xd935
// ================================================
// 0xd935: dw 0x0000

// ================================================
// 0xd937: WORD 'WD939' codep=0x224c wordp=0xd939 params=1 returns=1
// ================================================

void WD939() // WD939
{
  Push((Read16(0x65e1+WD857.offset)&0xFF) + 1); // WD857<IFIELD> C@ 1+
  MAX(); // MAX
}


// ================================================
// 0xd943: WORD 'WD945' codep=0x224c wordp=0xd945 params=0 returns=0
// ================================================

void WD945() // WD945
{
  Push(!Read16(pp_IsNID)); // ?NID @ NOT
  if (Pop() == 0) return;
  WD939(); // WD939
}


// ================================================
// 0xd953: WORD 'WD955' codep=0x224c wordp=0xd955 params=0 returns=1
// ================================================

void WD955() // WD955
{
  Push(pp_LSCAN); // LSCAN
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  Push(Pop() + Pop()); // +
  Push(Pop() + 1); //  1+
}


// ================================================
// 0xd961: WORD 'WD963' codep=0x224c wordp=0xd963 params=2 returns=0
// ================================================

void WD963() // WD963
{
  unsigned short int i, imax, a;
  Push(pp_LSCAN); // LSCAN
  Push(0x0190);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  Push(pp_LSCAN); // LSCAN
  _099(); // 099

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_DICT)); // DICT @
    Push(i); // I
    Push(0x65e1+PHRASE.offset); // PHRASE<IFIELD>
    _plus__at_(); // +@
    Push(Pop() + 3); //  3+
    GetDS(); // @DS
    WD955(); // WD955
    _2OVER(); // 2OVER
    Push(Pop() - 1); //  1-
    LC_at_(); // LC@
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    LCMOVE(); // LCMOVE
    Push(a + (Read16(pp_LSCAN)&0xFF)); // R> LSCAN C@ +
    Push(pp_LSCAN); // LSCAN
    C_ex__2(); // C!_2
    Push(Read16(cc_BL)); // BL
    WD955(); // WD955
    C_ex__2(); // C!_2
    Push(1 + (Read16(pp_LSCAN)&0xFF)); // 1 LSCAN C@ +
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
// 0xd9b9: WORD 'WD9BB' codep=0x224c wordp=0xd9bb params=0 returns=0
// ================================================

void WD9BB() // WD9BB
{
  Push(!Read16(pp_IsMVT)); // ?MVT @ NOT
  if (Pop() == 0) return;
  WD939(); // WD939
}


// ================================================
// 0xd9c9: WORD 'S>EDL' codep=0x4b3b wordp=0xd9d3
// ================================================

void S_gt_EDL() // S>EDL
{
  switch(Pop()) // S>EDL
  {
  case 18:
    WD9BB(); // WD9BB
    break;
  case 1:
    WD9BB(); // WD9BB
    break;
  case 2:
    WD9BB(); // WD9BB
    break;
  case 8:
    WD945(); // WD945
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xd9e7: WORD 'WD9E9' codep=0x224c wordp=0xd9e9
// ================================================

void WD9E9() // WD9E9
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  S_gt_EDL(); // S>EDL case
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xd9f5: WORD 'WD9F7' codep=0x2214 wordp=0xd9f7
// ================================================
// 0xd9f7: dw 0x0000

// ================================================
// 0xd9f9: WORD 'WD9FB' codep=0x1d29 wordp=0xd9fb
// ================================================
// 0xd9fb: db 0x3a 0x20 ': '

// ================================================
// 0xd9fd: WORD 'WD9FF' codep=0x2214 wordp=0xd9ff
// ================================================
// 0xd9ff: dw 0x0000

// ================================================
// 0xda01: WORD 'WDA03' codep=0x2214 wordp=0xda03
// ================================================
// 0xda03: dw 0x0000

// ================================================
// 0xda05: WORD 'WDA07' codep=0x1d29 wordp=0xda07
// ================================================
// 0xda07: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x72 0x69 0x61 0x62 0x6c 0x65 0x73 ':  ALLOT riables'

// ================================================
// 0xda17: WORD 'WDA19' codep=0x1d29 wordp=0xda19
// ================================================
// 0xda19: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x20 0x4f 0x56 0x52 0x20 0x20 0x72 ':  ALLOT  OVR  r'

// ================================================
// 0xda29: WORD 'WDA2B' codep=0x1d29 wordp=0xda2b
// ================================================
// 0xda2b: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0xd0 0xac 0x39 0x35 0x33 0x2f 0xda ':  ALLOT   953/ '

// ================================================
// 0xda3b: WORD 'WDA3D' codep=0x1d29 wordp=0xda3d
// ================================================
// 0xda3d: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x45 0x54 0x53 0x43 0x41 0x4c 0xc5 ':  ALLOT ETSCAL '

// ================================================
// 0xda4d: WORD 'WDA4F' codep=0x1d29 wordp=0xda4f
// ================================================
// 0xda4f: db 0x56 0x3a 0x20 0x6d 'V: m'

// ================================================
// 0xda53: WORD 'WDA55' codep=0x1d29 wordp=0xda55
// ================================================
// 0xda55: db 0x3a 0x20 ': '

// ================================================
// 0xda57: WORD 'WDA59' codep=0x1d29 wordp=0xda59
// ================================================
// 0xda59: db 0x3a 0x20 ': '

// ================================================
// 0xda5b: WORD 'WDA5D' codep=0x2214 wordp=0xda5d
// ================================================
// 0xda5d: dw 0x0000

// ================================================
// 0xda5f: WORD 'WDA61' codep=0x1d29 wordp=0xda61
// ================================================
// 0xda61: db 0x3a 0x20 ': '

// ================================================
// 0xda63: WORD 'WDA65' codep=0x1d29 wordp=0xda65
// ================================================
// 0xda65: db 0x3a 0x20 ': '

// ================================================
// 0xda67: WORD 'WDA69' codep=0x2214 wordp=0xda69
// ================================================
// 0xda69: dw 0x0010

// ================================================
// 0xda6b: WORD 'WDA6D' codep=0x2214 wordp=0xda6d
// ================================================
// 0xda6d: dw 0x0007

// ================================================
// 0xda6f: WORD 'WDA71' codep=0x2214 wordp=0xda71
// ================================================
// 0xda71: dw 0x0008

// ================================================
// 0xda73: WORD 'WDA75' codep=0x2214 wordp=0xda75
// ================================================
// 0xda75: dw 0x0009

// ================================================
// 0xda77: WORD 'WDA79' codep=0x2214 wordp=0xda79
// ================================================
// 0xda79: dw 0x000b

// ================================================
// 0xda7b: WORD 'WDA7D' codep=0x2214 wordp=0xda7d
// ================================================
// 0xda7d: dw 0x000a

// ================================================
// 0xda7f: WORD 'WDA81' codep=0x7420 wordp=0xda81
// ================================================
// orphan
IFieldType WDA81 = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xda84: WORD 'WDA86' codep=0x224c wordp=0xda86 params=2 returns=1
// ================================================

void WDA86() // WDA86
{
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xda8c: WORD 'WDA8E' codep=0x224c wordp=0xda8e params=1 returns=1
// ================================================

void WDA8E() // WDA8E
{
  Push(Pop()==(Read16(pp_A_dash_POSTU)&0xFF)?1:0); //  A-POSTU C@ =
}


// ================================================
// 0xda96: WORD 'WDA98' codep=0x224c wordp=0xda98 params=0 returns=1
// ================================================

void WDA98() // WDA98
{
  Push(Read16(cc_WD935)); // WD935
  if (Pop() != 0)
  {
    GetColor(RED);
    return;
  }
  GetColor(WHITE);
}


// ================================================
// 0xdaa8: WORD 'ORIGINATOR>' codep=0x224c wordp=0xdab8
// ================================================
// entry

void ORIGINATOR_gt_() // ORIGINATOR>
{
  Push(pp__ro_ORIGIN); // (ORIGIN
  Get_gt_C_plus_S(); // @>C+S
  GetColor(WHITE);
  WDA98(); // WDA98
  Push(Read16(0x65e1+WD83E.offset)&0xFF); // WD83E<IFIELD> C@
  I_gt_C(); // I>C
  IsMRC(); // ?MRC
  Push(pp_CTCOLOR); // CTCOLOR
  Store_2(); // !_2
}


// ================================================
// 0xdace: WORD 'A>ORIGINATO' codep=0x224c wordp=0xdade params=0 returns=0
// ================================================
// entry

void A_gt_ORIGINATO() // A>ORIGINATO
{
  Push(pp__ro_AORIGI); // (AORIGI
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_ORIGIN); // (ORIGIN
  _1_dot_5_ex__2(); // 1.5!_2
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(pp_WD907); // WD907
  Store_2(); // !_2
  Push(Read16(pp_WD8FF)); // WD8FF @
  Push(pp_WD917); // WD917
  Store_2(); // !_2
  Push(0xd935); // 'WD935'
  ON_2(); // ON_2
}


// ================================================
// 0xdafe: WORD 'WDB00' codep=0x224c wordp=0xdb00 params=0 returns=0
// ================================================

void WDB00() // WDB00
{
  Push2Words("*COMM");
  Push(pp__ro_ORIGIN); // (ORIGIN
  _1_dot_5_ex__2(); // 1.5!_2
  Push(Read16(pp_P_dash_POSTU)); // P-POSTU @
  Push(pp_WD907); // WD907
  Store_2(); // !_2
  Push(Read16(pp_WD8F3)); // WD8F3 @
  Push(pp_WD917); // WD917
  Store_2(); // !_2
}


// ================================================
// 0xdb18: WORD 'WDB1A' codep=0x224c wordp=0xdb1a params=0 returns=0
// ================================================

void WDB1A() // WDB1A
{
  Push(pp_WD8E1); // WD8E1
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xdb20: WORD 'WDB22' codep=0x224c wordp=0xdb22 params=0 returns=1
// ================================================

void WDB22() // WDB22
{
  Push(pp_WDA4F); // WDA4F
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+WD834.offset); // WD834<IFIELD>
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdb2e: WORD 'WDB30' codep=0x224c wordp=0xdb30 params=0 returns=1
// ================================================

void WDB30() // WDB30
{
  Push(pp_WDA4F); // WDA4F
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+WD839.offset); // WD839<IFIELD>
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdb3c: WORD 'WDB3E' codep=0x224c wordp=0xdb3e params=1 returns=0
// ================================================

void WDB3E() // WDB3E
{
  Push(pp_WD8FF); // WD8FF
  Store_2(); // !_2
}


// ================================================
// 0xdb44: WORD 'P>AFIELD' codep=0x4b3b wordp=0xdb51
// ================================================

void P_gt_AFIELD() // P>AFIELD
{
  switch(Pop()) // P>AFIELD
  {
  case 2:
    Push(0x65e1+WD86B.offset); // IFIELD
    break;
  case 8:
    Push(0x65e1+WD870.offset); // IFIELD
    break;
  default:
    Push(0x65e1+WD866.offset); // IFIELD
    break;

  }
}

// ================================================
// 0xdb5d: WORD 'WDB5F' codep=0x224c wordp=0xdb5f
// ================================================

void WDB5F() // WDB5F
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(pp_P_dash_POSTU)); // P-POSTU @
  P_gt_AFIELD(); // P>AFIELD case
  _plus__dash__at_(); // +-@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdb6f: WORD 'WDB71' codep=0x224c wordp=0xdb71
// ================================================

void WDB71() // WDB71
{
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  NEW_dash_BUT(); // NEW-BUT
}


// ================================================
// 0xdb7f: WORD 'WDB81' codep=0x224c wordp=0xdb81
// ================================================

void WDB81() // WDB81
{
  do
  {
    WDB71(); // WDB71
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  GetColor(BLUE);
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  DrawON(); // .ON
}


// ================================================
// 0xdb93: WORD 'WDB95' codep=0x224c wordp=0xdb95 params=0 returns=0
// ================================================

void WDB95() // WDB95
{
  WDB00(); // WDB00
  GetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_2(); // !_2
}


// ================================================
// 0xdb9f: WORD 'WDBA1' codep=0x3b74 wordp=0xdba1
// ================================================
// 0xdba1: dw 0x0014 0x000a

// ================================================
// 0xdba5: WORD 'WDBA7' codep=0x3b74 wordp=0xdba7
// ================================================
// 0xdba7: dw 0x000f 0x000a

// ================================================
// 0xdbab: WORD 'WDBAD' codep=0x3b74 wordp=0xdbad
// ================================================
// 0xdbad: dw 0x000a 0x0005

// ================================================
// 0xdbb1: WORD 'WDBB3' codep=0x3b74 wordp=0xdbb3
// ================================================
// 0xdbb3: dw 0x0007 0x0004

// ================================================
// 0xdbb7: WORD '#PHR' codep=0x4b3b wordp=0xdbc0
// ================================================

void _n_PHR() // #PHR
{
  switch(Pop()) // #PHR
  {
  case 1:
    Push2Words("WDBA1");
    break;
  case 2:
    Push2Words("WDBA7");
    break;
  case 4:
    Push2Words("WDBAD");
    break;
  case 8:
    Push2Words("WDBB3");
    break;
  default:
    Push2Words("NULL");
    break;

  }
}

// ================================================
// 0xdbd4: WORD 'WDBD6' codep=0x224c wordp=0xdbd6
// ================================================

void WDBD6() // WDBD6
{
  Push(Read16(pp_WD8DD)==0x0012?1:0); // WD8DD @ 0x0012 =
  if (Pop() != 0)
  {
    Push(0x03e8);
  } else
  {
    Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
    _n_PHR(); // #PHR case
    RRND(); // RRND
  }
  Push(pp_WD91F); // WD91F
  Store_2(); // !_2
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xdbfc: WORD 'N>POST' codep=0x4b3b wordp=0xdc07
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
    Push(Read16(cc_WDA69)); // WDA69
    break;
  default:
    Push(1);
    break;

  }
}

// ================================================
// 0xdc1b: WORD 'WDC1D' codep=0x224c wordp=0xdc1d
// ================================================

void WDC1D() // WDC1D
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(pp_EDL)); // EDL @
  Push(Read16(regsp)); // DUP
  Push(Read16(0x65e1+WD857.offset)&0xFF); // WD857<IFIELD> C@
  _st_(); // <
  Push(!Pop()); //  NOT
  OVER(); // OVER
  Push(Read16(0x65e1+WD85C.offset)&0xFF); // WD85C<IFIELD> C@
  _st_(); // <
  Push(!Pop()); //  NOT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(Read16(0x65e1+WD861.offset)&0xFF); // WD861<IFIELD> C@
  _st_(); // <
  Push(!Pop()); //  NOT
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  ICLOSE(); // ICLOSE
  Push(Read16(pp_WD9FB) - Read16(pp_A_dash_STREN)); // WD9FB @ A-STREN @ -
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
  Store_2(); // !_2
}


// ================================================
// 0xdc81: WORD 'WDC83' codep=0x224c wordp=0xdc83
// ================================================

void WDC83() // WDC83
{
  unsigned short int a;
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  WDC1D(); // WDC1D
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(Read16(regsp)); // DUP
  Push(Pop()==1?1:0); //  1 =
  a = Pop(); // >R
  Push((Pop()==Pop())?1:0); // =
  Push((!Pop() & a) & Read16(pp_IsCOMBAT)); //  NOT R> AND ?COMBAT @ AND
  WD7F6(); // WD7F6
  Push(Read16(0x65e1+WD848.offset)&0xFF); // WD848<IFIELD> C@
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
    Push(0xbe45); // '.HUFF'
    MODULE(); // MODULE
    Push(3);
    _star_CLOSE(); // *CLOSE
  }
  WDBD6(); // WDBD6
}


// ================================================
// 0xdcd5: WORD 'EDL>P' codep=0x224c wordp=0xdcdf
// ================================================
// entry

void EDL_gt_P() // EDL>P
{
  Push(pp_A_dash_STREN); // A-STREN
  _099(); // 099
  Push(pp_WD9FB); // WD9FB
  _099(); // 099
  WDC1D(); // WDC1D
}


// ================================================
// 0xdceb: WORD '+!EDL' codep=0x224c wordp=0xdcf5
// ================================================
// entry

void _plus__ex_EDL() // +!EDL
{
  Push(Pop() + Read16(pp_EDL)); //  EDL @ +
  Push(0);
  MAX(); // MAX
  Push(0x0064);
  MIN(); // MIN
  WD9E9(); // WD9E9
  Push(pp_EDL); // EDL
  Store_2(); // !_2
  WDC83(); // WDC83
  Push(pp_WD8F3); // WD8F3
  _099(); // 099
}


// ================================================
// 0xdd13: WORD 'WDD15' codep=0x224c wordp=0xdd15 params=0 returns=0
// ================================================

void WDD15() // WDD15
{
  WD806(); // WD806
  Push(Read16(pp_WD90B)); // WD90B @
  Push(0x001b);
  U_star_(); // U*
  OVER(); // OVER
  Push(Pop() * 2); //  2*
  Push(Read16(cc_WD935)); // WD935
  U_star_(); // U*
  D_plus_(); // D+
  D_plus_(); // D+
  Push(pp_OK_dash_TALK); // OK-TALK
  StoreD(); // D!
}


// ================================================
// 0xdd33: WORD 'WDD35' codep=0x224c wordp=0xdd35 params=0 returns=0
// ================================================

void WDD35() // WDD35
{
  WD806(); // WD806
  Push(0x3a98); Push(0x0000);
  D_plus_(); // D+
  Push(pp_WD927); // WD927
  StoreD(); // D!
}


// ================================================
// 0xdd45: WORD 'WDD47' codep=0x224c wordp=0xdd47 params=1 returns=1
// ================================================

void WDD47() // WDD47
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // R>
  BIT(); // BIT
  Push(Pop() & Read16(pp_WDA61)); //  WDA61 @ AND
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xdd57: WORD 'WDD59' codep=0x224c wordp=0xdd59 params=0 returns=1
// ================================================

void WDD59() // WDD59
{
  Push(0);
  Push(0x0100);
  Push(pp_WD923); // WD923
  Store_2(); // !_2
  do
  {
    Push(Read16(0x65e1+WD82A.offset)&0xFF); // WD82A<IFIELD> C@
    Push(Read16(pp_WD923)); // WD923 @
    _st_(); // <
    Push((Read16(0x65e1+WD825.offset)&0xFF) & (Read16(pp_WD907)&0xFF)); // WD825<IFIELD> C@ WD907 C@ AND
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    Push((Read16(0x65e1+WD820.offset)&0xFF) & Read16(pp_WD931)); // WD820<IFIELD> C@ WD931 @ AND
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      CI(); // CI
      Push(pp_WD8E1); // WD8E1
      _1_dot_5_ex__2(); // 1.5!_2
      Push(Read16(0x65e1+WD82A.offset)&0xFF); // WD82A<IFIELD> C@
      Push(pp_WD923); // WD923
      Store_2(); // !_2
      Pop(); // DROP
      Push(1);
    }
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
}


// ================================================
// 0xdda9: WORD 'WDDAB' codep=0x224c wordp=0xddab params=0 returns=1
// ================================================

void WDDAB() // WDDAB
{
  Push(Read16(pp_WD917)); // WD917 @
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
// 0xddc3: WORD 'WDDC5' codep=0x224c wordp=0xddc5
// ================================================

void WDDC5() // WDDC5
{
  Push(Read16(pp_WD917)); // WD917 @
  Push(0x0033);
  OVER(); // OVER
  IFIND(); // IFIND
  Push(Pop()==0?1:0); //  0=
  SWAP(); // SWAP
  WDD47(); // WDD47
  Push(Pop() | Pop()); // OR
  Push(Read16(cc_WD935) & (Read16(pp_WD931)==2?1:0)); // WD935 WD931 @ 2 = AND
  if (Pop() != 0)
  {
    WDDAB(); // WDDAB
    Push(Pop() | Pop()); // OR
  }
  if (Pop() == 0) return;
  IFIRST(); // IFIRST
  Push(0x0033);
  Push(5);
  IFIND(); // IFIND
  Pop(); // DROP
  Push(5);
  Push(pp_WD917); // WD917
  Store_2(); // !_2
}


// ================================================
// 0xde05: WORD 'WDE07' codep=0x224c wordp=0xde07
// ================================================

void WDE07() // WDE07
{
  Push2Words("NULL");
  Push(pp_WD8E1); // WD8E1
  _1_dot_5_ex__2(); // 1.5!_2
  ORIGINATOR_gt_(); // ORIGINATOR>
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    WDDC5(); // WDDC5
    IsCHILD(); // ?CHILD
    if (Pop() != 0)
    {
      IOPEN(); // IOPEN
      WDD59(); // WDD59
      Push(Pop()==0?1:0); //  0=
      if (Pop() != 0)
      {
        ICLOSE(); // ICLOSE
        Push(5);
        Push(pp_WD917); // WD917
        Store_2(); // !_2
        WDDC5(); // WDDC5
        IOPEN(); // IOPEN
        WDD59(); // WDD59
        Pop(); // DROP
      }
      CDROP(); // CDROP
    }
    CDROP(); // CDROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xde41: WORD 'WDE43' codep=0x224c wordp=0xde43 params=0 returns=0
// ================================================

void WDE43() // WDE43
{
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_2(); // !_2
  Push(5);
  Push(pp_RECORD_n_); // RECORD#
  Store_2(); // !_2
}


// ================================================
// 0xde53: WORD 'WDE55' codep=0x224c wordp=0xde55
// ================================================

void WDE55() // WDE55
{
  LoadData(_1BTN); // from 'BUTTONS'
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xde5f: WORD 'WDE61' codep=0x224c wordp=0xde61
// ================================================

void WDE61() // WDE61
{
  WDE43(); // WDE43
  SET_STR_AS_PARAM("RESPOND");
  WDE55(); // WDE55
}


// ================================================
// 0xde71: WORD '>HAIL$' codep=0x224c wordp=0xde7c
// ================================================
// entry

void _gt_HAIL_do_() // >HAIL$
{
  WDE43(); // WDE43
  SET_STR_AS_PARAM("HAIL   ");
  WDE55(); // WDE55
}


// ================================================
// 0xde8c: WORD 'WDE8E' codep=0x224c wordp=0xde8e params=0 returns=0
// ================================================

void WDE8E() // WDE8E
{
  Push(-1 + (Read16(pp_LSCAN)&0xFF)); // -1 LSCAN C@ +
  Push(pp_LSCAN); // LSCAN
  C_ex__2(); // C!_2
}


// ================================================
// 0xde9c: WORD 'WDE9E' codep=0x224c wordp=0xde9e params=2 returns=0
// ================================================

void WDE9E() // WDE9E
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
  C_ex__2(); // C!_2
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xdebc: WORD 'WDEBE' codep=0x224c wordp=0xdebe params=2 returns=1
// ================================================

void WDEBE() // WDEBE
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
// 0xdeda: WORD 'WDEDC' codep=0x1d29 wordp=0xdedc
// ================================================
// 0xdedc: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x49 0x50 0xd4 0xac 0x3c 0xc3 0xe6 0xdf 0xde 0xc8 0x44 0x45 0x53 0x43 0x52 0x49 0x50 0xb2 0xac 0x3c 0xcb 0xe6 0x6a 0xde 0xc9 0x48 0x49 0x54 0x50 0x4f 0x49 0x4e 0xd4 0xac 0x3c 0xd3 0xe6 0xaa 0xde 0xc8 0x2e 0x41 0x52 0x54 0x4e 0x41 0x4d 0xc5 0xac 0x3c 0xd8 0xe6 0xfd 0xde 0xc6 0x43 0x50 0x41 0x55 0x53 0xc5 0xac 0x3c 0x63 0xe7 0xc5 0xde 0xc6 0x2d 0x50 0x41 0x55 0x53 0xc5 0xac 0x3c 0x6f 0xe7 0xf2 0xe6 0xc7 0x57 0x53 0x43 0x52 0x4f 0x4c 0xcc 0xac 0x3c 0x8d 0xe7 0xee 0xde 0xc8 0x2d 0x4c 0x45 0x41 0x44 0x49 0x4e 0xc7 ':  ALLOT IP  <     DESCRIP  <  j  HITPOIN  <     .ARTNAM  <     CPAUS  <c    -PAUS  <o    WSCROL  <     -LEADIN '

// ================================================
// 0xdf4c: WORD 'WDF4E' codep=0x224c wordp=0xdf4e
// ================================================

void WDF4E() // WDF4E
{
  unsigned short int i, imax;
  Push(pp_WDEDC); // WDEDC
  Push(0x0070);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  ORIGINATOR_gt_(); // ORIGINATOR>
  Push(0x65e1+WD87A.offset); // WD87A<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN

  i = 0;
  imax = 0x0010;
  do // (DO)
  {
    Push(0x65e1+PHRASE_do_.offset); // PHRASE$<IFIELD>
    COUNT(); // COUNT
    WD963(); // WD963
    WDE8E(); // WDE8E
    Push(pp_LSCAN); // LSCAN
    Push(pp_WDEDC + i * 7); // WDEDC I 7 * +
    OVER(); // OVER
    Push((Read16(Pop())&0xFF) + 1); //  C@ 1+
    CMOVE_2(); // CMOVE_2
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xdf90: WORD 'WDF92' codep=0x224c wordp=0xdf92 params=1 returns=2
// ================================================

void WDF92() // WDF92
{
  Push(Pop() * 7 + pp_WDEDC); //  7 * WDEDC +
  COUNT(); // COUNT
}


// ================================================
// 0xdf9e: WORD '1SYL' codep=0x224c wordp=0xdfa7 params=0 returns=0
// ================================================
// entry

void _1SYL() // 1SYL
{
  Push(0);
  Push(0x0010);
  RRND(); // RRND
  WDF92(); // WDF92
  Pop(); // DROP
  Push(Pop() - 1); //  1-
  PAD(); // PAD
  _do__ex_(); // $!
}


// ================================================
// 0xdfbb: WORD 'WDFBD' codep=0x224c wordp=0xdfbd
// ================================================

void WDFBD() // WDFBD
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
  Push(Read16(0x65e1+WD875.offset)&0xFF); // WD875<IFIELD> C@
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
    WDEBE(); // WDEBE
    Push(Pop() * i); //  I *
    Push(0x0010);
    MOD(); // MOD
    WDF92(); // WDF92
    WDE9E(); // WDE9E
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
  PAD(); // PAD
  COUNT(); // COUNT
  _dash_TRAILING(); // -TRAILING
}


// ================================================
// 0xe003: WORD 'WE005' codep=0x224c wordp=0xe005
// ================================================

void WE005() // WE005
{
  Push(1);
  Push(pp_LINE_dash_CO); // LINE-CO
  Store_2(); // !_2
  CTINIT(); // CTINIT
  Push(0x5963); Push(0x0002); // 'TRANSMITTING:'
  WD80E(); // WD80E
  DrawTTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
}


// ================================================
// 0xe01f: WORD 'WE021' codep=0x224c wordp=0xe021 params=0 returns=0
// ================================================

void WE021() // WE021
{
  Push(!Read16(cc_WD935)); // WD935 NOT
  Push(Read16(pp_P_dash_POSTU)); // P-POSTU @
  Push(4);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  WE005(); // WE005
  Push(0x597d); Push(0x0002); // 'FAREWELL. WE WILL MEET AGAIN.'
  WD80E(); // WD80E
  DrawTTY(); // .TTY
}


// ================================================
// 0xe041: WORD 'WE043' codep=0x224c wordp=0xe043 params=0 returns=1
// ================================================

void WE043() // WE043
{
  Push(Read16(cc_WD9F7) & Read16(cc_WD935)); // WD9F7 WD935 AND
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
  Push(Read16(pp_WDA55)); // WDA55 @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe069: WORD 'WE06B' codep=0x224c wordp=0xe06b params=0 returns=0
// ================================================

void WE06B() // WE06B
{
  Push(pp_TERMINA); // TERMINA
  ON_2(); // ON_2
  Push(pp__pe_TALK); // %TALK
  _099(); // 099
  WE021(); // WE021
  Push(0xae81); // 'CEX+WAX'
  Push(pp__i_EXTERN); // 'EXTERN
  Store_2(); // !_2
}


// ================================================
// 0xe07f: WORD 'WE081' codep=0x224c wordp=0xe081
// ================================================

void WE081() // WE081
{
  unsigned short int a;
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
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
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    Pop(); // DROP
    GetColor(WHITE);
  }
  StoreCOLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  WD806(); // WD806
  D_plus_(); // D+
  do
  {
    WD806(); // WD806
    _2OVER(); // 2OVER
    D_gt_(); // D>
    _i_KEY(); // 'KEY
    Push(Pop()==0x0020?1:0); //  0x0020 =
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Push(a); // R>
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
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
}


// ================================================
// 0xe0df: WORD 'WE0E1' codep=0x224c wordp=0xe0e1
// ================================================

void WE0E1() // WE0E1
{
  Push(0x2710); Push(0x0000);
  WE081(); // WE081
  Pop(); // DROP
  WE06B(); // WE06B
}


// ================================================
// 0xe0ef: WORD 'ACASE' codep=0x4b3b wordp=0xe0f9
// ================================================

void ACASE() // ACASE
{
  switch(Pop()) // ACASE
  {
  case 0:
    _plus__ex_EDL(); // +!EDL
    break;
  case 1:
    WE0E1(); // WE0E1
    break;
  default:
    Pop(); // DROP
    break;

  }
}

// ================================================
// 0xe105: WORD 'WE107' codep=0x224c wordp=0xe107 params=0 returns=0
// ================================================

void WE107() // WE107
{
  WDB1A(); // WDB1A
  Push(0x65e1+WD82F.offset); // WD82F<IFIELD>
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
// 0xe13b: WORD 'WE13D' codep=0x224c wordp=0xe13d
// ================================================

void WE13D() // WE13D
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
// 0xe16b: WORD 'WE16D' codep=0x224c wordp=0xe16d
// ================================================

void WE16D() // WE16D
{
  unsigned short int i, imax;
  WE13D(); // WE13D
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
// 0xe1bf: WORD 'WE1C1' codep=0x224c wordp=0xe1c1 params=2 returns=2
// ================================================

void WE1C1() // WE1C1
{
  Push(Pop() - 1); //  1-
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
}


// ================================================
// 0xe1cb: WORD 'WE1CD' codep=0x224c wordp=0xe1cd params=1 returns=1
// ================================================

void WE1CD() // WE1CD
{
  Push(Pop() + Read16(pp_CTX)); //  CTX @ +
  Push(0x0026);
  _st_(); // <
}


// ================================================
// 0xe1db: WORD 'CTSCROLL' codep=0x224c wordp=0xe1e8
// ================================================
// entry

void CTSCROLL() // CTSCROLL
{
  Push(1);
  Push(pp_LINE_dash_CO); // LINE-CO
  _plus__ex__2(); // +!_2
  Push(Read16(pp_LINE_dash_CO)); // LINE-CO @
  Push(Read16(pp_WLINES)); // WLINES @
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0x4e20); Push(0x0000);
    WE081(); // WE081
    Push(pp_LINE_dash_CO); // LINE-CO
    _099(); // 099
  }
  WUP(); // WUP
}


// ================================================
// 0xe20c: WORD 'WE20E' codep=0x224c wordp=0xe20e params=1 returns=1
// ================================================

void WE20E() // WE20E
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(Pop()==0x002e?1:0); //  0x002e =
  Push(Read16(a)); // R@
  Push(Pop()==0x003f?1:0); //  0x003f =
  Push(Pop() | Pop()); // OR
  Push(Read16(a)); // R@
  Push(Pop()==0x002c?1:0); //  0x002c =
  Push(Pop() | Pop()); // OR
  Push(Pop() | (a==0x0027?1:0)); //  R> 0x0027 = OR
}


// ================================================
// 0xe238: WORD 'WE23A' codep=0x224c wordp=0xe23a params=2 returns=0
// ================================================

void WE23A() // WE23A
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    WE1CD(); // WE1CD
    Push(Pop()==0?1:0); //  0=
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
    Push(Read16(Pop())&0xFF); //  C@
    WE20E(); // WE20E
    Push(!(Pop() | (Read16(pp_CTX)==0?1:0))); //  CTX @ 0= OR NOT
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
// 0xe27e: WORD 'WE280' codep=0x1d29 wordp=0xe280
// ================================================
// 0xe280: db 0x00 0x01 0x01 0x00 0x01 0x01 0x01 0x01 0x01 0x00 0x01 0x01 0x00 0x00 0x00 0x00 0x00 0x00 0x01 0x01 0x00 0x00 0x00 0x00 0x00 '                         '

// ================================================
// 0xe299: WORD 'WE29B' codep=0x224c wordp=0xe29b params=0 returns=2
// ================================================

void WE29B() // WE29B
{
  Push(pp_WDA07); // WDA07
  COUNT(); // COUNT
}


// ================================================
// 0xe2a1: WORD 'WE2A3' codep=0x224c wordp=0xe2a3 params=0 returns=2
// ================================================

void WE2A3() // WE2A3
{
  Push(pp_WDA19); // WDA19
  COUNT(); // COUNT
}


// ================================================
// 0xe2a9: WORD 'WE2AB' codep=0x224c wordp=0xe2ab params=0 returns=2
// ================================================

void WE2AB() // WE2AB
{
  Push(pp_WDA2B); // WDA2B
  COUNT(); // COUNT
}


// ================================================
// 0xe2b1: WORD 'WE2B3' codep=0x224c wordp=0xe2b3 params=0 returns=2
// ================================================

void WE2B3() // WE2B3
{
  SET_STR_AS_PARAM("ISS");
  WE23A(); // WE23A
  Push(pp_WDA3D); // WDA3D
  COUNT(); // COUNT
}


// ================================================
// 0xe2c1: WORD 'WE2C3' codep=0x224c wordp=0xe2c3 params=2 returns=2
// ================================================

void WE2C3() // WE2C3
{
  while(1)
  {
    OVER(); // OVER
    Push(!((Read16(Pop())&0xFF)==0x0029?1:0)); //  C@ 0x0029 = NOT
    OVER(); // OVER
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) return;
    WE1C1(); // WE1C1
  }
}


// ================================================
// 0xe2e1: WORD 'WE2E3' codep=0x224c wordp=0xe2e3 params=0 returns=1
// ================================================

void WE2E3() // WE2E3
{
  Push(!Read16(cc_WD935)); // WD935 NOT
  if (Pop() != 0)
  {
    WE1C1(); // WE1C1
    Push(Read16(pp_WD8F7)==9?1:0); // WD8F7 @ 9 =
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
      WE2C3(); // WE2C3
      Push2Words("NULL");
    }
  }
  Push(0);
}


// ================================================
// 0xe303: WORD 'WE305' codep=0x224c wordp=0xe305 params=0 returns=2
// ================================================

void WE305() // WE305
{
  Push(0x59a7); Push(0x0002); // 'YOURSELVES'
  WD80E(); // WD80E
}


// ================================================
// 0xe30f: WORD 'WE311' codep=0x224c wordp=0xe311 params=0 returns=2
// ================================================

void WE311() // WE311
{
  SET_STR_AS_PARAM("OTHER");
  WE23A(); // WE23A
  SET_STR_AS_PARAM("BEINGS");
}


// ================================================
// 0xe326: WORD 'WE328' codep=0x224c wordp=0xe328 params=0 returns=2
// ================================================

void WE328() // WE328
{
  SET_STR_AS_PARAM("THE");
  WE23A(); // WE23A
  SET_STR_AS_PARAM("PAST");
}


// ================================================
// 0xe339: WORD 'WE33B' codep=0x224c wordp=0xe33b params=0 returns=2
// ================================================

void WE33B() // WE33B
{
  SET_STR_AS_PARAM("TRADE");
}


// ================================================
// 0xe345: WORD 'WE347' codep=0x224c wordp=0xe347 params=2 returns=3
// ================================================

void WE347() // WE347
{
  WE1C1(); // WE1C1
  Push(0);
}


// ================================================
// 0xe34d: WORD 'WE34F' codep=0x224c wordp=0xe34f params=1 returns=2
// ================================================

void WE34F() // WE34F
{
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("ESHVEY");
    return;
  }
  SET_STR_AS_PARAM("ESHVARA");
}


// ================================================
// 0xe36c: WORD 'WE36E' codep=0x224c wordp=0xe36e params=0 returns=1
// ================================================

void WE36E() // WE36E
{
  Push(Read16(pp_WD8DD)==2?1:0); // WD8DD @ 2 =
}


// ================================================
// 0xe378: WORD 'WE37A' codep=0x224c wordp=0xe37a params=0 returns=2
// ================================================

void WE37A() // WE37A
{
  WE36E(); // WE36E
  WE34F(); // WE34F
}


// ================================================
// 0xe380: WORD 'WE382' codep=0x224c wordp=0xe382 params=0 returns=2
// ================================================

void WE382() // WE382
{
  WE36E(); // WE36E
  Push(!Pop()); //  NOT
  WE34F(); // WE34F
}


// ================================================
// 0xe38a: WORD '?S' codep=0x4b3b wordp=0xe391
// ================================================

void IsS() // ?S
{
  switch(Pop()) // ?S
  {
  case 7:
    WE305(); // WE305
    break;
  case 8:
    WE311(); // WE311
    break;
  case 10:
    WE328(); // WE328
    break;
  case 11:
    WE33B(); // WE33B
    break;
  default:
    WE347(); // WE347
    break;

  }
}

// ================================================
// 0xe3a5: WORD 'WE3A7' codep=0x224c wordp=0xe3a7
// ================================================

void WE3A7() // WE3A7
{
  Push(Read16(pp_WD8F7)); // WD8F7 @
  IsS(); // ?S case
}


// ================================================
// 0xe3af: WORD 'SPL' codep=0x4b3b wordp=0xe3b7
// ================================================

void SPL() // SPL
{
  switch(Pop()) // SPL
  {
  case 42:
    WE2AB(); // WE2AB
    break;
  case 38:
    WE2B3(); // WE2B3
    break;
  case 37:
    WE29B(); // WE29B
    break;
  case 47:
    WE3A7(); // WE3A7
    break;
  case 40:
    WE2E3(); // WE2E3
    break;
  case 41:
    WE347(); // WE347
    break;
  case 43:
    WE2A3(); // WE2A3
    break;
  case 35:
    WE37A(); // WE37A
    break;
  case 94:
    WE382(); // WE382
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xe3df: WORD 'WE3E1' codep=0x224c wordp=0xe3e1
// ================================================

void WE3E1() // WE3E1
{
  OVER(); // OVER
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
  _0_gt_(); // 0>
  Push(Pop() * Pop()); // *
  SPL(); // SPL case
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  WE23A(); // WE23A
  WE1C1(); // WE1C1
}


// ================================================
// 0xe3fb: WORD '(PHRASE>CT)' codep=0x224c wordp=0xe40b
// ================================================
// entry

void _ro_PHRASE_gt_CT_rc_() // (PHRASE>CT)
{
  Push(Read16(regsp)); // DUP
  Push(pp_WD90B); // WD90B
  Store_2(); // !_2
  CTINIT(); // CTINIT
  Push(0);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  Push(-1);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  Push(Read16(pp_CTCOLOR)); // CTCOLOR @
  StoreCOLOR(); // !COLOR
  CTSCROLL(); // CTSCROLL
  do
  {
    WE16D(); // WE16D
    WE3E1(); // WE3E1
    WE043(); // WE043
    if (Pop() != 0)
    {
      WDFBD(); // WDFBD
    }
    WE23A(); // WE23A
    Push(1);
    Push(pp_CTX); // CTX
    _plus__ex__2(); // +!_2
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe447: WORD 'WE449' codep=0x224c wordp=0xe449
// ================================================

void WE449() // WE449
{
  Push(0x65e1+PHRASE_do_.offset); // PHRASE$<IFIELD>
  COUNT(); // COUNT
  WD963(); // WD963
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  Push(Pop() - 1); //  1-
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
}


// ================================================
// 0xe459: WORD 'WE45B' codep=0x224c wordp=0xe45b
// ================================================

void WE45B() // WE45B
{
  WE449(); // WE449
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    Push(0x2ee0); Push(0x0000);
    WE081(); // WE081
    IOPEN(); // IOPEN
    WE449(); // WE449
    ICLOSE(); // ICLOSE
  }
  CTSCROLL(); // CTSCROLL
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe479: WORD 'WE47B' codep=0x224c wordp=0xe47b params=0 returns=0
// ================================================

void WE47B() // WE47B
{
  Push(pp_WD8E1); // WD8E1
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  WE107(); // WE107
  WDB1A(); // WDB1A
  Push((Read16(0x65e1+WD82A.offset)&0xFF) + 1); // WD82A<IFIELD> C@ 1+
  Push(0x65e1+WD82A.offset); // WD82A<IFIELD>
  C_ex__2(); // C!_2
  IOPEN(); // IOPEN
  _i_KEY(); // 'KEY
  Pop(); // DROP
  WE45B(); // WE45B
}


// ================================================
// 0xe49d: WORD 'WE49F' codep=0x224c wordp=0xe49f
// ================================================

void WE49F() // WE49F
{
  unsigned short int a;
  Push(Read16(pp_WD8DD)); // WD8DD @
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() + pp_WE280)&0xFF); //  WE280 + C@
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(0xd9f7); // 'WD9F7'
  Store_2(); // !_2
  ORGIA(); // ORGIA
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_ORIGIN); // (ORIGIN
  _1_dot_5_ex__2(); // 1.5!_2
  Push(a); // R>
  if (Pop() == 0) return;
  WDF4E(); // WDF4E
}


// ================================================
// 0xe4c7: WORD 'WE4C9' codep=0x224c wordp=0xe4c9
// ================================================

void WE4C9() // WE4C9
{
  unsigned short int a, b;
  Push2Words("*MESS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  IsNULL(); // ?NULL
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    Push(0x59be); Push(0x0002); // 'NO RECORDINGS'
    WD80E(); // WD80E
    DrawTTY(); // .TTY
  } else
  {
    IPREV(); // IPREV
    Push(Read16(pp_WD8DD)); // WD8DD @
    a = Pop(); // >R
    Push(1);
    Push(0xbe74); // '?COMS'
    MODULE(); // MODULE
    Push(pp_WD8DD); // WD8DD
    Store_2(); // !_2
    WE49F(); // WE49F
    Push(0xd935); // 'WD935'
    ON_2(); // ON_2
    Push(pp_WD8EB); // WD8EB
    GetEXECUTE(); // @EXECUTE
    Push(pp_CONTEXT_3); // CONTEXT_3
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop())); //  @
    b = Pop(); // >R
    ON_2(); // ON_2
    do
    {
      INEXT(); // INEXT
      GetINST_dash_S(); // @INST-S
      Push(Pop()==Read16(pp_WD8DD)?1:0); //  WD8DD @ =
      if (Pop() != 0)
      {
        Push(0x65e1+WD87F.offset); // WD87F<IFIELD>
        _1_dot_5_at_(); // 1.5@
        Push(pp_WD8E1); // WD8E1
        _1_dot_5_ex__2(); // 1.5!_2
        WDB1A(); // WDB1A
        IOPEN(); // IOPEN
        WE45B(); // WE45B
        Push(0xd4c0); Push(0x0001);
        Push(0xbe96); // 'CPAUS'
        MODULE(); // MODULE
      }
      IsLAST(); // ?LAST
      IsQUIT(); // ?QUIT
      Push(Pop() | Pop()); // OR
    } while(Pop() == 0);
    Push(b); // R>
    Push(pp_CONTEXT_3); // CONTEXT_3
    Store_2(); // !_2
    Push(0xd935); // 'WD935'
    _099(); // 099
    Push(a); // R>
    Push(pp_WD8DD); // WD8DD
    Store_2(); // !_2
    WE49F(); // WE49F
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
  GetColor(BLACK);
  Push(2);
  DrawON(); // .ON
}


// ================================================
// 0xe561: WORD 'WE563' codep=0x1d29 wordp=0xe563
// ================================================
// 0xe563: db 0x00 0x00 '  '

// ================================================
// 0xe565: WORD 'WE567' codep=0x224c wordp=0xe567
// ================================================

void WE567() // WE567
{
  CTINIT(); // CTINIT
  Push(0x59d8); Push(0x0002); // 'RECEIVING:'
  WD80E(); // WD80E
  DrawTTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
  Push(1);
  Push(pp_LINE_dash_CO); // LINE-CO
  Store_2(); // !_2
  WDB3E(); // WDB3E
  A_gt_ORIGINATO(); // A>ORIGINATO
  WDE07(); // WDE07
  WE47B(); // WE47B
  Push(Read16(pp_WD8FF)); // WD8FF @
  Push(7);
  Push(0x000c);
  WITHIN(); // WITHIN
  Push(Read16(pp_WD8DD)); // WD8DD @
  Push(Read16(regsp)); // DUP
  Push(Pop()==0x0013?1:0); //  0x0013 =
  SWAP(); // SWAP
  Push(Pop()==4?1:0); //  4 =
  Push(Pop() | Pop()); // OR
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(pp_WD8E1); // WD8E1
  _1_dot_5_at_(); // 1.5@
  Push(Read16(pp_WD8DD)); // WD8DD @
  Push(0);
  Push(0xbe74); // '?COMS'
  MODULE(); // MODULE
}


// ================================================
// 0xe5bf: WORD 'WE5C1' codep=0x1d29 wordp=0xe5c1
// ================================================
// 0xe5c1: db 0x00 0x01 0x01 0x01 0x01 0x01 0x00 0x00 0x00 0x01 0x01 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x01 0x00 '                         '

// ================================================
// 0xe5da: WORD 'WE5DC' codep=0x224c wordp=0xe5dc params=0 returns=1
// ================================================

void WE5DC() // WE5DC
{
  Push(Read16(Read16(pp_WD8DD) + pp_WE5C1)&0xFF); // WD8DD @ WE5C1 + C@
}


// ================================================
// 0xe5e8: WORD 'WE5EA' codep=0x224c wordp=0xe5ea params=0 returns=1
// ================================================

void WE5EA() // WE5EA
{
  WD7F6(); // WD7F6
  Push(8);
  _eq_SPECIE(); // =SPECIE
  Push(0x000b);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe5fc: WORD 'WE5FE' codep=0x224c wordp=0xe5fe params=1 returns=0
// ================================================

void WE5FE() // WE5FE
{
  Push(5);
  Push(Read16(cc_MPS)); // MPS
  _star__slash_(); // */
  Push(pp__pe_TALK); // %TALK
  Store_2(); // !_2
}


// ================================================
// 0xe60a: WORD 'WE60C' codep=0x224c wordp=0xe60c
// ================================================

void WE60C() // WE60C
{
  Push(5);
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe612: WORD 'WE614' codep=0x224c wordp=0xe614
// ================================================

void WE614() // WE614
{
  Push(0xfffb);
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe61c: WORD 'WE61E' codep=0x224c wordp=0xe61e
// ================================================

void WE61E() // WE61E
{
  Push(0x000a);
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe626: WORD 'WE628' codep=0x224c wordp=0xe628
// ================================================

void WE628() // WE628
{
  Push(0xfff6);
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe630: WORD 'WE632' codep=0x224c wordp=0xe632
// ================================================

void WE632() // WE632
{
  Push(Read16(pp_WD91B)); // WD91B @
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
// 0xe64a: WORD 'WE64C' codep=0x224c wordp=0xe64c
// ================================================

void WE64C() // WE64C
{
  Push(0x0064);
  _plus__ex_EDL(); // +!EDL
  Push(0x5184); // '?FIRED-'
  _099(); // 099
}


// ================================================
// 0xe65a: WORD 'WE65C' codep=0x224c wordp=0xe65c
// ================================================

void WE65C() // WE65C
{
  WDB30(); // WDB30
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe662: WORD 'WE664' codep=0x224c wordp=0xe664
// ================================================

void WE664() // WE664
{
  WDB22(); // WDB22
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe66a: WORD 'WE66C' codep=0x224c wordp=0xe66c params=0 returns=1
// ================================================

void WE66C() // WE66C
{
  Push(Read16(pp_WD8DD)==0x000b?1:0); // WD8DD @ 0x000b =
}


// ================================================
// 0xe678: WORD 'WE67A' codep=0x224c wordp=0xe67a params=0 returns=1
// ================================================

void WE67A() // WE67A
{
  Push(Read16(pp_WD8DD)==0x0013?1:0); // WD8DD @ 0x0013 =
}


// ================================================
// 0xe686: WORD 'WE688' codep=0x224c wordp=0xe688
// ================================================

void WE688() // WE688
{
  WDB5F(); // WDB5F
  _plus__ex_EDL(); // +!EDL
  Push(pp_WD8EF); // WD8EF
  Push(Read16(pp_P_dash_POSTU)); // P-POSTU @
  OVER(); // OVER
  Push(Read16(Pop())); //  @
  Push(Pop() | Pop()); // OR
  SWAP(); // SWAP
  Store_2(); // !_2
}


// ================================================
// 0xe69e: WORD 'WE6A0' codep=0x224c wordp=0xe6a0
// ================================================

void WE6A0() // WE6A0
{
  WDB5F(); // WDB5F
  _plus__ex_EDL(); // +!EDL
  Push(0xd8e7); // 'WD8E7'
  _099(); // 099
}


// ================================================
// 0xe6ac: WORD 'WE6AE' codep=0x224c wordp=0xe6ae
// ================================================

void WE6AE() // WE6AE
{
  WDB5F(); // WDB5F
  Push(Read16(pp_WD8FB)&0xFF); // WD8FB C@
  _slash_(); // /
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xe6ba: WORD 'WE6BC' codep=0x224c wordp=0xe6bc params=0 returns=0
// ================================================

void WE6BC() // WE6BC
{
  Push(Read16(cc_WDA5D)); // WDA5D
  if (Pop() == 0) return;
  WDB5F(); // WDB5F
  Push(Read16(pp_WD8FB)&0xFF); // WD8FB C@
  _slash_(); // /
  Push(Pop() >> 1); //  2/
  _plus__ex_EDL(); // +!EDL
  Push(0xda5d); // 'WDA5D'
  _099(); // 099
}


// ================================================
// 0xe6d6: WORD 'WE6D8' codep=0x224c wordp=0xe6d8
// ================================================

void WE6D8() // WE6D8
{
  A_gt_ORIGINATO(); // A>ORIGINATO
  ORIGINATOR_gt_(); // ORIGINATOR>
  Push(Read16(0x65e1+WD843.offset)&0xFF); // WD843<IFIELD> C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe6e4: WORD 'WE6E6' codep=0x224c wordp=0xe6e6
// ================================================

void WE6E6() // WE6E6
{
  WE6D8(); // WE6D8
  ROT(); // ROT
  ROT(); // ROT
  _star__slash_(); // */
  Push(0x0064);
  MIN(); // MIN
  WE5FE(); // WE5FE
}


// ================================================
// 0xe6f8: WORD 'WE6FA' codep=0x224c wordp=0xe6fa
// ================================================

void WE6FA() // WE6FA
{
  Push(3);
  Push(2);
  WE6E6(); // WE6E6
}


// ================================================
// 0xe702: WORD 'WE704' codep=0x224c wordp=0xe704
// ================================================

void WE704() // WE704
{
  Push(2);
  Push(1);
  WE6E6(); // WE6E6
}


// ================================================
// 0xe70c: WORD 'WE70E' codep=0x224c wordp=0xe70e
// ================================================

void WE70E() // WE70E
{
  Push(5);
  Push(2);
  WE6E6(); // WE6E6
}


// ================================================
// 0xe716: WORD 'WE718' codep=0x224c wordp=0xe718
// ================================================

void WE718() // WE718
{
  Push(1);
  Push(1);
  WE6E6(); // WE6E6
}


// ================================================
// 0xe720: WORD 'WE722' codep=0x224c wordp=0xe722
// ================================================

void WE722() // WE722
{
  Push(1);
  Push(2);
  WE6E6(); // WE6E6
}


// ================================================
// 0xe72a: WORD 'WE72C' codep=0x224c wordp=0xe72c params=0 returns=0
// ================================================

void WE72C() // WE72C
{
  Push(0x0019);
  WE5FE(); // WE5FE
}


// ================================================
// 0xe734: WORD 'WE736' codep=0x224c wordp=0xe736 params=0 returns=0
// ================================================

void WE736() // WE736
{
  Push(0x0064);
  WE5FE(); // WE5FE
}


// ================================================
// 0xe73e: WORD 'WE740' codep=0x224c wordp=0xe740 params=0 returns=0
// ================================================

void WE740() // WE740
{
  Push(pp__pe_TALK); // %TALK
  _099(); // 099
}


// ================================================
// 0xe746: WORD 'WE748' codep=0x224c wordp=0xe748 params=0 returns=0
// ================================================

void WE748() // WE748
{
  Push(0x000a);
  WE5FE(); // WE5FE
}


// ================================================
// 0xe750: WORD 'WE752' codep=0x224c wordp=0xe752 params=0 returns=0
// ================================================

void WE752() // WE752
{
  Push(0x0064);
  Push(pp__pe_TALK); // %TALK
  Store_2(); // !_2
}


// ================================================
// 0xe75c: WORD 'WE75E' codep=0x224c wordp=0xe75e
// ================================================

void WE75E() // WE75E
{
  CTINIT(); // CTINIT
  Push(0x59ef); Push(0x0002); // 'COMMANDER,'
  WD80E(); // WD80E
  DrawTTY(); // .TTY
}


// ================================================
// 0xe76c: WORD 'WE76E' codep=0x224c wordp=0xe76e
// ================================================

void WE76E() // WE76E
{
  SET_STR_AS_PARAM("THEY'VE ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xe77d: WORD 'WE77F' codep=0x224c wordp=0xe77f
// ================================================

void WE77F() // WE77F
{
  Push(0x5192); // '?A-SHIE'
  ON_2(); // ON_2
  WE75E(); // WE75E
  WE76E(); // WE76E
  Push(0x5a06); Push(0x0002); // 'RAISED THEIR SHIELDS.'
  WD80E(); // WD80E
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe795: WORD 'WE797' codep=0x224c wordp=0xe797
// ================================================

void WE797() // WE797
{
  Push(0x5192); // '?A-SHIE'
  _099(); // 099
  WE75E(); // WE75E
  WE76E(); // WE76E
  Push(0x5a28); Push(0x0002); // 'LOWERED THEIR SHIELDS.'
  WD80E(); // WD80E
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe7ad: WORD 'WE7AF' codep=0x224c wordp=0xe7af
// ================================================

void WE7AF() // WE7AF
{
  Push(0x51a0); // '?A-WEAP'
  ON_2(); // ON_2
  WE75E(); // WE75E
  WE76E(); // WE76E
  Push(0x5a4b); Push(0x0002); // 'ARMED THEIR WEAPONS.'
  WD80E(); // WD80E
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe7c5: WORD 'WE7C7' codep=0x224c wordp=0xe7c7
// ================================================

void WE7C7() // WE7C7
{
  Push(0x51a0); // '?A-WEAP'
  _099(); // 099
  WE75E(); // WE75E
  WE76E(); // WE76E
  Push(0x5a6c); Push(0x0002); // 'DIS-ARMED THEIR WEAPONS.'
  WD80E(); // WD80E
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe7dd: WORD 'WE7DF' codep=0x224c wordp=0xe7df
// ================================================

void WE7DF() // WE7DF
{
  Push(0x52bd); // '?CALLED'
  ON_2(); // ON_2
  WE75E(); // WE75E
  Push(0x5a91); Push(0x0002); // 'I'M PICKING UP AN ALIEN DISTRESS CALL.'
  WD80E(); // WD80E
  DrawTTY(); // .TTY
}


// ================================================
// 0xe7f3: WORD 'WE7F5' codep=0x224c wordp=0xe7f5
// ================================================

void WE7F5() // WE7F5
{
  Push(Read16(pp__i__plus_VESS)); // '+VESS @
  MODULE(); // MODULE
  Push(0x52bd); // '?CALLED'
  _099(); // 099
  WE75E(); // WE75E
  Push(0x5ac4); Push(0x0002); // 'MORE ALIEN SHIPS HAVE WARPED IN.'
  WD80E(); // WD80E
  DrawTTY(); // .TTY
}


// ================================================
// 0xe80f: WORD 'WE811' codep=0x224c wordp=0xe811
// ================================================

void WE811() // WE811
{
  Push(0xda03); // 'WDA03'
  ON_2(); // ON_2
  WE75E(); // WE75E
  Push(0x5af1); Push(0x0002); // 'WE'RE BEING SCANNED.'
  WD80E(); // WD80E
  DrawTTY(); // .TTY
}


// ================================================
// 0xe825: WORD 'WE827' codep=0x224c wordp=0xe827
// ================================================

void WE827() // WE827
{
  Push(pp_TERMINA); // TERMINA
  _099(); // 099
  CTERASE(); // CTERASE
  Push(1);
  WE567(); // WE567
  Push(1);
  Push(pp_WD91B); // WD91B
  _plus__ex__2(); // +!_2
  WDD35(); // WDD35
  WDD15(); // WDD15
  Push(2);
  Push(pp_WDA65); // WDA65
  Store_2(); // !_2
  WDE61(); // WDE61
  Push(Read16(pp_WE563)); // WE563 @
  if (Pop() != 0)
  {
    Push(5);
    Push(0);
    DrawABTN(); // .ABTN
  }
  WE632(); // WE632
}


// ================================================
// 0xe855: WORD 'WE857' codep=0x224c wordp=0xe857
// ================================================

void WE857() // WE857
{
  Push(pp_TERMINA); // TERMINA
  _099(); // 099
  Push(2);
  WE567(); // WE567
  Push(1);
  Push(pp_WD903); // WD903
  _plus__ex__2(); // +!_2
  WDD15(); // WDD15
}


// ================================================
// 0xe869: WORD 'WE86B' codep=0x224c wordp=0xe86b
// ================================================

void WE86B() // WE86B
{
  Push(Read16(pp_WD8F7)); // WD8F7 @
  WE567(); // WE567
  Push(1);
  Push(pp_WD903); // WD903
  _plus__ex__2(); // +!_2
  WDD15(); // WDD15
  Push(pp_WD8F7); // WD8F7
  _099(); // 099
}


// ================================================
// 0xe87f: WORD 'WE881' codep=0x224c wordp=0xe881
// ================================================

void WE881() // WE881
{
  Push(0x000d);
  WE567(); // WE567
  Push(1);
  Push(pp_WD903); // WD903
  _plus__ex__2(); // +!_2
  WDD15(); // WDD15
}


// ================================================
// 0xe891: WORD 'WE893' codep=0x224c wordp=0xe893
// ================================================

void WE893() // WE893
{
  Push(0x000e);
  WE567(); // WE567
  Push(pp_WD8E1); // WD8E1
  _1_dot_5_at_(); // 1.5@
  Push(pp_WDA4F); // WDA4F
  _1_dot_5_ex__2(); // 1.5!_2
  Push(1);
  Push(pp_WD903); // WD903
  _plus__ex__2(); // +!_2
  WDD35(); // WDD35
  WDD15(); // WDD15
  Push(0xd92d); // 'WD92D'
  ON_2(); // ON_2
  Push(0x000a);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  Push(1);
  Push(pp_WD91B); // WD91B
  Store_2(); // !_2
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xe8c5: WORD 'WE8C7' codep=0x224c wordp=0xe8c7
// ================================================

void WE8C7() // WE8C7
{
  Push(6);
  WE567(); // WE567
  WDD35(); // WDD35
  WDD15(); // WDD15
  Push(1);
  Push(pp_WD91B); // WD91B
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe8d7: WORD 'WE8D9' codep=0x224c wordp=0xe8d9
// ================================================

void WE8D9() // WE8D9
{
  Push(0x000f);
  WE567(); // WE567
  WE06B(); // WE06B
}


// ================================================
// 0xe8e3: WORD 'WE8E5' codep=0x224c wordp=0xe8e5 params=0 returns=0
// ================================================

void WE8E5() // WE8E5
{
  Push(0xd9ff); // 'WD9FF'
  ON_2(); // ON_2
  Push(pp_TERMINA); // TERMINA
  _099(); // 099
}


// ================================================
// 0xe8f1: WORD '(?RACE)' codep=0x1d29 wordp=0xe8fd
// ================================================
// 0xe8fd: db 0x00 0x01 0x01 0x00 0x01 0x01 0x01 0x01 0x01 0x00 0x01 0x01 0x00 0x00 0x00 0x00 0x00 0x00 0x01 0x00 0x00 0x00 0x01 0x00 0x00 '                         '

// ================================================
// 0xe916: WORD 'WE918' codep=0x224c wordp=0xe918 params=0 returns=1
// ================================================

void WE918() // WE918
{
  Push(Read16(Read16(pp_WD8DD) + pp__ro__ask_RACE_rc_)&0xFF); // WD8DD @ (?RACE) + C@
}


// ================================================
// 0xe924: WORD 'WE926' codep=0x224c wordp=0xe926 params=0 returns=1
// ================================================

void WE926() // WE926
{
  Push(1);
  WDA8E(); // WDA8E
}


// ================================================
// 0xe92c: WORD 'WE92E' codep=0x224c wordp=0xe92e params=0 returns=1
// ================================================

void WE92E() // WE92E
{
  Push(2);
  WDA8E(); // WDA8E
}


// ================================================
// 0xe934: WORD 'WE936' codep=0x224c wordp=0xe936 params=0 returns=1
// ================================================

void WE936() // WE936
{
  Push(4);
  WDA8E(); // WDA8E
}


// ================================================
// 0xe93c: WORD 'WE93E' codep=0x224c wordp=0xe93e params=0 returns=1
// ================================================

void WE93E() // WE93E
{
  Push(8);
  WDA8E(); // WDA8E
}


// ================================================
// 0xe944: WORD 'WE946' codep=0x224c wordp=0xe946 params=0 returns=1
// ================================================

void WE946() // WE946
{
  Push(0x0010);
  WDA8E(); // WDA8E
}


// ================================================
// 0xe94e: WORD 'WE950' codep=0x224c wordp=0xe950 params=0 returns=1
// ================================================

void WE950() // WE950
{
  Push(Read16(pp__pe_TALK)); // %TALK @
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xe958: WORD 'WE95A' codep=0x224c wordp=0xe95a params=0 returns=1
// ================================================

void WE95A() // WE95A
{
  Push(Read16(pp_WD903)); // WD903 @
  Push(Read16(pp_WD91F)); // WD91F @
  _st_(); // <
  Push(!Pop()); //  NOT
}


// ================================================
// 0xe968: WORD 'WE96A' codep=0x224c wordp=0xe96a params=0 returns=1
// ================================================

void WE96A() // WE96A
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+WD848.offset)&0xFF); // WD848<IFIELD> C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe976: WORD 'WE978' codep=0x224c wordp=0xe978 params=0 returns=1
// ================================================

void WE978() // WE978
{
  Push(0);
  Push(0x02ee);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  Push(Read16(pp__n_VESS)); // #VESS @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(Read16(pp_AVCNT)); // AVCNT @
  Push(0x0014);
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe998: WORD 'WE99A' codep=0x224c wordp=0xe99a params=0 returns=1
// ================================================

void WE99A() // WE99A
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
// 0xe9ae: WORD 'WE9B0' codep=0x224c wordp=0xe9b0 params=0 returns=2
// ================================================

void WE9B0() // WE9B0
{
  Push(0);
  Push(0x0032);
  Push(Read16(pp__n_VESS) * 2 + 1); // #VESS @ 2* 1+
  _slash_(); // /
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
}


// ================================================
// 0xe9c6: WORD 'WE9C8' codep=0x224c wordp=0xe9c8 params=0 returns=1
// ================================================

void WE9C8() // WE9C8
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(Read16(pp__pe_TALK)); // %TALK @
  _st_(); // <
  Push(0);
  Push(4);
  RRND(); // RRND
  WDA86(); // WDA86
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  IsCHILD(); // ?CHILD
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
  WE926(); // WE926
  Push(Pop() | Pop()); // OR
  Push(Read16(pp__n_VESS)); // #VESS @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  Push(0x0032); Push(0x0000);
  WD806(); // WD806
  D_plus_(); // D+
  Push(pp_OK_dash_TALK); // OK-TALK
  _2_at_(); // 2@
  DMAX(); // DMAX
  Push(pp_OK_dash_TALK); // OK-TALK
  StoreD(); // D!
}


// ================================================
// 0xea12: WORD 'WEA14' codep=0x224c wordp=0xea14 params=0 returns=1
// ================================================

void WEA14() // WEA14
{
  Push(Read16(pp_WD91B)); // WD91B @
  Push(3);
  _st_(); // <
}


// ================================================
// 0xea1e: WORD 'WEA20' codep=0x224c wordp=0xea20 params=0 returns=1
// ================================================

void WEA20() // WEA20
{
  WD7FE(); // WD7FE
  Push(Read16(0x65e1+WD8A2.offset)); // WD8A2<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea2a: WORD 'WEA2C' codep=0x224c wordp=0xea2c params=1 returns=0
// ================================================

void WEA2C() // WEA2C
{
  WD7FE(); // WD7FE
  Push(0x65e1+WD8A2.offset); // WD8A2<IFIELD>
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea36: WORD 'WEA38' codep=0x224c wordp=0xea38 params=0 returns=1
// ================================================

void WEA38() // WEA38
{
  WEA20(); // WEA20
  Push(Pop() & 8); //  8 AND
  _0_gt_(); // 0>
}


// ================================================
// 0xea42: WORD 'WEA44' codep=0x224c wordp=0xea44 params=0 returns=1
// ================================================

void WEA44() // WEA44
{
  WEA20(); // WEA20
  Push(Read16(regsp)); // DUP
  Push(Pop() & 0x0010); //  0x0010 AND
  _gt_FLAG(); // >FLAG
  SWAP(); // SWAP
  Push(Pop() & 0xffef); //  0xffef AND
  WEA2C(); // WEA2C
}


// ================================================
// 0xea5c: WORD 'WEA5E' codep=0x224c wordp=0xea5e params=0 returns=1
// ================================================

void WEA5E() // WEA5E
{
  WEA20(); // WEA20
  Push(Pop() & 3); //  3 AND
  _0_gt_(); // 0>
}


// ================================================
// 0xea68: WORD 'WEA6A' codep=0x224c wordp=0xea6a params=0 returns=1
// ================================================

void WEA6A() // WEA6A
{
  WEA20(); // WEA20
  Push(Read16(regsp)); // DUP
  Push(Pop() & 0x0020); //  0x0020 AND
  _gt_FLAG(); // >FLAG
  SWAP(); // SWAP
  Push(Pop() & 0xffdf); //  0xffdf AND
  WEA2C(); // WEA2C
}


// ================================================
// 0xea82: WORD 'WEA84' codep=0x224c wordp=0xea84 params=0 returns=1
// ================================================

void WEA84() // WEA84
{
  Push(Read16(pp_WDA65)==1?1:0); // WDA65 @ 1 =
}


// ================================================
// 0xea8e: WORD 'WEA90' codep=0x224c wordp=0xea90 params=0 returns=1
// ================================================

void WEA90() // WEA90
{
  Push(Read16(pp_WDA65)==2?1:0); // WDA65 @ 2 =
}


// ================================================
// 0xea9a: WORD 'WEA9C' codep=0x224c wordp=0xea9c params=0 returns=1
// ================================================

void WEA9C() // WEA9C
{
  Push(pp_WD927); // WD927
  _2_at_(); // 2@
  WD806(); // WD806
  D_st_(); // D<
}


// ================================================
// 0xeaa6: WORD 'WEAA8' codep=0x224c wordp=0xeaa8 params=0 returns=1
// ================================================

void WEAA8() // WEAA8
{
  Push(pp_OK_dash_TALK); // OK-TALK
  _2_at_(); // 2@
  WD806(); // WD806
  D_st_(); // D<
}


// ================================================
// 0xeab2: WORD 'WEAB4' codep=0x224c wordp=0xeab4 params=0 returns=1
// ================================================

void WEAB4() // WEAB4
{
  Push((Read16(pp_WD8F3)&0xFF)==0x000d?1:0); // WD8F3 C@ 0x000d =
}


// ================================================
// 0xeac0: WORD 'WEAC2' codep=0x224c wordp=0xeac2 params=0 returns=1
// ================================================

void WEAC2() // WEAC2
{
  Push(Read16(pp_WD8F7)); // WD8F7 @
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xeaca: WORD 'WEACC' codep=0x224c wordp=0xeacc params=0 returns=1
// ================================================

void WEACC() // WEACC
{
  Push((Read16(pp_P_dash_POSTU) & Read16(pp_WD8EF))==0?1:0); // P-POSTU @ WD8EF @ AND 0=
}


// ================================================
// 0xeada: WORD 'WEADC' codep=0x224c wordp=0xeadc params=0 returns=1
// ================================================

void WEADC() // WEADC
{
  WE926(); // WE926
  WE96A(); // WE96A
  WDA86(); // WDA86
}


// ================================================
// 0xeae4: WORD 'WEAE6' codep=0x224c wordp=0xeae6 params=0 returns=1
// ================================================

void WEAE6() // WEAE6
{
  Push(Read16(pp__n_VESS)); // #VESS @
  Push(3);
  _st_(); // <
}


// ================================================
// 0xeaf0: WORD 'WEAF2' codep=0x224c wordp=0xeaf2 params=0 returns=1
// ================================================

void WEAF2() // WEAF2
{
  Push(Read16(pp_WD8FB)&0xFF); // WD8FB C@
  _0_gt_(); // 0>
  Push(Read16(pp_WD903)&0xFF); // WD903 C@
  _0_gt_(); // 0>
  Push(Pop() | Pop()); // OR
  Push(Read16(pp_TERMINA)); // TERMINA @
  WDA86(); // WDA86
  Push(Pop() & Read16(pp_WE563)); //  WE563 @ AND
}


// ================================================
// 0xeb0e: WORD 'WEB10' codep=0x224c wordp=0xeb10 params=0 returns=1
// ================================================

void WEB10() // WEB10
{
  Push(Read16(pp_TERMINA)); // TERMINA @
  WE946(); // WE946
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xeb1a: WORD 'WEB1C' codep=0x224c wordp=0xeb1c params=0 returns=1
// ================================================

void WEB1C() // WEB1C
{
  Push((Read16(pp_WD8DD)==0x000a?1:0) | Read16(pp_IsUF)); // WD8DD @ 0x000a = ?UF @ OR
}


// ================================================
// 0xeb2e: WORD 'WEB30' codep=0x224c wordp=0xeb30
// ================================================

void WEB30() // WEB30
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(Read16(pp_WD8DD)==0x0016?1:0); // WD8DD @ 0x0016 =
  if (Pop() != 0)
  {
    Push(0x0064);
  } else
  {
    Push(0x001e);
  }
  _st_(); // <
  Push(Pop() + 0x000d); //  0x000d +
  WDB3E(); // WDB3E
  A_gt_ORIGINATO(); // A>ORIGINATO
  WDE07(); // WDE07
  Push(!(Read16(pp_WD917)==0x000e?1:0)); // WD917 @ 0x000e = NOT
}


// ================================================
// 0xeb6e: WORD 'WEB70' codep=0x224c wordp=0xeb70 params=0 returns=1
// ================================================

void WEB70() // WEB70
{
  WEAF2(); // WEAF2
  WE96A(); // WE96A
  Push(Pop() & Pop()); // AND
  WE926(); // WE926
  Push(Pop() & Pop()); // AND
  Push(Pop() | Read16(cc_WD9FF)); //  WD9FF OR
}


// ================================================
// 0xeb80: WORD '<EDL>' codep=0xaccc wordp=0xeb8a
// ================================================

void _st_EDL_gt_() // <EDL> rule
{
  int b;

  b = 1;
  WEA38(); // WEA38
  b = b && Pop();
  WEB1C(); // WEB1C
  b = b && !Pop();
  WEA44(); // WEA44
  b = b && Pop();
  if (b)
  {
    WE60C(); // WE60C
  }

  b = 1;
  WEA38(); // WEA38
  b = b && Pop();
  WEB1C(); // WEB1C
  b = b && Pop();
  WEA44(); // WEA44
  b = b && Pop();
  if (b)
  {
    WE614(); // WE614
  }

  b = 1;
  WEA38(); // WEA38
  b = b && !Pop();
  WEB1C(); // WEB1C
  b = b && !Pop();
  WEA44(); // WEA44
  b = b && Pop();
  if (b)
  {
    WE614(); // WE614
  }

  b = 1;
  WEA38(); // WEA38
  b = b && !Pop();
  WEB1C(); // WEB1C
  b = b && Pop();
  WEA44(); // WEA44
  b = b && Pop();
  if (b)
  {
    WE60C(); // WE60C
  }

  b = 1;
  WEA5E(); // WEA5E
  b = b && Pop();
  WEB1C(); // WEB1C
  b = b && !Pop();
  WEA6A(); // WEA6A
  b = b && Pop();
  if (b)
  {
    WE61E(); // WE61E
  }

  b = 1;
  WEA5E(); // WEA5E
  b = b && Pop();
  WEB1C(); // WEB1C
  b = b && Pop();
  WEA6A(); // WEA6A
  b = b && Pop();
  if (b)
  {
    WE628(); // WE628
  }

  b = 1;
  WEA5E(); // WEA5E
  b = b && !Pop();
  WEB1C(); // WEB1C
  b = b && !Pop();
  WEA6A(); // WEA6A
  b = b && Pop();
  if (b)
  {
    WE628(); // WE628
  }

  b = 1;
  WEA5E(); // WEA5E
  b = b && !Pop();
  WEB1C(); // WEB1C
  b = b && Pop();
  WEA6A(); // WEA6A
  b = b && Pop();
  if (b)
  {
    WE61E(); // WE61E
  }

  b = 1;
  WEA84(); // WEA84
  b = b && Pop();
  WEACC(); // WEACC
  b = b && Pop();
  if (b)
  {
    WE688(); // WE688
  }

  b = 1;
  WEAB4(); // WEAB4
  b = b && Pop();
  if (b)
  {
    WE6AE(); // WE6AE
  }

  b = 1;
  WEAC2(); // WEAC2
  b = b && Pop();
  Push(Read16(cc_WDA5D)); // WDA5D
  b = b && Pop();
  if (b)
  {
    WE6BC(); // WE6BC
  }

  b = 1;
  Push(Read16(cc_WD8E7)); // WD8E7
  b = b && Pop();
  if (b)
  {
    WE6A0(); // WE6A0
  }

  b = 1;
  Push(Read16(cc_IsFIRED_dash_)); // ?FIRED-
  b = b && Pop();
  WEAF2(); // WEAF2
  b = b && !Pop();
  if (b)
  {
    WE64C(); // WE64C
  }
}

// 0xebc1: db 0x5c 0x5d '\]'
// 0xebd0: db 0x17 ' '

// ================================================
// 0xec18: WORD '<TALK>' codep=0xaccc wordp=0xec23
// ================================================

void _st_TALK_gt_() // <TALK> rule
{
  int b;

  b = 1;
  WE66C(); // WE66C
  b = b && Pop();
  if (b)
  {
    WE748(); // WE748
  }

  b = 1;
  WE67A(); // WE67A
  b = b && Pop();
  if (b)
  {
    WE752(); // WE752
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && !Pop();
  WEB10(); // WEB10
  b = b && !Pop();
  WE92E(); // WE92E
  b = b && Pop();
  WEA84(); // WEA84
  b = b && !Pop();
  if (b)
  {
    WE6FA(); // WE6FA
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && !Pop();
  WEB10(); // WEB10
  b = b && !Pop();
  WE92E(); // WE92E
  b = b && Pop();
  WEA84(); // WEA84
  b = b && Pop();
  if (b)
  {
    WE704(); // WE704
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && !Pop();
  WEB10(); // WEB10
  b = b && !Pop();
  WE936(); // WE936
  b = b && Pop();
  WEA84(); // WEA84
  b = b && !Pop();
  if (b)
  {
    WE718(); // WE718
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && !Pop();
  WEB10(); // WEB10
  b = b && !Pop();
  WE936(); // WE936
  b = b && Pop();
  WEA84(); // WEA84
  b = b && Pop();
  if (b)
  {
    WE6FA(); // WE6FA
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && !Pop();
  WEB10(); // WEB10
  b = b && !Pop();
  WE93E(); // WE93E
  b = b && Pop();
  WEA84(); // WEA84
  b = b && !Pop();
  if (b)
  {
    WE722(); // WE722
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && !Pop();
  WEB10(); // WEB10
  b = b && !Pop();
  WE93E(); // WE93E
  b = b && Pop();
  WEA84(); // WEA84
  b = b && Pop();
  if (b)
  {
    WE718(); // WE718
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && !Pop();
  WEB10(); // WEB10
  b = b && !Pop();
  WE946(); // WE946
  b = b && Pop();
  if (b)
  {
    WE740(); // WE740
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && !Pop();
  WEB10(); // WEB10
  b = b && !Pop();
  WE926(); // WE926
  b = b && Pop();
  WEA84(); // WEA84
  b = b && !Pop();
  if (b)
  {
    WE704(); // WE704
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && !Pop();
  WEB10(); // WEB10
  b = b && !Pop();
  WE926(); // WE926
  b = b && Pop();
  WEA84(); // WEA84
  b = b && Pop();
  if (b)
  {
    WE70E(); // WE70E
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && Pop();
  WE96A(); // WE96A
  b = b && Pop();
  WE95A(); // WE95A
  b = b && !Pop();
  if (b)
  {
    WE72C(); // WE72C
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && Pop();
  WE926(); // WE926
  b = b && !Pop();
  WE95A(); // WE95A
  b = b && !Pop();
  if (b)
  {
    WE72C(); // WE72C
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && Pop();
  WE95A(); // WE95A
  b = b && Pop();
  if (b)
  {
    WE740(); // WE740
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && !Pop();
  WEB10(); // WEB10
  b = b && Pop();
  WE926(); // WE926
  b = b && !Pop();
  if (b)
  {
    WE740(); // WE740
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && !Pop();
  WEB10(); // WEB10
  b = b && Pop();
  WE96A(); // WE96A
  b = b && !Pop();
  if (b)
  {
    WE740(); // WE740
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && !Pop();
  WEB10(); // WEB10
  b = b && Pop();
  WE926(); // WE926
  b = b && Pop();
  WE96A(); // WE96A
  b = b && Pop();
  Push(Read16(cc_WD9FF)); // WD9FF
  b = b && !Pop();
  if (b)
  {
    WE736(); // WE736
  }
}

// 0xec48: db 0x52 0x20 'R '
// 0xec64: db 0x6c 0x1f 'l '
// 0xec73: db 0x90 ' '

// ================================================
// 0xecdf: WORD '<AUX>' codep=0xaccc wordp=0xece9
// ================================================

void _st_AUX_gt_() // <AUX> rule
{
  int b;

  b = 1;
  Push(Read16(cc_WD90F)); // WD90F
  b = b && Pop();
  Push(Read16(cc_IsA_dash_SHIE)); // ?A-SHIE
  b = b && !Pop();
  WE92E(); // WE92E
  b = b && !Pop();
  WEB70(); // WEB70
  b = b && !Pop();
  WEB1C(); // WEB1C
  b = b && !Pop();
  if (b)
  {
    WE77F(); // WE77F
  }

  b = 1;
  Push(Read16(cc_IsA_dash_SHIE)); // ?A-SHIE
  b = b && Pop();
  WE92E(); // WE92E
  b = b && Pop();
  WEB1C(); // WEB1C
  b = b && !Pop();
  if (b)
  {
    WE797(); // WE797
  }

  b = 1;
  Push(Read16(cc_IsA_dash_SHIE)); // ?A-SHIE
  b = b && Pop();
  WEB70(); // WEB70
  b = b && Pop();
  WEB1C(); // WEB1C
  b = b && !Pop();
  if (b)
  {
    WE797(); // WE797
  }

  b = 1;
  Push(Read16(cc_WD913)); // WD913
  b = b && Pop();
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  b = b && !Pop();
  WE92E(); // WE92E
  b = b && !Pop();
  WE936(); // WE936
  b = b && !Pop();
  WE926(); // WE926
  b = b && !Pop();
  WEB70(); // WEB70
  b = b && !Pop();
  WEB1C(); // WEB1C
  b = b && !Pop();
  WE5EA(); // WE5EA
  b = b && !Pop();
  if (b)
  {
    WE7AF(); // WE7AF
  }

  b = 1;
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  b = b && Pop();
  WE93E(); // WE93E
  b = b && !Pop();
  WEB1C(); // WEB1C
  b = b && !Pop();
  WE946(); // WE946
  b = b && !Pop();
  WE926(); // WE926
  b = b && !Pop();
  if (b)
  {
    WE7C7(); // WE7C7
  }

  b = 1;
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  b = b && Pop();
  WEB70(); // WEB70
  b = b && Pop();
  if (b)
  {
    WE7C7(); // WE7C7
  }

  b = 1;
  WE978(); // WE978
  b = b && Pop();
  Push(Read16(cc_IsCALLED)); // ?CALLED
  b = b && !Pop();
  WE5DC(); // WE5DC
  b = b && Pop();
  WEAE6(); // WEAE6
  b = b && Pop();
  WE92E(); // WE92E
  b = b && !Pop();
  WE936(); // WE936
  b = b && !Pop();
  WEB70(); // WEB70
  b = b && !Pop();
  if (b)
  {
    WE7DF(); // WE7DF
  }

  b = 1;
  Push(Read16(cc_IsCALLED)); // ?CALLED
  b = b && Pop();
  WE9B0(); // WE9B0
  b = b && Pop();
  if (b)
  {
    WE7F5(); // WE7F5
  }

  b = 1;
  WEAA8(); // WEAA8
  b = b && Pop();
  WE918(); // WE918
  b = b && Pop();
  WE99A(); // WE99A
  b = b && Pop();
  Push(Read16(cc_WDA03)); // WDA03
  b = b && !Pop();
  if (b)
  {
    WE811(); // WE811
  }

  b = 1;
  Push(Read16(cc_WD9FF)); // WD9FF
  b = b && !Pop();
  WEB70(); // WEB70
  b = b && Pop();
  if (b)
  {
    WE8E5(); // WE8E5
  }
}

// 0xed2c: db 0x0b 0x5c ' \'
// 0xed44: db 0x15 ' '

// ================================================
// 0xed8c: WORD '<COMM>' codep=0xaccc wordp=0xed97
// ================================================

void _st_COMM_gt_() // <COMM> rule
{
  int b;

  b = 1;
  WEAF2(); // WEAF2
  b = b && !Pop();
  WEA84(); // WEA84
  b = b && !Pop();
  WEAA8(); // WEAA8
  b = b && Pop();
  WE9C8(); // WE9C8
  b = b && Pop();
  WEA90(); // WEA90
  b = b && !Pop();
  Push(Read16(cc_WD9FF)); // WD9FF
  b = b && !Pop();
  WEADC(); // WEADC
  b = b && !Pop();
  if (b)
  {
    WE827(); // WE827
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && !Pop();
  WEA90(); // WEA90
  b = b && Pop();
  WEAA8(); // WEAA8
  b = b && Pop();
  WE9C8(); // WE9C8
  b = b && Pop();
  WEA9C(); // WEA9C
  b = b && Pop();
  WEA14(); // WEA14
  b = b && Pop();
  Push(Read16(cc_WD9FF)); // WD9FF
  b = b && !Pop();
  WEADC(); // WEADC
  b = b && !Pop();
  if (b)
  {
    WE827(); // WE827
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && !Pop();
  WEA84(); // WEA84
  b = b && Pop();
  WEAA8(); // WEAA8
  b = b && Pop();
  WE9C8(); // WE9C8
  b = b && Pop();
  Push(Read16(cc_WD9FF)); // WD9FF
  b = b && !Pop();
  WEADC(); // WEADC
  b = b && !Pop();
  if (b)
  {
    WE857(); // WE857
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && Pop();
  WEAA8(); // WEAA8
  b = b && Pop();
  WEAC2(); // WEAC2
  b = b && !Pop();
  WE9C8(); // WE9C8
  b = b && Pop();
  WEB30(); // WEB30
  b = b && Pop();
  Push(Read16(cc_WD92D)); // WD92D
  b = b && !Pop();
  WE95A(); // WE95A
  b = b && !Pop();
  if (b)
  {
    WE881(); // WE881
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && Pop();
  WEAA8(); // WEAA8
  b = b && Pop();
  WEAC2(); // WEAC2
  b = b && !Pop();
  WE9C8(); // WE9C8
  b = b && Pop();
  WEB30(); // WEB30
  b = b && !Pop();
  Push(Read16(cc_WD92D)); // WD92D
  b = b && !Pop();
  WE95A(); // WE95A
  b = b && !Pop();
  if (b)
  {
    WE893(); // WE893
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && Pop();
  Push(Read16(cc_WD92D)); // WD92D
  b = b && Pop();
  WEAA8(); // WEAA8
  b = b && Pop();
  WEA9C(); // WEA9C
  b = b && Pop();
  WEA14(); // WEA14
  b = b && Pop();
  if (b)
  {
    WE8C7(); // WE8C7
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && Pop();
  WEAC2(); // WEAC2
  b = b && Pop();
  WEAA8(); // WEAA8
  b = b && Pop();
  WE95A(); // WE95A
  b = b && !Pop();
  if (b)
  {
    WE86B(); // WE86B
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && Pop();
  WE95A(); // WE95A
  b = b && Pop();
  WEAA8(); // WEAA8
  b = b && Pop();
  Push(Read16(cc_WD92D)); // WD92D
  b = b && !Pop();
  if (b)
  {
    WE8D9(); // WE8D9
  }

  b = 1;
  WEAF2(); // WEAF2
  b = b && Pop();
  WE950(); // WE950
  b = b && !Pop();
  WE95A(); // WE95A
  b = b && !Pop();
  if (b)
  {
    WE06B(); // WE06B
  }
}

// 0xedac: db 0x4f 0x4d 'OM'
// 0xedca: db 0x29 0xdf ') '
// 0xedda: db 0x7a 'z'

// ================================================
// 0xee29: WORD 'WEE2B' codep=0x224c wordp=0xee2b
// ================================================

void WEE2B() // WEE2B
{
  GetColor(BLUE);
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  DrawON(); // .ON
  WE005(); // WE005
  WDB00(); // WDB00
  WDE07(); // WDE07
  WE47B(); // WE47B
  Push(!(Read16(pp_WD8F3)==1?1:0)); // WD8F3 @ 1 = NOT
  Push(pp_WD8FB); // WD8FB
  _plus__ex__2(); // +!_2
  WDD15(); // WDD15
  GetColor(BLACK);
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  DrawON(); // .ON
}


// ================================================
// 0xee55: WORD 'WEE57' codep=0x224c wordp=0xee57 params=0 returns=0
// ================================================

void WEE57() // WEE57
{
  Push(pp__ro_STOP_dash_C); // (STOP-C
  ON_2(); // ON_2
}


// ================================================
// 0xee5d: WORD 'WEE5F' codep=0x224c wordp=0xee5f params=0 returns=1
// ================================================

void WEE5F() // WEE5F
{
  IsTRIG(); // ?TRIG
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(Read16(pp_LKEY)==0x002b?1:0); // LKEY @ 0x002b =
  if (Pop() != 0)
  {
    Push(!Pop()); //  NOT
    Push(0xd4c0); Push(0x0001);
    WE081(); // WE081
    return;
  }
  GetColor(BLUE);
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  DrawON(); // .ON
}


// ================================================
// 0xee8d: WORD 'WEE8F' codep=0x224c wordp=0xee8f params=0 returns=0
// ================================================

void WEE8F() // WEE8F
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  Push((Pop()==4?1:0) & ((Read16(0x65e1+WD843.offset)&0xFF)==0?1:0)); //  4 = WD843<IFIELD> C@ 0= AND
  if (Pop() != 0)
  {
    Push(0x0032);
    Push(0x65e1+WD843.offset); // WD843<IFIELD>
    C_ex__2(); // C!_2
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeeb1: WORD 'WEEB3' codep=0x1d29 wordp=0xeeb3
// ================================================
// 0xeeb3: db 0x02 0x08 0x01 '   '

// ================================================
// 0xeeb6: WORD 'WEEB8' codep=0x224c wordp=0xeeb8
// ================================================

void WEEB8() // WEEB8
{
  Push(8);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  WDB81(); // WDB81
  Push(Read16(pp_WEEB3 + Read16(pp_THIS_dash_BU))&0xFF); // WEEB3 THIS-BU @ + C@
  Push(pp_P_dash_POSTU); // P-POSTU
  Store_2(); // !_2
  Push(5);
  WEAF2(); // WEAF2
  Push(Pop() * 4); //  4 *
  Push(Pop() + Pop()); // +
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
}


// ================================================
// 0xeede: WORD '(>?)' codep=0x4b3b wordp=0xeee7
// ================================================

void _ro__gt__ask__rc_() // (>?)
{
  switch(Pop()) // (>?)
  {
  case 0:
    Push(Read16(cc_WDA6D)); // WDA6D
    break;
  case 1:
    Push(Read16(cc_WDA71)); // WDA71
    break;
  case 2:
    Push(Read16(cc_WDA7D)); // WDA7D
    break;
  case 3:
    Push(Read16(cc_WDA79)); // WDA79
    break;
  default:
    Push(Read16(cc_WDA75)); // WDA75
    break;

  }
}

// ================================================
// 0xeefb: WORD 'WEEFD' codep=0x224c wordp=0xeefd
// ================================================

void WEEFD() // WEEFD
{
  Push(0x000b);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  WDB81(); // WDB81
  Push(0xda5d); // 'WDA5D'
  ON_2(); // ON_2
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  _ro__gt__ask__rc_(); // (>?) case
  Push(pp_WD8F7); // WD8F7
  Store_2(); // !_2
  Push(0x000e);
  Push(pp_WD8F3); // WD8F3
  Store_2(); // !_2
  WEE2B(); // WEE2B
  Push(9);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
}


// ================================================
// 0xef29: WORD 'WEF2B' codep=0x224c wordp=0xef2b
// ================================================

void WEF2B() // WEF2B
{
  Push(0x000d);
  Push(pp_WD8F3); // WD8F3
  Store_2(); // !_2
  WEE2B(); // WEE2B
}


// ================================================
// 0xef37: WORD '>CM' codep=0x4b3b wordp=0xef3f
// ================================================

void _gt_CM() // >CM
{
  switch(Pop()) // >CM
  {
  case 0:
    WEF2B(); // WEF2B
    break;
  case 1:
    WEEFD(); // WEEFD
    break;
  case 2:
    WEEB8(); // WEEB8
    break;
  default:
    WE06B(); // WE06B
    break;

  }
}

// ================================================
// 0xef4f: WORD 'WEF51' codep=0x224c wordp=0xef51
// ================================================

void WEF51() // WEF51
{
  WE65C(); // WE65C
  WE005(); // WE005
  SET_STR_AS_PARAM("YES.");
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  CLICK(); // CLICK
}


// ================================================
// 0xef62: WORD 'WEF64' codep=0x224c wordp=0xef64
// ================================================

void WEF64() // WEF64
{
  WE664(); // WE664
  WE005(); // WE005
  SET_STR_AS_PARAM("NO.");
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  CLICK(); // CLICK
}


// ================================================
// 0xef74: WORD 'WEF76' codep=0x224c wordp=0xef76
// ================================================

void WEF76() // WEF76
{
  Push(Read16(pp_A_dash_POSTU) * 2); // A-POSTU @ 2*
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xef80: WORD 'WEF82' codep=0x224c wordp=0xef82
// ================================================

void WEF82() // WEF82
{
  WEF76(); // WEF76
  WE06B(); // WE06B
}


// ================================================
// 0xef88: WORD '>Y/N' codep=0x4b3b wordp=0xef91
// ================================================

void _gt_Y_slash_N() // >Y/N
{
  switch(Pop()) // >Y/N
  {
  case 0:
    WEF51(); // WEF51
    break;
  case 1:
    WEF64(); // WEF64
    break;
  case 2:
    WEF82(); // WEF82
    break;
  default:
    WEF76(); // WEF76
    break;

  }
}

// ================================================
// 0xefa1: WORD 'WEFA3' codep=0x224c wordp=0xefa3
// ================================================

void WEFA3() // WEFA3
{
  CTERASE(); // CTERASE
  WEEB8(); // WEEB8
  Push(1);
  Push(pp_WD8F3); // WD8F3
  Store_2(); // !_2
  WEE2B(); // WEE2B
  Push(1);
  Push(pp_WDA65); // WDA65
  Store_2(); // !_2
  Push(5);
  DrawBTN_dash_TE(); // .BTN-TE
  WEE8F(); // WEE8F
}


// ================================================
// 0xefbd: WORD 'WEFBF' codep=0x224c wordp=0xefbf
// ================================================

void WEFBF() // WEFBF
{
  WEEB8(); // WEEB8
  Push(2);
  Push(pp_WD8F3); // WD8F3
  Store_2(); // !_2
  WEE2B(); // WEE2B
  Push(0xd8e7); // 'WD8E7'
  ON_2(); // ON_2
  Push(pp_WD91B); // WD91B
  _099(); // 099
}


// ================================================
// 0xefd5: WORD 'EDL+AUX' codep=0x224c wordp=0xefe1 params=0 returns=0
// ================================================
// entry

void EDL_plus_AUX() // EDL+AUX
{
  Push(Read16(pp__n_VESS) | Read16(cc_IsCALLED)); // #VESS @ ?CALLED OR
  if (Pop() == 0) return;
  Push(0xece9); // '<AUX>'
  DISTRAC(); // DISTRAC
  _st_AUX_gt_(); // <AUX> rule
  Pop(); // DROP
  Push(0xeb8a); // '<EDL>'
  DISTRAC(); // DISTRAC
  _st_EDL_gt_(); // <EDL> rule
  Pop(); // DROP
}


// ================================================
// 0xf003: WORD 'COMM-EXPERT' codep=0x224c wordp=0xf013 params=0 returns=0
// ================================================
// entry

void COMM_dash_EXPERT() // COMM-EXPERT
{
  Push(Read16(pp__n_VESS) | Read16(cc_IsCALLED)); // #VESS @ ?CALLED OR
  if (Pop() != 0)
  {
    Push(pp_SMART); // SMART
    ON_2(); // ON_2
    EDL_plus_AUX(); // EDL+AUX
    Push(0xec23); // '<TALK>'
    DISTRAC(); // DISTRAC
    _st_TALK_gt_(); // <TALK> rule
    Pop(); // DROP
    Push(0xed97); // '<COMM>'
    DISTRAC(); // DISTRAC
    _st_COMM_gt_(); // <COMM> rule
    Pop(); // DROP
    Push(0);
    Push(0xb822); // 'PSYCH'
    MODULE(); // MODULE
  }
  Push(0xd935); // 'WD935'
  _099(); // 099
}


// ================================================
// 0xf049: WORD 'WF04B' codep=0x224c wordp=0xf04b params=0 returns=1
// ================================================

void WF04B() // WF04B
{
  Push(Read16(pp__i_CC)); // 'CC @
  MODULE(); // MODULE
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+WD852.offset)&0xFF); // WD852<IFIELD> C@
  Push(0xb9c8); // '@.HYBR'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf063: WORD 'WF065' codep=0x224c wordp=0xf065 params=0 returns=0
// ================================================

void WF065() // WF065
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  Push(Pop()==7?1:0); //  7 =
  ICLOSE(); // ICLOSE
  Push(Pop() & (Read16(cc_WD92D)==0?1:0)); //  WD92D 0= AND
  if (Pop() == 0) return;
  Push(0);
  Push(0x000a);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(Read16(pp__i_XCOMM)); // 'XCOMM @
  MODULE(); // MODULE
}


// ================================================
// 0xf091: WORD 'WF093' codep=0x224c wordp=0xf093 params=0 returns=0
// ================================================

void WF093() // WF093
{
  Push(Read16(pp_WD8DD)==4?1:0); // WD8DD @ 4 =
  if (Pop() == 0) return;
  Push(0);
  Push(Read16(regsp)); // DUP
  Push(pp_EDL); // EDL
  Store_2(); // !_2
  Push(0x65e1+WD84D.offset); // WD84D<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf0ad: WORD 'WF0AF' codep=0x224c wordp=0xf0af params=0 returns=0
// ================================================

void WF0AF() // WF0AF
{
  Push(0x000a);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) return;
  Push(Read16(pp_Is10)); // ?10 @
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
  Push(0x65e1+WD84D.offset); // WD84D<IFIELD>
  C_ex__2(); // C!_2
  Push(pp_EDL); // EDL
  Store_2(); // !_2
}


// ================================================
// 0xf0dd: WORD 'WF0DF' codep=0x224c wordp=0xf0df
// ================================================

void WF0DF() // WF0DF
{
  WF04B(); // WF04B
  Push(9);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  Push(Read16(pp__i_XCOMM)); // 'XCOMM @
  MODULE(); // MODULE
  Push(!Read16(pp__ro_STOP_dash_C)); // (STOP-C @ NOT
  if (Pop() != 0)
  {
    do
    {
      WF065(); // WF065
      COMM_dash_EXPERT(); // COMM-EXPERT
      WDB71(); // WDB71
      WEE5F(); // WEE5F
      Push(Read16(cc_WD92D)); // WD92D
      WEA9C(); // WEA9C
      Push(Pop() & Pop()); // AND
      WEA14(); // WEA14
      WDA86(); // WDA86
      Push(Pop() | Pop()); // OR
      if (Pop() != 0)
      {
        Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
        Push(Read16(cc_WD92D)); // WD92D
        if (Pop() != 0)
        {
          Push(0xd92d); // 'WD92D'
          _099(); // 099
          WEA14(); // WEA14
          Push(!Pop() * 3); //  NOT 3 *
          Push(Pop() + Pop()); // +
          WDB95(); // WDB95
          _gt_Y_slash_N(); // >Y/N case
          Push(pp_WD91B); // WD91B
          _099(); // 099
          Push(9);
          DrawBTN_dash_TE(); // .BTN-TE
          INIT_dash_BU(); // INIT-BU
        } else
        {
          _gt_CM(); // >CM case
        }
      }
      WEB10(); // WEB10
    } while(Pop() == 0);
    Push(Read16(pp_P_dash_POSTU)); // P-POSTU @
    Push(0x62b1); // ':('
    Push(Read16(Pop())); //  @
    MODULE(); // MODULE
  }
  Push(pp_WD903); // WD903
  _099(); // 099
  Push(pp_WD8FB); // WD8FB
  _099(); // 099
  Push(pp_WDA65); // WDA65
  _099(); // 099
  _gt_HAIL_do_(); // >HAIL$
  Push(pp_PIC_n_); // PIC#
  _099(); // 099
}


// ================================================
// 0xf163: WORD 'WF165' codep=0x224c wordp=0xf165
// ================================================

void WF165() // WF165
{
  Push(Read16(pp_CONTEXT_3)==4?1:0); // CONTEXT_3 @ 4 =
  if (Pop() != 0)
  {
    Push(2);
    Push(0xb77c); // 'OV?.EQ'
    MODULE(); // MODULE
    if (Pop() != 0)
    {
      Push(!(Read16(pp_WDA65)==2?1:0)); // WDA65 @ 2 = NOT
      if (Pop() != 0)
      {
        WEFA3(); // WEFA3
      } else
      {
        WEFBF(); // WEFBF
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
  Push(0x5b12); Push(0x0002); // 'THERE'S NO ONE TO HAIL'
  WD80E(); // WD80E
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  GetColor(BLACK);
  Push(0);
  DrawON(); // .ON
}


// ================================================
// 0xf1b5: WORD 'WF1B7' codep=0x224c wordp=0xf1b7 params=0 returns=0
// ================================================

void WF1B7() // WF1B7
{
  Push(0xb7d6); // 'TOW'
  MODULE(); // MODULE
}


// ================================================
// 0xf1bf: WORD '(CBTN)' codep=0x4b3b wordp=0xf1ca
// ================================================

void _ro_CBTN_rc_() // (CBTN)
{
  switch(Pop()) // (CBTN)
  {
  case 0:
    WF165(); // WF165
    break;
  case 1:
    WF1B7(); // WF1B7
    break;
  case 2:
    WE4C9(); // WE4C9
    break;
  default:
    WEE57(); // WEE57
    break;

  }
}

// ================================================
// 0xf1da: WORD 'WF1DC' codep=0x224c wordp=0xf1dc params=0 returns=0
// ================================================

void WF1DC() // WF1DC
{
  Push(pp__ro_ENCOUN); // (ENCOUN
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
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  StoreD(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf20a: WORD 'CL1' codep=0x224c wordp=0xf212
// ================================================
// entry

void CL1() // CL1
{
  Push(!Read16(pp__n_VESS)); // #VESS @ NOT
  if (Pop() != 0)
  {
    Push(pp_WD903); // WD903
    _099(); // 099
    Push(pp_WDA65); // WDA65
    _099(); // 099
    _gt_HAIL_do_(); // >HAIL$
  }
  Push(5);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  Push(pp__ro_STOP_dash_C); // (STOP-C
  _099(); // 099
  Push(pp_WE563); // WE563
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
    WDB71(); // WDB71
    WEE5F(); // WEE5F
    if (Pop() != 0)
    {
      Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
      _ro_CBTN_rc_(); // (CBTN) case
    }
    Push(Read16(pp_WD8FB) | Read16(pp_WD903)); // WD8FB @ WD903 @ OR
    Push(pp__ro_AORIGI); // (AORIGI
    _1_dot_5_at_(); // 1.5@
    D0_eq_(); // D0=
    WDA86(); // WDA86
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(2);
      Push(0xb77c); // 'OV?.EQ'
      MODULE(); // MODULE
      Push(!Pop() | Read16(pp__ro_STOP_dash_C)); //  NOT (STOP-C @ OR
      Push(pp__ro_STOP_dash_C); // (STOP-C
      Store_2(); // !_2
    }
    Push(Read16(pp__ro_STOP_dash_C)); // (STOP-C @
    WDA86(); // WDA86
    if (Pop() != 0)
    {
      WF0DF(); // WF0DF
      CTINIT(); // CTINIT
      Push(0x5b35); Push(0x0002); // 'COMMUNICATIONS HAVE BEEN TERMINATED'
      WD80E(); // WD80E
      DrawTTY(); // .TTY
      WF1DC(); // WF1DC
      Push(5);
      DrawBTN_dash_TE(); // .BTN-TE
      INIT_dash_BU(); // INIT-BU
      Push(pp_FTRIG); // FTRIG
      _099(); // 099
    }
    Push(Read16(pp__ro_STOP_dash_C)); // (STOP-C @
  } while(Pop() == 0);
  Push(0);
  DrawBTN_dash_TE(); // .BTN-TE
  Push(pp_WE563); // WE563
  _099(); // 099
  CLR_dash_BUT(); // CLR-BUT
  GetColor(BLUE);
  Push(4);
  DrawHIGHLI(); // .HIGHLI
  Push(4);
  Push(pp_THIS_dash_BU); // THIS-BU
  Store_2(); // !_2
  GetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_2(); // !_2
}


// ================================================
// 0xf2c4: WORD 'WF2C6' codep=0x224c wordp=0xf2c6
// ================================================

void WF2C6() // WF2C6
{
  Push(pp__ro_AORIGI); // (AORIGI
  _1_dot_5_ex__2(); // 1.5!_2
  WE718(); // WE718
  WD806(); // WD806
  Push(pp_OK_dash_TALK); // OK-TALK
  StoreD(); // D!
  Push(pp_TERMINA); // TERMINA
  _099(); // 099
  Push(0x000e);
  WDB3E(); // WDB3E
  Push(pp_WD903); // WD903
  _099(); // 099
  Push(pp_WD91B); // WD91B
  _099(); // 099
  A_gt_ORIGINATO(); // A>ORIGINATO
  ORIGINATOR_gt_(); // ORIGINATOR>
  Push(Read16(0x65e1+WD843.offset)&0xFF); // WD843<IFIELD> C@
  Push(pp__pe_TALK); // %TALK
  Store_2(); // !_2
  Push(Read16(0x65e1+WD84D.offset)&0xFF); // WD84D<IFIELD> C@
  Push(pp_EDL); // EDL
  Store_2(); // !_2
  WEA38(); // WEA38
  Push(Pop() * 5); //  5 *
  _plus__ex_EDL(); // +!EDL
  WEA44(); // WEA44
  Pop(); // DROP
  WEA5E(); // WEA5E
  Push(Pop() * 0x000a); //  0x000a *
  _plus__ex_EDL(); // +!EDL
  WEA6A(); // WEA6A
  Pop(); // DROP
  Push(6);
  _eq_SPECIE(); // =SPECIE
  if (Pop() != 0)
  {
    Push(pp_EDL); // EDL
    _099(); // 099
  }
  WF0AF(); // WF0AF
  WF093(); // WF093
  WDC83(); // WDC83
}


// ================================================
// 0xf326: WORD 'WF328' codep=0x224c wordp=0xf328
// ================================================

void WF328() // WF328
{
  unsigned short int a;
  WF2C6(); // WF2C6
  GetINST_dash_S(); // @INST-S
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(pp_WD8DD); // WD8DD
  Store_2(); // !_2
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    Push(Read16(a + pp_WE280)&0xFF); // I WE280 + C@
    Push(Read16(regsp)); // DUP
    Push(0xd9f7); // 'WD9F7'
    Store_2(); // !_2
    if (Pop() != 0)
    {
      WDF4E(); // WDF4E
      Push(pp__ro_ENCOUN); // (ENCOUN
      _1_dot_5_at_(); // 1.5@
      _2DUP(); // 2DUP
      Push(Pop() & 0x000f | 2); //  0x000f AND 2 OR
      WDFBD(); // WDFBD
      Push(0x000f);
      MIN(); // MIN
      OVER(); // OVER
      Push(Pop() - 1); //  1-
      C_ex__2(); // C!_2
      Push(Pop() - 1); //  1-
      Push(pp_WDA19); // WDA19
      _do__ex_(); // $!
      SWAP(); // SWAP
      Push(Pop() & 0x000f | 2); //  0x000f AND 2 OR
      WDFBD(); // WDFBD
      Push(0x000f);
      MIN(); // MIN
      OVER(); // OVER
      Push(Pop() - 1); //  1-
      C_ex__2(); // C!_2
      Push(Pop() - 1); //  1-
      Push(pp_WDA07); // WDA07
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
  WE93E(); // WE93E
  WE946(); // WE946
  Push(Pop() | Pop()); // OR
  Push(Read16(regsp)); // DUP
  Push(Pop() & Read16(cc_WD913)); //  WD913 AND
  WEB1C(); // WEB1C
  Push(Pop() | Pop()); // OR
  Push(0x51a0); // '?A-WEAP'
  Store_2(); // !_2
  WE936(); // WE936
  Push(Pop() | Pop()); // OR
  Push(Pop() & Read16(cc_WD90F)); //  WD90F AND
  WEB1C(); // WEB1C
  Push(Pop() | Pop()); // OR
  Push(0x5192); // '?A-SHIE'
  Store_2(); // !_2
}


// ================================================
// 0xf3cc: WORD 'WF3CE' codep=0x224c wordp=0xf3ce params=0 returns=0
// ================================================

void WF3CE() // WF3CE
{
  unsigned short int i, imax;
  Push(pp_WDA61); // WDA61
  _099(); // 099
  Push(0xda5d); // 'WDA5D'
  _099(); // 099
  Push(0xda03); // 'WDA03'
  _099(); // 099
  Push(0x52bd); // '?CALLED'
  _099(); // 099
  Push(0xd8e7); // 'WD8E7'
  _099(); // 099
  Push(pp_WD8EF); // WD8EF
  _099(); // 099
  Push(0x5184); // '?FIRED-'
  _099(); // 099
  Push(0xd92d); // 'WD92D'
  _099(); // 099
  Push(pp_WDA65); // WDA65
  _099(); // 099
  Push(pp_WD8FB); // WD8FB
  _099(); // 099
  Push(pp_WD8F3); // WD8F3
  _099(); // 099
  Push(pp_WD8F7); // WD8F7
  _099(); // 099
  Push(0xd9ff); // 'WD9FF'
  _099(); // 099
  Push(pp_P_dash_RACES); // P-RACES
  _099(); // 099
  Push(pp_WDA59); // WDA59
  _099(); // 099
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WD898.offset); // WD898<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+WD889.offset); // WD889<IFIELD>
  Push(pp_WDA2B); // WDA2B
  _do__ex_(); // $!
  ICLOSE(); // ICLOSE
  Push(0);

  i = 0;
  imax = 0x0012;
  do // (DO)
  {
    Push((0x65e1+WD898.offset) + i); // WD898<IFIELD> I +
    Get_gt_C_plus_S(); // @>C+S
    GetINST_dash_S(); // @INST-S
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
  Store_2(); // !_2
  WD7FE(); // WD7FE
  Push(0x65e1+_pe_NAME.offset); // %NAME<IFIELD>
  Push(pp_WDA3D); // WDA3D
  _do__ex_(); // $!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf45c: WORD 'WF45E' codep=0x224c wordp=0xf45e params=0 returns=0
// ================================================

void WF45E() // WF45E
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WD89D.offset); // WD89D<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+WD884.offset)&0xFF); // WD884<IFIELD> C@
  Push(pp_WDA55); // WDA55
  Store_2(); // !_2
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf474: WORD 'IAPWR' codep=0x224c wordp=0xf47e params=0 returns=0
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
    Push(Pop()==0x0019?1:0); //  0x0019 =
    GetINST_dash_S(); // @INST-S
    Push(Pop()==0?1:0); //  0=
    WDA86(); // WDA86
    if (Pop() != 0)
    {
      Push(Read16(cc_WD90F)); // WD90F
      LoadData(WD8C0); // from 'VESSEL'
      Push(Read16(Pop() + 2)); //  2+ @
      _gt_FLAG(); // >FLAG
      Push(Pop() | Pop()); // OR
      Push(0xd90f); // 'WD90F'
      Store_2(); // !_2
      Push(Read16(cc_WD913)); // WD913
      LoadData(WD8C8); // from 'VESSEL'
      _1_dot_5_at_(); // 1.5@
      D0_eq_(); // D0=
      Push(!Pop()); //  NOT
      Push(Pop() | Pop()); // OR
      Push(0xd913); // 'WD913'
      Store_2(); // !_2
      LoadData(WD8D5); // from 'VESSEL'
      Push(Read16(Pop())&0xFF); //  C@
      Push(0x65e1+WD8D0.offset); // WD8D0<IFIELD>
      _2_at_(); // 2@
      Push(Pop() + Pop()); // +
      LoadData(WD8C0); // from 'VESSEL'
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
// 0xf4e2: WORD 'WF4E4' codep=0x224c wordp=0xf4e4 params=1 returns=1
// ================================================

void WF4E4() // WF4E4
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push((Read16(Pop() + 1)&0xFF) & 7); //  1+ C@ 7 AND
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xf4f8: WORD 'WF4FA' codep=0x224c wordp=0xf4fa params=0 returns=0
// ================================================

void WF4FA() // WF4FA
{
  WD7FE(); // WD7FE
  Push(0x65e1+WD8AC.offset); // WD8AC<IFIELD>
  WF4E4(); // WF4E4
  Push(0x65e1+WD8B1.offset); // WD8B1<IFIELD>
  WF4E4(); // WF4E4
  Push(Pop() + Pop()); // +
  Push(0x65e1+WD8BB.offset); // WD8BB<IFIELD>
  WF4E4(); // WF4E4
  Push(Pop() + Pop()); // +
  Push(0x65e1+WD8B6.offset); // WD8B6<IFIELD>
  WF4E4(); // WF4E4
  Push(Pop() + Pop()); // +
  ICLOSE(); // ICLOSE
  Push(0x000f);
  Push(0x000a);
  _star__slash_(); // */
  Push(pp_WD9FB); // WD9FB
  Store_2(); // !_2
}


// ================================================
// 0xf524: WORD 'ICOMM' codep=0x224c wordp=0xf52e
// ================================================
// entry

void ICOMM() // ICOMM
{
  Push(pp_WD931); // WD931
  Store_2(); // !_2
  Push(0xd913); // 'WD913'
  _099(); // 099
  Push(0xd90f); // 'WD90F'
  _099(); // 099
  IAPWR(); // IAPWR
  WF4FA(); // WF4FA
  WF328(); // WF328
  WF3CE(); // WF3CE
  WF45E(); // WF45E
  WEB1C(); // WEB1C
  if (Pop() != 0)
  {
    WEA20(); // WEA20
    Push(Pop() | 0x0030); //  0x0030 OR
    WEA2C(); // WEA2C
  }
  _gt_DISPLA(); // >DISPLA
}

// 0xf55c: db 0x43 0x4f 0x4d 0x4d 0x00 'COMM '

