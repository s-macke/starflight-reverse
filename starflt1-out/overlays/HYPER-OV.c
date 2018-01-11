// ====== OVERLAY 'HYPER-OV' ======
// store offset = 0xd960
// overlay size   = 0x1c00

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xd976  codep:0x224c parp:0xd976 size:0x0008 C-string:'UNK_0xd976'
//           SHP>C  codep:0x224c parp:0xd980 size:0x0006 C-string:'SHP_gt_C'
//           PLN>C  codep:0x224c parp:0xd988 size:0x0006 C-string:'PLN_gt_C'
//      UNK_0xd990  codep:0x224c parp:0xd990 size:0x0006 C-string:'UNK_0xd990'
//      UNK_0xd998  codep:0x224c parp:0xd998 size:0x0006 C-string:'UNK_0xd998'
//      UNK_0xd9a0  codep:0x224c parp:0xd9a0 size:0x0006 C-string:'UNK_0xd9a0'
//      UNK_0xd9a8  codep:0x224c parp:0xd9a8 size:0x0006 C-string:'UNK_0xd9a8'
//      UNK_0xd9b0  codep:0x2214 parp:0xd9b0 size:0x0002 C-string:'UNK_0xd9b0'
//      UNK_0xd9b4  codep:0x2214 parp:0xd9b4 size:0x0002 C-string:'UNK_0xd9b4'
//      UNK_0xd9b8  codep:0x2214 parp:0xd9b8 size:0x0002 C-string:'UNK_0xd9b8'
//      UNK_0xd9bc  codep:0x2214 parp:0xd9bc size:0x0002 C-string:'UNK_0xd9bc'
//      UNK_0xd9c0  codep:0x2214 parp:0xd9c0 size:0x0002 C-string:'UNK_0xd9c0'
//      UNK_0xd9c4  codep:0x2214 parp:0xd9c4 size:0x0002 C-string:'UNK_0xd9c4'
//      UNK_0xd9c8  codep:0x2214 parp:0xd9c8 size:0x0002 C-string:'UNK_0xd9c8'
//      UNK_0xd9cc  codep:0x2214 parp:0xd9cc size:0x0002 C-string:'UNK_0xd9cc'
//      UNK_0xd9d0  codep:0x2214 parp:0xd9d0 size:0x0002 C-string:'UNK_0xd9d0'
//      UNK_0xd9d4  codep:0x2214 parp:0xd9d4 size:0x0002 C-string:'UNK_0xd9d4'
//      UNK_0xd9d8  codep:0x2214 parp:0xd9d8 size:0x0002 C-string:'UNK_0xd9d8'
//      UNK_0xd9dc  codep:0x1d29 parp:0xd9dc size:0x0002 C-string:'UNK_0xd9dc'
//      UNK_0xd9e0  codep:0x1d29 parp:0xd9e0 size:0x0002 C-string:'UNK_0xd9e0'
//      UNK_0xd9e4  codep:0x1d29 parp:0xd9e4 size:0x0002 C-string:'UNK_0xd9e4'
//      UNK_0xd9e8  codep:0x1d29 parp:0xd9e8 size:0x0002 C-string:'UNK_0xd9e8'
//      UNK_0xd9ec  codep:0x1d29 parp:0xd9ec size:0x0002 C-string:'UNK_0xd9ec'
//      UNK_0xd9f0  codep:0x1d29 parp:0xd9f0 size:0x0004 C-string:'UNK_0xd9f0'
//      UNK_0xd9f6  codep:0x1d29 parp:0xd9f6 size:0x0002 C-string:'UNK_0xd9f6'
//      UNK_0xd9fa  codep:0x1d29 parp:0xd9fa size:0x0002 C-string:'UNK_0xd9fa'
//      UNK_0xd9fe  codep:0x1d29 parp:0xd9fe size:0x0002 C-string:'UNK_0xd9fe'
//      UNK_0xda02  codep:0x1d29 parp:0xda02 size:0x0002 C-string:'UNK_0xda02'
//      UNK_0xda06  codep:0x1d29 parp:0xda06 size:0x0002 C-string:'UNK_0xda06'
//      UNK_0xda0a  codep:0x1d29 parp:0xda0a size:0x0002 C-string:'UNK_0xda0a'
//      UNK_0xda0e  codep:0x1d29 parp:0xda0e size:0x0002 C-string:'UNK_0xda0e'
//      UNK_0xda12  codep:0x1d29 parp:0xda12 size:0x0006 C-string:'UNK_0xda12'
//      UNK_0xda1a  codep:0x744d parp:0xda1a size:0x0003 C-string:'UNK_0xda1a'
//      UNK_0xda1f  codep:0x744d parp:0xda1f size:0x0003 C-string:'UNK_0xda1f'
//      UNK_0xda24  codep:0x744d parp:0xda24 size:0x0003 C-string:'UNK_0xda24'
//      UNK_0xda29  codep:0x744d parp:0xda29 size:0x0003 C-string:'UNK_0xda29'
//      UNK_0xda2e  codep:0x744d parp:0xda2e size:0x0003 C-string:'UNK_0xda2e'
//      UNK_0xda33  codep:0x744d parp:0xda33 size:0x0003 C-string:'UNK_0xda33'
//      UNK_0xda38  codep:0x744d parp:0xda38 size:0x0003 C-string:'UNK_0xda38'
//      UNK_0xda3d  codep:0x744d parp:0xda3d size:0x0003 C-string:'UNK_0xda3d'
//      UNK_0xda42  codep:0x744d parp:0xda42 size:0x0003 C-string:'UNK_0xda42'
//      UNK_0xda47  codep:0x744d parp:0xda47 size:0x0003 C-string:'UNK_0xda47'
//      UNK_0xda4c  codep:0x744d parp:0xda4c size:0x0003 C-string:'UNK_0xda4c'
//      UNK_0xda51  codep:0x744d parp:0xda51 size:0x0003 C-string:'UNK_0xda51'
//      UNK_0xda56  codep:0x744d parp:0xda56 size:0x0003 C-string:'UNK_0xda56'
//      UNK_0xda5b  codep:0x744d parp:0xda5b size:0x0003 C-string:'UNK_0xda5b'
//       FLAREDATE  codep:0x744d parp:0xda60 size:0x0003 C-string:'FLAREDATE'
//      UNK_0xda65  codep:0x73ea parp:0xda65 size:0x000b C-string:'UNK_0xda65'
//      UNK_0xda72  codep:0x224c parp:0xda72 size:0x0008 C-string:'UNK_0xda72'
//      UNK_0xda7c  codep:0x224c parp:0xda7c size:0x0008 C-string:'UNK_0xda7c'
//      UNK_0xda86  codep:0x224c parp:0xda86 size:0x000a C-string:'UNK_0xda86'
//          @XYABS  codep:0x224c parp:0xda92 size:0x000a C-string:'GetXYABS'
//      UNK_0xda9e  codep:0x224c parp:0xda9e size:0x0008 C-string:'UNK_0xda9e'
//           CTXT#  codep:0x224c parp:0xdaa8 size:0x0006 C-string:'CTXT_n_'
//      UNK_0xdab0  codep:0x224c parp:0xdab0 size:0x0008 C-string:'UNK_0xdab0'
//      UNK_0xdaba  codep:0x224c parp:0xdaba size:0x000a C-string:'UNK_0xdaba'
//      UNK_0xdac6  codep:0x224c parp:0xdac6 size:0x0008 C-string:'UNK_0xdac6'
//      UNK_0xdad0  codep:0x224c parp:0xdad0 size:0x000c C-string:'UNK_0xdad0'
//      UNK_0xdade  codep:0x224c parp:0xdade size:0x001a C-string:'UNK_0xdade'
//      UNK_0xdafa  codep:0x224c parp:0xdafa size:0x0008 C-string:'UNK_0xdafa'
//      UNK_0xdb04  codep:0x224c parp:0xdb04 size:0x002c C-string:'UNK_0xdb04'
//      UNK_0xdb32  codep:0x224c parp:0xdb32 size:0x003e C-string:'UNK_0xdb32'
//      UNK_0xdb72  codep:0x224c parp:0xdb72 size:0x005e C-string:'UNK_0xdb72'
//      UNK_0xdbd2  codep:0x744d parp:0xdbd2 size:0x0003 C-string:'UNK_0xdbd2'
//      UNK_0xdbd7  codep:0x744d parp:0xdbd7 size:0x0003 C-string:'UNK_0xdbd7'
//      UNK_0xdbdc  codep:0x744d parp:0xdbdc size:0x0003 C-string:'UNK_0xdbdc'
//      UNK_0xdbe1  codep:0x744d parp:0xdbe1 size:0x0003 C-string:'UNK_0xdbe1'
//      UNK_0xdbe6  codep:0x744d parp:0xdbe6 size:0x0003 C-string:'UNK_0xdbe6'
//      UNK_0xdbeb  codep:0x224c parp:0xdbeb size:0x002c C-string:'UNK_0xdbeb'
//      UNK_0xdc19  codep:0x224c parp:0xdc19 size:0x002a C-string:'UNK_0xdc19'
//      UNK_0xdc45  codep:0x224c parp:0xdc45 size:0x0034 C-string:'UNK_0xdc45'
//            PS>C  codep:0x4a4f parp:0xdc82 size:0x0018 C-string:'PS_gt_C'
//      >CONS-DISP  codep:0x224c parp:0xdc9c size:0x0028 C-string:'_gt_CONS_dash_DISP'
//      UNK_0xdcc6  codep:0x224c parp:0xdcc6 size:0x00a2 C-string:'UNK_0xdcc6'
//      UNK_0xdd6a  codep:0x224c parp:0xdd6a size:0x0058 C-string:'UNK_0xdd6a'
//      UNK_0xddc4  codep:0x224c parp:0xddc4 size:0x0014 C-string:'UNK_0xddc4'
//      UNK_0xddda  codep:0x224c parp:0xddda size:0x0016 C-string:'UNK_0xddda'
//      UNK_0xddf2  codep:0x224c parp:0xddf2 size:0x001e C-string:'UNK_0xddf2'
//      UNK_0xde12  codep:0x224c parp:0xde12 size:0x0016 C-string:'UNK_0xde12'
//      UNK_0xde2a  codep:0x1d29 parp:0xde2a size:0x0002 C-string:'UNK_0xde2a'
//      UNK_0xde2e  codep:0x1d29 parp:0xde2e size:0x007c C-string:'UNK_0xde2e'
//      UNK_0xdeac  codep:0x224c parp:0xdeac size:0x0028 C-string:'UNK_0xdeac'
//      UNK_0xded6  codep:0x224c parp:0xded6 size:0x001e C-string:'UNK_0xded6'
//      UNK_0xdef6  codep:0x224c parp:0xdef6 size:0x001e C-string:'UNK_0xdef6'
//      UNK_0xdf16  codep:0x224c parp:0xdf16 size:0x0028 C-string:'UNK_0xdf16'
//      UNK_0xdf40  codep:0x224c parp:0xdf40 size:0x001c C-string:'UNK_0xdf40'
//      UNK_0xdf5e  codep:0x224c parp:0xdf5e size:0x0050 C-string:'UNK_0xdf5e'
//      UNK_0xdfb0  codep:0x224c parp:0xdfb0 size:0x0016 C-string:'UNK_0xdfb0'
//             >XY  codep:0x4a4f parp:0xdfce size:0x000c C-string:'_gt_XY'
//      UNK_0xdfdc  codep:0x224c parp:0xdfdc size:0x001c C-string:'UNK_0xdfdc'
//            SC>C  codep:0x4a4f parp:0xe001 size:0x001c C-string:'SC_gt_C'
//      UNK_0xe01f  codep:0x224c parp:0xe01f size:0x0012 C-string:'UNK_0xe01f'
//      UNK_0xe033  codep:0x224c parp:0xe033 size:0x0064 C-string:'UNK_0xe033'
//         .AUXSYS  codep:0x224c parp:0xe0a3 size:0x0062 C-string:'DrawAUXSYS'
//      UNK_0xe107  codep:0x224c parp:0xe107 size:0x0022 C-string:'UNK_0xe107'
//      UNK_0xe12b  codep:0x224c parp:0xe12b size:0x0074 C-string:'UNK_0xe12b'
//      UNK_0xe1a1  codep:0x224c parp:0xe1a1 size:0x000c C-string:'UNK_0xe1a1'
//      >[CONTEXT]  codep:0x224c parp:0xe1af size:0x0022 C-string:'_gt__bo_CONTEXT_bc_'
//      ![CONTEXT]  codep:0x224c parp:0xe1d3 size:0x000a C-string:'Store_bo_CONTEXT_bc_'
//           RADII  codep:0x4a4f parp:0xe1e7 size:0x0014 C-string:'RADII'
//            IVAR  codep:0x4a4f parp:0xe204 size:0x0014 C-string:'IVAR'
//         #CPARMS  codep:0x224c parp:0xe21a size:0x001e C-string:'_n_CPARMS'
//         !CPARMS  codep:0x224c parp:0xe23a size:0x0016 C-string:'StoreCPARMS'
//      UNK_0xe252  codep:0x224c parp:0xe252 size:0x0004 C-string:'UNK_0xe252'
//      UNK_0xe258  codep:0x224c parp:0xe258 size:0x0008 C-string:'UNK_0xe258'
//      UNK_0xe262  codep:0x224c parp:0xe262 size:0x0018 C-string:'UNK_0xe262'
//          XYCASE  codep:0x4a4f parp:0xe285 size:0x000c C-string:'XYCASE'
//      UNK_0xe293  codep:0x224c parp:0xe293 size:0x0066 C-string:'UNK_0xe293'
//      UNK_0xe2fb  codep:0x2214 parp:0xe2fb size:0x0002 C-string:'UNK_0xe2fb'
//      UNK_0xe2ff  codep:0x2214 parp:0xe2ff size:0x0002 C-string:'UNK_0xe2ff'
//      UNK_0xe303  codep:0x2214 parp:0xe303 size:0x0002 C-string:'UNK_0xe303'
//      UNK_0xe307  codep:0x2214 parp:0xe307 size:0x0002 C-string:'UNK_0xe307'
//      UNK_0xe30b  codep:0x1d29 parp:0xe30b size:0x0018 C-string:'UNK_0xe30b'
//      UNK_0xe325  codep:0x224c parp:0xe325 size:0x002a C-string:'UNK_0xe325'
//      UNK_0xe351  codep:0x224c parp:0xe351 size:0x0022 C-string:'UNK_0xe351'
//      UNK_0xe375  codep:0x224c parp:0xe375 size:0x0052 C-string:'UNK_0xe375'
//      UNK_0xe3c9  codep:0x224c parp:0xe3c9 size:0x0024 C-string:'UNK_0xe3c9'
//            .MVS  codep:0x224c parp:0xe3f6 size:0x00c2 C-string:'DrawMVS'
//      UNK_0xe4ba  codep:0x224c parp:0xe4ba size:0x003e C-string:'UNK_0xe4ba'
//      UNK_0xe4fa  codep:0x224c parp:0xe4fa size:0x0064 C-string:'UNK_0xe4fa'
//      UNK_0xe560  codep:0x224c parp:0xe560 size:0x000e C-string:'UNK_0xe560'
//      UNK_0xe570  codep:0x224c parp:0xe570 size:0x001c C-string:'UNK_0xe570'
//      UNK_0xe58e  codep:0x224c parp:0xe58e size:0x000e C-string:'UNK_0xe58e'
//      UNK_0xe59e  codep:0x224c parp:0xe59e size:0x004e C-string:'UNK_0xe59e'
//      UNK_0xe5ee  codep:0x224c parp:0xe5ee size:0x006e C-string:'UNK_0xe5ee'
//      UNK_0xe65e  codep:0x1d29 parp:0xe65e size:0x0010 C-string:'UNK_0xe65e'
//      UNK_0xe670  codep:0x224c parp:0xe670 size:0x0012 C-string:'UNK_0xe670'
//      UNK_0xe684  codep:0x224c parp:0xe684 size:0x001a C-string:'UNK_0xe684'
//      UNK_0xe6a0  codep:0x224c parp:0xe6a0 size:0x001c C-string:'UNK_0xe6a0'
//      UNK_0xe6be  codep:0x224c parp:0xe6be size:0x0024 C-string:'UNK_0xe6be'
//      UNK_0xe6e4  codep:0x224c parp:0xe6e4 size:0x0012 C-string:'UNK_0xe6e4'
//      UNK_0xe6f8  codep:0x224c parp:0xe6f8 size:0x002e C-string:'UNK_0xe6f8'
//      UNK_0xe728  codep:0x224c parp:0xe728 size:0x0018 C-string:'UNK_0xe728'
//      UNK_0xe742  codep:0x224c parp:0xe742 size:0x00a8 C-string:'UNK_0xe742'
//      UNK_0xe7ec  codep:0x224c parp:0xe7ec size:0x0012 C-string:'UNK_0xe7ec'
//           USE-E  codep:0x224c parp:0xe808 size:0x0054 C-string:'USE_dash_E'
//      UNK_0xe85e  codep:0x224c parp:0xe85e size:0x0092 C-string:'UNK_0xe85e'
//      UNK_0xe8f2  codep:0x224c parp:0xe8f2 size:0x0012 C-string:'UNK_0xe8f2'
//      UNK_0xe906  codep:0x2214 parp:0xe906 size:0x0002 C-string:'UNK_0xe906'
//          CSPEED  codep:0x4a4f parp:0xe913 size:0x000c C-string:'CSPEED'
//      UNK_0xe921  codep:0x1d29 parp:0xe921 size:0x0002 C-string:'UNK_0xe921'
//      UNK_0xe925  codep:0x1d29 parp:0xe925 size:0x0002 C-string:'UNK_0xe925'
//      UNK_0xe929  codep:0x224c parp:0xe929 size:0x0014 C-string:'UNK_0xe929'
//      UNK_0xe93f  codep:0x224c parp:0xe93f size:0x001e C-string:'UNK_0xe93f'
//      UNK_0xe95f  codep:0x224c parp:0xe95f size:0x003a C-string:'UNK_0xe95f'
//      NEST-SETUP  codep:0x4a4f parp:0xe9a5 size:0x0014 C-string:'NEST_dash_SETUP'
//      UNK_0xe9bb  codep:0x224c parp:0xe9bb size:0x002c C-string:'UNK_0xe9bb'
//            NEST  codep:0x224c parp:0xe9f0 size:0x0068 C-string:'NEST'
//      UNK_0xea5a  codep:0x224c parp:0xea5a size:0x0024 C-string:'UNK_0xea5a'
//      UNK_0xea80  codep:0x224c parp:0xea80 size:0x0022 C-string:'UNK_0xea80'
//      UNK_0xeaa4  codep:0x224c parp:0xeaa4 size:0x0034 C-string:'UNK_0xeaa4'
//          JMPSHP  codep:0x224c parp:0xeae3 size:0x0038 C-string:'JMPSHP'
//      UNK_0xeb1d  codep:0x224c parp:0xeb1d size:0x002a C-string:'UNK_0xeb1d'
//         COLLIDE  codep:0x4a4f parp:0xeb53 size:0x0018 C-string:'COLLIDE'
//      UNK_0xeb6d  codep:0x224c parp:0xeb6d size:0x0010 C-string:'UNK_0xeb6d'
//             ?~C  codep:0x4a4f parp:0xeb85 size:0x0010 C-string:'Is_t_C'
//      ?COLLISION  codep:0x224c parp:0xeb97 size:0x00a0 C-string:'IsCOLLISION'
//      UNK_0xec39  codep:0x224c parp:0xec39 size:0x0022 C-string:'UNK_0xec39'
//      ?2NEST.ETC  codep:0x224c parp:0xec5d size:0x004a C-string:'Is2NEST_dot_ETC'
//       ?STARPORT  codep:0x224c parp:0xeca9 size:0x007d C-string:'IsSTARPORT'
//    UNNEST-CLEAN  codep:0x4a4f parp:0xed32 size:0x0014 C-string:'UNNEST_dash_CLEAN'
//  UNNEST-SPACEXY  codep:0x224c parp:0xed48 size:0x0022 C-string:'UNNEST_dash_SPACEXY'
//         ?UNNEST  codep:0x224c parp:0xed6c size:0x0054 C-string:'IsUNNEST'
//  ?DOUBLE-UNNEST  codep:0x224c parp:0xedc2 size:0x0016 C-string:'IsDOUBLE_dash_UNNEST'
//          UNNEST  codep:0x224c parp:0xede3 size:0x006e C-string:'UNNEST'
//      UNK_0xee53  codep:0x224c parp:0xee53 size:0x0028 C-string:'UNK_0xee53'
//        (GET-AUX  codep:0x224c parp:0xee87 size:0x0012 C-string:'_ro_GET_dash_AUX'
//      UNK_0xee9b  codep:0x224c parp:0xee9b size:0x0026 C-string:'UNK_0xee9b'
//             FLY  codep:0x224c parp:0xeec9 size:0x0046 C-string:'FLY'
//      UNK_0xef11  codep:0x224c parp:0xef11 size:0x001a C-string:'UNK_0xef11'
// SET-DESTINATION  codep:0x224c parp:0xef37 size:0x00c0 C-string:'SET_dash_DESTINATION'
//       SETUP-MOV  codep:0x224c parp:0xf003 size:0x009c C-string:'SETUP_dash_MOV'
//     CLEANUP-MOV  codep:0x224c parp:0xf0ab size:0x006e C-string:'CLEANUP_dash_MOV'
//         CHK-MOV  codep:0x224c parp:0xf125 size:0x008e C-string:'CHK_dash_MOV'
//      UNK_0xf1b5  codep:0x224c parp:0xf1b5 size:0x002f C-string:'UNK_0xf1b5'
//           +NEST  codep:0x224c parp:0xf1ee size:0x000a C-string:'_plus_NEST'
//     COME-HITHER  codep:0x224c parp:0xf204 size:0x0000 C-string:'COME_dash_HITHER'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__star_MAPSCALE; // *MAPSCALE
extern const unsigned short int pp_TCLR; // TCLR
extern const unsigned short int pp_IsAUTO; // ?AUTO
extern const unsigned short int pp__ro_FLARE_rc_; // (FLARE)
extern const unsigned short int pp_AVCNT; // AVCNT
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_CXSP; // CXSP
extern const unsigned short int pp_EDL; // EDL
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp__h_VES; // ^VES
extern const unsigned short int pp_DBUF_dash_SEG; // DBUF-SEG
extern const unsigned short int pp_IsWIN; // ?WIN
extern const unsigned short int pp__n_VESS; // #VESS
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_IsFUEL_dash_DIE; // ?FUEL-DIE
extern const unsigned short int pp_IsG_dash_AWARE; // ?G-AWARE
extern const unsigned short int pp_GWF; // GWF
extern const unsigned short int pp_XLLDEST; // XLLDEST
extern const unsigned short int pp_YLLDEST; // YLLDEST
extern const unsigned short int pp_IGLOBAL; // IGLOBAL
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern const unsigned short int pp_FORCEPTASK; // FORCEPTASK
extern const unsigned short int pp_IsPORT; // ?PORT
extern const unsigned short int pp_SKIP2NEST; // SKIP2NEST
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp_IsNEB; // ?NEB
extern const unsigned short int pp_FORCEKEY; // FORCEKEY
extern const unsigned short int pp_SKEY; // SKEY
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_HEADING; // HEADING
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp_TIME_dash_PASSING; // TIME-PASSING
extern const unsigned short int pp__i__dot_VEHICLE_dash_STATUS; // '.VEHICLE-STATUS
extern const unsigned short int pp__i_VEHICLE_dash_CYCLE; // 'VEHICLE-CYCLE
extern const unsigned short int pp_IsSUP; // ?SUP
extern const unsigned short int pp_VSTIME; // VSTIME
extern const unsigned short int pp__10_star_CARGO; // 10*CARGO
extern const unsigned short int pp_SENSE_dash_ADDR; // SENSE-ADDR
extern const unsigned short int pp__10_star_END; // 10*END
extern const unsigned short int pp_ENC_dash_TIME; // ENC-TIME
extern const unsigned short int pp_NAV_dash_TIME; // NAV-TIME
extern const unsigned short int pp_XWLD_c_XPIX; // XWLD:XPIX
extern const unsigned short int pp_YWLD_c_YPIX; // YWLD:YPIX
extern const unsigned short int pp__ro_SYSTEM; // (SYSTEM
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp__ro_ENCOUNTER; // (ENCOUNTER
extern const unsigned short int pp__ro_SHIPBOX; // (SHIPBOX
extern const unsigned short int pp__ro_AORIGINATOR; // (AORIGINATOR
extern const unsigned short int pp_YTABLE; // YTABLE
extern const unsigned short int pp_IsCALLING; // ?CALLING
extern LoadDataType _1BTN; // 1BTN
extern Color BLACK; // BLACK
extern Color DK_dash_GREEN; // DK-GREEN
extern Color GREEN; // GREEN
extern Color RED; // RED
extern Color VIOLET; // VIOLET
extern Color BROWN; // BROWN
extern Color GREY1; // GREY1
extern Color GREY2; // GREY2
extern Color BLUE; // BLUE
extern Color LT_dash_BLUE; // LT-BLUE
extern Color ORANGE; // ORANGE
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void _star__slash_(); // */
void ABS(); // ABS
void M_star_(); // M*
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void D_st_(); // D<
void Draw(); // .
void DrawR(); // .R
void NOP(); // NOP
void PICK(); // PICK
void ROLL(); // ROLL
void D_dash_(); // D-
void D0_eq_(); // D0=
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void DMIN(); // DMIN
void DMAX(); // DMAX
void BIT(); // BIT
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex_(); // +!
void _1_dot_5_ex_(); // 1.5!
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void CMOVE(); // CMOVE
void StoreINST_dash_SPECIES(); // !INST-SPECIES
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void CI_i_(); // CI'
void IsNULL(); // ?NULL
void Is_dash_NULL(); // ?-NULL
void IsCHILD(); // ?CHILD
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IPREV(); // IPREV
void IFIRST(); // IFIRST
void IINSERT(); // IINSERT
void _st_INSERT(); // <INSERT
void IEXTRACT(); // IEXTRACT
void IFIND(); // IFIND
void MAKE1ST(); // MAKE1ST
void IDELETE(); // IDELETE
void EACH(); // EACH
void _star_CREATE(); // *CREATE
void SAVE_dash_OVERLAY(); // SAVE-OVERLAY
void StoreCOLOR(); // !COLOR
void VCLIPSET(); // VCLIPSET
void DCLIPSET(); // DCLIPSET
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void DrawELLIPSE(); // .ELLIPSE
void FILLELLIP(); // FILLELLIP
void FILLCIRC(); // FILLCIRC
void StoreVISWINDOW(); // !VISWINDOW
void _gt_1ICONFONT(); // >1ICONFONT
void GetID(); // @ID
void GetIC(); // @IC
void GetIL(); // @IL
void GetIH(); // @IH
void StoreIX(); // !IX
void StoreIY(); // !IY
void StoreID(); // !ID
void StoreIC(); // !IC
void POINT_gt_ICON(); // POINT>ICON
void DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
void IsICONS_dash_LOCUS(); // ?ICONS-LOCUS
void IsICONS_dash_AT(); // ?ICONS-AT
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void _gt_SND(); // >SND
void POS_dot_PXT(); // POS.PXT
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
void _i_KEY(); // 'KEY
void CFIGARRAYS(); // CFIGARRAYS
void ORGIADDR(); // ORGIADDR
void ORBUP(); // ORBUP
void CONTEXT_dash_CASES(); // CONTEXT-CASES
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
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void U_st_(); // U<
void TIME(); // TIME
void LC_at_(); // LC@
void GetEXECUTE(); // @EXECUTE
void _1_dot_5_at_(); // 1.5@
void _plus__dash__at_(); // +-@
void CI(); // CI
void _gt_V(); // >V
void V_gt_(); // V>
void BFILL(); // BFILL
void LPLOT(); // LPLOT
void LXPLOT(); // LXPLOT
void V_gt_DISPLAY(); // V>DISPLAY
void _ro_XYSCAN(); // (XYSCAN


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xd9dc = 0xd9dc; // UNK_0xd9dc size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xd9e0 = 0xd9e0; // UNK_0xd9e0 size: 2
// {0x8c, 0x63}

const unsigned short int pp_UNK_0xd9e4 = 0xd9e4; // UNK_0xd9e4 size: 2
// {0xf5, 0xff}

const unsigned short int pp_UNK_0xd9e8 = 0xd9e8; // UNK_0xd9e8 size: 2
// {0x90, 0x00}

const unsigned short int pp_UNK_0xd9ec = 0xd9ec; // UNK_0xd9ec size: 2
// {0x01, 0x00}

const unsigned short int pp_UNK_0xd9f0 = 0xd9f0; // UNK_0xd9f0 size: 4
// {0x00, 0x00, 0x00, 0x62}

const unsigned short int pp_UNK_0xd9f6 = 0xd9f6; // UNK_0xd9f6 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xd9fa = 0xd9fa; // UNK_0xd9fa size: 2
// {0xff, 0xff}

const unsigned short int pp_UNK_0xd9fe = 0xd9fe; // UNK_0xd9fe size: 2
// {0x1e, 0x00}

const unsigned short int pp_UNK_0xda02 = 0xda02; // UNK_0xda02 size: 2
// {0xa3, 0xe0}

const unsigned short int pp_UNK_0xda06 = 0xda06; // UNK_0xda06 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xda0a = 0xda0a; // UNK_0xda0a size: 2
// {0x05, 0x00}

const unsigned short int pp_UNK_0xda0e = 0xda0e; // UNK_0xda0e size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xda12 = 0xda12; // UNK_0xda12 size: 6
// {0x00, 0x00, 0x29, 0x1d, 0x3a, 0x20}

const unsigned short int pp_UNK_0xde2a = 0xde2a; // UNK_0xde2a size: 2
// {0x07, 0x00}

const unsigned short int pp_UNK_0xde2e = 0xde2e; // UNK_0xde2e size: 124
// {0x75, 0x00, 0x4c, 0x22, 0xa3, 0x3b, 0x28, 0xde, 0xae, 0x0b, 0xe7, 0x0f, 0xb8, 0x15, 0x50, 0x0e, 0x25, 0x49, 0x2c, 0xde, 0xae, 0x0b, 0xf5, 0x12, 0xfa, 0x15, 0x0a, 0x00, 0x50, 0x0e, 0x28, 0xde, 0x76, 0x6d, 0x4a, 0x17, 0xd0, 0x15, 0xe8, 0xff, 0x28, 0xde, 0xae, 0x0b, 0x90, 0x16, 0x4c, 0x22, 0x1e, 0x75, 0x5d, 0x17, 0x20, 0x00, 0x5f, 0x12, 0xfa, 0x15, 0x08, 0x00, 0x30, 0xde, 0x60, 0x16, 0x04, 0x00, 0x20, 0x0f, 0x5d, 0x17, 0x0b, 0x00, 0x7b, 0x3b, 0x59, 0x81, 0xf3, 0x7b, 0x0d, 0x40, 0x6f, 0x7b, 0xf1, 0x75, 0xfa, 0x15, 0x0c, 0x00, 0x9f, 0x75, 0x6f, 0x7b, 0xb5, 0x7a, 0x60, 0x16, 0x16, 0x00, 0x75, 0x75, 0xb7, 0x7b, 0x60, 0x7a, 0xfa, 0x15, 0x0a, 0x00, 0x9c, 0x7a, 0x5a, 0x7e, 0x60, 0x16, 0x04, 0x00, 0x9c, 0x7a, 0xa9, 0x74, 0x76, 0x6d, 0x90, 0x16}

const unsigned short int pp_UNK_0xe30b = 0xe30b; // UNK_0xe30b size: 24
// {0xc6, 0xbf, 0x3d, 0x7e, 0xba, 0x73, 0xb3, 0x9f, 0x02, 0xda, 0x02, 0x6d, 0xb2, 0xb8, 0xd9, 0xcd, 0x1f, 0x12, 0x2f, 0xe1, 0xdb, 0x2b, 0x38, 0x10}

const unsigned short int pp_UNK_0xe65e = 0xe65e; // UNK_0xe65e size: 16
// {0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0xff, 0x01, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x01, 0xff}

const unsigned short int pp_UNK_0xe921 = 0xe921; // UNK_0xe921 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xe925 = 0xe925; // UNK_0xe925 size: 2
// {0x00, 0x00}


const unsigned short int cc_UNK_0xd9b0 = 0xd9b0; // UNK_0xd9b0
const unsigned short int cc_UNK_0xd9b4 = 0xd9b4; // UNK_0xd9b4
const unsigned short int cc_UNK_0xd9b8 = 0xd9b8; // UNK_0xd9b8
const unsigned short int cc_UNK_0xd9bc = 0xd9bc; // UNK_0xd9bc
const unsigned short int cc_UNK_0xd9c0 = 0xd9c0; // UNK_0xd9c0
const unsigned short int cc_UNK_0xd9c4 = 0xd9c4; // UNK_0xd9c4
const unsigned short int cc_UNK_0xd9c8 = 0xd9c8; // UNK_0xd9c8
const unsigned short int cc_UNK_0xd9cc = 0xd9cc; // UNK_0xd9cc
const unsigned short int cc_UNK_0xd9d0 = 0xd9d0; // UNK_0xd9d0
const unsigned short int cc_UNK_0xd9d4 = 0xd9d4; // UNK_0xd9d4
const unsigned short int cc_UNK_0xd9d8 = 0xd9d8; // UNK_0xd9d8
const unsigned short int cc_UNK_0xe2fb = 0xe2fb; // UNK_0xe2fb
const unsigned short int cc_UNK_0xe2ff = 0xe2ff; // UNK_0xe2ff
const unsigned short int cc_UNK_0xe303 = 0xe303; // UNK_0xe303
const unsigned short int cc_UNK_0xe307 = 0xe307; // UNK_0xe307
const unsigned short int cc_UNK_0xe906 = 0xe906; // UNK_0xe906


// 0xd972: db 0x91 0x01 '  '

// ================================================
// 0xd974: WORD 'UNK_0xd976' codep=0x224c parp=0xd976 params=0 returns=0
// ================================================

void UNK_0xd976() // UNK_0xd976
{
  Push(0xca8c); // probable '!'EXT'
  MODULE(); // MODULE
}


// ================================================
// 0xd97e: WORD 'SHP>C' codep=0x224c parp=0xd980 params=0 returns=0
// ================================================

void SHP_gt_C() // SHP>C
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xd986: WORD 'PLN>C' codep=0x224c parp=0xd988 params=0 returns=0
// ================================================

void PLN_gt_C() // PLN>C
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd98e: WORD 'UNK_0xd990' codep=0x224c parp=0xd990 params=0 returns=0
// ================================================

void UNK_0xd990() // UNK_0xd990
{
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd996: WORD 'UNK_0xd998' codep=0x224c parp=0xd998 params=0 returns=0
// ================================================

void UNK_0xd998() // UNK_0xd998
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd99e: WORD 'UNK_0xd9a0' codep=0x224c parp=0xd9a0 params=0 returns=0
// ================================================

void UNK_0xd9a0() // UNK_0xd9a0
{
  Push(pp__ro_ENCOUNTER); // (ENCOUNTER
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd9a6: WORD 'UNK_0xd9a8' codep=0x224c parp=0xd9a8 params=0 returns=0
// ================================================

void UNK_0xd9a8() // UNK_0xd9a8
{
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xd9ae: WORD 'UNK_0xd9b0' codep=0x2214 parp=0xd9b0
// ================================================
// 0xd9b0: dw 0x0003

// ================================================
// 0xd9b2: WORD 'UNK_0xd9b4' codep=0x2214 parp=0xd9b4
// ================================================
// 0xd9b4: dw 0x0000

// ================================================
// 0xd9b6: WORD 'UNK_0xd9b8' codep=0x2214 parp=0xd9b8
// ================================================
// 0xd9b8: dw 0x004b

// ================================================
// 0xd9ba: WORD 'UNK_0xd9bc' codep=0x2214 parp=0xd9bc
// ================================================
// 0xd9bc: dw 0x0000

// ================================================
// 0xd9be: WORD 'UNK_0xd9c0' codep=0x2214 parp=0xd9c0
// ================================================
// 0xd9c0: dw 0x0016

// ================================================
// 0xd9c2: WORD 'UNK_0xd9c4' codep=0x2214 parp=0xd9c4
// ================================================
// 0xd9c4: dw 0x0190

// ================================================
// 0xd9c6: WORD 'UNK_0xd9c8' codep=0x2214 parp=0xd9c8
// ================================================
// 0xd9c8: dw 0x0040

// ================================================
// 0xd9ca: WORD 'UNK_0xd9cc' codep=0x2214 parp=0xd9cc
// ================================================
// 0xd9cc: dw 0x003e

// ================================================
// 0xd9ce: WORD 'UNK_0xd9d0' codep=0x2214 parp=0xd9d0
// ================================================
// 0xd9d0: dw 0x0009

// ================================================
// 0xd9d2: WORD 'UNK_0xd9d4' codep=0x2214 parp=0xd9d4
// ================================================
// 0xd9d4: dw 0x0008

// ================================================
// 0xd9d6: WORD 'UNK_0xd9d8' codep=0x2214 parp=0xd9d8
// ================================================
// 0xd9d8: dw 0x000c

// ================================================
// 0xd9da: WORD 'UNK_0xd9dc' codep=0x1d29 parp=0xd9dc
// ================================================
// 0xd9dc: db 0x00 0x00 '  '

// ================================================
// 0xd9de: WORD 'UNK_0xd9e0' codep=0x1d29 parp=0xd9e0
// ================================================
// 0xd9e0: db 0x8c 0x63 ' c'

// ================================================
// 0xd9e2: WORD 'UNK_0xd9e4' codep=0x1d29 parp=0xd9e4
// ================================================
// 0xd9e4: db 0xf5 0xff '  '

// ================================================
// 0xd9e6: WORD 'UNK_0xd9e8' codep=0x1d29 parp=0xd9e8
// ================================================
// 0xd9e8: db 0x90 0x00 '  '

// ================================================
// 0xd9ea: WORD 'UNK_0xd9ec' codep=0x1d29 parp=0xd9ec
// ================================================
// 0xd9ec: db 0x01 0x00 '  '

// ================================================
// 0xd9ee: WORD 'UNK_0xd9f0' codep=0x1d29 parp=0xd9f0
// ================================================
// 0xd9f0: db 0x00 0x00 0x00 0x62 '   b'

// ================================================
// 0xd9f4: WORD 'UNK_0xd9f6' codep=0x1d29 parp=0xd9f6
// ================================================
// 0xd9f6: db 0x00 0x00 '  '

// ================================================
// 0xd9f8: WORD 'UNK_0xd9fa' codep=0x1d29 parp=0xd9fa
// ================================================
// 0xd9fa: db 0xff 0xff '  '

// ================================================
// 0xd9fc: WORD 'UNK_0xd9fe' codep=0x1d29 parp=0xd9fe
// ================================================
// 0xd9fe: db 0x1e 0x00 '  '

// ================================================
// 0xda00: WORD 'UNK_0xda02' codep=0x1d29 parp=0xda02
// ================================================
// 0xda02: db 0xa3 0xe0 '  '

// ================================================
// 0xda04: WORD 'UNK_0xda06' codep=0x1d29 parp=0xda06
// ================================================
// 0xda06: db 0x00 0x00 '  '

// ================================================
// 0xda08: WORD 'UNK_0xda0a' codep=0x1d29 parp=0xda0a
// ================================================
// 0xda0a: db 0x05 0x00 '  '

// ================================================
// 0xda0c: WORD 'UNK_0xda0e' codep=0x1d29 parp=0xda0e
// ================================================
// 0xda0e: db 0x00 0x00 '  '

// ================================================
// 0xda10: WORD 'UNK_0xda12' codep=0x1d29 parp=0xda12
// ================================================
// 0xda12: db 0x00 0x00 0x29 0x1d 0x3a 0x20 '  ) : '

// ================================================
// 0xda18: WORD 'UNK_0xda1a' codep=0x744d parp=0xda1a
// ================================================
IFieldType UNK_0xda1a = {SHIPIDX, 0x25, 0x02};

// ================================================
// 0xda1d: WORD 'UNK_0xda1f' codep=0x744d parp=0xda1f
// ================================================
IFieldType UNK_0xda1f = {SHIPIDX, 0x49, 0x01};

// ================================================
// 0xda22: WORD 'UNK_0xda24' codep=0x744d parp=0xda24
// ================================================
IFieldType UNK_0xda24 = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xda27: WORD 'UNK_0xda29' codep=0x744d parp=0xda29
// ================================================
IFieldType UNK_0xda29 = {SHIPIDX, 0x12, 0x01};

// ================================================
// 0xda2c: WORD 'UNK_0xda2e' codep=0x744d parp=0xda2e
// ================================================
IFieldType UNK_0xda2e = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xda31: WORD 'UNK_0xda33' codep=0x744d parp=0xda33
// ================================================
IFieldType UNK_0xda33 = {SHIPIDX, 0x1a, 0x01};

// ================================================
// 0xda36: WORD 'UNK_0xda38' codep=0x744d parp=0xda38
// ================================================
IFieldType UNK_0xda38 = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xda3b: WORD 'UNK_0xda3d' codep=0x744d parp=0xda3d
// ================================================
IFieldType UNK_0xda3d = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xda40: WORD 'UNK_0xda42' codep=0x744d parp=0xda42
// ================================================
IFieldType UNK_0xda42 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xda45: WORD 'UNK_0xda47' codep=0x744d parp=0xda47
// ================================================
IFieldType UNK_0xda47 = {FLUX_NODEIDX, 0x0b, 0x02};

// ================================================
// 0xda4a: WORD 'UNK_0xda4c' codep=0x744d parp=0xda4c
// ================================================
IFieldType UNK_0xda4c = {FLUX_NODEIDX, 0x11, 0x02};

// ================================================
// 0xda4f: WORD 'UNK_0xda51' codep=0x744d parp=0xda51
// ================================================
IFieldType UNK_0xda51 = {ENCOUNTERIDX, 0x0b, 0x01};

// ================================================
// 0xda54: WORD 'UNK_0xda56' codep=0x744d parp=0xda56
// ================================================
IFieldType UNK_0xda56 = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xda59: WORD 'UNK_0xda5b' codep=0x744d parp=0xda5b
// ================================================
IFieldType UNK_0xda5b = {STARSYSTEMIDX, 0x11, 0x01};

// ================================================
// 0xda5e: WORD 'FLAREDATE' codep=0x744d parp=0xda60
// ================================================
IFieldType FLAREDATE = {STARSYSTEMIDX, 0x0b, 0x02};

// ================================================
// 0xda63: WORD 'UNK_0xda65' codep=0x73ea parp=0xda65
// ================================================
LoadDataType UNK_0xda65 = {PLANETIDX, 0x01, 0x01, 0x16, 0x658f};
// 0xda6b: db 0x4d 0x74 0x34 0x14 0x01 'Mt4  '

// ================================================
// 0xda70: WORD 'UNK_0xda72' codep=0x224c parp=0xda72 params=0 returns=2
// ================================================

void UNK_0xda72() // UNK_0xda72
{
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  SWAP(); // SWAP
}


// ================================================
// 0xda7a: WORD 'UNK_0xda7c' codep=0x224c parp=0xda7c params=2 returns=0
// ================================================

void UNK_0xda7c() // UNK_0xda7c
{
  SWAP(); // SWAP
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  StoreD(); // D!
}


// ================================================
// 0xda84: WORD 'UNK_0xda86' codep=0x224c parp=0xda86 params=2 returns=0
// ================================================

void UNK_0xda86() // UNK_0xda86
{
  Push(pp_UNK_0xd9e8); // UNK_0xd9e8
  Store_3(); // !_3
  Push(pp_UNK_0xd9e4); // UNK_0xd9e4
  Store_3(); // !_3
}


// ================================================
// 0xda90: WORD '@XYABS' codep=0x224c parp=0xda92 params=0 returns=2
// ================================================

void GetXYABS() // @XYABS
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
}


// ================================================
// 0xda9c: WORD 'UNK_0xda9e' codep=0x224c parp=0xda9e params=0 returns=2
// ================================================

void UNK_0xda9e() // UNK_0xda9e
{
  SHP_gt_C(); // SHP>C
  UNK_0xda72(); // UNK_0xda72
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdaa6: WORD 'CTXT#' codep=0x224c parp=0xdaa8 params=0 returns=1
// ================================================

void CTXT_n_() // CTXT#
{
  Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
}


// ================================================
// 0xdaae: WORD 'UNK_0xdab0' codep=0x224c parp=0xdab0 params=2 returns=0
// ================================================

void UNK_0xdab0() // UNK_0xdab0
{
  SHP_gt_C(); // SHP>C
  UNK_0xda7c(); // UNK_0xda7c
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdab8: WORD 'UNK_0xdaba' codep=0x224c parp=0xdaba params=1 returns=0
// ================================================

void UNK_0xdaba() // UNK_0xdaba
{
  SHP_gt_C(); // SHP>C
  Push(0x63ef+UNK_0xda1f.offset); // UNK_0xda1f<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdac4: WORD 'UNK_0xdac6' codep=0x224c parp=0xdac6 params=0 returns=1
// ================================================

void UNK_0xdac6() // UNK_0xdac6
{
  CTXT_n_(); // CTXT#
  Push(Pop()==4?1:0); //  4 =
}


// ================================================
// 0xdace: WORD 'UNK_0xdad0' codep=0x224c parp=0xdad0 params=0 returns=0
// ================================================

void UNK_0xdad0() // UNK_0xdad0
{
  GetXYABS(); // @XYABS
  Push(pp_UNK_0xd9fa); // UNK_0xd9fa
  Store_3(); // !_3
  Push(pp_UNK_0xd9f6); // UNK_0xd9f6
  Store_3(); // !_3
}


// ================================================
// 0xdadc: WORD 'UNK_0xdade' codep=0x224c parp=0xdade params=0 returns=1
// ================================================

void UNK_0xdade() // UNK_0xdade
{
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x0020?1:0); //  0x0020 =
}

// 0xdae8: db 0x4c 0x22 0x1e 0x75 0x5d 0x17 0x18 0x00 0x5f 0x12 0xdc 0xda 0x3e 0x13 0x90 0x16 'L" u]   _   >   '

// ================================================
// 0xdaf8: WORD 'UNK_0xdafa' codep=0x224c parp=0xdafa params=0 returns=1
// ================================================

void UNK_0xdafa() // UNK_0xdafa
{
  CTXT_n_(); // CTXT#
  Push(Pop()==3?1:0); //  3 =
}


// ================================================
// 0xdb02: WORD 'UNK_0xdb04' codep=0x224c parp=0xdb04
// ================================================

void UNK_0xdb04() // UNK_0xdb04
{
  Push(pp_UNK_0xd9f0); // UNK_0xd9f0
  Get_gt_C_plus_S(); // @>C+S
  CI(); // CI
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _1_dot_5_ex_(); // 1.5!
  IOPEN(); // IOPEN
  Push(0x0020);
  Push(0);
  IFIND(); // IFIND
  Pop(); // DROP
  CI(); // CI
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_ex_(); // 1.5!
  UNK_0xd9a8(); // UNK_0xd9a8
  Push(pp_GWF); // GWF
  OFF(); // OFF
  Push(pp_IsG_dash_AWARE); // ?G-AWARE
  OFF(); // OFF
  Push(pp_IsFUEL_dash_DIE); // ?FUEL-DIE
  OFF(); // OFF
}


// ================================================
// 0xdb30: WORD 'UNK_0xdb32' codep=0x224c parp=0xdb32
// ================================================

void UNK_0xdb32() // UNK_0xdb32
{
  Push(pp_IsPORT); // ?PORT
  OFF(); // OFF
  Push(pp_UNK_0xd9ec); // UNK_0xd9ec
  OFF(); // OFF
  UNK_0xd990(); // UNK_0xd990
  UNK_0xda72(); // UNK_0xda72
  UNK_0xda86(); // UNK_0xda86
  ICLOSE(); // ICLOSE
  Push(0xc885); // probable 'DEPART'
  MODULE(); // MODULE
  Push2Words("NULL");
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_ex_(); // 1.5!
  Push2Words("NULL");
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _1_dot_5_ex_(); // 1.5!
  Push(pp_UNK_0xda0e); // UNK_0xda0e
  OFF(); // OFF
  Push(pp_UNK_0xd9ec); // UNK_0xd9ec
  OFF(); // OFF
}

// 0xdb5e: db 0x4c 0x22 0x5d 0x17 0x78 0xec 0x41 0x0e 0x2e 0x62 0xac 0x6d 0x56 0x58 0x76 0x6d 0x90 0x16 'L"] x A .b mVXvm  '

// ================================================
// 0xdb70: WORD 'UNK_0xdb72' codep=0x224c parp=0xdb72 params=0 returns=0
// ================================================

void UNK_0xdb72() // UNK_0xdb72
{
  unsigned short int a;
  CTXT_n_(); // CTXT#
  Push(3);
  _st_(); // <
  Push(Read16(pp__n_AUX) & (Read16(pp__n_AUX)==5?1:0)); // #AUX @ #AUX @ 5 = AND
  if (Pop() == 0) return;
  SetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_UNK_0xd9dc)); // UNK_0xd9dc @
  a = Pop(); // >R
  Push(Read16(pp_XABS)); // XABS @
  Push(0x0024);
  Push(a); // I
  _star__slash_(); // */
  Push(0xffdb);
  MAX(); // MAX
  Push(0x0024);
  MIN(); // MIN
  Push(Pop() + 0x0078); //  0x0078 +
  Push(Read16(pp_YABS)); // YABS @
  Push(0x0024);
  Push(a); // R>
  _star__slash_(); // */
  Push(0xffdd);
  MAX(); // MAX
  Push(0x0023);
  MIN(); // MIN
  Push(Pop() + 0x00a1); //  0x00a1 +
  LXPLOT(); // LXPLOT
}


// ================================================
// 0xdbd0: WORD 'UNK_0xdbd2' codep=0x744d parp=0xdbd2
// ================================================
IFieldType UNK_0xdbd2 = {ENCOUNTERIDX, 0x13, 0x01};

// ================================================
// 0xdbd5: WORD 'UNK_0xdbd7' codep=0x744d parp=0xdbd7
// ================================================
IFieldType UNK_0xdbd7 = {ENCOUNTERIDX, 0x14, 0x01};

// ================================================
// 0xdbda: WORD 'UNK_0xdbdc' codep=0x744d parp=0xdbdc
// ================================================
IFieldType UNK_0xdbdc = {ORIGINATORIDX, 0x12, 0x01};

// ================================================
// 0xdbdf: WORD 'UNK_0xdbe1' codep=0x744d parp=0xdbe1
// ================================================
IFieldType UNK_0xdbe1 = {ASSIGN_CREWIDX, 0x17, 0x03};

// ================================================
// 0xdbe4: WORD 'UNK_0xdbe6' codep=0x744d parp=0xdbe6
// ================================================
IFieldType UNK_0xdbe6 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xdbe9: WORD 'UNK_0xdbeb' codep=0x224c parp=0xdbeb params=0 returns=0
// ================================================

void UNK_0xdbeb() // UNK_0xdbeb
{
  IsCHILD(); // ?CHILD
  if (Pop() == 0) return;
  IOPEN(); // IOPEN
  do
  {
    GetINST_dash_CLASS(); // @INST-CLASS
    Push(Pop()==0x0019?1:0); //  0x0019 =
    if (Pop() != 0)
    {
      IDELETE(); // IDELETE
      Push(0);
    } else
    {
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
    }
    IsNULL(); // ?NULL
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdc17: WORD 'UNK_0xdc19' codep=0x224c parp=0xdc19 params=0 returns=0
// ================================================

void UNK_0xdc19() // UNK_0xdc19
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(4);
  Push(6);
  WITHIN(); // WITHIN
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop() | (Pop()==0x000b?1:0)); //   0x000b = OR
  if (Pop() == 0) return;
  Push(0);
  Push(0x07d0);
  RRND(); // RRND
  Push(0);
  Push(0x06e0);
  RRND(); // RRND
  UNK_0xda7c(); // UNK_0xda7c
}


// ================================================
// 0xdc43: WORD 'UNK_0xdc45' codep=0x224c parp=0xdc45 params=0 returns=0
// ================================================

void UNK_0xdc45() // UNK_0xdc45
{
  SHP_gt_C(); // SHP>C
  Push(((Read16(0x63ef+UNK_0xda33.offset)&0xFF) & 7) * 0x01f4); // UNK_0xda33<IFIELD> C@ 7 AND 0x01f4 *
  Push(0x63ef+UNK_0xda2e.offset); // UNK_0xda2e<IFIELD>
  Store_3(); // !_3
  Push(Read16(0x63ef+UNK_0xda38.offset)); // UNK_0xda38<IFIELD> @
  Push((Read16(0x63ef+UNK_0xda29.offset)&0xFF) & 7); // UNK_0xda29<IFIELD> C@ 7 AND
  Push(Read16(regsp)); // DUP
  Push((Pop() + 1) * 0x00fa); //  1+ 0x00fa *
  _star__slash_(); // */
  Push(0x63ef+UNK_0xda29.offset); // UNK_0xda29<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdc79: WORD 'PS>C' codep=0x4a4f parp=0xdc82
// ================================================

void PS_gt_C() // PS>C
{
  switch(Pop()) // PS>C
  {
  case 0:
    SetColor(GREY2);
    break;
  case 1:
    SetColor(VIOLET);
    break;
  case 2:
    SetColor(BLUE);
    break;
  case 3:
    SetColor(WHITE);
    break;
  case 4:
    SetColor(ORANGE);
    break;
  default:
    SetColor(BROWN);
    break;

  }
}

// ================================================
// 0xdc9a: WORD '>CONS-DISP' codep=0x224c parp=0xdc9c params=0 returns=0
// ================================================

void _gt_CONS_dash_DISP() // >CONS-DISP
{
  UNK_0xdac6(); // UNK_0xdac6
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  _gt_1ICONFONT(); // >1ICONFONT
  Push(8);
  Push(0x0030);
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  StoreD(); // D!
  Push(8);
  Push(0x0020);
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  StoreD(); // D!
  Push(pp_XLLDEST); // XLLDEST
  OFF(); // OFF
  Push(pp_YLLDEST); // YLLDEST
  OFF(); // OFF
}


// ================================================
// 0xdcc4: WORD 'UNK_0xdcc6' codep=0x224c parp=0xdcc6
// ================================================

void UNK_0xdcc6() // UNK_0xdcc6
{
  UNK_0xd9a0(); // UNK_0xd9a0
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==0x0013?1:0); //  0x0013 =
  if (Pop() != 0)
  {
    Push(pp_SKIP2NEST); // SKIP2NEST
    ON_3(); // ON_3
  }
  UNK_0xda72(); // UNK_0xda72
  UNK_0xda86(); // UNK_0xda86
  Push(Read16(0x63ef+UNK_0xdbd2.offset)&0xFF); // UNK_0xdbd2<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(Pop() - (Read16(0x63ef+UNK_0xdbd7.offset)&0xFF)); //  UNK_0xdbd7<IFIELD> C@ -
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push(Pop() | (Pop()==0x00ff?1:0)); //   0x00ff = OR
  Push(Read16(regsp)); // DUP
  Push(0x63ef+UNK_0xda56.offset); // UNK_0xda56<IFIELD>
  C_ex_(); // C!
  Push(!Pop() & Read16(pp_UNK_0xd9ec) | Read16(pp_SKIP2NEST)); //  NOT UNK_0xd9ec @ AND SKIP2NEST @ OR
  Push(pp_SKIP2NEST); // SKIP2NEST
  Store_3(); // !_3
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(pp_EDL) - (Read16(0x63ef+UNK_0xdbdc.offset)&0xFF)); // EDL @ UNK_0xdbdc<IFIELD> C@ -
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  Push(Pop() * 2 - 1); //  2* 1-
  SWAP(); // SWAP
  ABS(); // ABS
  Push(3);
  _slash_(); // /
  Push(5);
  MAX(); // MAX
  Push(Pop() * Pop()); // *
  Push(Pop() + (Read16(0x63ef+UNK_0xdbdc.offset)&0xFF)); //  UNK_0xdbdc<IFIELD> C@ +
  Push(0x0064);
  MIN(); // MIN
  Push(0);
  MAX(); // MAX
  Push(0x63ef+UNK_0xdbdc.offset); // UNK_0xdbdc<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  UNK_0xdbeb(); // UNK_0xdbeb
  UNK_0xdc19(); // UNK_0xdc19
  ICLOSE(); // ICLOSE
  Push2Words("NULL");
  Push(pp__ro_ENCOUNTER); // (ENCOUNTER
  _1_dot_5_ex_(); // 1.5!
  Push(0xc1f3); // probable '>HAIL'
  MODULE(); // MODULE
  Push2Words("NULL");
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  _1_dot_5_ex_(); // 1.5!
  Push2Words("NULL");
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
  UNK_0xdc45(); // UNK_0xdc45
}


// ================================================
// 0xdd68: WORD 'UNK_0xdd6a' codep=0x224c parp=0xdd6a
// ================================================

void UNK_0xdd6a() // UNK_0xdd6a
{
  Push(pp_UNK_0xd9f0); // UNK_0xd9f0
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_ENCOUNTER); // (ENCOUNTER
  _1_dot_5_ex_(); // 1.5!
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  if (Pop() != 0)
  {
    Push(0x3a48); // probable 'NOP'
    Push(pp_UNK_0xda02); // UNK_0xda02
    Store_3(); // !_3
  }
  Push(pp_AVCNT); // AVCNT
  OFF(); // OFF
  UNK_0xd9a0(); // UNK_0xd9a0
  GetINST_dash_SPECIES(); // @INST-SPECIES
  ORGIADDR(); // ORGIADDR
  _1_dot_5_at_(); // 1.5@
  Push(Read16(0x63ef+UNK_0xda51.offset)&0xFF); // UNK_0xda51<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xda0e); // UNK_0xda0e
  Store_3(); // !_3
  Push(Pop() + 1); //  1+
  Push(pp__n_VESS); // #VESS
  OFF(); // OFF
  Push(pp_IsCALLING); // ?CALLING
  OFF(); // OFF
  Push(0xcac9); // probable '+A-VESS'
  MODULE(); // MODULE
  Push(pp_IsCALLING); // ?CALLING
  ON_3(); // ON_3
  ICLOSE(); // ICLOSE
  Push(pp__h_VES); // ^VES
  OFF(); // OFF
  Push(0xc195); // probable 'OVINIT-COMM'
  MODULE(); // MODULE
  Push(0xc938); // probable 'C&C'
  MODULE(); // MODULE
}


// ================================================
// 0xddc2: WORD 'UNK_0xddc4' codep=0x224c parp=0xddc4 params=0 returns=0
// ================================================

void UNK_0xddc4() // UNK_0xddc4
{
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  OFF(); // OFF
  Push(pp_IsPORT); // ?PORT
  ON_3(); // ON_3
  Push(2);
  UNK_0xdaba(); // UNK_0xdaba
  Push(2);
  Push(pp_HEADING); // HEADING
  Store_3(); // !_3
}


// ================================================
// 0xddd8: WORD 'UNK_0xddda' codep=0x224c parp=0xddda
// ================================================

void UNK_0xddda() // UNK_0xddda
{
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_3(); // ON_3
  CFIGARRAYS(); // CFIGARRAYS
  Push(2);
  UNK_0xdaba(); // UNK_0xdaba
  Push(2);
  Push(pp_HEADING); // HEADING
  Store_3(); // !_3
  Push2Words("NULL");
  UNK_0xda86(); // UNK_0xda86
}


// ================================================
// 0xddf0: WORD 'UNK_0xddf2' codep=0x224c parp=0xddf2
// ================================================

void UNK_0xddf2() // UNK_0xddf2
{
  UNK_0xd998(); // UNK_0xd998
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  Push(0x0018);
  GetINST_dash_SPECIES(); // @INST-SPECIES
  IOPEN(); // IOPEN
  Push(1);
  _star_CREATE(); // *CREATE
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  Store_3(); // !_3
  Push2Words("NULL");
  UNK_0xda7c(); // UNK_0xda7c
  UNK_0xd9a8(); // UNK_0xd9a8
}


// ================================================
// 0xde10: WORD 'UNK_0xde12' codep=0x224c parp=0xde12 params=3 returns=0
// ================================================

void UNK_0xde12() // UNK_0xde12
{
  UNK_0xd998(); // UNK_0xd998
  IOPEN(); // IOPEN
  Push(0x0018);
  Push(0);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
  }
  UNK_0xd9a8(); // UNK_0xd9a8
}


// ================================================
// 0xde28: WORD 'UNK_0xde2a' codep=0x1d29 parp=0xde2a
// ================================================
// 0xde2a: db 0x07 0x00 '  '

// ================================================
// 0xde2c: WORD 'UNK_0xde2e' codep=0x1d29 parp=0xde2e
// ================================================
// 0xde2e: db 0x75 0x00 0x4c 0x22 0xa3 0x3b 0x28 0xde 0xae 0x0b 0xe7 0x0f 0xb8 0x15 0x50 0x0e 0x25 0x49 0x2c 0xde 0xae 0x0b 0xf5 0x12 0xfa 0x15 0x0a 0x00 0x50 0x0e 0x28 0xde 0x76 0x6d 0x4a 0x17 0xd0 0x15 0xe8 0xff 0x28 0xde 0xae 0x0b 0x90 0x16 0x4c 0x22 0x1e 0x75 0x5d 0x17 0x20 0x00 0x5f 0x12 0xfa 0x15 0x08 0x00 0x30 0xde 0x60 0x16 0x04 0x00 0x20 0x0f 0x5d 0x17 0x0b 0x00 0x7b 0x3b 0x59 0x81 0xf3 0x7b 0x0d 0x40 0x6f 0x7b 0xf1 0x75 0xfa 0x15 0x0c 0x00 0x9f 0x75 0x6f 0x7b 0xb5 0x7a 0x60 0x16 0x16 0x00 0x75 0x75 0xb7 0x7b 0x60 0x7a 0xfa 0x15 0x0a 0x00 0x9c 0x7a 0x5a 0x7e 0x60 0x16 0x04 0x00 0x9c 0x7a 0xa9 0x74 0x76 0x6d 0x90 0x16 'u L" ;(       P %I,         P ( vmJ     (     L" u]   _     0 `     ]   {;Y  { @o{ u     uo{ z`   uu {`z     zZ~`    z tvm  '

// ================================================
// 0xdeaa: WORD 'UNK_0xdeac' codep=0x224c parp=0xdeac params=0 returns=0
// ================================================

void UNK_0xdeac() // UNK_0xdeac
{
  IOPEN(); // IOPEN

  label3:
  Is_dash_NULL(); // ?-NULL
  if (Pop() == 0) goto label1;
  IEXTRACT(); // IEXTRACT
  CI_i_(); // CI'
  _st_INSERT(); // <INSERT
  ICLOSE(); // ICLOSE
  IsFIRST(); // ?FIRST
  if (Pop() != 0)
  {
    IPREV(); // IPREV
    MAKE1ST(); // MAKE1ST
    INEXT(); // INEXT
  }
  IOPEN(); // IOPEN
  goto label3;

  label1:
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
}


// ================================================
// 0xded4: WORD 'UNK_0xded6' codep=0x224c parp=0xded6 params=3 returns=0
// ================================================

void UNK_0xded6() // UNK_0xded6
{
  Push(pp_UNK_0xde2a); // UNK_0xde2a
  OFF(); // OFF
  UNK_0xd998(); // UNK_0xd998
  Push(Read16(0x63ef+UNK_0xda5b.offset)&0xFF); // UNK_0xda5b<IFIELD> C@
  Push(pp_UNK_0xde2e); // UNK_0xde2e
  Store_3(); // !_3
  IOPEN(); // IOPEN
  Push(0xdaea);
  Push(0xde5e);
  EACH(); // EACH
  UNK_0xd9a8(); // UNK_0xd9a8
}


// ================================================
// 0xdef4: WORD 'UNK_0xdef6' codep=0x224c parp=0xdef6 params=0 returns=0
// ================================================

void UNK_0xdef6() // UNK_0xdef6
{
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x000b?1:0); //  0x000b =
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop() & (Pop()==4?1:0)); //   4 = AND
  if (Pop() != 0)
  {
    UNK_0xdeac(); // UNK_0xdeac
    return;
  }
  INEXT(); // INEXT
}


// ================================================
// 0xdf14: WORD 'UNK_0xdf16' codep=0x224c parp=0xdf16 params=0 returns=0
// ================================================

void UNK_0xdf16() // UNK_0xdf16
{
  UNK_0xd998(); // UNK_0xd998
  IOPEN(); // IOPEN

  label2:
  IsLAST(); // ?LAST
  Push(!Pop()); //  NOT
  if (Pop() == 0) goto label1;
  UNK_0xdef6(); // UNK_0xdef6
  goto label2;

  label1:
  Is_dash_NULL(); // ?-NULL
  if (Pop() != 0)
  {
    UNK_0xdef6(); // UNK_0xdef6
  }
  UNK_0xd9a8(); // UNK_0xd9a8
}

// 0xdf34: db 0x4c 0x22 0x96 0xd9 0x70 0xda 0xc9 0x79 0x90 0x16 'L"  p  y  '

// ================================================
// 0xdf3e: WORD 'UNK_0xdf40' codep=0x224c parp=0xdf40
// ================================================

void UNK_0xdf40() // UNK_0xdf40
{
  Push(Read16(cc_UNK_0xd9c4) - 5); // UNK_0xd9c4 5 -
  Push(Read16(regsp)); // DUP
  Push(-Pop()); //  NEGATE
  SWAP(); // SWAP
  _2DUP(); // 2DUP
  RRND(); // RRND
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
  RRND(); // RRND
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xdf5c: WORD 'UNK_0xdf5e' codep=0x224c parp=0xdf5e
// ================================================

void UNK_0xdf5e() // UNK_0xdf5e
{
  unsigned short int a;
  Push(Read16(0x63ef+INST_dash_QTY.offset) * 4 + 2); // INST-QTY<IFIELD> @ 4 * 2+
  a = Pop(); // >R
  Push(-a); // I NEGATE
  Push(a + 1); // I 1+
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(Read16(cc_UNK_0xd9c4)); // UNK_0xd9c4
  Push(0x0024);
  _star__slash_(); // */
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
  Push(a * a); // I R> *
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(0);
  SQRT(); // SQRT
  Push(0);
  Push(2);
  RRND(); // RRND
  Push(Pop() * 2 - 1); //  2* 1-
  Push(Pop() * Pop()); // *
  Push(Read16(cc_UNK_0xd9c4)); // UNK_0xd9c4
  Push(0x0024);
  _star__slash_(); // */
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xdfae: WORD 'UNK_0xdfb0' codep=0x224c parp=0xdfb0 params=0 returns=0
// ================================================

void UNK_0xdfb0() // UNK_0xdfb0
{
  IOPEN(); // IOPEN
  UNK_0xdade(); // UNK_0xdade
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    UNK_0xdf5e(); // UNK_0xdf5e
    return;
  }
  Push2Words("NULL");
  UNK_0xda7c(); // UNK_0xda7c
}


// ================================================
// 0xdfc6: WORD '>XY' codep=0x4a4f parp=0xdfce
// ================================================

void _gt_XY() // >XY
{
  switch(Pop()) // >XY
  {
  case 11:
    UNK_0xdfb0(); // UNK_0xdfb0
    break;
  case 61:
    UNK_0xdf40(); // UNK_0xdf40
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xdfda: WORD 'UNK_0xdfdc' codep=0x224c parp=0xdfdc params=0 returns=0
// ================================================

void UNK_0xdfdc() // UNK_0xdfdc
{
  UNK_0xd998(); // UNK_0xd998
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    do
    {
      GetINST_dash_CLASS(); // @INST-CLASS
      _gt_XY(); // >XY case
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
    } while(Pop() == 0);
    ICLOSE(); // ICLOSE
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdff8: WORD 'SC>C' codep=0x4a4f parp=0xe001
// ================================================

void SC_gt_C() // SC>C
{
  switch(Pop()) // SC>C
  {
  case 77:
    SetColor(RED);
    break;
  case 75:
    SetColor(ORANGE);
    break;
  case 71:
    SetColor(YELLOW);
    break;
  case 70:
    SetColor(WHITE);
    break;
  case 65:
    SetColor(GREEN);
    break;
  case 66:
    SetColor(LT_dash_BLUE);
    break;
  default:
    SetColor(BLUE);
    break;

  }
}

// ================================================
// 0xe01d: WORD 'UNK_0xe01f' codep=0x224c parp=0xe01f
// ================================================

void UNK_0xe01f() // UNK_0xe01f
{
  SC_gt_C(); // SC>C case
  StoreCOLOR(); // !COLOR
  Push(0x0078);
  Push(0x00a1);
  Push(2);
  FILLCIRC(); // FILLCIRC
}


// ================================================
// 0xe031: WORD 'UNK_0xe033' codep=0x224c parp=0xe033
// ================================================

void UNK_0xe033() // UNK_0xe033
{
  do
  {
    GetINST_dash_CLASS(); // @INST-CLASS
    Push(Pop()==0x000b?1:0); //  0x000b =
    IOPEN(); // IOPEN
    UNK_0xdade(); // UNK_0xdade
    Push(Pop() & Pop()); // AND
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      LoadData(UNK_0xda65); // from 'PLANET'
      Push(Read16(Pop())&0xFF); //  C@
      PS_gt_C(); // PS>C case
      StoreCOLOR(); // !COLOR
    }
    ICLOSE(); // ICLOSE
    Push(Read16(regsp)); // DUP
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
      Push(Pop() | Pop()); // OR
    } else
    {
      Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
      Push(0x0024);
      Push(Read16(cc_UNK_0xd9c4)); // UNK_0xd9c4
      _star__slash_(); // */
      Push(Pop() + 0x0078); //  0x0078 +
      Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
      Push(0x0024);
      Push(Read16(cc_UNK_0xd9c4)); // UNK_0xd9c4
      _star__slash_(); // */
      Push(Pop() + 0x00a1); //  0x00a1 +
      Push(1);
      Push(1);
      Push(1);
      FILLELLIP(); // FILLELLIP
      INEXT(); // INEXT
    }
  } while(Pop() == 0);
}


// ================================================
// 0xe097: WORD '.AUXSYS' codep=0x224c parp=0xe0a3 params=0 returns=0
// ================================================
// entry

void DrawAUXSYS() // .AUXSYS
{
  unsigned short int i, imax;
  Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
  Push(Read16(pp_CONTEXT_dash_ID_n_)==2?1:0); // CONTEXT-ID# @ 2 =
  if (Pop() == 0) return;
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
  SetColor(BLACK);
  ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
  Push(5);
  Push(pp__n_AUX); // #AUX
  Store_3(); // !_3
  UNK_0xd998(); // UNK_0xd998
  GetINST_dash_SPECIES(); // @INST-SPECIES
  UNK_0xe01f(); // UNK_0xe01f
  Push(Read16(0x63ef+UNK_0xda5b.offset)&0xFF); // UNK_0xda5b<IFIELD> C@
  IOPEN(); // IOPEN
  Push(9);
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    BIT(); // BIT
    OVER(); // OVER
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      SetColor(GREY1);
      StoreCOLOR(); // !COLOR
      Push(0x0078);
      Push(0x00a1);
      Push(i * 4 + 1); // I 4 * 1+
      Push(1);
      Push(1);
      DrawELLIPSE(); // .ELLIPSE
      UNK_0xe033(); // UNK_0xe033
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  IFIRST(); // IFIRST
  UNK_0xd9a8(); // UNK_0xd9a8
  UNK_0xdb72(); // UNK_0xdb72
}


// ================================================
// 0xe105: WORD 'UNK_0xe107' codep=0x224c parp=0xe107
// ================================================

void UNK_0xe107() // UNK_0xe107
{
  Push(Read16(pp_UNK_0xda12)); // UNK_0xda12 @
  Push(pp_IsNEB); // ?NEB
  Store_3(); // !_3
  Push(pp_UNK_0xd9f0); // UNK_0xd9f0
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_ex_(); // 1.5!
  Push(0xe0a3); // probable '.AUXSYS'
  Push(pp_UNK_0xda02); // UNK_0xda02
  Store_3(); // !_3
  UNK_0xddf2(); // UNK_0xddf2
  UNK_0xded6(); // UNK_0xded6
  UNK_0xdfdc(); // UNK_0xdfdc
  DrawAUXSYS(); // .AUXSYS
}


// ================================================
// 0xe129: WORD 'UNK_0xe12b' codep=0x224c parp=0xe12b
// ================================================

void UNK_0xe12b() // UNK_0xe12b
{
  UNK_0xd998(); // UNK_0xd998
  UNK_0xda72(); // UNK_0xda72
  UNK_0xda86(); // UNK_0xda86
  ICLOSE(); // ICLOSE
  UNK_0xdf16(); // UNK_0xdf16
  UNK_0xde12(); // UNK_0xde12
  Push2Words("NULL");
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_ex_(); // 1.5!
  Push(0xbef3); // probable 'OV/STATUS'
  MODULE(); // MODULE
  Push(-1);
  Push(pp__ro_FLARE_rc_); // (FLARE)
  Store_3(); // !_3
  Push(0x3a48); // probable 'NOP'
  Push(pp_UNK_0xda02); // UNK_0xda02
  Store_3(); // !_3
}

// 0xe153: db 0x4c 0x22 0x20 0x0f 0x7f 0x0e 0x73 0x3b 0x3d 0x0f 0xc4 0x0f 0xe7 0x0f 0xd8 0x4a 0xf2 0x0e 0x41 0x0e 0xb3 0x0f 0x7f 0x0e 0x3d 0x0f 0x73 0x3b 0xc4 0x0f 0x41 0x0e 0xb3 0x0f 0x92 0x0f 0x20 0x0f 0xa5 0x4b 0x20 0x0f 0xf2 0x0e 0xe7 0x0f 0xd8 0x4a 0x20 0x0f 0x3d 0x0f 0xd8 0x4a 0xfa 0x15 0x04 0x00 0xc6 0x11 0xf2 0x0e 0x20 0x0f 0x3d 0x0f 0xd8 0x4a 0xfa 0x15 0x04 0x00 0xc6 0x11 0x90 0x16 'L"   s;=      J  A    = s;  A        K       J  =  J          =  J        '

// ================================================
// 0xe19f: WORD 'UNK_0xe1a1' codep=0x224c parp=0xe1a1
// ================================================

void UNK_0xe1a1() // UNK_0xe1a1
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NAV_dash_TIME); // NAV-TIME
  _2_at_(); // 2@
  D_gt_(); // D>
}


// ================================================
// 0xe1ad: WORD '>[CONTEXT]' codep=0x224c parp=0xe1af params=0 returns=0
// ================================================

void _gt__bo_CONTEXT_bc_() // >[CONTEXT]
{
  Push(Read16(pp_UNK_0xd9e0)); // UNK_0xd9e0 @

  label2:
  Push(Read16(pp_CXSP)); // CXSP @
  OVER(); // OVER
  U_st_(); // U<
  if (Pop() == 0) goto label1;
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
  Pop(); // DROP
}

// 0xe1c9: db 0x4c 0x22 0xed 0x62 0x02 0x7a 0x90 0x16 'L" b z  '

// ================================================
// 0xe1d1: WORD '![CONTEXT]' codep=0x224c parp=0xe1d3 params=0 returns=0
// ================================================

void Store_bo_CONTEXT_bc_() // ![CONTEXT]
{
  Push(Read16(pp_CXSP)); // CXSP @
  Push(pp_UNK_0xd9e0); // UNK_0xd9e0
  Store_3(); // !_3
}


// ================================================
// 0xe1dd: WORD 'RADII' codep=0x4a4f parp=0xe1e7
// ================================================

void RADII() // RADII
{
  switch(Pop()) // RADII
  {
  case 1:
    Push(Read16(cc_UNK_0xd9bc)); // UNK_0xd9bc
    break;
  case 2:
    Push(Read16(cc_UNK_0xd9c4)); // UNK_0xd9c4
    break;
  case 4:
    Push(Read16(cc_UNK_0xd9c0)); // UNK_0xd9c0
    break;
  case 5:
    Push(Read16(cc_UNK_0xd9b4)); // UNK_0xd9b4
    break;
  default:
    Push(Read16(cc_UNK_0xd9b8)); // UNK_0xd9b8
    break;

  }
}

// ================================================
// 0xe1fb: WORD 'IVAR' codep=0x4a4f parp=0xe204
// ================================================

void IVAR() // IVAR
{
  switch(Pop()) // IVAR
  {
  case 0:
    Push(pp__ro_PLANET); // (PLANET
    break;
  case 1:
    Push(pp__ro_ORBIT_rc_); // (ORBIT)
    break;
  case 2:
    Push(pp__ro_SYSTEM); // (SYSTEM
    break;
  case 4:
    Push(pp__ro_ENCOUNTER); // (ENCOUNTER
    break;
  default:
    Push(pp__ro_SHIPBOX); // (SHIPBOX
    break;

  }
}

// ================================================
// 0xe218: WORD '#CPARMS' codep=0x224c parp=0xe21a
// ================================================

void _n_CPARMS() // #CPARMS
{
  unsigned short int a, b;
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  GetINST_dash_CLASS(); // @INST-CLASS
  CONTEXT_dash_CASES(); // CONTEXT-CASES
  Push(Read16(regsp)); // DUP
  RADII(); // RADII case
  a = Pop(); // >R
  b = Pop(); // >R
  Push(b); // I
  IVAR(); // IVAR case
  Push(b); // R>
  Push(a); // R>
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe238: WORD '!CPARMS' codep=0x224c parp=0xe23a
// ================================================

void StoreCPARMS() // !CPARMS
{
  unsigned short int a;
  Push(pp_UNK_0xd9dc); // UNK_0xd9dc
  Store_3(); // !_3
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Store_3(); // !_3
  a = Pop(); // >R
  _2DUP(); // 2DUP
  Push(a); // R>
  _1_dot_5_ex_(); // 1.5!
  Push(pp__ro_SHIPBOX); // (SHIPBOX
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xe250: WORD 'UNK_0xe252' codep=0x224c parp=0xe252 params=0 returns=2
// ================================================

void UNK_0xe252() // UNK_0xe252
{
  GetXYABS(); // @XYABS
}


// ================================================
// 0xe256: WORD 'UNK_0xe258' codep=0x224c parp=0xe258 params=0 returns=2
// ================================================

void UNK_0xe258() // UNK_0xe258
{
  UNK_0xd998(); // UNK_0xd998
  UNK_0xda72(); // UNK_0xda72
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe260: WORD 'UNK_0xe262' codep=0x224c parp=0xe262 params=0 returns=2
// ================================================

void UNK_0xe262() // UNK_0xe262
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    UNK_0xe258(); // UNK_0xe258
    return;
  }
  UNK_0xd9a0(); // UNK_0xd9a0
  UNK_0xda72(); // UNK_0xda72
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe27a: WORD 'XYCASE' codep=0x4a4f parp=0xe285
// ================================================

void XYCASE() // XYCASE
{
  switch(Pop()) // XYCASE
  {
  case 3:
    UNK_0xe252(); // UNK_0xe252
    break;
  case 4:
    UNK_0xe262(); // UNK_0xe262
    break;
  default:
    UNK_0xe258(); // UNK_0xe258
    break;

  }
}

// ================================================
// 0xe291: WORD 'UNK_0xe293' codep=0x224c parp=0xe293
// ================================================

void UNK_0xe293() // UNK_0xe293
{
  _gt_DISPLAY(); // >DISPLAY
  Push(3);
  SetColor(GREY1);
  Push(0x00c6);
  Push(0x0016);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  Push(3);
  SetColor(GREY1);
  Push(0x00c6);
  Push(0x0030);
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  UNK_0xe1a1(); // UNK_0xe1a1
  if (Pop() != 0)
  {
    CTXT_n_(); // CTXT#
    XYCASE(); // XYCASE case
  } else
  {
    Push(0);
    Push(0x06dd); // probable 'R/W'
    RRND(); // RRND
    Push(0);
    Push(0x07cd);
    RRND(); // RRND
  }
  Push(Pop() + 3); //  3 +
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
  _slash_(); // /
  SWAP(); // SWAP
  Push(Pop() + 3); //  3 +
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
  _slash_(); // /
  Push(3);
  DrawR(); // .R
  Push(0x0030);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  Draw(); // .
}


// ================================================
// 0xe2f9: WORD 'UNK_0xe2fb' codep=0x2214 parp=0xe2fb
// ================================================
// 0xe2fb: dw 0x0048

// ================================================
// 0xe2fd: WORD 'UNK_0xe2ff' codep=0x2214 parp=0xe2ff
// ================================================
// 0xe2ff: dw 0x0078

// ================================================
// 0xe301: WORD 'UNK_0xe303' codep=0x2214 parp=0xe303
// ================================================
// 0xe303: dw 0x00ff

// ================================================
// 0xe305: WORD 'UNK_0xe307' codep=0x2214 parp=0xe307
// ================================================
// 0xe307: dw 0x00ff

// ================================================
// 0xe309: WORD 'UNK_0xe30b' codep=0x1d29 parp=0xe30b
// ================================================
// 0xe30b: db 0xc6 0xbf 0x3d 0x7e 0xba 0x73 0xb3 0x9f 0x02 0xda 0x02 0x6d 0xb2 0xb8 0xd9 0xcd 0x1f 0x12 0x2f 0xe1 0xdb 0x2b 0x38 0x10 '  =~ s     m      /  +8 '

// ================================================
// 0xe323: WORD 'UNK_0xe325' codep=0x224c parp=0xe325
// ================================================

void UNK_0xe325() // UNK_0xe325
{
  unsigned short int i, imax;
  Push(pp_UNK_0xe30b + 0x0018); // UNK_0xe30b 0x0018 +
  Push(pp_UNK_0xe30b); // UNK_0xe30b

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0);
    Push(Read16(cc_UNK_0xe303)); // UNK_0xe303
    RRND(); // RRND
    Push(i); // I
    C_ex_(); // C!
    Push(0);
    Push(Read16(cc_UNK_0xe307)); // UNK_0xe307
    RRND(); // RRND
    Push(i + 1); // I 1+
    C_ex_(); // C!
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xe34f: WORD 'UNK_0xe351' codep=0x224c parp=0xe351 params=2 returns=2
// ================================================

void UNK_0xe351() // UNK_0xe351
{
  Push(Read16(cc_UNK_0xe307)); // UNK_0xe307
  MOD(); // MOD
  Push(Read16(regsp)); // DUP
  Push(0);
  Push(Read16(cc_UNK_0xe2ff)); // UNK_0xe2ff
  WITHIN(); // WITHIN
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(Read16(cc_UNK_0xe303)); // UNK_0xe303
  MOD(); // MOD
  Push(Read16(regsp)); // DUP
  Push(0);
  Push(Read16(cc_UNK_0xe2fb)); // UNK_0xe2fb
  WITHIN(); // WITHIN
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
}


// ================================================
// 0xe373: WORD 'UNK_0xe375' codep=0x224c parp=0xe375 params=2 returns=0
// ================================================

void UNK_0xe375() // UNK_0xe375
{
  unsigned short int a;
  Push(Read16(pp_XABS) + 0x01f4); // XABS @ 0x01f4 +
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _2_at_(); // 2@
  SWAP(); // SWAP
  _star__slash_(); // */
  Push(Read16(pp_YABS) + 0x01f4); // YABS @ 0x01f4 +
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _2_at_(); // 2@
  SWAP(); // SWAP
  _star__slash_(); // */
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(a); // R>
  UNK_0xe351(); // UNK_0xe351
  _2DUP(); // 2DUP
  Push(Pop() * Pop()); // *
  if (Pop() != 0)
  {
    Push(-Pop() - Read16(cc_UNK_0xe2ff)); //  UNK_0xe2ff - NEGATE
    SWAP(); // SWAP
    Push(-Pop() - Read16(cc_UNK_0xe2fb)); //  UNK_0xe2fb - NEGATE
    SWAP(); // SWAP
    LPLOT(); // LPLOT
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe3c7: WORD 'UNK_0xe3c9' codep=0x224c parp=0xe3c9 params=0 returns=0
// ================================================

void UNK_0xe3c9() // UNK_0xe3c9
{
  unsigned short int i, imax;
  SetColor(GREY1);
  StoreCOLOR(); // !COLOR
  Push(pp_UNK_0xe30b + 0x0021); // UNK_0xe30b 0x0021 +
  Push(pp_UNK_0xe30b); // UNK_0xe30b

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(i)&0xFF); // I C@
    Push(Read16(i + 1)&0xFF); // I 1+ C@
    UNK_0xe375(); // UNK_0xe375
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xe3ed: WORD '.MVS' codep=0x224c parp=0xe3f6 params=0 returns=0
// ================================================
// entry

void DrawMVS() // .MVS
{
  UNK_0xdac6(); // UNK_0xdac6
  CTXT_n_(); // CTXT#
  Push(!(Pop() | (Pop()==1?1:0))); //   1 = OR NOT
  if (Pop() == 0) return;
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  Push(Read16(pp_IsNEB)); // ?NEB @
  CTXT_n_(); // CTXT#
  Push(Pop() & (Pop()==2?1:0)); //   2 = AND
  if (Pop() != 0)
  {
    SetColor(DK_dash_GREEN);
  } else
  {
    SetColor(BLACK);
  }
  StoreCOLOR(); // !COLOR
  BFILL(); // BFILL
  CTXT_n_(); // CTXT#
  Push(2);
  Push(4);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    UNK_0xe3c9(); // UNK_0xe3c9
  }
  ORGLIST(); // ORGLIST
  DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
}

// 0xe440: db 0x4c 0x22 0xc5 0xa2 0xd2 0x9a 0xe2 0x9a 0x6e 0x99 0x5a 0x4f 0x17 0x85 0xc4 0xab 0x9b 0x58 0x76 0x6d 0x2e 0x0f 0x90 0x58 0x76 0x6d 0x2e 0x0f 0x85 0x58 0x76 0x6d 0x7a 0x58 0xc5 0x6d 0xfc 0xd9 0xae 0x0b 0x5d 0x17 0x96 0x00 0x2d 0x12 0x04 0xda 0xae 0x0b 0x3e 0x13 0xfa 0x15 0x3c 0x00 0xfc 0xd9 0xae 0x0b 0x5d 0x17 0x96 0x00 0x92 0x0f 0x8b 0x3b 0x5d 0x17 0x64 0x00 0xc4 0x0f 0xe7 0x0f 0x04 0xda 0xae 0x0b 0x89 0x11 0x20 0x0f 0xb8 0x15 0xf0 0x0d 0x5d 0x17 0x0f 0x00 0x53 0xe1 0xb3 0x0e 0x72 0x0f 0x61 0x58 0x76 0x6d 0x72 0x0f 0x6c 0x58 0x76 0x6d 0xd8 0x93 0xd0 0x15 0xe6 0xff 0xde 0x0d 0xfc 0xa2 0x90 0x16 'L"      n ZO     Xvm.  Xvm.  XvmzX m    ]   -     >   <     ]      ;] d                 ]   S   r aXvmr lXvm            '

// ================================================
// 0xe4b8: WORD 'UNK_0xe4ba' codep=0x224c parp=0xe4ba params=3 returns=3
// ================================================

void UNK_0xe4ba() // UNK_0xe4ba
{
  unsigned short int a, b, c;
  a = Pop(); // >R
  b = Pop(); // >R
  c = Pop(); // >R
  Push(c); // I
  Push(c==Read16(pp_HEADING)?1:0); // I HEADING @ =
  Push(b & (b==Read16(pp_XABS)?1:0)); // I' I' XABS @ = AND
  Push(!(a & (a==Read16(pp_YABS)?1:0))); // J J YABS @ = AND NOT
  _gt_V(); // >V
  Push(c); // R>
  Push(b); // R>
  Push(a); // R>
  V_gt_(); // V>
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Pop(); Pop(); // 2DROP
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0xe4f8: WORD 'UNK_0xe4fa' codep=0x224c parp=0xe4fa
// ================================================

void UNK_0xe4fa() // UNK_0xe4fa
{
  _2DUP(); // 2DUP
  Push(pp_YABS); // YABS
  Store_3(); // !_3
  Push(pp_XABS); // XABS
  Store_3(); // !_3
  _2DUP(); // 2DUP
  UNK_0xdab0(); // UNK_0xdab0
  _2DUP(); // 2DUP
  Push(Read16(pp_ILOCAL) - 1); // ILOCAL @ 1-
  POINT_gt_ICON(); // POINT>ICON
  StoreIY(); // !IY
  StoreIX(); // !IX
  UNK_0xdac6(); // UNK_0xdac6
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    Push(Pop() - Read16(cc_UNK_0xd9d0)); //  UNK_0xd9d0 -
    SWAP(); // SWAP
    Push(Pop() - Read16(cc_UNK_0xd9d4)); //  UNK_0xd9d4 -
    SWAP(); // SWAP
    _2SWAP(); // 2SWAP
    Push(Pop() + Read16(cc_UNK_0xd9c8)); //  UNK_0xd9c8 +
    SWAP(); // SWAP
    Push(Pop() + Read16(cc_UNK_0xd9cc)); //  UNK_0xd9cc +
    SWAP(); // SWAP
    StoreVISWINDOW(); // !VISWINDOW
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  UNK_0xdafa(); // UNK_0xdafa
  if (Pop() != 0)
  {
    UNK_0xe293(); // UNK_0xe293
  }
  Push(Read16(regsp)); // DUP
  Push(pp_HEADING); // HEADING
  Store_3(); // !_3
  Push(Read16(regsp)); // DUP
  UNK_0xdaba(); // UNK_0xdaba
  Push(Pop() + 0x001b); //  0x001b +
  StoreID(); // !ID
}


// ================================================
// 0xe55e: WORD 'UNK_0xe560' codep=0x224c parp=0xe560 params=3 returns=2
// ================================================

void UNK_0xe560() // UNK_0xe560
{
  UNK_0xe4ba(); // UNK_0xe4ba
  if (Pop() == 0) return;
  UNK_0xdb72(); // UNK_0xdb72
  UNK_0xe4fa(); // UNK_0xe4fa
  UNK_0xdb72(); // UNK_0xdb72
}


// ================================================
// 0xe56e: WORD 'UNK_0xe570' codep=0x224c parp=0xe570 params=2 returns=1
// ================================================

void UNK_0xe570() // UNK_0xe570
{
  SWAP(); // SWAP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0x0064);
    SWAP(); // SWAP
    _star__slash_(); // */
    Push(1);
    return;
  }
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0xe58c: WORD 'UNK_0xe58e' codep=0x224c parp=0xe58e params=4 returns=2
// ================================================

void UNK_0xe58e() // UNK_0xe58e
{
  unsigned short int a;
  ROT(); // ROT
  _dash_(); // -
  a = Pop(); // >R
  SWAP(); // SWAP
  _dash_(); // -
  Push(a); // R>
}


// ================================================
// 0xe59c: WORD 'UNK_0xe59e' codep=0x224c parp=0xe59e params=2 returns=1
// ================================================

void UNK_0xe59e() // UNK_0xe59e
{
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(3);
  } else
  {
    Push(0x000c);
  }
  SWAP(); // SWAP
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(9);
  } else
  {
    Push(6);
  }
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(Pop() & 8); //  8 AND
  if (Pop() != 0)
  {
    Push(Pop() >> 1); //  2/
    return;
  }
  Push(Read16(regsp)); // DUP
  Push(Pop() & 4); //  4 AND
  if (Pop() == 0) return;
  Push(Pop() - 1); //  1-
}


// ================================================
// 0xe5ec: WORD 'UNK_0xe5ee' codep=0x224c parp=0xe5ee params=4 returns=1
// ================================================

void UNK_0xe5ee() // UNK_0xe5ee
{
  unsigned short int a;
  UNK_0xe58e(); // UNK_0xe58e
  _2DUP(); // 2DUP
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    UNK_0xe59e(); // UNK_0xe59e
    a = Pop(); // >R
    Push(!(a & 1)); // I 1 AND NOT
    if (Pop() != 0)
    {
      SWAP(); // SWAP
    }
    ABS(); // ABS
    SWAP(); // SWAP
    ABS(); // ABS
    SWAP(); // SWAP
    UNK_0xe570(); // UNK_0xe570
    if (Pop() != 0)
    {
      Push(Read16(regsp)); // DUP
      Push(0x0029);
      _st_(); // <
      if (Pop() != 0)
      {
        Pop(); // DROP
        Push(0);
      } else
      {
        Push(0x00f1);
        _gt_(); // >
        if (Pop() != 0)
        {
          Push(2);
        } else
        {
          Push(1);
        }
      }
    } else
    {
      Push(2);
    }
    Push(Pop() + (a - 1) * 2); //  R> 1- 2* +
    return;
  }
  Pop(); Pop(); // 2DROP
  Push(Read16(pp_HEADING)); // HEADING @
}


// ================================================
// 0xe65c: WORD 'UNK_0xe65e' codep=0x1d29 parp=0xe65e
// ================================================
// 0xe65e: db 0x01 0x00 0x01 0x01 0x00 0x01 0xff 0x01 0xff 0x00 0xff 0xff 0x00 0xff 0x01 0xff '                '

// ================================================
// 0xe66e: WORD 'UNK_0xe670' codep=0x224c parp=0xe670
// ================================================

void UNK_0xe670() // UNK_0xe670
{
  Push(Pop() * 2 + pp_UNK_0xe65e); //  2* UNK_0xe65e +
  Push(Read16(regsp)); // DUP
  _plus__dash__at_(); // +-@
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  _plus__dash__at_(); // +-@
}


// ================================================
// 0xe682: WORD 'UNK_0xe684' codep=0x224c parp=0xe684
// ================================================

void UNK_0xe684() // UNK_0xe684
{
  unsigned short int a, b;
  UNK_0xe670(); // UNK_0xe670
  a = Pop(); // >R
  b = Pop(); // >R
  Push(Pop() - 1); //  1-
  Push(b); // R>
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(-Pop()); //  NEGATE
  SWAP(); // SWAP
  Push(-Pop() * a); //  R> * NEGATE
}


// ================================================
// 0xe69e: WORD 'UNK_0xe6a0' codep=0x224c parp=0xe6a0
// ================================================

void UNK_0xe6a0() // UNK_0xe6a0
{
  unsigned short int a, b;
  a = Pop(); // >R
  UNK_0xe670(); // UNK_0xe670
  Push(Pop() * a); //  I *
  SWAP(); // SWAP
  Push(Pop() * a); //  R> *
  SWAP(); // SWAP
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  b = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(b); // R>
}


// ================================================
// 0xe6bc: WORD 'UNK_0xe6be' codep=0x224c parp=0xe6be
// ================================================

void UNK_0xe6be() // UNK_0xe6be
{
  unsigned short int a;
  ROT(); // ROT
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  a = Pop(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(Pop() + a); //  R> +
  Push(0);
  SQRT(); // SQRT
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xe6e2: WORD 'UNK_0xe6e4' codep=0x224c parp=0xe6e4
// ================================================

void UNK_0xe6e4() // UNK_0xe6e4
{
  GetXYABS(); // @XYABS
  Push(Read16(pp_UNK_0xd9f6)); // UNK_0xd9f6 @
  Push(Read16(pp_UNK_0xd9fa)); // UNK_0xd9fa @
  UNK_0xe6be(); // UNK_0xe6be
  Push(Read16(cc_UNK_0xd9d8)); // UNK_0xd9d8
  MIN(); // MIN
}


// ================================================
// 0xe6f6: WORD 'UNK_0xe6f8' codep=0x224c parp=0xe6f8
// ================================================

void UNK_0xe6f8() // UNK_0xe6f8
{
  unsigned short int a;
  GetXYABS(); // @XYABS
  _2DUP(); // 2DUP
  Push(Read16(pp_UNK_0xd9f6)); // UNK_0xd9f6 @
  Push(Read16(pp_UNK_0xd9fa)); // UNK_0xd9fa @
  UNK_0xe5ee(); // UNK_0xe5ee
  Push(Read16(regsp)); // DUP
  Push(Pop()==8?1:0); //  8 =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(Read16(pp_HEADING)); // HEADING @
  }
  a = Pop(); // >R
  Push(a); // I
  UNK_0xe6e4(); // UNK_0xe6e4
  UNK_0xe6a0(); // UNK_0xe6a0
  Push(a); // R>
  ROT(); // ROT
  ROT(); // ROT
}


// ================================================
// 0xe726: WORD 'UNK_0xe728' codep=0x224c parp=0xe728 params=6 returns=1
// ================================================

void UNK_0xe728() // UNK_0xe728
{
  unsigned short int a;
  Push(6);
  PICK(); // PICK
  Push(6);
  PICK(); // PICK
  _2SWAP(); // 2SWAP
  D_st_(); // D<
  a = Pop(); // >R
  D_st_(); // D<
  Push(!Pop() & a); //  NOT R> AND
}


// ================================================
// 0xe740: WORD 'UNK_0xe742' codep=0x224c parp=0xe742 params=0 returns=0
// ================================================

void UNK_0xe742() // UNK_0xe742
{
  Push(pp__10_star_CARGO); // 10*CARGO
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(0);
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  DMIN(); // DMIN
  D_plus_(); // D+
  Push(pp__10_star_CARGO); // 10*CARGO
  StoreD(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(0);
  D_dash_(); // D-
  Push2Words("NULL");
  DMAX(); // DMAX
  Push(pp__10_star_END); // 10*END
  StoreD(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(Read16(regsp)); // DUP
  Push(0x0096);
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(5);
  ROLL(); // ROLL
  Push(0);
  D_plus_(); // D+
  UNK_0xe728(); // UNK_0xe728
  if (Pop() != 0)
  {
    Push(3);
    Push(0xc9e0); // probable '.EX'
    MODULE(); // MODULE
    return;
  }
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(Read16(regsp)); // DUP
  Push(0x004b);
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(5);
  ROLL(); // ROLL
  Push(0);
  D_plus_(); // D+
  UNK_0xe728(); // UNK_0xe728
  if (Pop() != 0)
  {
    Push(2);
    Push(0xc9e0); // probable '.EX'
    MODULE(); // MODULE
    return;
  }
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) return;
  Push(pp_IsAUTO); // ?AUTO
  ON_3(); // ON_3
  Push(1);
  Push(0xc9e0); // probable '.EX'
  MODULE(); // MODULE
  Push(Read16(pp_IsSUP)); // ?SUP @
  if (Pop() == 0) return;
  Push(0xcb4e); // probable 'OV-SH'
  MODULE(); // MODULE
}


// ================================================
// 0xe7ea: WORD 'UNK_0xe7ec' codep=0x224c parp=0xe7ec params=0 returns=0
// ================================================

void UNK_0xe7ec() // UNK_0xe7ec
{
  UNK_0xdafa(); // UNK_0xdafa
  Push(Pop() & !Read16(pp_IsAUTO)); //  ?AUTO @ NOT AND
  if (Pop() == 0) return;
  UNK_0xe742(); // UNK_0xe742
}


// ================================================
// 0xe7fe: WORD 'USE-E' codep=0x224c parp=0xe808 params=3 returns=0
// ================================================
// entry

void USE_dash_E() // USE-E
{
  Push(Read16(pp__dash_END)); // -END @
  Push(0x000a);
  Push(pp__dash_END); // -END
  Store_3(); // !_3
  UNK_0xe742(); // UNK_0xe742
  Push(pp__dash_END); // -END
  Store_3(); // !_3
  SHP_gt_C(); // SHP>C
  Push(1);
  Push(0x63ef+UNK_0xda3d.offset); // UNK_0xda3d<IFIELD>
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001a);
    Push(6);
    IFIND(); // IFIND
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+INST_dash_QTY.offset) - 1); // INST-QTY<IFIELD> @ 1-
      Push(0);
      MAX(); // MAX
      Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
      Store_3(); // !_3
    }
    CDROP(); // CDROP
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe85c: WORD 'UNK_0xe85e' codep=0x224c parp=0xe85e params=0 returns=1
// ================================================

void UNK_0xe85e() // UNK_0xe85e
{
  unsigned short int a;
  Push(0);
  Push(Read16(pp_DBUF_dash_SEG)); // DBUF-SEG @
  a = Pop(); // >R
  Push(a); // I
  Push(Read16(pp_YTABLE + 0x010c) + 0x0012); // YTABLE 0x010c + @ 0x0012 +
  LC_at_(); // LC@
  Push((Pop() & 0x000f) + ((Pop() & 0x000f)==1?1:0)); //  0x000f AND  0x000f AND 1 = +
  Push(a); // I
  Push(Read16(pp_YTABLE + 0x010c) + 0x0015); // YTABLE 0x010c + @ 0x0015 +
  LC_at_(); // LC@
  Push((Pop() & 0x00f0) + ((Pop() & 0x00f0)==0x0010?1:0)); //  0x00f0 AND  0x00f0 AND 0x0010 = +
  Push(a); // I
  Push(Read16(pp_YTABLE + 0x00fa) + 0x0012); // YTABLE 0x00fa + @ 0x0012 +
  LC_at_(); // LC@
  Push((Pop() & 0x000f) + ((Pop() & 0x000f)==1?1:0)); //  0x000f AND  0x000f AND 1 = +
  Push(a); // R>
  Push(Read16(pp_YTABLE + 0x00fa) + 0x0015); // YTABLE 0x00fa + @ 0x0015 +
  LC_at_(); // LC@
  Push((Pop() & 0x00f0) + ((Pop() & 0x00f0)==0x0010?1:0)); //  0x00f0 AND  0x00f0 AND 0x0010 = +
  Push(2);
  _gt_(); // >
}


// ================================================
// 0xe8f0: WORD 'UNK_0xe8f2' codep=0x224c parp=0xe8f2 params=0 returns=2
// ================================================

void UNK_0xe8f2() // UNK_0xe8f2
{
  Push(6);
  Push(Read16(pp__n_VESS)); // #VESS @
  Push(1);
  MAX(); // MAX
  _slash_(); // /
  Push(2);
  MAX(); // MAX
}


// ================================================
// 0xe904: WORD 'UNK_0xe906' codep=0x2214 parp=0xe906
// ================================================
// 0xe906: dw 0x000c

// ================================================
// 0xe908: WORD 'CSPEED' codep=0x4a4f parp=0xe913
// ================================================

void CSPEED() // CSPEED
{
  switch(Pop()) // CSPEED
  {
  case 3:
    Push(1);
    break;
  case 4:
    UNK_0xe8f2(); // UNK_0xe8f2
    break;
  default:
    Push(Read16(cc_UNK_0xe906)); // UNK_0xe906
    break;

  }
}

// ================================================
// 0xe91f: WORD 'UNK_0xe921' codep=0x1d29 parp=0xe921
// ================================================
// 0xe921: db 0x00 0x00 '  '

// ================================================
// 0xe923: WORD 'UNK_0xe925' codep=0x1d29 parp=0xe925
// ================================================
// 0xe925: db 0x00 0x00 '  '

// ================================================
// 0xe927: WORD 'UNK_0xe929' codep=0x224c parp=0xe929
// ================================================

void UNK_0xe929() // UNK_0xe929
{
  Push(pp_UNK_0xe925); // UNK_0xe925
  OFF(); // OFF
  Push(pp_UNK_0xe921); // UNK_0xe921
  OFF(); // OFF
  CTXT_n_(); // CTXT#
  CSPEED(); // CSPEED case
  Push(0xd9d8); // probable 'UNK_0xd9d8'
  Store_3(); // !_3
}


// ================================================
// 0xe93d: WORD 'UNK_0xe93f' codep=0x224c parp=0xe93f
// ================================================

void UNK_0xe93f() // UNK_0xe93f
{
  SHP_gt_C(); // SHP>C
  Push(Read16(0x63ef+UNK_0xda1a.offset)); // UNK_0xda1a<IFIELD> @
  Push(Read16(0x63ef+UNK_0xda24.offset)&0xFF); // UNK_0xda24<IFIELD> C@
  Push(0x0064);
  _star__slash_(); // */
  Push(2);
  MAX(); // MAX
  Push(pp_UNK_0xda0a); // UNK_0xda0a
  Store_3(); // !_3
  UNK_0xe929(); // UNK_0xe929
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe95d: WORD 'UNK_0xe95f' codep=0x224c parp=0xe95f params=0 returns=0
// ================================================

void UNK_0xe95f() // UNK_0xe95f
{
  Push(Read16(pp_UNK_0xe921)); // UNK_0xe921 @
  Push(1);
  _st_(); // <
  UNK_0xdac6(); // UNK_0xdac6
  Push(!Pop()); //  NOT
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(Read16(pp_UNK_0xe925) + 1); // UNK_0xe925 @ 1+
    Push(Read16(cc_UNK_0xd9d8)); // UNK_0xd9d8
    MIN(); // MIN
    Push(pp_UNK_0xe925); // UNK_0xe925
    Store_3(); // !_3
    Push(0x0060);
    Push(Read16(pp_UNK_0xda0a)); // UNK_0xda0a @
    _slash_(); // /
    Push(pp_UNK_0xe921); // UNK_0xe921
    Store_3(); // !_3
    return;
  }
  Push(-1);
  Push(pp_UNK_0xe921); // UNK_0xe921
  _plus__ex_(); // +!
}


// ================================================
// 0xe999: WORD 'NEST-SETUP' codep=0x4a4f parp=0xe9a5
// ================================================

void NEST_dash_SETUP() // NEST-SETUP
{
  switch(Pop()) // NEST-SETUP
  {
  case 1:
    UNK_0xdb04(); // UNK_0xdb04
    break;
  case 2:
    UNK_0xe107(); // UNK_0xe107
    break;
  case 4:
    UNK_0xdd6a(); // UNK_0xdd6a
    break;
  case 5:
    UNK_0xddc4(); // UNK_0xddc4
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe9b9: WORD 'UNK_0xe9bb' codep=0x224c parp=0xe9bb params=1 returns=0
// ================================================

void UNK_0xe9bb() // UNK_0xe9bb
{
  unsigned short int a, b;
  Push(!(Pop()==1?1:0)); //  1 = NOT
  if (Pop() == 0) return;
  Push(Read16(pp_HEADING)); // HEADING @
  Push(Read16(pp_UNK_0xd9dc)); // UNK_0xd9dc @
  OVER(); // OVER
  UNK_0xe684(); // UNK_0xe684
  _2DUP(); // 2DUP
  a = Pop(); // >R
  b = Pop(); // >R
  UNK_0xe560(); // UNK_0xe560
  Push(b); // R>
  Push(a); // R>
  Push(pp_UNK_0xd9fa); // UNK_0xd9fa
  Store_3(); // !_3
  Push(pp_UNK_0xd9f6); // UNK_0xd9f6
  Store_3(); // !_3
}


// ================================================
// 0xe9e7: WORD 'NEST' codep=0x224c parp=0xe9f0
// ================================================

void NEST() // NEST
{
  Push(pp__ro_SHIPBOX); // (SHIPBOX
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  SHP_gt_C(); // SHP>C
  IEXTRACT(); // IEXTRACT
  _gt__bo_CONTEXT_bc_(); // >[CONTEXT]
  _2SWAP(); // 2SWAP
  _gt_C_plus_S(); // >C+S
  CI(); // CI
  IINSERT(); // IINSERT
  Store_bo_CONTEXT_bc_(); // ![CONTEXT]
  CI(); // CI
  _n_CPARMS(); // #CPARMS
  StoreCPARMS(); // !CPARMS
  CTXT_n_(); // CTXT#
  Push(Read16(regsp)); // DUP
  Push(0xc9d2); // probable 'NSM'
  MODULE(); // MODULE
  Push(Read16(regsp)); // DUP
  UNK_0xe9bb(); // UNK_0xe9bb
  Push(Read16(regsp)); // DUP
  NEST_dash_SETUP(); // NEST-SETUP case
  Push(Read16(regsp)); // DUP
  Push(0xc9fe); // probable 'D-UP'
  MODULE(); // MODULE
  UNK_0xd976(); // UNK_0xd976
  _gt_CONS_dash_DISP(); // >CONS-DISP
  UNK_0xe325(); // UNK_0xe325
  Push(0xc9c4); // probable 'NFM'
  MODULE(); // MODULE
  CTXT_n_(); // CTXT#
  Push(!(Pop()==5?1:0)); //  5 = NOT
  if (Pop() != 0)
  {
    DrawMVS(); // .MVS
  }
  UNK_0xe293(); // UNK_0xe293
  Push2Words("NULL");
  Push(pp_UNK_0xd9f0); // UNK_0xd9f0
  _1_dot_5_ex_(); // 1.5!
  Push2Words("NULL");
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
  UNK_0xe93f(); // UNK_0xe93f
  Push(pp_FORCEKEY); // FORCEKEY
  OFF(); // OFF
}


// ================================================
// 0xea58: WORD 'UNK_0xea5a' codep=0x224c parp=0xea5a
// ================================================

void UNK_0xea5a() // UNK_0xea5a
{
  _gt_C_plus_S(); // >C+S
  CI(); // CI
  Push(Read16(0x63ef+UNK_0xda56.offset)&0xFF); // UNK_0xda56<IFIELD> C@
  ICLOSE(); // ICLOSE
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_ENC_dash_TIME); // ENC-TIME
  _2_at_(); // 2@
  D_gt_(); // D>
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    NEST(); // NEST
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xea7e: WORD 'UNK_0xea80' codep=0x224c parp=0xea80 params=2 returns=0
// ================================================

void UNK_0xea80() // UNK_0xea80
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(!(Pop()==0x0018?1:0)); //  0x0018 = NOT
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    CI(); // CI
    ICLOSE(); // ICLOSE
    NEST(); // NEST
    return;
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeaa2: WORD 'UNK_0xeaa4' codep=0x224c parp=0xeaa4
// ================================================

void UNK_0xeaa4() // UNK_0xeaa4
{
  unsigned short int i, imax;
  Push(Read16(pp_IGLOBAL)); // IGLOBAL @
  IsICONS_dash_AT(); // ?ICONS-AT
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    POINT_gt_ICON(); // POINT>ICON
    GetID(); // @ID
    Push(Pop()==0x00ff?1:0); //  0x00ff =
    if (Pop() != 0)
    {
      Push(3);
      StoreIC(); // !IC
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      Push(1);
      StoreINST_dash_SPECIES(); // !INST-SPECIES
      ICLOSE(); // ICLOSE
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xead8: WORD 'JMPSHP' codep=0x224c parp=0xeae3
// ================================================
// entry

void JMPSHP() // JMPSHP
{
  Push(0);
  Push(8);
  RRND(); // RRND
  Push(Read16(cc_UNK_0xd9b0) + 1); // UNK_0xd9b0 1+
  UNK_0xe6a0(); // UNK_0xe6a0
  UNK_0xe560(); // UNK_0xe560
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x00fa - Read16(pp_UNK_0xd9fe)); // 0x00fa UNK_0xd9fe @ -
  Push(0x01f4);
  U_star_(); // U*
  D_plus_(); // D+
  Push(pp_NAV_dash_TIME); // NAV-TIME
  StoreD(); // D!
  GetXYABS(); // @XYABS
  UNK_0xda86(); // UNK_0xda86
  UNK_0xe85e(); // UNK_0xe85e
  Push(pp_IsNEB); // ?NEB
  Store_3(); // !_3
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xeb1b: WORD 'UNK_0xeb1d' codep=0x224c parp=0xeb1d
// ================================================

void UNK_0xeb1d() // UNK_0xeb1d
{
  _gt_C_plus_S(); // >C+S
  UNK_0xda72(); // UNK_0xda72
  UNK_0xeaa4(); // UNK_0xeaa4
  Push(Read16(0x63ef+UNK_0xda47.offset)); // UNK_0xda47<IFIELD> @
  Push(Read16(0x63ef+UNK_0xda4c.offset)); // UNK_0xda4c<IFIELD> @
  UNK_0xeaa4(); // UNK_0xeaa4
  Push(0xc4e5); // probable 'OVFLU'
  MODULE(); // MODULE
  Push(Read16(pp_HEADING)); // HEADING @
  Push(Read16(0x63ef+UNK_0xda47.offset)); // UNK_0xda47<IFIELD> @
  Push(Read16(0x63ef+UNK_0xda4c.offset)); // UNK_0xda4c<IFIELD> @
  ICLOSE(); // ICLOSE
  JMPSHP(); // JMPSHP
  DrawMVS(); // .MVS
}


// ================================================
// 0xeb47: WORD 'COLLIDE' codep=0x4a4f parp=0xeb53
// ================================================

void COLLIDE() // COLLIDE
{
  switch(Pop()) // COLLIDE
  {
  case 11:
    UNK_0xea80(); // UNK_0xea80
    break;
  case 18:
    NEST(); // NEST
    break;
  case 23:
    NEST(); // NEST
    break;
  case 45:
    UNK_0xeb1d(); // UNK_0xeb1d
    break;
  case 61:
    UNK_0xea5a(); // UNK_0xea5a
    break;
  default:
    Pop(); Pop(); // 2DROP
    break;

  }
}

// ================================================
// 0xeb6b: WORD 'UNK_0xeb6d' codep=0x224c parp=0xeb6d params=3 returns=1
// ================================================

void UNK_0xeb6d() // UNK_0xeb6d
{
  IOPEN(); // IOPEN
  Push(0x0018);
  Push(0);
  IFIND(); // IFIND
  Push(!Pop()); //  NOT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb7d: WORD '?~C' codep=0x4a4f parp=0xeb85
// ================================================

void Is_t_C() // ?~C
{
  switch(Pop()) // ?~C
  {
  case 11:
    UNK_0xeb6d(); // UNK_0xeb6d
    break;
  case 18:
    Push(1);
    break;
  case 23:
    Push(1);
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xeb95: WORD '?COLLISION' codep=0x224c parp=0xeb97
// ================================================

void IsCOLLISION() // ?COLLISION
{
  unsigned short int i, imax;
  UNK_0xda9e(); // UNK_0xda9e
  Push(Read16(cc_UNK_0xd9b0)); // UNK_0xd9b0
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash_LOCUS(); // ?ICONS-LOCUS
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push2Words("NULL");
    Push(pp_UNK_0xd9f0); // UNK_0xd9f0
    _1_dot_5_ex_(); // 1.5!
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      POINT_gt_ICON(); // POINT>ICON
      GetIL(); // @IL
      GetIH(); // @IH
      Push2Words("*SHIP");
      D_eq_(); // D=
      GetID(); // @ID
      Push(0x0033);
      Push(0x0083);
      WITHIN(); // WITHIN
      GetIC(); // @IC
      SetColor(DK_dash_GREEN);
      Push((Pop()==Pop())?1:0); // =
      Push(Pop() & Pop()); // AND
      Push(Pop() | Pop()); // OR
      Push(!Pop()); //  NOT
      CTXT_n_(); // CTXT#
      Push(Pop() & !(Pop()==1?1:0)); //   1 = NOT AND
      if (Pop() != 0)
      {
        GetIL(); // @IL
        GetIH(); // @IH
        Push(pp_UNK_0xd9f0); // UNK_0xd9f0
        _1_dot_5_ex_(); // 1.5!
      }
      i++;
    } while(i<imax); // (LOOP)

    Push(pp_UNK_0xd9f0); // UNK_0xd9f0
    _1_dot_5_at_(); // 1.5@
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      Push(pp_UNK_0xd9f0); // UNK_0xd9f0
      Get_gt_C_plus_S(); // @>C+S
      CI(); // CI
      GetINST_dash_CLASS(); // @INST-CLASS
      Push(Read16(regsp)); // DUP
      Push(!(Pop()==0x0019?1:0)); //  0x0019 = NOT
      if (Pop() != 0)
      {
        Push(Read16(regsp)); // DUP
        Is_t_C(); // ?~C case
        if (Pop() != 0)
        {
          Push(0x0096);
          Push(0x0fa0);
          Push(1);
          _gt_SND(); // >SND
        }
        UNK_0xda72(); // UNK_0xda72
        UNK_0xda86(); // UNK_0xda86
      }
      ICLOSE(); // ICLOSE
      Push(1);
    } else
    {
      Push(0);
    }
    return;
  }
  Push(0);
}


// ================================================
// 0xec37: WORD 'UNK_0xec39' codep=0x224c parp=0xec39 params=0 returns=2
// ================================================

void UNK_0xec39() // UNK_0xec39
{
  Push(pp_UNK_0xd9f0); // UNK_0xd9f0
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  Push((Pop() & (Read16(pp_UNK_0xd9ec)==0?1:0)) & (Read16(pp_IsPORT)==0?1:0)); //  UNK_0xd9ec @ 0= AND ?PORT @ 0= AND
  CTXT_n_(); // CTXT#
  Push(Pop() & (Pop()==1?1:0)); //   1 = AND
  Push(Read16(regsp)); // DUP
}


// ================================================
// 0xec5b: WORD '?2NEST.ETC' codep=0x224c parp=0xec5d params=0 returns=1
// ================================================

void Is2NEST_dot_ETC() // ?2NEST.ETC
{
  UNK_0xec39(); // UNK_0xec39
  if (Pop() != 0)
  {
    PLN_gt_C(); // PLN>C
    IOPEN(); // IOPEN
    Push(0x003d);
    Push(0);
    IFIND(); // IFIND
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+UNK_0xda56.offset)&0xFF); // UNK_0xda56<IFIELD> C@
      Push(Read16(regsp)); // DUP
      if (Pop() != 0)
      {
        CI(); // CI
        Push(pp_UNK_0xd9f0); // UNK_0xd9f0
        _1_dot_5_ex_(); // 1.5!
        Push(pp_UNK_0xd9ec); // UNK_0xd9ec
        ON_3(); // ON_3
      }
      Push(Pop() & Pop()); // AND
    }
    UNK_0xd9a8(); // UNK_0xd9a8
    Push(Pop() & Pop()); // AND
  }
  if (Pop() != 0)
  {
    Push(pp_UNK_0xd9f0); // UNK_0xd9f0
    Get_gt_C_plus_S(); // @>C+S
    CI(); // CI
    GetINST_dash_CLASS(); // @INST-CLASS
    ICLOSE(); // ICLOSE
    Push(1);
    return;
  }
  Push(0);
}


// ================================================
// 0xeca7: WORD '?STARPORT' codep=0x224c parp=0xeca9 params=0 returns=1
// ================================================

void IsSTARPORT() // ?STARPORT
{
  UNK_0xec39(); // UNK_0xec39
  if (Pop() != 0)
  {
    UNK_0xd998(); // UNK_0xd998
    Push(Read16(0x63ef+FLAREDATE.offset)); // FLAREDATE<IFIELD> @
    Push(Read16(pp_STARDATE)); // STARDATE @
    _gt_(); // >
    Push(Read16(pp_IsWIN)); // ?WIN @
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+FLAREDATE.offset)); // FLAREDATE<IFIELD> @
      _gt_(); // >
      Push(!Pop()); //  NOT
      Push(Pop() | Pop()); // OR
    }
    ICLOSE(); // ICLOSE
    PLN_gt_C(); // PLN>C
    IOPEN(); // IOPEN
    Push(0x000c);
    Push(0);
    IFIND(); // IFIND
    Push(Pop() & Pop()); // AND
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      CI(); // CI
      Push(pp_UNK_0xd9f0); // UNK_0xd9f0
      _1_dot_5_ex_(); // 1.5!
      Push(pp_UNK_0xd9ec); // UNK_0xd9ec
      ON_3(); // ON_3
    }
    UNK_0xd9a8(); // UNK_0xd9a8
    Push(Pop() & Pop()); // AND
  }
  if (Pop() != 0)
  {
    Push2Words("*SHIP-CONFIG");
    Push(0x0012);
    Push(1);
    Push(0x003a);
    Push(pp_FILE_n_); // FILE#
    Store_3(); // !_3
    Push(1);
    Push(pp_RECORD_n_); // RECORD#
    Store_3(); // !_3
    SET_STR_AS_PARAM("LAUNCH");
    LoadData(_1BTN); // from 'BUTTONS'
    SWAP(); // SWAP
    CMOVE(); // CMOVE
    SET_dash_CURRENT(); // SET-CURRENT
    return;
  }
  Push(0);
}


// ================================================
// 0xed26: WORD 'UNNEST-CLEAN' codep=0x4a4f parp=0xed32
// ================================================

void UNNEST_dash_CLEAN() // UNNEST-CLEAN
{
  switch(Pop()) // UNNEST-CLEAN
  {
  case 1:
    UNK_0xdb32(); // UNK_0xdb32
    break;
  case 2:
    UNK_0xe12b(); // UNK_0xe12b
    break;
  case 4:
    UNK_0xdcc6(); // UNK_0xdcc6
    break;
  case 5:
    UNK_0xddda(); // UNK_0xddda
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed46: WORD 'UNNEST-SPACEXY' codep=0x224c parp=0xed48 params=1 returns=0
// ================================================

void UNNEST_dash_SPACEXY() // UNNEST-SPACEXY
{
  Push(5);
  _st_(); // <
  if (Pop() == 0) return;
  Push(Read16(pp_HEADING)); // HEADING @
  Push(Read16(pp_UNK_0xd9e4)); // UNK_0xd9e4 @
  Push(Read16(pp_UNK_0xd9e8)); // UNK_0xd9e8 @
  Push(3);
  PICK(); // PICK
  Push(Read16(cc_UNK_0xd9b0) + 1); // UNK_0xd9b0 1+
  UNK_0xe6a0(); // UNK_0xe6a0
  UNK_0xe560(); // UNK_0xe560
}


// ================================================
// 0xed6a: WORD '?UNNEST' codep=0x224c parp=0xed6c params=0 returns=1
// ================================================

void IsUNNEST() // ?UNNEST
{
  unsigned short int a, i, imax;
  UNK_0xdafa(); // UNK_0xdafa
  if (Pop() != 0)
  {
    Push(0);
    return;
  }
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x003d?1:0); //  0x003d =
  if (Pop() != 0)
  {
    GetXYABS(); // @XYABS
    Push(Read16(pp_UNK_0xd9dc)); // UNK_0xd9dc @
    Push(Read16(pp_ILOCAL)); // ILOCAL @
    IsICONS_dash_LOCUS(); // ?ICONS-LOCUS
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(0);

      i = Pop();
      imax = Pop();
      do // (DO)
      {
        Pop(); // DROP
        i++;
      } while(i<imax); // (LOOP)

    }
    Push(a); // R>
    Push(a==1?1:0); // R> 1 =
    return;
  }
  GetXYABS(); // @XYABS
  ABS(); // ABS
  SWAP(); // SWAP
  ABS(); // ABS
  MAX(); // MAX
  Push(Read16(pp_UNK_0xd9dc)); // UNK_0xd9dc @
  _gt_(); // >
}


// ================================================
// 0xedc0: WORD '?DOUBLE-UNNEST' codep=0x224c parp=0xedc2 params=0 returns=1
// ================================================

void IsDOUBLE_dash_UNNEST() // ?DOUBLE-UNNEST
{
  Push(Read16(pp_UNK_0xd9ec) & !Read16(pp_SKIP2NEST)); // UNK_0xd9ec @ SKIP2NEST @ NOT AND
  CTXT_n_(); // CTXT#
  Push(Pop() & (Pop()==1?1:0)); //   1 = AND
}


// ================================================
// 0xedd8: WORD 'UNNEST' codep=0x224c parp=0xede3
// ================================================
// entry

void UNNEST() // UNNEST
{
  unsigned short int a;
  Push(pp__ro_SHIPBOX); // (SHIPBOX
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  SHP_gt_C(); // SHP>C
  IEXTRACT(); // IEXTRACT
  ICLOSE(); // ICLOSE
  CTXT_n_(); // CTXT#
  a = Pop(); // >R
  Push(a); // I
  Push(0xc9b6); // probable 'USM'
  MODULE(); // MODULE
  Push(a); // I
  UNNEST_dash_CLEAN(); // UNNEST-CLEAN case
  _gt__bo_CONTEXT_bc_(); // >[CONTEXT]
  ICLOSE(); // ICLOSE
  CI(); // CI
  IINSERT(); // IINSERT
  Store_bo_CONTEXT_bc_(); // ![CONTEXT]
  CI(); // CI
  _n_CPARMS(); // #CPARMS
  StoreCPARMS(); // !CPARMS
  _gt_CONS_dash_DISP(); // >CONS-DISP
  Push(a); // I
  UNNEST_dash_SPACEXY(); // UNNEST-SPACEXY
  UNK_0xdad0(); // UNK_0xdad0
  UNK_0xd976(); // UNK_0xd976
  CTXT_n_(); // CTXT#
  Push(0xc9fe); // probable 'D-UP'
  MODULE(); // MODULE
  UNK_0xe325(); // UNK_0xe325
  Push(a); // R>
  Push(0xc9a8); // probable 'UFM'
  MODULE(); // MODULE
  DrawMVS(); // .MVS
  UNK_0xe293(); // UNK_0xe293
  Push(pp_UNK_0xda02); // UNK_0xda02
  GetEXECUTE(); // @EXECUTE
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Push2Words("NULL");
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
  Push(pp_SKIP2NEST); // SKIP2NEST
  OFF(); // OFF
  UNK_0xe93f(); // UNK_0xe93f
  Push(-Read16(pp_FORCEKEY)); // FORCEKEY @ NEGATE
  Push(pp_FORCEKEY); // FORCEKEY
  Store_3(); // !_3
}


// ================================================
// 0xee51: WORD 'UNK_0xee53' codep=0x224c parp=0xee53 params=0 returns=0
// ================================================

void UNK_0xee53() // UNK_0xee53
{
  UNK_0xdafa(); // UNK_0xdafa
  if (Pop() == 0) return;
  Push(0);
  MAX(); // MAX
  Push(0x00db * Read16(cc__star_MAPSCALE)); // 0x00db *MAPSCALE *
  MIN(); // MIN
  SWAP(); // SWAP
  Push(0);
  MAX(); // MAX
  Push(0x00f9 * Read16(cc__star_MAPSCALE)); // 0x00f9 *MAPSCALE *
  MIN(); // MIN
  SWAP(); // SWAP
}


// ================================================
// 0xee7b: WORD '(GET-AUX' codep=0x224c parp=0xee87 params=0 returns=0
// ================================================
// entry

void _ro_GET_dash_AUX() // (GET-AUX
{
  Push(Read16(pp__n_AUX)); // #AUX @
  Push(!(Read16(pp__n_AUX)==5?1:0)); // #AUX @ 5 = NOT
  if (Pop() == 0) return;
  DrawAUXSYS(); // .AUXSYS
}


// ================================================
// 0xee99: WORD 'UNK_0xee9b' codep=0x224c parp=0xee9b
// ================================================

void UNK_0xee9b() // UNK_0xee9b
{
  unsigned short int a, b;
  IsUNNEST(); // ?UNNEST
  IsDOUBLE_dash_UNNEST(); // ?DOUBLE-UNNEST
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    UNNEST(); // UNNEST
  }
  IsCOLLISION(); // ?COLLISION
  a = Pop(); // >R
  Is2NEST_dot_ETC(); // ?2NEST.ETC
  Push(Pop() | a); //  R> OR
  b = Pop(); // >R
  IsSTARPORT(); // ?STARPORT
  Push(Pop() | b); //  R> OR
  if (Pop() == 0) return;
  COLLIDE(); // COLLIDE case
}


// ================================================
// 0xeec1: WORD 'FLY' codep=0x224c parp=0xeec9
// ================================================
// entry

void FLY() // FLY
{
  UNK_0xe6f8(); // UNK_0xe6f8
  UNK_0xee53(); // UNK_0xee53
  UNK_0xe560(); // UNK_0xe560
  UNK_0xe7ec(); // UNK_0xe7ec
  UNK_0xdafa(); // UNK_0xdafa
  if (Pop() != 0)
  {
    Push(Read16(pp_IsNEB)); // ?NEB @
    Push(pp_UNK_0xda12); // UNK_0xda12
    Store_3(); // !_3
    UNK_0xe85e(); // UNK_0xe85e
    Push(pp_IsNEB); // ?NEB
    Store_3(); // !_3
  }
  Push(Read16(pp_IsNEB)); // ?NEB @
  if (Pop() != 0)
  {
    SHP_gt_C(); // SHP>C
    Push((Read16(0x63ef+UNK_0xda42.offset)&0xFF) & 8); // UNK_0xda42<IFIELD> C@ 8 AND
    ICLOSE(); // ICLOSE
  } else
  {
    Push(0);
  }
  DrawMVS(); // .MVS
  if (Pop() != 0)
  {
    Push(0xcb4e); // probable 'OV-SH'
    MODULE(); // MODULE
  }
  UNK_0xee9b(); // UNK_0xee9b
}


// ================================================
// 0xef0f: WORD 'UNK_0xef11' codep=0x224c parp=0xef11 params=2 returns=2
// ================================================

void UNK_0xef11() // UNK_0xef11
{
  Push(Read16(Pop())); //  @
  Push(Pop() + Pop()); // +
  Push(-Read16(cc_UNK_0xd9c4) - 0x000c); // UNK_0xd9c4 NEGATE 0x000c -
  UNK_0xdafa(); // UNK_0xdafa
  Push(!Pop()); //  NOT
  Push(Pop() * Pop()); // *
  MAX(); // MAX
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
}


// ================================================
// 0xef2b: WORD 'SET-DESTINATION' codep=0x224c parp=0xef37
// ================================================

void SET_dash_DESTINATION() // SET-DESTINATION
{
  Push(Read16(regsp)); // DUP
  Push(Pop()==0x0152?1:0); //  0x0152 =
  OVER(); // OVER
  Push((Pop()==0?1:0) & Read16(pp_FORCEKEY)); //  0= FORCEKEY @ AND
  Push(Pop() | Pop()); // OR
  Push(Read16(pp_SKEY)); // SKEY @
  Push(0x005b);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(pp_FORCEKEY); // FORCEKEY
  Store_3(); // !_3
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(Read16(pp_SKEY)); // SKEY @
    Push(Read16(regsp)); // DUP
    Push(pp_LKEY); // LKEY
    Store_3(); // !_3
  }
  _ro_XYSCAN(); // (XYSCAN case
  Push(Read16(pp_SKEY)); // SKEY @
  Push(0x005b);
  _gt_(); // >
  if (Pop() != 0)
  {
    UNK_0xe95f(); // UNK_0xe95f
  } else
  {
    Push(1);
    Push(pp_UNK_0xe925); // UNK_0xe925
    Store_3(); // !_3
    Push(0x0060);
    Push(Read16(pp_UNK_0xda0a)); // UNK_0xda0a @
    _slash_(); // /
    Push(pp_UNK_0xe921); // UNK_0xe921
    Store_3(); // !_3
  }
  Push(Read16(pp_UNK_0xe925)); // UNK_0xe925 @
  SWAP(); // SWAP
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(pp_XABS); // XABS
  UNK_0xef11(); // UNK_0xef11
  Push(Pop() * 0x00f9); //  0x00f9 *
  MIN(); // MIN
  Push(pp_UNK_0xd9f6); // UNK_0xd9f6
  Store_3(); // !_3
  Push(Pop() * Pop()); // *
  Push(pp_YABS); // YABS
  UNK_0xef11(); // UNK_0xef11
  Push(Pop() * 0x00db); //  0x00db *
  MIN(); // MIN
  Push(pp_UNK_0xd9fa); // UNK_0xd9fa
  Store_3(); // !_3
  Push(Read16(pp_FORCEKEY)); // FORCEKEY @
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(pp_FORCEKEY); // FORCEKEY
    OFF(); // OFF
  }
  Push(Read16(pp_FTRIG)); // FTRIG @
  Push2Words("NULL");
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D_eq_(); // D=
  UNK_0xdafa(); // UNK_0xdafa
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(Pop() | Read16(pp_IsAUTO)); //  ?AUTO @ OR
  if (Pop() != 0)
  {
    Push(!Pop()); //  NOT
    _i_KEY(); // 'KEY
    Pop(); // DROP
  }
  FLY(); // FLY
}


// ================================================
// 0xeff7: WORD 'SETUP-MOV' codep=0x224c parp=0xf003
// ================================================

void SETUP_dash_MOV() // SETUP-MOV
{
  Push(pp_FORCEPTASK); // FORCEPTASK
  ON_3(); // ON_3
  Push(pp_FORCEKEY); // FORCEKEY
  OFF(); // OFF
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_VSTIME); // VSTIME
  StoreD(); // D!
  Push(0xbf98); // probable '?VCYCLE'
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  Store_3(); // !_3
  Push(0xbf68); // probable '.SORD'
  Push(pp__i__dot_VEHICLE_dash_STATUS); // '.VEHICLE-STATUS
  Store_3(); // !_3
  Push(pp_IsAUTO); // ?AUTO
  OFF(); // OFF
  SHP_gt_C(); // SHP>C
  Push(Read16(0x63ef+UNK_0xda1f.offset)&0xFF); // UNK_0xda1f<IFIELD> C@
  Push(pp_HEADING); // HEADING
  Store_3(); // !_3
  Push(0xbd4a); // probable '=CARGO'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  UNK_0xe93f(); // UNK_0xe93f
  Push(8);
  Push(0xbdd8); // probable 'OV?ARTIFACT'
  MODULE(); // MODULE
  Push(Pop() >> 4); //  16*
  Push(pp_UNK_0xda06); // UNK_0xda06
  Store_3(); // !_3
  CTXT_n_(); // CTXT#
  Push(Pop()==1?1:0); //  1 =
  if (Pop() != 0)
  {
    Push(6);
    Push(0xc9b6); // probable 'USM'
    MODULE(); // MODULE
  }
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+UNK_0xdbe1.offset); // UNK_0xdbe1<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+UNK_0xdbe6.offset)&0xFF); // UNK_0xdbe6<IFIELD> C@
  Push(pp_UNK_0xd9fe); // UNK_0xd9fe
  Store_3(); // !_3
  UNK_0xd9a8(); // UNK_0xd9a8
  UNK_0xd976(); // UNK_0xd976
  _gt_CONS_dash_DISP(); // >CONS-DISP
  Push(Read16(pp_HEADING)); // HEADING @
  GetXYABS(); // @XYABS
  CTXT_n_(); // CTXT#
  Push(Pop()==1?1:0); //  1 =
  if (Pop() != 0)
  {
    Push(6);
    Push(0xc9a8); // probable 'UFM'
    MODULE(); // MODULE
    Push(Read16(pp_HEADING)); // HEADING @
    Push(1);
    UNK_0xe6a0(); // UNK_0xe6a0
    UNK_0xe560(); // UNK_0xe560
  } else
  {
    UNK_0xe4fa(); // UNK_0xe4fa
  }
  UNK_0xdad0(); // UNK_0xdad0
  FLY(); // FLY
}


// ================================================
// 0xf09f: WORD 'CLEANUP-MOV' codep=0x224c parp=0xf0ab params=6 returns=0
// ================================================

void CLEANUP_dash_MOV() // CLEANUP-MOV
{
  Push(pp_FORCEPTASK); // FORCEPTASK
  OFF(); // OFF
  Push(pp_FORCEKEY); // FORCEKEY
  OFF(); // OFF
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(6);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    Push(pp__10_star_END); // 10*END
    _2_at_(); // 2@
    Push(0x000a);
    U_slash_MOD(); // U/MOD
    SWAP(); // SWAP
    _0_gt_(); // 0>
    Push(Pop() + Pop()); // +
    Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
    Store_3(); // !_3
  }
  Push(0xbd4a); // probable '=CARGO'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  UNK_0xd9a8(); // UNK_0xd9a8
  CTXT_n_(); // CTXT#
  Push(Pop()==1?1:0); //  1 =
  if (Pop() != 0)
  {
    ORBUP(); // ORBUP
  }
  UNK_0xdac6(); // UNK_0xdac6
  if (Pop() != 0)
  {
    Push(0xc9ef); // probable 'DMSG'
    MODULE(); // MODULE
  }
  Push(0xc104); // probable '?SHIP-REPAIR'
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  Store_3(); // !_3
  Push(pp_IsAUTO); // ?AUTO
  ON_3(); // ON_3
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xf119: WORD 'CHK-MOV' codep=0x224c parp=0xf125 params=2 returns=1
// ================================================
// entry

void CHK_dash_MOV() // CHK-MOV
{
  Push(0);
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001a);
    Push(6);
    IFIND(); // IFIND
    Push(Pop() * Read16(0x63ef+INST_dash_QTY.offset)); //  INST-QTY<IFIELD> @ *
    Push(0x000a);
    U_star_(); // U*
    CDROP(); // CDROP
  } else
  {
    Push2Words("NULL");
  }
  _2DUP(); // 2DUP
  Push(pp__10_star_END); // 10*END
  StoreD(); // D!
  UNK_0xd9a8(); // UNK_0xd9a8
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(5);
    Push(0xbdef); // probable 'OV?.EQUIP-OK'
    MODULE(); // MODULE
    if (Pop() != 0)
    {
      CTXT_n_(); // CTXT#
      Push(1);
      Push(5);
      WITHIN(); // WITHIN
      Push(!Pop()); //  NOT
      if (Pop() != 0)
      {
        CTINIT(); // CTINIT
        SET_STR_AS_PARAM("STANDING BY TO LAUNCH");
        DrawTTY(); // .TTY
      } else
      {
        Push(Pop() + 1); //  1+
      }
    }
    return;
  }
  Push(1);
  Push(0xc9e0); // probable '.EX'
  MODULE(); // MODULE
}


// ================================================
// 0xf1b3: WORD 'UNK_0xf1b5' codep=0x224c parp=0xf1b5
// ================================================

void UNK_0xf1b5() // UNK_0xf1b5
{
  CTXT_n_(); // CTXT#
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(1);
    Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
    Store_3(); // !_3
  }
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(1);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  SET_STR_AS_PARAM("LAUNCH");
  LoadData(_1BTN); // from 'BUTTONS'
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xf1e4: WORD '+NEST' codep=0x224c parp=0xf1ee
// ================================================
// entry

void _plus_NEST() // +NEST
{
  _2DUP(); // 2DUP
  Push(pp_UNK_0xd9f0); // UNK_0xd9f0
  _1_dot_5_ex_(); // 1.5!
  NEST(); // NEST
}


// ================================================
// 0xf1f8: WORD 'COME-HITHER' codep=0x224c parp=0xf204
// ================================================
// entry

void COME_dash_HITHER() // COME-HITHER
{
  SetColor(BLUE);
  Push(pp_TCLR); // TCLR
  Store_3(); // !_3
  UNK_0xf1b5(); // UNK_0xf1b5

  label2:
  UNK_0xdafa(); // UNK_0xdafa
  Push(!Pop()); //  NOT
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  Push2Words("*ASYS");
  D_eq_(); // D=
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  CTXT_n_(); // CTXT#
  Push(2);
  _st_(); // <
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNNEST(); // UNNEST
  goto label2;

  label1:
  Push(pp_IsNEB); // ?NEB
  OFF(); // OFF
  UNK_0xdafa(); // UNK_0xdafa
  if (Pop() != 0)
  {
    Push2Words("*ASYS");
    _plus_NEST(); // +NEST
  }
  UNK_0xd998(); // UNK_0xd998
  IOPEN(); // IOPEN

  label5:
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  Push(!(Read16(0x63ef+INST_dash_QTY.offset)==3?1:0)); // INST-QTY<IFIELD> @ 3 = NOT
  if (Pop() == 0) goto label4;
  INEXT(); // INEXT
  goto label5;

  label4:
  CI(); // CI
  UNK_0xd9a8(); // UNK_0xd9a8
  _plus_NEST(); // +NEST
  Push2Words("*SHIP-CONFIG");
  _plus_NEST(); // +NEST
  SetColor(WHITE);
  Push(pp_TCLR); // TCLR
  Store_3(); // !_3
}

// 0xf266: db 0x53 0x48 0x50 0x4d 0x4f 0x56 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x49 0x58 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x36 0x2f 0x31 0x30 0x2f 0x38 0x36 0x29 0x32 0x34 0x30 0x31 0x4c 0x22 0x5d 0x17 0x5d 0xeb 0x44 0xec 0xa8 0xee 0x89 0x12 0xfa 0x15 0x2c 0x00 0xaf 0x53 0xae 0x0b 0x07 0x13 0xfa 0x15 0x0c 0x00 0x83 0x3b 0x5d 0x17 0xef 0xbd 0xce 0x84 0x32 0x0e 0x5d 0x17 0x62 0xeb 0xd3 0x7c 0x5d 0x17 0x80 0x00 0x3e 0x13 0x5d 0x17 0x62 0xeb 0xed 0x7c 0xaf 0x53 0xb7 0x6d 0x90 0x16 0x4c 0x22 0x5d 0x17 0x67 0xeb 0x44 0xec 0x90 0x16 0x4c 0x22 0x5d 0x17 0x71 0xeb 0x44 0xec 0x90 0x16 0x4c 0x22 0x5d 0x17 0x85 0xeb 0x44 0xec 0x90 0x16 0x4c 0x22 0x5d 0x17 0x7b 0xeb 0x44 0xec 0xf8 0xee 0x89 0x12 0xfa 0x15 0x08 0x00 0xbb 0xea 0xae 0x0b 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x8f 0xeb 0x44 0xec 0x90 0x16 0x0c 0xef 0x88 0x23 0x3e 0x44 0x41 0x4d 0x41 0xc7 0x4f 0x4a 0x08 0x00 0x34 0x0e 0x01 0x00 0xa2 0xf2 0x02 0x00 0xac 0xf2 0x03 0x00 0xe8 0xf2 0x04 0x00 0xf2 0xf2 0x05 0x00 0xfc 0xf2 0x06 0x00 0x1e 0xf3 0x07 0x00 0xe0 0xf0 0x08 0x00 0x06 0xf3 0x4c 0x22 0x41 0x0e 0x2e 0x0f 0xf2 0x0e 0xe7 0x0f 0xd8 0x4a 0x5d 0x17 0x0a 0x00 0x89 0x11 0x41 0x0e 0xb4 0x0d 0x92 0x0f 0x20 0x0f 0x89 0x11 0x90 0x0e 0x90 0x16 0x4c 0x22 0x88 0xec 0xfa 0x15 0x08 0x00 0x46 0xf2 0x60 0x16 0x1e 0x00 0xa1 0xeb 0xae 0x0b 0xfa 0x15 0x08 0x00 0x68 0xf2 0x60 0x16 0x10 0x00 0x5d 0x17 0x0a 0x00 0x51 0xeb 0x92 0x0c 0xc4 0x0f 0x74 0xef 0x30 0xf3 0x90 0x16 0x4c 0x22 0xc8 0x0d 0x89 0x12 0x07 0x13 0xfa 0x15 0x0a 0x00 0x56 0xf3 0x76 0xf3 0x60 0x16 0xf0 0xff 0x98 0xed 0xae 0x0b 0xfa 0x15 0x10 0x00 0x2c 0xf0 0x5d 0x17 0x12 0xc0 0xce 0x84 0x5d 0x17 0x3f 0xc0 0xce 0x84 0xf0 0xec 0x5d 0x17 0x53 0xeb 0xd3 0x7c 0x89 0x12 0xfa 0x15 0x04 0x00 0x25 0xee 0xfe 0xee 0x89 0x12 0xfa 0x15 0x04 0x00 0x44 0xee 0x90 0x16 0x4c 0x22 0x34 0xed 0x05 0x10 0xf3 0xea 0xa2 0xf3 0xc9 0x79 0x90 0x16 0x4c 0x22 0xd8 0xeb 0x6a 0x6d 0xdc 0xeb 0xac 0x6d 0x90 0x16 0x4c 0x22 0xa1 0x8b 0x17 0x85 0xe9 0x89 0x08 0xec 0x6e 0x99 0xb2 0x99 0xf2 0x0e 0x73 0x3b 0x72 0x0f 0xf2 0x0e 0x73 0x3b 0x92 0x0f 0x0f 0x62 0xae 0x0b 0x8b 0x3b 0xad 0x11 0x3d 0x0f 0xb8 0x15 0xf0 0x0d 0x50 0x0e 0x5c 0x96 0x3d 0x0f 0x5c 0x15 0xf6 0xff 0xde 0x0d 0xab 0x90 0x90 0x16 0x4c 0x22 0x02 0xf4 0x28 0xa5 0x05 0x8a 0xcf 0x8b 0xe2 0xeb 0x41 0x0e 0x8b 0x3b 0x5f 0x12 0xfa 0x15 0x18 0x00 0x32 0x0e 0x39 0x3f 0x0b 0x50 0x4c 0x41 0x53 0x4d 0x41 0x20 0x42 0x4f 0x4c 0x54 0x47 0xa5 0x60 0x16 0x17 0x00 0x39 0x3f 0x0e 0x4d 0x49 0x53 0x53 0x49 0x4c 0x45 0x20 0x43 0x4c 0x41 0x53 0x53 0x20 0x47 0xa5 0xb8 0x27 0x90 0x16 0x4c 0x22 0xf6 0xf3 0xf3 0xea 0x89 0x4f 0x02 0xf4 0x08 0xec 0x38 0xf2 0xb4 0x0d 0xf3 0x59 0xae 0x0b 0x94 0x9d 0xc8 0x0d 0xfa 0x15 0x44 0x00 0xa2 0x0e 0xf2 0x0e 0x20 0x0f 0xb8 0x15 0x41 0x0e 0xb3 0x0e 0xe8 0x9c 0x12 0x9b 0x22 0x9b 0xf2 0x79 0x1e 0x75 0x5d 0x17 0x14 0x00 0x5f 0x12 0x07 0x13 0xfa 0x15 0x18 0x00 0x27 0xeb 0x92 0x0c 0xfa 0x15 0x08 0x00 0x98 0xf1 0x60 0x16 0x06 0x00 0x32 0x0e 0xc9 0x79 0x60 0x16 0x06 0x00 0x32 0x0e 0xc9 0x79 0xd0 0x15 0xca 0xff 0x32 0x0e 0x90 0x0e 0x32 0x0e 0xc9 0x79 0x90 0x16 0x4c 0x22 0xf6 0xf3 0x38 0x4f 0x3a 0xf4 0x38 0xf2 0xf3 0xea 0xa2 0xf3 0xc9 0x79 0x90 0x16 0x4c 0x22 0xfa 0x15 0x08 0x00 0x7d 0xf4 0x60 0x16 0x04 0x00 0xe3 0xf4 0x90 0x16 0x4c 0x22 0xfa 0x15 0x08 0x00 0xea 0xf1 0x60 0x16 0x04 0x00 0xe8 0xf3 0x90 0x16 0x20 0xf2 0x89 0x44 0x4f 0x2d 0x44 0x41 0x4d 0xc1 0x4c 0x22 0xfa 0x15 0x08 0x00 0xf5 0xf4 0x60 0x16 0x04 0x00 0x05 0xf5 0x90 0x16 0x44 0x41 0x4d 0x41 0x47 0x45 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'SHPMOV-_________________________IX ---------------------6/10/86)2401L"] ] D       ,  S         ;]     2 ] b  |]   > ] b  | S m  L"] g D   L"] q D   L"]   D   L"] { D                 L"]   D      #>DAMA OJ  4                                 L"A .      J]     A             L"      F `           h `   ]   Q     t 0   L"          V v `           , ]     ] ?     ] S  |      %         D   L"4        y  L"  jm   m  L"        n     s;r   s;   b   ;  =     P \ = \         L"  (       A  ;_     2 9? PLASMA BOLTG `   9? MISSILE CLASS G  '  L"     O    8    Y        D         A       "  y u]   _       '         `   2  y`   2  y    2   2  y  L"  8O: 8      y  L"    } `       L"      `          DO-DAM L"      `       DAMAGE-_________________________----------------- '

