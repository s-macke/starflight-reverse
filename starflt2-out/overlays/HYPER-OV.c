// ====== OVERLAY 'HYPER-OV' ======
// store offset = 0xd980
// overlay size   = 0x1be0

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xd996  codep:0x224c parp:0xd996 size:0x0008 C-string:'UNK_0xd996'
//      UNK_0xd9a0  codep:0x224c parp:0xd9a0 size:0x0006 C-string:'UNK_0xd9a0'
//      UNK_0xd9a8  codep:0x224c parp:0xd9a8 size:0x0006 C-string:'UNK_0xd9a8'
//      UNK_0xd9b0  codep:0x224c parp:0xd9b0 size:0x0006 C-string:'UNK_0xd9b0'
//      UNK_0xd9b8  codep:0x224c parp:0xd9b8 size:0x0006 C-string:'UNK_0xd9b8'
//      UNK_0xd9c0  codep:0x224c parp:0xd9c0 size:0x0006 C-string:'UNK_0xd9c0'
//      UNK_0xd9c8  codep:0x224c parp:0xd9c8 size:0x0006 C-string:'UNK_0xd9c8'
//      UNK_0xd9d0  codep:0x2214 parp:0xd9d0 size:0x0002 C-string:'UNK_0xd9d0'
//      UNK_0xd9d4  codep:0x2214 parp:0xd9d4 size:0x0002 C-string:'UNK_0xd9d4'
//      UNK_0xd9d8  codep:0x2214 parp:0xd9d8 size:0x0002 C-string:'UNK_0xd9d8'
//      UNK_0xd9dc  codep:0x2214 parp:0xd9dc size:0x0002 C-string:'UNK_0xd9dc'
//      UNK_0xd9e0  codep:0x2214 parp:0xd9e0 size:0x0002 C-string:'UNK_0xd9e0'
//      UNK_0xd9e4  codep:0x2214 parp:0xd9e4 size:0x0002 C-string:'UNK_0xd9e4'
//      UNK_0xd9e8  codep:0x2214 parp:0xd9e8 size:0x0002 C-string:'UNK_0xd9e8'
//      UNK_0xd9ec  codep:0x2214 parp:0xd9ec size:0x0002 C-string:'UNK_0xd9ec'
//      UNK_0xd9f0  codep:0x2214 parp:0xd9f0 size:0x0002 C-string:'UNK_0xd9f0'
//      UNK_0xd9f4  codep:0x2214 parp:0xd9f4 size:0x0002 C-string:'UNK_0xd9f4'
//      UNK_0xd9f8  codep:0x2214 parp:0xd9f8 size:0x0002 C-string:'UNK_0xd9f8'
//      UNK_0xd9fc  codep:0x1d29 parp:0xd9fc size:0x0002 C-string:'UNK_0xd9fc'
//      UNK_0xda00  codep:0x1d29 parp:0xda00 size:0x0002 C-string:'UNK_0xda00'
//      UNK_0xda04  codep:0x1d29 parp:0xda04 size:0x0002 C-string:'UNK_0xda04'
//      UNK_0xda08  codep:0x1d29 parp:0xda08 size:0x0002 C-string:'UNK_0xda08'
//      UNK_0xda0c  codep:0x1d29 parp:0xda0c size:0x0002 C-string:'UNK_0xda0c'
//      UNK_0xda10  codep:0x1d29 parp:0xda10 size:0x0002 C-string:'UNK_0xda10'
//      UNK_0xda14  codep:0x1d29 parp:0xda14 size:0x0004 C-string:'UNK_0xda14'
//      UNK_0xda1a  codep:0x1d29 parp:0xda1a size:0x0002 C-string:'UNK_0xda1a'
//      UNK_0xda1e  codep:0x1d29 parp:0xda1e size:0x0002 C-string:'UNK_0xda1e'
//      UNK_0xda22  codep:0x1d29 parp:0xda22 size:0x0002 C-string:'UNK_0xda22'
//      UNK_0xda26  codep:0x1d29 parp:0xda26 size:0x0002 C-string:'UNK_0xda26'
//      UNK_0xda2a  codep:0x1d29 parp:0xda2a size:0x0002 C-string:'UNK_0xda2a'
//      UNK_0xda2e  codep:0x1d29 parp:0xda2e size:0x0002 C-string:'UNK_0xda2e'
//      UNK_0xda32  codep:0x7420 parp:0xda32 size:0x0003 C-string:'UNK_0xda32'
//      UNK_0xda37  codep:0x7420 parp:0xda37 size:0x0003 C-string:'UNK_0xda37'
//      UNK_0xda3c  codep:0x7420 parp:0xda3c size:0x0003 C-string:'UNK_0xda3c'
//      UNK_0xda41  codep:0x7420 parp:0xda41 size:0x0003 C-string:'UNK_0xda41'
//      UNK_0xda46  codep:0x7420 parp:0xda46 size:0x0003 C-string:'UNK_0xda46'
//      UNK_0xda4b  codep:0x7420 parp:0xda4b size:0x0003 C-string:'UNK_0xda4b'
//      UNK_0xda50  codep:0x7420 parp:0xda50 size:0x0003 C-string:'UNK_0xda50'
//      UNK_0xda55  codep:0x7420 parp:0xda55 size:0x0003 C-string:'UNK_0xda55'
//      UNK_0xda5a  codep:0x7420 parp:0xda5a size:0x0003 C-string:'UNK_0xda5a'
//      UNK_0xda5f  codep:0x7420 parp:0xda5f size:0x0003 C-string:'UNK_0xda5f'
//      UNK_0xda64  codep:0x7420 parp:0xda64 size:0x0003 C-string:'UNK_0xda64'
//      UNK_0xda69  codep:0x7420 parp:0xda69 size:0x0003 C-string:'UNK_0xda69'
//      UNK_0xda6e  codep:0x7420 parp:0xda6e size:0x0003 C-string:'UNK_0xda6e'
//      UNK_0xda73  codep:0x7394 parp:0xda73 size:0x000b C-string:'UNK_0xda73'
//      UNK_0xda80  codep:0x7420 parp:0xda80 size:0x0003 C-string:'UNK_0xda80'
//      UNK_0xda85  codep:0x7420 parp:0xda85 size:0x0003 C-string:'UNK_0xda85'
//      UNK_0xda8a  codep:0x7420 parp:0xda8a size:0x0003 C-string:'UNK_0xda8a'
//      UNK_0xda8f  codep:0x7420 parp:0xda8f size:0x0003 C-string:'UNK_0xda8f'
//      UNK_0xda94  codep:0x224c parp:0xda94 size:0x0008 C-string:'UNK_0xda94'
//      UNK_0xda9e  codep:0x224c parp:0xda9e size:0x0008 C-string:'UNK_0xda9e'
//      UNK_0xdaa8  codep:0x224c parp:0xdaa8 size:0x000a C-string:'UNK_0xdaa8'
//      UNK_0xdab4  codep:0x224c parp:0xdab4 size:0x000a C-string:'UNK_0xdab4'
//      UNK_0xdac0  codep:0x224c parp:0xdac0 size:0x0008 C-string:'UNK_0xdac0'
//      UNK_0xdaca  codep:0x224c parp:0xdaca size:0x0006 C-string:'UNK_0xdaca'
//      UNK_0xdad2  codep:0x224c parp:0xdad2 size:0x0008 C-string:'UNK_0xdad2'
//      UNK_0xdadc  codep:0x224c parp:0xdadc size:0x000a C-string:'UNK_0xdadc'
//      UNK_0xdae8  codep:0x224c parp:0xdae8 size:0x0008 C-string:'UNK_0xdae8'
//      UNK_0xdaf2  codep:0x224c parp:0xdaf2 size:0x000c C-string:'UNK_0xdaf2'
//      UNK_0xdb00  codep:0x224c parp:0xdb00 size:0x001a C-string:'UNK_0xdb00'
//      UNK_0xdb1c  codep:0x224c parp:0xdb1c size:0x0008 C-string:'UNK_0xdb1c'
//      UNK_0xdb26  codep:0x224c parp:0xdb26 size:0x002c C-string:'UNK_0xdb26'
//      UNK_0xdb54  codep:0x224c parp:0xdb54 size:0x0028 C-string:'UNK_0xdb54'
//      UNK_0xdb7e  codep:0x224c parp:0xdb7e size:0x0063 C-string:'UNK_0xdb7e'
//      UNK_0xdbe3  codep:0x7420 parp:0xdbe3 size:0x0003 C-string:'UNK_0xdbe3'
//      UNK_0xdbe8  codep:0x7420 parp:0xdbe8 size:0x0003 C-string:'UNK_0xdbe8'
//      UNK_0xdbed  codep:0x7420 parp:0xdbed size:0x0003 C-string:'UNK_0xdbed'
//      UNK_0xdbf2  codep:0x7420 parp:0xdbf2 size:0x0003 C-string:'UNK_0xdbf2'
//      UNK_0xdbf7  codep:0x224c parp:0xdbf7 size:0x002c C-string:'UNK_0xdbf7'
//      UNK_0xdc25  codep:0x224c parp:0xdc25 size:0x001c C-string:'UNK_0xdc25'
//      UNK_0xdc43  codep:0x224c parp:0xdc43 size:0x002c C-string:'UNK_0xdc43'
//      UNK_0xdc71  codep:0x224c parp:0xdc71 size:0x0034 C-string:'UNK_0xdc71'
//            PS>C  codep:0x4b3b parp:0xdcae size:0x0018 C-string:'PS_gt_C'
//      UNK_0xdcc8  codep:0x224c parp:0xdcc8 size:0x0028 C-string:'UNK_0xdcc8'
//      UNK_0xdcf2  codep:0x224c parp:0xdcf2 size:0x003c C-string:'UNK_0xdcf2'
//      UNK_0xdd30  codep:0x224c parp:0xdd30 size:0x0026 C-string:'UNK_0xdd30'
//      UNK_0xdd58  codep:0x224c parp:0xdd58 size:0x0024 C-string:'UNK_0xdd58'
//      UNK_0xdd7e  codep:0x224c parp:0xdd7e size:0x002e C-string:'UNK_0xdd7e'
//      UNK_0xddae  codep:0x224c parp:0xddae size:0x0064 C-string:'UNK_0xddae'
//      UNK_0xde14  codep:0x224c parp:0xde14 size:0x0058 C-string:'UNK_0xde14'
//      UNK_0xde6e  codep:0x224c parp:0xde6e size:0x001a C-string:'UNK_0xde6e'
//      UNK_0xde8a  codep:0x224c parp:0xde8a size:0x0014 C-string:'UNK_0xde8a'
//      UNK_0xdea0  codep:0x224c parp:0xdea0 size:0x001e C-string:'UNK_0xdea0'
//      UNK_0xdec0  codep:0x224c parp:0xdec0 size:0x0016 C-string:'UNK_0xdec0'
//      UNK_0xded8  codep:0x224c parp:0xded8 size:0x0008 C-string:'UNK_0xded8'
//      UNK_0xdee2  codep:0x224c parp:0xdee2 size:0x0012 C-string:'UNK_0xdee2'
//      UNK_0xdef6  codep:0x224c parp:0xdef6 size:0x001c C-string:'UNK_0xdef6'
//      UNK_0xdf14  codep:0x224c parp:0xdf14 size:0x0050 C-string:'UNK_0xdf14'
//      UNK_0xdf66  codep:0x224c parp:0xdf66 size:0x0016 C-string:'UNK_0xdf66'
//             >XY  codep:0x4b3b parp:0xdf84 size:0x000c C-string:'_gt_XY'
//      UNK_0xdf92  codep:0x224c parp:0xdf92 size:0x001c C-string:'UNK_0xdf92'
//            SC>C  codep:0x4b3b parp:0xdfb7 size:0x001c C-string:'SC_gt_C'
//      UNK_0xdfd5  codep:0x224c parp:0xdfd5 size:0x0012 C-string:'UNK_0xdfd5'
//      UNK_0xdfe9  codep:0x224c parp:0xdfe9 size:0x0060 C-string:'UNK_0xdfe9'
//         .AUXSYS  codep:0x224c parp:0xe055 size:0x0060 C-string:'_dot_AUXSYS'
//      UNK_0xe0b7  codep:0x224c parp:0xe0b7 size:0x0020 C-string:'UNK_0xe0b7'
//      UNK_0xe0d9  codep:0x224c parp:0xe0d9 size:0x006e C-string:'UNK_0xe0d9'
//      UNK_0xe149  codep:0x224c parp:0xe149 size:0x000c C-string:'UNK_0xe149'
//      UNK_0xe157  codep:0x224c parp:0xe157 size:0x0022 C-string:'UNK_0xe157'
//      UNK_0xe17b  codep:0x224c parp:0xe17b size:0x000a C-string:'UNK_0xe17b'
//           RADII  codep:0x4b3b parp:0xe18f size:0x0014 C-string:'RADII'
//            IVAR  codep:0x4b3b parp:0xe1ac size:0x0014 C-string:'IVAR'
//      UNK_0xe1c2  codep:0x224c parp:0xe1c2 size:0x001e C-string:'UNK_0xe1c2'
//      UNK_0xe1e2  codep:0x224c parp:0xe1e2 size:0x0016 C-string:'UNK_0xe1e2'
//      UNK_0xe1fa  codep:0x224c parp:0xe1fa size:0x0004 C-string:'UNK_0xe1fa'
//      UNK_0xe200  codep:0x224c parp:0xe200 size:0x0008 C-string:'UNK_0xe200'
//      UNK_0xe20a  codep:0x224c parp:0xe20a size:0x0018 C-string:'UNK_0xe20a'
//          XYCASE  codep:0x4b3b parp:0xe22d size:0x000c C-string:'XYCASE'
//      UNK_0xe23b  codep:0x224c parp:0xe23b size:0x0070 C-string:'UNK_0xe23b'
//      UNK_0xe2ad  codep:0x2214 parp:0xe2ad size:0x0002 C-string:'UNK_0xe2ad'
//      UNK_0xe2b1  codep:0x2214 parp:0xe2b1 size:0x0002 C-string:'UNK_0xe2b1'
//      UNK_0xe2b5  codep:0x2214 parp:0xe2b5 size:0x0002 C-string:'UNK_0xe2b5'
//      UNK_0xe2b9  codep:0x2214 parp:0xe2b9 size:0x0002 C-string:'UNK_0xe2b9'
//      UNK_0xe2bd  codep:0x1d29 parp:0xe2bd size:0x0018 C-string:'UNK_0xe2bd'
//      UNK_0xe2d7  codep:0x224c parp:0xe2d7 size:0x002a C-string:'UNK_0xe2d7'
//      UNK_0xe303  codep:0x224c parp:0xe303 size:0x0022 C-string:'UNK_0xe303'
//      UNK_0xe327  codep:0x224c parp:0xe327 size:0x0052 C-string:'UNK_0xe327'
//      UNK_0xe37b  codep:0x224c parp:0xe37b size:0x0024 C-string:'UNK_0xe37b'
//            .MVS  codep:0x224c parp:0xe3a8 size:0x00bc C-string:'_dot_MVS'
//      UNK_0xe466  codep:0x224c parp:0xe466 size:0x003e C-string:'UNK_0xe466'
//      UNK_0xe4a6  codep:0x224c parp:0xe4a6 size:0x006e C-string:'UNK_0xe4a6'
//      UNK_0xe516  codep:0x224c parp:0xe516 size:0x000e C-string:'UNK_0xe516'
//      UNK_0xe526  codep:0x224c parp:0xe526 size:0x001c C-string:'UNK_0xe526'
//      UNK_0xe544  codep:0x224c parp:0xe544 size:0x000e C-string:'UNK_0xe544'
//      UNK_0xe554  codep:0x224c parp:0xe554 size:0x004e C-string:'UNK_0xe554'
//      UNK_0xe5a4  codep:0x224c parp:0xe5a4 size:0x006e C-string:'UNK_0xe5a4'
//      UNK_0xe614  codep:0x1d29 parp:0xe614 size:0x0010 C-string:'UNK_0xe614'
//      UNK_0xe626  codep:0x224c parp:0xe626 size:0x0012 C-string:'UNK_0xe626'
//      UNK_0xe63a  codep:0x224c parp:0xe63a size:0x001a C-string:'UNK_0xe63a'
//      UNK_0xe656  codep:0x224c parp:0xe656 size:0x001c C-string:'UNK_0xe656'
//      UNK_0xe674  codep:0x224c parp:0xe674 size:0x0024 C-string:'UNK_0xe674'
//      UNK_0xe69a  codep:0x224c parp:0xe69a size:0x0012 C-string:'UNK_0xe69a'
//      UNK_0xe6ae  codep:0x224c parp:0xe6ae size:0x002e C-string:'UNK_0xe6ae'
//      UNK_0xe6de  codep:0x224c parp:0xe6de size:0x0018 C-string:'UNK_0xe6de'
//      UNK_0xe6f8  codep:0x224c parp:0xe6f8 size:0x00b6 C-string:'UNK_0xe6f8'
//      UNK_0xe7b0  codep:0x224c parp:0xe7b0 size:0x0012 C-string:'UNK_0xe7b0'
//           USE-E  codep:0x224c parp:0xe7cc size:0x0054 C-string:'USE_dash_E'
//      UNK_0xe822  codep:0x224c parp:0xe822 size:0x001a C-string:'UNK_0xe822'
//      UNK_0xe83e  codep:0x224c parp:0xe83e size:0x0034 C-string:'UNK_0xe83e'
//      UNK_0xe874  codep:0x224c parp:0xe874 size:0x000c C-string:'UNK_0xe874'
//      UNK_0xe882  codep:0x224c parp:0xe882 size:0x0012 C-string:'UNK_0xe882'
//      UNK_0xe896  codep:0x2214 parp:0xe896 size:0x0002 C-string:'UNK_0xe896'
//          CSPEED  codep:0x4b3b parp:0xe8a3 size:0x000c C-string:'CSPEED'
//            #ACC  codep:0x1d29 parp:0xe8b8 size:0x0002 C-string:'_n_ACC'
//          KEYINC  codep:0x1d29 parp:0xe8c5 size:0x0002 C-string:'KEYINC'
//      UNK_0xe8c9  codep:0x224c parp:0xe8c9 size:0x0014 C-string:'UNK_0xe8c9'
//      UNK_0xe8df  codep:0x224c parp:0xe8df size:0x0024 C-string:'UNK_0xe8df'
//      UNK_0xe905  codep:0x224c parp:0xe905 size:0x003a C-string:'UNK_0xe905'
//      UNK_0xe941  codep:0x224c parp:0xe941 size:0x0016 C-string:'UNK_0xe941'
//      UNK_0xe959  codep:0x224c parp:0xe959 size:0x001c C-string:'UNK_0xe959'
//      UNK_0xe977  codep:0x224c parp:0xe977 size:0x0014 C-string:'UNK_0xe977'
//      UNK_0xe98d  codep:0x224c parp:0xe98d size:0x0010 C-string:'UNK_0xe98d'
//             ?~C  codep:0x4b3b parp:0xe9a5 size:0x0010 C-string:'_ask__t_C'
//      UNK_0xe9b7  codep:0x224c parp:0xe9b7 size:0x0018 C-string:'UNK_0xe9b7'
//         NEST-SE  codep:0x4b3b parp:0xe9db size:0x0014 C-string:'NEST_dash_SE'
//      UNK_0xe9f1  codep:0x224c parp:0xe9f1 size:0x002c C-string:'UNK_0xe9f1'
//            NEST  codep:0x224c parp:0xea26 size:0x006c C-string:'NEST'
//      UNK_0xea94  codep:0x224c parp:0xea94 size:0x0022 C-string:'UNK_0xea94'
//      UNK_0xeab8  codep:0x224c parp:0xeab8 size:0x0020 C-string:'UNK_0xeab8'
//      UNK_0xeada  codep:0x224c parp:0xeada size:0x0022 C-string:'UNK_0xeada'
//      UNK_0xeafe  codep:0x224c parp:0xeafe size:0x001a C-string:'UNK_0xeafe'
//      UNK_0xeb1a  codep:0x224c parp:0xeb1a size:0x0034 C-string:'UNK_0xeb1a'
//          JMPSHP  codep:0x224c parp:0xeb59 size:0x0020 C-string:'JMPSHP'
//      UNK_0xeb7b  codep:0x224c parp:0xeb7b size:0x002a C-string:'UNK_0xeb7b'
//      UNK_0xeba7  codep:0x224c parp:0xeba7 size:0x000a C-string:'UNK_0xeba7'
//         COLLIDE  codep:0x4b3b parp:0xebbd size:0x001c C-string:'COLLIDE'
//      UNK_0xebdb  codep:0x224c parp:0xebdb size:0x00a4 C-string:'UNK_0xebdb'
//      UNK_0xec81  codep:0x224c parp:0xec81 size:0x003e C-string:'UNK_0xec81'
//      UNK_0xecc1  codep:0x224c parp:0xecc1 size:0x004e C-string:'UNK_0xecc1'
//      UNK_0xed11  codep:0x224c parp:0xed11 size:0x0061 C-string:'UNK_0xed11'
//         UNNEST-  codep:0x4b3b parp:0xed7e size:0x0014 C-string:'UNNEST_dash_'
//      UNK_0xed94  codep:0x224c parp:0xed94 size:0x0022 C-string:'UNK_0xed94'
//      UNK_0xedb8  codep:0x224c parp:0xedb8 size:0x005a C-string:'UNK_0xedb8'
//      UNK_0xee14  codep:0x224c parp:0xee14 size:0x0026 C-string:'UNK_0xee14'
//          UNNEST  codep:0x224c parp:0xee45 size:0x0074 C-string:'UNNEST'
//      UNK_0xeebb  codep:0x224c parp:0xeebb size:0x0028 C-string:'UNK_0xeebb'
//         (GET-AU  codep:0x224c parp:0xeeef size:0x0012 C-string:'_ro_GET_dash_AU'
//      UNK_0xef03  codep:0x224c parp:0xef03 size:0x0030 C-string:'UNK_0xef03'
//      UNK_0xef35  codep:0x224c parp:0xef35 size:0x0026 C-string:'UNK_0xef35'
//             FLY  codep:0x224c parp:0xef63 size:0x0024 C-string:'FLY'
//      UNK_0xef89  codep:0x224c parp:0xef89 size:0x001a C-string:'UNK_0xef89'
//         SET-DES  codep:0x224c parp:0xefaf size:0x00ae C-string:'SET_dash_DES'
//         SETUP-M  codep:0x224c parp:0xf069 size:0x008e C-string:'SETUP_dash_M'
//         CLEANUP  codep:0x224c parp:0xf103 size:0x007a C-string:'CLEANUP'
//         CHK-MOV  codep:0x224c parp:0xf189 size:0x008e C-string:'CHK_dash_MOV'
//      UNK_0xf219  codep:0x224c parp:0xf219 size:0x002f C-string:'UNK_0xf219'
//           +NEST  codep:0x224c parp:0xf252 size:0x000a C-string:'_plus_NEST'
//         COME-HI  codep:0x224c parp:0xf268 size:0x0000 C-string:'COME_dash_HI'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__star_MAPSCA; // *MAPSCA
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp__ask_UF; // ?UF
extern const unsigned short int pp__ask_AF; // ?AF
extern const unsigned short int pp_TCLR; // TCLR
extern const unsigned short int pp__ask_AUTO; // ?AUTO
extern const unsigned short int pp_AVCNT; // AVCNT
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_CXSP; // CXSP
extern const unsigned short int pp_EDL; // EDL
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp__n_VESS; // #VESS
extern const unsigned short int pp__ask_3; // ?3
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp__ask_FUEL_dash_D; // ?FUEL-D
extern const unsigned short int pp__ask_G_dash_AWAR; // ?G-AWAR
extern const unsigned short int pp_GWF; // GWF
extern const unsigned short int pp_XLLDEST; // XLLDEST
extern const unsigned short int pp_YLLDEST; // YLLDEST
extern const unsigned short int pp_IGLOBAL; // IGLOBAL
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_FORCEPT; // FORCEPT
extern const unsigned short int pp__ask_PORT; // ?PORT
extern const unsigned short int pp_SKIP2NE; // SKIP2NE
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp__ask_NEB; // ?NEB
extern const unsigned short int pp_FORCEKE; // FORCEKE
extern const unsigned short int pp_SKEY; // SKEY
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_HEADING; // HEADING
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp_TIME_dash_PA; // TIME-PA
extern const unsigned short int pp__i__dot_VEHIC; // '.VEHIC
extern const unsigned short int pp__i_VEHICL; // 'VEHICL
extern const unsigned short int pp__h_CRIT; // ^CRIT
extern const unsigned short int pp__ask_SUP; // ?SUP
extern const unsigned short int pp_NLR; // NLR
extern const unsigned short int pp__ask_5; // ?5
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp_HAZE; // HAZE
extern const unsigned short int pp__ask_CALLIN; // ?CALLIN
extern const unsigned short int pp_VSTIME; // VSTIME
extern const unsigned short int pp__10_star_CARG; // 10*CARG
extern const unsigned short int pp_SENSE_dash_A; // SENSE-A
extern const unsigned short int pp__10_star_END; // 10*END
extern const unsigned short int pp_ENC_dash_TIM; // ENC-TIM
extern const unsigned short int pp_NAV_dash_TIM; // NAV-TIM
extern const unsigned short int pp_XWLD_c_XP; // XWLD:XP
extern const unsigned short int pp_YWLD_c_YP; // YWLD:YP
extern const unsigned short int pp__ro_SYSTEM; // (SYSTEM
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp__ro_ENCOUN; // (ENCOUN
extern const unsigned short int pp__ro_SHIPBO; // (SHIPBO
extern const unsigned short int pp__ro_AORIGI; // (AORIGI
extern const unsigned short int pp_NTIME; // NTIME
void _star__slash_(); // */
void ABS(); // ABS
void M_star_(); // M*
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void D_st_(); // D<
void _dot_(); // .
void _dot_R(); // .R
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
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex__2(); // C!_2
void _ex__2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void D_ex_(); // D!
void ON_2(); // ON_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void _ex_INST_dash_S(); // !INST-S
void _at_INST_dash_C(); // @INST-C
void _at_INST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void CDROP(); // CDROP
void _ask_NULL(); // ?NULL
void _ask_CHILD(); // ?CHILD
void SET_dash_CUR(); // SET-CUR
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void _at__gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void _ask_FIRST(); // ?FIRST
void INEXT(); // INEXT
void IFIRST(); // IFIRST
void IINSERT(); // IINSERT
void IEXTRAC(); // IEXTRAC
void SELECT_dash_(); // SELECT-
void IFIND(); // IFIND
void IDELETE(); // IDELETE
void _star_CREATE(); // *CREATE
void SAVE_dash_OV(); // SAVE-OV
void _ask_CGA(); // ?CGA
void NBCLR(); // NBCLR
void _ex_COLOR(); // !COLOR
void BFILL(); // BFILL
void FILLCIR(); // FILLCIR
void _dot_ELLIPS(); // .ELLIPS
void _gt_1FONT(); // >1FONT
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void _ex_VISWIN(); // !VISWIN
void _gt_1ICONF(); // >1ICONF
void _at_ID(); // @ID
void _at_IC(); // @IC
void _at_IL(); // @IL
void _at_IH(); // @IH
void _ex_IX(); // !IX
void _ex_IY(); // !IY
void _ex_ID(); // !ID
void _ex_IC(); // !IC
void POINT_gt_I(); // POINT>I
void _dot_LOCAL_dash_(); // .LOCAL-
void _ask_ICONS_dash__1(); // ?ICONS-_1
void _ask_ICONS_dash__2(); // ?ICONS-_2
void _ask_ICON_eq_I(); // ?ICON=I
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void _gt_SND(); // >SND
void POS_dot_PXT(); // POS.PXT
void CTINIT(); // CTINIT
void _dot_TTY(); // .TTY
void _ask_MRC(); // ?MRC
void ERASE_dash_A(); // ERASE-A
void _i_KEY(); // 'KEY
void ORGIA(); // ORGIA
void ORBUP(); // ORBUP
void CONTEXT_2(); // CONTEXT_2
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void _4_star_(); // 4*
void D_plus_(); // D+
void U_star_(); // U*
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void U_st_(); // U<
void TIME(); // TIME
void _at_EXECUTE(); // @EXECUTE
void _1_dot_5_at_(); // 1.5@
void _plus__dash__at_(); // +-@
void CI(); // CI
void _gt_V(); // >V
void V_gt_(); // V>
void L_at_PIXEL(); // L@PIXEL
void LPLOT(); // LPLOT
void LXPLOT(); // LXPLOT
void _ro_XYSCAN(); // (XYSCAN


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xd9fc = 0xd9fc; // UNK_0xd9fc size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xda00 = 0xda00; // UNK_0xda00 size: 2
// {0x4b, 0x00}

const unsigned short int pp_UNK_0xda04 = 0xda04; // UNK_0xda04 size: 2
// {0x7e, 0x65}

const unsigned short int pp_UNK_0xda08 = 0xda08; // UNK_0xda08 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda0c = 0xda0c; // UNK_0xda0c size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda10 = 0xda10; // UNK_0xda10 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xda14 = 0xda14; // UNK_0xda14 size: 4
// {0x00, 0x00, 0x00, 0x62}

const unsigned short int pp_UNK_0xda1a = 0xda1a; // UNK_0xda1a size: 2
// {0x4a, 0x00}

const unsigned short int pp_UNK_0xda1e = 0xda1e; // UNK_0xda1e size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xda22 = 0xda22; // UNK_0xda22 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xda26 = 0xda26; // UNK_0xda26 size: 2
// {0x55, 0xe0}

const unsigned short int pp_UNK_0xda2a = 0xda2a; // UNK_0xda2a size: 2
// {0x02, 0x00}

const unsigned short int pp_UNK_0xda2e = 0xda2e; // UNK_0xda2e size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xe2bd = 0xe2bd; // UNK_0xe2bd size: 24
// {0x44, 0x7f, 0xf5, 0x87, 0xa5, 0xc0, 0x3c, 0xd2, 0xa5, 0x57, 0xf2, 0x7d, 0x78, 0xa7, 0xed, 0x0c, 0x90, 0x55, 0x41, 0x41, 0xa3, 0x43, 0x40, 0x22}

const unsigned short int pp_UNK_0xe614 = 0xe614; // UNK_0xe614 size: 16
// {0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0xff, 0x01, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x01, 0xff}

const unsigned short int pp__n_ACC = 0xe8b8; // #ACC size: 2
// {0x00, 0x00}

const unsigned short int pp_KEYINC = 0xe8c5; // KEYINC size: 2
// {0x00, 0x00}


const unsigned short int cc_UNK_0xd9d0 = 0xd9d0; // UNK_0xd9d0
const unsigned short int cc_UNK_0xd9d4 = 0xd9d4; // UNK_0xd9d4
const unsigned short int cc_UNK_0xd9d8 = 0xd9d8; // UNK_0xd9d8
const unsigned short int cc_UNK_0xd9dc = 0xd9dc; // UNK_0xd9dc
const unsigned short int cc_UNK_0xd9e0 = 0xd9e0; // UNK_0xd9e0
const unsigned short int cc_UNK_0xd9e4 = 0xd9e4; // UNK_0xd9e4
const unsigned short int cc_UNK_0xd9e8 = 0xd9e8; // UNK_0xd9e8
const unsigned short int cc_UNK_0xd9ec = 0xd9ec; // UNK_0xd9ec
const unsigned short int cc_UNK_0xd9f0 = 0xd9f0; // UNK_0xd9f0
const unsigned short int cc_UNK_0xd9f4 = 0xd9f4; // UNK_0xd9f4
const unsigned short int cc_UNK_0xd9f8 = 0xd9f8; // UNK_0xd9f8
const unsigned short int cc_UNK_0xe2ad = 0xe2ad; // UNK_0xe2ad
const unsigned short int cc_UNK_0xe2b1 = 0xe2b1; // UNK_0xe2b1
const unsigned short int cc_UNK_0xe2b5 = 0xe2b5; // UNK_0xe2b5
const unsigned short int cc_UNK_0xe2b9 = 0xe2b9; // UNK_0xe2b9
const unsigned short int cc_UNK_0xe896 = 0xe896; // UNK_0xe896


// 0xd992: db 0x96 0x01 '  '

// ================================================
// 0xd994: WORD 'UNK_0xd996' codep=0x224c parp=0xd996
// ================================================

void UNK_0xd996() // UNK_0xd996
{
  Push(0xca0d); // probable '!'EXT'
  MODULE(); // MODULE
}


// ================================================
// 0xd99e: WORD 'UNK_0xd9a0' codep=0x224c parp=0xd9a0
// ================================================

void UNK_0xd9a0() // UNK_0xd9a0
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xd9a6: WORD 'UNK_0xd9a8' codep=0x224c parp=0xd9a8
// ================================================

void UNK_0xd9a8() // UNK_0xd9a8
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd9ae: WORD 'UNK_0xd9b0' codep=0x224c parp=0xd9b0
// ================================================

void UNK_0xd9b0() // UNK_0xd9b0
{
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd9b6: WORD 'UNK_0xd9b8' codep=0x224c parp=0xd9b8
// ================================================

void UNK_0xd9b8() // UNK_0xd9b8
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd9be: WORD 'UNK_0xd9c0' codep=0x224c parp=0xd9c0
// ================================================

void UNK_0xd9c0() // UNK_0xd9c0
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd9c6: WORD 'UNK_0xd9c8' codep=0x224c parp=0xd9c8
// ================================================

void UNK_0xd9c8() // UNK_0xd9c8
{
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xd9ce: WORD 'UNK_0xd9d0' codep=0x2214 parp=0xd9d0
// ================================================
// 0xd9d0: db 0x03 0x00 '  '

// ================================================
// 0xd9d2: WORD 'UNK_0xd9d4' codep=0x2214 parp=0xd9d4
// ================================================
// 0xd9d4: db 0x00 0x00 '  '

// ================================================
// 0xd9d6: WORD 'UNK_0xd9d8' codep=0x2214 parp=0xd9d8
// ================================================
// 0xd9d8: db 0x4b 0x00 'K '

// ================================================
// 0xd9da: WORD 'UNK_0xd9dc' codep=0x2214 parp=0xd9dc
// ================================================
// 0xd9dc: db 0x00 0x00 '  '

// ================================================
// 0xd9de: WORD 'UNK_0xd9e0' codep=0x2214 parp=0xd9e0
// ================================================
// 0xd9e0: db 0x16 0x00 '  '

// ================================================
// 0xd9e2: WORD 'UNK_0xd9e4' codep=0x2214 parp=0xd9e4
// ================================================
// 0xd9e4: db 0x90 0x01 '  '

// ================================================
// 0xd9e6: WORD 'UNK_0xd9e8' codep=0x2214 parp=0xd9e8
// ================================================
// 0xd9e8: db 0x40 0x00 '@ '

// ================================================
// 0xd9ea: WORD 'UNK_0xd9ec' codep=0x2214 parp=0xd9ec
// ================================================
// 0xd9ec: db 0x3e 0x00 '> '

// ================================================
// 0xd9ee: WORD 'UNK_0xd9f0' codep=0x2214 parp=0xd9f0
// ================================================
// 0xd9f0: db 0x09 0x00 '  '

// ================================================
// 0xd9f2: WORD 'UNK_0xd9f4' codep=0x2214 parp=0xd9f4
// ================================================
// 0xd9f4: db 0x08 0x00 '  '

// ================================================
// 0xd9f6: WORD 'UNK_0xd9f8' codep=0x2214 parp=0xd9f8
// ================================================
// 0xd9f8: db 0x01 0x00 '  '

// ================================================
// 0xd9fa: WORD 'UNK_0xd9fc' codep=0x1d29 parp=0xd9fc
// ================================================
// 0xd9fc: db 0x00 0x00 '  '

// ================================================
// 0xd9fe: WORD 'UNK_0xda00' codep=0x1d29 parp=0xda00
// ================================================
// 0xda00: db 0x4b 0x00 'K '

// ================================================
// 0xda02: WORD 'UNK_0xda04' codep=0x1d29 parp=0xda04
// ================================================
// 0xda04: db 0x7e 0x65 '~e'

// ================================================
// 0xda06: WORD 'UNK_0xda08' codep=0x1d29 parp=0xda08
// ================================================
// 0xda08: db 0x3a 0x20 ': '

// ================================================
// 0xda0a: WORD 'UNK_0xda0c' codep=0x1d29 parp=0xda0c
// ================================================
// 0xda0c: db 0x3a 0x20 ': '

// ================================================
// 0xda0e: WORD 'UNK_0xda10' codep=0x1d29 parp=0xda10
// ================================================
// 0xda10: db 0x00 0x00 '  '

// ================================================
// 0xda12: WORD 'UNK_0xda14' codep=0x1d29 parp=0xda14
// ================================================
// 0xda14: db 0x00 0x00 0x00 0x62 '   b'

// ================================================
// 0xda18: WORD 'UNK_0xda1a' codep=0x1d29 parp=0xda1a
// ================================================
// 0xda1a: db 0x4a 0x00 'J '

// ================================================
// 0xda1c: WORD 'UNK_0xda1e' codep=0x1d29 parp=0xda1e
// ================================================
// 0xda1e: db 0x00 0x00 '  '

// ================================================
// 0xda20: WORD 'UNK_0xda22' codep=0x1d29 parp=0xda22
// ================================================
// 0xda22: db 0x3a 0x20 ': '

// ================================================
// 0xda24: WORD 'UNK_0xda26' codep=0x1d29 parp=0xda26
// ================================================
// 0xda26: db 0x55 0xe0 'U '

// ================================================
// 0xda28: WORD 'UNK_0xda2a' codep=0x1d29 parp=0xda2a
// ================================================
// 0xda2a: db 0x02 0x00 '  '

// ================================================
// 0xda2c: WORD 'UNK_0xda2e' codep=0x1d29 parp=0xda2e
// ================================================
// 0xda2e: db 0x00 0x00 '  '

// ================================================
// 0xda30: WORD 'UNK_0xda32' codep=0x7420 parp=0xda32
// ================================================
// 0xda32: db 0x14 0x25 0x02 ' % '

// ================================================
// 0xda35: WORD 'UNK_0xda37' codep=0x7420 parp=0xda37
// ================================================
// 0xda37: db 0x14 0x49 0x01 ' I '

// ================================================
// 0xda3a: WORD 'UNK_0xda3c' codep=0x7420 parp=0xda3c
// ================================================
// 0xda3c: db 0x14 0x13 0x02 '   '

// ================================================
// 0xda3f: WORD 'UNK_0xda41' codep=0x7420 parp=0xda41
// ================================================
// 0xda41: db 0x14 0x12 0x01 '   '

// ================================================
// 0xda44: WORD 'UNK_0xda46' codep=0x7420 parp=0xda46
// ================================================
// 0xda46: db 0x14 0x30 0x02 ' 0 '

// ================================================
// 0xda49: WORD 'UNK_0xda4b' codep=0x7420 parp=0xda4b
// ================================================
// 0xda4b: db 0x14 0x1a 0x01 '   '

// ================================================
// 0xda4e: WORD 'UNK_0xda50' codep=0x7420 parp=0xda50
// ================================================
// 0xda50: db 0x14 0x32 0x02 ' 2 '

// ================================================
// 0xda53: WORD 'UNK_0xda55' codep=0x7420 parp=0xda55
// ================================================
// 0xda55: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xda58: WORD 'UNK_0xda5a' codep=0x7420 parp=0xda5a
// ================================================
// 0xda5a: db 0x14 0x45 0x04 ' E '

// ================================================
// 0xda5d: WORD 'UNK_0xda5f' codep=0x7420 parp=0xda5f
// ================================================
// 0xda5f: db 0x2d 0x0b 0x02 '-  '

// ================================================
// 0xda62: WORD 'UNK_0xda64' codep=0x7420 parp=0xda64
// ================================================
// 0xda64: db 0x2d 0x11 0x02 '-  '

// ================================================
// 0xda67: WORD 'UNK_0xda69' codep=0x7420 parp=0xda69
// ================================================
// 0xda69: db 0x3d 0x1b 0x01 '=  '

// ================================================
// 0xda6c: WORD 'UNK_0xda6e' codep=0x7420 parp=0xda6e
// ================================================
// 0xda6e: db 0x17 0x11 0x01 '   '

// ================================================
// 0xda71: WORD 'UNK_0xda73' codep=0x7394 parp=0xda73
// ================================================
// 0xda73: db 0x20 0x01 0x01 0x17 0x49 0x6c 0x20 0x74 0x34 0x14 0x01 '    Il t4  '

// ================================================
// 0xda7e: WORD 'UNK_0xda80' codep=0x7420 parp=0xda80
// ================================================
// 0xda80: db 0x3d 0x1c 0x01 '=  '

// ================================================
// 0xda83: WORD 'UNK_0xda85' codep=0x7420 parp=0xda85
// ================================================
// 0xda85: db 0x3d 0x1d 0x01 '=  '

// ================================================
// 0xda88: WORD 'UNK_0xda8a' codep=0x7420 parp=0xda8a
// ================================================
// 0xda8a: db 0x3d 0x1a 0x01 '=  '

// ================================================
// 0xda8d: WORD 'UNK_0xda8f' codep=0x7420 parp=0xda8f
// ================================================
// 0xda8f: db 0x34 0x0c 0x01 '4  '

// ================================================
// 0xda92: WORD 'UNK_0xda94' codep=0x224c parp=0xda94
// ================================================

void UNK_0xda94() // UNK_0xda94
{
  Push(0x65ee); // IFIELD(INST-X)
  _2_at_(); // 2@
  SWAP(); // SWAP
}


// ================================================
// 0xda9c: WORD 'UNK_0xda9e' codep=0x224c parp=0xda9e
// ================================================

void UNK_0xda9e() // UNK_0xda9e
{
  SWAP(); // SWAP
  Push(0x65ee); // IFIELD(INST-X)
  D_ex_(); // D!
}


// ================================================
// 0xdaa6: WORD 'UNK_0xdaa8' codep=0x224c parp=0xdaa8
// ================================================

void UNK_0xdaa8() // UNK_0xdaa8
{
  Push(pp_UNK_0xda0c); // UNK_0xda0c
  _ex__2(); // !_2
  Push(pp_UNK_0xda08); // UNK_0xda08
  _ex__2(); // !_2
}


// ================================================
// 0xdab2: WORD 'UNK_0xdab4' codep=0x224c parp=0xdab4
// ================================================

void UNK_0xdab4() // UNK_0xdab4
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
}


// ================================================
// 0xdabe: WORD 'UNK_0xdac0' codep=0x224c parp=0xdac0
// ================================================

void UNK_0xdac0() // UNK_0xdac0
{
  UNK_0xd9a0(); // UNK_0xd9a0
  UNK_0xda94(); // UNK_0xda94
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdac8: WORD 'UNK_0xdaca' codep=0x224c parp=0xdaca
// ================================================

void UNK_0xdaca() // UNK_0xdaca
{
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
}


// ================================================
// 0xdad0: WORD 'UNK_0xdad2' codep=0x224c parp=0xdad2
// ================================================

void UNK_0xdad2() // UNK_0xdad2
{
  UNK_0xd9a0(); // UNK_0xd9a0
  UNK_0xda9e(); // UNK_0xda9e
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdada: WORD 'UNK_0xdadc' codep=0x224c parp=0xdadc
// ================================================

void UNK_0xdadc() // UNK_0xdadc
{
  UNK_0xd9a0(); // UNK_0xd9a0
  Push(0x662a); // IFIELD(UNK_0xda37)
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdae6: WORD 'UNK_0xdae8' codep=0x224c parp=0xdae8
// ================================================

void UNK_0xdae8() // UNK_0xdae8
{
  UNK_0xdaca(); // UNK_0xdaca
  Push(4);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xdaf0: WORD 'UNK_0xdaf2' codep=0x224c parp=0xdaf2
// ================================================

void UNK_0xdaf2() // UNK_0xdaf2
{
  UNK_0xdab4(); // UNK_0xdab4
  Push(pp_UNK_0xda1e); // UNK_0xda1e
  _ex__2(); // !_2
  Push(pp_UNK_0xda1a); // UNK_0xda1a
  _ex__2(); // !_2
}


// ================================================
// 0xdafe: WORD 'UNK_0xdb00' codep=0x224c parp=0xdb00
// ================================================

void UNK_0xdb00() // UNK_0xdb00
{
  _at_INST_dash_C(); // @INST-C
  Push(0x0020);
  Push((Pop()==Pop())?1:0); // =
}

// 0xdb0a: db 0x4c 0x22 0x22 0x75 0x5d 0x17 0x18 0x00 0x5f 0x12 0xfe 0xda 0x3e 0x13 0x90 0x16 'L""u]   _   >   '

// ================================================
// 0xdb1a: WORD 'UNK_0xdb1c' codep=0x224c parp=0xdb1c
// ================================================

void UNK_0xdb1c() // UNK_0xdb1c
{
  UNK_0xdaca(); // UNK_0xdaca
  Push(3);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xdb24: WORD 'UNK_0xdb26' codep=0x224c parp=0xdb26
// ================================================

void UNK_0xdb26() // UNK_0xdb26
{
  Push(pp_UNK_0xda14); // UNK_0xda14
  _at__gt_C_plus_S(); // @>C+S
  CI(); // CI
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _1_dot_5_ex__2(); // 1.5!_2
  IOPEN(); // IOPEN
  Push(0x0020);
  Push(0);
  IFIND(); // IFIND
  Pop(); // DROP
  CI(); // CI
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_ex__2(); // 1.5!_2
  UNK_0xd9c8(); // UNK_0xd9c8
  Push(pp_GWF); // GWF
  _099(); // 099
  Push(pp__ask_G_dash_AWAR); // ?G-AWAR
  _099(); // 099
  Push(pp__ask_FUEL_dash_D); // ?FUEL-D
  _099(); // 099
}


// ================================================
// 0xdb52: WORD 'UNK_0xdb54' codep=0x224c parp=0xdb54
// ================================================

void UNK_0xdb54() // UNK_0xdb54
{
  Push(pp__ask_PORT); // ?PORT
  _099(); // 099
  Push(pp_UNK_0xda10); // UNK_0xda10
  _099(); // 099
  UNK_0xd9b0(); // UNK_0xd9b0
  UNK_0xda94(); // UNK_0xda94
  UNK_0xdaa8(); // UNK_0xdaa8
  ICLOSE(); // ICLOSE
  Push(0xc59a); // probable 'DEPART'
  MODULE(); // MODULE
  Push2Words("NULL");
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_ex__2(); // 1.5!_2
  Push2Words("NULL");
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp_UNK_0xda10); // UNK_0xda10
  _099(); // 099
}


// ================================================
// 0xdb7c: WORD 'UNK_0xdb7e' codep=0x224c parp=0xdb7e
// ================================================

void UNK_0xdb7e() // UNK_0xdb7e
{
  unsigned short int a;
  UNK_0xdaca(); // UNK_0xdaca
  Push(3);
  _st_(); // <
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(5);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(pp_UNK_0xda00); // UNK_0xda00
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(0x0024);
  Push(a); // I
  _star__slash_(); // */
  Push(0xffdb);
  MAX(); // MAX
  Push(0x0024);
  MIN(); // MIN
  Push(0x0078);
  Push(Pop() + Pop()); // +
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(0x0024);
  Push(a); // R>
  _star__slash_(); // */
  Push(0xffdd);
  MAX(); // MAX
  Push(0x0023);
  MIN(); // MIN
  Push(0x00a1);
  Push(Pop() + Pop()); // +
  LXPLOT(); // LXPLOT
}

// 0xdbdc: db 0x20 0x74 0x3d 0x13 0x01 ' t=  '

// ================================================
// 0xdbe1: WORD 'UNK_0xdbe3' codep=0x7420 parp=0xdbe3
// ================================================
// 0xdbe3: db 0x3d 0x14 0x01 '=  '

// ================================================
// 0xdbe6: WORD 'UNK_0xdbe8' codep=0x7420 parp=0xdbe8
// ================================================
// 0xdbe8: db 0x34 0x12 0x01 '4  '

// ================================================
// 0xdbeb: WORD 'UNK_0xdbed' codep=0x7420 parp=0xdbed
// ================================================
// 0xdbed: db 0x11 0x17 0x03 '   '

// ================================================
// 0xdbf0: WORD 'UNK_0xdbf2' codep=0x7420 parp=0xdbf2
// ================================================
// 0xdbf2: db 0x10 0x1b 0x01 '   '

// ================================================
// 0xdbf5: WORD 'UNK_0xdbf7' codep=0x224c parp=0xdbf7
// ================================================

void UNK_0xdbf7() // UNK_0xdbf7
{
  _ask_CHILD(); // ?CHILD
  if (Pop() == 0) return;
  IOPEN(); // IOPEN

  label3:
  _at_INST_dash_C(); // @INST-C
  Push(0x0019);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
    Push(0);
  } else
  {
    INEXT(); // INEXT
    _ask_FIRST(); // ?FIRST
  }
  _ask_NULL(); // ?NULL
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label3;
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdc23: WORD 'UNK_0xdc25' codep=0x224c parp=0xdc25
// ================================================

void UNK_0xdc25() // UNK_0xdc25
{
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    Push(0);
  } else
  {
    Push(0xff88);
    Push(0x0078);
    RRND(); // RRND
  }
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xdc41: WORD 'UNK_0xdc43' codep=0x224c parp=0xdc43
// ================================================

void UNK_0xdc43() // UNK_0xdc43
{
  Push(6);
  _eq_SPECIE(); // =SPECIE
  if (Pop() != 0)
  {
    Push(0);
    Push(0x07d0);
    RRND(); // RRND
    Push(0);
    Push(0x06e0);
    RRND(); // RRND
  } else
  {
    Push(0x65ee); // IFIELD(INST-X)
    Push(Read16(Pop())); // @
    UNK_0xdc25(); // UNK_0xdc25
    Push(0x65f0); // IFIELD(INST-Y)
    Push(Read16(Pop())); // @
    UNK_0xdc25(); // UNK_0xdc25
  }
  UNK_0xda9e(); // UNK_0xda9e
}


// ================================================
// 0xdc6f: WORD 'UNK_0xdc71' codep=0x224c parp=0xdc71
// ================================================

void UNK_0xdc71() // UNK_0xdc71
{
  UNK_0xd9a0(); // UNK_0xd9a0
  Push(0x65fb); // IFIELD(UNK_0xda4b)
  Push(Read8(Pop())&0xFF); // C@
  Push(7);
  Push(Pop() & Pop()); // AND
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  Push(0x6611); // IFIELD(UNK_0xda46)
  _ex__2(); // !_2
  Push(0x6613); // IFIELD(UNK_0xda50)
  Push(Read16(Pop())); // @
  Push(0x65f3); // IFIELD(UNK_0xda41)
  Push(Read8(Pop())&0xFF); // C@
  Push(7);
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(Pop()+1); // 1+
  Push(0x00fa);
  Push(Pop() * Pop()); // *
  _star__slash_(); // */
  Push(0x65f3); // IFIELD(UNK_0xda41)
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdca5: WORD 'PS>C' codep=0x4b3b parp=0xdcae
// ================================================

void PS_gt_C() // PS>C
{
  switch(Pop()) // PS>C
  {
  case 0:
    SetColor("GREY2");
    break;
  case 1:
    SetColor("VIOLET");
    break;
  case 2:
    SetColor("BLUE");
    break;
  case 3:
    SetColor("WHITE");
    break;
  case 4:
    SetColor("RED");
    break;
  default:
    SetColor("ORANGE");
    break;

  }
}

// ================================================
// 0xdcc6: WORD 'UNK_0xdcc8' codep=0x224c parp=0xdcc8
// ================================================

void UNK_0xdcc8() // UNK_0xdcc8
{
  UNK_0xdae8(); // UNK_0xdae8
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  _gt_1ICONF(); // >1ICONF
  Push(8);
  Push(0x0030);
  Push(pp_YWLD_c_YP); // YWLD:YP
  D_ex_(); // D!
  Push(8);
  Push(0x0020);
  Push(pp_XWLD_c_XP); // XWLD:XP
  D_ex_(); // D!
  Push(pp_XLLDEST); // XLLDEST
  _099(); // 099
  Push(pp_YLLDEST); // YLLDEST
  _099(); // 099
}


// ================================================
// 0xdcf0: WORD 'UNK_0xdcf2' codep=0x224c parp=0xdcf2
// ================================================

void UNK_0xdcf2() // UNK_0xdcf2
{
  Push(pp__ro_AORIGI); // (AORIGI
  _at__gt_C_plus_S(); // @>C+S
  Push(pp_EDL); // EDL
  Push(Read16(Pop())); // @
  Push(0x65f3); // IFIELD(UNK_0xdbe8)
  Push(Read8(Pop())&0xFF); // C@
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  Push(Pop()*2); // 2*
  Push(Pop()-1); // 1-
  SWAP(); // SWAP
  ABS(); // ABS
  Push(3);
  _slash_(); // /
  Push(5);
  MIN(); // MIN
  Push(Pop() * Pop()); // *
  Push(0x65f3); // IFIELD(UNK_0xdbe8)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  Push(0x0064);
  MIN(); // MIN
  Push(0);
  MAX(); // MAX
  Push(0x65f3); // IFIELD(UNK_0xdbe8)
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdd2e: WORD 'UNK_0xdd30' codep=0x224c parp=0xdd30
// ================================================

void UNK_0xdd30() // UNK_0xdd30
{
  Push(pp__ask_5); // ?5
  Push(Read16(Pop())); // @
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xd9c0(); // UNK_0xd9c0
  Push(8);
  _eq_SPECIE(); // =SPECIE
  Push(0x000b);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(1);
    Push(pp__ask_5); // ?5
    _plus__ex__2(); // +!_2
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdd56: WORD 'UNK_0xdd58' codep=0x224c parp=0xdd58
// ================================================

void UNK_0xdd58() // UNK_0xdd58
{
  _at_INST_dash_S(); // @INST-S
  Push(3);
  Push(6);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Push(3);
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(0x001e);
  MOD(); // MOD
  Push(0x000a);
  _slash_(); // /
  Push(Pop() + Pop()); // +
  _ex_INST_dash_S(); // !INST-S
}


// ================================================
// 0xdd7c: WORD 'UNK_0xdd7e' codep=0x224c parp=0xdd7e
// ================================================

void UNK_0xdd7e() // UNK_0xdd7e
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  _at__gt_C_plus_S(); // @>C+S
  Push(0x0018);
  _eq_SPECIE(); // =SPECIE
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0x002c);
    Push(0xb76b); // probable 'OV?ART'
    MODULE(); // MODULE
  } else
  {
    Push(0x0016);
    _eq_SPECIE(); // =SPECIE
    if (Pop() == 0) Push(1); else Push(0); // NOT
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xddac: WORD 'UNK_0xddae' codep=0x224c parp=0xddae
// ================================================

void UNK_0xddae() // UNK_0xddae
{
  Push(0xb79c); // probable 'RSTE'
  MODULE(); // MODULE
  Push(pp__ask_UF); // ?UF
  _099(); // 099
  UNK_0xd9c0(); // UNK_0xd9c0
  UNK_0xda94(); // UNK_0xda94
  UNK_0xdaa8(); // UNK_0xdaa8
  Push(pp_UNK_0xda10); // UNK_0xda10
  Push(Read16(Pop())); // @
  UNK_0xdd7e(); // UNK_0xdd7e
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(pp_SKIP2NE); // SKIP2NE
  _ex__2(); // !_2
  Push(pp_UNK_0xd9fc); // UNK_0xd9fc
  _ex__2(); // !_2
  UNK_0xdcf2(); // UNK_0xdcf2
  UNK_0xdbf7(); // UNK_0xdbf7
  UNK_0xdc43(); // UNK_0xdc43
  Push(0x0016);
  _eq_SPECIE(); // =SPECIE
  if (Pop() != 0)
  {
    Push(0x0016);
    ORGIA(); // ORGIA
    _at__gt_C_plus_S(); // @>C+S
    Push(0);
    Push(0x65ed); // IFIELD(UNK_0xda8f)
    C_ex__2(); // C!_2
    ICLOSE(); // ICLOSE
  }
  ICLOSE(); // ICLOSE
  Push(0xbf38); // probable '>HAIL'
  MODULE(); // MODULE
  Push2Words("NULL");
  Push(pp__ro_AORIGI); // (AORIGI
  _1_dot_5_ex__2(); // 1.5!_2
  Push2Words("NULL");
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_ex__2(); // 1.5!_2
  UNK_0xdc71(); // UNK_0xdc71
  Push(pp_NLR); // NLR
  _099(); // 099
  Push2Words("NULL");
  Push(pp_NTIME); // NTIME
  D_ex_(); // D!
}


// ================================================
// 0xde12: WORD 'UNK_0xde14' codep=0x224c parp=0xde14
// ================================================

void UNK_0xde14() // UNK_0xde14
{
  Push(pp_UNK_0xda14); // UNK_0xda14
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_ENCOUN); // (ENCOUN
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  if (Pop() != 0)
  {
    Push(0x3a48); // probable 'NOP'
    Push(pp_UNK_0xda26); // UNK_0xda26
    _ex__2(); // !_2
  }
  UNK_0xdd30(); // UNK_0xdd30
  UNK_0xdd58(); // UNK_0xdd58
  Push(pp_AVCNT); // AVCNT
  _099(); // 099
  Push(0);
  Push(0x65f5); // IFIELD(UNK_0xdbe3)
  C_ex__2(); // C!_2
  UNK_0xd9c0(); // UNK_0xd9c0
  _at_INST_dash_S(); // @INST-S
  ORGIA(); // ORGIA
  _1_dot_5_at_(); // 1.5@
  Push(pp__n_VESS); // #VESS
  _099(); // 099
  Push(pp__ask_CALLIN); // ?CALLIN
  _099(); // 099
  Push(0xca44); // probable '+A-VESS'
  MODULE(); // MODULE
  Push(pp__ask_CALLIN); // ?CALLIN
  ON_2(); // ON_2
  ICLOSE(); // ICLOSE
  Push(pp__h_CRIT); // ^CRIT
  _099(); // 099
  Push(1);
  Push(0xbed7); // probable 'OVINIT-_2'
  MODULE(); // MODULE
  Push(0xc83c); // probable 'C&C'
  MODULE(); // MODULE
}


// ================================================
// 0xde6c: WORD 'UNK_0xde6e' codep=0x224c parp=0xde6e
// ================================================

void UNK_0xde6e() // UNK_0xde6e
{
  Push(pp_TIME_dash_PA); // TIME-PA
  _099(); // 099
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(pp__ask_PORT); // ?PORT
  _ex__2(); // !_2
  Push(2);
  UNK_0xdadc(); // UNK_0xdadc
  Push(2);
  Push(pp_HEADING); // HEADING
  _ex__2(); // !_2
}


// ================================================
// 0xde88: WORD 'UNK_0xde8a' codep=0x224c parp=0xde8a
// ================================================

void UNK_0xde8a() // UNK_0xde8a
{
  Push(pp_TIME_dash_PA); // TIME-PA
  ON_2(); // ON_2
  Push(2);
  UNK_0xdadc(); // UNK_0xdadc
  Push(2);
  Push(pp_HEADING); // HEADING
  _ex__2(); // !_2
  Push2Words("NULL");
  UNK_0xdaa8(); // UNK_0xdaa8
}


// ================================================
// 0xde9e: WORD 'UNK_0xdea0' codep=0x224c parp=0xdea0
// ================================================

void UNK_0xdea0() // UNK_0xdea0
{
  UNK_0xd9b8(); // UNK_0xd9b8
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(0x0018);
  _at_INST_dash_S(); // @INST-S
  IOPEN(); // IOPEN
  Push(1);
  _star_CREATE(); // *CREATE
  Push(0x65ec); // IFIELD(INST-QT)
  _ex__2(); // !_2
  Push2Words("NULL");
  UNK_0xda9e(); // UNK_0xda9e
  UNK_0xd9c8(); // UNK_0xd9c8
}


// ================================================
// 0xdebe: WORD 'UNK_0xdec0' codep=0x224c parp=0xdec0
// ================================================

void UNK_0xdec0() // UNK_0xdec0
{
  UNK_0xd9b8(); // UNK_0xd9b8
  IOPEN(); // IOPEN
  Push(0x0018);
  Push(0);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
  }
  UNK_0xd9c8(); // UNK_0xd9c8
}


// ================================================
// 0xded6: WORD 'UNK_0xded8' codep=0x224c parp=0xded8
// ================================================

void UNK_0xded8() // UNK_0xded8
{
  Push(0xc9a3); // probable 'ORB>'
  MODULE(); // MODULE
}


// ================================================
// 0xdee0: WORD 'UNK_0xdee2' codep=0x224c parp=0xdee2
// ================================================

void UNK_0xdee2() // UNK_0xdee2
{
  Push(0xc9b2); // probable '>ORB'
  MODULE(); // MODULE
}

// 0xdeea: db 0x4c 0x22 0xb6 0xd9 0x92 0xda 0xdf 0x79 0x90 0x16 'L"     y  '

// ================================================
// 0xdef4: WORD 'UNK_0xdef6' codep=0x224c parp=0xdef6
// ================================================

void UNK_0xdef6() // UNK_0xdef6
{
  Push(Read16(cc_UNK_0xd9e4)); // UNK_0xd9e4
  Push(5);
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(-Pop()); // NEGATE
  SWAP(); // SWAP
  _2DUP(); // 2DUP
  RRND(); // RRND
  Push(0x65ee); // IFIELD(INST-X)
  _ex__2(); // !_2
  RRND(); // RRND
  Push(0x65f0); // IFIELD(INST-Y)
  _ex__2(); // !_2
}


// ================================================
// 0xdf12: WORD 'UNK_0xdf14' codep=0x224c parp=0xdf14
// ================================================

void UNK_0xdf14() // UNK_0xdf14
{
  unsigned short int a;
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(4);
  Push(Pop() * Pop()); // *
  Push(Pop()+2); // 2+
  a = Pop(); // >R
  Push(a); // I
  Push(-Pop()); // NEGATE
  Push(a); // I
  Push(Pop()+1); // 1+
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(Read16(cc_UNK_0xd9e4)); // UNK_0xd9e4
  Push(0x0024);
  _star__slash_(); // */
  Push(0x65ee); // IFIELD(INST-X)
  _ex__2(); // !_2
  Push(a); // I
  Push(a); // R>
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(0);
  SQRT(); // SQRT
  Push(0);
  Push(2);
  RRND(); // RRND
  Push(Pop()*2); // 2*
  Push(Pop()-1); // 1-
  Push(Pop() * Pop()); // *
  Push(Read16(cc_UNK_0xd9e4)); // UNK_0xd9e4
  Push(0x0024);
  _star__slash_(); // */
  Push(0x65f0); // IFIELD(INST-Y)
  _ex__2(); // !_2
}


// ================================================
// 0xdf64: WORD 'UNK_0xdf66' codep=0x224c parp=0xdf66
// ================================================

void UNK_0xdf66() // UNK_0xdf66
{
  IOPEN(); // IOPEN
  UNK_0xdb00(); // UNK_0xdb00
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    UNK_0xdf14(); // UNK_0xdf14
    return;
  }
  Push2Words("NULL");
  UNK_0xda9e(); // UNK_0xda9e
}


// ================================================
// 0xdf7c: WORD '>XY' codep=0x4b3b parp=0xdf84
// ================================================

void _gt_XY() // >XY
{
  switch(Pop()) // >XY
  {
  case 11:
    UNK_0xdf66(); // UNK_0xdf66
    break;
  case 61:
    UNK_0xdef6(); // UNK_0xdef6
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xdf90: WORD 'UNK_0xdf92' codep=0x224c parp=0xdf92
// ================================================

void UNK_0xdf92() // UNK_0xdf92
{
  UNK_0xd9b8(); // UNK_0xd9b8
  _ask_CHILD(); // ?CHILD
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN

  label2:
  _at_INST_dash_C(); // @INST-C
  _gt_XY(); // >XY case
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label2;
  ICLOSE(); // ICLOSE

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdfae: WORD 'SC>C' codep=0x4b3b parp=0xdfb7
// ================================================

void SC_gt_C() // SC>C
{
  switch(Pop()) // SC>C
  {
  case 77:
    SetColor("RED");
    break;
  case 75:
    SetColor("ORANGE");
    break;
  case 71:
    SetColor("YELLOW");
    break;
  case 70:
    SetColor("WHITE");
    break;
  case 65:
    SetColor("GREEN");
    break;
  case 66:
    SetColor("BLUE");
    break;
  default:
    SetColor("LT-BLUE");
    break;

  }
}

// ================================================
// 0xdfd3: WORD 'UNK_0xdfd5' codep=0x224c parp=0xdfd5
// ================================================

void UNK_0xdfd5() // UNK_0xdfd5
{
  SC_gt_C(); // SC>C case
  _ex_COLOR(); // !COLOR
  Push(0x0078);
  Push(0x00a1);
  Push(3);
  FILLCIR(); // FILLCIR
}


// ================================================
// 0xdfe7: WORD 'UNK_0xdfe9' codep=0x224c parp=0xdfe9
// ================================================

void UNK_0xdfe9() // UNK_0xdfe9
{

  label4:
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  Push((Pop()==Pop())?1:0); // =
  IOPEN(); // IOPEN
  UNK_0xdb00(); // UNK_0xdb00
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    LoadData("UNK_0xda73"); // from 'PLANET      '
    Push(Read8(Pop())&0xFF); // C@
    PS_gt_C(); // PS>C case
    _ex_COLOR(); // !COLOR
  }
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    INEXT(); // INEXT
    _ask_FIRST(); // ?FIRST
    Push(Pop() | Pop()); // OR
  } else
  {
    Push(0x65ee); // IFIELD(INST-X)
    Push(Read16(Pop())); // @
    Push(0x0024);
    Push(Read16(cc_UNK_0xd9e4)); // UNK_0xd9e4
    _star__slash_(); // */
    Push(0x0078);
    Push(Pop() + Pop()); // +
    Push(0x65f0); // IFIELD(INST-Y)
    Push(Read16(Pop())); // @
    Push(0x0024);
    Push(Read16(cc_UNK_0xd9e4)); // UNK_0xd9e4
    _star__slash_(); // */
    Push(0x00a1);
    Push(Pop() + Pop()); // +
    Push(2);
    FILLCIR(); // FILLCIR
    INEXT(); // INEXT
  }
  if (Pop() == 0) goto label4;
}


// ================================================
// 0xe049: WORD '.AUXSYS' codep=0x224c parp=0xe055
// ================================================
// entry

void _dot_AUXSYS() // .AUXSYS
{
  unsigned short int i, imax;
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  Push(2);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) return;
  _gt_DISPLA(); // >DISPLA
  SetColor("BLACK");
  ERASE_dash_A(); // ERASE-A
  Push(5);
  Push(pp__n_AUX); // #AUX
  _ex__2(); // !_2
  UNK_0xd9b8(); // UNK_0xd9b8
  _at_INST_dash_S(); // @INST-S
  UNK_0xdfd5(); // UNK_0xdfd5
  Push(0x65f2); // IFIELD(UNK_0xda6e)
  Push(Read8(Pop())&0xFF); // C@
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
      SetColor("GREY1");
      _ex_COLOR(); // !COLOR
      Push(0x0078);
      Push(0x00a1);
      Push(i); // I
      Push(4);
      Push(Pop() * Pop()); // *
      Push(Pop()+1); // 1+
      Push(1);
      Push(1);
      _dot_ELLIPS(); // .ELLIPS
      UNK_0xdfe9(); // UNK_0xdfe9
    }
  i++;
  } while(i<imax); // (LOOP) 0xffd6

  Pop(); // DROP
  IFIRST(); // IFIRST
  UNK_0xd9c8(); // UNK_0xd9c8
  UNK_0xdb7e(); // UNK_0xdb7e
}


// ================================================
// 0xe0b5: WORD 'UNK_0xe0b7' codep=0x224c parp=0xe0b7
// ================================================

void UNK_0xe0b7() // UNK_0xe0b7
{
  Push(pp_UNK_0xda2e); // UNK_0xda2e
  Push(Read16(Pop())); // @
  Push(pp__ask_NEB); // ?NEB
  _ex__2(); // !_2
  Push(pp_UNK_0xda14); // UNK_0xda14
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0xe055); // probable '.AUXSYS'
  Push(pp_UNK_0xda26); // UNK_0xda26
  _ex__2(); // !_2
  UNK_0xdea0(); // UNK_0xdea0
  UNK_0xdee2(); // UNK_0xdee2
  UNK_0xdf92(); // UNK_0xdf92
}


// ================================================
// 0xe0d7: WORD 'UNK_0xe0d9' codep=0x224c parp=0xe0d9
// ================================================

void UNK_0xe0d9() // UNK_0xe0d9
{
  UNK_0xd9b8(); // UNK_0xd9b8
  UNK_0xda94(); // UNK_0xda94
  UNK_0xdaa8(); // UNK_0xdaa8
  ICLOSE(); // ICLOSE
  UNK_0xded8(); // UNK_0xded8
  UNK_0xdec0(); // UNK_0xdec0
  Push2Words("NULL");
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0xc090); // probable 'OV/STA'
  MODULE(); // MODULE
  Push(0x3a48); // probable 'NOP'
  Push(pp_UNK_0xda26); // UNK_0xda26
  _ex__2(); // !_2
}

// 0xe0fb: db 0x4c 0x22 0x20 0x0f 0x7f 0x0e 0x7f 0x3b 0x3d 0x0f 0xc4 0x0f 0xe7 0x0f 0xc4 0x4b 0xf2 0x0e 0x41 0x0e 0xb3 0x0f 0x7f 0x0e 0x3d 0x0f 0x7f 0x3b 0xc4 0x0f 0x41 0x0e 0xb3 0x0f 0x92 0x0f 0x20 0x0f 0x91 0x4c 0x20 0x0f 0xf2 0x0e 0xe7 0x0f 0xc4 0x4b 0x20 0x0f 0x3d 0x0f 0xc4 0x4b 0xfa 0x15 0x04 0x00 0xc6 0x11 0xf2 0x0e 0x20 0x0f 0x3d 0x0f 0xc4 0x4b 0xfa 0x15 0x04 0x00 0xc6 0x11 0x90 0x16 'L"   ;=      K  A    = ;  A        L       K  =  K          =  K        '

// ================================================
// 0xe147: WORD 'UNK_0xe149' codep=0x224c parp=0xe149
// ================================================

void UNK_0xe149() // UNK_0xe149
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NAV_dash_TIM); // NAV-TIM
  _2_at_(); // 2@
  D_gt_(); // D>
}


// ================================================
// 0xe155: WORD 'UNK_0xe157' codep=0x224c parp=0xe157
// ================================================

void UNK_0xe157() // UNK_0xe157
{
  Push(pp_UNK_0xda04); // UNK_0xda04
  Push(Read16(Pop())); // @

  label2:
  Push(pp_CXSP); // CXSP
  Push(Read16(Pop())); // @
  OVER(); // OVER
  U_st_(); // U<
  if (Pop() == 0) goto label1;
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
  Pop(); // DROP
}

// 0xe171: db 0x4c 0x22 0xdf 0x64 0x2f 0x7a 0x90 0x16 'L" d/z  '

// ================================================
// 0xe179: WORD 'UNK_0xe17b' codep=0x224c parp=0xe17b
// ================================================

void UNK_0xe17b() // UNK_0xe17b
{
  Push(pp_CXSP); // CXSP
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda04); // UNK_0xda04
  _ex__2(); // !_2
}


// ================================================
// 0xe185: WORD 'RADII' codep=0x4b3b parp=0xe18f
// ================================================

void RADII() // RADII
{
  switch(Pop()) // RADII
  {
  case 1:
    Push(Read16(cc_UNK_0xd9dc)); // UNK_0xd9dc
    break;
  case 2:
    Push(Read16(cc_UNK_0xd9e4)); // UNK_0xd9e4
    break;
  case 4:
    Push(Read16(cc_UNK_0xd9e0)); // UNK_0xd9e0
    break;
  case 5:
    Push(Read16(cc_UNK_0xd9d4)); // UNK_0xd9d4
    break;
  default:
    Push(Read16(cc_UNK_0xd9d8)); // UNK_0xd9d8
    break;

  }
}

// ================================================
// 0xe1a3: WORD 'IVAR' codep=0x4b3b parp=0xe1ac
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
    Push(pp__ro_ENCOUN); // (ENCOUN
    break;
  default:
    Push(pp__ro_SHIPBO); // (SHIPBO
    break;

  }
}

// ================================================
// 0xe1c0: WORD 'UNK_0xe1c2' codep=0x224c parp=0xe1c2
// ================================================

void UNK_0xe1c2() // UNK_0xe1c2
{
  unsigned short int a, b;
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_S(); // @INST-S
  _at_INST_dash_C(); // @INST-C
  CONTEXT_2(); // CONTEXT_2
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
// 0xe1e0: WORD 'UNK_0xe1e2' codep=0x224c parp=0xe1e2
// ================================================

void UNK_0xe1e2() // UNK_0xe1e2
{
  unsigned short int a;
  Push(pp_UNK_0xda00); // UNK_0xda00
  _ex__2(); // !_2
  Push(pp_CONTEXT_3); // CONTEXT_3
  _ex__2(); // !_2
  a = Pop(); // >R
  _2DUP(); // 2DUP
  Push(a); // R>
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp__ro_SHIPBO); // (SHIPBO
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xe1f8: WORD 'UNK_0xe1fa' codep=0x224c parp=0xe1fa
// ================================================

void UNK_0xe1fa() // UNK_0xe1fa
{
  UNK_0xdab4(); // UNK_0xdab4
}


// ================================================
// 0xe1fe: WORD 'UNK_0xe200' codep=0x224c parp=0xe200
// ================================================

void UNK_0xe200() // UNK_0xe200
{
  UNK_0xd9b8(); // UNK_0xd9b8
  UNK_0xda94(); // UNK_0xda94
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe208: WORD 'UNK_0xe20a' codep=0x224c parp=0xe20a
// ================================================

void UNK_0xe20a() // UNK_0xe20a
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    UNK_0xe200(); // UNK_0xe200
    return;
  }
  UNK_0xd9c0(); // UNK_0xd9c0
  UNK_0xda94(); // UNK_0xda94
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe222: WORD 'XYCASE' codep=0x4b3b parp=0xe22d
// ================================================

void XYCASE() // XYCASE
{
  switch(Pop()) // XYCASE
  {
  case 3:
    UNK_0xe1fa(); // UNK_0xe1fa
    break;
  case 4:
    UNK_0xe20a(); // UNK_0xe20a
    break;
  default:
    UNK_0xe200(); // UNK_0xe200
    break;

  }
}

// ================================================
// 0xe239: WORD 'UNK_0xe23b' codep=0x224c parp=0xe23b
// ================================================

void UNK_0xe23b() // UNK_0xe23b
{
  _gt_DISPLA(); // >DISPLA
  Push(3);
  SetColor("GREY1");
  Push(0x00c6);
  Push(0x0016);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  Push(3);
  SetColor("GREY1");
  Push(0x00c6);
  Push(0x0030);
  POS_dot_PXT(); // POS.PXT
  SetColor("WHITE");
  SetColor("BLACK");
  SetColor("WHITE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  UNK_0xe149(); // UNK_0xe149
  _gt_1FONT(); // >1FONT
  if (Pop() != 0)
  {
    UNK_0xdaca(); // UNK_0xdaca
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
  Push(3);
  Push(Pop() + Pop()); // +
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  SWAP(); // SWAP
  Push(3);
  Push(Pop() + Pop()); // +
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Push(3);
  _dot_R(); // .R
  Push(0x0030);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  _dot_(); // .
}


// ================================================
// 0xe2ab: WORD 'UNK_0xe2ad' codep=0x2214 parp=0xe2ad
// ================================================
// 0xe2ad: db 0x48 0x00 'H '

// ================================================
// 0xe2af: WORD 'UNK_0xe2b1' codep=0x2214 parp=0xe2b1
// ================================================
// 0xe2b1: db 0x78 0x00 'x '

// ================================================
// 0xe2b3: WORD 'UNK_0xe2b5' codep=0x2214 parp=0xe2b5
// ================================================
// 0xe2b5: db 0xff 0x00 '  '

// ================================================
// 0xe2b7: WORD 'UNK_0xe2b9' codep=0x2214 parp=0xe2b9
// ================================================
// 0xe2b9: db 0xff 0x00 '  '

// ================================================
// 0xe2bb: WORD 'UNK_0xe2bd' codep=0x1d29 parp=0xe2bd
// ================================================
// 0xe2bd: db 0x44 0x7f 0xf5 0x87 0xa5 0xc0 0x3c 0xd2 0xa5 0x57 0xf2 0x7d 0x78 0xa7 0xed 0x0c 0x90 0x55 0x41 0x41 0xa3 0x43 0x40 0x22 'D    <  W }x    UAA C@"'

// ================================================
// 0xe2d5: WORD 'UNK_0xe2d7' codep=0x224c parp=0xe2d7
// ================================================

void UNK_0xe2d7() // UNK_0xe2d7
{
  unsigned short int i, imax;
  Push(pp_UNK_0xe2bd); // UNK_0xe2bd
  Push(0x0018);
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xe2bd); // UNK_0xe2bd
    
  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0);
    Push(Read16(cc_UNK_0xe2b5)); // UNK_0xe2b5
    RRND(); // RRND
    Push(i); // I
    C_ex__2(); // C!_2
    Push(0);
    Push(Read16(cc_UNK_0xe2b9)); // UNK_0xe2b9
    RRND(); // RRND
    Push(i); // I
    Push(Pop()+1); // 1+
    C_ex__2(); // C!_2
    Push(2);
  int step = Pop();
  i += step;
if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
} while(1); // (+LOOP) 0xffe6

}


// ================================================
// 0xe301: WORD 'UNK_0xe303' codep=0x224c parp=0xe303
// ================================================

void UNK_0xe303() // UNK_0xe303
{
  Push(Read16(cc_UNK_0xe2b9)); // UNK_0xe2b9
  MOD(); // MOD
  Push(Read16(regsp)); // DUP
  Push(0);
  Push(Read16(cc_UNK_0xe2b1)); // UNK_0xe2b1
  WITHIN(); // WITHIN
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(Read16(cc_UNK_0xe2b5)); // UNK_0xe2b5
  MOD(); // MOD
  Push(Read16(regsp)); // DUP
  Push(0);
  Push(Read16(cc_UNK_0xe2ad)); // UNK_0xe2ad
  WITHIN(); // WITHIN
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
}


// ================================================
// 0xe325: WORD 'UNK_0xe327' codep=0x224c parp=0xe327
// ================================================

void UNK_0xe327() // UNK_0xe327
{
  unsigned short int a;
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(0x01f4);
  Push(Pop() + Pop()); // +
  Push(pp_XWLD_c_XP); // XWLD:XP
  _2_at_(); // 2@
  SWAP(); // SWAP
  _star__slash_(); // */
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(0x01f4);
  Push(Pop() + Pop()); // +
  Push(pp_YWLD_c_YP); // YWLD:YP
  _2_at_(); // 2@
  SWAP(); // SWAP
  _star__slash_(); // */
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(a); // R>
  UNK_0xe303(); // UNK_0xe303
  _2DUP(); // 2DUP
  Push(Pop() * Pop()); // *
  if (Pop() != 0)
  {
    Push(Read16(cc_UNK_0xe2b1)); // UNK_0xe2b1
    _dash_(); // -
    Push(-Pop()); // NEGATE
    SWAP(); // SWAP
    Push(Read16(cc_UNK_0xe2ad)); // UNK_0xe2ad
    _dash_(); // -
    Push(-Pop()); // NEGATE
    SWAP(); // SWAP
    LPLOT(); // LPLOT
    return;
  }
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe379: WORD 'UNK_0xe37b' codep=0x224c parp=0xe37b
// ================================================

void UNK_0xe37b() // UNK_0xe37b
{
  unsigned short int i, imax;
  SetColor("GREY1");
  _ex_COLOR(); // !COLOR
  Push(pp_UNK_0xe2bd); // UNK_0xe2bd
  Push(0x0021);
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xe2bd); // UNK_0xe2bd
    
  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(Read8(Pop())&0xFF); // C@
    Push(i); // I
    Push(Pop()+1); // 1+
    Push(Read8(Pop())&0xFF); // C@
    UNK_0xe327(); // UNK_0xe327
    Push(2);
  int step = Pop();
  i += step;
if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
} while(1); // (+LOOP) 0xfff0

}


// ================================================
// 0xe39f: WORD '.MVS' codep=0x224c parp=0xe3a8
// ================================================
// entry

void _dot_MVS() // .MVS
{
  UNK_0xdae8(); // UNK_0xdae8
  UNK_0xdaca(); // UNK_0xdaca
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  _gt_MAINVI(); // >MAINVI
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  UNK_0xdaca(); // UNK_0xdaca
  Push(2);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  _ask_CGA(); // ?CGA
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    NBCLR(); // NBCLR
  } else
  {
    SetColor("BLACK");
  }
  _ex_COLOR(); // !COLOR
  BFILL(); // BFILL
  UNK_0xdaca(); // UNK_0xdaca
  Push(2);
  Push(4);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    UNK_0xe37b(); // UNK_0xe37b
  }
  ORGLIST(); // ORGLIST
  _dot_LOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}

// 0xe3f4: db 0x4c 0x22 0x88 0x9d 0x29 0x94 0x39 0x94 0xd3 0x92 0xf7 0x4f 0x9d 0x86 0xc4 0xa7 0x75 0x5a 0x16 0x6d 0x2e 0x0f 0x6a 0x5a 0x16 0x6d 0x2e 0x0f 0x5f 0x5a 0x16 0x6d 0x54 0x5a 0x65 0x6d 0x14 0x95 0x20 0xda 0xae 0x0b 0x5d 0x17 0x96 0x00 0x2d 0x12 0xf5 0x12 0xfa 0x15 0x36 0x00 0x20 0xda 0xae 0x0b 0x5d 0x17 0x96 0x00 0x92 0x0f 0x97 0x3b 0x5d 0x17 0x64 0x00 0xc4 0x0f 0xe7 0x0f 0x20 0x0f 0xb8 0x15 0xf0 0x0d 0x5d 0x17 0x0f 0x00 0xfb 0xe0 0xb3 0x0e 0x72 0x0f 0x3b 0x5a 0x16 0x6d 0x72 0x0f 0x46 0x5a 0x16 0x6d 0xbd 0x8b 0xd0 0x15 0xe6 0xff 0xde 0x0d 0xbd 0x9d 0x90 0x16 'L"  ) 9    O    uZ m. jZ m. _Z mTZem      ]   -     6     ]      ;] d           ]       r ;Z mr FZ m            '

// ================================================
// 0xe464: WORD 'UNK_0xe466' codep=0x224c parp=0xe466
// ================================================

void UNK_0xe466() // UNK_0xe466
{
  unsigned short int a, b, c;
  a = Pop(); // >R
  b = Pop(); // >R
  c = Pop(); // >R
  Push(c); // I
  Push(pp_HEADING); // HEADING
  Push(Read16(Pop())); // @
  Push((Pop()==Pop())?1:0); // =
  Push(b); // I'
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  Push(a); // J
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _gt_V(); // >V
  Push(c); // R>
  Push(b); // R>
  Push(a); // R>
  V_gt_(); // V>
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Pop(); Pop();// 2DROP
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0xe4a4: WORD 'UNK_0xe4a6' codep=0x224c parp=0xe4a6
// ================================================

void UNK_0xe4a6() // UNK_0xe4a6
{
  _2DUP(); // 2DUP
  Push(pp_YABS); // YABS
  _ex__2(); // !_2
  Push(pp_XABS); // XABS
  _ex__2(); // !_2
  _2DUP(); // 2DUP
  UNK_0xdad2(); // UNK_0xdad2
  _2DUP(); // 2DUP
  Push2Words("*SHIP");
  _ask_ICON_eq_I(); // ?ICON=I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    Push(pp_ILOCAL); // ILOCAL
    Push(Read16(Pop())); // @
    Push(Pop()-1); // 1-
  }
  POINT_gt_I(); // POINT>I
  _ex_IY(); // !IY
  _ex_IX(); // !IX
  UNK_0xdae8(); // UNK_0xdae8
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    Push(Read16(cc_UNK_0xd9f0)); // UNK_0xd9f0
    _dash_(); // -
    SWAP(); // SWAP
    Push(Read16(cc_UNK_0xd9f4)); // UNK_0xd9f4
    _dash_(); // -
    SWAP(); // SWAP
    _2SWAP(); // 2SWAP
    Push(Read16(cc_UNK_0xd9e8)); // UNK_0xd9e8
    Push(Pop() + Pop()); // +
    SWAP(); // SWAP
    Push(Read16(cc_UNK_0xd9ec)); // UNK_0xd9ec
    Push(Pop() + Pop()); // +
    SWAP(); // SWAP
    _ex_VISWIN(); // !VISWIN
  } else
  {
    Pop(); Pop();// 2DROP
  }
  UNK_0xdb1c(); // UNK_0xdb1c
  if (Pop() != 0)
  {
    UNK_0xe23b(); // UNK_0xe23b
  }
  Push(Read16(regsp)); // DUP
  Push(pp_HEADING); // HEADING
  _ex__2(); // !_2
  Push(Read16(regsp)); // DUP
  UNK_0xdadc(); // UNK_0xdadc
  Push(0x001b);
  Push(Pop() + Pop()); // +
  _ex_ID(); // !ID
}


// ================================================
// 0xe514: WORD 'UNK_0xe516' codep=0x224c parp=0xe516
// ================================================

void UNK_0xe516() // UNK_0xe516
{
  UNK_0xe466(); // UNK_0xe466
  if (Pop() == 0) return;
  UNK_0xdb7e(); // UNK_0xdb7e
  UNK_0xe4a6(); // UNK_0xe4a6
  UNK_0xdb7e(); // UNK_0xdb7e
}


// ================================================
// 0xe524: WORD 'UNK_0xe526' codep=0x224c parp=0xe526
// ================================================

void UNK_0xe526() // UNK_0xe526
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
// 0xe542: WORD 'UNK_0xe544' codep=0x224c parp=0xe544
// ================================================

void UNK_0xe544() // UNK_0xe544
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
// 0xe552: WORD 'UNK_0xe554' codep=0x224c parp=0xe554
// ================================================

void UNK_0xe554() // UNK_0xe554
{
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    Push(3);
  } else
  {
    Push(0x000c);
  }
  SWAP(); // SWAP
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    Push(9);
  } else
  {
    Push(6);
  }
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(8);
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(Pop()>>1); // 2/
    return;
  }
  Push(Read16(regsp)); // DUP
  Push(4);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(Pop()-1); // 1-
}


// ================================================
// 0xe5a2: WORD 'UNK_0xe5a4' codep=0x224c parp=0xe5a4
// ================================================

void UNK_0xe5a4() // UNK_0xe5a4
{
  unsigned short int a;
  UNK_0xe544(); // UNK_0xe544
  _2DUP(); // 2DUP
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    UNK_0xe554(); // UNK_0xe554
    a = Pop(); // >R
    Push(a); // I
    Push(1);
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) Push(1); else Push(0); // NOT
    if (Pop() != 0)
    {
      SWAP(); // SWAP
    }
    ABS(); // ABS
    SWAP(); // SWAP
    ABS(); // ABS
    SWAP(); // SWAP
    UNK_0xe526(); // UNK_0xe526
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
    Push(a); // R>
    Push(Pop()-1); // 1-
    Push(Pop()*2); // 2*
    Push(Pop() + Pop()); // +
    return;
  }
  Pop(); Pop();// 2DROP
  Push(pp_HEADING); // HEADING
  Push(Read16(Pop())); // @
}


// ================================================
// 0xe612: WORD 'UNK_0xe614' codep=0x1d29 parp=0xe614
// ================================================
// 0xe614: db 0x01 0x00 0x01 0x01 0x00 0x01 0xff 0x01 0xff 0x00 0xff 0xff 0x00 0xff 0x01 0xff '                '

// ================================================
// 0xe624: WORD 'UNK_0xe626' codep=0x224c parp=0xe626
// ================================================

void UNK_0xe626() // UNK_0xe626
{
  Push(Pop()*2); // 2*
  Push(pp_UNK_0xe614); // UNK_0xe614
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  _plus__dash__at_(); // +-@
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  _plus__dash__at_(); // +-@
}


// ================================================
// 0xe638: WORD 'UNK_0xe63a' codep=0x224c parp=0xe63a
// ================================================

void UNK_0xe63a() // UNK_0xe63a
{
  unsigned short int a, b;
  UNK_0xe626(); // UNK_0xe626
  a = Pop(); // >R
  b = Pop(); // >R
  Push(Pop()-1); // 1-
  Push(b); // R>
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(-Pop()); // NEGATE
  SWAP(); // SWAP
  Push(a); // R>
  Push(Pop() * Pop()); // *
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xe654: WORD 'UNK_0xe656' codep=0x224c parp=0xe656
// ================================================

void UNK_0xe656() // UNK_0xe656
{
  unsigned short int a, b;
  a = Pop(); // >R
  UNK_0xe626(); // UNK_0xe626
  Push(a); // I
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(a); // R>
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  b = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(b); // R>
}


// ================================================
// 0xe672: WORD 'UNK_0xe674' codep=0x224c parp=0xe674
// ================================================

void UNK_0xe674() // UNK_0xe674
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
  Push(a); // R>
  Push(Pop() + Pop()); // +
  Push(0);
  SQRT(); // SQRT
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xe698: WORD 'UNK_0xe69a' codep=0x224c parp=0xe69a
// ================================================

void UNK_0xe69a() // UNK_0xe69a
{
  UNK_0xdab4(); // UNK_0xdab4
  Push(pp_UNK_0xda1a); // UNK_0xda1a
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda1e); // UNK_0xda1e
  Push(Read16(Pop())); // @
  UNK_0xe674(); // UNK_0xe674
  Push(Read16(cc_UNK_0xd9f8)); // UNK_0xd9f8
  MIN(); // MIN
}


// ================================================
// 0xe6ac: WORD 'UNK_0xe6ae' codep=0x224c parp=0xe6ae
// ================================================

void UNK_0xe6ae() // UNK_0xe6ae
{
  unsigned short int a;
  UNK_0xdab4(); // UNK_0xdab4
  _2DUP(); // 2DUP
  Push(pp_UNK_0xda1a); // UNK_0xda1a
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda1e); // UNK_0xda1e
  Push(Read16(Pop())); // @
  UNK_0xe5a4(); // UNK_0xe5a4
  Push(Read16(regsp)); // DUP
  Push(8);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(pp_HEADING); // HEADING
    Push(Read16(Pop())); // @
  }
  a = Pop(); // >R
  Push(a); // I
  UNK_0xe69a(); // UNK_0xe69a
  UNK_0xe656(); // UNK_0xe656
  Push(a); // R>
  ROT(); // ROT
  ROT(); // ROT
}


// ================================================
// 0xe6dc: WORD 'UNK_0xe6de' codep=0x224c parp=0xe6de
// ================================================

void UNK_0xe6de() // UNK_0xe6de
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
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(a); // R>
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe6f6: WORD 'UNK_0xe6f8' codep=0x224c parp=0xe6f8
// ================================================

void UNK_0xe6f8() // UNK_0xe6f8
{
  Push(pp__10_star_CARG); // 10*CARG
  _2_at_(); // 2@
  Push(pp__dash_END); // -END
  Push(Read16(Pop())); // @
  Push(0);
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  DMIN(); // DMIN
  D_plus_(); // D+
  Push(pp__10_star_CARG); // 10*CARG
  D_ex_(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(pp__dash_END); // -END
  Push(Read16(Pop())); // @
  Push(0);
  D_dash_(); // D-
  Push2Words("NULL");
  DMAX(); // DMAX
  Push(pp__10_star_END); // 10*END
  D_ex_(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(pp__dash_END); // -END
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x01f4);
  OVER(); // OVER
  _slash_(); // /
  Push(4);
  Push(Pop() * Pop()); // *
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(5);
  ROLL(); // ROLL
  Push(0);
  D_plus_(); // D+
  UNK_0xe6de(); // UNK_0xe6de
  if (Pop() != 0)
  {
    Push(3);
    Push(0xc976); // probable '.EX'
    MODULE(); // MODULE
    return;
  }
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(pp__dash_END); // -END
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x0096);
  OVER(); // OVER
  _slash_(); // /
  _4_star_(); // 4*
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(5);
  ROLL(); // ROLL
  Push(0);
  D_plus_(); // D+
  UNK_0xe6de(); // UNK_0xe6de
  if (Pop() != 0)
  {
    Push(2);
    Push(0xc976); // probable '.EX'
    MODULE(); // MODULE
    return;
  }
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) return;
  Push(pp__ask_AUTO); // ?AUTO
  ON_2(); // ON_2
  Push(1);
  Push(0xc976); // probable '.EX'
  MODULE(); // MODULE
  Push(pp__ask_SUP); // ?SUP
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0xc636); // probable 'OV-SH'
  MODULE(); // MODULE
}


// ================================================
// 0xe7ae: WORD 'UNK_0xe7b0' codep=0x224c parp=0xe7b0
// ================================================

void UNK_0xe7b0() // UNK_0xe7b0
{
  UNK_0xdb1c(); // UNK_0xdb1c
  Push(pp__ask_AUTO); // ?AUTO
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xe6f8(); // UNK_0xe6f8
}


// ================================================
// 0xe7c2: WORD 'USE-E' codep=0x224c parp=0xe7cc
// ================================================
// entry

void USE_dash_E() // USE-E
{
  Push(pp__dash_END); // -END
  Push(Read16(Pop())); // @
  Push(0x000a);
  Push(pp__dash_END); // -END
  _ex__2(); // !_2
  UNK_0xe6f8(); // UNK_0xe6f8
  Push(pp__dash_END); // -END
  _ex__2(); // !_2
  UNK_0xd9a0(); // UNK_0xd9a0
  Push(1);
  Push(0x6624); // IFIELD(UNK_0xda55)
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
  Push2Words("*STARSH");
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
      Push(0x65ec); // IFIELD(INST-QT)
      Push(Read16(Pop())); // @
      Push(Pop()-1); // 1-
      Push(0);
      MAX(); // MAX
      Push(0x65ec); // IFIELD(INST-QT)
      _ex__2(); // !_2
    }
    CDROP(); // CDROP
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe820: WORD 'UNK_0xe822' codep=0x224c parp=0xe822
// ================================================

void UNK_0xe822() // UNK_0xe822
{
  SWAP(); // SWAP
  Push(Pop()*2); // 2*
  SWAP(); // SWAP
  L_at_PIXEL(); // L@PIXEL
  _ask_CGA(); // ?CGA
  if (Pop() != 0)
  {
    Push(2);
  } else
  {
    SetColor("DK-GREE");
  }
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xe83c: WORD 'UNK_0xe83e' codep=0x224c parp=0xe83e
// ================================================

void UNK_0xe83e() // UNK_0xe83e
{
  Push(0x0022);
  Push(0x0089);
  UNK_0xe822(); // UNK_0xe822
  Push(0x002c);
  Push(0x0089);
  UNK_0xe822(); // UNK_0xe822
  Push(Pop() + Pop()); // +
  Push(0x0022);
  Push(0x007f);
  UNK_0xe822(); // UNK_0xe822
  Push(Pop() + Pop()); // +
  Push(0x002c);
  Push(0x007f);
  UNK_0xe822(); // UNK_0xe822
  Push(Pop() + Pop()); // +
  Push(2);
  _gt_(); // >
}


// ================================================
// 0xe872: WORD 'UNK_0xe874' codep=0x224c parp=0xe874
// ================================================

void UNK_0xe874() // UNK_0xe874
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_ENC_dash_TIM); // ENC-TIM
  _2_at_(); // 2@
  D_gt_(); // D>
}


// ================================================
// 0xe880: WORD 'UNK_0xe882' codep=0x224c parp=0xe882
// ================================================

void UNK_0xe882() // UNK_0xe882
{
  Push(6);
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  Push(1);
  MAX(); // MAX
  _slash_(); // /
  Push(2);
  MAX(); // MAX
}


// ================================================
// 0xe894: WORD 'UNK_0xe896' codep=0x2214 parp=0xe896
// ================================================
// 0xe896: db 0x0c 0x00 '  '

// ================================================
// 0xe898: WORD 'CSPEED' codep=0x4b3b parp=0xe8a3
// ================================================

void CSPEED() // CSPEED
{
  switch(Pop()) // CSPEED
  {
  case 3:
    Push(1);
    break;
  case 4:
    UNK_0xe882(); // UNK_0xe882
    break;
  default:
    Push(Read16(cc_UNK_0xe896)); // UNK_0xe896
    break;

  }
}

// ================================================
// 0xe8af: WORD '#ACC' codep=0x1d29 parp=0xe8b8
// ================================================
// 0xe8b8: db 0x00 0x00 '  '

// ================================================
// 0xe8ba: WORD 'KEYINC' codep=0x1d29 parp=0xe8c5
// ================================================
// 0xe8c5: db 0x00 0x00 '  '

// ================================================
// 0xe8c7: WORD 'UNK_0xe8c9' codep=0x224c parp=0xe8c9
// ================================================

void UNK_0xe8c9() // UNK_0xe8c9
{
  Push(pp_KEYINC); // KEYINC
  _099(); // 099
  Push(pp__n_ACC); // #ACC
  _099(); // 099
  UNK_0xdaca(); // UNK_0xdaca
  CSPEED(); // CSPEED case
  Push(0xd9f8); // probable 'UNK_0xd9f8'
  _ex__2(); // !_2
}


// ================================================
// 0xe8dd: WORD 'UNK_0xe8df' codep=0x224c parp=0xe8df
// ================================================

void UNK_0xe8df() // UNK_0xe8df
{
  UNK_0xd9a0(); // UNK_0xd9a0
  Push(0x6606); // IFIELD(UNK_0xda32)
  Push(Read16(Pop())); // @
  Push(5);
  Push(Pop() * Pop()); // *
  Push(0x65f4); // IFIELD(UNK_0xda3c)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0064);
  _star__slash_(); // */
  Push(2);
  MAX(); // MAX
  Push(pp_UNK_0xda2a); // UNK_0xda2a
  _ex__2(); // !_2
  UNK_0xe8c9(); // UNK_0xe8c9
  ICLOSE(); // ICLOSE
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xe903: WORD 'UNK_0xe905' codep=0x224c parp=0xe905
// ================================================

void UNK_0xe905() // UNK_0xe905
{
  Push(pp__n_ACC); // #ACC
  Push(Read16(Pop())); // @
  Push(1);
  _st_(); // <
  UNK_0xdae8(); // UNK_0xdae8
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(pp_KEYINC); // KEYINC
    Push(Read16(Pop())); // @
    Push(Pop()+1); // 1+
    Push(Read16(cc_UNK_0xd9f8)); // UNK_0xd9f8
    MIN(); // MIN
    Push(pp_KEYINC); // KEYINC
    _ex__2(); // !_2
    Push(0x0060);
    Push(pp_UNK_0xda2a); // UNK_0xda2a
    Push(Read16(Pop())); // @
    _slash_(); // /
    Push(pp__n_ACC); // #ACC
    _ex__2(); // !_2
    return;
  }
  Push(-1);
  Push(pp__n_ACC); // #ACC
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe93f: WORD 'UNK_0xe941' codep=0x224c parp=0xe941
// ================================================

void UNK_0xe941() // UNK_0xe941
{
  Push(1);
  Push(pp_KEYINC); // KEYINC
  _ex__2(); // !_2
  Push(0x0060);
  Push(pp_UNK_0xda2a); // UNK_0xda2a
  Push(Read16(Pop())); // @
  _slash_(); // /
  Push(pp__n_ACC); // #ACC
  _ex__2(); // !_2
}


// ================================================
// 0xe957: WORD 'UNK_0xe959' codep=0x224c parp=0xe959
// ================================================

void UNK_0xe959() // UNK_0xe959
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x00fa);
  Push(pp_UNK_0xda22); // UNK_0xda22
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(0x01f4);
  U_star_(); // U*
  D_plus_(); // D+
  Push(pp_NAV_dash_TIM); // NAV-TIM
  D_ex_(); // D!
}


// ================================================
// 0xe975: WORD 'UNK_0xe977' codep=0x224c parp=0xe977
// ================================================

void UNK_0xe977() // UNK_0xe977
{
  Push(Read16(cc_UNK_0xd9d0)); // UNK_0xd9d0
  Push(5);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(Read16(cc_TRUE)); // TRUE
    return;
  }
  Push(Read16(cc_FALSE)); // FALSE
}


// ================================================
// 0xe98b: WORD 'UNK_0xe98d' codep=0x224c parp=0xe98d
// ================================================

void UNK_0xe98d() // UNK_0xe98d
{
  IOPEN(); // IOPEN
  Push(0x0018);
  Push(0);
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe99d: WORD '?~C' codep=0x4b3b parp=0xe9a5
// ================================================

void _ask__t_C() // ?~C
{
  switch(Pop()) // ?~C
  {
  case 11:
    UNK_0xe98d(); // UNK_0xe98d
    break;
  case 18:
    UNK_0xe977(); // UNK_0xe977
    break;
  case 23:
    UNK_0xe977(); // UNK_0xe977
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xe9b5: WORD 'UNK_0xe9b7' codep=0x224c parp=0xe9b7
// ================================================

void UNK_0xe9b7() // UNK_0xe9b7
{
  Push(0x65fb); // IFIELD(UNK_0xda8a)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) return;
  CI(); // CI
  Push(Pop() | Pop()); // OR
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe9cf: WORD 'NEST-SE' codep=0x4b3b parp=0xe9db
// ================================================

void NEST_dash_SE() // NEST-SE
{
  switch(Pop()) // NEST-SE
  {
  case 1:
    UNK_0xdb26(); // UNK_0xdb26
    break;
  case 2:
    UNK_0xe0b7(); // UNK_0xe0b7
    break;
  case 4:
    UNK_0xde14(); // UNK_0xde14
    break;
  case 5:
    UNK_0xde6e(); // UNK_0xde6e
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe9ef: WORD 'UNK_0xe9f1' codep=0x224c parp=0xe9f1
// ================================================

void UNK_0xe9f1() // UNK_0xe9f1
{
  unsigned short int a, b;
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(pp_HEADING); // HEADING
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda00); // UNK_0xda00
  Push(Read16(Pop())); // @
  OVER(); // OVER
  UNK_0xe63a(); // UNK_0xe63a
  _2DUP(); // 2DUP
  a = Pop(); // >R
  b = Pop(); // >R
  UNK_0xe516(); // UNK_0xe516
  Push(b); // R>
  Push(a); // R>
  Push(pp_UNK_0xda1e); // UNK_0xda1e
  _ex__2(); // !_2
  Push(pp_UNK_0xda1a); // UNK_0xda1a
  _ex__2(); // !_2
}


// ================================================
// 0xea1d: WORD 'NEST' codep=0x224c parp=0xea26
// ================================================

void NEST() // NEST
{
  Push(pp_UNK_0xd9fc); // UNK_0xd9fc
  _099(); // 099
  Push(pp__ro_SHIPBO); // (SHIPBO
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  UNK_0xd9a0(); // UNK_0xd9a0
  IEXTRAC(); // IEXTRAC
  UNK_0xe157(); // UNK_0xe157
  _2SWAP(); // 2SWAP
  _gt_C_plus_S(); // >C+S
  CI(); // CI
  IINSERT(); // IINSERT
  UNK_0xe17b(); // UNK_0xe17b
  CI(); // CI
  UNK_0xe1c2(); // UNK_0xe1c2
  UNK_0xe1e2(); // UNK_0xe1e2
  UNK_0xdaca(); // UNK_0xdaca
  Push(Read16(regsp)); // DUP
  Push(0xc968); // probable 'NSM'
  MODULE(); // MODULE
  Push(Read16(regsp)); // DUP
  UNK_0xe9f1(); // UNK_0xe9f1
  Push(Read16(regsp)); // DUP
  NEST_dash_SE(); // NEST-SE case
  Push(Read16(regsp)); // DUP
  Push(0xc994); // probable 'D-UP'
  MODULE(); // MODULE
  UNK_0xd996(); // UNK_0xd996
  UNK_0xdcc8(); // UNK_0xdcc8
  UNK_0xe2d7(); // UNK_0xe2d7
  Push(0xc95a); // probable 'NFM'
  MODULE(); // MODULE
  UNK_0xdaca(); // UNK_0xdaca
  Push(5);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    _dot_MVS(); // .MVS
  }
  UNK_0xe23b(); // UNK_0xe23b
  Push2Words("NULL");
  Push(pp_UNK_0xda14); // UNK_0xda14
  _1_dot_5_ex__2(); // 1.5!_2
  Push2Words("NULL");
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_ex__2(); // 1.5!_2
  UNK_0xe8df(); // UNK_0xe8df
  Push(pp_FORCEKE); // FORCEKE
  _099(); // 099
}


// ================================================
// 0xea92: WORD 'UNK_0xea94' codep=0x224c parp=0xea94
// ================================================

void UNK_0xea94() // UNK_0xea94
{
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  _gt_FLAG(); // >FLAG
  Push(0x65fd); // IFIELD(UNK_0xda80)
  Push(Read8(Pop())&0xFF); // C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(0x65fe); // IFIELD(UNK_0xda85)
  Push(Read8(Pop())&0xFF); // C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  UNK_0xe9b7(); // UNK_0xe9b7
}


// ================================================
// 0xeab6: WORD 'UNK_0xeab8' codep=0x224c parp=0xeab8
// ================================================

void UNK_0xeab8() // UNK_0xeab8
{
  _gt_C_plus_S(); // >C+S
  CI(); // CI
  UNK_0xe874(); // UNK_0xe874
  UNK_0xea94(); // UNK_0xea94
  Push(Pop() & Pop()); // AND
  Push(0x65fc); // IFIELD(UNK_0xda69)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    NEST(); // NEST
    return;
  }
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xead8: WORD 'UNK_0xeada' codep=0x224c parp=0xeada
// ================================================

void UNK_0xeada() // UNK_0xeada
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  _at_INST_dash_C(); // @INST-C
  Push(0x0018);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
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
// 0xeafc: WORD 'UNK_0xeafe' codep=0x224c parp=0xeafe
// ================================================

void UNK_0xeafe() // UNK_0xeafe
{
  _at_INST_dash_C(); // @INST-C
  Push(0x003d);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    UNK_0xe874(); // UNK_0xe874
    UNK_0xea94(); // UNK_0xea94
    Push(Pop() & Pop()); // AND
    return;
  }
  Push(Read16(cc_TRUE)); // TRUE
}


// ================================================
// 0xeb18: WORD 'UNK_0xeb1a' codep=0x224c parp=0xeb1a
// ================================================

void UNK_0xeb1a() // UNK_0xeb1a
{
  unsigned short int i, imax;
  Push(pp_IGLOBAL); // IGLOBAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash__2(); // ?ICONS-_2
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0);
    
  i = Pop();
  imax = Pop();
  do // (DO)
  {
    POINT_gt_I(); // POINT>I
    _at_ID(); // @ID
    Push(0x00ff);
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Push(3);
      _ex_IC(); // !IC
      _at_IL(); // @IL
      _at_IH(); // @IH
      _gt_C_plus_S(); // >C+S
      Push(1);
      _ex_INST_dash_S(); // !INST-S
      ICLOSE(); // ICLOSE
    }
  i++;
  } while(i<imax); // (LOOP) 0xffe0

}


// ================================================
// 0xeb4e: WORD 'JMPSHP' codep=0x224c parp=0xeb59
// ================================================
// entry

void JMPSHP() // JMPSHP
{
  UNK_0xe959(); // UNK_0xe959
  Push(0);
  Push(8);
  RRND(); // RRND
  Push(Read16(cc_UNK_0xd9d0)); // UNK_0xd9d0
  Push(Pop()+1); // 1+
  UNK_0xe656(); // UNK_0xe656
  UNK_0xe516(); // UNK_0xe516
  UNK_0xdab4(); // UNK_0xdab4
  UNK_0xdaa8(); // UNK_0xdaa8
  UNK_0xe83e(); // UNK_0xe83e
  Push(pp__ask_NEB); // ?NEB
  _ex__2(); // !_2
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xeb79: WORD 'UNK_0xeb7b' codep=0x224c parp=0xeb7b
// ================================================

void UNK_0xeb7b() // UNK_0xeb7b
{
  _gt_C_plus_S(); // >C+S
  UNK_0xda94(); // UNK_0xda94
  UNK_0xeb1a(); // UNK_0xeb1a
  Push(0x65ec); // IFIELD(UNK_0xda5f)
  Push(Read16(Pop())); // @
  Push(0x65f2); // IFIELD(UNK_0xda64)
  Push(Read16(Pop())); // @
  UNK_0xeb1a(); // UNK_0xeb1a
  Push(0xc548); // probable 'OVFLU'
  MODULE(); // MODULE
  Push(pp_HEADING); // HEADING
  Push(Read16(Pop())); // @
  Push(0x65ec); // IFIELD(UNK_0xda5f)
  Push(Read16(Pop())); // @
  Push(0x65f2); // IFIELD(UNK_0xda64)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  JMPSHP(); // JMPSHP
  _dot_MVS(); // .MVS
}


// ================================================
// 0xeba5: WORD 'UNK_0xeba7' codep=0x224c parp=0xeba7
// ================================================

void UNK_0xeba7() // UNK_0xeba7
{
  Pop(); Pop();// 2DROP
  Push(0xc78f); // probable 'AI'
  MODULE(); // MODULE
}


// ================================================
// 0xebb1: WORD 'COLLIDE' codep=0x4b3b parp=0xebbd
// ================================================

void COLLIDE() // COLLIDE
{
  switch(Pop()) // COLLIDE
  {
  case 11:
    UNK_0xeada(); // UNK_0xeada
    break;
  case 18:
    NEST(); // NEST
    break;
  case 23:
    NEST(); // NEST
    break;
  case 45:
    UNK_0xeb7b(); // UNK_0xeb7b
    break;
  case 61:
    UNK_0xeab8(); // UNK_0xeab8
    break;
  case 60:
    UNK_0xeba7(); // UNK_0xeba7
    break;
  default:
    Pop(); Pop();// 2DROP
    break;

  }
}

// ================================================
// 0xebd9: WORD 'UNK_0xebdb' codep=0x224c parp=0xebdb
// ================================================

void UNK_0xebdb() // UNK_0xebdb
{
  unsigned short int i, imax;
  UNK_0xdac0(); // UNK_0xdac0
  Push(Read16(cc_UNK_0xd9d0)); // UNK_0xd9d0
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash__1(); // ?ICONS-_1
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push2Words("NULL");
    Push(pp_UNK_0xda14); // UNK_0xda14
    _1_dot_5_ex__2(); // 1.5!_2
    Push(0);
      
  i = Pop();
  imax = Pop();
  do // (DO)
  {
      POINT_gt_I(); // POINT>I
      _at_IL(); // @IL
      _at_IH(); // @IH
      Push2Words("*SHIP");
      D_eq_(); // D=
      _at_ID(); // @ID
      Push(0x0033);
      Push(0x0083);
      WITHIN(); // WITHIN
      _at_IC(); // @IC
      NBCLR(); // NBCLR
      Push((Pop()==Pop())?1:0); // =
      Push(Pop() & Pop()); // AND
      Push(Pop() | Pop()); // OR
      if (Pop() == 0) Push(1); else Push(0); // NOT
      UNK_0xdaca(); // UNK_0xdaca
      Push(1);
      Push((Pop()==Pop())?1:0); // =
      if (Pop() == 0) Push(1); else Push(0); // NOT
      Push(Pop() & Pop()); // AND
      UNK_0xeafe(); // UNK_0xeafe
      Push(Pop() & Pop()); // AND
      if (Pop() != 0)
      {
        _at_IL(); // @IL
        _at_IH(); // @IH
        Push(pp_UNK_0xda14); // UNK_0xda14
        _1_dot_5_ex__2(); // 1.5!_2
      }
    i++;
  } while(i<imax); // (LOOP) 0xffc2

    Push(pp_UNK_0xda14); // UNK_0xda14
    _1_dot_5_at_(); // 1.5@
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      Push(pp_UNK_0xda14); // UNK_0xda14
      _at__gt_C_plus_S(); // @>C+S
      CI(); // CI
      _at_INST_dash_C(); // @INST-C
      Push(Read16(regsp)); // DUP
      Push(0x0019);
      Push((Pop()==Pop())?1:0); // =
      if (Pop() == 0) Push(1); else Push(0); // NOT
      if (Pop() != 0)
      {
        Push(Read16(regsp)); // DUP
        _ask__t_C(); // ?~C case
        if (Pop() != 0)
        {
          Push(0x0096);
          Push(0x0fa0);
          Push(1);
          _gt_SND(); // >SND
        }
        UNK_0xda94(); // UNK_0xda94
        UNK_0xdaa8(); // UNK_0xdaa8
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
// 0xec7f: WORD 'UNK_0xec81' codep=0x224c parp=0xec81
// ================================================

void UNK_0xec81() // UNK_0xec81
{
  Push(pp_UNK_0xda14); // UNK_0xda14
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  Push(pp_UNK_0xda10); // UNK_0xda10
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  Push(pp__ask_PORT); // ?PORT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  UNK_0xdaca(); // UNK_0xdaca
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
}

// 0xeca3: db 0x4c 0x22 0x07 0x76 0xfa 0x15 0x08 0x00 0xcf 0x51 0x60 0x16 0x0e 0x00 0x4f 0x7d 0x41 0x0e 0xfa 0x15 0x06 0x00 0x92 0xea 0xf5 0x12 0x90 0x16 'L" v     Q`   O}A           '

// ================================================
// 0xecbf: WORD 'UNK_0xecc1' codep=0x224c parp=0xecc1
// ================================================

void UNK_0xecc1() // UNK_0xecc1
{
  UNK_0xec81(); // UNK_0xec81
  if (Pop() != 0)
  {
    UNK_0xd9a8(); // UNK_0xd9a8
    IOPEN(); // IOPEN
    Push(0x003d);
    Push(0);
    Push(0xeca5);
    SELECT_dash_(); // SELECT-
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(0x65fc); // IFIELD(UNK_0xda69)
      Push(Read8(Pop())&0xFF); // C@
      Push(Read16(regsp)); // DUP
      if (Pop() != 0)
      {
        CI(); // CI
        Push(pp_UNK_0xda14); // UNK_0xda14
        _1_dot_5_ex__2(); // 1.5!_2
        Push(pp_UNK_0xda10); // UNK_0xda10
        ON_2(); // ON_2
      }
      Push(Pop() & Pop()); // AND
    }
    UNK_0xd9c8(); // UNK_0xd9c8
    Push(Pop() & Pop()); // AND
  }
  if (Pop() != 0)
  {
    Push(pp_UNK_0xda14); // UNK_0xda14
    _at__gt_C_plus_S(); // @>C+S
    CI(); // CI
    _at_INST_dash_C(); // @INST-C
    ICLOSE(); // ICLOSE
    Push(1);
    return;
  }
  Push(0);
}


// ================================================
// 0xed0f: WORD 'UNK_0xed11' codep=0x224c parp=0xed11
// ================================================

void UNK_0xed11() // UNK_0xed11
{
  UNK_0xec81(); // UNK_0xec81
  if (Pop() != 0)
  {
    Push(pp_PAST); // PAST
    Push(Read16(Pop())); // @
    if (Pop() == 0) Push(1); else Push(0); // NOT
    UNK_0xd9a8(); // UNK_0xd9a8
    IOPEN(); // IOPEN
    Push(0x000c);
    Push(0);
    IFIND(); // IFIND
    Push(Pop() & Pop()); // AND
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      CI(); // CI
      Push(pp_UNK_0xda14); // UNK_0xda14
      _1_dot_5_ex__2(); // 1.5!_2
      Push(pp_UNK_0xda10); // UNK_0xda10
      ON_2(); // ON_2
    }
    UNK_0xd9c8(); // UNK_0xd9c8
    Push(Pop() & Pop()); // AND
  }
  if (Pop() != 0)
  {
    Push2Words("*SHIP-C");
    Push(0x0012);
    Push(1);
    Push(0x003a);
    Push(pp_FILE_n_); // FILE#
    _ex__2(); // !_2
    Push(1);
    Push(pp_RECORD_n_); // RECORD#
    _ex__2(); // !_2
    UNK_0x3f09("LAUNCH");
    LoadData("1BTN"); // from 'ANALYZE-TEXT'
    SWAP(); // SWAP
    CMOVE_2(); // CMOVE_2
    SET_dash_CUR(); // SET-CUR
    return;
  }
  Push(0);
}


// ================================================
// 0xed72: WORD 'UNNEST-' codep=0x4b3b parp=0xed7e
// ================================================

void UNNEST_dash_() // UNNEST-
{
  switch(Pop()) // UNNEST-
  {
  case 1:
    UNK_0xdb54(); // UNK_0xdb54
    break;
  case 2:
    UNK_0xe0d9(); // UNK_0xe0d9
    break;
  case 4:
    UNK_0xddae(); // UNK_0xddae
    break;
  case 5:
    UNK_0xde8a(); // UNK_0xde8a
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed92: WORD 'UNK_0xed94' codep=0x224c parp=0xed94
// ================================================

void UNK_0xed94() // UNK_0xed94
{
  Push(5);
  _st_(); // <
  if (Pop() == 0) return;
  Push(pp_HEADING); // HEADING
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda08); // UNK_0xda08
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda0c); // UNK_0xda0c
  Push(Read16(Pop())); // @
  Push(3);
  PICK(); // PICK
  Push(Read16(cc_UNK_0xd9d0)); // UNK_0xd9d0
  Push(Pop()+1); // 1+
  UNK_0xe656(); // UNK_0xe656
  UNK_0xe516(); // UNK_0xe516
}


// ================================================
// 0xedb6: WORD 'UNK_0xedb8' codep=0x224c parp=0xedb8
// ================================================

void UNK_0xedb8() // UNK_0xedb8
{
  unsigned short int a, i, imax;
  UNK_0xdb1c(); // UNK_0xdb1c
  Push(pp__ask_AF); // ?AF
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(Read16(cc_FALSE)); // FALSE
    return;
  }
  _at_INST_dash_C(); // @INST-C
  Push(0x003d);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    UNK_0xdab4(); // UNK_0xdab4
    Push(pp_UNK_0xda00); // UNK_0xda00
    Push(Read16(Pop())); // @
    Push(pp_ILOCAL); // ILOCAL
    Push(Read16(Pop())); // @
    _ask_ICONS_dash__1(); // ?ICONS-_1
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
  } while(i<imax); // (LOOP) 0xfffc

    }
    Push(a); // R>
    Push(1);
    Push((Pop()==Pop())?1:0); // =
    return;
  }
  UNK_0xdab4(); // UNK_0xdab4
  ABS(); // ABS
  SWAP(); // SWAP
  ABS(); // ABS
  MAX(); // MAX
  Push(pp_UNK_0xda00); // UNK_0xda00
  Push(Read16(Pop())); // @
  _gt_(); // >
}


// ================================================
// 0xee12: WORD 'UNK_0xee14' codep=0x224c parp=0xee14
// ================================================

void UNK_0xee14() // UNK_0xee14
{
  Push(pp_UNK_0xda10); // UNK_0xda10
  Push(Read16(Pop())); // @
  Push(pp_SKIP2NE); // SKIP2NE
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  UNK_0xdaca(); // UNK_0xdaca
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  Push(pp_UNK_0xd9fc); // UNK_0xd9fc
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  Push(pp__ask_AF); // ?AF
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xee3a: WORD 'UNNEST' codep=0x224c parp=0xee45
// ================================================
// entry

void UNNEST() // UNNEST
{
  unsigned short int a;
  Push(pp__ro_SHIPBO); // (SHIPBO
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  UNK_0xd9a0(); // UNK_0xd9a0
  IEXTRAC(); // IEXTRAC
  ICLOSE(); // ICLOSE
  UNK_0xdaca(); // UNK_0xdaca
  a = Pop(); // >R
  Push(a); // I
  Push(0xc94c); // probable 'USM'
  MODULE(); // MODULE
  Push(a); // I
  UNNEST_dash_(); // UNNEST- case
  UNK_0xe157(); // UNK_0xe157
  ICLOSE(); // ICLOSE
  CI(); // CI
  IINSERT(); // IINSERT
  UNK_0xe17b(); // UNK_0xe17b
  CI(); // CI
  UNK_0xe1c2(); // UNK_0xe1c2
  UNK_0xe1e2(); // UNK_0xe1e2
  UNK_0xdcc8(); // UNK_0xdcc8
  Push(a); // I
  UNK_0xed94(); // UNK_0xed94
  UNK_0xdaf2(); // UNK_0xdaf2
  UNK_0xd996(); // UNK_0xd996
  UNK_0xdaca(); // UNK_0xdaca
  Push(0xc994); // probable 'D-UP'
  MODULE(); // MODULE
  UNK_0xe2d7(); // UNK_0xe2d7
  Push(a); // R>
  Push(0xc93e); // probable 'UFM'
  MODULE(); // MODULE
  _dot_MVS(); // .MVS
  UNK_0xe23b(); // UNK_0xe23b
  Push(pp_UNK_0xda26); // UNK_0xda26
  _at_EXECUTE(); // @EXECUTE
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Push2Words("NULL");
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp_SKIP2NE); // SKIP2NE
  _099(); // 099
  UNK_0xe8df(); // UNK_0xe8df
  Push(pp_FORCEKE); // FORCEKE
  Push(Read16(Pop())); // @
  Push(-Pop()); // NEGATE
  Push(pp_FORCEKE); // FORCEKE
  _ex__2(); // !_2
  Push2Words("NULL");
  Push(pp__ro_ENCOUN); // (ENCOUN
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xeeb9: WORD 'UNK_0xeebb' codep=0x224c parp=0xeebb
// ================================================

void UNK_0xeebb() // UNK_0xeebb
{
  UNK_0xdb1c(); // UNK_0xdb1c
  if (Pop() == 0) return;
  Push(0);
  MAX(); // MAX
  Push(0x00db);
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  Push(Pop() * Pop()); // *
  MIN(); // MIN
  SWAP(); // SWAP
  Push(0);
  MAX(); // MAX
  Push(0x00f9);
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  Push(Pop() * Pop()); // *
  MIN(); // MIN
  SWAP(); // SWAP
}


// ================================================
// 0xeee3: WORD '(GET-AU' codep=0x224c parp=0xeeef
// ================================================
// entry

void _ro_GET_dash_AU() // (GET-AU
{
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(5);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  _dot_AUXSYS(); // .AUXSYS
}


// ================================================
// 0xef01: WORD 'UNK_0xef03' codep=0x224c parp=0xef03
// ================================================

void UNK_0xef03() // UNK_0xef03
{
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    UNK_0xd9a0(); // UNK_0xd9a0
    Push(0x6626); // IFIELD(UNK_0xda5a)
    Push(Read8(Pop())&0xFF); // C@
    Push(8);
    Push(Pop() & Pop()); // AND
    _gt_FLAG(); // >FLAG
    Push(pp__ask_3); // ?3
    Push(Read16(Pop())); // @
    if (Pop() == 0) Push(1); else Push(0); // NOT
    Push(Pop() & Pop()); // AND
    ICLOSE(); // ICLOSE
  } else
  {
    Push(0);
  }
  if (Pop() == 0) return;
  Push(0xc636); // probable 'OV-SH'
  MODULE(); // MODULE
}


// ================================================
// 0xef33: WORD 'UNK_0xef35' codep=0x224c parp=0xef35
// ================================================

void UNK_0xef35() // UNK_0xef35
{
  unsigned short int a, b;
  UNK_0xedb8(); // UNK_0xedb8
  UNK_0xee14(); // UNK_0xee14
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    UNNEST(); // UNNEST
  }
  UNK_0xebdb(); // UNK_0xebdb
  a = Pop(); // >R
  UNK_0xecc1(); // UNK_0xecc1
  Push(a); // R>
  Push(Pop() | Pop()); // OR
  b = Pop(); // >R
  UNK_0xed11(); // UNK_0xed11
  Push(b); // R>
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  COLLIDE(); // COLLIDE case
}


// ================================================
// 0xef5b: WORD 'FLY' codep=0x224c parp=0xef63
// ================================================
// entry

void FLY() // FLY
{
  UNK_0xe6ae(); // UNK_0xe6ae
  UNK_0xeebb(); // UNK_0xeebb
  UNK_0xe516(); // UNK_0xe516
  UNK_0xe7b0(); // UNK_0xe7b0
  UNK_0xdb1c(); // UNK_0xdb1c
  if (Pop() != 0)
  {
    Push(pp__ask_NEB); // ?NEB
    Push(Read16(Pop())); // @
    Push(pp_UNK_0xda2e); // UNK_0xda2e
    _ex__2(); // !_2
    UNK_0xe83e(); // UNK_0xe83e
    Push(pp__ask_NEB); // ?NEB
    _ex__2(); // !_2
  }
  UNK_0xef03(); // UNK_0xef03
  _dot_MVS(); // .MVS
  UNK_0xef35(); // UNK_0xef35
}


// ================================================
// 0xef87: WORD 'UNK_0xef89' codep=0x224c parp=0xef89
// ================================================

void UNK_0xef89() // UNK_0xef89
{
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read16(cc_UNK_0xd9e4)); // UNK_0xd9e4
  Push(-Pop()); // NEGATE
  Push(0x000c);
  _dash_(); // -
  UNK_0xdb1c(); // UNK_0xdb1c
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() * Pop()); // *
  MAX(); // MAX
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
}


// ================================================
// 0xefa3: WORD 'SET-DES' codep=0x224c parp=0xefaf
// ================================================

void SET_dash_DES() // SET-DES
{
  Push(Read16(regsp)); // DUP
  Push(0x0152);
  Push((Pop()==Pop())?1:0); // =
  OVER(); // OVER
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(pp_FORCEKE); // FORCEKE
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(pp_SKEY); // SKEY
  Push(Read16(Pop())); // @
  Push(0x005b);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(pp_FORCEKE); // FORCEKE
  _ex__2(); // !_2
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(pp_SKEY); // SKEY
    Push(Read16(Pop())); // @
    Push(Read16(regsp)); // DUP
    Push(pp_LKEY); // LKEY
    _ex__2(); // !_2
  }
  _ro_XYSCAN(); // (XYSCAN case
  Push(pp_SKEY); // SKEY
  Push(Read16(Pop())); // @
  Push(0x005b);
  _gt_(); // >
  if (Pop() != 0)
  {
    UNK_0xe905(); // UNK_0xe905
  } else
  {
    UNK_0xe941(); // UNK_0xe941
  }
  Push(pp_KEYINC); // KEYINC
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(pp_XABS); // XABS
  UNK_0xef89(); // UNK_0xef89
  Push(0x00f9);
  Push(Pop() * Pop()); // *
  MIN(); // MIN
  Push(pp_UNK_0xda1a); // UNK_0xda1a
  _ex__2(); // !_2
  Push(Pop() * Pop()); // *
  Push(pp_YABS); // YABS
  UNK_0xef89(); // UNK_0xef89
  Push(0x00db);
  Push(Pop() * Pop()); // *
  MIN(); // MIN
  Push(pp_UNK_0xda1e); // UNK_0xda1e
  _ex__2(); // !_2
  Push(pp_FORCEKE); // FORCEKE
  Push(Read16(Pop())); // @
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(pp_FORCEKE); // FORCEKE
    _099(); // 099
  }
  Push(pp_FTRIG); // FTRIG
  Push(Read16(Pop())); // @
  Push2Words("NULL");
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D_eq_(); // D=
  UNK_0xdb1c(); // UNK_0xdb1c
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(pp__ask_AUTO); // ?AUTO
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    if (Pop() == 0) Push(1); else Push(0); // NOT
    _i_KEY(); // 'KEY
    Pop(); // DROP
  }
  FLY(); // FLY
}


// ================================================
// 0xf05d: WORD 'SETUP-M' codep=0x224c parp=0xf069
// ================================================

void SETUP_dash_M() // SETUP-M
{
  Push(pp_FORCEPT); // FORCEPT
  ON_2(); // ON_2
  Push(pp_FORCEKE); // FORCEKE
  _099(); // 099
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_VSTIME); // VSTIME
  D_ex_(); // D!
  Push(0xb033); // probable '?VCYCLE'
  Push(pp__i_VEHICL); // 'VEHICL
  _ex__2(); // !_2
  Push(0xc0f9); // probable '.SORD'
  Push(pp__i__dot_VEHIC); // '.VEHIC
  _ex__2(); // !_2
  Push(pp__ask_AUTO); // ?AUTO
  _099(); // 099
  UNK_0xd9a0(); // UNK_0xd9a0
  Push(0x662a); // IFIELD(UNK_0xda37)
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_HEADING); // HEADING
  _ex__2(); // !_2
  Push(0xb6ec); // probable '=CARGO'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  UNK_0xe8df(); // UNK_0xe8df
  UNK_0xdaca(); // UNK_0xdaca
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(6);
    Push(0xc94c); // probable 'USM'
    MODULE(); // MODULE
  }
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65f8); // IFIELD(UNK_0xdbed)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65fc); // IFIELD(UNK_0xdbf2)
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xda22); // UNK_0xda22
  _ex__2(); // !_2
  UNK_0xd9c8(); // UNK_0xd9c8
  UNK_0xd996(); // UNK_0xd996
  UNK_0xdcc8(); // UNK_0xdcc8
  Push(pp_HEADING); // HEADING
  Push(Read16(Pop())); // @
  UNK_0xdab4(); // UNK_0xdab4
  UNK_0xdaca(); // UNK_0xdaca
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(6);
    Push(0xc93e); // probable 'UFM'
    MODULE(); // MODULE
    Push(pp_HEADING); // HEADING
    Push(Read16(Pop())); // @
    Push(1);
    UNK_0xe656(); // UNK_0xe656
    UNK_0xe516(); // UNK_0xe516
  } else
  {
    UNK_0xe4a6(); // UNK_0xe4a6
  }
  UNK_0xdaf2(); // UNK_0xdaf2
  FLY(); // FLY
}


// ================================================
// 0xf0f7: WORD 'CLEANUP' codep=0x224c parp=0xf103
// ================================================

void CLEANUP() // CLEANUP
{
  Push(pp_FORCEPT); // FORCEPT
  _099(); // 099
  Push(pp_FORCEKE); // FORCEKE
  _099(); // 099
  Push2Words("*STARSH");
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
    Push(0x65ec); // IFIELD(INST-QT)
    _ex__2(); // !_2
  }
  Push(0xb6ec); // probable '=CARGO'
  MODULE(); // MODULE
  Push(3);
  _star_CLOSE(); // *CLOSE
  Push(pp_UNK_0xd9fc); // UNK_0xd9fc
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xdaca(); // UNK_0xdaca
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    ORBUP(); // ORBUP
  }
  Push(pp_UNK_0xd9fc); // UNK_0xd9fc
  _099(); // 099
  UNK_0xdae8(); // UNK_0xdae8
  if (Pop() != 0)
  {
    Push(0xc985); // probable 'DMSG'
    MODULE(); // MODULE
  }
  Push(0xc39d); // probable '?SHIP-R'
  Push(pp__i_VEHICL); // 'VEHICL
  _ex__2(); // !_2
  Push(pp__ask_AUTO); // ?AUTO
  ON_2(); // ON_2
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xf17d: WORD 'CHK-MOV' codep=0x224c parp=0xf189
// ================================================
// entry

void CHK_dash_MOV() // CHK-MOV
{
  Push(0);
  Push2Words("*STARSH");
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
    Push(0x65ec); // IFIELD(INST-QT)
    Push(Read16(Pop())); // @
    Push(Pop() * Pop()); // *
    Push(0x000a);
    U_star_(); // U*
    CDROP(); // CDROP
  } else
  {
    Push2Words("NULL");
  }
  _2DUP(); // 2DUP
  Push(pp__10_star_END); // 10*END
  D_ex_(); // D!
  UNK_0xd9c8(); // UNK_0xd9c8
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    Push(5);
    Push(0xb77c); // probable 'OV?.EQ'
    MODULE(); // MODULE
    if (Pop() != 0)
    {
      UNK_0xdaca(); // UNK_0xdaca
      Push(1);
      Push(5);
      WITHIN(); // WITHIN
      if (Pop() == 0) Push(1); else Push(0); // NOT
      if (Pop() != 0)
      {
        CTINIT(); // CTINIT
        UNK_0x3f09("STANDING BY TO LAUNCH");
        _dot_TTY(); // .TTY
      } else
      {
        Push(Pop()+1); // 1+
      }
    }
    return;
  }
  Push(1);
  Push(0xc976); // probable '.EX'
  MODULE(); // MODULE
}


// ================================================
// 0xf217: WORD 'UNK_0xf219' codep=0x224c parp=0xf219
// ================================================

void UNK_0xf219() // UNK_0xf219
{
  UNK_0xdaca(); // UNK_0xdaca
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    Push(1);
    Push(pp_CONTEXT_3); // CONTEXT_3
    _ex__2(); // !_2
  }
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  _ex__2(); // !_2
  Push(1);
  Push(pp_RECORD_n_); // RECORD#
  _ex__2(); // !_2
  UNK_0x3f09("LAUNCH");
  LoadData("1BTN"); // from 'ANALYZE-TEXT'
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xf248: WORD '+NEST' codep=0x224c parp=0xf252
// ================================================
// entry

void _plus_NEST() // +NEST
{
  _2DUP(); // 2DUP
  Push(pp_UNK_0xda14); // UNK_0xda14
  _1_dot_5_ex__2(); // 1.5!_2
  NEST(); // NEST
}


// ================================================
// 0xf25c: WORD 'COME-HI' codep=0x224c parp=0xf268
// ================================================
// entry

void COME_dash_HI() // COME-HI
{
  SetColor("BLUE");
  Push(pp_TCLR); // TCLR
  _ex__2(); // !_2
  UNK_0xf219(); // UNK_0xf219
  Push2Words("NULL");
  Push(pp_HAZE); // HAZE
  D_ex_(); // D!

  label2:
  UNK_0xdb1c(); // UNK_0xdb1c
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  Push2Words("*ASYS");
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  UNK_0xdaca(); // UNK_0xdaca
  Push(2);
  _st_(); // <
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNNEST(); // UNNEST
  goto label2;

  label1:
  Push(pp__ask_NEB); // ?NEB
  _099(); // 099
  UNK_0xdb1c(); // UNK_0xdb1c
  if (Pop() != 0)
  {
    Push2Words("*ASYS");
    _plus_NEST(); // +NEST
  }
  UNK_0xd9b8(); // UNK_0xd9b8
  IOPEN(); // IOPEN

  label5:
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(8);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label4;
  INEXT(); // INEXT
  goto label5;

  label4:
  CI(); // CI
  UNK_0xd9c8(); // UNK_0xd9c8
  _plus_NEST(); // +NEST
  Push2Words("*SHIP-C");
  _plus_NEST(); // +NEST
  SetColor("WHITE");
  Push(pp_TCLR); // TCLR
  _ex__2(); // !_2
}

// 0xf2d0: db 0x53 0x48 0x50 0x4d 0x4f 0x56 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x49 0x58 0x20 0x2d 0x5c 0x20 0x48 0x59 0x50 0x45 0x52 0x20 0x20 0x20 0x4f 0x56 0x52 0x2d 0x20 0x72 0x66 0x67 0x31 0x33 0x73 0x65 0x70 0x38 0x39 0x20 0x29 0x8e 0x32 0x34 0x34 0x30 0x15 0xc0 0xff 0xf2 0x5f 0xae 0x0b 0xc1 0x54 0x16 0x6d 0x8e 0xf2 0xae 0x0b 0xfa 0x15 0x08 0x00 0x09 0x59 0xae 0x0b 0xd9 0x84 0x90 0x16 0x4c 0x22 0xb3 0x54 0xae 0x0b 0x90 0x16 0x14 0x22 0x48 0x3a 0x4c 0x22 0x5d 0x17 0x81 0xae 0x90 0x16 0x30 0xef 0x85 0x40 0x27 0x45 0x58 0xd4 0x3b 0x4b 0x03 0x00 0x39 0xf3 0x02 0x00 0x31 0xf3 0x03 0x00 0x31 0xf3 0x04 0x00 0x3d 0xf3 0xb3 0xf0 0x87 0x28 0x21 0x27 0x45 0x58 0x54 0xa9 0x4c 0x22 0x2a 0x5c 0xae 0x0b 0x4b 0xf3 0xf1 0x60 0x16 0x6d 0x90 0x16 0x94 0xf2 0x87 0x2b 0x41 0x2d 0x56 0x45 0x53 0xd3 0x4c 0x22 0xcf 0x64 0x2f 0x7a 0xc1 0xe6 0x92 0x0c 0x41 0x0e 0x25 0x10 0xf2 0x0e 0xe7 0x0f 0xc4 0x4b 0x2e 0x0f 0x89 0x11 0xda 0xe6 0x92 0x0c 0x41 0x0e 0xdf 0xe6 0x92 0x0c 0xb3 0x0e 0x5d 0x17 0xff 0x00 0x46 0x12 0xb3 0x0f 0x92 0x0f 0xad 0x11 0x5d 0x17 0x14 0x00 0xe8 0x55 0xae 0x0b 0x92 0x0f 0xad 0x11 0x41 0x0e 0xe8 0x55 0x23 0x6d 0x41 0x0e 0x3b 0x59 0x23 0x6d 0x20 0x0f 0xb8 0x15 0x5d 0x17 0x19 0x00 0x20 0x0f 0x87 0x3b 0xc4 0x4b 0x02 0xe7 0x92 0x0c 0xc8 0x0d 0xfa 0x15 0xf2 0xff 0x9a 0xe7 0xd0 0x15 0xe8 0xff 0xca 0xe7 0xdf 0x79 0x4d 0x62 0xae 0x0b 0xfa 0x15 0x0e 0x00 0x5d 0x17 0x78 0xec 0x41 0x0e 0x3f 0x64 0x4c 0x6d 0x96 0x99 0x90 0x16 0x4c 0x22 0x8f 0x64 0x2f 0x7a 0x90 0x16 0x4c 0x22 0xf2 0x0e 0xbb 0x74 0x4c 0x6d 0x90 0x16 0x4c 0x22 0x22 0x75 0x41 0x0e 0x5d 0x17 0x18 0x00 0x5f 0x12 0xf2 0x0e 0x5d 0x17 0x20 0x00 0x5f 0x12 0x3e 0x13 0x90 0x16 0x20 0x74 0x17 0x11 0x01 0x29 0x1d 0x3a 0x20 0x29 0x1d 0x3a 0x20 0x4c 0x22 0xaf 0x3b 0x2e 0xf4 0xae 0x0b 0xe7 0x0f 0xb8 0x15 0x50 0x0e 0x13 0x4a 0x32 0xf4 0xae 0x0b 0xf5 0x12 0xfa 0x15 0x0a 0x00 0x50 0x0e 0x2e 0xf4 0x16 0x6d 0x4a 0x17 0xd0 0x15 0xe8 0xff 0x2e 0xf4 0xae 0x0b 0x90 0x16 0x4c 0x22 0x22 0x75 0x5d 0x17 0x20 0x00 0x5f 0x12 0xfa 0x15 0x08 0x00 0x36 0xf4 0x60 0x16 0x04 0x00 0x20 0x0f 0x5d 0x17 0x0b 0x00 0x87 0x3b 0xa9 0x81 0x2d 0x7c 0xdb 0x3f 0xa9 0x7b 0x07 0x76 0xfa 0x15 0x0c 0x00 0xb5 0x75 0xa9 0x7b 0xe2 0x7a 0x60 0x16 0x16 0x00 0x8b 0x75 0xf1 0x7b 0x8d 0x7a 0xfa 0x15 0x0a 0x00 0xc9 0x7a 0x9e 0x7e 0x60 0x16 0x04 0x00 0xc9 0x7a 0xad 0x74 0x16 0x6d 0x90 0x16 0x4c 0x22 0x3f 0x7a 0x18 0x76 0xfa 0x15 0x1c 0x00 0x2d 0x7c 0xb5 0x75 0xf1 0x7b 0xdf 0x79 0x8d 0x7a 0xfa 0x15 0x08 0x00 0xc9 0x7a 0x9e 0x7e 0xb1 0x7a 0x3f 0x7a 0x60 0x16 0xe2 0xff 0xdf 0x79 0x1e 0x7f 0x90 0x16 0x45 0xf3 0x87 0x3e 0x4f 0x52 0x42 0x49 0x54 0xd3 0x4c 0x22 0x2e 0xf4 0x65 0x6d 0xff 0xf3 0x29 0xf4 0x92 0x0c 0x32 0xf4 0x16 0x6d 0x3f 0x7a 0x5d 0x17 0x13 0xf4 0x5d 0x17 0x64 0xf4 0xa9 0x7f 0x64 0xe6 0x90 0x16 0x4c 0x22 0x22 0x75 0x5d 0x17 0x0b 0x00 0x5f 0x12 0x34 0x75 0x87 0x3b 0x5f 0x12 0xf5 0x12 0xfa 0x15 0x08 0x00 0xb0 0xf4 0x60 0x16 0x04 0x00 0xb1 0x7a 0x90 0x16 0x5f 0xf3 0x87 0x4f 0x52 0x42 0x49 0x54 0x53 0xbe 0x4c 0x22 0xff 0xf3 0x3f 0x7a 0x7a 0x7a 0x07 0x13 0xfa 0x15 0x08 0x00 0x04 0xf5 0x60 0x16 0xf4 0xff 0x18 0x76 0xfa 0x15 0x04 0x00 0x04 0xf5 0x64 0xe6 0x90 0x16 0x48 0x4d 0x49 0x53 0x43 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'SHPMOV-_________________________IX -\ HYPER   OVR- rfg13sep89 ) 2440    _   T m         Y      L" T     "H:L"]     0  @'EX ;K  9   1   1   =    (!'EXT L"*\  K  ` m     +A-VES L" d/z    A %      K.       A       ]   F       ]    U      A  U#mA ;Y#m    ]      ; K                   yMb      ] x A ?dLm    L" d/z  L"   tLm  L""uA ]   _   ]   _ >    t   ) : ) : L" ;.       P  J2         P .  mJ     .     L""u]   _     6 `     ]    ;  -| ? { v     u { z`    u { z     z ~`    z t m  L"?z v    -| u { y z     z ~ z?z`    y   E  >ORBIT L". em  )   2  m?z]   ] d  d   L""u]   _ 4u ;_         `    z  _  ORBITS L"  ?zzz        `    v      d   HMISC-VOC_________ '
  